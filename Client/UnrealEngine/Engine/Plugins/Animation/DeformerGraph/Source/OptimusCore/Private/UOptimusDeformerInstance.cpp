// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 76

// StaticClass @ 14e118c90

UClass * __cdecl UOptimusDeformerInstance::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusDeformerInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusDeformerInstance",
               &Z_Registration_Info_UClass_UOptimusDeformerInstance.InnerSingleton,
               StaticRegisterNativesUOptimusDeformerInstance,0x1b8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UOptimusDeformerInstance>,
               InternalVTableHelperCtorCaller<UOptimusDeformerInstance>,local_res8,
               UMeshDeformerInstance::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusDeformerInstance.InnerSingleton;
}

// UOptimusDeformerInstance @ 14e1599b0

UOptimusDeformerInstance * __thiscall
UOptimusDeformerInstance::UOptimusDeformerInstance
          (UOptimusDeformerInstance *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UMeshDeformerInstance::UMeshDeformerInstance((UMeshDeformerInstance *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusDeformerInstance__6B_;
  (this->MeshComponent).WeakPtr = (FWeakObjectPtr)0x0;
  (this->InstanceSettings).WeakPtr = (FWeakObjectPtr)0x0;
  (this->ComputeGraphExecInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComputeGraphExecInfos).ArrayNum = 0;
  (this->ComputeGraphExecInfos).ArrayMax = 0;
  *(undefined8 *)&this->ValueMap = 0;
  *(undefined8 *)&(this->ValueMap).field_0x8 = 0;
  *(undefined8 *)&(this->ValueMap).field_0x20 = 0;
  this->GraphSortPriorityOffset = 0;
  this->OutputBuffersFromPreviousInstances = None;
  *(undefined4 *)&(this->ValueMap).field_0x28 = 0;
  *(undefined4 *)&(this->ValueMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ValueMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ValueMap).field_0x34 = 0;
  *(undefined8 *)&(this->ValueMap).field_0x40 = 0;
  *(undefined4 *)&(this->ValueMap).field_0x48 = 0;
  *(undefined8 *)&this->DataInterfacePropertyOverrideMap = 0;
  *(undefined8 *)&(this->DataInterfacePropertyOverrideMap).field_0x8 = 0;
  *(undefined8 *)&(this->DataInterfacePropertyOverrideMap).field_0x20 = 0;
  *(undefined4 *)&(this->DataInterfacePropertyOverrideMap).field_0x28 = 0;
  *(undefined4 *)&(this->DataInterfacePropertyOverrideMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->DataInterfacePropertyOverrideMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DataInterfacePropertyOverrideMap).field_0x34 = 0;
  *(undefined8 *)&(this->DataInterfacePropertyOverrideMap).field_0x40 = 0;
  *(undefined4 *)&(this->DataInterfacePropertyOverrideMap).field_0x48 = 0;
  (this->WeakBoundComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WeakBoundComponents).ArrayNum = 0;
  (this->WeakBoundComponents).ArrayMax = 0;
  (this->WeakComponentSources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WeakComponentSources).ArrayNum = 0;
  (this->WeakComponentSources).ArrayMax = 0;
  *(undefined8 *)&(this->GraphsToRunOnNextTick).Elements = 0;
  *(undefined8 *)&(this->GraphsToRunOnNextTick).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->GraphsToRunOnNextTick).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->GraphsToRunOnNextTick).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->GraphsToRunOnNextTick).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->GraphsToRunOnNextTick).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GraphsToRunOnNextTick).Elements.field_0x34 = 0;
  (this->GraphsToRunOnNextTick).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->GraphsToRunOnNextTick).HashSize = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->GraphsToRunOnNextTickLock,4000);
  (this->BufferPool).Object = (FOptimusPersistentBufferPool *)0x0;
  (this->BufferPool).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->Scene = (FSceneInterface *)0x0;
  (this->WeakGeometryReadbackProvider).ObjectInstance.WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=
            ((FWeakObjectPtr *)&this->WeakGeometryReadbackProvider,(FObjectPtr)&local_res8);
  (this->WeakGeometryReadbackProvider).InterfaceInstance =
       (IOptimusDeformerGeometryReadbackProvider *)0x0;
  this->bCanBeActive = true;
  return this;
}

// UOptimusDeformerInstance @ 14e159b30

UOptimusDeformerInstance * __thiscall
UOptimusDeformerInstance::UOptimusDeformerInstance
          (UOptimusDeformerInstance *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UMeshDeformerInstance::UMeshDeformerInstance((UMeshDeformerInstance *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusDeformerInstance__6B_;
  (this->MeshComponent).WeakPtr = (FWeakObjectPtr)0x0;
  (this->InstanceSettings).WeakPtr = (FWeakObjectPtr)0x0;
  (this->ComputeGraphExecInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComputeGraphExecInfos).ArrayNum = 0;
  (this->ComputeGraphExecInfos).ArrayMax = 0;
  *(undefined8 *)&this->ValueMap = 0;
  *(undefined8 *)&(this->ValueMap).field_0x8 = 0;
  *(undefined8 *)&(this->ValueMap).field_0x20 = 0;
  this->GraphSortPriorityOffset = 0;
  this->OutputBuffersFromPreviousInstances = None;
  *(undefined4 *)&(this->ValueMap).field_0x28 = 0;
  *(undefined4 *)&(this->ValueMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ValueMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ValueMap).field_0x34 = 0;
  *(undefined8 *)&(this->ValueMap).field_0x40 = 0;
  *(undefined4 *)&(this->ValueMap).field_0x48 = 0;
  *(undefined8 *)&this->DataInterfacePropertyOverrideMap = 0;
  *(undefined8 *)&(this->DataInterfacePropertyOverrideMap).field_0x8 = 0;
  *(undefined8 *)&(this->DataInterfacePropertyOverrideMap).field_0x20 = 0;
  *(undefined4 *)&(this->DataInterfacePropertyOverrideMap).field_0x28 = 0;
  *(undefined4 *)&(this->DataInterfacePropertyOverrideMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->DataInterfacePropertyOverrideMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DataInterfacePropertyOverrideMap).field_0x34 = 0;
  *(undefined8 *)&(this->DataInterfacePropertyOverrideMap).field_0x40 = 0;
  *(undefined4 *)&(this->DataInterfacePropertyOverrideMap).field_0x48 = 0;
  (this->WeakBoundComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WeakBoundComponents).ArrayNum = 0;
  (this->WeakBoundComponents).ArrayMax = 0;
  (this->WeakComponentSources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WeakComponentSources).ArrayNum = 0;
  (this->WeakComponentSources).ArrayMax = 0;
  *(undefined8 *)&(this->GraphsToRunOnNextTick).Elements = 0;
  *(undefined8 *)&(this->GraphsToRunOnNextTick).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->GraphsToRunOnNextTick).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->GraphsToRunOnNextTick).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->GraphsToRunOnNextTick).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->GraphsToRunOnNextTick).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GraphsToRunOnNextTick).Elements.field_0x34 = 0;
  (this->GraphsToRunOnNextTick).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->GraphsToRunOnNextTick).HashSize = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->GraphsToRunOnNextTickLock,4000);
  (this->BufferPool).Object = (FOptimusPersistentBufferPool *)0x0;
  (this->BufferPool).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->Scene = (FSceneInterface *)0x0;
  (this->WeakGeometryReadbackProvider).ObjectInstance.WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=
            ((FWeakObjectPtr *)&this->WeakGeometryReadbackProvider,(FObjectPtr)&local_res8);
  (this->WeakGeometryReadbackProvider).InterfaceInstance =
       (IOptimusDeformerGeometryReadbackProvider *)0x0;
  this->bCanBeActive = true;
  return this;
}

// ~UOptimusDeformerInstance @ 14e1629d0

void __thiscall UOptimusDeformerInstance::~UOptimusDeformerInstance(UOptimusDeformerInstance *this)

{
  ForElementType<FSetElementId> FVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  
  this->_padding_ = (longlong)&___7UOptimusDeformerInstance__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->BufferPool).SharedReferenceCount.ReferenceController);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->GraphsToRunOnNextTickLock);
  (this->GraphsToRunOnNextTick).HashSize = 0;
  FVar1 = (this->GraphsToRunOnNextTick).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->GraphsToRunOnNextTick).Elements);
  pFVar2 = (this->WeakComponentSources).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->WeakBoundComponents).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->DataInterfacePropertyOverrideMap).field_0x48 = 0;
  pvVar3 = *(void **)&(this->DataInterfacePropertyOverrideMap).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DataInterfacePropertyOverrideMap);
  *(undefined4 *)&(this->ValueMap).field_0x48 = 0;
  pvVar3 = *(void **)&(this->ValueMap).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FOptimusValueIdentifier,FOptimusValueDescription>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FOptimusValueIdentifier,FOptimusValueDescription>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FOptimusValueIdentifier,FOptimusValueDescription>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ValueMap);
  DestructItems<FOptimusDeformerInstanceExecInfo,int>
            ((FOptimusDeformerInstanceExecInfo *)
             (this->ComputeGraphExecInfos).AllocatorInstance.Data,
             (this->ComputeGraphExecInfos).ArrayNum);
  pFVar2 = (this->ComputeGraphExecInfos).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UMeshDeformerInstance::~UMeshDeformerInstance((UMeshDeformerInstance *)this);
  return;
}

// AllocateResources @ 14e17e330

void __thiscall UOptimusDeformerInstance::AllocateResources(UOptimusDeformerInstance *this)

{
  return;
}

// EnqueueTriggerGraph @ 14e1a88f0

bool __thiscall
UOptimusDeformerInstance::EnqueueTriggerGraph(UOptimusDeformerInstance *this,FName param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FName *pFVar5;
  FName *pFVar6;
  undefined1 local_res8 [8];
  FName local_res18;
  
  iVar1 = (this->ComputeGraphExecInfos).ArrayNum;
  pFVar6 = (FName *)(this->ComputeGraphExecInfos).AllocatorInstance.Data;
  pFVar5 = pFVar6 + (longlong)iVar1 * 6;
  while( true ) {
    if ((this->ComputeGraphExecInfos).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FOptimusDeformerInstanceExecInfo,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar5) break;
    if ((pFVar6[1].ComparisonIndex.Value == 2) && (*pFVar6 == param_1)) {
      lpCriticalSection = &this->GraphsToRunOnNextTickLock;
      if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                (&this->GraphsToRunOnNextTick,&local_res18,(bool *)pFVar6);
      if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
      return true;
    }
    pFVar6 = pFVar6 + 6;
  }
  return false;
}

