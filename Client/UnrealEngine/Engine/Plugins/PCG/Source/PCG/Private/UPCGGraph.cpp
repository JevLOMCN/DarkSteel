// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 72

// StaticClass @ 149ee10e0

UClass * __cdecl UPCGGraph::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGraph.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGraph",&Z_Registration_Info_UClass_UPCGGraph.InnerSingleton,
               StaticRegisterNativesUPCGGraph,0x2f8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGGraph>,InternalVTableHelperCtorCaller<UPCGGraph>,local_res8,
               UPCGGraphInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGraph.InnerSingleton;
}

// UPCGGraph @ 149eee560

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

UPCGGraph * __thiscall UPCGGraph::UPCGGraph(UPCGGraph *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bLandscapeUsesMetadata = true;
  this->_padding_ = (longlong)&___7UPCGGraph__6B_;
  (this->Nodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Nodes).ArrayNum = 0;
  (this->Nodes).ArrayMax = 0;
  (this->InputNode).field0_0x0.DebugPtr = (UPCGNode *)0x0;
  (this->OutputNode).field0_0x0.DebugPtr = (UPCGNode *)0x0;
  FInstancedStruct::FInstancedStruct(&(this->UserParameters).Value);
  this->bUseHierarchicalGeneration = false;
  this->HiGenGridSize = Grid256;
  this->HiGenExponential = 0;
  this->bUse2DGrid = true;
  this->bHasDefaultConstructedInputs = true;
  *(undefined8 *)&this->NodeToGridSize = 0;
  *(undefined8 *)&(this->NodeToGridSize).field_0x8 = 0;
  *(undefined8 *)&(this->NodeToGridSize).field_0x20 = 0;
  *(undefined4 *)&(this->NodeToGridSize).field_0x28 = 0;
  *(undefined4 *)&(this->NodeToGridSize).field_0x2c = 0x80;
  *(undefined4 *)&(this->NodeToGridSize).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NodeToGridSize).field_0x34 = 0;
  *(undefined8 *)&(this->NodeToGridSize).field_0x40 = 0;
  *(undefined4 *)&(this->NodeToGridSize).field_0x48 = 0;
  *(undefined8 *)&this->NodeToAllGridSizes = 0;
  *(undefined8 *)&(this->NodeToAllGridSizes).field_0x8 = 0;
  *(undefined8 *)&(this->NodeToAllGridSizes).field_0x20 = 0;
  *(undefined4 *)&(this->NodeToAllGridSizes).field_0x28 = 0;
  *(undefined4 *)&(this->NodeToAllGridSizes).field_0x2c = 0x80;
  *(undefined4 *)&(this->NodeToAllGridSizes).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NodeToAllGridSizes).field_0x34 = 0;
  *(undefined8 *)&(this->NodeToAllGridSizes).field_0x40 = 0;
  *(undefined4 *)&(this->NodeToAllGridSizes).field_0x48 = 0;
  (this->NodeToGridSizeLock).Mutex.Mutex.Ptr = (void *)0x0;
  (this->CachedGridInfo).bIsSet = false;
  *(undefined8 *)&this->ChildGridSizeToParentGridSizes = 0;
  *(undefined8 *)&(this->ChildGridSizeToParentGridSizes).field_0x8 = 0;
  *(undefined8 *)&(this->ChildGridSizeToParentGridSizes).field_0x20 = 0;
  *(undefined4 *)&(this->ChildGridSizeToParentGridSizes).field_0x28 = 0;
  *(undefined4 *)&(this->ChildGridSizeToParentGridSizes).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChildGridSizeToParentGridSizes).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ChildGridSizeToParentGridSizes).field_0x34 = 0;
  *(undefined8 *)&(this->ChildGridSizeToParentGridSizes).field_0x40 = 0;
  *(undefined4 *)&(this->ChildGridSizeToParentGridSizes).field_0x48 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CachedGridInfoLock,4000);
  this->bIsEditorOnly = false;
  (this->CookedCompilationData).field0_0x0.DebugPtr = (UPCGGraphCompilationData *)0x0;
  FPCGRuntimeGenerationRadii::FPCGRuntimeGenerationRadii(&this->GenerationRadii);
  *(undefined8 *)&this->AvailableComputeGraphInstances = 0;
  *(undefined8 *)&(this->AvailableComputeGraphInstances).field_0x8 = 0;
  *(undefined8 *)&(this->AvailableComputeGraphInstances).field_0x20 = 0;
  *(undefined4 *)&(this->AvailableComputeGraphInstances).field_0x28 = 0;
  *(undefined4 *)&(this->AvailableComputeGraphInstances).field_0x2c = 0x80;
  *(undefined4 *)&(this->AvailableComputeGraphInstances).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AvailableComputeGraphInstances).field_0x34 = 0;
  *(undefined8 *)&(this->AvailableComputeGraphInstances).field_0x40 = 0;
  *(undefined4 *)&(this->AvailableComputeGraphInstances).field_0x48 = 0;
  *(undefined8 *)&this->AllComputeGraphInstances = 0;
  *(undefined8 *)&(this->AllComputeGraphInstances).field_0x8 = 0;
  *(undefined8 *)&(this->AllComputeGraphInstances).field_0x20 = 0;
  *(undefined4 *)&(this->AllComputeGraphInstances).field_0x28 = 0;
  *(undefined4 *)&(this->AllComputeGraphInstances).field_0x2c = 0x80;
  *(undefined4 *)&(this->AllComputeGraphInstances).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AllComputeGraphInstances).field_0x34 = 0;
  *(undefined8 *)&(this->AllComputeGraphInstances).field_0x40 = 0;
  *(undefined4 *)&(this->AllComputeGraphInstances).field_0x48 = 0;
  return this;
}

// UPCGGraph @ 149eee740

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */
/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

UPCGGraph * __thiscall UPCGGraph::UPCGGraph(UPCGGraph *this,FObjectInitializer *param_1)

{
  FName FVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  FName *pFVar5;
  UClass *pUVar6;
  UPCGNode *pUVar7;
  UPCGSettingsInterface *pUVar8;
  TArray<PCGInputOutputPrivate::FLabelAndTooltip,TSizedDefaultAllocator<32>_> *pTVar9;
  UPropertyBag *pUVar10;
  undefined4 local_res8 [2];
  FName local_res10;
  FObjectInitializer *local_78;
  undefined4 *local_70;
  FName local_68;
  FName local_60;
  TArrayView<FName_const_,int> local_58;
  undefined1 local_48 [8];
  FName aFStack_40 [3];
  
  ::FName::FName(&local_68,L"DefaultInputNode");
  ::FName::FName(&local_60,L"DefaultNodeSettings");
  uVar4 = local_58._12_4_;
  local_58.ArrayNum = 2;
  iVar2 = local_58.ArrayNum;
  local_58.DataPtr = &local_68;
  FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(param_1,&local_58);
  local_58.DataPtr = &local_68;
  local_58.ArrayNum = iVar2;
  local_58._12_4_ = uVar4;
  FObjectInitializer::FOverrides::Add
            (&param_1->SubobjectOverrides,&local_58,(UClass *)0x0,
             (TArrayView<FName_const_,int> *)0x0);
  ::FName::FName((FName *)local_48,L"DefaultOutputNode");
  ::FName::FName(aFStack_40,L"DefaultNodeSettings");
  local_58.ArrayNum = 2;
  uVar3 = local_58._8_8_;
  local_58.DataPtr = (FName *)local_48;
  FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(param_1,&local_58);
  local_58.DataPtr = (FName *)local_48;
  local_58._8_8_ = uVar3;
  FObjectInitializer::FOverrides::Add
            (&param_1->SubobjectOverrides,&local_58,(UClass *)0x0,
             (TArrayView<FName_const_,int> *)0x0);
  UObject::UObject((UObject *)this,param_1);
  this->bLandscapeUsesMetadata = true;
  this->_padding_ = (longlong)&___7UPCGGraph__6B_;
  (this->Nodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Nodes).ArrayNum = 0;
  (this->Nodes).ArrayMax = 0;
  (this->InputNode).field0_0x0.DebugPtr = (UPCGNode *)0x0;
  (this->OutputNode).field0_0x0.DebugPtr = (UPCGNode *)0x0;
  FInstancedStruct::FInstancedStruct(&(this->UserParameters).Value);
  this->bUseHierarchicalGeneration = false;
  this->HiGenGridSize = Grid256;
  this->HiGenExponential = 0;
  this->bUse2DGrid = true;
  this->bHasDefaultConstructedInputs = true;
  *(undefined8 *)&this->NodeToGridSize = 0;
  *(undefined8 *)&(this->NodeToGridSize).field_0x8 = 0;
  *(undefined8 *)&(this->NodeToGridSize).field_0x20 = 0;
  *(undefined4 *)&(this->NodeToGridSize).field_0x28 = 0;
  *(undefined4 *)&(this->NodeToGridSize).field_0x2c = 0x80;
  *(undefined4 *)&(this->NodeToGridSize).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NodeToGridSize).field_0x34 = 0;
  *(undefined8 *)&(this->NodeToGridSize).field_0x40 = 0;
  *(undefined4 *)&(this->NodeToGridSize).field_0x48 = 0;
  *(undefined8 *)&this->NodeToAllGridSizes = 0;
  *(undefined8 *)&(this->NodeToAllGridSizes).field_0x8 = 0;
  *(undefined8 *)&(this->NodeToAllGridSizes).field_0x20 = 0;
  *(undefined4 *)&(this->NodeToAllGridSizes).field_0x28 = 0;
  *(undefined4 *)&(this->NodeToAllGridSizes).field_0x2c = 0x80;
  *(undefined4 *)&(this->NodeToAllGridSizes).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NodeToAllGridSizes).field_0x34 = 0;
  *(undefined8 *)&(this->NodeToAllGridSizes).field_0x40 = 0;
  *(undefined4 *)&(this->NodeToAllGridSizes).field_0x48 = 0;
  (this->NodeToGridSizeLock).Mutex.Mutex.Ptr = (void *)0x0;
  (this->CachedGridInfo).bIsSet = false;
  *(undefined8 *)&this->ChildGridSizeToParentGridSizes = 0;
  *(undefined8 *)&(this->ChildGridSizeToParentGridSizes).field_0x8 = 0;
  *(undefined8 *)&(this->ChildGridSizeToParentGridSizes).field_0x20 = 0;
  *(undefined4 *)&(this->ChildGridSizeToParentGridSizes).field_0x28 = 0;
  *(undefined4 *)&(this->ChildGridSizeToParentGridSizes).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChildGridSizeToParentGridSizes).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ChildGridSizeToParentGridSizes).field_0x34 = 0;
  *(undefined8 *)&(this->ChildGridSizeToParentGridSizes).field_0x40 = 0;
  *(undefined4 *)&(this->ChildGridSizeToParentGridSizes).field_0x48 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CachedGridInfoLock,4000);
  this->bIsEditorOnly = false;
  (this->CookedCompilationData).field0_0x0.DebugPtr = (UPCGGraphCompilationData *)0x0;
  FPCGRuntimeGenerationRadii::FPCGRuntimeGenerationRadii(&this->GenerationRadii);
  *(undefined8 *)&this->AvailableComputeGraphInstances = 0;
  *(undefined8 *)&(this->AvailableComputeGraphInstances).field_0x8 = 0;
  *(undefined8 *)&(this->AvailableComputeGraphInstances).field_0x20 = 0;
  *(undefined4 *)&(this->AvailableComputeGraphInstances).field_0x28 = 0;
  *(undefined4 *)&(this->AvailableComputeGraphInstances).field_0x2c = 0x80;
  *(undefined4 *)&(this->AvailableComputeGraphInstances).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AvailableComputeGraphInstances).field_0x34 = 0;
  *(undefined8 *)&(this->AvailableComputeGraphInstances).field_0x40 = 0;
  *(undefined4 *)&(this->AvailableComputeGraphInstances).field_0x48 = 0;
  *(undefined8 *)&this->AllComputeGraphInstances = 0;
  *(undefined8 *)&(this->AllComputeGraphInstances).field_0x8 = 0;
  *(undefined8 *)&(this->AllComputeGraphInstances).field_0x20 = 0;
  *(undefined4 *)&(this->AllComputeGraphInstances).field_0x28 = 0;
  *(undefined4 *)&(this->AllComputeGraphInstances).field_0x2c = 0x80;
  *(undefined4 *)&(this->AllComputeGraphInstances).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AllComputeGraphInstances).field_0x34 = 0;
  *(undefined8 *)&(this->AllComputeGraphInstances).field_0x40 = 0;
  *(undefined4 *)&(this->AllComputeGraphInstances).field_0x48 = 0;
  pFVar5 = ::FName::FName(&local_res10,L"DefaultInputNode");
  FVar1 = *pFVar5;
  pUVar6 = Z_Construct_UClass_UPCGNode_NoRegister();
  pUVar7 = (UPCGNode *)
           FObjectInitializer::CreateDefaultSubobject
                     (param_1,(UObject *)this,FVar1,pUVar6,pUVar6,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UPCGNode *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  (this->InputNode).field0_0x0.DebugPtr = pUVar7;
  UObjectBase::AtomicallySetFlags((UObjectBase *)pUVar7,RF_Transactional);
  local_70 = local_res8;
  local_res8[0] = 1;
  local_78 = param_1;
  pFVar5 = ::FName::FName(&local_res10,L"DefaultInputNodeSettings");
  FVar1 = *pFVar5;
  pUVar6 = UPCGGraphInputOutputSettings::StaticClass();
  pUVar8 = (UPCGSettingsInterface *)
           FObjectInitializer::CreateDefaultSubobject
                     (param_1,(UObject *)this,FVar1,pUVar6,pUVar6,true,false);
  pUVar8[3].bDebug = true;
  if ((pUVar8[3].bEnabled == false) && (pUVar8[3].bEnabled = true, (int)pUVar8[2]._padding_ == 0)) {
    pTVar9 = PCGInputOutputPrivate::GetStaticInLabels();
    Algo::
    Transform<TArray<PCGInputOutputPrivate::FLabelAndTooltip,TSizedDefaultAllocator<32>_>,TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_>_&,_UPCGGraphInputOutputSettings::SetInput_::__l8::<lambda_1>_>
              (pTVar9,(TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *)&pUVar8[2]._padding_,
               (<lambda_1>)0x37fe);
  }
  UPCGNode::SetSettingsInterface((this->InputNode).field0_0x0.DebugPtr,pUVar8,false);
  aFStack_40[0] = (FName)&local_78;
  local_48 = (undefined1  [8])
             UE::Core::Private::Function::
             TFunctionRefCaller<`UPCGGraph::UPCGGraph'::__l2::<lambda_1>,UPCGPin_*,UPCGNode_*>::Call
  ;
  UPCGNode::CreateDefaultPins
            ((this->InputNode).field0_0x0.DebugPtr,
             (TFunctionRef<UPCGPin_*___cdecl(UPCGNode_*)> *)local_48);
  pFVar5 = ::FName::FName(&local_res10,L"DefaultOutputNode");
  FVar1 = *pFVar5;
  pUVar6 = Z_Construct_UClass_UPCGNode_NoRegister();
  pUVar7 = (UPCGNode *)
           FObjectInitializer::CreateDefaultSubobject
                     (param_1,(UObject *)this,FVar1,pUVar6,pUVar6,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UPCGNode *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  (this->OutputNode).field0_0x0.DebugPtr = pUVar7;
  UObjectBase::AtomicallySetFlags((UObjectBase *)pUVar7,RF_Transactional);
  pFVar5 = ::FName::FName(&local_res10,L"DefaultOutputNodeSettings");
  FVar1 = *pFVar5;
  pUVar6 = UPCGGraphInputOutputSettings::StaticClass();
  pUVar8 = (UPCGSettingsInterface *)
           FObjectInitializer::CreateDefaultSubobject
                     (param_1,(UObject *)this,FVar1,pUVar6,pUVar6,true,false);
  pUVar8[3].bDebug = false;
  if ((pUVar8[3].bEnabled == false) && (pUVar8[3].bEnabled = true, (int)pUVar8[2]._padding_ == 0)) {
    pTVar9 = PCGInputOutputPrivate::GetStaticOutLabels();
    Algo::
    Transform<TArray<PCGInputOutputPrivate::FLabelAndTooltip,TSizedDefaultAllocator<32>_>,TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_>_&,_UPCGGraphInputOutputSettings::SetInput_::__l8::<lambda_1>_>
              (pTVar9,(TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *)&pUVar8[2]._padding_,
               (<lambda_1>)0x3fffffff);
  }
  UPCGNode::SetSettingsInterface((this->OutputNode).field0_0x0.DebugPtr,pUVar8,false);
  aFStack_40[0] = (FName)&local_78;
  local_48 = (undefined1  [8])
             UE::Core::Private::Function::
             TFunctionRefCaller<`UPCGGraph::UPCGGraph'::__l2::<lambda_1>,UPCGPin_*,UPCGNode_*>::Call
  ;
  UPCGNode::CreateDefaultPins
            ((this->OutputNode).field0_0x0.DebugPtr,
             (TFunctionRef<UPCGPin_*___cdecl(UPCGNode_*)> *)local_48);
  aFStack_40[0] = (FName)((ulonglong)aFStack_40[0] & 0xffffffff00000000);
  local_48._0_4_ = 0;
  local_48._4_4_ = 0;
  pUVar10 = UPropertyBag::GetOrCreateFromDescs
                      ((TArrayView<FPropertyBagPropertyDesc_const_,int> *)local_48,(wchar_t *)0x0);
  FInstancedPropertyBag::MigrateToNewBagStruct(&this->UserParameters,pUVar10);
  return this;
}

// ~UPCGGraph @ 149eefd70

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void __thiscall UPCGGraph::~UPCGGraph(UPCGGraph *this)

