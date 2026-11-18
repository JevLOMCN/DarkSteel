// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 22

// StaticClass @ 149789b50

UClass * __cdecl UPCGComputeGraph::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGComputeGraph.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGComputeGraph",
               &Z_Registration_Info_UClass_UPCGComputeGraph.InnerSingleton,
               StaticRegisterNativesUPCGComputeGraph,0x358,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGComputeGraph>,
               InternalVTableHelperCtorCaller<UPCGComputeGraph>,local_res8,
               UComputeGraph::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGComputeGraph.InnerSingleton;
}

// UPCGComputeGraph @ 1497e03f0

UPCGComputeGraph * __thiscall
UPCGComputeGraph::UPCGComputeGraph(UPCGComputeGraph *this,FVTableHelper *param_1)

{
  UComputeGraph::UComputeGraph((UComputeGraph *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGComputeGraph__6B_;
  *(undefined8 *)&this->KernelToCompileMessages = 0;
  *(undefined8 *)&(this->KernelToCompileMessages).field_0x8 = 0;
  *(undefined8 *)&(this->KernelToCompileMessages).field_0x20 = 0;
  *(undefined4 *)&(this->KernelToCompileMessages).field_0x28 = 0;
  *(undefined4 *)&(this->KernelToCompileMessages).field_0x2c = 0x80;
  *(undefined4 *)&(this->KernelToCompileMessages).field_0x34 = 0;
  *(undefined4 *)&(this->KernelToCompileMessages).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->KernelToCompileMessages).field_0x40 = 0;
  *(undefined4 *)&(this->KernelToCompileMessages).field_0x48 = 0;
  (this->KernelToNode).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->KernelToNode).ArrayNum = 0;
  (this->KernelToNode).ArrayMax = 0;
  (this->StaticMeshSpawners).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StaticMeshSpawners).ArrayNum = 0;
  (this->StaticMeshSpawners).ArrayMax = 0;
  this->bLogDataDescriptions = false;
  *(undefined8 *)&this->KernelBindingToPinLabel = 0;
  *(undefined8 *)&(this->KernelBindingToPinLabel).field_0x8 = 0;
  *(undefined8 *)&(this->KernelBindingToPinLabel).field_0x20 = 0;
  *(undefined4 *)&(this->KernelBindingToPinLabel).field_0x28 = 0;
  *(undefined4 *)&(this->KernelBindingToPinLabel).field_0x2c = 0x80;
  *(undefined4 *)&(this->KernelBindingToPinLabel).field_0x34 = 0;
  *(undefined4 *)&(this->KernelBindingToPinLabel).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->KernelBindingToPinLabel).field_0x40 = 0;
  *(undefined4 *)&(this->KernelBindingToPinLabel).field_0x48 = 0;
  *(undefined8 *)&this->DownstreamToUpstreamBinding = 0;
  *(undefined8 *)&(this->DownstreamToUpstreamBinding).field_0x8 = 0;
  *(undefined8 *)&(this->DownstreamToUpstreamBinding).field_0x20 = 0;
  *(undefined4 *)&(this->DownstreamToUpstreamBinding).field_0x28 = 0;
  *(undefined4 *)&(this->DownstreamToUpstreamBinding).field_0x2c = 0x80;
  *(undefined4 *)&(this->DownstreamToUpstreamBinding).field_0x34 = 0;
  *(undefined4 *)&(this->DownstreamToUpstreamBinding).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DownstreamToUpstreamBinding).field_0x40 = 0;
  *(undefined4 *)&(this->DownstreamToUpstreamBinding).field_0x48 = 0;
  (this->StaticAttributeTable).AttributeTable.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->StaticAttributeTable).AttributeTable.ArrayNum = 0;
  (this->StaticAttributeTable).AttributeTable.ArrayMax = 0;
  *(undefined8 *)&this->StaticDataLabelsTable = 0;
  *(undefined8 *)&(this->StaticDataLabelsTable).field_0x8 = 0;
  *(undefined8 *)&(this->StaticDataLabelsTable).field_0x20 = 0;
  *(undefined4 *)&(this->StaticDataLabelsTable).field_0x28 = 0;
  *(undefined4 *)&(this->StaticDataLabelsTable).field_0x2c = 0x80;
  *(undefined4 *)&(this->StaticDataLabelsTable).field_0x34 = 0;
  *(undefined4 *)&(this->StaticDataLabelsTable).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->StaticDataLabelsTable).field_0x40 = 0;
  *(undefined4 *)&(this->StaticDataLabelsTable).field_0x48 = 0;
  (this->StringTable).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StringTable).ArrayNum = 0;
  (this->StringTable).ArrayMax = 0;
  *(undefined8 *)&this->KernelPinToFirstBinding = 0;
  *(undefined8 *)&(this->KernelPinToFirstBinding).field_0x8 = 0;
  *(undefined8 *)&(this->KernelPinToFirstBinding).field_0x20 = 0;
  *(undefined4 *)&(this->KernelPinToFirstBinding).field_0x28 = 0;
  *(undefined4 *)&(this->KernelPinToFirstBinding).field_0x2c = 0x80;
  *(undefined4 *)&(this->KernelPinToFirstBinding).field_0x34 = 0;
  *(undefined4 *)&(this->KernelPinToFirstBinding).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->KernelPinToFirstBinding).field_0x40 = 0;
  *(undefined4 *)&(this->KernelPinToFirstBinding).field_0x48 = 0;
  *(undefined8 *)&this->CPUDataBindingToVirtualPinLabel = 0;
  *(undefined8 *)&(this->CPUDataBindingToVirtualPinLabel).field_0x8 = 0;
  *(undefined8 *)&(this->CPUDataBindingToVirtualPinLabel).field_0x20 = 0;
  *(undefined4 *)&(this->CPUDataBindingToVirtualPinLabel).field_0x28 = 0;
  *(undefined4 *)&(this->CPUDataBindingToVirtualPinLabel).field_0x2c = 0x80;
  *(undefined4 *)&(this->CPUDataBindingToVirtualPinLabel).field_0x34 = 0;
  *(undefined4 *)&(this->CPUDataBindingToVirtualPinLabel).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CPUDataBindingToVirtualPinLabel).field_0x40 = 0;
  *(undefined4 *)&(this->CPUDataBindingToVirtualPinLabel).field_0x48 = 0;
  *(undefined8 *)&this->VirtualInputPinToType = 0;
  *(undefined8 *)&(this->VirtualInputPinToType).field_0x8 = 0;
  *(undefined8 *)&(this->VirtualInputPinToType).field_0x20 = 0;
  *(undefined4 *)&(this->VirtualInputPinToType).field_0x28 = 0;
  *(undefined4 *)&(this->VirtualInputPinToType).field_0x2c = 0x80;
  *(undefined4 *)&(this->VirtualInputPinToType).field_0x34 = 0;
  *(undefined4 *)&(this->VirtualInputPinToType).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->VirtualInputPinToType).field_0x40 = 0;
  *(undefined4 *)&(this->VirtualInputPinToType).field_0x48 = 0;
  return this;
}

// UPCGComputeGraph @ 1497e0630

UPCGComputeGraph * __thiscall
UPCGComputeGraph::UPCGComputeGraph(UPCGComputeGraph *this,FObjectInitializer *param_1)

{
  UComputeGraph::UComputeGraph((UComputeGraph *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGComputeGraph__6B_;
  *(undefined8 *)&this->KernelToCompileMessages = 0;
  *(undefined8 *)&(this->KernelToCompileMessages).field_0x8 = 0;
  *(undefined8 *)&(this->KernelToCompileMessages).field_0x20 = 0;
  *(undefined4 *)&(this->KernelToCompileMessages).field_0x28 = 0;
  *(undefined4 *)&(this->KernelToCompileMessages).field_0x2c = 0x80;
  *(undefined4 *)&(this->KernelToCompileMessages).field_0x34 = 0;
  *(undefined4 *)&(this->KernelToCompileMessages).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->KernelToCompileMessages).field_0x40 = 0;
  *(undefined4 *)&(this->KernelToCompileMessages).field_0x48 = 0;
  (this->KernelToNode).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->KernelToNode).ArrayNum = 0;
  (this->KernelToNode).ArrayMax = 0;
  (this->StaticMeshSpawners).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StaticMeshSpawners).ArrayNum = 0;
  (this->StaticMeshSpawners).ArrayMax = 0;
  this->bLogDataDescriptions = false;
  *(undefined8 *)&this->KernelBindingToPinLabel = 0;
  *(undefined8 *)&(this->KernelBindingToPinLabel).field_0x8 = 0;
  *(undefined8 *)&(this->KernelBindingToPinLabel).field_0x20 = 0;
  *(undefined4 *)&(this->KernelBindingToPinLabel).field_0x28 = 0;
  *(undefined4 *)&(this->KernelBindingToPinLabel).field_0x2c = 0x80;
  *(undefined4 *)&(this->KernelBindingToPinLabel).field_0x34 = 0;
  *(undefined4 *)&(this->KernelBindingToPinLabel).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->KernelBindingToPinLabel).field_0x40 = 0;
  *(undefined4 *)&(this->KernelBindingToPinLabel).field_0x48 = 0;
  *(undefined8 *)&this->DownstreamToUpstreamBinding = 0;
  *(undefined8 *)&(this->DownstreamToUpstreamBinding).field_0x8 = 0;
  *(undefined8 *)&(this->DownstreamToUpstreamBinding).field_0x20 = 0;
  *(undefined4 *)&(this->DownstreamToUpstreamBinding).field_0x28 = 0;
  *(undefined4 *)&(this->DownstreamToUpstreamBinding).field_0x2c = 0x80;
  *(undefined4 *)&(this->DownstreamToUpstreamBinding).field_0x34 = 0;
  *(undefined4 *)&(this->DownstreamToUpstreamBinding).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DownstreamToUpstreamBinding).field_0x40 = 0;
  *(undefined4 *)&(this->DownstreamToUpstreamBinding).field_0x48 = 0;
  (this->StaticAttributeTable).AttributeTable.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->StaticAttributeTable).AttributeTable.ArrayNum = 0;
  (this->StaticAttributeTable).AttributeTable.ArrayMax = 0;
  *(undefined8 *)&this->StaticDataLabelsTable = 0;
  *(undefined8 *)&(this->StaticDataLabelsTable).field_0x8 = 0;
  *(undefined8 *)&(this->StaticDataLabelsTable).field_0x20 = 0;
  *(undefined4 *)&(this->StaticDataLabelsTable).field_0x28 = 0;
  *(undefined4 *)&(this->StaticDataLabelsTable).field_0x2c = 0x80;
  *(undefined4 *)&(this->StaticDataLabelsTable).field_0x34 = 0;
  *(undefined4 *)&(this->StaticDataLabelsTable).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->StaticDataLabelsTable).field_0x40 = 0;
  *(undefined4 *)&(this->StaticDataLabelsTable).field_0x48 = 0;
  (this->StringTable).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StringTable).ArrayNum = 0;
  (this->StringTable).ArrayMax = 0;
  *(undefined8 *)&this->KernelPinToFirstBinding = 0;
  *(undefined8 *)&(this->KernelPinToFirstBinding).field_0x8 = 0;
  *(undefined8 *)&(this->KernelPinToFirstBinding).field_0x20 = 0;
  *(undefined4 *)&(this->KernelPinToFirstBinding).field_0x28 = 0;
  *(undefined4 *)&(this->KernelPinToFirstBinding).field_0x2c = 0x80;
  *(undefined4 *)&(this->KernelPinToFirstBinding).field_0x34 = 0;
  *(undefined4 *)&(this->KernelPinToFirstBinding).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->KernelPinToFirstBinding).field_0x40 = 0;
  *(undefined4 *)&(this->KernelPinToFirstBinding).field_0x48 = 0;
  *(undefined8 *)&this->CPUDataBindingToVirtualPinLabel = 0;
  *(undefined8 *)&(this->CPUDataBindingToVirtualPinLabel).field_0x8 = 0;
  *(undefined8 *)&(this->CPUDataBindingToVirtualPinLabel).field_0x20 = 0;
  *(undefined4 *)&(this->CPUDataBindingToVirtualPinLabel).field_0x28 = 0;
  *(undefined4 *)&(this->CPUDataBindingToVirtualPinLabel).field_0x2c = 0x80;
  *(undefined4 *)&(this->CPUDataBindingToVirtualPinLabel).field_0x34 = 0;
  *(undefined4 *)&(this->CPUDataBindingToVirtualPinLabel).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CPUDataBindingToVirtualPinLabel).field_0x40 = 0;
  *(undefined4 *)&(this->CPUDataBindingToVirtualPinLabel).field_0x48 = 0;
  *(undefined8 *)&this->VirtualInputPinToType = 0;
  *(undefined8 *)&(this->VirtualInputPinToType).field_0x8 = 0;
  *(undefined8 *)&(this->VirtualInputPinToType).field_0x20 = 0;
  *(undefined4 *)&(this->VirtualInputPinToType).field_0x28 = 0;
  *(undefined4 *)&(this->VirtualInputPinToType).field_0x2c = 0x80;
  *(undefined4 *)&(this->VirtualInputPinToType).field_0x34 = 0;
  *(undefined4 *)&(this->VirtualInputPinToType).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->VirtualInputPinToType).field_0x40 = 0;
  *(undefined4 *)&(this->VirtualInputPinToType).field_0x48 = 0;
  return this;
}

// ~UPCGComputeGraph @ 1497e2bf0

