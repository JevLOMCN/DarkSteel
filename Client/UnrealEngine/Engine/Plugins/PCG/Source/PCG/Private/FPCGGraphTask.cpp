// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// StaticStruct @ 149c95850

UScriptStruct * __cdecl FPCGGraphTask::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGGraphTask.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGGraphTask.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGGraphTask,(UObject *)pUVar1,L"PCGGraphTask");
  }
  return Z_Registration_Info_UScriptStruct_FPCGGraphTask.OuterSingleton;
}

// FPCGGraphTask @ 149ca3510

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGGraphTask * __thiscall FPCGGraphTask::FPCGGraphTask(FPCGGraphTask *this,FPCGGraphTask *param_1)

{
  bool bVar1;
  UPCGSettings *pUVar2;
  ulong64 uVar3;
  undefined8 uVar4;
  IPCGGraphExecutionSource *pIVar5;
  
  (this->Inputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Inputs).AllocatorInstance.Data = (param_1->Inputs).AllocatorInstance.Data;
  (param_1->Inputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Inputs).ArrayNum = (param_1->Inputs).ArrayNum;
  (this->Inputs).ArrayMax = (param_1->Inputs).ArrayMax;
  (param_1->Inputs).ArrayNum = 0;
  (param_1->Inputs).ArrayMax = 0;
  this->ElementSource = param_1->ElementSource;
  *(undefined8 *)&(this->NodePtr).SoftObjectPtr = *(undefined8 *)&(param_1->NodePtr).SoftObjectPtr;
  uVar4 = *(undefined8 *)&(param_1->NodePtr).SoftObjectPtr.field_0x10;
  *(undefined8 *)&(this->NodePtr).SoftObjectPtr.field_0x8 =
       *(undefined8 *)&(param_1->NodePtr).SoftObjectPtr.field_0x8;
  *(undefined8 *)&(this->NodePtr).SoftObjectPtr.field_0x10 = uVar4;
  *(undefined8 *)&(this->NodePtr).SoftObjectPtr.field_0x18 = 0;
  *(undefined8 *)&(this->NodePtr).SoftObjectPtr.field_0x18 =
       *(undefined8 *)&(param_1->NodePtr).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(param_1->NodePtr).SoftObjectPtr.field_0x18 = 0;
  *(undefined4 *)&(this->NodePtr).SoftObjectPtr.field_0x20 =
       *(undefined4 *)&(param_1->NodePtr).SoftObjectPtr.field_0x20;
  *(undefined4 *)&(this->NodePtr).SoftObjectPtr.field_0x24 =
       *(undefined4 *)&(param_1->NodePtr).SoftObjectPtr.field_0x24;
  *(undefined8 *)&(param_1->NodePtr).SoftObjectPtr.field_0x20 = 0;
  pUVar2 = (param_1->CookedSettings).field0_0x0.DebugPtr;
  (this->CookedSettings).field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UPCGSettings *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  this->NodeId = param_1->NodeId;
  this->CompiledTaskId = param_1->CompiledTaskId;
  uVar3 = param_1->ParentId;
  (this->PinDependency).Expression.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ParentId = uVar3;
  (this->PinDependency).Expression.AllocatorInstance.Data =
       (param_1->PinDependency).Expression.AllocatorInstance.Data;
  (param_1->PinDependency).Expression.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PinDependency).Expression.ArrayNum = (param_1->PinDependency).Expression.ArrayNum;
  (this->PinDependency).Expression.ArrayMax = (param_1->PinDependency).Expression.ArrayMax;
  (param_1->PinDependency).Expression.ArrayNum = 0;
  (param_1->PinDependency).Expression.ArrayMax = 0;
  this->StackIndex = param_1->StackIndex;
  (this->Element).Object = (param_1->Element).Object;
  (this->Element).SharedReferenceCount.ReferenceController =
       (param_1->Element).SharedReferenceCount.ReferenceController;
  (param_1->Element).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (param_1->Element).Object = (IPCGElement *)0x0;
  pIVar5 = (param_1->ExecutionSource).InterfaceInstance;
  (this->ExecutionSource).ObjectInstance.WeakPtr = (param_1->ExecutionSource).ObjectInstance.WeakPtr
  ;
  (this->ExecutionSource).InterfaceInstance = pIVar5;
  this->Node = param_1->Node;
  this->Context = param_1->Context;
  (this->StackContext).Object = (param_1->StackContext).Object;
  (this->StackContext).SharedReferenceCount.ReferenceController =
       (param_1->StackContext).SharedReferenceCount.ReferenceController;
  (param_1->StackContext).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->StackContext).Object = (FPCGStackContext *)0x0;
  bVar1 = param_1->bHasDoneSetup;
  (this->TaskInput).TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->bHasDoneSetup = bVar1;
  (this->TaskInput).TaggedData.AllocatorInstance.Data =
       (param_1->TaskInput).TaggedData.AllocatorInstance.Data;
  (param_1->TaskInput).TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TaskInput).TaggedData.ArrayNum = (param_1->TaskInput).TaggedData.ArrayNum;
  (this->TaskInput).TaggedData.ArrayMax = (param_1->TaskInput).TaggedData.ArrayMax;
  (param_1->TaskInput).TaggedData.ArrayNum = 0;
  (param_1->TaskInput).TaggedData.ArrayMax = 0;
  (this->TaskInput).bCancelExecutionOnEmpty = (param_1->TaskInput).bCancelExecutionOnEmpty;
  bVar1 = (param_1->TaskInput).bCancelExecution;
  (this->TaskInput).DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TaskInput).bCancelExecution = bVar1;
  (this->TaskInput).DataCrcs.AllocatorInstance.Data =
       (param_1->TaskInput).DataCrcs.AllocatorInstance.Data;
  (param_1->TaskInput).DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TaskInput).DataCrcs.ArrayNum = (param_1->TaskInput).DataCrcs.ArrayNum;
  (this->TaskInput).DataCrcs.ArrayMax = (param_1->TaskInput).DataCrcs.ArrayMax;
  (param_1->TaskInput).DataCrcs.ArrayNum = 0;
  (param_1->TaskInput).DataCrcs.ArrayMax = 0;
  (this->TaskInput).InactiveOutputPinBitmask = (param_1->TaskInput).InactiveOutputPinBitmask;
  *(undefined8 *)&(this->CombineParamsAsyncObjects).Elements = 0;
  *(undefined8 *)&(this->CombineParamsAsyncObjects).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->CombineParamsAsyncObjects).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->CombineParamsAsyncObjects).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->CombineParamsAsyncObjects).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->CombineParamsAsyncObjects).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CombineParamsAsyncObjects).Elements.field_0x34 = 0;
  (this->CombineParamsAsyncObjects).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->CombineParamsAsyncObjects).HashSize = 0;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
  Move<TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>_>
            (&this->CombineParamsAsyncObjects,&param_1->CombineParamsAsyncObjects);
  this->bHasDonePrepareForExecute = param_1->bHasDonePrepareForExecute;
  this->bWasHookedToPreTask = param_1->bWasHookedToPreTask;
  return this;
}

