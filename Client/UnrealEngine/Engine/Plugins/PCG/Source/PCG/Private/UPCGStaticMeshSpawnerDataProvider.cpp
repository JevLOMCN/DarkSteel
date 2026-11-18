// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 12

// StaticClass @ 14972d410

UClass * __cdecl UPCGStaticMeshSpawnerDataProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGStaticMeshSpawnerDataProvider.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGStaticMeshSpawnerDataProvider",
               &Z_Registration_Info_UClass_UPCGStaticMeshSpawnerDataProvider.InnerSingleton,
               StaticRegisterNativesUPCGStaticMeshSpawnerDataProvider,0x170,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGStaticMeshSpawnerDataProvider>,
               InternalVTableHelperCtorCaller<UPCGStaticMeshSpawnerDataProvider>,local_res8,
               UPCGComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGStaticMeshSpawnerDataProvider.InnerSingleton;
}

// UPCGStaticMeshSpawnerDataProvider @ 14973c990

UPCGStaticMeshSpawnerDataProvider * __thiscall
UPCGStaticMeshSpawnerDataProvider::UPCGStaticMeshSpawnerDataProvider
          (UPCGStaticMeshSpawnerDataProvider *this,FVTableHelper *param_1)

{
  UPCGComputeDataProvider::UPCGComputeDataProvider((UPCGComputeDataProvider *)this,param_1);
  this->SelectorAttributeId = -1;
  this->_padding_ = (longlong)&___7UPCGStaticMeshSpawnerDataProvider__6B_;
  (this->AttributeIdOffsetStrides).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttributeIdOffsetStrides).ArrayNum = 0;
  (this->AttributeIdOffsetStrides).ArrayMax = 0;
  (this->PrimitiveStringKeys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrimitiveStringKeys).ArrayNum = 0;
  (this->PrimitiveStringKeys).ArrayMax = 0;
  (this->PrimitiveMeshBounds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrimitiveMeshBounds).ArrayNum = 0;
  (this->PrimitiveMeshBounds).ArrayMax = 0;
  (this->PrimitiveSelectionCDF).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrimitiveSelectionCDF).ArrayNum = 0;
  (this->PrimitiveSelectionCDF).ArrayMax = 0;
  *(undefined8 *)&this->StringKeyToInstanceCount = 0;
  *(undefined8 *)&(this->StringKeyToInstanceCount).field_0x8 = 0;
  *(undefined8 *)&(this->StringKeyToInstanceCount).field_0x20 = 0;
  this->NumInputPoints = 0;
  this->SelectedMeshAttributeId = -1;
  *(undefined4 *)&(this->StringKeyToInstanceCount).field_0x28 = 0;
  *(undefined4 *)&(this->StringKeyToInstanceCount).field_0x2c = 0x80;
  *(undefined4 *)&(this->StringKeyToInstanceCount).field_0x34 = 0;
  *(undefined4 *)&(this->StringKeyToInstanceCount).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->StringKeyToInstanceCount).field_0x40 = 0;
  *(undefined4 *)&(this->StringKeyToInstanceCount).field_0x48 = 0;
  this->bPrimitiveDescriptorsCreated = false;
  (this->PrimitiveDescriptors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrimitiveDescriptors).ArrayNum = 0;
  (this->PrimitiveDescriptors).ArrayMax = 0;
  this->CustomFloatCount = 0;
  this->bRegisteredPrimitives = false;
  this->bStaticMeshesLoaded = false;
  this->bPrimitivesSetUp = false;
  this->NumPrimitivesSetup = 0;
  (this->LoadHandle).Object = (FStreamableHandle *)0x0;
  (this->LoadHandle).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->AnalysisDataIndex = -1;
  return this;
}

// UPCGStaticMeshSpawnerDataProvider @ 14973caa0

UPCGStaticMeshSpawnerDataProvider * __thiscall
UPCGStaticMeshSpawnerDataProvider::UPCGStaticMeshSpawnerDataProvider
          (UPCGStaticMeshSpawnerDataProvider *this,FObjectInitializer *param_1)

{
  UPCGComputeDataProvider::UPCGComputeDataProvider((UPCGComputeDataProvider *)this,param_1);
  this->SelectorAttributeId = -1;
  this->_padding_ = (longlong)&___7UPCGStaticMeshSpawnerDataProvider__6B_;
  (this->AttributeIdOffsetStrides).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttributeIdOffsetStrides).ArrayNum = 0;
  (this->AttributeIdOffsetStrides).ArrayMax = 0;
  (this->PrimitiveStringKeys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrimitiveStringKeys).ArrayNum = 0;
  (this->PrimitiveStringKeys).ArrayMax = 0;
  (this->PrimitiveMeshBounds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrimitiveMeshBounds).ArrayNum = 0;
  (this->PrimitiveMeshBounds).ArrayMax = 0;
  (this->PrimitiveSelectionCDF).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrimitiveSelectionCDF).ArrayNum = 0;
  (this->PrimitiveSelectionCDF).ArrayMax = 0;
  *(undefined8 *)&this->StringKeyToInstanceCount = 0;
  *(undefined8 *)&(this->StringKeyToInstanceCount).field_0x8 = 0;
  *(undefined8 *)&(this->StringKeyToInstanceCount).field_0x20 = 0;
  this->NumInputPoints = 0;
  this->SelectedMeshAttributeId = -1;
  *(undefined4 *)&(this->StringKeyToInstanceCount).field_0x28 = 0;
  *(undefined4 *)&(this->StringKeyToInstanceCount).field_0x2c = 0x80;
  *(undefined4 *)&(this->StringKeyToInstanceCount).field_0x34 = 0;
  *(undefined4 *)&(this->StringKeyToInstanceCount).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->StringKeyToInstanceCount).field_0x40 = 0;
  *(undefined4 *)&(this->StringKeyToInstanceCount).field_0x48 = 0;
  this->bPrimitiveDescriptorsCreated = false;
  (this->PrimitiveDescriptors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrimitiveDescriptors).ArrayNum = 0;
  (this->PrimitiveDescriptors).ArrayMax = 0;
  this->CustomFloatCount = 0;
  this->bRegisteredPrimitives = false;
  this->bStaticMeshesLoaded = false;
  this->bPrimitivesSetUp = false;
  this->NumPrimitivesSetup = 0;
  (this->LoadHandle).Object = (FStreamableHandle *)0x0;
  (this->LoadHandle).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->AnalysisDataIndex = -1;
  return this;
}

// ~UPCGStaticMeshSpawnerDataProvider @ 14973e940

void __thiscall
UPCGStaticMeshSpawnerDataProvider::~UPCGStaticMeshSpawnerDataProvider
          (UPCGStaticMeshSpawnerDataProvider *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UPCGStaticMeshSpawnerDataProvider__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LoadHandle).SharedReferenceCount.ReferenceController);
  DestructItems<FPCGProceduralISMComponentDescriptor,int>
            ((FPCGProceduralISMComponentDescriptor *)
             (this->PrimitiveDescriptors).AllocatorInstance.Data,
             (this->PrimitiveDescriptors).ArrayNum);
  pFVar1 = (this->PrimitiveDescriptors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->StringKeyToInstanceCount).field_0x48 = 0;
  pvVar2 = *(void **)&(this->StringKeyToInstanceCount).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StringKeyToInstanceCount);
  pFVar1 = (this->PrimitiveSelectionCDF).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PrimitiveMeshBounds).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PrimitiveStringKeys).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AttributeIdOffsetStrides).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UPCGComputeDataProvider__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UComputeDataProvider::~UComputeDataProvider((UComputeDataProvider *)this);
  return;
}

// CreatePrimitiveDescriptors @ 14974d2b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014974e2ac) */
/* WARNING: Removing unreachable block (ram,0x00014974d5b7) */
/* WARNING: Removing unreachable block (ram,0x00014974d5dc) */
/* WARNING: Removing unreachable block (ram,0x00014974eb0c) */
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
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UPCGStaticMeshSpawnerDataProvider::CreatePrimitiveDescriptors
          (UPCGStaticMeshSpawnerDataProvider *this,FPCGContext *param_1,UPCGDataBinding *param_2)