void __thiscall UPCGComputeGraph::~UPCGComputeGraph(UPCGComputeGraph *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UPCGComputeGraph__6B_;
  *(undefined4 *)&(this->VirtualInputPinToType).field_0x48 = 0;
  pvVar1 = *(void **)&(this->VirtualInputPinToType).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FPCGDataTypeIdentifier>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FPCGDataTypeIdentifier>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FPCGDataTypeIdentifier>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->VirtualInputPinToType);
  *(undefined4 *)&(this->CPUDataBindingToVirtualPinLabel).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CPUDataBindingToVirtualPinLabel).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CPUDataBindingToVirtualPinLabel);
  *(undefined4 *)&(this->KernelPinToFirstBinding).field_0x48 = 0;
  pvVar1 = *(void **)&(this->KernelPinToFirstBinding).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FPCGKernelPin,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FPCGKernelPin,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FPCGKernelPin,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->KernelPinToFirstBinding);
  DestructItems<FString,int>
            ((FString *)(this->StringTable).AllocatorInstance.Data,(this->StringTable).ArrayNum);
  pFVar2 = (this->StringTable).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->StaticDataLabelsTable).field_0x48 = 0;
  pvVar1 = *(void **)&(this->StaticDataLabelsTable).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FPCGPinDataLabels>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FPCGPinDataLabels>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FPCGPinDataLabels>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StaticDataLabelsTable);
  DestructItems<FPCGKernelAttributeKey,int>
            ((FPCGKernelAttributeKey *)
             (this->StaticAttributeTable).AttributeTable.AllocatorInstance.Data,
             (this->StaticAttributeTable).AttributeTable.ArrayNum);
  pFVar2 = (this->StaticAttributeTable).AttributeTable.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->DownstreamToUpstreamBinding).field_0x48 = 0;
  pvVar1 = *(void **)&(this->DownstreamToUpstreamBinding).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DownstreamToUpstreamBinding);
  *(undefined4 *)&(this->KernelBindingToPinLabel).field_0x48 = 0;
  pvVar1 = *(void **)&(this->KernelBindingToPinLabel).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->KernelBindingToPinLabel);
  pFVar2 = (this->StaticMeshSpawners).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TSoftObjectPtr<UPCGNode_const_>,int>
            ((TSoftObjectPtr<UPCGNode_const_> *)(this->KernelToNode).AllocatorInstance.Data,
             (this->KernelToNode).ArrayNum);
  pFVar2 = (this->KernelToNode).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->KernelToCompileMessages).field_0x48 = 0;
  pvVar1 = *(void **)&(this->KernelToCompileMessages).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectKey<UPCGNode_const_>,TArray<FComputeKernelCompileMessage,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectKey<UPCGNode_const_>,TArray<FComputeKernelCompileMessage,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectKey<UPCGNode_const_>,TArray<FComputeKernelCompileMessage,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->KernelToCompileMessages);
  UComputeGraph::~UComputeGraph((UComputeGraph *)this);
  return;
}

