// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 18

// StaticStruct @ 14a072960

UScriptStruct * __cdecl FRigVMExtendedExecuteContext::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMExtendedExecuteContext.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMExtendedExecuteContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMExtendedExecuteContext,(UObject *)pUVar1,
                         L"RigVMExtendedExecuteContext");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMExtendedExecuteContext.OuterSingleton;
}

// GetPublicData<FRigVMExecuteContext> @ 14a0773f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FRigVMExecuteContext * __thiscall
FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>
          (FRigVMExtendedExecuteContext *this)

{
  FStructOnScope *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  UPackage *pUVar6;
  FRigVMExecuteContext *pFVar7;
  
  pFVar1 = &this->PublicDataScope;
  lVar5 = (**(code **)(pFVar1->_padding_ + 0x20))(pFVar1);
  if (Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar6 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMExecuteContext,(UObject *)pUVar6,
                         L"RigVMExecuteContext");
    if (Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton !=
        (UScriptStruct *)0x0) goto LAB_14a077440;
  }
  else {
LAB_14a077440:
    iVar2 = (int)(Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton)->_padding_;
    if ((*(int *)(lVar5 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar2 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton)->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_14a07748a;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("PublicDataScope.GetStruct()->IsChildOf(ExecuteContextType::StaticStruct())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMExecuteContext.h"
                     ,0x29e,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FRigVMExecuteContext *)(*pcVar3)();
    return pFVar7;
  }
LAB_14a07748a:
                    /* WARNING: Could not recover jumptable at 0x00014a07749a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar7 = (FRigVMExecuteContext *)(**(code **)(pFVar1->_padding_ + 0x18))(pFVar1);
  return pFVar7;
}

// GetPublicData<FRigVMExecuteContext> @ 14a0774b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FRigVMExecuteContext * __thiscall
FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>
          (FRigVMExtendedExecuteContext *this)

{
  FStructOnScope *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  UPackage *pUVar6;
  FRigVMExecuteContext *pFVar7;
  
  pFVar1 = &this->PublicDataScope;
  lVar5 = (**(code **)(pFVar1->_padding_ + 0x20))(pFVar1);
  if (Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar6 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMExecuteContext,(UObject *)pUVar6,
                         L"RigVMExecuteContext");
    if (Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton !=
        (UScriptStruct *)0x0) goto LAB_14a077500;
  }
  else {
LAB_14a077500:
    iVar2 = (int)(Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton)->_padding_;
    if ((*(int *)(lVar5 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar2 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton)->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_14a07754a;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("PublicDataScope.GetStruct()->IsChildOf(ExecuteContextType::StaticStruct())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMExecuteContext.h"
                     ,0x297,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FRigVMExecuteContext *)(*pcVar3)();
    return pFVar7;
  }
LAB_14a07754a:
                    /* WARNING: Could not recover jumptable at 0x00014a07755a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar7 = (FRigVMExecuteContext *)(**(code **)(pFVar1->_padding_ + 0x10))(pFVar1);
  return pFVar7;
}

// FRigVMExtendedExecuteContext @ 14a079a50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FRigVMExtendedExecuteContext * __thiscall
FRigVMExtendedExecuteContext::FRigVMExtendedExecuteContext(FRigVMExtendedExecuteContext *this)

{
  UPackage *pUVar1;
  FRigVMExecuteContext *pFVar2;
  
  this->_padding_ = (longlong)&___7FRigVMExtendedExecuteContext__6B_;
  this->VMHash = 0;
  FRigVMMemoryStorageStruct::FRigVMMemoryStorageStruct(&this->WorkMemoryStorage);
  FRigVMMemoryStorageStruct::FRigVMMemoryStorageStruct(&this->DebugMemoryStorage);
  if (Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMExecuteContext,(UObject *)pUVar1,
                         L"RigVMExecuteContext");
  }
  FStructOnScope::FStructOnScope
            (&this->PublicDataScope,
             (UStruct *)Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton);
  (this->Slices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&(this->NameCache).NameCache = 0;
  *(undefined8 *)&(this->NameCache).NameCache.field_0x8 = 0;
  *(undefined8 *)&(this->NameCache).NameCache.field_0x20 = 0;
  (this->Slices).ArrayNum = 0;
  (this->Slices).ArrayMax = 0;
  (this->SliceOffsets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SliceOffsets).ArrayNum = 0;
  (this->SliceOffsets).ArrayMax = 0;
  this->VM = (URigVM *)0x0;
  this->Factory = (FRigVMDispatchFactory *)0x0;
  *(undefined4 *)&(this->NameCache).NameCache.field_0x28 = 0;
  *(undefined4 *)&(this->NameCache).NameCache.field_0x2c = 0x80;
  *(undefined4 *)&(this->NameCache).NameCache.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NameCache).NameCache.field_0x34 = 0;
  *(undefined8 *)&(this->NameCache).NameCache.field_0x40 = 0;
  *(undefined4 *)&(this->NameCache).NameCache.field_0x48 = 0;
  *(undefined8 *)&(this->NameCache).BoolCache = 0;
  *(undefined8 *)&(this->NameCache).BoolCache.field_0x8 = 0;
  *(undefined8 *)&(this->NameCache).BoolCache.field_0x20 = 0;
  *(undefined4 *)&(this->NameCache).BoolCache.field_0x28 = 0;
  *(undefined4 *)&(this->NameCache).BoolCache.field_0x2c = 0x80;
  *(undefined4 *)&(this->NameCache).BoolCache.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NameCache).BoolCache.field_0x34 = 0;
  *(undefined8 *)&(this->NameCache).BoolCache.field_0x40 = 0;
  *(undefined4 *)&(this->NameCache).BoolCache.field_0x48 = 0;
  (this->CachedMemoryHandles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedMemoryHandles).ArrayNum = 0;
  (this->CachedMemoryHandles).ArrayMax = 0;
  (this->EntriesBeingExecuted).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EntriesBeingExecuted).ArrayNum = 0;
  (this->EntriesBeingExecuted).ArrayMax = 0;
  this->ExecutingThreadId = -1;
  this->CurrentExecuteResult = Failed;
  (this->CurrentEntryName).ComparisonIndex = 0;
  (this->CurrentEntryName).Number = 0;
  this->bCurrentlyRunningRootEntry = false;
  (this->CurrentVMMemory).AllocatorInstance.SecondaryData =
       (ForElementType<FRigVMMemoryStorageStruct_*>)0x0;
  (this->CurrentVMMemory).ArrayNum = 0;
  (this->CurrentVMMemory).ArrayMax = 3;
  *(undefined8 *)&this->OnExecutionReachedExit = 0;
  *(undefined8 *)&(this->OnExecutionReachedExit).field_0x8 = 0;
  *(undefined8 *)&(this->OnExecutionReachedExit).field_0x10 = 0;
  *(undefined8 *)&(this->OnExecutionReachedExit).field_0x18 = 2;
  *(undefined8 *)&this->OnExecutionReachedExitCallback = 0;
  *(undefined8 *)&(this->OnExecutionReachedExitCallback).field_0x28 = 0;
  (this->LazyBranchExecuteState).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LazyBranchExecuteState).ArrayNum = 0;
  (this->LazyBranchExecuteState).ArrayMax = 0;
  (this->ExternalVariableRuntimeData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExternalVariableRuntimeData).ArrayNum = 0;
  (this->ExternalVariableRuntimeData).ArrayMax = 0;
  Reset(this);
  pFVar2 = GetPublicData<FRigVMExecuteContext>(this);
  pFVar2->NameCache = &this->NameCache;
  return this;
}

// ~FRigVMExtendedExecuteContext @ 14a07ba60

void __thiscall
FRigVMExtendedExecuteContext::~FRigVMExtendedExecuteContext(FRigVMExtendedExecuteContext *this)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  void *pvVar3;
  ForElementType<FRigVMMemoryStorageStruct_*> FVar4;
  longlong *plVar5;
  
  this->_padding_ = (longlong)&___7FRigVMExtendedExecuteContext__6B_;
  Reset(this);
  pFVar1 = (this->ExternalVariableRuntimeData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FRigVMInstructionSetExecuteState,int>
            ((FRigVMInstructionSetExecuteState *)
             (this->LazyBranchExecuteState).AllocatorInstance.Data,
             (this->LazyBranchExecuteState).ArrayNum);
  pFVar1 = (this->LazyBranchExecuteState).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (*(longlong *)&this->OnExecutionReachedExitCallback != 0) {
    plVar2 = *(longlong **)&(this->OnExecutionReachedExitCallback).field_0x28;
    plVar5 = (longlong *)&(this->OnExecutionReachedExitCallback).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar5 = plVar2;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnExecutionReachedExit).field_0x8,
             *(int *)&(this->OnExecutionReachedExit).field_0x10);
  pvVar3 = *(void **)&(this->OnExecutionReachedExit).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnExecutionReachedExit);
  FVar4 = (this->CurrentVMMemory).AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<FRigVMMemoryStorageStruct_*>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  pFVar1 = (this->EntriesBeingExecuted).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedMemoryHandles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->NameCache).BoolCache.field_0x48 = 0;
  pvVar3 = *(void **)&(this->NameCache).BoolCache.field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FRigVMNameOp,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRigVMNameOp,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRigVMNameOp,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->NameCache).BoolCache);
  *(undefined4 *)&(this->NameCache).NameCache.field_0x48 = 0;
  pvVar3 = *(void **)&(this->NameCache).NameCache.field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FRigVMNameOp,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRigVMNameOp,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRigVMNameOp,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NameCache);
  pFVar1 = (this->SliceOffsets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Slices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FStructOnScope::~FStructOnScope(&this->PublicDataScope);
  FRigVMMemoryStorageStruct::~FRigVMMemoryStorageStruct(&this->DebugMemoryStorage);
  FRigVMMemoryStorageStruct::~FRigVMMemoryStorageStruct(&this->WorkMemoryStorage);
  return;
}

// operator= @ 14a07d520

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FRigVMExtendedExecuteContext * __thiscall
FRigVMExtendedExecuteContext::operator=
          (FRigVMExtendedExecuteContext *this,FRigVMExtendedExecuteContext *param_1)

{
  int *piVar1;
  FStructOnScope *pFVar2;
  TArray<FRigVMSlice,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FRigVMInstructionSetExecuteState,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FRigVMExternalVariableRuntimeData,TSizedDefaultAllocator<32>_> *pTVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  bool bVar10;
  UStruct *pUVar11;
  UClass *pUVar12;
  FRigVMExtendedExecuteContext *pFVar13;
  UStruct *pUVar14;
  FStructOnScope *pFVar15;
  longlong *plVar16;
  longlong lVar17;
  FRigVMExecuteContext *pFVar18;
  FStructOnScope local_48;
  
  this->VMHash = param_1->VMHash;
  FRigVMMemoryStorageStruct::operator=(&this->WorkMemoryStorage,&param_1->WorkMemoryStorage);
  FRigVMMemoryStorageStruct::operator=(&this->DebugMemoryStorage,&param_1->DebugMemoryStorage);
  pUVar11 = (UStruct *)
            (**(code **)((param_1->PublicDataScope)._padding_ + 0x20))(&param_1->PublicDataScope);
  if (pUVar11 != (UStruct *)0x0) {
    pUVar12 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar7 = (int)pUVar12->_padding_;
    if ((iVar7 <= *(int *)(pUVar11->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar11->_padding_ + 0x30) + (longlong)iVar7 * 8)
        == &pUVar12->_padding_)) goto LAB_14a07d5c6;
  }
  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                     ("OtherPublicDataStruct",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMExecuteContext.cpp"
                      ,0x9c,L"");
  pUVar11 = (UStruct *)0x0;
  if (bVar10) {
    pcVar9 = (code *)swi(3);
    pFVar13 = (FRigVMExtendedExecuteContext *)(*pcVar9)();
    return pFVar13;
  }
LAB_14a07d5c6:
  pFVar2 = &this->PublicDataScope;
  pUVar14 = (UStruct *)(**(code **)(pFVar2->_padding_ + 0x20))(pFVar2);
  if (pUVar14 != pUVar11) {
    pFVar15 = FStructOnScope::FStructOnScope(&local_48,pUVar11);
    if (pFVar2 != pFVar15) {
      (**(code **)(pFVar2->_padding_ + 0x48))(pFVar2);
      (this->PublicDataScope).ScriptStruct.WeakPtr = (pFVar15->ScriptStruct).WeakPtr;
      (this->PublicDataScope).SampleStructMemory = pFVar15->SampleStructMemory;
      (this->PublicDataScope).OwnsMemory = pFVar15->OwnsMemory;
      pFVar15->OwnsMemory = false;
      (**(code **)(pFVar15->_padding_ + 0x48))(pFVar15);
    }
    FStructOnScope::~FStructOnScope(&local_48);
  }
  plVar16 = (longlong *)(**(code **)(pFVar2->_padding_ + 0x18))(pFVar2);
  lVar17 = (**(code **)((param_1->PublicDataScope)._padding_ + 0x10))(&param_1->PublicDataScope);
  (**(code **)(*plVar16 + 0x10))(plVar16,lVar17);
  plVar16[0x21] = (longlong)this;
  if ((FRigVMNameCache *)*(undefined1 **)(lVar17 + 0x50) == &param_1->NameCache) {
    pFVar18 = GetPublicData<FRigVMExecuteContext>(this);
    pFVar18->NameCache = &this->NameCache;
  }
  pTVar3 = &this->Slices;
  this->VM = param_1->VM;
  if (pTVar3 != &param_1->Slices) {
    iVar7 = (param_1->Slices).ArrayNum;
    piVar1 = &(this->Slices).ArrayMax;
    pFVar8 = (param_1->Slices).AllocatorInstance.Data;
    (this->Slices).ArrayNum = iVar7;
    if ((iVar7 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14,4,iVar7,*piVar1,&pTVar3->AllocatorInstance,iVar7,piVar1);
      if (iVar7 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,pFVar8,(longlong)iVar7 * 0x14);
      }
    }
  }
  pTVar4 = &this->SliceOffsets;
  if (pTVar4 != &param_1->SliceOffsets) {
    iVar7 = (param_1->SliceOffsets).ArrayNum;
    piVar1 = &(this->SliceOffsets).ArrayMax;
    pFVar8 = (param_1->SliceOffsets).AllocatorInstance.Data;
    (this->SliceOffsets).ArrayNum = iVar7;
    if ((iVar7 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar7,*piVar1,&pTVar4->AllocatorInstance,iVar7,piVar1);
      if (iVar7 != 0) {
        memcpy((pTVar4->AllocatorInstance).Data,pFVar8,(longlong)iVar7 * 2);
      }
    }
  }
  TArray<FRigVMMemoryHandle,TSizedDefaultAllocator<32>_>::operator=
            (&this->CachedMemoryHandles,&param_1->CachedMemoryHandles);
  pTVar5 = &this->LazyBranchExecuteState;
  if (pTVar5 != &param_1->LazyBranchExecuteState) {
    DestructItems<FRigVMInstructionSetExecuteState,int>
              ((FRigVMInstructionSetExecuteState *)(pTVar5->AllocatorInstance).Data,
               (this->LazyBranchExecuteState).ArrayNum);
    iVar7 = (param_1->LazyBranchExecuteState).ArrayNum;
    piVar1 = &(this->LazyBranchExecuteState).ArrayMax;
    pFVar8 = (param_1->LazyBranchExecuteState).AllocatorInstance.Data;
    (this->LazyBranchExecuteState).ArrayNum = iVar7;
    if ((iVar7 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,8,iVar7,*piVar1,&pTVar5->AllocatorInstance,iVar7,piVar1);
      ConstructItems<FRigVMInstructionSetExecuteState,FRigVMInstructionSetExecuteState,int>
                ((pTVar5->AllocatorInstance).Data,(FRigVMInstructionSetExecuteState *)pFVar8,iVar7);
    }
  }
  pTVar6 = &this->ExternalVariableRuntimeData;
  if (pTVar6 != &param_1->ExternalVariableRuntimeData) {
    iVar7 = (param_1->ExternalVariableRuntimeData).ArrayNum;
    piVar1 = &(this->ExternalVariableRuntimeData).ArrayMax;
    pFVar8 = (param_1->ExternalVariableRuntimeData).AllocatorInstance.Data;
    (this->ExternalVariableRuntimeData).ArrayNum = iVar7;
    if ((iVar7 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar7,*piVar1,&pTVar6->AllocatorInstance,iVar7,piVar1);
      if (iVar7 != 0) {
        memcpy((pTVar6->AllocatorInstance).Data,pFVar8,(longlong)iVar7 << 3);
      }
    }
  }
  return this;
}

// BeginSlice @ 14a080760

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
FRigVMExtendedExecuteContext::BeginSlice(FRigVMExtendedExecuteContext *this,int param_1,int param_2)

{
  int *piVar1;
  TArray<FRigVMSlice,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  FRigVMExecuteContext *pFVar9;
  uint uVar10;
  uint uVar11;
  undefined4 local_38;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  pTVar2 = &this->Slices;
  iVar7 = (this->Slices).ArrayNum;
  uVar11 = iVar7 - 1;
  uVar10 = 0;
  if ((int)uVar11 < iVar7) {
    uVar10 = ~uVar11 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar8 = (longlong)(this->Slices).ArrayNum;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if (*(int *)(pFVar3 + lVar8 * 0x14 + -0x10) < *(int *)(pFVar3 + lVar8 * 0x14 + -0xc)) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5759244135378713933>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMExecuteContext.h"
                       ,0x2b3,"!IsSliceComplete()");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  iStack_34 = param_1 + -1;
  local_38 = 0;
  uStack_2c = 0;
  local_28 = 0xffffffff;
  iStack_30 = (-1 < iStack_34) - 1;
  if ((pFVar3 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 < pFVar3 + (longlong)(this->Slices).ArrayMax * 0x14)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = (this->Slices).ArrayNum;
  piVar1 = &(this->Slices).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x414,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->Slices).ArrayNum = iVar7 + 1;
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  pFVar3 = pFVar4 + (longlong)iVar7 * 0x14;
  *(ulonglong *)pFVar3 = CONCAT44(iStack_34,local_38);
  *(ulonglong *)(pFVar3 + 8) = CONCAT44(uStack_2c,iStack_30);
  *(undefined4 *)(pFVar4 + (longlong)iVar7 * 0x14 + 0x10) = local_28;
  iVar7 = (this->Slices).ArrayNum;
  uVar11 = iVar7 - 1;
  uVar10 = 0;
  if ((int)uVar11 < iVar7) {
    uVar10 = ~uVar11 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = (this->Slices).ArrayNum;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  *(int *)(pFVar3 + (longlong)iVar7 * 0x14 + -0xc) =
       *(int *)(pFVar3 + (longlong)iVar7 * 0x14 + -0x14) + param_2;
  iVar7 = (this->Slices).ArrayNum;
  uVar11 = iVar7 - 1;
  uVar10 = 0;
  if ((int)uVar11 < iVar7) {
    uVar10 = ~uVar11 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = (this->Slices).ArrayNum;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  pFVar9 = GetPublicData<FRigVMExecuteContext>(this);
  *(int *)(pFVar3 + ((longlong)iVar7 + -1) * 0x14 + 0x10) = pFVar9->InstructionIndex;
  iVar7 = (this->Slices).ArrayNum;
  uVar11 = iVar7 - 1;
  uVar10 = 0;
  if ((int)uVar11 < iVar7) {
    uVar10 = ~uVar11 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = (this->Slices).ArrayNum;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  pFVar9 = GetPublicData<FRigVMExecuteContext>(this);
  uVar10 = pFVar9->InstructionIndex;
  uVar11 = 0;
  if ((int)uVar10 < (this->SliceOffsets).ArrayNum) {
    uVar11 = ~uVar10 >> 0x1f;
  }
  if (uVar11 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  *(uint *)(pFVar3 + ((longlong)iVar7 + -1) * 0x14 + 0xc) =
       (uint)*(ushort *)((this->SliceOffsets).AllocatorInstance.Data + (longlong)(int)uVar10 * 2);
  return;
}

// CopyMemoryStorage @ 14a082a20

void __thiscall
FRigVMExtendedExecuteContext::CopyMemoryStorage
          (FRigVMExtendedExecuteContext *this,FRigVMExtendedExecuteContext *param_1)

{
  this->VMHash = param_1->VMHash;
  FRigVMMemoryStorageStruct::operator=(&this->WorkMemoryStorage,&param_1->WorkMemoryStorage);
  FRigVMMemoryStorageStruct::operator=(&this->DebugMemoryStorage,&param_1->DebugMemoryStorage);
  return;
}

// GetInstructionIndex @ 14a0958f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall FRigVMExtendedExecuteContext::GetInstructionIndex(FRigVMExtendedExecuteContext *this)

{
  FRigVMExecuteContext *pFVar1;
  
  pFVar1 = GetPublicData<FRigVMExecuteContext>(this);
  return pFVar1->InstructionIndex;
}

// GetSliceHash @ 14a098470

uint __thiscall FRigVMExtendedExecuteContext::GetSliceHash(FRigVMExtendedExecuteContext *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  undefined1 local_res8 [8];
  
  iVar2 = (this->Slices).ArrayNum;
  uVar6 = 0;
  pFVar7 = (this->Slices).AllocatorInstance.Data;
  pFVar1 = pFVar7 + (longlong)iVar2 * 0x14;
  while( true ) {
    if ((this->Slices).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FRigVMSlice_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar7 == pFVar1) break;
    uVar4 = *(uint *)(pFVar7 + 8);
    uVar5 = *(int *)pFVar7 - uVar4 ^ uVar4 >> 0xd;
    uVar3 = (-0x61c88647 - uVar5) - uVar4 ^ uVar5 << 8;
    uVar8 = (uVar4 - uVar5) - uVar3 ^ uVar3 >> 0xd;
    uVar5 = (uVar5 - uVar8) - uVar3 ^ uVar8 >> 0xc;
    uVar4 = (uVar3 - uVar5) - uVar8 ^ uVar5 << 0x10;
    uVar8 = (uVar8 - uVar4) - uVar5 ^ uVar4 >> 5;
    uVar3 = (uVar5 - uVar8) - uVar4 ^ uVar8 >> 3;
    uVar4 = (uVar4 - uVar3) - uVar8 ^ uVar3 << 10;
    uVar3 = (uVar8 - uVar4) - uVar3 ^ uVar4 >> 0xf;
    uVar6 = uVar6 - uVar3 ^ uVar3 >> 0xd;
    uVar4 = (-0x61c88647 - uVar6) - uVar3 ^ uVar6 << 8;
    uVar3 = (uVar3 - uVar4) - uVar6 ^ uVar4 >> 0xd;
    uVar6 = (uVar6 - uVar3) - uVar4 ^ uVar3 >> 0xc;
    uVar4 = (uVar4 - uVar6) - uVar3 ^ uVar6 << 0x10;
    uVar3 = (uVar3 - uVar4) - uVar6 ^ uVar4 >> 5;
    uVar6 = (uVar6 - uVar3) - uVar4 ^ uVar3 >> 3;
    uVar4 = (uVar4 - uVar6) - uVar3 ^ uVar6 << 10;
    uVar6 = (uVar3 - uVar4) - uVar6 ^ uVar4 >> 0xf;
    pFVar7 = pFVar7 + 0x14;
  }
  return uVar6;
}

// GetVMPathName @ 14a09d5f0

FString * __thiscall
FRigVMExtendedExecuteContext::GetVMPathName
          (FRigVMExtendedExecuteContext *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  bool bVar2;
  FString local_28;
  FString local_18;
  
  bVar2 = this->VM == (URigVM *)0x0;
  if (bVar2) {
    pFVar1 = ::FString::FString(&local_28,L"Unknown VM");
  }
  else {
    pFVar1 = UObjectBaseUtility::GetPathName
                       ((UObjectBaseUtility *)this->VM,&local_18,(UObject *)0x0);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar1->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar1->Data).ArrayMax;
  (pFVar1->Data).ArrayNum = 0;
  (pFVar1->Data).ArrayMax = 0;
  if (bVar2) {
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if ((!bVar2) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Initialize @ 14a09d750

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
FRigVMExtendedExecuteContext::Initialize(FRigVMExtendedExecuteContext *this,UScriptStruct *param_1)

{
  FStructOnScope *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  UPackage *pUVar5;
  FStructOnScope *pFVar6;
  longlong lVar7;
  FRigVMExecuteContext *pFVar8;
  FStructOnScope local_38;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar5 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMExecuteContext,(UObject *)pUVar5,
                         L"RigVMExecuteContext");
    if (Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton !=
        (UScriptStruct *)0x0) goto LAB_14a09d798;
  }
  else {
LAB_14a09d798:
    iVar2 = (int)(Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton)->_padding_;
    if (((int)param_1->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar2 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton)->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_14a09d7e2;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("InScriptStruct->IsChildOf(FRigVMExecuteContext::StaticStruct())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMExecuteContext.cpp"
                     ,0xba,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14a09d7e2:
  pFVar6 = FStructOnScope::FStructOnScope(&local_38,(UStruct *)param_1);
  pFVar1 = &this->PublicDataScope;
  if (pFVar1 != pFVar6) {
    (**(code **)(pFVar1->_padding_ + 0x48))(pFVar1);
    (this->PublicDataScope).ScriptStruct.WeakPtr = (pFVar6->ScriptStruct).WeakPtr;
    (this->PublicDataScope).SampleStructMemory = pFVar6->SampleStructMemory;
    (this->PublicDataScope).OwnsMemory = pFVar6->OwnsMemory;
    pFVar6->OwnsMemory = false;
    (**(code **)(pFVar6->_padding_ + 0x48))(pFVar6);
  }
  FStructOnScope::~FStructOnScope(&local_38);
  lVar7 = (**(code **)(pFVar1->_padding_ + 0x18))(pFVar1);
  *(FRigVMExtendedExecuteContext **)(lVar7 + 0x108) = this;
  pFVar8 = GetPublicData<FRigVMExecuteContext>(this);
  pFVar8->NameCache = &this->NameCache;
  return;
}

// Reset @ 14a0a2e00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FRigVMExtendedExecuteContext::Reset(FRigVMExtendedExecuteContext *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  char cVar5;
  FRigVMMemoryStorageStruct *pFVar6;
  FRigVMExecuteContext *pFVar7;
  longlong *plVar8;
  FRigVMMemoryStorageStruct local_58;
  
  this->VMHash = 0;
  ResetExecutionState(this);
  pFVar6 = FRigVMMemoryStorageStruct::FRigVMMemoryStorageStruct(&local_58);
  FRigVMMemoryStorageStruct::operator=(&this->WorkMemoryStorage,pFVar6);
  FRigVMMemoryStorageStruct::~FRigVMMemoryStorageStruct(&local_58);
  pFVar6 = FRigVMMemoryStorageStruct::FRigVMMemoryStorageStruct(&local_58);
  FRigVMMemoryStorageStruct::operator=(&this->DebugMemoryStorage,pFVar6);
  FRigVMMemoryStorageStruct::~FRigVMMemoryStorageStruct(&local_58);
  (this->CurrentVMMemory).ArrayNum = 0;
  if ((this->CurrentVMMemory).ArrayMax < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FRigVMMemoryStorageStruct_*>_>
              (8,8,0,&(this->CurrentVMMemory).AllocatorInstance,0,&(this->CurrentVMMemory).ArrayMax)
    ;
  }
  if (*(longlong *)&this->OnExecutionReachedExitCallback != 0) {
    plVar3 = *(longlong **)&(this->OnExecutionReachedExitCallback).field_0x28;
    plVar8 = (longlong *)&(this->OnExecutionReachedExitCallback).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar8 = plVar3;
    }
    (**(code **)(*plVar8 + 0x10))();
    *(undefined8 *)&this->OnExecutionReachedExitCallback = 0;
  }
  (this->CachedMemoryHandles).ArrayNum = 0;
  if ((this->CachedMemoryHandles).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&(this->CachedMemoryHandles).AllocatorInstance,0,
               &(this->CachedMemoryHandles).ArrayMax);
  }
  piVar1 = &(this->LazyBranchExecuteState).ArrayMax;
  pFVar4 = (this->LazyBranchExecuteState).AllocatorInstance.Data;
  iVar2 = (this->LazyBranchExecuteState).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<FRigVMInstructionSetExecuteState,int>
              ((FRigVMInstructionSetExecuteState *)pFVar4,iVar2);
    (this->LazyBranchExecuteState).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,8,0,&(this->LazyBranchExecuteState).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FRigVMInstructionSetExecuteState,int>
              ((FRigVMInstructionSetExecuteState *)pFVar4,iVar2);
    (this->LazyBranchExecuteState).ArrayNum = 0;
  }
  (this->ExternalVariableRuntimeData).ArrayNum = 0;
  if ((this->ExternalVariableRuntimeData).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ExternalVariableRuntimeData).AllocatorInstance,0,
               &(this->ExternalVariableRuntimeData).ArrayMax);
  }
  cVar5 = (**(code **)((this->PublicDataScope)._padding_ + 0x38))();
  if (cVar5 != '\0') {
    pFVar7 = GetPublicData<FRigVMExecuteContext>(this);
    pFVar7->NumExecutions = 0;
  }
  this->ExecutingThreadId = -1;
  (this->EntriesBeingExecuted).ArrayNum = 0;
  if ((this->EntriesBeingExecuted).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->EntriesBeingExecuted).AllocatorInstance,0,
               &(this->EntriesBeingExecuted).ArrayMax);
  }
  this->CurrentExecuteResult = Failed;
  this->bCurrentlyRunningRootEntry = false;
  (this->CurrentEntryName).ComparisonIndex = 0;
  (this->CurrentEntryName).Number = 0;
  return;
}

// ResetExecutionState @ 14a0a3080

void __thiscall
FRigVMExtendedExecuteContext::ResetExecutionState(FRigVMExtendedExecuteContext *this)

{
  int *piVar1;
  TArray<FRigVMSlice,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  
  plVar8 = (longlong *)(**(code **)((this->PublicDataScope)._padding_ + 0x18))();
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x18))(plVar8);
    plVar8[0x21] = (longlong)this;
  }
  pTVar2 = &this->Slices;
  this->VM = (URigVM *)0x0;
  piVar1 = &(this->Slices).ArrayMax;
  (this->Slices).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  local_28 = 0;
  uStack_1c = 0;
  local_18 = 0xffffffff;
  uStack_20 = 0;
  if ((pFVar3 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 < pFVar3 + (longlong)*piVar1 * 0x14)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = (this->Slices).ArrayNum;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x414,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->Slices).ArrayNum = iVar7 + 1;
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  pFVar3 = pFVar4 + (longlong)iVar7 * 0x14;
  *(undefined8 *)pFVar3 = local_28;
  *(ulonglong *)(pFVar3 + 8) = CONCAT44(uStack_1c,uStack_20);
  *(undefined4 *)(pFVar4 + (longlong)iVar7 * 0x14 + 0x10) = local_18;
  piVar1 = &(this->SliceOffsets).ArrayMax;
  (this->SliceOffsets).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,0,&(this->SliceOffsets).AllocatorInstance,0,piVar1);
  }
  this->Factory = (FRigVMDispatchFactory *)0x0;
  return;
}

// FRigVMExtendedExecuteContext @ 14a18b510

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FRigVMExtendedExecuteContext * __thiscall
FRigVMExtendedExecuteContext::FRigVMExtendedExecuteContext
          (FRigVMExtendedExecuteContext *this,UScriptStruct *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UScriptStruct *pUVar4;
  FRigVMExtendedExecuteContext *pFVar5;
  FRigVMExecuteContext *pFVar6;
  
  this->_padding_ = (longlong)&___7FRigVMExtendedExecuteContext__6B_;
  this->VMHash = 0;
  FRigVMMemoryStorageStruct::FRigVMMemoryStorageStruct(&this->WorkMemoryStorage);
  FRigVMMemoryStorageStruct::FRigVMMemoryStorageStruct(&this->DebugMemoryStorage);
  FStructOnScope::FStructOnScope(&this->PublicDataScope,(UStruct *)param_1);
  (this->Slices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&(this->NameCache).NameCache = 0;
  *(undefined8 *)&(this->NameCache).NameCache.field_0x8 = 0;
  *(undefined8 *)&(this->NameCache).NameCache.field_0x20 = 0;
  (this->Slices).ArrayNum = 0;
  (this->Slices).ArrayMax = 0;
  (this->SliceOffsets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SliceOffsets).ArrayNum = 0;
  (this->SliceOffsets).ArrayMax = 0;
  this->VM = (URigVM *)0x0;
  this->Factory = (FRigVMDispatchFactory *)0x0;
  *(undefined4 *)&(this->NameCache).NameCache.field_0x28 = 0;
  *(undefined4 *)&(this->NameCache).NameCache.field_0x2c = 0x80;
  *(undefined4 *)&(this->NameCache).NameCache.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NameCache).NameCache.field_0x34 = 0;
  *(undefined8 *)&(this->NameCache).NameCache.field_0x40 = 0;
  *(undefined4 *)&(this->NameCache).NameCache.field_0x48 = 0;
  *(undefined8 *)&(this->NameCache).BoolCache = 0;
  *(undefined8 *)&(this->NameCache).BoolCache.field_0x8 = 0;
  *(undefined8 *)&(this->NameCache).BoolCache.field_0x20 = 0;
  *(undefined4 *)&(this->NameCache).BoolCache.field_0x28 = 0;
  *(undefined4 *)&(this->NameCache).BoolCache.field_0x2c = 0x80;
  *(undefined4 *)&(this->NameCache).BoolCache.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NameCache).BoolCache.field_0x34 = 0;
  *(undefined8 *)&(this->NameCache).BoolCache.field_0x40 = 0;
  *(undefined4 *)&(this->NameCache).BoolCache.field_0x48 = 0;
  (this->CachedMemoryHandles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedMemoryHandles).ArrayNum = 0;
  (this->CachedMemoryHandles).ArrayMax = 0;
  (this->EntriesBeingExecuted).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EntriesBeingExecuted).ArrayNum = 0;
  (this->EntriesBeingExecuted).ArrayMax = 0;
  this->ExecutingThreadId = -1;
  this->CurrentExecuteResult = Failed;
  (this->CurrentEntryName).ComparisonIndex = 0;
  (this->CurrentEntryName).Number = 0;
  this->bCurrentlyRunningRootEntry = false;
  (this->CurrentVMMemory).AllocatorInstance.SecondaryData =
       (ForElementType<FRigVMMemoryStorageStruct_*>)0x0;
  (this->CurrentVMMemory).ArrayNum = 0;
  (this->CurrentVMMemory).ArrayMax = 3;
  *(undefined8 *)&this->OnExecutionReachedExit = 0;
  *(undefined8 *)&(this->OnExecutionReachedExit).field_0x8 = 0;
  *(undefined8 *)&(this->OnExecutionReachedExit).field_0x10 = 0;
  *(undefined8 *)&(this->OnExecutionReachedExit).field_0x18 = 2;
  *(undefined8 *)&this->OnExecutionReachedExitCallback = 0;
  *(undefined8 *)&(this->OnExecutionReachedExitCallback).field_0x28 = 0;
  (this->LazyBranchExecuteState).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LazyBranchExecuteState).ArrayNum = 0;
  (this->LazyBranchExecuteState).ArrayMax = 0;
  (this->ExternalVariableRuntimeData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExternalVariableRuntimeData).ArrayNum = 0;
  (this->ExternalVariableRuntimeData).ArrayMax = 0;
  if (param_1 == (UScriptStruct *)0x0) {
    return this;
  }
  pUVar4 = FRigVMExecuteContext::StaticStruct();
  if (pUVar4 != (UScriptStruct *)0x0) {
    iVar1 = (int)pUVar4->_padding_;
    if (((int)param_1->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_
       )) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_14a18b6d9;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InExecuteContextStruct->IsChildOf(FRigVMExecuteContext::StaticStruct())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMExecuteContext.h"
                     ,0x268,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FRigVMExtendedExecuteContext *)(*pcVar2)();
    return pFVar5;
  }
LAB_14a18b6d9:
  Reset(this);
  pFVar6 = GetPublicData<FRigVMExecuteContext>(this);
  pFVar6->NameCache = &this->NameCache;
  return this;
}

// GetSlice @ 14a1ac860

FRigVMSlice * __thiscall FRigVMExtendedExecuteContext::GetSlice(FRigVMExtendedExecuteContext *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FRigVMSlice *pFVar5;
  uint uVar6;
  
  iVar1 = (this->Slices).ArrayNum;
  uVar6 = iVar1 - 1;
  uVar4 = 0;
  if ((int)uVar6 < iVar1) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FRigVMSlice *)(*pcVar2)();
      return pFVar5;
    }
  }
  return (FRigVMSlice *)
         ((this->Slices).AllocatorInstance.Data + (longlong)((this->Slices).ArrayNum + -1) * 0x14);
}

// IsValidArrayIndex @ 14a1aef10

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
FRigVMExtendedExecuteContext::IsValidArrayIndex
          (FRigVMExtendedExecuteContext *this,int *param_1,int param_2)

{
  TFunction<void___cdecl(FRigVMLogSettings_const_&,FRigVMExecuteContext_const_*,FString_const_&)>
  *pTVar1;
  code *pcVar2;
  int iVar3;
  FRigVMExecuteContext *pFVar4;
  undefined8 uVar5;
  ForAnyElementType FVar6;
  longlong *plVar7;
  int local_res10;
  undefined1 local_res14;
  FRigVMExecuteContext *local_res20;
  FString local_38;
  FString local_28;
  
  iVar3 = *param_1;
  if (iVar3 < 0) {
    iVar3 = iVar3 + param_2;
    *param_1 = iVar3;
    if (iVar3 < 0) goto LAB_14a1aef3e;
  }
  if (iVar3 < param_2) {
    return true;
  }
LAB_14a1aef3e:
  iVar3 = GetInstructionIndex(this);
  GetVMPathName(this,&local_28);
  pFVar4 = GetPublicData<FRigVMExecuteContext>(this);
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar6.Data = local_28.Data.AllocatorInstance.Data;
  }
  local_res10 = 1;
  local_res14 = 1;
  ::FString::PrintfImpl
            (&local_38,L"Array Index (%d) out of bounds (count %d).\n(\'%s\', instruction %d)");
  pTVar1 = (pFVar4->RuntimeSettings).LogFunction.Object;
  if (pTVar1 == (TFunction<void___cdecl(FRigVMLogSettings_const_&,FRigVMExecuteContext_const_*,FString_const_&)>
                 *)0x0) {
    if (local_res10 == 1) {
      if (1 < (byte)LogRigVM._0_1_) {
        UE::Logging::Private::BasicLog<2>
                  (&`public:_void___cdecl_FRigVMExecuteContext::Log(FRigVMLogSettings_const&___ptr64,FString_const&___ptr64)const___ptr64'
                    ::__l11::LOG_Static,(FLogCategoryBase *)&LogRigVM);
      }
    }
    else if (local_res10 == 3) {
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
    local_res20 = pFVar4;
    UE::Core::Private::Function::CheckCallable(*(void **)pTVar1);
    pcVar2 = *(code **)pTVar1;
    plVar7 = (longlong *)&pTVar1->field_0x10;
    if (*(longlong **)&pTVar1->field_0x28 != (longlong *)0x0) {
      plVar7 = *(longlong **)&pTVar1->field_0x28;
    }
    uVar5 = (**(code **)(*plVar7 + 8))();
    (*pcVar2)(uVar5,&local_res10,&local_res20,&local_38,FVar6.Data,iVar3);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return false;
}

// IsValidArraySize @ 14a1af0e0

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
FRigVMExtendedExecuteContext::IsValidArraySize(FRigVMExtendedExecuteContext *this,int param_1)

{
  TFunction<void___cdecl(FRigVMLogSettings_const_&,FRigVMExecuteContext_const_*,FString_const_&)>
  *pTVar1;
  code *pcVar2;
  int iVar3;
  FRigVMExecuteContext *pFVar4;
  undefined8 uVar5;
  longlong *plVar6;
  ForAnyElementType FVar7;
  int local_res18;
  undefined1 local_res1c;
  FRigVMExecuteContext *local_res20;
  FString local_48;
  FString local_38;
  
  if ((-1 < param_1) &&
     (pFVar4 = GetPublicData<FRigVMExecuteContext>(this),
     param_1 <= (pFVar4->RuntimeSettings).MaximumArraySize)) {
    return true;
  }
  iVar3 = GetInstructionIndex(this);
  GetVMPathName(this,&local_38);
  pFVar4 = GetPublicData<FRigVMExecuteContext>(this);
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar7.Data = local_38.Data.AllocatorInstance.Data;
  }
  GetPublicData<FRigVMExecuteContext>(this);
  local_res18 = 1;
  local_res1c = 1;
  ::FString::PrintfImpl
            (&local_48,
             L"Array Size (%d) larger than allowed maximum (%d).\nCheck VMRuntimeSettings in class settings.\n(\'%s\', Instruction %d)."
            );
  pTVar1 = (pFVar4->RuntimeSettings).LogFunction.Object;
  if (pTVar1 == (TFunction<void___cdecl(FRigVMLogSettings_const_&,FRigVMExecuteContext_const_*,FString_const_&)>
                 *)0x0) {
    if (local_res18 == 1) {
      if (1 < (byte)LogRigVM._0_1_) {
        UE::Logging::Private::BasicLog<2>
                  (&`public:_void___cdecl_FRigVMExecuteContext::Log(FRigVMLogSettings_const&___ptr64,FString_const&___ptr64)const___ptr64'
                    ::__l11::LOG_Static,(FLogCategoryBase *)&LogRigVM);
      }
    }
    else if (local_res18 == 3) {
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
    local_res20 = pFVar4;
    UE::Core::Private::Function::CheckCallable(*(void **)pTVar1);
    pcVar2 = *(code **)pTVar1;
    plVar6 = (longlong *)&pTVar1->field_0x10;
    if (*(longlong **)&pTVar1->field_0x28 != (longlong *)0x0) {
      plVar6 = *(longlong **)&pTVar1->field_0x28;
    }
    uVar5 = (**(code **)(*plVar6 + 8))();
    (*pcVar2)(uVar5,&local_res18,&local_res20,&local_48,FVar7.Data,iVar3);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return false;
}