{
  TMap<int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,unsigned_int,0>_>
  *pTVar1;
  TArray<FPCGProceduralISMComponentDescriptor,TSizedDefaultAllocator<32>_> *pTVar2;
  UObject *pUVar3;
  UPCGComputeKernel *pUVar4;
  UPCGInstanceDataPackerBase *pUVar5;
  code *pcVar6;
  TSoftObjectPtr<UStaticMesh> *pTVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  FName FVar13;
  FPCGContext *pFVar14;
  UPCGStaticMeshSpawnerDataProvider *pUVar15;
  UPCGStaticMeshSpawnerSettings *pUVar16;
  UPCGDataBinding *pUVar17;
  TMap<int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,unsigned_int,0>_>
  *pTVar18;
  FPCGMetadataDomainID FVar19;
  bool bVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  UPCGSettings *pUVar24;
  UPCGStaticMeshSpawnerSettings *pUVar25;
  FText *pFVar26;
  FTextFormat *pFVar27;
  undefined1 (*pauVar28) [16];
  FText *pFVar29;
  FString *pFVar30;
  UClass *pUVar31;
  TIntVector4<int> *pTVar32;
  longlong *plVar33;
  double *pdVar34;
  FPCGSpawnerPrimitives *pFVar35;
  TRefCountPtr<ITextData> TVar36;
  uint *puVar37;
  longlong lVar38;
  ulonglong uVar39;
  undefined8 uVar40;
  ForAnyElementType FVar41;
  undefined1 *puVar42;
  int iVar43;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar44;
  FProceduralISMComponentDescriptor *pFVar45;
  FSoftISMComponentDescriptor *pFVar46;
  uint uVar47;
  FPCGAttributePropertySelector *pFVar48;
  int *piVar49;
  longlong lVar50;
  UPCGStaticMeshSpawnerDataProvider *pUVar51;
  FPCGAttributePropertySelector *this_00;
  FScriptContainerElement *pFVar52;
  FScriptContainerElement *pFVar53;
  FSoftISMComponentDescriptor *pFVar54;
  undefined1 *puVar55;
  UPCGMeshSelectorBase *pUVar56;
  undefined1 *puVar57;
  TObjectPtr<UPCGMeshSelectorBase>_u_0 *pTVar58;
  FPCGKernelAttributeDesc *pFVar59;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar60;
  UPCGStaticMeshSpawnerDataProvider *pUVar61;
  undefined1 auVar62 [16];
  undefined4 uVar63;
  float fVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  float fVar67;
  float fVar68;
  double dVar69;
  undefined1 auStackY_798 [32];
  undefined1 local_748;
  undefined1 local_747;
  undefined1 local_746;
  undefined1 local_745;
  float local_744;
  FPCGContext *local_740;
  UPCGStaticMeshSpawnerDataProvider *local_738;
  undefined4 local_730 [2];
  FSoftISMComponentDescriptor *local_728;
  uint local_720;
  TObjectPtr<UPCGMeshSelectorBase>_u_0 *local_718;
  UPCGStaticMeshSpawnerSettings *local_710;
  uint local_708 [2];
  FSoftISMComponentDescriptor *local_700;
  FName local_6f8 [2];
  TSharedPtr<FPCGDataCollectionDesc_const_,1> local_6e8;
  UPCGDataBinding *local_6d8;
  TObjectPtr<UPCGMeshSelectorBase>_u_0 *local_6d0;
  undefined4 local_6c8;
  int local_6c4;
  UPCGMeshSelectorBase *local_6c0;
  undefined1 local_6b8 [16];
  FName local_6a8;
  FString local_6a0;
  FString local_690;
  FString local_680;
  FSoftObjectPath local_670;
  UObject *local_650;
  int local_648;
  FPCGKernelAttributeDesc *local_640;
  TObjectPtr<UPCGMeshSelectorBase>_u_0 *local_638;
  int local_630;
  TMap<int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,unsigned_int,0>_>
  *local_628;
  int iStack_620;
  uint uStack_61c;
  undefined1 *local_618;
  undefined4 uStack_610;
  int iStack_60c;
  int local_608;
  undefined4 uStack_604;
  int iStack_600;
  undefined4 uStack_5fc;
  TMap<int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,unsigned_int,0>_>
  *local_5f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_5f0;
  undefined8 uStack_5d0;
  undefined8 local_5c8;
  undefined4 uStack_5c0;
  uint *local_5b8;
  undefined4 *local_5b0;
  wchar_t *local_5a8;
  int iStack_5a0;
  undefined4 uStack_59c;
  FString local_598;
  FText local_588;
  FText local_578;
  FText local_568;
  FString local_558;
  FText local_548;
  FText local_538;
  FText local_528;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> local_518;
  TArrayView<FPCGAttributePropertyInputSelector_const_,int> local_508;
  FText local_4f8;
  FText local_4e8;
  TStringView<wchar_t> local_4d8;
  FText local_4c8;
  FText local_4b8;
  FText local_4a8;
  FName local_498;
  FPCGMetadataDomainID FStack_490;
  FPCGAttributeIdentifier local_478;
  FText local_458;
  FText local_448;
  FText local_438;
  FTextFormat local_428;
  FTextFormat local_418;
  FTextFormat local_408;
  FText local_3f8;
  FTextFormat local_3e8;
  FText local_3d8;
  FTextFormat local_3c8;
  FText local_3b8;
  FTextFormat local_3a8;
  FText local_398;
  FTextFormat local_388;
  TIntVector4<int> local_378;
  undefined1 local_368 [16];
  FText local_358;
  FTextFormat local_348;
  FText local_338 [2];
  undefined4 local_30c;
  undefined1 local_308 [40];
  void *local_2e0;
  ForAnyElementType local_2d0;
  ForAnyElementType local_2b8;
  uint local_2a8;
  uint local_2a4;
  TVector<double>_u_0 local_2a0;
  TVector<double>_u_0 TStack_288;
  double local_270;
  TArray<FName,TSizedDefaultAllocator<32>_> local_238;
  undefined1 local_228 [40];
  FScriptContainerElement *local_200;
  ForAnyElementType local_1f0;
  ForAnyElementType local_1d8;
  uint local_1c8;
  uint local_1c4;
  TVector<double>_u_0 local_1c0;
  TVector<double>_u_0 TStack_1a8;
  double local_190;
  TArray<FName,TSizedDefaultAllocator<32>_> local_158 [4];
  undefined1 local_110 [56];
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_798;
  pFVar54 = (FSoftISMComponentDescriptor *)&this->PrimitiveDescriptors;
  local_740 = param_1;
  local_738 = this;
  local_700 = pFVar54;
  local_6d8 = param_2;
  DestructItems<FPCGProceduralISMComponentDescriptor,int>
            ((FPCGProceduralISMComponentDescriptor *)
             (((TArray<FPCGProceduralISMComponentDescriptor,TSizedDefaultAllocator<32>_> *)pFVar54)
             ->AllocatorInstance).Data,(this->PrimitiveDescriptors).ArrayNum);
  local_6c0 = (UPCGMeshSelectorBase *)&(this->PrimitiveDescriptors).ArrayMax;
  (this->PrimitiveDescriptors).ArrayNum = 0;
  if (*(int *)local_6c0 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xe0,8,0,(ForAnyElementType *)pFVar54,0,(int *)local_6c0);
  }
  pUVar3 = (UObject *)this->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  pUVar24 = (UPCGSettings *)(**(code **)(*(longlong *)pUVar3 + 0x2b0))(pUVar3);
  pUVar25 = CastChecked<UPCGStaticMeshSpawnerSettings,UPCGSettings_const_>(pUVar24);
  FVar13 = PCGPinConstants::DefaultInputLabel;
  pTVar58 = &(pUVar25->MeshSelectorParameters).field0_0x0;
  local_710 = pUVar25;
  local_6d0 = pTVar58;
  if ((((TObjectPtr<UPCGMeshSelectorBase> *)pTVar58)->field0_0x0).DebugPtr ==
      (UPCGMeshSelectorBase *)0x0) {
    bVar20 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<1579353040601743886>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\Elements\\PCGStaticMeshSpawnerDataInterface.cpp"
                        ,0x20e,"Settings->MeshSelectorParameters");
    if (!bVar20) {
      return;
    }
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pUVar4 = (UPCGComputeKernel *)this->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UPCGComputeKernel *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  UPCGDataBinding::GetCachedKernelPinDataDesc(local_6d8,&local_6e8,pUVar4,FVar13,true);
  if (local_6e8.Object == (FPCGDataCollectionDesc *)0x0) {
    bVar20 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<1579353040601743893>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\Elements\\PCGStaticMeshSpawnerDataInterface.cpp"
                        ,0x215,"InputDataDesc");
    if (bVar20) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    if ((local_6e8.Object == (FPCGDataCollectionDesc *)0x0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar20)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar21 = FPCGDataCollectionDesc::ComputeTotalElementCount(local_6e8.Object);
    local_720 = uVar21;
    if (uVar21 != 0) {
      if (uVar21 < 0x1000000) {
        if (((local_740->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0) &&
           (bVar20 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_740->ExecutionSource), bVar20)
           ) {
          pUVar5 = (pUVar25->InstanceDataPackerParameters).field0_0x0.DebugPtr;
          if (pUVar5 == (UPCGInstanceDataPackerBase *)0x0) {
            local_5c8 = 0;
            pauVar28 = (undefined1 (*) [16])&local_5c8;
            uStack_5c0 = 0xffffffff;
          }
          else {
            pauVar28 = (undefined1 (*) [16])
                       (**(code **)(*(longlong *)pUVar5 + 0x2c0))(pUVar5,local_368);
          }
          pUVar16 = local_710;
          pFVar14 = local_740;
          this_00 = (FPCGAttributePropertySelector *)0x0;
          iVar23 = -1;
          local_6b8._0_12_ = ZEXT412(0xffffffff) << 0x40;
          auVar62 = local_6b8;
          if (*(int *)(*pauVar28 + 8) == -1) {
            uVar63 = 0;
            uVar65 = 0;
            local_6b8._8_4_ = -1;
            iVar43 = local_6b8._8_4_;
            uVar66 = local_6b8._12_4_;
            local_6b8 = auVar62;
          }
          else {
            local_6b8 = *pauVar28;
            uVar63 = local_6b8._0_4_;
            uVar65 = local_6b8._4_4_;
            iVar23 = *(int *)(*pauVar28 + 8);
            this_00 = local_6b8._0_8_;
            iVar43 = local_6b8._8_4_;
            uVar66 = local_6b8._12_4_;
          }
          if (iVar23 != -1) {
            pFVar48 = this_00 + iVar23;
            local_508.DataPtr._0_4_ = uVar63;
            local_508.DataPtr._4_4_ = uVar65;
            local_508.ArrayNum = iVar43;
            local_508._12_4_ = uVar66;
            if (this_00 != pFVar48) {
              do {
                local_6f8[0] = this_00->AttributeName;
                bVar20 = FPCGAttributePropertySelector::IsBasicAttribute(this_00);
                if ((bVar20) && (local_6f8[0] != PCGMetadataAttributeConstants::LastAttributeName))
                {
                  if (local_6f8[0] == (FName)0x0) {
                    pFVar26 = FText::FromName(&local_358,local_6f8);
                    pFVar29 = FText::AsLocalizable_Advanced_LocText
                                        (&local_588,L"PCGStaticMeshSpawnerDataInterface",
                                         L"InstanceDataAttributeInvalid",
                                         L"Invalid instance data attribute specified \'{0}\'.");
                    pFVar27 = FTextFormat::FTextFormat(&local_348,pFVar29,Default);
                    pFVar26 = FText::Format<FText>(&local_438,pFVar27,pFVar26);
                    PCGComputeHelpers::LogKernelError(pFVar14,(UPCGSettings *)pUVar16,pFVar26);
                    TVar36.Reference = local_588.TextData.Reference;
                    if (local_438.TextData.Reference != (ITextData *)0x0) {
                      (**(code **)((longlong)*local_438.TextData.Reference + 0x10))();
                      TVar36.Reference = local_588.TextData.Reference;
                    }
                    goto LAB_14974d864;
                  }
                  if ((local_6e8.Object == (FPCGDataCollectionDesc *)0x0) &&
                     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x458,L""), bVar20)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  local_498 = local_6f8[0];
                  FStack_490 = PCGMetadataDomainID::Default;
                  FVar19 = FStack_490;
                  FStack_490._0_8_ = PCGMetadataDomainID::Default._0_8_;
                  local_478.Name = local_6f8[0];
                  local_478.MetadataDomain.Flag = FStack_490.Flag;
                  local_478.MetadataDomain._1_3_ = FStack_490._1_3_;
                  local_478.MetadataDomain.CustomFlag = FStack_490.CustomFlag;
                  local_478.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
                  FStack_490 = FVar19;
                  bVar20 = FPCGDataCollectionDesc::ContainsAttributeOnAnyData
                                     (local_6e8.Object,&local_478);
                  if (!bVar20) {
                    pFVar26 = FText::FromName(local_338,local_6f8);
                    pFVar29 = FText::AsLocalizable_Advanced_LocText
                                        (&local_568,L"PCGStaticMeshSpawnerDataInterface",
                                         L"InstanceDataAttributeNotFound",
                                         L"Instance data attribute \'{0}\' not found.");
                    pFVar27 = FTextFormat::FTextFormat(&local_428,pFVar29,Default);
                    pFVar26 = FText::Format<FText>(&local_578,pFVar27,pFVar26);
                    PCGComputeHelpers::LogKernelError(pFVar14,(UPCGSettings *)pUVar16,pFVar26);
                    TVar36.Reference = local_568.TextData.Reference;
                    if (local_578.TextData.Reference != (ITextData *)0x0) {
                      (**(code **)((longlong)*local_578.TextData.Reference + 0x10))();
                      TVar36.Reference = local_568.TextData.Reference;
                    }
                    goto LAB_14974d864;
                  }
                }
                else {
                  pFVar30 = FPCGAttributePropertySelector::ToString(this_00,&local_558,false);
                  FText::FromString(&local_548,pFVar30);
                  if (local_558.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_558.Data.AllocatorInstance.Data);
                  }
                  pFVar26 = FText::AsLocalizable_Advanced_LocText
                                      (&local_528,L"PCGStaticMeshSpawnerDataInterface",
                                       L"OnlyBasicAttributesSupported",
                                       L"Attribute \'{0}\' is invalid. GPU instance packer implementation currently only supports basic attributes."
                                      );
                  pFVar27 = FTextFormat::FTextFormat(&local_418,pFVar26,Default);
                  pFVar26 = FText::Format<FText>(&local_538,pFVar27,&local_548);
                  PCGComputeHelpers::LogKernelError(pFVar14,(UPCGSettings *)pUVar16,pFVar26);
                  TVar36.Reference = local_528.TextData.Reference;
                  if (local_538.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_538.TextData.Reference + 0x10))();
                    TVar36.Reference = local_528.TextData.Reference;
                  }
LAB_14974d864:
                  if (TVar36.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*TVar36.Reference + 0x10))();
                  }
                }
                this_00 = this_00 + 1;
              } while (this_00 != pFVar48);
              pTVar58 = local_6d0;
              local_508.DataPtr._0_4_ = local_6b8._0_4_;
              local_508.DataPtr._4_4_ = local_6b8._4_4_;
              local_508.ArrayNum = local_6b8._8_4_;
              local_508._12_4_ = local_6b8._12_4_;
            }
            pUVar25 = local_710;
            local_518.Object = local_6e8.Object;
            local_518.SharedReferenceCount.ReferenceController =
                 local_6e8.SharedReferenceCount.ReferenceController;
            if (local_6e8.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_6e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_6e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            PCGMeshSpawnerPackingHelpers::ComputeCustomFloatPacking
                      (local_740,(UPCGSettings *)local_710,&local_508,&local_518,
                       &this->CustomFloatCount,&this->AttributeIdOffsetStrides);
          }
          pUVar56 = (UPCGMeshSelectorBase *)&(this->PrimitiveDescriptors).ArrayMax;
          if (pTVar58->DebugPtr != (UPCGMeshSelectorBase *)0x0) {
            pUVar31 = Z_Construct_UClass_UPCGMeshSelectorByAttribute_NoRegister();
            bVar20 = FObjectPtr::IsA(&pTVar58->ObjectPtr,pUVar31);
            if ((bVar20) &&
               (pFVar46 = (FSoftISMComponentDescriptor *)pTVar58->DebugPtr,
               pFVar46 != (FSoftISMComponentDescriptor *)0x0)) {
              local_6a8 = (FName)pFVar46->_padding_;
              local_728 = pFVar46;
              if (*(int *)&(this->StringKeyToInstanceCount).field_0x8 ==
                  *(int *)&(this->StringKeyToInstanceCount).field_0x34) {
                if ((local_6e8.Object == (FPCGDataCollectionDesc *)0x0) &&
                   (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar20)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                iVar23 = ((local_6e8.Object)->DataDescs).ArrayNum;
                pTVar58 = (TObjectPtr<UPCGMeshSelectorBase>_u_0 *)
                          ((local_6e8.Object)->DataDescs).AllocatorInstance.Data;
                local_6d0 = pTVar58;
                if ((iVar23 < 0) &&
                   (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                       ("InCount >= 0",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0xeb,L""), bVar20)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                local_638 = pTVar58 + (longlong)iVar23 * 0xd;
                local_728 = pFVar46;
                if (pTVar58 != local_638) {
                  local_718 = pTVar58 + 3;
                  do {
                    if (0 < *(int *)local_718) {
                      iVar23 = *(int *)(local_718 + 4);
                      pFVar59 = (FPCGKernelAttributeDesc *)local_718[3].DebugPtr;
                      if ((iVar23 < 0) &&
                         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                             ("InCount >= 0",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                              ,0xeb,L""), bVar20)) {
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                      local_640 = pFVar59 + iVar23;
                      if (pFVar59 != local_640) {
                        piVar49 = &(pFVar59->UniqueStringKeys).ArrayNum;
                        do {
                          if (*(FName *)(piVar49 + -0x1a) == local_6a8) {
                            if ((char)piVar49[-0x14] == '\n') {
                              pFVar52 = (((TArray<int,TSizedDefaultAllocator<32>_> *)(piVar49 + -2))
                                        ->AllocatorInstance).Data;
                              iVar23 = *piVar49;
                              pFVar53 = pFVar52 + (longlong)iVar23 * 4;
                              while( true ) {
                                if (*piVar49 != iVar23) {
                                  local_748 = 0;
                                  `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::
                                  <lambda_1>::operator()(&local_748);
                                }
                                if (pFVar52 == pFVar53) break;
                                local_708[0] = *(uint *)pFVar52;
                                if (0 < (int)local_708[0]) {
                                  pTVar32 = FPCGDataDesc::GetElementCountForAttribute
                                                      ((FPCGDataDesc *)&pTVar58->ObjectPtr,
                                                       &local_378,pFVar59);
                                  iVar43 = (pTVar32->field0_0x0)._s_0.X;
                                  local_6c8 = 0;
                                  pTVar1 = &local_738->StringKeyToInstanceCount;
                                  if (*(int *)&(local_738->StringKeyToInstanceCount).field_0x8 !=
                                      *(int *)&(local_738->StringKeyToInstanceCount).field_0x34) {
                                    puVar57 = *(undefined1 **)
                                               &(local_738->StringKeyToInstanceCount).field_0x40;
                                    puVar42 = &(local_738->StringKeyToInstanceCount).field_0x38;
                                    if (puVar57 != (undefined1 *)0x0) {
                                      puVar42 = puVar57;
                                    }
                                    uVar21 = *(uint *)(puVar42 +
                                                      (ulonglong)
                                                      (*(int *)&(local_738->StringKeyToInstanceCount
                                                                ).field_0x48 - 1U & local_708[0]) *
                                                      4);
                                    if (uVar21 != 0xffffffff) {
                                      do {
                                        puVar37 = (uint *)((longlong)(int)uVar21 * 0x10 +
                                                          *(longlong *)&pTVar1->field_0x0);
                                        if (*puVar37 == local_708[0]) {
                                          if (puVar37 != (uint *)0x0) goto LAB_14974db27;
                                          break;
                                        }
                                        uVar21 = puVar37[2];
                                      } while (uVar21 != 0xffffffff);
                                    }
                                  }
                                  local_5b8 = local_708;
                                  local_5b0 = &local_6c8;
                                  TSet<TTuple<int,unsigned_int>,TDefaultMapHashableKeyFuncs<int,unsigned_int,0>,FDefaultSetAllocator>
                                  ::EmplaceByHash<TPairInitializer<int_const_&,unsigned_int_&&>_>
                                            ((TSet<TTuple<int,unsigned_int>,TDefaultMapHashableKeyFuncs<int,unsigned_int,0>,FDefaultSetAllocator>
                                              *)pTVar1,(uint)&local_6c4,
                                             (TPairInitializer<int_const_&,unsigned_int_&&> *)
                                             (ulonglong)local_708[0],(bool *)&local_5b8);
                                  puVar37 = (uint *)((longlong)local_6c4 * 0x10 +
                                                    *(longlong *)&pTVar1->field_0x0);
LAB_14974db27:
                                  puVar37[1] = puVar37[1] + iVar43;
                                  pTVar58 = local_6d0;
                                }
                                pFVar52 = pFVar52 + 4;
                              }
                            }
                            else {
                              pFVar26 = FText::FromName(&local_3f8,&local_6a8);
                              pFVar29 = FText::AsLocalizable_Advanced_LocText
                                                  (&local_4e8,L"PCGStaticMeshSpawnerDataInterface",
                                                   L"MeshSelectorAttributeNotUsable",
                                                                                                      
                                                  L"Attribute \'{0}\' not usable for mesh selection, only attributes of type String Key are supported."
                                                  );
                              pFVar27 = FTextFormat::FTextFormat(&local_3e8,pFVar29,Default);
                              pFVar26 = FText::Format<FText>(&local_4f8,pFVar27,pFVar26);
                              PCGComputeHelpers::LogKernelWarning
                                        (local_740,(UPCGSettings *)local_710,pFVar26);
                              if (local_4f8.TextData.Reference != (ITextData *)0x0) {
                                (**(code **)((longlong)*local_4f8.TextData.Reference + 0x10))();
                              }
                              if (local_4e8.TextData.Reference != (ITextData *)0x0) {
                                (**(code **)((longlong)*local_4e8.TextData.Reference + 0x10))();
                              }
                            }
                          }
                          pFVar59 = pFVar59 + 1;
                          piVar49 = piVar49 + 0x1e;
                        } while (pFVar59 != local_640);
                      }
                    }
                    pTVar58 = pTVar58 + 0xd;
                    local_718 = local_718 + 0xd;
                    pFVar54 = local_700;
                    pUVar56 = local_6c0;
                    this = local_738;
                    local_6d0 = pTVar58;
                  } while (pTVar58 != local_638);
                }
              }
              uVar21 = *(int *)&(this->StringKeyToInstanceCount).field_0x8 -
                       *(int *)&(this->StringKeyToInstanceCount).field_0x34;
              if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
              }
              if (*(int *)pUVar56 < (int)uVar21) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0xe0,8,uVar21,(ForAnyElementType *)pFVar54,(int)pFVar54->_padding_,
                           (int *)pUVar56);
              }
              puVar57 = &(this->StringKeyToInstanceCount).field_0x10;
              iStack_620 = 0;
              iVar23 = *(int *)&(this->StringKeyToInstanceCount).field_0x28;
              pTVar1 = &this->StringKeyToInstanceCount;
              local_608 = 0;
              uStack_61c = 1;
              iStack_60c = 0;
              if (iVar23 != 0) {
                puVar37 = *(uint **)&(this->StringKeyToInstanceCount).field_0x20;
                if (puVar37 == (uint *)0x0) {
                  puVar37 = (uint *)puVar57;
                }
                uVar21 = *puVar37;
                while (uVar21 == 0) {
                  lVar38 = (longlong)iStack_620;
                  local_608 = local_608 + 0x20;
                  iStack_620 = iStack_620 + 1;
                  iStack_60c = iVar23;
                  if ((int)(iVar23 + -1 + (iVar23 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_620)
                  goto LAB_14974dccd;
                  uVar21 = puVar37[lVar38 + 1];
                }
                uStack_61c = -uVar21 & uVar21;
                uVar39 = (ulonglong)uStack_61c * 2 + 1;
                lVar38 = 0x3f;
                if (uVar39 != 0) {
                  for (; uVar39 >> lVar38 == 0; lVar38 = lVar38 + -1) {
                  }
                }
                local_648 = (int)lVar38;
                iStack_60c = local_648 + -1 + local_608;
                if (iVar23 < iStack_60c) {
                  iStack_60c = iVar23;
                }
              }
LAB_14974dccd:
              uStack_604 = local_30c;
              iStack_600 = *(int *)&(this->StringKeyToInstanceCount).field_0x8 -
                           *(int *)&(this->StringKeyToInstanceCount).field_0x34;
              uVar21 = *(uint *)&(this->StringKeyToInstanceCount).field_0x28;
              uStack_610 = 0xffffffff;
              uVar47 = uVar21 & 0xffffffe0;
              TStack_5f0._padding_ = CONCAT44(uStack_61c,iStack_620);
              TStack_5f0.CurrentBitIndex = iStack_60c;
              TStack_5f0.UnvisitedBitMask = 0xffffffff;
              iVar43 = (int)uVar21 >> 5;
              TStack_5f0._28_4_ = local_30c;
              TStack_5f0.BaseBitIndex = local_608;
              uStack_5d0 = CONCAT44(uStack_5fc,iStack_600);
              local_628 = pTVar1;
              local_618 = puVar57;
              local_5f8 = pTVar1;
              TStack_5f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar57;
              if ((((int)uVar21 < 0) || (iVar23 < (int)uVar21)) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                      ,0x7af,L""), bVar20)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              uVar22 = *(uint *)&(this->StringKeyToInstanceCount).field_0x28;
              if (uVar21 != uVar22) {
                puVar42 = *(undefined1 **)&(this->StringKeyToInstanceCount).field_0x20;
                puVar55 = puVar57;
                if (puVar42 != (undefined1 *)0x0) {
                  puVar55 = puVar42;
                }
                uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)(puVar55 + (longlong)iVar43 * 4);
                while (uVar21 == 0) {
                  lVar38 = (longlong)iVar43;
                  uVar47 = uVar47 + 0x20;
                  iVar43 = iVar43 + 1;
                  uVar21 = uVar22;
                  if ((int)((uVar22 - 1) + ((int)(uVar22 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar43)
                  goto LAB_14974de10;
                  uVar21 = *(uint *)(puVar55 + lVar38 * 4 + 4);
                }
                uVar39 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
                lVar38 = 0x3f;
                if (uVar39 != 0) {
                  for (; uVar39 >> lVar38 == 0; lVar38 = lVar38 + -1) {
                  }
                }
                local_630 = (int)lVar38;
                uVar21 = (uVar47 - 1) + local_630;
                if ((int)uVar22 < (int)uVar21) {
                  uVar21 = uVar22;
                }
              }
LAB_14974de10:
              do {
                pTVar18 = local_5f8;
                if (*(int *)&local_5f8->field_0x8 - *(int *)&local_5f8->field_0x34 !=
                    (int)uStack_5d0) {
                  local_747 = 0;
                  `TSparseArray<TSparseSetElement<TTuple<int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_747);
                }
                pUVar17 = local_6d8;
                if (((TStack_5f0.CurrentBitIndex == uVar21) &&
                    (TStack_5f0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar57)) &&
                   (pTVar18 == pTVar1)) {
LAB_14974e3bf:
                  pUVar61 = local_738;
                  TArray<float,TSizedDefaultAllocator<32>_>::SetNumZeroed
                            (&local_738->PrimitiveSelectionCDF,
                             (local_738->PrimitiveDescriptors).ArrayNum,Default);
                  goto LAB_14974ec29;
                }
                pFVar53 = (FScriptContainerElement *)
                          ((longlong)TStack_5f0.CurrentBitIndex * 0x10 + *(longlong *)pTVar18);
                if (*(uint *)(pFVar53 + 4) != 0) {
                  if ((local_6d8->bTablesInitialized == (atomic<bool>)0x0) &&
                     (bVar20 = UE::Assert::Private::ExecCheckImplInternal
                                         (&bGEnsureHasExecuted<_8122861073268211622>,false,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Compute\\PCGDataBinding.h"
                                          ,0x5a,"bTablesInitialized"), bVar20)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  if (((int)*(uint *)pFVar53 < 0) ||
                     ((pUVar17->StringTable).ArrayNum <= (int)*(uint *)pFVar53)) {
                    bVar20 = UE::Assert::Private::ExecCheckImplInternal
                                       (&bGEnsureHasExecuted<1579353040601744002>,false,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\Elements\\PCGStaticMeshSpawnerDataInterface.cpp"
                                        ,0x282,
                                        "InBinding->GetStringTable().IsValidIndex(StringKeyAndInstanceCount.Key)"
                                       );
                    if (bVar20) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                  }
                  else {
                    if ((pUVar17->bTablesInitialized == (atomic<bool>)0x0) &&
                       (bVar20 = UE::Assert::Private::ExecCheckImplInternal
                                           (&bGEnsureHasExecuted<_8122861073268211622>,false,
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Compute\\PCGDataBinding.h"
                                            ,0x5a,"bTablesInitialized"), bVar20)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    uVar47 = *(uint *)pFVar53;
                    lVar38 = (longlong)(int)uVar47;
                    uVar22 = 0;
                    if ((int)uVar47 < (pUVar17->StringTable).ArrayNum) {
                      uVar22 = ~uVar47 >> 0x1f;
                    }
                    if ((uVar22 == 0) &&
                       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar20)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    pFVar52 = (pUVar17->StringTable).AllocatorInstance.Data;
                    if (1 < *(int *)(pFVar52 + lVar38 * 0x10 + 8)) {
                      if (0xff < (local_738->PrimitiveDescriptors).ArrayNum) {
                        local_6a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                        local_6a0.Data.ArrayNum = 0;
                        local_6a0.Data.ArrayMax = 0;
                        ::FString::AppendInt(&local_6a0,0x100);
                        pFVar26 = FText::FromString(&local_3d8,&local_6a0);
                        pFVar27 = FTextFormat::FTextFormat
                                            (&local_3c8,
                                             &PCGStaticMeshSpawnerDataInterface::
                                              TooManyPrimitivesFormat,Default);
                        pFVar26 = FText::Format<FText>(&local_4c8,pFVar27,pFVar26);
                        PCGComputeHelpers::LogKernelWarning
                                  (local_740,(UPCGSettings *)local_710,pFVar26);
                        if (local_4c8.TextData.Reference != (ITextData *)0x0) {
                          (**(code **)((longlong)*local_4c8.TextData.Reference + 0x10))();
                        }
                        if (local_6a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_6a0.Data.AllocatorInstance.Data);
                        }
                        goto LAB_14974e3bf;
                      }
                      FProceduralISMComponentDescriptor::FProceduralISMComponentDescriptor
                                ((FProceduralISMComponentDescriptor *)local_308);
                      pFVar54 = local_728;
                      local_308._0_8_ = &___7FPCGProceduralISMComponentDescriptor__6B_;
                      local_238.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                      local_238.ArrayNum = 0;
                      local_238.ArrayMax = 0;
                      FProceduralISMComponentDescriptor::operator=
                                ((FProceduralISMComponentDescriptor *)local_308,
                                 (FSoftISMComponentDescriptor *)&local_728->_padding_);
                      TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                                (&local_238,
                                 (TArray<FName,TSizedDefaultAllocator<32>_> *)&pFVar54[1]._padding_)
                      ;
                      pFVar14 = local_740;
                      local_2a8 = *(uint *)(pFVar53 + 4);
                      if ((((local_740->ExecutionSource).InterfaceInstance ==
                            (IPCGGraphExecutionSource *)0x0) ||
                          (bVar20 = FWeakObjectPtr::IsValid
                                              ((FWeakObjectPtr *)&local_740->ExecutionSource),
                          !bVar20)) &&
                         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValid()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                                              ,0x8d,L""), bVar20)) {
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                      plVar33 = (longlong *)
                                (**(code **)((longlong)*(pFVar14->ExecutionSource).InterfaceInstance
                                            + 0x18))();
                      pdVar34 = (double *)(**(code **)(*plVar33 + 0x40))(plVar33);
                      pUVar61 = local_738;
                      local_670.AssetPath.PackageName.ComparisonIndex.Value = 0;
                      local_670.AssetPath.PackageName.Number = 0;
                      local_670.AssetPath.AssetName.ComparisonIndex.Value = 0;
                      local_670.AssetPath.AssetName.Number = 0;
                      local_2a0._s_0.X = *pdVar34;
                      local_2a0._s_0.Y = pdVar34[1];
                      local_670.SubPathString.Data.AllocatorInstance.Data =
                           (FScriptContainerElement *)0x0;
                      local_670.SubPathString.Data.ArrayNum = 0;
                      local_670.SubPathString.Data.ArrayMax = 0;
                      local_2a0._s_0.Z = pdVar34[2];
                      TStack_288._s_0.X = pdVar34[3];
                      TStack_288._s_0.Y = pdVar34[4];
                      TStack_288._s_0.Z = pdVar34[5];
                      local_270 = pdVar34[6];
                      local_2a4 = local_738->CustomFloatCount;
                      local_5a8 = *(wchar_t **)(pFVar52 + lVar38 * 0x10);
                      iStack_5a0 = *(int *)(pFVar52 + lVar38 * 0x10 + 8) + -1;
                      if (*(int *)(pFVar52 + lVar38 * 0x10 + 8) == 0) {
                        iStack_5a0 = 0;
                      }
                      local_4d8._12_4_ = uStack_59c;
                      local_4d8.Size = iStack_5a0;
                      local_4d8.DataPtr = local_5a8;
                      FSoftObjectPath::SetPath(&local_670,&local_4d8);
                      local_308._16_8_ = 0;
                      FSoftObjectPath::operator=((FSoftObjectPath *)(local_308 + 0x18),&local_670);
                      if (local_670.SubPathString.Data.AllocatorInstance.Data !=
                          (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_670.SubPathString.Data.AllocatorInstance.Data);
                      }
                      uVar47 = local_720;
                      if ((int)local_720 < (int)local_2a8) {
                        bVar20 = UE::Assert::Private::ExecCheckImplInternal
                                           (&bGEnsureHasExecuted<1579353040601744029>,false,
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\Elements\\PCGStaticMeshSpawnerDataInterface.cpp"
                                            ,0x29d,"Descriptor.NumInstances <= TotalInputPointCount"
                                           );
                        if (bVar20) {
                          pcVar6 = (code *)swi(3);
                          (*pcVar6)();
                          return;
                        }
                        local_2a8 = uVar47;
                      }
                      pTVar44 = &pUVar61->PrimitiveStringKeys;
                      pFVar52 = (pTVar44->AllocatorInstance).Data;
                      if (((pFVar52 <= pFVar53) &&
                          (pFVar53 < pFVar52 + (longlong)(pUVar61->PrimitiveStringKeys).ArrayMax * 4
                          )) && (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                                    (
                                                  "Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                  ), bVar20)) {
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                      iVar23 = (pUVar61->PrimitiveStringKeys).ArrayNum;
                      piVar49 = &(pUVar61->PrimitiveStringKeys).ArrayMax;
                      if (iVar23 == *piVar49) {
                        iVar23 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x404,&pTVar44->AllocatorInstance,piVar49);
                      }
                      pFVar54 = local_700;
                      (pUVar61->PrimitiveStringKeys).ArrayNum = iVar23 + 1;
                      *(uint *)((pTVar44->AllocatorInstance).Data + (longlong)iVar23 * 4) =
                           *(uint *)pFVar53;
                      if ((((undefined1 *)local_700->_padding_ <= local_308) &&
                          (local_308 <
                           (undefined1 *)local_700->_padding_ +
                           (longlong)*(int *)((longlong)&local_700->_padding_ + 4) * 0xe0)) &&
                         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar20)) {
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                      iVar23 = (int)pFVar54->_padding_;
                      if (iVar23 == *(int *)((longlong)&pFVar54->_padding_ + 4)) {
                        iVar23 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x8e0,(ForAnyElementType *)pFVar54,
                                            (int *)((longlong)&pFVar54->_padding_ + 4));
                      }
                      *(int *)&pFVar54->_padding_ = iVar23 + 1;
                      pFVar45 = (FProceduralISMComponentDescriptor *)
                                ((longlong)iVar23 * 0xe0 + pFVar54->_padding_);
                      FProceduralISMComponentDescriptor::FProceduralISMComponentDescriptor
                                (pFVar45,(FProceduralISMComponentDescriptor *)local_308);
                      pFVar45->_padding_ = (longlong)&___7FPCGProceduralISMComponentDescriptor__6B_;
                      pFVar45[1]._padding_ = 0;
                      pFVar45[1]._padding_ = (longlong)local_238.AllocatorInstance.Data;
                      pFVar45[1].Hash = local_238.ArrayNum;
                      pFVar45[1]._padding_ = local_238.ArrayMax;
                      local_238.ArrayNum = 0;
                      local_238.ArrayMax = 0;
                      local_238.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                      if (local_2b8.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_2b8.Data);
                      }
                      if (local_2d0.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_2d0.Data);
                      }
                      if (local_2e0 != (void *)0x0) {
                        FMemory::Free(local_2e0);
                      }
                    }
                  }
                }
                TStack_5f0.UnvisitedBitMask =
                     TStack_5f0.UnvisitedBitMask & ~TStack_5f0._padding_._4_4_;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_5f0);
              } while( true );
            }
          }
          pUVar61 = this;
          if ((pUVar25->MeshSelectorParameters).field0_0x0.DebugPtr != (UPCGMeshSelectorBase *)0x0)
          {
            pUVar31 = Z_Construct_UClass_UPCGMeshSelectorWeighted_NoRegister();
            bVar20 = FObjectPtr::IsA((FObjectPtr *)&pUVar25->MeshSelectorParameters,pUVar31);
            if ((bVar20) &&
               (pUVar56 = (pUVar25->MeshSelectorParameters).field0_0x0.DebugPtr, local_6c0 = pUVar56
               , pUVar56 != (UPCGMeshSelectorBase *)0x0)) {
              iVar23 = *(int *)&pUVar56[1].field_0x8;
              if (iVar23 == 0) {
                PCGComputeHelpers::LogKernelError
                          (local_740,(UPCGSettings *)pUVar25,
                           &PCGStaticMeshSpawnerDataInterface::NoMeshEntriesFormat);
              }
              else {
                lVar38 = *(longlong *)(pUVar56 + 1);
                fVar68 = 0.0;
                local_744 = 0.0;
                lVar50 = (longlong)iVar23 * 0x288 + lVar38;
                while( true ) {
                  if (*(int *)&pUVar56[1].field_0x8 != iVar23) {
                    local_746 = 0;
                    `TCheckedPointerIterator<FPCGMeshSelectorWeightedEntry_const_,int,0>::
                    operator!='::__l2::<lambda_1>::operator()(&local_746);
                  }
                  fVar8 = __real_322bcc77;
                  if (lVar38 == lVar50) break;
                  piVar49 = (int *)(lVar38 + 0x280);
                  lVar38 = lVar38 + 0x288;
                  fVar68 = fVar68 + (float)*piVar49;
                }
                if (__real_322bcc77 <= fVar68) {
                  uVar21 = *(uint *)&pUVar56[1].field_0x8;
                  pTVar60 = &this->PrimitiveSelectionCDF;
                  if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
                    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
                  }
                  if ((this->PrimitiveSelectionCDF).ArrayMax < (int)uVar21) {
                    UE::Core::Private::
                    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (4,4,uVar21,&pTVar60->AllocatorInstance,
                               (this->PrimitiveSelectionCDF).ArrayNum,
                               &(this->PrimitiveSelectionCDF).ArrayMax);
                  }
                  pUVar15 = local_738;
                  uVar21 = *(uint *)&pUVar56[1].field_0x8;
                  if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
                    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
                  }
                  if ((local_738->PrimitiveDescriptors).ArrayMax < (int)uVar21) {
                    UE::Core::Private::
                    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0xe0,8,uVar21,&(local_738->PrimitiveDescriptors).AllocatorInstance,
                               (local_738->PrimitiveDescriptors).ArrayNum,
                               &(local_738->PrimitiveDescriptors).ArrayMax);
                  }
                  dVar12 = __real_bfe0000000000000;
                  dVar11 = __real_4018000000000000;
                  fVar10 = __real_bf000000;
                  fVar9 = __real_3f800000;
                  uVar39 = (ulonglong)*(int *)&pUVar56[1].field_0x8;
                  pTVar2 = &pUVar15->PrimitiveDescriptors;
                  pFVar54 = *(FSoftISMComponentDescriptor **)(pUVar56 + 1);
                  pTVar7 = &pFVar54->StaticMesh;
                  dVar69 = (double)(int)local_720;
                  local_718 = (TObjectPtr<UPCGMeshSelectorBase>_u_0 *)
                              CONCAT44(local_718._4_4_,*(int *)&pUVar56[1].field_0x8);
                  pFVar46 = (FSoftISMComponentDescriptor *)(uVar39 * 0x288 + (longlong)pFVar54);
                  pUVar51 = pUVar15;
                  local_728 = pFVar46;
                  do {
                    puVar57 = &(pTVar7->SoftObjectPtr).field_0x8;
                    local_700 = pFVar54;
                    if (*(int *)&pUVar56[1].field_0x8 != (int)uVar39) {
                      local_745 = 0;
                      `TCheckedPointerIterator<FPCGMeshSelectorWeightedEntry_const_,int,0>::
                      operator!='::__l2::<lambda_1>::operator()(&local_745);
                    }
                    pUVar61 = local_738;
                    if (pFVar54 == pFVar46) goto LAB_14974ec29;
                    if (*(longlong *)puVar57 == 0) {
                      FSoftObjectPath::ToString((FSoftObjectPath *)puVar57,&local_598);
                      pFVar26 = FText::FromString(&local_3b8,&local_598);
                      pFVar27 = FTextFormat::FTextFormat
                                          (&local_3a8,
                                           &PCGStaticMeshSpawnerDataInterface::
                                            CouldNotLoadStaticMeshFormat,Default);
                      pFVar26 = FText::Format<FText>(&local_4b8,pFVar27,pFVar26);
                      PCGComputeHelpers::LogKernelError(local_740,(UPCGSettings *)local_710,pFVar26)
                      ;
                      FVar41.Data = local_598.Data.AllocatorInstance.Data;
                      if (local_4b8.TextData.Reference != (ITextData *)0x0) {
                        (**(code **)((longlong)*local_4b8.TextData.Reference + 0x10))();
                        FVar41.Data = local_598.Data.AllocatorInstance.Data;
                      }
LAB_14974eb3a:
                      pFVar46 = local_728;
                      if (FVar41.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(FVar41.Data);
                        pFVar46 = local_728;
                      }
                    }
                    else {
                      fVar67 = (float)*(int *)((longlong)puVar57 + 0x88);
                      fVar64 = fVar67 / fVar68;
                      if (fVar8 <= fVar64) {
                        if ((pUVar51->PrimitiveDescriptors).ArrayNum < 0x100) {
                          pFVar53 = (pTVar60->AllocatorInstance).Data;
                          local_744 = local_744 + fVar64;
                          if (((pFVar53 <= (FScriptContainerElement *)&local_744) &&
                              ((FScriptContainerElement *)&local_744 <
                               pFVar53 + (longlong)(this->PrimitiveSelectionCDF).ArrayMax * 4)) &&
                             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                 ), bVar20)) {
                            pcVar6 = (code *)swi(3);
                            (*pcVar6)();
                            return;
                          }
                          iVar23 = (this->PrimitiveSelectionCDF).ArrayNum;
                          if (iVar23 == (this->PrimitiveSelectionCDF).ArrayMax) {
                            iVar23 = UE::Core::Private::
                                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                               (0x404,&pTVar60->AllocatorInstance,
                                                &(this->PrimitiveSelectionCDF).ArrayMax);
                          }
                          pUVar17 = local_6d8;
                          pTVar44 = &pUVar51->PrimitiveStringKeys;
                          (this->PrimitiveSelectionCDF).ArrayNum = iVar23 + 1;
                          *(float *)((pTVar60->AllocatorInstance).Data + (longlong)iVar23 * 4) =
                               local_744;
                          if ((local_6d8->bTablesInitialized == (atomic<bool>)0x0) &&
                             (bVar20 = UE::Assert::Private::ExecCheckImplInternal
                                                 (&bGEnsureHasExecuted<_8122861073268211622>,false,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Compute\\PCGDataBinding.h"
                                                  ,0x5a,"bTablesInitialized"), bVar20)) {
                            pcVar6 = (code *)swi(3);
                            (*pcVar6)();
                            return;
                          }
                          FSoftObjectPath::ToString((FSoftObjectPath *)puVar57,&local_680);
                          pFVar53 = (pUVar17->StringTable).AllocatorInstance.Data;
                          iVar23 = (pUVar17->StringTable).ArrayNum;
                          uVar40 = local_680.Data._8_8_;
                          for (pFVar52 = pFVar53; pFVar52 != pFVar53 + (longlong)iVar23 * 0x10;
                              pFVar52 = pFVar52 + 0x10) {
                            iVar43 = *(int *)(pFVar52 + 8);
                            if (iVar43 == (int)uVar40) {
                              if (1 < iVar43) {
                                iVar43 = FGenericPlatformStricmp::Stricmp
                                                   (*(wchar_t **)pFVar52,
                                                    (wchar_t *)local_680.Data.AllocatorInstance.Data
                                                   );
                                bVar20 = iVar43 == 0;
                                uVar40 = local_680.Data._8_8_;
                                goto LAB_14974e7bf;
                              }
LAB_14974eb5f:
                              local_730[0] = (undefined4)
                                             ((longlong)pFVar52 - (longlong)pFVar53 >> 4);
                              goto LAB_14974e7d8;
                            }
                            bVar20 = iVar43 + (int)uVar40 == 1;
LAB_14974e7bf:
                            if (bVar20) goto LAB_14974eb5f;
                          }
                          local_730[0] = 0xffffffff;
LAB_14974e7d8:
                          pFVar53 = (pTVar44->AllocatorInstance).Data;
                          if (((pFVar53 <= (FScriptContainerElement *)local_730) &&
                              ((FScriptContainerElement *)local_730 <
                               pFVar53 + (longlong)(pUVar51->PrimitiveStringKeys).ArrayMax * 4)) &&
                             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                 ), bVar20)) {
                            pcVar6 = (code *)swi(3);
                            (*pcVar6)();
                            return;
                          }
                          iVar23 = (pUVar51->PrimitiveStringKeys).ArrayNum;
                          piVar49 = &(pUVar51->PrimitiveStringKeys).ArrayMax;
                          if (iVar23 == *piVar49) {
                            iVar23 = UE::Core::Private::
                                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                               (0x404,&pTVar44->AllocatorInstance,piVar49);
                          }
                          (pUVar51->PrimitiveStringKeys).ArrayNum = iVar23 + 1;
                          *(undefined4 *)((pTVar44->AllocatorInstance).Data + (longlong)iVar23 * 4)
                               = local_730[0];
                          if (local_680.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_680.Data.AllocatorInstance.Data);
                          }
                          FProceduralISMComponentDescriptor::FProceduralISMComponentDescriptor
                                    ((FProceduralISMComponentDescriptor *)local_228);
                          pFVar54 = local_700;
                          local_228._0_8_ = &___7FPCGProceduralISMComponentDescriptor__6B_;
                          local_158[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                          local_158[0].ArrayNum = 0;
                          local_158[0].ArrayMax = 0;
                          FProceduralISMComponentDescriptor::operator=
                                    ((FProceduralISMComponentDescriptor *)local_228,local_700);
                          TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                                    (local_158,
                                     (TArray<FName,TSizedDefaultAllocator<32>_> *)(puVar57 + 0x68));
                          pFVar14 = local_740;
                          if ((((local_740->ExecutionSource).InterfaceInstance ==
                                (IPCGGraphExecutionSource *)0x0) ||
                              (bVar20 = FWeakObjectPtr::IsValid
                                                  ((FWeakObjectPtr *)&local_740->ExecutionSource),
                              !bVar20)) &&
                             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("IsValid()",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                                                  ,0x8d,L""), bVar20)) {
                            pcVar6 = (code *)swi(3);
                            (*pcVar6)();
                            return;
                          }
                          plVar33 = (longlong *)
                                    (**(code **)((longlong)
                                                 *(pFVar14->ExecutionSource).InterfaceInstance +
                                                0x18))();
                          pdVar34 = (double *)(**(code **)(*plVar33 + 0x40))(plVar33,local_110);
                          pUVar51 = local_738;
                          local_1c0._s_0.X = *pdVar34;
                          local_1c0._s_0.Y = pdVar34[1];
                          local_1c0._s_0.Z = pdVar34[2];
                          TStack_1a8._s_0.X = pdVar34[3];
                          TStack_1a8._s_0.Y = pdVar34[4];
                          TStack_1a8._s_0.Z = pdVar34[5];
                          local_190 = pdVar34[6];
                          local_1c4 = local_738->CustomFloatCount;
                          local_228._16_8_ = *(undefined8 *)(puVar57 + -8);
                          FSoftObjectPath::operator=
                                    ((FSoftObjectPath *)(local_228 + 0x18),
                                     (FSoftObjectPath *)puVar57);
                          pUVar56 = local_6c0;
                          uVar21 = -((int)ROUND(fVar10 - ((fVar67 + fVar67) / fVar68) *
                                                         (float)(int)local_720) >> 1);
                          if (1 < *(int *)&local_6c0[1].field_0x8) {
                            auVar62._8_8_ = 0;
                            auVar62._0_8_ = (double)fVar64 * dVar69 * (double)(fVar9 - fVar64);
                            auVar62 = sqrtpd(ZEXT416((uint)(fVar9 - fVar64)),auVar62);
                            uVar21 = uVar21 - (int)((longlong)ROUND(dVar12 - auVar62._0_8_ * dVar11)
                                                   >> 1);
                          }
                          local_1c8 = local_720;
                          if ((int)uVar21 < (int)local_720) {
                            local_1c8 = uVar21;
                          }
                          pFVar53 = (pTVar2->AllocatorInstance).Data;
                          if (((pFVar53 <= (FScriptContainerElement *)local_228) &&
                              ((FScriptContainerElement *)local_228 <
                               pFVar53 + (longlong)(pUVar15->PrimitiveDescriptors).ArrayMax * 0xe0))
                             && (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                                    (
                                                  "Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                  ), bVar20)) {
                            pcVar6 = (code *)swi(3);
                            (*pcVar6)();
                            return;
                          }
                          iVar23 = (pUVar15->PrimitiveDescriptors).ArrayNum;
                          if (iVar23 == (pUVar15->PrimitiveDescriptors).ArrayMax) {
                            iVar23 = UE::Core::Private::
                                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                               (0x8e0,&pTVar2->AllocatorInstance,
                                                &(pUVar15->PrimitiveDescriptors).ArrayMax);
                          }
                          (pUVar15->PrimitiveDescriptors).ArrayNum = iVar23 + 1;
                          pFVar45 = (FProceduralISMComponentDescriptor *)
                                    ((pTVar2->AllocatorInstance).Data + (longlong)iVar23 * 0xe0);
                          FProceduralISMComponentDescriptor::FProceduralISMComponentDescriptor
                                    (pFVar45,(FProceduralISMComponentDescriptor *)local_228);
                          pFVar45->_padding_ =
                               (longlong)&___7FPCGProceduralISMComponentDescriptor__6B_;
                          pFVar45[1]._padding_ = 0;
                          pFVar45[1]._padding_ = (longlong)local_158[0].AllocatorInstance.Data;
                          pFVar45[1].Hash = local_158[0].ArrayNum;
                          pFVar45[1]._padding_ = local_158[0].ArrayMax;
                          local_158[0].ArrayNum = 0;
                          local_158[0].ArrayMax = 0;
                          local_158[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                          if (local_1d8.Data != (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_1d8.Data);
                          }
                          FVar41.Data = local_200;
                          if (local_1f0.Data != (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_1f0.Data);
                            FVar41.Data = local_200;
                          }
                          goto LAB_14974eb3a;
                        }
                        local_690.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                        local_690.Data.ArrayNum = 0;
                        local_690.Data.ArrayMax = 0;
                        ::FString::AppendInt(&local_690,0x100);
                        pFVar26 = FText::FromString(&local_398,&local_690);
                        pFVar27 = FTextFormat::FTextFormat
                                            (&local_388,
                                             &PCGStaticMeshSpawnerDataInterface::
                                              TooManyPrimitivesFormat,Default);
                        pFVar26 = FText::Format<FText>(&local_4a8,pFVar27,pFVar26);
                        PCGComputeHelpers::LogKernelWarning
                                  (local_740,(UPCGSettings *)local_710,pFVar26);
                        if (local_4a8.TextData.Reference != (ITextData *)0x0) {
                          (**(code **)((longlong)*local_4a8.TextData.Reference + 0x10))();
                        }
                        pUVar61 = local_738;
                        if (local_690.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_690.Data.AllocatorInstance.Data);
                          pUVar61 = local_738;
                        }
                        goto LAB_14974ec29;
                      }
                    }
                    uVar39 = (ulonglong)local_718 & 0xffffffff;
                    pFVar54 = (FSoftISMComponentDescriptor *)&pFVar54[1]._padding_;
                    pTVar7 = (TSoftObjectPtr<UStaticMesh> *)(puVar57 + 0x280);
                  } while( true );
                }
              }
              goto LAB_14974ecb5;
            }
          }
LAB_14974ec29:
          pUVar3 = (UObject *)pUVar61->_padding_;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar3);
          }
          local_650 = pUVar3;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar3);
          }
          pFVar35 = UPCGDataBinding::FindOrAddMeshSpawnerPrimitives
                              (local_6d8,(TObjectPtr<UComputeKernel_const_>)&local_650);
          pFVar35->NumCustomFloats = pUVar61->CustomFloatCount;
          TArray<UE::Math::TIntVector4<unsigned_int>,TSizedDefaultAllocator<32>_>::operator=
                    (&pFVar35->AttributeIdOffsetStrides,&pUVar61->AttributeIdOffsetStrides);
          pFVar35->SelectorAttributeId = pUVar61->SelectorAttributeId;
          TArray<float,TSizedDefaultAllocator<32>_>::operator=
                    (&pFVar35->SelectionCDF,&pUVar61->PrimitiveSelectionCDF);
          TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>::operator=
                    (&pFVar35->PrimitiveMeshBounds,&pUVar61->PrimitiveMeshBounds);
        }
      }
      else {
        pFVar26 = FText::AsLocalizable_Advanced_LocText
                            (&local_448,L"PCGStaticMeshSpawnerDataInterface",L"TooManyInstances",
                             L"Tried to spawn too many instances ({0}), procedural ISM component creation skipped and instances will not be rendered."
                            );
        pFVar27 = FTextFormat::FTextFormat(&local_408,pFVar26,Default);
        pFVar26 = FText::Format<int>(&local_458,pFVar27,uVar21);
        PCGComputeHelpers::LogKernelError(local_740,(UPCGSettings *)pUVar25,pFVar26);
        if (local_458.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_458.TextData.Reference + 0x10))();
        }
        if (local_448.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_448.TextData.Reference + 0x10))();
        }
      }
    }
  }