// operator() @ 1497e44e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPCGDataType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
`UPCGComputeGraph::DebugLogDataDescriptions'::__l2::<lambda_1>::operator()
          (void *this,TSharedPtr<FPCGDataCollectionDesc_const_,1> *param_1,FPCGKernelPin *param_2)

{
  longlong *plVar1;
  UPCGComputeGraph *this_00;
  undefined1 *puVar2;
  FPCGProxyForGPUDataCollection *pFVar3;
  FRDGPooledBuffer *pFVar4;
  code *pcVar5;
  TArray<FPCGDataTypeBaseId,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  undefined8 *puVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  UPackage *pUVar12;
  UEnum *this_01;
  TStringBuilderBase<wchar_t> *pTVar13;
  wchar_t *pwVar14;
  UPCGProxyForGPUData *this_02;
  TSharedPtr<FPCGProxyForGPUDataCollection,1> *pTVar15;
  FPCGDataTypeIdentifier *pFVar16;
  FStringFormatArg *pFVar17;
  int *piVar18;
  FText *pFVar19;
  undefined1 *puVar20;
  int *piVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  FName *pFVar25;
  FRDGPooledBuffer *pFVar26;
  FPCGDataTypeIdentifier *this_03;
  longlong lVar27;
  FScriptContainerElement *pFVar28;
  undefined1 auStackY_428 [32];
  undefined1 local_3e4 [4];
  uint local_3e0;
  FRDGPooledBuffer *local_3d8;
  int local_3d0;
  FScriptContainerElement *local_3c8;
  uint local_3c0;
  undefined8 *local_3b8;
  FString local_3b0;
  longlong local_3a0;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_398;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_388;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_378;
  FString local_368;
  FString local_358;
  FPCGProxyForGPUDataCollection *local_348;
  FSharedReferencer<1> FStack_340;
  FPCGDataTypeIdentifier *local_338;
  FString local_330;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_320;
  FString local_310;
  FName local_300;
  FPCGKernelPin *local_2f8;
  FScriptContainerElement *local_2f0;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> *local_2e8;
  FString local_2e0;
  undefined8 local_2d0;
  FSharedReferencer<1> local_2c8;
  FString local_2c0;
  FString local_2b0;
  undefined1 local_2a0 [16];
  FString local_290;
  FString local_280;
  TArray<FPCGDataTypeBaseId,TSizedDefaultAllocator<32>_> local_270;
  TSharedPtr<FPCGProxyForGPUDataCollection,1> local_260;
  FString local_250;
  FString local_240;
  FText local_230;
  FString local_220;
  FString local_210;
  FText local_200;
  FStringFormatArg local_1f0;
  FStringFormatArg local_1d0;
  FStringFormatArg local_1b0;
  FPCGDataTypeIdentifier local_190;
  TStringBuilderBase<wchar_t> local_178;
  wchar_t local_158 [128];
  ulonglong local_58 [2];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStackY_428;
  local_3e0 = 0;
  local_3b8 = this;
  local_2f8 = param_2;
  local_2e8 = param_1;
  if (param_1->Object != (FPCGDataCollectionDesc *)0x0) {
    uVar22 = 0;
    lVar27 = 0;
    pFVar26 = local_3d8;
    while( true ) {
      param_1 = local_2e8;
      puVar8 = local_3b8;
      local_3c0 = uVar22;
      local_3a0 = lVar27;
      if ((local_2e8->Object == (FPCGDataCollectionDesc *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar11 = (param_1->Object->DataDescs).ArrayNum;
      if ((iVar11 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (iVar11 <= (int)uVar22) break;
      if ((param_1->Object == (FPCGDataCollectionDesc *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar11 = (param_1->Object->DataDescs).ArrayNum;
      pFVar28 = (param_1->Object->DataDescs).AllocatorInstance.Data;
      if ((iVar11 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar10 = 0;
      if ((int)uVar22 < iVar11) {
        uVar10 = ~uVar22 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this_03 = (FPCGDataTypeIdentifier *)(pFVar28 + lVar27 * 0x68);
      local_338 = this_03;
      if ((3 < (byte)LogPCG._0_1_) &&
         (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPCG),
         3 < (byte)LogPCG._0_1_)) {
        FPCGDataTypeIdentifier::ToString(this_03,&local_280);
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_280.Data.AllocatorInstance.Data);
        }
        if (3 < (byte)LogPCG._0_1_) {
          this_01 = Z_Registration_Info_UEnum_EPCGElementDimension.OuterSingleton;
          if (Z_Registration_Info_UEnum_EPCGElementDimension.OuterSingleton == (UEnum *)0x0) {
            pUVar12 = Z_Construct_UPackage__Script_PCG();
            this_01 = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGElementDimension,(UObject *)pUVar12,
                                    L"EPCGElementDimension");
            Z_Registration_Info_UEnum_EPCGElementDimension.OuterSingleton = this_01;
            if ((this_01 == (UEnum *)0x0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("EnumClass != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                   ,0xca4,L""), bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          UEnum::GetNameByValue(this_01,(long64)&local_300);
          ::FName::ToString(&local_300,&local_2e0);
          local_270 = this_03[1].Ids;
          local_178.bIsDynamic = false;
          local_178.bIsExternal = false;
          local_358.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_358.Data.ArrayNum = 0;
          local_358.Data.ArrayMax = 0;
          local_178.Base = local_158;
          local_178.CurPos = local_158;
          local_178.End = (wchar_t *)local_58;
          local_178.CurPos = FGenericPlatformString::Convert<char,wchar_t>(local_158,2,"X=",2);
          pTVar13 = TStringBuilderBase<wchar_t>::AppendfImpl(&local_178,L"%d");
          if (pTVar13->End < pTVar13->CurPos + 3) {
            TStringBuilderBase<wchar_t>::Extend(pTVar13,3);
          }
          pwVar14 = FGenericPlatformString::Convert<char,wchar_t>(pTVar13->CurPos,3," Y=",3);
          pTVar13->CurPos = pwVar14;
          pTVar13 = TStringBuilderBase<wchar_t>::AppendfImpl(pTVar13,L"%d");
          if (pTVar13->End < pTVar13->CurPos + 3) {
            TStringBuilderBase<wchar_t>::Extend(pTVar13,3);
          }
          pwVar14 = FGenericPlatformString::Convert<char,wchar_t>(pTVar13->CurPos,3," Z=",3);
          pTVar13->CurPos = pwVar14;
          pTVar13 = TStringBuilderBase<wchar_t>::AppendfImpl(pTVar13,L"%d");
          if (pTVar13->End < pTVar13->CurPos + 3) {
            TStringBuilderBase<wchar_t>::Extend(pTVar13,3);
          }
          pwVar14 = FGenericPlatformString::Convert<char,wchar_t>(pTVar13->CurPos,3," W=",3);
          pTVar13->CurPos = pwVar14;
          TStringBuilderBase<wchar_t>::AppendfImpl(pTVar13,L"%d");
          ::FString::AppendChars
                    (&local_358,local_178.Base,
                     (int)((longlong)local_178.CurPos - (longlong)local_178.Base >> 1));
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_178);
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_358.Data.AllocatorInstance.Data);
          }
          if (local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
          }
          if (3 < (byte)LogPCG._0_1_) {
            if ((this_03[2].Ids.ArrayNum < 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InCount >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xeb,L""), bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
          }
        }
      }
      this_00 = (UPCGComputeGraph *)*puVar8;
      local_348 = (FPCGProxyForGPUDataCollection *)0x0;
      FStack_340.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      uVar10 = UPCGComputeGraph::GetBindingIndex(this_00,local_2f8);
      if (*(int *)&(this_00->CPUDataBindingToVirtualPinLabel).field_0x8 !=
          *(int *)&(this_00->CPUDataBindingToVirtualPinLabel).field_0x34) {
        puVar2 = *(undefined1 **)&(this_00->CPUDataBindingToVirtualPinLabel).field_0x40;
        puVar20 = &(this_00->CPUDataBindingToVirtualPinLabel).field_0x38;
        if (puVar2 != (undefined1 *)0x0) {
          puVar20 = puVar2;
        }
        iVar11 = *(int *)(puVar20 +
                         (ulonglong)
                         (*(int *)&(this_00->CPUDataBindingToVirtualPinLabel).field_0x48 - 1U &
                         uVar10) * 4);
        if (iVar11 != -1) {
          do {
            lVar27 = *(longlong *)&this_00->CPUDataBindingToVirtualPinLabel +
                     (longlong)iVar11 * 0x14;
            if (*(uint *)(*(longlong *)&this_00->CPUDataBindingToVirtualPinLabel +
                         (longlong)iVar11 * 0x14) == uVar10) {
              pFVar25 = (FName *)(lVar27 + 4);
              if (lVar27 == 0) {
                pFVar25 = (FName *)0x0;
              }
              if (pFVar25 != (FName *)0x0) {
                FPCGDataCollection::GetInputsByPin
                          ((FPCGDataCollection *)(puVar8[2] + 0x30),&local_320,pFVar25);
                lVar27 = local_3a0;
                if (((int)uVar22 < 0) || (local_320.ArrayNum <= (int)uVar22)) {
                  bVar9 = UE::Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<_4783525027125395228>,false,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGComputeGraph.cpp"
                                     ,0xe4,"PinInputs.IsValidIndex(DataIndex)");
                  if (bVar9) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                }
                else {
                  uVar10 = 0;
                  if ((int)uVar22 < local_320.ArrayNum) {
                    uVar10 = ~uVar22 >> 0x1f;
                  }
                  if ((uVar10 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  this_02 = Cast<UPCGProxyForGPUData>
                                      ((FPCGDataPtrWrapper *)
                                       (local_320.AllocatorInstance.Data + lVar27 * 0x78));
                  if (this_02 != (UPCGProxyForGPUData *)0x0) {
                    pTVar15 = UPCGProxyForGPUData::GetGPUInfoMutable(this_02,&local_260);
                    local_2c8.ReferenceController =
                         (pTVar15->SharedReferenceCount).ReferenceController;
                    pFVar3 = pTVar15->Object;
                    if (local_2c8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
                      LOCK();
                      (local_2c8.ReferenceController)->SharedReferenceCount =
                           (atomic<int>)
                           ((int)(local_2c8.ReferenceController)->SharedReferenceCount + 1);
                      UNLOCK();
                    }
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline
                              (local_260.SharedReferenceCount.ReferenceController);
                    local_2d0 = 0;
                    local_348 = pFVar3;
                    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_340,&local_2c8);
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline(local_2c8.ReferenceController);
                  }
                }
                DestructItems<FPCGTaggedData,int>
                          ((FPCGTaggedData *)local_320.AllocatorInstance.Data,local_320.ArrayNum);
                if ((FPCGTaggedData *)local_320.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
                  FMemory::Free(local_320.AllocatorInstance.Data);
                }
              }
              break;
            }
            iVar11 = *(int *)(lVar27 + 0xc);
          } while (iVar11 != -1);
        }
      }
      iVar11 = this_03[2].Ids.ArrayNum;
      pFVar28 = this_03[2].Ids.AllocatorInstance.Data;
      local_3c8 = pFVar28;
      if ((iVar11 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar3 = local_348;
      local_2f0 = pFVar28 + (longlong)iVar11 * 0x78;
      if (pFVar28 != local_2f0) {
        do {
          iVar11 = *(int *)pFVar28;
          pFVar16 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_190,Point);
          bVar9 = FPCGDataTypeIdentifier::IsSameType(this_03,pFVar16);
          if (local_190.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_190.Ids.AllocatorInstance.Data);
          }
          if (bVar9) {
            switch(iVar11) {
            case 0:
            case 1:
            case 2:
              break;
            case 3:
              break;
            case 4:
              break;
            case 5:
              break;
            default:
              goto switchD_1497e4c43_caseD_6;
            case 7:
              break;
            case 8:
            }
          }
          else {
switchD_1497e4c43_caseD_6:
          }
          piVar21 = *(int **)(pFVar28 + 0x68);
          pFVar17 = (FStringFormatArg *)0x0;
          iVar11 = *(int *)(pFVar28 + 0x70);
          local_3b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_3b0.Data.ArrayNum = 0;
          local_3b0.Data.ArrayMax = 0;
          piVar18 = piVar21 + iVar11;
          while( true ) {
            if (*(int *)(local_3c8 + 0x70) != iVar11) {
              local_3e4[0] = 0;
              `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_3e4);
            }
            pFVar7 = local_3c8;
            if (piVar21 == piVar18) break;
            iVar24 = *piVar21;
            ::FString::AppendChars(&local_3b0,L", ",2);
            FStringFormatArg::FStringFormatArg(&local_1f0,iVar24);
            local_378.ArrayNum = 1;
            local_378.AllocatorInstance.Data = (FScriptContainerElement *)pFVar17;
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,0,&local_378.AllocatorInstance,1,&local_378.ArrayMax);
            ConstructItems<FStringFormatArg,FStringFormatArg,int>
                      (local_378.AllocatorInstance.Data,&local_1f0,1);
            ::FString::FormatImpl(&local_2c0,L"{0}",&local_378);
            iVar23 = local_2c0.Data.ArrayNum + -1;
            if (local_2c0.Data.ArrayNum == 0) {
              iVar23 = (int)pFVar17;
            }
            ::FString::AppendChars
                      (&local_3b0,(wchar_t *)local_2c0.Data.AllocatorInstance.Data,iVar23);
            if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
            }
            DestructItems<FStringFormatArg,int>
                      ((FStringFormatArg *)local_378.AllocatorInstance.Data,local_378.ArrayNum);
            if ((FStringFormatArg *)local_378.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
              FMemory::Free(local_378.AllocatorInstance.Data);
            }
            if (local_1f0.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_1f0.StringValue.Data.AllocatorInstance.Data);
            }
            uVar22 = local_3e0;
            if (pFVar3 != (FPCGProxyForGPUDataCollection *)0x0) {
              lVar27 = local_3b8[2];
              if ((pFVar3 == (FPCGProxyForGPUDataCollection *)0x0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar9)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pFVar26 = (pFVar3->Buffer).Reference;
              if (pFVar26 != (FRDGPooledBuffer *)0x0) {
                LOCK();
                *(int *)&pFVar26->_padding_ = (int)pFVar26->_padding_ + 1;
                UNLOCK();
              }
              uVar22 = local_3e0 | 1;
              local_3e0 = uVar22;
              local_3d8 = pFVar26;
              local_3d0 = iVar24;
              pFVar17 = (FStringFormatArg *)
                        TMapBase<TTuple<TRefCountPtr<FRDGPooledBuffer>,int>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<TRefCountPtr<FRDGPooledBuffer>,int>,int,0>_>
                        ::Find((TMapBase<TTuple<TRefCountPtr<FRDGPooledBuffer>,int>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<TRefCountPtr<FRDGPooledBuffer>,int>,int,0>_>
                                *)(lVar27 + 0x230),
                               (TTuple<TRefCountPtr<FRDGPooledBuffer>,int> *)&local_3d8);
            }
            if (((uVar22 & 1) != 0) &&
               (local_3e0 = uVar22 & 0xfffffffe, pFVar26 != (FRDGPooledBuffer *)0x0)) {
              plVar1 = &pFVar26->_padding_;
              LOCK();
              lVar27 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if (((int)lVar27 == 1) && (plVar1 != (longlong *)0x0)) {
                (**(code **)pFVar26->_padding_)(pFVar26,1);
              }
            }
            if (pFVar17 == (FStringFormatArg *)0x0) {
LAB_1497e4f6a:
              piVar21 = piVar21 + 1;
            }
            else {
              FStringFormatArg::FStringFormatArg(&local_1d0,pFVar17->Type);
              local_398.ArrayNum = 1;
              pFVar17 = (FStringFormatArg *)0x0;
              local_398.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x20,8,1,0,&local_398.AllocatorInstance,1,&local_398.ArrayMax);
              ConstructItems<FStringFormatArg,FStringFormatArg,int>
                        (local_398.AllocatorInstance.Data,&local_1d0,1);
              ::FString::FormatImpl(&local_2b0,L" ({0})",&local_398);
              iVar24 = local_2b0.Data.ArrayNum + -1;
              if (local_2b0.Data.ArrayNum == 0) {
                iVar24 = 0;
              }
              ::FString::AppendChars
                        (&local_3b0,(wchar_t *)local_2b0.Data.AllocatorInstance.Data,iVar24);
              if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
              }
              DestructItems<FStringFormatArg,int>
                        ((FStringFormatArg *)local_398.AllocatorInstance.Data,local_398.ArrayNum);
              if ((FStringFormatArg *)local_398.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
                FMemory::Free(local_398.AllocatorInstance.Data);
              }
              if (local_1d0.StringValue.Data.AllocatorInstance.Data ==
                  (FScriptContainerElement *)0x0) goto LAB_1497e4f6a;
              FMemory::Free(local_1d0.StringValue.Data.AllocatorInstance.Data);
              piVar21 = piVar21 + 1;
            }
          }
          if ((*(int *)local_3c8 < 0x20) || (pFVar3 == (FPCGProxyForGPUDataCollection *)0x0)) {
LAB_1497e51ba:
            pFVar28 = pFVar7;
            if (3 < (byte)LogPCG._0_1_) {
              pFVar19 = UEnum::GetDisplayNameTextByValue
                                  ((UEnum *)local_3b8[1],&local_200,(ulonglong)(byte)pFVar7[0x20]);
              FText::ToString(pFVar19);
              if (pFVar7[0x10] == (FScriptContainerElement)0xfe) {
                ::FString::FString(&local_330,L"INVALID");
              }
              else if (pFVar7[0x10] == (FScriptContainerElement)0x0) {
                ::FName::ToString((FName *)(pFVar7 + 8),&local_330);
              }
              else {
                ::FName::ToString((FName *)(pFVar7 + 8),&local_210);
                ::FName::ToString((FName *)(pFVar7 + 0x18),&local_220);
                ::FString::PrintfImpl(&local_330,L"%s.%s");
                if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_220.Data.AllocatorInstance.Data);
                }
                if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_210.Data.AllocatorInstance.Data);
                }
              }
              UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
              if (local_330.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_330.Data.AllocatorInstance.Data);
              }
              if (local_200.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_200.TextData.Reference + 0x10))();
              }
            }
          }
          else {
            iVar11 = *(int *)local_3c8 + -0x20;
            lVar27 = local_3b8[2];
            if ((pFVar3 == (FPCGProxyForGPUDataCollection *)0x0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar4 = (pFVar3->Buffer).Reference;
            plVar1 = &pFVar4->_padding_;
            local_2a0._0_4_ = iVar11;
            local_2a0._8_8_ = pFVar4;
            if (pFVar4 == (FRDGPooledBuffer *)0x0) {
              piVar18 = TMapBase<TTuple<int,TRefCountPtr<FRDGPooledBuffer>_>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,TRefCountPtr<FRDGPooledBuffer>_>,int,0>_>
                        ::Find((TMapBase<TTuple<int,TRefCountPtr<FRDGPooledBuffer>_>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,TRefCountPtr<FRDGPooledBuffer>_>,int,0>_>
                                *)(lVar27 + 400),
                               (TTuple<int,TRefCountPtr<FRDGPooledBuffer>_> *)local_2a0);
            }
            else {
              LOCK();
              *(int *)plVar1 = (int)*plVar1 + 1;
              UNLOCK();
              piVar18 = TMapBase<TTuple<int,TRefCountPtr<FRDGPooledBuffer>_>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,TRefCountPtr<FRDGPooledBuffer>_>,int,0>_>
                        ::Find((TMapBase<TTuple<int,TRefCountPtr<FRDGPooledBuffer>_>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,TRefCountPtr<FRDGPooledBuffer>_>,int,0>_>
                                *)(lVar27 + 400),
                               (TTuple<int,TRefCountPtr<FRDGPooledBuffer>_> *)local_2a0);
              LOCK();
              lVar27 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if (((int)lVar27 == 1) && (plVar1 != (longlong *)0x0)) {
                (**(code **)pFVar4->_padding_)(pFVar4);
              }
            }
            pFVar28 = local_3c8;
            if (piVar18 != (int *)0x0) {
              iVar11 = *piVar18;
            }
            if (iVar11 < 0) goto LAB_1497e51ba;
            if (3 < (byte)LogPCG._0_1_) {
              pFVar19 = UEnum::GetDisplayNameTextByValue
                                  ((UEnum *)local_3b8[1],&local_230,(ulonglong)(byte)local_3c8[0x20]
                                  );
              FText::ToString(pFVar19);
              if (pFVar28[0x10] == (FScriptContainerElement)0xfe) {
                ::FString::FString(&local_310,L"INVALID");
              }
              else if (pFVar28[0x10] == (FScriptContainerElement)0x0) {
                ::FName::ToString((FName *)(pFVar28 + 8),&local_310);
              }
              else {
                ::FName::ToString((FName *)(pFVar28 + 8),&local_240);
                ::FName::ToString((FName *)(pFVar28 + 0x18),&local_250);
                ::FString::PrintfImpl(&local_310,L"%s.%s");
                if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_250.Data.AllocatorInstance.Data);
                }
                if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_240.Data.AllocatorInstance.Data);
                }
              }
              UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
              if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_310.Data.AllocatorInstance.Data);
              }
              if (local_230.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_230.TextData.Reference + 0x10))();
              }
            }
          }
          if (local_3b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3b0.Data.AllocatorInstance.Data);
          }
          pFVar28 = pFVar28 + 0x78;
          this_03 = local_338;
          uVar22 = local_3c0;
          local_3c8 = pFVar28;
        } while (pFVar28 != local_2f0);
      }
      if (3 < (byte)LogPCG._0_1_) {
        if ((*(int *)&this_03[4].Ids.AllocatorInstance.Data < 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      }
      local_368.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_368.Data.ArrayNum = 0;
      local_368.Data.ArrayMax = 0;
      iVar11 = *(int *)&this_03[4].Ids.AllocatorInstance.Data;
      pFVar16 = this_03 + 3;
      if (*(FPCGDataTypeIdentifier **)&this_03[3].CustomSubtype != (FPCGDataTypeIdentifier *)0x0) {
        pFVar16 = *(FPCGDataTypeIdentifier **)&this_03[3].CustomSubtype;
      }
      if ((iVar11 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar6 = &pFVar16->Ids;
      for (; pFVar16 !=
             (FPCGDataTypeIdentifier *)
             ((longlong)&(pTVar6->AllocatorInstance).Data + (longlong)iVar11 * 4);
          pFVar16 = (FPCGDataTypeIdentifier *)((longlong)&(pFVar16->Ids).AllocatorInstance.Data + 4)
          ) {
        iVar24 = *(int *)&(pFVar16->Ids).AllocatorInstance.Data;
        ::FString::AppendChars(&local_368,L", ",2);
        FStringFormatArg::FStringFormatArg(&local_1b0,iVar24);
        local_388.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_388.ArrayNum = 1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,1,0,&local_388.AllocatorInstance,1,&local_388.ArrayMax);
        ConstructItems<FStringFormatArg,FStringFormatArg,int>
                  (local_388.AllocatorInstance.Data,&local_1b0,1);
        ::FString::FormatImpl(&local_290,L"{0}",&local_388);
        iVar24 = local_290.Data.ArrayNum + -1;
        if (local_290.Data.ArrayNum == 0) {
          iVar24 = 0;
        }
        ::FString::AppendChars(&local_368,(wchar_t *)local_290.Data.AllocatorInstance.Data,iVar24);
        if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_290.Data.AllocatorInstance.Data);
        }
        DestructItems<FStringFormatArg,int>
                  ((FStringFormatArg *)local_388.AllocatorInstance.Data,local_388.ArrayNum);
        if ((FStringFormatArg *)local_388.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
          FMemory::Free(local_388.AllocatorInstance.Data);
        }
        if (local_1b0.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b0.StringValue.Data.AllocatorInstance.Data);
        }
      }
      if (3 < (byte)LogPCG._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      }
      if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_368.Data.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_340.ReferenceController);
      uVar22 = uVar22 + 1;
      lVar27 = local_3a0 + 1;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// AreGraphSettingsValid @ 1497eeda0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UPCGComputeGraph::AreGraphSettingsValid(UPCGComputeGraph *this,FPCGContext *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  UComputeKernel *pUVar4;
  byte bVar5;
  UClass *pUVar6;
  FString *pFVar7;
  wchar_t *pwVar8;
  undefined8 *puVar9;
  wchar_t *pwVar10;
  bool bVar11;
  bool bVar12;
  undefined1 local_res8 [8];
  FString local_48;
  FString local_38;
  
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId172,"UPCGComputeGraph::AreGraphSettingsValid",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGComputeGraph.cpp"
               ,0xac);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId172);
  }
  puVar9 = (undefined8 *)this->_padding_;
  bVar11 = true;
  iVar2 = (int)this->_padding_;
  puVar1 = puVar9 + iVar2;
  while( true ) {
    if ((int)this->_padding_ != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UComputeKernel>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (puVar9 == puVar1) {
      if (bVar12) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return bVar11;
    }
    pUVar4 = (UComputeKernel *)*puVar9;
    if (pUVar4 == (UComputeKernel *)0x0) {
      pFVar7 = GetTypeName<UPCGComputeKernel>(&local_38);
      if ((pFVar7->Data).ArrayNum == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar8);
    }
    pUVar6 = UPCGComputeKernel::GetPrivateStaticClass();
    iVar3 = (int)pUVar6->_padding_;
    if ((*(int *)(pUVar4->_padding_ + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar3 * 8)
        != &pUVar6->_padding_)) break;
    bVar5 = (**(code **)(pUVar4->_padding_ + 0x2b8))(pUVar4,param_1);
    bVar11 = (bool)(bVar11 & bVar5);
    puVar9 = puVar9 + 1;
  }
  pFVar7 = GetTypeName<UPCGComputeKernel>(&local_48);
  pwVar8 = L"";
  if ((pFVar7->Data).ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
  pFVar7 = GetFullNameForCastLogError<UComputeKernel_const_>(&local_38,pUVar4);
  if ((pFVar7->Data).ArrayNum != 0) {
    pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar8,pwVar10);
}

// ComputeExternalPinDesc @ 1497f2a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TSharedPtr<FPCGDataCollectionDesc_const_,1> * __thiscall
UPCGComputeGraph::ComputeExternalPinDesc
          (UPCGComputeGraph *this,
          TSharedPtr<FPCGDataCollectionDesc_const_,1> *__return_storage_ptr__,FName param_1,
          UPCGDataBinding *param_2)

{
  int *piVar1;
  UPCGData *pUVar2;
  FPCGDataDesc *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> *pTVar8;
  FPCGDataCollectionDesc *pFVar9;
  FPCGDataTypeBaseId *pFVar10;
  EPCGElementDimension EVar11;
  ForAnyElementType FVar12;
  FPCGTaggedData *pFVar13;
  FPCGDataCollectionDesc *pFVar14;
  FName local_res18 [2];
  undefined1 auStackY_168 [32];
  undefined1 local_118 [8];
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_110;
  TRawPtrProxy<FPCGDataCollectionDesc> local_100;
  TSharedPtr<FPCGDataCollectionDesc,1> local_f8;
  UPCGComputeGraph *local_e8;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> *local_e0;
  FPCGDataTypeIdentifier local_d8;
  FPCGDataDesc local_b8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pFVar14 = (FPCGDataCollectionDesc *)0x0;
  local_100.Object = (FPCGDataCollectionDesc *)((ulonglong)local_100.Object & 0xffffffff00000000);
  local_res18[0] = param_1;
  local_e8 = this;
  local_e0 = __return_storage_ptr__;
  if ((param_2 == (UPCGDataBinding *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InBinding",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGComputeGraph.cpp"
                         ,0x170,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar4)();
    return pTVar8;
  }
  pFVar9 = ::operator_new(0x10);
  local_100.Object = pFVar14;
  if (pFVar9 != (FPCGDataCollectionDesc *)0x0) {
    (pFVar9->DataDescs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar9->DataDescs).ArrayNum = 0;
    (pFVar9->DataDescs).ArrayMax = 0;
    local_100.Object = pFVar9;
  }
  TSharedPtr<FPCGDataCollectionDesc,1>::TSharedPtr<FPCGDataCollectionDesc,1><FPCGDataCollectionDesc>
            (&local_f8,&local_100);
  FPCGDataCollection::GetInputsByPin(&param_2->InputDataCollection,&local_110,local_res18);
  iVar5 = local_110.ArrayNum;
  pFVar13 = (FPCGTaggedData *)
            (local_110.AllocatorInstance.Data + (longlong)local_110.ArrayNum * 0x78);
  FVar12.Data = local_110.AllocatorInstance.Data;
  do {
    if (local_110.ArrayNum != iVar5) {
      local_118[0] = 0;
      `TCheckedPointerIterator<FPCGTaggedData_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_118);
    }
    pTVar8 = local_e0;
    if ((FPCGTaggedData *)FVar12.Data == pFVar13) {
      local_e0->Object = local_f8.Object;
      (local_e0->SharedReferenceCount).ReferenceController =
           local_f8.SharedReferenceCount.ReferenceController;
      if (local_f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      DestructItems<FPCGTaggedData,int>
                ((FPCGTaggedData *)local_110.AllocatorInstance.Data,local_110.ArrayNum);
      if ((FPCGTaggedData *)local_110.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
        FMemory::Free(local_110.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_f8.SharedReferenceCount.ReferenceController);
      return pTVar8;
    }
    pUVar2 = (((FPCGTaggedData *)FVar12.Data)->Data).Data.field0_0x0.DebugPtr;
    if (pUVar2 == (UPCGData *)0x0) {
LAB_1497f2b19:
      EVar11 = Two;
    }
    else {
      pFVar10 = (FPCGDataTypeBaseId *)(**(code **)(pUVar2->_padding_ + 0x2b8))();
      FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_d8,pFVar10);
      pFVar14 = (FPCGDataCollectionDesc *)&DAT_00000001;
      bVar6 = PCGComputeHelpers::IsTypeAllowedAsInput(&local_d8);
      if (!bVar6) goto LAB_1497f2b19;
      EVar11 = One;
    }
    if ((pFVar14 != (FPCGDataCollectionDesc *)0x0) &&
       (pFVar14 = (FPCGDataCollectionDesc *)0x0,
       local_d8.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_d8.Ids.AllocatorInstance.Data);
    }
    if (EVar11 == One) {
      FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_b8.Type,Point);
      local_b8.AttributeDescs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.AttributeDescs.ArrayNum = 0;
      local_b8.AttributeDescs.ArrayMax = 0;
      local_b8.ElementCount.field0_0x0._s_0 = UE::Math::TIntVector4<int>::ZeroValue.field0_0x0;
      local_b8.AllocatedPointProperties = None;
      local_b8.TagStringKeys.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
      local_b8.TagStringKeys.ArrayNum = 0;
      local_b8.TagStringKeys.ArrayMax = 4;
      local_b8.ElementDimension = EVar11;
      bVar6 = ComputeTaggedDataPinDesc(local_e8,(FPCGTaggedData *)FVar12.Data,param_2,&local_b8);
      if (bVar6) {
        if ((local_f8.Object == (FPCGDataCollectionDesc *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar4)();
          return pTVar8;
        }
        pFVar3 = (FPCGDataDesc *)((local_f8.Object)->DataDescs).AllocatorInstance.Data;
        if (((pFVar3 <= &local_b8) && (&local_b8 < pFVar3 + ((local_f8.Object)->DataDescs).ArrayMax)
            ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar6)) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar4)();
          return pTVar8;
        }
        iVar7 = ((local_f8.Object)->DataDescs).ArrayNum;
        piVar1 = &((local_f8.Object)->DataDescs).ArrayMax;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x868,(ForAnyElementType *)local_f8.Object,piVar1);
        }
        ((local_f8.Object)->DataDescs).ArrayNum = iVar7 + 1;
        FPCGDataDesc::FPCGDataDesc
                  ((FPCGDataDesc *)
                   (((local_f8.Object)->DataDescs).AllocatorInstance.Data + (longlong)iVar7 * 0x68),
                   &local_b8);
      }
      else {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4783525027125395074>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGComputeGraph.cpp"
                           ,0x17e,"ComputeTaggedDataPinDesc(TaggedData, InBinding, DataDesc)");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar4)();
          return pTVar8;
        }
      }
      if (local_b8.TagStringKeys.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
        FMemory::Free((void *)local_b8.TagStringKeys.AllocatorInstance.SecondaryData);
      }
      DestructItems<FPCGKernelAttributeDesc,int>
                ((FPCGKernelAttributeDesc *)local_b8.AttributeDescs.AllocatorInstance.Data,
                 local_b8.AttributeDescs.ArrayNum);
      if ((FPCGKernelAttributeDesc *)local_b8.AttributeDescs.AllocatorInstance.Data !=
          (FPCGKernelAttributeDesc *)0x0) {
        FMemory::Free(local_b8.AttributeDescs.AllocatorInstance.Data);
      }
      if (local_b8.Type.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Type.Ids.AllocatorInstance.Data);
      }
    }
    FVar12.Data = FVar12.Data + 0x78;
  } while( true );
}

// ComputeKernelBindingDataDesc @ 1497f2d50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSharedPtr<FPCGDataCollectionDesc_const_,1> * __thiscall
UPCGComputeGraph::ComputeKernelBindingDataDesc
          (UPCGComputeGraph *this,
          TSharedPtr<FPCGDataCollectionDesc_const_,1> *__return_storage_ptr__,int param_1,
          UPCGDataBinding *param_2)

{
  longlong lVar1;
  FObjectPtr_u_0 *this_00;
  FObjectPtr FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> *pTVar6;
  UClass *pUVar7;
  FString *pFVar8;
  uint uVar9;
  int *piVar10;
  undefined1 *puVar11;
  wchar_t *pwVar12;
  TReferenceControllerBase<1> *pTVar13;
  wchar_t *pwVar14;
  int iVar15;
  TReferenceControllerBase<1> *pTVar16;
  undefined8 *puVar17;
  uint *puVar18;
  bool bVar19;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> local_78;
  undefined1 local_68 [8];
  TReferenceControllerBase<1> *local_60;
  FString local_58;
  FString local_48;
  FString local_38;
  
  pTVar13 = (TReferenceControllerBase<1> *)0x0;
  bVar19 = -1 < CpuChannel->Enabled;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId100,"UPCGComputeGraph::ComputeKernelBindingDataDesc",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGComputeGraph.cpp"
               ,100);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId100);
  }
  uVar9 = 0;
  if (param_1 < (int)this->_padding_) {
    uVar9 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar3)();
    return pTVar6;
  }
  puVar18 = (uint *)((longlong)param_1 * 0x38 + this->_padding_);
  if (*(int *)&(this->CPUDataBindingToVirtualPinLabel).field_0x8 !=
      *(int *)&(this->CPUDataBindingToVirtualPinLabel).field_0x34) {
    puVar11 = *(undefined1 **)&(this->CPUDataBindingToVirtualPinLabel).field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->CPUDataBindingToVirtualPinLabel).field_0x38;
    }
    iVar15 = *(int *)(puVar11 +
                     (ulonglong)
                     (*(int *)&(this->CPUDataBindingToVirtualPinLabel).field_0x48 - 1U & param_1) *
                     4);
    if (iVar15 != -1) {
      do {
        lVar1 = *(longlong *)&this->CPUDataBindingToVirtualPinLabel + (longlong)iVar15 * 0x14;
        if (*(int *)(*(longlong *)&this->CPUDataBindingToVirtualPinLabel + (longlong)iVar15 * 0x14)
            == param_1) {
          if (iVar15 != -1) {
            pTVar16 = (TReferenceControllerBase<1> *)(lVar1 + 4);
            if (lVar1 == 0) {
              pTVar16 = pTVar13;
            }
            if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
              ComputeExternalPinDesc(this,__return_storage_ptr__,(FName)pTVar16->_padding_,param_2);
              goto LAB_1497f30e5;
            }
          }
          break;
        }
        iVar15 = *(int *)(lVar1 + 0xc);
      } while (iVar15 != -1);
    }
  }
  if ((char)puVar18[4] == '\0') {
    pwVar14 = L"";
    if ((((int)*puVar18 < 0) || ((int)this->_padding_ <= (int)*puVar18)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("KernelInvocations.IsValidIndex(GraphEdge.KernelIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGComputeGraph.cpp"
                           ,0x7f,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar3)();
      return pTVar6;
    }
    uVar9 = *puVar18;
    uVar5 = 0;
    if ((int)uVar9 < (int)this->_padding_) {
      uVar5 = ~uVar9 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar3)();
      return pTVar6;
    }
    this_00 = (FObjectPtr_u_0 *)(this->_padding_ + (longlong)(int)uVar9 * 8);
    if (*(longlong *)(this->_padding_ + (longlong)(int)uVar9 * 8) == 0) {
      pFVar8 = GetTypeName<UPCGComputeKernel>(&local_38);
      if ((pFVar8->Data).ArrayNum != 0) {
        pwVar14 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar14);
    }
    pUVar7 = UPCGComputeKernel::StaticClass();
    bVar4 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar7);
    if ((!bVar4) ||
       (FVar2.field0_0x0 = (FObjectPtr_u_0)this_00->Handle, FVar2.field0_0x0 == (UObject *)0x0)) {
      pFVar8 = GetTypeName<UPCGComputeKernel>(&local_58);
      if ((pFVar8->Data).ArrayNum == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
      pFVar8 = GetFullNameForCastLogError<UComputeKernel>
                         (&local_48,(UComputeKernel *)this_00->Handle);
      if ((pFVar8->Data).ArrayNum != 0) {
        pwVar14 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar14,pwVar12);
    }
    if (*(int *)&(this->KernelBindingToPinLabel).field_0x8 !=
        *(int *)&(this->KernelBindingToPinLabel).field_0x34) {
      puVar11 = *(undefined1 **)&(this->KernelBindingToPinLabel).field_0x40;
      if (puVar11 == (undefined1 *)0x0) {
        puVar11 = &(this->KernelBindingToPinLabel).field_0x38;
      }
      iVar15 = *(int *)(puVar11 +
                       (ulonglong)
                       (*(int *)&(this->KernelBindingToPinLabel).field_0x48 - 1U & param_1) * 4);
      if (iVar15 != -1) {
        do {
          lVar1 = *(longlong *)&this->KernelBindingToPinLabel + (longlong)iVar15 * 0x14;
          if (*(int *)(*(longlong *)&this->KernelBindingToPinLabel + (longlong)iVar15 * 0x14) ==
              param_1) {
            puVar17 = (undefined8 *)(lVar1 + 4);
            if (lVar1 == 0) {
              puVar17 = (undefined8 *)0x0;
            }
            if (puVar17 != (undefined8 *)0x0) {
              puVar17 = (undefined8 *)
                        (**(code **)(*(longlong *)FVar2.field0_0x0 + 0x2c8))
                                  (FVar2.field0_0x0,local_68,*puVar17,param_2);
              __return_storage_ptr__->Object = (FPCGDataCollectionDesc *)*puVar17;
              (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
                   (TReferenceControllerBase<1> *)puVar17[1];
              puVar17[1] = 0;
              *puVar17 = 0;
              local_78.SharedReferenceCount.ReferenceController = local_60;
              goto LAB_1497f30e0;
            }
            break;
          }
          iVar15 = *(int *)(lVar1 + 0xc);
        } while (iVar15 != -1);
      }
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4783525027125395324>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGComputeGraph.cpp"
                       ,0x84,"OutputPinLabel");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar3)();
      return pTVar6;
    }
    __return_storage_ptr__->Object = (FPCGDataCollectionDesc *)0x0;
    local_78.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    if (*(int *)&(this->DownstreamToUpstreamBinding).field_0x8 !=
        *(int *)&(this->DownstreamToUpstreamBinding).field_0x34) {
      puVar11 = *(undefined1 **)&(this->DownstreamToUpstreamBinding).field_0x40;
      if (puVar11 == (undefined1 *)0x0) {
        puVar11 = &(this->DownstreamToUpstreamBinding).field_0x38;
      }
      iVar15 = *(int *)(puVar11 +
                       (ulonglong)
                       (*(int *)&(this->DownstreamToUpstreamBinding).field_0x48 - 1U & param_1) * 4)
      ;
      if (iVar15 != -1) {
        do {
          piVar10 = (int *)((longlong)iVar15 * 0x10 +
                           *(longlong *)&this->DownstreamToUpstreamBinding);
          if (*piVar10 == param_1) {
            pTVar16 = (TReferenceControllerBase<1> *)(piVar10 + 1);
            if (piVar10 == (int *)0x0) {
              pTVar16 = pTVar13;
            }
            if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
              pTVar6 = UPCGDataBinding::ComputeKernelBindingDataDesc
                                 (param_2,&local_78,(int)pTVar16->_padding_);
              __return_storage_ptr__->Object = pTVar6->Object;
              (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
                   (pTVar6->SharedReferenceCount).ReferenceController;
              (pTVar6->SharedReferenceCount).ReferenceController =
                   (TReferenceControllerBase<1> *)0x0;
              pTVar6->Object = (FPCGDataCollectionDesc *)0x0;
              goto LAB_1497f30e0;
            }
            break;
          }
          iVar15 = piVar10[2];
        } while (iVar15 != -1);
      }
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4783525027125395334>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGComputeGraph.cpp"
                       ,0x7a,"UpstreamBindingIndex");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar3)();
      return pTVar6;
    }
    __return_storage_ptr__->Object = (FPCGDataCollectionDesc *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_78.SharedReferenceCount.ReferenceController = pTVar13;
  }
LAB_1497f30e0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
LAB_1497f30e5:
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// ComputeTaggedDataPinDesc @ 1497f5220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UPCGComputeGraph::ComputeTaggedDataPinDesc
          (UPCGComputeGraph *this,FPCGTaggedData *param_1,UPCGDataBinding *param_2,
          FPCGDataDesc *param_3)

{
  longlong *plVar1;
  TArray<FPCGKernelAttributeDesc,TSizedDefaultAllocator<32>_> *pTVar2;
  ForElementType<int> FVar3;
  TArray<FPCGKernelAttributeDesc,TSizedDefaultAllocator<32>_> *pTVar4;
  uint uVar5;
  FRDGPooledBuffer *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  ForAnyElementType _Src;
  FObjectPtr_u_0 this_00;
  UPCGDataBinding *pUVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  UClass *pUVar13;
  TSharedPtr<FPCGProxyForGPUDataCollection,1> *pTVar14;
  int *piVar15;
  int *piVar16;
  FPCGDataDesc *pFVar17;
  ulonglong uVar18;
  longlong lVar19;
  FScriptContainerElement *pFVar20;
  ForElementType<int> FVar21;
  FScriptContainerElement *pFVar22;
  TReferenceControllerBase<1> *pTVar23;
  FPCGProxyForGPUDataCollection *pFVar24;
  FScriptContainerElement *pFVar25;
  undefined1 auStackY_1a8 [32];
  undefined1 local_168;
  undefined1 local_167 [7];
  FPCGProxyForGPUDataCollection *local_160;
  int local_158 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_150;
  uint local_140;
  uint local_13c;
  FObjectPtr_u_0 local_138;
  TReferenceControllerBase<1> *local_130;
  FScriptContainerElement *local_128;
  FScriptContainerElement *local_120;
  UPCGDataBinding *local_118;
  FPCGDataDesc *local_110;
  FRDGPooledBuffer *local_108;
  int local_100;
  FRDGPooledBuffer *local_f8;
  int local_f0;
  int *local_e8;
  FPCGProxyForGPUDataCollection *local_e0;
  TReferenceControllerBase<1> *local_d8;
  int local_d0;
  TSharedPtr<FPCGProxyForGPUDataCollection,1> local_c8;
  FPCGDataDesc local_b8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_138 = (FObjectPtr_u_0)(param_1->Data).Data.field0_0x0.DebugPtr;
  local_118 = param_2;
  local_110 = param_3;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     ((UPCGProxyForGPUData *)local_138.Handle != (UPCGProxyForGPUData *)0x0)) {
    UE::GC::MarkAsReachable(local_138.Handle);
  }
  if ((UPCGProxyForGPUData *)local_138.Handle != (UPCGProxyForGPUData *)0x0) {
    pUVar13 = UPCGProxyForGPUData::StaticClass();
    bVar10 = FObjectPtr::IsA((FObjectPtr *)&local_138,pUVar13);
    this_00 = local_138;
    if ((bVar10) && ((UPCGProxyForGPUData *)local_138.Handle != (UPCGProxyForGPUData *)0x0)) {
      bVar10 = UPCGProxyForGPUData::GetDescription((UPCGProxyForGPUData *)local_138.Handle,param_3);
      if (!bVar10) {
        return bVar10;
      }
      pTVar14 = UPCGProxyForGPUData::GetGPUInfoMutable
                          ((UPCGProxyForGPUData *)this_00.Handle,&local_c8);
      pTVar23 = (pTVar14->SharedReferenceCount).ReferenceController;
      pFVar24 = pTVar14->Object;
      if (pTVar23 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar23->SharedReferenceCount = (atomic<int>)((int)pTVar23->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_160 = pFVar24;
      local_130 = pTVar23;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_c8.SharedReferenceCount.ReferenceController);
      if (pFVar24 != (FPCGProxyForGPUDataCollection *)0x0) {
        local_13c = (param_3->AttributeDescs).ArrayNum;
        uVar18 = (ulonglong)(int)local_13c;
        pFVar22 = (param_3->AttributeDescs).AllocatorInstance.Data;
        pFVar25 = pFVar22 + 0x74;
        pFVar20 = pFVar22 + uVar18 * 0x78;
        local_128 = pFVar20;
        while( true ) {
          local_120 = pFVar22;
          if ((param_3->AttributeDescs).ArrayNum != (int)uVar18) {
            local_168 = 0;
            `TCheckedPointerIterator<FPCGKernelAttributeDesc,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_168);
          }
          if (pFVar22 == pFVar20) break;
          if ((0x1f < *(int *)pFVar22) && (iVar12 = *(int *)pFVar22 + -0x20, iVar12 != -1)) {
            if (pTVar23 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar23->SharedReferenceCount = (atomic<int>)((int)pTVar23->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_e0 = pFVar24;
            local_d8 = pTVar23;
            local_d0 = iVar12;
            piVar15 = TMapBase<TTuple<TSharedPtr<FPCGProxyForGPUDataCollection_const_,1>,int>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<TSharedPtr<FPCGProxyForGPUDataCollection_const_,1>,int>,int,0>_>
                      ::Find((TMapBase<TTuple<TSharedPtr<FPCGProxyForGPUDataCollection_const_,1>,int>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<TSharedPtr<FPCGProxyForGPUDataCollection_const_,1>,int>,int,0>_>
                              *)&local_118->SourceBufferAttributeToGraphAttributeIndex,
                             (TTuple<TSharedPtr<FPCGProxyForGPUDataCollection_const_,1>,int> *)
                             &local_e0);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar23);
            pUVar9 = local_118;
            if (piVar15 != (int *)0x0) {
              if (*piVar15 < 0) {
                iVar12 = -1;
              }
              else {
                iVar12 = *piVar15 + 0x20;
              }
              *(int *)pFVar22 = iVar12;
            }
            pFVar20 = local_128;
            pTVar23 = local_130;
            if (*(int *)&(local_118->SourceBufferToGraphStringKey).field_0x8 !=
                *(int *)&(local_118->SourceBufferToGraphStringKey).field_0x34) {
              uVar5 = *(uint *)(pFVar25 + -4);
              local_150.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_150.ArrayNum = 0;
              local_150.ArrayMax = 0;
              if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
              }
              if (0 < (int)uVar5) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,uVar5,&local_150.AllocatorInstance,0,&local_150.ArrayMax);
              }
              local_140 = *(uint *)(pFVar25 + -4);
              uVar18 = (ulonglong)(int)local_140;
              bVar10 = false;
              piVar15 = *(int **)(pFVar25 + -0xc);
              local_e8 = piVar15 + uVar18;
              while( true ) {
                piVar16 = local_e8;
                if (*(int *)(pFVar25 + -4) != (int)uVar18) {
                  local_167[0] = 0;
                  `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::
                  operator()(local_167);
                }
                _Src.Data = local_150.AllocatorInstance.Data;
                if (piVar15 == piVar16) break;
                local_158[0] = *piVar15;
                pFVar6 = (local_160->Buffer).Reference;
                plVar1 = &pFVar6->_padding_;
                local_108 = pFVar6;
                local_100 = local_158[0];
                if (pFVar6 == (FRDGPooledBuffer *)0x0) {
                  piVar16 = TMapBase<TTuple<TRefCountPtr<FRDGPooledBuffer>,int>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<TRefCountPtr<FRDGPooledBuffer>,int>,int,0>_>
                            ::Find((TMapBase<TTuple<TRefCountPtr<FRDGPooledBuffer>,int>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<TRefCountPtr<FRDGPooledBuffer>,int>,int,0>_>
                                    *)&pUVar9->SourceBufferToGraphStringKey,
                                   (TTuple<TRefCountPtr<FRDGPooledBuffer>,int> *)&local_108);
                }
                else {
                  LOCK();
                  *(int *)plVar1 = (int)*plVar1 + 1;
                  UNLOCK();
                  piVar16 = TMapBase<TTuple<TRefCountPtr<FRDGPooledBuffer>,int>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<TRefCountPtr<FRDGPooledBuffer>,int>,int,0>_>
                            ::Find((TMapBase<TTuple<TRefCountPtr<FRDGPooledBuffer>,int>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<TRefCountPtr<FRDGPooledBuffer>,int>,int,0>_>
                                    *)&pUVar9->SourceBufferToGraphStringKey,
                                   (TTuple<TRefCountPtr<FRDGPooledBuffer>,int> *)&local_108);
                  LOCK();
                  lVar19 = *plVar1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if (((int)lVar19 == 1) && (plVar1 != (longlong *)0x0)) {
                    (**(code **)pFVar6->_padding_)(pFVar6,1);
                  }
                }
                if (piVar16 == (int *)0x0) {
                  piVar16 = local_158;
                }
                else {
                  bVar10 = true;
                }
                TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                          (&local_150,piVar16);
                uVar18 = (ulonglong)local_140;
                piVar15 = piVar15 + 1;
              }
              if (bVar10) {
                iVar12 = local_150.ArrayNum;
                lVar19 = (longlong)local_150.ArrayNum;
                if ((local_150.ArrayNum < 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("InCount >= 0",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0xeb,L""), bVar10)) {
                  pcVar7 = (code *)swi(3);
                  uVar11 = (*pcVar7)();
                  return (bool)uVar11;
                }
                *(int *)(pFVar25 + -4) = iVar12;
                if ((iVar12 == 0) && (*(int *)pFVar25 == 0)) {
                  *(undefined4 *)pFVar25 = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (4,4,iVar12,*(int *)pFVar25,(ForAnyElementType *)(pFVar25 + -0xc),iVar12
                             ,(int *)pFVar25);
                  if (iVar12 != 0) {
                    memcpy(*(void **)(pFVar25 + -0xc),_Src.Data,lVar19 << 2);
                  }
                }
              }
              pFVar20 = local_128;
              pFVar22 = local_120;
              param_3 = local_110;
              pTVar23 = local_130;
              pFVar24 = local_160;
              if (local_150.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_150.AllocatorInstance.Data);
                pFVar20 = local_128;
                pFVar22 = local_120;
                param_3 = local_110;
                pTVar23 = local_130;
                pFVar24 = local_160;
              }
            }
          }
          uVar18 = (ulonglong)local_13c;
          pFVar22 = pFVar22 + 0x78;
          pFVar25 = pFVar25 + 0x78;
        }
        FVar21 = (param_3->TagStringKeys).AllocatorInstance.SecondaryData;
        iVar12 = (param_3->TagStringKeys).ArrayNum;
        if (FVar21 == (ForElementType<int>)0x0) {
          FVar21 = (ForElementType<int>)&param_3->TagStringKeys;
        }
        if ((iVar12 < 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          uVar11 = (*pcVar7)();
          return (bool)uVar11;
        }
        pUVar9 = local_118;
        FVar3 = (ForElementType<int>)((longlong)FVar21 + (longlong)iVar12 * 4);
        for (; FVar21 != FVar3; FVar21 = (ForElementType<int>)((longlong)FVar21 + 4)) {
          pFVar6 = (pFVar24->Buffer).Reference;
          plVar1 = &pFVar6->_padding_;
          local_f8 = pFVar6;
          if (pFVar6 == (FRDGPooledBuffer *)0x0) {
            local_f0 = *(int *)FVar21;
            piVar15 = TMapBase<TTuple<TRefCountPtr<FRDGPooledBuffer>,int>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<TRefCountPtr<FRDGPooledBuffer>,int>,int,0>_>
                      ::Find((TMapBase<TTuple<TRefCountPtr<FRDGPooledBuffer>,int>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<TRefCountPtr<FRDGPooledBuffer>,int>,int,0>_>
                              *)&pUVar9->SourceBufferToGraphStringKey,
                             (TTuple<TRefCountPtr<FRDGPooledBuffer>,int> *)&local_f8);
          }
          else {
            LOCK();
            *(int *)plVar1 = (int)*plVar1 + 1;
            UNLOCK();
            local_f0 = *(int *)FVar21;
            piVar15 = TMapBase<TTuple<TRefCountPtr<FRDGPooledBuffer>,int>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<TRefCountPtr<FRDGPooledBuffer>,int>,int,0>_>
                      ::Find((TMapBase<TTuple<TRefCountPtr<FRDGPooledBuffer>,int>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<TRefCountPtr<FRDGPooledBuffer>,int>,int,0>_>
                              *)&pUVar9->SourceBufferToGraphStringKey,
                             (TTuple<TRefCountPtr<FRDGPooledBuffer>,int> *)&local_f8);
            LOCK();
            lVar19 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            pFVar24 = local_160;
            if (((int)lVar19 == 1) && (plVar1 != (longlong *)0x0)) {
              (**(code **)pFVar6->_padding_)(pFVar6,1);
              pFVar24 = local_160;
            }
          }
          if (piVar15 != (int *)0x0) {
            *(int *)FVar21 = *piVar15;
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
      return true;
    }
  }
  pFVar17 = FPCGDataDesc::FPCGDataDesc(&local_b8,param_1,param_2);
  if (param_3 != pFVar17) {
    pFVar25 = (param_3->Type).Ids.AllocatorInstance.Data;
    if (pFVar25 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar25);
    }
    (param_3->Type).Ids.AllocatorInstance.Data = (pFVar17->Type).Ids.AllocatorInstance.Data;
    (pFVar17->Type).Ids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_3->Type).Ids.ArrayNum = (pFVar17->Type).Ids.ArrayNum;
    (param_3->Type).Ids.ArrayMax = (pFVar17->Type).Ids.ArrayMax;
    (pFVar17->Type).Ids.ArrayNum = 0;
    (pFVar17->Type).Ids.ArrayMax = 0;
  }
  pTVar2 = &pFVar17->AttributeDescs;
  (param_3->Type).CustomSubtype = (pFVar17->Type).CustomSubtype;
  pTVar4 = &param_3->AttributeDescs;
  uVar8 = *(undefined8 *)((longlong)&(pFVar17->ElementCount).field0_0x0 + 8);
  *(undefined8 *)&(param_3->ElementCount).field0_0x0 =
       *(undefined8 *)&(pFVar17->ElementCount).field0_0x0;
  *(undefined8 *)((longlong)&(param_3->ElementCount).field0_0x0 + 8) = uVar8;
  param_3->ElementDimension = pFVar17->ElementDimension;
  if (pTVar4 != pTVar2) {
    DestructItems<FPCGKernelAttributeDesc,int>
              ((FPCGKernelAttributeDesc *)(pTVar4->AllocatorInstance).Data,
               (param_3->AttributeDescs).ArrayNum);
    pFVar25 = (pTVar4->AllocatorInstance).Data;
    if (pFVar25 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar25);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (param_3->AttributeDescs).ArrayNum = (pFVar17->AttributeDescs).ArrayNum;
    (param_3->AttributeDescs).ArrayMax = (pFVar17->AttributeDescs).ArrayMax;
    (pFVar17->AttributeDescs).ArrayNum = 0;
    (pFVar17->AttributeDescs).ArrayMax = 0;
  }
  param_3->AllocatedPointProperties = pFVar17->AllocatedPointProperties;
  if (&param_3->TagStringKeys != &pFVar17->TagStringKeys) {
    if ((pFVar17->TagStringKeys).AllocatorInstance.SecondaryData == (ForElementType<int>)0x0) {
      memmove(&param_3->TagStringKeys,&pFVar17->TagStringKeys,0x10);
    }
    FVar21 = (param_3->TagStringKeys).AllocatorInstance.SecondaryData;
    if (FVar21 != (ForElementType<int>)0x0) {
      FMemory::Free((void *)FVar21);
    }
    (param_3->TagStringKeys).AllocatorInstance.SecondaryData =
         (pFVar17->TagStringKeys).AllocatorInstance.SecondaryData;
    (pFVar17->TagStringKeys).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
    (param_3->TagStringKeys).ArrayNum = (pFVar17->TagStringKeys).ArrayNum;
    (param_3->TagStringKeys).ArrayMax = (pFVar17->TagStringKeys).ArrayMax;
    (pFVar17->TagStringKeys).ArrayNum = 0;
    (pFVar17->TagStringKeys).ArrayMax = 4;
  }
  if (local_b8.TagStringKeys.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_b8.TagStringKeys.AllocatorInstance.SecondaryData);
  }
  DestructItems<FPCGKernelAttributeDesc,int>
            ((FPCGKernelAttributeDesc *)local_b8.AttributeDescs.AllocatorInstance.Data,
             local_b8.AttributeDescs.ArrayNum);
  if ((FPCGKernelAttributeDesc *)local_b8.AttributeDescs.AllocatorInstance.Data !=
      (FPCGKernelAttributeDesc *)0x0) {
    FMemory::Free(local_b8.AttributeDescs.AllocatorInstance.Data);
  }
  if (local_b8.Type.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Type.Ids.AllocatorInstance.Data);
  }
  return true;
}

// DebugLogDataDescriptions @ 1497fe6d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

void __thiscall
UPCGComputeGraph::DebugLogDataDescriptions(UPCGComputeGraph *this,UPCGDataBinding *param_1)

{
  UObject *pUVar1;
  UPCGComputeGraph *pUVar2;
  code *pcVar3;
  FPCGDataCollectionDesc *pFVar4;
  FSharedReferencer<1> FVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  UPackage *pUVar11;
  UClass *pUVar12;
  longlong lVar13;
  FText *pFVar14;
  FPCGDataTypeIdentifier *pFVar15;
  FObjectPtr_u_0 *this_00;
  FName *pFVar16;
  FPCGPinPropertiesGPU *pFVar17;
  bool bVar18;
  FPCGPinProperties *pFVar19;
  ForAnyElementType this_01;
  FPCGPinPropertiesGPU *this_02;
  FName *pFVar20;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_198;
  ForAnyElementType local_190;
  undefined8 local_188;
  FPCGPinPropertiesGPU *local_180;
  undefined8 local_178;
  longlong local_170;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> local_168;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> local_158;
  FName local_148;
  FName local_140;
  FString local_138;
  FString local_128;
  FPCGKernelPin local_118;
  FPCGKernelPin local_108;
  FPCGKernelPin local_f8;
  FPCGKernelPin local_e8;
  UPCGComputeGraph *local_d8;
  UEnum *local_d0;
  UPCGDataBinding *local_c8;
  FString local_c0;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> local_a8;
  FString local_98;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> local_88;
  FPCGDataTypeIdentifier local_78 [2];
  
  bVar18 = false;
  bVar7 = false;
  local_d0 = Z_Registration_Info_UEnum_EPCGKernelAttributeType.OuterSingleton;
  if (Z_Registration_Info_UEnum_EPCGKernelAttributeType.OuterSingleton == (UEnum *)0x0) {
    pUVar11 = Z_Construct_UPackage__Script_PCG();
    local_d0 = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGKernelAttributeType,(UObject *)pUVar11,
                             L"EPCGKernelAttributeType");
    Z_Registration_Info_UEnum_EPCGKernelAttributeType.OuterSingleton = local_d0;
    if ((local_d0 == (UEnum *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("PCGKernelAttributeTypeEnum",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGComputeGraph.cpp"
                           ,0xcc,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_198 = 0;
  if (0 < (int)this->_padding_) {
    local_170 = 0;
    local_d8 = this;
    local_c8 = param_1;
    do {
      lVar13 = local_170;
      uVar8 = 0;
      if ((int)local_198 < (int)this->_padding_) {
        uVar8 = ~local_198 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this_00 = (FObjectPtr_u_0 *)(this->_padding_ + lVar13);
      if (this_00->Handle != (UObject *)0x0) {
        pUVar12 = UPCGComputeKernel::StaticClass();
        bVar6 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar12);
        if (((bVar6) && (pUVar1 = this_00->Handle, pUVar1 != (UObject *)0x0)) &&
           ((pUVar1[1].field_0x10 & 2) != 0)) {
          lVar13 = (**(code **)(*(longlong *)pUVar1 + 0x2b0))(pUVar1);
          if (3 < (byte)LogPCG._0_1_) {
            if (lVar13 != 0) {
              local_148 = *(FName *)(lVar13 + 0x18);
              bVar18 = true;
              ::FName::ToString(&local_148,&local_138);
              bVar7 = bVar18;
            }
            UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
            if ((bVar18) &&
               (bVar7 = false,
               local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(local_138.Data.AllocatorInstance.Data);
            }
            if (3 < (byte)LogPCG._0_1_) {
              local_140.ComparisonIndex.Value = *(uint *)&pUVar1->field_0x18;
              local_140.Number = *(uint *)&pUVar1->field_0x1c;
              ::FName::ToString(&local_140,&local_128);
              UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
              if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_128.Data.AllocatorInstance.Data);
              }
            }
          }
          bVar18 = bVar7;
          local_190.Data = (FScriptContainerElement *)0x0;
          local_188 = 0;
          (**(code **)(*(longlong *)pUVar1 + 0x308))(pUVar1);
          iVar10 = *(int *)&pUVar1[3].field_0x10;
          pFVar16 = *(FName **)&pUVar1[3].field_0x8;
          pFVar20 = pFVar16 + (longlong)iVar10 * 4;
          while( true ) {
            if (*(int *)&pUVar1[3].field_0x10 != iVar10) {
              local_res10[0] = 0;
              `TCheckedPointerIterator<FPCGKernelOverridableParam_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_res10);
            }
            iVar9 = (int)local_188;
            if (pFVar16 == pFVar20) break;
            if (*(char *)((longlong)&pFVar16[3].ComparisonIndex.Value + 1) != '\0') {
              if ((int)local_188 == local_188._4_4_) {
                iVar9 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x830,&local_190,(int *)((longlong)&local_188 + 4));
              }
              local_188 = CONCAT44(local_188._4_4_,iVar9 + 1);
              pFVar19 = (FPCGPinProperties *)(local_190.Data + (longlong)iVar9 * 0x30);
              pFVar14 = FText::GetEmpty();
              pFVar15 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(local_78,Param);
              pFVar19 = FPCGPinProperties::FPCGPinProperties
                                  (pFVar19,pFVar16,pFVar15,false,false,pFVar14);
              pFVar19->PinStatus = OverrideOrUserParam;
            }
            pFVar16 = pFVar16 + 4;
          }
          pFVar19 = (FPCGPinProperties *)(local_190.Data + (longlong)(int)local_188 * 0x30);
          this_01.Data = local_190.Data;
          while( true ) {
            if ((int)local_188 != iVar9) {
              local_res18[0] = 0;
              `TCheckedPointerIterator<FPCGPinProperties,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_res18);
            }
            if ((FPCGPinProperties *)this_01.Data == pFVar19) break;
            if (((FPCGPinProperties *)this_01.Data)->Label == (FName)0x0) {
LAB_1497febb4:
              this_01.Data = this_01.Data + 0x30;
            }
            else {
              pUVar2 = (param_1->Graph).field0_0x0.DebugPtr;
              if (pUVar2 == (UPCGComputeGraph *)0x0) {
                bVar7 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<9049822076394799271>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataBinding.cpp"
                                   ,0xa7,"Graph");
                if (bVar7) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                local_168.Object = (FPCGDataCollectionDesc *)0x0;
                local_168.SharedReferenceCount.ReferenceController =
                     (TReferenceControllerBase<1> *)0x0;
              }
              else {
                local_118.KernelIndex = *(int *)&pUVar1[1].field_0x14;
                local_118.bIsInput = true;
                local_118.PinLabel = ((FPCGPinProperties *)this_01.Data)->Label;
                iVar10 = GetBindingIndex(pUVar2,&local_118);
                UPCGDataBinding::GetCachedKernelPinDataDesc(param_1,&local_168,iVar10);
              }
              FVar5.ReferenceController = local_168.SharedReferenceCount.ReferenceController;
              pFVar4 = local_168.Object;
              if (local_168.Object == (FPCGDataCollectionDesc *)0x0) {
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_168.SharedReferenceCount.ReferenceController);
                goto LAB_1497febb4;
              }
              if (3 < (byte)LogPCG._0_1_) {
                if ((local_168.Object == (FPCGDataCollectionDesc *)0x0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x458,L""), bVar7)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                if (((pFVar4->DataDescs).ArrayNum < 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("InCount >= 0",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                       ,0xeb,L""), bVar7)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                ::FName::ToString((FName *)this_01.Data,&local_c0);
                UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
                if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_c0.Data.AllocatorInstance.Data);
                }
              }
              local_108.PinLabel = ((FPCGPinProperties *)this_01.Data)->Label;
              local_108.KernelIndex = local_198;
              local_108.bIsInput = true;
              if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (FVar5.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
                UNLOCK();
              }
              local_a8.Object = pFVar4;
              local_a8.SharedReferenceCount.ReferenceController = FVar5.ReferenceController;
              `UPCGComputeGraph::DebugLogDataDescriptions'::__l2::<lambda_1>::operator()
                        (&local_d8,&local_a8,&local_108);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (FVar5.ReferenceController);
              this_01.Data = this_01.Data + 0x30;
            }
          }
          local_180 = (FPCGPinPropertiesGPU *)0x0;
          local_178 = 0;
          (**(code **)(*(longlong *)pUVar1 + 0x310))(pUVar1);
          iVar10 = (int)local_178;
          pFVar17 = local_180 + (int)local_178;
          this_02 = local_180;
          while( true ) {
            if ((int)local_178 != iVar10) {
              local_res20[0] = 0;
              `TCheckedPointerIterator<FPCGPinPropertiesGPU,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_res20);
            }
            if (this_02 == pFVar17) break;
            if (*(FName *)&this_02->_padding_ == (FName)0x0) {
LAB_1497fedb0:
              this_02 = this_02 + 1;
            }
            else {
              pUVar2 = (param_1->Graph).field0_0x0.DebugPtr;
              if (pUVar2 == (UPCGComputeGraph *)0x0) {
                bVar7 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<9049822076394799271>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataBinding.cpp"
                                   ,0xa7,"Graph");
                if (bVar7) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                local_158.Object = (FPCGDataCollectionDesc *)0x0;
                local_158.SharedReferenceCount.ReferenceController =
                     (TReferenceControllerBase<1> *)0x0;
              }
              else {
                local_f8.KernelIndex = *(int *)&pUVar1[1].field_0x14;
                local_f8.bIsInput = false;
                local_f8.PinLabel = *(FName *)&this_02->_padding_;
                iVar9 = GetBindingIndex(pUVar2,&local_f8);
                UPCGDataBinding::GetCachedKernelPinDataDesc(param_1,&local_158,iVar9);
              }
              FVar5.ReferenceController = local_158.SharedReferenceCount.ReferenceController;
              pFVar4 = local_158.Object;
              if (local_158.Object == (FPCGDataCollectionDesc *)0x0) {
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_158.SharedReferenceCount.ReferenceController);
                goto LAB_1497fedb0;
              }
              if (3 < (byte)LogPCG._0_1_) {
                if ((local_158.Object == (FPCGDataCollectionDesc *)0x0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x458,L""), bVar7)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                if (((pFVar4->DataDescs).ArrayNum < 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("InCount >= 0",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                       ,0xeb,L""), bVar7)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                ::FName::ToString((FName *)this_02,&local_98);
                UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
                if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_98.Data.AllocatorInstance.Data);
                }
              }
              local_e8.PinLabel = *(FName *)&this_02->_padding_;
              local_e8.KernelIndex = local_198;
              local_e8.bIsInput = false;
              if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (FVar5.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
                UNLOCK();
              }
              local_88.Object = pFVar4;
              local_88.SharedReferenceCount.ReferenceController = FVar5.ReferenceController;
              `UPCGComputeGraph::DebugLogDataDescriptions'::__l2::<lambda_1>::operator()
                        (&local_d8,&local_88,&local_e8);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (FVar5.ReferenceController);
              this_02 = this_02 + 1;
            }
          }
          DestructItems<FPCGPinPropertiesGPU,int>(local_180,(int)local_178);
          if (local_180 != (FPCGPinPropertiesGPU *)0x0) {
            FMemory::Free(local_180);
          }
          DestructItems<FPCGPinProperties,int>((FPCGPinProperties *)local_190.Data,(int)local_188);
          lVar13 = local_170;
          bVar7 = bVar18;
          if ((FPCGPinProperties *)local_190.Data != (FPCGPinProperties *)0x0) {
            FMemory::Free(local_190.Data);
            lVar13 = local_170;
          }
        }
      }
      local_198 = local_198 + 1;
      local_170 = lVar13 + 8;
    } while ((int)local_198 < (int)this->_padding_);
  }
  return;
}