// EnqueueWork @ 14e1a92e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UOptimusDeformerInstance::EnqueueWork(UOptimusDeformerInstance *this,FEnqueueWorkDesc *param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode> *this_00;
  FWindowsRecursiveMutex *lpCriticalSection;
  EExectutionGroup EVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ForAnyElementType FVar12;
  int iVar13;
  bool bVar14;
  uint uVar15;
  int iVar16;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar17;
  ulonglong uVar18;
  code **ppcVar19;
  ForElementType<FSetElementId> FVar20;
  FScriptContainerElement *pFVar21;
  FScriptContainerElement *pFVar22;
  FName FVar23;
  byte bVar24;
  undefined1 auStackY_218 [32];
  byte local_1d8;
  undefined1 local_1d7;
  undefined1 local_1d6 [6];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1d0;
  ForAnyElementType local_1c8;
  int local_1c0;
  undefined1 local_1b8 [8];
  ForAnyElementType local_1b0;
  int local_1a8;
  uint local_1a0;
  FScriptContainerElement *local_198;
  FDestructionSentinel local_190;
  FDestructionSentinel local_178;
  FDestructionSentinel local_160;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_148;
  FReadAccessScope local_130;
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_118;
  undefined8 uStack_e0;
  ForElementType<FSetElementId> local_d8;
  undefined8 uStack_d0;
  code *local_c8 [2];
  code *local_b8 [3];
  code **local_a0;
  undefined1 local_98 [40];
  code **local_70;
  byte local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_218;
  EVar1 = param_1->ExecutionGroup;
  FVar23 = ComputeTaskExecutionGroup::EndOfFrameUpdate;
  if ((((EVar1 != ExecutionGroup_Default) &&
       (FVar23 = ComputeTaskExecutionGroup::Immediate, EVar1 != ExecutionGroup_Immediate)) &&
      (FVar23 = ComputeTaskExecutionGroup::EndOfFrameUpdate,
      EVar1 != ExecutionGroup_EndOfFrameUpdate)) &&
     (FVar23 = ComputeTaskExecutionGroup::BeginInitViews, EVar1 != ExecutionGroup_BeginInitViews)) {
    bVar14 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<3054348559278146070>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDeformerInstance.cpp"
                        ,0x216,"0");
    if (!bVar14) {
      return;
    }
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar24 = 0;
  local_1d8 = 0;
  if (this->bCanBeActive != false) {
    iVar16 = (this->ComputeGraphExecInfos).ArrayNum;
    pFVar21 = (this->ComputeGraphExecInfos).AllocatorInstance.Data;
    pFVar22 = pFVar21 + (longlong)iVar16 * 0x30;
    while( true ) {
      if ((this->ComputeGraphExecInfos).ArrayNum != iVar16) {
        local_1d7 = 0;
        `TCheckedPointerIterator<FOptimusDeformerInstanceExecInfo,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_1d7);
      }
      if (pFVar21 == pFVar22) {
        lpCriticalSection = &this->GraphsToRunOnNextTickLock;
        local_118._0_8_ = 0;
        local_118._8_8_ = 0;
        local_118._32_8_ = 0;
        local_118._40_8_ = 0x8000000000;
        local_118._48_8_ = 0xffffffff;
        local_d8 = (ForElementType<FSetElementId>)0x0;
        uStack_d0 = uStack_d0 & 0xffffffff00000000;
        if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Mutex",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                                ,0x1b,L""), bVar14)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        uVar9 = CONCAT44(local_118._20_4_,local_118._16_4_);
        uVar10 = CONCAT44(local_118._28_4_,local_118._24_4_);
        lVar2 = *(longlong *)&(this->GraphsToRunOnNextTick).Elements;
        uVar11 = *(undefined8 *)&(this->GraphsToRunOnNextTick).Elements.field_0x8;
        local_118._16_4_ = *(undefined4 *)&(this->GraphsToRunOnNextTick).Elements.field_0x10;
        local_118._20_4_ = *(undefined4 *)&(this->GraphsToRunOnNextTick).Elements.field_0x14;
        local_118._24_4_ = *(undefined4 *)&(this->GraphsToRunOnNextTick).Elements.field_0x18;
        local_118._28_4_ = *(undefined4 *)&(this->GraphsToRunOnNextTick).Elements.field_0x1c;
        uVar5 = *(undefined8 *)&(this->GraphsToRunOnNextTick).Elements.field_0x20;
        uVar6 = *(undefined8 *)&(this->GraphsToRunOnNextTick).Elements.field_0x28;
        uVar7 = *(undefined8 *)&(this->GraphsToRunOnNextTick).Elements.field_0x30;
        uVar8._0_1_ = (this->GraphsToRunOnNextTick).Hash.InlineData[0];
        uVar8._1_1_ = (this->GraphsToRunOnNextTick).Hash.InlineData[1];
        uVar8._2_1_ = (this->GraphsToRunOnNextTick).Hash.InlineData[2];
        uVar8._3_1_ = (this->GraphsToRunOnNextTick).Hash.InlineData[3];
        uVar8._4_4_ = (this->GraphsToRunOnNextTick).Hash._padding_;
        FVar20 = (this->GraphsToRunOnNextTick).Hash.SecondaryData;
        uVar18 = *(ulonglong *)&(this->GraphsToRunOnNextTick).HashSize;
        *(undefined8 *)&(this->GraphsToRunOnNextTick).Elements = local_118._0_8_;
        *(undefined8 *)&(this->GraphsToRunOnNextTick).Elements.field_0x8 = local_118._8_8_;
        *(undefined8 *)&(this->GraphsToRunOnNextTick).Elements.field_0x10 = uVar9;
        *(undefined8 *)&(this->GraphsToRunOnNextTick).Elements.field_0x18 = uVar10;
        *(undefined8 *)&(this->GraphsToRunOnNextTick).Elements.field_0x20 = local_118._32_8_;
        *(undefined8 *)&(this->GraphsToRunOnNextTick).Elements.field_0x28 = local_118._40_8_;
        *(undefined4 *)&(this->GraphsToRunOnNextTick).Elements.field_0x30 = local_118._48_4_;
        *(undefined4 *)&(this->GraphsToRunOnNextTick).Elements.field_0x34 = local_118._52_4_;
        *(undefined4 *)(this->GraphsToRunOnNextTick).Hash.InlineData = (undefined4)uStack_e0;
        (this->GraphsToRunOnNextTick).Hash._padding_ = uStack_e0._4_4_;
        *(undefined4 *)&(this->GraphsToRunOnNextTick).Hash.SecondaryData = local_d8._0_4_;
        *(undefined4 *)&(this->GraphsToRunOnNextTick).Hash.SecondaryData.field_0x4 = local_d8._4_4_;
        (this->GraphsToRunOnNextTick).HashSize = (int)uStack_d0;
        *(undefined4 *)&(this->GraphsToRunOnNextTick).field_0x4c = uStack_d0._4_4_;
        local_118._0_8_ = lVar2;
        local_118._8_8_ = uVar11;
        local_118._32_8_ = uVar5;
        local_118._40_8_ = uVar6;
        local_118._48_8_ = uVar7;
        uStack_e0 = uVar8;
        local_d8 = FVar20;
        uStack_d0 = uVar18;
        if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        }
        local_1a0 = (this->ComputeGraphExecInfos).ArrayNum;
        uVar18 = (ulonglong)(int)local_1a0;
        pFVar21 = (this->ComputeGraphExecInfos).AllocatorInstance.Data;
        local_198 = pFVar21 + uVar18 * 0x30;
        goto LAB_14e1a95a0;
      }
      bVar14 = UComputeGraph::HasKernelResourcesPendingShaderCompilation
                         (*(UComputeGraph **)(pFVar21 + 0x10));
      if (bVar14) break;
      pFVar21 = pFVar21 + 0x30;
    }
  }
LAB_14e1a984b:
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(&local_148,&param_1->FallbackDelegate);
  local_c8[0] = (code *)0x0;
  local_a0 = FMemory::Malloc(0x20,8);
  this_00 = (TDelegateBase<FNotThreadSafeDelegateMode> *)(local_a0 + 1);
  *local_a0 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`UOptimusDeformerInstance::EnqueueWork'::`28'::<lambda_1>,1,1>
                       ::_vftable_;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            (this_00,(TDelegateBase<FNotThreadSafeDelegateMode> *)&local_148);
  if (this_00 != (TDelegateBase<FNotThreadSafeDelegateMode> *)0x0) {
    local_c8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UOptimusDeformerInstance::EnqueueWork'::__l28::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this_01 = FRenderCommandList::GetInstanceTLS();
  if (this_01 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UOptimusDeformerInstance::EnqueueWork_::__l28::TSTR_ComputeFrameworkEnqueueFallback577>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_c8);
  }
  else {
    this_02 = FRenderCommandList::GetRenderThread(this_01);
    local_98._0_8_ = local_c8[0];
    local_70 = local_a0;
    local_a0 = (code **)0x0;
    local_98._16_8_ = local_b8[0];
    local_98._24_8_ = local_b8[1];
    local_98._32_8_ = local_b8[2];
    local_c8[0] = (code *)0x0;
    local_68 = 2;
    pFVar17 = (FRenderCommandTag *)
              TRenderCommandTag<`UOptimusDeformerInstance::EnqueueWork'::__l28::TSTR_ComputeFrameworkEnqueueFallback577>
              ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_98,pFVar17);
    uVar18 = (ulonglong)local_68;
    if ((2 < uVar18) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar14)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar18] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_98._0_8_ != (code *)0x0) {
        ppcVar19 = (code **)(local_98 + 0x10);
        if (local_70 != (code **)0x0) {
          ppcVar19 = local_70;
        }
        (**(code **)(*ppcVar19 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar18])(local_98);
    }
  }
  if (local_c8[0] != (code *)0x0) {
    ppcVar19 = local_c8 + 2;
    if (local_a0 != (code **)0x0) {
      ppcVar19 = local_a0;
    }
    (**(code **)(*ppcVar19 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_148);
  return;
LAB_14e1a95a0:
  pFVar22 = local_198;
  if ((this->ComputeGraphExecInfos).ArrayNum != (int)uVar18) {
    local_1d6[0] = 0;
    `TCheckedPointerIterator<FOptimusDeformerInstanceExecInfo,int,0>::operator!='::__l2::<lambda_1>
    ::operator()(local_1d6);
  }
  if (pFVar21 == pFVar22) goto LAB_14e1a980b;
  if (*(int *)(pFVar21 + 8) == 1) {
LAB_14e1a9635:
    iVar16 = this->GraphSortPriorityOffset;
    local_1b8 = (undefined1  [8])0x0;
    local_1b0.Data = (FScriptContainerElement *)0x0;
    local_1a8 = 0;
    if (&param_1->FallbackDelegate !=
        (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_1b8) {
      local_1d0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_1c8.Data = (FScriptContainerElement *)0x0;
      local_1c0 = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &param_1->FallbackDelegate,&local_130);
      if ((*(int *)&(param_1->FallbackDelegate).field_0x10 != 0) &&
         (plVar3 = *(longlong **)&(param_1->FallbackDelegate).field_0x8, plVar3 != (longlong *)0x0))
      {
        (**(code **)(*plVar3 + 0x50))(plVar3,&local_1d0);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_130);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_1d0,(FWriteAccessScope *)&local_190);
      iVar13 = local_1c0;
      FVar12.Data = local_1c8.Data;
      local_1c8.Data = (FScriptContainerElement *)0x0;
      local_1c0 = 0;
      if (local_190.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_190.Accessor,&local_190);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1b8,
                 (FWriteAccessScope *)&local_178);
      if (local_1a8 == 0) {
LAB_14e1a971a:
        if (local_1b0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b0.Data);
        }
      }
      else if (local_1b0.Data != (FScriptContainerElement *)0x0) {
        (*(code *)**(undefined8 **)local_1b0.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1b0,0,0,0x10);
        local_1a8 = 0;
        goto LAB_14e1a971a;
      }
      local_1b0.Data = FVar12.Data;
      local_1a8 = iVar13;
      if (local_178.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_178.Accessor,&local_178);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_1d0,(FWriteAccessScope *)&local_160);
      if ((local_1c0 != 0) && (local_1c8.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_1c8.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1c8,0,0,0x10);
        local_1c0 = 0;
      }
      if (local_160.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_160.Accessor,&local_160);
      }
      if (local_1c8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1d0.AccessDetector);
    }
    bVar14 = FComputeGraphInstance::EnqueueWork
                       ((FComputeGraphInstance *)(pFVar21 + 0x18),
                        *(UComputeGraph **)(pFVar21 + 0x10),param_1->Scene,FVar23,param_1->OwnerName
                        ,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_1b8,
                        (UObject *)this,(uchar)iVar16);
    bVar24 = local_1d8 | bVar14;
    local_1d8 = bVar24;
  }
  else {
    lVar2 = *(longlong *)pFVar21;
    uVar15 = ::GetTypeHash((FNameEntryId)(uint)lVar2);
    if (local_118._8_4_ != local_118._52_4_) {
      FVar20 = (ForElementType<FSetElementId>)&uStack_e0;
      if (local_d8 != (ForElementType<FSetElementId>)0x0) {
        FVar20 = local_d8;
      }
      iVar16 = *(int *)((longlong)FVar20 +
                       (ulonglong)((int)uStack_d0 - 1U & (int)((ulonglong)lVar2 >> 0x20) + uVar15) *
                       4);
      if (iVar16 != -1) {
        do {
          if (*(longlong *)(local_118._0_8_ + (longlong)iVar16 * 0x10) == lVar2) goto LAB_14e1a9635;
          iVar16 = *(int *)(local_118._0_8_ + 8 + (longlong)iVar16 * 0x10);
        } while (iVar16 != -1);
        pFVar21 = pFVar21 + 0x30;
        uVar18 = (ulonglong)local_1a0;
        goto LAB_14e1a95a0;
      }
    }
  }
  pFVar21 = pFVar21 + 0x30;
  uVar18 = (ulonglong)local_1a0;
  goto LAB_14e1a95a0;
LAB_14e1a980b:
  uStack_d0 = uStack_d0 & 0xffffffff00000000;
  if (local_d8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_d8);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_118);
  if (bVar24 != 0) {
    if (param_1->ExecutionGroup != ExecutionGroup_Immediate) {
      return;
    }
    ComputeFramework::FlushWork(param_1->Scene,FVar23);
    return;
  }
  goto LAB_14e1a984b;
}

// GetDataInterfacePropertyOverride @ 14e1c1d60