// FPCGGraphTask @ 149ca3760

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGGraphTask * __thiscall FPCGGraphTask::FPCGGraphTask(FPCGGraphTask *this,FPCGGraphTask *param_1)

{
  int *piVar1;
  FPCGPinDependencyExpression *pFVar2;
  int iVar3;
  FPCGGraphTaskInput *pFVar4;
  UPCGSettings *pUVar5;
  FScriptContainerElement *_Src;
  TReferenceControllerBase<1> *pTVar6;
  IPCGGraphExecutionSource *pIVar7;
  
  piVar1 = &(this->Inputs).ArrayMax;
  (this->Inputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Inputs).ArrayNum;
  pFVar4 = (FPCGGraphTaskInput *)(param_1->Inputs).AllocatorInstance.Data;
  (this->Inputs).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,8,iVar3,0,(ForAnyElementType *)this,iVar3,piVar1);
    ConstructItems<FPCGGraphTaskInput,FPCGGraphTaskInput,int>
              ((this->Inputs).AllocatorInstance.Data,pFVar4,iVar3);
  }
  this->ElementSource = param_1->ElementSource;
  *(undefined8 *)&(this->NodePtr).SoftObjectPtr = *(undefined8 *)&(param_1->NodePtr).SoftObjectPtr;
  FSoftObjectPath::FSoftObjectPath
            ((FSoftObjectPath *)&(this->NodePtr).SoftObjectPtr.field_0x8,
             (FSoftObjectPath *)&(param_1->NodePtr).SoftObjectPtr.field_0x8);
  pUVar5 = (param_1->CookedSettings).field0_0x0.DebugPtr;
  (this->CookedSettings).field0_0x0.DebugPtr = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UPCGSettings *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  pFVar2 = &this->PinDependency;
  this->NodeId = param_1->NodeId;
  this->CompiledTaskId = param_1->CompiledTaskId;
  this->ParentId = param_1->ParentId;
  piVar1 = &(this->PinDependency).Expression.ArrayMax;
  (pFVar2->Expression).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->PinDependency).Expression.ArrayNum;
  _Src = (param_1->PinDependency).Expression.AllocatorInstance.Data;
  (this->PinDependency).Expression.ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar3,0,(ForAnyElementType *)pFVar2,iVar3,piVar1);
    memcpy((pFVar2->Expression).AllocatorInstance.Data,_Src,(longlong)iVar3 << 3);
  }
  this->StackIndex = param_1->StackIndex;
  (this->Element).Object = (param_1->Element).Object;
  pTVar6 = (param_1->Element).SharedReferenceCount.ReferenceController;
  (this->Element).SharedReferenceCount.ReferenceController = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  pIVar7 = (param_1->ExecutionSource).InterfaceInstance;
  (this->ExecutionSource).ObjectInstance.WeakPtr = (param_1->ExecutionSource).ObjectInstance.WeakPtr
  ;
  (this->ExecutionSource).InterfaceInstance = pIVar7;
  this->Node = param_1->Node;
  this->Context = param_1->Context;
  (this->StackContext).Object = (param_1->StackContext).Object;
  pTVar6 = (param_1->StackContext).SharedReferenceCount.ReferenceController;
  (this->StackContext).SharedReferenceCount.ReferenceController = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->bHasDoneSetup = param_1->bHasDoneSetup;
  FPCGDataCollection::FPCGDataCollection(&this->TaskInput,&param_1->TaskInput);
  *(undefined8 *)&(this->CombineParamsAsyncObjects).Elements = 0;
  *(undefined8 *)&(this->CombineParamsAsyncObjects).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->CombineParamsAsyncObjects).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->CombineParamsAsyncObjects).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->CombineParamsAsyncObjects).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->CombineParamsAsyncObjects).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CombineParamsAsyncObjects).Elements.field_0x34 = 0;
  (this->CombineParamsAsyncObjects).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->CombineParamsAsyncObjects).HashSize = 0;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::operator=
            (&this->CombineParamsAsyncObjects,&param_1->CombineParamsAsyncObjects);
  this->bHasDonePrepareForExecute = param_1->bHasDonePrepareForExecute;
  this->bWasHookedToPreTask = param_1->bWasHookedToPreTask;
  return this;
}