// GetBindingIndex @ 149810290

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall UPCGComputeGraph::GetBindingIndex(UPCGComputeGraph *this,FPCGKernelPin *param_1)

{
  int *piVar1;
  FString local_18;
  
  piVar1 = TMapBase<FPCGKernelPin,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGKernelPin,int,0>_>
           ::Find((TMapBase<FPCGKernelPin,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGKernelPin,int,0>_>
                   *)&this->KernelPinToFirstBinding,param_1);
  if (piVar1 != (int *)0x0) {
    return *piVar1;
  }
  if (2 < (byte)LogPCG._0_1_) {
    ::FName::ToString(&param_1->PinLabel,&local_18);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return -1;
}

// GetKernel @ 149815430

UComputeKernel * __thiscall UPCGComputeGraph::GetKernel(UPCGComputeGraph *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  UComputeKernel *pUVar3;
  uint uVar4;
  
  if ((-1 < param_1) && (param_1 < (int)this->_padding_)) {
    uVar4 = 0;
    if (param_1 < (int)this->_padding_) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UComputeKernel *)(*pcVar1)();
        return pUVar3;
      }
    }
    pUVar3 = *(UComputeKernel **)(this->_padding_ + (longlong)param_1 * 8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UComputeKernel *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    return pUVar3;
  }
  return (UComputeKernel *)0x0;
}