LAB_14974ecb5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6e8.SharedReferenceCount.ReferenceController);
  return;
}

// GetPrivateStaticClass @ 14975cc40

UClass * __cdecl UPCGStaticMeshSpawnerDataProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGStaticMeshSpawnerDataProvider.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGStaticMeshSpawnerDataProvider",
               &Z_Registration_Info_UClass_UPCGStaticMeshSpawnerDataProvider.InnerSingleton,
               StaticRegisterNativesUPCGStaticMeshSpawnerDataProvider,0x170,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGStaticMeshSpawnerDataProvider>,
               InternalVTableHelperCtorCaller<UPCGStaticMeshSpawnerDataProvider>,local_res8,
               UPCGComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGStaticMeshSpawnerDataProvider.InnerSingleton;
}

// GetRenderProxy @ 14975f1c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FComputeDataProviderRenderProxy * __thiscall
UPCGStaticMeshSpawnerDataProvider::GetRenderProxy(UPCGStaticMeshSpawnerDataProvider *this)

{
  int iVar1;
  FScriptContainerElement *_Src;
  FPCGStaticMeshSpawnerDataProviderProxy *pFVar2;
  longlong lVar3;
  TArray<float,TSizedDefaultAllocator<32>_> local_18;
  
  pFVar2 = ::operator_new(0x80);
  if (pFVar2 != (FPCGStaticMeshSpawnerDataProviderProxy *)0x0) {
    iVar1 = this->SelectedMeshAttributeId;
    local_18.ArrayNum = (this->PrimitiveSelectionCDF).ArrayNum;
    lVar3 = (longlong)local_18.ArrayNum;
    _Src = (this->PrimitiveSelectionCDF).AllocatorInstance.Data;
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_18.ArrayNum == 0) {
      local_18.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_18.ArrayNum,0,&local_18.AllocatorInstance,local_18.ArrayNum,
                 &local_18.ArrayMax);
      memcpy(local_18.AllocatorInstance.Data,_Src,lVar3 << 2);
    }
    pFVar2 = FPCGStaticMeshSpawnerDataProviderProxy::FPCGStaticMeshSpawnerDataProviderProxy
                       (pFVar2,&this->AttributeIdOffsetStrides,this->SelectorAttributeId,
                        &this->PrimitiveStringKeys,&local_18,iVar1,&this->PrimitiveMeshBounds);
    return (FComputeDataProviderRenderProxy *)pFVar2;
  }
  return (FComputeDataProviderRenderProxy *)0x0;
}