// FPCGGraphTask @ 149ca3980

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGGraphTask * __thiscall FPCGGraphTask::FPCGGraphTask(FPCGGraphTask *this)

{
  undefined1 *this_00;
  undefined8 local_res8;
  
  this->ElementSource = FromNode;
  (this->Inputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Inputs).ArrayNum = 0;
  (this->Inputs).ArrayMax = 0;
  this_00 = &(this->NodePtr).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->NodePtr).SoftObjectPtr = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->NodePtr).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->NodePtr).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->NodePtr).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  local_res8 = 0;
  FSoftObjectPtr::operator=(&(this->NodePtr).SoftObjectPtr,(FObjectPtr)&local_res8);
  (this->CookedSettings).field0_0x0.DebugPtr = (UPCGSettings *)0x0;
  this->NodeId = 0xffffffffffffffff;
  this->CompiledTaskId = 0xffffffffffffffff;
  this->ParentId = 0xffffffffffffffff;
  (this->PinDependency).Expression.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PinDependency).Expression.ArrayNum = 0;
  (this->PinDependency).Expression.ArrayMax = 0;
  this->StackIndex = -1;
  (this->Element).Object = (IPCGElement *)0x0;
  (this->Element).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->ExecutionSource).ObjectInstance.WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->ExecutionSource,(FObjectPtr)&local_res8);
  (this->ExecutionSource).InterfaceInstance = (IPCGGraphExecutionSource *)0x0;
  (this->StackContext).Object = (FPCGStackContext *)0x0;
  (this->StackContext).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->TaskInput).TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TaskInput).TaggedData.ArrayNum = 0;
  (this->TaskInput).TaggedData.ArrayMax = 0;
  (this->TaskInput).bCancelExecutionOnEmpty = false;
  (this->TaskInput).bCancelExecution = false;
  (this->TaskInput).DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TaskInput).DataCrcs.ArrayNum = 0;
  (this->TaskInput).DataCrcs.ArrayMax = 0;
  (this->TaskInput).InactiveOutputPinBitmask = 0;
  *(undefined8 *)&(this->CombineParamsAsyncObjects).Elements = 0;
  *(undefined8 *)&(this->CombineParamsAsyncObjects).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->CombineParamsAsyncObjects).Elements.field_0x20 = 0;
  this->Node = (UPCGNode *)0x0;
  this->Context = (FPCGContext *)0x0;
  this->bHasDoneSetup = false;
  *(undefined4 *)&(this->CombineParamsAsyncObjects).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->CombineParamsAsyncObjects).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->CombineParamsAsyncObjects).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->CombineParamsAsyncObjects).Elements.field_0x30 = 0xffffffff;
  (this->CombineParamsAsyncObjects).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->CombineParamsAsyncObjects).HashSize = 0;
  this->bHasDonePrepareForExecute = false;
  this->bWasHookedToPreTask = false;
  return this;
}