FOptimusValueContainerStruct * __thiscall
UOptimusDeformerInstance::GetDataInterfacePropertyOverride
          (UOptimusDeformerInstance *this,FOptimusValueContainerStruct *__return_storage_ptr__,
          UComputeDataInterface *param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FOptimusValueIdentifier *pFVar4;
  TTuple<FOptimusValueIdentifier,FOptimusValueDescription> *pTVar5;
  FOptimusValueContainerStruct *pFVar6;
  longlong lVar7;
  TMapBase<FName,FOptimusValueIdentifier,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOptimusValueIdentifier,0>_>
  *this_00;
  FWeakObjectPtr local_res8;
  UComputeDataInterface *local_res18 [2];
  FWeakObjectPtr local_38 [2];
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UComputeDataInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UComputeDataInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  local_38[0] = local_res8;
  iVar3 = TSet<TTuple<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>_>
                    ((TSet<TTuple<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,0>,FDefaultSetAllocator>
                      *)&this->DataInterfacePropertyOverrideMap,
                     local_res8.ObjectSerialNumber ^ local_res8.ObjectIndex,
                     (TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr> *)local_38);
  if (iVar3 != -1) {
    lVar7 = (longlong)iVar3 * 0x60 + *(longlong *)&this->DataInterfacePropertyOverrideMap;
    this_00 = (TMapBase<FName,FOptimusValueIdentifier,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOptimusValueIdentifier,0>_>
               *)(lVar7 + 8);
    if (lVar7 == 0) {
      this_00 = (TMapBase<FName,FOptimusValueIdentifier,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOptimusValueIdentifier,0>_>
                 *)0x0;
    }
    if ((this_00 !=
         (TMapBase<FName,FOptimusValueIdentifier,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOptimusValueIdentifier,0>_>
          *)0x0) &&
       (pFVar4 = TMapBase<FName,FOptimusValueIdentifier,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOptimusValueIdentifier,0>_>
                 ::Find(this_00,param_2), pFVar4 != (FOptimusValueIdentifier *)0x0)) {
      pTVar5 = TSet<TTuple<FOptimusValueIdentifier,FOptimusValueDescription>,TDefaultMapHashableKeyFuncs<FOptimusValueIdentifier,FOptimusValueDescription,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FOptimusValueIdentifier,FOptimusValueDescription>,TDefaultMapHashableKeyFuncs<FOptimusValueIdentifier,FOptimusValueDescription,0>,FDefaultSetAllocator>
                       *)&this->ValueMap,pFVar4);
      if ((pTVar5 == (TTuple<FOptimusValueIdentifier,FOptimusValueDescription> *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pair != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                             ,0x288,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FOptimusValueContainerStruct *)(*pcVar1)();
        return pFVar6;
      }
      (__return_storage_ptr__->Value).Value.ScriptStruct.field0_0x0.DebugPtr = (UScriptStruct *)0x0;
      (__return_storage_ptr__->Value).Value.StructMemory = (uchar *)0x0;
      FInstancedStruct::InitializeAs
                ((FInstancedStruct *)__return_storage_ptr__,*(UScriptStruct **)&pTVar5->field_0x48,
                 *(uchar **)&pTVar5->field_0x50);
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->Value).Value.ScriptStruct.field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  (__return_storage_ptr__->Value).Value.StructMemory = (uchar *)0x0;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetInstanceForSourceDeformer @ 14e1c8ce0

UMeshDeformerInstance * __thiscall
UOptimusDeformerInstance::GetInstanceForSourceDeformer(UOptimusDeformerInstance *this)

{
  return (UMeshDeformerInstance *)this;
}

// GetOutputBuffers @ 14e1cbc20

EMeshDeformerOutputBuffer __thiscall
UOptimusDeformerInstance::GetOutputBuffers(UOptimusDeformerInstance *this)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  UObjectBaseUtility *this_00;
  code *pcVar4;
  bool bVar5;
  EMeshDeformerOutputBuffer EVar6;
  EMeshDeformerOutputBuffer EVar7;
  uint uVar8;
  UClass *pUVar9;
  longlong *plVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  EMeshDeformerOutputBuffer EVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  
  local_res20 = (this->ComputeGraphExecInfos).ArrayNum;
  uVar11 = (ulonglong)(int)local_res20;
  EVar6 = None;
  pFVar15 = (this->ComputeGraphExecInfos).AllocatorInstance.Data;
  pFVar12 = pFVar15 + uVar11 * 0x30;
  while( true ) {
    if ((this->ComputeGraphExecInfos).ArrayNum != (int)uVar11) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FOptimusDeformerInstanceExecInfo_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar15 == pFVar12) break;
    if (*(longlong *)(pFVar15 + 0x10) != 0) {
      pUVar9 = UOptimusComputeGraph::StaticClass();
      bVar5 = FObjectPtr::IsA((FObjectPtr *)(pFVar15 + 0x10),pUVar9);
      if ((bVar5) && (lVar3 = *(longlong *)(pFVar15 + 0x10), lVar3 != 0)) {
        iVar1 = *(int *)(lVar3 + 0x50);
        EVar14 = None;
        lVar13 = *(longlong *)(lVar3 + 0x48);
        lVar16 = (longlong)iVar1 * 0x38 + lVar13;
        while( true ) {
          if (*(int *)(lVar3 + 0x50) != iVar1) {
            local_res18[0] = 0;
            `TCheckedPointerIterator<FComputeGraphEdge_const_,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(local_res18);
          }
          if (lVar13 == lVar16) break;
          if (*(char *)(lVar13 + 0x10) == '\0') {
            uVar2 = *(uint *)(lVar13 + 8);
            uVar8 = 0;
            if ((int)uVar2 < *(int *)(lVar3 + 0x40)) {
              uVar8 = ~uVar2 >> 0x1f;
            }
            if (uVar8 == 0) {
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar5) {
                pcVar4 = (code *)swi(3);
                EVar6 = (*pcVar4)();
                return EVar6;
              }
            }
            this_00 = *(UObjectBaseUtility **)
                       (*(longlong *)(lVar3 + 0x38) + (longlong)(int)uVar2 * 8);
            if (this_00 != (UObjectBaseUtility *)0x0) {
              pUVar9 = Z_Construct_UClass_UOptimusOutputBufferWriter_NoRegister();
              plVar10 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar9);
              if (plVar10 != (longlong *)0x0) {
                EVar7 = (**(code **)(*plVar10 + 0x10))(plVar10,*(undefined4 *)(lVar13 + 0xc));
                EVar14 = EVar14 | EVar7;
              }
            }
          }
          lVar13 = lVar13 + 0x38;
        }
        EVar6 = EVar6 | EVar14;
      }
    }
    pFVar15 = pFVar15 + 0x30;
    uVar11 = (ulonglong)local_res20;
  }
  return EVar6;
}

// GetPrivateStaticClass @ 14e1d59b0

UClass * __cdecl UOptimusDeformerInstance::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusDeformerInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusDeformerInstance",
               &Z_Registration_Info_UClass_UOptimusDeformerInstance.InnerSingleton,
               StaticRegisterNativesUOptimusDeformerInstance,0x1b8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UOptimusDeformerInstance>,
               InternalVTableHelperCtorCaller<UOptimusDeformerInstance>,local_res8,
               UMeshDeformerInstance::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusDeformerInstance.InnerSingleton;
}

// GetShaderValue @ 14e1e3810

FShaderValueContainer * __thiscall
UOptimusDeformerInstance::GetShaderValue
          (UOptimusDeformerInstance *this,FOptimusValueIdentifier *param_1)

{
  code *pcVar1;
  bool bVar2;
  TTuple<FOptimusValueIdentifier,FOptimusValueDescription> *pTVar3;
  FShaderValueContainer *pFVar4;
  
  pTVar3 = TSet<TTuple<FOptimusValueIdentifier,FOptimusValueDescription>,TDefaultMapHashableKeyFuncs<FOptimusValueIdentifier,FOptimusValueDescription,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FOptimusValueIdentifier,FOptimusValueDescription>,TDefaultMapHashableKeyFuncs<FOptimusValueIdentifier,FOptimusValueDescription,0>,FDefaultSetAllocator>
                   *)&this->ValueMap,param_1);
  if (pTVar3 != (TTuple<FOptimusValueIdentifier,FOptimusValueDescription> *)0x0) {
    return (FShaderValueContainer *)&pTVar3->field_0x58;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FShaderValueContainer *)(*pcVar1)();
    return pFVar4;
  }
  return (FShaderValueContainer *)&DAT_00000058;
}

// ReleaseResources @ 14e2116b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UOptimusDeformerInstance::ReleaseResources(UOptimusDeformerInstance *this)

{
  FSceneInterface *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FOptimusPersistentBufferPool *pFVar3;
  code *pcVar4;
  bool bVar5;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar6;
  code **ppcVar7;
  ulonglong uVar8;
  undefined1 auStack_b8 [32];
  code *local_98 [2];
  code *local_88 [3];
  code **local_70;
  code *local_68 [2];
  code *local_58 [3];
  code **local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pFVar1 = this->Scene;
  if ((pFVar1 != (FSceneInterface *)0x0) ||
     ((this->BufferPool).Object != (FOptimusPersistentBufferPool *)0x0)) {
    pTVar2 = (this->BufferPool).SharedReferenceCount.ReferenceController;
    pFVar3 = (this->BufferPool).Object;
    (this->BufferPool).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
    ;
    (this->BufferPool).Object = (FOptimusPersistentBufferPool *)0x0;
    local_98[0] = (code *)0x0;
    local_70 = FMemory::Malloc(0x28,8);
    local_70[1] = (code *)pFVar3;
    local_70[2] = (code *)pTVar2;
    *local_70 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`UOptimusDeformerInstance::ReleaseResources'::`5'::<lambda_1>,1,1>
                         ::_vftable_;
    local_70[3] = (code *)pFVar1;
    local_70[4] = (code *)this;
    if (local_70 != (code **)&DAT_fffffffffffffff8) {
      local_98[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UOptimusDeformerInstance::ReleaseResources'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UOptimusDeformerInstance::ReleaseResources_::__l5::TSTR_OptimusReleaseResources502>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_68[0] = local_98[0];
      local_40 = local_70;
      local_70 = (code **)0x0;
      local_58[0] = local_88[0];
      local_58[1] = local_88[1];
      local_58[2] = local_88[2];
      local_98[0] = (code *)0x0;
      local_38 = 2;
      pFVar6 = (FRenderCommandTag *)
               TRenderCommandTag<`UOptimusDeformerInstance::ReleaseResources'::__l5::TSTR_OptimusReleaseResources502>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_68,pFVar6);
      uVar8 = (ulonglong)local_38;
      if (2 < uVar8) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar8] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if (local_68[0] != (code *)0x0) {
          ppcVar7 = local_68 + 2;
          if (local_40 != (code **)0x0) {
            ppcVar7 = local_40;
          }
          (**(code **)(*ppcVar7 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar8])();
      }
    }
    if (local_98[0] != (code *)0x0) {
      ppcVar7 = local_98 + 2;
      if (local_70 != (code **)0x0) {
        ppcVar7 = local_70;
      }
      (**(code **)(*ppcVar7 + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  return;
}

// SetBoolArrayVariable @ 14e21bd50

bool __thiscall
UOptimusDeformerInstance::SetBoolArrayVariable
          (UOptimusDeformerInstance *this,FName param_1,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_2)

{
  bool bVar1;
  FFieldClass *pFVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  FName local_res8;
  FName local_res10;
  undefined1 local_38 [8];
  uint local_30;
  FString local_28;
  FString local_18;
  
  pFVar2 = FBoolProperty::StaticClass();
  local_res8 = pFVar2->Name;
  pFVar3 = ::FName::ToString(&local_res8,&local_18);
  ::FString::ConcatCF(&local_28,L"TArray<",pFVar3);
  ::FString::ConcatFC((FString *)local_38,&local_28,L">");
  pwVar4 = L"";
  if (local_30 != 0) {
    pwVar4 = (wchar_t *)CONCAT44(local_38._4_4_,local_38._0_4_);
  }
  ::FName::FName(&local_res10,pwVar4);
  if ((void *)CONCAT44(local_38._4_4_,local_38._0_4_) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_38._4_4_,local_38._0_4_));
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  local_38[0] = Variable;
  local_38._4_4_ = param_1.ComparisonIndex.Value;
  local_30 = param_1.Number;
  bVar1 = ::`anonymous_namespace'::SetValue<TArray<bool,TSizedDefaultAllocator<32>_>_>
                    (&this->ValueMap,(FOptimusValueIdentifier *)local_38,local_res10,param_2);
  return bVar1;
}

// SetBoolVariable @ 14e21be30

bool __thiscall
UOptimusDeformerInstance::SetBoolVariable(UOptimusDeformerInstance *this,FName param_1,bool param_2)

{
  bool bVar1;
  FFieldClass *pFVar2;
  bool local_res18 [16];
  FOptimusValueIdentifier local_18;
  
  local_res18[0] = param_2;
  pFVar2 = FBoolProperty::StaticClass();
  local_18.Type = Variable;
  local_18.Name = param_1;
  bVar1 = ::`anonymous_namespace'::SetValue<bool>
                    (&this->ValueMap,&local_18,pFVar2->Name,local_res18);
  return bVar1;
}

// SetCanBeActive @ 14e21bf20

void __thiscall
UOptimusDeformerInstance::SetCanBeActive(UOptimusDeformerInstance *this,bool param_1)

{
  this->bCanBeActive = param_1;
  return;
}

// SetConstantValueDirect @ 14e21cbc0

void __thiscall
UOptimusDeformerInstance::SetConstantValueDirect
          (UOptimusDeformerInstance *this,TSoftObjectPtr<UObject> *param_1,
          FOptimusValueContainerStruct *param_2)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  UObject *this_00;
  UClass *pUVar4;
  longlong *plVar5;
  FOptimusValueIdentifier *pFVar6;
  TTuple<FOptimusValueIdentifier,FOptimusValueDescription> *pTVar7;
  longlong *plVar8;
  FOptimusDataTypeRef *pFVar9;
  FShaderValueContainer *pFVar10;
  longlong *plVar11;
  FShaderValueContainer local_98;
  undefined1 local_78 [16];
  undefined1 local_68 [32];
  void *local_48;
  undefined1 local_38 [48];
  
  this_00 = TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)param_1);
  if ((this_00 == (UObject *)0x0) && (*(longlong *)&(param_1->SoftObjectPtr).field_0x8 != 0)) {
    FSoftObjectPath::TryLoad
              ((FSoftObjectPath *)&(param_1->SoftObjectPtr).field_0x8,
               (FUObjectSerializeContext *)0x0);
    this_00 = TPersistentObjectPtr<FSoftObjectPath>::Get
                        ((TPersistentObjectPtr<FSoftObjectPath> *)param_1);
  }
  if (this_00 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UOptimusValueProvider_NoRegister();
    plVar5 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar4);
    if (plVar5 != (longlong *)0x0) {
      pFVar6 = (FOptimusValueIdentifier *)(**(code **)(*plVar5 + 0x10))(plVar5,local_78);
      pTVar7 = TSet<TTuple<FOptimusValueIdentifier,FOptimusValueDescription>,TDefaultMapHashableKeyFuncs<FOptimusValueIdentifier,FOptimusValueDescription,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FOptimusValueIdentifier,FOptimusValueDescription>,TDefaultMapHashableKeyFuncs<FOptimusValueIdentifier,FOptimusValueDescription,0>,FDefaultSetAllocator>
                       *)&this->ValueMap,pFVar6);
      plVar11 = (longlong *)&pTVar7->field_0x10;
      if (pTVar7 == (TTuple<FOptimusValueIdentifier,FOptimusValueDescription> *)0x0) {
        plVar11 = (longlong *)0x0;
      }
      if (plVar11 != (longlong *)0x0) {
        plVar8 = (longlong *)(**(code **)(*plVar5 + 0x18))(plVar5,local_68);
        if ((*plVar11 == *plVar8) &&
           (bVar3 = FSoftObjectPath::operator==
                              ((FSoftObjectPath *)(plVar11 + 2),(FSoftObjectPath *)(plVar8 + 2)),
           bVar3)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (local_48 != (void *)0x0) {
          FMemory::Free(local_48);
        }
        if ((bVar3) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Description->DataType == ValueProvider->GetValueDataType()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDeformerInstance.cpp"
                               ,0x33e,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (((char)plVar11[6] == '\x01') &&
           ((FInstancedStruct *)(plVar11 + 7) != (FInstancedStruct *)param_2)) {
          FInstancedStruct::InitializeAs
                    ((FInstancedStruct *)(plVar11 + 7),
                     (param_2->Value).Value.ScriptStruct.field0_0x0.DebugPtr,
                     (param_2->Value).Value.StructMemory);
        }
        if ((char)plVar11[6] == '\x02') {
          pFVar9 = (FOptimusDataTypeRef *)(**(code **)(*plVar5 + 0x18))(plVar5,local_38);
          pFVar10 = FOptimusValueContainerStruct::GetShaderValue(param_2,&local_98,pFVar9);
          FShaderValueContainer::operator=((FShaderValueContainer *)(plVar11 + 9),pFVar10);
          DestructItems<FArrayShaderValue,int>
                    ((FArrayShaderValue *)local_98.ArrayList.AllocatorInstance.Data,
                     local_98.ArrayList.ArrayNum);
          if (local_98.ArrayList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.ArrayList.AllocatorInstance.Data);
          }
          if (local_98.ShaderValue.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.ShaderValue.AllocatorInstance.Data);
          }
        }
      }
    }
  }
  pvVar1 = *(void **)&(param_1->SoftObjectPtr).field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  return;
}

// SetFloatArrayVariable @ 14e21dfe0

bool __thiscall
UOptimusDeformerInstance::SetFloatArrayVariable
          (UOptimusDeformerInstance *this,FName param_1,
          TArray<double,TSizedDefaultAllocator<32>_> *param_2)

{
  bool bVar1;
  FFieldClass *pFVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  FName local_res8;
  FName local_res10;
  undefined1 local_38 [8];
  uint local_30;
  FString local_28;
  FString local_18;
  
  pFVar2 = FDoubleProperty::StaticClass();
  local_res8 = pFVar2->Name;
  pFVar3 = ::FName::ToString(&local_res8,&local_18);
  ::FString::ConcatCF(&local_28,L"TArray<",pFVar3);
  ::FString::ConcatFC((FString *)local_38,&local_28,L">");
  pwVar4 = L"";
  if (local_30 != 0) {
    pwVar4 = (wchar_t *)CONCAT44(local_38._4_4_,local_38._0_4_);
  }
  ::FName::FName(&local_res10,pwVar4);
  if ((void *)CONCAT44(local_38._4_4_,local_38._0_4_) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_38._4_4_,local_38._0_4_));
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  local_38[0] = Variable;
  local_38._4_4_ = param_1.ComparisonIndex.Value;
  local_30 = param_1.Number;
  bVar1 = ::`anonymous_namespace'::SetValue<TArray<double,TSizedDefaultAllocator<32>_>_>
                    (&this->ValueMap,(FOptimusValueIdentifier *)local_38,local_res10,param_2);
  return bVar1;
}

// SetFloatVariable @ 14e21e0c0

bool __thiscall
UOptimusDeformerInstance::SetFloatVariable
          (UOptimusDeformerInstance *this,FName param_1,double param_2)

{
  bool bVar1;
  FFieldClass *pFVar2;
  float local_res8 [2];
  double local_res18 [2];
  FOptimusValueIdentifier local_18;
  
  local_res18[0] = param_2;
  pFVar2 = FDoubleProperty::StaticClass();
  local_18.Type = Variable;
  local_18.Name = param_1;
  bVar1 = ::`anonymous_namespace'::SetValue<double>
                    (&this->ValueMap,&local_18,pFVar2->Name,local_res18);
  if (bVar1) {
    return true;
  }
  local_res8[0] = (float)local_res18[0];
  pFVar2 = FFloatProperty::StaticClass();
  local_18.Type = Variable;
  local_18.Name = param_1;
  bVar1 = ::`anonymous_namespace'::SetValue<float>
                    (&this->ValueMap,&local_18,pFVar2->Name,local_res8);
  return bVar1;
}

// SetInstanceSettings @ 14e21e2f0

void __thiscall
UOptimusDeformerInstance::SetInstanceSettings
          (UOptimusDeformerInstance *this,UOptimusDeformerInstanceSettings *param_1)

{
  UOptimusDeformerInstanceSettings *local_res8 [4];
  
  local_res8[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (param_1 != (UOptimusDeformerInstanceSettings *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->InstanceSettings).WeakPtr,(FObjectPtr)local_res8);
  return;
}

// SetInt2ArrayVariable @ 14e21e330

bool __thiscall
UOptimusDeformerInstance::SetInt2ArrayVariable
          (UOptimusDeformerInstance *this,FName param_1,
          TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  bool bVar2;
  UScriptStruct *pUVar3;
  UClass *pUVar4;
  undefined8 *puVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  undefined1 local_res8 [8];
  FName local_res10 [2];
  FName local_res20;
  undefined1 local_58 [8];
  uint local_50;
  FString local_48;
  FString local_38;
  
  pUVar3 = TBaseStructure<UE::Math::TIntPoint<int>_>::Get();
  if (pUVar3 != (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UClass_UUserDefinedStruct_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      (**(code **)(pUVar3->_padding_ + 0x380))(pUVar3,&local_38);
      Optimus::Private::GetTypeNameForGuid((FGuid *)local_res8);
      goto LAB_14e21e3dc;
    }
  }
  puVar5 = (undefined8 *)(**(code **)(pUVar3->_padding_ + 0x388))(pUVar3,&local_48,0);
  if (*(int *)(puVar5 + 1) == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)*puVar5;
  }
  ::FName::FName((FName *)local_res8,pwVar7);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
LAB_14e21e3dc:
  local_res10[0].ComparisonIndex.Value = local_res8._0_4_;
  local_res10[0].Number = local_res8._4_4_;
  pFVar6 = ::FName::ToString(local_res10,&local_38);
  ::FString::ConcatCF(&local_48,L"TArray<",pFVar6);
  ::FString::ConcatFC((FString *)local_58,&local_48,L">");
  pwVar7 = L"";
  if (local_50 != 0) {
    pwVar7 = (wchar_t *)CONCAT44(local_58._4_4_,local_58._0_4_);
  }
  ::FName::FName(&local_res20,pwVar7);
  if ((void *)CONCAT44(local_58._4_4_,local_58._0_4_) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_58._4_4_,local_58._0_4_));
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  local_58[0] = Variable;
  local_58._4_4_ = param_1.ComparisonIndex.Value;
  local_50 = param_1.Number;
  bVar2 = ::`anonymous_namespace'::
          SetValue<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_>
                    (&this->ValueMap,(FOptimusValueIdentifier *)local_58,local_res20,param_2);
  return bVar2;
}

// SetInt2Variable @ 14e21e4b0

bool __thiscall
UOptimusDeformerInstance::SetInt2Variable
          (UOptimusDeformerInstance *this,FName param_1,TIntPoint<int> *param_2)

{
  int iVar1;
  bool bVar2;
  UScriptStruct *pUVar3;
  UClass *pUVar4;
  undefined8 *puVar5;
  wchar_t *pwVar6;
  FName local_res8;
  FOptimusValueIdentifier local_18;
  
  pUVar3 = TBaseStructure<UE::Math::TIntPoint<int>_>::Get();
  if (pUVar3 != (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UClass_UUserDefinedStruct_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      (**(code **)(pUVar3->_padding_ + 0x380))(pUVar3,&local_18);
      Optimus::Private::GetTypeNameForGuid((FGuid *)&local_res8);
      goto LAB_14e21e55c;
    }
  }
  puVar5 = (undefined8 *)(**(code **)(pUVar3->_padding_ + 0x388))(pUVar3,&local_18,0);
  if (*(int *)(puVar5 + 1) == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)*puVar5;
  }
  ::FName::FName(&local_res8,pwVar6);
  if ((void *)CONCAT44(local_18.Name.ComparisonIndex.Value,local_18._0_4_) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_18.Name.ComparisonIndex.Value,local_18._0_4_));
  }
LAB_14e21e55c:
  local_18.Type = Variable;
  local_18.Name.ComparisonIndex = param_1.ComparisonIndex.Value;
  local_18.Name.Number = param_1.Number;
  bVar2 = ::`anonymous_namespace'::SetValue<UE::Math::TIntPoint<int>_>
                    (&this->ValueMap,&local_18,local_res8,param_2);
  return bVar2;
}

// SetInt3ArrayVariable @ 14e21e5a0

bool __thiscall
UOptimusDeformerInstance::SetInt3ArrayVariable
          (UOptimusDeformerInstance *this,FName param_1,
          TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  bool bVar2;
  UScriptStruct *pUVar3;
  UClass *pUVar4;
  undefined8 *puVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  undefined1 local_res8 [8];
  FName local_res10 [2];
  FName local_res20;
  undefined1 local_58 [8];
  uint local_50;
  FString local_48;
  FString local_38;
  
  pUVar3 = TBaseStructure<UE::Math::TIntVector3<int>_>::Get();
  if (pUVar3 != (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UClass_UUserDefinedStruct_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      (**(code **)(pUVar3->_padding_ + 0x380))(pUVar3,&local_38);
      Optimus::Private::GetTypeNameForGuid((FGuid *)local_res8);
      goto LAB_14e21e64c;
    }
  }
  puVar5 = (undefined8 *)(**(code **)(pUVar3->_padding_ + 0x388))(pUVar3,&local_48,0);
  if (*(int *)(puVar5 + 1) == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)*puVar5;
  }
  ::FName::FName((FName *)local_res8,pwVar7);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
LAB_14e21e64c:
  local_res10[0].ComparisonIndex.Value = local_res8._0_4_;
  local_res10[0].Number = local_res8._4_4_;
  pFVar6 = ::FName::ToString(local_res10,&local_38);
  ::FString::ConcatCF(&local_48,L"TArray<",pFVar6);
  ::FString::ConcatFC((FString *)local_58,&local_48,L">");
  pwVar7 = L"";
  if (local_50 != 0) {
    pwVar7 = (wchar_t *)CONCAT44(local_58._4_4_,local_58._0_4_);
  }
  ::FName::FName(&local_res20,pwVar7);
  if ((void *)CONCAT44(local_58._4_4_,local_58._0_4_) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_58._4_4_,local_58._0_4_));
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  local_58[0] = Variable;
  local_58._4_4_ = param_1.ComparisonIndex.Value;
  local_50 = param_1.Number;
  bVar2 = ::`anonymous_namespace'::
          SetValue<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>
                    (&this->ValueMap,(FOptimusValueIdentifier *)local_58,local_res20,param_2);
  return bVar2;
}

// SetInt3Variable @ 14e21e720

bool __thiscall
UOptimusDeformerInstance::SetInt3Variable
          (UOptimusDeformerInstance *this,FName param_1,TIntVector3<int> *param_2)

{
  int iVar1;
  bool bVar2;
  UScriptStruct *pUVar3;
  UClass *pUVar4;
  undefined8 *puVar5;
  wchar_t *pwVar6;
  FName local_res8;
  FOptimusValueIdentifier local_18;
  
  pUVar3 = TBaseStructure<UE::Math::TIntVector3<int>_>::Get();
  if (pUVar3 != (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UClass_UUserDefinedStruct_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      (**(code **)(pUVar3->_padding_ + 0x380))(pUVar3,&local_18);
      Optimus::Private::GetTypeNameForGuid((FGuid *)&local_res8);
      goto LAB_14e21e7cc;
    }
  }
  puVar5 = (undefined8 *)(**(code **)(pUVar3->_padding_ + 0x388))(pUVar3,&local_18,0);
  if (*(int *)(puVar5 + 1) == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)*puVar5;
  }
  ::FName::FName(&local_res8,pwVar6);
  if ((void *)CONCAT44(local_18.Name.ComparisonIndex.Value,local_18._0_4_) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_18.Name.ComparisonIndex.Value,local_18._0_4_));
  }
LAB_14e21e7cc:
  local_18.Type = Variable;
  local_18.Name.ComparisonIndex = param_1.ComparisonIndex.Value;
  local_18.Name.Number = param_1.Number;
  bVar2 = ::`anonymous_namespace'::SetValue<UE::Math::TIntVector3<int>_>
                    (&this->ValueMap,&local_18,local_res8,param_2);
  return bVar2;
}

// SetInt4ArrayVariable @ 14e21e810

bool __thiscall
UOptimusDeformerInstance::SetInt4ArrayVariable
          (UOptimusDeformerInstance *this,FName param_1,
          TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  bool bVar2;
  UScriptStruct *pUVar3;
  UClass *pUVar4;
  undefined8 *puVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  undefined1 local_res8 [8];
  FName local_res10 [2];
  FName local_res20;
  undefined1 local_58 [8];
  uint local_50;
  FString local_48;
  FString local_38;
  
  pUVar3 = TBaseStructure<UE::Math::TIntVector4<int>_>::Get();
  if (pUVar3 != (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UClass_UUserDefinedStruct_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      (**(code **)(pUVar3->_padding_ + 0x380))(pUVar3,&local_38);
      Optimus::Private::GetTypeNameForGuid((FGuid *)local_res8);
      goto LAB_14e21e8bc;
    }
  }
  puVar5 = (undefined8 *)(**(code **)(pUVar3->_padding_ + 0x388))(pUVar3,&local_48,0);
  if (*(int *)(puVar5 + 1) == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)*puVar5;
  }
  ::FName::FName((FName *)local_res8,pwVar7);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
LAB_14e21e8bc:
  local_res10[0].ComparisonIndex.Value = local_res8._0_4_;
  local_res10[0].Number = local_res8._4_4_;
  pFVar6 = ::FName::ToString(local_res10,&local_38);
  ::FString::ConcatCF(&local_48,L"TArray<",pFVar6);
  ::FString::ConcatFC((FString *)local_58,&local_48,L">");
  pwVar7 = L"";
  if (local_50 != 0) {
    pwVar7 = (wchar_t *)CONCAT44(local_58._4_4_,local_58._0_4_);
  }
  ::FName::FName(&local_res20,pwVar7);
  if ((void *)CONCAT44(local_58._4_4_,local_58._0_4_) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_58._4_4_,local_58._0_4_));
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  local_58[0] = Variable;
  local_58._4_4_ = param_1.ComparisonIndex.Value;
  local_50 = param_1.Number;
  bVar2 = ::`anonymous_namespace'::
          SetValue<TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>_>
                    (&this->ValueMap,(FOptimusValueIdentifier *)local_58,local_res20,param_2);
  return bVar2;
}

// SetInt4Variable @ 14e21e990

bool __thiscall
UOptimusDeformerInstance::SetInt4Variable
          (UOptimusDeformerInstance *this,FName param_1,TIntVector4<int> *param_2)

{
  int iVar1;
  bool bVar2;
  UScriptStruct *pUVar3;
  UClass *pUVar4;
  undefined8 *puVar5;
  wchar_t *pwVar6;
  FName local_res8;
  FOptimusValueIdentifier local_18;
  
  pUVar3 = TBaseStructure<UE::Math::TIntVector4<int>_>::Get();
  if (pUVar3 != (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UClass_UUserDefinedStruct_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      (**(code **)(pUVar3->_padding_ + 0x380))(pUVar3,&local_18);
      Optimus::Private::GetTypeNameForGuid((FGuid *)&local_res8);
      goto LAB_14e21ea3c;
    }
  }
  puVar5 = (undefined8 *)(**(code **)(pUVar3->_padding_ + 0x388))(pUVar3,&local_18,0);
  if (*(int *)(puVar5 + 1) == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)*puVar5;
  }
  ::FName::FName(&local_res8,pwVar6);
  if ((void *)CONCAT44(local_18.Name.ComparisonIndex.Value,local_18._0_4_) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_18.Name.ComparisonIndex.Value,local_18._0_4_));
  }
LAB_14e21ea3c:
  local_18.Type = Variable;
  local_18.Name.ComparisonIndex = param_1.ComparisonIndex.Value;
  local_18.Name.Number = param_1.Number;
  bVar2 = ::`anonymous_namespace'::SetValue<UE::Math::TIntVector4<int>_>
                    (&this->ValueMap,&local_18,local_res8,param_2);
  return bVar2;
}

// SetIntArrayVariable @ 14e21ea80

bool __thiscall
UOptimusDeformerInstance::SetIntArrayVariable
          (UOptimusDeformerInstance *this,FName param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  bool bVar1;
  FFieldClass *pFVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  FName local_res8;
  FName local_res10;
  undefined1 local_38 [8];
  uint local_30;
  FString local_28;
  FString local_18;
  
  pFVar2 = FIntProperty::StaticClass();
  local_res8 = pFVar2->Name;
  pFVar3 = ::FName::ToString(&local_res8,&local_18);
  ::FString::ConcatCF(&local_28,L"TArray<",pFVar3);
  ::FString::ConcatFC((FString *)local_38,&local_28,L">");
  pwVar4 = L"";
  if (local_30 != 0) {
    pwVar4 = (wchar_t *)CONCAT44(local_38._4_4_,local_38._0_4_);
  }
  ::FName::FName(&local_res10,pwVar4);
  if ((void *)CONCAT44(local_38._4_4_,local_38._0_4_) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_38._4_4_,local_38._0_4_));
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  local_38[0] = Variable;
  local_38._4_4_ = param_1.ComparisonIndex.Value;
  local_30 = param_1.Number;
  bVar1 = ::`anonymous_namespace'::SetValue<TArray<int,TSizedDefaultAllocator<32>_>_>
                    (&this->ValueMap,(FOptimusValueIdentifier *)local_38,local_res10,param_2);
  return bVar1;
}

// SetIntVariable @ 14e21eb60

bool __thiscall
UOptimusDeformerInstance::SetIntVariable(UOptimusDeformerInstance *this,FName param_1,int param_2)

{
  bool bVar1;
  FFieldClass *pFVar2;
  int local_res18 [4];
  FOptimusValueIdentifier local_18;
  
  local_res18[0] = param_2;
  pFVar2 = FIntProperty::StaticClass();
  local_18.Type = Variable;
  local_18.Name = param_1;
  bVar1 = ::`anonymous_namespace'::SetValue<int>(&this->ValueMap,&local_18,pFVar2->Name,local_res18)
  ;
  return bVar1;
}