// PerformPreExecuteReadbacks_GameThread @ 14976de00

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
UPCGStaticMeshSpawnerDataProvider::PerformPreExecuteReadbacks_GameThread
          (UPCGStaticMeshSpawnerDataProvider *this,UPCGDataBinding *param_1)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  UObject *pUVar3;
  UPCGComputeKernel *pUVar4;
  code *pcVar5;
  FName FVar6;
  FPCGMetadataDomainID FVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  UPCGSettings *pUVar11;
  UPCGStaticMeshSpawnerSettings *pUVar12;
  UClass *pUVar13;
  FPCGDataCollection *pFVar14;
  UPCGParamData *pUVar15;
  UPCGMetadata *this_00;
  FPCGMetadataAttribute<int> *this_01;
  FPCGMetadataAttribute<int> *this_02;
  long64 lVar16;
  UPCGRawBufferData *pUVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  bool bVar22;
  int local_res10 [2];
  uint local_res18 [2];
  undefined4 local_res20 [2];
  undefined1 local_d8 [8];
  uint *local_d0;
  int *local_c8;
  undefined4 *local_c0;
  FScriptContainerElement *local_b8;
  FName local_b0;
  FPCGMetadataDomainID FStack_a8;
  FPCGAttributeIdentifier local_98;
  FName local_78;
  FPCGMetadataDomainID FStack_70;
  FPCGAttributeIdentifier local_58;
  
  bVar22 = -1 < CpuChannel->Enabled;
  if (bVar22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId217,
               "UPCGStaticMeshSpawnerDataProvider::PerformPreExecuteReadbacks_GameThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\Elements\\PCGStaticMeshSpawnerDataInterface.cpp"
               ,0xd9);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId217);
  }
  if ((param_1 == (UPCGDataBinding *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InBinding",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\Elements\\PCGStaticMeshSpawnerDataInterface.cpp"
                         ,0xda,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  pUVar3 = (UObject *)this->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  pUVar11 = (UPCGSettings *)(**(code **)(*(longlong *)pUVar3 + 0x2b0))(pUVar3);
  pUVar12 = CastChecked<UPCGStaticMeshSpawnerSettings,UPCGSettings_const_>(pUVar11);
  iVar10 = this->AnalysisDataIndex;
  if (iVar10 == -1) {
    if ((pUVar12->MeshSelectorParameters).field0_0x0.DebugPtr != (UPCGMeshSelectorBase *)0x0) {
      pUVar13 = Z_Construct_UClass_UPCGMeshSelectorByAttribute_NoRegister();
      bVar8 = FObjectPtr::IsA((FObjectPtr *)&pUVar12->MeshSelectorParameters,pUVar13);
      if ((bVar8) &&
         ((pUVar12->MeshSelectorParameters).field0_0x0.DebugPtr != (UPCGMeshSelectorBase *)0x0)) {
        if ((UObject *)this->_padding_ == (UObject *)0x0) {
          this->AnalysisDataIndex = -1;
        }
        else {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this->_padding_);
          }
          FVar6 = PCGStaticMeshSpawnerKernelConstants::InstanceCountsPinLabel;
          pUVar4 = (UPCGComputeKernel *)this->_padding_;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar4 != (UPCGComputeKernel *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar4);
          }
          iVar10 = UPCGDataBinding::GetFirstInputDataIndex(param_1,pUVar4,FVar6);
          this->AnalysisDataIndex = iVar10;
          if (iVar10 != -1) goto LAB_14976df7f;
        }
      }
    }
  }
  else {
LAB_14976df7f:
    bVar8 = UPCGDataBinding::ReadbackInputDataToCPU(param_1,iVar10);
    if (!bVar8) {
      bVar8 = false;
      goto LAB_14976e2ef;
    }
    pFVar14 = UPCGDataBinding::GetInputDataCollection(param_1);
    uVar2 = this->AnalysisDataIndex;
    lVar20 = 0;
    uVar19 = 0;
    if ((int)uVar2 < (pFVar14->TaggedData).ArrayNum) {
      uVar19 = ~uVar2 >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
    pUVar15 = Cast<UPCGParamData>((FPCGDataPtrWrapper *)
                                  ((pFVar14->TaggedData).AllocatorInstance.Data +
                                  (longlong)(int)uVar2 * 0x78));
    if (pUVar15 == (UPCGParamData *)0x0) {
      pFVar14 = UPCGDataBinding::GetInputDataCollection(param_1);
      uVar2 = this->AnalysisDataIndex;
      uVar19 = 0;
      if ((int)uVar2 < (pFVar14->TaggedData).ArrayNum) {
        uVar19 = ~uVar2 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
      pUVar17 = Cast<UPCGRawBufferData>
                          ((FPCGDataPtrWrapper *)
                           ((pFVar14->TaggedData).AllocatorInstance.Data +
                           (longlong)(int)uVar2 * 0x78));
      if (pUVar17 != (UPCGRawBufferData *)0x0) {
        uVar21 = (ulonglong)(pUVar17->Data).ArrayNum;
        if (((uVar21 & 1) != 0) &&
           (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<1579353040601743651>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\Elements\\PCGStaticMeshSpawnerDataInterface.cpp"
                               ,0x123,"(NumUints % 2) == 0"), bVar8)) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
        pFVar18 = (pUVar17->Data).AllocatorInstance.Data;
        pFVar1 = pFVar18 + uVar21 * 4;
        if (pFVar18 < pFVar1) {
          local_c0 = local_res20;
          do {
            local_res20[0] = *(undefined4 *)pFVar18;
            local_b8 = pFVar18 + 4;
            TSet<TTuple<int,unsigned_int>,TDefaultMapHashableKeyFuncs<int,unsigned_int,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<int_&&,unsigned_int_const_&>_>
                      ((TSet<TTuple<int,unsigned_int>,TDefaultMapHashableKeyFuncs<int,unsigned_int,0>,FDefaultSetAllocator>
                        *)&this->StringKeyToInstanceCount,
                       (TPairInitializer<int_&&,unsigned_int_const_&> *)(local_d8 + 4),
                       (bool *)&local_c0);
            pFVar18 = pFVar18 + 8;
          } while (pFVar18 < pFVar1);
        }
      }
    }
    else {
      this_00 = (UPCGMetadata *)(**(code **)(pUVar15->_padding_ + 800))(pUVar15);
      if ((this_00 == (UPCGMetadata *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("AnalysisMetadata",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\Elements\\PCGStaticMeshSpawnerDataInterface.cpp"
                             ,0xfe,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
      local_b0 = PCGCountUniqueAttributeValuesConstants::ValueAttributeName;
      FStack_a8 = PCGMetadataDomainID::Default;
      FVar7 = FStack_a8;
      FStack_a8._0_8_ = PCGMetadataDomainID::Default._0_8_;
      local_98.Name = PCGCountUniqueAttributeValuesConstants::ValueAttributeName;
      local_98.MetadataDomain.Flag = FStack_a8.Flag;
      local_98.MetadataDomain._1_3_ = FStack_a8._1_3_;
      local_98.MetadataDomain.CustomFlag = FStack_a8.CustomFlag;
      local_98.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
      FStack_a8 = FVar7;
      this_01 = (FPCGMetadataAttribute<int> *)UPCGMetadata::GetConstAttribute(this_00,&local_98);
      local_78 = PCGCountUniqueAttributeValuesConstants::ValueCountAttributeName;
      FStack_70 = PCGMetadataDomainID::Default;
      FVar7 = FStack_70;
      FStack_70._0_8_ = PCGMetadataDomainID::Default._0_8_;
      local_58.Name = PCGCountUniqueAttributeValuesConstants::ValueCountAttributeName;
      local_58.MetadataDomain.Flag = FStack_70.Flag;
      local_58.MetadataDomain._1_3_ = FStack_70._1_3_;
      local_58.MetadataDomain.CustomFlag = FStack_70.CustomFlag;
      local_58.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
      FStack_70 = FVar7;
      this_02 = (FPCGMetadataAttribute<int> *)UPCGMetadata::GetConstAttribute(this_00,&local_58);
      if ((((this_01 == (FPCGMetadataAttribute<int> *)0x0) || ((short)this_01->_padding_ != 2)) ||
          (this_02 == (FPCGMetadataAttribute<int> *)0x0)) || ((short)this_02->_padding_ != 2)) {
        if (2 < (byte)LogPCG._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        }
        pFVar14 = UPCGDataBinding::GetInputDataCollection(param_1);
        uVar2 = this->AnalysisDataIndex;
        uVar19 = 0;
        if ((int)uVar2 < (pFVar14->TaggedData).ArrayNum) {
          uVar19 = ~uVar2 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
        bVar8 = UObjectBaseUtility::IsA<UPCGProxyForGPUData>
                          (*(UObjectBaseUtility **)
                            ((pFVar14->TaggedData).AllocatorInstance.Data +
                            (longlong)(int)uVar2 * 0x78));
        if ((bVar8) && (1 < (byte)LogPCG._0_1_)) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        }
      }
      else {
        lVar16 = UPCGMetadata::GetItemCountForChild(this_00);
        iVar10 = (int)lVar16;
        TSet<TTuple<int,unsigned_int>,TDefaultMapHashableKeyFuncs<int,unsigned_int,0>,FDefaultSetAllocator>
        ::Reserve((TSet<TTuple<int,unsigned_int>,TDefaultMapHashableKeyFuncs<int,unsigned_int,0>,FDefaultSetAllocator>
                   *)&this->StringKeyToInstanceCount,iVar10);
        if (0 < (longlong)iVar10) {
          local_d0 = local_res18;
          local_c8 = local_res10;
          do {
            local_res10[0] = FPCGMetadataAttribute<int>::GetValue(this_02,(int)lVar20);
            local_res18[0] = FPCGMetadataAttribute<int>::GetValue(this_01,(int)lVar20);
            TSet<TTuple<int,unsigned_int>,TDefaultMapHashableKeyFuncs<int,unsigned_int,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<int_&&,unsigned_int_&&>_>
                      ((TSet<TTuple<int,unsigned_int>,TDefaultMapHashableKeyFuncs<int,unsigned_int,0>,FDefaultSetAllocator>
                        *)&this->StringKeyToInstanceCount,
                       (TPairInitializer<int_&&,unsigned_int_&&> *)local_d8,(bool *)&local_d0);
            lVar20 = lVar20 + 1;
          } while (lVar20 < iVar10);
        }
      }
    }
  }
  bVar8 = true;
LAB_14976e2ef:
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar8;
}

// PrepareForExecute_GameThread @ 149772bd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
UPCGStaticMeshSpawnerDataProvider::PrepareForExecute_GameThread
          (UPCGStaticMeshSpawnerDataProvider *this,UPCGDataBinding *param_1)

{
  atomic<int> *paVar1;
  FScriptContainerElement *pFVar2;
  TSharedPtr<FStreamableHandle,1> *pTVar3;
  atomic<int> aVar4;
  uint uVar5;
  TReferenceControllerBase<1> *pTVar6;
  FPCGContextHandle *pFVar7;
  UPCGComputeKernel *pUVar8;
  FPCGProceduralISMComponentDescriptor *pFVar9;
  IPCGGraphExecutionSource *pIVar10;
  code *pcVar11;
  FName FVar12;
  FPCGMetadataDomainID FVar13;
  FPCGMetadataDomainID FVar14;
  bool bVar15;
  undefined1 uVar16;
  bool bVar17;
  char cVar18;
  atomic<int> aVar19;
  int iVar20;
  int iVar21;
  UPCGSettings *pUVar22;
  UClass *pUVar23;
  UPCGMeshSelectorBase *pUVar24;
  FText *pFVar25;
  FText *pFVar26;
  FTextFormat *pFVar27;
  UAssetManager *pUVar28;
  TSharedPtr<FStreamableHandle,1> *pTVar29;
  UObject *pUVar30;
  int *piVar31;
  longlong lVar32;
  TObjectPtr<UComputeKernel_const_>_u_0 TVar33;
  int *piVar34;
  FScriptContainerElement *pFVar35;
  FSoftObjectPath *pFVar36;
  FScriptContainerElement *pFVar37;
  FPCGContext *pFVar38;
  UPCGStaticMeshSpawnerSettings *pUVar39;
  bool bVar40;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TReferenceControllerBase<1> *local_248;
  undefined1 local_240 [8];
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> local_238;
  FPCGContext *local_228;
  UPCGStaticMeshSpawnerSettings *local_220;
  undefined1 local_218 [8];
  ForAnyElementType local_210;
  ulonglong local_208;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> local_200;
  undefined1 local_1f0 [24];
  FName local_1d8;
  UObject *local_1d0;
  UObject *local_1c8;
  UObject *local_1c0;
  UObject *local_1b8;
  UObject *local_1b0;
  UObject *local_1a8;
  UObject *local_1a0;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FPCGSpawnerPrimitives local_158;
  FText local_108;
  FText local_f8;
  TSharedPtr<FStreamableHandle,1> local_e8;
  source_location local_d8;
  FName local_b8;
  FPCGMetadataDomainID FStack_b0;
  FPCGAttributeIdentifier local_98;
  FText local_78;
  FTextFormat local_68 [2];
  
  bVar40 = -1 < CpuChannel->Enabled;
  if (bVar40) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId305,
               "UPCGStaticMeshSpawnerDataProvider::PrepareForExecute_GameThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\Elements\\PCGStaticMeshSpawnerDataInterface.cpp"
               ,0x131);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId305);
  }
  if ((param_1 == (UPCGDataBinding *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("InBinding",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\Elements\\PCGStaticMeshSpawnerDataInterface.cpp"
                          ,0x132,L""), bVar15)) {
    pcVar11 = (code *)swi(3);
    uVar16 = (*pcVar11)();
    return (bool)uVar16;
  }
  pUVar30 = (UObject *)this->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar30 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar30);
  }
  pUVar22 = (UPCGSettings *)(**(code **)(*(longlong *)pUVar30 + 0x2b0))(pUVar30);
  local_220 = CastChecked<UPCGStaticMeshSpawnerSettings,UPCGSettings_const_>(pUVar22);
  if (this->bRegisteredPrimitives == false) {
    pUVar30 = (UObject *)this->_padding_;
    local_158.PrimitiveMeshBounds.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_158.PrimitiveMeshBounds.ArrayNum = 0;
    local_158.PrimitiveMeshBounds.ArrayMax = 0;
    local_158.SelectionCDF.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_158.SelectionCDF.ArrayNum = 0;
    local_158.SelectionCDF.ArrayMax = 0;
    local_158.NumCustomFloats = 0;
    local_158.AttributeIdOffsetStrides.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_158.AttributeIdOffsetStrides.ArrayNum = 0;
    local_158.AttributeIdOffsetStrides.ArrayMax = 0;
    local_158.SelectorAttributeId = -1;
    local_158.PrimitiveFactory.Object = (IPCGRuntimePrimitiveFactory *)0x0;
    local_158.PrimitiveFactory.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar30 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar30);
    }
    local_1d0 = pUVar30;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar30 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar30);
    }
    UPCGDataBinding::AddMeshSpawnerPrimitives
              (param_1,(TObjectPtr<UComputeKernel_const_>)&local_1d0,&local_158);
    if (local_158.AttributeIdOffsetStrides.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_158.AttributeIdOffsetStrides.AllocatorInstance.Data);
    }
    if (local_158.SelectionCDF.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.SelectionCDF.AllocatorInstance.Data);
    }
    if (local_158.PrimitiveMeshBounds.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.PrimitiveMeshBounds.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.PrimitiveFactory.SharedReferenceCount.ReferenceController);
    this->bRegisteredPrimitives = true;
  }
  pTVar6 = (param_1->ContextHandle).WeakReferenceCount.ReferenceController;
  pFVar7 = (param_1->ContextHandle).Object;
  local_248 = pTVar6;
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
LAB_1497739d2:
    bVar15 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<1579353040601743682>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\Elements\\PCGStaticMeshSpawnerDataInterface.cpp"
                        ,0x142,"Context");
    if (bVar15) {
      pcVar11 = (code *)swi(3);
      uVar16 = (*pcVar11)();
      return (bool)uVar16;
    }
    pUVar30 = (UObject *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar30 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar30);
    }
    local_1a0 = pUVar30;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar30 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar30);
    }
    TVar33.DebugPtr = (UComputeKernel *)&local_1a0;
    goto LAB_149773a3e;
  }
  LOCK();
  pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
  UNLOCK();
  aVar4 = pTVar6->SharedReferenceCount;
  do {
    if (aVar4 == (atomic<int>)0x0) {
      local_248 = (TReferenceControllerBase<1> *)0x0;
      break;
    }
    LOCK();
    aVar19 = pTVar6->SharedReferenceCount;
    bVar15 = aVar4 == aVar19;
    if (bVar15) {
      pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
      aVar19 = aVar4;
    }
    UNLOCK();
    aVar4 = aVar19;
  } while (!bVar15);
  LOCK();
  paVar1 = &pTVar6->WeakReferenceCount;
  aVar4 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar4 == (atomic<int>)0x1) {
    (**(code **)(pTVar6->_padding_ + 8))(pTVar6);
  }
  if (((local_248 == (TReferenceControllerBase<1> *)0x0) || (pFVar7 == (FPCGContextHandle *)0x0)) ||
     (pFVar38 = pFVar7->Context, local_228 = pFVar38, pFVar38 == (FPCGContext *)0x0))
  goto LAB_1497739d2;
  if (((pFVar38->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0) &&
     (bVar15 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&pFVar38->ExecutionSource),
     pUVar39 = local_220, bVar15)) {
    if ((local_220->MeshSelectorParameters).field0_0x0.DebugPtr == (UPCGMeshSelectorBase *)0x0) {
LAB_149772e42:
      pUVar24 = (UPCGMeshSelectorBase *)0x0;
    }
    else {
      pUVar23 = Z_Construct_UClass_UPCGMeshSelectorByAttribute_NoRegister();
      bVar15 = FObjectPtr::IsA((FObjectPtr *)&pUVar39->MeshSelectorParameters,pUVar23);
      if (!bVar15) goto LAB_149772e42;
      pUVar24 = (pUVar39->MeshSelectorParameters).field0_0x0.DebugPtr;
    }
    FVar12 = PCGPinConstants::DefaultInputLabel;
    if ((this->SelectorAttributeId == -1) && (pUVar24 != (UPCGMeshSelectorBase *)0x0)) {
      local_1d8.ComparisonIndex.Value = *(uint *)&pUVar24[1].field_0x0;
      local_1d8.Number = *(uint *)&pUVar24[1].field_0x4;
      pUVar8 = (UPCGComputeKernel *)this->_padding_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar8 != (UPCGComputeKernel *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar8);
      }
      UPCGDataBinding::GetCachedKernelPinDataDesc(param_1,&local_200,pUVar8,FVar12,true);
      if (local_200.Object == (FPCGDataCollectionDesc *)0x0) {
        bVar15 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<1579353040601743700>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\Elements\\PCGStaticMeshSpawnerDataInterface.cpp"
                            ,0x154,"InputDataDesc");
        if (bVar15) {
          pcVar11 = (code *)swi(3);
          uVar16 = (*pcVar11)();
          return (bool)uVar16;
        }
        pUVar30 = (UObject *)this->_padding_;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar30 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar30);
        }
        local_1c8 = pUVar30;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar30 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar30);
        }
        UPCGDataBinding::AddCompletedMeshSpawnerKernel
                  (param_1,(TObjectPtr<UComputeKernel_const_>)&local_1c8);
        bVar15 = true;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_200.SharedReferenceCount.ReferenceController);
        goto LAB_149773a45;
      }
      bVar15 = false;
      iVar21 = ((local_200.Object)->DataDescs).ArrayNum;
      pFVar35 = ((local_200.Object)->DataDescs).AllocatorInstance.Data;
      if ((iVar21 < 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar17)) {
        pcVar11 = (code *)swi(3);
        uVar16 = (*pcVar11)();
        return (bool)uVar16;
      }
      if (pFVar35 != pFVar35 + (longlong)iVar21 * 0x68) {
        pFVar37 = pFVar35 + 0x18;
        bVar15 = false;
        do {
          if (0 < *(int *)pFVar37) {
            iVar20 = *(int *)(pFVar37 + 0x20);
            bVar15 = true;
            piVar34 = *(int **)(pFVar37 + 0x18);
            if ((iVar20 < 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar17)) {
              pcVar11 = (code *)swi(3);
              uVar16 = (*pcVar11)();
              return (bool)uVar16;
            }
            piVar31 = piVar34 + (longlong)iVar20 * 0x1e;
            for (; piVar34 != piVar31; piVar34 = piVar34 + 0x1e) {
              if ((*(FName *)(piVar34 + 2) == local_1d8) && ((char)piVar34[8] == '\n')) {
                this->SelectorAttributeId = *piVar34;
                break;
              }
            }
            pUVar39 = local_220;
            if (this->SelectorAttributeId != -1) break;
          }
          pFVar2 = pFVar37 + 0x50;
          pFVar37 = pFVar37 + 0x68;
          pUVar39 = local_220;
        } while (pFVar2 != pFVar35 + (longlong)iVar21 * 0x68);
      }
      pFVar38 = local_228;
      if (this->SelectorAttributeId != -1) {
        bVar15 = FPCGAsyncState::ShouldStop(&local_228->AsyncState);
        if (bVar15) {
          bVar15 = false;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_200.SharedReferenceCount.ReferenceController);
          goto LAB_149773a45;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_200.SharedReferenceCount.ReferenceController);
        goto LAB_1497731b4;
      }
      if ((local_200.Object == (FPCGDataCollectionDesc *)0x0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar17)) {
        pcVar11 = (code *)swi(3);
        uVar16 = (*pcVar11)();
        return (bool)uVar16;
      }
      iVar21 = ((local_200.Object)->DataDescs).ArrayNum;
      if (iVar21 < 0) {
        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L"");
        if (bVar17) {
          pcVar11 = (code *)swi(3);
          uVar16 = (*pcVar11)();
          return (bool)uVar16;
        }