{
  void *pvVar1;
  ForElementType<unsigned_int> FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  BOOLEAN BVar5;
  bool bVar6;
  
  this->_padding_ = (longlong)&___7UPCGGraph__6B_;
  *(undefined4 *)&(this->AllComputeGraphInstances).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AllComputeGraphInstances).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<unsigned_int,int>,TArray<TSharedPtr<FComputeGraphInstance,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<unsigned_int,int>,TArray<TSharedPtr<FComputeGraphInstance,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<unsigned_int,int>,TArray<TSharedPtr<FComputeGraphInstance,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AllComputeGraphInstances);
  *(undefined4 *)&(this->AvailableComputeGraphInstances).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AvailableComputeGraphInstances).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<unsigned_int,int>,TArray<TSharedPtr<FComputeGraphInstance,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<unsigned_int,int>,TArray<TSharedPtr<FComputeGraphInstance,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<unsigned_int,int>,TArray<TSharedPtr<FComputeGraphInstance,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AvailableComputeGraphInstances);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CachedGridInfoLock);
  *(undefined4 *)&(this->ChildGridSizeToParentGridSizes).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ChildGridSizeToParentGridSizes).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ChildGridSizeToParentGridSizes);
  if (((this->CachedGridInfo).bIsSet != false) &&
     (FVar2 = (this->CachedGridInfo).TypedValue.GridSizes.AllocatorInstance.SecondaryData,
     FVar2 != (ForElementType<unsigned_int>)0x0)) {
    FMemory::Free((void *)FVar2);
  }
  BVar5 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->NodeToGridSizeLock);
  if (BVar5 == '\0') {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->NodeToGridSizeLock);
  }
  *(undefined4 *)&(this->NodeToAllGridSizes).field_0x48 = 0;
  pvVar1 = *(void **)&(this->NodeToAllGridSizes).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UPCGNode_const_*,TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UPCGNode_const_*,TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UPCGNode_const_*,TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NodeToAllGridSizes);
  *(undefined4 *)&(this->NodeToGridSize).field_0x48 = 0;
  pvVar1 = *(void **)&(this->NodeToGridSize).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UPCGNode_const_*,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UPCGNode_const_*,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UPCGNode_const_*,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NodeToGridSize);
  FInstancedStruct::Reset(&(this->UserParameters).Value);
  pFVar3 = (this->Nodes).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  this->_padding_ = (longlong)&___7UPCGGraphInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 149ef0cf0

bool __thiscall
`UPCGGraph::FindNodeByTitleName'::__l2::<lambda_1>::operator()(void *this,UPCGNode *param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UPCGSettings *pUVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  
  if (param_1 == (UPCGNode *)0x0) {
    return true;
  }
  pUVar4 = UPCGNode::GetSettings(param_1);
  if (pUVar4 == (UPCGSettings *)0x0) {
    return true;
  }
  lVar2 = *(longlong *)((longlong)this + 0x10);
  if ((lVar2 == 0) ||
     (pUVar5 = Z_Construct_UClass_UPCGSettings_NoRegister(), pUVar5 == (UClass *)0x0))
  goto LAB_149ef0dcb;
  iVar1 = (int)pUVar5->_padding_;
  if ((*(int *)(lVar2 + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar5->_padding_)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((!bVar3) || (pUVar6 = *(UObject **)((longlong)this + 0x10), pUVar6 == (UObject *)0x0))
  goto LAB_149ef0dcb;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  pUVar5 = Z_Construct_UClass_UPCGSettings_NoRegister();
  if (pUVar5 == (UClass *)0x0) {
LAB_149ef0dae:
    pUVar6 = (UObject *)0x0;
  }
  else {
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)&pUVar6[1].field_0x10 < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)&pUVar6[1].field_0x8 + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_149ef0dae;
  }
  if (*(int *)(pUVar4->_padding_ + 0x38) < *(int *)&pUVar6[1].field_0x10) {
    return true;
  }
  if (*(undefined1 **)
       (*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)*(int *)&pUVar6[1].field_0x10 * 8) !=
      &pUVar6[1].field_0x8) {
    return true;
  }
LAB_149ef0dcb:
  if (param_1->NodeTitle != *(FName *)((longlong)this + 8)) {
    return true;
  }
  **(undefined8 **)this = param_1;
  return false;
}

// operator() @ 149ef0e00

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

bool __thiscall
`UPCGGraph::ForEachNodeRecursively_Internal'::__l2::<lambda_1>::operator()
          (void *this,UPCGNode *param_1)

{
  UPCGGraph *this_00;
  TSet<UPCGGraph_const_*,DefaultKeyFuncs<UPCGGraph_const_*,0>,FDefaultSetAllocator> *pTVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  UClass *pUVar6;
  TObjectPtr<UPCGGraph> TVar7;
  ForElementType<FSetElementId> FVar8;
  UPCGNode *local_res8;
  TFunctionRef<bool___cdecl(UPCGNode_*)> local_18;
  
  local_res8 = param_1;
  cVar2 = (*(code *)**(undefined8 **)this)((*(undefined8 **)this)[1],&local_res8);
  if (cVar2 == '\0') {
    return false;
  }
  if (param_1 != (UPCGNode *)0x0) {
    pUVar6 = Z_Construct_UClass_UPCGBaseSubgraphNode_NoRegister();
    iVar5 = (int)pUVar6->_padding_;
    if ((iVar5 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar5 * 8)
        == &pUVar6->_padding_)) {
      TVar7 = UPCGBaseSubgraphNode::GetSubgraph((UPCGBaseSubgraphNode *)param_1);
      this_00 = *(UPCGGraph **)TVar7.field0_0x0;
      if (this_00 != (UPCGGraph *)0x0) {
        pTVar1 = *(TSet<UPCGGraph_const_*,DefaultKeyFuncs<UPCGGraph_const_*,0>,FDefaultSetAllocator>
                   **)((longlong)this + 8);
        uVar4 = ((uint)((ulonglong)this_00 >> 0x14) & 0xffff ^ (uint)((ulonglong)this_00 >> 4)) *
                -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        if (*(int *)&(pTVar1->Elements).field_0x8 != *(int *)&(pTVar1->Elements).field_0x34) {
          FVar8 = (pTVar1->Hash).SecondaryData;
          if (FVar8 == (ForElementType<FSetElementId>)0x0) {
            FVar8 = (ForElementType<FSetElementId>)&pTVar1->Hash;
          }
          iVar5 = *(int *)((longlong)FVar8 +
                          (ulonglong)(pTVar1->HashSize - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
          if (iVar5 != -1) {
            do {
              if (*(UPCGGraph **)(*(longlong *)&pTVar1->Elements + (longlong)iVar5 * 0x10) ==
                  this_00) {
                return true;
              }
              iVar5 = *(int *)(*(longlong *)&pTVar1->Elements + 8 + (longlong)iVar5 * 0x10);
            } while (iVar5 != -1);
          }
        }
        local_18._0_8_ = **(undefined8 **)this;
        local_18._8_8_ = (*(undefined8 **)this)[1];
        bVar3 = UPCGGraph::ForEachNodeRecursively_Internal(this_00,&local_18,pTVar1);
        return bVar3;
      }
    }
  }
  return true;
}

// AddEdge @ 149ef3870

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

UPCGNode * __thiscall
UPCGGraph::AddEdge(UPCGGraph *this,UPCGNode *param_1,FName *param_2,UPCGNode *param_3,FName *param_4
                  )

{
  AddLabeledEdge(this,param_1,param_2,param_3,param_4);
  return param_3;
}

// AddLabeledEdge @ 149ef38a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UPCGGraph::AddLabeledEdge
          (UPCGGraph *this,UPCGNode *param_1,FName *param_2,UPCGNode *param_3,FName *param_4)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  UPCGPin *this_00;
  UPCGPin *this_01;
  FStaticBasicLogRecord *pFVar4;
  undefined1 auStackY_e8 [32];
  FName local_b8;
  FString local_b0;
  FString local_a0;
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  if ((param_1 == (UPCGNode *)0x0) || (param_3 == (UPCGNode *)0x0)) {
    if (1 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
  }
  else {
    this_00 = UPCGNode::GetOutputPin(param_1,param_2);
    if (this_00 == (UPCGPin *)0x0) {
      if ((byte)LogPCG._0_1_ < 2) {
        return false;
      }
      ::FName::ToString(param_2,&local_a0);
      local_b8 = (FName)param_1->_padding_;
      ::FName::ToString(&local_b8,&local_b0);
      pFVar4 = &::LOG_Static;
    }
    else {
      this_01 = UPCGNode::GetInputPin(param_3,param_4);
      if (this_01 != (UPCGPin *)0x0) {
        local_5c = 0x80;
        local_88._0_8_ = (FScriptContainerElement *)0x0;
        local_88._8_8_ = 0;
        local_68 = (void *)0x0;
        local_60 = 0;
        local_54 = 0;
        local_48 = (ForElementType<FSetElementId>)0x0;
        local_40 = 0;
        local_58 = 0xffffffff;
        UPCGPin::AddEdgeTo(this_00,this_01,
                           (TSet<UPCGNode_*,DefaultKeyFuncs<UPCGNode_*,0>,FDefaultSetAllocator> *)
                           local_88);
        bVar3 = false;
        bVar2 = UPCGPin::AllowsMultipleConnections(this_01);
        if (!bVar2) {
          bVar3 = UPCGPin::BreakAllIncompatibleEdges
                            (this_01,(TSet<UPCGNode_*,DefaultKeyFuncs<UPCGNode_*,0>,FDefaultSetAllocator>
                                      *)local_88);
        }
        PCGGraphUtils::NotifyTouchedNodes
                  ((TSet<UPCGNode_*,DefaultKeyFuncs<UPCGNode_*,0>,FDefaultSetAllocator> *)local_88,
                   Structural);
        local_40 = 0;
        if (local_48 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_48);
        }
        iVar1 = SUB84(local_88._8_8_,4);
        local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
        if (iVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
        }
        local_58 = 0xffffffff;
        local_54 = 0;
        local_60 = 0;
        if (0x80 < local_5c) {
          local_5c = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
        }
        if (local_68 != (void *)0x0) {
          FMemory::Free(local_68);
        }
        if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_88._0_8_);
          return bVar3;
        }
        return bVar3;
      }
      if ((byte)LogPCG._0_1_ < 2) {
        return false;
      }
      ::FName::ToString(param_4,&local_a0);
      local_b8 = (FName)param_3->_padding_;
      ::FName::ToString(&local_b8,&local_b0);
      pFVar4 = &::LOG_Static;
    }
    UE::Logging::Private::BasicLog<2>(pFVar4,(FLogCategoryBase *)&LogPCG);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
  }
  return false;
}

// AddNode @ 149ef3b20

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

UPCGNode * __thiscall UPCGGraph::AddNode(UPCGGraph *this,UPCGSettingsInterface *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  UPCGNode *pUVar8;
  UPCGNode *local_18 [2];
  
  if (param_1 != (UPCGSettingsInterface *)0x0) {
    lVar6 = (**(code **)(param_1->_padding_ + 0x388))(param_1);
    if (lVar6 != 0) {
      plVar7 = (longlong *)(**(code **)(param_1->_padding_ + 0x388))(param_1);
      pUVar8 = (UPCGNode *)(**(code **)(*plVar7 + 0x3a0))(plVar7);
      if (pUVar8 != (UPCGNode *)0x0) {
        UObjectBase::AtomicallySetFlags((UObjectBase *)pUVar8,RF_Transactional);
        UPCGNode::SetSettingsInterface(pUVar8,param_1,true);
        (**(code **)(pUVar8->_padding_ + 0x170))(pUVar8,0,this,0x10);
        local_18[0] = pUVar8;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar8);
        }
        pFVar2 = (this->Nodes).AllocatorInstance.Data;
        if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
           ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Nodes).ArrayMax * 8)) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            pUVar8 = (UPCGNode *)(*pcVar3)();
            return pUVar8;
          }
        }
        iVar5 = (this->Nodes).ArrayNum;
        piVar1 = &(this->Nodes).ArrayMax;
        if (iVar5 == *piVar1) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Nodes).AllocatorInstance,piVar1);
        }
        (this->Nodes).ArrayNum = iVar5 + 1;
        *(UPCGNode **)((this->Nodes).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_18[0] != (UPCGNode *)0x0)
           ) {
          UE::GC::MarkAsReachable((UObject *)local_18[0]);
        }
      }
      return pUVar8;
    }
  }
  return (UPCGNode *)0x0;
}

// AddNode @ 149ef3ca0

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void __thiscall UPCGGraph::AddNode(UPCGGraph *this,UPCGNode *param_1)

{
  UPCGNode *local_res10 [3];
  TArrayView<UPCGNode_*,int> local_18;
  
  local_18.ArrayNum = 1;
  local_18.DataPtr = local_res10;
  local_res10[0] = param_1;
  AddNodes_Internal(this,&local_18);
  return;
}

// AddNodeCopy @ 149ef3ce0

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

UPCGNode * __thiscall
UPCGGraph::AddNodeCopy(UPCGGraph *this,UPCGSettings *param_1,UPCGSettings **param_2)

{
  UClass *pUVar1;
  UPCGSettings *pUVar2;
  UPCGNode *pUVar3;
  
  if (param_1 == (UPCGSettings *)0x0) {
    return (UPCGNode *)0x0;
  }
  pUVar1 = Z_Construct_UClass_UPCGSettings_NoRegister();
  pUVar2 = (UPCGSettings *)
           DuplicateObject_Internal(pUVar1,(UObject *)param_1,(UObject *)0x0,(FName)0x0);
  pUVar3 = AddNode(this,(UPCGSettingsInterface *)pUVar2);
  if (pUVar2 != (UPCGSettings *)0x0) {
    (**(code **)(pUVar2->_padding_ + 0x170))(pUVar2,0,pUVar3,0x10);
  }
  *param_2 = pUVar2;
  return pUVar3;
}

// AddNodeInstance @ 149ef3d80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGNode * __thiscall UPCGGraph::AddNodeInstance(UPCGGraph *this,UPCGSettings *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGSettingsInstance *this_00;
  UPCGNode *pUVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if (param_1 == (UPCGSettings *)0x0) {
    pUVar3 = (UPCGNode *)0x0;
  }
  else {
    pUVar1 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = Z_Construct_UClass_UPCGSettingsInstance_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar2);
    local_98._8_8_ = pUVar1;
    this_00 = (UPCGSettingsInstance *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar4 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar4 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
    UPCGSettingsInstance::SetSettings(this_00,param_1);
    pUVar3 = AddNode(this,(UPCGSettingsInterface *)this_00);
    if (pUVar3 != (UPCGNode *)0x0) {
      (**(code **)(this_00->_padding_ + 0x170))(this_00,0,pUVar3,0x10);
      UObjectBase::AtomicallySetFlags((UObjectBase *)this_00,RF_Transactional);
    }
  }
  return pUVar3;
}

// AddNodeOfType @ 149ef3e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGNode * __thiscall
UPCGGraph::AddNodeOfType(UPCGGraph *this,TSubclassOf<UPCGSettings> param_1,UPCGSettings **param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  FName FVar4;
  FName FVar5;
  UClass *pUVar6;
  UPackage *pUVar7;
  UClass *pUVar8;
  UPCGSettings *pUVar9;
  UPCGNode *pUVar10;
  longlong *plVar11;
  undefined1 auStack_e8 [32];
  FName local_c8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  local_c8.ComparisonIndex.Value = 0;
  local_c8.Number = 0;
  if (lVar2 != 0) {
    pUVar6 = Z_Construct_UClass_UPCGSettings_NoRegister();
    if (pUVar6 != (UClass *)0x0) {
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pUVar6 = *(UClass **)param_1.Class.field0_0x0;
        goto LAB_149ef3eff;
      }
    }
  }
  pUVar6 = (UClass *)0x0;
LAB_149ef3eff:
  pUVar7 = GetTransientPackage();
  FVar4 = local_c8;
  if (local_c8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar7,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar8 = Z_Construct_UClass_UPCGSettings_NoRegister();
  CheckIsClassChildOf_Internal(pUVar8,pUVar6);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar6);
  FVar5 = local_c8;
  local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_b8._56_8_ = (UPackage *)0x0;
  local_c8.ComparisonIndex = FVar4.ComparisonIndex.Value;
  local_c8.Number = FVar4.Number;
  local_b8._16_4_ = local_c8.ComparisonIndex.Value;
  local_b8._20_4_ = local_c8.Number;
  local_b8._24_4_ = RF_Transactional;
  local_b8._40_8_ = (UObject *)0x0;
  local_b8[0x20] = false;
  local_c8 = FVar5;
  local_b8._8_8_ = pUVar7;
  pUVar9 = (UPCGSettings *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar11 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar11 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  if (pUVar9 == (UPCGSettings *)0x0) {
    pUVar10 = (UPCGNode *)0x0;
  }
  else {
    pUVar10 = AddNode(this,(UPCGSettingsInterface *)pUVar9);
    if (pUVar10 != (UPCGNode *)0x0) {
      (**(code **)(pUVar9->_padding_ + 0x170))(pUVar9,0,pUVar10,0x10);
    }
    *param_2 = pUVar9;
  }
  return pUVar10;
}

// AddNodes @ 149ef4000

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void __thiscall
UPCGGraph::AddNodes(UPCGGraph *this,TArray<UPCGNode_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uStack_1c;
  TArrayView<UPCGNode_*,int> local_18;
  
  pFVar2 = (param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar1;
  local_18.DataPtr = (UPCGNode **)pFVar2;
  AddNodes_Internal(this,&local_18);
  return;
}

// AddNodes_Internal @ 149ef4070

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void __thiscall UPCGGraph::AddNodes_Internal(UPCGGraph *this,TArrayView<UPCGNode_*,int> *param_1)

{
  UPCGNode **ppUVar1;
  UPCGNode *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UPCGNode **ppUVar7;
  UPCGNode *local_28 [2];
  
  if (param_1->ArrayNum != 0) {
    ppUVar7 = param_1->DataPtr;
    ppUVar1 = ppUVar7 + param_1->ArrayNum;
    for (; ppUVar7 != ppUVar1; ppUVar7 = ppUVar7 + 1) {
      pUVar2 = *ppUVar7;
      if ((pUVar2 == (UPCGNode *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Node",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGGraph.cpp"
                             ,0x4a9,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (**(code **)(pUVar2->_padding_ + 0x170))(pUVar2,0,this,0x10);
      local_28[0] = pUVar2;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      pFVar3 = (this->Nodes).AllocatorInstance.Data;
      if (((pFVar3 <= (FScriptContainerElement *)local_28) &&
          ((FScriptContainerElement *)local_28 < pFVar3 + (longlong)(this->Nodes).ArrayMax * 8)) &&
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
      iVar6 = (this->Nodes).ArrayNum;
      if (iVar6 == (this->Nodes).ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->Nodes).AllocatorInstance,&(this->Nodes).ArrayMax);
      }
      (this->Nodes).ArrayNum = iVar6 + 1;
      *(UPCGNode **)((this->Nodes).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_28[0];
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_28[0] != (UPCGNode *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)local_28[0]);
      }
    }
  }
  return;
}

// AddReferencedObjects @ 149ef4440

void __cdecl UPCGGraph::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  TReferenceControllerBase<1> *pTVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  UClass *pUVar11;
  UScriptStruct *pUVar12;
  FString *pFVar13;
  wchar_t *pwVar14;
  uint uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  wchar_t *pwVar18;
  int iVar19;
  undefined1 *puVar20;
  int iVar21;
  uint *puVar22;
  longlong lVar23;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_e8;
  undefined4 uStack_ac;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  FString local_68;
  FString local_58;
  FString local_48;
  
  if (param_1 == (UObject *)0x0) {
    pFVar13 = GetTypeName<UPCGGraph>(&local_68);
    if ((pFVar13->Data).ArrayNum == 0) {
      pwVar18 = L"";
    }
    else {
      pwVar18 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar18);
  }
  pUVar11 = GetPrivateStaticClass();
  iVar3 = (int)pUVar11->_padding_;
  if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar3) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar3 * 8) !=
      &pUVar11->_padding_)) {
    pFVar13 = GetTypeName<UPCGGraph>(&local_58);
    pwVar18 = L"";
    if ((pFVar13->Data).ArrayNum == 0) {
      pwVar14 = L"";
    }
    else {
      pwVar14 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
    }
    pFVar13 = GetFullNameForCastLogError<UObject>(&local_48,param_1);
    if ((pFVar13->Data).ArrayNum != 0) {
      pwVar18 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar18,pwVar14);
  }
  iVar3 = *(int *)(param_1 + 0x12);
  puVar1 = &param_1[0x11].field_0x10;
  iVar19 = 0;
  uVar9 = 1;
  iVar21 = 0;
  iVar10 = 0;
  if (iVar3 != 0) {
    puVar22 = *(uint **)&param_1[0x11].field_0x20;
    if (*(uint **)&param_1[0x11].field_0x20 == (uint *)0x0) {
      puVar22 = (uint *)puVar1;
    }
    uVar4 = *puVar22;
    while (uVar4 == 0) {
      iVar19 = iVar19 + 1;
      iVar21 = iVar21 + 0x20;
      iVar10 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_149ef453b;
      uVar4 = puVar22[iVar19];
    }
    uVar9 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar9 * 2 + 1;
    lVar23 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    iVar10 = (int)lVar23 + -1 + iVar21;
    if (iVar3 < iVar10) {
      iVar10 = iVar3;
    }
  }