// SetLinearColorArrayVariable @ 14e21ed10

bool __thiscall
UOptimusDeformerInstance::SetLinearColorArrayVariable
          (UOptimusDeformerInstance *this,FName param_1,
          TArray<FLinearColor,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  bool bVar2;
  UScriptStruct *pUVar3;
  UClass *pUVar4;
  undefined8 *puVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  undefined1 local_res8 [8];
  FName local_res10 [2];
  FName local_res20;
  undefined1 local_58 [8];
  uint local_50;
  FString local_48;
  FString local_38;
  
  pUVar3 = TBaseStructure<FLinearColor>::Get();
  if (pUVar3 != (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UClass_UUserDefinedStruct_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      (**(code **)(pUVar3->_padding_ + 0x380))(pUVar3,&local_38);
      Optimus::Private::GetTypeNameForGuid((FGuid *)local_res8);
      goto LAB_14e21edbc;
    }
  }
  puVar5 = (undefined8 *)(**(code **)(pUVar3->_padding_ + 0x388))(pUVar3,&local_48,0);
  if (*(int *)(puVar5 + 1) == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)*puVar5;
  }
  ::FName::FName((FName *)local_res8,pwVar7);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
LAB_14e21edbc:
  local_res10[0].ComparisonIndex.Value = local_res8._0_4_;
  local_res10[0].Number = local_res8._4_4_;
  pFVar6 = ::FName::ToString(local_res10,&local_38);
  ::FString::ConcatCF(&local_48,L"TArray<",pFVar6);
  ::FString::ConcatFC((FString *)local_58,&local_48,L">");
  pwVar7 = L"";
  if (local_50 != 0) {
    pwVar7 = (wchar_t *)CONCAT44(local_58._4_4_,local_58._0_4_);
  }
  ::FName::FName(&local_res20,pwVar7);
  if ((void *)CONCAT44(local_58._4_4_,local_58._0_4_) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_58._4_4_,local_58._0_4_));
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  local_58[0] = Variable;
  local_58._4_4_ = param_1.ComparisonIndex.Value;
  local_50 = param_1.Number;
  bVar2 = ::`anonymous_namespace'::SetValue<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>
                    (&this->ValueMap,(FOptimusValueIdentifier *)local_58,local_res20,param_2);
  return bVar2;
}

// SetLinearColorVariable @ 14e21ee90

bool __thiscall
UOptimusDeformerInstance::SetLinearColorVariable
          (UOptimusDeformerInstance *this,FName param_1,FLinearColor *param_2)

{
  int iVar1;
  bool bVar2;
  UScriptStruct *pUVar3;
  UClass *pUVar4;
  undefined8 *puVar5;
  wchar_t *pwVar6;
  FName local_res8;
  FOptimusValueIdentifier local_18;
  
  pUVar3 = TBaseStructure<FLinearColor>::Get();
  if (pUVar3 != (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UClass_UUserDefinedStruct_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      (**(code **)(pUVar3->_padding_ + 0x380))(pUVar3,&local_18);
      Optimus::Private::GetTypeNameForGuid((FGuid *)&local_res8);
      goto LAB_14e21ef3c;
    }
  }
  puVar5 = (undefined8 *)(**(code **)(pUVar3->_padding_ + 0x388))(pUVar3,&local_18,0);
  if (*(int *)(puVar5 + 1) == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)*puVar5;
  }
  ::FName::FName(&local_res8,pwVar6);
  if ((void *)CONCAT44(local_18.Name.ComparisonIndex.Value,local_18._0_4_) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_18.Name.ComparisonIndex.Value,local_18._0_4_));
  }
LAB_14e21ef3c:
  local_18.Type = Variable;
  local_18.Name.ComparisonIndex = param_1.ComparisonIndex.Value;
  local_18.Name.Number = param_1.Number;
  bVar2 = ::`anonymous_namespace'::SetValue<FLinearColor>
                    (&this->ValueMap,&local_18,local_res8,param_2);
  return bVar2;
}