LAB_149773081:
        if (bVar15) {
          pFVar25 = FText::FromName(&local_78,&local_1d8);
          pFVar26 = FText::AsLocalizable_Advanced_LocText
                              (&local_f8,L"PCGStaticMeshSpawnerDataInterface",
                               L"MeshSelectorAttributeNotFound",
                               L"Mesh selector attribute \'{0}\' not found.");
          pFVar27 = FTextFormat::FTextFormat(local_68,pFVar26,Default);
          pFVar25 = FText::Format<FText>(&local_108,pFVar27,pFVar25);
          PCGComputeHelpers::LogKernelError(local_228,(UPCGSettings *)pUVar39,pFVar25);
          if (local_108.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
          }
          if (local_f8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
          }
        }
      }
      else if (iVar21 != 0) goto LAB_149773081;
      pUVar30 = (UObject *)this->_padding_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar30 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar30);
      }
      local_1c0 = pUVar30;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar30 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar30);
      }
      UPCGDataBinding::AddCompletedMeshSpawnerKernel
                (param_1,(TObjectPtr<UComputeKernel_const_>)&local_1c0);
      bVar15 = true;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_200.SharedReferenceCount.ReferenceController);
      goto LAB_149773a45;
    }
LAB_1497731b4:
    if (this->bPrimitiveDescriptorsCreated == false) {
      CreatePrimitiveDescriptors(this,pFVar38,param_1);
      uVar5 = (this->PrimitiveDescriptors).ArrayNum;
      local_238.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_238.ArrayNum = 0;
      local_238.ArrayMax = 0;
      if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
      }
      if (0 < (int)uVar5) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,uVar5,&local_238.AllocatorInstance,0,&local_238.ArrayMax);
      }
      pFVar35 = (this->PrimitiveDescriptors).AllocatorInstance.Data;
      iVar21 = (this->PrimitiveDescriptors).ArrayNum;
      pFVar36 = (FSoftObjectPath *)(pFVar35 + 0x18);
      while( true ) {
        if ((this->PrimitiveDescriptors).ArrayNum != iVar21) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<FPCGProceduralISMComponentDescriptor,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res18);
        }
        if (&pFVar36[-1].AssetPath.AssetName == (FName *)(pFVar35 + (longlong)iVar21 * 0xe0)) break;
        if ((pFVar36->AssetPath).PackageName != (FName)0x0) {
          if (5 < (byte)LogPCG._0_1_) {
            FSoftObjectPath::ToString(pFVar36,&local_198);
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
            if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_198.Data.AllocatorInstance.Data);
            }
          }
          if (((local_238.AllocatorInstance.Data <= pFVar36) &&
              (pFVar36 < (FSoftObjectPath *)
                         (local_238.AllocatorInstance.Data + (longlong)local_238.ArrayMax * 0x20)))
             && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar15)) {
            pcVar11 = (code *)swi(3);
            uVar16 = (*pcVar11)();
            return (bool)uVar16;
          }
          if (local_238.ArrayNum == local_238.ArrayMax) {
            iVar20 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x820,&local_238.AllocatorInstance,&local_238.ArrayMax);
            local_238.ArrayNum = iVar20;
          }
          lVar32 = (longlong)local_238.ArrayNum;
          local_238.ArrayNum = local_238.ArrayNum + 1;
          FSoftObjectPath::FSoftObjectPath
                    ((FSoftObjectPath *)(local_238.AllocatorInstance.Data + lVar32 * 0x20),pFVar36);
        }
        pFVar36 = pFVar36 + 7;
      }
      if (local_238.ArrayNum != 0) {
        pTVar3 = &this->LoadHandle;
        if ((pTVar3->Object != (FStreamableHandle *)0x0) &&
           (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<1579353040601743770>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\Elements\\PCGStaticMeshSpawnerDataInterface.cpp"
                                ,0x19a,"!LoadHandle"), bVar15)) {
          pcVar11 = (code *)swi(3);
          uVar16 = (*pcVar11)();
          return (bool)uVar16;
        }
        UAssetManager::Get();
        pUVar28 = UAssetManager::Get();
        local_1f0._0_4_ = 0x19b;
        local_1f0._4_4_ = 0x3d;
        local_1f0._8_8_ =
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\Elements\\PCGStaticMeshSpawnerDataInterface.cpp"
        ;
        local_d8._Line = 0x19b;
        local_d8._Column = 0x3d;
        local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_188.Data.ArrayNum = 0;
        local_188.Data.ArrayMax = 0;
        local_1f0._16_8_ =
             "bool __cdecl UPCGStaticMeshSpawnerDataProvider::PrepareForExecute_GameThread(class UPCGDataBinding *)"
        ;
        local_208 = 0;
        local_218 = (undefined1  [8])0x0;
        local_210.Data = (FScriptContainerElement *)0x0;
        local_d8._File =
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\Elements\\PCGStaticMeshSpawnerDataInterface.cpp"
        ;
        local_d8._Function =
             "bool __cdecl UPCGStaticMeshSpawnerDataProvider::PrepareForExecute_GameThread(class UPCGDataBinding *)"
        ;
        pTVar29 = FStreamableManager::
                  RequestAsyncLoad<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>,TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy>,void>
                            (&pUVar28->StreamableManager,&local_e8,&local_238,
                             (TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy>
                              *)local_218,0,false,false,&local_188,(FSourceLocation *)&local_d8);
        if (pTVar3 != pTVar29) {
          pTVar3->Object = pTVar29->Object;
          pTVar29->Object = (FStreamableHandle *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->LoadHandle).SharedReferenceCount,&pTVar29->SharedReferenceCount);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_e8.SharedReferenceCount.ReferenceController);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_218,
                   (FWriteAccessScope *)local_1f0);
        if (((int)local_208 != 0) && (local_210.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)local_210.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_210,0,0,0x10);
          local_208 = local_208 & 0xffffffff00000000;
        }
        if (local_1f0[0x10] == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                    ((FMRSWRecursiveAccessDetector *)local_1f0._8_8_,
                     (FDestructionSentinel *)local_1f0);
        }
        if (local_210.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_210.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_218);
      }
      pFVar38 = local_228;
      this->bPrimitiveDescriptorsCreated = true;
      bVar15 = FPCGAsyncState::ShouldStop(&local_228->AsyncState);
      if (!bVar15) {
        DestructItems<FSoftObjectPath,int>
                  ((FSoftObjectPath *)local_238.AllocatorInstance.Data,local_238.ArrayNum);
        if ((FSoftObjectPath *)local_238.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
          FMemory::Free(local_238.AllocatorInstance.Data);
        }
        goto LAB_149773519;
      }
      DestructItems<FSoftObjectPath,int>
                ((FSoftObjectPath *)local_238.AllocatorInstance.Data,local_238.ArrayNum);
      if ((FSoftObjectPath *)local_238.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
        FMemory::Free(local_238.AllocatorInstance.Data);
        bVar15 = false;
        goto LAB_149773a45;
      }
    }
    else {
LAB_149773519:
      if (this->bStaticMeshesLoaded != false) goto LAB_14977371d;
      iVar21 = (this->PrimitiveDescriptors).ArrayNum;
      pFVar35 = (this->PrimitiveDescriptors).AllocatorInstance.Data;
      pFVar37 = pFVar35 + (longlong)iVar21 * 0xe0;
      while( true ) {
        if ((this->PrimitiveDescriptors).ArrayNum != iVar21) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<FPCGProceduralISMComponentDescriptor,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res20);
        }
        if (pFVar35 == pFVar37) {
          pFVar35 = (this->PrimitiveDescriptors).AllocatorInstance.Data;
          bVar15 = false;
          iVar21 = (this->PrimitiveDescriptors).ArrayNum;
          pFVar36 = (FSoftObjectPath *)(pFVar35 + 0x18);
          goto LAB_149773600;
        }
        pUVar30 = TPersistentObjectPtr<FSoftObjectPath>::Get
                            ((TPersistentObjectPtr<FSoftObjectPath> *)(pFVar35 + 0x10));
        if ((pUVar30 == (UObject *)0x0) && (*(longlong *)(pFVar35 + 0x18) != 0)) break;
        pFVar35 = pFVar35 + 0xe0;
      }
      if (5 < (byte)LogPCG._0_1_) {
        FSoftObjectPath::ToString((FSoftObjectPath *)(pFVar35 + 0x18),&local_178);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_178.Data.AllocatorInstance.Data);
          bVar15 = false;
          goto LAB_149773a45;
        }
      }
    }
    goto LAB_149773748;
  }
  bVar15 = UE::Assert::Private::ExecCheckImplInternal
                     (&bGEnsureHasExecuted<1579353040601743688>,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\Elements\\PCGStaticMeshSpawnerDataInterface.cpp"
                      ,0x148,"Context->ExecutionSource.IsValid()");
  if (bVar15) {
    pcVar11 = (code *)swi(3);
    uVar16 = (*pcVar11)();
    return (bool)uVar16;
  }
  pUVar30 = (UObject *)this->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar30 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar30);
  }
  local_1a8 = pUVar30;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar30 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar30);
  }
  UPCGDataBinding::AddCompletedMeshSpawnerKernel
            (param_1,(TObjectPtr<UComputeKernel_const_>)&local_1a8);