// GetKernelNode @ 149815590

UPCGNode * __thiscall
UPCGComputeGraph::GetKernelNode(UPCGComputeGraph *this,UComputeKernel *param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UPCGNode *pUVar6;
  UClass *pUVar7;
  uint uVar8;
  longlong *plVar9;
  
  plVar2 = (longlong *)this->_padding_;
  plVar9 = plVar2;
  while( true ) {
    if (plVar9 == plVar2 + (int)this->_padding_) {
      return (UPCGNode *)0x0;
    }
    if ((UComputeKernel *)*plVar9 == param_1) break;
    plVar9 = plVar9 + 1;
  }
  uVar8 = (uint)((longlong)plVar9 - (longlong)plVar2 >> 3);
  if (uVar8 == 0xffffffff) {
    return (UPCGNode *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar8 < (this->KernelToNode).ArrayNum) {
    uVar5 = ~uVar8 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pUVar6 = (UPCGNode *)(*pcVar3)();
    return pUVar6;
  }
  pUVar6 = (UPCGNode *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)
                      ((this->KernelToNode).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x28));
  if (pUVar6 != (UPCGNode *)0x0) {
    pUVar7 = Z_Construct_UClass_UPCGNode_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar7->_padding_)) {
      return pUVar6;
    }
  }
  return (UPCGNode *)0x0;
}