LAB_149ef453b:
  TStack_90._padding_ = CONCAT44(uVar9,iVar19);
  local_e8 = *(uint *)(param_1 + 0x12);
  uVar9 = local_e8 & 0xffffffe0;
  TStack_90.CurrentBitIndex = iVar10;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  iVar19 = (int)local_e8 >> 5;
  TStack_90._28_4_ = iVar10;
  TStack_90.BaseBitIndex = iVar21;
  uStack_70 = CONCAT44(uStack_ac,*(int *)&param_1[0x11].field_0x8 - *(int *)&param_1[0x12].field_0xc
                      );
  TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)local_e8 < 0) || (iVar3 < (int)local_e8)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar4 = *(uint *)(param_1 + 0x12);
  if (local_e8 != uVar4) {
    puVar20 = puVar1;
    if (*(undefined1 **)&param_1[0x11].field_0x20 != (undefined1 *)0x0) {
      puVar20 = *(undefined1 **)&param_1[0x11].field_0x20;
    }
    uVar15 = -1 << ((byte)local_e8 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar19 * 4);
    while (uVar15 == 0) {
      iVar19 = iVar19 + 1;
      uVar9 = uVar9 + 0x20;
      local_e8 = uVar4;
      if ((int)(((int)(uVar4 - 1) >> 0x1f & 0x1fU) + (uVar4 - 1)) >> 5 < iVar19) goto LAB_149ef4650;
      uVar15 = *(uint *)(puVar20 + (longlong)iVar19 * 4);
    }
    uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar23 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    local_e8 = (int)lVar23 + -1 + uVar9;
    if ((int)uVar4 < (int)local_e8) {
      local_e8 = uVar4;
    }
  }
LAB_149ef4650:
  while( true ) {
    if (*(int *)&param_1[0x11].field_0x8 - *(int *)&param_1[0x12].field_0xc != (int)uStack_70) {
      `TSparseArray<TSparseSetElement<TTuple<TTuple<unsigned_int,int>,TArray<TSharedPtr<FComputeGraphInstance,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_90.CurrentBitIndex == local_e8) &&
       (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar23 = (longlong)TStack_90.CurrentBitIndex * 0x20 + *(longlong *)(param_1 + 0x11);
    iVar3 = *(int *)(lVar23 + 0x10);
    puVar17 = *(undefined8 **)(lVar23 + 8);
    puVar16 = puVar17 + (longlong)iVar3 * 2;
    while( true ) {
      if (*(int *)(lVar23 + 0x10) != iVar3) {
        `TCheckedPointerIterator<TSharedPtr<FComputeGraphInstance,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      if (puVar17 == puVar16) break;
      pTVar5 = (TReferenceControllerBase<1> *)puVar17[1];
      pvVar6 = (void *)*puVar17;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      pUVar12 = FComputeGraphInstance::StaticStruct();
      FReferenceCollector::AddPropertyReferences(param_2,(UStruct *)pUVar12,pvVar6,(UObject *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      puVar17 = puVar17 + 2;
    }
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
  }
  UObject::AddReferencedObjects(param_1,param_2);
  return;
}

// AddUserParameters @ 149ef50e0

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */
/* WARNING: Enum "EPropertyBagAlterationResult": Some values do not have unique names */

EPropertyBagAlterationResult __thiscall
UPCGGraph::AddUserParameters
          (UPCGGraph *this,TArray<FPropertyBagPropertyDesc,TSizedDefaultAllocator<32>_> *param_1,
          UPCGGraph *param_2)

{
  int iVar1;
  FPropertyBagPropertyDesc *pFVar2;
  code *pcVar3;
  bool bVar4;
  EPropertyBagAlterationResult EVar5;
  FInstancedPropertyBag *pFVar6;
  undefined4 uStack_2c;
  TOptional<TArrayView<FGuid_const_,int>_>_u_0 local_28;
  TArrayView<FPropertyBagPropertyDesc_const_,int> local_18;
  
  pFVar2 = (FPropertyBagPropertyDesc *)(param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return EVar5;
    }
  }
  local_18._12_4_ = uStack_2c;
  local_18.ArrayNum = iVar1;
  local_18.DataPtr = pFVar2;
  EVar5 = FInstancedPropertyBag::AddProperties(&this->UserParameters,&local_18,true);
  if (EVar5 == NoOperation) {
    if (param_2 != (UPCGGraph *)0x0) {
      pFVar6 = (FInstancedPropertyBag *)(**(code **)(param_2->_padding_ + 0x2c0))(param_2);
      if (pFVar6 != (FInstancedPropertyBag *)0x0) {
        local_28.TypedValue.DataPtr = (FGuid *)0x0;
        local_28.TypedValue.ArrayNum = -1;
        FInstancedPropertyBag::CopyMatchingValuesByID
                  (&this->UserParameters,pFVar6,
                   (TOptional<TArrayView<FGuid_const_,int>_> *)&local_28.TypedValue);
      }
    }
    (**(code **)(this->_padding_ + 0x2d8))(this,10,0);
    EVar5 = NoOperation;
  }
  return EVar5;
}

// BeginDestroy @ 149ef56d0

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UPCGGraph::BeginDestroy(UPCGGraph *this)

{
  ForElementType<UObject_*> FVar1;
  void *_Dst;
  int iVar2;
  ForElementType<UObject_*> FVar3;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar4;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar5;
  FName aFStackX_8 [4];
  FString FStack_18;
  
  if (((uint)this->_padding_ >> 0xf & 1) == 0) {
    aFStackX_8[0] = (FName)this->_padding_;
    ::FName::ToString(aFStackX_8,&FStack_18);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogObj);
    if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
    }
  }
  UObject::SetLinker((UObject *)this,(FLinkerLoad *)0x0,-1,true,false);
  aFStackX_8[0].ComparisonIndex.Value = 0;
  aFStackX_8[0].Number = 0;
  UObjectBase::LowLevelRename((UObjectBase *)this,(FName)0x0,(UObject *)0x0);
  UObjectBase::SetExternalPackage((UObjectBase *)this,(UPackage *)0x0);
  pTVar5 = &DebugBeginDestroyed;
  pTVar4 = &DebugBeginDestroyed;
  if (DebugBeginDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
    pTVar4 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
             DebugBeginDestroyed.AllocatorInstance.SecondaryData;
  }
  FVar1 = (ForElementType<UObject_*>)((longlong)pTVar4 + (longlong)DebugBeginDestroyed.ArrayNum * 8)
  ;
  FVar3 = (ForElementType<UObject_*>)pTVar4;
  if ((ForElementType<UObject_*>)pTVar4 != FVar1) {
    while (*(UPCGGraph **)FVar3 != this) {
      FVar3 = (ForElementType<UObject_*>)((longlong)FVar3 + 8);
      if (FVar3 == FVar1) {
        return;
      }
    }
    iVar2 = (int)((longlong)FVar3 - (longlong)pTVar4 >> 3);
    if (iVar2 != -1) {
      if (DebugBeginDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
        pTVar5 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
                 DebugBeginDestroyed.AllocatorInstance.SecondaryData;
      }
      _Dst = (void *)((longlong)pTVar5 + (longlong)iVar2 * 8);
      memmove(_Dst,(void *)((longlong)_Dst + 8),
              (longlong)((DebugBeginDestroyed.ArrayNum - iVar2) + -1) << 3);
      DebugBeginDestroyed.ArrayNum = DebugBeginDestroyed.ArrayNum + -1;
    }
  }
  return;
}

// CacheGridSizesInternalNoLock @ 149ef5a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000149ef5f21) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UPCGGraph::CacheGridSizesInternalNoLock(UPCGGraph *this)