// SetMeshComponent @ 14e21ef80

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
UOptimusDeformerInstance::SetMeshComponent(UOptimusDeformerInstance *this,UMeshComponent *param_1)

{
  code *pcVar1;
  bool bVar2;
  UActorComponent *this_00;
  FSceneInterface *pFVar3;
  UMeshComponent *local_res8;
  
  if (param_1 == (UMeshComponent *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InMeshComponent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDeformerInstance.cpp"
                       ,0x14c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->MeshComponent).WeakPtr,(FObjectPtr)&local_res8);
  this_00 = (UActorComponent *)FWeakObjectPtr::Get(&(this->MeshComponent).WeakPtr);
  pFVar3 = UActorComponent::GetScene(this_00);
  this->Scene = pFVar3;
  return;
}

// SetNameArrayVariable @ 14e21f0e0

bool __thiscall
UOptimusDeformerInstance::SetNameArrayVariable
          (UOptimusDeformerInstance *this,FName param_1,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_2)

{
  bool bVar1;
  FFieldClass *pFVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  FName local_res8;
  FName local_res10;
  undefined1 local_38 [8];
  uint local_30;
  FString local_28;
  FString local_18;
  
  pFVar2 = FNameProperty::StaticClass();
  local_res8 = pFVar2->Name;
  pFVar3 = ::FName::ToString(&local_res8,&local_18);
  ::FString::ConcatCF(&local_28,L"TArray<",pFVar3);
  ::FString::ConcatFC((FString *)local_38,&local_28,L">");
  pwVar4 = L"";
  if (local_30 != 0) {
    pwVar4 = (wchar_t *)CONCAT44(local_38._4_4_,local_38._0_4_);
  }
  ::FName::FName(&local_res10,pwVar4);
  if ((void *)CONCAT44(local_38._4_4_,local_38._0_4_) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_38._4_4_,local_38._0_4_));
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  local_38[0] = Variable;
  local_38._4_4_ = param_1.ComparisonIndex.Value;
  local_30 = param_1.Number;
  bVar1 = ::`anonymous_namespace'::SetValue<TArray<FName,TSizedDefaultAllocator<32>_>_>
                    (&this->ValueMap,(FOptimusValueIdentifier *)local_38,local_res10,param_2);
  return bVar1;
}

// SetNameVariable @ 14e21f1c0

bool __thiscall
UOptimusDeformerInstance::SetNameVariable
          (UOptimusDeformerInstance *this,FName param_1,FName *param_2)

{
  bool bVar1;
  FFieldClass *pFVar2;
  FOptimusValueIdentifier local_18;
  
  pFVar2 = FNameProperty::StaticClass();
  local_18.Type = Variable;
  local_18.Name = param_1;
  bVar1 = ::`anonymous_namespace'::SetValue<FName>(&this->ValueMap,&local_18,pFVar2->Name,param_2);
  return bVar1;
}

// SetQuatArrayVariable @ 14e220b40

bool __thiscall
UOptimusDeformerInstance::SetQuatArrayVariable
          (UOptimusDeformerInstance *this,FName param_1,
          TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  bool bVar2;
  UScriptStruct *pUVar3;
  UClass *pUVar4;
  undefined8 *puVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  undefined1 local_res8 [8];
  FName local_res10 [2];
  FName local_res20;
  undefined1 local_58 [8];
  uint local_50;
  FString local_48;
  FString local_38;
  
  pUVar3 = TBaseStructure<UE::Math::TQuat<double>_>::Get();
  if (pUVar3 != (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UClass_UUserDefinedStruct_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      (**(code **)(pUVar3->_padding_ + 0x380))(pUVar3,&local_38);
      Optimus::Private::GetTypeNameForGuid((FGuid *)local_res8);
      goto LAB_14e220bec;
    }
  }
  puVar5 = (undefined8 *)(**(code **)(pUVar3->_padding_ + 0x388))(pUVar3,&local_48,0);
  if (*(int *)(puVar5 + 1) == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)*puVar5;
  }
  ::FName::FName((FName *)local_res8,pwVar7);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
LAB_14e220bec:
  local_res10[0].ComparisonIndex.Value = local_res8._0_4_;
  local_res10[0].Number = local_res8._4_4_;
  pFVar6 = ::FName::ToString(local_res10,&local_38);
  ::FString::ConcatCF(&local_48,L"TArray<",pFVar6);
  ::FString::ConcatFC((FString *)local_58,&local_48,L">");
  pwVar7 = L"";
  if (local_50 != 0) {
    pwVar7 = (wchar_t *)CONCAT44(local_58._4_4_,local_58._0_4_);
  }
  ::FName::FName(&local_res20,pwVar7);
  if ((void *)CONCAT44(local_58._4_4_,local_58._0_4_) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_58._4_4_,local_58._0_4_));
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  local_58[0] = Variable;
  local_58._4_4_ = param_1.ComparisonIndex.Value;
  local_50 = param_1.Number;
  bVar2 = ::`anonymous_namespace'::
          SetValue<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_>
                    (&this->ValueMap,(FOptimusValueIdentifier *)local_58,local_res20,param_2);
  return bVar2;
}

// SetQuatVariable @ 14e220cc0

bool __thiscall
UOptimusDeformerInstance::SetQuatVariable
          (UOptimusDeformerInstance *this,FName param_1,TQuat<double> *param_2)

{
  int iVar1;
  bool bVar2;
  UScriptStruct *pUVar3;
  UClass *pUVar4;
  undefined8 *puVar5;
  wchar_t *pwVar6;
  FName local_res8;
  FOptimusValueIdentifier local_18;
  
  pUVar3 = TBaseStructure<UE::Math::TQuat<double>_>::Get();
  if (pUVar3 != (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UClass_UUserDefinedStruct_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      (**(code **)(pUVar3->_padding_ + 0x380))(pUVar3,&local_18);
      Optimus::Private::GetTypeNameForGuid((FGuid *)&local_res8);
      goto LAB_14e220d6c;
    }
  }
  puVar5 = (undefined8 *)(**(code **)(pUVar3->_padding_ + 0x388))(pUVar3,&local_18,0);
  if (*(int *)(puVar5 + 1) == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)*puVar5;
  }
  ::FName::FName(&local_res8,pwVar6);
  if ((void *)CONCAT44(local_18.Name.ComparisonIndex.Value,local_18._0_4_) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_18.Name.ComparisonIndex.Value,local_18._0_4_));
  }
LAB_14e220d6c:
  local_18.Type = Variable;
  local_18.Name.ComparisonIndex = param_1.ComparisonIndex.Value;
  local_18.Name.Number = param_1.Number;
  bVar2 = ::`anonymous_namespace'::SetValue<UE::Math::TQuat<double>_>
                    (&this->ValueMap,&local_18,local_res8,param_2);
  return bVar2;
}

// SetRotatorArrayVariable @ 14e2224e0

bool __thiscall
UOptimusDeformerInstance::SetRotatorArrayVariable
          (UOptimusDeformerInstance *this,FName param_1,
          TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  bool bVar2;
  UScriptStruct *pUVar3;
  UClass *pUVar4;
  undefined8 *puVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  undefined1 local_res8 [8];
  FName local_res10 [2];
  FName local_res20;
  undefined1 local_58 [8];
  uint local_50;
  FString local_48;
  FString local_38;
  
  pUVar3 = TBaseStructure<UE::Math::TRotator<double>_>::Get();
  if (pUVar3 != (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UClass_UUserDefinedStruct_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      (**(code **)(pUVar3->_padding_ + 0x380))(pUVar3,&local_38);
      Optimus::Private::GetTypeNameForGuid((FGuid *)local_res8);
      goto LAB_14e22258c;
    }
  }
  puVar5 = (undefined8 *)(**(code **)(pUVar3->_padding_ + 0x388))(pUVar3,&local_48,0);
  if (*(int *)(puVar5 + 1) == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)*puVar5;
  }
  ::FName::FName((FName *)local_res8,pwVar7);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
LAB_14e22258c:
  local_res10[0].ComparisonIndex.Value = local_res8._0_4_;
  local_res10[0].Number = local_res8._4_4_;
  pFVar6 = ::FName::ToString(local_res10,&local_38);
  ::FString::ConcatCF(&local_48,L"TArray<",pFVar6);
  ::FString::ConcatFC((FString *)local_58,&local_48,L">");
  pwVar7 = L"";
  if (local_50 != 0) {
    pwVar7 = (wchar_t *)CONCAT44(local_58._4_4_,local_58._0_4_);
  }
  ::FName::FName(&local_res20,pwVar7);
  if ((void *)CONCAT44(local_58._4_4_,local_58._0_4_) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_58._4_4_,local_58._0_4_));
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  local_58[0] = Variable;
  local_58._4_4_ = param_1.ComparisonIndex.Value;
  local_50 = param_1.Number;
  bVar2 = ::`anonymous_namespace'::
          SetValue<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
                    (&this->ValueMap,(FOptimusValueIdentifier *)local_58,local_res20,param_2);
  return bVar2;
}

// SetRotatorVariable @ 14e222660

bool __thiscall
UOptimusDeformerInstance::SetRotatorVariable
          (UOptimusDeformerInstance *this,FName param_1,TRotator<double> *param_2)

{
  int iVar1;
  bool bVar2;
  UScriptStruct *pUVar3;
  UClass *pUVar4;
  undefined8 *puVar5;
  wchar_t *pwVar6;
  FName local_res8;
  FOptimusValueIdentifier local_18;
  
  pUVar3 = TBaseStructure<UE::Math::TRotator<double>_>::Get();
  if (pUVar3 != (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UClass_UUserDefinedStruct_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      (**(code **)(pUVar3->_padding_ + 0x380))(pUVar3,&local_18);
      Optimus::Private::GetTypeNameForGuid((FGuid *)&local_res8);
      goto LAB_14e22270c;
    }
  }
  puVar5 = (undefined8 *)(**(code **)(pUVar3->_padding_ + 0x388))(pUVar3,&local_18,0);
  if (*(int *)(puVar5 + 1) == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)*puVar5;
  }
  ::FName::FName(&local_res8,pwVar6);
  if ((void *)CONCAT44(local_18.Name.ComparisonIndex.Value,local_18._0_4_) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_18.Name.ComparisonIndex.Value,local_18._0_4_));
  }
LAB_14e22270c:
  local_18.Type = Variable;
  local_18.Name.ComparisonIndex = param_1.ComparisonIndex.Value;
  local_18.Name.Number = param_1.Number;
  bVar2 = ::`anonymous_namespace'::SetValue<UE::Math::TRotator<double>_>
                    (&this->ValueMap,&local_18,local_res8,param_2);
  return bVar2;
}

// SetTransformArrayVariable @ 14e222b50

bool __thiscall
UOptimusDeformerInstance::SetTransformArrayVariable
          (UOptimusDeformerInstance *this,FName param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  bool bVar2;
  UScriptStruct *pUVar3;
  UClass *pUVar4;
  undefined8 *puVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  undefined1 local_res8 [8];
  FName local_res10 [2];
  FName local_res20;
  undefined1 local_58 [8];
  uint local_50;
  FString local_48;
  FString local_38;
  
  pUVar3 = TBaseStructure<UE::Math::TTransform<double>_>::Get();
  if (pUVar3 != (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UClass_UUserDefinedStruct_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      (**(code **)(pUVar3->_padding_ + 0x380))(pUVar3,&local_38);
      Optimus::Private::GetTypeNameForGuid((FGuid *)local_res8);
      goto LAB_14e222bfc;
    }
  }
  puVar5 = (undefined8 *)(**(code **)(pUVar3->_padding_ + 0x388))(pUVar3,&local_48,0);
  if (*(int *)(puVar5 + 1) == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)*puVar5;
  }
  ::FName::FName((FName *)local_res8,pwVar7);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
LAB_14e222bfc:
  local_res10[0].ComparisonIndex.Value = local_res8._0_4_;
  local_res10[0].Number = local_res8._4_4_;
  pFVar6 = ::FName::ToString(local_res10,&local_38);
  ::FString::ConcatCF(&local_48,L"TArray<",pFVar6);
  ::FString::ConcatFC((FString *)local_58,&local_48,L">");
  pwVar7 = L"";
  if (local_50 != 0) {
    pwVar7 = (wchar_t *)CONCAT44(local_58._4_4_,local_58._0_4_);
  }
  ::FName::FName(&local_res20,pwVar7);
  if ((void *)CONCAT44(local_58._4_4_,local_58._0_4_) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_58._4_4_,local_58._0_4_));
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  local_58[0] = Variable;
  local_58._4_4_ = param_1.ComparisonIndex.Value;
  local_50 = param_1.Number;
  bVar2 = ::`anonymous_namespace'::
          SetValue<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>
                    (&this->ValueMap,(FOptimusValueIdentifier *)local_58,local_res20,param_2);
  return bVar2;
}

// SetTransformVariable @ 14e222cd0

bool __thiscall
UOptimusDeformerInstance::SetTransformVariable
          (UOptimusDeformerInstance *this,FName param_1,TTransform<double> *param_2)

{
  int iVar1;
  bool bVar2;
  UScriptStruct *pUVar3;
  UClass *pUVar4;
  undefined8 *puVar5;
  wchar_t *pwVar6;
  FName local_res8;
  FOptimusValueIdentifier local_18;
  
  pUVar3 = TBaseStructure<UE::Math::TTransform<double>_>::Get();
  if (pUVar3 != (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UClass_UUserDefinedStruct_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      (**(code **)(pUVar3->_padding_ + 0x380))(pUVar3,&local_18);
      Optimus::Private::GetTypeNameForGuid((FGuid *)&local_res8);
      goto LAB_14e222d7c;
    }
  }
  puVar5 = (undefined8 *)(**(code **)(pUVar3->_padding_ + 0x388))(pUVar3,&local_18,0);
  if (*(int *)(puVar5 + 1) == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)*puVar5;
  }
  ::FName::FName(&local_res8,pwVar6);
  if ((void *)CONCAT44(local_18.Name.ComparisonIndex.Value,local_18._0_4_) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_18.Name.ComparisonIndex.Value,local_18._0_4_));
  }
LAB_14e222d7c:
  local_18.Type = Variable;
  local_18.Name.ComparisonIndex = param_1.ComparisonIndex.Value;
  local_18.Name.Number = param_1.Number;
  bVar2 = ::`anonymous_namespace'::SetValue<UE::Math::TTransform<double>_>
                    (&this->ValueMap,&local_18,local_res8,param_2);
  return bVar2;
}

// SetVector2ArrayVariable @ 14e223d00

bool __thiscall
UOptimusDeformerInstance::SetVector2ArrayVariable
          (UOptimusDeformerInstance *this,FName param_1,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  bool bVar2;
  UScriptStruct *pUVar3;
  UClass *pUVar4;
  undefined8 *puVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  undefined1 local_res8 [8];
  FName local_res10 [2];
  FName local_res20;
  undefined1 local_58 [8];
  uint local_50;
  FString local_48;
  FString local_38;
  
  pUVar3 = TBaseStructure<UE::Math::TVector2<double>_>::Get();
  if (pUVar3 != (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UClass_UUserDefinedStruct_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      (**(code **)(pUVar3->_padding_ + 0x380))(pUVar3,&local_38);
      Optimus::Private::GetTypeNameForGuid((FGuid *)local_res8);
      goto LAB_14e223dac;
    }
  }
  puVar5 = (undefined8 *)(**(code **)(pUVar3->_padding_ + 0x388))(pUVar3,&local_48,0);
  if (*(int *)(puVar5 + 1) == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)*puVar5;
  }
  ::FName::FName((FName *)local_res8,pwVar7);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