// GetKernelPins @ 149815680

void __thiscall
UPCGComputeGraph::GetKernelPins
          (UPCGComputeGraph *this,TArray<FPCGKernelPin,TSizedDefaultAllocator<32>_> *param_1)

{
  TMapBase<FPCGKernelPin,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGKernelPin,int,0>_>
  ::GenerateKeyArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<FPCGKernelPin,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGKernelPin,int,0>_>
              *)&this->KernelPinToFirstBinding,param_1);
  return;
}

// GetNumKernels @ 1498165f0

int __thiscall UPCGComputeGraph::GetNumKernels(UPCGComputeGraph *this)

{
  return (int)this->_padding_;
}

// GetPrivateStaticClass @ 1498172d0

UClass * __cdecl UPCGComputeGraph::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGComputeGraph.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGComputeGraph",
               &Z_Registration_Info_UClass_UPCGComputeGraph.InnerSingleton,
               StaticRegisterNativesUPCGComputeGraph,0x358,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGComputeGraph>,
               InternalVTableHelperCtorCaller<UPCGComputeGraph>,local_res8,
               UComputeGraph::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGComputeGraph.InnerSingleton;
}

// GetVirtualPinLabelFromBindingIndex @ 14981da50

FName * __thiscall
UPCGComputeGraph::GetVirtualPinLabelFromBindingIndex(UPCGComputeGraph *this,int param_1)