{
  ForElementType<unsigned_int> FVar1;
  int iVar2;
  UPCGNode *pUVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  UPCGSubsystem *pUVar9;
  APCGWorldActor *pAVar10;
  uint *puVar11;
  longlong lVar12;
  ForElementType<unsigned_int> FVar13;
  FScriptContainerElement *pFVar14;
  undefined1 auStack_f8 [32];
  uint *local_d8;
  ForElementType<unsigned_int> local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  uint local_a8;
  undefined1 local_a4;
  FIdentityFunctor local_a3 [3];
  uint local_a0 [2];
  FScriptContainerElement *local_98;
  ForElementType<unsigned_int> local_88;
  int local_48;
  int local_44;
  bool local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_40 = this->HiGenGridSize == Unbounded;
  local_88.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_48 = 0;
  local_44 = 0xd;
  local_a8 = GetDefaultGridSize(this);
  if (this->bUseHierarchicalGeneration == false) {
    uVar8 = GetDefaultGridSize(this);
    if ((((uVar8 / 100 & uVar8 / 100 - 1) == 0) && (uVar8 - 400 < 0x18fffe71)) ||
       ((pUVar9 = UPCGSubsystem::GetSubsystemForCurrentWorld(), pUVar9 == (UPCGSubsystem *)0x0 ||
        ((pAVar10 = UPCGSubsystem::GetPCGWorldActor(pUVar9), pAVar10 == (APCGWorldActor *)0x0 ||
         (pAVar10->PartitionGridSize == uVar8)))))) {
      FVar13 = (ForElementType<unsigned_int>)&local_88;
      if (local_88.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar13 = local_88.SecondaryData;
      }
      if ((ulonglong)FVar13 <= &local_a8) {
        FVar13 = (ForElementType<unsigned_int>)&local_88;
        if (local_88.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar13 = local_88.SecondaryData;
        }
        if (&local_a8 < (uint *)((longlong)FVar13 + (longlong)local_44 * 4)) {
          local_c0 = (longlong)local_48;
          local_b8 = 4;
          local_d8 = &local_a8;
          local_d0 = (ForElementType<unsigned_int>)&local_88;
          if (local_88.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            local_d0 = local_88.SecondaryData;
          }
          local_c8 = (longlong)local_44;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
      }
      if (local_48 == local_44) {
        local_48 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                             (0x404,&local_88,&local_44);
      }
      lVar12 = (longlong)local_48;
      FVar13 = (ForElementType<unsigned_int>)&local_88;
      if (local_88.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar13 = local_88.SecondaryData;
      }
      local_48 = local_48 + 1;
      *(uint *)((longlong)FVar13 + lVar12 * 4) = local_a8;
    }
  }
  else {
    iVar2 = (this->Nodes).ArrayNum;
    bVar6 = false;
    pFVar14 = (this->Nodes).AllocatorInstance.Data;
    local_98 = pFVar14 + (longlong)iVar2 * 8;
    while( true ) {
      pFVar5 = local_98;
      if ((this->Nodes).ArrayNum != iVar2) {
        local_a4 = 0;
        `TCheckedPointerIterator<TObjectPtr<UPCGNode>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_a4);
      }
      uVar8 = local_a8;
      if (pFVar14 == pFVar5) break;
      pUVar3 = *(UPCGNode **)pFVar14;
      AcquireSRWLockShared((PSRWLOCK)&this->NodeToGridSizeLock);
      puVar11 = TMapBase<UPCGNode_const_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGNode_const_*,unsigned_int,0>_>
                ::Find((TMapBase<UPCGNode_const_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGNode_const_*,unsigned_int,0>_>
                        *)&this->NodeToGridSize,pUVar3);
      if (puVar11 == (uint *)0x0) {
        ReleaseSRWLockShared((PSRWLOCK)&this->NodeToGridSizeLock);
        AcquireSRWLockExclusive((PSRWLOCK)&this->NodeToGridSizeLock);
        uVar8 = CalculateNodeGridSizeRecursive_Unsafe(this,pUVar3,uVar8);
        ReleaseSRWLockExclusive((PSRWLOCK)&this->NodeToGridSizeLock);
      }
      else {
        uVar8 = *puVar11;
        ReleaseSRWLockShared((PSRWLOCK)&this->NodeToGridSizeLock);
      }
      local_a0[0] = uVar8;
      if (((((uVar8 / 100 & uVar8 / 100 - 1) == 0) && (uVar8 - 400 < 0x18fffe71)) ||
          (pUVar9 = UPCGSubsystem::GetSubsystemForCurrentWorld(), pUVar9 == (UPCGSubsystem *)0x0))
         || ((pAVar10 = UPCGSubsystem::GetPCGWorldActor(pUVar9), pAVar10 == (APCGWorldActor *)0x0 ||
             (pAVar10->PartitionGridSize == uVar8)))) {
        FVar13 = (ForElementType<unsigned_int>)&local_88;
        if (local_88.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar13 = local_88.SecondaryData;
        }
        FVar1 = (ForElementType<unsigned_int>)((longlong)FVar13 + (longlong)local_48 * 4);
        for (; FVar13 != FVar1; FVar13 = (ForElementType<unsigned_int>)((longlong)FVar13 + 4)) {
          if (*(uint *)FVar13 == local_a0[0]) goto LAB_149ef5d9d;
        }
        FVar13 = (ForElementType<unsigned_int>)&local_88;
        if (local_88.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar13 = local_88.SecondaryData;
        }
        if ((ulonglong)FVar13 <= local_a0) {
          FVar13 = (ForElementType<unsigned_int>)&local_88;
          if (local_88.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar13 = local_88.SecondaryData;
          }
          if (local_a0 < (uint *)((longlong)FVar13 + (longlong)local_44 * 4)) {
            local_b8 = 4;
            local_d0 = (ForElementType<unsigned_int>)&local_88;
            if (local_88.SecondaryData != (ForElementType<unsigned_int>)0x0) {
              local_d0 = local_88.SecondaryData;
            }
            local_d8 = local_a0;
            local_c8 = (longlong)local_44;
            local_c0 = (longlong)local_48;
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar7) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
        }
        if (local_48 == local_44) {
          local_48 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                               (0x404,&local_88,&local_44);
        }
        lVar12 = (longlong)local_48;
        FVar13 = (ForElementType<unsigned_int>)&local_88;
        if (local_88.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar13 = local_88.SecondaryData;
        }
        local_48 = local_48 + 1;
        *(uint *)((longlong)FVar13 + lVar12 * 4) = local_a0[0];
LAB_149ef5d9d:
        pFVar14 = pFVar14 + 8;
      }
      else if (local_a0[0] == 0x80000000) {
        pFVar14 = pFVar14 + 8;
        local_40 = true;
      }
      else {
        if (local_a0[0] != 0) goto LAB_149ef5d9d;
        bVar6 = true;
        pFVar14 = pFVar14 + 8;
      }
    }
    if (bVar6) {
      FVar13 = (ForElementType<unsigned_int>)&local_88;
      if (local_88.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar13 = local_88.SecondaryData;
      }
      if ((ulonglong)FVar13 <= &local_a8) {
        FVar13 = (ForElementType<unsigned_int>)&local_88;
        if (local_88.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar13 = local_88.SecondaryData;
        }
        if (&local_a8 < (uint *)((longlong)FVar13 + (longlong)local_44 * 4)) {
          local_c0 = (longlong)local_48;
          local_b8 = 4;
          local_d8 = &local_a8;
          local_d0 = (ForElementType<unsigned_int>)&local_88;
          if (local_88.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            local_d0 = local_88.SecondaryData;
          }
          local_c8 = (longlong)local_44;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
      }
      if (local_48 == local_44) {
        local_48 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                             (0x404,&local_88,&local_44);
      }
      lVar12 = (longlong)local_48;
      FVar13 = (ForElementType<unsigned_int>)&local_88;
      if (local_88.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar13 = local_88.SecondaryData;
      }
      local_48 = local_48 + 1;
      *(uint *)((longlong)FVar13 + lVar12 * 4) = local_a8;
    }
    FVar13 = (ForElementType<unsigned_int>)&local_88;
    if (local_88.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar13 = local_88.SecondaryData;
    }
    AlgoImpl::
    IntroSortInternal<unsigned_int,int,FIdentityFunctor,TDereferenceWrapper<unsigned_int,_UPCGGraph::CacheGridSizesInternalNoLock_::__l10::<lambda_1>_>_>
              ((uint *)FVar13,local_48,local_a3[0],(<lambda_1> *)local_a3);
  }
  if ((TOptional<UPCGGraph::FGridInfo> *)&local_88 != &this->CachedGridInfo) {
    if (((this->CachedGridInfo).bIsSet != false) &&
       (FVar13 = (this->CachedGridInfo).TypedValue.GridSizes.AllocatorInstance.SecondaryData,
       FVar13 != (ForElementType<unsigned_int>)0x0)) {
      FMemory::Free((void *)FVar13);
    }
    (this->CachedGridInfo).TypedValue.GridSizes.AllocatorInstance.SecondaryData =
         (ForElementType<unsigned_int>)0x0;
    if (local_88.SecondaryData == (ForElementType<unsigned_int>)0x0) {
      *(undefined8 *)(this->CachedGridInfo).TypedValue.GridSizes.AllocatorInstance.InlineData =
           local_88.InlineData._0_8_;
      *(undefined8 *)((this->CachedGridInfo).TypedValue.GridSizes.AllocatorInstance.InlineData + 8)
           = local_88.InlineData._8_8_;
      *(undefined8 *)
       ((this->CachedGridInfo).TypedValue.GridSizes.AllocatorInstance.InlineData + 0x10) =
           local_88.InlineData._16_8_;
      *(undefined8 *)
       ((this->CachedGridInfo).TypedValue.GridSizes.AllocatorInstance.InlineData + 0x18) =
           local_88.InlineData._24_8_;
      *(undefined8 *)
       ((this->CachedGridInfo).TypedValue.GridSizes.AllocatorInstance.InlineData + 0x20) =
           local_88.InlineData._32_8_;
      *(undefined8 *)
       ((this->CachedGridInfo).TypedValue.GridSizes.AllocatorInstance.InlineData + 0x28) =
           local_88.InlineData._40_8_;
      *(undefined4 *)
       ((this->CachedGridInfo).TypedValue.GridSizes.AllocatorInstance.InlineData + 0x30) =
           local_88.InlineData._48_4_;
    }
    (this->CachedGridInfo).TypedValue.GridSizes.AllocatorInstance.SecondaryData =
         local_88.SecondaryData;
    (this->CachedGridInfo).TypedValue.GridSizes.ArrayNum = local_48;
    (this->CachedGridInfo).TypedValue.GridSizes.ArrayMax = local_44;
    (this->CachedGridInfo).TypedValue.bHasUnbounded = local_40;
    (this->CachedGridInfo).bIsSet = true;
    local_88.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_48 = 0;
    local_44 = 0xd;
  }
  if (local_88.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_88.SecondaryData);
  }
  return;
}

// CalculateNodeGridSizeRecursive_Unsafe @ 149ef5f90

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

uint __thiscall
UPCGGraph::CalculateNodeGridSizeRecursive_Unsafe(UPCGGraph *this,UPCGNode *param_1,uint param_2)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  UPCGNode *pUVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  UPCGHiGenGridSizeSettings *this_00;
  UClass *pUVar11;
  UPCGSubsystem *this_01;
  APCGWorldActor *pAVar12;
  ulonglong uVar13;
  longlong *plVar14;
  FScriptContainerElement *pFVar15;
  TPairInitializer<UPCGNode_const_*_const_&,unsigned_int_const_&> local_res8;
  uint local_res20 [2];
  UPCGNode *local_48;
  uint *local_40;
  
  local_res8.Value = (uint *)param_1;
  puVar10 = TMapBase<UPCGNode_const_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGNode_const_*,unsigned_int,0>_>
            ::Find((TMapBase<UPCGNode_const_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGNode_const_*,unsigned_int,0>_>
                    *)&this->NodeToGridSize,param_1);
  if (puVar10 != (uint *)0x0) {
    return *puVar10;
  }
  local_res20[0] = param_2;
  this_00 = (UPCGHiGenGridSizeSettings *)UPCGNode::GetSettings(param_1);
  if (this_00 != (UPCGHiGenGridSizeSettings *)0x0) {
    pUVar11 = Z_Construct_UClass_UPCGHiGenGridSizeSettings_NoRegister();
    iVar4 = (int)pUVar11->_padding_;
    if (((iVar4 <= *(int *)(this_00->_padding_ + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
         &pUVar11->_padding_)) && ((char)this_00->_padding_ != '\0')) {
      uVar8 = UPCGHiGenGridSizeSettings::GetGridSize(this_00);
      if (local_res20[0] < uVar8) {
        uVar8 = local_res20[0];
      }
      goto LAB_149ef6167;
    }
  }
  uVar3 = ((TArray<TObjectPtr<UPCGPin>,TSizedDefaultAllocator<32>_> *)
          ((longlong)local_res8.Value + 0x68))->ArrayNum;
  uVar13 = (ulonglong)(int)uVar3;
  pFVar15 = (((TArray<TObjectPtr<UPCGPin>,TSizedDefaultAllocator<32>_> *)
             ((longlong)local_res8.Value + 0x68))->AllocatorInstance).Data;
  local_48 = (UPCGNode *)local_res8.Value;
  pFVar1 = pFVar15 + uVar13 * 8;
  while( true ) {
    if ((local_48->InputPins).ArrayNum != (int)uVar13) {
      `TCheckedPointerIterator<TObjectPtr<UPCGPin>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    uVar8 = local_res20[0];
    if (pFVar15 == pFVar1) break;
    lVar5 = *(longlong *)pFVar15;
    if (lVar5 != 0) {
      plVar14 = *(longlong **)(lVar5 + 0x38);
      iVar4 = *(int *)(lVar5 + 0x40);
      plVar2 = plVar14 + iVar4;
      while( true ) {
        if (*(int *)(lVar5 + 0x40) != iVar4) {
          `TCheckedPointerIterator<TObjectPtr<UPCGEdge>_const_,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(&local_res8);
        }
        if (plVar14 == plVar2) break;
        uVar8 = local_res20[0];
        if (((((*plVar14 != 0) && (lVar6 = *(longlong *)(*plVar14 + 0x48), lVar6 != 0)) &&
             (pUVar7 = *(UPCGNode **)(lVar6 + 0x28), pUVar7 != (UPCGNode *)0x0)) &&
            (((uVar9 = CalculateNodeGridSizeRecursive_Unsafe(this,pUVar7,param_2),
              (uVar9 / 100 & uVar9 / 100 - 1) == 0 && (uVar9 - 400 < 0x18fffe71)) ||
             ((this_01 = UPCGSubsystem::GetSubsystemForCurrentWorld(),
              this_01 == (UPCGSubsystem *)0x0 ||
              ((pAVar12 = UPCGSubsystem::GetPCGWorldActor(this_01), pAVar12 == (APCGWorldActor *)0x0
               || (uVar8 = local_res20[0], pAVar12->PartitionGridSize == uVar9)))))))) &&
           (uVar8 = uVar9, local_res20[0] < uVar9)) {
          uVar8 = local_res20[0];
        }
        local_res20[0] = uVar8;
        plVar14 = plVar14 + 1;
      }
    }
    pFVar15 = pFVar15 + 8;
    uVar13 = (ulonglong)uVar3;
  }
LAB_149ef6167:
  local_res20[0] = uVar8;
  if (local_res20[0] != 0) {
    local_48 = (UPCGNode *)&local_res8.Value;
    local_40 = local_res20;
    TSet<TTuple<UPCGNode_const_*,unsigned_int>,TDefaultMapHashableKeyFuncs<UPCGNode_const_*,unsigned_int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UPCGNode_const_*_const_&,unsigned_int_const_&>_>
              ((TSet<TTuple<UPCGNode_const_*,unsigned_int>,TDefaultMapHashableKeyFuncs<UPCGNode_const_*,unsigned_int,0>,FDefaultSetAllocator>
                *)&this->NodeToGridSize,&local_res8,(bool *)&local_48);
  }
  return local_res20[0];
}

// CalculateNodeGridSizesRecursiveNoLock @ 149ef61c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_> * __thiscall
UPCGGraph::CalculateNodeGridSizesRecursiveNoLock
          (UPCGGraph *this,
          TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__,UPCGNode *param_1,uint param_2)

{
  longlong lVar1;
  UPCGNode *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong *plVar6;
  TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_> *pTVar7;
  longlong lVar8;
  uint uVar9;
  ForElementType<unsigned_int> FVar10;
  int iVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  longlong *plVar14;
  ForElementType<unsigned_int> FVar15;
  TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_> *pTVar16;
  undefined1 auStackY_1a8 [32];
  FIdentityFunctor local_158 [4];
  uint local_154;
  undefined1 local_150;
  undefined1 local_14f;
  undefined1 local_14e [2];
  uint local_14c;
  uint local_148;
  uint local_144;
  UPCGGraph *local_140;
  TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_> *local_138;
  UPCGNode *local_130;
  TPairInitializer<UPCGNode_const_*_const_&,TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_>_const_&>
  local_128;
  UPCGNode *local_118;
  TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_> *local_110;
  UPCGNode **local_108;
  TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_> *local_100;
  TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_> local_f8;
  undefined1 local_a8 [56];
  ForElementType<unsigned_int> local_70;
  undefined8 local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if (param_1 == (UPCGNode *)0x0) {
    (__return_storage_ptr__->AllocatorInstance).SecondaryData = (ForElementType<unsigned_int>)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0xd;
  }
  else {
    uVar9 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
    local_14c = param_2;
    local_140 = this;
    local_130 = param_1;
    local_110 = __return_storage_ptr__;
    if (*(int *)&(this->NodeToAllGridSizes).field_0x8 !=
        *(int *)&(this->NodeToAllGridSizes).field_0x34) {
      puVar12 = *(undefined1 **)&(this->NodeToAllGridSizes).field_0x40;
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = &(this->NodeToAllGridSizes).field_0x38;
      }
      iVar5 = *(int *)(puVar12 +
                      (ulonglong)
                      (*(int *)&(this->NodeToAllGridSizes).field_0x48 - 1U & (uVar9 >> 0x10 ^ uVar9)
                      ) * 4);
      if (iVar5 != -1) {
        do {
          plVar6 = (longlong *)((longlong)iVar5 * 0x58 + *(longlong *)&this->NodeToAllGridSizes);
          if ((UPCGNode *)*plVar6 == param_1) {
            plVar14 = plVar6 + 1;
            if (plVar6 == (longlong *)0x0) {
              plVar14 = (longlong *)0x0;
            }
            if (plVar14 != (longlong *)0x0) {
              (__return_storage_ptr__->AllocatorInstance).SecondaryData =
                   (ForElementType<unsigned_int>)0x0;
              plVar6 = (longlong *)plVar14[7];
              iVar5 = (int)plVar14[8];
              __return_storage_ptr__->ArrayNum = iVar5;
              if (plVar6 != (longlong *)0x0) {
                plVar14 = plVar6;
              }
              if (iVar5 == 0) {
                __return_storage_ptr__->ArrayMax = 0xd;
                return __return_storage_ptr__;
              }
              UE::Core::Private::
              ReallocForCopy<2,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                        (4,4,iVar5,0,&__return_storage_ptr__->AllocatorInstance,iVar5,
                         &__return_storage_ptr__->ArrayMax);
              FVar15 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
              FVar10 = (ForElementType<unsigned_int>)__return_storage_ptr__;
              if (FVar15 != (ForElementType<unsigned_int>)0x0) {
                FVar10 = FVar15;
              }
              memcpy((void *)FVar10,plVar14,(longlong)iVar5 << 2);
              return __return_storage_ptr__;
            }
            break;
          }
          iVar5 = (int)plVar6[10];
        } while (iVar5 != -1);
      }
    }
    local_f8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_f8.ArrayNum = 0;
    local_f8.ArrayMax = 0xd;
    local_154 = CalculateNodeGridSizeRecursive_Unsafe(this,param_1,param_2);
    FVar15 = (ForElementType<unsigned_int>)&local_f8;
    if (local_f8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar15 = local_f8.AllocatorInstance.SecondaryData;
    }
    for (FVar10 = FVar15;
        FVar10 != (ForElementType<unsigned_int>)((longlong)FVar15 + (longlong)local_f8.ArrayNum * 4)
        ; FVar10 = (ForElementType<unsigned_int>)((longlong)FVar10 + 4)) {
      if (*(uint *)FVar10 == local_154) {
        if ((int)((longlong)FVar10 - (longlong)FVar15 >> 2) != -1) goto LAB_149ef648a;
        break;
      }
    }
    FVar15 = (ForElementType<unsigned_int>)&local_f8;
    if (local_f8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar15 = local_f8.AllocatorInstance.SecondaryData;
    }
    if ((ulonglong)FVar15 <= &local_154) {
      FVar15 = (ForElementType<unsigned_int>)&local_f8;
      if (local_f8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar15 = local_f8.AllocatorInstance.SecondaryData;
      }
      if ((&local_154 < (uint *)((longlong)FVar15 + (longlong)local_f8.ArrayMax * 4)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_> *)
                 (*pcVar3)();
        return pTVar7;
      }
    }
    if (local_f8.ArrayNum == local_f8.ArrayMax) {
      local_f8.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                     (0x404,&local_f8.AllocatorInstance,&local_f8.ArrayMax);
    }
    lVar8 = (longlong)local_f8.ArrayNum;
    FVar15 = (ForElementType<unsigned_int>)&local_f8;
    if (local_f8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar15 = local_f8.AllocatorInstance.SecondaryData;
    }
    local_f8.ArrayNum = local_f8.ArrayNum + 1;
    *(uint *)((longlong)FVar15 + lVar8 * 4) = local_154;
LAB_149ef648a:
    local_118 = local_130;
    local_144 = (local_130->InputPins).ArrayNum;
    uVar13 = (ulonglong)(int)local_144;
    pTVar16 = (TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_> *)
              (local_130->InputPins).AllocatorInstance.Data;
    pTVar7 = (TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_> *)
             ((pTVar16->AllocatorInstance).InlineData + uVar13 * 8);
    local_128.Value = pTVar7;
    while( true ) {
      local_138 = pTVar16;
      if ((local_118->InputPins).ArrayNum != (int)uVar13) {
        `TCheckedPointerIterator<TObjectPtr<UPCGPin>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_150);
      }
      if (pTVar16 == pTVar7) break;
      lVar8 = *(longlong *)(pTVar16->AllocatorInstance).InlineData;
      if (lVar8 != 0) {
        plVar14 = *(longlong **)(lVar8 + 0x38);
        iVar5 = *(int *)(lVar8 + 0x40);
        plVar6 = plVar14 + iVar5;
        while( true ) {
          if (*(int *)(lVar8 + 0x40) != iVar5) {
            `TCheckedPointerIterator<TObjectPtr<UPCGEdge>_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_14f);
          }
          pTVar16 = local_138;
          pTVar7 = local_128.Value;
          if (plVar14 == plVar6) break;
          if (((*plVar14 != 0) && (lVar1 = *(longlong *)(*plVar14 + 0x48), lVar1 != 0)) &&
             (pUVar2 = *(UPCGNode **)(lVar1 + 0x28), pUVar2 != (UPCGNode *)0x0)) {
            CalculateNodeGridSizesRecursiveNoLock
                      (this,(TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_>
                             *)local_a8,pUVar2,local_14c);
            iVar11 = (int)local_68;
            FVar15 = (ForElementType<unsigned_int>)local_a8;
            if (local_70 != (ForElementType<unsigned_int>)0x0) {
              FVar15 = local_70;
            }
            FVar10 = (ForElementType<unsigned_int>)((longlong)FVar15 + (longlong)iVar11 * 4);
            while( true ) {
              if ((int)local_68 != iVar11) {
                `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::
                operator()(local_14e);
              }
              if (FVar15 == FVar10) break;
              local_148 = *(uint *)FVar15;
              TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_>::
              AddUniqueImpl<unsigned_int_const_&>(&local_f8,&local_148);
              FVar15 = (ForElementType<unsigned_int>)((longlong)FVar15 + 4);
            }
            this = local_140;
            if (local_70 != (ForElementType<unsigned_int>)0x0) {
              FMemory::Free((void *)local_70);
              this = local_140;
            }
          }
          plVar14 = plVar14 + 1;
        }
      }
      pTVar16 = (TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_> *)
                ((pTVar16->AllocatorInstance).InlineData + 8);
      uVar13 = (ulonglong)local_144;
    }
    FVar15 = (ForElementType<unsigned_int>)&local_f8;
    if (local_f8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar15 = local_f8.AllocatorInstance.SecondaryData;
    }
    AlgoImpl::
    IntroSortInternal<unsigned_int,int,FIdentityFunctor,TDereferenceWrapper<unsigned_int,_UPCGGraph::CalculateNodeGridSizesRecursiveNoLock_::__l2::<lambda_1>_>_>
              ((uint *)FVar15,local_f8.ArrayNum,local_158[0],(<lambda_1> *)local_158);
    local_108 = &local_130;
    local_100 = &local_f8;
    TSet<TTuple<UPCGNode_const_*,TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<UPCGNode_const_*,TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<UPCGNode_const_*_const_&,TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_>_const_&>_>
              ((TSet<TTuple<UPCGNode_const_*,TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<UPCGNode_const_*,TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
                *)&this->NodeToAllGridSizes,&local_128,(bool *)&local_108);
    (local_110->AllocatorInstance).SecondaryData = (ForElementType<unsigned_int>)0x0;
    if (local_f8.AllocatorInstance.SecondaryData == (ForElementType<unsigned_int>)0x0) {
      *(undefined8 *)(local_110->AllocatorInstance).InlineData =
           local_f8.AllocatorInstance.InlineData._0_8_;
      *(undefined8 *)((local_110->AllocatorInstance).InlineData + 8) =
           local_f8.AllocatorInstance.InlineData._8_8_;
      *(undefined8 *)((local_110->AllocatorInstance).InlineData + 0x10) =
           local_f8.AllocatorInstance.InlineData._16_8_;
      *(undefined8 *)((local_110->AllocatorInstance).InlineData + 0x18) =
           local_f8.AllocatorInstance.InlineData._24_8_;
      *(undefined8 *)((local_110->AllocatorInstance).InlineData + 0x20) =
           local_f8.AllocatorInstance.InlineData._32_8_;
      *(undefined8 *)((local_110->AllocatorInstance).InlineData + 0x28) =
           local_f8.AllocatorInstance.InlineData._40_8_;
      *(undefined4 *)((local_110->AllocatorInstance).InlineData + 0x30) =
           local_f8.AllocatorInstance.InlineData._48_4_;
    }
    (local_110->AllocatorInstance).SecondaryData = local_f8.AllocatorInstance.SecondaryData;
    local_110->ArrayNum = local_f8.ArrayNum;
    local_110->ArrayMax = local_f8.ArrayMax;
    __return_storage_ptr__ = local_110;
  }
  return __return_storage_ptr__;
}

// Contains @ 149ef9020

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

bool __thiscall UPCGGraph::Contains(UPCGGraph *this,UPCGNode *param_1)

{
  FScriptContainerElement *pFVar1;
  UPCGNode *pUVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  
  pUVar2 = (this->InputNode).field0_0x0.DebugPtr;
  if (pUVar2 == (UPCGNode *)0x0) {
    bVar4 = param_1 == (UPCGNode *)0x0;
  }
  else {
    bVar4 = pUVar2 == param_1;
  }
  if (!bVar4) {
    pUVar2 = (this->OutputNode).field0_0x0.DebugPtr;
    if (pUVar2 == (UPCGNode *)0x0) {
      bVar4 = param_1 == (UPCGNode *)0x0;
    }
    else {
      bVar4 = pUVar2 == param_1;
    }
    if (!bVar4) {
      pFVar3 = (this->Nodes).AllocatorInstance.Data;
      pFVar1 = pFVar3 + (longlong)(this->Nodes).ArrayNum * 8;
      while( true ) {
        if (pFVar3 == pFVar1) {
          return false;
        }
        if (*(UPCGNode **)pFVar3 == (UPCGNode *)0x0) {
          bVar4 = param_1 == (UPCGNode *)0x0;
        }
        else {
          bVar4 = *(UPCGNode **)pFVar3 == param_1;
        }
        if (bVar4) break;
        pFVar3 = pFVar3 + 8;
      }
    }
  }
  return true;
}

// Contains @ 149ef9090

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

bool __thiscall UPCGGraph::Contains(UPCGGraph *this,UPCGGraph *param_1)

{
  undefined1 local_res10 [24];
  UPCGGraph *local_28;
  undefined1 *local_20;
  code *local_18;
  UPCGGraph **local_10;
  
  local_20 = local_res10;
  local_10 = &local_28;
  local_res10[0] = 0;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UPCGGraph::Contains'::__l2::<lambda_1>,bool,UPCGNode_*>::Call;
  local_28 = param_1;
  ForEachNodeRecursively(this,(TFunctionRef<bool___cdecl(UPCGNode_*)> *)&local_18);
  return (bool)local_res10[0];
}

// FindNodeByTitleName @ 149efd0b0

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

UPCGNode * __thiscall
UPCGGraph::FindNodeByTitleName
          (UPCGGraph *this,FName param_1,bool param_2,TSubclassOf<UPCGSettings_const_> param_3)

{
  UPCGNode *local_res10 [3];
  code *local_38;
  undefined8 **local_30;
  UPCGNode **local_28;
  FName local_20;
  UObject *local_18;
  
  local_28 = local_res10;
  local_res10[0] = (UPCGNode *)0x0;
  local_18 = *(UObject **)param_3.Class.field0_0x0;
  local_20 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_18 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_18);
  }
  local_30 = &local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`UPCGGraph::FindNodeByTitleName'::__l2::<lambda_1>,bool,UPCGNode_*>
             ::Call;
  if (param_2) {
    ForEachNodeRecursively(this,(TFunctionRef<bool___cdecl(UPCGNode_*)> *)&local_38);
    return local_res10[0];
  }
  ForEachNode(this,(TFunctionRef<bool___cdecl(UPCGNode_*)> *)&local_38);
  return local_res10[0];
}

// FindNodeWithSettings @ 149efd150

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

UPCGNode * __thiscall
UPCGGraph::FindNodeWithSettings(UPCGGraph *this,UPCGSettingsInterface *param_1,bool param_2)

{
  UPCGNode *local_res10 [3];
  UPCGNode **local_28;
  UPCGSettingsInterface *local_20;
  code *local_18;
  undefined8 **local_10;
  
  local_28 = local_res10;
  local_10 = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UPCGGraph::FindNodeWithSettings'::__l2::<lambda_1>,bool,UPCGNode_*>
             ::Call;
  local_res10[0] = (UPCGNode *)0x0;
  local_20 = param_1;
  if (param_2) {
    ForEachNodeRecursively(this,(TFunctionRef<bool___cdecl(UPCGNode_*)> *)&local_18);
    return local_res10[0];
  }
  ForEachNode(this,(TFunctionRef<bool___cdecl(UPCGNode_*)> *)&local_18);
  return local_res10[0];
}

// FindNodesWithSettings @ 149efd1b0

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

TArray<UPCGNode_*,TSizedDefaultAllocator<32>_> * __thiscall
UPCGGraph::FindNodesWithSettings
          (UPCGGraph *this,TArray<UPCGNode_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TSubclassOf<UPCGSettingsInterface> param_1,bool param_2)

{
  TArray<UPCGNode_*,TSizedDefaultAllocator<32>_> *local_28;
  UObject *local_20;
  code *local_18;
  TArray<UPCGNode_*,TSizedDefaultAllocator<32>_> **local_10;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_20 = *(UObject **)param_1.Class.field0_0x0;
  local_28 = __return_storage_ptr__;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_20 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_20);
  }
  local_10 = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UPCGGraph::FindNodesWithSettings'::__l2::<lambda_1>,bool,UPCGNode_*>
             ::Call;
  if (param_2) {
    ForEachNodeRecursively(this,(TFunctionRef<bool___cdecl(UPCGNode_*)> *)&local_18);
    return __return_storage_ptr__;
  }
  ForEachNode(this,(TFunctionRef<bool___cdecl(UPCGNode_*)> *)&local_18);
  return __return_storage_ptr__;
}

// ForEachNode @ 149efd850

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

bool __thiscall
UPCGGraph::ForEachNode(UPCGGraph *this,TFunctionRef<bool___cdecl(UPCGNode_*)> *param_1)

{
  TObjectPtr<UPCGNode>_u_0 *pTVar1;
  int iVar2;
  char cVar3;
  TObjectPtr<UPCGNode>_u_0 *pTVar4;
  TObjectPtr<UPCGNode>_u_0 local_res8;
  
  local_res8 = (this->InputNode).field0_0x0;
  cVar3 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_res8);
  if (cVar3 != '\0') {
    local_res8 = (this->OutputNode).field0_0x0;
    cVar3 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_res8);
    if (cVar3 != '\0') {
      pTVar4 = (TObjectPtr<UPCGNode>_u_0 *)(this->Nodes).AllocatorInstance.Data;
      iVar2 = (this->Nodes).ArrayNum;
      pTVar1 = pTVar4 + iVar2;
      while( true ) {
        if ((this->Nodes).ArrayNum != iVar2) {
          `TCheckedPointerIterator<TObjectPtr<UPCGNode>_const_,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(&local_res8);
        }
        if (pTVar4 == pTVar1) {
          return true;
        }
        local_res8 = *pTVar4;
        cVar3 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_res8);
        if (cVar3 == '\0') break;
        pTVar4 = pTVar4 + 1;
      }
    }
  }
  return false;
}

