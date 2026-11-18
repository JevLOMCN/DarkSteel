// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 7

// FPCGDataCollectionDataProviderProxy @ 149737700

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FPCGDataCollectionDataProviderProxy * __thiscall
FPCGDataCollectionDataProviderProxy::FPCGDataCollectionDataProviderProxy
          (FPCGDataCollectionDataProviderProxy *this,FSetupParams *param_1)

{
  uint uVar1;
  TReferenceControllerBase<1> *pTVar2;
  FPCGDataCollectionDesc *pFVar3;
  code *pcVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  int iVar7;
  UObject *pUVar8;
  FPCGDataCollectionDataProviderProxy *pFVar9;
  int *piVar10;
  FScriptContainerElement *pFVar11;
  int *piVar12;
  FScriptContainerElement *pFVar13;
  
  this->_padding_ = (longlong)&___7FPCGDataCollectionDataProviderProxy__6B_;
  this->OriginatingGenerationCount = 0;
  this->SizeBytes = param_1->SizeBytes;
  this->bIsBufferSizeValid = param_1->bIsBufferSizeValid;
  this->ExportMode = param_1->ExportMode;
  this->bZeroInitialize = param_1->bZeroInitialize;
  uVar1 = param_1->ElementCountMultiplier;
  (this->PinDesc).Object = (FPCGDataCollectionDesc *)0x0;
  (this->PinDesc).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->ElementCountMultiplier = uVar1;
  this->Buffer = (FRDGBuffer *)0x0;
  this->BufferUAV = (FRDGBufferUAV *)0x0;
  (this->DataProviderWeakPtr).WeakPtr = (param_1->DataProvider).WeakPtr;
  this->OutputPinLabel = param_1->OutputPinLabel;
  this->OutputPinLabelAlias = param_1->OutputPinLabelAlias;
  this->AttributeIdRemapSRV = (FRDGBufferSRV *)0x0;
  this->FirstRemappedAttributeId = -1;
  this->BufferToGraphStringKeySRV = (FRDGBufferSRV *)0x0;
  this->NumRemappedStringKeys = -1;
  this->LargestAttributeIndex = -1;
  this->bProducedByCPU = param_1->bProducedByCPU;
  (this->DataAdaptor).Object = (param_1->DataAdaptor).Object;
  pTVar2 = (param_1->DataAdaptor).SharedReferenceCount.ReferenceController;
  (this->DataAdaptor).SharedReferenceCount.ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pUVar8 = FWeakObjectPtr::Get(&(this->DataProviderWeakPtr).WeakPtr);
  this->OriginatingGenerationCount = *(ulong64 *)&pUVar8[3].field_0x18;
  pFVar3 = (param_1->PinDesc).Object;
  if (pFVar3 == (FPCGDataCollectionDesc *)0x0) {
    return this;
  }
  pTVar2 = (param_1->PinDesc).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = (this->PinDesc).SharedReferenceCount.ReferenceController;
  (this->PinDesc).Object = pFVar3;
  (this->PinDesc).SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  if (((this->PinDesc).Object == (FPCGDataCollectionDesc *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar9 = (FPCGDataCollectionDataProviderProxy *)(*pcVar4)();
    return pFVar9;
  }
  pFVar3 = (this->PinDesc).Object;
  iVar7 = (pFVar3->DataDescs).ArrayNum;
  pFVar11 = (pFVar3->DataDescs).AllocatorInstance.Data;
  if ((iVar7 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar9 = (FPCGDataCollectionDataProviderProxy *)(*pcVar4)();
    return pFVar9;
  }
  pFVar13 = pFVar11 + (longlong)iVar7 * 0x68;
  while( true ) {
    if (pFVar11 == pFVar13) {
      return this;
    }
    iVar7 = *(int *)(pFVar11 + 0x38);
    piVar10 = *(int **)(pFVar11 + 0x30);
    if ((iVar7 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) break;
    piVar12 = piVar10 + (longlong)iVar7 * 0x1e;
    for (; piVar10 != piVar12; piVar10 = piVar10 + 0x1e) {
      iVar7 = PCGComputeHelpers::GetMetadataAttributeIndexFromAttributeId(*piVar10);
      if (iVar7 < this->LargestAttributeIndex) {
        iVar7 = this->LargestAttributeIndex;
      }
      this->LargestAttributeIndex = iVar7;
    }
    pFVar11 = pFVar11 + 0x68;
  }
  pcVar4 = (code *)swi(3);
  pFVar9 = (FPCGDataCollectionDataProviderProxy *)(*pcVar4)();
  return pFVar9;
}

// operator() @ 149742050

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
`FPCGDataCollectionDataProviderProxy::AllocateResources'::__l27::<lambda_1>::operator()(void *this)

{
  int *piVar1;
  EPCGExportMode EVar2;
  uint uVar3;
  int iVar4;
  FName FVar5;
  FName FVar6;
  code *pcVar7;
  bool bVar8;
  UPCGComputeDataProvider *this_00;
  UPCGDataBinding *this_01;
  UPCGSubsystem *pUVar9;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  UObject *pUVar12;
  UClass *pUVar13;
  UPCGProxyForGPUData *this_02;
  UPCGSettings *pUVar14;
  longlong *plVar15;
  FPCGProxyForGPUDataCollection *pFVar16;
  int iVar17;
  TReferenceControllerBase<1> *pTVar18;
  undefined1 auStackY_138 [32];
  FLLMScope local_108 [2];
  FPCGProxyForGPUDataCollection *local_100;
  FName local_f8;
  longlong local_f0;
  UPCGDataBinding *local_e8;
  FMemScope local_e0;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> local_d8;
  TSharedPtr<FPCGProxyForGPUDataCollection,1> local_c8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  FLLMScope::FLLMScope(local_108,LLMTagDeclaration_PCG.UniqueName,false,None,Default,true);
  local_f8 = LLMTagDeclaration_PCG.UniqueName;
  FMemScope::FMemScope(&local_e0,&local_f8,true);
  this_00 = (UPCGComputeDataProvider *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 8));
  if (this_00 == (UPCGComputeDataProvider *)0x0) {
    if (1 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
    goto LAB_14974244a;
  }
  if (this_00->GenerationCounter != *(atomic<unsigned___int64> *)((longlong)this + 0x40))
  goto LAB_14974244a;
  if (*(longlong *)((longlong)this + 0x10) == 0) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8168838341689606958>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGDataCollectionDataInterface.cpp"
                       ,0x32e,"PinDesc");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    goto LAB_14974244a;
  }
  this_01 = (UPCGDataBinding *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this_00[1].GraphBindingIndex);
  local_e8 = this_01;
  pUVar9 = UPCGSubsystem::GetSubsystemForCurrentWorld();
  if ((this_01 == (UPCGDataBinding *)0x0) || (pUVar9 == (UPCGSubsystem *)0x0)) goto LAB_14974244a;
  pTVar10 = UPCGDataBinding::GetStringTable(this_01);
  pTVar11 = ::operator_new(0x98);
  pTVar18 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
    local_100 = (FPCGProxyForGPUDataCollection *)&DAT_00000010;
    pTVar11 = pTVar18;
LAB_149742256:
    pFVar16 = local_100;
    if (((local_100->_padding_ == 0) || (*(longlong *)&local_100->_padding_ == 0)) ||
       (*(int *)(*(longlong *)&local_100->_padding_ + 8) < 1)) {
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_100->_padding_ = (longlong)local_100;
      if (pTVar11 != *(TReferenceControllerBase<1> **)&local_100->_padding_) {
        if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar15 = *(longlong **)&local_100->_padding_;
        if (plVar15 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar15 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar15 + 8))(plVar15,1);
          }
        }
        *(TReferenceControllerBase<1> **)&pFVar16->_padding_ = pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
    }
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) goto LAB_1497422ba;
  }
  else {
    pTVar11->SharedReferenceCount = (atomic<int>)0x1;
    pTVar11->WeakReferenceCount = (atomic<int>)0x1;
    pTVar11->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFPCGProxyForGPUDataCollection___00_SharedPointerInternals__6B_
    ;
    local_d8.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)((longlong)this + 0x18);
    local_d8.Object = *(FPCGDataCollectionDesc **)((longlong)this + 0x10);
    if (local_d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_f0 = *(longlong *)this;
    uVar3 = *(uint *)((longlong)this + 0x28);
    if (local_f0 != 0) {
      LOCK();
      *(int *)(local_f0 + 8) = *(int *)(local_f0 + 8) + 1;
      UNLOCK();
    }
    FPCGProxyForGPUDataCollection::FPCGProxyForGPUDataCollection
              ((FPCGProxyForGPUDataCollection *)(pTVar11 + 1),(FRDGPooledBuffer *)&local_f0,uVar3,
               &local_d8,pTVar10);
    pFVar16 = (FPCGProxyForGPUDataCollection *)(pTVar11 + 1);
    local_100 = pFVar16;
    if (pFVar16 != (FPCGProxyForGPUDataCollection *)0x0) goto LAB_149742256;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
LAB_1497422ba:
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  while( true ) {
    if ((*(longlong *)((longlong)this + 0x10) == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar4 = *(int *)(*(longlong *)((longlong)this + 0x10) + 8);
    if ((iVar4 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar17 = (int)pTVar18;
    if (iVar4 <= iVar17) break;
    pUVar12 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar12,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar13 = Z_Construct_UClass_UPCGProxyForGPUData_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_b8,pUVar13);
    local_b8._8_8_ = pUVar12;
    this_02 = (UPCGProxyForGPUData *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
    if (local_b8._64_8_ != 0) {
      plVar15 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar15 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar15 + 0x10))();
    }
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_c8.Object = pFVar16;
    local_c8.SharedReferenceCount.ReferenceController = pTVar11;
    UPCGProxyForGPUData::Initialize(this_02,&local_c8,iVar17);
    FVar5 = *(FName *)((longlong)this + 0x34);
    FVar6 = *(FName *)((longlong)this + 0x20);
    EVar2 = *(EPCGExportMode *)((longlong)this + 0x30);
    pUVar14 = UPCGComputeDataProvider::GetProducerSettings(this_00);
    UPCGDataBinding::ReceiveDataFromGPU_GameThread
              (local_e8,(UPCGData *)this_02,pUVar14,EVar2,FVar6,FVar5);
    pTVar18 = (TReferenceControllerBase<1> *)(ulonglong)(iVar17 + 1);
    pFVar16 = local_100;
  }
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this_00[1]._padding_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
LAB_14974244a:
  FMemScope::~FMemScope(&local_e0);
  FLLMScope::~FLLMScope(local_108);
  return;
}

// AllocateResources @ 1497462d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FPCGDataCollectionDataProviderProxy::AllocateResources
          (FPCGDataCollectionDataProviderProxy *this,FRDGBuilder *param_1,FAllocationData *param_2)

{
  FRDGPooledBuffer *pFVar1;
  FRDGBuffer *pFVar2;
  code *pcVar3;
  TConsoleVariableData<bool> *pTVar4;
  bool bVar5;
  byte bVar6;
  uint uVar7;
  FRDGBufferSRV *pFVar8;
  FRDGBufferUAV *pFVar9;
  TRefCountPtr<FRDGPooledBuffer> *pTVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  longlong *plVar16;
  bool bVar17;
  FLLMScope local_res8 [2];
  FName local_res20;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_f8;
  FRDGBufferUAVDesc local_e8;
  FRDGBufferUAVDesc local_d8;
  FMemScope local_c8;
  undefined4 local_c0;
  uint uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> local_a8;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> local_98;
  FRDGBufferDesc local_88;
  <lambda_1> local_70;
  
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId738,"FPCGDataCollectionDataProviderProxy::AllocateResources"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGDataCollectionDataInterface.cpp"
               ,0x2e2);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId738);
  }
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_PCG.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_PCG.UniqueName;
  FMemScope::FMemScope(&local_c8,&local_res20,true);
  if (this->bProducedByCPU != false) {
    if (((this->DataAdaptor).Object == (FPCGDataUploadAdaptor *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_d8.Buffer =
         FPCGDataUploadAdaptor::GetBuffer_RenderThread
                   ((this->DataAdaptor).Object,param_1,this->ExportMode);
    this->Buffer = local_d8.Buffer;
    local_d8._padding_._2_1_ = 0;
    bVar6 = 0;
    if ((((local_d8.Buffer)->Desc).Usage & DrawIndirect) != None) {
      bVar6 = 0x1c;
    }
    local_d8._padding_._0_2_ = (ushort)bVar6;
    pFVar9 = FRDGBuilder::CreateUAV(param_1,&local_d8,None);
    this->BufferUAV = pFVar9;
    pFVar8 = GetAttributeIdRemapBufferSRV(this,param_1,&this->FirstRemappedAttributeId);
    this->AttributeIdRemapSRV = pFVar8;
    pFVar8 = GetBufferToGraphStringKeySRV(this,param_1,&this->NumRemappedStringKeys);
    this->BufferToGraphStringKeySRV = pFVar8;
    goto LAB_1497468bc;
  }
  if ((this->SizeBytes == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("SizeBytes > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGDataCollectionDataInterface.cpp"
                         ,0x2e9,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar8 = GetAttributeIdRemapBufferSRV(this,param_1,&this->FirstRemappedAttributeId);
  this->AttributeIdRemapSRV = pFVar8;
  pFVar8 = GetBufferToGraphStringKeySRV(this,param_1,&this->NumRemappedStringKeys);
  uStack_bc = (uint)this->SizeBytes;
  this->BufferToGraphStringKeySRV = pFVar8;
  if (((uStack_bc & 3) != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumBytes % 4 == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphResources.h"
                         ,0x3af,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uStack_bc = uStack_bc >> 2;
  uStack_b8 = 0x10119;
  local_c0 = 4;
  local_88.Usage = StructuredBuffer|ShaderResource|ByteAddressBuffer|UnorderedAccess|Static;
  local_b0 = 0;
  local_88.BytesPerElement = 4;
  local_88._12_4_ = uStack_b4;
  local_88.Metadata = (FShaderParametersMetadata *)0x0;
  if (this->ExportMode != NoExport) {
    local_88.Usage =
         StructuredBuffer|ShaderResource|SourceCopy|ByteAddressBuffer|UnorderedAccess|Static;
  }
  local_88.NumElements = uStack_bc;
  local_e8.Buffer = FRDGBuilder::CreateBuffer(param_1,&local_88,L"PCGDataCollection",None);
  this->Buffer = local_e8.Buffer;
  local_e8._padding_._2_1_ = 0;
  bVar6 = 0;
  if ((((local_e8.Buffer)->Desc).Usage & DrawIndirect) != None) {
    bVar6 = 0x1c;
  }
  local_e8._padding_._0_2_ = (ushort)bVar6;
  pFVar9 = FRDGBuilder::CreateUAV(param_1,&local_e8,None);
  this->BufferUAV = pFVar9;
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.ArrayNum = 0;
  local_f8.ArrayMax = 0;
  if (this->bZeroInitialize == false) {
    local_a8.Object = (this->PinDesc).Object;
    local_a8.SharedReferenceCount.ReferenceController =
         (this->PinDesc).SharedReferenceCount.ReferenceController;
    if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    uVar7 = PCGDataCollectionPackingHelpers::ComputePackedHeaderSizeBytes(&local_a8);
    iVar15 = local_f8.ArrayMax;
    iVar12 = local_f8.ArrayNum;
  }
  else {
    uVar7 = (uint)(this->SizeBytes >> 2);
    iVar15 = 0;
    iVar12 = 0;
  }
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
  }
  if (iVar15 < (int)uVar7) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar7,&local_f8.AllocatorInstance,iVar12,&local_f8.ArrayMax);
  }
  local_98.Object = (this->PinDesc).Object;
  local_98.SharedReferenceCount.ReferenceController =
       (this->PinDesc).SharedReferenceCount.ReferenceController;
  if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  PCGDataCollectionPackingHelpers::WriteHeader(&local_98,&local_f8);
  pTVar4 = PCGSystemSwitches::CVarFuzzGPUMemory.Ref;
  if (this->bZeroInitialize == false) {
    bVar5 = IsInParallelGameThread();
    if ((bVar5) || (bVar5 = IsInGameThread(), bVar5)) {
      lVar11 = 0;
    }
    else {
      lVar11 = 1;
    }
    if (pTVar4->ShadowedValue[lVar11] == false) goto LAB_1497465bc;
    iVar15 = local_f8.ArrayNum;
    uVar14 = (ulonglong)local_f8.ArrayNum;
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&local_f8,(int)(this->SizeBytes >> 2),Default);
    if (iVar15 < local_f8.ArrayNum) {
      lVar11 = uVar14 * 4;
      iVar15 = (int)GFrameCounter;
      do {
        uVar13 = (uint)uVar14;
        iVar15 = iVar15 * 0xbb38435 + 0x3619636b;
        uVar7 = 0;
        if ((int)uVar13 < local_f8.ArrayNum) {
          uVar7 = ~uVar13 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar14 = (ulonglong)(uVar13 + 1);
        *(int *)(local_f8.AllocatorInstance.Data + lVar11) = iVar15;
        lVar11 = lVar11 + 4;
      } while ((int)(uVar13 + 1) < local_f8.ArrayNum);
    }
  }
  else {
    if (CpuChannel->Enabled < 0) {
      TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumZeroed
                (&local_f8,(int)(this->SizeBytes >> 2),Default);
    }
    else {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId769,
                 "FPCGDataCollectionDataProviderProxy::AllocateResources::ZeroInitialize",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGDataCollectionDataInterface.cpp"
                 ,0x301);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId769);
      TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumZeroed
                (&local_f8,(int)(this->SizeBytes >> 2),Default);
      FCpuProfilerTrace::OutputEndEvent();
    }
LAB_1497465bc:
  }
  FRDGBuilder::QueueBufferUpload
            (param_1,this->Buffer,local_f8.AllocatorInstance.Data,
             (ulonglong)(uint)(local_f8.ArrayNum * 4),None);
  if (this->ExportMode != NoExport) {
    pTVar10 = FRDGBuilder::ConvertToExternalBuffer(param_1,this->Buffer);
    pFVar1 = pTVar10->Reference;
    if (pFVar1 == (FRDGPooledBuffer *)0x0) {
      plVar16 = (longlong *)&DAT_00000008;
    }
    else {
      plVar16 = &pFVar1->_padding_;
      LOCK();
      *(int *)plVar16 = (int)*plVar16 + 1;
      UNLOCK();
    }
    pFVar2 = this->Buffer;
    FRDGUserValidation::ValidateSetAccessFinal
              (&param_1->UserValidation,(FRDGViewableResource *)pFVar2,CopySrc);
    *(ERHIAccess *)&pFVar2->_padding_ = CopySrc;
    local_70.GenerationCount = this->OriginatingGenerationCount;
    local_70.SizeBytes = this->SizeBytes;
    if (pFVar1 != (FRDGPooledBuffer *)0x0) {
      LOCK();
      *(int *)plVar16 = (int)*plVar16 + 1;
      UNLOCK();
    }
    local_70.DataProviderWeakPtr.WeakPtr = (this->DataProviderWeakPtr).WeakPtr;
    local_70.PinDesc.Object = (this->PinDesc).Object;
    local_70.PinDesc.SharedReferenceCount.ReferenceController =
         (this->PinDesc).SharedReferenceCount.ReferenceController;
    if (local_70.PinDesc.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_70.PinDesc.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_70.PinDesc.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
           1);
      UNLOCK();
    }
    local_70.OutputPinLabel = this->OutputPinLabel;
    local_70.ExportMode = this->ExportMode;
    local_70.OutputPinLabelAlias = this->OutputPinLabelAlias;
    local_70.ExportedPooledBuffer.Reference = pFVar1;
    ExecuteOnGameThread<_FPCGDataCollectionDataProviderProxy::AllocateResources_::__l27::<lambda_1>_>
              (L"C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGDataCollectionDataInterface.cpp(797)"
               ,&local_70);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_70.PinDesc.SharedReferenceCount.ReferenceController);
    if (local_70.ExportedPooledBuffer.Reference != (FRDGPooledBuffer *)0x0) {
      plVar16 = &(local_70.ExportedPooledBuffer.Reference)->_padding_;
      LOCK();
      lVar11 = *plVar16;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((((int)lVar11 == 1) && (plVar16 != (longlong *)0x0)) &&
         (local_70.ExportedPooledBuffer.Reference != (FRDGPooledBuffer *)0x0)) {
        (**(code **)(local_70.ExportedPooledBuffer.Reference)->_padding_)
                  (local_70.ExportedPooledBuffer.Reference,1);
      }
    }
    if (pFVar1 != (FRDGPooledBuffer *)0x0) {
      plVar16 = &pFVar1->_padding_;
      LOCK();
      lVar11 = *plVar16;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if (((int)lVar11 == 1) && (plVar16 != (longlong *)0x0)) {
        (**(code **)pFVar1->_padding_)(pFVar1,1);
      }
    }
  }
  if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.AllocatorInstance.Data);
  }
LAB_1497468bc:
  FMemScope::~FMemScope(&local_c8);
  FLLMScope::~FLLMScope(local_res8);
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GatherDispatchData @ 149751890

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FPCGDataCollectionDataProviderProxy::GatherDispatchData
          (FPCGDataCollectionDataProviderProxy *this,FDispatchData *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uchar *puVar6;
  int iVar7;
  
  if ((this->BufferUAV == (FRDGBufferUAV *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("BufferUAV",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGDataCollectionDataInterface.cpp"
                         ,0x2d1,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = param_1->ParameterBufferOffset;
  puVar6 = param_1->ParameterBuffer;
  iVar2 = param_1->NumInvocations;
  iVar3 = param_1->ParameterBufferStride;
  if ((iVar2 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x3f,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((iVar3 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("BytesBetweenElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x40,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((((longlong)iVar3 & 0xfU) != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("BytesBetweenElements % alignof(ElementType) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x41,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = 0;
  if (0 < iVar2) {
    puVar6 = puVar6 + (longlong)iVar1 + 0x10;
    do {
      if ((iVar7 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                             ,0x96,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = iVar7 + 1;
      *(FRDGBufferUAV **)(puVar6 + -0x10) = this->BufferUAV;
      *(uint *)(puVar6 + -8) = this->ElementCountMultiplier;
      *(FRDGBufferSRV **)puVar6 = this->AttributeIdRemapSRV;
      *(int *)(puVar6 + 8) = this->FirstRemappedAttributeId;
      *(FRDGBufferSRV **)(puVar6 + 0x10) = this->BufferToGraphStringKeySRV;
      *(int *)(puVar6 + 0x18) = this->NumRemappedStringKeys;
      puVar6 = puVar6 + iVar3;
    } while (iVar7 < iVar2);
  }
  return;
}

// GetAttributeIdRemapBufferSRV @ 149754630

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGBufferSRV * __thiscall
FPCGDataCollectionDataProviderProxy::GetAttributeIdRemapBufferSRV
          (FPCGDataCollectionDataProviderProxy *this,FRDGBuilder *param_1,int *param_2)

{
  FPCGDataUploadAdaptor *pFVar1;
  FRDGBufferSRV *pFVar2;
  FRDGBufferSRVDesc local_28;
  
  if (this->bProducedByCPU != false) {
    pFVar1 = (this->DataAdaptor).Object;
    if ((pFVar1 != (FPCGDataUploadAdaptor *)0x0) &&
       ((pFVar1->ExternalBufferForReuse).Reference != (FRDGPooledBuffer *)0x0)) {
      pFVar1 = TSharedPtr<FPCGDataUploadAdaptor,1>::operator->(&this->DataAdaptor);
      pFVar2 = FPCGDataUploadAdaptor::GetAttributeRemapBufferSRV(pFVar1,param_1,param_2);
      return pFVar2;
    }
  }
  *param_2 = 0x80;
  local_28.Buffer =
       FSystemTextures::GetDefaultStructuredBuffer((FSystemTextures *)&GSystemTextures,param_1,4);
  local_28._padding_._4_4_ = 0;
  local_28._padding_ = 0;
  local_28._padding_._0_4_ = 0xffffffff;
  local_28._padding_._0_1_ = 0;
  if ((((local_28.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_28._padding_._0_1_ = 0x1c;
  }
  pFVar2 = FRDGBuilder::CreateSRV(param_1,&local_28);
  return pFVar2;
}

// GetBufferToGraphStringKeySRV @ 149754740

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGBufferSRV * __thiscall
FPCGDataCollectionDataProviderProxy::GetBufferToGraphStringKeySRV
          (FPCGDataCollectionDataProviderProxy *this,FRDGBuilder *param_1,int *param_2)

{
  FPCGDataUploadAdaptor *pFVar1;
  FRDGBufferSRV *pFVar2;
  FRDGBufferSRVDesc local_28;
  
  if (this->bProducedByCPU != false) {
    pFVar1 = (this->DataAdaptor).Object;
    if ((pFVar1 != (FPCGDataUploadAdaptor *)0x0) && (pFVar1->ExternalBufferMaxStringKeyValue != -1))
    {
      pFVar1 = TSharedPtr<FPCGDataUploadAdaptor,1>::operator->(&this->DataAdaptor);
      pFVar2 = FPCGDataUploadAdaptor::GetBufferToGraphStringKeySRV(pFVar1,param_1,param_2);
      return pFVar2;
    }
  }
  *param_2 = 0;
  local_28.Buffer =
       FSystemTextures::GetDefaultStructuredBuffer((FSystemTextures *)&GSystemTextures,param_1,4);
  local_28._padding_._4_4_ = 0;
  local_28._padding_._0_4_ = 0xffffffff;
  local_28._padding_ = 0;
  local_28._padding_._0_1_ = 0;
  if ((((local_28.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_28._padding_._0_1_ = 0x1c;
  }
  pFVar2 = FRDGBuilder::CreateSRV(param_1,&local_28);
  return pFVar2;
}

// IsValid @ 14976bef0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FPCGDataCollectionDataProviderProxy::IsValid
          (FPCGDataCollectionDataProviderProxy *this,FValidationData *param_1)

{
  if (param_1->ParameterStructSize == 0x30) {
    if (this->bIsBufferSizeValid == false) {
      if (1 < (byte)LogPCG._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      }
    }
    else if ((this->PinDesc).Object == (FPCGDataCollectionDesc *)0x0) {
      if (1 < (byte)LogPCG._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        return false;
      }
    }
    else {
      if ((this->bProducedByCPU == false) ||
         ((this->DataAdaptor).Object != (FPCGDataUploadAdaptor *)0x0)) {
        return true;
      }
      if (2 < (byte)LogPCG._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        return false;
      }
    }
  }
  return false;
}