{
  uint uVar1;
  FName *pFVar2;
  FName *pFVar3;
  undefined1 *puVar4;
  FName *pFVar5;
  
  pFVar5 = (FName *)0x0;
  pFVar2 = pFVar5;
  if (*(int *)&(this->CPUDataBindingToVirtualPinLabel).field_0x8 !=
      *(int *)&(this->CPUDataBindingToVirtualPinLabel).field_0x34) {
    puVar4 = *(undefined1 **)&(this->CPUDataBindingToVirtualPinLabel).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->CPUDataBindingToVirtualPinLabel).field_0x38;
    }
    uVar1 = *(uint *)(puVar4 + (ulonglong)
                               (*(int *)&(this->CPUDataBindingToVirtualPinLabel).field_0x48 - 1U &
                               param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)(*(longlong *)&this->CPUDataBindingToVirtualPinLabel +
                          (longlong)(int)uVar1 * 0x14);
        if (*(int *)(*(longlong *)&this->CPUDataBindingToVirtualPinLabel +
                    (longlong)(int)uVar1 * 0x14) == param_1) break;
        uVar1 = pFVar2[1].Number;
        pFVar2 = pFVar5;
      } while (uVar1 != 0xffffffff);
    }
  }
  pFVar3 = (FName *)&pFVar2->Number;
  if (pFVar2 == (FName *)0x0) {
    pFVar3 = pFVar5;
  }
  return pFVar3;
}

// IsGraphDataValid @ 149820370

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UPCGComputeGraph::IsGraphDataValid(UPCGComputeGraph *this,FPCGContext *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  UComputeKernel *pUVar4;
  byte bVar5;
  UClass *pUVar6;
  FString *pFVar7;
  wchar_t *pwVar8;
  undefined8 *puVar9;
  wchar_t *pwVar10;
  bool bVar11;
  bool bVar12;
  undefined1 local_res8 [8];
  FString local_48;
  FString local_38;
  
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId187,"UPCGComputeGraph::IsGraphDataValid",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGComputeGraph.cpp"
               ,0xbb);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId187);
  }
  puVar9 = (undefined8 *)this->_padding_;
  bVar11 = true;
  iVar2 = (int)this->_padding_;
  puVar1 = puVar9 + iVar2;
  while( true ) {
    if ((int)this->_padding_ != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UComputeKernel>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (puVar9 == puVar1) {
      if (bVar12) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return bVar11;
    }
    pUVar4 = (UComputeKernel *)*puVar9;
    if (pUVar4 == (UComputeKernel *)0x0) {
      pFVar7 = GetTypeName<UPCGComputeKernel>(&local_38);
      if ((pFVar7->Data).ArrayNum == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar8);
    }
    pUVar6 = UPCGComputeKernel::GetPrivateStaticClass();
    iVar3 = (int)pUVar6->_padding_;
    if ((*(int *)(pUVar4->_padding_ + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar3 * 8)
        != &pUVar6->_padding_)) break;
    bVar5 = (**(code **)(pUVar4->_padding_ + 0x2c0))(pUVar4,param_1);
    bVar11 = (bool)(bVar11 & bVar5);
    puVar9 = puVar9 + 1;
  }
  pFVar7 = GetTypeName<UPCGComputeKernel>(&local_48);
  pwVar8 = L"";
  if ((pFVar7->Data).ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
  pFVar7 = GetFullNameForCastLogError<UComputeKernel_const_>(&local_38,pUVar4);
  if ((pFVar7->Data).ArrayNum != 0) {
    pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar8,pwVar10);
}

// OnKernelCompilationComplete @ 149821700

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UPCGComputeGraph::OnKernelCompilationComplete
          (UPCGComputeGraph *this,int param_1,FComputeKernelCompileResults *param_2)

{
  int *piVar1;
  int iVar2;
  FComputeKernelCompileMessage *pFVar3;
  code *pcVar4;
  FObjectKey FVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  int iVar8;
  UObject *pUVar9;
  UClass *pUVar10;
  UObject *pUVar11;
  TArray<FComputeKernelCompileMessage,TSizedDefaultAllocator<32>_> *pTVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  FComputeKernelCompileMessage *pFVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  FObjectKey local_res20;
  FWeakObjectPtr local_88;
  UObject *local_80;
  ForAnyElementType local_78;
  undefined8 local_70;
  FPCGCompilerDiagnostic local_68;
  
  if ((param_1 < 0) || ((this->KernelToNode).ArrayNum <= param_1)) goto LAB_149821b9b;
  lVar13 = (longlong)param_1 * 0x28;
  pUVar9 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)
                      ((this->KernelToNode).AllocatorInstance.Data + lVar13));
  if (pUVar9 == (UObject *)0x0) goto LAB_149821b9b;
  pUVar10 = Z_Construct_UClass_UPCGNode_NoRegister();
  iVar2 = (int)pUVar10->_padding_;
  if ((*(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38) < iVar2) ||
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar2 * 8)
      != &pUVar10->_padding_)) goto LAB_149821b9b;
  if (((this->KernelToNode).ArrayNum <= param_1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pUVar9 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)
                      ((this->KernelToNode).AllocatorInstance.Data + lVar13));
  if (pUVar9 == (UObject *)0x0) {
LAB_149821803:
    pUVar9 = (UObject *)0x0;
  }
  else {
    pUVar10 = Z_Construct_UClass_UPCGNode_NoRegister();
    iVar2 = (int)pUVar10->_padding_;
    if ((*(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38) < iVar2) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar10->_padding_)) goto LAB_149821803;
  }
  if (pUVar9 == (UObject *)0x0) {
LAB_149821b9b:
    if (5 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
    return;
  }
  if (((this->KernelToNode).ArrayNum <= param_1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pUVar11 = TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)
                       ((this->KernelToNode).AllocatorInstance.Data + lVar13));
  if (pUVar11 != (UObject *)0x0) {
    pUVar10 = Z_Construct_UClass_UPCGNode_NoRegister();
    iVar2 = (int)pUVar10->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&pUVar11->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar11->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar10->_padding_)) {
      local_res20.ObjectIndex = 0;
      local_res20.ObjectSerialNumber = 0;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar11);
      }
      local_88.ObjectIndex = 0;
      local_88.ObjectSerialNumber = 0;
      local_80 = pUVar11;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar11);
      }
      FWeakObjectPtr::operator=(&local_88,(FObjectPtr)&local_80);
      local_res20.ObjectIndex = local_88.ObjectIndex;
      local_res20.ObjectSerialNumber = local_88.ObjectSerialNumber;
      FVar5 = local_res20;
      local_res20.ObjectSerialNumber = local_88.ObjectSerialNumber;
      uVar15 = local_res20.ObjectSerialNumber;
      uVar14 = local_88.ObjectIndex;
      local_res20 = FVar5;
      goto LAB_1498218f1;
    }
  }
  uVar15 = 0;
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  uVar14 = uVar15;
LAB_1498218f1:
  uVar14 = uVar14 - uVar15 ^ uVar15 >> 0xd;
  uVar18 = (-0x61c88647 - uVar14) - uVar15 ^ uVar14 << 8;
  uVar16 = (uVar15 - uVar18) - uVar14 ^ uVar18 >> 0xd;
  uVar15 = (uVar14 - uVar16) - uVar18 ^ uVar16 >> 0xc;
  uVar18 = (uVar18 - uVar16) - uVar15 ^ uVar15 << 0x10;
  uVar14 = (uVar16 - uVar18) - uVar15 ^ uVar18 >> 5;
  uVar15 = (uVar15 - uVar14) - uVar18 ^ uVar14 >> 3;
  uVar16 = (uVar18 - uVar15) - uVar14 ^ uVar15 << 10;
  pTVar12 = TMapBase<TObjectKey<UPCGNode_const_>,TArray<FComputeKernelCompileMessage,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPCGNode_const_>,TArray<FComputeKernelCompileMessage,TSizedDefaultAllocator<32>_>,0>_>
            ::FindOrAddImpl<TObjectKey<UPCGNode_const_>_>
                      ((TMapBase<TObjectKey<UPCGNode_const_>,TArray<FComputeKernelCompileMessage,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPCGNode_const_>,TArray<FComputeKernelCompileMessage,TSizedDefaultAllocator<32>_>,0>_>
                        *)&this->KernelToCompileMessages,(uVar14 - uVar16) - uVar15 ^ uVar16 >> 0xf,
                       (TObjectKey<UPCGNode_const_> *)&local_res20);
  if (pTVar12 != &param_2->Messages) {
    DestructItems<FComputeKernelCompileMessage,int>
              ((FComputeKernelCompileMessage *)(pTVar12->AllocatorInstance).Data,pTVar12->ArrayNum);
    iVar2 = (param_2->Messages).ArrayNum;
    piVar1 = &pTVar12->ArrayMax;
    pFVar3 = (FComputeKernelCompileMessage *)(param_2->Messages).AllocatorInstance.Data;
    pTVar12->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x48,8,iVar2,*piVar1,&pTVar12->AllocatorInstance,iVar2,piVar1);
      ConstructItems<FComputeKernelCompileMessage,FComputeKernelCompileMessage,int>
                ((pTVar12->AllocatorInstance).Data,pFVar3,iVar2);
    }
  }
  lVar13 = *(longlong *)&pUVar9->field_0x20;
  if (lVar13 == 0) {
    return;
  }
  pUVar10 = Z_Construct_UClass_UPCGGraph_NoRegister();
  lVar13 = *(longlong *)(lVar13 + 0x10);
  iVar2 = (int)pUVar10->_padding_;
  if (*(int *)(lVar13 + 0x38) < iVar2) {
    return;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(lVar13 + 0x30) + (longlong)iVar2 * 8) !=
      &pUVar10->_padding_) {
    return;
  }
  uVar15 = (param_2->Messages).ArrayNum;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  if (0 < (int)uVar15) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,uVar15,&local_78,0,(int *)((longlong)&local_70 + 4));
  }
  iVar2 = (param_2->Messages).ArrayNum;
  pFVar17 = (FComputeKernelCompileMessage *)(param_2->Messages).AllocatorInstance.Data;
  pFVar3 = pFVar17 + iVar2;
  while( true ) {
    if ((param_2->Messages).ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FComputeKernelCompileMessage_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar17 == pFVar3) break;
    ProcessCompilationMessage(&local_68,pFVar17);
    if (((local_78.Data <= &local_68) &&
        (&local_68 < (FPCGCompilerDiagnostic *)(local_78.Data + (longlong)local_70._4_4_ * 0x28)))
       && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar8 = (int)local_70;
    if ((int)local_70 == local_70._4_4_) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,&local_78,(int *)((longlong)&local_70 + 4));
    }
    FVar6.Data = local_78.Data;
    lVar13 = (longlong)iVar8;
    local_70 = CONCAT44(local_70._4_4_,iVar8 + 1);
    local_78.Data[lVar13 * 0x28].field_0x0 = local_68.Level;
    *(undefined8 *)(local_78.Data + lVar13 * 0x28 + 8) = 0;
    *(ITextData **)(local_78.Data + lVar13 * 0x28 + 8) = local_68.Message.TextData.Reference;
    if (local_68.Message.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.Message.TextData.Reference + 8))
                (local_68.Message.TextData.Reference,local_res8);
    }
    *(uint *)(FVar6.Data + lVar13 * 0x28 + 0x10) = local_68.Message.Flags;
    *(int *)(FVar6.Data + lVar13 * 0x28 + 0x18) = local_68.Line;
    *(int *)(FVar6.Data + lVar13 * 0x28 + 0x1c) = local_68.ColumnStart;
    *(int *)(FVar6.Data + lVar13 * 0x28 + 0x20) = local_68.ColumnEnd;
    if (local_68.Message.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.Message.TextData.Reference + 0x10))();
    }
    pFVar17 = pFVar17 + 1;
  }
  DestructItems<FPCGCompilerDiagnostic,int>((FPCGCompilerDiagnostic *)local_78.Data,(int)local_70);
  if ((FPCGCompilerDiagnostic *)local_78.Data == (FPCGCompilerDiagnostic *)0x0) {
    return;
  }
  FMemory::Free(local_78.Data);
  return;
}