LAB_14e223dac:
  local_res10[0].ComparisonIndex.Value = local_res8._0_4_;
  local_res10[0].Number = local_res8._4_4_;
  pFVar6 = ::FName::ToString(local_res10,&local_38);
  ::FString::ConcatCF(&local_48,L"TArray<",pFVar6);
  ::FString::ConcatFC((FString *)local_58,&local_48,L">");
  pwVar7 = L"";
  if (local_50 != 0) {
    pwVar7 = (wchar_t *)CONCAT44(local_58._4_4_,local_58._0_4_);
  }
  ::FName::FName(&local_res20,pwVar7);
  if ((void *)CONCAT44(local_58._4_4_,local_58._0_4_) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_58._4_4_,local_58._0_4_));
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  local_58[0] = Variable;
  local_58._4_4_ = param_1.ComparisonIndex.Value;
  local_50 = param_1.Number;
  bVar2 = ::`anonymous_namespace'::
          SetValue<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
                    (&this->ValueMap,(FOptimusValueIdentifier *)local_58,local_res20,param_2);
  return bVar2;
}

// SetVector2Variable @ 14e223e80

bool __thiscall
UOptimusDeformerInstance::SetVector2Variable
          (UOptimusDeformerInstance *this,FName param_1,TVector2<double> *param_2)

{
  int iVar1;
  bool bVar2;
  UScriptStruct *pUVar3;
  UClass *pUVar4;
  undefined8 *puVar5;
  wchar_t *pwVar6;
  FName local_res8;
  FOptimusValueIdentifier local_18;
  
  pUVar3 = TBaseStructure<UE::Math::TVector2<double>_>::Get();
  if (pUVar3 != (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UClass_UUserDefinedStruct_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      (**(code **)(pUVar3->_padding_ + 0x380))(pUVar3,&local_18);
      Optimus::Private::GetTypeNameForGuid((FGuid *)&local_res8);
      goto LAB_14e223f2c;
    }
  }
  puVar5 = (undefined8 *)(**(code **)(pUVar3->_padding_ + 0x388))(pUVar3,&local_18,0);
  if (*(int *)(puVar5 + 1) == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)*puVar5;
  }
  ::FName::FName(&local_res8,pwVar6);
  if ((void *)CONCAT44(local_18.Name.ComparisonIndex.Value,local_18._0_4_) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_18.Name.ComparisonIndex.Value,local_18._0_4_));
  }
LAB_14e223f2c:
  local_18.Type = Variable;
  local_18.Name.ComparisonIndex = param_1.ComparisonIndex.Value;
  local_18.Name.Number = param_1.Number;
  bVar2 = ::`anonymous_namespace'::SetValue<UE::Math::TVector2<double>_>
                    (&this->ValueMap,&local_18,local_res8,param_2);
  return bVar2;
}

// SetVector4ArrayVariable @ 14e223f70

bool __thiscall
UOptimusDeformerInstance::SetVector4ArrayVariable
          (UOptimusDeformerInstance *this,FName param_1,
          TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  bool bVar2;
  UScriptStruct *pUVar3;
  UClass *pUVar4;
  undefined8 *puVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  undefined1 local_res8 [8];
  FName local_res10 [2];
  FName local_res20;
  undefined1 local_58 [8];
  uint local_50;
  FString local_48;
  FString local_38;
  
  pUVar3 = TBaseStructure<UE::Math::TVector4<double>_>::Get();
  if (pUVar3 != (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UClass_UUserDefinedStruct_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      (**(code **)(pUVar3->_padding_ + 0x380))(pUVar3,&local_38);
      Optimus::Private::GetTypeNameForGuid((FGuid *)local_res8);
      goto LAB_14e22401c;
    }
  }
  puVar5 = (undefined8 *)(**(code **)(pUVar3->_padding_ + 0x388))(pUVar3,&local_48,0);
  if (*(int *)(puVar5 + 1) == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)*puVar5;
  }
  ::FName::FName((FName *)local_res8,pwVar7);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
LAB_14e22401c:
  local_res10[0].ComparisonIndex.Value = local_res8._0_4_;
  local_res10[0].Number = local_res8._4_4_;
  pFVar6 = ::FName::ToString(local_res10,&local_38);
  ::FString::ConcatCF(&local_48,L"TArray<",pFVar6);
  ::FString::ConcatFC((FString *)local_58,&local_48,L">");
  pwVar7 = L"";
  if (local_50 != 0) {
    pwVar7 = (wchar_t *)CONCAT44(local_58._4_4_,local_58._0_4_);
  }
  ::FName::FName(&local_res20,pwVar7);
  if ((void *)CONCAT44(local_58._4_4_,local_58._0_4_) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_58._4_4_,local_58._0_4_));
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  local_58[0] = Variable;
  local_58._4_4_ = param_1.ComparisonIndex.Value;
  local_50 = param_1.Number;
  bVar2 = ::`anonymous_namespace'::
          SetValue<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>
                    (&this->ValueMap,(FOptimusValueIdentifier *)local_58,local_res20,param_2);
  return bVar2;
}

// SetVector4Variable @ 14e2240f0

bool __thiscall
UOptimusDeformerInstance::SetVector4Variable
          (UOptimusDeformerInstance *this,FName param_1,TVector4<double> *param_2)

{
  int iVar1;
  bool bVar2;
  UScriptStruct *pUVar3;
  UClass *pUVar4;
  undefined8 *puVar5;
  wchar_t *pwVar6;
  FName local_res8;
  FOptimusValueIdentifier local_18;
  
  pUVar3 = TBaseStructure<UE::Math::TVector4<double>_>::Get();
  if (pUVar3 != (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UClass_UUserDefinedStruct_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      (**(code **)(pUVar3->_padding_ + 0x380))(pUVar3,&local_18);
      Optimus::Private::GetTypeNameForGuid((FGuid *)&local_res8);
      goto LAB_14e22419c;
    }
  }
  puVar5 = (undefined8 *)(**(code **)(pUVar3->_padding_ + 0x388))(pUVar3,&local_18,0);
  if (*(int *)(puVar5 + 1) == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)*puVar5;
  }
  ::FName::FName(&local_res8,pwVar6);
  if ((void *)CONCAT44(local_18.Name.ComparisonIndex.Value,local_18._0_4_) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_18.Name.ComparisonIndex.Value,local_18._0_4_));
  }
LAB_14e22419c:
  local_18.Type = Variable;
  local_18.Name.ComparisonIndex = param_1.ComparisonIndex.Value;
  local_18.Name.Number = param_1.Number;
  bVar2 = ::`anonymous_namespace'::SetValue<UE::Math::TVector4<double>_>
                    (&this->ValueMap,&local_18,local_res8,param_2);
  return bVar2;
}

// SetVectorArrayVariable @ 14e2241e0

bool __thiscall
UOptimusDeformerInstance::SetVectorArrayVariable
          (UOptimusDeformerInstance *this,FName param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  bool bVar2;
  UScriptStruct *pUVar3;
  UClass *pUVar4;
  undefined8 *puVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  undefined1 local_res8 [8];
  FName local_res10 [2];
  FName local_res20;
  undefined1 local_58 [8];
  uint local_50;
  FString local_48;
  FString local_38;
  
  pUVar3 = TBaseStructure<UE::Math::TVector<double>_>::Get();
  if (pUVar3 != (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UClass_UUserDefinedStruct_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      (**(code **)(pUVar3->_padding_ + 0x380))(pUVar3,&local_38);
      Optimus::Private::GetTypeNameForGuid((FGuid *)local_res8);
      goto LAB_14e22428c;
    }
  }
  puVar5 = (undefined8 *)(**(code **)(pUVar3->_padding_ + 0x388))(pUVar3,&local_48,0);
  if (*(int *)(puVar5 + 1) == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)*puVar5;
  }
  ::FName::FName((FName *)local_res8,pwVar7);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
LAB_14e22428c:
  local_res10[0].ComparisonIndex.Value = local_res8._0_4_;
  local_res10[0].Number = local_res8._4_4_;
  pFVar6 = ::FName::ToString(local_res10,&local_38);
  ::FString::ConcatCF(&local_48,L"TArray<",pFVar6);
  ::FString::ConcatFC((FString *)local_58,&local_48,L">");
  pwVar7 = L"";
  if (local_50 != 0) {
    pwVar7 = (wchar_t *)CONCAT44(local_58._4_4_,local_58._0_4_);
  }
  ::FName::FName(&local_res20,pwVar7);
  if ((void *)CONCAT44(local_58._4_4_,local_58._0_4_) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_58._4_4_,local_58._0_4_));
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  local_58[0] = Variable;
  local_58._4_4_ = param_1.ComparisonIndex.Value;
  local_50 = param_1.Number;
  bVar2 = ::`anonymous_namespace'::
          SetValue<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
                    (&this->ValueMap,(FOptimusValueIdentifier *)local_58,local_res20,param_2);
  return bVar2;
}

// SetVectorVariable @ 14e224360

bool __thiscall
UOptimusDeformerInstance::SetVectorVariable
          (UOptimusDeformerInstance *this,FName param_1,TVector<double> *param_2)

{
  int iVar1;
  bool bVar2;
  UScriptStruct *pUVar3;
  UClass *pUVar4;
  undefined8 *puVar5;
  wchar_t *pwVar6;
  FName local_res8;
  FOptimusValueIdentifier local_18;
  
  pUVar3 = TBaseStructure<UE::Math::TVector<double>_>::Get();
  if (pUVar3 != (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UClass_UUserDefinedStruct_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      (**(code **)(pUVar3->_padding_ + 0x380))(pUVar3,&local_18);
      Optimus::Private::GetTypeNameForGuid((FGuid *)&local_res8);
      goto LAB_14e22440c;
    }
  }
  puVar5 = (undefined8 *)(**(code **)(pUVar3->_padding_ + 0x388))(pUVar3,&local_18,0);
  if (*(int *)(puVar5 + 1) == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)*puVar5;
  }
  ::FName::FName(&local_res8,pwVar6);
  if ((void *)CONCAT44(local_18.Name.ComparisonIndex.Value,local_18._0_4_) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_18.Name.ComparisonIndex.Value,local_18._0_4_));
  }
LAB_14e22440c:
  local_18.Type = Variable;
  local_18.Name.ComparisonIndex = param_1.ComparisonIndex.Value;
  local_18.Name.Number = param_1.Number;
  bVar2 = ::`anonymous_namespace'::SetValue<UE::Math::TVector<double>_>
                    (&this->ValueMap,&local_18,local_res8,param_2);
  return bVar2;
}

// SetupFromDeformer @ 14e224450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
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
UOptimusDeformerInstance::SetupFromDeformer
          (UOptimusDeformerInstance *this,UOptimusDeformer *param_1)