// ForEachNodeRecursively @ 149efd910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

bool __thiscall
UPCGGraph::ForEachNodeRecursively(UPCGGraph *this,TFunctionRef<bool___cdecl(UPCGNode_*)> *param_1)

{
  int iVar1;
  bool bVar2;
  undefined1 auStackY_a8 [32];
  TFunctionRef<bool___cdecl(UPCGNode_*)> local_78;
  undefined1 local_68 [32];
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_78._0_8_ = *(undefined8 *)param_1;
  local_78._8_8_ = *(undefined8 *)&param_1->field_0x8;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_28 = (ForElementType<FSetElementId>)0x0;
  local_20 = 0;
  bVar2 = ForEachNodeRecursively_Internal
                    (this,&local_78,
                     (TSet<UPCGGraph_const_*,DefaultKeyFuncs<UPCGGraph_const_*,0>,FDefaultSetAllocator>
                      *)local_68);
  local_20 = 0;
  if (local_28 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_28);
  }
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return bVar2;
}

// ForEachNodeRecursively_Internal @ 149efda30

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

bool __thiscall
UPCGGraph::ForEachNodeRecursively_Internal
          (UPCGGraph *this,TFunctionRef<bool___cdecl(UPCGNode_*)> *param_1,
          TSet<UPCGGraph_const_*,DefaultKeyFuncs<UPCGGraph_const_*,0>,FDefaultSetAllocator> *param_2
          )

{
  code *pcVar1;
  undefined1 uVar2;
  bool bVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  UPCGGraph *local_res8;
  UPCGGraph *local_res10;
  TFunctionRef<bool___cdecl(UPCGNode_*)> *local_28;
  TSet<UPCGGraph_const_*,DefaultKeyFuncs<UPCGGraph_const_*,0>,FDefaultSetAllocator> *local_20;
  code *local_18;
  TFunctionRef<bool___cdecl(UPCGNode_*)> **local_10;
  
  uVar6 = ((uint)((ulonglong)this >> 0x14) & 0xffff ^ (uint)((ulonglong)this >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  if (*(int *)&(param_2->Elements).field_0x8 != *(int *)&(param_2->Elements).field_0x34) {
    FVar5 = (param_2->Hash).SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
    }
    iVar4 = *(int *)((longlong)FVar5 +
                    (ulonglong)(param_2->HashSize - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
    if (iVar4 != -1) {
      do {
        if (*(UPCGGraph **)(*(longlong *)&param_2->Elements + (longlong)iVar4 * 0x10) == this) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!VisitedGraphs.Contains(this)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGGraph.cpp"
                             ,0x533,L"");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            uVar2 = (*pcVar1)();
            return (bool)uVar2;
          }
          break;
        }
        iVar4 = *(int *)(*(longlong *)&param_2->Elements + 8 + (longlong)iVar4 * 0x10);
      } while (iVar4 != -1);
    }
  }
  local_res10 = this;
  TSet<UPCGGraph_const_*,DefaultKeyFuncs<UPCGGraph_const_*,0>,FDefaultSetAllocator>::
  Emplace<UPCGGraph_const_*>(param_2,&local_res8,(bool *)&local_res10);
  local_10 = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UPCGGraph::ForEachNodeRecursively_Internal'::__l2::<lambda_1>,bool,UPCGNode_*>
             ::Call;
  local_28 = param_1;
  local_20 = param_2;
  bVar3 = ForEachNode(this,(TFunctionRef<bool___cdecl(UPCGNode_*)> *)&local_18);
  return bVar3;
}

// GetDefaultGridSize @ 149eff6b0

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

uint __thiscall UPCGGraph::GetDefaultGridSize(UPCGGraph *this)

{
  EPCGHiGenGrid EVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  if ((this->bUseHierarchicalGeneration != false) &&
     (EVar1 = this->HiGenGridSize, EVar1 - Grid4 < 0x7ffffc)) {
    if ((EVar1 & EVar1 + ~Uninitialized) != Uninitialized) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3381450936374263976>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGCommon.cpp"
                         ,0xa8,"FMath::IsPowerOfTwo(GridAsUint)");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return uVar4;
      }
    }
    return EVar1 * 100 << ((byte)this->HiGenExponential & 0x1f);
  }
  return 0x80000000;
}

// GetGraph @ 149f00620

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

UPCGGraph * __thiscall UPCGGraph::GetGraph(UPCGGraph *this)

{
  return this;
}

// GetGraph @ 149f00630

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

UPCGGraph * __thiscall UPCGGraph::GetGraph(UPCGGraph *this)

{
  return this;
}

// GetGridCleanupRadiusFromGrid @ 149f00b10

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

double __thiscall UPCGGraph::GetGridCleanupRadiusFromGrid(UPCGGraph *this,EPCGHiGenGrid param_1)

{
  code *pcVar1;
  bool bVar2;
  byte bVar3;
  ulonglong uVar4;
  double dVar5;
  
  if ((param_1 & ~Unbounded) == Uninitialized) {
    dVar5 = FPCGRuntimeGenerationRadii::GetGenerationRadiusFromGrid(&this->GenerationRadii,param_1);
    return dVar5 * (this->GenerationRadii).CleanupRadiusMultiplier;
  }
  bVar3 = (byte)this->HiGenExponential;
  if (param_1 < (uint)(4 << (bVar3 & 0x1f))) {
    if (param_1 < Grid4) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("static_cast<uint32>(Grid) >= static_cast<uint32>(EPCGHiGenGrid::GridMin)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGGraph.cpp"
                         ,0x633,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        dVar5 = (double)(*pcVar1)();
        return dVar5;
      }
    }
    return (this->GenerationRadii).CleanupRadiusMultiplier *
           (this->GenerationRadii).GenerationRadius400 * (double)(param_1 >> 2);
  }
  dVar5 = FPCGRuntimeGenerationRadii::GetGenerationRadiusFromGrid
                    (&this->GenerationRadii,param_1 >> (bVar3 & 0x1f));
  dVar5 = dVar5 * (this->GenerationRadii).CleanupRadiusMultiplier;
  uVar4 = 1L << ((byte)this->HiGenExponential & 0x3f);
  if (-1 < (longlong)uVar4) {
    return (double)(longlong)uVar4 * dVar5;
  }
  return (double)uVar4 * dVar5;
}

// GetGridGenerationRadiusFromGrid @ 149f01110

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

double __thiscall UPCGGraph::GetGridGenerationRadiusFromGrid(UPCGGraph *this,EPCGHiGenGrid param_1)

{
  code *pcVar1;
  bool bVar2;
  byte bVar3;
  ulonglong uVar4;
  double dVar5;
  
  if ((param_1 & ~Unbounded) == Uninitialized) {
    dVar5 = FPCGRuntimeGenerationRadii::GetGenerationRadiusFromGrid(&this->GenerationRadii,param_1);
    return dVar5;
  }
  bVar3 = (byte)this->HiGenExponential;
  if (param_1 < (uint)(4 << (bVar3 & 0x1f))) {
    if (param_1 < Grid4) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("static_cast<uint32>(Grid) >= static_cast<uint32>(EPCGHiGenGrid::GridMin)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGGraph.cpp"
                         ,0x61f,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        dVar5 = (double)(*pcVar1)();
        return dVar5;
      }
    }
    return (double)(param_1 >> 2) * (this->GenerationRadii).GenerationRadius400;
  }
  dVar5 = FPCGRuntimeGenerationRadii::GetGenerationRadiusFromGrid
                    (&this->GenerationRadii,param_1 >> (bVar3 & 0x1f));
  uVar4 = 1L << (bVar3 & 0x3f);
  if (-1 < (longlong)uVar4) {
    return (double)(longlong)uVar4 * dVar5;
  }
  return (double)uVar4 * dVar5;
}