LAB_149773a43:
  bVar15 = true;
LAB_149773a45:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_248);
  if (bVar40) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar15;
LAB_149773600:
  if ((this->PrimitiveDescriptors).ArrayNum != iVar21) {
    local_240[0] = 0;
    `TCheckedPointerIterator<FPCGProceduralISMComponentDescriptor,int,0>::operator!='::__l2::
    <lambda_1>::operator()(local_240);
  }
  if (&pFVar36[-1].AssetPath.AssetName == (FName *)(pFVar35 + (longlong)iVar21 * 0xe0))
  goto LAB_1497736ae;
  pUVar30 = TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)
                       &pFVar36[-1].SubPathString.Data.ArrayNum);
  if (pUVar30 == (UObject *)0x0) {
LAB_149773659:
    if (1 < (byte)LogPCG._0_1_) {
      FSoftObjectPath::ToString(pFVar36,&local_168);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data.AllocatorInstance.Data);
      }
    }
    bVar15 = true;
  }
  else {
    pUVar23 = Z_Construct_UClass_UStaticMesh_NoRegister();
    iVar20 = (int)pUVar23->_padding_;
    if ((*(int *)(*(longlong *)&pUVar30->field_0x10 + 0x38) < iVar20) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar30->field_0x10 + 0x30) + (longlong)iVar20 * 8) !=
        &pUVar23->_padding_)) goto LAB_149773659;
  }
  pFVar36 = pFVar36 + 7;
  goto LAB_149773600;
LAB_1497736ae:
  if (bVar15) {
    piVar34 = &(this->PrimitiveDescriptors).ArrayMax;
    pFVar9 = (FPCGProceduralISMComponentDescriptor *)
             (this->PrimitiveDescriptors).AllocatorInstance.Data;
    iVar21 = (this->PrimitiveDescriptors).ArrayNum;
    if ((this->PrimitiveDescriptors).ArrayMax < 0) {
      DestructItems<FPCGProceduralISMComponentDescriptor,int>(pFVar9,iVar21);
      (this->PrimitiveDescriptors).ArrayNum = 0;
      if (*piVar34 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xe0,8,0,&(this->PrimitiveDescriptors).AllocatorInstance,0,piVar34);
      }
    }
    else {
      DestructItems<FPCGProceduralISMComponentDescriptor,int>(pFVar9,iVar21);
      (this->PrimitiveDescriptors).ArrayNum = 0;
    }
  }
  this->bStaticMeshesLoaded = true;
  pFVar38 = local_228;
LAB_14977371d:
  if (this->bPrimitivesSetUp == false) {
    cVar18 = (**(code **)(this->_padding_ + 0x2e8))(this,pFVar38,param_1);
    if (cVar18 == '\0') {
LAB_149773748:
      bVar15 = false;
      goto LAB_149773a45;
    }
    this->bPrimitivesSetUp = true;
    if (this->NumPrimitivesSetup < 1) {
      pUVar30 = (UObject *)this->_padding_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar30 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar30);
      }
      local_1b8 = pUVar30;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar30 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar30);
      }
      UPCGDataBinding::AddCompletedMeshSpawnerKernel
                (param_1,(TObjectPtr<UComputeKernel_const_>)&local_1b8);
      bVar15 = true;
      goto LAB_149773a45;
    }
    if (((((pFVar38->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0) &&
         (bVar15 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&pFVar38->ExecutionSource), bVar15)) &&
        (pIVar10 = (pFVar38->ExecutionSource).InterfaceInstance,
        pIVar10 != (IPCGGraphExecutionSource *)0x0)) &&
       (lVar32 = (**(code **)((longlong)*pIVar10 + 8))(), lVar32 != 0)) {
      pUVar23 = Z_Construct_UClass_UPCGComponent_NoRegister();
      iVar21 = (int)pUVar23->_padding_;
      if ((iVar21 <= *(int *)(*(longlong *)(lVar32 + 0x10) + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)(lVar32 + 0x10) + 0x30) + (longlong)iVar21 * 8) ==
          &pUVar23->_padding_)) {
        *(undefined1 *)(lVar32 + 0x381) = 1;
      }
    }
    bVar15 = FPCGAsyncState::ShouldStop(&local_228->AsyncState);
    if (bVar15) {
      bVar15 = false;
      goto LAB_149773a45;
    }
  }
  FVar13 = PCGMetadataDomainID::Default;
  local_b8 = local_220->OutAttributeName;
  FStack_b0 = PCGMetadataDomainID::Default;
  if ((param_1->bTablesInitialized == (atomic<bool>)0x0) &&
     (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_8122861073268211627>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Compute\\PCGDataBinding.h"
                          ,0x55,"bTablesInitialized"), bVar15)) {
    pcVar11 = (code *)swi(3);
    uVar16 = (*pcVar11)();
    return (bool)uVar16;
  }
  FVar14 = FStack_b0;
  local_98.Name = local_b8;
  local_98.MetadataDomain.Flag = FStack_b0.Flag;
  local_98.MetadataDomain._1_3_ = FStack_b0._1_3_;
  local_98.MetadataDomain.CustomFlag = FStack_b0.CustomFlag;
  local_98.MetadataDomain.DebugName = FVar13.DebugName;
  FStack_b0 = FVar14;
  iVar21 = FPCGKernelAttributeTable::GetAttributeId(&param_1->AttributeTable,&local_98,StringKey);
  this->SelectedMeshAttributeId = iVar21;
  if ((iVar21 == -1) &&
     (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<1579353040601743846>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\Elements\\PCGStaticMeshSpawnerDataInterface.cpp"
                          ,0x1e6,"SelectedMeshAttributeId != INDEX_NONE"), bVar15)) {
    pcVar11 = (code *)swi(3);
    uVar16 = (*pcVar11)();
    return (bool)uVar16;
  }
  pUVar30 = (UObject *)this->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar30 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar30);
  }
  local_1b0 = pUVar30;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar30 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar30);
  }
  TVar33.DebugPtr = (UComputeKernel *)&local_1b0;
LAB_149773a3e:
  UPCGDataBinding::AddCompletedMeshSpawnerKernel(param_1,(TObjectPtr<UComputeKernel_const_>)TVar33);
  goto LAB_149773a43;
}

// Reset @ 149775200

void __thiscall UPCGStaticMeshSpawnerDataProvider::Reset(UPCGStaticMeshSpawnerDataProvider *this)

{
  int *piVar1;
  undefined1 *puVar2;
  TMap<int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,unsigned_int,0>_>
  *this_00;
  int iVar3;
  bool bVar4;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  UPCGComputeDataProvider::Reset((UPCGComputeDataProvider *)this);
  piVar1 = &(this->AttributeIdOffsetStrides).ArrayMax;
  (this->AttributeIdOffsetStrides).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&(this->AttributeIdOffsetStrides).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->PrimitiveStringKeys).ArrayMax;
  (this->PrimitiveStringKeys).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->PrimitiveStringKeys).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->PrimitiveMeshBounds).ArrayMax;
  (this->PrimitiveMeshBounds).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,&(this->PrimitiveMeshBounds).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->PrimitiveSelectionCDF).ArrayMax;
  (this->PrimitiveSelectionCDF).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->PrimitiveSelectionCDF).AllocatorInstance,0,piVar1);
  }
  this_00 = &this->StringKeyToInstanceCount;
  this->SelectorAttributeId = -1;
  this->NumInputPoints = 0;
  this->SelectedMeshAttributeId = -1;
  bVar4 = 1 < *(int *)&(this->StringKeyToInstanceCount).field_0x48;
  if (!bVar4) {
    TSet<TTuple<int,unsigned_int>,TDefaultMapHashableKeyFuncs<int,unsigned_int,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<int,unsigned_int>,TDefaultMapHashableKeyFuncs<int,unsigned_int,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar2 = &(this->StringKeyToInstanceCount).field_0xc;
  *(undefined4 *)&(this->StringKeyToInstanceCount).field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)this_00,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->StringKeyToInstanceCount).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StringKeyToInstanceCount).field_0x34 = 0;
  iVar3 = *(int *)&(this->StringKeyToInstanceCount).field_0x2c;
  *(undefined4 *)&(this->StringKeyToInstanceCount).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->StringKeyToInstanceCount).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->StringKeyToInstanceCount).field_0x10,
               0);
  }
  if (bVar4) {
    *(undefined4 *)&(this->StringKeyToInstanceCount).field_0x48 = 1;
    TSet<TTuple<int,unsigned_int>,TDefaultMapHashableKeyFuncs<int,unsigned_int,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<int,unsigned_int>,TDefaultMapHashableKeyFuncs<int,unsigned_int,0>,FDefaultSetAllocator>
              *)this_00);
  }
  this->AnalysisDataIndex = -1;
  this->bPrimitiveDescriptorsCreated = false;
  DestructItems<FPCGProceduralISMComponentDescriptor,int>
            ((FPCGProceduralISMComponentDescriptor *)
             (this->PrimitiveDescriptors).AllocatorInstance.Data,
             (this->PrimitiveDescriptors).ArrayNum);
  piVar1 = &(this->PrimitiveDescriptors).ArrayMax;
  (this->PrimitiveDescriptors).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xe0,8,0,&(this->PrimitiveDescriptors).AllocatorInstance,0,piVar1);
  }
  this->CustomFloatCount = 0;
  this->bStaticMeshesLoaded = false;
  this->bPrimitivesSetUp = false;
  this->NumPrimitivesSetup = 0;
  this->bRegisteredPrimitives = false;
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->LoadHandle != (TSharedPtr<FStreamableHandle,1> *)&local_18) {
    (this->LoadHandle).Object = (FStreamableHandle *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->LoadHandle).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// SetupPrimitives @ 149777d50

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

bool __thiscall
UPCGStaticMeshSpawnerDataProvider::SetupPrimitives
          (UPCGStaticMeshSpawnerDataProvider *this,FPCGContext *param_1,UPCGDataBinding *param_2)

{
  int *piVar1;
  TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FPCGProceduralISMComponentDescriptor *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  TConsoleVariableData<bool> *pTVar8;
  FSharedReferencer<1> FVar9;
  char cVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  UPCGSettings *pUVar14;
  FPCGSpawnerPrimitives *pFVar15;
  UObject *pUVar16;
  UClass *pUVar17;
  AActor *pAVar18;
  TSharedPtr<IPCGPrimitiveFactoryISMBase,1> *pTVar19;
  IPCGGraphExecutionSource *pIVar20;
  longlong *plVar21;
  UWorld *this_00;
  longlong lVar22;
  FScriptContainerElement *pFVar23;
  TReferenceControllerBase<1> *pTVar24;
  TPersistentObjectPtr<FSoftObjectPath> *this_01;
  UPCGStaticMeshSpawnerSettings *pUVar25;
  AActor *pAVar26;
  FPCGContext *this_02;
  undefined1 auStackY_178 [32];
  undefined1 local_128 [16];
  TSharedPtr<IPCGPrimitiveFactoryISMBase,1> local_118;
  ForAnyElementType local_108;
  undefined8 local_100;
  AActor *local_f8;
  undefined4 local_f0;
  FPCGContext *local_e8;
  UPCGStaticMeshSpawnerSettings *local_e0;
  undefined8 local_d8;
  FSharedReferencer<1> local_d0;
  undefined1 local_c8 [56];
  TSharedPtr<IPCGPrimitiveFactoryISMBase,1> local_90;
  undefined1 local_80 [56];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pAVar26 = (AActor *)0x0;
  local_f0 = 0;
  if ((this->PrimitiveDescriptors).ArrayNum != 0) {
    pUVar16 = (UObject *)this->_padding_;
    local_e8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar16 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar16);
    }
    pUVar14 = (UPCGSettings *)(**(code **)(*(longlong *)pUVar16 + 0x2b0))(pUVar16);
    local_e0 = CastChecked<UPCGStaticMeshSpawnerSettings,UPCGSettings_const_>(pUVar14);
    local_c8._16_8_ = this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UObject *)local_c8._16_8_ != (UObject *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_c8._16_8_);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UObject *)local_c8._16_8_ != (UObject *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_c8._16_8_);
    }
    pFVar15 = UPCGDataBinding::FindMeshSpawnerPrimitives
                        (param_2,(TObjectPtr<UComputeKernel_const_>)((longlong)local_c8 + 0x10));
    if (pFVar15 != (FPCGSpawnerPrimitives *)0x0) {
      pFVar4 = (this->PrimitiveDescriptors).AllocatorInstance.Data;
      iVar13 = (this->PrimitiveDescriptors).ArrayNum;
      pFVar23 = pFVar4 + (longlong)iVar13 * 0xe0;
      do {
        this_01 = (TPersistentObjectPtr<FSoftObjectPath> *)(pFVar4 + 0x10);
        if ((this->PrimitiveDescriptors).ArrayNum != iVar13) {
          local_128[0] = 0;
          `TCheckedPointerIterator<FPCGProceduralISMComponentDescriptor,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_128);
        }
        pTVar8 = PCGStaticMeshSpawnerDataInterface::CVarCreatePrimitivesComponentless.Ref;
        if ((FScriptContainerElement *)&this_01[-1].ObjectID.SubPathString == pFVar23) {
          pTVar24 = (TReferenceControllerBase<1> *)(pFVar15->PrimitiveFactory).Object;
          local_118.Object = (IPCGPrimitiveFactoryISMBase *)0x0;
          local_118.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          if (pTVar24 != (TReferenceControllerBase<1> *)0x0) {
            local_c8._32_8_ = (pFVar15->PrimitiveFactory).SharedReferenceCount.ReferenceController;
            if ((TReferenceControllerBase<1> *)local_c8._32_8_ != (TReferenceControllerBase<1> *)0x0
               ) {
              LOCK();
              ((TReferenceControllerBase<1> *)local_c8._32_8_)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)((TReferenceControllerBase<1> *)local_c8._32_8_)->SharedReferenceCount + 1)
              ;
              UNLOCK();
            }
            local_c8._24_4_ = 0;
            local_c8._28_4_ = 0;
            local_118.Object = (IPCGPrimitiveFactoryISMBase *)pTVar24;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&local_118.SharedReferenceCount,(FSharedReferencer<1> *)(local_c8 + 0x20));
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)local_c8._32_8_);
            pTVar24 = (TReferenceControllerBase<1> *)local_118.Object;
            pUVar25 = local_e0;
            this_02 = local_e8;
            goto LAB_14977832a;
          }
          bVar11 = IsInParallelGameThread();
          if (((!bVar11) && (bVar11 = IsInGameThread(), !bVar11)) &&
             (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<6409875433831007945>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                  ,0x6c9,"GetShadowIndex() == 0"), bVar11)) {
            pcVar6 = (code *)swi(3);
            uVar12 = (*pcVar6)();
            return (bool)uVar12;
          }
          pAVar18 = pAVar26;
          if (pTVar8->ShadowedValue[0] == false) {
LAB_149777fcc:
            bVar11 = false;
          }
          else {
            pAVar18 = (AActor *)&DAT_00000001;
            pTVar19 = PCGPrimitiveFactoryHelpers::GetFastGeoPrimitiveFactory
                                ((TSharedPtr<IPCGPrimitiveFactoryISMBase,1> *)(local_c8 + 0x28));
            if (pTVar19->Object == (IPCGPrimitiveFactoryISMBase *)0x0) goto LAB_149777fcc;
            bVar11 = true;
          }
          if (pAVar18 != (AActor *)0x0) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)local_c8._48_8_);
          }
          this_02 = local_e8;
          if (((bVar11) &&
              ((local_e8->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0)) &&
             (bVar11 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_e8->ExecutionSource), bVar11
             )) {
            pIVar20 = TWeakInterfacePtr<IPCGGraphExecutionSource>::operator->
                                (&this_02->ExecutionSource);
            plVar21 = (longlong *)(**(code **)((longlong)*pIVar20 + 0x18))(pIVar20);
            this_00 = (UWorld *)(**(code **)(*plVar21 + 0x20))(plVar21);
            if ((this_00 == (UWorld *)0x0) || (bVar11 = UWorld::IsGameWorld(this_00), !bVar11))
            goto LAB_14977805f;
            pTVar19 = PCGPrimitiveFactoryHelpers::GetFastGeoPrimitiveFactory(&local_90);
            if (&local_118 != pTVar19) {
              local_118.Object = pTVar19->Object;
              pTVar19->Object = (IPCGPrimitiveFactoryISMBase *)0x0;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        (&local_118.SharedReferenceCount,&pTVar19->SharedReferenceCount);
            }
          }
          else {
LAB_14977805f:
            local_d0.ReferenceController = ::operator_new(0x68);
            if (local_d0.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
              local_d0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
              pTVar24 = (TReferenceControllerBase<1> *)&DAT_00000010;
            }
            else {
              (local_d0.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
              pTVar24 = local_d0.ReferenceController + 1;
              (local_d0.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
              (local_d0.ReferenceController)->_padding_ =
                   (longlong)
                   &
                   ___7__TIntrusiveReferenceController_VFPCGPrimitiveFactoryPISMC___00_SharedPointerInternals__6B_
              ;
              local_d0.ReferenceController[3]._padding_ = 0;
              local_d0.ReferenceController[1]._padding_ =
                   (longlong)&___7FPCGPrimitiveFactoryPISMC__6B_;
              local_d0.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
              local_d0.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
              local_d0.ReferenceController[2]._padding_ = 0;
              local_d0.ReferenceController[2].SharedReferenceCount = (atomic<int>)0x0;
              local_d0.ReferenceController[2].WeakReferenceCount = (atomic<int>)0x0;
              local_d0.ReferenceController[3].SharedReferenceCount = (atomic<int>)0x0;
              local_d0.ReferenceController[3].WeakReferenceCount = (atomic<int>)0x0;
              local_d0.ReferenceController[4]._padding_ = 0;
              local_d0.ReferenceController[4].SharedReferenceCount = (atomic<int>)0x0;
              local_d0.ReferenceController[4].WeakReferenceCount = (atomic<int>)0x0;
              local_d0.ReferenceController[5]._padding_ = 0;
              local_d0.ReferenceController[5].SharedReferenceCount = (atomic<int>)0x0;
              local_d0.ReferenceController[5].WeakReferenceCount = (atomic<int>)0x0;
              local_d0.ReferenceController[6]._padding_ = 0;
              if ((pTVar24 == (TReferenceControllerBase<1> *)0x0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InObject != nullptr",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x246,L""), bVar11)) {
                pcVar6 = (code *)swi(3);
                uVar12 = (*pcVar6)();
                return (bool)uVar12;
              }
              LOCK();
              (local_d0.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)((int)(local_d0.ReferenceController)->SharedReferenceCount + 1);
              UNLOCK();
            }
            FVar9.ReferenceController = local_d0.ReferenceController;
            local_d8 = 0;
            local_118.Object = (IPCGPrimitiveFactoryISMBase *)pTVar24;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&local_118.SharedReferenceCount,&local_d0);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_d0.ReferenceController);
            local_90.SharedReferenceCount.ReferenceController = FVar9.ReferenceController;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_90.SharedReferenceCount.ReferenceController);
          pTVar24 = (TReferenceControllerBase<1> *)local_118.Object;
          local_c8._0_8_ = local_118.Object;
          local_c8._8_8_ = local_118.SharedReferenceCount.ReferenceController;
          if (local_118.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          if (pFVar15 != (FPCGSpawnerPrimitives *)local_c8) {
            (pFVar15->PrimitiveFactory).Object = (IPCGRuntimePrimitiveFactory *)local_118.Object;
            local_c8._0_8_ = (TReferenceControllerBase<1> *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&(pFVar15->PrimitiveFactory).SharedReferenceCount,
                       (FSharedReferencer<1> *)(local_c8 + 8));
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)local_c8._8_8_);
          local_108.Data = (FScriptContainerElement *)0x0;
          local_100 = 0;
          local_f8 = (AActor *)0x0;
          if ((TArray<FPCGProceduralISMComponentDescriptor,TSizedDefaultAllocator<32>_> *)&local_108
              != &this->PrimitiveDescriptors) {
            DestructItems<FPCGProceduralISMComponentDescriptor,int>
                      ((FPCGProceduralISMComponentDescriptor *)0x0,0);
            iVar13 = (this->PrimitiveDescriptors).ArrayNum;
            pFVar5 = (FPCGProceduralISMComponentDescriptor *)
                     (this->PrimitiveDescriptors).AllocatorInstance.Data;
            local_100 = CONCAT44(local_100._4_4_,iVar13);
            if ((iVar13 == 0) && (local_100._4_4_ == 0)) {
              local_100 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0xe0,8,iVar13,local_100._4_4_,&local_108,iVar13,
                         (int *)((longlong)&local_100 + 4));
              ConstructItems<FPCGProceduralISMComponentDescriptor,FPCGProceduralISMComponentDescriptor,int>
                        (local_108.Data,pFVar5,iVar13);
            }
          }
          pUVar25 = local_e0;
          pUVar16 = TPersistentObjectPtr<FSoftObjectPath>::Get
                              ((TPersistentObjectPtr<FSoftObjectPath> *)&local_e0->TargetActor);
          if (pUVar16 == (UObject *)0x0) {
LAB_149778280:
            local_f8 = FPCGContext::GetTargetActor(this_02,(UPCGSpatialData *)0x0);
          }
          else {
            pUVar17 = Z_Construct_UClass_AActor_NoRegister();
            iVar13 = (int)pUVar17->_padding_;
            if ((*(int *)(*(longlong *)&pUVar16->field_0x10 + 0x38) < iVar13) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&pUVar16->field_0x10 + 0x30) + (longlong)iVar13 * 8) !=
                &pUVar17->_padding_)) goto LAB_149778280;
            pAVar18 = (AActor *)
                      TPersistentObjectPtr<FSoftObjectPath>::Get
                                ((TPersistentObjectPtr<FSoftObjectPath> *)&pUVar25->TargetActor);
            if (pAVar18 == (AActor *)0x0) {
LAB_149778277:
              local_f8 = pAVar26;
            }
            else {
              pUVar17 = Z_Construct_UClass_AActor_NoRegister();
              iVar13 = (int)pUVar17->_padding_;
              if ((*(int *)(pAVar18->_padding_ + 0x38) < iVar13) ||
                 (local_f8 = pAVar18,
                 (longlong *)
                 *(undefined1 **)(*(longlong *)(pAVar18->_padding_ + 0x30) + (longlong)iVar13 * 8)
                 != &pUVar17->_padding_)) goto LAB_149778277;
            }
          }
          if ((pTVar24 == (TReferenceControllerBase<1> *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar11)) {
            pcVar6 = (code *)swi(3);
            uVar12 = (*pcVar6)();
            return (bool)uVar12;
          }
          (**(code **)(*(longlong *)&((IPCGPrimitiveFactoryISMBase *)pTVar24)->field_0x0 + 0x28))
                    (pTVar24,&local_108);
          DestructItems<FPCGProceduralISMComponentDescriptor,int>
                    ((FPCGProceduralISMComponentDescriptor *)local_108.Data,(int)local_100);
          if ((FPCGProceduralISMComponentDescriptor *)local_108.Data !=
              (FPCGProceduralISMComponentDescriptor *)0x0) {
            FMemory::Free(local_108.Data);
          }
LAB_14977832a:
          if ((pTVar24 == (TReferenceControllerBase<1> *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar11)) {
            pcVar6 = (code *)swi(3);
            uVar12 = (*pcVar6)();
            return (bool)uVar12;
          }
          cVar10 = (**(code **)(pTVar24->_padding_ + 0x30))(pTVar24,this_02);
          if (cVar10 == '\0') {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_118.SharedReferenceCount.ReferenceController);
            return false;
          }
          if (pUVar25->bApplyMeshBoundsToPoints != false) {
            while( true ) {
              if ((pTVar24 == (TReferenceControllerBase<1> *)0x0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar11)) {
                pcVar6 = (code *)swi(3);
                uVar12 = (*pcVar6)();
                return (bool)uVar12;
              }
              iVar13 = (**(code **)(pTVar24->_padding_ + 8))(pTVar24);
              if (iVar13 <= (int)pAVar26) break;
              pTVar2 = &this->PrimitiveMeshBounds;
              if ((pTVar24 == (TReferenceControllerBase<1> *)0x0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar11)) {
                pcVar6 = (code *)swi(3);
                uVar12 = (*pcVar6)();
                return (bool)uVar12;
              }
              pFVar23 = (FScriptContainerElement *)
                        (**(code **)(pTVar24->_padding_ + 0x38))(pTVar24,local_80,pAVar26);
              pFVar4 = (pTVar2->AllocatorInstance).Data;
              if (((pFVar4 <= pFVar23) &&
                  (pFVar23 < pFVar4 + (longlong)(this->PrimitiveMeshBounds).ArrayMax * 0x38)) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar11)) {
                pcVar6 = (code *)swi(3);
                uVar12 = (*pcVar6)();
                return (bool)uVar12;
              }
              iVar13 = (this->PrimitiveMeshBounds).ArrayNum;
              piVar1 = &(this->PrimitiveMeshBounds).ArrayMax;
              if (iVar13 == *piVar1) {
                iVar13 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x838,&pTVar2->AllocatorInstance,piVar1);
              }
              (this->PrimitiveMeshBounds).ArrayNum = iVar13 + 1;
              uVar7 = *(undefined8 *)(pFVar23 + 8);
              lVar22 = (longlong)iVar13 * 0x38;
              pFVar4 = (pTVar2->AllocatorInstance).Data;
              pAVar26 = (AActor *)(ulonglong)((int)pAVar26 + 1);
              *(undefined8 *)(pFVar4 + lVar22) = *(undefined8 *)pFVar23;
              *(undefined8 *)(pFVar4 + lVar22 + 8) = uVar7;
              uVar7 = *(undefined8 *)(pFVar23 + 0x18);
              *(undefined8 *)(pFVar4 + lVar22 + 0x10) = *(undefined8 *)(pFVar23 + 0x10);
              *(undefined8 *)(pFVar4 + lVar22 + 0x10 + 8) = uVar7;
              uVar7 = *(undefined8 *)(pFVar23 + 0x28);
              *(undefined8 *)(pFVar4 + lVar22 + 0x20) = *(undefined8 *)(pFVar23 + 0x20);
              *(undefined8 *)(pFVar4 + lVar22 + 0x20 + 8) = uVar7;
              *(undefined8 *)(pFVar4 + lVar22 + 0x30) = *(undefined8 *)(pFVar23 + 0x30);
            }
          }
          if ((pTVar24 == (TReferenceControllerBase<1> *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar11)) {
            pcVar6 = (code *)swi(3);
            uVar12 = (*pcVar6)();
            return (bool)uVar12;
          }
          iVar13 = (**(code **)(pTVar24->_padding_ + 8))(pTVar24);
          this->NumPrimitivesSetup = iVar13;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_118.SharedReferenceCount.ReferenceController);
          return true;
        }
        pUVar16 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_01);
        if (pUVar16 == (UObject *)0x0) {
LAB_149777f16:
          bVar11 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<1579353040601744150>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\Elements\\PCGStaticMeshSpawnerDataInterface.cpp"
                              ,0x316,"Desc.StaticMesh.IsValid()");
          if (bVar11) {
            pcVar6 = (code *)swi(3);
            uVar12 = (*pcVar6)();
            return (bool)uVar12;
          }
        }
        else {
          pUVar17 = Z_Construct_UClass_UStaticMesh_NoRegister();
          iVar3 = (int)pUVar17->_padding_;
          if ((*(int *)(*(longlong *)&pUVar16->field_0x10 + 0x38) < iVar3) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar16->field_0x10 + 0x30) + (longlong)iVar3 * 8) !=
              &pUVar17->_padding_)) goto LAB_149777f16;
          pAVar18 = (AActor *)TPersistentObjectPtr<FSoftObjectPath>::Get(this_01);
          if (pAVar18 == (AActor *)0x0) {
LAB_149777ed3:
            pAVar18 = pAVar26;
          }
          else {
            pUVar17 = Z_Construct_UClass_UStaticMesh_NoRegister();
            iVar3 = (int)pUVar17->_padding_;
            if ((*(int *)(pAVar18->_padding_ + 0x38) < iVar3) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pAVar18->_padding_ + 0x30) + (longlong)iVar3 * 8) !=
                &pUVar17->_padding_)) goto LAB_149777ed3;
          }
          cVar10 = (**(code **)((longlong)
                                (pAVar18->ReplicatedMovement).AngularVelocity.field0_0x0._s_0.Y +
                               0x10))();
          if (cVar10 != '\0') {
            return false;
          }
        }
        pFVar4 = (FScriptContainerElement *)&this_01[5].ObjectID;
      } while( true );
    }
  }
  return true;
}

// StaticRegisterNativesUPCGStaticMeshSpawnerDataProvider @ 1497788c0

void __cdecl
UPCGStaticMeshSpawnerDataProvider::StaticRegisterNativesUPCGStaticMeshSpawnerDataProvider(void)

{
  return;
}

