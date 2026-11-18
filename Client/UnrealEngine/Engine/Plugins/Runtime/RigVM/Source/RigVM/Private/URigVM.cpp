// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 111

// StaticClass @ 14a071c00

UClass * __cdecl URigVM::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URigVM.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/RigVM",L"RigVM",&Z_Registration_Info_UClass_URigVM.InnerSingleton,
               StaticRegisterNativesURigVM,0x3b0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<URigVM>,InternalVTableHelperCtorCaller<URigVM>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URigVM.InnerSingleton;
}

// URigVM @ 14a07aa10

URigVM * __thiscall URigVM::URigVM(URigVM *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7URigVM__6B_;
  FRigVMMemoryStorageStruct::FRigVMMemoryStorageStruct(&this->LiteralMemoryStorage);
  FRigVMMemoryStorageStruct::FRigVMMemoryStorageStruct(&this->DefaultWorkMemoryStorage);
  FRigVMMemoryStorageStruct::FRigVMMemoryStorageStruct(&this->DefaultDebugMemoryStorage);
  (this->ExternalPropertyPathDescriptions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExternalPropertyPathDescriptions).ArrayNum = 0;
  (this->ExternalPropertyPathDescriptions).ArrayMax = 0;
  (this->ExternalPropertyPaths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExternalPropertyPaths).ArrayNum = 0;
  (this->ExternalPropertyPaths).ArrayMax = 0;
  (this->ByteCodeStorage).ByteCode.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ByteCodeStorage).ByteCode.ArrayNum = 0;
  (this->ByteCodeStorage).ByteCode.ArrayMax = 0;
  (this->ByteCodeStorage).Entries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ByteCodeStorage).Entries.ArrayNum = 0;
  (this->ByteCodeStorage).Entries.ArrayMax = 0;
  (this->ByteCodeStorage).BranchInfos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ByteCodeStorage).BranchInfos.ArrayNum = 0;
  (this->ByteCodeStorage).BranchInfos.ArrayMax = 0;
  (this->ByteCodeStorage).PredicateBranches.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ByteCodeStorage).PredicateBranches.ArrayNum = 0;
  (this->ByteCodeStorage).PredicateBranches.ArrayMax = 0;
  (this->ByteCodeStorage).PublicContextAssetPath.PackageName.ComparisonIndex = 0;
  (this->ByteCodeStorage).PublicContextAssetPath.PackageName.Number = 0;
  (this->ByteCodeStorage).PublicContextAssetPath.AssetName.ComparisonIndex = 0;
  (this->ByteCodeStorage).PublicContextAssetPath.AssetName.Number = 0;
  *(undefined8 *)&(this->ByteCodeStorage).BranchInfoLookup = 0;
  *(undefined8 *)&(this->ByteCodeStorage).BranchInfoLookup.field_0x8 = 0;
  *(undefined8 *)&(this->ByteCodeStorage).BranchInfoLookup.field_0x20 = 0;
  (this->ByteCodeStorage).NumInstructions = 0;
  *(undefined4 *)&(this->ByteCodeStorage).BranchInfoLookup.field_0x28 = 0;
  *(undefined4 *)&(this->ByteCodeStorage).BranchInfoLookup.field_0x2c = 0x80;
  *(undefined4 *)&(this->ByteCodeStorage).BranchInfoLookup.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ByteCodeStorage).BranchInfoLookup.field_0x34 = 0;
  *(undefined8 *)&(this->ByteCodeStorage).BranchInfoLookup.field_0x40 = 0;
  *(undefined4 *)&(this->ByteCodeStorage).BranchInfoLookup.field_0x48 = 0;
  (this->ByteCodeStorage).bByteCodeIsAligned = false;
  (this->ByteCodeStorage).bHasPublicContextAssetPath = false;
  (this->LocalizedRegistry).Object = (FRigVMRegistry_NoLock *)0x0;
  (this->LocalizedRegistry).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->Instructions).Instructions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Instructions).Instructions.ArrayNum = 0;
  (this->Instructions).Instructions.ArrayMax = 0;
  this->AccessDetector = (FRWFallbackSafeAccessDetectorDefinition)0x0;
  (this->FunctionNamesStorage).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FunctionNamesStorage).ArrayNum = 0;
  (this->FunctionNamesStorage).ArrayMax = 0;
  (this->FunctionsStorage).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FunctionsStorage).ArrayNum = 0;
  (this->FunctionsStorage).ArrayMax = 0;
  (this->FactoriesStorage).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FactoriesStorage).ArrayNum = 0;
  (this->FactoriesStorage).ArrayMax = 0;
  (this->Parameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Parameters).ArrayNum = 0;
  (this->Parameters).ArrayMax = 0;
  *(undefined8 *)&this->ParametersNameMap = 0;
  *(undefined8 *)&(this->ParametersNameMap).field_0x8 = 0;
  *(undefined8 *)&(this->ParametersNameMap).field_0x20 = 0;
  *(undefined4 *)&(this->ParametersNameMap).field_0x28 = 0;
  *(undefined4 *)&(this->ParametersNameMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ParametersNameMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ParametersNameMap).field_0x34 = 0;
  *(undefined8 *)&(this->ParametersNameMap).field_0x40 = 0;
  *(undefined4 *)&(this->ParametersNameMap).field_0x48 = 0;
  (this->FirstHandleForInstruction).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FirstHandleForInstruction).ArrayNum = 0;
  (this->FirstHandleForInstruction).ArrayMax = 0;
  (this->ExternalVariables).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExternalVariables).ArrayNum = 0;
  (this->ExternalVariables).ArrayMax = 0;
  (this->LazyBranches).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LazyBranches).ArrayNum = 0;
  (this->LazyBranches).ArrayMax = 0;
  *(undefined8 *)&this->OperandToDebugRegisters = 0;
  *(undefined8 *)&(this->OperandToDebugRegisters).field_0x8 = 0;
  *(undefined8 *)&(this->OperandToDebugRegisters).field_0x20 = 0;
  this->MemoryHandleCount = 0;
  *(undefined4 *)&(this->OperandToDebugRegisters).field_0x28 = 0;
  *(undefined4 *)&(this->OperandToDebugRegisters).field_0x2c = 0x80;
  *(undefined4 *)&(this->OperandToDebugRegisters).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OperandToDebugRegisters).field_0x34 = 0;
  *(undefined8 *)&(this->OperandToDebugRegisters).field_0x40 = 0;
  *(undefined4 *)&(this->OperandToDebugRegisters).field_0x48 = 0;
  this->CachedVMHash = 0;
  (this->EntryNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EntryNames).ArrayNum = 0;
  (this->EntryNames).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ResolveFunctionsMutex,4000);
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->CreateLocalizedRegistryMutex,4000);
  return this;
}

// URigVM @ 14a07ac50

URigVM * __thiscall URigVM::URigVM(URigVM *this)

{
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7URigVM__6B_;
  FRigVMMemoryStorageStruct::FRigVMMemoryStorageStruct(&this->LiteralMemoryStorage);
  FRigVMMemoryStorageStruct::FRigVMMemoryStorageStruct(&this->DefaultWorkMemoryStorage);
  FRigVMMemoryStorageStruct::FRigVMMemoryStorageStruct(&this->DefaultDebugMemoryStorage);
  (this->ByteCodeStorage).ByteCode.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ByteCodeStorage).ByteCode.ArrayNum = 0;
  (this->ByteCodeStorage).ByteCode.ArrayMax = 0;
  (this->ByteCodeStorage).Entries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ByteCodeStorage).Entries.ArrayNum = 0;
  (this->ByteCodeStorage).Entries.ArrayMax = 0;
  (this->ByteCodeStorage).BranchInfos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ByteCodeStorage).BranchInfos.ArrayNum = 0;
  (this->ByteCodeStorage).BranchInfos.ArrayMax = 0;
  (this->ByteCodeStorage).PredicateBranches.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ByteCodeStorage).PredicateBranches.ArrayNum = 0;
  (this->ByteCodeStorage).PredicateBranches.ArrayMax = 0;
  (this->ByteCodeStorage).PublicContextAssetPath.PackageName.ComparisonIndex = 0;
  (this->ByteCodeStorage).PublicContextAssetPath.PackageName.Number = 0;
  (this->ByteCodeStorage).PublicContextAssetPath.AssetName.ComparisonIndex = 0;
  (this->ByteCodeStorage).PublicContextAssetPath.AssetName.Number = 0;
  *(undefined8 *)&(this->ByteCodeStorage).BranchInfoLookup = 0;
  *(undefined8 *)&(this->ByteCodeStorage).BranchInfoLookup.field_0x8 = 0;
  *(undefined8 *)&(this->ByteCodeStorage).BranchInfoLookup.field_0x20 = 0;
  (this->ByteCodeStorage).NumInstructions = 0;
  (this->ExternalPropertyPathDescriptions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExternalPropertyPathDescriptions).ArrayNum = 0;
  (this->ExternalPropertyPathDescriptions).ArrayMax = 0;
  (this->ExternalPropertyPaths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExternalPropertyPaths).ArrayNum = 0;
  (this->ExternalPropertyPaths).ArrayMax = 0;
  *(undefined4 *)&(this->ByteCodeStorage).BranchInfoLookup.field_0x28 = 0;
  *(undefined4 *)&(this->ByteCodeStorage).BranchInfoLookup.field_0x2c = 0x80;
  *(undefined4 *)&(this->ByteCodeStorage).BranchInfoLookup.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ByteCodeStorage).BranchInfoLookup.field_0x34 = 0;
  *(undefined8 *)&(this->ByteCodeStorage).BranchInfoLookup.field_0x40 = 0;
  *(undefined4 *)&(this->ByteCodeStorage).BranchInfoLookup.field_0x48 = 0;
  (this->ByteCodeStorage).bByteCodeIsAligned = false;
  (this->ByteCodeStorage).bHasPublicContextAssetPath = false;
  this->ByteCodePtr = &this->ByteCodeStorage;
  (this->FunctionNamesStorage).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FunctionNamesStorage).ArrayNum = 0;
  (this->FunctionNamesStorage).ArrayMax = 0;
  this->FunctionNamesPtr = &this->FunctionNamesStorage;
  (this->FunctionsStorage).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FunctionsStorage).ArrayNum = 0;
  (this->FunctionsStorage).ArrayMax = 0;
  this->FunctionsPtr = &this->FunctionsStorage;
  (this->FactoriesStorage).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FactoriesStorage).ArrayNum = 0;
  (this->FactoriesStorage).ArrayMax = 0;
  (this->LocalizedRegistry).Object = (FRigVMRegistry_NoLock *)0x0;
  (this->LocalizedRegistry).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->Instructions).Instructions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Instructions).Instructions.ArrayNum = 0;
  (this->Instructions).Instructions.ArrayMax = 0;
  this->AccessDetector = (FRWFallbackSafeAccessDetectorDefinition)0x0;
  (this->Parameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Parameters).ArrayNum = 0;
  (this->Parameters).ArrayMax = 0;
  *(undefined8 *)&this->ParametersNameMap = 0;
  *(undefined8 *)&(this->ParametersNameMap).field_0x8 = 0;
  *(undefined8 *)&(this->ParametersNameMap).field_0x20 = 0;
  this->FactoriesPtr = &this->FactoriesStorage;
  *(undefined4 *)&(this->ParametersNameMap).field_0x28 = 0;
  *(undefined4 *)&(this->ParametersNameMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ParametersNameMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ParametersNameMap).field_0x34 = 0;
  *(undefined8 *)&(this->ParametersNameMap).field_0x40 = 0;
  *(undefined4 *)&(this->ParametersNameMap).field_0x48 = 0;
  (this->FirstHandleForInstruction).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FirstHandleForInstruction).ArrayNum = 0;
  (this->FirstHandleForInstruction).ArrayMax = 0;
  this->MemoryHandleCount = 0;
  (this->ExternalVariables).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExternalVariables).ArrayNum = 0;
  (this->ExternalVariables).ArrayMax = 0;
  (this->LazyBranches).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LazyBranches).ArrayNum = 0;
  (this->LazyBranches).ArrayMax = 0;
  *(undefined8 *)&this->OperandToDebugRegisters = 0;
  *(undefined8 *)&(this->OperandToDebugRegisters).field_0x8 = 0;
  *(undefined8 *)&(this->OperandToDebugRegisters).field_0x20 = 0;
  *(undefined4 *)&(this->OperandToDebugRegisters).field_0x28 = 0;
  *(undefined4 *)&(this->OperandToDebugRegisters).field_0x2c = 0x80;
  *(undefined4 *)&(this->OperandToDebugRegisters).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OperandToDebugRegisters).field_0x34 = 0;
  *(undefined8 *)&(this->OperandToDebugRegisters).field_0x40 = 0;
  *(undefined4 *)&(this->OperandToDebugRegisters).field_0x48 = 0;
  this->CachedVMHash = 0;
  (this->EntryNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EntryNames).ArrayNum = 0;
  (this->EntryNames).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ResolveFunctionsMutex,4000);
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->CreateLocalizedRegistryMutex,4000);
  return this;
}

// ~URigVM @ 14a07c130

void __thiscall URigVM::~URigVM(URigVM *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  
  this->_padding_ = (longlong)&___7URigVM__6B_;
  Reset_Internal(this);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CreateLocalizedRegistryMutex);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ResolveFunctionsMutex);
  pFVar1 = (this->EntryNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->OperandToDebugRegisters).field_0x48 = 0;
  pvVar2 = *(void **)&(this->OperandToDebugRegisters).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->OperandToDebugRegisters);
  DestructItems<FRigVMLazyBranch,int>
            ((FRigVMLazyBranch *)(this->LazyBranches).AllocatorInstance.Data,
             (this->LazyBranches).ArrayNum);
  pFVar1 = (this->LazyBranches).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ExternalVariables).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FirstHandleForInstruction).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->ParametersNameMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ParametersNameMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ParametersNameMap);
  DestructItems<FRigVMParameter,int>
            ((FRigVMParameter *)(this->Parameters).AllocatorInstance.Data,
             (this->Parameters).ArrayNum);
  pFVar1 = (this->Parameters).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FactoriesStorage).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FunctionsStorage).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FunctionNamesStorage).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (this->AccessDetector != (FRWFallbackSafeAccessDetectorDefinition)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicValue.load(std::memory_order_relaxed) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                       ,0x3a,L"Detector cannot be destroyed while other threads access it");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = (this->Instructions).Instructions.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LocalizedRegistry).SharedReferenceCount.ReferenceController);
  FRigVMByteCode::~FRigVMByteCode(&this->ByteCodeStorage);
  DestructItems<FRigVMPropertyPath,int>
            ((FRigVMPropertyPath *)(this->ExternalPropertyPaths).AllocatorInstance.Data,
             (this->ExternalPropertyPaths).ArrayNum);
  pFVar1 = (this->ExternalPropertyPaths).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FRigVMPropertyPathDescription,int>
            ((FRigVMPropertyPathDescription *)
             (this->ExternalPropertyPathDescriptions).AllocatorInstance.Data,
             (this->ExternalPropertyPathDescriptions).ArrayNum);
  pFVar1 = (this->ExternalPropertyPathDescriptions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FRigVMMemoryStorageStruct::~FRigVMMemoryStorageStruct(&this->DefaultDebugMemoryStorage);
  FRigVMMemoryStorageStruct::~FRigVMMemoryStorageStruct(&this->DefaultWorkMemoryStorage);
  FRigVMMemoryStorageStruct::~FRigVMMemoryStorageStruct(&this->LiteralMemoryStorage);
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 14a07e0c0

void __thiscall
`URigVM::CacheMemoryHandlesIfRequired'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  URigVM *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  URigVM *local_res8;
  code *local_18;
  URigVM **local_10;
  
  this_00 = *(URigVM **)this;
  local_10 = &local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<``URigVM::CacheMemoryHandlesIfRequired'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,FRigVMExtendedExecuteContext_&,FRigVMRegistryHandle_&,int,FRigVMBranchInfoKey_const_&,FRigVMOperand_const_&>
             ::Call;
  uVar3 = 0;
  if (param_1 < (this_00->FirstHandleForInstruction).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  local_res8 = this_00;
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  URigVM::InstructionOpEval
            (this_00,*(FRigVMExtendedExecuteContext **)((longlong)this + 8),
             *(FRigVMRegistryHandle **)((longlong)this + 0x10),param_1,
             *(int *)((this_00->FirstHandleForInstruction).AllocatorInstance.Data +
                     (longlong)param_1 * 4),
             (TFunctionRef<void___cdecl(FRigVMExtendedExecuteContext_&,FRigVMRegistryHandle_&,int,FRigVMBranchInfoKey_const_&,FRigVMOperand_const_&)>
              *)&local_18);
  return;
}

// operator() @ 14a07e180

bool __thiscall
`URigVM::ValidateBytecode'::__l2::<lambda_1>::operator()(void *this,FRigVMOperand *param_1)

{
  ERigVMMemoryType EVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  EVar1 = param_1->MemoryType;
  if (EVar1 == External) {
    uVar6 = 0;
  }
  else if (EVar1 == Debug) {
    uVar6 = 2;
  }
  else {
    uVar6 = (uint)EVar1;
    if (3 < uVar6) {
      return false;
    }
  }
  if ((*(int *)((longlong)this + 8) <= (int)uVar6) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  lVar2 = *(longlong *)(*(longlong *)this + (ulonglong)uVar6 * 8);
  if (param_1->MemoryType == External) {
    if ((param_1->RegisterOffset != 0xffff) &&
       (*(int *)(*(longlong *)((longlong)this + 0x10) + 0x120) <= (int)(uint)param_1->RegisterOffset
       )) {
      return false;
    }
  }
  else if (((param_1->RegisterIndex == 0xffff) ||
           (*(int *)(lVar2 + 0x30) <= (int)(uint)param_1->RegisterIndex)) ||
          ((param_1->RegisterOffset != 0xffff &&
           (*(int *)(lVar2 + 0x40) <= (int)(uint)param_1->RegisterOffset)))) {
    return false;
  }
  return true;
}

// AddRigVMFunction @ 14a07f6e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall URigVM::AddRigVMFunction(URigVM *this,FString *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FName *pFVar3;
  FRigVMRegistry_NoLock *pFVar4;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FRigVMDispatchFactory_const_*,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  TArray<FRigVMFunction_const_*,TSizedDefaultAllocator<32>_> *pTVar8;
  code *pcVar9;
  uint uVar10;
  bool bVar11;
  atomic<unsigned_int> aVar12;
  atomic<unsigned_int> aVar13;
  int iVar14;
  FRigVMRegistry_RWLock *this_00;
  FRigVMFunction *pFVar15;
  FName *pFVar16;
  longlong *plVar17;
  wchar_t *pwVar18;
  wchar_t *pwVar19;
  FRigVMDispatchFactory **ppFVar20;
  undefined1 auStackY_1b8 [32];
  FRigVMFunction *local_168;
  FName local_160;
  FRigVMRegistryHandle local_158;
  char local_150;
  FRigVMRegistry_RWLock *local_148;
  atomic<FRigVMRegistry_NoLock::ELockType> local_140;
  longlong local_138 [5];
  longlong *plStack_110;
  undefined1 local_108 [24];
  undefined8 uStack_f0;
  void *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  void *local_c8;
  ulonglong uStack_c0;
  undefined1 local_b8 [40];
  longlong *plStack_90;
  undefined1 local_88 [24];
  undefined8 uStack_70;
  void *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  void *local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  pwVar19 = L"";
  if ((param_1->Data).ArrayNum == 0) {
    pwVar18 = L"";
  }
  else {
    pwVar18 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_160,pwVar18);
  pFVar3 = (FName *)(this->FunctionNamesPtr->AllocatorInstance).Data;
  pFVar16 = pFVar3;
  do {
    if (pFVar16 == pFVar3 + this->FunctionNamesPtr->ArrayNum) {
LAB_14a07f762:
      pFVar4 = (this->LocalizedRegistry).Object;
      if (pFVar4 == (FRigVMRegistry_NoLock *)0x0) {
        this_00 = FRigVMRegistry_RWLock::Get();
        uStack_50 = 0;
        local_68 = (void *)0x0;
        uStack_60 = 0x8000000000;
        local_58 = 0xffffffff;
        local_48 = (void *)0x0;
        uStack_40 = 0;
        local_b8._0_8_ = 0;
        local_b8._8_8_ = 0;
        local_b8._16_8_ = 0;
        local_b8._24_8_ = 0;
        local_b8._32_8_ = 0;
        plStack_90 = (longlong *)0x0;
        local_88._0_8_ = (FScriptContainerElement *)0x0;
        local_88._8_8_ = 0;
        local_88._16_8_ = 0;
        uStack_70 = 0;
        if ((param_1->Data).ArrayNum != 0) {
          pwVar19 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
        }
        FRigVMRegistryHandle::FRigVMRegistryHandle(&local_158,(FRigVMRegistry_NoLock *)this_00);
        local_150 = '\x01';
        local_140 = (atomic<FRigVMRegistry_NoLock::ELockType>)0x1;
        local_148 = this_00;
        AcquireSRWLockExclusive((PSRWLOCK)&this_00->Lock);
        aVar12 = (atomic<unsigned_int>)GetCurrentThreadId();
        LOCK();
        local_148->WriteLockOwnerThread = aVar12;
        UNLOCK();
        LOCK();
        paVar1 = &local_148->LockCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + 1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x0) {
          LOCK();
          local_148->LockType = local_140;
          UNLOCK();
        }
        else if ((local_140 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) &&
                (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<_4767296351463538103>,false,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                                     ,0x249,"DesiredLockType != LockType_Write"), bVar11)) {
          pcVar9 = (code *)swi(3);
          iVar14 = (*pcVar9)();
          return iVar14;
        }
        pFVar15 = FRigVMRegistry_NoLock::FindFunction_NoLock
                            ((FRigVMRegistry_NoLock *)this_00,pwVar19,
                             (FRigVMUserDefinedTypeResolver *)local_b8);
        if (local_150 != '\0') {
          LOCK();
          paVar1 = &local_148->LockCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            LOCK();
            local_148->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x2;
            UNLOCK();
          }
          if (local_140 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x0) {
            if (((int)aVar2 + -1 < 0) &&
               (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<_4767296351463538070>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                                    ,0x26a,"CurrentLockCount >= 0"), bVar11)) {
              pcVar9 = (code *)swi(3);
              iVar14 = (*pcVar9)();
              return iVar14;
            }
            aVar12 = local_148->WriteLockOwnerThread;
            aVar13 = (atomic<unsigned_int>)GetCurrentThreadId();
            if (aVar12 != aVar13) {
              ReleaseSRWLockShared((PSRWLOCK)&local_148->Lock);
            }
          }
          else if (local_140 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) {
            if ((aVar2 != (atomic<int>)0x1) &&
               (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<_4767296351463538060>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                                    ,0x274,"CurrentLockCount == 0"), bVar11)) {
              pcVar9 = (code *)swi(3);
              iVar14 = (*pcVar9)();
              return iVar14;
            }
            LOCK();
            local_148->WriteLockOwnerThread = (atomic<unsigned_int>)0xffffffff;
            UNLOCK();
            ReleaseSRWLockExclusive((PSRWLOCK)&local_148->Lock);
          }
        }
        uStack_40 = uStack_40 & 0xffffffff00000000;
        local_168 = pFVar15;
        if (local_48 != (void *)0x0) {
          FMemory::Free(local_48);
        }
        TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_88,0,local_88._8_4_);
        iVar14 = SUB84(local_88._8_8_,4);
        local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
        if (iVar14 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x38,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
        }
        uVar10 = uStack_60._4_4_;
        local_58 = 0xffffffff;
        uStack_60 = (ulonglong)uStack_60._4_4_ << 0x20;
        if (0x80 < uVar10) {
          uStack_60 = 0x8000000000;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
        }
        if (local_68 != (void *)0x0) {
          FMemory::Free(local_68);
        }
        if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_88._0_8_);
        }
        if (local_b8._0_8_ != 0) {
          plVar17 = (longlong *)(local_b8 + 0x10);
          if (plStack_90 != (longlong *)0x0) {
            plVar17 = plStack_90;
          }
          (**(code **)(*plVar17 + 0x10))();
        }
      }
      else {
        uStack_d0 = 0;
        local_e8 = (void *)0x0;
        uStack_e0 = 0x8000000000;
        local_d8 = 0xffffffff;
        local_c8 = (void *)0x0;
        uStack_c0 = 0;
        local_138[0] = 0;
        local_138[1] = 0;
        local_138[2] = 0;
        local_138[3] = 0;
        local_138[4] = 0;
        plStack_110 = (longlong *)0x0;
        local_108._0_8_ = (FScriptContainerElement *)0x0;
        local_108._8_8_ = 0;
        local_108._16_8_ = 0;
        uStack_f0 = 0;
        if ((param_1->Data).ArrayNum != 0) {
          pwVar19 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
        }
        local_168 = (FRigVMFunction *)
                    (**(code **)(pFVar4->_padding_ + 0x160))(pFVar4,pwVar19,local_138);
        uStack_c0 = uStack_c0 & 0xffffffff00000000;
        if (local_c8 != (void *)0x0) {
          FMemory::Free(local_c8);
        }
        TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_108,0,local_108._8_4_);
        iVar14 = SUB84(local_108._8_8_,4);
        local_108._8_8_ = local_108._8_8_ & 0xffffffff00000000;
        if (iVar14 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x38,8,0,(ForAnyElementType *)local_108,0,(int *)(local_108 + 0xc));
        }
        uVar10 = uStack_e0._4_4_;
        local_d8 = 0xffffffff;
        uStack_e0 = (ulonglong)uStack_e0._4_4_ << 0x20;
        if (0x80 < uVar10) {
          uStack_e0 = 0x8000000000;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_108 + 0x10),0);
        }
        if (local_e8 != (void *)0x0) {
          FMemory::Free(local_e8);
        }
        if ((FScriptContainerElement *)local_108._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_108._0_8_);
        }
        if (local_138[0] != 0) {
          plVar17 = local_138 + 2;
          if (plStack_110 != (longlong *)0x0) {
            plVar17 = plStack_110;
          }
          (**(code **)(*plVar17 + 0x10))();
        }
      }
      if (local_168 == (FRigVMFunction *)0x0) {
        iVar14 = -1;
      }
      else {
        pTVar5 = this->FunctionNamesPtr;
        pFVar3 = (FName *)(pTVar5->AllocatorInstance).Data;
        if (((pFVar3 <= &local_160) && (&local_160 < pFVar3 + pTVar5->ArrayMax)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          iVar14 = (*pcVar9)();
          return iVar14;
        }
        iVar14 = pTVar5->ArrayNum;
        if (iVar14 == pTVar5->ArrayMax) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&pTVar5->AllocatorInstance,&pTVar5->ArrayMax);
        }
        pTVar5->ArrayNum = iVar14 + 1;
        *(FName *)((pTVar5->AllocatorInstance).Data + (longlong)iVar14 * 8) = local_160;
        pTVar6 = this->FactoriesPtr;
        ppFVar20 = &local_168->Factory;
        pFVar7 = (pTVar6->AllocatorInstance).Data;
        if (((pFVar7 <= ppFVar20) && (ppFVar20 < pFVar7 + (longlong)pTVar6->ArrayMax * 8)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          iVar14 = (*pcVar9)();
          return iVar14;
        }
        iVar14 = pTVar6->ArrayNum;
        if (iVar14 == pTVar6->ArrayMax) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar6->AllocatorInstance,&pTVar6->ArrayMax);
        }
        pTVar6->ArrayNum = iVar14 + 1;
        *(FRigVMDispatchFactory **)((pTVar6->AllocatorInstance).Data + (longlong)iVar14 * 8) =
             *ppFVar20;
        pTVar8 = this->FunctionsPtr;
        pFVar7 = (pTVar8->AllocatorInstance).Data;
        if (((pFVar7 <= (FScriptContainerElement *)&local_168) &&
            ((FScriptContainerElement *)&local_168 < pFVar7 + (longlong)pTVar8->ArrayMax * 8)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          iVar14 = (*pcVar9)();
          return iVar14;
        }
        iVar14 = pTVar8->ArrayNum;
        if (iVar14 == pTVar8->ArrayMax) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
        }
        pFVar7 = (pTVar8->AllocatorInstance).Data;
        pTVar8->ArrayNum = iVar14 + 1;
        *(FRigVMFunction **)(pFVar7 + (longlong)iVar14 * 8) = local_168;
      }
      return iVar14;
    }
    if (*pFVar16 == local_160) {
      iVar14 = (int)((longlong)pFVar16 - (longlong)pFVar3 >> 3);
      if (iVar14 != -1) {
        return iVar14;
      }
      goto LAB_14a07f762;
    }
    pFVar16 = pFVar16 + 1;
  } while( true );
}

// AddRigVMFunction @ 14a07fd60

int __thiscall URigVM::AddRigVMFunction(URigVM *this,UScriptStruct *param_1,FName *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FName local_res8;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InRigVMStruct",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVM.cpp"
                         ,0x2ef,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  ::FName::ToString(param_2,&local_18);
  local_res8 = (FName)param_1->_padding_;
  ::FName::ToString(&local_res8,&local_38);
  ::FString::PrintfImpl(&local_28,L"F%s::%s");
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  iVar3 = (**(code **)(this->_padding_ + 0x350))(this,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return iVar3;
}

// CacheMemoryHandlesIfRequired @ 14a080f50

void __thiscall
URigVM::CacheMemoryHandlesIfRequired(URigVM *this,FRigVMExtendedExecuteContext *param_1)

{
  int *piVar1;
  TArray<FRigVMMemoryHandle,TSizedDefaultAllocator<32>_> *pTVar2;
  atomic<int> aVar3;
  uint uVar4;
  atomic<unsigned_int> aVar5;
  code *pcVar6;
  atomic<int> *paVar7;
  bool bVar8;
  int iVar9;
  atomic<unsigned_int> aVar10;
  FConditionalScopeLock *this_00;
  FRigVMRegistry_RWLock *pFVar11;
  FRigVMRegistry_NoLock *this_01;
  FScriptContainerElement *_Dst;
  FConditionalScopeLock *pFVar12;
  uint uVar13;
  <lambda_1> local_res8;
  TArrayView<std::nullptr_t,int> local_58;
  code *local_48;
  URigVM **local_40;
  URigVM *local_38;
  FRigVMExtendedExecuteContext *local_30;
  FConditionalScopeLock *local_28;
  
  iVar9 = (this->Instructions).Instructions.ArrayNum;
  if (iVar9 != 0) {
    if ((iVar9 + 1 != (this->FirstHandleForInstruction).ArrayNum) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Instructions.Num() + 1) == FirstHandleForInstruction.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVM.cpp"
                           ,0x568,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar4 = this->MemoryHandleCount;
    piVar1 = &(param_1->CachedMemoryHandles).ArrayNum;
    uVar13 = *piVar1;
    if (uVar13 != uVar4) {
      pTVar2 = &param_1->CachedMemoryHandles;
      if ((int)uVar13 < (int)uVar4) {
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,uVar4 - uVar13,&pTVar2->AllocatorInstance,piVar1,
                   &(param_1->CachedMemoryHandles).ArrayMax);
      }
      else {
        if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
        }
        if ((int)uVar4 < (int)uVar13) {
          uVar13 = uVar13 - uVar4;
          if (((int)(uVar13 | uVar4) < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (uVar13 != 0) {
            _Dst = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar4 * 0x20;
            iVar9 = ((param_1->CachedMemoryHandles).ArrayNum - uVar4) - uVar13;
            if (iVar9 != 0) {
              memmove(_Dst,_Dst + (longlong)(int)uVar13 * 0x20,(longlong)iVar9 << 5);
            }
            piVar1 = &(param_1->CachedMemoryHandles).ArrayNum;
            *piVar1 = *piVar1 - uVar13;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,&pTVar2->AllocatorInstance,(param_1->CachedMemoryHandles).ArrayNum,
                       &(param_1->CachedMemoryHandles).ArrayMax);
          }
        }
      }
      if (((this->LocalizedRegistry).Object == (FRigVMRegistry_NoLock *)0x0) &&
         (this_00 = ::operator_new(0x20), this_00 != (FConditionalScopeLock *)0x0)) {
        pFVar11 = FRigVMRegistry_RWLock::Get();
        FRigVMRegistryHandle::FRigVMRegistryHandle
                  ((FRigVMRegistryHandle *)this_00,(FRigVMRegistry_NoLock *)pFVar11);
        *(undefined1 *)&this_00->_padding_ = 1;
        this_00->Registry = pFVar11;
        this_00->DesiredLockType = LockType_Read;
        aVar5 = pFVar11->WriteLockOwnerThread;
        aVar10 = (atomic<unsigned_int>)GetCurrentThreadId();
        if (aVar5 != aVar10) {
          AcquireSRWLockShared((PSRWLOCK)&this_00->Registry->Lock);
        }
        LOCK();
        paVar7 = &this_00->Registry->LockCount;
        aVar3 = *paVar7;
        *paVar7 = (atomic<int>)((int)*paVar7 + 1);
        UNLOCK();
        pFVar12 = this_00;
        if (aVar3 == (atomic<int>)0x0) {
          LOCK();
          this_00->Registry->LockType =
               (atomic<FRigVMRegistry_NoLock::ELockType>)this_00->DesiredLockType;
          UNLOCK();
        }
        else if ((this_00->DesiredLockType == LockType_Write) &&
                (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<_4767296351463538103>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                                    ,0x249,"DesiredLockType != LockType_Write"), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      else {
        this_01 = TSharedPtr<FRigVMRegistry_NoLock,1>::operator->(&this->LocalizedRegistry);
        this_00 = (FConditionalScopeLock *)FRigVMRegistry_NoLock::GetHandle_NoLock(this_01);
        pFVar12 = (FConditionalScopeLock *)0x0;
      }
      local_48 = UE::Core::Private::Function::
                 TFunctionRefCaller<`URigVM::CacheMemoryHandlesIfRequired'::__l2::<lambda_1>,void,int>
                 ::Call;
      local_40 = &local_38;
      local_58.DataPtr = (void **)0x0;
      local_58.ArrayNum = 0;
      local_38 = this;
      local_30 = param_1;
      local_28 = this_00;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"CacheMemoryHandlesIfRequired",(this->Instructions).Instructions.ArrayNum,10,
                 (TFunctionRef<void___cdecl(int)> *)&local_48,local_res8,None,&local_58);
      if (pFVar12 != (FConditionalScopeLock *)0x0) {
        FRigVMRegistry_RWLock::FConditionalScopeLock::~FConditionalScopeLock(pFVar12);
        ::operator_delete(pFVar12,0x20);
      }
    }
  }
  return;
}

// CacheSingleMemoryHandle @ 14a081240

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
URigVM::CacheSingleMemoryHandle
          (URigVM *this,FRigVMExtendedExecuteContext *param_1,FRigVMRegistryHandle *param_2,
          int param_3,FRigVMBranchInfoKey *param_4,FRigVMOperand *param_5,bool param_6)

{
  ushort uVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  FRigVMMemoryStorageStruct *this_00;
  uchar *puVar11;
  FRigVMBranchInfo *pFVar12;
  longlong lVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  FString local_48;
  
  this_00 = (FRigVMMemoryStorageStruct *)(**(code **)(this->_padding_ + 0x370))();
  uVar1 = param_5->RegisterOffset;
  pFVar15 = (FScriptContainerElement *)0x0;
  uVar14 = 0;
  uVar7 = 0xffffffff;
  uVar9 = 0;
  uVar8 = 0;
  if (param_5->MemoryType != External) {
    pFVar16 = pFVar15;
    if (uVar1 != 0xffff) {
      if (((this_00->PropertyPaths).ArrayNum <= (int)(uint)uVar1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Memory->GetPropertyPaths().IsValidIndex(InArg.GetRegisterOffset())",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVM.cpp"
                             ,0xb91,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (param_5->RegisterOffset == 0xffff) {
        uVar10 = 0xffffffff;
LAB_14a08159d:
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else {
        uVar10 = (uint)param_5->RegisterOffset;
        uVar14 = uVar9;
        if ((int)uVar10 < (this_00->PropertyPaths).ArrayNum) {
          uVar14 = ~uVar10 >> 0x1f;
        }
        if (uVar14 == 0) goto LAB_14a08159d;
      }
      pFVar16 = (this_00->PropertyPaths).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x20;
      if ((*(int *)(pFVar16 + 0x18) == 0) && (pFVar16 = pFVar15, 1 < (byte)LogRigVM._0_1_)) {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_48,(UObject *)0x0);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRigVM);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
    }
    uVar14 = 0xffffffff;
    if (param_5->RegisterIndex != 0xffff) {
      uVar14 = (uint)param_5->RegisterIndex;
    }
    puVar11 = FRigVMMemoryStorageStruct::GetData<unsigned_char>(this_00,uVar14);
    if (param_5->RegisterIndex != 0xffff) {
      uVar7 = (uint)param_5->RegisterIndex;
      uVar14 = uVar9;
      if ((int)uVar7 < (this_00->LinkedProperties).ArrayNum) {
        uVar14 = ~uVar7 >> 0x1f;
      }
      if (uVar14 != 0) goto LAB_14a0816b4;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
LAB_14a0816b4:
    uVar3 = *(undefined8 *)
             ((this_00->LinkedProperties).AllocatorInstance.Data + (longlong)(int)uVar7 * 8);
    if (param_3 < (param_1->CachedMemoryHandles).ArrayNum) {
      uVar9 = (uint)~param_3 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar15 = (param_1->CachedMemoryHandles).AllocatorInstance.Data + (longlong)param_3 * 0x20;
    *(uchar **)pFVar15 = puVar11;
    *(undefined8 *)(pFVar15 + 8) = uVar3;
    *(FScriptContainerElement **)(pFVar15 + 0x10) = pFVar16;
    *(undefined8 *)(pFVar15 + 0x18) = 0;
    if (param_4->InstructionIndex == -1) {
      return;
    }
    if (param_4->ArgumentIndex == -1) {
      return;
    }
    if (param_4->Label == (FName)0x0) {
      return;
    }
    pFVar12 = FRigVMByteCode::GetBranchInfo(this->ByteCodePtr,param_4);
    if (pFVar12 == (FRigVMBranchInfo *)0x0) {
      return;
    }
    uVar9 = pFVar12->Index;
    if ((int)uVar9 < (this->LazyBranches).ArrayNum) {
      uVar8 = ~uVar9 >> 0x1f;
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
    pFVar16 = (this->LazyBranches).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x60;
    *(URigVM **)pFVar16 = this;
    uVar3 = *(undefined8 *)&(pFVar12->Label).Number;
    *(undefined8 *)(pFVar16 + 8) = *(undefined8 *)pFVar12;
    *(undefined8 *)(pFVar16 + 0x10) = uVar3;
    *(undefined8 *)(pFVar16 + 0x18) = *(undefined8 *)&pFVar12->ArgumentIndex;
    *(int *)(pFVar16 + 0x20) = pFVar12->LastInstruction;
    *(FScriptContainerElement **)(pFVar15 + 0x18) = pFVar16;
    return;
  }
  if (uVar1 != 0xffff) {
    if (((this->ExternalPropertyPaths).ArrayNum <= (int)(uint)uVar1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ExternalPropertyPaths.IsValidIndex(InArg.GetRegisterOffset())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVM.cpp"
                           ,0xb79,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (param_5->RegisterOffset == 0xffff) {
      uVar6 = 0xffffffff;
LAB_14a081301:
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else {
      uVar6 = (uint)param_5->RegisterOffset;
      uVar10 = 0;
      if ((int)uVar6 < (this->ExternalPropertyPaths).ArrayNum) {
        uVar10 = ~uVar6 >> 0x1f;
      }
      if (uVar10 == 0) goto LAB_14a081301;
    }
    pFVar15 = (this->ExternalPropertyPaths).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x20;
  }
  if (((param_5->RegisterIndex == 0xffff) ||
      ((this->ExternalVariables).ArrayNum <= (int)(uint)param_5->RegisterIndex)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExternalVariables.IsValidIndex(InArg.GetRegisterIndex())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVM.cpp"
                         ,0xb7d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (param_5->RegisterIndex != 0xffff) {
    uVar7 = (uint)param_5->RegisterIndex;
    uVar14 = ~uVar7 >> 0x1f;
    uVar10 = uVar8;
    if ((int)uVar7 < (this->ExternalVariables).ArrayNum) {
      uVar10 = uVar14;
    }
    if (uVar10 != 0) goto LAB_14a0813e0;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("(Index >= 0) & (Index < ArrayNum)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                     ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14a0813e0:
  pFVar2 = (this->ExternalVariables).AllocatorInstance.Data;
  lVar17 = (longlong)(int)uVar7;
  pFVar16 = pFVar2 + lVar17 * 0x28;
  bVar5 = ::FName::IsWithinBounds((FNameEntryId)*(uint *)(pFVar2 + lVar17 * 0x28));
  if ((((!bVar5) || (*(longlong *)pFVar16 == 0)) ||
      ((bVar5 = ::FName::IsWithinBounds((FNameEntryId)*(uint *)(pFVar16 + 0x10)), !bVar5 ||
       (*(longlong *)(pFVar16 + 0x10) == 0)))) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExternalVariable.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVM.cpp"
                         ,0xb81,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((int)uVar7 < (param_1->ExternalVariableRuntimeData).ArrayNum) {
    uVar8 = uVar14;
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
  pFVar2 = (param_1->ExternalVariableRuntimeData).AllocatorInstance.Data;
  if ((*(longlong *)(pFVar2 + lVar17 * 8) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExternalVariableRuntimeData.Memory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVM.cpp"
                         ,0xb84,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar3 = *(undefined8 *)(pFVar2 + lVar17 * 8);
  lVar17 = *(longlong *)(pFVar16 + 8);
  if (param_3 < (param_1->CachedMemoryHandles).ArrayNum) {
    uVar9 = (uint)~param_3 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar16 = (param_1->CachedMemoryHandles).AllocatorInstance.Data;
  lVar13 = (longlong)param_3 * 0x20;
  *(undefined8 *)(pFVar16 + lVar13) = uVar3;
  *(longlong *)(pFVar16 + lVar13 + 8) = lVar17;
  *(FScriptContainerElement **)(pFVar16 + lVar13 + 0x10) = pFVar15;
  *(undefined8 *)(pFVar16 + lVar13 + 0x18) = 0;
  return;
}

// CanExecuteEntry @ 14a081990

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
URigVM::CanExecuteEntry
          (URigVM *this,FRigVMExtendedExecuteContext *param_1,FName *param_2,bool param_3)

{
  TFunction<void___cdecl(FRigVMLogSettings_const_&,FRigVMExecuteContext_const_*,FString_const_&)>
  *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  FRigVMExecuteContext *pFVar8;
  undefined8 uVar9;
  longlong *plVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res8 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_d8;
  FString local_c8;
  FString local_b8;
  int local_a8;
  undefined1 local_a4;
  int local_a0;
  undefined1 local_9c;
  FRigVMExecuteContext *local_98;
  FRigVMExecuteContext *local_90;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  uVar5 = (**(code **)(this->_padding_ + 0x3c0))(this,param_2);
  if (uVar5 == 0xffffffff) {
    if (param_3) {
      pFVar8 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
      ::FName::ToString(param_2,&local_88);
      local_a8 = 1;
      local_a4 = 1;
      ::FString::PrintfImpl(&local_c8,L"Entry(\'%s\') cannot be found.");
      pTVar1 = (pFVar8->RuntimeSettings).LogFunction.Object;
      if (pTVar1 == (TFunction<void___cdecl(FRigVMLogSettings_const_&,FRigVMExecuteContext_const_*,FString_const_&)>
                     *)0x0) {
        if (local_a8 == 1) {
          if (1 < (byte)LogRigVM._0_1_) {
            UE::Logging::Private::BasicLog<2>
                      (&`public:_void___cdecl_FRigVMExecuteContext::Log(FRigVMLogSettings_const&___ptr64,FString_const&___ptr64)const___ptr64'
                        ::__l11::LOG_Static,(FLogCategoryBase *)&LogRigVM);
          }
        }
        else if (local_a8 == 3) {
          if (2 < (byte)LogRigVM._0_1_) {
            UE::Logging::Private::BasicLog<3>
                      (&`public:_void___cdecl_FRigVMExecuteContext::Log(FRigVMLogSettings_const&___ptr64,FString_const&___ptr64)const___ptr64'
                        ::__l33::LOG_Static,(FLogCategoryBase *)&LogRigVM);
          }
        }
        else if (3 < (byte)LogRigVM._0_1_) {
          UE::Logging::Private::BasicLog<4>
                    (&`public:_void___cdecl_FRigVMExecuteContext::Log(FRigVMLogSettings_const&___ptr64,FString_const&___ptr64)const___ptr64'
                      ::__l53::LOG_Static,(FLogCategoryBase *)&LogRigVM);
        }
      }
      else {
        local_98 = pFVar8;
        UE::Core::Private::Function::CheckCallable(*(void **)pTVar1);
        pcVar2 = *(code **)pTVar1;
        plVar10 = (longlong *)&pTVar1->field_0x10;
        if (*(longlong **)&pTVar1->field_0x28 != (longlong *)0x0) {
          plVar10 = *(longlong **)&pTVar1->field_0x28;
        }
        uVar9 = (**(code **)(*plVar10 + 8))();
        (*pcVar2)(uVar9,&local_a8,&local_98,&local_c8);
      }
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
LAB_14a081f2a:
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
    }
    bVar3 = false;
  }
  else {
    pFVar15 = (param_1->EntriesBeingExecuted).AllocatorInstance.Data;
    pFVar12 = pFVar15 + (longlong)(param_1->EntriesBeingExecuted).ArrayNum * 4;
    pFVar11 = pFVar15;
    if (pFVar15 != pFVar12) {
LAB_14a081b30:
      if (*(uint *)pFVar11 != uVar5) goto code_r0x00014a081b35;
      iVar7 = (param_1->EntriesBeingExecuted).ArrayNum;
      local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d8.ArrayNum = 0;
      local_d8.ArrayMax = 0;
      while( true ) {
        if ((param_1->EntriesBeingExecuted).ArrayNum != iVar7) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (pFVar15 == pFVar12) break;
        uVar5 = *(uint *)pFVar15;
        plVar10 = (longlong *)(**(code **)(this->_padding_ + 0x3c8))();
        uVar13 = 0;
        if ((int)uVar5 < (int)plVar10[1]) {
          uVar13 = ~uVar5 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        pFVar11 = (FScriptContainerElement *)
                  ::FName::ToString((FName *)(*plVar10 + (longlong)(int)uVar5 * 8),&local_78);
        if (((local_d8.AllocatorInstance.Data <= pFVar11) &&
            (pFVar11 < local_d8.AllocatorInstance.Data + (longlong)local_d8.ArrayMax * 0x10)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        iVar6 = local_d8.ArrayNum;
        if (local_d8.ArrayNum == local_d8.ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_d8.AllocatorInstance,&local_d8.ArrayMax);
        }
        local_d8.ArrayNum = iVar6 + 1;
        pFVar14 = local_d8.AllocatorInstance.Data + (longlong)iVar6 * 0x10;
        *(undefined8 *)pFVar14 = 0;
        *(undefined8 *)pFVar14 = *(undefined8 *)pFVar11;
        *(undefined8 *)pFVar11 = 0;
        *(int *)(pFVar14 + 8) = *(int *)(pFVar11 + 8);
        *(int *)(pFVar14 + 0xc) = *(int *)(pFVar11 + 0xc);
        *(undefined8 *)(pFVar11 + 8) = 0;
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        pFVar15 = pFVar15 + 4;
      }
      pFVar12 = (FScriptContainerElement *)::FName::ToString(param_2,&local_68);
      if (((local_d8.AllocatorInstance.Data <= pFVar12) &&
          (pFVar12 < local_d8.AllocatorInstance.Data + (longlong)local_d8.ArrayMax * 0x10)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      iVar7 = local_d8.ArrayNum;
      if (local_d8.ArrayNum == local_d8.ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_d8.AllocatorInstance,&local_d8.ArrayMax);
      }
      local_d8.ArrayNum = iVar7 + 1;
      pFVar15 = local_d8.AllocatorInstance.Data + (longlong)iVar7 * 0x10;
      *(undefined8 *)pFVar15 = 0;
      *(undefined8 *)pFVar15 = *(undefined8 *)pFVar12;
      *(undefined8 *)pFVar12 = 0;
      *(int *)(pFVar15 + 8) = *(int *)(pFVar12 + 8);
      *(int *)(pFVar15 + 0xc) = *(int *)(pFVar12 + 0xc);
      *(undefined8 *)(pFVar12 + 8) = 0;
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      pFVar8 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
      RigVMStringUtils::JoinStrings(&local_48,&local_d8,L" -> ",(wchar_t *)0x0,(wchar_t *)0x0);
      ::FName::ToString(param_2,&local_58);
      local_a0 = 1;
      local_9c = 1;
      ::FString::PrintfImpl(&local_b8,L"Entry(\'%s\') is being invoked recursively (%s).");
      pTVar1 = (pFVar8->RuntimeSettings).LogFunction.Object;
      if (pTVar1 == (TFunction<void___cdecl(FRigVMLogSettings_const_&,FRigVMExecuteContext_const_*,FString_const_&)>
                     *)0x0) {
        if (local_a0 == 1) {
          if (1 < (byte)LogRigVM._0_1_) {
            UE::Logging::Private::BasicLog<2>
                      (&`public:_void___cdecl_FRigVMExecuteContext::Log(FRigVMLogSettings_const&___ptr64,FString_const&___ptr64)const___ptr64'
                        ::__l11::LOG_Static,(FLogCategoryBase *)&LogRigVM);
          }
        }
        else if (local_a0 == 3) {
          if (2 < (byte)LogRigVM._0_1_) {
            UE::Logging::Private::BasicLog<3>
                      (&`public:_void___cdecl_FRigVMExecuteContext::Log(FRigVMLogSettings_const&___ptr64,FString_const&___ptr64)const___ptr64'
                        ::__l33::LOG_Static,(FLogCategoryBase *)&LogRigVM);
          }
        }
        else if (3 < (byte)LogRigVM._0_1_) {
          UE::Logging::Private::BasicLog<4>
                    (&`public:_void___cdecl_FRigVMExecuteContext::Log(FRigVMLogSettings_const&___ptr64,FString_const&___ptr64)const___ptr64'
                      ::__l53::LOG_Static,(FLogCategoryBase *)&LogRigVM);
        }
      }
      else {
        local_90 = pFVar8;
        UE::Core::Private::Function::CheckCallable(*(void **)pTVar1);
        pcVar2 = *(code **)pTVar1;
        plVar10 = (longlong *)&pTVar1->field_0x10;
        if (*(longlong **)&pTVar1->field_0x28 != (longlong *)0x0) {
          plVar10 = *(longlong **)&pTVar1->field_0x28;
        }
        uVar9 = (**(code **)(*plVar10 + 8))();
        (*pcVar2)(uVar9,&local_a0,&local_90,&local_b8);
      }
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      DestructItems<FString,int>((FString *)local_d8.AllocatorInstance.Data,local_d8.ArrayNum);
      local_88.Data.AllocatorInstance.Data = local_d8.AllocatorInstance.Data;
      goto LAB_14a081f2a;
    }
LAB_14a081b3e:
    bVar3 = true;
  }
  return bVar3;
code_r0x00014a081b35:
  pFVar11 = pFVar11 + 4;
  if (pFVar11 == pFVar12) goto LAB_14a081b3e;
  goto LAB_14a081b30;
}

// ClearDebugMemory @ 14a082030

void __thiscall URigVM::ClearDebugMemory(URigVM *this,FRigVMExtendedExecuteContext *param_1)

{
  return;
}

// ClearMemory @ 14a082040

void __thiscall URigVM::ClearMemory(URigVM *this,FRigVMExtendedExecuteContext *param_1)

{
  FRigVMMemoryStorageStruct *pFVar1;
  FRigVMMemoryStorageStruct local_58;
  
  pFVar1 = FRigVMMemoryStorageStruct::FRigVMMemoryStorageStruct(&local_58,Invalid);
  FRigVMMemoryStorageStruct::operator=(&this->LiteralMemoryStorage,pFVar1);
  FRigVMMemoryStorageStruct::~FRigVMMemoryStorageStruct(&local_58);
  pFVar1 = FRigVMMemoryStorageStruct::FRigVMMemoryStorageStruct(&local_58,Invalid);
  FRigVMMemoryStorageStruct::operator=(&this->DefaultWorkMemoryStorage,pFVar1);
  FRigVMMemoryStorageStruct::~FRigVMMemoryStorageStruct(&local_58);
  InvalidateCachedMemory_Internal(this);
  pFVar1 = FRigVMMemoryStorageStruct::FRigVMMemoryStorageStruct(&local_58,Invalid);
  FRigVMMemoryStorageStruct::operator=(&param_1->WorkMemoryStorage,pFVar1);
  FRigVMMemoryStorageStruct::~FRigVMMemoryStorageStruct(&local_58);
  pFVar1 = FRigVMMemoryStorageStruct::FRigVMMemoryStorageStruct(&local_58,Invalid);
  FRigVMMemoryStorageStruct::operator=(&param_1->DebugMemoryStorage,pFVar1);
  FRigVMMemoryStorageStruct::~FRigVMMemoryStorageStruct(&local_58);
  InvalidateCachedMemory(this,param_1);
  return;
}

// ClearMemory @ 14a082100

void __thiscall URigVM::ClearMemory(URigVM *this)

{
  return;
}

// ClearMemory_Internal @ 14a082110

void __thiscall URigVM::ClearMemory_Internal(URigVM *this)

{
  FRigVMMemoryStorageStruct *pFVar1;
  FRigVMMemoryStorageStruct local_58;
  
  pFVar1 = FRigVMMemoryStorageStruct::FRigVMMemoryStorageStruct(&local_58,Invalid);
  FRigVMMemoryStorageStruct::operator=(&this->LiteralMemoryStorage,pFVar1);
  FRigVMMemoryStorageStruct::~FRigVMMemoryStorageStruct(&local_58);
  pFVar1 = FRigVMMemoryStorageStruct::FRigVMMemoryStorageStruct(&local_58,Invalid);
  FRigVMMemoryStorageStruct::operator=(&this->DefaultWorkMemoryStorage,pFVar1);
  FRigVMMemoryStorageStruct::~FRigVMMemoryStorageStruct(&local_58);
  InvalidateCachedMemory_Internal(this);
  return;
}

// ComputeVMHash @ 14a082250

uint __thiscall URigVM::ComputeVMHash(URigVM *this)

{
  FName *pFVar1;
  int iVar2;
  int iVar3;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar4;
  uint uVar5;
  FString *pFVar6;
  int iVar7;
  FName *pFVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  wchar_t *pwVar12;
  undefined1 local_res8 [8];
  FString local_48;
  FString local_38;
  
  pTVar4 = this->FunctionNamesPtr;
  uVar9 = 0;
  pFVar8 = (FName *)(pTVar4->AllocatorInstance).Data;
  iVar2 = pTVar4->ArrayNum;
  pFVar1 = pFVar8 + iVar2;
  while( true ) {
    if (pTVar4->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar8 == pFVar1) break;
    pFVar6 = ::FName::ToString(pFVar8,&local_48);
    iVar3 = (pFVar6->Data).ArrayNum;
    iVar7 = iVar3 + -1;
    if (iVar3 == 0) {
      pwVar12 = L"";
      iVar7 = 0;
    }
    else {
      pwVar12 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar12);
    uVar9 = uVar9 - uVar5 ^ uVar5 >> 0xd;
    uVar11 = (-0x61c88647 - uVar9) - uVar5 ^ uVar9 << 8;
    uVar5 = (uVar5 - uVar11) - uVar9 ^ uVar11 >> 0xd;
    uVar9 = (uVar9 - uVar5) - uVar11 ^ uVar5 >> 0xc;
    uVar11 = (uVar11 - uVar9) - uVar5 ^ uVar9 << 0x10;
    uVar5 = (uVar5 - uVar11) - uVar9 ^ uVar11 >> 5;
    uVar9 = (uVar9 - uVar5) - uVar11 ^ uVar5 >> 3;
    uVar11 = (uVar11 - uVar9) - uVar5 ^ uVar9 << 10;
    uVar9 = (uVar5 - uVar11) - uVar9 ^ uVar11 >> 0xf;
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    pFVar8 = pFVar8 + 1;
  }
  uVar5 = FRigVMByteCode::GetByteCodeHash(this->ByteCodePtr);
  iVar2 = (this->ExternalVariables).ArrayNum;
  pFVar8 = (FName *)(this->ExternalVariables).AllocatorInstance.Data;
  uVar11 = uVar9 - uVar5 ^ uVar5 >> 0xd;
  uVar9 = (-0x61c88647 - uVar11) - uVar5 ^ uVar11 << 8;
  uVar5 = (uVar5 - uVar9) - uVar11 ^ uVar9 >> 0xd;
  uVar11 = (uVar11 - uVar9) - uVar5 ^ uVar5 >> 0xc;
  uVar9 = (uVar9 - uVar11) - uVar5 ^ uVar11 << 0x10;
  uVar5 = (uVar5 - uVar9) - uVar11 ^ uVar9 >> 5;
  uVar11 = (uVar11 - uVar5) - uVar9 ^ uVar5 >> 3;
  uVar9 = (uVar9 - uVar11) - uVar5 ^ uVar11 << 10;
  uVar9 = (uVar5 - uVar9) - uVar11 ^ uVar9 >> 0xf;
  pFVar1 = pFVar8 + (longlong)iVar2 * 5;
  while( true ) {
    if ((this->ExternalVariables).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FRigVMExternalVariableDef_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar1) break;
    pFVar6 = ::FName::ToString(pFVar8,&local_48);
    iVar3 = (pFVar6->Data).ArrayNum;
    iVar7 = iVar3 + -1;
    if (iVar3 == 0) {
      pwVar12 = L"";
      iVar7 = 0;
    }
    else {
      pwVar12 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar12);
    uVar11 = uVar9 - uVar5 ^ uVar5 >> 0xd;
    uVar9 = (-0x61c88647 - uVar11) - uVar5 ^ uVar11 << 8;
    uVar10 = (uVar5 - uVar9) - uVar11 ^ uVar9 >> 0xd;
    uVar5 = (uVar11 - uVar10) - uVar9 ^ uVar10 >> 0xc;
    uVar9 = (uVar9 - uVar5) - uVar10 ^ uVar5 << 0x10;
    uVar11 = (uVar10 - uVar9) - uVar5 ^ uVar9 >> 5;
    uVar5 = (uVar5 - uVar11) - uVar9 ^ uVar11 >> 3;
    uVar9 = (uVar9 - uVar5) - uVar11 ^ uVar5 << 10;
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    pFVar6 = ::FName::ToString(pFVar8 + 2,&local_38);
    iVar3 = (pFVar6->Data).ArrayNum;
    iVar7 = iVar3 + -1;
    if (iVar3 == 0) {
      pwVar12 = L"";
      iVar7 = 0;
    }
    else {
      pwVar12 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar12);
    uVar11 = ((uVar11 - uVar9) - uVar5 ^ uVar9 >> 0xf) - uVar10 ^ uVar10 >> 0xd;
    uVar9 = (-0x61c88647 - uVar10) - uVar11 ^ uVar11 << 8;
    uVar5 = (uVar10 - uVar9) - uVar11 ^ uVar9 >> 0xd;
    uVar11 = (uVar11 - uVar5) - uVar9 ^ uVar5 >> 0xc;
    uVar9 = (uVar9 - uVar11) - uVar5 ^ uVar11 << 0x10;
    uVar5 = (uVar5 - uVar9) - uVar11 ^ uVar9 >> 5;
    uVar11 = (uVar11 - uVar5) - uVar9 ^ uVar5 >> 3;
    uVar9 = (uVar9 - uVar11) - uVar5 ^ uVar11 << 10;
    uVar9 = (uVar5 - uVar9) - uVar11 ^ uVar9 >> 0xf;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar8 = pFVar8 + 5;
  }
  uVar5 = FRigVMMemoryStorageStruct::GetMemoryHash(&this->LiteralMemoryStorage);
  uVar9 = uVar9 - uVar5 ^ uVar5 >> 0xd;
  uVar11 = (-0x61c88647 - uVar5) - uVar9 ^ uVar9 << 8;
  uVar5 = (uVar5 - uVar11) - uVar9 ^ uVar11 >> 0xd;
  uVar9 = (uVar9 - uVar5) - uVar11 ^ uVar5 >> 0xc;
  uVar10 = (uVar11 - uVar9) - uVar5 ^ uVar9 << 0x10;
  uVar11 = (uVar5 - uVar10) - uVar9 ^ uVar10 >> 5;
  uVar5 = (uVar9 - uVar11) - uVar10 ^ uVar11 >> 3;
  uVar10 = (uVar10 - uVar5) - uVar11 ^ uVar5 << 10;
  uVar9 = FRigVMMemoryStorageStruct::GetMemoryHash(&this->DefaultWorkMemoryStorage);
  uVar11 = ((uVar11 - uVar10) - uVar5 ^ uVar10 >> 0xf) - uVar9 ^ uVar9 >> 0xd;
  uVar5 = (-0x61c88647 - uVar9) - uVar11 ^ uVar11 << 8;
  uVar9 = (uVar9 - uVar5) - uVar11 ^ uVar5 >> 0xd;
  uVar11 = (uVar11 - uVar9) - uVar5 ^ uVar9 >> 0xc;
  uVar5 = (uVar5 - uVar11) - uVar9 ^ uVar11 << 0x10;
  uVar9 = (uVar9 - uVar5) - uVar11 ^ uVar5 >> 5;
  uVar11 = (uVar11 - uVar9) - uVar5 ^ uVar9 >> 3;
  uVar5 = (uVar5 - uVar11) - uVar9 ^ uVar11 << 10;
  return (uVar9 - uVar5) - uVar11 ^ uVar5 >> 0xf;
}

// ContainsEntry @ 14a082660

bool __thiscall URigVM::ContainsEntry(URigVM *this,FName *param_1)

{
  int iVar1;
  
  iVar1 = FRigVMByteCode::FindEntryIndex(this->ByteCodePtr,param_1);
  return iVar1 != -1;
}

// CopyDataForSerialization @ 14a082710

void __thiscall URigVM::CopyDataForSerialization(URigVM *this,URigVM *param_1)

{
  int *piVar1;
  FRWFallbackSafeAccessDetectorDefinition *pFVar2;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FRigVMParameter,TSizedDefaultAllocator<32>_> *pTVar4;
  TSharedPtr<FRigVMRegistry_NoLock,1> *pTVar5;
  FRWFallbackSafeAccessDetectorDefinition FVar6;
  int iVar7;
  FScriptContainerElement *_Src;
  FRigVMParameter *pFVar8;
  FRigVMRegistry_NoLock *pFVar9;
  code *pcVar10;
  bool bVar11;
  TSharedRef<FRigVMRegistry_NoLock,1> *pTVar12;
  FRigVMRegistry_NoLock *local_48;
  FSharedReferencer<1> local_40;
  undefined8 local_38;
  FSharedReferencer<1> FStack_30;
  TSharedRef<FRigVMRegistry_NoLock,1> local_28;
  
  if (param_1 == (URigVM *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("InVM",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVM.cpp"
                        ,0x159,L"");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  LOCK();
  pFVar2 = &this->AccessDetector;
  FVar6 = *pFVar2;
  *pFVar2 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar2 + 0x100000);
  UNLOCK();
  if ((FVar6 != (FRWFallbackSafeAccessDetectorDefinition)0x0) &&
     (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                        ,0x72,
                        L"Acquiring a write access while there are ongoing read or write access");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  Reset_Internal(this);
  this->CachedVMHash = param_1->CachedVMHash;
  TArray<FRigVMPropertyPathDescription,TSizedDefaultAllocator<32>_>::operator=
            (&this->ExternalPropertyPathDescriptions,&param_1->ExternalPropertyPathDescriptions);
  pTVar3 = &this->FunctionNamesStorage;
  if (pTVar3 != &param_1->FunctionNamesStorage) {
    iVar7 = (param_1->FunctionNamesStorage).ArrayNum;
    piVar1 = &(this->FunctionNamesStorage).ArrayMax;
    _Src = (param_1->FunctionNamesStorage).AllocatorInstance.Data;
    (this->FunctionNamesStorage).ArrayNum = iVar7;
    if ((iVar7 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar7,*piVar1,&pTVar3->AllocatorInstance,iVar7,piVar1);
      if (iVar7 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,_Src,(longlong)iVar7 << 3);
      }
    }
  }
  FRigVMByteCode::operator=(&this->ByteCodeStorage,&param_1->ByteCodeStorage);
  pTVar4 = &this->Parameters;
  if (pTVar4 != &param_1->Parameters) {
    DestructItems<FRigVMParameter,int>
              ((FRigVMParameter *)(pTVar4->AllocatorInstance).Data,(this->Parameters).ArrayNum);
    iVar7 = (param_1->Parameters).ArrayNum;
    piVar1 = &(this->Parameters).ArrayMax;
    pFVar8 = (FRigVMParameter *)(param_1->Parameters).AllocatorInstance.Data;
    (this->Parameters).ArrayNum = iVar7;
    if ((iVar7 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,iVar7,*piVar1,&pTVar4->AllocatorInstance,iVar7,piVar1);
      ConstructItems<FRigVMParameter,FRigVMParameter,int>
                ((pTVar4->AllocatorInstance).Data,pFVar8,iVar7);
    }
  }
  if (&this->OperandToDebugRegisters != &param_1->OperandToDebugRegisters) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->OperandToDebugRegisters).field_0x38,
               (int *)&(this->OperandToDebugRegisters).field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->OperandToDebugRegisters).field_0x38,
               *(int *)&(param_1->OperandToDebugRegisters).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&this->OperandToDebugRegisters,
                (TSparseArray<TSparseSetElement<TTuple<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->OperandToDebugRegisters);
  }
  FRigVMMemoryStorageStruct::operator=(&this->LiteralMemoryStorage,&param_1->LiteralMemoryStorage);
  FRigVMMemoryStorageStruct::operator=
            (&this->DefaultWorkMemoryStorage,&param_1->DefaultWorkMemoryStorage);
  FRigVMMemoryStorageStruct::operator=
            (&this->DefaultDebugMemoryStorage,&param_1->DefaultDebugMemoryStorage);
  pTVar5 = &this->LocalizedRegistry;
  local_38 = 0;
  FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar5 != (TSharedPtr<FRigVMRegistry_NoLock,1> *)&local_38) {
    pTVar5->Object = (FRigVMRegistry_NoLock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->LocalizedRegistry).SharedReferenceCount,&FStack_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_30.ReferenceController);
  pFVar9 = (param_1->LocalizedRegistry).Object;
  if (pFVar9 != (FRigVMRegistry_NoLock *)0x0) {
    pTVar12 = FRigVMRegistry_NoLock::CloneLocalizedRegistry(&local_28,pFVar9);
    local_40.ReferenceController = (pTVar12->SharedReferenceCount).ReferenceController;
    local_48 = pTVar12->Object;
    if (local_40.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_40.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_40.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar5 != (TSharedPtr<FRigVMRegistry_NoLock,1> *)&local_48) {
      pTVar5->Object = local_48;
      local_48 = (FRigVMRegistry_NoLock *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->LocalizedRegistry).SharedReferenceCount,&local_40);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_40.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  LOCK();
  pFVar2 = &this->AccessDetector;
  FVar6 = *pFVar2;
  *pFVar2 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar2 + -0x100000);
  UNLOCK();
  if ((FVar6 != (FRWFallbackSafeAccessDetectorDefinition)0x100000) &&
     (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                        ,0x7d,
                        L"Another thread asked to have a read or write access during this write access"
                       );
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  return;
}

// CopyFrom @ 14a082a10

void __thiscall
URigVM::CopyFrom(URigVM *this,URigVM *param_1,bool param_2,bool param_3,bool param_4,bool param_5,
                bool param_6)

{
  return;
}

// CopyOperandForDebuggingImpl @ 14a082a60

void __thiscall
URigVM::CopyOperandForDebuggingImpl
          (URigVM *this,FRigVMExtendedExecuteContext *param_1,FRigVMOperand *param_2,
          FRigVMMemoryHandle *param_3,FRigVMOperand *param_4)

{
  return;
}

// CreateLocalizedRegistryIfRequired @ 14a082e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigVMOpCode": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall URigVM::CreateLocalizedRegistryIfRequired(URigVM *this,bool param_1)

{
  FRigVMOperand *pFVar1;
  int *piVar2;
  int *piVar3;
  atomic<int> *paVar4;
  FRigVMOperand *pFVar5;
  FScriptContainerElement *pFVar6;
  atomic<int> aVar7;
  ERigVMMemoryType EVar8;
  ushort uVar9;
  atomic<unsigned_int> aVar10;
  int iVar11;
  FRigVMByteCode *this_00;
  FRigVMFunction *this_01;
  undefined8 *puVar12;
  code *pcVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  TConsoleVariableData<bool> *pTVar17;
  bool bVar18;
  undefined1 uVar19;
  uint uVar20;
  int iVar21;
  atomic<unsigned_int> aVar22;
  longlong lVar23;
  FProperty *pFVar24;
  FRigVMRegistry_RWLock *pFVar25;
  FRigVMRegistry_NoLock *pFVar26;
  undefined8 uVar27;
  TArray<FRigVMFunction_const_*,TSizedDefaultAllocator<32>_> *pTVar28;
  FRigVMTemplate *pFVar29;
  FRigVMTemplateArgument *pFVar30;
  FName *pFVar31;
  FScriptContainerElement *pFVar32;
  FRigVMTemplateArgumentInfo *pFVar33;
  FRigVMDispatchFactory *this_02;
  longlong *plVar34;
  longlong lVar35;
  byte bVar36;
  ulonglong uVar37;
  wchar_t *pwVar38;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar39;
  ulonglong uVar40;
  FScriptContainerElement *pFVar41;
  int iVar42;
  ushort *puVar43;
  ForAnyElementType FVar44;
  ForAnyElementType FVar45;
  undefined1 *puVar46;
  TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *pTVar47;
  uint uVar48;
  undefined1 auStackY_728 [32];
  undefined1 local_6d0;
  undefined1 local_6cf;
  undefined1 local_6ce;
  undefined1 local_6cd;
  undefined1 local_6cc;
  undefined1 local_6cb;
  undefined1 local_6ca [2];
  TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> local_6c8;
  ForAnyElementType local_6b8;
  undefined8 local_6b0;
  ForAnyElementType local_6a8;
  undefined8 local_6a0;
  undefined8 *local_698;
  TSharedRef<FRigVMRegistry_NoLock,1> local_690;
  FRigVMRegistryHandle local_680;
  FRigVMTemplate *local_678;
  TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> local_670;
  longlong local_660;
  FRigVMFunction *local_658;
  TArray<FRigVMFunction_const_*,TSizedDefaultAllocator<32>_> *local_650;
  LPCRITICAL_SECTION local_648;
  int local_640;
  uint uStack_63c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_638;
  uint local_630;
  uint uStack_62c;
  uint uStack_628;
  undefined4 uStack_624;
  FScriptContainerElement *local_620;
  TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> local_618;
  FConditionalScopeLock local_608;
  FName local_5e8;
  FName local_5e0;
  FRigVMRegistry_NoLock *local_5d8;
  FSharedReferencer<1> local_5d0;
  longlong *local_5c8;
  longlong lStack_5c0;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  int local_5a0;
  undefined4 uStack_59c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_598;
  FName local_578;
  FName local_570;
  FName local_568;
  FName local_560;
  FName local_558 [2];
  undefined8 local_548;
  undefined4 local_540;
  undefined8 local_538;
  undefined4 local_530;
  undefined8 local_528;
  undefined4 local_520;
  undefined8 local_518;
  FSharedReferencer<1> FStack_510;
  FName local_508;
  FName local_500;
  FString local_4f8;
  int local_4e8;
  FRigVMTemplateArgumentInfo *local_4e0;
  longlong *local_4d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_4d0;
  undefined8 uStack_4b0;
  TArrayView<FRigVMOperand_const_,int> local_4a8;
  FString local_498;
  FString local_488;
  FString local_478;
  FString local_468;
  FString local_458;
  FString local_448;
  FString local_438;
  FString local_428;
  FString local_418;
  FString local_408;
  FString local_3f8;
  FString local_3e8;
  FString local_3d8;
  FString local_3c8;
  FString local_3b8;
  FString local_3a8;
  FString local_398;
  FString local_388;
  FString local_378;
  FString local_368;
  FString local_358;
  FString local_348;
  FConditionalScopeLock local_338;
  FString local_318;
  FString local_308;
  longlong *local_2f8;
  undefined8 uStack_2f0;
  TBitArray<FDefaultBitArrayAllocator> *local_2e8;
  undefined8 uStack_2e0;
  uint local_2d8;
  undefined4 uStack_2d4;
  int iStack_2d0;
  undefined4 uStack_2cc;
  undefined1 local_2c8 [12];
  undefined1 local_2bc [20];
  undefined1 local_2a8 [32];
  undefined1 *local_288;
  uint local_280;
  undefined4 local_27c;
  undefined4 local_278;
  int local_274;
  ForElementType<FSetElementId> local_268;
  int local_260;
  longlong local_258 [5];
  longlong *plStack_230;
  undefined1 local_228 [24];
  undefined8 uStack_210;
  void *local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  void *local_1e8;
  ulonglong uStack_1e0;
  undefined1 local_1d8 [128];
  undefined1 local_158 [64];
  ForAnyElementType local_118;
  undefined1 local_108 [72];
  undefined4 local_c0;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_728;
  lpCriticalSection = (LPCRITICAL_SECTION)&this->CreateLocalizedRegistryMutex;
  local_648 = lpCriticalSection;
  if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                          ,0x1b,L""), bVar18)) {
    pcVar13 = (code *)swi(3);
    uVar19 = (*pcVar13)();
    return (bool)uVar19;
  }
  EnterCriticalSection(lpCriticalSection);
  pTVar17 = CVarRigVMEnableLocalizedRegistry.Ref;
  if ((this->LocalizedRegistry).Object == (FRigVMRegistry_NoLock *)0x0) {
    if (!param_1) {
      bVar18 = IsInParallelGameThread();
      if ((bVar18) || (bVar18 = IsInGameThread(), bVar18)) {
        lVar23 = 0;
      }
      else {
        lVar23 = 1;
      }
      if (pTVar17->ShadowedValue[lVar23] == false) {
        bVar18 = false;
        goto LAB_14a084fe7;
      }
    }
    FRigVMRegistry_NoLock::CreateLocalizedRegistry(&local_690);
    FRigVMRegistryHandle::FRigVMRegistryHandle(&local_680,local_690.Object);
    RefreshInstructionsIfRequired(this);
    if ((this->ExternalPropertyPaths).ArrayNum == 0) {
      RefreshExternalPropertyPaths(this);
    }
    ResolveFunctionsIfRequired(this);
    this_00 = this->ByteCodePtr;
    uVar48 = 0;
    if (0 < (this->Instructions).Instructions.ArrayNum) {
      do {
        uVar39 = 0;
        if ((int)uVar48 < (this->Instructions).Instructions.ArrayNum) {
          uVar39 = ~uVar48 >> 0x1f;
        }
        if ((uVar39 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar13 = (code *)swi(3);
          uVar19 = (*pcVar13)();
          return (bool)uVar19;
        }
        FRigVMByteCode::GetOperandsForOp
                  (this_00,&local_4a8,
                   (FRigVMInstruction *)
                   ((this->Instructions).Instructions.AllocatorInstance.Data +
                   (longlong)(int)uVar48 * 0xc));
        pFVar5 = local_4a8.DataPtr + local_4a8.ArrayNum;
        if (local_4a8.DataPtr != pFVar5) {
          puVar43 = &(local_4a8.DataPtr)->RegisterOffset;
          do {
            EVar8 = ((FRigVMOperand *)(puVar43 + -2))->MemoryType;
            if (EVar8 == Work) {
              if (*puVar43 != 0xffff) {
                uVar20 = (uint)*puVar43;
                uVar39 = 0;
                if ((int)uVar20 < (this->DefaultWorkMemoryStorage).PropertyPaths.ArrayNum) {
                  uVar39 = ~uVar20 >> 0x1f;
                }
                if ((uVar39 == 0) &&
                   (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar18)) {
                  pcVar13 = (code *)swi(3);
                  uVar19 = (*pcVar13)();
                  return (bool)uVar19;
                }
                pFVar24 = FRigVMPropertyPath::GetTailProperty
                                    ((FRigVMPropertyPath *)
                                     ((this->DefaultWorkMemoryStorage).PropertyPaths.
                                      AllocatorInstance.Data + (ulonglong)uVar20 * 0x20));
                goto LAB_14a0832cd;
              }
              uVar9 = puVar43[-1];
              pTVar47 = &(this->DefaultWorkMemoryStorage).LinkedProperties;
              iVar42 = (this->DefaultWorkMemoryStorage).LinkedProperties.ArrayNum;
              if (uVar9 == 0xffff) {
                uVar39 = 0xffffffff;
LAB_14a08328d:
                bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar18) {
                  pcVar13 = (code *)swi(3);
                  uVar19 = (*pcVar13)();
                  return (bool)uVar19;
                }
              }
              else {
LAB_14a083279:
                uVar39 = (uint)uVar9;
                uVar20 = 0;
                if ((int)uVar39 < iVar42) {
                  uVar20 = ~uVar39 >> 0x1f;
                }
                if (uVar20 == 0) goto LAB_14a08328d;
              }
              pFVar24 = *(FProperty **)
                         ((pTVar47->AllocatorInstance).Data + (longlong)(int)uVar39 * 8);
LAB_14a0832cd:
              if (pFVar24 != (FProperty *)0x0) {
                FRigVMTemplateArgument::Make_NoLock
                          ((FRigVMTemplateArgument *)local_b8,pFVar24,&local_680);
                if (local_b8._64_8_ != 0) {
                  plVar34 = (longlong *)(local_b8 + 0x50);
                  if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
                    plVar34 = (longlong *)local_b8._104_8_;
                  }
                  (**(code **)(*plVar34 + 0x10))();
                }
                if ((FScriptContainerElement *)local_b8._40_8_ != (FScriptContainerElement *)0x0) {
                  FMemory::Free((void *)local_b8._40_8_);
                }
                if ((FScriptContainerElement *)local_b8._16_8_ != (FScriptContainerElement *)0x0) {
                  FMemory::Free((void *)local_b8._16_8_);
                }
              }
            }
            else {
              if (EVar8 == Literal) {
                if (*puVar43 == 0xffff) {
                  uVar9 = puVar43[-1];
                  pTVar47 = &(this->LiteralMemoryStorage).LinkedProperties;
                  iVar42 = (this->LiteralMemoryStorage).LinkedProperties.ArrayNum;
                  if (uVar9 != 0xffff) goto LAB_14a083279;
                  uVar39 = 0xffffffff;
                  goto LAB_14a08328d;
                }
                uVar20 = (uint)*puVar43;
                uVar39 = 0;
                if ((int)uVar20 < (this->LiteralMemoryStorage).PropertyPaths.ArrayNum) {
                  uVar39 = ~uVar20 >> 0x1f;
                }
                if ((uVar39 == 0) &&
                   (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar18)) {
                  pcVar13 = (code *)swi(3);
                  uVar19 = (*pcVar13)();
                  return (bool)uVar19;
                }
                pFVar24 = FRigVMPropertyPath::GetTailProperty
                                    ((FRigVMPropertyPath *)
                                     ((this->LiteralMemoryStorage).PropertyPaths.AllocatorInstance.
                                      Data + (ulonglong)uVar20 * 0x20));
                goto LAB_14a0832cd;
              }
              if (EVar8 == External) {
                if (*puVar43 == 0xffff) {
                  if (puVar43[-1] == 0xffff) {
                    uVar20 = 0xffffffff;
LAB_14a08311d:
                    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       );
                    if (bVar18) {
                      pcVar13 = (code *)swi(3);
                      uVar19 = (*pcVar13)();
                      return (bool)uVar19;
                    }
                  }
                  else {
                    uVar20 = (uint)puVar43[-1];
                    uVar39 = 0;
                    if ((int)uVar20 < (this->ExternalVariables).ArrayNum) {
                      uVar39 = ~uVar20 >> 0x1f;
                    }
                    if (uVar39 == 0) goto LAB_14a08311d;
                  }
                  pFVar24 = *(FProperty **)
                             ((this->ExternalVariables).AllocatorInstance.Data +
                             (longlong)(int)uVar20 * 0x28 + 8);
                  goto LAB_14a0832cd;
                }
                if ((this->ExternalPropertyPaths).ArrayNum <= (int)(uint)*puVar43) {
                  RefreshExternalPropertyPaths(this);
                }
                if (*puVar43 == 0xffff) {
                  uVar20 = 0xffffffff;
LAB_14a0830a5:
                  bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar18) {
                    pcVar13 = (code *)swi(3);
                    uVar19 = (*pcVar13)();
                    return (bool)uVar19;
                  }
                }
                else {
                  uVar20 = (uint)*puVar43;
                  uVar39 = 0;
                  if ((int)uVar20 < (this->ExternalPropertyPaths).ArrayNum) {
                    uVar39 = ~uVar20 >> 0x1f;
                  }
                  if (uVar39 == 0) goto LAB_14a0830a5;
                }
                pFVar24 = FRigVMPropertyPath::GetTailProperty
                                    ((FRigVMPropertyPath *)
                                     ((this->ExternalPropertyPaths).AllocatorInstance.Data +
                                     (longlong)(int)uVar20 * 0x20));
                goto LAB_14a0832cd;
              }
            }
            pFVar1 = (FRigVMOperand *)(puVar43 + 1);
            puVar43 = puVar43 + 3;
          } while (pFVar1 != pFVar5);
        }
        uVar48 = uVar48 + 1;
        lpCriticalSection = local_648;
      } while ((int)uVar48 < (this->Instructions).Instructions.ArrayNum);
    }
    pFVar25 = FRigVMRegistry_RWLock::Get();
    FRigVMRegistry_RWLock::FConditionalScopeLock::FConditionalScopeLock
              (&local_338,pFVar25,LockType_Read,true);
    pFVar41 = (this->FunctionsStorage).AllocatorInstance.Data;
    iVar42 = (this->FunctionsStorage).ArrayNum;
    pFVar32 = pFVar41 + (longlong)iVar42 * 8;
    while( true ) {
      if ((this->FunctionsStorage).ArrayNum != iVar42) {
        local_6ca[0] = 0;
        `TCheckedPointerIterator<FRigVMFunction_const_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_6ca);
      }
      if (pFVar41 == pFVar32) break;
      this_01 = *(FRigVMFunction **)pFVar41;
      if ((this_01 != (FRigVMFunction *)0x0) && (this_01->Factory != (FRigVMDispatchFactory *)0x0))
      {
        local_618.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_618.ArrayNum = 0;
        local_618.ArrayMax = 0;
        FRigVMFunction::GetArgumentTypeIndices_NoLock
                  (this_01,(FRigVMRegistryHandle *)&local_338,&local_618);
        iVar21 = local_618.ArrayNum;
        pFVar6 = local_618.AllocatorInstance.Data + (longlong)local_618.ArrayNum * 0xc;
        FVar44.Data = local_618.AllocatorInstance.Data;
        while( true ) {
          if (local_618.ArrayNum != iVar21) {
            local_6d0 = 0;
            `TCheckedPointerIterator<TRigVMTypeIndex,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_6d0);
          }
          if (FVar44.Data == pFVar6) break;
          if (*(int *)(FVar44.Data + 8) != -1) {
            pFVar26 = FRigVMRegistryHandle::operator->((FRigVMRegistryHandle *)&local_338);
            local_540 = *(undefined4 *)(FVar44.Data + 8);
            local_548 = *(undefined8 *)FVar44.Data;
            uVar27 = (**(code **)(pFVar26->_padding_ + 0xe8))(pFVar26,&local_548);
            (**(code **)((local_690.Object)->_padding_ + 0xc0))(local_690.Object,local_2c8,uVar27,0)
            ;
          }
          FVar44.Data = FVar44.Data + 0xc;
        }
        if (local_618.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_618.AllocatorInstance.Data);
        }
      }
      pFVar41 = pFVar41 + 8;
    }
    FRigVMRegistry_RWLock::FConditionalScopeLock::~FConditionalScopeLock(&local_338);
    local_2a8._0_8_ = 0;
    local_2a8._8_8_ = 0;
    local_288 = (undefined1 *)0x0;
    pFVar41 = (this->FunctionsStorage).AllocatorInstance.Data;
    iVar42 = (this->FunctionsStorage).ArrayNum;
    local_280 = 0;
    local_27c = 0x80;
    local_278 = 0xffffffff;
    pFVar32 = pFVar41 + (longlong)iVar42 * 8;
    local_274 = 0;
    local_268 = (ForElementType<FSetElementId>)0x0;
    local_260 = 0;
    while( true ) {
      if ((this->FunctionsStorage).ArrayNum != iVar42) {
        local_6cf = 0;
        `TCheckedPointerIterator<FRigVMFunction_const_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_6cf);
      }
      if (pFVar41 == pFVar32) break;
      local_660 = *(longlong *)pFVar41;
      if (local_660 != 0) {
        uVar37 = *(ulonglong *)(local_660 + 0x18);
        if (uVar37 != 0) {
          uVar48 = ((uint)(uVar37 >> 0x14) & 0xffff ^ (uint)(uVar37 >> 4)) * -0x7a143595;
          uVar48 = (uVar48 >> 0xd ^ uVar48) * -0x3d4d51cb;
          pTVar28 = TMapBase<FRigVMDispatchFactory_const_*,TArray<FRigVMFunction_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigVMDispatchFactory_const_*,TArray<FRigVMFunction_const_*,TSizedDefaultAllocator<32>_>,0>_>
                    ::FindOrAddImpl<FRigVMDispatchFactory_const_*_const_&>
                              ((TMapBase<FRigVMDispatchFactory_const_*,TArray<FRigVMFunction_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigVMDispatchFactory_const_*,TArray<FRigVMFunction_const_*,TSizedDefaultAllocator<32>_>,0>_>
                                *)local_2a8,uVar48 >> 0x10 ^ uVar48,
                               (FRigVMDispatchFactory **)(local_660 + 0x18));
          pFVar6 = (pTVar28->AllocatorInstance).Data;
          if (((pFVar6 <= (FScriptContainerElement *)&local_660) &&
              ((FScriptContainerElement *)&local_660 < pFVar6 + (longlong)pTVar28->ArrayMax * 8)) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar18)) {
            pcVar13 = (code *)swi(3);
            uVar19 = (*pcVar13)();
            return (bool)uVar19;
          }
          iVar21 = pTVar28->ArrayNum;
          if (iVar21 == pTVar28->ArrayMax) {
            iVar21 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&pTVar28->AllocatorInstance,&pTVar28->ArrayMax);
          }
          pTVar28->ArrayNum = iVar21 + 1;
          *(longlong *)((pTVar28->AllocatorInstance).Data + (longlong)iVar21 * 8) = local_660;
        }
      }
      pFVar41 = pFVar41 + 8;
    }
    local_598.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_2a8 + 0x10);
    local_598._padding_._4_4_ = 1;
    local_598._padding_._0_4_ = 0;
    local_598.UnvisitedBitMask = 0xffffffff;
    local_598.CurrentBitIndex = 0;
    local_598.BaseBitIndex = 0;
    if (local_280 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_598);
    }
    uVar20 = local_280;
    lStack_5c0 = CONCAT44(local_598._padding_._4_4_,(undefined4)local_598._padding_);
    local_5c8 = (longlong *)local_2a8;
    uStack_5b0._4_4_ = local_598.CurrentBitIndex;
    uStack_5b0._0_4_ = local_598.UnvisitedBitMask;
    uStack_5a8._4_4_ = local_598._28_4_;
    uStack_5a8._0_4_ = local_598.BaseBitIndex;
    bVar36 = (byte)local_280 & 0x1f;
    local_5a0 = local_2a8._8_4_ - local_274;
    pTStack_5b8 = local_598.Array;
    iVar42 = (int)local_280 >> 5;
    uStack_63c = 1 << bVar36;
    uVar39 = local_280 & 0xffffffe0;
    uVar48 = -1 << bVar36;
    pTStack_638 = (TBitArray<FDefaultBitArrayAllocator> *)(local_2a8 + 0x10);
    uStack_62c = local_280;
    uStack_4b0 = CONCAT44(uStack_59c,local_5a0);
    TStack_4d0.Array = local_598.Array;
    local_640 = iVar42;
    local_630 = uVar48;
    uStack_628 = uVar39;
    local_4d8 = local_5c8;
    TStack_4d0._padding_ = lStack_5c0;
    TStack_4d0._16_8_ = uStack_5b0;
    TStack_4d0._24_8_ = uStack_5a8;
    if (((int)local_280 < 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar18)) {
      pcVar13 = (code *)swi(3);
      uVar19 = (*pcVar13)();
      return (bool)uVar19;
    }
    if (uVar20 != local_280) {
      puVar46 = local_2a8 + 0x10;
      if (local_288 != (undefined1 *)0x0) {
        puVar46 = local_288;
      }
      uVar48 = uVar48 & *(uint *)(puVar46 + (longlong)iVar42 * 4);
      while (uVar48 == 0) {
        uStack_628 = uVar39 + 0x20;
        local_640 = iVar42 + 1;
        uStack_62c = local_280;
        if ((int)((local_280 - 1) + ((int)(local_280 - 1) >> 0x1f & 0x1fU)) >> 5 < local_640)
        goto LAB_14a0837d4;
        uVar48 = *(uint *)(puVar46 + (longlong)iVar42 * 4 + 4);
        local_630 = 0xffffffff;
        iVar42 = local_640;
        uVar39 = uStack_628;
      }
      uStack_63c = -uVar48 & uVar48;
      uVar37 = (ulonglong)uStack_63c * 2 + 1;
      lVar23 = 0x3f;
      if (uVar37 != 0) {
        for (; uVar37 >> lVar23 == 0; lVar23 = lVar23 + -1) {
        }
      }
      local_4e8 = (int)lVar23;
      uStack_62c = (uVar39 - 1) + local_4e8;
      if ((int)local_280 < (int)uStack_62c) {
        uStack_62c = local_280;
      }
    }
LAB_14a0837d4:
    lStack_5c0 = CONCAT44(uStack_63c,local_640);
    local_5c8 = (longlong *)local_2a8;
    uStack_5b0 = CONCAT44(uStack_62c,local_630);
    uStack_5a8 = CONCAT44(uStack_624,uStack_628);
    local_5a0 = local_2a8._8_4_ - local_274;
    pTStack_5b8 = pTStack_638;
    local_2e8 = pTStack_638;
    local_2d8 = uStack_628;
    uStack_2d4 = uStack_624;
    uStack_2cc = uStack_59c;
    local_2f8 = local_5c8;
    uStack_2f0 = lStack_5c0;
    uStack_2e0 = uStack_5b0;
    iStack_2d0 = local_5a0;
    while( true ) {
      plVar34 = local_4d8;
      if ((int)local_4d8[1] - *(int *)((longlong)local_4d8 + 0x34) != (int)uStack_4b0) {
        local_6ce = 0;
        `TSparseArray<TSparseSetElement<TTuple<FRigVMDispatchFactory_const_*,TArray<FRigVMFunction_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_6ce);
      }
      if (((TStack_4d0.CurrentBitIndex == uStack_2e0._4_4_) && (TStack_4d0.Array == local_2e8)) &&
         (plVar34 == local_2f8)) break;
      lVar23 = *plVar34;
      pFVar29 = *(FRigVMTemplate **)((longlong)TStack_4d0.CurrentBitIndex * 0x20 + lVar23);
      local_678 = pFVar29;
      if (pFVar29 == (FRigVMTemplate *)0x0) {
        if (1 < (byte)LogRigVM._0_1_) {
          UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_358,(UObject *)0x0);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRigVM);
LAB_14a084fad:
          if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_358.Data.AllocatorInstance.Data);
          }
        }
        goto LAB_14a084fb7;
      }
      local_620 = *(FScriptContainerElement **)&(pFVar29->ExecuteArguments).ArrayNum;
      if (local_620 == (FScriptContainerElement *)0x0) {
        if (1 < (byte)LogRigVM._0_1_) {
          UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_368,(UObject *)0x0);
          local_558[0] = *(FName *)&pFVar29->field_0xc;
          ::FName::ToString(local_558,&local_378);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRigVM);
          local_358.Data.AllocatorInstance.Data = local_368.Data.AllocatorInstance.Data;
          if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_378.Data.AllocatorInstance.Data);
            local_358.Data.AllocatorInstance.Data = local_368.Data.AllocatorInstance.Data;
          }
          goto LAB_14a084fad;
        }
        goto LAB_14a084fb7;
      }
      local_6b8.Data = (FScriptContainerElement *)0x0;
      pTVar28 = (TArray<FRigVMFunction_const_*,TSizedDefaultAllocator<32>_> *)
                (lVar23 + 8 + (longlong)TStack_4d0.CurrentBitIndex * 0x20);
      local_6b0 = 0;
      local_650 = pTVar28;
      pFVar25 = FRigVMRegistry_RWLock::Get();
      FRigVMRegistryHandle::FRigVMRegistryHandle
                ((FRigVMRegistryHandle *)&local_608,(FRigVMRegistry_NoLock *)pFVar25);
      local_608._padding_._0_1_ = 1;
      local_608.DesiredLockType = LockType_Read;
      aVar10 = pFVar25->WriteLockOwnerThread;
      local_608.Registry = pFVar25;
      aVar22 = (atomic<unsigned_int>)GetCurrentThreadId();
      if (aVar10 != aVar22) {
        AcquireSRWLockShared((PSRWLOCK)&(local_608.Registry)->Lock);
      }
      LOCK();
      paVar4 = &(local_608.Registry)->LockCount;
      aVar7 = *paVar4;
      *paVar4 = (atomic<int>)((int)*paVar4 + 1);
      UNLOCK();
      if (aVar7 == (atomic<int>)0x0) {
        LOCK();
        (local_608.Registry)->LockType =
             (atomic<FRigVMRegistry_NoLock::ELockType>)local_608.DesiredLockType;
        UNLOCK();
      }
      else if (((atomic<FRigVMRegistry_NoLock::ELockType>)local_608.DesiredLockType ==
                (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) &&
              (bVar18 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<_4767296351463538103>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                                   ,0x249,"DesiredLockType != LockType_Write"), bVar18)) {
        pcVar13 = (code *)swi(3);
        uVar19 = (*pcVar13)();
        return (bool)uVar19;
      }
      pFVar29 = FRigVMDispatchFactory::GetTemplate_NoLock
                          ((FRigVMDispatchFactory *)pFVar29,(FRigVMRegistryHandle *)&local_608);
      FRigVMTemplate::GetFlattenedArgumentInfosForFunctions_NoLock
                (pFVar29,&local_670,pTVar28,(FRigVMRegistryHandle *)&local_608);
      if (local_670.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)local_670.ArrayNum);
      }
      if (local_6b0._4_4_ < local_670.ArrayNum) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x50,0x10,local_670.ArrayNum,&local_6b8,(int)local_6b0,
                   (int *)((longlong)&local_6b0 + 4));
      }
      uVar37 = (ulonglong)local_670.ArrayNum;
      local_698 = (undefined8 *)CONCAT44(local_698._4_4_,local_670.ArrayNum);
      local_4e0 = (FRigVMTemplateArgumentInfo *)(local_670.AllocatorInstance.Data + uVar37 * 0x50);
      FVar44.Data = local_670.AllocatorInstance.Data;
      while( true ) {
        pFVar33 = local_4e0;
        uVar40 = 0;
        if (local_670.ArrayNum != (uint)uVar37) {
          local_6cd = 0;
          `TCheckedPointerIterator<FRigVMTemplateArgumentInfo_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_6cd);
        }
        if ((FRigVMTemplateArgumentInfo *)FVar44.Data == pFVar33) break;
        pFVar30 = FRigVMTemplateArgumentInfo::GetArgument_NoLock
                            ((FRigVMTemplateArgumentInfo *)FVar44.Data,
                             (FRigVMTemplateArgument *)local_1d8,(FRigVMRegistryHandle *)&local_608)
        ;
        local_6c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_6c8.ArrayNum = 0;
        local_6c8.ArrayMax = 0;
        uVar48 = (pFVar30->TypeIndices).ArrayNum;
        if ((int)uVar48 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar48);
        }
        if (0 < (int)uVar48) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,uVar48,&local_6c8.AllocatorInstance,0,&local_6c8.ArrayMax);
        }
        iVar42 = (pFVar30->TypeIndices).ArrayNum;
        uVar37 = uVar40;
        if (0 < iVar42) {
          do {
            pFVar25 = local_608.Registry;
            uVar39 = (uint)uVar40;
            pcVar13 = *(code **)((local_608.Registry)->_padding_ + 0xe8);
            uVar48 = 0;
            if ((int)uVar39 < iVar42) {
              uVar48 = ~uVar39 >> 0x1f;
            }
            if ((uVar48 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar13 = (code *)swi(3);
              uVar19 = (*pcVar13)();
              return (bool)uVar19;
            }
            pFVar32 = (pFVar30->TypeIndices).AllocatorInstance.Data;
            local_538 = *(undefined8 *)(pFVar32 + uVar37);
            local_530 = *(undefined4 *)(pFVar32 + uVar37 + 8);
            pFVar31 = (FName *)(*pcVar13)(pFVar25,&local_538);
            local_5e8 = *pFVar31;
            local_5e0 = pFVar31[1];
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_5e0 != (FName)0x0)) {
              UE::GC::MarkAsReachable((UObject *)local_5e0);
            }
            if (local_5e8 == (FName)0x0) {
              if (1 < (byte)LogRigVM._0_1_) {
                UObjectBaseUtility::GetPathName
                          ((UObjectBaseUtility *)this,&local_408,(UObject *)0x0);
                local_560 = *(FName *)&local_678->field_0xc;
                ::FName::ToString(&local_560,&local_418);
                UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRigVM);
                if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_418.Data.AllocatorInstance.Data);
                }
LAB_14a084a44:
                if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_408.Data.AllocatorInstance.Data);
                }
              }
LAB_14a084a4e:
              if (local_6c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_6c8.AllocatorInstance.Data);
              }
              if (local_1d8._64_8_ != 0) {
                plVar34 = (longlong *)(local_1d8 + 0x50);
                if ((longlong *)local_1d8._104_8_ != (longlong *)0x0) {
                  plVar34 = (longlong *)local_1d8._104_8_;
                }
                (**(code **)(*plVar34 + 0x10))();
              }
              if ((FScriptContainerElement *)local_1d8._40_8_ != (FScriptContainerElement *)0x0) {
                FMemory::Free((void *)local_1d8._40_8_);
              }
              if ((FScriptContainerElement *)local_1d8._16_8_ != (FScriptContainerElement *)0x0) {
                FMemory::Free((void *)local_1d8._16_8_);
              }
              DestructItems<FRigVMTemplateArgumentInfo,int>
                        ((FRigVMTemplateArgumentInfo *)local_670.AllocatorInstance.Data,
                         local_670.ArrayNum);
              if ((FRigVMTemplateArgumentInfo *)local_670.AllocatorInstance.Data !=
                  (FRigVMTemplateArgumentInfo *)0x0) {
                FMemory::Free(local_670.AllocatorInstance.Data);
              }
              FRigVMRegistry_RWLock::FConditionalScopeLock::~FConditionalScopeLock(&local_608);
              goto LAB_14a084eac;
            }
            pFVar32 = (FScriptContainerElement *)
                      (**(code **)((local_690.Object)->_padding_ + 0xc0))
                                (local_690.Object,local_2bc,&local_5e8,0);
            if (((local_6c8.AllocatorInstance.Data <= pFVar32) &&
                (pFVar32 < local_6c8.AllocatorInstance.Data + (longlong)local_6c8.ArrayMax * 0xc))
               && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar18)) {
              pcVar13 = (code *)swi(3);
              uVar19 = (*pcVar13)();
              return (bool)uVar19;
            }
            uVar48 = local_6c8.ArrayNum;
            if (local_6c8.ArrayNum == local_6c8.ArrayMax) {
              uVar48 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x40c,&local_6c8.AllocatorInstance,&local_6c8.ArrayMax);
            }
            iVar42 = uVar48 + 1;
            local_6c8.ArrayNum = iVar42;
            *(undefined8 *)(local_6c8.AllocatorInstance.Data + (longlong)(int)uVar48 * 0xc) =
                 *(undefined8 *)pFVar32;
            *(undefined4 *)(local_6c8.AllocatorInstance.Data + (longlong)(int)uVar48 * 0xc + 8) =
                 *(undefined4 *)(pFVar32 + 8);
            uVar20 = 0;
            if ((int)uVar48 < iVar42) {
              uVar20 = ~uVar48 >> 0x1f;
            }
            if (uVar20 == 0) {
              bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar18) {
                pcVar13 = (code *)swi(3);
                uVar19 = (*pcVar13)();
                return (bool)uVar19;
              }
              iVar42 = local_6c8.ArrayNum;
            }
            pFVar26 = local_690.Object;
            uVar48 = iVar42 - 1;
            if (*(int *)(local_6c8.AllocatorInstance.Data + (longlong)(int)uVar48 * 0xc + 8) == -1)
            {
              if (1 < (byte)LogRigVM._0_1_) {
                UObjectBaseUtility::GetPathName
                          ((UObjectBaseUtility *)this,&local_428,(UObject *)0x0);
                local_568 = *(FName *)&local_678->field_0xc;
                ::FName::ToString(&local_568,&local_438);
                ::FName::ToString(&local_5e8,&local_448);
                UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRigVM);
                if (local_448.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_448.Data.AllocatorInstance.Data);
                }
                local_408.Data.AllocatorInstance.Data = local_428.Data.AllocatorInstance.Data;
                if (local_438.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_438.Data.AllocatorInstance.Data);
                  local_408.Data.AllocatorInstance.Data = local_428.Data.AllocatorInstance.Data;
                }
                goto LAB_14a084a44;
              }
              goto LAB_14a084a4e;
            }
            pcVar13 = *(code **)((local_690.Object)->_padding_ + 0xe8);
            uVar20 = 0;
            if ((int)uVar48 < iVar42) {
              uVar20 = ~uVar48 >> 0x1f;
            }
            if (uVar20 == 0) {
              bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar18) {
                pcVar13 = (code *)swi(3);
                uVar19 = (*pcVar13)();
                return (bool)uVar19;
              }
              iVar42 = local_6c8.ArrayNum;
            }
            local_528 = *(undefined8 *)
                         (local_6c8.AllocatorInstance.Data + (longlong)(iVar42 + -1) * 0xc);
            local_520 = *(undefined4 *)
                         (local_6c8.AllocatorInstance.Data + (longlong)(iVar42 + -1) * 0xc + 8);
            pFVar31 = (FName *)(*pcVar13)(pFVar26,&local_528);
            local_508 = *pFVar31;
            local_500 = pFVar31[1];
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_500 != (FName)0x0)) {
              UE::GC::MarkAsReachable((UObject *)local_500);
            }
            if (local_508 != local_5e8) {
              if (1 < (byte)LogRigVM._0_1_) {
                UObjectBaseUtility::GetPathName
                          ((UObjectBaseUtility *)this,&local_458,(UObject *)0x0);
                ::FName::ToString(&local_508,&local_468);
                local_570 = *(FName *)&local_678->field_0xc;
                ::FName::ToString(&local_570,&local_478);
                ::FName::ToString(&local_5e8,&local_488);
                UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRigVM);
                if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_488.Data.AllocatorInstance.Data);
                }
                if (local_478.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_478.Data.AllocatorInstance.Data);
                }
                local_408.Data.AllocatorInstance.Data = local_458.Data.AllocatorInstance.Data;
                if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_468.Data.AllocatorInstance.Data);
                  local_408.Data.AllocatorInstance.Data = local_458.Data.AllocatorInstance.Data;
                }
                goto LAB_14a084a44;
              }
              goto LAB_14a084a4e;
            }
            iVar42 = (pFVar30->TypeIndices).ArrayNum;
            uVar40 = (ulonglong)(uVar39 + 1);
            uVar37 = uVar37 + 0xc;
          } while ((int)(uVar39 + 1) < iVar42);
        }
        pFVar33 = FRigVMTemplateArgumentInfo::MakeFlattenedFromTypeIndices
                            ((FRigVMTemplateArgumentInfo *)local_158,
                             ((FRigVMTemplateArgumentInfo *)FVar44.Data)->Name,
                             ((FRigVMTemplateArgumentInfo *)FVar44.Data)->Direction,&local_6c8);
        if (((local_6b8.Data <= pFVar33) &&
            (pFVar33 < (FRigVMTemplateArgumentInfo *)
                       (local_6b8.Data + (longlong)local_6b0._4_4_ * 0x50))) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar18)) {
          pcVar13 = (code *)swi(3);
          uVar19 = (*pcVar13)();
          return (bool)uVar19;
        }
        iVar42 = (int)local_6b0;
        if ((int)local_6b0 == local_6b0._4_4_) {
          iVar42 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x1050,&local_6b8,(int *)((longlong)&local_6b0 + 4));
        }
        lVar23 = (longlong)iVar42;
        local_6b0 = CONCAT44(local_6b0._4_4_,iVar42 + 1);
        *(FName *)&local_6b8.Data[lVar23 * 0x50].field_0x0 = pFVar33->Name;
        local_6b8.Data[lVar23 * 0x50 + 8] = (FScriptContainerElement)pFVar33->Direction;
        *(undefined8 *)(local_6b8.Data + lVar23 * 0x50 + 0x10) =
             *(undefined8 *)&pFVar33->FactoryCallback;
        *(undefined8 *)(local_6b8.Data + lVar23 * 0x50 + 0x38) =
             *(undefined8 *)&(pFVar33->FactoryCallback).field_0x28;
        *(undefined8 *)&(pFVar33->FactoryCallback).field_0x28 = 0;
        uVar14 = *(undefined4 *)&(pFVar33->FactoryCallback).field_0x14;
        uVar15 = *(undefined4 *)&(pFVar33->FactoryCallback).field_0x18;
        uVar16 = *(undefined4 *)&(pFVar33->FactoryCallback).field_0x1c;
        pFVar32 = local_6b8.Data + lVar23 * 0x50 + 0x20;
        *(undefined4 *)pFVar32 = *(undefined4 *)&(pFVar33->FactoryCallback).field_0x10;
        *(undefined4 *)(pFVar32 + 4) = uVar14;
        *(undefined4 *)(pFVar32 + 8) = uVar15;
        *(undefined4 *)(pFVar32 + 0xc) = uVar16;
        *(undefined8 *)(local_6b8.Data + lVar23 * 0x50 + 0x30) =
             *(undefined8 *)&(pFVar33->FactoryCallback).field_0x20;
        if (*(longlong *)(local_6b8.Data + lVar23 * 0x50 + 0x10) != 0) {
          *(undefined8 *)&pFVar33->FactoryCallback = 0;
        }
        *(undefined8 *)(local_6b8.Data + lVar23 * 0x50 + 0x40) = 0;
        *(FScriptContainerElement **)(local_6b8.Data + lVar23 * 0x50 + 0x40) =
             (pFVar33->TypeIndices).AllocatorInstance.Data;
        (pFVar33->TypeIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(local_6b8.Data + lVar23 * 0x50 + 0x48) = (pFVar33->TypeIndices).ArrayNum;
        *(int *)(local_6b8.Data + lVar23 * 0x50 + 0x4c) = (pFVar33->TypeIndices).ArrayMax;
        (pFVar33->TypeIndices).ArrayNum = 0;
        (pFVar33->TypeIndices).ArrayMax = 0;
        if (local_118.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.Data);
        }
        if (local_158._16_8_ != 0) {
          plVar34 = (longlong *)(local_158 + 0x20);
          if ((longlong *)local_158._56_8_ != (longlong *)0x0) {
            plVar34 = (longlong *)local_158._56_8_;
          }
          (**(code **)(*plVar34 + 0x10))();
        }
        if (local_6c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_6c8.AllocatorInstance.Data);
        }
        if (local_1d8._64_8_ != 0) {
          plVar34 = (longlong *)(local_1d8 + 0x50);
          if ((longlong *)local_1d8._104_8_ != (longlong *)0x0) {
            plVar34 = (longlong *)local_1d8._104_8_;
          }
          (**(code **)(*plVar34 + 0x10))();
        }
        if ((FScriptContainerElement *)local_1d8._40_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_1d8._40_8_);
        }
        if ((FScriptContainerElement *)local_1d8._16_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_1d8._16_8_);
        }
        FVar44.Data = FVar44.Data + 0x50;
        uVar37 = (ulonglong)local_698 & 0xffffffff;
      }
      DestructItems<FRigVMTemplateArgumentInfo,int>
                ((FRigVMTemplateArgumentInfo *)local_670.AllocatorInstance.Data,local_670.ArrayNum);
      if ((FRigVMTemplateArgumentInfo *)local_670.AllocatorInstance.Data !=
          (FRigVMTemplateArgumentInfo *)0x0) {
        FMemory::Free(local_670.AllocatorInstance.Data);
      }
      FRigVMRegistry_RWLock::FConditionalScopeLock::~FConditionalScopeLock(&local_608);
      this_02 = (FRigVMDispatchFactory *)
                (**(code **)((local_690.Object)->_padding_ + 0x38))(local_690.Object,local_620);
      pFVar29 = FRigVMDispatchFactory::GetTemplate_NoLock(this_02,&local_680);
      local_678 = pFVar29;
      if (pFVar29 != (FRigVMTemplate *)0x0) {
        FRigVMDispatchFactory::UpdateArgumentNameCache_NoLock
                  (this_02,(pFVar29->Arguments).ArrayNum,&local_680);
        pTVar28 = local_650;
        local_6a8.Data = (FScriptContainerElement *)0x0;
        local_6a0 = 0;
        uVar48 = local_650->ArrayNum;
        if ((int)uVar48 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar48);
        }
        if (0 < (int)uVar48) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,uVar48,&local_6a8,0,(int *)((longlong)&local_6a0 + 4));
        }
        if (0 < (pFVar29->Permutations).ArrayNum) {
          do {
            iVar42 = (int)uVar40;
            local_658 = FRigVMTemplate::GetOrCreatePermutation_NoLock(pFVar29,iVar42,&local_680);
            if (local_658 == (FRigVMFunction *)0x0) {
              FRigVMTemplate::GetTypesForPermutation_NoLock
                        (pFVar29,(TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
                                  *)local_108,iVar42,&local_680);
              FRigVMTemplate::GetStringFromArgumentTypes
                        (&local_4f8,
                         (TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
                          *)local_108,&local_680);
              if (1 < (byte)LogRigVM._0_1_) {
                UObjectBaseUtility::GetPathName
                          ((UObjectBaseUtility *)this,&local_3e8,(UObject *)0x0);
                pFVar31 = FRigVMTemplate::GetNotation(pFVar29);
                ::FName::ToString(pFVar31,&local_3f8);
                UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRigVM);
                if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
                }
                if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
                }
              }
              if (local_4f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_4f8.Data.AllocatorInstance.Data);
              }
              local_c0 = 0;
              if ((void *)local_108._64_8_ != (void *)0x0) {
                FMemory::Free((void *)local_108._64_8_);
              }
              TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        ((TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)local_108);
              goto LAB_14a084e9e;
            }
            if (((local_6a8.Data <= (FScriptContainerElement *)&local_658) &&
                ((FScriptContainerElement *)&local_658 <
                 local_6a8.Data + (longlong)local_6a0._4_4_ * 8)) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar18)) {
              pcVar13 = (code *)swi(3);
              uVar19 = (*pcVar13)();
              return (bool)uVar19;
            }
            iVar21 = (int)local_6a0;
            if ((int)local_6a0 == local_6a0._4_4_) {
              iVar21 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&local_6a8,(int *)((longlong)&local_6a0 + 4));
            }
            uVar40 = (ulonglong)(iVar42 + 1U);
            local_6a0 = CONCAT44(local_6a0._4_4_,iVar21 + 1);
            *(FRigVMFunction **)(local_6a8.Data + (longlong)iVar21 * 8) = local_658;
          } while ((int)(iVar42 + 1U) < (pFVar29->Permutations).ArrayNum);
        }
        pFVar32 = (pTVar28->AllocatorInstance).Data;
        iVar42 = pTVar28->ArrayNum;
        local_620 = pFVar32 + (longlong)iVar42 * 8;
LAB_14a084092:
        pFVar41 = local_620;
        if (pTVar28->ArrayNum != iVar42) {
          local_6cc = 0;
          `TCheckedPointerIterator<FRigVMFunction_const_*_const,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_6cc);
        }
        FVar44.Data = local_6a8.Data;
        if (pFVar32 != pFVar41) {
          puVar12 = *(undefined8 **)&pFVar32->field_0x0;
          pFVar41 = local_6a8.Data + (longlong)(int)local_6a0 * 8;
          FVar45.Data = local_6a8.Data;
          local_698 = puVar12;
          if (local_6a8.Data != pFVar41) {
            do {
              iVar21 = *(int *)(puVar12 + 1);
              iVar11 = ((*(FRigVMFunction **)FVar45.Data)->Name).Data.ArrayNum;
              if (iVar21 == iVar11) {
                if (iVar21 < 2) goto LAB_14a084161;
                iVar21 = FGenericPlatformStricmp::Stricmp
                                   ((wchar_t *)*puVar12,
                                    (wchar_t *)
                                    ((*(FRigVMFunction **)FVar45.Data)->Name).Data.AllocatorInstance
                                    .Data);
                bVar18 = iVar21 == 0;
              }
              else {
                bVar18 = iVar21 + iVar11 == 1;
              }
              if (bVar18) goto LAB_14a084161;
              FVar45.Data = FVar45.Data + 8;
              if (FVar45.Data == pFVar41) break;
            } while( true );
          }
          goto LAB_14a084109;
        }
        if (local_6a8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_6a8.Data);
        }
      }
      DestructItems<FRigVMTemplateArgumentInfo,int>
                ((FRigVMTemplateArgumentInfo *)local_6b8.Data,(int)local_6b0);
      if ((FRigVMTemplateArgumentInfo *)local_6b8.Data != (FRigVMTemplateArgumentInfo *)0x0) {
        FMemory::Free(local_6b8.Data);
      }
      TStack_4d0.UnvisitedBitMask = TStack_4d0.UnvisitedBitMask & ~TStack_4d0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_4d0);
    }
    pFVar41 = (this->FunctionsStorage).AllocatorInstance.Data;
    iVar42 = (this->FunctionsStorage).ArrayNum;
    pFVar32 = pFVar41 + (longlong)iVar42 * 8;
    do {
      if ((this->FunctionsStorage).ArrayNum != iVar42) {
        local_6cb = 0;
        `TCheckedPointerIterator<FRigVMFunction_const_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_6cb);
      }
      if (pFVar41 == pFVar32) {
        local_5d8 = local_690.Object;
        local_5d0.ReferenceController = local_690.SharedReferenceCount.ReferenceController;
        if (local_690.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_690.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_690.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        if (&this->LocalizedRegistry != (TSharedPtr<FRigVMRegistry_NoLock,1> *)&local_5d8) {
          (this->LocalizedRegistry).Object = local_690.Object;
          local_5d8 = (FRigVMRegistry_NoLock *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->LocalizedRegistry).SharedReferenceCount,&local_5d0);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_5d0.ReferenceController);
        piVar2 = &(this->FunctionsStorage).ArrayMax;
        (this->FunctionsStorage).ArrayNum = 0;
        if ((this->FunctionsStorage).ArrayMax < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,&(this->FunctionsStorage).AllocatorInstance,0,piVar2);
        }
        piVar3 = &(this->FactoriesStorage).ArrayMax;
        (this->FactoriesStorage).ArrayNum = 0;
        if ((this->FactoriesStorage).ArrayMax < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,&(this->FactoriesStorage).AllocatorInstance,0,piVar3);
        }
        bVar18 = ResolveFunctionsIfRequired(this);
        if (bVar18) {
          bVar18 = true;
          goto LAB_14a084fba;
        }
        if (1 < (byte)LogRigVM._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRigVM);
        }
        local_518 = 0;
        FStack_510.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (&this->LocalizedRegistry != (TSharedPtr<FRigVMRegistry_NoLock,1> *)&local_518) {
          (this->LocalizedRegistry).Object = (FRigVMRegistry_NoLock *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->LocalizedRegistry).SharedReferenceCount,&FStack_510);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_510.ReferenceController);
        (this->FunctionsStorage).ArrayNum = 0;
        if ((this->FunctionsStorage).ArrayMax < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,&(this->FunctionsStorage).AllocatorInstance,0,piVar2);
        }
        (this->FactoriesStorage).ArrayNum = 0;
        if ((this->FactoriesStorage).ArrayMax < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,&(this->FactoriesStorage).AllocatorInstance,0,piVar3);
        }
        bVar18 = ResolveFunctionsIfRequired(this);
        if ((!bVar18) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("ResolveFunctionsIfRequired()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVM.cpp"
                                ,0xa3d,L""), bVar18)) {
          pcVar13 = (code *)swi(3);
          uVar19 = (*pcVar13)();
          return (bool)uVar19;
        }
        goto LAB_14a084fb7;
      }
      puVar12 = *(undefined8 **)pFVar41;
      if (puVar12 != (undefined8 *)0x0) {
        if (puVar12[3] == 0) {
          if (*(int *)(puVar12 + 1) == 0) {
            pwVar38 = L"";
          }
          else {
            pwVar38 = (wchar_t *)*puVar12;
          }
          (**(code **)((local_690.Object)->_padding_ + 0x20))
                    (local_690.Object,pwVar38,puVar12[5],puVar12[2]);
        }
        else {
          uStack_1f0 = 0;
          local_208 = (void *)0x0;
          uStack_200 = 0x8000000000;
          local_1f8 = 0xffffffff;
          local_1e8 = (void *)0x0;
          uStack_1e0 = 0;
          local_258[0] = 0;
          local_258[1] = 0;
          local_258[2] = 0;
          local_258[3] = 0;
          local_258[4] = 0;
          plStack_230 = (longlong *)0x0;
          local_228._0_8_ = (FScriptContainerElement *)0x0;
          local_228._8_8_ = 0;
          local_228._16_8_ = 0;
          uStack_210 = 0;
          if (*(int *)(puVar12 + 1) == 0) {
            pwVar38 = L"";
          }
          else {
            pwVar38 = (wchar_t *)*puVar12;
          }
          lVar23 = (**(code **)((local_690.Object)->_padding_ + 0x160))
                             (local_690.Object,pwVar38,local_258);
          uStack_1e0 = uStack_1e0 & 0xffffffff00000000;
          if (local_1e8 != (void *)0x0) {
            FMemory::Free(local_1e8);
          }
          TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                             *)local_228,0,local_228._8_4_);
          iVar21 = SUB84(local_228._8_8_,4);
          local_228._8_8_ = local_228._8_8_ & 0xffffffff00000000;
          if (iVar21 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,0,(ForAnyElementType *)local_228,0,(int *)(local_228 + 0xc));
          }
          uVar48 = uStack_200._4_4_;
          local_1f8 = 0xffffffff;
          uStack_200 = (ulonglong)uStack_200._4_4_ << 0x20;
          if (0x80 < uVar48) {
            uStack_200 = 0x8000000000;
            TBitArray<FDefaultBitArrayAllocator>::Realloc
                      ((TBitArray<FDefaultBitArrayAllocator> *)(local_228 + 0x10),0);
          }
          if (local_208 != (void *)0x0) {
            FMemory::Free(local_208);
          }
          if ((FScriptContainerElement *)local_228._0_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_228._0_8_);
          }
          if (local_258[0] != 0) {
            plVar34 = local_258 + 2;
            if (plStack_230 != (longlong *)0x0) {
              plVar34 = plStack_230;
            }
            (**(code **)(*plVar34 + 0x10))();
          }
          if (lVar23 == 0) goto code_r0x00014a08439b;
        }
      }
      pFVar41 = pFVar41 + 8;
    } while( true );
  }
  bVar18 = true;
  goto LAB_14a084fe7;
code_r0x00014a08439b:
  uVar48 = 0;
  lVar23 = (**(code **)((local_690.Object)->_padding_ + 0x1a8))();
  if (0 < *(int *)(lVar23 + 8)) {
    lVar23 = 0;
    do {
      plVar34 = (longlong *)(**(code **)((local_690.Object)->_padding_ + 0x1a8))();
      uVar39 = 0;
      if ((int)uVar48 < (int)plVar34[1]) {
        uVar39 = ~uVar48 >> 0x1f;
      }
      if ((uVar39 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar13 = (code *)swi(3);
        uVar19 = (*pcVar13)();
        return (bool)uVar19;
      }
      lVar35 = *(longlong *)(lVar23 + *plVar34);
      if (1 < (byte)LogRigVM._0_1_) {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_348,(UObject *)0x0);
        local_578 = *(FName *)(lVar35 + 0xc);
        ::FName::ToString(&local_578,&local_308);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRigVM);
        if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_308.Data.AllocatorInstance.Data);
        }
        if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_348.Data.AllocatorInstance.Data);
        }
      }
      uVar48 = uVar48 + 1;
      lVar23 = lVar23 + 8;
      lVar35 = (**(code **)((local_690.Object)->_padding_ + 0x1a8))();
      lpCriticalSection = local_648;
    } while ((int)uVar48 < *(int *)(lVar35 + 8));
  }
  lVar23 = (**(code **)((local_690.Object)->_padding_ + 0x168))();
  uVar48 = 0;
  if (*(uint *)(lVar23 + 0x10) != 0) {
    uVar37 = (ulonglong)*(uint *)(lVar23 + 0x10);
    do {
      if (1 < (byte)LogRigVM._0_1_) {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_318,(UObject *)0x0);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRigVM);
        if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_318.Data.AllocatorInstance.Data);
        }
      }
      uVar39 = uVar48 + 1;
      uVar48 = 0;
      if (uVar39 < 0x92) {
        uVar48 = uVar39;
      }
      uVar37 = uVar37 - 1;
    } while (uVar37 != 0);
    lpCriticalSection = (LPCRITICAL_SECTION)&this->CreateLocalizedRegistryMutex;
  }
  if (1 < (byte)LogRigVM._0_1_) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_498,(UObject *)0x0);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRigVM);
    goto LAB_14a084ebf;
  }
  goto LAB_14a084fb7;
LAB_14a084161:
  if ((int)((longlong)FVar45.Data - (longlong)FVar44.Data >> 3) != -1) {
    pFVar32 = pFVar32 + 8;
    pTVar28 = local_650;
    goto LAB_14a084092;
  }
LAB_14a084109:
  pTVar28 = local_650;
  pFVar29 = local_678;
  uVar48 = 0;
  if (0 < local_650->ArrayNum) {
    do {
      if (1 < (byte)LogRigVM._0_1_) {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_3c8,(UObject *)0x0);
        pFVar31 = FRigVMTemplate::GetNotation(pFVar29);
        ::FName::ToString(pFVar31,&local_3d8);
        uVar39 = 0;
        if ((int)uVar48 < pTVar28->ArrayNum) {
          uVar39 = ~uVar48 >> 0x1f;
        }
        if ((uVar39 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar13 = (code *)swi(3);
          uVar19 = (*pcVar13)();
          return (bool)uVar19;
        }
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRigVM);
        if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
        }
        if (local_3c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3c8.Data.AllocatorInstance.Data);
        }
      }
      uVar48 = uVar48 + 1;
      lpCriticalSection = local_648;
    } while ((int)uVar48 < pTVar28->ArrayNum);
  }
  uVar48 = 0;
  if (0 < (int)local_6a0) {
    do {
      if (1 < (byte)LogRigVM._0_1_) {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_3a8,(UObject *)0x0);
        pFVar31 = FRigVMTemplate::GetNotation(pFVar29);
        ::FName::ToString(pFVar31,&local_3b8);
        uVar39 = 0;
        if ((int)uVar48 < (int)local_6a0) {
          uVar39 = ~uVar48 >> 0x1f;
        }
        if ((uVar39 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar13 = (code *)swi(3);
          uVar19 = (*pcVar13)();
          return (bool)uVar19;
        }
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRigVM);
        if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
        }
        if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
        }
      }
      uVar48 = uVar48 + 1;
      lpCriticalSection = local_648;
    } while ((int)uVar48 < (int)local_6a0);
  }
  if (1 < (byte)LogRigVM._0_1_) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_388,(UObject *)0x0);
    pFVar31 = FRigVMTemplate::GetNotation(pFVar29);
    ::FName::ToString(pFVar31,&local_398);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRigVM);
    if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_398.Data.AllocatorInstance.Data);
    }
    if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_388.Data.AllocatorInstance.Data);
    }
  }
LAB_14a084e9e:
  if (local_6a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6a8.Data);
  }
LAB_14a084eac:
  DestructItems<FRigVMTemplateArgumentInfo,int>
            ((FRigVMTemplateArgumentInfo *)local_6b8.Data,(int)local_6b0);
  local_498.Data.AllocatorInstance.Data = local_6b8.Data;
LAB_14a084ebf:
  if ((FRigVMTemplateArgumentInfo *)local_498.Data.AllocatorInstance.Data !=
      (FRigVMTemplateArgumentInfo *)0x0) {
    FMemory::Free(local_498.Data.AllocatorInstance.Data);
  }
LAB_14a084fb7:
  bVar18 = false;
LAB_14a084fba:
  local_260 = 0;
  if (local_268 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_268);
  }
  TSparseArray<TSparseSetElement<TTuple<FRigVMDispatchFactory_const_*,TArray<FRigVMFunction_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRigVMDispatchFactory_const_*,TArray<FRigVMFunction_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRigVMDispatchFactory_const_*,TArray<FRigVMFunction_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_2a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_690.SharedReferenceCount.ReferenceController);
LAB_14a084fe7:
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return bVar18;
}

// Empty @ 14a090a90

void __thiscall URigVM::Empty(URigVM *this,FRigVMExtendedExecuteContext *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *this_00;
  int iVar3;
  bool bVar4;
  TMap<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>,0>_>
  *this_01;
  
  piVar1 = &(this->FunctionNamesStorage).ArrayMax;
  (this->FunctionNamesStorage).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->FunctionNamesStorage).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->FunctionsStorage).ArrayMax;
  (this->FunctionsStorage).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->FunctionsStorage).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->FactoriesStorage).ArrayMax;
  (this->FactoriesStorage).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->FactoriesStorage).AllocatorInstance,0,piVar1);
  }
  DestructItems<FRigVMPropertyPathDescription,int>
            ((FRigVMPropertyPathDescription *)
             (this->ExternalPropertyPathDescriptions).AllocatorInstance.Data,
             (this->ExternalPropertyPathDescriptions).ArrayNum);
  piVar1 = &(this->ExternalPropertyPathDescriptions).ArrayMax;
  (this->ExternalPropertyPathDescriptions).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&(this->ExternalPropertyPathDescriptions).AllocatorInstance,0,piVar1);
  }
  DestructItems<FRigVMPropertyPath,int>
            ((FRigVMPropertyPath *)(this->ExternalPropertyPaths).AllocatorInstance.Data,
             (this->ExternalPropertyPaths).ArrayNum);
  piVar1 = &(this->ExternalPropertyPaths).ArrayMax;
  (this->ExternalPropertyPaths).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&(this->ExternalPropertyPaths).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->ByteCodeStorage).ByteCode.ArrayMax;
  (this->ByteCodeStorage).ByteCode.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,(ForAnyElementType *)&this->ByteCodeStorage,0,piVar1);
  }
  (this->ByteCodeStorage).bByteCodeIsAligned = false;
  (this->ByteCodeStorage).NumInstructions = 0;
  piVar1 = &(this->ByteCodeStorage).Entries.ArrayMax;
  (this->ByteCodeStorage).Entries.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->ByteCodeStorage).Entries.AllocatorInstance,0,piVar1);
  }
  (this->ByteCodeStorage).PublicContextAssetPath.AssetName.ComparisonIndex = 0;
  (this->ByteCodeStorage).PublicContextAssetPath.AssetName.Number = 0;
  (this->ByteCodeStorage).PublicContextAssetPath.PackageName.ComparisonIndex = 0;
  (this->ByteCodeStorage).PublicContextAssetPath.PackageName.Number = 0;
  piVar1 = &(this->Instructions).Instructions.ArrayMax;
  (this->Instructions).Instructions.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)&this->Instructions,0,piVar1);
  }
  DestructItems<FRigVMParameter,int>
            ((FRigVMParameter *)(this->Parameters).AllocatorInstance.Data,
             (this->Parameters).ArrayNum);
  piVar1 = &(this->Parameters).ArrayMax;
  (this->Parameters).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,&(this->Parameters).AllocatorInstance,0,piVar1);
  }
  this_00 = &this->ParametersNameMap;
  bVar4 = 1 < *(int *)&(this->ParametersNameMap).field_0x48;
  if (!bVar4) {
    TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
    UnhashElements((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                    *)this_00);
  }
  puVar2 = &(this->ParametersNameMap).field_0xc;
  *(undefined4 *)&(this->ParametersNameMap).field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,(ForAnyElementType *)this_00,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->ParametersNameMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ParametersNameMap).field_0x34 = 0;
  iVar3 = *(int *)&(this->ParametersNameMap).field_0x2c;
  *(undefined4 *)&(this->ParametersNameMap).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->ParametersNameMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ParametersNameMap).field_0x10,0);
  }
  if (bVar4) {
    *(undefined4 *)&(this->ParametersNameMap).field_0x48 = 1;
    TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::Rehash
              ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                *)this_00);
  }
  piVar1 = &(this->ExternalVariables).ArrayMax;
  (this->ExternalVariables).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&(this->ExternalVariables).AllocatorInstance,0,piVar1);
  }
  InvalidateCachedMemory(this,param_1);
  this_01 = &this->OperandToDebugRegisters;
  bVar4 = 1 < *(int *)&(this->OperandToDebugRegisters).field_0x48;
  if (!bVar4) {
    TSet<TTuple<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)this_01);
  }
  TSparseArray<TSparseSetElement<TTuple<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_01,0,*(int *)&(this->OperandToDebugRegisters).field_0x8);
  puVar2 = &(this->OperandToDebugRegisters).field_0xc;
  *(undefined4 *)&(this->OperandToDebugRegisters).field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this_01,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->OperandToDebugRegisters).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OperandToDebugRegisters).field_0x34 = 0;
  iVar3 = *(int *)&(this->OperandToDebugRegisters).field_0x2c;
  *(undefined4 *)&(this->OperandToDebugRegisters).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->OperandToDebugRegisters).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->OperandToDebugRegisters).field_0x10,0
              );
  }
  if (bVar4) {
    *(undefined4 *)&(this->OperandToDebugRegisters).field_0x48 = 1;
    TSet<TTuple<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)this_01);
  }
  piVar1 = &(param_1->CachedMemoryHandles).ArrayMax;
  (param_1->CachedMemoryHandles).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&(param_1->CachedMemoryHandles).AllocatorInstance,0,piVar1);
  }
  (param_1->ExternalVariableRuntimeData).ArrayNum = 0;
  if ((param_1->ExternalVariableRuntimeData).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(param_1->ExternalVariableRuntimeData).AllocatorInstance,0,
               &(param_1->ExternalVariableRuntimeData).ArrayMax);
  }
  return;
}

// Empty @ 14a090ea0

void __thiscall URigVM::Empty(URigVM *this)

{
  return;
}

// Execute @ 14a091360

ERigVMExecuteResult __thiscall
URigVM::Execute(URigVM *this,FRigVMExtendedExecuteContext *param_1,
               TArrayView<URigVMMemoryStorage_*,int> *param_2,FName *param_3)

{
  return Failed;
}

// Execute @ 14a091370

ERigVMExecuteResult __thiscall
URigVM::Execute(URigVM *this,TArrayView<URigVMMemoryStorage_*,int> *param_1,FName *param_2)

{
  return Failed;
}

// Execute @ 14a091380

bool __thiscall URigVM::Execute(URigVM *this,FRigVMExtendedExecuteContext *param_1,FName *param_2)

{
  return false;
}

// Execute @ 14a091390

bool __thiscall URigVM::Execute(URigVM *this,FName *param_1)

{
  return false;
}

// ExecuteBranch @ 14a0913a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ERigVMExecuteResult __thiscall
URigVM::ExecuteBranch(URigVM *this,FRigVMExtendedExecuteContext *param_1,FRigVMBranchInfo *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  ERigVMExecuteResult EVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FName FVar8;
  FName FVar9;
  FName FVar10;
  ERigVMExecuteResult EVar11;
  FRigVMExecuteContext *pFVar12;
  
  pFVar12 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  uVar6 = pFVar12->NumExecutions;
  pFVar12->NumExecutions = uVar6;
  EVar4 = param_1->CurrentExecuteResult;
  param_1->CurrentExecuteResult = EVar4;
  FVar8 = param_1->CurrentEntryName;
  param_1->CurrentEntryName = FVar8;
  bVar5 = param_1->bCurrentlyRunningRootEntry;
  param_1->bCurrentlyRunningRootEntry = bVar5;
  FVar9 = pFVar12->EventName;
  pFVar12->EventName = FVar9;
  FVar10 = pFVar12->FunctionName;
  pFVar12->FunctionName = FVar10;
  iVar7 = pFVar12->InstructionIndex;
  pFVar12->InstructionIndex = iVar7;
  dVar1 = pFVar12->DeltaTime;
  pFVar12->DeltaTime = dVar1;
  dVar2 = pFVar12->AbsoluteTime;
  pFVar12->AbsoluteTime = dVar2;
  dVar3 = pFVar12->FramesPerSecond;
  pFVar12->FramesPerSecond = dVar3;
  EVar11 = ExecuteInstructions(this,param_1,param_2->FirstInstruction,param_2->LastInstruction);
  pFVar12->FramesPerSecond = dVar3;
  pFVar12->AbsoluteTime = dVar2;
  pFVar12->DeltaTime = dVar1;
  pFVar12->InstructionIndex = iVar7;
  pFVar12->FunctionName = FVar10;
  pFVar12->EventName = FVar9;
  param_1->bCurrentlyRunningRootEntry = bVar5;
  param_1->CurrentEntryName = FVar8;
  param_1->CurrentExecuteResult = EVar4;
  pFVar12->NumExecutions = uVar6;
  return EVar11;
}

// ExecuteInstructions @ 14a091560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ERigVMExecuteResult __thiscall
URigVM::ExecuteInstructions
          (URigVM *this,FRigVMExtendedExecuteContext *param_1,int param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  longlong *plVar3;
  code *pcVar4;
  int iVar5;
  undefined4 uVar6;
  FRigVMLazyBranch *pFVar7;
  TArray<FRigVMDispatchFactory_const_*,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<FRigVMFunction_const_*,TSizedDefaultAllocator<32>_> *pTVar9;
  bool bVar10;
  ERigVMExecuteResult EVar11;
  undefined1 uVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  FRigVMExecuteContext *pFVar16;
  uchar *puVar17;
  FScriptContainerElement *pFVar18;
  int *piVar19;
  FName *pFVar20;
  TMapBase<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
  *this_00;
  uint *puVar21;
  uchar *puVar22;
  UScriptStruct *pUVar23;
  FRigVMTrait *pFVar24;
  FRigVMMemoryHandle *pFVar25;
  undefined8 uVar26;
  ulonglong uVar27;
  longlong *plVar28;
  int iVar29;
  undefined4 uVar30;
  int iVar31;
  undefined4 uVar32;
  TArray<FRigVMMemoryHandle,TSizedDefaultAllocator<32>_> *pTVar33;
  FRigVMByteCode *pFVar34;
  uint uVar35;
  uint uVar36;
  longlong lVar37;
  FScriptContainerElement *pFVar38;
  longlong lVar39;
  int *piVar40;
  undefined1 auStackY_318 [32];
  undefined1 local_2d0;
  undefined1 local_2cf [7];
  FRigVMByteCode *local_2c8;
  int local_2c0;
  FName local_2b8;
  uint local_2b0;
  uint local_2ac;
  uint local_2a8;
  uint local_2a4;
  int local_2a0;
  TArray<FRigVMMemoryHandle,TSizedDefaultAllocator<32>_> *local_298;
  uchar *local_290;
  int *local_288;
  int *local_280;
  FScriptContainerElement *local_278;
  uint uStack_270;
  undefined4 uStack_26c;
  undefined8 local_268;
  int iStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  int iStack_250;
  undefined4 uStack_24c;
  FName local_248;
  TArray<FRigVMDispatchFactory_const_*,TSizedDefaultAllocator<32>_> *local_240;
  TArray<FRigVMFunction_const_*,TSizedDefaultAllocator<32>_> *local_238;
  FName local_230;
  int local_228;
  int iStack_224;
  int iStack_220;
  int iStack_21c;
  uint local_218;
  FScriptContainerElement *local_208;
  undefined8 uStack_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  int iStack_1f0;
  undefined4 uStack_1ec;
  FString local_1e8;
  undefined4 local_1cc;
  undefined4 local_1bc;
  FString local_1b8;
  undefined4 local_19c;
  FRigVMMemoryHandle local_198;
  TGuardValue<FRigVMExecuteContext,FRigVMExecuteContext> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_318;
  local_2b0 = param_3;
  if (((param_1->CurrentVMMemory).ArrayNum == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("!Context.CurrentVMMemory.IsEmpty()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVM.cpp"
                          ,0x6b0,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    EVar11 = (*pcVar4)();
    return EVar11;
  }
  pFVar16 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  local_2a0 = pFVar16->InstructionIndex;
  pFVar16->InstructionIndex = param_2;
  local_238 = this->FunctionsPtr;
  local_2c8 = this->ByteCodePtr;
  local_240 = this->FactoriesPtr;
  pFVar34 = local_2c8;
  uVar32 = local_1cc;
  uVar30 = local_1bc;
LAB_14a091640:
  uVar14 = pFVar16->InstructionIndex;
  lVar37 = (longlong)(int)uVar14;
  if ((((int)uVar14 < 0) || ((this->Instructions).Instructions.ArrayNum <= (int)uVar14)) ||
     ((int)(local_2b0 & 0xffff) < (int)uVar14)) {
    param_1->CurrentExecuteResult = Succeeded;
LAB_14a09345e:
    EVar11 = Succeeded;
LAB_14a093461:
    pFVar16->InstructionIndex = local_2a0;
    return EVar11;
  }
  uVar36 = 0;
  if ((int)uVar14 < (this->Instructions).Instructions.ArrayNum) {
    uVar36 = ~uVar14 >> 0x1f;
  }
  if ((uVar36 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar4 = (code *)swi(3);
    EVar11 = (*pcVar4)();
    return EVar11;
  }
  pFVar38 = (this->Instructions).Instructions.AllocatorInstance.Data;
  switch(pFVar38[lVar37 * 0xc + 8]) {
  case (FScriptContainerElement)0x41:
    uVar14 = pFVar16->InstructionIndex;
    uVar36 = 0;
    if ((int)uVar14 < (this->FirstHandleForInstruction).ArrayNum) {
      uVar36 = ~uVar14 >> 0x1f;
    }
    if ((uVar36 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      EVar11 = (*pcVar4)();
      return EVar11;
    }
    uVar14 = *(uint *)((this->FirstHandleForInstruction).AllocatorInstance.Data +
                      (longlong)(int)uVar14 * 4);
    uVar36 = 0;
    if ((int)uVar14 < (param_1->CachedMemoryHandles).ArrayNum) {
      uVar36 = ~uVar14 >> 0x1f;
    }
    if ((uVar36 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      EVar11 = (*pcVar4)();
      return EVar11;
    }
    uVar27 = *(ulonglong *)
              (*(longlong *)
                (*(longlong *)
                  ((param_1->CachedMemoryHandles).AllocatorInstance.Data +
                  (longlong)(int)uVar14 * 0x20 + 8) + 8) + 0x18);
    if ((char)uVar27 < '\0') {
      uVar14 = pFVar16->InstructionIndex;
      uVar36 = 0;
      if ((int)uVar14 < (this->FirstHandleForInstruction).ArrayNum) {
        uVar36 = ~uVar14 >> 0x1f;
      }
      if ((uVar36 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        EVar11 = (*pcVar4)();
        return EVar11;
      }
      uVar14 = *(uint *)((this->FirstHandleForInstruction).AllocatorInstance.Data +
                        (longlong)(int)uVar14 * 4);
      uVar36 = 0;
      if ((int)uVar14 < (param_1->CachedMemoryHandles).ArrayNum) {
        uVar36 = ~uVar14 >> 0x1f;
      }
      if ((uVar36 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        EVar11 = (*pcVar4)();
        return EVar11;
      }
      puVar22 = FRigVMMemoryHandle::GetData_Internal
                          ((FRigVMMemoryHandle *)
                           ((param_1->CachedMemoryHandles).AllocatorInstance.Data +
                           (longlong)(int)uVar14 * 0x20),true,-1);
      puVar22[0] = '\0';
      puVar22[1] = '\0';
      puVar22[2] = '\0';
      puVar22[3] = '\0';
      pFVar16->InstructionIndex = pFVar16->InstructionIndex + 1;
    }
    else {
      if ((uVar27 >> 0xd & 1) != 0) {
        uVar14 = pFVar16->InstructionIndex;
        uVar36 = 0;
        if ((int)uVar14 < (this->FirstHandleForInstruction).ArrayNum) {
          uVar36 = ~uVar14 >> 0x1f;
        }
        if ((uVar36 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          EVar11 = (*pcVar4)();
          return EVar11;
        }
        uVar14 = *(uint *)((this->FirstHandleForInstruction).AllocatorInstance.Data +
                          (longlong)(int)uVar14 * 4);
        uVar36 = 0;
        if ((int)uVar14 < (param_1->CachedMemoryHandles).ArrayNum) {
          uVar36 = ~uVar14 >> 0x1f;
        }
        if ((uVar36 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          EVar11 = (*pcVar4)();
          return EVar11;
        }
        puVar22 = FRigVMMemoryHandle::GetData_Internal
                            ((FRigVMMemoryHandle *)
                             ((param_1->CachedMemoryHandles).AllocatorInstance.Data +
                             (longlong)(int)uVar14 * 0x20),true,-1);
        puVar22[0] = '\0';
        puVar22[1] = '\0';
        puVar22[2] = '\0';
        puVar22[3] = '\0';
        puVar22[4] = '\0';
        puVar22[5] = '\0';
        puVar22[6] = '\0';
        puVar22[7] = '\0';
      }
      pFVar16->InstructionIndex = pFVar16->InstructionIndex + 1;
    }
    goto LAB_14a091640;
  case (FScriptContainerElement)0x42:
    uVar14 = pFVar16->InstructionIndex;
    uVar36 = 0;
    if ((int)uVar14 < (this->FirstHandleForInstruction).ArrayNum) {
      uVar36 = ~uVar14 >> 0x1f;
    }
    if ((uVar36 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      EVar11 = (*pcVar4)();
      return EVar11;
    }
    uVar14 = *(uint *)((this->FirstHandleForInstruction).AllocatorInstance.Data +
                      (longlong)(int)uVar14 * 4);
    uVar36 = 0;
    if ((int)uVar14 < (param_1->CachedMemoryHandles).ArrayNum) {
      uVar36 = ~uVar14 >> 0x1f;
    }
    if ((uVar36 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      EVar11 = (*pcVar4)();
      return EVar11;
    }
    puVar22 = FRigVMMemoryHandle::GetData_Internal
                        ((FRigVMMemoryHandle *)
                         ((param_1->CachedMemoryHandles).AllocatorInstance.Data +
                         (longlong)(int)uVar14 * 0x20),true,-1);
    *puVar22 = '\0';
    pFVar16->InstructionIndex = pFVar16->InstructionIndex + 1;
    goto LAB_14a091640;
  case (FScriptContainerElement)0x43:
    uVar14 = pFVar16->InstructionIndex;
    uVar36 = 0;
    if ((int)uVar14 < (this->FirstHandleForInstruction).ArrayNum) {
      uVar36 = ~uVar14 >> 0x1f;
    }
    if ((uVar36 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      EVar11 = (*pcVar4)();
      return EVar11;
    }
    uVar14 = *(uint *)((this->FirstHandleForInstruction).AllocatorInstance.Data +
                      (longlong)(int)uVar14 * 4);
    uVar36 = 0;
    if ((int)uVar14 < (param_1->CachedMemoryHandles).ArrayNum) {
      uVar36 = ~uVar14 >> 0x1f;
    }
    if ((uVar36 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      EVar11 = (*pcVar4)();
      return EVar11;
    }
    puVar22 = FRigVMMemoryHandle::GetData_Internal
                        ((FRigVMMemoryHandle *)
                         ((param_1->CachedMemoryHandles).AllocatorInstance.Data +
                         (longlong)(int)uVar14 * 0x20),true,-1);
    *puVar22 = '\x01';
    pFVar16->InstructionIndex = pFVar16->InstructionIndex + 1;
    goto LAB_14a091640;
  case (FScriptContainerElement)0x44:
    uVar14 = pFVar16->InstructionIndex;
    uVar36 = 0;
    if ((int)uVar14 < (this->FirstHandleForInstruction).ArrayNum) {
      uVar36 = ~uVar14 >> 0x1f;
    }
    if ((uVar36 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      EVar11 = (*pcVar4)();
      return EVar11;
    }
    uVar14 = *(uint *)((this->FirstHandleForInstruction).AllocatorInstance.Data +
                      (longlong)(int)uVar14 * 4);
    uVar36 = 0;
    if ((int)uVar14 < (param_1->CachedMemoryHandles).ArrayNum) {
      uVar36 = ~uVar14 >> 0x1f;
    }
    if ((uVar36 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      EVar11 = (*pcVar4)();
      return EVar11;
    }
    pFVar38 = (param_1->CachedMemoryHandles).AllocatorInstance.Data;
    uVar36 = pFVar16->InstructionIndex;
    uVar35 = 0;
    if ((int)uVar36 < (this->FirstHandleForInstruction).ArrayNum) {
      uVar35 = ~uVar36 >> 0x1f;
    }
    if ((uVar35 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      EVar11 = (*pcVar4)();
      return EVar11;
    }
    uVar35 = *(int *)((this->FirstHandleForInstruction).AllocatorInstance.Data +
                     (longlong)(int)uVar36 * 4) + 1;
    uVar36 = 0;
    if ((int)uVar35 < (param_1->CachedMemoryHandles).ArrayNum) {
      uVar36 = ~uVar35 >> 0x1f;
    }
    if ((uVar36 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      EVar11 = (*pcVar4)();
      return EVar11;
    }
    FRigVMMemoryStorageStruct::CopyProperty
              ((FRigVMMemoryHandle *)
               ((param_1->CachedMemoryHandles).AllocatorInstance.Data + (longlong)(int)uVar35 * 0x20
               ),(FRigVMMemoryHandle *)(pFVar38 + (longlong)(int)uVar14 * 0x20));
    pFVar16->InstructionIndex = pFVar16->InstructionIndex + 1;
    goto LAB_14a091640;
  case (FScriptContainerElement)0x45:
    uVar14 = pFVar16->InstructionIndex;
    uVar36 = 0;
    if ((int)uVar14 < (this->FirstHandleForInstruction).ArrayNum) {
      uVar36 = ~uVar14 >> 0x1f;
    }
    if ((uVar36 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      EVar11 = (*pcVar4)();
      return EVar11;
    }
    uVar14 = *(uint *)((this->FirstHandleForInstruction).AllocatorInstance.Data +
                      (longlong)(int)uVar14 * 4);
    uVar36 = 0;
    if ((int)uVar14 < (param_1->CachedMemoryHandles).ArrayNum) {
      uVar36 = ~uVar14 >> 0x1f;
    }
    if ((uVar36 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      EVar11 = (*pcVar4)();
      return EVar11;
    }
    piVar19 = (int *)FRigVMMemoryHandle::GetData_Internal
                               ((FRigVMMemoryHandle *)
                                ((param_1->CachedMemoryHandles).AllocatorInstance.Data +
                                (longlong)(int)uVar14 * 0x20),true,-1);
    *piVar19 = *piVar19 + 1;
    pFVar16->InstructionIndex = pFVar16->InstructionIndex + 1;
    goto LAB_14a091640;
  case (FScriptContainerElement)0x46:
    uVar14 = pFVar16->InstructionIndex;
    uVar36 = 0;
    if ((int)uVar14 < (this->FirstHandleForInstruction).ArrayNum) {
      uVar36 = ~uVar14 >> 0x1f;
    }
    if ((uVar36 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      EVar11 = (*pcVar4)();
      return EVar11;
    }
    uVar14 = *(uint *)((this->FirstHandleForInstruction).AllocatorInstance.Data +
                      (longlong)(int)uVar14 * 4);
    uVar36 = 0;
    if ((int)uVar14 < (param_1->CachedMemoryHandles).ArrayNum) {
      uVar36 = ~uVar14 >> 0x1f;
    }
    if ((uVar36 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      EVar11 = (*pcVar4)();
      return EVar11;
    }
    piVar19 = (int *)FRigVMMemoryHandle::GetData_Internal
                               ((FRigVMMemoryHandle *)
                                ((param_1->CachedMemoryHandles).AllocatorInstance.Data +
                                (longlong)(int)uVar14 * 0x20),true,-1);
    *piVar19 = *piVar19 + -1;
    pFVar16->InstructionIndex = pFVar16->InstructionIndex + 1;
    goto LAB_14a091640;
  case (FScriptContainerElement)0x47:
  case (FScriptContainerElement)0x48:
    uVar14 = pFVar16->InstructionIndex;
    uVar36 = 0;
    if ((int)uVar14 < (this->FirstHandleForInstruction).ArrayNum) {
      uVar36 = ~uVar14 >> 0x1f;
    }
    if ((uVar36 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      EVar11 = (*pcVar4)();
      return EVar11;
    }
    uVar14 = *(uint *)((this->FirstHandleForInstruction).AllocatorInstance.Data +
                      (longlong)(int)uVar14 * 4);
    uVar36 = 0;
    if ((int)uVar14 < (param_1->CachedMemoryHandles).ArrayNum) {
      uVar36 = ~uVar14 >> 0x1f;
    }
    if ((uVar36 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      EVar11 = (*pcVar4)();
      return EVar11;
    }
    uVar36 = pFVar16->InstructionIndex;
    pFVar38 = (param_1->CachedMemoryHandles).AllocatorInstance.Data + (longlong)(int)uVar14 * 0x20;
    uVar14 = 0;
    if ((int)uVar36 < (this->FirstHandleForInstruction).ArrayNum) {
      uVar14 = ~uVar36 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      EVar11 = (*pcVar4)();
      return EVar11;
    }
    uVar36 = *(int *)((this->FirstHandleForInstruction).AllocatorInstance.Data +
                     (longlong)(int)uVar36 * 4) + 1;
    uVar14 = 0;
    if ((int)uVar36 < (param_1->CachedMemoryHandles).ArrayNum) {
      uVar14 = ~uVar36 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      EVar11 = (*pcVar4)();
      return EVar11;
    }
    plVar3 = *(longlong **)(pFVar38 + 8);
    pFVar18 = (param_1->CachedMemoryHandles).AllocatorInstance.Data + (longlong)(int)uVar36 * 0x20;
    pcVar4 = *(code **)(*plVar3 + 0xb8);
    if (*(FRigVMPropertyPath **)(pFVar18 + 0x10) == (FRigVMPropertyPath *)0x0) {
      puVar22 = *(uchar **)pFVar18;
    }
    else {
      puVar22 = FRigVMPropertyPath::GetData_Internal
                          (*(FRigVMPropertyPath **)(pFVar18 + 0x10),*(uchar **)pFVar18,
                           *(FProperty **)(pFVar18 + 8));
    }
    if (*(FRigVMPropertyPath **)(pFVar38 + 0x10) == (FRigVMPropertyPath *)0x0) {
      puVar17 = *(uchar **)pFVar38;
    }
    else {
      puVar17 = FRigVMPropertyPath::GetData_Internal
                          (*(FRigVMPropertyPath **)(pFVar38 + 0x10),*(uchar **)pFVar38,
                           *(FProperty **)(pFVar38 + 8));
    }
    uVar12 = (*pcVar4)(plVar3,puVar17,puVar22,0);
    uVar14 = pFVar16->InstructionIndex;
    uVar36 = 0;
    if ((int)uVar14 < (this->FirstHandleForInstruction).ArrayNum) {
      uVar36 = ~uVar14 >> 0x1f;
    }
    if ((uVar36 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      EVar11 = (*pcVar4)();
      return EVar11;
    }
    uVar36 = *(int *)((this->FirstHandleForInstruction).AllocatorInstance.Data +
                     (longlong)(int)uVar14 * 4) + 2;
    uVar14 = 0;
    if ((int)uVar36 < (param_1->CachedMemoryHandles).ArrayNum) {
      uVar14 = ~uVar36 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      EVar11 = (*pcVar4)();
      return EVar11;
    }
    **(undefined1 **)
      ((param_1->CachedMemoryHandles).AllocatorInstance.Data + (longlong)(int)uVar36 * 0x20) =
         uVar12;
    pFVar16->InstructionIndex = pFVar16->InstructionIndex + 1;
    pFVar34 = local_2c8;
    goto LAB_14a091640;
  case (FScriptContainerElement)0x49:
    pFVar16->InstructionIndex =
         *(int *)((pFVar34->ByteCode).AllocatorInstance.Data +
                 (longlong)*(int *)(pFVar38 + lVar37 * 0xc + 4) + 4);
    break;
  case (FScriptContainerElement)0x4a:
    pFVar16->InstructionIndex =
         pFVar16->InstructionIndex +
         *(int *)((pFVar34->ByteCode).AllocatorInstance.Data +
                 (longlong)*(int *)(pFVar38 + lVar37 * 0xc + 4) + 4);
    break;
  case (FScriptContainerElement)0x4b:
    pFVar16->InstructionIndex =
         pFVar16->InstructionIndex -
         *(int *)((pFVar34->ByteCode).AllocatorInstance.Data +
                 (longlong)*(int *)(pFVar38 + lVar37 * 0xc + 4) + 4);
    break;
  case (FScriptContainerElement)0x4c:
    iVar31 = *(int *)(pFVar38 + lVar37 * 0xc + 4);
    pFVar38 = (pFVar34->ByteCode).AllocatorInstance.Data;
    uVar14 = pFVar16->InstructionIndex;
    uVar36 = 0;
    if ((int)uVar14 < (this->FirstHandleForInstruction).ArrayNum) {
      uVar36 = ~uVar14 >> 0x1f;
    }
    if ((uVar36 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      EVar11 = (*pcVar4)();
      return EVar11;
    }
    uVar14 = *(uint *)((this->FirstHandleForInstruction).AllocatorInstance.Data +
                      (longlong)(int)uVar14 * 4);
    uVar36 = 0;
    if ((int)uVar14 < (param_1->CachedMemoryHandles).ArrayNum) {
      uVar36 = ~uVar14 >> 0x1f;
    }
    if ((uVar36 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      EVar11 = (*pcVar4)();
      return EVar11;
    }
    pFVar18 = (FScriptContainerElement *)
              FRigVMMemoryHandle::GetData_Internal
                        ((FRigVMMemoryHandle *)
                         ((param_1->CachedMemoryHandles).AllocatorInstance.Data +
                         (longlong)(int)uVar14 * 0x20),true,-1);
    if (*pFVar18 != pFVar38[(longlong)iVar31 + 0xc]) goto LAB_14a0919e7;
    pFVar16->InstructionIndex = *(int *)(pFVar38 + (longlong)iVar31 + 8);
    goto LAB_14a091640;
  case (FScriptContainerElement)0x4d:
    iVar31 = *(int *)(pFVar38 + lVar37 * 0xc + 4);
    pFVar38 = (pFVar34->ByteCode).AllocatorInstance.Data;
    uVar14 = pFVar16->InstructionIndex;
    uVar36 = 0;
    if ((int)uVar14 < (this->FirstHandleForInstruction).ArrayNum) {
      uVar36 = ~uVar14 >> 0x1f;
    }
    if ((uVar36 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      EVar11 = (*pcVar4)();
      return EVar11;
    }
    uVar14 = *(uint *)((this->FirstHandleForInstruction).AllocatorInstance.Data +
                      (longlong)(int)uVar14 * 4);
    uVar36 = 0;
    if ((int)uVar14 < (param_1->CachedMemoryHandles).ArrayNum) {
      uVar36 = ~uVar14 >> 0x1f;
    }
    if ((uVar36 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      EVar11 = (*pcVar4)();
      return EVar11;
    }
    pFVar18 = (FScriptContainerElement *)
              FRigVMMemoryHandle::GetData_Internal
                        ((FRigVMMemoryHandle *)
                         ((param_1->CachedMemoryHandles).AllocatorInstance.Data +
                         (longlong)(int)uVar14 * 0x20),true,-1);
    if (*pFVar18 != pFVar38[(longlong)iVar31 + 0xc]) goto LAB_14a0919e7;
    pFVar16->InstructionIndex = pFVar16->InstructionIndex + *(int *)(pFVar38 + (longlong)iVar31 + 8)
    ;
    goto LAB_14a091640;
  case (FScriptContainerElement)0x4e:
    iVar31 = *(int *)(pFVar38 + lVar37 * 0xc + 4);
    pFVar38 = (pFVar34->ByteCode).AllocatorInstance.Data;
    uVar14 = pFVar16->InstructionIndex;
    uVar36 = 0;
    if ((int)uVar14 < (this->FirstHandleForInstruction).ArrayNum) {
      uVar36 = ~uVar14 >> 0x1f;
    }
    if ((uVar36 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      EVar11 = (*pcVar4)();
      return EVar11;
    }
    uVar14 = *(uint *)((this->FirstHandleForInstruction).AllocatorInstance.Data +
                      (longlong)(int)uVar14 * 4);
    uVar36 = 0;
    if ((int)uVar14 < (param_1->CachedMemoryHandles).ArrayNum) {
      uVar36 = ~uVar14 >> 0x1f;
    }
    if ((uVar36 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      EVar11 = (*pcVar4)();
      return EVar11;
    }
    pFVar18 = (FScriptContainerElement *)
              FRigVMMemoryHandle::GetData_Internal
                        ((FRigVMMemoryHandle *)
                         ((param_1->CachedMemoryHandles).AllocatorInstance.Data +
                         (longlong)(int)uVar14 * 0x20),true,-1);
    if (*pFVar18 == pFVar38[(longlong)iVar31 + 0xc]) {
      pFVar16->InstructionIndex =
           pFVar16->InstructionIndex - *(int *)(pFVar38 + (longlong)iVar31 + 8);
    }
    else {
      pFVar16->InstructionIndex = pFVar16->InstructionIndex + 1;
    }
    goto LAB_14a091640;
  case (FScriptContainerElement)0x4f:
    local_2d0 = 0;
    `URigVM::ExecuteInstructions'::__l59::<lambda_1>::operator()(&local_2d0);
    goto LAB_14a091640;
  case (FScriptContainerElement)0x50:
    if ((param_1->bCurrentlyRunningRootEntry != false) &&
       (*(void **)&param_1->OnExecutionReachedExitCallback != (void *)0x0)) {
      UE::Core::Private::Function::CheckCallable(*(void **)&param_1->OnExecutionReachedExitCallback)
      ;
      pcVar4 = *(code **)&param_1->OnExecutionReachedExitCallback;
      plVar3 = *(longlong **)&(param_1->OnExecutionReachedExitCallback).field_0x28;
      plVar28 = (longlong *)&(param_1->OnExecutionReachedExitCallback).field_0x10;
      if (plVar3 != (longlong *)0x0) {
        plVar28 = plVar3;
      }
      uVar26 = (**(code **)(*plVar28 + 8))();
      (*pcVar4)(uVar26,&param_1->CurrentEntryName);
    }
    goto LAB_14a09345e;
  case (FScriptContainerElement)0x51:
    uVar14 = pFVar16->InstructionIndex;
    uVar36 = 0;
    if ((int)uVar14 < (this->FirstHandleForInstruction).ArrayNum) {
      uVar36 = ~uVar14 >> 0x1f;
    }
    if ((uVar36 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      EVar11 = (*pcVar4)();
      return EVar11;
    }
    uVar14 = *(uint *)((this->FirstHandleForInstruction).AllocatorInstance.Data +
                      (longlong)(int)uVar14 * 4);
    uVar36 = 0;
    if ((int)uVar14 < (param_1->CachedMemoryHandles).ArrayNum) {
      uVar36 = ~uVar14 >> 0x1f;
    }
    if ((uVar36 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      EVar11 = (*pcVar4)();
      return EVar11;
    }
    piVar19 = (int *)FRigVMMemoryHandle::GetData_Internal
                               ((FRigVMMemoryHandle *)
                                ((param_1->CachedMemoryHandles).AllocatorInstance.Data +
                                (longlong)(int)uVar14 * 0x20),true,-1);
    iVar31 = *piVar19;
    uVar14 = pFVar16->InstructionIndex;
    uVar36 = 0;
    if ((int)uVar14 < (this->FirstHandleForInstruction).ArrayNum) {
      uVar36 = ~uVar14 >> 0x1f;
    }
    if ((uVar36 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      EVar11 = (*pcVar4)();
      return EVar11;
    }
    uVar36 = *(int *)((this->FirstHandleForInstruction).AllocatorInstance.Data +
                     (longlong)(int)uVar14 * 4) + 1;
    uVar14 = 0;
    if ((int)uVar36 < (param_1->CachedMemoryHandles).ArrayNum) {
      uVar14 = ~uVar36 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      EVar11 = (*pcVar4)();
      return EVar11;
    }
    piVar19 = (int *)FRigVMMemoryHandle::GetData_Internal
                               ((FRigVMMemoryHandle *)
                                ((param_1->CachedMemoryHandles).AllocatorInstance.Data +
                                (longlong)(int)uVar36 * 0x20),true,-1);
    FRigVMExtendedExecuteContext::BeginSlice(param_1,iVar31,*piVar19);
    pFVar16->InstructionIndex = pFVar16->InstructionIndex + 1;
    goto LAB_14a091640;
  case (FScriptContainerElement)0x52:
    if (((param_1->Slices).ArrayNum < 2) &&
       (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_5759244135378713923>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMExecuteContext.h"
                            ,0x2bd,"Slices.Num() > 1"), bVar10)) {
      pcVar4 = (code *)swi(3);
      EVar11 = (*pcVar4)();
      return EVar11;
    }
    if (((param_1->Slices).ArrayNum < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      EVar11 = (*pcVar4)();
      return EVar11;
    }
    iVar31 = (param_1->Slices).ArrayNum;
    pFVar18 = (param_1->Slices).AllocatorInstance.Data;
    pFVar38 = pFVar18 + (longlong)iVar31 * 0x14 + -0x14;
    iVar15 = *(int *)pFVar38;
    iVar29 = *(int *)(pFVar38 + 4);
    iVar5 = *(int *)(pFVar38 + 8);
    iStack_21c = *(int *)(pFVar38 + 0xc);
    uVar14 = *(uint *)(pFVar18 + (longlong)iVar31 * 0x14 + -4);
    (param_1->Slices).ArrayNum = iVar31 + -1;
    local_228 = iVar15;
    iStack_224 = iVar29;
    iStack_220 = iVar5;
    local_218 = uVar14;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,&(param_1->Slices).AllocatorInstance,iVar31 + -1,&(param_1->Slices).ArrayMax);
    iVar29 = iVar29 - iVar15;
    if (((iVar5 - iVar15 == iVar29) && (-1 < (int)uVar14)) &&
       ((int)uVar14 < (param_1->SliceOffsets).ArrayNum)) {
      uVar36 = 0;
      if ((int)uVar14 < (param_1->SliceOffsets).ArrayNum) {
        uVar36 = ~uVar14 >> 0x1f;
      }
      if ((uVar36 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        EVar11 = (*pcVar4)();
        return EVar11;
      }
      pFVar38 = (param_1->SliceOffsets).AllocatorInstance.Data + (longlong)(int)uVar14 * 2;
      *(short *)pFVar38 = *(short *)pFVar38 + (short)iVar29 + 1;
    }
    pFVar16->InstructionIndex = pFVar16->InstructionIndex + 1;
    goto LAB_14a091640;
  case (FScriptContainerElement)0x63:
    iVar31 = *(int *)(pFVar38 + lVar37 * 0xc + 4);
    pFVar38 = (pFVar34->ByteCode).AllocatorInstance.Data;
    bVar10 = CanExecuteEntry(this,param_1,(FName *)(pFVar38 + (longlong)iVar31 + 4),true);
    if (!bVar10) goto LAB_14a093449;
    TGuardValue<FRigVMExecuteContext,FRigVMExecuteContext>::
    TGuardValue<FRigVMExecuteContext,FRigVMExecuteContext>(&local_178,pFVar16,pFVar16);
    EVar11 = (**(code **)(this->_padding_ + 0x348))(this,param_1,pFVar38 + (longlong)iVar31 + 4);
    if (EVar11 != Succeeded) {
      param_1->CurrentExecuteResult = EVar11;
      FRigVMExecuteContext::operator=(local_178.RefValue,&local_178.OriginalValue);
      FRigVMExecuteContext::~FRigVMExecuteContext(&local_178.OriginalValue);
      goto LAB_14a093461;
    }
    FRigVMExecuteContext::operator=(local_178.RefValue,&local_178.OriginalValue);
    FRigVMExecuteContext::~FRigVMExecuteContext(&local_178.OriginalValue);
    pFVar16->InstructionIndex = pFVar16->InstructionIndex + 1;
    goto LAB_14a091640;
  case (FScriptContainerElement)0x64:
    uVar14 = pFVar16->InstructionIndex;
    iVar31 = *(int *)(pFVar38 + lVar37 * 0xc + 4);
    pFVar38 = (pFVar34->ByteCode).AllocatorInstance.Data;
    uVar36 = 0;
    if ((int)uVar14 < (this->FirstHandleForInstruction).ArrayNum) {
      uVar36 = ~uVar14 >> 0x1f;
    }
    if ((uVar36 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      EVar11 = (*pcVar4)();
      return EVar11;
    }
    uVar14 = *(uint *)((this->FirstHandleForInstruction).AllocatorInstance.Data +
                      (longlong)(int)uVar14 * 4);
    uVar36 = 0;
    if ((int)uVar14 < (param_1->CachedMemoryHandles).ArrayNum) {
      uVar36 = ~uVar14 >> 0x1f;
    }
    if ((uVar36 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      EVar11 = (*pcVar4)();
      return EVar11;
    }
    pFVar20 = (FName *)FRigVMMemoryHandle::GetData_Internal
                                 ((FRigVMMemoryHandle *)
                                  ((param_1->CachedMemoryHandles).AllocatorInstance.Data +
                                  (longlong)(int)uVar14 * 0x20),true,-1);
    local_2b8 = *pFVar20;
    if ((local_2c8->BranchInfos).ArrayNum != 0) {
      bVar10 = false;
      do {
        iVar15 = *(int *)(pFVar38 + (longlong)iVar31 + 8);
        uVar27 = (ulonglong)iVar15;
        iVar29 = (local_2c8->BranchInfos).ArrayNum;
        if (iVar15 < iVar29) {
          lVar37 = uVar27 * 0x1c;
          do {
            uVar36 = (uint)uVar27;
            uVar14 = 0;
            if ((int)uVar36 < iVar29) {
              uVar14 = ~uVar36 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar4 = (code *)swi(3);
              EVar11 = (*pcVar4)();
              return EVar11;
            }
            pFVar18 = (local_2c8->BranchInfos).AllocatorInstance.Data;
            if (*(int *)(pFVar18 + lVar37 + 0xc) != pFVar16->InstructionIndex) break;
            if (*(FName *)(pFVar18 + lVar37 + 4) == local_2b8) {
              pFVar16->InstructionIndex = *(int *)(pFVar18 + lVar37 + 0x14);
              pFVar34 = local_2c8;
              goto LAB_14a091640;
            }
            iVar29 = (local_2c8->BranchInfos).ArrayNum;
            uVar27 = (ulonglong)(uVar36 + 1);
            lVar37 = lVar37 + 0x1c;
          } while ((int)(uVar36 + 1) < iVar29);
        }
        if ((bVar10) ||
           (FLazyName::Resolve(&FRigVMStruct::ControlFlowCompletedName), local_2b8 == local_230)) {
          if (1 < (byte)LogRigVM._0_1_) {
            ::FName::ToString(&local_2b8,&local_1b8);
            UE::Logging::Private::BasicLog<2>
                      ((FStaticBasicLogRecord *)&PTR_u_Branch___s__was_15206fe30,
                       (FLogCategoryBase *)&LogRigVM);
            if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
            }
          }
          EVar11 = Failed;
          goto LAB_14a093461;
        }
        if (2 < (byte)LogRigVM._0_1_) {
          ::FName::ToString(&local_2b8,&local_1e8);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRigVM);
          if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
          }
        }
        FLazyName::Resolve(&FRigVMStruct::ControlFlowCompletedName);
        bVar10 = true;
        local_2b8 = local_248;
      } while( true );
    }
    if (1 < (byte)LogRigVM._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRigVM);
    }
    param_1->CurrentExecuteResult = Failed;
    EVar11 = Failed;
    goto LAB_14a093461;
  case (FScriptContainerElement)0x65:
    uVar14 = pFVar16->InstructionIndex;
    iVar31 = *(int *)(pFVar38 + lVar37 * 0xc + 4);
    pFVar38 = (pFVar34->ByteCode).AllocatorInstance.Data;
    uVar36 = 0;
    if ((int)uVar14 < (this->FirstHandleForInstruction).ArrayNum) {
      uVar36 = ~uVar14 >> 0x1f;
    }
    if ((uVar36 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      EVar11 = (*pcVar4)();
      return EVar11;
    }
    pFVar18 = (this->FirstHandleForInstruction).AllocatorInstance.Data;
    uVar35 = pFVar16->InstructionIndex + 1;
    uVar36 = 0;
    if ((int)uVar35 < (this->FirstHandleForInstruction).ArrayNum) {
      uVar36 = ~uVar35 >> 0x1f;
    }
    if ((uVar36 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      EVar11 = (*pcVar4)();
      return EVar11;
    }
    local_268 = (FScriptContainerElement *)0x0;
    iStack_260 = 0;
    iVar15 = *(int *)((this->FirstHandleForInstruction).AllocatorInstance.Data +
                     (longlong)(int)uVar35 * 4) - *(int *)(pFVar18 + (longlong)(int)uVar14 * 4);
    if (0 < iVar15) {
      uVar14 = pFVar16->InstructionIndex;
      uVar36 = 0;
      if ((int)uVar14 < (this->FirstHandleForInstruction).ArrayNum) {
        uVar36 = ~uVar14 >> 0x1f;
      }
      if ((uVar36 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        EVar11 = (*pcVar4)();
        return EVar11;
      }
      uVar14 = *(uint *)((this->FirstHandleForInstruction).AllocatorInstance.Data +
                        (longlong)(int)uVar14 * 4);
      uVar36 = 0;
      if ((int)uVar14 < (param_1->CachedMemoryHandles).ArrayNum) {
        uVar36 = ~uVar14 >> 0x1f;
      }
      if ((uVar36 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        EVar11 = (*pcVar4)();
        return EVar11;
      }
      local_268 = (param_1->CachedMemoryHandles).AllocatorInstance.Data +
                  (longlong)(int)uVar14 * 0x20;
      iStack_260 = iVar15;
      uStack_25c = uVar32;
    }
    pFVar34 = local_2c8;
    uVar1 = *(ushort *)(pFVar38 + (longlong)iVar31 + 8);
    local_278 = (FScriptContainerElement *)0x0;
    uStack_270 = 0;
    if (uVar1 != 0) {
      uVar2 = *(ushort *)(pFVar38 + (longlong)iVar31 + 6);
      if (((local_2c8->PredicateBranches).ArrayNum <= (int)(uint)uVar2) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        EVar11 = (*pcVar4)();
        return EVar11;
      }
      uStack_270 = (uint)uVar1;
      local_278 = (pFVar34->PredicateBranches).AllocatorInstance.Data + (ulonglong)uVar2 * 0x38;
      uStack_26c = uVar30;
    }
    pTVar8 = local_240;
    uVar1 = *(ushort *)(pFVar38 + (longlong)iVar31 + 2);
    if ((local_240->ArrayNum <= (int)(uint)uVar1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      EVar11 = (*pcVar4)();
      return EVar11;
    }
    pTVar9 = local_238;
    param_1->Factory =
         *(FRigVMDispatchFactory **)((pTVar8->AllocatorInstance).Data + (ulonglong)uVar1 * 8);
    uVar1 = *(ushort *)(pFVar38 + (longlong)iVar31 + 2);
    if ((local_238->ArrayNum <= (int)(uint)uVar1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      EVar11 = (*pcVar4)();
      return EVar11;
    }
    uStack_200 = CONCAT44(uStack_26c,uStack_270);
    local_208 = local_278;
    local_1f8 = (undefined4)local_268;
    uStack_1f4 = local_268._4_4_;
    iStack_1f0 = iStack_260;
    uStack_1ec = uStack_25c;
    (**(code **)(*(longlong *)((pTVar9->AllocatorInstance).Data + (ulonglong)uVar1 * 8) + 0x28))
              (param_1,&local_1f8,&local_208);
LAB_14a0919e7:
    pFVar16->InstructionIndex = pFVar16->InstructionIndex + 1;
    goto LAB_14a091640;
  case (FScriptContainerElement)0x66:
    uVar14 = pFVar16->InstructionIndex;
    iVar31 = *(int *)(pFVar38 + lVar37 * 0xc + 4);
    pFVar38 = (pFVar34->ByteCode).AllocatorInstance.Data;
    uVar36 = 0;
    if ((int)uVar14 < (this->FirstHandleForInstruction).ArrayNum) {
      uVar36 = ~uVar14 >> 0x1f;
    }
    if ((uVar36 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      EVar11 = (*pcVar4)();
      return EVar11;
    }
    uVar14 = *(uint *)((this->FirstHandleForInstruction).AllocatorInstance.Data +
                      (longlong)(int)uVar14 * 4);
    uVar36 = 0;
    if ((int)uVar14 < (param_1->CachedMemoryHandles).ArrayNum) {
      uVar36 = ~uVar14 >> 0x1f;
    }
    if ((uVar36 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      EVar11 = (*pcVar4)();
      return EVar11;
    }
    this_00 = (TMapBase<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
               *)FRigVMMemoryHandle::GetData_Internal
                           ((FRigVMMemoryHandle *)
                            ((param_1->CachedMemoryHandles).AllocatorInstance.Data +
                            (longlong)(int)uVar14 * 0x20),false,-1);
    if (((*(int *)(pFVar38 + (longlong)iVar31 + 8) != -1) &&
        (*(int *)(pFVar38 + (longlong)iVar31 + 0xc) != -1)) &&
       (*(int *)(pFVar38 + (longlong)iVar31 + 8) <= *(int *)(pFVar38 + (longlong)iVar31 + 0xc))) {
      local_2a8 = FRigVMExtendedExecuteContext::GetSliceHash(param_1);
      local_2ac = 0xffffffff;
      puVar21 = TMapBase<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
                ::FindOrAddImpl<unsigned_int_const_&,unsigned_int>
                          (this_00,local_2a8,&local_2a8,&local_2ac);
      uVar14 = pFVar16->NumExecutions;
      pFVar34 = local_2c8;
      if (*puVar21 != uVar14) {
        ExecuteInstructions(this,param_1,*(int *)(pFVar38 + (longlong)iVar31 + 8),
                            *(int *)(pFVar38 + (longlong)iVar31 + 0xc));
        *puVar21 = uVar14;
        pFVar34 = local_2c8;
      }
    }
    pFVar16->InstructionIndex = pFVar16->InstructionIndex + 1;
    goto LAB_14a091640;
  case (FScriptContainerElement)0x67:
    goto switchD_14a0916f3_caseD_67;
  case (FScriptContainerElement)0x68:
    bVar10 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_7729646217340123009>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVM.cpp"
                        ,0x87f,"false");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      EVar11 = (*pcVar4)();
      return EVar11;
    }
LAB_14a093449:
    param_1->CurrentExecuteResult = Failed;
    EVar11 = Failed;
    goto LAB_14a093461;
  }
  goto LAB_14a091640;
switchD_14a0916f3_caseD_67:
  (pFVar16->Traits).ArrayNum = 0;
  if ((pFVar16->Traits).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&(pFVar16->Traits).AllocatorInstance,0,&(pFVar16->Traits).ArrayMax);
  }
  piVar19 = &(pFVar16->AdditionalTraitMemoryHandles).ArrayMax;
  (pFVar16->AdditionalTraitMemoryHandles).ArrayNum = 0;
  if (*piVar19 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&(pFVar16->AdditionalTraitMemoryHandles).AllocatorInstance,0,piVar19);
  }
  uVar14 = pFVar16->InstructionIndex;
  uVar36 = 0;
  if ((int)uVar14 < (this->FirstHandleForInstruction).ArrayNum) {
    uVar36 = ~uVar14 >> 0x1f;
  }
  if ((uVar36 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar4 = (code *)swi(3);
    EVar11 = (*pcVar4)();
    return EVar11;
  }
  uVar14 = *(uint *)((this->FirstHandleForInstruction).AllocatorInstance.Data +
                    (longlong)(int)uVar14 * 4);
  uVar36 = 0;
  if ((int)uVar14 < (param_1->CachedMemoryHandles).ArrayNum) {
    uVar36 = ~uVar14 >> 0x1f;
  }
  if ((uVar36 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar4 = (code *)swi(3);
    EVar11 = (*pcVar4)();
    return EVar11;
  }
  puVar22 = FRigVMMemoryHandle::GetData_Internal
                      ((FRigVMMemoryHandle *)
                       ((param_1->CachedMemoryHandles).AllocatorInstance.Data +
                       (longlong)(int)uVar14 * 0x20),true,-1);
  uVar14 = *(uint *)(puVar22 + 8);
  local_290 = puVar22;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  if ((pFVar16->Traits).ArrayMax < (int)uVar14) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar14,&(pFVar16->Traits).AllocatorInstance,(pFVar16->Traits).ArrayNum,
               &(pFVar16->Traits).ArrayMax);
  }
  uVar14 = *(uint *)(puVar22 + 8);
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  if (*piVar19 < (int)uVar14) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar14,&(pFVar16->AdditionalTraitMemoryHandles).AllocatorInstance,
               (pFVar16->AdditionalTraitMemoryHandles).ArrayNum,piVar19);
  }
  local_2a4 = *(uint *)(puVar22 + 8);
  uVar27 = (ulonglong)(int)local_2a4;
  iVar31 = 0;
  piVar40 = *(int **)puVar22;
  uVar14 = 0xffffffff;
  pTVar33 = &pFVar16->AdditionalTraitMemoryHandles;
  local_2c0 = 0;
  piVar19 = piVar40 + uVar27;
  local_298 = pTVar33;
  local_288 = piVar19;
  while( true ) {
    local_280 = piVar40;
    if (*(int *)(puVar22 + 8) != (int)uVar27) {
      local_2cf[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_2cf);
    }
    if (piVar40 == piVar19) break;
    iVar15 = *piVar40;
    if ((-1 < iVar15) && (iVar15 < (param_1->WorkMemoryStorage).LinkedProperties.ArrayNum)) {
      if ((iVar15 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        EVar11 = (*pcVar4)();
        return EVar11;
      }
      lVar37 = *(longlong *)
                ((param_1->WorkMemoryStorage).LinkedProperties.AllocatorInstance.Data +
                (longlong)iVar15 * 8);
      if ((((lVar37 != 0) && ((*(uint *)(*(longlong *)(lVar37 + 8) + 0x18) >> 0x14 & 1) != 0)) &&
          (lVar39 = *(longlong *)(lVar37 + 0x70), lVar39 != 0)) &&
         (pUVar23 = FRigVMTrait::StaticStruct(), pUVar23 != (UScriptStruct *)0x0)) {
        iVar29 = (int)pUVar23->_padding_;
        if ((*(int *)(lVar39 + 0x38) < iVar29) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar39 + 0x30) + (longlong)iVar29 * 8) !=
            &pUVar23->_padding_)) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        if (bVar10) {
          local_258 = (FScriptContainerElement *)0x0;
          iStack_250 = 0;
          if (uVar14 != 0xffffffff) {
            uVar36 = 0;
            if ((int)uVar14 < pTVar33->ArrayNum) {
              uVar36 = ~uVar14 >> 0x1f;
            }
            if ((uVar36 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar4 = (code *)swi(3);
              EVar11 = (*pcVar4)();
              return EVar11;
            }
            lVar39 = (longlong)(int)uVar14;
            pFVar38 = (pTVar33->AllocatorInstance).Data;
            if ((iVar31 < 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ArrayNum >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xfe,L""), bVar10)) {
              pcVar4 = (code *)swi(3);
              EVar11 = (*pcVar4)();
              return EVar11;
            }
            uVar14 = 0xffffffff;
            uStack_24c = local_19c;
            local_258 = pFVar38 + lVar39 * 0x20;
            iStack_250 = iVar31;
          }
          lVar39 = 0;
          if (*(longlong *)(lVar37 + 0x70) != 0) {
            lVar39 = *(longlong *)(lVar37 + 0x70);
          }
          pFVar24 = FRigVMMemoryStorageStruct::GetData<FRigVMTrait>
                              (&param_1->WorkMemoryStorage,iVar15);
          iVar15 = (pFVar16->Traits).ArrayNum;
          if (iVar15 == (pFVar16->Traits).ArrayMax) {
            iVar15 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x820,&(pFVar16->Traits).AllocatorInstance,
                                &(pFVar16->Traits).ArrayMax);
          }
          (pFVar16->Traits).ArrayNum = iVar15 + 1;
          pFVar38 = (pFVar16->Traits).AllocatorInstance.Data;
          lVar37 = (longlong)iVar15 * 0x20;
          *(FRigVMTrait **)(pFVar38 + lVar37) = pFVar24;
          *(longlong *)(pFVar38 + lVar37 + 8) = lVar39;
          pFVar38 = pFVar38 + lVar37 + 0x10;
          *(undefined4 *)pFVar38 = (undefined4)local_258;
          *(undefined4 *)(pFVar38 + 4) = local_258._4_4_;
          *(int *)(pFVar38 + 8) = iStack_250;
          *(undefined4 *)(pFVar38 + 0xc) = uStack_24c;
          piVar19 = local_288;
          puVar22 = local_290;
          goto LAB_14a0932e4;
        }
      }
      iVar31 = local_2c0;
      if (uVar14 == 0xffffffff) {
        uVar14 = (pFVar16->AdditionalTraitMemoryHandles).ArrayNum;
        iVar31 = 0;
      }
      pFVar25 = FRigVMMemoryStorageStruct::GetHandle
                          (&param_1->WorkMemoryStorage,&local_198,iVar15,(FRigVMPropertyPath *)0x0);
      pTVar33 = local_298;
      iVar15 = local_298->ArrayNum;
      if (iVar15 == local_298->ArrayMax) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,&local_298->AllocatorInstance,&local_298->ArrayMax);
      }
      pTVar33->ArrayNum = iVar15 + 1;
      uVar32 = *(undefined4 *)((longlong)&pFVar25->Ptr + 4);
      uVar30 = *(undefined4 *)&pFVar25->Property;
      uVar6 = *(undefined4 *)((longlong)&pFVar25->Property + 4);
      pFVar18 = (pTVar33->AllocatorInstance).Data;
      iVar31 = iVar31 + 1;
      pFVar38 = pFVar18 + (longlong)iVar15 * 0x20;
      *(undefined4 *)pFVar38 = *(undefined4 *)&pFVar25->Ptr;
      *(undefined4 *)(pFVar38 + 4) = uVar32;
      *(undefined4 *)(pFVar38 + 8) = uVar30;
      *(undefined4 *)(pFVar38 + 0xc) = uVar6;
      pFVar7 = pFVar25->LazyBranch;
      pFVar18 = pFVar18 + (longlong)iVar15 * 0x20 + 0x10;
      *(FRigVMPropertyPath **)pFVar18 = pFVar25->PropertyPath;
      *(FRigVMLazyBranch **)(pFVar18 + 8) = pFVar7;
      piVar19 = local_288;
      puVar22 = local_290;
      local_2c0 = iVar31;
    }
LAB_14a0932e4:
    uVar27 = (ulonglong)local_2a4;
    piVar40 = local_280 + 1;
  }
  pFVar16->InstructionIndex = pFVar16->InstructionIndex + 1;
  pFVar34 = local_2c8;
  uVar32 = local_1cc;
  uVar30 = local_1bc;
  goto LAB_14a091640;
}

// ExecuteVM @ 14a093560

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ERigVMExecuteResult __thiscall
URigVM::ExecuteVM(URigVM *this,FRigVMExtendedExecuteContext *param_1,FName *param_2)

{
  int *piVar1;
  FRWFallbackSafeAccessDetectorDefinition *pFVar2;
  TArray<FRigVMMemoryStorageStruct_*,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>
  *pTVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  FRWFallbackSafeAccessDetectorDefinition FVar5;
  bool bVar6;
  int iVar7;
  FName FVar8;
  FRigVMByteCode *this_00;
  FName FVar9;
  FScriptContainerElement *pFVar10;
  code *pcVar11;
  bool bVar12;
  ERigVMExecuteResult EVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  UObject *pUVar17;
  UClass *pUVar18;
  FRigVMExecuteContext *pFVar19;
  FRigVMByteCodeEntry *pFVar20;
  ForElementType<FRigVMMemoryStorageStruct_*> FVar21;
  uint uVar22;
  longlong lVar23;
  uint uVar24;
  uint local_88 [2];
  URigVM *local_80;
  FTopLevelAssetPath local_78;
  FString local_68;
  FString local_58;
  
  iVar7 = (param_1->EntriesBeingExecuted).ArrayNum;
  FVar8 = param_1->CurrentEntryName;
  param_1->CurrentEntryName = *param_2;
  bVar6 = param_1->bCurrentlyRunningRootEntry;
  param_1->bCurrentlyRunningRootEntry = iVar7 == 0;
  this_00 = this->ByteCodePtr;
  if (iVar7 == 0) {
    param_1->CurrentExecuteResult = Succeeded;
    LOCK();
    pFVar2 = &this->AccessDetector;
    FVar5 = *pFVar2;
    *pFVar2 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar2 + 1);
    UNLOCK();
    if (((((uint)FVar5 & 0xfff00000) != 0) &&
        (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                            ,0x5c,L"Acquiring a read access while there is already a write access"),
       bVar12)) {
      pcVar11 = (code *)swi(3);
      EVar13 = (*pcVar11)();
      return EVar13;
    }
    LOCK();
    pFVar2 = &this->AccessDetector;
    FVar5 = *pFVar2;
    *pFVar2 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar2 + -1);
    UNLOCK();
    if (((((uint)FVar5 & 0xfff00000) != 0) &&
        (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                            ,0x67,
                            L"Another thread asked to have a write access during this read access"),
       bVar12)) {
      pcVar11 = (code *)swi(3);
      EVar13 = (*pcVar11)();
      return EVar13;
    }
    if ((this->Instructions).Instructions.ArrayNum != 0) {
      if ((param_1->CurrentVMMemory).ArrayNum == 0) {
        pTVar3 = &param_1->CurrentVMMemory;
        iVar16 = (param_1->CurrentVMMemory).ArrayNum;
        piVar1 = &(param_1->CurrentVMMemory).ArrayNum;
        if (iVar16 < 3) {
          UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FRigVMMemoryStorageStruct_*>_>
                    (8,8,3 - iVar16,&pTVar3->AllocatorInstance,piVar1,
                     &(param_1->CurrentVMMemory).ArrayMax);
        }
        else if (3 < iVar16) {
          iVar16 = iVar16 + -3;
          if (iVar16 < 0) {
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               );
            if (bVar12) {
              pcVar11 = (code *)swi(3);
              EVar13 = (*pcVar11)();
              return EVar13;
            }
          }
          else if (iVar16 == 0) goto LAB_14a09375d;
          FVar21 = (param_1->CurrentVMMemory).AllocatorInstance.SecondaryData;
          if (FVar21 == (ForElementType<FRigVMMemoryStorageStruct_*>)0x0) {
            FVar21 = (ForElementType<FRigVMMemoryStorageStruct_*>)pTVar3;
          }
          iVar14 = (*piVar1 - iVar16) + -3;
          if (iVar14 != 0) {
            memmove((ForElementType<FRigVMMemoryStorageStruct_*> *)((longlong)FVar21 + 0x18),
                    (ForElementType<FRigVMMemoryStorageStruct_*> *)((longlong)FVar21 + 0x18) +
                    iVar16,(longlong)iVar14 << 3);
          }
          *piVar1 = *piVar1 - iVar16;
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FRigVMMemoryStorageStruct_*>_>
                    (8,8,&pTVar3->AllocatorInstance,*piVar1,&(param_1->CurrentVMMemory).ArrayMax);
        }
      }
LAB_14a09375d:
      pTVar3 = &param_1->CurrentVMMemory;
      if (((param_1->CurrentVMMemory).ArrayNum < 1) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar11 = (code *)swi(3);
        EVar13 = (*pcVar11)();
        return EVar13;
      }
      FVar21 = (param_1->CurrentVMMemory).AllocatorInstance.SecondaryData;
      if (FVar21 == (ForElementType<FRigVMMemoryStorageStruct_*>)0x0) {
        FVar21 = (ForElementType<FRigVMMemoryStorageStruct_*>)pTVar3;
      }
      *(FRigVMMemoryStorageStruct **)FVar21 = &param_1->WorkMemoryStorage;
      if (((param_1->CurrentVMMemory).ArrayNum < 2) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar11 = (code *)swi(3);
        EVar13 = (*pcVar11)();
        return EVar13;
      }
      FVar21 = (param_1->CurrentVMMemory).AllocatorInstance.SecondaryData;
      if (FVar21 == (ForElementType<FRigVMMemoryStorageStruct_*>)0x0) {
        FVar21 = (ForElementType<FRigVMMemoryStorageStruct_*>)pTVar3;
      }
      *(FRigVMMemoryStorageStruct **)((longlong)FVar21 + 8) = &this->LiteralMemoryStorage;
      if (((param_1->CurrentVMMemory).ArrayNum < 3) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar11 = (code *)swi(3);
        EVar13 = (*pcVar11)();
        return EVar13;
      }
      FVar21 = (param_1->CurrentVMMemory).AllocatorInstance.SecondaryData;
      if (FVar21 == (ForElementType<FRigVMMemoryStorageStruct_*>)0x0) {
        FVar21 = (ForElementType<FRigVMMemoryStorageStruct_*>)pTVar3;
      }
      *(FRigVMMemoryStorageStruct **)((longlong)FVar21 + 0x10) = &param_1->DebugMemoryStorage;
      if (this_00->bHasPublicContextAssetPath == false) goto LAB_14a09395c;
      pUVar17 = (UObject *)(**(code **)((param_1->PublicDataScope)._padding_ + 0x20))();
      if (pUVar17 == (UObject *)0x0) {
LAB_14a093893:
        pUVar17 = (UObject *)0x0;
      }
      else {
        pUVar18 = Z_Construct_UClass_UScriptStruct_NoRegister();
        iVar16 = (int)pUVar18->_padding_;
        if ((*(int *)(*(longlong *)&pUVar17->field_0x10 + 0x38) < iVar16) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar17->field_0x10 + 0x30) + (longlong)iVar16 * 8) !=
            &pUVar18->_padding_)) goto LAB_14a093893;
      }
      local_78.PackageName.ComparisonIndex.Value = 0;
      local_78.PackageName.Number = 0;
      local_78.AssetName.ComparisonIndex.Value = 0;
      local_78.AssetName.Number = 0;
      FTopLevelAssetPath::TrySetPath(&local_78,pUVar17);
      FVar9 = (this_00->PublicContextAssetPath).PackageName;
      if (((FVar9 != (FName)0x0) && (FVar9 == local_78.PackageName)) &&
         ((this_00->PublicContextAssetPath).AssetName == local_78.AssetName)) goto LAB_14a09395c;
      if (1 < (byte)LogRigVM._0_1_) {
        FTopLevelAssetPath::ToString(&this_00->PublicContextAssetPath,&local_58);
        FTopLevelAssetPath::ToString(&local_78,&local_68);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRigVM);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
    }
    param_1->CurrentExecuteResult = Failed;
    EVar13 = Failed;
    goto LAB_14a093cbc;
  }
LAB_14a09395c:
  pFVar19 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  if (iVar7 == 0) {
    FRigVMExtendedExecuteContext::ResetExecutionState(param_1);
    iVar16 = (this->Instructions).Instructions.ArrayNum;
    iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (2,2,iVar16,&(param_1->SliceOffsets).AllocatorInstance,
                        &(param_1->SliceOffsets).ArrayNum,&(param_1->SliceOffsets).ArrayMax);
    memset((param_1->SliceOffsets).AllocatorInstance.Data + (longlong)iVar14 * 2,0,
           (longlong)iVar16 * 2);
  }
  local_80 = param_1->VM;
  param_1->VM = this;
  if (*param_2 == (FName)0x0) {
    uVar22 = 0;
    uVar15 = 0xffffffff;
    if (0 < (this_00->Entries).ArrayNum) {
      lVar23 = 0;
      do {
        uVar15 = 0;
        if ((int)uVar22 < (this_00->Entries).ArrayNum) {
          uVar15 = ~uVar22 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar11 = (code *)swi(3);
          EVar13 = (*pcVar11)();
          return EVar13;
        }
        uVar15 = uVar22;
        if (*(int *)((this_00->Entries).AllocatorInstance.Data + lVar23 + 8) == 0) break;
        uVar22 = uVar22 + 1;
        lVar23 = lVar23 + 0xc;
        uVar15 = 0xffffffff;
      } while ((int)uVar22 < (this_00->Entries).ArrayNum);
    }
    if (iVar7 == 0) {
      if (((int)uVar15 < 0) || ((this_00->Entries).ArrayNum <= (int)uVar15)) {
        (pFVar19->EventName).ComparisonIndex = 0;
        (pFVar19->EventName).Number = 0;
      }
      else {
        pFVar20 = FRigVMByteCode::GetEntry(this_00,uVar15);
        pFVar19->EventName = pFVar20->Name;
      }
    }
LAB_14a093a45:
    pTVar4 = &param_1->EntriesBeingExecuted;
    pFVar10 = (pTVar4->AllocatorInstance).Data;
    local_88[0] = uVar15;
    if (((pFVar10 <= (FScriptContainerElement *)local_88) &&
        ((FScriptContainerElement *)local_88 <
         pFVar10 + (longlong)(param_1->EntriesBeingExecuted).ArrayMax * 4)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar11 = (code *)swi(3);
      EVar13 = (*pcVar11)();
      return EVar13;
    }
    iVar16 = (param_1->EntriesBeingExecuted).ArrayNum;
    piVar1 = &(param_1->EntriesBeingExecuted).ArrayMax;
    if (iVar16 == *piVar1) {
      iVar16 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&pTVar4->AllocatorInstance,piVar1);
    }
    (param_1->EntriesBeingExecuted).ArrayNum = iVar16 + 1;
    *(uint *)((pTVar4->AllocatorInstance).Data + (longlong)iVar16 * 4) = local_88[0];
    if (iVar7 == 0) {
      pFVar19->NumExecutions = pFVar19->NumExecutions + 1;
    }
    iVar7 = (this->Instructions).Instructions.ArrayNum;
    uVar24 = pFVar19->InstructionIndex + 1;
    uVar15 = iVar7 - 1;
    uVar22 = uVar15;
    if ((int)uVar24 < iVar7) {
      lVar23 = (longlong)(int)uVar24 * 0xc;
      do {
        uVar22 = 0;
        if ((int)uVar24 < (this->Instructions).Instructions.ArrayNum) {
          uVar22 = ~uVar24 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar11 = (code *)swi(3);
          EVar13 = (*pcVar11)();
          return EVar13;
        }
        uVar22 = uVar24;
        if ((this->Instructions).Instructions.AllocatorInstance.Data[lVar23 + 8] ==
            (FScriptContainerElement)0x50) break;
        uVar24 = uVar24 + 1;
        lVar23 = lVar23 + 0xc;
        uVar22 = uVar15;
      } while ((int)uVar24 < (this->Instructions).Instructions.ArrayNum);
    }
    EVar13 = ExecuteInstructions(this,param_1,pFVar19->InstructionIndex,uVar22);
    param_1->CurrentExecuteResult = EVar13;
    if (((param_1->EntriesBeingExecuted).ArrayNum < 1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar11 = (code *)swi(3);
      EVar13 = (*pcVar11)();
      return EVar13;
    }
    piVar1 = &(param_1->EntriesBeingExecuted).ArrayNum;
    *piVar1 = *piVar1 + -1;
  }
  else {
    uVar15 = FRigVMByteCode::FindEntryIndex(this_00,param_2);
    if (uVar15 != 0xffffffff) {
      pcVar11 = *(code **)(this->_padding_ + 0x3d0);
      pFVar20 = FRigVMByteCode::GetEntry(this_00,uVar15);
      (*pcVar11)(this,param_1,(short)pFVar20->InstructionIndex);
      if (iVar7 == 0) {
        pFVar19->EventName = *param_2;
      }
      goto LAB_14a093a45;
    }
    param_1->CurrentExecuteResult = Failed;
    EVar13 = Failed;
  }
  param_1->VM = local_80;
LAB_14a093cbc:
  param_1->bCurrentlyRunningRootEntry = bVar6;
  param_1->CurrentEntryName = FVar8;
  return EVar13;
}

// FindEntry @ 14a093e20

int __thiscall URigVM::FindEntry(URigVM *this,FName *param_1)

{
  int iVar1;
  
  iVar1 = FRigVMByteCode::FindEntryIndex(this->ByteCodePtr,param_1);
  return iVar1;
}

// GenerateDefaultMemoryType @ 14a093f60

void __thiscall
URigVM::GenerateDefaultMemoryType
          (URigVM *this,ERigVMMemoryType param_1,
          TArray<FRigVMPropertyDescription,TSizedDefaultAllocator<32>_> *param_2)

{
  FRigVMMemoryStorageStruct *this_00;
  longlong lVar1;
  FRigVMMemoryStorageStruct *pFVar2;
  TArray<FRigVMPropertyPathDescription,TSizedDefaultAllocator<32>_> local_b8;
  FRigVMMemoryStorageStruct local_a8;
  FRigVMMemoryStorageStruct local_58;
  
  if (param_1 == Work) {
    lVar1 = 0x78;
  }
  else {
    if (param_1 != Literal) {
      return;
    }
    lVar1 = 0x28;
  }
  this_00 = (FRigVMMemoryStorageStruct *)((longlong)&this->_padding_ + lVar1);
  if (this_00 != (FRigVMMemoryStorageStruct *)0x0) {
    if (param_2 == (TArray<FRigVMPropertyDescription,TSizedDefaultAllocator<32>_> *)0x0) {
      pFVar2 = FRigVMMemoryStorageStruct::FRigVMMemoryStorageStruct(&local_58,param_1);
      FRigVMMemoryStorageStruct::operator=(this_00,pFVar2);
      FRigVMMemoryStorageStruct::~FRigVMMemoryStorageStruct(&local_58);
    }
    else {
      local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.ArrayNum = 0;
      local_b8.ArrayMax = 0;
      pFVar2 = FRigVMMemoryStorageStruct::FRigVMMemoryStorageStruct
                         (&local_a8,param_1,param_2,&local_b8);
      FRigVMMemoryStorageStruct::operator=(this_00,pFVar2);
      FRigVMMemoryStorageStruct::~FRigVMMemoryStorageStruct(&local_a8);
      DestructItems<FRigVMPropertyPathDescription,int>
                ((FRigVMPropertyPathDescription *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum)
      ;
      if ((FRigVMPropertyPathDescription *)local_b8.AllocatorInstance.Data !=
          (FRigVMPropertyPathDescription *)0x0) {
        FMemory::Free(local_b8.AllocatorInstance.Data);
        return;
      }
    }
  }
  return;
}

// GenerateMemoryType @ 14a094040

void __thiscall
URigVM::GenerateMemoryType
          (URigVM *this,FRigVMExtendedExecuteContext *param_1,ERigVMMemoryType param_2,
          TArray<FRigVMPropertyDescription,TSizedDefaultAllocator<32>_> *param_3)

{
  (**(code **)(this->_padding_ + 0x388))(this,param_2,param_3);
  if (param_2 == Work) {
    FRigVMMemoryStorageStruct::operator=
              (&param_1->WorkMemoryStorage,&this->DefaultWorkMemoryStorage);
  }
  return;
}

// GetCopyOpForOperands @ 14a094b10

FRigVMCopyOp * __thiscall
URigVM::GetCopyOpForOperands
          (URigVM *this,FRigVMCopyOp *__return_storage_ptr__,FRigVMOperand *param_1,
          FRigVMOperand *param_2)

{
  undefined1 uVar1;
  ushort uVar2;
  
  uVar1 = param_1->field_0x1;
  uVar2 = param_1->RegisterIndex;
  (__return_storage_ptr__->Source).MemoryType = param_1->MemoryType;
  (__return_storage_ptr__->Source).field_0x1 = uVar1;
  (__return_storage_ptr__->Source).RegisterIndex = uVar2;
  (__return_storage_ptr__->Source).RegisterOffset = param_1->RegisterOffset;
  uVar1 = param_2->field_0x1;
  uVar2 = param_2->RegisterIndex;
  (__return_storage_ptr__->Target).MemoryType = param_2->MemoryType;
  (__return_storage_ptr__->Target).field_0x1 = uVar1;
  (__return_storage_ptr__->Target).RegisterIndex = uVar2;
  (__return_storage_ptr__->Target).RegisterOffset = param_2->RegisterOffset;
  *(undefined1 *)&__return_storage_ptr__->_padding_ = 0x44;
  __return_storage_ptr__->RegisterType = Invalid;
  __return_storage_ptr__->CopyType = Default;
  return __return_storage_ptr__;
}

// GetDefaultMemoryByType @ 14a094e50

FRigVMMemoryStorageStruct * __thiscall
URigVM::GetDefaultMemoryByType(URigVM *this,ERigVMMemoryType param_1)

{
  if (param_1 == Work) {
    return &this->DefaultWorkMemoryStorage;
  }
  if (param_1 == Literal) {
    return &this->LiteralMemoryStorage;
  }
  return (FRigVMMemoryStorageStruct *)0x0;
}

// GetDefaultMemoryByType @ 14a094e80

FRigVMMemoryStorageStruct * __thiscall
URigVM::GetDefaultMemoryByType(URigVM *this,ERigVMMemoryType param_1)

{
  FRigVMMemoryStorageStruct *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a094e83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FRigVMMemoryStorageStruct *)(**(code **)(this->_padding_ + 0x390))();
  return pFVar1;
}

// GetEntryNames @ 14a094f10

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall URigVM::GetEntryNames(URigVM *this)

{
  int *piVar1;
  FRigVMByteCode *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  
  pTVar8 = &this->EntryNames;
  piVar1 = &(this->EntryNames).ArrayMax;
  (this->EntryNames).ArrayNum = 0;
  if ((this->EntryNames).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&pTVar8->AllocatorInstance,0,piVar1);
  }
  pFVar2 = this->ByteCodePtr;
  uVar9 = 0;
  if (0 < (pFVar2->Entries).ArrayNum) {
    lVar11 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar9 < (pFVar2->Entries).ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar8;
      }
      pFVar3 = (pTVar8->AllocatorInstance).Data;
      pFVar10 = (pFVar2->Entries).AllocatorInstance.Data + lVar11;
      if (((pFVar3 <= pFVar10) && (pFVar10 < pFVar3 + (longlong)*piVar1 * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar8;
      }
      iVar7 = (this->EntryNames).ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&pTVar8->AllocatorInstance,piVar1);
      }
      pFVar3 = (pTVar8->AllocatorInstance).Data;
      (this->EntryNames).ArrayNum = iVar7 + 1;
      uVar9 = uVar9 + 1;
      lVar11 = lVar11 + 0xc;
      *(undefined8 *)(pFVar3 + (longlong)iVar7 * 8) = *(undefined8 *)pFVar10;
    } while ((int)uVar9 < (pFVar2->Entries).ArrayNum);
  }
  return pTVar8;
}

// GetExternalVariableByName @ 14a095220

FRigVMExternalVariable * __thiscall
URigVM::GetExternalVariableByName
          (URigVM *this,FRigVMExternalVariable *__return_storage_ptr__,
          FRigVMExtendedExecuteContext *param_1,FName *param_2)

{
  uchar *puVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  uint uVar5;
  FRigVMExternalVariable *pFVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  FName *pFVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  uVar9 = 0;
  lVar7 = (longlong)(this->ExternalVariables).ArrayNum;
  uVar11 = uVar9;
  uVar12 = uVar9;
  if (0 < lVar7) {
    do {
      uVar8 = (uint)uVar9;
      uVar5 = 0;
      if ((int)uVar8 < (this->ExternalVariables).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FRigVMExternalVariable *)(*pcVar2)();
        return pFVar6;
      }
      pFVar10 = (FName *)((this->ExternalVariables).AllocatorInstance.Data + uVar12);
      if (*pFVar10 == *param_2) {
        uVar5 = 0;
        if ((int)uVar8 < (param_1->ExternalVariableRuntimeData).ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pFVar6 = (FRigVMExternalVariable *)(*pcVar2)();
          return pFVar6;
        }
        FVar3 = pFVar10[1];
        puVar1 = *(uchar **)
                  ((param_1->ExternalVariableRuntimeData).AllocatorInstance.Data +
                  (longlong)(int)uVar8 * 8);
        __return_storage_ptr__->_padding_ = (longlong)*pFVar10;
        __return_storage_ptr__->_padding_ = (longlong)FVar3;
        FVar3 = pFVar10[3];
        __return_storage_ptr__->_padding_ = (longlong)pFVar10[2];
        __return_storage_ptr__->_padding_ = (longlong)FVar3;
        __return_storage_ptr__->_padding_ = (longlong)pFVar10[4];
        __return_storage_ptr__->Memory = puVar1;
        return __return_storage_ptr__;
      }
      uVar9 = (ulonglong)(uVar8 + 1);
      uVar11 = uVar11 + 1;
      uVar12 = uVar12 + 0x28;
    } while ((longlong)uVar11 < lVar7);
  }
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->Memory = (uchar *)0x0;
  return __return_storage_ptr__;
}

// GetExternalVariableDefByName @ 14a0953b0

FRigVMExternalVariableDef * __thiscall
URigVM::GetExternalVariableDefByName
          (URigVM *this,FRigVMExternalVariableDef *__return_storage_ptr__,FName *param_1)

{
  FName *pFVar1;
  int iVar2;
  FName FVar3;
  FName *pFVar4;
  undefined1 local_res8 [8];
  
  iVar2 = (this->ExternalVariables).ArrayNum;
  pFVar4 = (FName *)(this->ExternalVariables).AllocatorInstance.Data;
  pFVar1 = pFVar4 + (longlong)iVar2 * 5;
  while( true ) {
    if ((this->ExternalVariables).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FRigVMExternalVariableDef,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    if (*pFVar4 == *param_1) {
      FVar3 = pFVar4[1];
      __return_storage_ptr__->Name = *pFVar4;
      __return_storage_ptr__->Property = (FProperty *)FVar3;
      FVar3 = pFVar4[3];
      __return_storage_ptr__->TypeName = pFVar4[2];
      __return_storage_ptr__->TypeObject = (UObject *)FVar3;
      *(FName *)&__return_storage_ptr__->bIsArray = pFVar4[4];
      return __return_storage_ptr__;
    }
    pFVar4 = pFVar4 + 5;
  }
  __return_storage_ptr__->bIsArray = false;
  __return_storage_ptr__->bIsPublic = false;
  __return_storage_ptr__->bIsReadOnly = false;
  __return_storage_ptr__->field_0x23 = 0;
  __return_storage_ptr__->Size = 0;
  (__return_storage_ptr__->Name).ComparisonIndex = 0;
  (__return_storage_ptr__->Name).Number = 0;
  __return_storage_ptr__->Property = (FProperty *)0x0;
  (__return_storage_ptr__->TypeName).ComparisonIndex = 0;
  (__return_storage_ptr__->TypeName).Number = 0;
  __return_storage_ptr__->TypeObject = (UObject *)0x0;
  return __return_storage_ptr__;
}

// GetHostCDO @ 14a095800

URigVMHost * __thiscall URigVM::GetHostCDO(URigVM *this)

{
  UClass *pUVar1;
  URigVMHost *pUVar2;
  
  pUVar1 = Z_Construct_UClass_URigVMHost_NoRegister();
  pUVar2 = (URigVMHost *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar1);
  return pUVar2;
}

// GetInstructions @ 14a095910

FRigVMInstructionArray * __thiscall URigVM::GetInstructions(URigVM *this)

{
  return &this->Instructions;
}

// GetLocalizedRegistry @ 14a095b20

FRigVMRegistry_NoLock * __thiscall URigVM::GetLocalizedRegistry(URigVM *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  FRigVMRegistry_NoLock *pFVar3;
  FRigVMRegistry_NoLock *pFVar4;
  
  lpCriticalSection = &this->CreateLocalizedRegistryMutex;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRigVMRegistry_NoLock *)(*pcVar1)();
      return pFVar3;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar3 = (this->LocalizedRegistry).Object;
  pFVar4 = (FRigVMRegistry_NoLock *)0x0;
  if (pFVar3 != (FRigVMRegistry_NoLock *)0x0) {
    pFVar4 = pFVar3;
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return pFVar4;
}

// GetMemoryByType @ 14a095ba0

FRigVMMemoryStorageStruct * __thiscall
URigVM::GetMemoryByType(URigVM *this,FRigVMExtendedExecuteContext *param_1,ERigVMMemoryType param_2)

{
  if (param_2 == Work) {
    return &param_1->WorkMemoryStorage;
  }
  if (param_2 != Literal) {
    if (param_2 == Debug) {
      return &param_1->DebugMemoryStorage;
    }
    return (FRigVMMemoryStorageStruct *)0x0;
  }
  return &this->LiteralMemoryStorage;
}

// GetMemoryByType @ 14a095bd0

URigVMMemoryStorage * __thiscall
URigVM::GetMemoryByType(URigVM *this,ERigVMMemoryType param_1,bool param_2)

{
  return (URigVMMemoryStorage *)0x0;
}

// GetMemoryByType @ 14a095be0

FRigVMMemoryStorageStruct * __thiscall
URigVM::GetMemoryByType(URigVM *this,FRigVMExtendedExecuteContext *param_1,ERigVMMemoryType param_2)

{
  FRigVMMemoryStorageStruct *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a095be3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FRigVMMemoryStorageStruct *)(**(code **)(this->_padding_ + 0x370))();
  return pFVar1;
}

// GetNativizedClass @ 14a095ce0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UClass * __thiscall
URigVM::GetNativizedClass
          (URigVM *this,TArray<FRigVMExternalVariableDef,TSizedDefaultAllocator<32>_> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  FScriptContainerElement *_Src;
  UObject *pUVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  EInternalObjectFlags EVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  UClass *pUVar11;
  UClass *pUVar12;
  UClass *pUVar13;
  longlong lVar14;
  TRawPtrProxy<TGuardValue<TArray<FRigVMExternalVariableDef,TSizedDefaultAllocator<32>_>,TArray<FRigVMExternalVariableDef,TSizedDefaultAllocator<32>_>_>_>
  local_res8;
  TSharedPtr<TGuardValue<TArray<FRigVMExternalVariableDef,TSizedDefaultAllocator<32>_>,TArray<FRigVMExternalVariableDef,TSizedDefaultAllocator<32>_>_>,1>
  local_58;
  TObjectIterator<UClass> local_48;
  
  pUVar12 = (UClass *)0x0;
  local_58.Object =
       (TGuardValue<TArray<FRigVMExternalVariableDef,TSizedDefaultAllocator<32>_>,TArray<FRigVMExternalVariableDef,TSizedDefaultAllocator<32>_>_>
        *)0x0;
  local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_1->ArrayNum != 0) {
    pUVar11 = ::operator_new(0x18);
    local_res8.Object =
         (TGuardValue<TArray<FRigVMExternalVariableDef,TSizedDefaultAllocator<32>_>,TArray<FRigVMExternalVariableDef,TSizedDefaultAllocator<32>_>_>
          *)pUVar12;
    if (pUVar11 != (UClass *)0x0) {
      pUVar11->_padding_ = (longlong)&this->ExternalVariables;
      plVar1 = &pUVar11->_padding_;
      *plVar1 = 0;
      piVar2 = (int *)((longlong)&pUVar11->_padding_ + 4);
      _Src = (this->ExternalVariables).AllocatorInstance.Data;
      iVar6 = (this->ExternalVariables).ArrayNum;
      *(int *)&pUVar11->_padding_ = iVar6;
      if (iVar6 == 0) {
        *piVar2 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,iVar6,0,(ForAnyElementType *)plVar1,iVar6,piVar2);
        memcpy((void *)*plVar1,_Src,(longlong)iVar6 * 0x28);
      }
      TArray<FRigVMExternalVariableDef,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FRigVMExternalVariableDef,TSizedDefaultAllocator<32>_> *)pUVar11->_padding_
                 ,param_1);
      local_res8.Object =
           (TGuardValue<TArray<FRigVMExternalVariableDef,TSizedDefaultAllocator<32>_>,TArray<FRigVMExternalVariableDef,TSizedDefaultAllocator<32>_>_>
            *)pUVar11;
    }
    TSharedPtr<TGuardValue<TArray<FRigVMExternalVariableDef,TSizedDefaultAllocator<32>_>,TArray<FRigVMExternalVariableDef,TSizedDefaultAllocator<32>_>_>,1>
    ::
    operator=<TGuardValue<TArray<FRigVMExternalVariableDef,TSizedDefaultAllocator<32>_>,TArray<FRigVMExternalVariableDef,TSizedDefaultAllocator<32>_>_>_>
              (&local_58,&local_res8);
  }
  iVar6 = (**(code **)(this->_padding_ + 0x2d0))(this);
  local_48.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ObjectArray.ArrayNum = 0;
  local_48.ObjectArray.ArrayMax = 0;
  local_48.Index = 0xffffffff;
  EVar7 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar11 = Z_Construct_UClass_UClass_NoRegister();
  GetObjectsOfClass(pUVar11,&local_48.ObjectArray,true,RF_ClassDefaultObject,
                    EVar7 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  TObjectIterator<UClass>::Advance(&local_48);
  do {
    lVar14 = (longlong)local_48.Index;
    if ((local_48.Index < 0) || (local_48.ObjectArray.ArrayNum <= local_48.Index))
    goto LAB_14a096050;
    uVar8 = 0;
    if (local_48.Index < local_48.ObjectArray.ArrayNum) {
      uVar8 = (uint)~local_48.Index >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pUVar12 = (UClass *)(*pcVar4)();
      return pUVar12;
    }
    lVar14 = *(longlong *)(local_48.ObjectArray.AllocatorInstance.Data + lVar14 * 8);
    pUVar11 = Z_Construct_UClass_URigVMNativized_NoRegister();
    if (pUVar11 != (UClass *)0x0) {
      iVar10 = (int)pUVar11->_padding_;
      if ((*(int *)(lVar14 + 0x38) < iVar10) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar14 + 0x30) + (longlong)iVar10 * 8) !=
          &pUVar11->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        lVar14 = (longlong)local_48.Index;
        uVar9 = 0;
        uVar8 = uVar9;
        if (local_48.Index < local_48.ObjectArray.ArrayNum) {
          uVar8 = (uint)~local_48.Index >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pUVar12 = (UClass *)(*pcVar4)();
          return pUVar12;
        }
        pUVar11 = *(UClass **)(local_48.ObjectArray.AllocatorInstance.Data + lVar14 * 8);
        pUVar13 = Z_Construct_UClass_URigVMNativized_NoRegister();
        if (pUVar11 != pUVar13) {
          lVar14 = (longlong)local_48.Index;
          uVar8 = uVar9;
          if (local_48.Index < local_48.ObjectArray.ArrayNum) {
            uVar8 = (uint)~local_48.Index >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pUVar12 = (UClass *)(*pcVar4)();
            return pUVar12;
          }
          pUVar11 = *(UClass **)(local_48.ObjectArray.AllocatorInstance.Data + lVar14 * 8);
          if ((pUVar11->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
            UClass::InternalCreateDefaultObjectWrapper(pUVar11);
          }
          pUVar3 = (pUVar11->ClassDefaultObject).field0_0x0.DebugPtr;
          pUVar11 = StaticClass();
          iVar10 = (int)pUVar11->_padding_;
          if (((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar10) ||
              ((longlong *)
               *(undefined1 **)
                (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar10 * 8) !=
               &pUVar11->_padding_)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Ret->IsA(T::StaticClass())",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                 ,0x1181,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            pUVar12 = (UClass *)(*pcVar4)();
            return pUVar12;
          }
          iVar10 = (**(code **)(*(longlong *)pUVar3 + 0x2d0))(pUVar3);
          if (iVar10 == iVar6) {
            lVar14 = (longlong)local_48.Index;
            if (local_48.Index < local_48.ObjectArray.ArrayNum) {
              uVar9 = (uint)~local_48.Index >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              pUVar12 = (UClass *)(*pcVar4)();
              return pUVar12;
            }
            pUVar12 = *(UClass **)(local_48.ObjectArray.AllocatorInstance.Data + lVar14 * 8);
LAB_14a096050:
            if (local_48.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_48.ObjectArray.AllocatorInstance.Data);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_58.SharedReferenceCount.ReferenceController);
            return pUVar12;
          }
        }
      }
    }
    TObjectIterator<UClass>::Advance(&local_48);
  } while( true );
}

// GetParameterByName @ 14a097930

FRigVMParameter * __thiscall
URigVM::GetParameterByName(URigVM *this,FRigVMParameter *__return_storage_ptr__,FName *param_1)

{
  int iVar1;
  uint uVar2;
  UScriptStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  TTuple<FName,int> *pTVar6;
  FRigVMParameter *pFVar7;
  uint uVar8;
  FRigVMParameter *pFVar9;
  uint *puVar10;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Parameters).ArrayNum;
  if (*(int *)&(this->ParametersNameMap).field_0x8 - *(int *)&(this->ParametersNameMap).field_0x34
      == iVar1) {
    pTVar6 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
             Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                   *)&this->ParametersNameMap,*param_1);
    puVar10 = (uint *)&pTVar6->field_0x8;
    if (pTVar6 == (TTuple<FName,int> *)0x0) {
      puVar10 = (uint *)0x0;
    }
    if (puVar10 == (uint *)0x0) {
LAB_14a097ae9:
      __return_storage_ptr__->Type = Invalid;
      (__return_storage_ptr__->Name).ComparisonIndex = 0;
      (__return_storage_ptr__->Name).Number = 0;
      __return_storage_ptr__->RegisterIndex = -1;
      (__return_storage_ptr__->ScriptStructPath).ComparisonIndex = 0;
      (__return_storage_ptr__->ScriptStructPath).Number = 0;
      (__return_storage_ptr__->ScriptStruct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
      (__return_storage_ptr__->CPPType).Data.ArrayNum = 0;
      (__return_storage_ptr__->CPPType).Data.ArrayMax = 0;
      (__return_storage_ptr__->CPPType).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
      ;
    }
    else {
      uVar2 = *puVar10;
      uVar8 = 0;
      if ((int)uVar2 < (this->Parameters).ArrayNum) {
        uVar8 = ~uVar2 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FRigVMParameter *)(*pcVar4)();
        return pFVar7;
      }
      FRigVMParameter::GetScriptStruct
                ((FRigVMParameter *)
                 ((this->Parameters).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x30));
      uVar2 = *puVar10;
      uVar8 = 0;
      if ((int)uVar2 < (this->Parameters).ArrayNum) {
        uVar8 = ~uVar2 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FRigVMParameter *)(*pcVar4)();
        return pFVar7;
      }
      FRigVMParameter::FRigVMParameter
                (__return_storage_ptr__,
                 (FRigVMParameter *)
                 ((this->Parameters).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x30));
    }
  }
  else {
    pFVar7 = (FRigVMParameter *)(this->Parameters).AllocatorInstance.Data;
    pFVar9 = pFVar7 + iVar1;
    while( true ) {
      if ((this->Parameters).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FRigVMParameter,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar7 == pFVar9) goto LAB_14a097ae9;
      if (pFVar7->Name == *param_1) break;
      pFVar7 = pFVar7 + 1;
    }
    FRigVMParameter::GetScriptStruct(pFVar7);
    __return_storage_ptr__->Type = pFVar7->Type;
    __return_storage_ptr__->Name = pFVar7->Name;
    __return_storage_ptr__->RegisterIndex = pFVar7->RegisterIndex;
    ::FString::FString(&__return_storage_ptr__->CPPType,&pFVar7->CPPType);
    pUVar3 = (pFVar7->ScriptStruct).field0_0x0.DebugPtr;
    (__return_storage_ptr__->ScriptStruct).field0_0x0.DebugPtr = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    __return_storage_ptr__->ScriptStructPath = pFVar7->ScriptStructPath;
  }
  return __return_storage_ptr__;
}

// GetParameters @ 14a097b30

TArray<FRigVMParameter,TSizedDefaultAllocator<32>_> * __thiscall URigVM::GetParameters(URigVM *this)

{
  return &this->Parameters;
}

// GetPrivateStaticClass @ 14a0980b0

UClass * __cdecl URigVM::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URigVM.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/RigVM",L"RigVM",&Z_Registration_Info_UClass_URigVM.InnerSingleton,
               StaticRegisterNativesURigVM,0x3b0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<URigVM>,InternalVTableHelperCtorCaller<URigVM>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URigVM.InnerSingleton;
}

// GetRigVMFunctionName @ 14a0982a0

FString * __thiscall
URigVM::GetRigVMFunctionName(URigVM *this,FString *__return_storage_ptr__,int param_1)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FString *pFVar5;
  
  pTVar1 = this->FunctionNamesPtr;
  uVar4 = 0;
  if (param_1 < pTVar1->ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
  }
  ::FName::ToString((FName *)((pTVar1->AllocatorInstance).Data + (longlong)param_1 * 8),
                    __return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetUserDefinedDependencies @ 14a09d2b0

TArray<UObject_const_*,TSizedDefaultAllocator<32>_> * __thiscall
URigVM::GetUserDefinedDependencies
          (URigVM *this,TArray<UObject_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<FRigVMMemoryStorageStruct_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FObjectPtr_u_0 *this_00;
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<int> aVar1;
  int iVar2;
  atomic<unsigned_int> aVar3;
  FRigVMFunction *this_01;
  code *pcVar4;
  atomic<int> *paVar5;
  bool bVar6;
  atomic<unsigned_int> aVar7;
  TArray<UObject_const_*,TSizedDefaultAllocator<32>_> *pTVar8;
  FRigVMRegistryHandle *pFVar9;
  TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *pTVar10;
  longlong lVar11;
  UClass *pUVar12;
  FObjectPtr_u_0 FVar13;
  FRigVMRegistry_RWLock *this_02;
  FConditionalScopeLock *this_03;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res10 [8];
  TArray<FRigVMMemoryStorageStruct_const_*,TSizedDefaultAllocator<32>_> *local_res18;
  undefined1 local_res20 [8];
  undefined1 local_88 [4];
  uint local_84;
  FScriptContainerElement *local_80;
  FObjectPtr_u_0 local_78;
  TArray<FRigVMFunction_const_*,TSizedDefaultAllocator<32>_> *local_70;
  FScriptContainerElement *local_68;
  undefined8 local_58;
  undefined4 local_50;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar15 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar16 = pFVar15 + (longlong)iVar2 * 8;
  local_res18 = param_1;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FRigVMMemoryStorageStruct_const_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar15 == pFVar16) break;
    FRigVMMemoryStorageStruct::GetUserDefinedDependencies
              (*(FRigVMMemoryStorageStruct **)pFVar15,__return_storage_ptr__);
    pFVar15 = pFVar15 + 8;
  }
  local_70 = this->FunctionsPtr;
  local_84 = local_70->ArrayNum;
  uVar14 = (ulonglong)(int)local_84;
  pFVar16 = (local_70->AllocatorInstance).Data;
  local_68 = pFVar16 + uVar14 * 8;
  do {
    pFVar15 = local_68;
    local_80 = pFVar16;
    if (local_70->ArrayNum != (int)uVar14) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FRigVMFunction_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (pFVar16 == pFVar15) {
      pFVar16 = (local_res18->AllocatorInstance).Data;
      if (pFVar16 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar16);
      }
      return __return_storage_ptr__;
    }
    this_01 = *(FRigVMFunction **)pFVar16;
    lpCriticalSection = &this->CreateLocalizedRegistryMutex;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<UObject_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar8;
      }
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this_02 = (FRigVMRegistry_RWLock *)(this->LocalizedRegistry).Object;
    if (this_02 == (FRigVMRegistry_RWLock *)0x0) {
      if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
      this_02 = FRigVMRegistry_RWLock::Get();
      this_03 = ::operator_new(0x20);
      if (this_03 == (FConditionalScopeLock *)0x0) goto LAB_14a09d3cc;
      FRigVMRegistryHandle::FRigVMRegistryHandle
                ((FRigVMRegistryHandle *)this_03,(FRigVMRegistry_NoLock *)this_02);
      *(undefined1 *)&this_03->_padding_ = 1;
      this_03->Registry = this_02;
      this_03->DesiredLockType = LockType_Read;
      aVar3 = this_02->WriteLockOwnerThread;
      aVar7 = (atomic<unsigned_int>)GetCurrentThreadId();
      if (aVar3 != aVar7) {
        AcquireSRWLockShared((PSRWLOCK)&this_03->Registry->Lock);
      }
      LOCK();
      paVar5 = &this_03->Registry->LockCount;
      aVar1 = *paVar5;
      *paVar5 = (atomic<int>)((int)*paVar5 + 1);
      UNLOCK();
      if (aVar1 == (atomic<int>)0x0) {
        LOCK();
        this_03->Registry->LockType =
             (atomic<FRigVMRegistry_NoLock::ELockType>)this_03->DesiredLockType;
        UNLOCK();
      }
      else if (this_03->DesiredLockType == LockType_Write) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4767296351463538103>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                           ,0x249,"DesiredLockType != LockType_Write");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TArray<UObject_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar8;
        }
      }
    }
    else {
      if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
LAB_14a09d3cc:
      this_03 = (FConditionalScopeLock *)0x0;
    }
    pFVar9 = FRigVMRegistry_NoLock::GetHandle_NoLock((FRigVMRegistry_NoLock *)this_02);
    pTVar10 = FRigVMFunction::GetArgumentTypeIndices_NoLock(this_01,pFVar9);
    iVar2 = pTVar10->ArrayNum;
    pFVar15 = (pTVar10->AllocatorInstance).Data;
    pFVar16 = pFVar15 + (longlong)iVar2 * 0xc;
    while( true ) {
      if (pTVar10->ArrayNum != iVar2) {
        local_88[0] = 0;
        `TCheckedPointerIterator<TRigVMTypeIndex_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_88);
      }
      if (pFVar15 == pFVar16) break;
      local_50 = *(undefined4 *)(pFVar15 + 8);
      local_58 = *(undefined8 *)pFVar15;
      lVar11 = (**(code **)(this_02->_padding_ + 0xe8))(this_02,&local_58);
      this_00 = (FObjectPtr_u_0 *)(lVar11 + 8);
      if (*(longlong *)(lVar11 + 8) != 0) {
        pUVar12 = Z_Construct_UClass_UUserDefinedStruct_NoRegister();
        bVar6 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar12);
        if ((bVar6) && (FVar13.Handle = *(UObject **)this_00, FVar13.Handle != (UObject *)0x0)) {
LAB_14a09d489:
          local_78 = FVar13;
          TArray<UObject_const_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UObject_const_*>
                    (__return_storage_ptr__,&local_78.Handle);
        }
        else if (this_00->Handle != (UObject *)0x0) {
          pUVar12 = Z_Construct_UClass_UUserDefinedEnum_NoRegister();
          bVar6 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar12);
          if ((bVar6) && (FVar13.Handle = this_00->Handle, FVar13.Handle != (UObject *)0x0))
          goto LAB_14a09d489;
        }
      }
      pFVar15 = pFVar15 + 0xc;
    }
    if (this_03 != (FConditionalScopeLock *)0x0) {
      FRigVMRegistry_RWLock::FConditionalScopeLock::~FConditionalScopeLock(this_03);
      ::operator_delete(this_03,0x20);
    }
    pFVar16 = local_80 + 8;
    uVar14 = (ulonglong)local_84;
  } while( true );
}

// GetVMHash @ 14a09d5e0

uint __thiscall URigVM::GetVMHash(URigVM *this)

{
  return this->CachedVMHash;
}

// Initialize @ 14a09d880

bool __thiscall URigVM::Initialize(URigVM *this,FRigVMExtendedExecuteContext *param_1)

{
  int iVar1;
  DWORD DVar2;
  FRigVMExtendedExecuteContext *local_res8;
  
  if (param_1->ExecutingThreadId != -1) {
    DVar2 = GetCurrentThreadId();
    if (param_1->ExecutingThreadId != DVar2) {
      local_res8 = param_1;
      `URigVM::Initialize'::__l5::<lambda_1>::operator()(&local_res8);
    }
  }
  DVar2 = GetCurrentThreadId();
  iVar1 = param_1->ExecutingThreadId;
  param_1->ExecutingThreadId = DVar2;
  RefreshInstructionsIfRequired(this);
  ResolveFunctionsIfRequired(this);
  if ((this->Instructions).Instructions.ArrayNum != 0) {
    RefreshArgumentNameCaches(this);
    PrepareMemoryForExecution(this,param_1);
  }
  param_1->ExecutingThreadId = iVar1;
  return true;
}

// Initialize @ 14a09d920

bool __thiscall
URigVM::Initialize(URigVM *this,FRigVMExtendedExecuteContext *param_1,
                  TArrayView<URigVMMemoryStorage_*,int> *param_2)

{
  return false;
}

// Initialize @ 14a09d930

bool __thiscall URigVM::Initialize(URigVM *this,TArrayView<URigVMMemoryStorage_*,int> *param_1)

{
  return false;
}

// InitializeInstance @ 14a09d940

bool __thiscall
URigVM::InitializeInstance(URigVM *this,FRigVMExtendedExecuteContext *param_1,bool param_2)

{
  int *piVar1;
  TArray<FRigVMInstructionSetExecuteState,TSizedDefaultAllocator<32>_> *this_00;
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  DWORD DVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  DVar7 = GetCurrentThreadId();
  iVar2 = param_1->ExecutingThreadId;
  param_1->ExecutingThreadId = DVar7;
  uVar9 = this->MemoryHandleCount;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  (param_1->CachedMemoryHandles).ArrayNum = 0;
  if ((param_1->CachedMemoryHandles).ArrayMax < (int)uVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar9,&(param_1->CachedMemoryHandles).AllocatorInstance,0,
               &(param_1->CachedMemoryHandles).ArrayMax);
  }
  this_00 = &param_1->LazyBranchExecuteState;
  uVar9 = (this->ByteCodePtr->BranchInfos).ArrayNum;
  TArray<FRigVMInstructionSetExecuteState,TSizedDefaultAllocator<32>_>::Reset(this_00,uVar9);
  iVar3 = (param_1->LazyBranchExecuteState).ArrayNum;
  piVar1 = &(param_1->LazyBranchExecuteState).ArrayNum;
  if (iVar3 < (int)uVar9) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x50,8,uVar9 - iVar3,&this_00->AllocatorInstance,piVar1,
                       &(param_1->LazyBranchExecuteState).ArrayMax);
    memset((this_00->AllocatorInstance).Data + (longlong)iVar8 * 0x50,0,
           (longlong)(int)(uVar9 - iVar3) * 0x50);
  }
  else {
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
    }
    if ((int)uVar9 < iVar3) {
      uVar10 = iVar3 - uVar9;
      if (((int)(uVar10 | uVar9) < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      if (uVar10 != 0) {
        TArray<FRigVMInstructionSetExecuteState,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (this_00,uVar9,uVar10);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x50,8,&this_00->AllocatorInstance,*piVar1,
                   &(param_1->LazyBranchExecuteState).ArrayMax);
      }
    }
  }
  if (param_2) {
    uVar9 = (**(code **)(this->_padding_ + 0x2d0))(this);
    param_1->VMHash = uVar9;
    FRigVMMemoryStorageStruct::operator=
              (&param_1->WorkMemoryStorage,&this->DefaultWorkMemoryStorage);
  }
  lpCriticalSection = &this->CreateLocalizedRegistryMutex;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  CacheMemoryHandlesIfRequired(this,param_1);
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  param_1->ExecutingThreadId = iVar2;
  return true;
}

// InstructionOpEval @ 14a09dca0

/* WARNING: Enum "ERigVMOpCode": Some values do not have unique names */

void __thiscall
URigVM::InstructionOpEval
          (URigVM *this,FRigVMExtendedExecuteContext *param_1,FRigVMRegistryHandle *param_2,
          int param_3,int param_4,
          TFunctionRef<void___cdecl(FRigVMExtendedExecuteContext_&,FRigVMRegistryHandle_&,int,FRigVMBranchInfoKey_const_&,FRigVMOperand_const_&)>
          *param_5)

{
  FRigVMInstructionArray *this_00;
  ushort uVar1;
  FRigVMByteCode *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRigVMInstruction *pFVar5;
  FName *pFVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  int local_res8;
  undefined4 local_198;
  undefined2 local_194;
  int local_190 [2];
  int local_188 [2];
  int local_180 [2];
  int local_178 [2];
  int local_170 [2];
  int local_168 [2];
  int local_160 [2];
  int local_158 [2];
  int local_150 [2];
  int local_148 [2];
  int local_140 [2];
  int local_138 [2];
  int local_130 [2];
  int local_128 [2];
  FRigVMFunction *local_120;
  TArray<FRigVMFunction_const_*,TSizedDefaultAllocator<32>_> *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  int local_40;
  int local_3c;
  FName local_38;
  
  local_118 = this->FunctionsPtr;
  this_00 = &this->Instructions;
  pFVar2 = this->ByteCodePtr;
  pFVar5 = FRigVMInstructionArray::operator[](this_00,param_3);
  if (pFVar5->OpCode == Execute) {
    pFVar5 = FRigVMInstructionArray::operator[](this_00,param_3);
    local_120 = (FRigVMFunction *)
                ((pFVar2->ByteCode).AllocatorInstance.Data + pFVar5->ByteCodeIndex);
    pFVar5 = FRigVMInstructionArray::operator[](this_00,param_3);
    iVar7 = pFVar5->ByteCodeIndex;
    pFVar8 = (pFVar2->ByteCode).AllocatorInstance.Data;
    if (((pFVar2->bByteCodeIsAligned == false) && (pFVar5->OperandAlignment != '\0')) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("bByteCodeIsAligned || InInstruction.OperandAlignment == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMByteCode.h"
                           ,0x520,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar1 = *(ushort *)(pFVar8 + (longlong)iVar7 + 4);
    uVar9 = (uint)uVar1;
    pFVar8 = (FScriptContainerElement *)0x0;
    if (uVar1 == 0) {
      uVar9 = 0;
      pFVar10 = pFVar8;
    }
    else {
      pFVar10 = (pFVar2->ByteCode).AllocatorInstance.Data +
                (int)(iVar7 + pFVar5->OperandAlignment + 10);
    }
    uVar1 = *(ushort *)((longlong)local_120 + 2);
    if ((local_118->ArrayNum <= (int)(uint)uVar1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_120 = *(FRigVMFunction **)((local_118->AllocatorInstance).Data + (ulonglong)uVar1 * 8);
    if ((local_120 != (FRigVMFunction *)0x0) && (uVar9 != 0)) {
      local_res8 = param_4;
      do {
        iVar7 = (int)pFVar8;
        if ((iVar7 < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar6 = FRigVMFunction::GetArgumentNameForOperandIndex(local_120,iVar7,uVar9,param_2);
        local_38 = *pFVar6;
        local_190[0] = local_res8;
        local_res8 = local_res8 + 1;
        local_40 = param_3;
        local_3c = iVar7;
        (**(code **)param_5)
                  (*(undefined8 *)&param_5->field_0x8,param_1,param_2,local_190,&local_40,pFVar10);
        pFVar8 = (FScriptContainerElement *)(ulonglong)(iVar7 + 1U);
        pFVar10 = pFVar10 + 6;
      } while ((int)(iVar7 + 1U) < (int)uVar9);
    }
  }
  else {
    switch(pFVar5->OpCode) {
    case Zero:
    case BoolFalse:
    case BoolTrue:
    case Increment:
    case Decrement:
      pFVar5 = FRigVMInstructionArray::operator[](this_00,param_3);
      local_188[0] = param_4;
      local_110 = 0xffffffffffffffff;
      local_108 = 0;
      (**(code **)param_5)
                (*(undefined8 *)&param_5->field_0x8,param_1,param_2,local_188,&local_110,
                 (pFVar2->ByteCode).AllocatorInstance.Data + (longlong)pFVar5->ByteCodeIndex + 2);
      break;
    case Copy:
      pFVar5 = FRigVMInstructionArray::operator[](this_00,param_3);
      local_100 = 0xffffffffffffffff;
      iVar7 = pFVar5->ByteCodeIndex;
      pFVar8 = (pFVar2->ByteCode).AllocatorInstance.Data;
      local_f8 = 0;
      local_180[0] = param_4;
      (**(code **)param_5)
                (*(undefined8 *)&param_5->field_0x8,param_1,param_2,local_180,&local_100,
                 pFVar8 + (longlong)iVar7 + 2);
      local_178[0] = param_4 + 1;
      local_f0 = 0xffffffffffffffff;
      local_e8 = 0;
      (**(code **)param_5)
                (*(undefined8 *)&param_5->field_0x8,param_1,param_2,local_178,&local_f0,
                 pFVar8 + (longlong)iVar7 + 8);
      break;
    case Equals:
    case NotEquals:
      pFVar5 = FRigVMInstructionArray::operator[](this_00,param_3);
      iVar7 = pFVar5->ByteCodeIndex;
      pFVar8 = (pFVar2->ByteCode).AllocatorInstance.Data;
      local_e0 = 0xffffffffffffffff;
      local_198 = *(undefined4 *)(pFVar8 + (longlong)iVar7 + 2);
      local_194 = *(undefined2 *)(pFVar8 + (longlong)iVar7 + 6);
      local_d8 = 0;
      local_170[0] = param_4;
      (**(code **)param_5)
                (*(undefined8 *)&param_5->field_0x8,param_1,param_2,local_170,&local_e0,&local_198);
      local_198 = *(undefined4 *)(pFVar8 + (longlong)iVar7 + 8);
      local_194 = *(undefined2 *)(pFVar8 + (longlong)iVar7 + 0xc);
      local_168[0] = param_4 + 1;
      local_d0 = 0xffffffffffffffff;
      local_c8 = 0;
      (**(code **)param_5)
                (*(undefined8 *)&param_5->field_0x8,param_1,param_2,local_168,&local_d0,&local_198);
      local_198 = *(undefined4 *)(pFVar8 + (longlong)iVar7 + 0xe);
      local_194 = *(undefined2 *)(pFVar8 + (longlong)iVar7 + 0x12);
      local_160[0] = param_4 + 2;
      local_c0 = 0xffffffffffffffff;
      local_b8 = 0;
      (**(code **)param_5)
                (*(undefined8 *)&param_5->field_0x8,param_1,param_2,local_160,&local_c0,&local_198);
      break;
    case JumpAbsolute:
    case JumpForward:
    case JumpBackward:
    case Exit:
    case EndBlock:
    case InvokeEntry:
      break;
    case JumpAbsoluteIf:
    case JumpForwardIf:
    case JumpBackwardIf:
      pFVar5 = FRigVMInstructionArray::operator[](this_00,param_3);
      local_158[0] = param_4;
      local_b0 = 0xffffffffffffffff;
      local_a8 = 0;
      (**(code **)param_5)
                (*(undefined8 *)&param_5->field_0x8,param_1,param_2,local_158,&local_b0,
                 (pFVar2->ByteCode).AllocatorInstance.Data + (longlong)pFVar5->ByteCodeIndex + 2);
      break;
    case ChangeType:
      pFVar5 = FRigVMInstructionArray::operator[](this_00,param_3);
      local_150[0] = param_4;
      local_a0 = 0xffffffffffffffff;
      local_98 = 0;
      (**(code **)param_5)
                (*(undefined8 *)&param_5->field_0x8,param_1,param_2,local_150,&local_a0,
                 (pFVar2->ByteCode).AllocatorInstance.Data + (longlong)pFVar5->ByteCodeIndex + 2);
      break;
    case BeginBlock:
      pFVar5 = FRigVMInstructionArray::operator[](this_00,param_3);
      local_90 = 0xffffffffffffffff;
      iVar7 = pFVar5->ByteCodeIndex;
      pFVar8 = (pFVar2->ByteCode).AllocatorInstance.Data;
      local_88 = 0;
      local_148[0] = param_4;
      (**(code **)param_5)
                (*(undefined8 *)&param_5->field_0x8,param_1,param_2,local_148,&local_90,
                 pFVar8 + (longlong)iVar7 + 2);
      local_140[0] = param_4 + 1;
      local_80 = 0xffffffffffffffff;
      local_78 = 0;
      (**(code **)param_5)
                (*(undefined8 *)&param_5->field_0x8,param_1,param_2,local_140,&local_80,
                 pFVar8 + (longlong)iVar7 + 8);
      break;
    default:
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVM.cpp"
                         ,0x529,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      break;
    case JumpToBranch:
      pFVar5 = FRigVMInstructionArray::operator[](this_00,param_3);
      local_138[0] = param_4;
      local_70 = 0xffffffffffffffff;
      local_68 = 0;
      (**(code **)param_5)
                (*(undefined8 *)&param_5->field_0x8,param_1,param_2,local_138,&local_70,
                 (pFVar2->ByteCode).AllocatorInstance.Data + (longlong)pFVar5->ByteCodeIndex + 2);
      break;
    case RunInstructions:
      pFVar5 = FRigVMInstructionArray::operator[](this_00,param_3);
      local_130[0] = param_4;
      local_60 = 0xffffffffffffffff;
      local_58 = 0;
      (**(code **)param_5)
                (*(undefined8 *)&param_5->field_0x8,param_1,param_2,local_130,&local_60,
                 (pFVar2->ByteCode).AllocatorInstance.Data + (longlong)pFVar5->ByteCodeIndex + 2);
      break;
    case SetupTraits:
      pFVar5 = FRigVMInstructionArray::operator[](this_00,param_3);
      local_128[0] = param_4;
      local_50 = 0xffffffffffffffff;
      local_48 = 0;
      (**(code **)param_5)
                (*(undefined8 *)&param_5->field_0x8,param_1,param_2,local_128,&local_50,
                 (pFVar2->ByteCode).AllocatorInstance.Data + (longlong)pFVar5->ByteCodeIndex + 2);
    }
  }
  return;
}

// InvalidateCachedMemory @ 14a09e6b0

void __thiscall URigVM::InvalidateCachedMemory(URigVM *this,FRigVMExtendedExecuteContext *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  InvalidateCachedMemory_Internal(this);
  (param_1->CachedMemoryHandles).ArrayNum = 0;
  if ((param_1->CachedMemoryHandles).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&(param_1->CachedMemoryHandles).AllocatorInstance,0,
               &(param_1->CachedMemoryHandles).ArrayMax);
  }
  piVar1 = &(param_1->LazyBranchExecuteState).ArrayMax;
  pFVar3 = (param_1->LazyBranchExecuteState).AllocatorInstance.Data;
  iVar2 = (param_1->LazyBranchExecuteState).ArrayNum;
  if (-1 < *piVar1) {
    DestructItems<FRigVMInstructionSetExecuteState,int>
              ((FRigVMInstructionSetExecuteState *)pFVar3,iVar2);
    (param_1->LazyBranchExecuteState).ArrayNum = 0;
    return;
  }
  DestructItems<FRigVMInstructionSetExecuteState,int>
            ((FRigVMInstructionSetExecuteState *)pFVar3,iVar2);
  (param_1->LazyBranchExecuteState).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,0,&(param_1->LazyBranchExecuteState).AllocatorInstance,0,piVar1);
  }
  return;
}

// InvalidateCachedMemory_Internal @ 14a09e770

void __thiscall URigVM::InvalidateCachedMemory_Internal(URigVM *this)

{
  int *piVar1;
  int iVar2;
  FRigVMPropertyPath *pFVar3;
  FRigVMLazyBranch *pFVar4;
  
  (this->FirstHandleForInstruction).ArrayNum = 0;
  if ((this->FirstHandleForInstruction).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->FirstHandleForInstruction).AllocatorInstance,0,
               &(this->FirstHandleForInstruction).ArrayMax);
  }
  this->MemoryHandleCount = 0;
  piVar1 = &(this->ExternalPropertyPaths).ArrayMax;
  pFVar3 = (FRigVMPropertyPath *)(this->ExternalPropertyPaths).AllocatorInstance.Data;
  iVar2 = (this->ExternalPropertyPaths).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<FRigVMPropertyPath,int>(pFVar3,iVar2);
    (this->ExternalPropertyPaths).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&(this->ExternalPropertyPaths).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FRigVMPropertyPath,int>(pFVar3,iVar2);
    (this->ExternalPropertyPaths).ArrayNum = 0;
  }
  piVar1 = &(this->LazyBranches).ArrayMax;
  pFVar4 = (FRigVMLazyBranch *)(this->LazyBranches).AllocatorInstance.Data;
  iVar2 = (this->LazyBranches).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<FRigVMLazyBranch,int>(pFVar4,iVar2);
    (this->LazyBranches).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,0,&(this->LazyBranches).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FRigVMLazyBranch,int>(pFVar4,iVar2);
    (this->LazyBranches).ArrayNum = 0;
  }
  return;
}

// IsContextValidForExecution @ 14a09e870

bool __thiscall
URigVM::IsContextValidForExecution(URigVM *this,FRigVMExtendedExecuteContext *param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(this->_padding_ + 0x2d0))();
  return param_1->VMHash == uVar1;
}

// IsNativized @ 14a09e8b0

bool __thiscall URigVM::IsNativized(URigVM *this)

{
  return false;
}

// Load @ 14a09fa60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall URigVM::Load(URigVM *this,FArchive *param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  code *pcVar5;
  TConsoleVariableData<bool> *pTVar6;
  int iVar7;
  TSharedRef<FRigVMRegistry_NoLock,1> *pTVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStackY_338 [32];
  uint local_308;
  uint local_304;
  ulong64 local_300;
  FRigVMRegistry_NoLock *local_2f8;
  FSharedReferencer<1> local_2f0;
  FString local_2e8;
  undefined8 local_2d8;
  FSharedReferencer<1> FStack_2d0;
  TSharedRef<FRigVMRegistry_NoLock,1> local_2c8;
  undefined1 local_2b8 [32];
  void *local_298;
  undefined4 local_290;
  uint local_28c;
  undefined4 local_288;
  undefined4 local_284;
  ForElementType<FSetElementId> local_278;
  int local_270;
  undefined1 local_268 [32];
  void *local_248;
  undefined4 local_240;
  uint local_23c;
  undefined4 local_238;
  undefined4 local_234;
  ForElementType<FSetElementId> local_228;
  int local_220;
  TSet<TTuple<FString,FSoftObjectPath>,TDefaultMapHashableKeyFuncs<FString,FSoftObjectPath,0>,FDefaultSetAllocator>
  local_218;
  TSet<TTuple<FString,FSoftObjectPath>,TDefaultMapHashableKeyFuncs<FString,FSoftObjectPath,0>,FDefaultSetAllocator>
  local_1c8;
  FRigVMMemoryContainer local_178;
  FRigVMMemoryContainer local_d8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_338;
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5ReleaseStreamObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FRigVMObjectVersion::GUID);
  Reset_Internal(this);
  iVar7 = FArchiveState::CustomVer((FArchiveState *)param_1,&FRigVMObjectVersion::GUID);
  if (iVar7 < 0) {
    local_308 = 1;
    iVar7 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID);
    if (0x33 < iVar7) {
      plVar3 = *(longlong **)&param_1->field_0x8;
      if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_308,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,&local_308);
        }
      }
      else {
        local_308 = *(uint *)*plVar3;
        *plVar3 = *plVar3 + 4;
      }
    }
    iVar7 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID);
    if ((iVar7 < 0x72) &&
       (iVar7 = FArchiveState::CustomVer
                          ((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID),
       0x60 < iVar7)) {
      local_2e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2e8.Data.ArrayNum = 0;
      local_2e8.Data.ArrayMax = 0;
      ::operator<<(param_1,&local_2e8);
      if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
      }
    }
    if (local_308 == 1) {
      FRigVMMemoryContainer::FRigVMMemoryContainer(&local_d8,true);
      FRigVMMemoryContainer::FRigVMMemoryContainer(&local_178,true);
      FRigVMMemoryContainer::Serialize(&local_d8,param_1);
      FRigVMMemoryContainer::Serialize(&local_178,param_1);
      TArrayPrivateFriend::Serialize<FName,TSizedDefaultAllocator<32>_>
                (param_1,&this->FunctionNamesStorage);
      ::operator<<(param_1,&this->ByteCodeStorage);
      TArrayPrivateFriend::Serialize<FRigVMParameter,TSizedDefaultAllocator<32>_>
                (param_1,&this->Parameters);
      iVar7 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID);
      if (iVar7 < 0x2b) {
        Reset_Internal(this);
        FRigVMMemoryContainer::~FRigVMMemoryContainer(&local_178);
        FRigVMMemoryContainer::~FRigVMMemoryContainer(&local_d8);
        return;
      }
      iVar7 = FArchiveState::CustomVer
                        ((FArchiveState *)param_1,&FUE5ReleaseStreamObjectVersion::GUID);
      if ((0x2b < iVar7) ||
         (iVar7 = FArchiveState::CustomVer
                            ((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID),
         0x70 < iVar7)) {
        TSetPrivateFriend::
        Serialize<TTuple<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  (param_1,(TSet<TTuple<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                            *)&this->OperandToDebugRegisters);
      }
      iVar7 = FArchiveState::CustomVer((FArchiveState *)param_1,&FRigVMObjectVersion::GUID);
      if ((2 < iVar7) &&
         (iVar7 = FArchiveState::CustomVer((FArchiveState *)param_1,&FRigVMObjectVersion::GUID),
         iVar7 < 5)) {
        local_218.Elements._0_8_ = 0;
        local_218.Elements._8_8_ = 0;
        local_218.Elements._32_8_ = 0;
        local_218.Elements._40_4_ = 0;
        local_218.Elements._44_4_ = 0x80;
        local_218.Elements._48_4_ = 0xffffffff;
        local_218.Elements._52_4_ = 0;
        local_218.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
        local_218.HashSize = 0;
        TSetPrivateFriend::
        Serialize<TTuple<FString,FSoftObjectPath>,TDefaultMapHashableKeyFuncs<FString,FSoftObjectPath,0>,FDefaultSetAllocator>
                  (param_1,&local_218);
        local_218.HashSize = 0;
        if (local_218.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_218.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_218.Elements);
      }
      iVar7 = FArchiveState::CustomVer((FArchiveState *)param_1,&FRigVMObjectVersion::GUID);
      if ((3 < iVar7) &&
         (iVar7 = FArchiveState::CustomVer((FArchiveState *)param_1,&FRigVMObjectVersion::GUID),
         iVar7 < 5)) {
        local_1c8.Elements._0_8_ = 0;
        local_1c8.Elements._8_8_ = 0;
        local_1c8.Elements._32_8_ = 0;
        local_1c8.Elements._40_4_ = 0;
        local_1c8.Elements._44_4_ = 0x80;
        local_1c8.Elements._48_4_ = 0xffffffff;
        local_1c8.Elements._52_4_ = 0;
        local_1c8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
        local_1c8.HashSize = 0;
        TSetPrivateFriend::
        Serialize<TTuple<FString,FSoftObjectPath>,TDefaultMapHashableKeyFuncs<FString,FSoftObjectPath,0>,FDefaultSetAllocator>
                  (param_1,&local_1c8);
        local_1c8.HashSize = 0;
        if (local_1c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_1c8.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_1c8.Elements);
      }
      FRigVMMemoryContainer::~FRigVMMemoryContainer(&local_178);
      FRigVMMemoryContainer::~FRigVMMemoryContainer(&local_d8);
    }
    if (local_308 != 0) {
      Reset_Internal(this);
      return;
    }
  }
  iVar7 = FArchiveState::CustomVer((FArchiveState *)param_1,&FRigVMObjectVersion::GUID);
  if (0 < iVar7) {
    ::operator<<(param_1,&this->CachedVMHash);
  }
  TArrayPrivateFriend::Serialize<FRigVMPropertyPathDescription,TSizedDefaultAllocator<32>_>
            (param_1,&this->ExternalPropertyPathDescriptions);
  TArrayPrivateFriend::Serialize<FName,TSizedDefaultAllocator<32>_>
            (param_1,&this->FunctionNamesStorage);
  ::operator<<(param_1,&this->ByteCodeStorage);
  FRigVMByteCode::AlignByteCode(&this->ByteCodeStorage);
  TArrayPrivateFriend::Serialize<FRigVMParameter,TSizedDefaultAllocator<32>_>
            (param_1,&this->Parameters);
  iVar7 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5ReleaseStreamObjectVersion::GUID);
  if ((0x2b < iVar7) ||
     (iVar7 = FArchiveState::CustomVer
                        ((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID),
     0x70 < iVar7)) {
    TSetPrivateFriend::
    Serialize<TTuple<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              (param_1,(TSet<TTuple<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                        *)&this->OperandToDebugRegisters);
  }
  iVar7 = FArchiveState::CustomVer((FArchiveState *)param_1,&FRigVMObjectVersion::GUID);
  if ((2 < iVar7) &&
     (iVar7 = FArchiveState::CustomVer((FArchiveState *)param_1,&FRigVMObjectVersion::GUID),
     iVar7 < 5)) {
    local_2b8._0_8_ = (FScriptContainerElement *)0x0;
    local_2b8._8_8_ = 0;
    local_298 = (void *)0x0;
    local_290 = 0;
    local_28c = 0x80;
    local_288 = 0xffffffff;
    local_284 = 0;
    local_278 = (ForElementType<FSetElementId>)0x0;
    local_270 = 0;
    TSetPrivateFriend::
    Serialize<TTuple<FString,FSoftObjectPath>,TDefaultMapHashableKeyFuncs<FString,FSoftObjectPath,0>,FDefaultSetAllocator>
              (param_1,(TSet<TTuple<FString,FSoftObjectPath>,TDefaultMapHashableKeyFuncs<FString,FSoftObjectPath,0>,FDefaultSetAllocator>
                        *)local_2b8);
    local_270 = 0;
    if (local_278 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_278);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_2b8,0,local_2b8._8_4_);
    iVar7 = SUB84(local_2b8._8_8_,4);
    local_2b8._8_8_ = local_2b8._8_8_ & 0xffffffff00000000;
    if (iVar7 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,0,(ForAnyElementType *)local_2b8,0,(int *)(local_2b8 + 0xc));
    }
    local_288 = 0xffffffff;
    local_284 = 0;
    local_290 = 0;
    if (0x80 < local_28c) {
      local_28c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_2b8 + 0x10),0);
    }
    if (local_298 != (void *)0x0) {
      FMemory::Free(local_298);
    }
    if ((FScriptContainerElement *)local_2b8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_2b8._0_8_);
    }
  }
  iVar7 = FArchiveState::CustomVer((FArchiveState *)param_1,&FRigVMObjectVersion::GUID);
  if ((3 < iVar7) &&
     (iVar7 = FArchiveState::CustomVer((FArchiveState *)param_1,&FRigVMObjectVersion::GUID),
     iVar7 < 5)) {
    local_268._0_8_ = (FScriptContainerElement *)0x0;
    local_268._8_8_ = 0;
    local_248 = (void *)0x0;
    local_240 = 0;
    local_23c = 0x80;
    local_238 = 0xffffffff;
    local_234 = 0;
    local_228 = (ForElementType<FSetElementId>)0x0;
    local_220 = 0;
    TSetPrivateFriend::
    Serialize<TTuple<FString,FSoftObjectPath>,TDefaultMapHashableKeyFuncs<FString,FSoftObjectPath,0>,FDefaultSetAllocator>
              (param_1,(TSet<TTuple<FString,FSoftObjectPath>,TDefaultMapHashableKeyFuncs<FString,FSoftObjectPath,0>,FDefaultSetAllocator>
                        *)local_268);
    local_220 = 0;
    if (local_228 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_228);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_268,0,local_268._8_4_);
    iVar7 = SUB84(local_268._8_8_,4);
    local_268._8_8_ = local_268._8_8_ & 0xffffffff00000000;
    if (iVar7 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,0,(ForAnyElementType *)local_268,0,(int *)(local_268 + 0xc));
    }
    local_238 = 0xffffffff;
    local_234 = 0;
    local_240 = 0;
    if (0x80 < local_23c) {
      local_23c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_268 + 0x10),0);
    }
    if (local_248 != (void *)0x0) {
      FMemory::Free(local_248);
    }
    if ((FScriptContainerElement *)local_268._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_268._0_8_);
    }
  }
  iVar7 = FArchiveState::CustomVer((FArchiveState *)param_1,&FRigVMObjectVersion::GUID);
  if (5 < iVar7) {
    FRigVMMemoryStorageStruct::Serialize(&this->LiteralMemoryStorage,param_1);
  }
  iVar7 = FArchiveState::CustomVer((FArchiveState *)param_1,&FRigVMObjectVersion::GUID);
  if (6 < iVar7) {
    FRigVMMemoryStorageStruct::Serialize(&this->DefaultWorkMemoryStorage,param_1);
    FRigVMMemoryStorageStruct::Serialize(&this->DefaultDebugMemoryStorage,param_1);
  }
  iVar7 = FArchiveState::CustomVer((FArchiveState *)param_1,&FRigVMObjectVersion::GUID);
  if (iVar7 < 0x13) {
    return;
  }
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  bVar10 = false;
  puVar1 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar1) {
    local_304 = 0;
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_304,4);
    if (1 < local_304) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar2 = local_304;
    if ((param_1->field_0x28 & 1) == 0) goto LAB_14a0a011b;
  }
  else {
    uVar2 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar1;
  }
  bVar10 = uVar2 != 0;
LAB_14a0a011b:
  local_2d8 = 0;
  FStack_2d0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->LocalizedRegistry != (TSharedPtr<FRigVMRegistry_NoLock,1> *)&local_2d8) {
    (this->LocalizedRegistry).Object = (FRigVMRegistry_NoLock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->LocalizedRegistry).SharedReferenceCount,&FStack_2d0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_2d0.ReferenceController);
  if (bVar10) {
    plVar3 = *(longlong **)&param_1->field_0x8;
    local_300 = 0;
    if ((ulong64 *)plVar3[1] < (ulong64 *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_300,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_300);
      }
    }
    else {
      local_300 = *(ulong64 *)*plVar3;
      *plVar3 = *plVar3 + 8;
    }
    pTVar6 = CVarRigVMEnableLocalizedRegistry.Ref;
    bVar10 = IsInParallelGameThread();
    if ((bVar10) || (bVar10 = IsInGameThread(), lVar9 = 1, bVar10)) {
      lVar9 = 0;
    }
    if (pTVar6->ShadowedValue[lVar9] == false) {
      (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,local_300);
    }
    else {
      pTVar8 = FRigVMRegistry_NoLock::CreateLocalizedRegistry(&local_2c8);
      local_2f0.ReferenceController = (pTVar8->SharedReferenceCount).ReferenceController;
      local_2f8 = pTVar8->Object;
      if (local_2f0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_2f0.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_2f0.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (&this->LocalizedRegistry != (TSharedPtr<FRigVMRegistry_NoLock,1> *)&local_2f8) {
        (this->LocalizedRegistry).Object = local_2f8;
        local_2f8 = (FRigVMRegistry_NoLock *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->LocalizedRegistry).SharedReferenceCount,&local_2f0);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2f0.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2c8.SharedReferenceCount.ReferenceController);
      if (((this->LocalizedRegistry).Object == (FRigVMRegistry_NoLock *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FRigVMRegistry_NoLock::Serialize_NoLock((this->LocalizedRegistry).Object,param_1);
    }
  }
  return;
}

// PostLoad @ 14a0a0450

void __thiscall URigVM::PostLoad(URigVM *this)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  uint local_res8 [2];
  
  UObject::PostLoad((UObject *)this);
  iVar1 = (this->Instructions).Instructions.ArrayMax;
  (this->Instructions).Instructions.ArrayNum = 0;
  if (iVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)&this->Instructions,0,
               &(this->Instructions).Instructions.ArrayMax);
  }
  (this->FunctionsStorage).ArrayNum = 0;
  if ((this->FunctionsStorage).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->FunctionsStorage).AllocatorInstance,0,
               &(this->FunctionsStorage).ArrayMax);
  }
  (this->FactoriesStorage).ArrayNum = 0;
  if ((this->FactoriesStorage).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->FactoriesStorage).AllocatorInstance,0,
               &(this->FactoriesStorage).ArrayMax);
  }
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)&this->ParametersNameMap);
  local_res8[0] = 0;
  if (0 < (this->Parameters).ArrayNum) {
    do {
      uVar3 = local_res8[0];
      uVar5 = 0;
      if ((int)local_res8[0] < (this->Parameters).ArrayNum) {
        uVar5 = ~local_res8[0] >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
      Emplace<FName_const_&,int_const_&>
                ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                  *)&this->ParametersNameMap,
                 (FName *)((this->Parameters).AllocatorInstance.Data +
                          (longlong)(int)uVar3 * 0x30 + 4),(int *)local_res8);
      local_res8[0] = local_res8[0] + 1;
    } while ((int)local_res8[0] < (this->Parameters).ArrayNum);
  }
  ResolveFunctionsIfRequired(this);
  RefreshInstructionsIfRequired(this);
  RebuildByteCodeOnLoad(this);
  RefreshArgumentNameCaches(this);
  return;
}

// PrepareMemoryForExecution @ 14a0a0670

void __thiscall
URigVM::PrepareMemoryForExecution(URigVM *this,FRigVMExtendedExecuteContext *param_1)

{
  int *piVar1;
  TArray<FRigVMLazyBranch,TSizedDefaultAllocator<32>_> *this_00;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  atomic<int> aVar3;
  atomic<unsigned_int> aVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  atomic<int> *paVar7;
  bool bVar8;
  DWORD DVar9;
  int iVar10;
  atomic<unsigned_int> aVar11;
  int iVar12;
  FConditionalScopeLock *this_01;
  FRigVMRegistry_RWLock *pFVar13;
  FConditionalScopeLock *pFVar14;
  uint uVar15;
  uint uVar16;
  uint local_res8 [2];
  FConditionalScopeLock *local_res10;
  FRigVMExtendedExecuteContext *local_res18;
  uint *local_res20;
  undefined4 local_78;
  uint local_74;
  FRigVMBranchInfoKey local_70;
  code *local_60;
  uint **local_58;
  
  DVar9 = GetCurrentThreadId();
  if (param_1->ExecutingThreadId != DVar9) {
    local_res18 = param_1;
    `URigVM::PrepareMemoryForExecution'::__l2::<lambda_1>::operator()(&local_res18);
  }
  InvalidateCachedMemory(this,param_1);
  if ((this->Instructions).Instructions.ArrayNum == 0) {
    return;
  }
  RefreshExternalPropertyPaths(this);
  local_70.InstructionIndex = 0;
  local_70.ArgumentIndex = 0;
  local_70.Label.ComparisonIndex.Value = 0;
  local_70.Label.Number = 0;
  FRigVMByteCode::GetBranchInfo(this->ByteCodePtr,&local_70);
  this_00 = &this->LazyBranches;
  uVar16 = (this->ByteCodePtr->BranchInfos).ArrayNum;
  TArray<FRigVMLazyBranch,TSizedDefaultAllocator<32>_>::Reset(this_00,uVar16);
  iVar12 = (this->LazyBranches).ArrayNum;
  piVar1 = &(this->LazyBranches).ArrayNum;
  if (iVar12 < (int)uVar16) {
    iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x60,0x10,uVar16 - iVar12,&this_00->AllocatorInstance,piVar1,
                        &(this->LazyBranches).ArrayMax);
    memset((this_00->AllocatorInstance).Data + (longlong)iVar10 * 0x60,0,
           (longlong)(int)(uVar16 - iVar12) * 0x60);
  }
  else {
    if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
    }
    if ((int)uVar16 < iVar12) {
      uVar15 = iVar12 - uVar16;
      if (((int)(uVar15 | uVar16) < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (uVar15 != 0) {
        TArray<FRigVMLazyBranch,TSizedDefaultAllocator<32>_>::RemoveAtImpl(this_00,uVar16,uVar15);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,&this_00->AllocatorInstance,*piVar1,&(this->LazyBranches).ArrayMax);
      }
    }
  }
  uVar16 = (this->Instructions).Instructions.ArrayNum + 1;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  piVar1 = &(this->FirstHandleForInstruction).ArrayMax;
  (this->FirstHandleForInstruction).ArrayNum = 0;
  if ((this->FirstHandleForInstruction).ArrayMax < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar16,&(this->FirstHandleForInstruction).AllocatorInstance,0,piVar1);
  }
  local_res10 = (FConditionalScopeLock *)0x0;
  if ((this->LocalizedRegistry).Object == (FRigVMRegistry_NoLock *)0x0) {
    this_01 = ::operator_new(0x20);
    if (this_01 != (FConditionalScopeLock *)0x0) {
      local_res10 = this_01;
      pFVar13 = FRigVMRegistry_RWLock::Get();
      FRigVMRegistryHandle::FRigVMRegistryHandle
                ((FRigVMRegistryHandle *)this_01,(FRigVMRegistry_NoLock *)pFVar13);
      *(undefined1 *)&this_01->_padding_ = 1;
      this_01->Registry = pFVar13;
      this_01->DesiredLockType = LockType_Read;
      aVar4 = pFVar13->WriteLockOwnerThread;
      aVar11 = (atomic<unsigned_int>)GetCurrentThreadId();
      if (aVar4 != aVar11) {
        AcquireSRWLockShared((PSRWLOCK)&this_01->Registry->Lock);
      }
      LOCK();
      paVar7 = &this_01->Registry->LockCount;
      aVar3 = *paVar7;
      *paVar7 = (atomic<int>)((int)*paVar7 + 1);
      UNLOCK();
      pFVar14 = this_01;
      if (aVar3 == (atomic<int>)0x0) {
        LOCK();
        this_01->Registry->LockType =
             (atomic<FRigVMRegistry_NoLock::ELockType>)this_01->DesiredLockType;
        UNLOCK();
      }
      else if ((this_01->DesiredLockType == LockType_Write) &&
              (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_4767296351463538103>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                                  ,0x249,"DesiredLockType != LockType_Write"), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      goto LAB_14a0a095a;
    }
    local_res10 = (FConditionalScopeLock *)0x0;
    if (((this->LocalizedRegistry).Object == (FRigVMRegistry_NoLock *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar14 = (FConditionalScopeLock *)
            FRigVMRegistry_NoLock::GetHandle_NoLock((this->LocalizedRegistry).Object);
  this_01 = (FConditionalScopeLock *)0x0;
LAB_14a0a095a:
  local_res8[0] = 0;
  pTVar2 = &this->FirstHandleForInstruction;
  local_78 = 0;
  pFVar5 = (pTVar2->AllocatorInstance).Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_78) &&
      ((FScriptContainerElement *)&local_78 <
       pFVar5 + (longlong)(this->FirstHandleForInstruction).ArrayMax * 4)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar12 = (this->FirstHandleForInstruction).ArrayNum;
  if (iVar12 == (this->FirstHandleForInstruction).ArrayMax) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&pTVar2->AllocatorInstance,piVar1);
  }
  iVar10 = 0;
  (this->FirstHandleForInstruction).ArrayNum = iVar12 + 1;
  *(undefined4 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar12 * 4) = local_78;
  if (0 < (this->Instructions).Instructions.ArrayNum) {
    pTVar2 = &this->FirstHandleForInstruction;
    do {
      local_res20 = local_res8;
      local_60 = UE::Core::Private::Function::
                 TFunctionRefCaller<`URigVM::PrepareMemoryForExecution'::__l10::<lambda_2>,void,FRigVMExtendedExecuteContext_&,FRigVMRegistryHandle_&,int,FRigVMBranchInfoKey_const_&,FRigVMOperand_const_&>
                 ::Call;
      local_58 = &local_res20;
      InstructionOpEval(this,param_1,(FRigVMRegistryHandle *)pFVar14,iVar10,-1,
                        (TFunctionRef<void___cdecl(FRigVMExtendedExecuteContext_&,FRigVMRegistryHandle_&,int,FRigVMBranchInfoKey_const_&,FRigVMOperand_const_&)>
                         *)&local_60);
      pFVar5 = (pTVar2->AllocatorInstance).Data;
      local_74 = local_res8[0];
      if (((pFVar5 <= (FScriptContainerElement *)&local_74) &&
          ((FScriptContainerElement *)&local_74 <
           pFVar5 + (longlong)(this->FirstHandleForInstruction).ArrayMax * 4)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar12 = (this->FirstHandleForInstruction).ArrayNum;
      if (iVar12 == (this->FirstHandleForInstruction).ArrayMax) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar2->AllocatorInstance,piVar1);
      }
      iVar10 = iVar10 + 1;
      (this->FirstHandleForInstruction).ArrayNum = iVar12 + 1;
      *(uint *)((pTVar2->AllocatorInstance).Data + (longlong)iVar12 * 4) = local_74;
      this_01 = local_res10;
    } while (iVar10 < (this->Instructions).Instructions.ArrayNum);
  }
  this->MemoryHandleCount = local_res8[0];
  if (-1 < (int)local_res8[0]) {
    (param_1->CachedMemoryHandles).ArrayNum = 0;
    if ((param_1->CachedMemoryHandles).ArrayMax < (int)local_res8[0]) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,local_res8[0],&(param_1->CachedMemoryHandles).AllocatorInstance,0,
                 &(param_1->CachedMemoryHandles).ArrayMax);
    }
    if (this_01 != (FConditionalScopeLock *)0x0) {
      FRigVMRegistry_RWLock::FConditionalScopeLock::~FConditionalScopeLock(this_01);
      ::operator_delete(this_01,0x20);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res8[0]);
}

// RebuildByteCodeOnLoad @ 14a0a0bc0

void __thiscall URigVM::RebuildByteCodeOnLoad(URigVM *this)

{
  FRigVMInstructionArray *pFVar1;
  undefined4 uVar2;
  code *pcVar3;
  short sVar4;
  bool bVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  longlong lVar9;
  FRigVMInstructionArray local_78;
  undefined1 local_68;
  undefined1 uStack_67;
  undefined4 uStack_66;
  short sStack_62;
  undefined4 uStack_60;
  short sStack_5c;
  undefined2 uStack_5a;
  undefined2 local_58;
  undefined2 uStack_56;
  short sStack_54;
  short sStack_52;
  undefined2 uStack_50;
  short sStack_4e;
  short sStack_4c;
  undefined2 uStack_4a;
  undefined2 local_48;
  undefined4 uStack_46;
  short sStack_42;
  undefined2 uStack_40;
  short sStack_3e;
  short sStack_3c;
  undefined2 uStack_3a;
  
  FRigVMInstructionArray::FRigVMInstructionArray
            (&local_78,this->ByteCodePtr,this->ByteCodePtr->bByteCodeIsAligned);
  pFVar1 = &this->Instructions;
  if (pFVar1 != &local_78) {
    pFVar7 = (pFVar1->Instructions).AllocatorInstance.Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pFVar1->Instructions).AllocatorInstance.Data = local_78.Instructions.AllocatorInstance.Data;
    (this->Instructions).Instructions.ArrayNum = local_78.Instructions.ArrayNum;
    (this->Instructions).Instructions.ArrayMax = local_78.Instructions.ArrayMax;
    local_78.Instructions.ArrayNum = 0;
    local_78.Instructions.ArrayMax = 0;
    local_78.Instructions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_78.Instructions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Instructions.AllocatorInstance.Data);
  }
  uVar8 = 0;
  if (0 < (this->Instructions).Instructions.ArrayNum) {
    lVar9 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar8 < (this->Instructions).Instructions.ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar7 = (pFVar1->Instructions).AllocatorInstance.Data;
      if (pFVar7[lVar9 + 8] == (FScriptContainerElement)0x44) {
        pFVar7 = (this->ByteCodePtr->ByteCode).AllocatorInstance.Data + *(int *)(pFVar7 + lVar9 + 4)
        ;
        local_58 = *(undefined2 *)pFVar7;
        uStack_56 = *(undefined2 *)(pFVar7 + 2);
        sStack_54 = *(short *)(pFVar7 + 4);
        uStack_46 = *(undefined4 *)(pFVar7 + 2);
        sStack_52 = *(short *)(pFVar7 + 6);
        uStack_50 = *(undefined2 *)(pFVar7 + 8);
        sStack_4e = *(short *)(pFVar7 + 10);
        sVar4 = *(short *)(pFVar7 + 0xc);
        uStack_4a = *(undefined2 *)(pFVar7 + 0xe);
        uVar2 = *(undefined4 *)(pFVar7 + 8);
        sStack_4c = sVar4;
        local_48 = local_58;
        sStack_42 = sStack_52;
        uStack_40 = uStack_50;
        sStack_3e = sStack_4e;
        sStack_3c = sVar4;
        uStack_3a = uStack_4a;
        if (((SUB21(uStack_56,0) != (FScriptContainerElement)0x2) &&
            (SUB41(uVar2,0) != (FScriptContainerElement)0x2)) ||
           ((this->ExternalVariables).ArrayNum != 0)) {
          local_68 = 0x44;
          uStack_5a = 4;
          *(ulonglong *)pFVar7 = CONCAT26(sStack_52,CONCAT42(uStack_46,CONCAT11(uStack_67,0x44)));
          *(ulonglong *)(pFVar7 + 8) = CONCAT26(4,*(undefined6 *)(pFVar7 + 8));
          uStack_66 = uStack_46;
          sStack_62 = sStack_52;
          uStack_60 = uVar2;
          sStack_5c = sVar4;
          if ((((SUB21(uStack_56,0) != pFVar7[2]) || (sStack_54 != *(short *)(pFVar7 + 4))) ||
              (sStack_52 != *(short *)(pFVar7 + 6))) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("OldCopyOp.Source == NewCopyOp.Source",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVM.cpp"
                                 ,0x598,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if ((((SUB41(uVar2,0) != pFVar7[8]) || (sStack_4e != *(short *)(pFVar7 + 10))) ||
              (sVar4 != *(short *)(pFVar7 + 0xc))) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("OldCopyOp.Target == NewCopyOp.Target",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVM.cpp"
                                 ,0x599,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0xc;
    } while ((int)uVar8 < (this->Instructions).Instructions.ArrayNum);
  }
  return;
}

// RefreshArgumentNameCaches @ 14a0a0e20

/* WARNING: Enum "ERigVMOpCode": Some values do not have unique names */

void __thiscall URigVM::RefreshArgumentNameCaches(URigVM *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<int> *paVar1;
  atomic<int> aVar2;
  ushort uVar3;
  uint uVar4;
  atomic<unsigned_int> aVar5;
  FRigVMRegistry_NoLock *pFVar6;
  TArray<FRigVMFunction_const_*,TSizedDefaultAllocator<32>_> *pTVar7;
  FRigVMDispatchFactory *this_00;
  LPCRITICAL_SECTION lpCriticalSection_00;
  code *pcVar8;
  int iVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  atomic<unsigned_int> aVar13;
  longlong lVar14;
  TArray<FRigVMDispatchFactory_*,TSizedDefaultAllocator<32>_> *pTVar15;
  FRigVMRegistryHandle *pFVar16;
  FRigVMRegistry_RWLock *pFVar17;
  ulonglong uVar18;
  FRigVMInstruction *pFVar19;
  FRigVMInstruction *pFVar20;
  undefined1 local_res8 [8];
  int local_res10;
  uint local_res18;
  FRigVMInstruction *local_res20;
  ForAnyElementType local_a8;
  int local_a0 [2];
  TArrayView<FRigVMOperand_const_,int> local_98;
  FRigVMRegistryHandle local_88;
  char local_80;
  FRigVMRegistry_RWLock *local_78;
  atomic<FRigVMRegistry_NoLock::ELockType> local_70;
  FRigVMRegistryHandle local_68;
  char local_60;
  FRigVMRegistry_RWLock *local_58;
  atomic<FRigVMRegistry_NoLock::ELockType> local_50;
  
  lpCriticalSection = &this->ResolveFunctionsMutex;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                          ,0x1b,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar6 = (this->LocalizedRegistry).Object;
  if (pFVar6 == (FRigVMRegistry_NoLock *)0x0) {
    pFVar17 = FRigVMRegistry_RWLock::Get();
    FRigVMRegistryHandle::FRigVMRegistryHandle(&local_68,(FRigVMRegistry_NoLock *)pFVar17);
    local_60 = '\x01';
    local_50 = (atomic<FRigVMRegistry_NoLock::ELockType>)0x0;
    aVar5 = pFVar17->WriteLockOwnerThread;
    local_58 = pFVar17;
    aVar13 = (atomic<unsigned_int>)GetCurrentThreadId();
    if (aVar5 != aVar13) {
      AcquireSRWLockShared((PSRWLOCK)&local_58->Lock);
    }
    LOCK();
    paVar1 = &local_58->LockCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x0) {
      LOCK();
      local_58->LockType = local_50;
      UNLOCK();
    }
    else if ((local_50 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) &&
            (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_4767296351463538103>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                                 ,0x249,"DesiredLockType != LockType_Write"), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pTVar15 = FRigVMRegistry_NoLock::GetFactories_NoLock((FRigVMRegistry_NoLock *)pFVar17);
    if (local_60 != '\0') {
      LOCK();
      paVar1 = &local_58->LockCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        LOCK();
        local_58->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x2;
        UNLOCK();
      }
      if (local_50 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x0) {
        if (((int)aVar2 + -1 < 0) &&
           (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_4767296351463538070>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                                ,0x26a,"CurrentLockCount >= 0"), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        aVar5 = local_58->WriteLockOwnerThread;
        aVar13 = (atomic<unsigned_int>)GetCurrentThreadId();
        if (aVar5 != aVar13) {
          ReleaseSRWLockShared((PSRWLOCK)&local_58->Lock);
        }
      }
      else if (local_50 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) {
        if ((aVar2 != (atomic<int>)0x1) &&
           (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_4767296351463538060>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                                ,0x274,"CurrentLockCount == 0"), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        LOCK();
        local_58->WriteLockOwnerThread = (atomic<unsigned_int>)0xffffffff;
        UNLOCK();
        ReleaseSRWLockExclusive((PSRWLOCK)&local_58->Lock);
      }
    }
    local_res10 = pTVar15->ArrayNum;
  }
  else {
    lVar14 = (**(code **)(pFVar6->_padding_ + 0x1a8))();
    local_res10 = *(int *)(lVar14 + 8);
  }
  local_res18 = (this->Instructions).Instructions.ArrayNum;
  uVar18 = (ulonglong)(int)local_res18;
  pFVar20 = (FRigVMInstruction *)(this->Instructions).Instructions.AllocatorInstance.Data;
  pTVar7 = this->FunctionsPtr;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_res20 = pFVar20 + uVar18;
  local_a0[0] = 0;
  local_a0[1] = 0;
  pFVar19 = local_res20;
LAB_14a0a1061:
  iVar9 = local_res10;
  if ((this->Instructions).Instructions.ArrayNum != (int)uVar18) {
    local_res8[0] = 0;
    `TCheckedPointerIterator<FRigVMInstruction_const_,int,0>::operator!='::__l2::<lambda_1>::
    operator()(local_res8);
  }
  if (pFVar20 == pFVar19) {
    if (local_a8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data);
    }
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    return;
  }
  if (((pFVar20->OpCode == Execute) &&
      (uVar3 = *(ushort *)
                ((this->ByteCodeStorage).ByteCode.AllocatorInstance.Data +
                (longlong)pFVar20->ByteCodeIndex + 2), (int)(uint)uVar3 < pTVar7->ArrayNum)) &&
     (this_00 = *(FRigVMDispatchFactory **)
                 (*(longlong *)((pTVar7->AllocatorInstance).Data + (ulonglong)uVar3 * 8) + 0x18),
     pFVar19 = local_res20, this_00 != (FRigVMDispatchFactory *)0x0)) {
    if (local_a0[0] == 0) {
      iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (8,8,iVar9,&local_a8,local_a0,local_a0 + 1);
      memset(local_a8.Data + (longlong)iVar11 * 8,0,(longlong)iVar9 << 3);
    }
    uVar4 = this_00->FactoryIndex;
    uVar12 = 0;
    if ((int)uVar4 < local_a0[0]) {
      uVar12 = ~uVar4 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar19 = local_res20;
    if (*(longlong *)(local_a8.Data + (longlong)(int)uVar4 * 8) != 0) goto LAB_14a0a13b7;
    uVar4 = this_00->FactoryIndex;
    uVar12 = 0;
    if ((int)uVar4 < local_a0[0]) {
      uVar12 = ~uVar4 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    *(FRigVMDispatchFactory **)(local_a8.Data + (longlong)(int)uVar4 * 8) = this_00;
    FRigVMByteCode::GetOperandsForExecuteOp(&this->ByteCodeStorage,&local_98,pFVar20);
    pFVar6 = (this->LocalizedRegistry).Object;
    if (pFVar6 != (FRigVMRegistry_NoLock *)0x0) {
      pFVar16 = FRigVMRegistry_NoLock::GetHandle_NoLock(pFVar6);
      FRigVMDispatchFactory::UpdateArgumentNameCache_NoLock(this_00,local_98.ArrayNum,pFVar16);
      uVar18 = (ulonglong)local_res18;
      pFVar20 = pFVar20 + 1;
      pFVar19 = local_res20;
      goto LAB_14a0a1061;
    }
    pFVar17 = FRigVMRegistry_RWLock::Get();
    FRigVMRegistryHandle::FRigVMRegistryHandle(&local_88,(FRigVMRegistry_NoLock *)pFVar17);
    local_80 = '\x01';
    local_70 = (atomic<FRigVMRegistry_NoLock::ELockType>)0x0;
    aVar5 = pFVar17->WriteLockOwnerThread;
    local_78 = pFVar17;
    aVar13 = (atomic<unsigned_int>)GetCurrentThreadId();
    if (aVar5 != aVar13) {
      AcquireSRWLockShared((PSRWLOCK)&local_78->Lock);
    }
    LOCK();
    paVar1 = &local_78->LockCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x0) {
      LOCK();
      local_78->LockType = local_70;
      UNLOCK();
    }
    else if ((local_70 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) &&
            (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_4767296351463538103>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                                 ,0x249,"DesiredLockType != LockType_Write"), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    lpCriticalSection_00 = (LPCRITICAL_SECTION)this_00->ArgumentNamesMutex;
    if (lpCriticalSection_00 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection(lpCriticalSection_00);
    FRigVMDispatchFactory::UpdateArgumentNameCache_NoLock(this_00,local_98.ArrayNum,&local_88);
    LeaveCriticalSection(lpCriticalSection_00);
    pFVar19 = local_res20;
    if (local_80 == '\0') goto LAB_14a0a13b7;
    LOCK();
    paVar1 = &local_78->LockCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      LOCK();
      local_78->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x2;
      UNLOCK();
    }
    if (local_70 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x0) {
      if (((int)aVar2 + -1 < 0) &&
         (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_4767296351463538070>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                              ,0x26a,"CurrentLockCount >= 0"), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      aVar5 = local_78->WriteLockOwnerThread;
      aVar13 = (atomic<unsigned_int>)GetCurrentThreadId();
      pFVar19 = local_res20;
      if (aVar5 != aVar13) {
        ReleaseSRWLockShared((PSRWLOCK)&local_78->Lock);
        uVar18 = (ulonglong)local_res18;
        pFVar20 = pFVar20 + 1;
        pFVar19 = local_res20;
        goto LAB_14a0a1061;
      }
    }
    else if (local_70 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) {
      if ((aVar2 != (atomic<int>)0x1) &&
         (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_4767296351463538060>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                              ,0x274,"CurrentLockCount == 0"), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      LOCK();
      local_78->WriteLockOwnerThread = (atomic<unsigned_int>)0xffffffff;
      UNLOCK();
      ReleaseSRWLockExclusive((PSRWLOCK)&local_78->Lock);
      pFVar19 = local_res20;
    }
  }
LAB_14a0a13b7:
  uVar18 = (ulonglong)local_res18;
  pFVar20 = pFVar20 + 1;
  goto LAB_14a0a1061;
}

// RefreshExternalPropertyPaths @ 14a0a1410

void __thiscall URigVM::RefreshExternalPropertyPaths(URigVM *this)

{
  int *piVar1;
  int *piVar2;
  TArray<FRigVMPropertyPath,TSizedDefaultAllocator<32>_> *this_00;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FRigVMPropertyPath *pFVar9;
  uint uVar10;
  uint uVar11;
  FRigVMPropertyPath *pFVar12;
  TArray<FRigVMPropertyPathSegment,TSizedDefaultAllocator<32>_> *pTVar13;
  TArray<FRigVMPropertyPathSegment,TSizedDefaultAllocator<32>_> *pTVar14;
  uint uVar15;
  uint uVar16;
  longlong local_res8;
  longlong local_res18;
  FRigVMPropertyPath local_90;
  FRigVMPropertyPath local_70;
  
  this_00 = &this->ExternalPropertyPaths;
  piVar1 = &(this->ExternalPropertyPaths).ArrayNum;
  pFVar9 = (FRigVMPropertyPath *)(this_00->AllocatorInstance).Data;
  piVar2 = &(this->ExternalPropertyPaths).ArrayMax;
  if ((this->ExternalPropertyPaths).ArrayMax < 0) {
    DestructItems<FRigVMPropertyPath,int>(pFVar9,*piVar1);
    *piVar1 = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&this_00->AllocatorInstance,0,piVar2);
    }
  }
  else {
    DestructItems<FRigVMPropertyPath,int>(pFVar9,*piVar1);
    *piVar1 = 0;
  }
  uVar15 = 0;
  uVar10 = (this->ExternalPropertyPathDescriptions).ArrayNum;
  iVar3 = *piVar1;
  if (iVar3 < (int)uVar10) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,uVar10 - iVar3,&this_00->AllocatorInstance,piVar1,piVar2);
    memset((this_00->AllocatorInstance).Data + (longlong)iVar7 * 0x20,0,
           (longlong)(int)(uVar10 - iVar3) << 5);
  }
  else {
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
    }
    if ((int)uVar10 < iVar3) {
      uVar11 = iVar3 - uVar10;
      if (((int)(uVar10 | uVar11) < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (uVar11 != 0) {
        TArray<FRigVMPropertyPath,TSizedDefaultAllocator<32>_>::RemoveAtImpl(this_00,uVar10,uVar11);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,&this_00->AllocatorInstance,*piVar1,piVar2);
      }
    }
  }
  if (0 < (this->ExternalPropertyPaths).ArrayNum) {
    local_res18 = 0;
    local_res8 = 0;
    do {
      pFVar9 = FRigVMPropertyPath::FRigVMPropertyPath(&local_90);
      uVar16 = ~uVar15 >> 0x1f;
      uVar11 = 0;
      uVar10 = uVar11;
      if ((int)uVar15 < (this->ExternalPropertyPaths).ArrayNum) {
        uVar10 = uVar16;
      }
      if ((uVar10 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar12 = (FRigVMPropertyPath *)
                ((this->ExternalPropertyPaths).AllocatorInstance.Data + local_res18);
      if (pFVar12 != pFVar9) {
        pFVar4 = (pFVar12->Path).Data.AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        (pFVar12->Path).Data.AllocatorInstance.Data = (pFVar9->Path).Data.AllocatorInstance.Data;
        (pFVar9->Path).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar12->Path).Data.ArrayNum = (pFVar9->Path).Data.ArrayNum;
        (pFVar12->Path).Data.ArrayMax = (pFVar9->Path).Data.ArrayMax;
        (pFVar9->Path).Data.ArrayNum = 0;
        (pFVar9->Path).Data.ArrayMax = 0;
      }
      pTVar14 = &pFVar9->Segments;
      pTVar13 = &pFVar12->Segments;
      if (pTVar13 != pTVar14) {
        pFVar4 = (pTVar13->AllocatorInstance).Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        (pTVar13->AllocatorInstance).Data = (pTVar14->AllocatorInstance).Data;
        (pTVar14->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        (pFVar12->Segments).ArrayNum = (pFVar9->Segments).ArrayNum;
        (pFVar12->Segments).ArrayMax = (pFVar9->Segments).ArrayMax;
        (pFVar9->Segments).ArrayNum = 0;
        (pFVar9->Segments).ArrayMax = 0;
      }
      if (local_90.Segments.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Segments.AllocatorInstance.Data);
      }
      if (local_90.Path.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Path.Data.AllocatorInstance.Data);
      }
      uVar10 = uVar11;
      if ((int)uVar15 < (this->ExternalPropertyPathDescriptions).ArrayNum) {
        uVar10 = uVar16;
      }
      if ((uVar10 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar10 = *(uint *)((this->ExternalPropertyPathDescriptions).AllocatorInstance.Data +
                        local_res8);
      if ((-1 < (int)uVar10) && ((int)uVar10 < (this->ExternalVariables).ArrayNum)) {
        uVar8 = uVar11;
        if ((int)uVar10 < (this->ExternalVariables).ArrayNum) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((*(longlong *)
              ((this->ExternalVariables).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x28 + 8)
             == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ExternalVariables[PropertyIndex].Property",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVM.cpp"
                               ,0xc0a,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar8 = uVar11;
        if ((int)uVar15 < (this->ExternalPropertyPathDescriptions).ArrayNum) {
          uVar8 = uVar16;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (this->ExternalPropertyPathDescriptions).AllocatorInstance.Data;
        uVar8 = uVar11;
        if ((int)uVar10 < (this->ExternalVariables).ArrayNum) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar9 = FRigVMPropertyPath::FRigVMPropertyPath
                           (&local_70,
                            *(FProperty **)
                             ((this->ExternalVariables).AllocatorInstance.Data +
                             (longlong)(int)uVar10 * 0x28 + 8),
                            (FString *)(pFVar4 + local_res8 + 0x18));
        if ((int)uVar15 < *piVar1) {
          uVar11 = uVar16;
        }
        if ((uVar11 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar12 = (FRigVMPropertyPath *)
                  ((this->ExternalPropertyPaths).AllocatorInstance.Data + local_res18);
        if (pFVar12 != pFVar9) {
          pFVar4 = (pFVar12->Path).Data.AllocatorInstance.Data;
          if (pFVar4 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar4);
          }
          (pFVar12->Path).Data.AllocatorInstance.Data = (pFVar9->Path).Data.AllocatorInstance.Data;
          (pFVar9->Path).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar12->Path).Data.ArrayNum = (pFVar9->Path).Data.ArrayNum;
          (pFVar12->Path).Data.ArrayMax = (pFVar9->Path).Data.ArrayMax;
          (pFVar9->Path).Data.ArrayNum = 0;
          (pFVar9->Path).Data.ArrayMax = 0;
        }
        pTVar14 = &pFVar9->Segments;
        pTVar13 = &pFVar12->Segments;
        if (pTVar13 != pTVar14) {
          pFVar4 = (pTVar13->AllocatorInstance).Data;
          if (pFVar4 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar4);
          }
          (pTVar13->AllocatorInstance).Data = (pTVar14->AllocatorInstance).Data;
          (pTVar14->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          (pFVar12->Segments).ArrayNum = (pFVar9->Segments).ArrayNum;
          (pFVar12->Segments).ArrayMax = (pFVar9->Segments).ArrayMax;
          (pFVar9->Segments).ArrayNum = 0;
          (pFVar9->Segments).ArrayMax = 0;
        }
        if (local_70.Segments.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Segments.AllocatorInstance.Data);
        }
        if (local_70.Path.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Path.Data.AllocatorInstance.Data);
        }
      }
      local_res8 = local_res8 + 0x28;
      local_res18 = local_res18 + 0x20;
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < (this->ExternalPropertyPaths).ArrayNum);
  }
  return;
}

// RefreshInstructionsIfRequired @ 14a0a1980

void __thiscall URigVM::RefreshInstructionsIfRequired(URigVM *this)

{
  int iVar1;
  FRigVMByteCode *pFVar2;
  FScriptContainerElement *pFVar3;
  FRigVMInstructionArray *pFVar4;
  FRigVMInstructionArray local_18;
  
  pFVar2 = this->ByteCodePtr;
  if ((pFVar2->ByteCode).ArrayNum == 0) {
    iVar1 = (this->Instructions).Instructions.ArrayNum;
    if (0 < iVar1) {
      iVar1 = (this->Instructions).Instructions.ArrayMax;
      (this->Instructions).Instructions.ArrayNum = 0;
      if (-1 < iVar1) {
        return;
      }
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)&this->Instructions,0,
                 &(this->Instructions).Instructions.ArrayMax);
      return;
    }
  }
  else {
    iVar1 = (this->Instructions).Instructions.ArrayNum;
  }
  if (iVar1 == 0) {
    FRigVMInstructionArray::FRigVMInstructionArray(&local_18,pFVar2,pFVar2->bByteCodeIsAligned);
    pFVar4 = &this->Instructions;
    if (pFVar4 != &local_18) {
      pFVar3 = (pFVar4->Instructions).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pFVar4->Instructions).AllocatorInstance.Data = local_18.Instructions.AllocatorInstance.Data;
      (this->Instructions).Instructions.ArrayNum = local_18.Instructions.ArrayNum;
      (this->Instructions).Instructions.ArrayMax = local_18.Instructions.ArrayMax;
      local_18.Instructions.ArrayNum = 0;
      local_18.Instructions.ArrayMax = 0;
      local_18.Instructions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_18.Instructions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Instructions.AllocatorInstance.Data);
    }
  }
  return;
}

// Reset @ 14a0a3040

void __thiscall URigVM::Reset(URigVM *this,FRigVMExtendedExecuteContext *param_1)

{
  Reset_Internal(this);
  InvalidateCachedMemory(this,param_1);
  return;
}

// Reset @ 14a0a3070

void __thiscall URigVM::Reset(URigVM *this,bool param_1)

{
  return;
}

// Reset_Internal @ 14a0a3210

void __thiscall URigVM::Reset_Internal(URigVM *this)

{
  int *piVar1;
  int iVar2;
  FRigVMPropertyPathDescription *pFVar3;
  FRigVMPropertyPath *pFVar4;
  FRigVMParameter *pFVar5;
  FRigVMLazyBranch *pFVar6;
  undefined8 local_38;
  FSharedReferencer<1> FStack_30;
  
  this->CachedVMHash = 0;
  (this->FunctionNamesStorage).ArrayNum = 0;
  if ((this->FunctionNamesStorage).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->FunctionNamesStorage).AllocatorInstance,0,
               &(this->FunctionNamesStorage).ArrayMax);
  }
  (this->FunctionsStorage).ArrayNum = 0;
  if ((this->FunctionsStorage).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->FunctionsStorage).AllocatorInstance,0,
               &(this->FunctionsStorage).ArrayMax);
  }
  (this->FactoriesStorage).ArrayNum = 0;
  if ((this->FactoriesStorage).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->FactoriesStorage).AllocatorInstance,0,
               &(this->FactoriesStorage).ArrayMax);
  }
  piVar1 = &(this->ExternalPropertyPathDescriptions).ArrayMax;
  pFVar3 = (FRigVMPropertyPathDescription *)
           (this->ExternalPropertyPathDescriptions).AllocatorInstance.Data;
  iVar2 = (this->ExternalPropertyPathDescriptions).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<FRigVMPropertyPathDescription,int>(pFVar3,iVar2);
    (this->ExternalPropertyPathDescriptions).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&(this->ExternalPropertyPathDescriptions).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FRigVMPropertyPathDescription,int>(pFVar3,iVar2);
    (this->ExternalPropertyPathDescriptions).ArrayNum = 0;
  }
  piVar1 = &(this->ExternalPropertyPaths).ArrayMax;
  pFVar4 = (FRigVMPropertyPath *)(this->ExternalPropertyPaths).AllocatorInstance.Data;
  iVar2 = (this->ExternalPropertyPaths).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<FRigVMPropertyPath,int>(pFVar4,iVar2);
    (this->ExternalPropertyPaths).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&(this->ExternalPropertyPaths).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FRigVMPropertyPath,int>(pFVar4,iVar2);
    (this->ExternalPropertyPaths).ArrayNum = 0;
  }
  iVar2 = (this->ByteCodeStorage).ByteCode.ArrayMax;
  (this->ByteCodeStorage).ByteCode.ArrayNum = 0;
  if (iVar2 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,(ForAnyElementType *)&this->ByteCodeStorage,0,
               &(this->ByteCodeStorage).ByteCode.ArrayMax);
  }
  (this->ByteCodeStorage).bByteCodeIsAligned = false;
  (this->ByteCodeStorage).NumInstructions = 0;
  piVar1 = &(this->ByteCodeStorage).Entries.ArrayMax;
  iVar2 = *piVar1;
  (this->ByteCodeStorage).Entries.ArrayNum = 0;
  if (iVar2 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->ByteCodeStorage).Entries.AllocatorInstance,0,piVar1);
  }
  iVar2 = (this->ByteCodeStorage).BranchInfos.ArrayMax;
  (this->ByteCodeStorage).BranchInfos.ArrayNum = 0;
  if (iVar2 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,0,&(this->ByteCodeStorage).BranchInfos.AllocatorInstance,0,
               &(this->ByteCodeStorage).BranchInfos.ArrayMax);
  }
  TSet<TTuple<FRigVMBranchInfoKey,FRigVMBranchInfo_const_*>,TDefaultMapHashableKeyFuncs<FRigVMBranchInfoKey,FRigVMBranchInfo_const_*,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FRigVMBranchInfoKey,FRigVMBranchInfo_const_*>,TDefaultMapHashableKeyFuncs<FRigVMBranchInfoKey,FRigVMBranchInfo_const_*,0>,FDefaultSetAllocator>
           *)&(this->ByteCodeStorage).BranchInfoLookup);
  (this->ByteCodeStorage).PublicContextAssetPath.AssetName.ComparisonIndex = 0;
  (this->ByteCodeStorage).PublicContextAssetPath.AssetName.Number = 0;
  (this->ByteCodeStorage).PublicContextAssetPath.PackageName.ComparisonIndex = 0;
  (this->ByteCodeStorage).PublicContextAssetPath.PackageName.Number = 0;
  piVar1 = &(this->Instructions).Instructions.ArrayMax;
  iVar2 = *piVar1;
  (this->Instructions).Instructions.ArrayNum = 0;
  if (iVar2 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)&this->Instructions,0,piVar1);
  }
  piVar1 = &(this->Parameters).ArrayMax;
  pFVar5 = (FRigVMParameter *)(this->Parameters).AllocatorInstance.Data;
  iVar2 = (this->Parameters).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<FRigVMParameter,int>(pFVar5,iVar2);
    (this->Parameters).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,&(this->Parameters).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FRigVMParameter,int>(pFVar5,iVar2);
    (this->Parameters).ArrayNum = 0;
  }
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)&this->ParametersNameMap);
  TSet<TTuple<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *)&this->OperandToDebugRegisters);
  this->FunctionNamesPtr = &this->FunctionNamesStorage;
  this->FunctionsPtr = &this->FunctionsStorage;
  piVar1 = &(this->ExternalVariables).ArrayMax;
  this->FactoriesPtr = &this->FactoriesStorage;
  this->ByteCodePtr = &this->ByteCodeStorage;
  (this->ExternalVariables).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&(this->ExternalVariables).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->LazyBranches).ArrayMax;
  pFVar6 = (FRigVMLazyBranch *)(this->LazyBranches).AllocatorInstance.Data;
  iVar2 = (this->LazyBranches).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<FRigVMLazyBranch,int>(pFVar6,iVar2);
    (this->LazyBranches).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,0,&(this->LazyBranches).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FRigVMLazyBranch,int>(pFVar6,iVar2);
    (this->LazyBranches).ArrayNum = 0;
  }
  InvalidateCachedMemory_Internal(this);
  local_38 = 0;
  FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->LocalizedRegistry != (TSharedPtr<FRigVMRegistry_NoLock,1> *)&local_38) {
    (this->LocalizedRegistry).Object = (FRigVMRegistry_NoLock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->LocalizedRegistry).SharedReferenceCount,&FStack_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_30.ReferenceController);
  return;
}

// ResolveFunctionsIfRequired @ 14a0a36f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall URigVM::ResolveFunctionsIfRequired(URigVM *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  atomic<int> aVar3;
  atomic<unsigned_int> aVar4;
  TArray<FRigVMFunction_const_*,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FRigVMDispatchFactory_const_*,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar7;
  undefined8 uVar8;
  code *pcVar9;
  atomic<int> *paVar10;
  FName FVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  bool bVar18;
  undefined1 uVar19;
  int iVar20;
  int iVar21;
  atomic<unsigned_int> aVar22;
  UClass *pUVar23;
  UObject *pUVar24;
  void *pvVar25;
  FConditionalScopeLock *pFVar26;
  FRigVMRegistry_RWLock *pFVar27;
  FRigVMRegistry_NoLock *pFVar28;
  undefined8 *puVar29;
  longlong lVar30;
  longlong *plVar31;
  FFunctionStorage *pFVar32;
  undefined ***pppuVar33;
  void *pvVar34;
  ForAnyElementType FVar35;
  wchar_t *pwVar36;
  uint uVar37;
  uint uVar38;
  longlong lVar39;
  ulonglong uVar40;
  undefined1 auStackY_248 [32];
  bool local_208;
  uint local_204;
  longlong local_200;
  FString local_1f8;
  FConditionalScopeLock *local_1e8;
  FConditionalScopeLock *local_1e0;
  TArray<FName,TSizedDefaultAllocator<32>_> *local_1d8;
  FName local_1d0;
  FName local_1c8;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  FString local_180;
  code *local_168;
  undefined8 uStack_160;
  FFunctionStorage local_158;
  void *local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  void *local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  void *local_f8;
  undefined4 local_f0;
  code *local_e8;
  undefined8 uStack_e0;
  FFunctionStorage local_d8;
  void *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  void *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  void *local_78;
  undefined4 local_70;
  code *local_68;
  undefined **local_58;
  UObject *local_50;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_248;
  pTVar5 = this->FunctionsPtr;
  local_208 = true;
  if (pTVar5->ArrayNum == this->FunctionNamesPtr->ArrayNum) {
    return true;
  }
  pTVar5->ArrayNum = 0;
  if (pTVar5->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar5->AllocatorInstance,0,&pTVar5->ArrayMax);
  }
  pTVar5 = this->FunctionsPtr;
  piVar1 = &pTVar5->ArrayNum;
  iVar21 = *piVar1;
  uVar38 = this->FunctionNamesPtr->ArrayNum;
  if (iVar21 < (int)uVar38) {
    iVar20 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (8,8,uVar38 - iVar21,&pTVar5->AllocatorInstance,piVar1,&pTVar5->ArrayMax);
    memset((pTVar5->AllocatorInstance).Data + (longlong)iVar20 * 8,0,
           (longlong)(int)(uVar38 - iVar21) << 3);
  }
  else {
    if ((int)uVar38 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar38);
    }
    if ((int)uVar38 < iVar21) {
      uVar37 = iVar21 - uVar38;
      if (((int)(uVar37 | uVar38) < 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar18)) {
        pcVar9 = (code *)swi(3);
        uVar19 = (*pcVar9)();
        return (bool)uVar19;
      }
      if (uVar37 != 0) {
        pFVar2 = (pTVar5->AllocatorInstance).Data + (longlong)(int)uVar38 * 8;
        iVar21 = (*piVar1 - uVar38) - uVar37;
        if (iVar21 != 0) {
          memmove(pFVar2,pFVar2 + (longlong)(int)uVar37 * 8,(longlong)iVar21 << 3);
        }
        *piVar1 = *piVar1 - uVar37;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&pTVar5->AllocatorInstance,*piVar1,&pTVar5->ArrayMax);
      }
    }
  }
  pTVar6 = this->FactoriesPtr;
  pTVar6->ArrayNum = 0;
  if (pTVar6->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar6->AllocatorInstance,0,&pTVar6->ArrayMax);
  }
  pTVar6 = this->FactoriesPtr;
  iVar21 = pTVar6->ArrayNum;
  uVar38 = this->FunctionNamesPtr->ArrayNum;
  if (iVar21 < (int)uVar38) {
    TArray<FRigVMDispatchFactory_const_*,TSizedDefaultAllocator<32>_>::AddZeroed
              (pTVar6,uVar38 - iVar21);
  }
  else {
    if ((int)uVar38 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar38);
    }
    if ((int)uVar38 < iVar21) {
      uVar37 = iVar21 - uVar38;
      if (((int)(uVar37 | uVar38) < 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar18)) {
        pcVar9 = (code *)swi(3);
        uVar19 = (*pcVar9)();
        return (bool)uVar19;
      }
      if (uVar37 != 0) {
        pFVar2 = (pTVar6->AllocatorInstance).Data + (longlong)(int)uVar38 * 8;
        iVar21 = (pTVar6->ArrayNum - uVar37) - uVar38;
        if (iVar21 != 0) {
          memmove(pFVar2,pFVar2 + (longlong)(int)uVar37 * 8,(longlong)iVar21 << 3);
        }
        pTVar6->ArrayNum = pTVar6->ArrayNum - uVar37;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&pTVar6->AllocatorInstance,pTVar6->ArrayNum,&pTVar6->ArrayMax);
      }
    }
  }
  local_e8 = (code *)0x0;
  local_d8.HeapAllocation = (FFunctionStorage *)0x0;
  local_b8 = (void *)0x0;
  local_b0 = 0;
  local_98 = (void *)0x0;
  local_90 = 0;
  local_8c = 0x80;
  local_88 = 0xffffffff;
  local_84 = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  pUVar23 = Z_Construct_UClass_URigVMHost_NoRegister();
  pUVar24 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar23);
  if (pUVar24 != (UObject *)0x0) {
    local_58 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`URigVM::ResolveFunctionsIfRequired'::`8'::<lambda_1>,0,0>::
                _vftable_;
    local_40 = (undefined ***)0x0;
    local_68 = UE::Core::Private::Function::
               TFunctionRefCaller<`URigVM::ResolveFunctionsIfRequired'::__l8::<lambda_1>,UObject_*,FString_const_&>
               ::Call;
    local_168 = UE::Core::Private::Function::
                TFunctionRefCaller<`URigVM::ResolveFunctionsIfRequired'::__l8::<lambda_1>,UObject_*,FString_const_&>
                ::Call;
    local_158.HeapAllocation = (FFunctionStorage *)0x0;
    local_50 = pUVar24;
    UE::Core::Private::Function::
    TFunction_OwnedObject<`URigVM::ResolveFunctionsIfRequired'::__l8::<lambda_1>,0,0>::
    CloneToEmptyStorage(&local_58,&local_158);
    pvVar25 = local_d8.HeapAllocation;
    uVar16 = local_d8.InlineAllocation._16_8_;
    uVar14 = local_d8.InlineAllocation._8_8_;
    uVar12 = local_d8.InlineAllocation._0_8_;
    uVar8 = uStack_e0;
    pcVar9 = local_e8;
    local_e8 = local_168;
    uStack_e0 = uStack_160;
    local_d8.InlineAllocation[0x10] = local_158.InlineAllocation[0x10];
    local_d8.InlineAllocation[0x11] = local_158.InlineAllocation[0x11];
    local_d8.InlineAllocation[0x12] = local_158.InlineAllocation[0x12];
    local_d8.InlineAllocation[0x13] = local_158.InlineAllocation[0x13];
    local_d8.InlineAllocation[0x14] = local_158.InlineAllocation[0x14];
    local_d8.InlineAllocation[0x15] = local_158.InlineAllocation[0x15];
    local_d8.InlineAllocation[0x16] = local_158.InlineAllocation[0x16];
    local_d8.InlineAllocation[0x17] = local_158.InlineAllocation[0x17];
    uVar17 = local_d8.InlineAllocation._16_8_;
    local_d8.HeapAllocation = local_158.HeapAllocation;
    local_138 = (void *)0x0;
    local_130 = 0;
    local_118 = (void *)0x0;
    local_110 = 0x8000000000;
    local_108 = 0xffffffff;
    local_104 = 0;
    local_f8 = (void *)0x0;
    local_f0 = 0;
    local_d8.InlineAllocation[0] = local_158.InlineAllocation[0];
    local_d8.InlineAllocation[1] = local_158.InlineAllocation[1];
    local_d8.InlineAllocation[2] = local_158.InlineAllocation[2];
    local_d8.InlineAllocation[3] = local_158.InlineAllocation[3];
    local_d8.InlineAllocation[4] = local_158.InlineAllocation[4];
    local_d8.InlineAllocation[5] = local_158.InlineAllocation[5];
    local_d8.InlineAllocation[6] = local_158.InlineAllocation[6];
    local_d8.InlineAllocation[7] = local_158.InlineAllocation[7];
    uVar13 = local_d8.InlineAllocation._0_8_;
    local_d8.InlineAllocation[8] = local_158.InlineAllocation[8];
    local_d8.InlineAllocation[9] = local_158.InlineAllocation[9];
    local_d8.InlineAllocation[10] = local_158.InlineAllocation[10];
    local_d8.InlineAllocation[0xb] = local_158.InlineAllocation[0xb];
    local_d8.InlineAllocation[0xc] = local_158.InlineAllocation[0xc];
    local_d8.InlineAllocation[0xd] = local_158.InlineAllocation[0xd];
    local_d8.InlineAllocation[0xe] = local_158.InlineAllocation[0xe];
    local_d8.InlineAllocation[0xf] = local_158.InlineAllocation[0xf];
    uVar15 = local_d8.InlineAllocation._8_8_;
    local_168 = pcVar9;
    uStack_160 = uVar8;
    local_d8.InlineAllocation[0] = (uchar)uVar12;
    local_d8.InlineAllocation[1] = SUB81(uVar12,1);
    local_d8.InlineAllocation[2] = SUB81(uVar12,2);
    local_d8.InlineAllocation[3] = SUB81(uVar12,3);
    local_d8.InlineAllocation[4] = SUB81(uVar12,4);
    local_d8.InlineAllocation[5] = SUB81(uVar12,5);
    local_d8.InlineAllocation[6] = SUB81(uVar12,6);
    local_d8.InlineAllocation[7] = SUB81(uVar12,7);
    local_158.InlineAllocation[0] = local_d8.InlineAllocation[0];
    local_158.InlineAllocation[1] = local_d8.InlineAllocation[1];
    local_158.InlineAllocation[2] = local_d8.InlineAllocation[2];
    local_158.InlineAllocation[3] = local_d8.InlineAllocation[3];
    local_158.InlineAllocation[4] = local_d8.InlineAllocation[4];
    local_158.InlineAllocation[5] = local_d8.InlineAllocation[5];
    local_158.InlineAllocation[6] = local_d8.InlineAllocation[6];
    local_158.InlineAllocation[7] = local_d8.InlineAllocation[7];
    local_d8.InlineAllocation[8] = (uchar)uVar14;
    local_d8.InlineAllocation[9] = SUB81(uVar14,1);
    local_d8.InlineAllocation[10] = SUB81(uVar14,2);
    local_d8.InlineAllocation[0xb] = SUB81(uVar14,3);
    local_d8.InlineAllocation[0xc] = SUB81(uVar14,4);
    local_d8.InlineAllocation[0xd] = SUB81(uVar14,5);
    local_d8.InlineAllocation[0xe] = SUB81(uVar14,6);
    local_d8.InlineAllocation[0xf] = SUB81(uVar14,7);
    local_158.InlineAllocation[8] = local_d8.InlineAllocation[8];
    local_158.InlineAllocation[9] = local_d8.InlineAllocation[9];
    local_158.InlineAllocation[10] = local_d8.InlineAllocation[10];
    local_158.InlineAllocation[0xb] = local_d8.InlineAllocation[0xb];
    local_158.InlineAllocation[0xc] = local_d8.InlineAllocation[0xc];
    local_158.InlineAllocation[0xd] = local_d8.InlineAllocation[0xd];
    local_158.InlineAllocation[0xe] = local_d8.InlineAllocation[0xe];
    local_158.InlineAllocation[0xf] = local_d8.InlineAllocation[0xf];
    local_d8.InlineAllocation[0x10] = (uchar)uVar16;
    local_d8.InlineAllocation[0x11] = SUB81(uVar16,1);
    local_d8.InlineAllocation[0x12] = SUB81(uVar16,2);
    local_d8.InlineAllocation[0x13] = SUB81(uVar16,3);
    local_d8.InlineAllocation[0x14] = SUB81(uVar16,4);
    local_d8.InlineAllocation[0x15] = SUB81(uVar16,5);
    local_d8.InlineAllocation[0x16] = SUB81(uVar16,6);
    local_d8.InlineAllocation[0x17] = SUB81(uVar16,7);
    local_158.InlineAllocation[0x10] = local_d8.InlineAllocation[0x10];
    local_158.InlineAllocation[0x11] = local_d8.InlineAllocation[0x11];
    local_158.InlineAllocation[0x12] = local_d8.InlineAllocation[0x12];
    local_158.InlineAllocation[0x13] = local_d8.InlineAllocation[0x13];
    local_158.InlineAllocation[0x14] = local_d8.InlineAllocation[0x14];
    local_158.InlineAllocation[0x15] = local_d8.InlineAllocation[0x15];
    local_158.InlineAllocation[0x16] = local_d8.InlineAllocation[0x16];
    local_158.InlineAllocation[0x17] = local_d8.InlineAllocation[0x17];
    local_158.HeapAllocation = pvVar25;
    local_d8.InlineAllocation._0_8_ = uVar13;
    local_d8.InlineAllocation._8_8_ = uVar15;
    local_d8.InlineAllocation._16_8_ = uVar17;
    TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)&local_b8,0,(int)local_b0);
    if (local_b8 != (void *)0x0) {
      FMemory::Free(local_b8);
    }
    local_b8 = local_138;
    local_b0 = local_130;
    local_138 = (void *)0x0;
    local_130 = 0;
    if (local_118 == (void *)0x0) {
      local_a8 = local_128;
      uStack_a0 = uStack_120;
    }
    pvVar25 = local_118;
    if (local_98 != (void *)0x0) {
      FMemory::Free(local_98);
      pvVar25 = local_118;
    }
    local_90 = (undefined4)local_110;
    local_8c = local_110._4_4_;
    local_88 = local_108;
    local_84 = local_104;
    local_104 = 0;
    local_118 = (void *)0x0;
    local_110 = 0;
    local_108 = 0xffffffff;
    if (local_f8 == (void *)0x0) {
      local_80 = local_100;
    }
    pvVar34 = local_f8;
    local_98 = pvVar25;
    if (local_78 != (void *)0x0) {
      FMemory::Free(local_78);
      pvVar34 = local_f8;
    }
    local_70 = local_f0;
    local_f0 = 0;
    local_f8 = (void *)0x0;
    local_78 = pvVar34;
    TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&local_138);
    if (local_168 != (code *)0x0) {
      pFVar32 = &local_158;
      if (local_158.HeapAllocation != (FFunctionStorage *)0x0) {
        pFVar32 = local_158.HeapAllocation;
      }
      (**(code **)(*(longlong *)pFVar32->InlineAllocation + 0x10))();
    }
    if (local_68 != (code *)0x0) {
      pppuVar33 = &local_58;
      if (local_40 != (undefined ***)0x0) {
        pppuVar33 = local_40;
      }
      (*(code *)(*pppuVar33)[2])();
    }
  }
  local_1e8 = (FConditionalScopeLock *)0x0;
  if ((this->LocalizedRegistry).Object == (FRigVMRegistry_NoLock *)0x0) {
    pFVar26 = ::operator_new(0x20);
    if (pFVar26 != (FConditionalScopeLock *)0x0) {
      local_1e8 = pFVar26;
      pFVar27 = FRigVMRegistry_RWLock::Get();
      FRigVMRegistryHandle::FRigVMRegistryHandle
                ((FRigVMRegistryHandle *)pFVar26,(FRigVMRegistry_NoLock *)pFVar27);
      *(undefined1 *)&pFVar26->_padding_ = 1;
      pFVar26->Registry = pFVar27;
      pFVar26->DesiredLockType = LockType_Read;
      aVar4 = pFVar27->WriteLockOwnerThread;
      aVar22 = (atomic<unsigned_int>)GetCurrentThreadId();
      if (aVar4 != aVar22) {
        AcquireSRWLockShared((PSRWLOCK)&pFVar26->Registry->Lock);
      }
      LOCK();
      paVar10 = &pFVar26->Registry->LockCount;
      aVar3 = *paVar10;
      *paVar10 = (atomic<int>)((int)*paVar10 + 1);
      UNLOCK();
      local_1e0 = pFVar26;
      if (aVar3 == (atomic<int>)0x0) {
        LOCK();
        pFVar26->Registry->LockType =
             (atomic<FRigVMRegistry_NoLock::ELockType>)pFVar26->DesiredLockType;
        UNLOCK();
      }
      else if ((pFVar26->DesiredLockType == LockType_Write) &&
              (bVar18 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<_4767296351463538103>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                                   ,0x249,"DesiredLockType != LockType_Write"), bVar18)) {
        pcVar9 = (code *)swi(3);
        uVar19 = (*pcVar9)();
        return (bool)uVar19;
      }
      goto LAB_14a0a3cca;
    }
    local_1e8 = (FConditionalScopeLock *)0x0;
    if (((this->LocalizedRegistry).Object == (FRigVMRegistry_NoLock *)0x0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar18)) {
      pcVar9 = (code *)swi(3);
      uVar19 = (*pcVar9)();
      return (bool)uVar19;
    }
  }
  pFVar26 = (FConditionalScopeLock *)0x0;
  local_1e0 = (FConditionalScopeLock *)
              FRigVMRegistry_NoLock::GetHandle_NoLock((this->LocalizedRegistry).Object);
LAB_14a0a3cca:
  pTVar7 = this->FunctionNamesPtr;
  local_204 = 0;
  iVar21 = pTVar7->ArrayNum;
  bVar18 = true;
  local_1d8 = pTVar7;
  if (0 < iVar21) {
    local_200 = 0;
    do {
      pFVar26 = local_1e0;
      uVar37 = ~local_204 >> 0x1f;
      uVar38 = 0;
      if ((int)local_204 < iVar21) {
        uVar38 = uVar37;
      }
      if ((uVar38 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar9 = (code *)swi(3);
        uVar19 = (*pcVar9)();
        return (bool)uVar19;
      }
      ::FName::ToString((FName *)((pTVar7->AllocatorInstance).Data + (longlong)(int)local_204 * 8),
                        &local_1f8);
      pFVar28 = FRigVMRegistryHandle::operator->((FRigVMRegistryHandle *)pFVar26);
      FVar35.Data = (FScriptContainerElement *)L"";
      if (local_1f8.Data.ArrayNum != 0) {
        FVar35.Data = local_1f8.Data.AllocatorInstance.Data;
      }
      puVar29 = (undefined8 *)(**(code **)(pFVar28->_padding_ + 0x160))(pFVar28,FVar35.Data);
      if (puVar29 == (undefined8 *)0x0) {
        if (1 < (byte)LogRigVM._0_1_) {
          UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_1b0,(UObject *)0x0);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRigVM);
          if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
          }
        }
        if ((this->LocalizedRegistry).Object != (FRigVMRegistry_NoLock *)0x0) {
          uVar38 = 0;
          lVar39 = 0;
          while( true ) {
            if (((this->LocalizedRegistry).Object == (FRigVMRegistry_NoLock *)0x0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar18)) {
              pcVar9 = (code *)swi(3);
              uVar19 = (*pcVar9)();
              return (bool)uVar19;
            }
            lVar30 = (**(code **)(((this->LocalizedRegistry).Object)->_padding_ + 0x1a8))();
            pFVar28 = (this->LocalizedRegistry).Object;
            if (*(int *)(lVar30 + 8) <= (int)uVar38) break;
            if ((pFVar28 == (FRigVMRegistry_NoLock *)0x0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar18)) {
              pcVar9 = (code *)swi(3);
              uVar19 = (*pcVar9)();
              return (bool)uVar19;
            }
            plVar31 = (longlong *)
                      (**(code **)(((this->LocalizedRegistry).Object)->_padding_ + 0x1a8))();
            uVar37 = 0;
            if ((int)uVar38 < (int)plVar31[1]) {
              uVar37 = ~uVar38 >> 0x1f;
            }
            if ((uVar37 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar9 = (code *)swi(3);
              uVar19 = (*pcVar9)();
              return (bool)uVar19;
            }
            lVar30 = *(longlong *)(lVar39 + *plVar31);
            if (1 < (byte)LogRigVM._0_1_) {
              UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_190,(UObject *)0x0);
              local_1c8 = *(FName *)(lVar30 + 0xc);
              ::FName::ToString(&local_1c8,&local_1a0);
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRigVM);
              if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
              }
              if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_190.Data.AllocatorInstance.Data);
              }
            }
            uVar38 = uVar38 + 1;
            lVar39 = lVar39 + 8;
          }
          if ((pFVar28 == (FRigVMRegistry_NoLock *)0x0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar18)) {
            pcVar9 = (code *)swi(3);
            uVar19 = (*pcVar9)();
            return (bool)uVar19;
          }
          lVar39 = (**(code **)(((this->LocalizedRegistry).Object)->_padding_ + 0x168))();
          uVar38 = 0;
          if (*(uint *)(lVar39 + 0x10) != 0) {
            uVar40 = (ulonglong)*(uint *)(lVar39 + 0x10);
            do {
              if (1 < (byte)LogRigVM._0_1_) {
                UObjectBaseUtility::GetPathName
                          ((UObjectBaseUtility *)this,&local_180,(UObject *)0x0);
                UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRigVM);
                if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_180.Data.AllocatorInstance.Data);
                }
              }
              uVar37 = uVar38 + 1;
              uVar38 = 0;
              if (uVar37 < 0x92) {
                uVar38 = uVar37;
              }
              uVar40 = uVar40 - 1;
            } while (uVar40 != 0);
          }
        }
        local_208 = false;
      }
      else {
        pTVar5 = this->FunctionsPtr;
        uVar38 = 0;
        if ((int)local_204 < pTVar5->ArrayNum) {
          uVar38 = uVar37;
        }
        if ((uVar38 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar9 = (code *)swi(3);
          uVar19 = (*pcVar9)();
          return (bool)uVar19;
        }
        *(undefined8 **)((pTVar5->AllocatorInstance).Data + local_200) = puVar29;
        pTVar6 = this->FactoriesPtr;
        uVar8 = puVar29[3];
        uVar38 = 0;
        if ((int)local_204 < pTVar6->ArrayNum) {
          uVar38 = uVar37;
        }
        if ((uVar38 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar9 = (code *)swi(3);
          uVar19 = (*pcVar9)();
          return (bool)uVar19;
        }
        *(undefined8 *)((pTVar6->AllocatorInstance).Data + local_200) = uVar8;
        iVar21 = *(int *)(puVar29 + 1);
        if (local_1f8.Data.ArrayNum == iVar21) {
          if (local_1f8.Data.ArrayNum < 2) goto LAB_14a0a4250;
          iVar20 = wcscmp((wchar_t *)local_1f8.Data.AllocatorInstance.Data,(wchar_t *)*puVar29);
          bVar18 = iVar20 == 0;
        }
        else {
          bVar18 = local_1f8.Data.ArrayNum + iVar21 == 1;
        }
        if (!bVar18) {
          if (iVar21 == 0) {
            pwVar36 = L"";
          }
          else {
            pwVar36 = (wchar_t *)*puVar29;
          }
          ::FName::FName(&local_1d0,pwVar36);
          FVar11 = local_1d0;
          uVar38 = 0;
          if ((int)local_204 < pTVar7->ArrayNum) {
            uVar38 = uVar37;
          }
          if ((uVar38 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar9 = (code *)swi(3);
            uVar19 = (*pcVar9)();
            return (bool)uVar19;
          }
          *(FName *)((pTVar7->AllocatorInstance).Data + local_200) = FVar11;
          if (5 < (byte)LogRigVM._0_1_) {
            UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_1c0,(UObject *)0x0);
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogRigVM);
            if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
            }
          }
        }
      }
LAB_14a0a4250:
      if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
      }
      local_200 = local_200 + 8;
      iVar21 = pTVar7->ArrayNum;
      local_204 = local_204 + 1;
      pFVar26 = local_1e8;
      bVar18 = local_208;
    } while ((int)local_204 < iVar21);
  }
  if (pFVar26 != (FConditionalScopeLock *)0x0) {
    FRigVMRegistry_RWLock::FConditionalScopeLock::~FConditionalScopeLock(pFVar26);
    ::operator_delete(pFVar26,0x20);
  }
  local_70 = 0;
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_b8);
  if (local_e8 != (code *)0x0) {
    pFVar32 = &local_d8;
    if (local_d8.HeapAllocation != (FFunctionStorage *)0x0) {
      pFVar32 = local_d8.HeapAllocation;
    }
    (**(code **)(*(longlong *)pFVar32->InlineAllocation + 0x10))();
  }
  return bVar18;
}

// Save @ 14a0a5970

void __thiscall URigVM::Save(URigVM *this,FArchive *param_1)

{
  uint *puVar1;
  uint *puVar2;
  ulonglong *puVar3;
  longlong *plVar4;
  TConsoleVariableData<bool> *pTVar5;
  bool bVar6;
  longlong lVar7;
  undefined8 uVar8;
  FRigVMRegistry_NoLock *this_00;
  uint local_res8 [2];
  ulong64 local_res10;
  FRigVMMemoryStorageStruct local_68;
  
  puVar1 = &this->CachedVMHash;
  puVar2 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  TArrayPrivateFriend::Serialize<FRigVMPropertyPathDescription,TSizedDefaultAllocator<32>_>
            (param_1,&this->ExternalPropertyPathDescriptions);
  TArrayPrivateFriend::Serialize<FName,TSizedDefaultAllocator<32>_>
            (param_1,&this->FunctionNamesStorage);
  ::operator<<(param_1,&this->ByteCodeStorage);
  TArrayPrivateFriend::Serialize<FRigVMParameter,TSizedDefaultAllocator<32>_>
            (param_1,&this->Parameters);
  TSetPrivateFriend::
  Serialize<TTuple<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            (param_1,(TSet<TTuple<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)&this->OperandToDebugRegisters);
  FRigVMMemoryStorageStruct::Serialize(&this->LiteralMemoryStorage,param_1);
  FRigVMMemoryStorageStruct::Serialize(&this->DefaultWorkMemoryStorage,param_1);
  pTVar5 = CVarRigVMEnableLocalizedRegistry.Ref;
  if ((param_1->field_0x29 & 1) != 0) {
    bVar6 = IsInParallelGameThread();
    if ((bVar6) || (bVar6 = IsInGameThread(), bVar6)) {
      lVar7 = 0;
    }
    else {
      lVar7 = 1;
    }
    if ((pTVar5->ShadowedValue[lVar7] != false) &&
       ((this->LocalizedRegistry).Object != (FRigVMRegistry_NoLock *)0x0)) {
      FRigVMMemoryStorageStruct::FRigVMMemoryStorageStruct(&local_68);
      FRigVMMemoryStorageStruct::Serialize(&local_68,param_1);
      puVar3 = *(ulonglong **)&param_1->field_0x8;
      if (puVar3[1] < *puVar3 + 4) {
        local_res8[0] = (uint)((param_1->field_0x28 & 1) == 0);
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
        if (1 < local_res8[0]) {
          FArchiveState::SetError((FArchiveState *)param_1);
        }
      }
      else {
        *puVar3 = *puVar3 + 4;
      }
      uVar8 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
      plVar4 = *(longlong **)&param_1->field_0x8;
      local_res10 = 0;
      if ((ulong64 *)plVar4[1] < (ulong64 *)*plVar4 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_res10,8);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,&local_res10);
        }
      }
      else {
        local_res10 = *(ulong64 *)*plVar4;
        *plVar4 = *plVar4 + 8;
      }
      this_00 = TSharedPtr<FRigVMRegistry_NoLock,1>::operator->(&this->LocalizedRegistry);
      FRigVMRegistry_NoLock::Serialize_NoLock(this_00,param_1);
      local_res10 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
      (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,uVar8);
      plVar4 = *(longlong **)&param_1->field_0x8;
      if ((ulong64 *)plVar4[1] < (ulong64 *)*plVar4 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_res10,8);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,&local_res10);
        }
      }
      else {
        local_res10 = *(ulong64 *)*plVar4;
        *plVar4 = *plVar4 + 8;
      }
      (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,local_res10);
      FRigVMMemoryStorageStruct::~FRigVMMemoryStorageStruct(&local_68);
      return;
    }
  }
  FRigVMMemoryStorageStruct::Serialize(&this->DefaultDebugMemoryStorage,param_1);
  puVar3 = *(ulonglong **)&param_1->field_0x8;
  if (*puVar3 + 4 <= puVar3[1]) {
    *puVar3 = *puVar3 + 4;
    return;
  }
  local_res8[0] = 0;
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
  if (1 < local_res8[0]) {
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return;
}

// Serialize @ 14a0a6af0

void __thiscall URigVM::Serialize(URigVM *this,FArchive *param_1)

{
  int iVar1;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FAnimObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FRigVMObjectVersion::GUID);
  iVar1 = FArchiveState::CustomVer((FArchiveState *)param_1,&FAnimObjectVersion::GUID);
  if (1 < iVar1) {
    if ((param_1->field_0x2b & 5) != 0) {
      UObject::Serialize((UObject *)this,param_1);
    }
    if (((param_1->field_0x28 & 4) == 0) && ((param_1->field_0x2b & 5) == 0)) {
      if ((param_1->field_0x28 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014a0a6b83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(this->_padding_ + 0x2b8))(this,param_1);
        return;
      }
    }
    else {
      (**(code **)(this->_padding_ + 0x2b0))(this,param_1);
    }
  }
  return;
}

// Serialize @ 14a0a6bb0

void __thiscall URigVM::Serialize(URigVM *this,FStructuredArchiveRecord param_1)

{
  int iVar1;
  FArchiveState *this_00;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  this_00 = (FArchiveState *)
            UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FAnimObjectVersion::GUID);
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FUE5MainStreamObjectVersion::GUID);
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FRigVMObjectVersion::GUID);
  iVar1 = FArchiveState::CustomVer(this_00,&FAnimObjectVersion::GUID);
  if (1 < iVar1) {
    if (this_00->ArIsObjectReferenceCollector != '\0' || this_00->ArIsCountingMemory != '\0') {
      UObject::Serialize((UObject *)this,(FArchive *)this_00);
    }
    if ((this_00->ArIsSaving == '\0') &&
       (this_00->ArIsObjectReferenceCollector == '\0' && this_00->ArIsCountingMemory == '\0')) {
      if (this_00->ArIsLoading != 0) {
        (**(code **)(this->_padding_ + 0x2b8))(this,this_00);
        return;
      }
    }
    else {
      (**(code **)(this->_padding_ + 0x2b0))(this,this_00);
    }
  }
  return;
}

// SetInstructionIndex @ 14a0a7190

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
URigVM::SetInstructionIndex(URigVM *this,FRigVMExtendedExecuteContext *param_1,ushort param_2)

{
  FRigVMExecuteContext *pFVar1;
  
  pFVar1 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  pFVar1->InstructionIndex = (uint)param_2;
  return;
}

// SetPropertyValueFromString @ 14a0a7410

void __thiscall
URigVM::SetPropertyValueFromString
          (URigVM *this,FRigVMExtendedExecuteContext *param_1,FRigVMOperand *param_2,
          FString *param_3)

{
  FRigVMMemoryStorageStruct *this_00;
  uint uVar1;
  
  this_00 = (FRigVMMemoryStorageStruct *)
            (**(code **)(this->_padding_ + 0x370))(this,param_1,param_2->MemoryType);
  if (this_00 != (FRigVMMemoryStorageStruct *)0x0) {
    uVar1 = 0xffffffff;
    if (param_2->RegisterIndex != 0xffff) {
      uVar1 = (uint)param_2->RegisterIndex;
    }
    FRigVMMemoryStorageStruct::SetDataFromString(this_00,uVar1,param_3);
  }
  return;
}

// SetVMHash @ 14a0a7470

void __thiscall URigVM::SetVMHash(URigVM *this,uint param_1)

{
  this->CachedVMHash = param_1;
  return;
}

// SetupInstructionTracking @ 14a0a7490

void __thiscall
URigVM::SetupInstructionTracking(URigVM *this,FRigVMExtendedExecuteContext *param_1,int param_2)

{
  return;
}

// StartProfiling @ 14a0a74a0

void __thiscall URigVM::StartProfiling(URigVM *this,FRigVMExtendedExecuteContext *param_1)

{
  return;
}

// StaticRegisterNativesURigVM @ 14a0a7500

void __cdecl URigVM::StaticRegisterNativesURigVM(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x18;
  local_18.DataPtr = Z_Construct_UClass_URigVM_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// StopProfiling @ 14a0a7550

void __thiscall URigVM::StopProfiling(URigVM *this,FRigVMExtendedExecuteContext *param_1)

{
  return;
}

// ValidateBytecode @ 14a0a8740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigVMOpCode": Some values do not have unique names */

bool __thiscall URigVM::ValidateBytecode(URigVM *this)

{
  FRigVMByteCode *this_00;
  FRigVMInstruction *pFVar1;
  int iVar2;
  TArray<FRigVMFunction_const_*,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  undefined1 uVar8;
  FRigVMOperand *pFVar9;
  longlong lVar10;
  FRigVMOperand *pFVar11;
  ForAnyElementType FVar12;
  undefined1 auStackY_d8 [32];
  undefined1 local_98 [8];
  ForAnyElementType local_90;
  int local_88;
  int local_84;
  URigVM *local_80;
  ForAnyElementType local_78;
  int local_70;
  int local_6c;
  FRigVMInstructionArray local_68;
  TArrayView<FRigVMOperand_const_,int> local_58;
  FRigVMMemoryStorageStruct *local_48;
  FRigVMMemoryStorageStruct *pFStack_40;
  FRigVMMemoryStorageStruct *local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  local_48 = &this->DefaultWorkMemoryStorage;
  local_70 = 3;
  pFStack_40 = &this->LiteralMemoryStorage;
  local_38 = &this->DefaultDebugMemoryStorage;
  local_78.Data = (FScriptContainerElement *)0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,3,0,&local_78,3,&local_6c);
  FVar12.Data = local_78.Data;
  *(FRigVMMemoryStorageStruct **)local_78.Data = local_48;
  *(FRigVMMemoryStorageStruct **)(local_78.Data + 8) = pFStack_40;
  *(FRigVMMemoryStorageStruct **)(local_78.Data + 0x10) = local_38;
  lVar10 = (longlong)local_70;
  local_90.Data = (FScriptContainerElement *)0x0;
  local_88 = local_70;
  if (local_70 == 0) {
    local_84 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_70,0,&local_90,local_70,&local_84);
    memcpy(local_90.Data,FVar12.Data,lVar10 << 3);
  }
  this_00 = &this->ByteCodeStorage;
  pTVar3 = this->FunctionsPtr;
  local_80 = this;
  FRigVMInstructionArray::FRigVMInstructionArray
            (&local_68,this_00,(this->ByteCodeStorage).bByteCodeIsAligned);
  iVar6 = local_68.Instructions.ArrayNum;
  pFVar1 = (FRigVMInstruction *)
           (local_68.Instructions.AllocatorInstance.Data +
           (longlong)local_68.Instructions.ArrayNum * 0xc);
  FVar12.Data = local_68.Instructions.AllocatorInstance.Data;
LAB_14a0a886c:
  if (local_68.Instructions.ArrayNum != iVar6) {
    local_98[0] = 0;
    `TCheckedPointerIterator<FRigVMInstruction_const_,int,0>::operator!='::__l2::<lambda_1>::
    operator()(local_98);
  }
  if ((FRigVMInstruction *)FVar12.Data == pFVar1) {
    bVar7 = true;
    goto LAB_14a0a89ea;
  }
  switch(((FRigVMInstruction *)FVar12.Data)->OpCode) {
  case Zero:
  case BoolFalse:
  case BoolTrue:
  case Increment:
  case Decrement:
  case JumpAbsoluteIf:
  case JumpForwardIf:
  case JumpBackwardIf:
  case JumpToBranch:
    pFVar9 = (FRigVMOperand *)
             ((this_00->ByteCode).AllocatorInstance.Data +
             (longlong)((FRigVMInstruction *)FVar12.Data)->ByteCodeIndex + 2);
    goto LAB_14a0a8934;
  case Copy:
  case BeginBlock:
    iVar2 = ((FRigVMInstruction *)FVar12.Data)->ByteCodeIndex;
    pFVar4 = (this_00->ByteCode).AllocatorInstance.Data;
    bVar7 = `URigVM::ValidateBytecode'::__l2::<lambda_1>::operator()
                      (&local_90,(FRigVMOperand *)(pFVar4 + (longlong)iVar2 + 2));
    if (bVar7) {
      pFVar9 = (FRigVMOperand *)(pFVar4 + (longlong)iVar2 + 8);
      goto LAB_14a0a8934;
    }
    goto LAB_14a0a8945;
  case Equals:
  case NotEquals:
    iVar2 = ((FRigVMInstruction *)FVar12.Data)->ByteCodeIndex;
    pFVar4 = (this_00->ByteCode).AllocatorInstance.Data;
    bVar7 = `URigVM::ValidateBytecode'::__l2::<lambda_1>::operator()
                      (&local_90,(FRigVMOperand *)(pFVar4 + (longlong)iVar2 + 2));
    if ((!bVar7) ||
       (bVar7 = `URigVM::ValidateBytecode'::__l2::<lambda_1>::operator()
                          (&local_90,(FRigVMOperand *)(pFVar4 + (longlong)iVar2 + 8)), !bVar7))
    goto LAB_14a0a8945;
    pFVar9 = (FRigVMOperand *)(pFVar4 + (longlong)iVar2 + 0xe);
LAB_14a0a8934:
    bVar7 = `URigVM::ValidateBytecode'::__l2::<lambda_1>::operator()(&local_90,pFVar9);
    if (!bVar7) {
LAB_14a0a8945:
      bVar7 = false;
LAB_14a0a89ea:
      if ((FRigVMInstruction *)local_68.Instructions.AllocatorInstance.Data !=
          (FRigVMInstruction *)0x0) {
        FMemory::Free(local_68.Instructions.AllocatorInstance.Data);
      }
      if (local_90.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data);
      }
      if (local_78.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data);
      }
      return bVar7;
    }
    break;
  case Execute:
    if (pTVar3->ArrayNum <=
        (int)(uint)*(ushort *)
                    ((this_00->ByteCode).AllocatorInstance.Data +
                    (longlong)((FRigVMInstruction *)FVar12.Data)->ByteCodeIndex + 2))
    goto LAB_14a0a8945;
    FRigVMByteCode::GetOperandsForExecuteOp(this_00,&local_58,(FRigVMInstruction *)FVar12.Data);
    pFVar9 = local_58.DataPtr + local_58.ArrayNum;
    pFVar11 = local_58.DataPtr;
    if (local_58.DataPtr != pFVar9) {
      do {
        bVar7 = `URigVM::ValidateBytecode'::__l2::<lambda_1>::operator()(&local_90,pFVar11);
        if (!bVar7) goto LAB_14a0a8945;
        pFVar11 = pFVar11 + 1;
      } while (pFVar11 != pFVar9);
      FVar12.Data = FVar12.Data + 0xc;
      goto LAB_14a0a886c;
    }
    break;
  case RunInstructions:
  case SetupTraits:
    goto switchD_14a0a88c8_caseD_66;
  case Invalid:
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7729646217340124506>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVM.cpp"
                       ,0x2a6,"false");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
  }
  FVar12.Data = FVar12.Data + 0xc;
  goto LAB_14a0a886c;
switchD_14a0a88c8_caseD_66:
  `URigVM::ValidateBytecode'::__l2::<lambda_1>::operator()
            (&local_90,
             (FRigVMOperand *)
             ((this_00->ByteCode).AllocatorInstance.Data +
             (longlong)((FRigVMInstruction *)FVar12.Data)->ByteCodeIndex + 2));
  FVar12.Data = FVar12.Data + 0xc;
  goto LAB_14a0a886c;
}

// execAddRigVMFunction @ 14a0a9f60

void __cdecl URigVM::execAddRigVMFunction(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
  uchar *puVar3;
  uchar local_res8 [8];
  undefined8 local_res10;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = '\0';
  local_res8[1] = '\0';
  local_res8[2] = '\0';
  local_res8[3] = '\0';
  local_res8[4] = '\0';
  local_res8[5] = '\0';
  local_res8[6] = '\0';
  local_res8[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar3 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x358))(param_1,local_res10,puVar3);
  *(undefined4 *)param_3 = uVar2;
  return;
}

// execExecute @ 14a0aa050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl URigVM::execExecute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FRigVMExtendedExecuteContext *pFVar1;
  FProperty *pFVar2;
  undefined1 uVar3;
  FRigVMExtendedExecuteContext *pFVar4;
  uchar *puVar5;
  undefined1 auStack_2e8 [32];
  uchar local_2c8 [16];
  FRigVMExtendedExecuteContext local_2b8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_2e8;
  FRigVMExtendedExecuteContext::FRigVMExtendedExecuteContext(&local_2b8);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2b8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2b8);
  }
  pFVar1 = (FRigVMExtendedExecuteContext *)param_2->MostRecentPropertyAddress;
  local_2c8[0] = '\0';
  local_2c8[1] = '\0';
  local_2c8[2] = '\0';
  local_2c8[3] = '\0';
  local_2c8[4] = '\0';
  local_2c8[5] = '\0';
  local_2c8[6] = '\0';
  local_2c8[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar4 = &local_2b8;
  if (pFVar1 != (FRigVMExtendedExecuteContext *)0x0) {
    pFVar4 = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_2c8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_2c8);
  }
  puVar5 = local_2c8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar5 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar3 = (**(code **)(*(longlong *)param_1 + 0x328))(param_1,pFVar4,puVar5);
  *(undefined1 *)param_3 = uVar3;
  FRigVMExtendedExecuteContext::~FRigVMExtendedExecuteContext(&local_2b8);
  return;
}

// execGetParameterValueBool @ 14a0aa1f0

void __cdecl URigVM::execGetParameterValueBool(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [2];
  undefined8 local_res18;
  
  local_res18 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetParameterValueDouble @ 14a0aa2c0

void __cdecl URigVM::execGetParameterValueDouble(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [2];
  undefined8 local_res18;
  
  local_res18 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetParameterValueFloat @ 14a0aa390

void __cdecl URigVM::execGetParameterValueFloat(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [2];
  undefined8 local_res18;
  
  local_res18 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetParameterValueInt @ 14a0aa460

void __cdecl URigVM::execGetParameterValueInt(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [2];
  undefined8 local_res18;
  
  local_res18 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetParameterValueName @ 14a0aa530

void __cdecl URigVM::execGetParameterValueName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  
  local_res18 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10 = (ulonglong)local_res10._4_4_ << 0x20;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetParameterValueQuat @ 14a0aa600

void __cdecl URigVM::execGetParameterValueQuat(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  undefined4 local_res10 [2];
  undefined8 local_res18;
  
  local_res18 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  dVar2 = UE::Math::TQuat<double>::Identity.Y;
  *(double *)param_3 = UE::Math::TQuat<double>::Identity.X;
  *(double *)((longlong)param_3 + 8) = dVar2;
  dVar2 = UE::Math::TQuat<double>::Identity.W;
  *(double *)((longlong)param_3 + 0x10) = UE::Math::TQuat<double>::Identity.Z;
  *(double *)((longlong)param_3 + 0x18) = dVar2;
  return;
}

// execGetParameterValueString @ 14a0aa6e0

void __cdecl URigVM::execGetParameterValueString(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [2];
  undefined8 local_res18;
  undefined1 local_18 [16];
  
  local_res18 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (param_3 != local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(undefined8 *)param_3 = 0;
    *(undefined8 *)((longlong)param_3 + 8) = 0;
  }
  return;
}

// execGetParameterValueTransform @ 14a0aa7c0

void __cdecl URigVM::execGetParameterValueTransform(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [2];
  undefined8 local_res18;
  
  local_res18 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(double (*) [2])param_3 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_3 + 0x10) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_3 + 0x20) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_3 + 0x30) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_3 + 0x40) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])((longlong)param_3 + 0x50) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  return;
}

// execGetParameterValueVector2D @ 14a0aa8c0

void __cdecl URigVM::execGetParameterValueVector2D(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [2];
  undefined8 local_res18;
  
  local_res18 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(TVector2<double>_u_0 *)param_3 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  return;
}

// execGetParameterValueVector @ 14a0aa990

void __cdecl URigVM::execGetParameterValueVector(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  undefined4 local_res10 [2];
  undefined8 local_res18;
  
  local_res18 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)param_3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_3 + 8) = uVar2;
  *(double *)((longlong)param_3 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// execGetRigVMFunctionName @ 14a0aaa70

void __cdecl URigVM::execGetRigVMFunctionName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 *puVar2;
  undefined4 local_res8 [2];
  void *local_18 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x360))(param_1,local_18,local_res8[0])
  ;
  if (param_3 != puVar2) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(undefined8 *)param_3 = *puVar2;
    *puVar2 = 0;
    *(undefined4 *)((longlong)param_3 + 8) = *(undefined4 *)(puVar2 + 1);
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)puVar2 + 0xc);
    puVar2[1] = 0;
  }
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  return;
}

// execGetStatistics @ 14a0aab50

void __cdecl URigVM::execGetStatistics(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FRigVMByteCode *pFVar2;
  int iVar3;
  FRigVMInstructionArray local_58;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 local_20;
  
  local_20 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = *(FRigVMByteCode **)&param_1[0xc].field_0x8;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  FRigVMInstructionArray::FRigVMInstructionArray(&local_58,pFVar2,pFVar2->bByteCodeIsAligned);
  if (local_58.Instructions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Instructions.AllocatorInstance.Data);
  }
  iVar1 = (pFVar2->ByteCode).ArrayMax;
  iVar3 = *(int *)&param_1[0x11].field_0x24 * 4;
  *(ulonglong *)param_3 = CONCAT44(iVar3,iVar1 + iVar3);
  *(undefined8 *)((longlong)param_3 + 8) = uStack_40;
  *(undefined8 *)((longlong)param_3 + 0x10) = uStack_38;
  *(undefined8 *)((longlong)param_3 + 0x18) = uStack_30;
  *(undefined8 *)((longlong)param_3 + 0x20) = uStack_28;
  *(ulonglong *)((longlong)param_3 + 0x28) = CONCAT44(iVar3,local_20);
  *(ulonglong *)((longlong)param_3 + 0x30) = CONCAT44(iVar1,local_58.Instructions.ArrayNum);
  return;
}

// execSetParameterValueBool @ 14a0aae20

void __cdecl URigVM::execSetParameterValueBool(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [4];
  undefined4 local_res20 [2];
  undefined8 local_18 [2];
  
  local_18[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execSetParameterValueDouble @ 14a0aaf10

void __cdecl URigVM::execSetParameterValueDouble(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [4];
  undefined8 local_res20;
  undefined8 local_18 [2];
  
  local_res20 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_18[0] = 0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execSetParameterValueFloat @ 14a0ab010

void __cdecl URigVM::execSetParameterValueFloat(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [4];
  undefined4 local_res20 [2];
  undefined8 local_18 [2];
  
  local_18[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execSetParameterValueInt @ 14a0ab100

void __cdecl URigVM::execSetParameterValueInt(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [4];
  undefined4 local_res20 [2];
  undefined8 local_18 [2];
  
  local_18[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execSetParameterValueName @ 14a0ab1f0

void __cdecl URigVM::execSetParameterValueName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [4];
  undefined8 local_res20;
  undefined8 local_18 [2];
  
  local_res20 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_18[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execSetParameterValueQuat @ 14a0ab2f0

void __cdecl URigVM::execSetParameterValueQuat(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [4];
  undefined8 local_res20;
  undefined1 local_28 [32];
  
  local_res20 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execSetParameterValueString @ 14a0ab3e0

void __cdecl URigVM::execSetParameterValueString(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [4];
  undefined8 local_res20;
  void *local_18;
  undefined8 local_10;
  
  local_res20 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_18 = (void *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execSetParameterValueTransform @ 14a0ab4f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl URigVM::execSetParameterValueTransform(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_a8 [32];
  undefined4 local_88 [2];
  undefined8 local_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  undefined1 local_58 [16];
  double local_48;
  double dStack_40;
  undefined1 local_38 [16];
  double local_28;
  double dStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_80 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar9 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar7 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar10 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar8 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar11 = GlobalVectorConstants::Float1110.m128_f32[3];
  local_78 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_70 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_68 = (double)fVar6;
  dStack_60 = (double)fVar9;
  local_48 = (double)fVar7;
  dStack_40 = (double)fVar10;
  local_58._8_4_ = SUB84((double)fVar4,0);
  local_58._0_8_ = (double)fVar2;
  local_58._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  local_28 = (double)fVar8;
  dStack_20 = (double)fVar11;
  local_38._8_4_ = SUB84((double)fVar5,0);
  local_38._0_8_ = (double)fVar3;
  local_38._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_88[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execSetParameterValueVector2D @ 14a0ab660

void __cdecl URigVM::execSetParameterValueVector2D(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [4];
  undefined8 local_res20;
  undefined1 local_18 [16];
  
  local_res20 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execSetParameterValueVector @ 14a0ab750

void __cdecl URigVM::execSetParameterValueVector(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [4];
  undefined8 local_res20;
  undefined1 local_28 [32];
  
  local_res20 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// SetExternalVariablesInstanceData @ 14a1d7ef0

void __thiscall
URigVM::SetExternalVariablesInstanceData
          (URigVM *this,FRigVMExtendedExecuteContext *param_1,
          TArray<FRigVMExternalVariable,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  int *piVar1;
  TArray<FRigVMExternalVariableRuntimeData,TSizedDefaultAllocator<32>_> *pTVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong local_res8;
  longlong local_58 [3];
  
  uVar3 = param_2->ArrayNum;
  if (((this->ExternalVariables).ArrayNum != uVar3) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExternalVariables.Num() == NumExternalVariables",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVM.h"
                         ,0x32f,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar2 = &param_1->ExternalVariableRuntimeData;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  uVar10 = 0;
  piVar1 = &(param_1->ExternalVariableRuntimeData).ArrayMax;
  (param_1->ExternalVariableRuntimeData).ArrayNum = 0;
  if ((param_1->ExternalVariableRuntimeData).ArrayMax < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar3,&pTVar2->AllocatorInstance,0,piVar1);
  }
  if (0 < (int)uVar3) {
    local_res8 = 0;
    uVar12 = uVar10;
    uVar13 = uVar10;
    do {
      uVar9 = (uint)uVar10;
      uVar7 = 0;
      if ((int)uVar9 < param_2->ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar11 = (param_2->AllocatorInstance).Data + local_res8;
      uVar7 = 0;
      if ((int)uVar9 < (this->ExternalVariables).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (this->ExternalVariables).AllocatorInstance.Data;
      if ((*(longlong *)(pFVar4 + uVar12) != *(longlong *)pFVar11) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ExternalVariableDef.Name == InExternalVariable.Name",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVM.h"
                             ,0x339,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((*(longlong *)(pFVar4 + uVar12 + 8) != *(longlong *)(pFVar11 + 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ExternalVariableDef.Property == InExternalVariable.Property",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVM.h"
                             ,0x33a,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (((!param_3) && (*(longlong *)(pFVar11 + 0x28) == 0)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("bAllowNullMemory || InExternalVariable.Memory != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVM.h"
                             ,0x33b,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_58[0] = *(longlong *)(pFVar11 + 0x28);
      pFVar11 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar11 <= (FScriptContainerElement *)local_58) &&
          ((FScriptContainerElement *)local_58 < pFVar11 + (longlong)*piVar1 * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = (param_1->ExternalVariableRuntimeData).ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar2->AllocatorInstance,piVar1);
      }
      (param_1->ExternalVariableRuntimeData).ArrayNum = iVar8 + 1;
      local_res8 = local_res8 + 0x30;
      uVar10 = (ulonglong)(uVar9 + 1);
      uVar13 = uVar13 + 1;
      uVar12 = uVar12 + 0x28;
      *(longlong *)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_58[0];
    } while ((longlong)uVar13 < (longlong)(int)uVar3);
  }
  return;
}

// operator() @ 15054ae90

bool __thiscall `URigVM::PrepareMemoryForExecution'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7729646217340123854>);
  if (bVar2) {
    GetCurrentThreadId();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7729646217340123854>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 15054aef0

bool __thiscall `URigVM::Initialize'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7729646217340123736>);
  if (bVar2) {
    GetCurrentThreadId();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7729646217340123736>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 15054af50

bool __thiscall `URigVM::ExecuteInstructions'::__l59::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7729646217340123197>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7729646217340123197>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