// GetGridSizes @ 149f01220

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void __thiscall
UPCGGraph::GetGridSizes
          (UPCGGraph *this,
          TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_> *param_1,
          bool *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  
  lpCriticalSection = &this->CachedGridInfoLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((this->CachedGridInfo).bIsSet == false) {
    CacheGridSizesInternalNoLock(this);
    if ((this->CachedGridInfo).bIsSet == false) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_>::operator=
            (param_1,(TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_>
                      *)&this->CachedGridInfo);
  if ((this->CachedGridInfo).bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *param_2 = (this->CachedGridInfo).TypedValue.bHasUnbounded;
                    /* WARNING: Could not recover jumptable at 0x000149f01301. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// GetMutableUserParametersStruct @ 149f02400

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

FInstancedPropertyBag * __thiscall UPCGGraph::GetMutableUserParametersStruct(UPCGGraph *this)

{
  return &this->UserParameters;
}

// GetNodeGenerationGridSize @ 149f02450

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

uint __thiscall UPCGGraph::GetNodeGenerationGridSize(UPCGGraph *this,UPCGNode *param_1,uint param_2)

{
  FPlatformRWLock *SRWLock;
  uint uVar1;
  uint *puVar2;
  
  SRWLock = &this->NodeToGridSizeLock;
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  puVar2 = TMapBase<UPCGNode_const_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGNode_const_*,unsigned_int,0>_>
           ::Find((TMapBase<UPCGNode_const_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGNode_const_*,unsigned_int,0>_>
                   *)&this->NodeToGridSize,param_1);
  if (puVar2 == (uint *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    uVar1 = CalculateNodeGridSizeRecursive_Unsafe(this,param_1,param_2);
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  else {
    uVar1 = *puVar2;
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return uVar1;
}

// GetParentGridSizes @ 149f03ad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UPCGGraph::GetParentGridSizes
          (UPCGGraph *this,uint param_1,
          TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_> *param_2)

{
  int iVar1;
  UPCGNode *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UPCGSubsystem *this_00;
  APCGWorldActor *pAVar6;
  uint *puVar7;
  ForElementType<unsigned_int> FVar8;
  uint uVar9;
  undefined1 *puVar10;
  TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_> *pTVar11;
  LPCRITICAL_SECTION lpCriticalSection;
  ForElementType<unsigned_int> FVar12;
  int iVar13;
  TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_> *pTVar14;
  undefined1 auStack_118 [32];
  longlong local_f8;
  longlong local_f0;
  undefined1 local_e8;
  undefined1 local_e7;
  FIdentityFunctor local_e6 [6];
  uint local_e0 [2];
  uint local_d8;
  uint local_d4;
  TPairInitializer<unsigned_int_const_&,TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_>_const_&>
  local_d0;
  LPCRITICAL_SECTION local_c0;
  TSet<TTuple<unsigned_int,TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
  *local_b8;
  uint *local_b0;
  TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_> *local_a8;
  TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_e0[0] = param_1;
  if (((((param_1 / 100 & param_1 / 100 - 1) == 0) && (param_1 - 400 < 0x18fffe71)) ||
      (this_00 = UPCGSubsystem::GetSubsystemForCurrentWorld(), this_00 == (UPCGSubsystem *)0x0)) ||
     ((pAVar6 = UPCGSubsystem::GetPCGWorldActor(this_00), pAVar6 == (APCGWorldActor *)0x0 ||
      (pAVar6->PartitionGridSize == param_1)))) {
    lpCriticalSection = (LPCRITICAL_SECTION)&this->CachedGridInfoLock;
    local_c0 = lpCriticalSection;
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection(lpCriticalSection);
    local_b8 = (TSet<TTuple<unsigned_int,TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
                *)&this->ChildGridSizeToParentGridSizes;
    if (*(int *)&(this->ChildGridSizeToParentGridSizes).field_0x8 !=
        *(int *)&(this->ChildGridSizeToParentGridSizes).field_0x34) {
      puVar10 = *(undefined1 **)&(this->ChildGridSizeToParentGridSizes).field_0x40;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = &(this->ChildGridSizeToParentGridSizes).field_0x38;
      }
      uVar5 = *(uint *)(puVar10 +
                       (ulonglong)
                       (*(int *)&(this->ChildGridSizeToParentGridSizes).field_0x48 - 1U &
                       local_e0[0]) * 4);
      if (uVar5 != 0xffffffff) {
        do {
          puVar7 = (uint *)((longlong)(int)uVar5 * 0x58 +
                           *(longlong *)
                            &((TMap<unsigned_int,TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_>,0>_>
                               *)local_b8)->field_0x0);
          if (*puVar7 == local_e0[0]) {
            pTVar11 = (TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_>
                       *)(puVar7 + 2);
            if (puVar7 == (uint *)0x0) {
              pTVar11 = (TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_>
                         *)0x0;
            }
            if (pTVar11 !=
                (TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_> *)
                0x0) {
              TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_>::
              operator=(param_2,pTVar11);
              goto LAB_149f03db3;
            }
            break;
          }
          uVar5 = puVar7[0x14];
        } while (uVar5 != 0xffffffff);
      }
    }
    if (this->bUseHierarchicalGeneration != false) {
      local_d8 = GetDefaultGridSize(this);
      pTVar14 = (TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_> *)
                (this->Nodes).AllocatorInstance.Data;
      iVar1 = (this->Nodes).ArrayNum;
      pTVar11 = (TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_> *)
                ((pTVar14->AllocatorInstance).InlineData + (longlong)iVar1 * 8);
      local_d0.Value = pTVar11;
      while( true ) {
        if ((this->Nodes).ArrayNum != iVar1) {
          local_e8 = 0;
          `TCheckedPointerIterator<TObjectPtr<UPCGNode>_const_,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(&local_e8);
        }
        if (pTVar14 == pTVar11) break;
        pUVar2 = *(UPCGNode **)(pTVar14->AllocatorInstance).InlineData;
        if (pUVar2 != (UPCGNode *)0x0) {
          CalculateNodeGridSizesRecursiveNoLock(this,&local_98,pUVar2,local_d8);
          iVar13 = local_98.ArrayNum;
          if (iVar13 != 0) {
            uVar9 = iVar13 - 1;
            uVar5 = 0;
            if ((int)uVar9 < iVar13) {
              uVar5 = ~uVar9 >> 0x1f;
            }
            if (uVar5 == 0) {
              local_f8 = (longlong)(int)uVar9;
              local_f0 = (longlong)iVar13;
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar4) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            iVar13 = local_98.ArrayNum;
            FVar12 = (ForElementType<unsigned_int>)&local_98;
            if (local_98.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
              FVar12 = local_98.AllocatorInstance.SecondaryData;
            }
            if (*(uint *)((longlong)FVar12 + (longlong)(iVar13 + -1) * 4) == local_e0[0]) {
              FVar12 = (ForElementType<unsigned_int>)&local_98;
              if (local_98.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
                FVar12 = local_98.AllocatorInstance.SecondaryData;
              }
              FVar8 = (ForElementType<unsigned_int>)((longlong)FVar12 + (longlong)iVar13 * 4);
              while( true ) {
                if (local_98.ArrayNum != iVar13) {
                  local_e7 = 0;
                  `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::
                  operator()(&local_e7);
                }
                pTVar11 = local_d0.Value;
                if (FVar12 == FVar8) break;
                local_d4 = *(uint *)FVar12;
                TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_>::
                AddUniqueImpl<unsigned_int_const_&>(param_2,&local_d4);
                FVar12 = (ForElementType<unsigned_int>)((longlong)FVar12 + 4);
              }
            }
          }
          if (local_98.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FMemory::Free((void *)local_98.AllocatorInstance.SecondaryData);
          }
        }
        pTVar14 = (TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_> *)
                  ((pTVar14->AllocatorInstance).InlineData + 8);
      }
      TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_>::Remove
                (param_2,local_e0);
      FVar12 = (param_2->AllocatorInstance).SecondaryData;
      FVar8 = (ForElementType<unsigned_int>)param_2;
      if (FVar12 != (ForElementType<unsigned_int>)0x0) {
        FVar8 = FVar12;
      }
      AlgoImpl::
      IntroSortInternal<unsigned_int,int,FIdentityFunctor,TDereferenceWrapper<unsigned_int,_UPCGGraph::GetParentGridSizes_::__l11::<lambda_1>_>_>
                ((uint *)FVar8,param_2->ArrayNum,local_e6[0],(<lambda_1> *)local_e6);
      lpCriticalSection = local_c0;
    }
    local_b0 = local_e0;
    local_a8 = param_2;
    TSet<TTuple<unsigned_int,TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<unsigned_int_const_&,TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_>_const_&>_>
              (local_b8,&local_d0,(bool *)&local_b0);
LAB_149f03db3:
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}

// GetPrivateStaticClass @ 149f04490

UClass * __cdecl UPCGGraph::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGraph.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGraph",&Z_Registration_Info_UClass_UPCGGraph.InnerSingleton,
               StaticRegisterNativesUPCGGraph,0x2f8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGGraph>,InternalVTableHelperCtorCaller<UPCGGraph>,local_res8,
               UPCGGraphInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGraph.InnerSingleton;
}

// GetUserParametersStruct @ 149f06670

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

FInstancedPropertyBag * __thiscall UPCGGraph::GetUserParametersStruct(UPCGGraph *this)

{
  return &this->UserParameters;
}

// IsEditorOnly @ 149f07aa0

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

bool __thiscall UPCGGraph::IsEditorOnly(UPCGGraph *this)

{
  undefined1 local_res10 [8];
  undefined1 *local_res18 [2];
  code *local_18;
  undefined1 **local_10;
  
  if (this->bIsEditorOnly == false) {
    local_res18[0] = local_res10;
    local_res10[0] = 0;
    local_10 = local_res18;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UPCGGraph::IsEditorOnly'::__l5::<lambda_1>,bool,UPCGNode_*>::Call
    ;
    ForEachNodeRecursively(this,(TFunctionRef<bool___cdecl(UPCGNode_*)> *)&local_18);
    return (bool)local_res10[0];
  }
  return true;
}

// IsEditorOnly_Internal @ 149f07b50

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

bool __thiscall UPCGGraph::IsEditorOnly_Internal(UPCGGraph *this)

{
  return this->bIsEditorOnly != false;
}

// OnGraphParametersChanged @ 149f09710

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void __thiscall
UPCGGraph::OnGraphParametersChanged(UPCGGraph *this,EPCGGraphParameterEvent param_1,FName param_2)

{
  FName *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UPCGUserParameterGetSettings *this_00;
  UClass *pUVar7;
  FPropertyBagPropertyDesc *pFVar8;
  ForAnyElementType FVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  UPCGNode *local_98 [2];
  FName local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  UPCGNode *local_78;
  ForAnyElementType local_70;
  undefined8 local_68;
  FGuid local_58;
  TArrayView<UPCGNode_*,int> local_48;
  
  if ((param_1 - RemovedUnused < 2) || (param_1 - PropertyRenamed < 2)) {
    pFVar10 = (this->Nodes).AllocatorInstance.Data;
    iVar3 = (this->Nodes).ArrayNum;
    local_70.Data = (FScriptContainerElement *)0x0;
    local_68 = 0;
    pFVar2 = pFVar10 + (longlong)iVar3 * 8;
    while( true ) {
      if ((this->Nodes).ArrayNum != iVar3) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UPCGNode>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar10 == pFVar2) break;
      local_98[0] = *(UPCGNode **)pFVar10;
      if ((local_98[0] != (UPCGNode *)0x0) &&
         (this_00 = (UPCGUserParameterGetSettings *)UPCGNode::GetSettings(local_98[0]),
         this_00 != (UPCGUserParameterGetSettings *)0x0)) {
        pUVar7 = Z_Construct_UClass_UPCGUserParameterGetSettings_NoRegister();
        iVar6 = (int)pUVar7->_padding_;
        if ((iVar6 <= *(int *)(this_00->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar6 * 8) ==
            &pUVar7->_padding_)) {
          local_58.A = (this_00->PropertyGuid).A;
          local_58.B = (this_00->PropertyGuid).B;
          local_58.C = (this_00->PropertyGuid).C;
          local_58.D = (this_00->PropertyGuid).D;
          pFVar8 = FInstancedPropertyBag::FindPropertyDescByID(&this->UserParameters,&local_58);
          if (pFVar8 == (FPropertyBagPropertyDesc *)0x0) {
            if (((local_70.Data <= (FScriptContainerElement *)local_98) &&
                ((FScriptContainerElement *)local_98 < local_70.Data + (longlong)local_68._4_4_ * 8)
                ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar6 = (int)local_68;
            if ((int)local_68 == local_68._4_4_) {
              iVar6 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&local_70,(int *)((longlong)&local_68 + 4));
            }
            local_68 = CONCAT44(local_68._4_4_,iVar6 + 1);
            *(UPCGNode **)(local_70.Data + (longlong)iVar6 * 8) = local_98[0];
          }
          else {
            pFVar1 = &pFVar8->Name;
            if (this_00->PropertyName != *pFVar1) {
              local_88 = this_00->PropertyName;
              UPCGUserParameterGetSettings::UpdatePropertyName(this_00,*pFVar1);
              local_98[0]->NodeTitle = *pFVar1;
              UPCGNode::RenameOutputPin(local_98[0],&local_88,pFVar1,true);
            }
          }
          if (param_1 == PropertyTypeModified) {
            UPCGNode::UpdatePins(local_98[0]);
          }
        }
      }
      pFVar10 = pFVar10 + 8;
    }
    iVar3 = (int)local_68;
    if ((int)local_68 != 0) {
      pFVar2 = local_70.Data + (longlong)(int)local_68 * 8;
      FVar9.Data = local_70.Data;
      while( true ) {
        if ((int)local_68 != iVar3) {
          `TCheckedPointerIterator<UPCGNode_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res20);
        }
        if (FVar9.Data == pFVar2) break;
        local_78 = *(UPCGNode **)FVar9.Data;
        local_88 = (FName)&local_78;
        uStack_80 = 1;
        local_48._12_4_ = uStack_7c;
        local_48.ArrayNum = 1;
        local_48.DataPtr = (UPCGNode **)local_88;
        RemoveNodes_Internal(this,&local_48);
        FVar9.Data = FVar9.Data + 8;
      }
    }
    if (local_70.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data);
    }
  }
  return;
}

// OnNodeAdded @ 149f09b30

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void __thiscall UPCGGraph::OnNodeAdded(UPCGGraph *this,UPCGNode *param_1,bool param_2)

{
  return;
}

// OnNodeRemoved @ 149f09b40

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void __thiscall UPCGGraph::OnNodeRemoved(UPCGGraph *this,UPCGNode *param_1,bool param_2)

{
  return;
}

// OnNodesAdded @ 149f09b50

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void __thiscall
UPCGGraph::OnNodesAdded(UPCGGraph *this,TArrayView<UPCGNode_*,int> *param_1,bool param_2)

{
  return;
}

// OnNodesRemoved @ 149f09b60

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void __thiscall
UPCGGraph::OnNodesRemoved(UPCGGraph *this,TArrayView<UPCGNode_*,int> *param_1,bool param_2)

{
  return;
}

// PostLoad @ 149f0c800

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void __thiscall UPCGGraph::PostLoad(UPCGGraph *this)

{
  longlong *_Dst;
  bool bVar1;
  int iVar2;
  uint *puVar3;
  FTlsAutoCleanup *pFVar4;
  FTlsAutoCleanup FVar5;
  FUObjectItem *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  code *pcStack_18;
  undefined1 *puStack_10;
  
  puVar3 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  puStack_10 = auStackX_8;
  pcStack_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  pFVar4 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&pcStack_18,puVar3);
  FVar7 = pFVar4[0x2d];
  if (pFVar4[0x2d] == (FTlsAutoCleanup)0x0) {
    FVar7 = (FTlsAutoCleanup)(pFVar4 + 0x1d);
  }
  FVar5 = FVar7;
  do {
    if (FVar5 == (FTlsAutoCleanup)((longlong)FVar7 + (longlong)*(int *)(pFVar4 + 0x2e) * 8)) {
LAB_142105eef:
      if ((*(uint *)(this->_padding_ + 0xd4) & 0x400) != 0) {
        UObject::LoadConfig((UObject *)this,(UClass *)0x0,(wchar_t *)0x0,0,(FProperty *)0x0,
                            (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                             *)0x0);
      }
      bVar1 = IsThisNotNull(this,"UObject::CanCheckDefaultSubObjects");
      if ((((bVar1) && ((this->_padding_ & 0x3400) == 0)) &&
          (((uint)this->_padding_ >> 0x1e & 1) == 0)) &&
         (pFVar6 = FUObjectArray::IndexToObject
                             (&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4)),
         ((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
        FIsDuplicatingClassForReinstancing::operator_bool(&GIsDuplicatingClassForReinstancing);
      }
      return;
    }
    if (*(UPCGGraph **)FVar5 == this) {
      iVar2 = (int)((longlong)FVar5 - (longlong)FVar7 >> 3);
      if (iVar2 != -1) {
        _Dst = (longlong *)((longlong)FVar7 + (longlong)iVar2 * 8);
        memmove(_Dst,_Dst + 1,(longlong)((*(int *)(pFVar4 + 0x2e) - iVar2) + -1) << 3);
        *(int *)(pFVar4 + 0x2e) = *(int *)(pFVar4 + 0x2e) + -1;
      }
      goto LAB_142105eef;
    }
    FVar5 = (FTlsAutoCleanup)((longlong)FVar5 + 8);
  } while( true );
}

// ReconstructNewNode @ 149f0e4d0

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

TObjectPtr<UPCGNode> __thiscall UPCGGraph::ReconstructNewNode(UPCGGraph *this,UPCGNode *param_1)

{
  UPCGSettings *pUVar1;
  UClass *pUVar2;
  UPCGSettingsInterface *pUVar3;
  UPCGNode *pUVar4;
  UPCGNode *in_R8;
  
  pUVar1 = UPCGNode::GetSettings(in_R8);
  pUVar4 = (UPCGNode *)0x0;
  if (pUVar1 != (UPCGSettings *)0x0) {
    pUVar2 = Z_Construct_UClass_UPCGSettings_NoRegister();
    pUVar3 = (UPCGSettingsInterface *)
             DuplicateObject_Internal(pUVar2,(UObject *)pUVar1,(UObject *)0x0,(FName)0x0);
    pUVar4 = AddNode(this,pUVar3);
    if (pUVar3 != (UPCGSettingsInterface *)0x0) {
      (**(code **)(pUVar3->_padding_ + 0x170))(pUVar3,0,pUVar4,0x10);
    }
  }
  param_1->_padding_ = (longlong)pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UPCGNode *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  return (TObjectPtr<UPCGNode>)(TObjectPtr<UPCGNode>_u_0)param_1;
}

// RemoveEdge @ 149f10260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UPCGGraph::RemoveEdge
          (UPCGGraph *this,UPCGNode *param_1,FName *param_2,UPCGNode *param_3,FName *param_4)

{
  int iVar1;
  bool bVar2;
  UPCGPin *this_00;
  UPCGPin *pUVar3;
  undefined1 auStackY_a8 [32];
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  int local_44;
  ForElementType<FSetElementId> local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  if ((param_1 == (UPCGNode *)0x0) || (param_3 == (UPCGNode *)0x0)) {
    if (1 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
    bVar2 = false;
  }
  else {
    this_00 = UPCGNode::GetOutputPin(param_1,param_2);
    pUVar3 = UPCGNode::GetInputPin(param_3,param_4);
    local_4c = 0x80;
    local_78._0_8_ = (FScriptContainerElement *)0x0;
    local_78._8_8_ = 0;
    local_58 = (void *)0x0;
    local_50 = 0;
    local_48 = 0xffffffff;
    local_44 = 0;
    local_38 = (ForElementType<FSetElementId>)0x0;
    local_30 = 0;
    if (this_00 != (UPCGPin *)0x0) {
      UPCGPin::BreakEdgeTo
                (this_00,pUVar3,
                 (TSet<UPCGNode_*,DefaultKeyFuncs<UPCGNode_*,0>,FDefaultSetAllocator> *)local_78);
    }
    PCGGraphUtils::NotifyTouchedNodes
              ((TSet<UPCGNode_*,DefaultKeyFuncs<UPCGNode_*,0>,FDefaultSetAllocator> *)local_78,
               Structural);
    bVar2 = 0 < local_78._8_4_ - local_44;
    local_30 = 0;
    if (local_38 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_38);
    }
    iVar1 = SUB84(local_78._8_8_,4);
    local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
    if (iVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
    }
    local_48 = 0xffffffff;
    local_44 = 0;
    local_50 = 0;
    if (0x80 < local_4c) {
      local_4c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
    }
    if (local_58 != (void *)0x0) {
      FMemory::Free(local_58);
    }
    if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_78._0_8_);
    }
  }
  return bVar2;
}

// RemoveInboundEdges @ 149f103e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

bool __thiscall UPCGGraph::RemoveInboundEdges(UPCGGraph *this,UPCGNode *param_1,FName *param_2)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  UPCGPin *this_00;
  undefined1 auStackY_a8 [32];
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  int local_44;
  ForElementType<FSetElementId> local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  if (param_1 == (UPCGNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGGraph.cpp"
                       ,0x550,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  local_4c = 0x80;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_44 = 0;
  local_38 = (ForElementType<FSetElementId>)0x0;
  local_30 = 0;
  local_48 = 0xffffffff;
  this_00 = UPCGNode::GetInputPin(param_1,param_2);
  if (this_00 != (UPCGPin *)0x0) {
    UPCGPin::BreakAllEdges
              (this_00,(TSet<UPCGNode_*,DefaultKeyFuncs<UPCGNode_*,0>,FDefaultSetAllocator> *)
                       local_78);
  }
  PCGGraphUtils::NotifyTouchedNodes
            ((TSet<UPCGNode_*,DefaultKeyFuncs<UPCGNode_*,0>,FDefaultSetAllocator> *)local_78,
             Structural);
  iVar5 = local_78._8_4_ - local_44;
  local_30 = 0;
  if (local_38 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_38);
  }
  iVar2 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  return 0 < iVar5;
}

// RemoveNode @ 149f10540

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void __thiscall UPCGGraph::RemoveNode(UPCGGraph *this,UPCGNode *param_1)

{
  UPCGNode *local_res10 [3];
  TArrayView<UPCGNode_*,int> local_18;
  
  local_18.ArrayNum = 1;
  local_18.DataPtr = local_res10;
  local_res10[0] = param_1;
  RemoveNodes_Internal(this,&local_18);
  return;
}

// RemoveNodes @ 149f10580

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void __thiscall
UPCGGraph::RemoveNodes(UPCGGraph *this,TArray<UPCGNode_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uStack_1c;
  TArrayView<UPCGNode_*,int> local_18;
  
  pFVar2 = (param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar1;
  local_18.DataPtr = (UPCGNode **)pFVar2;
  RemoveNodes_Internal(this,&local_18);
  return;
}

// RemoveNodes_Internal @ 149f105f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void __thiscall UPCGGraph::RemoveNodes_Internal(UPCGGraph *this,TArrayView<UPCGNode_*,int> *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ForElementType<unsigned_int> FVar8;
  ForElementType<FSetElementId> FVar9;
  UPCGNode *pUVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  undefined1 auStack_118 [32];
  UPCGNode **local_f8;
  FScriptContainerElement *local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined1 local_c8;
  undefined1 local_c7 [3];
  int local_c4;
  UPCGNode *local_c0;
  UPCGGraph *local_b8;
  UPCGNode **local_b0;
  UPCGNode **local_a8;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined1 local_60 [8];
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_118;
  if (param_1->ArrayNum != 0) {
    local_b0 = param_1->DataPtr;
    local_98._0_8_ = (FScriptContainerElement *)0x0;
    local_98._8_8_ = 0;
    local_a8 = local_b0 + param_1->ArrayNum;
    local_78 = (ForElementType<unsigned_int>)0x0;
    local_70 = 0;
    local_6c = 0x80;
    local_68 = -1;
    local_64 = 0;
    local_58 = (ForElementType<FSetElementId>)0x0;
    local_50 = 0;
    local_b8 = this;
    if (local_b0 != local_a8) {
      do {
        pUVar10 = *local_b0;
        if ((pUVar10 == (UPCGNode *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Node",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGGraph.cpp"
                               ,0x4d6,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar14 = (pUVar10->InputPins).AllocatorInstance.Data;
        iVar1 = (pUVar10->InputPins).ArrayNum;
        pFVar15 = pFVar14 + (longlong)iVar1 * 8;
        while( true ) {
          if ((pUVar10->InputPins).ArrayNum != iVar1) {
            local_c8 = 0;
            `TCheckedPointerIterator<TObjectPtr<UPCGPin>,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_c8);
          }
          if (pFVar14 == pFVar15) break;
          UPCGPin::BreakAllEdges
                    (*(UPCGPin **)pFVar14,
                     (TSet<UPCGNode_*,DefaultKeyFuncs<UPCGNode_*,0>,FDefaultSetAllocator> *)local_98
                    );
          pFVar14 = pFVar14 + 8;
        }
        pFVar14 = (pUVar10->OutputPins).AllocatorInstance.Data;
        iVar1 = (pUVar10->OutputPins).ArrayNum;
        pFVar15 = pFVar14 + (longlong)iVar1 * 8;
        while( true ) {
          if ((pUVar10->OutputPins).ArrayNum != iVar1) {
            local_c7[0] = 0;
            `TCheckedPointerIterator<TObjectPtr<UPCGPin>,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_c7);
          }
          if (pFVar14 == pFVar15) break;
          UPCGPin::BreakAllEdges
                    (*(UPCGPin **)pFVar14,
                     (TSet<UPCGNode_*,DefaultKeyFuncs<UPCGNode_*,0>,FDefaultSetAllocator> *)local_98
                    );
          pFVar14 = pFVar14 + 8;
        }
        if (local_98._8_4_ != local_64) {
          uVar5 = ((uint)((ulonglong)pUVar10 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar10 >> 4)) *
                  -0x7a143595;
          uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
          FVar9 = (ForElementType<FSetElementId>)local_60;
          if (local_58 != (ForElementType<FSetElementId>)0x0) {
            FVar9 = local_58;
          }
          uVar5 = *(uint *)((longlong)FVar9 +
                           (longlong)(int)(local_50 - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
          if (uVar5 != 0xffffffff) {
LAB_149f10790:
            lVar13 = (longlong)(int)uVar5 * 0x10;
            if (*(UPCGNode **)(local_98._0_8_ + lVar13) != pUVar10) goto code_r0x000149f107a1;
            if (((int)uVar5 < 0) || (local_70 <= (int)uVar5)) {
LAB_149f107e2:
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Elements.IsValidIndex(ElementIndex)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                 ,0x2ab,
                                 L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
              if (bVar4) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
            }
            else {
              FVar8 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
              if (local_78 != (ForElementType<unsigned_int>)0x0) {
                FVar8 = local_78;
              }
              uVar6 = uVar5;
              if ((int)uVar5 < 0) {
                uVar6 = uVar5 + 0x1f;
              }
              if ((*(uint *)((longlong)FVar8 + (longlong)((int)uVar6 >> 5) * 4) >> (uVar5 & 0x1f) &
                  1) == 0) goto LAB_149f107e2;
            }
            uVar3 = local_98._0_8_;
            FVar9 = (ForElementType<FSetElementId>)local_60;
            if (local_58 != (ForElementType<FSetElementId>)0x0) {
              FVar9 = local_58;
            }
            pFVar15 = (FScriptContainerElement *)
                      ((longlong)FVar9 + (longlong)*(int *)(local_98._0_8_ + lVar13 + 0xc) * 4);
            while( true ) {
              uVar6 = *(uint *)pFVar15;
              if ((uVar6 == 0xffffffff) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("NextElementIndex != INDEX_NONE",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                     ,0x2b5,L"Corrupt hash"), bVar4)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              if (uVar6 == uVar5) break;
              pFVar15 = (FScriptContainerElement *)
                        (local_98._0_8_ + (longlong)(int)uVar6 * 0x10 + 8);
            }
            *(uint *)pFVar15 = *(uint *)(uVar3 + lVar13 + 8);
            TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)local_98,uVar5,1);
            this = local_b8;
          }
        }
LAB_149f10889:
        local_c0 = pUVar10;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UPCGNode *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar10);
        }
        pFVar15 = (this->Nodes).AllocatorInstance.Data;
        if ((pFVar15 <= (FScriptContainerElement *)&local_c0) &&
           (lVar13 = (longlong)(this->Nodes).ArrayMax,
           (FScriptContainerElement *)&local_c0 < pFVar15 + lVar13 * 8)) {
          local_e0 = (longlong)(this->Nodes).ArrayNum;
          local_d8 = 8;
          local_f8 = &local_c0;
          local_f0 = pFVar15;
          local_e8 = lVar13;
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        iVar1 = (this->Nodes).ArrayNum;
        if (iVar1 != 0) {
          pFVar15 = (this->Nodes).AllocatorInstance.Data;
          iVar7 = 0;
          local_c4 = 0;
          lVar13 = 0;
          bVar4 = *(UPCGNode **)pFVar15 != local_c0;
          pUVar10 = local_c0;
          iVar11 = 0;
          do {
            iVar12 = iVar11;
            do {
              lVar13 = lVar13 + 1;
              iVar12 = iVar12 + 1;
              if (iVar1 <= lVar13) break;
              iVar7 = local_c4;
            } while (bVar4 == (*(UPCGNode **)(pFVar15 + lVar13 * 8) != pUVar10));
            if (bVar4 != false) {
              if (iVar7 != iVar11) {
                memmove(pFVar15 + (longlong)iVar7 * 8,pFVar15 + (longlong)iVar11 * 8,
                        (longlong)(iVar12 - iVar11) << 3);
                pUVar10 = local_c0;
                iVar7 = local_c4;
              }
              iVar7 = iVar7 + (iVar12 - iVar11);
              local_c4 = iVar7;
            }
            bVar4 = (bool)(bVar4 ^ 1);
            iVar11 = iVar12;
          } while (lVar13 < iVar1);
          (local_b8->Nodes).ArrayNum = iVar7;
          this = local_b8;
        }
        local_b0 = local_b0 + 1;
      } while (local_b0 != local_a8);
    }
    PCGGraphUtils::NotifyTouchedNodes
              ((TSet<UPCGNode_*,DefaultKeyFuncs<UPCGNode_*,0>,FDefaultSetAllocator> *)local_98,
               Structural);
    local_50 = 0;
    if (local_58 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_58);
    }
    TSparseArray<TSparseSetElement<UPCGNode_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<UPCGNode_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<UPCGNode_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_98);
  }
  return;
code_r0x000149f107a1:
  uVar5 = *(uint *)(local_98._0_8_ + lVar13 + 8);
  if (uVar5 == 0xffffffff) goto LAB_149f10889;
  goto LAB_149f10790;
}

// RemoveOutboundEdges @ 149f10a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

bool __thiscall UPCGGraph::RemoveOutboundEdges(UPCGGraph *this,UPCGNode *param_1,FName *param_2)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  UPCGPin *this_00;
  undefined1 auStackY_a8 [32];
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  int local_44;
  ForElementType<FSetElementId> local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  if (param_1 == (UPCGNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGGraph.cpp"
                       ,0x56d,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  local_4c = 0x80;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_44 = 0;
  local_38 = (ForElementType<FSetElementId>)0x0;
  local_30 = 0;
  local_48 = 0xffffffff;
  this_00 = UPCGNode::GetOutputPin(param_1,param_2);
  if (this_00 != (UPCGPin *)0x0) {
    UPCGPin::BreakAllEdges
              (this_00,(TSet<UPCGNode_*,DefaultKeyFuncs<UPCGNode_*,0>,FDefaultSetAllocator> *)
                       local_78);
  }
  PCGGraphUtils::NotifyTouchedNodes
            ((TSet<UPCGNode_*,DefaultKeyFuncs<UPCGNode_*,0>,FDefaultSetAllocator> *)local_78,
             Structural);
  iVar5 = local_78._8_4_ - local_44;
  local_30 = 0;
  if (local_38 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_38);
  }
  iVar2 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  return 0 < iVar5;
}

// RetrieveComputeGraphInstanceFromPool @ 149f11160

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

TSharedPtr<FComputeGraphInstance,1> * __thiscall
UPCGGraph::RetrieveComputeGraphInstanceFromPool
          (UPCGGraph *this,TSharedPtr<FComputeGraphInstance,1> *__return_storage_ptr__,
          TTuple<unsigned_int,int> *param_1,bool *param_2)

{
  uint uVar1;
  FComputeGraphInstance *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  TConsoleVariableData<bool> *pTVar5;
  bool bVar6;
  int iVar7;
  TSharedPtr<FComputeGraphInstance,1> *pTVar8;
  TArray<TSharedPtr<FComputeGraphInstance,1>,TSizedDefaultAllocator<32>_> *pTVar9;
  TSharedRef<FComputeGraphInstance,1> *pTVar10;
  longlong lVar11;
  FSharedReferencer<1> FVar12;
  FScriptContainerElement *pFVar13;
  TSharedPtr<FComputeGraphInstance,1> local_78;
  TSharedPtr<FComputeGraphInstance,1> local_68;
  TSharedPtr<FComputeGraphInstance,1> local_58;
  TSharedRef<FComputeGraphInstance,1> local_48;
  TSharedRef<FComputeGraphInstance,1> local_38;
  
  bVar6 = IsInGameThread();
  if (!bVar6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGGraph.cpp"
                       ,0x377,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedPtr<FComputeGraphInstance,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  __return_storage_ptr__->Object = (FComputeGraphInstance *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar5 = PCGGraph::CVarEnableComputeGraphInstancePooling.Ref;
  bVar6 = IsInParallelGameThread();
  if (!bVar6) {
    bVar6 = IsInGameThread();
    if (!bVar6) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TSharedPtr<FComputeGraphInstance,1> *)(*pcVar4)();
        return pTVar8;
      }
    }
  }
  if (pTVar5->ShadowedValue[0] == false) {
    pTVar10 = MakeShared<FComputeGraphInstance,1>(&local_38);
    local_58.SharedReferenceCount.ReferenceController =
         (pTVar10->SharedReferenceCount).ReferenceController;
    local_58.Object = pTVar10->Object;
    if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (__return_storage_ptr__ != &local_58) {
      __return_storage_ptr__->Object = local_58.Object;
      local_58.Object = (FComputeGraphInstance *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&__return_storage_ptr__->SharedReferenceCount,&local_58.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    *param_2 = true;
  }
  else {
    uVar1 = *(uint *)param_1;
    pTVar9 = TMapBase<TTuple<unsigned_int,int>,TArray<TSharedPtr<FComputeGraphInstance,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<unsigned_int,int>,TArray<TSharedPtr<FComputeGraphInstance,1>,TSizedDefaultAllocator<32>_>,0>_>
             ::FindOrAddImpl<TTuple<unsigned_int,int>_const_&>
                       ((TMapBase<TTuple<unsigned_int,int>,TArray<TSharedPtr<FComputeGraphInstance,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<unsigned_int,int>,TArray<TSharedPtr<FComputeGraphInstance,1>,TSizedDefaultAllocator<32>_>,0>_>
                         *)&this->AvailableComputeGraphInstances,
                        *(int *)&param_1->field_0x4 + -0x61c88647 + uVar1 * 0x40 + (uVar1 >> 2) ^
                        uVar1,param_1);
    if (pTVar9->ArrayNum == 0) {
      pTVar10 = MakeShared<FComputeGraphInstance,1>(&local_48);
      local_68.SharedReferenceCount.ReferenceController =
           (pTVar10->SharedReferenceCount).ReferenceController;
      local_68.Object = pTVar10->Object;
      if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (__return_storage_ptr__ != &local_68) {
        __return_storage_ptr__->Object = local_68.Object;
        local_68.Object = (FComputeGraphInstance *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&__return_storage_ptr__->SharedReferenceCount,&local_68.SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
      *param_2 = true;
      uVar1 = *(uint *)param_1;
      pTVar9 = TMapBase<TTuple<unsigned_int,int>,TArray<TSharedPtr<FComputeGraphInstance,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<unsigned_int,int>,TArray<TSharedPtr<FComputeGraphInstance,1>,TSizedDefaultAllocator<32>_>,0>_>
               ::FindOrAddImpl<TTuple<unsigned_int,int>_const_&>
                         ((TMapBase<TTuple<unsigned_int,int>,TArray<TSharedPtr<FComputeGraphInstance,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<unsigned_int,int>,TArray<TSharedPtr<FComputeGraphInstance,1>,TSizedDefaultAllocator<32>_>,0>_>
                           *)&this->AllComputeGraphInstances,
                          *(int *)&param_1->field_0x4 + -0x61c88647 + uVar1 * 0x40 + (uVar1 >> 2) ^
                          uVar1,param_1);
      pTVar8 = (TSharedPtr<FComputeGraphInstance,1> *)(pTVar9->AllocatorInstance).Data;
      if ((pTVar8 <= __return_storage_ptr__) && (__return_storage_ptr__ < pTVar8 + pTVar9->ArrayMax)
         ) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TSharedPtr<FComputeGraphInstance,1> *)(*pcVar4)();
          return pTVar8;
        }
      }
      iVar7 = pTVar9->ArrayNum;
      if (iVar7 == pTVar9->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&pTVar9->AllocatorInstance,&pTVar9->ArrayMax);
      }
      pTVar9->ArrayNum = iVar7 + 1;
      pFVar13 = (pTVar9->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
      *(FComputeGraphInstance **)pFVar13 = __return_storage_ptr__->Object;
      pTVar3 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(pFVar13 + 8) = pTVar3;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    else {
      if (pTVar9->ArrayNum < 1) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TSharedPtr<FComputeGraphInstance,1> *)(*pcVar4)();
          return pTVar8;
        }
      }
      pFVar13 = (pTVar9->AllocatorInstance).Data;
      lVar11 = (longlong)pTVar9->ArrayNum;
      pFVar2 = *(FComputeGraphInstance **)(pFVar13 + lVar11 * 0x10 + -0x10);
      FVar12.ReferenceController = *(TReferenceControllerBase<1> **)(pFVar13 + lVar11 * 0x10 + -8);
      *(undefined8 *)(pFVar13 + lVar11 * 0x10 + -8) = 0;
      *(undefined8 *)(pFVar13 + lVar11 * 0x10 + -0x10) = 0;
      iVar7 = pTVar9->ArrayNum;
      pFVar13 = (pTVar9->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
      local_78.Object = pFVar2;
      local_78.SharedReferenceCount.ReferenceController = FVar12.ReferenceController;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)(pFVar13 + -8));
      iVar7 = pTVar9->ArrayNum - iVar7;
      if (iVar7 != 0) {
        memmove(pFVar13 + -0x10,pFVar13,(longlong)iVar7 << 4);
      }
      pTVar9->ArrayNum = pTVar9->ArrayNum + -1;
      if (__return_storage_ptr__ != &local_78) {
        __return_storage_ptr__->Object = pFVar2;
        local_78.Object = (FComputeGraphInstance *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&__return_storage_ptr__->SharedReferenceCount,&local_78.SharedReferenceCount);
        FVar12.ReferenceController = local_78.SharedReferenceCount.ReferenceController;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar12.ReferenceController);
      *param_2 = false;
    }
  }
  return __return_storage_ptr__;
}

// ReturnComputeGraphInstanceToPool @ 149f11820

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void __thiscall
UPCGGraph::ReturnComputeGraphInstanceToPool
          (UPCGGraph *this,TTuple<unsigned_int,int> *param_1,
          TSharedPtr<FComputeGraphInstance,1> *param_2)

{
  uint uVar1;
  TSharedPtr<FComputeGraphInstance,1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  TConsoleVariableData<bool> *pTVar5;
  bool bVar6;
  int iVar7;
  longlong *plVar8;
  TArray<TSharedPtr<FComputeGraphInstance,1>,TSizedDefaultAllocator<32>_> *pTVar9;
  uint *puVar10;
  longlong *plVar11;
  undefined1 *puVar12;
  uint *puVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  uint uVar16;
  
  bVar6 = IsInGameThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGGraph.cpp"
                         ,0x398,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar5 = PCGGraph::CVarEnableComputeGraphInstancePooling.Ref;
  bVar6 = IsInParallelGameThread();
  if (((!bVar6) && (bVar6 = IsInGameThread(), !bVar6)) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (pTVar5->ShadowedValue[0] != false) {
    uVar1 = *(uint *)param_1;
    uVar16 = uVar1 * 0x40 + *(uint *)&param_1->field_0x4 + (uVar1 >> 2) + 0x9e3779b9 ^ uVar1;
    if (*(int *)&(this->AllComputeGraphInstances).field_0x8 !=
        *(int *)&(this->AllComputeGraphInstances).field_0x34) {
      puVar12 = *(undefined1 **)&(this->AllComputeGraphInstances).field_0x40;
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = &(this->AllComputeGraphInstances).field_0x38;
      }
      uVar15 = *(uint *)(puVar12 +
                        (ulonglong)
                        (*(int *)&(this->AllComputeGraphInstances).field_0x48 - 1U & uVar16) * 4);
      if (uVar15 != 0xffffffff) {
        do {
          puVar10 = (uint *)((longlong)(int)uVar15 * 0x20 +
                            *(longlong *)&this->AllComputeGraphInstances);
          if ((*puVar10 == uVar1) && (puVar10[1] == *(uint *)&param_1->field_0x4)) {
            if (uVar15 != 0xffffffff) {
              puVar13 = puVar10 + 2;
              if (puVar10 == (uint *)0x0) {
                puVar13 = (uint *)0x0;
              }
              if (puVar13 != (uint *)0x0) {
                plVar8 = *(longlong **)puVar13;
                plVar11 = plVar8 + (longlong)(int)puVar13[2] * 2;
                if (plVar8 != plVar11) {
                  goto LAB_149f11990;
                }
              }
            }
            break;
          }
          uVar15 = puVar10[6];
        } while (uVar15 != 0xffffffff);
      }
    }
  }
  goto LAB_149f11a5a;
  while (plVar8 = plVar8 + 2, plVar8 != plVar11) {
LAB_149f11990:
    if ((FComputeGraphInstance *)*plVar8 == param_2->Object) {
      pTVar9 = TMapBase<TTuple<unsigned_int,int>,TArray<TSharedPtr<FComputeGraphInstance,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<unsigned_int,int>,TArray<TSharedPtr<FComputeGraphInstance,1>,TSizedDefaultAllocator<32>_>,0>_>
               ::FindOrAddImpl<TTuple<unsigned_int,int>_const_&>
                         ((TMapBase<TTuple<unsigned_int,int>,TArray<TSharedPtr<FComputeGraphInstance,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<unsigned_int,int>,TArray<TSharedPtr<FComputeGraphInstance,1>,TSizedDefaultAllocator<32>_>,0>_>
                           *)&this->AvailableComputeGraphInstances,uVar16,param_1);
      pTVar2 = (TSharedPtr<FComputeGraphInstance,1> *)(pTVar9->AllocatorInstance).Data;
      if (((pTVar2 <= param_2) && (param_2 < pTVar2 + pTVar9->ArrayMax)) &&
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
      iVar7 = pTVar9->ArrayNum;
      if (iVar7 == pTVar9->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&pTVar9->AllocatorInstance,&pTVar9->ArrayMax);
      }
      pTVar9->ArrayNum = iVar7 + 1;
      pFVar14 = (pTVar9->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
      *(FComputeGraphInstance **)pFVar14 = param_2->Object;
      pTVar3 = (param_2->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(pFVar14 + 8) = pTVar3;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      break;
    }
  }
LAB_149f11a5a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// StaticRegisterNativesUPCGGraph @ 149f13fe0

void __cdecl UPCGGraph::StaticRegisterNativesUPCGGraph(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 9;
  local_18.DataPtr = Z_Construct_UClass_UPCGGraph_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateUserParametersStruct @ 149f15470

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void __thiscall
UPCGGraph::UpdateUserParametersStruct
          (UPCGGraph *this,TFunctionRef<void___cdecl(FInstancedPropertyBag_&)> *param_1)

{
  (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&this->UserParameters);
                    /* WARNING: Could not recover jumptable at 0x000149f154a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2d8))(this,1,0);
  return;
}

// __VTableCtorCaller @ 149f16350

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UPCGGraph::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined1 *)(pUVar1 + 1) = 1;
    *(undefined ***)pUVar1 = &___7UPCGGraph__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    FInstancedStruct::FInstancedStruct((FInstancedStruct *)(pUVar1 + 2));
    pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x14 = 0x100;
    *(undefined2 *)&pUVar1[2].field_0x1c = 0x101;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined4 *)&pUVar1[3].field_0x20 = 0;
    *(undefined4 *)&pUVar1[3].field_0x24 = 0x80;
    *(undefined4 *)(pUVar1 + 4) = 0xffffffff;
    *(undefined4 *)&pUVar1[4].field_0x4 = 0;
    *(undefined8 *)&pUVar1[4].field_0x10 = 0;
    *(undefined4 *)&pUVar1[4].field_0x18 = 0;
    *(undefined8 *)&pUVar1[4].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 5) = 0;
    *(undefined8 *)&pUVar1[5].field_0x18 = 0;
    *(undefined4 *)&pUVar1[5].field_0x20 = 0;
    *(undefined4 *)&pUVar1[5].field_0x24 = 0x80;
    *(undefined4 *)(pUVar1 + 6) = 0xffffffff;
    *(undefined4 *)&pUVar1[6].field_0x4 = 0;
    *(undefined8 *)&pUVar1[6].field_0x10 = 0;
    *(undefined4 *)&pUVar1[6].field_0x18 = 0;
    *(undefined8 *)&pUVar1[6].field_0x20 = 0;
    *(undefined1 *)(pUVar1 + 9) = 0;
    *(undefined8 *)&pUVar1[9].field_0x8 = 0;
    *(undefined8 *)&pUVar1[9].field_0x10 = 0;
    *(undefined8 *)(pUVar1 + 10) = 0;
    *(undefined4 *)&pUVar1[10].field_0x8 = 0;
    *(undefined4 *)&pUVar1[10].field_0xc = 0x80;
    *(undefined4 *)&pUVar1[10].field_0x10 = 0xffffffff;
    *(undefined4 *)&pUVar1[10].field_0x14 = 0;
    *(undefined8 *)&pUVar1[10].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 0xb) = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pUVar1[0xb].field_0x8,4000);
    pUVar1[0xc].field_0x8 = 0;
    *(undefined8 *)&pUVar1[0xc].field_0x10 = 0;
    FPCGRuntimeGenerationRadii::FPCGRuntimeGenerationRadii
              ((FPCGRuntimeGenerationRadii *)&pUVar1[0xc].field_0x18);
    *(undefined8 *)(pUVar1 + 0xf) = 0;
    *(undefined8 *)&pUVar1[0xf].field_0x8 = 0;
    *(undefined8 *)&pUVar1[0xf].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 0x10) = 0;
    *(undefined4 *)&pUVar1[0x10].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[0x10].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[0x10].field_0xc = 0;
    *(undefined8 *)&pUVar1[0x10].field_0x18 = 0;
    *(undefined4 *)&pUVar1[0x10].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 0x11) = 0;
    *(undefined8 *)&pUVar1[0x11].field_0x8 = 0;
    *(undefined8 *)&pUVar1[0x11].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 0x12) = 0;
    *(undefined4 *)&pUVar1[0x12].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[0x12].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[0x12].field_0xc = 0;
    *(undefined8 *)&pUVar1[0x12].field_0x18 = 0;
    *(undefined4 *)&pUVar1[0x12].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// execAddEdge @ 149f16750

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void __cdecl UPCGGraph::execAddEdge(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UPCGNode *pUVar2;
  FName *pFVar3;
  FName *pFVar4;
  FName local_res10;
  FName local_res18;
  UPCGNode *local_res20;
  UPCGNode *local_38 [2];
  
  local_38[0] = (UPCGNode *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res20 = (UPCGNode *)0x0;
  pFVar4 = &local_res10;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar4 = (FName *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
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
  pUVar2 = local_res20;
  pFVar3 = &local_res18;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar3 = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  AddLabeledEdge((UPCGGraph *)param_1,local_38[0],pFVar4,local_res20,pFVar3);
  *(UPCGNode **)param_3 = pUVar2;
  return;
}

// execAddNodeCopy @ 149f168f0

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void __cdecl UPCGGraph::execAddNodeCopy(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UPCGSettingsInterface *pUVar4;
  UPCGNode *pUVar5;
  uchar *puVar6;
  uchar local_res10 [8];
  UObject *local_res18;
  undefined8 local_res20;
  
  pUVar5 = (UPCGNode *)0x0;
  local_res18 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = '\0';
  local_res10[1] = '\0';
  local_res10[2] = '\0';
  local_res10[3] = '\0';
  local_res10[4] = '\0';
  local_res10[5] = '\0';
  local_res10[6] = '\0';
  local_res10[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar2 = local_res18;
  puVar6 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar6 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res18 != (UObject *)0x0) {
    local_res20 = 0;
    pUVar3 = Z_Construct_UClass_UPCGSettings_NoRegister();
    pUVar4 = (UPCGSettingsInterface *)
             DuplicateObject_Internal(pUVar3,pUVar2,(UObject *)0x0,(FName)0x0);
    pUVar5 = AddNode((UPCGGraph *)param_1,pUVar4);
    if (pUVar4 != (UPCGSettingsInterface *)0x0) {
      (**(code **)(pUVar4->_padding_ + 0x170))(pUVar4,0,pUVar5,0x10);
    }
    *(UPCGSettingsInterface **)puVar6 = pUVar4;
  }
  *(UPCGNode **)param_3 = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)puVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)puVar6);
  }
  return;
}

// execAddNodeInstance @ 149f16a30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void __cdecl UPCGGraph::execAddNodeInstance(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UPCGSettings *pUVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  UPCGSettingsInstance *this;
  UPCGNode *pUVar5;
  longlong *plVar6;
  undefined1 auStack_d8 [32];
  UPCGSettings *local_b8 [2];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_b8[0] = (UPCGSettings *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_b8);
  }
  pUVar2 = local_b8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_b8[0] == (UPCGSettings *)0x0) {
    *(undefined8 *)param_3 = 0;
  }
  else {
    pUVar3 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar3,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar4 = Z_Construct_UClass_UPCGSettingsInstance_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar4);
    local_a8._8_8_ = pUVar3;
    this = (UPCGSettingsInstance *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar6 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    UPCGSettingsInstance::SetSettings(this,pUVar2);
    pUVar5 = AddNode((UPCGGraph *)param_1,(UPCGSettingsInterface *)this);
    if (pUVar5 != (UPCGNode *)0x0) {
      (**(code **)(this->_padding_ + 0x170))(this,0,pUVar5,0x10);
      UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_Transactional);
    }
    *(UPCGNode **)param_3 = pUVar5;
  }
  return;
}

// execAddNodeOfType @ 149f16ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void __cdecl UPCGGraph::execAddNodeOfType(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  bool bVar3;
  FName FVar4;
  FName FVar5;
  UClass *pUVar6;
  UPackage *pUVar7;
  UPCGSettingsInterface *pUVar8;
  UClass *pUVar9;
  UClass *pUVar10;
  longlong *plVar11;
  uchar *puVar12;
  undefined1 auStack_108 [32];
  FName local_e8;
  uchar local_e0 [8];
  UClass *local_d8 [2];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_108;
  pUVar9 = (UClass *)0x0;
  local_d8[0] = (UClass *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_d8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_d8);
  }
  local_e0[0] = '\0';
  local_e0[1] = '\0';
  local_e0[2] = '\0';
  local_e0[3] = '\0';
  local_e0[4] = '\0';
  local_e0[5] = '\0';
  local_e0[6] = '\0';
  local_e0[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_e0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_e0);
  }
  pUVar10 = local_d8[0];
  puVar12 = local_e0;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar12 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (local_d8[0] == (UClass *)0x0)) {
    local_e8.ComparisonIndex.Value = 0;
    local_e8.Number = 0;
    if (local_d8[0] != (UClass *)0x0) goto LAB_149f16ca0;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)local_d8[0]);
LAB_149f16ca0:
    local_e8.ComparisonIndex.Value = 0;
    local_e8.Number = 0;
    pUVar6 = Z_Construct_UClass_UPCGSettings_NoRegister();
    if (pUVar6 != (UClass *)0x0) {
      iVar1 = (int)pUVar6->_padding_;
      if (((int)pUVar10->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar10->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) goto LAB_149f16cd1;
    }
  }
  pUVar10 = pUVar9;
LAB_149f16cd1:
  pUVar7 = GetTransientPackage();
  FVar4 = local_e8;
  if (local_e8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar7,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar6 = Z_Construct_UClass_UPCGSettings_NoRegister();
  CheckIsClassChildOf_Internal(pUVar6,pUVar10);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,pUVar10);
  FVar5 = local_e8;
  local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_c8._56_8_ = (UPackage *)0x0;
  local_e8.ComparisonIndex = FVar4.ComparisonIndex.Value;
  local_e8.Number = FVar4.Number;
  local_c8._16_4_ = local_e8.ComparisonIndex.Value;
  local_c8._20_4_ = local_e8.Number;
  local_c8._24_4_ = RF_Transactional;
  local_c8._40_8_ = (UObject *)0x0;
  local_c8[0x20] = false;
  local_e8 = FVar5;
  local_c8._8_8_ = pUVar7;
  pUVar8 = (UPCGSettingsInterface *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar11 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar11 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  if (pUVar8 != (UPCGSettingsInterface *)0x0) {
    pUVar9 = (UClass *)AddNode((UPCGGraph *)param_1,pUVar8);
    if (pUVar9 != (UClass *)0x0) {
      (**(code **)(pUVar8->_padding_ + 0x170))(pUVar8,0,pUVar9,0x10);
    }
    *(UPCGSettingsInterface **)puVar12 = pUVar8;
  }
  *(UClass **)param_3 = pUVar9;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)puVar12 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)puVar12);
  }
  return;
}

// execGetInputNode @ 149f18340

void __cdecl UPCGGraph::execGetInputNode(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[1].field_0x18;
  return;
}

// execGetOutputNode @ 149f18910

void __cdecl UPCGGraph::execGetOutputNode(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[1].field_0x20;
  return;
}

// execRemoveEdge @ 149f19eb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UPCGGraph::execRemoveEdge(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  UPCGNode *this;
  int iVar3;
  UPCGPin *this_00;
  UPCGPin *pUVar4;
  FName *pFVar5;
  FName *pFVar6;
  undefined1 auStackY_d8 [32];
  FName local_a8;
  FName local_a0;
  UPCGNode *local_98;
  UPCGNode *local_90;
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  int local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  local_90 = (UPCGNode *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_98 = (UPCGNode *)0x0;
  pFVar6 = &local_a8;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar6 = (FName *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_a0.ComparisonIndex.Value = 0;
  local_a0.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a0);
  }
  this = local_98;
  pFVar5 = &local_a0;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar5 = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_90 == (UPCGNode *)0x0) || (local_98 == (UPCGNode *)0x0)) {
    if (1 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
    *(undefined1 *)param_3 = 0;
  }
  else {
    this_00 = UPCGNode::GetOutputPin(local_90,pFVar6);
    pUVar4 = UPCGNode::GetInputPin(this,pFVar5);
    local_88._0_8_ = (FScriptContainerElement *)0x0;
    local_88._8_8_ = 0;
    local_68 = (void *)0x0;
    local_60 = 0;
    local_5c = 0x80;
    local_58 = 0xffffffff;
    local_54 = 0;
    local_48 = (ForElementType<FSetElementId>)0x0;
    local_40 = 0;
    if (this_00 != (UPCGPin *)0x0) {
      UPCGPin::BreakEdgeTo
                (this_00,pUVar4,
                 (TSet<UPCGNode_*,DefaultKeyFuncs<UPCGNode_*,0>,FDefaultSetAllocator> *)local_88);
    }
    PCGGraphUtils::NotifyTouchedNodes
              ((TSet<UPCGNode_*,DefaultKeyFuncs<UPCGNode_*,0>,FDefaultSetAllocator> *)local_88,
               Structural);
    iVar3 = local_88._8_4_ - local_54;
    local_40 = 0;
    if (local_48 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_48);
    }
    iVar2 = SUB84(local_88._8_8_,4);
    local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
    if (iVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
    }
    local_58 = 0xffffffff;
    local_54 = 0;
    local_60 = 0;
    if (0x80 < local_5c) {
      local_5c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
    }
    if (local_68 != (void *)0x0) {
      FMemory::Free(local_68);
    }
    if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_88._0_8_);
    }
    *(bool *)param_3 = 0 < iVar3;
  }
  return;
}

// execRemoveNode @ 149f1a170

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void __cdecl UPCGGraph::execRemoveNode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UPCGNode *local_res10;
  UPCGNode *local_res20;
  TArrayView<UPCGNode_*,int> local_18;
  
  local_res10 = (UPCGNode *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_18.ArrayNum = 1;
  local_res20 = local_res10;
  local_18.DataPtr = &local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  RemoveNodes_Internal((UPCGGraph *)param_1,&local_18);
  return;
}

// execRemoveNodes @ 149f1a230

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void __cdecl UPCGGraph::execRemoveNodes(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  code *pcVar3;
  bool bVar4;
  void **ppvVar5;
  void *local_38;
  undefined8 local_30;
  UPCGNode **local_28;
  int iStack_20;
  undefined4 uStack_1c;
  TArrayView<UPCGNode_*,int> local_18;
  
  local_38 = (void *)0x0;
  local_30 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  ppvVar5 = &local_38;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar5 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = *ppvVar5;
  iVar1 = *(int *)(ppvVar5 + 1);
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar1;
  local_18.DataPtr = local_28;
  iStack_20 = iVar1;
  RemoveNodes_Internal((UPCGGraph *)param_1,&local_18);
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// AddNodeOfType<UPCGAttributeNoiseSettings,void> @ 14a013aa0

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

UPCGNode * __thiscall
UPCGGraph::AddNodeOfType<UPCGAttributeNoiseSettings,void>
          (UPCGGraph *this,UPCGAttributeNoiseSettings **param_1)

{
  int iVar1;
  longlong lVar2;
  UPCGAttributeNoiseSettings *pUVar3;
  UPCGNode *pUVar4;
  UClass *pUVar5;
  UPCGAttributeNoiseSettings *local_res10;
  UClass *local_res18;
  
  local_res10 = *param_1;
  local_res18 = Z_Construct_UClass_UPCGAttributeNoiseSettings_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18);
  }
  pUVar4 = AddNodeOfType(this,(TSubclassOf<UPCGSettings>)&local_res18,(UPCGSettings **)&local_res10)
  ;
  pUVar3 = local_res10;
  if (local_res10 != (UPCGAttributeNoiseSettings *)0x0) {
    pUVar5 = Z_Construct_UClass_UPCGAttributeNoiseSettings_NoRegister();
    lVar2 = pUVar3->_padding_;
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) {
      *param_1 = pUVar3;
      return pUVar4;
    }
  }
  *param_1 = (UPCGAttributeNoiseSettings *)0x0;
  return pUVar4;
}

// AddNodeOfType<UPCGSurfaceSamplerSettings,void> @ 14a013b60

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

UPCGNode * __thiscall
UPCGGraph::AddNodeOfType<UPCGSurfaceSamplerSettings,void>
          (UPCGGraph *this,UPCGSurfaceSamplerSettings **param_1)

{
  int iVar1;
  longlong lVar2;
  UPCGSurfaceSamplerSettings *pUVar3;
  UPCGNode *pUVar4;
  UClass *pUVar5;
  UPCGSurfaceSamplerSettings *local_res10;
  UClass *local_res18;
  
  local_res10 = *param_1;
  local_res18 = Z_Construct_UClass_UPCGSurfaceSamplerSettings_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18);
  }
  pUVar4 = AddNodeOfType(this,(TSubclassOf<UPCGSettings>)&local_res18,(UPCGSettings **)&local_res10)
  ;
  pUVar3 = local_res10;
  if (local_res10 != (UPCGSurfaceSamplerSettings *)0x0) {
    pUVar5 = Z_Construct_UClass_UPCGSurfaceSamplerSettings_NoRegister();
    lVar2 = pUVar3->_padding_;
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) {
      *param_1 = pUVar3;
      return pUVar4;
    }
  }
  *param_1 = (UPCGSurfaceSamplerSettings *)0x0;
  return pUVar4;
}

// AddNodeOfType<UPCGUserParameterGetSettings,void> @ 14a013c20

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

UPCGNode * __thiscall
UPCGGraph::AddNodeOfType<UPCGUserParameterGetSettings,void>
          (UPCGGraph *this,UPCGUserParameterGetSettings **param_1)

{
  int iVar1;
  longlong lVar2;
  UPCGUserParameterGetSettings *pUVar3;
  UPCGNode *pUVar4;
  UClass *pUVar5;
  UPCGUserParameterGetSettings *local_res10;
  UClass *local_res18;
  
  local_res10 = *param_1;
  local_res18 = Z_Construct_UClass_UPCGUserParameterGetSettings_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18);
  }
  pUVar4 = AddNodeOfType(this,(TSubclassOf<UPCGSettings>)&local_res18,(UPCGSettings **)&local_res10)
  ;
  pUVar3 = local_res10;
  if (local_res10 != (UPCGUserParameterGetSettings *)0x0) {
    pUVar5 = Z_Construct_UClass_UPCGUserParameterGetSettings_NoRegister();
    lVar2 = pUVar3->_padding_;
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) {
      *param_1 = pUVar3;
      return pUVar4;
    }
  }
  *param_1 = (UPCGUserParameterGetSettings *)0x0;
  return pUVar4;
}