// ~FPCGGraphTask @ 149ca65f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FPCGGraphTask::~FPCGGraphTask(FPCGGraphTask *this)

{
  ForElementType<FSetElementId> FVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  
  (this->CombineParamsAsyncObjects).HashSize = 0;
  FVar1 = (this->CombineParamsAsyncObjects).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->CombineParamsAsyncObjects).Elements);
  pFVar2 = (this->TaskInput).DataCrcs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)(this->TaskInput).TaggedData.AllocatorInstance.Data,
             (this->TaskInput).TaggedData.ArrayNum);
  pFVar2 = (this->TaskInput).TaggedData.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->StackContext).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Element).SharedReferenceCount.ReferenceController);
  pFVar2 = (this->PinDependency).Expression.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pvVar3 = *(void **)&(this->NodePtr).SoftObjectPtr.field_0x18;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  DestructItems<FPCGGraphTaskInput,int>
            ((FPCGGraphTaskInput *)(this->Inputs).AllocatorInstance.Data,(this->Inputs).ArrayNum);
  pFVar2 = (this->Inputs).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// CanExecuteOnlyOnMainThread @ 149cb0c00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FPCGGraphTask::CanExecuteOnlyOnMainThread(FPCGGraphTask *this)

{
  IPCGElement *pIVar1;
  FPCGContext *pFVar2;
  char cVar3;
  
  pIVar1 = (this->Element).Object;
  if ((pIVar1 != (IPCGElement *)0x0) &&
     (cVar3 = (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1,this->Context), cVar3 != '\0')) {
    return true;
  }
  pFVar2 = this->Context;
  if ((pFVar2 != (FPCGContext *)0x0) && (pFVar2->bOverrideSettingsOnMainThread != false)) {
    return true;
  }
  return false;
}

// GetGraphExecutionTaskId @ 149cc8120

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ulong64 __thiscall FPCGGraphTask::GetGraphExecutionTaskId(FPCGGraphTask *this)

{
  FPCGStackContext *pFVar1;
  
  pFVar1 = (this->StackContext).Object;
  if (pFVar1 != (FPCGStackContext *)0x0) {
    return pFVar1->GraphExecutionTaskId;
  }
  return 0xffffffffffffffff;
}

// GetStack @ 149ccc3e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGStack * __thiscall FPCGGraphTask::GetStack(FPCGGraphTask *this)

{
  FPCGStackContext *this_00;
  FPCGStack *pFVar1;
  
  this_00 = (this->StackContext).Object;
  if ((this_00 != (FPCGStackContext *)0x0) && (this->StackIndex != -1)) {
    pFVar1 = FPCGStackContext::GetStack(this_00,this->StackIndex);
    return pFVar1;
  }
  return (FPCGStack *)0x0;
}

// GetStackHandle @ 149ccc4d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGStackHandle * __thiscall
FPCGGraphTask::GetStackHandle(FPCGGraphTask *this,FPCGStackHandle *__return_storage_ptr__)

{
  int iVar1;
  TSharedPtr<FPCGStackContext_const_,1> local_18;
  
  local_18.Object = (this->StackContext).Object;
  iVar1 = this->StackIndex;
  local_18.SharedReferenceCount.ReferenceController =
       (this->StackContext).SharedReferenceCount.ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FPCGStackHandle::FPCGStackHandle(__return_storage_ptr__,&local_18,iVar1);
  return __return_storage_ptr__;
}

// LoadCookedData @ 149ccd960

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FPCGGraphTask::LoadCookedData(FPCGGraphTask *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  UPCGNode *pUVar6;
  
  if (this->ElementSource != FromNode) {
    return;
  }
  pUVar4 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->NodePtr);
  if (pUVar4 == (UObject *)0x0) {
LAB_149ccd9b1:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NodePtr.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphTask.cpp"
                       ,0x6c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    pUVar5 = Z_Construct_UClass_UPCGNode_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) goto LAB_149ccd9b1;
  }
  pUVar6 = (UPCGNode *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->NodePtr);
  if (pUVar6 != (UPCGNode *)0x0) {
    pUVar5 = Z_Construct_UClass_UPCGNode_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) goto LAB_149ccda12;
  }
  pUVar6 = (UPCGNode *)0x0;
LAB_149ccda12:
  this->Node = pUVar6;
  return;
}