{
  TMap<FOptimusValueIdentifier,FOptimusValueDescription,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusValueIdentifier,FOptimusValueDescription,0>_>
  *pTVar1;
  FScriptContainerElement *pFVar2;
  undefined8 *puVar3;
  FWeakObjectPtr *pFVar4;
  UOptimusComponentSourceBindingContainer *pUVar5;
  FOptimusDeformerInstanceExecInfo *pFVar6;
  code *pcVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  UOptimusDeformerInstanceSettings *this_00;
  UObject *pUVar12;
  UClass *pUVar13;
  UMeshComponent *pUVar14;
  UOptimusComponentSource *pUVar15;
  TReferenceControllerBase<1> *pTVar16;
  longlong *plVar17;
  UActorComponent *this_01;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  ForAnyElementType FVar21;
  FOptimusPersistentBufferPool *pFVar22;
  UOptimusDeformer *pUVar23;
  undefined8 *puVar24;
  TArray<TWeakObjectPtr<UActorComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar25;
  TArray<TWeakObjectPtr<UOptimusComponentSource_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
  *pTVar26;
  ulonglong uVar27;
  UOptimusDeformerInstance *pUVar28;
  TArray<FOptimusDeformerInstanceExecInfo,TSizedDefaultAllocator<32>_> *pTVar29;
  FScriptContainerElement *pFVar30;
  int *piVar31;
  undefined1 auStackY_1b8 [32];
  undefined1 local_168;
  undefined1 local_167;
  undefined1 local_166;
  char local_165;
  FWeakObjectPtr local_164;
  FWeakObjectPtr local_15c;
  UOptimusDeformerInstance *local_150;
  uint local_148;
  TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> local_140;
  UOptimusDeformer *local_130;
  FOptimusPersistentBufferPool *local_128;
  FSharedReferencer<1> FStack_120;
  FWeakObjectPtr *local_118;
  FTopLevelAssetPath local_110;
  FName local_100;
  UObject *local_f8;
  UOptimusComponentSource *local_f0;
  UObject *local_e8;
  UObject *local_e0;
  FOptimusPersistentBufferPool *local_d8;
  TReferenceControllerBase<1> *local_d0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  local_150 = this;
  local_130 = param_1;
  local_165 = (**(code **)(this->_padding_ + 0x2c8))();
  (**(code **)(this->_padding_ + 0x2b8))(this);
  local_140.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_140.ArrayNum = 0;
  local_140.ArrayMax = 0;
  this_00 = (UOptimusDeformerInstanceSettings *)
            FWeakObjectPtr::Get(&(this->InstanceSettings).WeakPtr);
  if (this_00 == (UOptimusDeformerInstanceSettings *)0x0) {
    pUVar12 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar12,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar13 = UOptimusDeformerInstanceSettings::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_c8,pUVar13);
    local_c8._8_8_ = pUVar12;
    this_00 = (UOptimusDeformerInstanceSettings *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
    if (local_c8._64_8_ != 0) {
      plVar17 = (longlong *)(local_c8 + 0x50);
      if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
        plVar17 = (longlong *)local_c8._104_8_;
      }
      (**(code **)(*plVar17 + 0x10))();
    }
    local_118 = &(this->MeshComponent).WeakPtr;
    pUVar14 = (UMeshComponent *)FWeakObjectPtr::Get(local_118);
    UOptimusDeformerInstanceSettings::InitializeSettings(this_00,param_1,pUVar14);
  }
  else {
    local_118 = &(this->MeshComponent).WeakPtr;
  }
  pUVar14 = (UMeshComponent *)FWeakObjectPtr::Get(&(this->MeshComponent).WeakPtr);
  UOptimusDeformerInstanceSettings::GetComponentBindings(this_00,param_1,pUVar14,&local_140);
  pTVar25 = &this->WeakBoundComponents;
  piVar31 = &(this->WeakBoundComponents).ArrayMax;
  (this->WeakBoundComponents).ArrayNum = 0;
  if ((this->WeakBoundComponents).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&pTVar25->AllocatorInstance,0,piVar31);
  }
  iVar11 = local_140.ArrayNum;
  uVar18 = (ulonglong)local_140.ArrayNum;
  pFVar2 = local_140.AllocatorInstance.Data + uVar18 * 8;
  FVar21.Data = local_140.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar18 != iVar11) {
      local_168 = 0;
      `TCheckedPointerIterator<UActorComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_168);
    }
    pUVar28 = local_150;
    if (FVar21.Data == pFVar2) break;
    pUVar12 = *(UObject **)FVar21.Data;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar12);
    }
    local_164.ObjectIndex = 0;
    local_164.ObjectSerialNumber = 0;
    local_f8 = pUVar12;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar12);
    }
    FWeakObjectPtr::operator=(&local_164,(FObjectPtr)&local_f8);
    pFVar4 = (FWeakObjectPtr *)(pTVar25->AllocatorInstance).Data;
    if (((pFVar4 <= &local_164) && (&local_164 < pFVar4 + *piVar31)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar10 = (this->WeakBoundComponents).ArrayNum;
    if (iVar10 == *piVar31) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x408,&pTVar25->AllocatorInstance,piVar31);
    }
    FVar21.Data = FVar21.Data + 8;
    (this->WeakBoundComponents).ArrayNum = iVar10 + 1;
    *(FWeakObjectPtr *)((pTVar25->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_164;
    uVar18 = local_140._8_8_ & 0xffffffff;
  }
  pTVar26 = &local_150->WeakComponentSources;
  piVar31 = &(local_150->WeakComponentSources).ArrayMax;
  (local_150->WeakComponentSources).ArrayNum = 0;
  if ((local_150->WeakComponentSources).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&pTVar26->AllocatorInstance,0,piVar31);
  }
  pUVar5 = (param_1->Bindings).field0_0x0.DebugPtr;
  pFVar30 = (pUVar5->Bindings).AllocatorInstance.Data;
  iVar11 = (pUVar5->Bindings).ArrayNum;
  pFVar2 = pFVar30 + (longlong)iVar11 * 8;
  while( true ) {
    if ((pUVar5->Bindings).ArrayNum != iVar11) {
      local_167 = 0;
      `TCheckedPointerIterator<UOptimusComponentSourceBinding_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_167);
    }
    if (pFVar30 == pFVar2) break;
    pUVar15 = UOptimusComponentSourceBinding::GetComponentSource
                        (*(UOptimusComponentSourceBinding **)pFVar30);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar15 != (UOptimusComponentSource *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar15);
    }
    local_15c.ObjectIndex = 0;
    local_15c.ObjectSerialNumber = 0;
    local_f0 = pUVar15;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar15 != (UOptimusComponentSource *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar15);
    }
    FWeakObjectPtr::operator=(&local_15c,(FObjectPtr)&local_f0);
    pFVar4 = (FWeakObjectPtr *)(pTVar26->AllocatorInstance).Data;
    if (((pFVar4 <= &local_15c) && (&local_15c < pFVar4 + *piVar31)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar10 = (pUVar28->WeakComponentSources).ArrayNum;
    if (iVar10 == *piVar31) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x408,&pTVar26->AllocatorInstance,piVar31);
    }
    pFVar30 = pFVar30 + 8;
    (pUVar28->WeakComponentSources).ArrayNum = iVar10 + 1;
    *(FWeakObjectPtr *)((pTVar26->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_15c;
  }
  pTVar16 = ::operator_new(0xb0);
  if (pTVar16 == (TReferenceControllerBase<1> *)0x0) {
    pTVar16 = (TReferenceControllerBase<1> *)0x0;
    local_128 = ___xmm_00000000000000000000000000000010;
    pFVar22 = (FOptimusPersistentBufferPool *)&DAT_00000010;
    FStack_120.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar16->SharedReferenceCount = (atomic<int>)0x1;
    pFVar22 = (FOptimusPersistentBufferPool *)(pTVar16 + 1);
    pTVar16->WeakReferenceCount = (atomic<int>)0x1;
    pTVar16->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFOptimusPersistentBufferPool___00_SharedPointerInternals__6B_
    ;
    pTVar16[2]._padding_ = 0;
    pTVar16[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar16[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar16[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar16[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar16[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar16[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar16[7]._padding_ = 0;
    pTVar16[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar16[7].WeakReferenceCount = (atomic<int>)0x0;
    pTVar16[9].SharedReferenceCount = (atomic<int>)0x0;
    pTVar16[9].WeakReferenceCount = (atomic<int>)0x0;
    pTVar16[10].SharedReferenceCount = (atomic<int>)0x0;
    pTVar16[10].WeakReferenceCount = (atomic<int>)0x0;
    pTVar16[1]._padding_ = 0;
    pTVar16[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar16[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar16[3]._padding_ = 0;
    pTVar16[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar16[3].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)&pTVar16[4]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pTVar16[4]._padding_ + 4) = 0;
    pTVar16[5]._padding_ = 0;
    pTVar16[6]._padding_ = 0;
    pTVar16[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar16[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar16[8]._padding_ = 0;
    pTVar16[8].SharedReferenceCount = (atomic<int>)0x0;
    pTVar16[8].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)&pTVar16[9]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pTVar16[9]._padding_ + 4) = 0;
    pTVar16[10]._padding_ = 0;
    if ((pFVar22 == (FOptimusPersistentBufferPool *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    LOCK();
    pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
    UNLOCK();
    FStack_120.ReferenceController = pTVar16;
    local_128 = pFVar22;
  }
  pUVar28 = local_150;
  if (&local_150->BufferPool != (TSharedPtr<FOptimusPersistentBufferPool,1> *)&local_128) {
    (local_150->BufferPool).Object = pFVar22;
    local_128 = (FOptimusPersistentBufferPool *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(local_150->BufferPool).SharedReferenceCount,&FStack_120);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_120.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
  pUVar23 = local_130;
  pTVar1 = &local_130->ValueMap;
  if (&pUVar28->ValueMap != pTVar1) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(pUVar28->ValueMap).field_0x38,
               (int *)&(pUVar28->ValueMap).field_0x48,
               (ForElementType<FSetElementId> *)&(local_130->ValueMap).field_0x38,
               *(int *)&(local_130->ValueMap).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FOptimusValueIdentifier,FOptimusValueDescription>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FOptimusValueIdentifier,FOptimusValueDescription>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&pUVar28->ValueMap,
                (TSparseArray<TSparseSetElement<TTuple<FOptimusValueIdentifier,FOptimusValueDescription>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)pTVar1);
  }
  if (&pUVar28->DataInterfacePropertyOverrideMap != &pUVar23->DataInterfacePropertyOverrideMap) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)
               &(pUVar28->DataInterfacePropertyOverrideMap).field_0x38,
               (int *)&(pUVar28->DataInterfacePropertyOverrideMap).field_0x48,
               (ForElementType<FSetElementId> *)
               &(pUVar23->DataInterfacePropertyOverrideMap).field_0x38,
               *(int *)&(pUVar23->DataInterfacePropertyOverrideMap).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&pUVar28->DataInterfacePropertyOverrideMap,
                (TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&pUVar23->DataInterfacePropertyOverrideMap);
  }
  pFVar6 = (FOptimusDeformerInstanceExecInfo *)
           (pUVar28->ComputeGraphExecInfos).AllocatorInstance.Data;
  iVar11 = (pUVar28->ComputeGraphExecInfos).ArrayNum;
  pTVar29 = &pUVar28->ComputeGraphExecInfos;
  piVar31 = &(pUVar28->ComputeGraphExecInfos).ArrayMax;
  if ((pUVar28->ComputeGraphExecInfos).ArrayMax < 0) {
    DestructItems<FOptimusDeformerInstanceExecInfo,int>(pFVar6,iVar11);
    (pUVar28->ComputeGraphExecInfos).ArrayNum = 0;
    if (*piVar31 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,&pTVar29->AllocatorInstance,0,piVar31);
    }
  }
  else {
    DestructItems<FOptimusDeformerInstanceExecInfo,int>(pFVar6,iVar11);
    (pUVar28->ComputeGraphExecInfos).ArrayNum = 0;
  }
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Reset(&pUVar28->GraphsToRunOnNextTick);
  local_148 = 0;
  if (0 < (pUVar23->ComputeGraphs).ArrayNum) {
    do {
      uVar20 = local_148;
      uVar18 = 0;
      uVar19 = 0;
      if ((int)local_148 < (pUVar23->ComputeGraphs).ArrayNum) {
        uVar19 = ~local_148 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar2 = (pUVar23->ComputeGraphs).AllocatorInstance.Data + (longlong)(int)uVar20 * 0x18;
      iVar11 = pTVar29->ArrayNum;
      if (iVar11 == *piVar31) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x830,&pTVar29->AllocatorInstance,piVar31);
      }
      pTVar29->ArrayNum = iVar11 + 1;
      pFVar30 = (pTVar29->AllocatorInstance).Data + (longlong)iVar11 * 0x30;
      DefaultConstructItems<FOptimusDeformerInstanceExecInfo,int>(pFVar30,1);
      *(undefined8 *)pFVar30 = *(undefined8 *)(pFVar2 + 4);
      *(undefined4 *)(pFVar30 + 8) = *(undefined4 *)pFVar2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)(pFVar2 + 0x10) != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(*(UObject **)(pFVar2 + 0x10));
      }
      pFVar4 = local_118;
      *(undefined8 *)(pFVar30 + 0x10) = *(undefined8 *)(pFVar2 + 0x10);
      pFVar30[0x28] = SUB41(uVar20,0);
      if (local_140.ArrayNum == 0) {
        if (0 < (((pUVar23->Bindings).field0_0x0.DebugPtr)->Bindings).ArrayNum) {
          do {
            local_e0 = FWeakObjectPtr::Get(pFVar4);
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_e0 != (UObject *)0x0)
               ) {
              UE::GC::MarkAsReachable(local_e0);
            }
            FComputeGraphInstance::CreateDataProviders
                      ((FComputeGraphInstance *)(pFVar30 + 0x18),*(UComputeGraph **)(pFVar30 + 0x10)
                       ,(int)uVar18,(TObjectPtr<UObject>)&local_e0);
            uVar20 = (int)uVar18 + 1;
            uVar18 = (ulonglong)uVar20;
            pUVar28 = local_150;
          } while ((int)uVar20 < (((pUVar23->Bindings).field0_0x0.DebugPtr)->Bindings).ArrayNum);
        }
      }
      else {
        FWeakObjectPtr::Get(&(pUVar28->MeshComponent).WeakPtr);
        uVar27 = uVar18;
        if (0 < local_140.ArrayNum) {
          do {
            uVar19 = (uint)uVar18;
            uVar20 = 0;
            if ((int)uVar19 < local_140.ArrayNum) {
              uVar20 = ~uVar19 >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            local_e8 = *(UObject **)(local_140.AllocatorInstance.Data + uVar27);
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_e8 != (UObject *)0x0)
               ) {
              UE::GC::MarkAsReachable(local_e8);
            }
            FComputeGraphInstance::CreateDataProviders
                      ((FComputeGraphInstance *)(pFVar30 + 0x18),*(UComputeGraph **)(pFVar30 + 0x10)
                       ,uVar19,(TObjectPtr<UObject>)&local_e8);
            uVar18 = (ulonglong)(uVar19 + 1);
            uVar27 = uVar27 + 8;
            pUVar28 = local_150;
          } while ((int)(uVar19 + 1) < local_140.ArrayNum);
        }
      }
      pUVar23 = local_130;
      puVar24 = *(undefined8 **)(pFVar30 + 0x18);
      iVar11 = *(int *)(pFVar30 + 0x20);
      puVar3 = puVar24 + iVar11;
      while( true ) {
        if (*(int *)(pFVar30 + 0x20) != iVar11) {
          local_166 = 0;
          `TCheckedPointerIterator<TObjectPtr<UComputeDataProvider>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_166);
        }
        uVar20 = local_148;
        if (puVar24 == puVar3) break;
        pUVar12 = (UObject *)*puVar24;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar12 != (UObject *)0x0) goto LAB_14e224c76;
        }
        else if (pUVar12 != (UObject *)0x0) {
          UE::GC::MarkAsReachable(pUVar12);
LAB_14e224c76:
          pUVar13 = UOptimusPersistentBufferProvider::GetPrivateStaticClass();
          plVar17 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)pUVar12,pUVar13);
          if (plVar17 != (longlong *)0x0) {
            pcVar7 = *(code **)(*plVar17 + 0x10);
            local_d8 = (pUVar28->BufferPool).Object;
            local_d0 = (pUVar28->BufferPool).SharedReferenceCount.ReferenceController;
            if (local_d0 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              local_d0->SharedReferenceCount =
                   (atomic<int>)((int)local_d0->SharedReferenceCount + 1);
              UNLOCK();
            }
            (*pcVar7)(plVar17,&local_d8);
          }
          if (pUVar12 != (UObject *)0x0) {
            pUVar13 = UOptimusDeformerInstanceAccessor::GetPrivateStaticClass();
            plVar17 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)pUVar12,pUVar13)
            ;
            if (plVar17 != (longlong *)0x0) {
              (**(code **)(*plVar17 + 0x10))(plVar17,pUVar28);
            }
            pUVar13 = Z_Construct_UClass_UOptimusDeformerAssetPathAccessor_NoRegister();
            plVar17 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)pUVar12,pUVar13)
            ;
            if (plVar17 != (longlong *)0x0) {
              local_110.PackageName.ComparisonIndex.Value = 0;
              local_110.PackageName.Number = 0;
              local_110.AssetName.ComparisonIndex.Value = 0;
              local_110.AssetName.Number = 0;
              pcVar7 = *(code **)(*plVar17 + 0x10);
              FTopLevelAssetPath::TrySetPath(&local_110,(UObject *)pUVar23);
              (*pcVar7)(plVar17,&local_110);
            }
          }
        }
        puVar24 = puVar24 + 1;
        pUVar28 = local_150;
      }
      if (*(int *)(pFVar30 + 8) == 0) {
        TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                  (&pUVar28->GraphsToRunOnNextTick,&local_100,(bool *)pFVar30);
      }
      pTVar29 = &pUVar28->ComputeGraphExecInfos;
      local_148 = uVar20 + 1;
      piVar31 = &(pUVar28->ComputeGraphExecInfos).ArrayMax;
      pUVar23 = local_130;
    } while ((int)local_148 < (local_130->ComputeGraphs).ArrayNum);
  }
  this_01 = (UActorComponent *)FWeakObjectPtr::Get(&(pUVar28->MeshComponent).WeakPtr);
  if (this_01 != (UActorComponent *)0x0) {
    cVar9 = (**(code **)(pUVar28->_padding_ + 0x2c8))(pUVar28);
    if (cVar9 != local_165) {
      UActorComponent::MarkRenderStateDirty(this_01);
    }
    UActorComponent::MarkRenderDynamicDataDirty(this_01);
  }
  if (local_140.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesUOptimusDeformerInstance @ 14e225950

void __cdecl UOptimusDeformerInstance::StaticRegisterNativesUOptimusDeformerInstance(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x1d;
  local_18.DataPtr = Z_Construct_UClass_UOptimusDeformerInstance_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execEnqueueTriggerGraph @ 14e23b050

void __cdecl
UOptimusDeformerInstance::execEnqueueTriggerGraph(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *lpCriticalSection;
  int iVar1;
  FProperty *pFVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  bool *pbVar6;
  bool *pbVar7;
  undefined1 local_res8 [8];
  FName local_res10;
  longlong local_res18;
  
  local_res18 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  lVar4 = local_res18;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = *(int *)&param_1[1].field_0x20;
  pbVar7 = *(bool **)&param_1[1].field_0x18;
  pbVar6 = pbVar7 + (longlong)iVar1 * 0x30;
  while( true ) {
    if (*(int *)&param_1[1].field_0x20 != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FOptimusDeformerInstanceExecInfo,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pbVar7 == pbVar6) break;
    if ((*(int *)(pbVar7 + 8) == 2) && (*(longlong *)pbVar7 == lVar4)) {
      lpCriticalSection = &param_1[8].field_0x20;
      if (lpCriticalSection == (undefined1 *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)&param_1[6].field_0x20
                 ,&local_res10,pbVar7);
      if (lpCriticalSection != (undefined1 *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
      *(undefined1 *)param_3 = 1;
      return;
    }
    pbVar7 = pbVar7 + 0x30;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execSetBoolArrayVariable @ 14e23c6d0

void __cdecl
UOptimusDeformerInstance::execSetBoolArrayVariable(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar3;
  FName local_res10;
  TArray<bool,TSizedDefaultAllocator<32>_> local_18;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar3 = &local_18;
  if ((TArray<bool,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<bool,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<bool,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = SetBoolArrayVariable((UOptimusDeformerInstance *)param_1,local_res10,pTVar3);
  *(bool *)param_3 = bVar2;
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execSetBoolVariable @ 14e23c7d0

void __cdecl
UOptimusDeformerInstance::execSetBoolVariable(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  bool bVar3;
  FFieldClass *pFVar4;
  bool local_res8 [8];
  int local_res10 [2];
  undefined8 local_res18;
  undefined8 local_res20;
  FOptimusValueIdentifier local_38 [2];
  
  local_res18 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
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
  uVar2 = local_res18;
  local_res8[0] = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res20 = local_res18;
  pFVar4 = FBoolProperty::StaticClass();
  local_38[0].Name.Number = local_res20._4_4_;
  local_38[0].Type = Variable;
  local_38[0].Name.ComparisonIndex.Value = (uint)uVar2;
  bVar3 = ::`anonymous_namespace'::SetValue<bool>
                    ((TMap<FOptimusValueIdentifier,FOptimusValueDescription,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusValueIdentifier,FOptimusValueDescription,0>_>
                      *)(param_1 + 2),local_38,pFVar4->Name,local_res8);
  *(bool *)param_3 = bVar3;
  return;
}

// execSetFloatArrayVariable @ 14e23c8d0

void __cdecl
UOptimusDeformerInstance::execSetFloatArrayVariable(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar3;
  FName local_res10;
  TArray<double,TSizedDefaultAllocator<32>_> local_18;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar3 = &local_18;
  if ((TArray<double,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<double,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = SetFloatArrayVariable((UOptimusDeformerInstance *)param_1,local_res10,pTVar3);
  *(bool *)param_3 = bVar2;
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execSetFloatVariable @ 14e23c9d0

void __cdecl
UOptimusDeformerInstance::execSetFloatVariable(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FName local_res10;
  double local_res18 [2];
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res18[0] = 0.0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = SetFloatVariable((UOptimusDeformerInstance *)param_1,local_res10,local_res18[0]);
  *(bool *)param_3 = bVar2;
  return;
}

// execSetInt2ArrayVariable @ 14e23cc10

void __cdecl
UOptimusDeformerInstance::execSetInt2ArrayVariable(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_> *pTVar3;
  FName local_res10;
  TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_> local_18;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar3 = &local_18;
  if ((TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = SetInt2ArrayVariable((UOptimusDeformerInstance *)param_1,local_res10,pTVar3);
  *(bool *)param_3 = bVar2;
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execSetInt2Variable @ 14e23cd10

void __cdecl
UOptimusDeformerInstance::execSetInt2Variable(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  TIntPoint<int> *pTVar3;
  FName local_res10;
  TIntPoint<int> local_res18 [2];
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  pTVar3 = local_res18;
  if ((TIntPoint<int> *)param_2->MostRecentPropertyAddress != (TIntPoint<int> *)0x0) {
    pTVar3 = (TIntPoint<int> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = SetInt2Variable((UOptimusDeformerInstance *)param_1,local_res10,pTVar3);
  *(bool *)param_3 = bVar2;
  return;
}

// execSetInt3ArrayVariable @ 14e23cdf0

void __cdecl
UOptimusDeformerInstance::execSetInt3ArrayVariable(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *pTVar3;
  FName local_res10;
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> local_18;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar3 = &local_18;
  if ((TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = SetInt3ArrayVariable((UOptimusDeformerInstance *)param_1,local_res10,pTVar3);
  *(bool *)param_3 = bVar2;
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execSetInt3Variable @ 14e23cef0

void __cdecl
UOptimusDeformerInstance::execSetInt3Variable(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  TIntVector3<int> *pTVar3;
  FName local_res10;
  TIntVector3<int> local_18;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar3 = &local_18;
  if ((TIntVector3<int> *)param_2->MostRecentPropertyAddress != (TIntVector3<int> *)0x0) {
    pTVar3 = (TIntVector3<int> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = SetInt3Variable((UOptimusDeformerInstance *)param_1,local_res10,pTVar3);
  *(bool *)param_3 = bVar2;
  return;
}

// execSetInt4ArrayVariable @ 14e23cfe0

void __cdecl
UOptimusDeformerInstance::execSetInt4ArrayVariable(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_> *pTVar3;
  FName local_res10;
  TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_> local_18;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar3 = &local_18;
  if ((TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = SetInt4ArrayVariable((UOptimusDeformerInstance *)param_1,local_res10,pTVar3);
  *(bool *)param_3 = bVar2;
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execSetInt4Variable @ 14e23d0e0

void __cdecl
UOptimusDeformerInstance::execSetInt4Variable(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  TIntVector4<int> *pTVar3;
  FName local_res10;
  TIntVector4<int> local_18;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar3 = &local_18;
  if ((TIntVector4<int> *)param_2->MostRecentPropertyAddress != (TIntVector4<int> *)0x0) {
    pTVar3 = (TIntVector4<int> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = SetInt4Variable((UOptimusDeformerInstance *)param_1,local_res10,pTVar3);
  *(bool *)param_3 = bVar2;
  return;
}

// execSetIntArrayVariable @ 14e23d1d0

void __cdecl
UOptimusDeformerInstance::execSetIntArrayVariable(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  FName local_res10;
  TArray<int,TSizedDefaultAllocator<32>_> local_18;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar3 = &local_18;
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<int,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = SetIntArrayVariable((UOptimusDeformerInstance *)param_1,local_res10,pTVar3);
  *(bool *)param_3 = bVar2;
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execSetIntVariable @ 14e23d2d0

void __cdecl
UOptimusDeformerInstance::execSetIntVariable(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  bool bVar3;
  FFieldClass *pFVar4;
  int local_res8 [2];
  int local_res10 [2];
  undefined8 local_res18;
  undefined8 local_res20;
  FOptimusValueIdentifier local_38 [2];
  
  local_res18 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
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
  uVar2 = local_res18;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res20 = local_res18;
  local_res10[0] = local_res8[0];
  pFVar4 = FIntProperty::StaticClass();
  local_38[0].Name.Number = local_res20._4_4_;
  local_38[0].Type = Variable;
  local_38[0].Name.ComparisonIndex.Value = (uint)uVar2;
  bVar3 = ::`anonymous_namespace'::SetValue<int>
                    ((TMap<FOptimusValueIdentifier,FOptimusValueDescription,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusValueIdentifier,FOptimusValueDescription,0>_>
                      *)(param_1 + 2),local_38,pFVar4->Name,local_res10);
  *(bool *)param_3 = bVar3;
  return;
}

// execSetLinearColorArrayVariable @ 14e23d3d0

void __cdecl
UOptimusDeformerInstance::execSetLinearColorArrayVariable
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *pTVar3;
  FName local_res10;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> local_18;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar3 = &local_18;
  if ((TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = SetLinearColorArrayVariable((UOptimusDeformerInstance *)param_1,local_res10,pTVar3);
  *(bool *)param_3 = bVar2;
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execSetLinearColorVariable @ 14e23d4d0

void __cdecl
UOptimusDeformerInstance::execSetLinearColorVariable(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FLinearColor *pFVar3;
  FName local_res10;
  FLinearColor local_18;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pFVar3 = &local_18;
  if ((FLinearColor *)param_2->MostRecentPropertyAddress != (FLinearColor *)0x0) {
    pFVar3 = (FLinearColor *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = SetLinearColorVariable((UOptimusDeformerInstance *)param_1,local_res10,pFVar3);
  *(bool *)param_3 = bVar2;
  return;
}

// execSetNameArrayVariable @ 14e23d5c0

void __cdecl
UOptimusDeformerInstance::execSetNameArrayVariable(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar3;
  FName local_res10;
  TArray<FName,TSizedDefaultAllocator<32>_> local_18;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar3 = &local_18;
  if ((TArray<FName,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<FName,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = SetNameArrayVariable((UOptimusDeformerInstance *)param_1,local_res10,pTVar3);
  *(bool *)param_3 = bVar2;
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execSetNameVariable @ 14e23d6c0

void __cdecl
UOptimusDeformerInstance::execSetNameVariable(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  bool bVar3;
  FFieldClass *pFVar4;
  FName *pFVar5;
  FName local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  FOptimusValueIdentifier local_38;
  
  local_res10 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  uVar2 = local_res10;
  pFVar5 = &local_res8;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar5 = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res18 = local_res10;
  pFVar4 = FNameProperty::StaticClass();
  local_38.Name.Number = local_res18._4_4_;
  local_38.Type = Variable;
  local_38.Name.ComparisonIndex.Value = (uint)uVar2;
  bVar3 = ::`anonymous_namespace'::SetValue<FName>
                    ((TMap<FOptimusValueIdentifier,FOptimusValueDescription,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusValueIdentifier,FOptimusValueDescription,0>_>
                      *)(param_1 + 2),&local_38,pFVar4->Name,pFVar5);
  *(bool *)param_3 = bVar3;
  return;
}

// execSetQuatArrayVariable @ 14e23d7d0

void __cdecl
UOptimusDeformerInstance::execSetQuatArrayVariable(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  FName local_res10;
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> local_18;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar3 = &local_18;
  if ((TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = SetQuatArrayVariable((UOptimusDeformerInstance *)param_1,local_res10,pTVar3);
  *(bool *)param_3 = bVar2;
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execSetQuatVariable @ 14e23d8d0

void __cdecl
UOptimusDeformerInstance::execSetQuatVariable(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  TQuat<double> *pTVar3;
  FName local_res10;
  TQuat<double> local_28;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar3 = &local_28;
  if ((TQuat<double> *)param_2->MostRecentPropertyAddress != (TQuat<double> *)0x0) {
    pTVar3 = (TQuat<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = SetQuatVariable((UOptimusDeformerInstance *)param_1,local_res10,pTVar3);
  *(bool *)param_3 = bVar2;
  return;
}

// execSetRotatorArrayVariable @ 14e23d9c0

void __cdecl
UOptimusDeformerInstance::execSetRotatorArrayVariable
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  FName local_res10;
  TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> local_18;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar3 = &local_18;
  if ((TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = SetRotatorArrayVariable((UOptimusDeformerInstance *)param_1,local_res10,pTVar3);
  *(bool *)param_3 = bVar2;
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execSetRotatorVariable @ 14e23dac0

void __cdecl
UOptimusDeformerInstance::execSetRotatorVariable(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  TRotator<double> *pTVar3;
  FName local_res10;
  TRotator<double> local_28;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar3 = &local_28;
  if ((TRotator<double> *)param_2->MostRecentPropertyAddress != (TRotator<double> *)0x0) {
    pTVar3 = (TRotator<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = SetRotatorVariable((UOptimusDeformerInstance *)param_1,local_res10,pTVar3);
  *(bool *)param_3 = bVar2;
  return;
}

// execSetTransformArrayVariable @ 14e23dbb0

void __cdecl
UOptimusDeformerInstance::execSetTransformArrayVariable
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  FName local_res10;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_18;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar3 = &local_18;
  if ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = SetTransformArrayVariable((UOptimusDeformerInstance *)param_1,local_res10,pTVar3);
  *(bool *)param_3 = bVar2;
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execSetTransformVariable @ 14e23dcb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UOptimusDeformerInstance::execSetTransformVariable(UObject *param_1,FFrame *param_2,void *param_3)

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
  bool bVar12;
  TTransform<double> *pTVar13;
  undefined1 auStack_b8 [32];
  FName local_98 [2];
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_98[0].ComparisonIndex.Value = 0;
  local_98[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
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
  local_88.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_88.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_88.Rotation.ZW.m128d_f64[0] = (double)fVar6;
  local_88.Rotation.ZW.m128d_f64[1] = (double)fVar9;
  local_88.Translation.ZW.m128d_f64[0] = (double)fVar7;
  local_88.Translation.ZW.m128d_f64[1] = (double)fVar10;
  local_88.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar4,0);
  local_88.Translation.XY.m128d_f64[0] = (double)fVar2;
  local_88.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  local_88.Scale3D.ZW.m128d_f64[0] = (double)fVar8;
  local_88.Scale3D.ZW.m128d_f64[1] = (double)fVar11;
  local_88.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar5,0);
  local_88.Scale3D.XY.m128d_f64[0] = (double)fVar3;
  local_88.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  pTVar13 = &local_88;
  if ((TTransform<double> *)param_2->MostRecentPropertyAddress != (TTransform<double> *)0x0) {
    pTVar13 = (TTransform<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar12 = SetTransformVariable((UOptimusDeformerInstance *)param_1,local_98[0],pTVar13);
  *(bool *)param_3 = bVar12;
  return;
}

// execSetVector2ArrayVariable @ 14e23de10

void __cdecl
UOptimusDeformerInstance::execSetVector2ArrayVariable
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  FName local_res10;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_18;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar3 = &local_18;
  if ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = SetVector2ArrayVariable((UOptimusDeformerInstance *)param_1,local_res10,pTVar3);
  *(bool *)param_3 = bVar2;
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execSetVector2Variable @ 14e23df10

void __cdecl
UOptimusDeformerInstance::execSetVector2Variable(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  TVector2<double> *pTVar3;
  FName local_res10;
  TVector2<double> local_18;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar3 = &local_18;
  if ((TVector2<double> *)param_2->MostRecentPropertyAddress != (TVector2<double> *)0x0) {
    pTVar3 = (TVector2<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = SetVector2Variable((UOptimusDeformerInstance *)param_1,local_res10,pTVar3);
  *(bool *)param_3 = bVar2;
  return;
}

// execSetVector4ArrayVariable @ 14e23e000

void __cdecl
UOptimusDeformerInstance::execSetVector4ArrayVariable
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  FName local_res10;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> local_18;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar3 = &local_18;
  if ((TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = SetVector4ArrayVariable((UOptimusDeformerInstance *)param_1,local_res10,pTVar3);
  *(bool *)param_3 = bVar2;
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execSetVector4Variable @ 14e23e100

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UOptimusDeformerInstance::execSetVector4Variable(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  TVector4<double>_u_0 *pTVar3;
  FName local_res10;
  TVector4<double>_u_0 local_28;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_28._s_0.X = 0.0;
  local_28._s_0.Y = 0.0;
  local_28._s_0.Z = ___xmm_3ff00000000000000000000000000000;
  local_28._s_0.W = _UNK_15061cbc8;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar3 = &local_28;
  if ((TVector4<double>_u_0 *)param_2->MostRecentPropertyAddress != (TVector4<double>_u_0 *)0x0) {
    pTVar3 = (TVector4<double>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = SetVector4Variable((UOptimusDeformerInstance *)param_1,local_res10,
                             (TVector4<double> *)&pTVar3->_s_0);
  *(bool *)param_3 = bVar2;
  return;
}

// execSetVectorArrayVariable @ 14e23e200

void __cdecl
UOptimusDeformerInstance::execSetVectorArrayVariable(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  FName local_res10;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_18;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar3 = &local_18;
  if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = SetVectorArrayVariable((UOptimusDeformerInstance *)param_1,local_res10,pTVar3);
  *(bool *)param_3 = bVar2;
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execSetVectorVariable @ 14e23e300

void __cdecl
UOptimusDeformerInstance::execSetVectorVariable(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  TVector<double> *pTVar3;
  FName local_res10;
  TVector<double> local_28;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar3 = &local_28;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar3 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = SetVectorVariable((UOptimusDeformerInstance *)param_1,local_res10,pTVar3);
  *(bool *)param_3 = bVar2;
  return;
}