// StaticRegisterNativesUPCGComputeGraph @ 149847170

void __cdecl UPCGComputeGraph::StaticRegisterNativesUPCGComputeGraph(void)

{
  return;
}

// __DefaultConstructor @ 14984eea0

void __cdecl UPCGComputeGraph::__DefaultConstructor(FObjectInitializer *param_1)

{
  UComputeGraph *this;
  UComputeGraph *pUVar1;
  
  this = (UComputeGraph *)param_1->Obj;
  if (this != (UComputeGraph *)0x0) {
    UComputeGraph::UComputeGraph(this,param_1);
    this->_padding_ = (longlong)&___7UPCGComputeGraph__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1].KernelInvocations.AllocatorInstance.Data = 0;
    *(undefined4 *)((longlong)&this[1].KernelInvocations.AllocatorInstance.Data + 4) = 0x80;
    this[1].KernelInvocations.ArrayNum = -1;
    this[1].KernelInvocations.ArrayMax = 0;
    this[1].DataInterfaces.ArrayNum = 0;
    this[1].DataInterfaces.ArrayMax = 0;
    *(undefined4 *)&this[1].GraphEdges.AllocatorInstance.Data = 0;
    this[1].GraphEdges.ArrayNum = 0;
    this[1].GraphEdges.ArrayMax = 0;
    this[1].Bindings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].Bindings.ArrayNum = 0;
    this[1].Bindings.ArrayMax = 0;
    this[1].DataInterfaceToBinding.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(undefined1 *)&this[1].DataInterfaceToBinding.ArrayNum = 0;
    this[1].KernelResources.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].KernelResources.ArrayNum = 0;
    this[1].KernelResources.ArrayMax = 0;
    *(undefined8 *)&this[1].KernelResourceIndicesPendingShaderCompilation.Elements.field_0x10 = 0;
    *(undefined4 *)&this[1].KernelResourceIndicesPendingShaderCompilation.Elements.field_0x18 = 0;
    *(undefined4 *)&this[1].KernelResourceIndicesPendingShaderCompilation.Elements.field_0x1c = 0x80
    ;
    *(undefined4 *)&this[1].KernelResourceIndicesPendingShaderCompilation.Elements.field_0x20 =
         0xffffffff;
    *(undefined4 *)&this[1].KernelResourceIndicesPendingShaderCompilation.Elements.field_0x24 = 0;
    *(undefined8 *)&this[1].KernelResourceIndicesPendingShaderCompilation.Elements.field_0x30 = 0;
    pUVar1 = this + 1;
    (pUVar1->KernelResourceIndicesPendingShaderCompilation).Hash.InlineData[0] = '\0';
    (pUVar1->KernelResourceIndicesPendingShaderCompilation).Hash.InlineData[1] = '\0';
    (pUVar1->KernelResourceIndicesPendingShaderCompilation).Hash.InlineData[2] = '\0';
    (pUVar1->KernelResourceIndicesPendingShaderCompilation).Hash.InlineData[3] = '\0';
    this[1].KernelResourceIndicesPendingShaderCompilation.Hash.SecondaryData =
         (ForElementType<FSetElementId>)0x0;
    *(undefined8 *)&this[1].KernelResourceIndicesPendingShaderCompilation.HashSize = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[2]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2].KernelInvocations.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[2].KernelInvocations.ArrayNum = 0;
    this[2].DataInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[2].DataInterfaces.ArrayNum = 0;
    this[2].DataInterfaces.ArrayMax = 0;
    this[2].GraphEdges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[2].GraphEdges.ArrayNum = 0;
    this[2].GraphEdges.ArrayMax = 0;
    this[2].DataInterfaceToBinding.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[2].DataInterfaceToBinding.ArrayNum = 0;
    this[2].DataInterfaceToBinding.ArrayMax = 0x80;
    *(undefined4 *)&this[2].KernelResources.AllocatorInstance.Data = 0xffffffff;
    *(undefined4 *)((longlong)&this[2].KernelResources.AllocatorInstance.Data + 4) = 0;
    *(undefined8 *)&this[2].KernelResourceIndicesPendingShaderCompilation.Elements = 0;
    *(undefined4 *)&this[2].KernelResourceIndicesPendingShaderCompilation.Elements.field_0x8 = 0;
    *(undefined8 *)&this[2].KernelResourceIndicesPendingShaderCompilation.Elements.field_0x10 = 0;
    *(undefined8 *)&this[2].KernelResourceIndicesPendingShaderCompilation.Elements.field_0x18 = 0;
    *(undefined8 *)&this[2].KernelResourceIndicesPendingShaderCompilation.Elements.field_0x20 = 0;
    *(undefined8 *)&this[2].KernelResourceIndicesPendingShaderCompilation.Elements.field_0x28 = 0;
    this[2].KernelResourceIndicesPendingShaderCompilation.Hash.SecondaryData =
         (ForElementType<FSetElementId>)0x0;
    this[2].KernelResourceIndicesPendingShaderCompilation.HashSize = 0;
    *(undefined4 *)&this[2].KernelResourceIndicesPendingShaderCompilation.field_0x4c = 0x80;
    *(undefined4 *)&this[2].RenderProxy = 0xffffffff;
    *(undefined4 *)((longlong)&this[2].RenderProxy + 4) = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3].DataInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[3].DataInterfaces.ArrayNum = 0;
    this[3].DataInterfaces.ArrayMax = 0x80;
    *(undefined4 *)&this[3].GraphEdges.AllocatorInstance.Data = 0xffffffff;
    *(undefined4 *)((longlong)&this[3].GraphEdges.AllocatorInstance.Data + 4) = 0;
    this[3].Bindings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[3].Bindings.ArrayNum = 0;
    this[3].DataInterfaceToBinding.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[3].DataInterfaceToBinding.ArrayNum = 0;
    this[3].DataInterfaceToBinding.ArrayMax = 0;
    *(undefined8 *)&this[3].KernelResourceIndicesPendingShaderCompilation.Elements = 0;
    *(undefined4 *)&this[3].KernelResourceIndicesPendingShaderCompilation.Elements.field_0x8 = 0;
    *(undefined4 *)&this[3].KernelResourceIndicesPendingShaderCompilation.Elements.field_0xc = 0x80;
    *(undefined4 *)&this[3].KernelResourceIndicesPendingShaderCompilation.Elements.field_0x10 =
         0xffffffff;
    *(undefined4 *)&this[3].KernelResourceIndicesPendingShaderCompilation.Elements.field_0x14 = 0;
    *(undefined8 *)&this[3].KernelResourceIndicesPendingShaderCompilation.Elements.field_0x20 = 0;
    *(undefined4 *)&this[3].KernelResourceIndicesPendingShaderCompilation.Elements.field_0x28 = 0;
  }
  return;
}

// __VTableCtorCaller @ 14984f0f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UPCGComputeGraph::__VTableCtorCaller(FVTableHelper *param_1)

{
  UComputeGraph *pUVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UComputeGraph *this;
  
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = GetPrivateStaticClass();
  this = (UComputeGraph *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UComputeGraph *)0x0) {
    UComputeGraph::UComputeGraph(this,param_1);
    this->_padding_ = (longlong)&___7UPCGComputeGraph__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1].KernelInvocations.AllocatorInstance.Data = 0;
    *(undefined4 *)((longlong)&this[1].KernelInvocations.AllocatorInstance.Data + 4) = 0x80;
    this[1].KernelInvocations.ArrayNum = -1;
    this[1].KernelInvocations.ArrayMax = 0;
    this[1].DataInterfaces.ArrayNum = 0;
    this[1].DataInterfaces.ArrayMax = 0;
    *(undefined4 *)&this[1].GraphEdges.AllocatorInstance.Data = 0;
    this[1].GraphEdges.ArrayNum = 0;
    this[1].GraphEdges.ArrayMax = 0;
    this[1].Bindings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].Bindings.ArrayNum = 0;
    this[1].Bindings.ArrayMax = 0;
    this[1].DataInterfaceToBinding.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(undefined1 *)&this[1].DataInterfaceToBinding.ArrayNum = 0;
    this[1].KernelResources.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].KernelResources.ArrayNum = 0;
    this[1].KernelResources.ArrayMax = 0;
    *(undefined8 *)&this[1].KernelResourceIndicesPendingShaderCompilation.Elements.field_0x10 = 0;
    *(undefined4 *)&this[1].KernelResourceIndicesPendingShaderCompilation.Elements.field_0x18 = 0;
    *(undefined4 *)&this[1].KernelResourceIndicesPendingShaderCompilation.Elements.field_0x1c = 0x80
    ;
    *(undefined4 *)&this[1].KernelResourceIndicesPendingShaderCompilation.Elements.field_0x20 =
         0xffffffff;
    *(undefined4 *)&this[1].KernelResourceIndicesPendingShaderCompilation.Elements.field_0x24 = 0;
    *(undefined8 *)&this[1].KernelResourceIndicesPendingShaderCompilation.Elements.field_0x30 = 0;
    pUVar1 = this + 1;
    (pUVar1->KernelResourceIndicesPendingShaderCompilation).Hash.InlineData[0] = '\0';
    (pUVar1->KernelResourceIndicesPendingShaderCompilation).Hash.InlineData[1] = '\0';
    (pUVar1->KernelResourceIndicesPendingShaderCompilation).Hash.InlineData[2] = '\0';
    (pUVar1->KernelResourceIndicesPendingShaderCompilation).Hash.InlineData[3] = '\0';
    this[1].KernelResourceIndicesPendingShaderCompilation.Hash.SecondaryData =
         (ForElementType<FSetElementId>)0x0;
    *(undefined8 *)&this[1].KernelResourceIndicesPendingShaderCompilation.HashSize = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[2]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2].KernelInvocations.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[2].KernelInvocations.ArrayNum = 0;
    this[2].DataInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[2].DataInterfaces.ArrayNum = 0;
    this[2].DataInterfaces.ArrayMax = 0;
    this[2].GraphEdges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[2].GraphEdges.ArrayNum = 0;
    this[2].GraphEdges.ArrayMax = 0;
    this[2].DataInterfaceToBinding.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[2].DataInterfaceToBinding.ArrayNum = 0;
    this[2].DataInterfaceToBinding.ArrayMax = 0x80;
    *(undefined4 *)&this[2].KernelResources.AllocatorInstance.Data = 0xffffffff;
    *(undefined4 *)((longlong)&this[2].KernelResources.AllocatorInstance.Data + 4) = 0;
    *(undefined8 *)&this[2].KernelResourceIndicesPendingShaderCompilation.Elements = 0;
    *(undefined4 *)&this[2].KernelResourceIndicesPendingShaderCompilation.Elements.field_0x8 = 0;
    *(undefined8 *)&this[2].KernelResourceIndicesPendingShaderCompilation.Elements.field_0x10 = 0;
    *(undefined8 *)&this[2].KernelResourceIndicesPendingShaderCompilation.Elements.field_0x18 = 0;
    *(undefined8 *)&this[2].KernelResourceIndicesPendingShaderCompilation.Elements.field_0x20 = 0;
    *(undefined8 *)&this[2].KernelResourceIndicesPendingShaderCompilation.Elements.field_0x28 = 0;
    this[2].KernelResourceIndicesPendingShaderCompilation.Hash.SecondaryData =
         (ForElementType<FSetElementId>)0x0;
    this[2].KernelResourceIndicesPendingShaderCompilation.HashSize = 0;
    *(undefined4 *)&this[2].KernelResourceIndicesPendingShaderCompilation.field_0x4c = 0x80;
    *(undefined4 *)&this[2].RenderProxy = 0xffffffff;
    *(undefined4 *)((longlong)&this[2].RenderProxy + 4) = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3].DataInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[3].DataInterfaces.ArrayNum = 0;
    this[3].DataInterfaces.ArrayMax = 0x80;
    *(undefined4 *)&this[3].GraphEdges.AllocatorInstance.Data = 0xffffffff;
    *(undefined4 *)((longlong)&this[3].GraphEdges.AllocatorInstance.Data + 4) = 0;
    this[3].Bindings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[3].Bindings.ArrayNum = 0;
    this[3].DataInterfaceToBinding.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[3].DataInterfaceToBinding.ArrayNum = 0;
    this[3].DataInterfaceToBinding.ArrayMax = 0;
    *(undefined8 *)&this[3].KernelResourceIndicesPendingShaderCompilation.Elements = 0;
    *(undefined4 *)&this[3].KernelResourceIndicesPendingShaderCompilation.Elements.field_0x8 = 0;
    *(undefined4 *)&this[3].KernelResourceIndicesPendingShaderCompilation.Elements.field_0xc = 0x80;
    *(undefined4 *)&this[3].KernelResourceIndicesPendingShaderCompilation.Elements.field_0x10 =
         0xffffffff;
    *(undefined4 *)&this[3].KernelResourceIndicesPendingShaderCompilation.Elements.field_0x14 = 0;
    *(undefined8 *)&this[3].KernelResourceIndicesPendingShaderCompilation.Elements.field_0x20 = 0;
    *(undefined4 *)&this[3].KernelResourceIndicesPendingShaderCompilation.Elements.field_0x28 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

