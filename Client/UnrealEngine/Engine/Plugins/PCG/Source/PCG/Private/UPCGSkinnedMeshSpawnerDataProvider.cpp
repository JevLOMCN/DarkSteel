// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 12

// StaticClass @ 14972b390

UClass * __cdecl UPCGSkinnedMeshSpawnerDataProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSkinnedMeshSpawnerDataProvider.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSkinnedMeshSpawnerDataProvider",
               &Z_Registration_Info_UClass_UPCGSkinnedMeshSpawnerDataProvider.InnerSingleton,
               StaticRegisterNativesUPCGSkinnedMeshSpawnerDataProvider,0x158,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGSkinnedMeshSpawnerDataProvider>,
               InternalVTableHelperCtorCaller<UPCGSkinnedMeshSpawnerDataProvider>,local_res8,
               UPCGComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSkinnedMeshSpawnerDataProvider.InnerSingleton;
}

// UPCGSkinnedMeshSpawnerDataProvider @ 14973c670

UPCGSkinnedMeshSpawnerDataProvider * __thiscall
UPCGSkinnedMeshSpawnerDataProvider::UPCGSkinnedMeshSpawnerDataProvider
          (UPCGSkinnedMeshSpawnerDataProvider *this,FVTableHelper *param_1)

{
  UPCGComputeDataProvider::UPCGComputeDataProvider((UPCGComputeDataProvider *)this,param_1);
  this->SelectorAttributeId = -1;
  this->_padding_ = (longlong)&___7UPCGSkinnedMeshSpawnerDataProvider__6B_;
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
  this->AnalysisDataIndex = -1;
  return this;
}

// UPCGSkinnedMeshSpawnerDataProvider @ 14973c760

UPCGSkinnedMeshSpawnerDataProvider * __thiscall
UPCGSkinnedMeshSpawnerDataProvider::UPCGSkinnedMeshSpawnerDataProvider
          (UPCGSkinnedMeshSpawnerDataProvider *this,FObjectInitializer *param_1)

{
  UPCGComputeDataProvider::UPCGComputeDataProvider((UPCGComputeDataProvider *)this,param_1);
  this->SelectorAttributeId = -1;
  this->_padding_ = (longlong)&___7UPCGSkinnedMeshSpawnerDataProvider__6B_;
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
  this->AnalysisDataIndex = -1;
  return this;
}

// ~UPCGSkinnedMeshSpawnerDataProvider @ 14973e750

void __thiscall
UPCGSkinnedMeshSpawnerDataProvider::~UPCGSkinnedMeshSpawnerDataProvider
          (UPCGSkinnedMeshSpawnerDataProvider *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UPCGSkinnedMeshSpawnerDataProvider__6B_;
  DestructItems<FPCGSoftSkinnedMeshComponentDescriptor,int>
            ((FPCGSoftSkinnedMeshComponentDescriptor *)
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

// CreatePrimitiveDescriptors @ 14974bf60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014974d0d1) */
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
UPCGSkinnedMeshSpawnerDataProvider::CreatePrimitiveDescriptors
          (UPCGSkinnedMeshSpawnerDataProvider *this,FPCGContext *param_1,UPCGDataBinding *param_2)

{
  int *piVar1;
  TMap<int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,unsigned_int,0>_>
  *this_00;
  ulonglong uVar2;
  FScriptContainerElement *pFVar3;
  UPCGComputeKernel *pUVar4;
  IPCGGraphExecutionSource *pIVar5;
  UPCGSkinnedMeshInstanceDataPackerBase *pUVar6;
  UPCGSkinnedMeshSelector *pUVar7;
  undefined1 *puVar8;
  code *pcVar9;
  FName FVar10;
  UPCGSkinnedMeshSpawnerDataProvider *pUVar11;
  UPCGDataBinding *pUVar12;
  TMap<int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,unsigned_int,0>_>
  *pTVar13;
  FPCGMetadataDomainID FVar14;
  bool bVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  UPCGSettings *pUVar20;
  UPCGSkinnedMeshSpawnerSettings *pUVar21;
  UObject *pUVar22;
  UClass *pUVar23;
  AActor *pAVar24;
  FText *pFVar25;
  FTextFormat *pFVar26;
  UPCGComponent *pUVar27;
  undefined1 (*pauVar28) [16];
  FText *pFVar29;
  FString *pFVar30;
  TBox<double> *pTVar31;
  FPCGSpawnerPrimitives *pFVar32;
  byte bVar33;
  TRefCountPtr<ITextData> TVar34;
  longlong lVar35;
  undefined1 *puVar36;
  int iVar37;
  uint *puVar38;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar39;
  FSoftSkinnedMeshComponentDescriptor *this_01;
  FPCGAttributePropertySelector *pFVar40;
  int *piVar41;
  FScriptContainerElement *pFVar42;
  FPCGAttributePropertySelector *this_02;
  undefined1 *puVar43;
  uint *puVar44;
  uint uVar45;
  int *piVar46;
  TArray<FPCGSoftSkinnedMeshComponentDescriptor,TSizedDefaultAllocator<32>_> *pTVar47;
  FScriptContainerElement *pFVar48;
  undefined1 auStackY_518 [32];
  undefined1 local_4c8;
  undefined1 local_4c7 [7];
  UPCGSkinnedMeshSpawnerDataProvider *local_4c0;
  FName local_4b8;
  UPCGComponent *local_4b0;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> local_4a8;
  uint local_498 [3];
  uint local_48c;
  FScriptContainerElement *local_488;
  TArray<FPCGSoftSkinnedMeshComponentDescriptor,TSizedDefaultAllocator<32>_> *local_480;
  UPCGSkinnedMeshSpawnerSettings *local_478;
  undefined8 local_470;
  FName local_468;
  FPCGContext *local_460;
  UPCGDataBinding *local_458;
  FString local_450;
  FSoftObjectPath local_440;
  int local_420;
  int local_41c;
  int *local_418;
  UObject *local_410;
  undefined1 local_408 [16];
  TMap<int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,unsigned_int,0>_>
  *local_3f8;
  int iStack_3f0;
  uint uStack_3ec;
  undefined1 *local_3e8;
  undefined4 uStack_3e0;
  int iStack_3dc;
  int local_3d8;
  undefined4 uStack_3d4;
  int iStack_3d0;
  undefined4 uStack_3cc;
  TMap<int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,unsigned_int,0>_>
  *local_3c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3c0;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined4 uStack_390;
  uint *local_388;
  uint *local_380;
  wchar_t *local_378;
  int iStack_370;
  undefined4 uStack_36c;
  FText local_368;
  FText local_358;
  FText local_348;
  FString local_338;
  FText local_328;
  FText local_318;
  FText local_308;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> local_2f8;
  TArrayView<FPCGAttributePropertyInputSelector_const_,int> local_2e8;
  FText local_2d8;
  FText local_2c8;
  TStringView<wchar_t> local_2b8;
  FText local_2a8;
  FName local_298;
  FPCGMetadataDomainID FStack_290;
  FPCGAttributeIdentifier local_278;
  FText local_258;
  FText local_248;
  FText local_238;
  FTextFormat local_228;
  FTextFormat local_218;
  FText local_208;
  FTextFormat local_1f8;
  FText local_1e8;
  FTextFormat local_1d8;
  FText local_1c8;
  undefined1 local_1b8 [16];
  FText local_1a8;
  FTextFormat local_198;
  FTextFormat local_188 [2];
  undefined4 local_15c;
  undefined1 local_158 [160];
  longlong local_b8;
  FSoftObjectPath local_b0;
  TArray<FName,TSizedDefaultAllocator<32>_> local_90;
  TBox<double> local_78;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_518;
  pTVar47 = &this->PrimitiveDescriptors;
  local_4c0 = this;
  local_480 = pTVar47;
  local_460 = param_1;
  local_458 = param_2;
  DestructItems<FPCGSoftSkinnedMeshComponentDescriptor,int>
            ((FPCGSoftSkinnedMeshComponentDescriptor *)(pTVar47->AllocatorInstance).Data,
             (this->PrimitiveDescriptors).ArrayNum);
  piVar41 = &(this->PrimitiveDescriptors).ArrayMax;
  (this->PrimitiveDescriptors).ArrayNum = 0;
  if (*piVar41 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xd8,8,0,&pTVar47->AllocatorInstance,0,piVar41);
  }
  pUVar22 = (UObject *)this->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar22 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar22);
  }
  pUVar20 = (UPCGSettings *)(**(code **)(*(longlong *)pUVar22 + 0x2b0))(pUVar22);
  pUVar21 = CastChecked<UPCGSkinnedMeshSpawnerSettings,UPCGSettings_const_>(pUVar20);
  local_478 = pUVar21;
  pUVar22 = TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&pUVar21->TargetActor);
  if (pUVar22 == (UObject *)0x0) {
LAB_14974c091:
    pAVar24 = FPCGContext::GetTargetActor(param_1,(UPCGSpatialData *)0x0);
  }
  else {
    pUVar23 = Z_Construct_UClass_AActor_NoRegister();
    iVar19 = (int)pUVar23->_padding_;
    if ((*(int *)(*(longlong *)&pUVar22->field_0x10 + 0x38) < iVar19) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar22->field_0x10 + 0x30) + (longlong)iVar19 * 8) !=
        &pUVar23->_padding_)) goto LAB_14974c091;
    pAVar24 = (AActor *)
              TPersistentObjectPtr<FSoftObjectPath>::Get
                        ((TPersistentObjectPtr<FSoftObjectPath> *)&pUVar21->TargetActor);
    if (pAVar24 == (AActor *)0x0) {
LAB_14974c08d:
      pAVar24 = (AActor *)0x0;
    }
    else {
      pUVar23 = Z_Construct_UClass_AActor_NoRegister();
      iVar19 = (int)pUVar23->_padding_;
      if ((*(int *)(pAVar24->_padding_ + 0x38) < iVar19) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pAVar24->_padding_ + 0x30) + (longlong)iVar19 * 8) !=
          &pUVar23->_padding_)) goto LAB_14974c08d;
    }
  }
  FVar10 = PCGPinConstants::DefaultInputLabel;
  if ((pUVar21->MeshSelectorParameters).field0_0x0.DebugPtr == (UPCGSkinnedMeshSelector *)0x0) {
    bVar15 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<2517564130739618254>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\Elements\\PCGSkinnedMeshSpawnerDataInterface.cpp"
                        ,0x1ce,"Settings->MeshSelectorParameters");
    if (bVar15) {
code_r0x00014974c10d:
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  else if (pAVar24 == (AActor *)0x0) {
    bVar15 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<2517564130739618254>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\Elements\\PCGSkinnedMeshSpawnerDataInterface.cpp"
                        ,0x1ce,"TargetActor");
    if (bVar15) goto code_r0x00014974c10d;
  }
  else {
    pUVar4 = (UPCGComputeKernel *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UPCGComputeKernel *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    UPCGDataBinding::GetCachedKernelPinDataDesc(param_2,&local_4a8,pUVar4,FVar10,true);
    if (local_4a8.Object == (FPCGDataCollectionDesc *)0x0) {
      bVar15 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<2517564130739618261>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\Elements\\PCGSkinnedMeshSpawnerDataInterface.cpp"
                          ,0x1d5,"InputDataDesc");
      if (bVar15) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    else {
      uVar16 = FPCGDataCollectionDesc::ComputeTotalElementCount(local_4a8.Object);
      local_48c = uVar16;
      if (uVar16 != 0) {
        if (uVar16 < 0x1000000) {
          if (((((param_1->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0) &&
               (bVar15 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource),
               bVar15)) &&
              (pIVar5 = (param_1->ExecutionSource).InterfaceInstance,
              pIVar5 != (IPCGGraphExecutionSource *)0x0)) &&
             (pUVar27 = (UPCGComponent *)(**(code **)((longlong)*pIVar5 + 8))(),
             pUVar27 != (UPCGComponent *)0x0)) {
            pUVar23 = Z_Construct_UClass_UPCGComponent_NoRegister();
            iVar19 = (int)pUVar23->_padding_;
            if ((iVar19 <= *(int *)(pUVar27->_padding_ + 0x38)) &&
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar27->_padding_ + 0x30) + (longlong)iVar19 * 8) ==
                &pUVar23->_padding_)) {
              pUVar6 = (pUVar21->InstanceDataPackerParameters).field0_0x0.DebugPtr;
              if (pUVar6 == (UPCGSkinnedMeshInstanceDataPackerBase *)0x0) {
                local_398 = 0;
                pauVar28 = (undefined1 (*) [16])&local_398;
                uStack_390 = 0xffffffff;
              }
              else {
                pauVar28 = (undefined1 (*) [16])
                           (**(code **)(*(longlong *)pUVar6 + 0x2c0))(pUVar6,local_1b8);
              }
              local_408._0_12_ = ZEXT412(0xffffffff) << 0x40;
              local_4b0 = pUVar27;
              if (*(int *)(*pauVar28 + 8) != -1) {
                local_408 = *pauVar28;
                if (*(int *)(*pauVar28 + 8) != -1) {
                  this_02 = local_408._0_8_;
                  pFVar40 = this_02 + *(int *)(*pauVar28 + 8);
                  if (this_02 != pFVar40) {
                    do {
                      local_4b8 = this_02->AttributeName;
                      bVar15 = FPCGAttributePropertySelector::IsBasicAttribute(this_02);
                      if ((bVar15) &&
                         (local_4b8 != PCGMetadataAttributeConstants::LastAttributeName)) {
                        local_470 = 0;
                        if (local_4b8 == (FName)0x0) {
                          pFVar25 = FText::FromName(&local_1a8,&local_4b8);
                          pFVar29 = FText::AsLocalizable_Advanced_LocText
                                              (&local_368,L"PCGSkinnedMeshSpawnerDataInterface",
                                               L"InstanceDataAttributeInvalid",
                                               L"Invalid instance data attribute specified \'{0}\'."
                                              );
                          pFVar26 = FTextFormat::FTextFormat(&local_198,pFVar29,Default);
                          pFVar25 = FText::Format<FText>(&local_238,pFVar26,pFVar25);
                          PCGComputeHelpers::LogKernelError(param_1,(UPCGSettings *)pUVar21,pFVar25)
                          ;
                          TVar34.Reference = local_368.TextData.Reference;
                          if (local_238.TextData.Reference != (ITextData *)0x0) {
                            (**(code **)((longlong)*local_238.TextData.Reference + 0x10))();
                            TVar34.Reference = local_368.TextData.Reference;
                          }
                          goto LAB_14974c58e;
                        }
                        if ((local_4a8.Object == (FPCGDataCollectionDesc *)0x0) &&
                           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                               ("IsValid()",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                                ,0x458,L""), bVar15)) {
                          pcVar9 = (code *)swi(3);
                          (*pcVar9)();
                          return;
                        }
                        local_298 = local_4b8;
                        FStack_290 = PCGMetadataDomainID::Default;
                        FVar14 = FStack_290;
                        FStack_290._0_8_ = PCGMetadataDomainID::Default._0_8_;
                        local_278.Name = local_4b8;
                        local_278.MetadataDomain.Flag = FStack_290.Flag;
                        local_278.MetadataDomain._1_3_ = FStack_290._1_3_;
                        local_278.MetadataDomain.CustomFlag = FStack_290.CustomFlag;
                        local_278.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
                        FStack_290 = FVar14;
                        bVar15 = FPCGDataCollectionDesc::ContainsAttributeOnAnyData
                                           (local_4a8.Object,&local_278);
                        if (!bVar15) {
                          pFVar25 = FText::FromName(&local_1c8,&local_4b8);
                          pFVar29 = FText::AsLocalizable_Advanced_LocText
                                              (&local_348,L"PCGSkinnedMeshSpawnerDataInterface",
                                               L"InstanceDataAttributeNotFound",
                                               L"Instance data attribute \'{0}\' not found.");
                          pFVar26 = FTextFormat::FTextFormat(&local_228,pFVar29,Default);
                          pFVar25 = FText::Format<FText>(&local_358,pFVar26,pFVar25);
                          PCGComputeHelpers::LogKernelError(param_1,(UPCGSettings *)pUVar21,pFVar25)
                          ;
                          TVar34.Reference = local_348.TextData.Reference;
                          if (local_358.TextData.Reference != (ITextData *)0x0) {
                            (**(code **)((longlong)*local_358.TextData.Reference + 0x10))();
                            TVar34.Reference = local_348.TextData.Reference;
                          }
                          goto LAB_14974c58e;
                        }
                      }
                      else {
                        pFVar30 = FPCGAttributePropertySelector::ToString(this_02,&local_338,false);
                        FText::FromString(&local_328,pFVar30);
                        if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_338.Data.AllocatorInstance.Data);
                        }
                        pFVar25 = FText::AsLocalizable_Advanced_LocText
                                            (&local_308,L"PCGSkinnedMeshSpawnerDataInterface",
                                             L"OnlyBasicAttributesSupported",
                                             L"Attribute \'{0}\' is invalid. GPU instance packer implementation currently only supports basic attributes."
                                            );
                        pFVar26 = FTextFormat::FTextFormat(&local_218,pFVar25,Default);
                        pFVar25 = FText::Format<FText>(&local_318,pFVar26,&local_328);
                        PCGComputeHelpers::LogKernelError(param_1,(UPCGSettings *)pUVar21,pFVar25);
                        TVar34.Reference = local_308.TextData.Reference;
                        if (local_318.TextData.Reference != (ITextData *)0x0) {
                          (**(code **)((longlong)*local_318.TextData.Reference + 0x10))();
                          TVar34.Reference = local_308.TextData.Reference;
                        }
LAB_14974c58e:
                        if (TVar34.Reference != (ITextData *)0x0) {
                          (**(code **)((longlong)*TVar34.Reference + 0x10))();
                        }
                      }
                      this_02 = this_02 + 1;
                    } while (this_02 != pFVar40);
                    pTVar47 = local_480;
                  }
                  this = local_4c0;
                  local_2f8.Object = local_4a8.Object;
                  local_2f8.SharedReferenceCount.ReferenceController =
                       local_4a8.SharedReferenceCount.ReferenceController;
                  if (local_4a8.SharedReferenceCount.ReferenceController !=
                      (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    (local_4a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                         (atomic<int>)
                         ((int)(local_4a8.SharedReferenceCount.ReferenceController)->
                               SharedReferenceCount + 1);
                    UNLOCK();
                  }
                  local_2e8.DataPtr._0_4_ = local_408._0_4_;
                  local_2e8.DataPtr._4_4_ = local_408._4_4_;
                  local_2e8.ArrayNum = local_408._8_4_;
                  local_2e8._12_4_ = local_408._12_4_;
                  PCGMeshSpawnerPackingHelpers::ComputeCustomFloatPacking
                            (param_1,(UPCGSettings *)pUVar21,&local_2e8,&local_2f8,
                             &local_4c0->CustomFloatCount,&local_4c0->AttributeIdOffsetStrides);
                }
              }
              pUVar7 = (pUVar21->MeshSelectorParameters).field0_0x0.DebugPtr;
              if (pUVar7 != (UPCGSkinnedMeshSelector *)0x0) {
                FPCGAttributePropertySelector::GetName
                          ((FPCGAttributePropertySelector *)&pUVar7->MeshAttribute);
                this_00 = &this->StringKeyToInstanceCount;
                if (*(int *)&(this->StringKeyToInstanceCount).field_0x8 ==
                    *(int *)&(this->StringKeyToInstanceCount).field_0x34) {
                  if ((local_4a8.Object == (FPCGDataCollectionDesc *)0x0) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x458,L""), bVar15)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  iVar19 = ((local_4a8.Object)->DataDescs).ArrayNum;
                  pFVar42 = ((local_4a8.Object)->DataDescs).AllocatorInstance.Data;
                  if ((iVar19 < 0) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("InCount >= 0",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0xeb,L""), bVar15)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  pFVar48 = pFVar42 + (longlong)iVar19 * 0x68;
                  local_488 = pFVar48;
                  if (pFVar42 != pFVar48) {
                    pFVar42 = pFVar42 + 0x18;
                    do {
                      if (0 < *(int *)pFVar42) {
                        iVar19 = *(int *)(pFVar42 + 0x20);
                        piVar41 = *(int **)(pFVar42 + 0x18);
                        if ((iVar19 < 0) &&
                           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                               ("InCount >= 0",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                                ,0xeb,L""), bVar15)) {
                          pcVar9 = (code *)swi(3);
                          (*pcVar9)();
                          return;
                        }
                        piVar46 = piVar41 + (longlong)iVar19 * 0x1e;
                        pFVar48 = local_488;
                        local_418 = piVar46;
                        if (piVar41 != piVar46) {
                          piVar41 = piVar41 + 0x1c;
                          do {
                            if (*(FName *)(piVar41 + -0x1a) == local_468) {
                              if ((char)piVar41[-0x14] == '\n') {
                                puVar38 = *(uint **)(piVar41 + -2);
                                iVar19 = *piVar41;
                                puVar44 = puVar38 + iVar19;
                                while( true ) {
                                  if (*piVar41 != iVar19) {
                                    local_4c8 = 0;
                                    `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::
                                    <lambda_1>::operator()(&local_4c8);
                                  }
                                  param_1 = local_460;
                                  piVar46 = local_418;
                                  pUVar21 = local_478;
                                  if (puVar38 == puVar44) break;
                                  local_498[0] = *puVar38;
                                  if (0 < (int)local_498[0]) {
                                    iVar37 = *(int *)pFVar42;
                                    local_498[1] = 0;
                                    if (*(int *)&(this->StringKeyToInstanceCount).field_0x8 !=
                                        *(int *)&(this->StringKeyToInstanceCount).field_0x34) {
                                      puVar8 = *(undefined1 **)
                                                &(this->StringKeyToInstanceCount).field_0x40;
                                      puVar36 = &(this->StringKeyToInstanceCount).field_0x38;
                                      if (puVar8 != (undefined1 *)0x0) {
                                        puVar36 = puVar8;
                                      }
                                      iVar17 = *(int *)(puVar36 +
                                                       (ulonglong)
                                                       (*(int *)&(this->StringKeyToInstanceCount).
                                                                 field_0x48 - 1U & local_498[0]) * 4
                                                       );
                                      if (iVar17 != -1) {
                                        lVar35 = *(longlong *)&this_00->field_0x0;
                                        do {
                                          if (*(uint *)(lVar35 + (longlong)iVar17 * 0x10) ==
                                              local_498[0]) {
                                            if ((iVar17 != -1) &&
                                               (lVar35 = (longlong)iVar17 * 0x10 + lVar35,
                                               lVar35 != 0)) goto LAB_14974c811;
                                            break;
                                          }
                                          iVar17 = *(int *)(lVar35 + 8 + (longlong)iVar17 * 0x10);
                                        } while (iVar17 != -1);
                                      }
                                    }
                                    local_388 = local_498;
                                    local_380 = local_498 + 1;
                                    TSet<TTuple<int,unsigned_int>,TDefaultMapHashableKeyFuncs<int,unsigned_int,0>,FDefaultSetAllocator>
                                    ::EmplaceByHash<TPairInitializer<int_const_&,unsigned_int_&&>_>
                                              ((TSet<TTuple<int,unsigned_int>,TDefaultMapHashableKeyFuncs<int,unsigned_int,0>,FDefaultSetAllocator>
                                                *)this_00,(uint)(local_498 + 2),
                                               (TPairInitializer<int_const_&,unsigned_int_&&> *)
                                               (ulonglong)local_498[0],(bool *)&local_388);
                                    lVar35 = (longlong)(int)local_498[2] * 0x10 +
                                             *(longlong *)&this_00->field_0x0;
LAB_14974c811:
                                    *(int *)(lVar35 + 4) = *(int *)(lVar35 + 4) + iVar37;
                                  }
                                  puVar38 = puVar38 + 1;
                                }
                              }
                              else {
                                pFVar25 = FText::FromName(&local_208,&local_468);
                                pFVar29 = FText::AsLocalizable_Advanced_LocText
                                                    (&local_2c8,
                                                     L"PCGSkinnedMeshSpawnerDataInterface",
                                                     L"MeshSelectorAttributeNotUsable",
                                                                                                          
                                                  L"Attribute \'{0}\' not usable for mesh selection, only attributes of type String Key are supported."
                                                  );
                                pFVar26 = FTextFormat::FTextFormat(&local_1f8,pFVar29,Default);
                                pFVar25 = FText::Format<FText>(&local_2d8,pFVar26,pFVar25);
                                PCGComputeHelpers::LogKernelWarning
                                          (param_1,(UPCGSettings *)pUVar21,pFVar25);
                                if (local_2d8.TextData.Reference != (ITextData *)0x0) {
                                  (**(code **)((longlong)*local_2d8.TextData.Reference + 0x10))();
                                }
                                if (local_2c8.TextData.Reference != (ITextData *)0x0) {
                                  (**(code **)((longlong)*local_2c8.TextData.Reference + 0x10))();
                                }
                              }
                            }
                            piVar1 = piVar41 + 2;
                            pFVar48 = local_488;
                            piVar41 = piVar41 + 0x1e;
                          } while (piVar1 != piVar46);
                        }
                      }
                      pFVar3 = pFVar42 + 0x50;
                      pFVar42 = pFVar42 + 0x68;
                      pTVar47 = local_480;
                    } while (pFVar3 != pFVar48);
                  }
                }
                uVar16 = *(int *)&(this->StringKeyToInstanceCount).field_0x8 -
                         *(int *)&(this->StringKeyToInstanceCount).field_0x34;
                if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
                  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
                }
                if (pTVar47->ArrayMax < (int)uVar16) {
                  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0xd8,8,uVar16,&pTVar47->AllocatorInstance,pTVar47->ArrayNum,
                             &pTVar47->ArrayMax);
                }
                iVar19 = *(int *)&(this->StringKeyToInstanceCount).field_0x28;
                puVar8 = &(this->StringKeyToInstanceCount).field_0x10;
                iStack_3f0 = 0;
                local_3d8 = 0;
                uStack_3ec = 1;
                iStack_3dc = 0;
                if (iVar19 != 0) {
                  puVar44 = *(uint **)&(this->StringKeyToInstanceCount).field_0x20;
                  if (puVar44 == (uint *)0x0) {
                    puVar44 = (uint *)puVar8;
                  }
                  uVar16 = *puVar44;
                  while (uVar16 == 0) {
                    iStack_3f0 = iStack_3f0 + 1;
                    local_3d8 = local_3d8 + 0x20;
                    iStack_3dc = iVar19;
                    if ((int)(iVar19 + -1 + (iVar19 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_3f0)
                    goto LAB_14974c99e;
                    uVar16 = puVar44[iStack_3f0];
                  }
                  uStack_3ec = -uVar16 & uVar16;
                  uVar2 = (ulonglong)uStack_3ec * 2 + 1;
                  lVar35 = 0x3f;
                  if (uVar2 != 0) {
                    for (; uVar2 >> lVar35 == 0; lVar35 = lVar35 + -1) {
                    }
                  }
                  local_420 = (int)lVar35;
                  iStack_3dc = local_420 + -1 + local_3d8;
                  if (iVar19 < iStack_3dc) {
                    iStack_3dc = iVar19;
                  }
                }
LAB_14974c99e:
                uVar16 = *(uint *)&(this->StringKeyToInstanceCount).field_0x28;
                uStack_3d4 = local_15c;
                uVar45 = uVar16 & 0xffffffe0;
                iStack_3d0 = *(int *)&(this->StringKeyToInstanceCount).field_0x8 -
                             *(int *)&(this->StringKeyToInstanceCount).field_0x34;
                uStack_3e0 = 0xffffffff;
                TStack_3c0._padding_ = CONCAT44(uStack_3ec,iStack_3f0);
                TStack_3c0.CurrentBitIndex = iStack_3dc;
                TStack_3c0.UnvisitedBitMask = 0xffffffff;
                iVar37 = (int)uVar16 >> 5;
                TStack_3c0._28_4_ = local_15c;
                TStack_3c0.BaseBitIndex = local_3d8;
                uStack_3a0 = CONCAT44(uStack_3cc,iStack_3d0);
                local_3f8 = this_00;
                local_3e8 = puVar8;
                local_3c8 = this_00;
                TStack_3c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar8;
                if ((((int)uVar16 < 0) || (iVar19 < (int)uVar16)) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                        ,0x7af,L""), bVar15)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                uVar18 = *(uint *)&(this->StringKeyToInstanceCount).field_0x28;
                if (uVar16 != uVar18) {
                  puVar36 = *(undefined1 **)&(this->StringKeyToInstanceCount).field_0x20;
                  puVar43 = puVar8;
                  if (puVar36 != (undefined1 *)0x0) {
                    puVar43 = puVar36;
                  }
                  uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar43 + (longlong)iVar37 * 4);
                  while (uVar16 == 0) {
                    iVar37 = iVar37 + 1;
                    uVar45 = uVar45 + 0x20;
                    uVar16 = uVar18;
                    if ((int)(((int)(uVar18 - 1) >> 0x1f & 0x1fU) + (uVar18 - 1)) >> 5 < iVar37)
                    goto LAB_14974cab0;
                    uVar16 = *(uint *)(puVar43 + (longlong)iVar37 * 4);
                  }
                  uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
                  lVar35 = 0x3f;
                  if (uVar2 != 0) {
                    for (; uVar2 >> lVar35 == 0; lVar35 = lVar35 + -1) {
                    }
                  }
                  local_41c = (int)lVar35;
                  uVar16 = (uVar45 - 1) + local_41c;
                  if ((int)uVar18 < (int)uVar16) {
                    uVar16 = uVar18;
                  }
                }
LAB_14974cab0:
                do {
                  pTVar13 = local_3c8;
                  if (*(int *)(&local_3c8->field_0x0 + 8) - *(int *)(&local_3c8->field_0x0 + 0x34)
                      != (int)uStack_3a0) {
                    local_4c7[0] = 0;
                    `TSparseArray<TSparseSetElement<TTuple<int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_4c7);
                  }
                  pUVar12 = local_458;
                  if (((TStack_3c0.CurrentBitIndex == uVar16) &&
                      (TStack_3c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar8)) &&
                     (pTVar13 == this_00)) {
                    piVar41 = &(local_4c0->PrimitiveDescriptors).ArrayNum;
LAB_14974d1c9:
                    this = local_4c0;
                    TArray<float,TSizedDefaultAllocator<32>_>::SetNumZeroed
                              (&local_4c0->PrimitiveSelectionCDF,*piVar41,Default);
                    param_2 = local_458;
                    break;
                  }
                  pFVar42 = (FScriptContainerElement *)
                            ((longlong)TStack_3c0.CurrentBitIndex * 0x10 +
                            *(longlong *)&pTVar13->field_0x0);
                  if (*(uint *)(pFVar42 + 4) != 0) {
                    if ((local_458->bTablesInitialized == (atomic<bool>)0x0) &&
                       (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                                           (&bGEnsureHasExecuted<_8122861073268211622>,false,
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Compute\\PCGDataBinding.h"
                                            ,0x5a,"bTablesInitialized"), bVar15)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    if (((int)*(uint *)pFVar42 < 0) ||
                       ((pUVar12->StringTable).ArrayNum <= (int)*(uint *)pFVar42)) {
                      bVar15 = UE::Assert::Private::ExecCheckImplInternal
                                         (&bGEnsureHasExecuted<2517564130739618371>,false,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\Elements\\PCGSkinnedMeshSpawnerDataInterface.cpp"
                                          ,0x243,
                                          "InBinding->GetStringTable().IsValidIndex(StringKeyAndInstanceCount.Key)"
                                         );
                      if (bVar15) {
                        pcVar9 = (code *)swi(3);
                        (*pcVar9)();
                        return;
                      }
                    }
                    else {
                      if ((pUVar12->bTablesInitialized == (atomic<bool>)0x0) &&
                         (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                                             (&bGEnsureHasExecuted<_8122861073268211622>,false,
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Compute\\PCGDataBinding.h"
                                              ,0x5a,"bTablesInitialized"), bVar15)) {
                        pcVar9 = (code *)swi(3);
                        (*pcVar9)();
                        return;
                      }
                      uVar45 = *(uint *)pFVar42;
                      uVar18 = 0;
                      if ((int)uVar45 < (pUVar12->StringTable).ArrayNum) {
                        uVar18 = ~uVar45 >> 0x1f;
                      }
                      if ((uVar18 == 0) &&
                         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar15)) {
                        pcVar9 = (code *)swi(3);
                        (*pcVar9)();
                        return;
                      }
                      pFVar48 = (pUVar12->StringTable).AllocatorInstance.Data +
                                (longlong)(int)uVar45 * 0x10;
                      if (1 < *(int *)(pFVar48 + 8)) {
                        piVar41 = &(local_4c0->PrimitiveDescriptors).ArrayNum;
                        if (0xff < *piVar41) {
                          local_450.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                          local_450.Data.ArrayNum = 0;
                          local_450.Data.ArrayMax = 0;
                          ::FString::AppendInt(&local_450,0x100);
                          pFVar25 = FText::FromString(&local_1e8,&local_450);
                          pFVar26 = FTextFormat::FTextFormat
                                              (&local_1d8,
                                               &PCGSkinnedMeshSpawnerDataInterface::
                                                TooManyPrimitivesFormat,Default);
                          pFVar25 = FText::Format<FText>(&local_2a8,pFVar26,pFVar25);
                          PCGComputeHelpers::LogKernelWarning
                                    (local_460,(UPCGSettings *)local_478,pFVar25);
                          if (local_2a8.TextData.Reference != (ITextData *)0x0) {
                            (**(code **)((longlong)*local_2a8.TextData.Reference + 0x10))();
                          }
                          if (local_450.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_450.Data.AllocatorInstance.Data);
                          }
                          goto LAB_14974d1c9;
                        }
                        FPCGSoftSkinnedMeshComponentDescriptor::
                        FPCGSoftSkinnedMeshComponentDescriptor
                                  ((FPCGSoftSkinnedMeshComponentDescriptor *)local_158);
                        pUVar7 = (local_478->MeshSelectorParameters).field0_0x0.DebugPtr;
                        local_158._8_4_ = (undefined4)(pUVar7->TemplateDescriptor)._padding_;
                        local_158[0xc] =
                             *(undefined1 *)((longlong)&(pUVar7->TemplateDescriptor)._padding_ + 4);
                        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                           (pUVar22 = (UObject *)(pUVar7->TemplateDescriptor)._padding_,
                           pUVar22 != (UObject *)0x0)) {
                          UE::GC::MarkAsReachable(pUVar22);
                        }
                        local_158._16_8_ = (pUVar7->TemplateDescriptor)._padding_;
                        local_158._24_4_ = (undefined4)(pUVar7->TemplateDescriptor)._padding_;
                        local_158._28_4_ =
                             *(undefined4 *)((longlong)&(pUVar7->TemplateDescriptor)._padding_ + 4);
                        local_158._32_4_ = (undefined4)(pUVar7->TemplateDescriptor)._padding_;
                        bVar33 = local_158[0x24] & 0xfe |
                                 *(byte *)((longlong)&(pUVar7->TemplateDescriptor)._padding_ + 4) &
                                 1;
                        bVar33 = (bVar33 ^ *(byte *)((longlong)
                                                     &(pUVar7->TemplateDescriptor)._padding_ + 4)) &
                                 2 ^ bVar33;
                        bVar33 = (bVar33 ^ *(byte *)((longlong)
                                                     &(pUVar7->TemplateDescriptor)._padding_ + 4)) &
                                 4 ^ bVar33;
                        bVar33 = (bVar33 ^ *(byte *)((longlong)
                                                     &(pUVar7->TemplateDescriptor)._padding_ + 4)) &
                                 8 ^ bVar33;
                        bVar33 = (bVar33 ^ *(byte *)((longlong)
                                                     &(pUVar7->TemplateDescriptor)._padding_ + 4)) &
                                 0x10 ^ bVar33;
                        bVar33 = (bVar33 ^ *(byte *)((longlong)
                                                     &(pUVar7->TemplateDescriptor)._padding_ + 4)) &
                                 0x20 ^ bVar33;
                        local_158[0x24] =
                             *(byte *)((longlong)&(pUVar7->TemplateDescriptor)._padding_ + 4);
                        local_158[0x24] =
                             ((bVar33 ^ *(byte *)((longlong)&(pUVar7->TemplateDescriptor)._padding_
                                                 + 4)) & 0x40 ^ bVar33 ^ local_158[0x24]) & 0x7f ^
                             local_158[0x24];
                        local_158[0x25] =
                             local_158[0x25] & 0xfe |
                             *(byte *)((longlong)&(pUVar7->TemplateDescriptor)._padding_ + 5) & 1;
                        local_158[0x25] =
                             (local_158[0x25] ^
                             *(byte *)((longlong)&(pUVar7->TemplateDescriptor)._padding_ + 5)) & 2 ^
                             local_158[0x25];
                        local_158[0x26] =
                             *(undefined1 *)((longlong)&(pUVar7->TemplateDescriptor)._padding_ + 6);
                        local_158._39_2_ =
                             *(undefined2 *)((longlong)&(pUVar7->TemplateDescriptor)._padding_ + 7);
                        local_158._48_8_ = (pUVar7->TemplateDescriptor)._padding_;
                        local_158._56_8_ = (pUVar7->TemplateDescriptor)._padding_;
                        local_158._64_8_ = (pUVar7->TemplateDescriptor)._padding_;
                        local_158._72_8_ = (pUVar7->TemplateDescriptor)._padding_;
                        local_158._80_8_ = (pUVar7->TemplateDescriptor)._padding_;
                        local_158._88_8_ = (pUVar7->TemplateDescriptor)._padding_;
                        local_158._96_8_ = (pUVar7->TemplateDescriptor)._padding_;
                        local_158[0x68] = (undefined1)(pUVar7->TemplateDescriptor)._padding_;
                        local_158._108_4_ =
                             *(undefined4 *)((longlong)&(pUVar7->TemplateDescriptor)._padding_ + 4);
                        local_158._112_4_ = (undefined4)(pUVar7->TemplateDescriptor)._padding_;
                        local_158._120_8_ = (pUVar7->TemplateDescriptor)._padding_;
                        FSoftObjectPath::operator=
                                  ((FSoftObjectPath *)(local_158 + 0x80),
                                   (FSoftObjectPath *)&(pUVar7->TemplateDescriptor)._padding_);
                        local_b8 = (pUVar7->TemplateDescriptor)._padding_;
                        FSoftObjectPath::operator=
                                  (&local_b0,
                                   (FSoftObjectPath *)&(pUVar7->TemplateDescriptor)._padding_);
                        TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                                  (&local_90,&(pUVar7->TemplateDescriptor).ComponentTags);
                        local_158[0x68] = 1;
                        pTVar31 = UPCGComponent::GetGridBounds(local_4b0,&local_78);
                        pUVar11 = local_4c0;
                        local_440.AssetPath.PackageName.ComparisonIndex.Value = 0;
                        local_440.AssetPath.PackageName.Number = 0;
                        local_158._48_8_ = (pTVar31->Min).field0_0x0._s_0.X;
                        local_158._56_8_ = (pTVar31->Min).field0_0x0._s_0.Y;
                        local_440.AssetPath.AssetName.ComparisonIndex.Value = 0;
                        local_440.AssetPath.AssetName.Number = 0;
                        local_440.SubPathString.Data.AllocatorInstance.Data =
                             (FScriptContainerElement *)0x0;
                        local_158._64_8_ = (pTVar31->Min).field0_0x0._s_0.Z;
                        local_158._72_8_ = (pTVar31->Max).field0_0x0._s_0.X;
                        local_440.SubPathString.Data.ArrayNum = 0;
                        local_440.SubPathString.Data.ArrayMax = 0;
                        local_158._80_8_ = (pTVar31->Max).field0_0x0._s_0.Y;
                        local_158._88_8_ = (pTVar31->Max).field0_0x0._s_0.Z;
                        local_158[0x60] = pTVar31->IsValid;
                        local_158[0x61] = pTVar31->Pad[0];
                        local_158[0x62] = pTVar31->Pad[1];
                        local_158[99] = pTVar31->Pad[2];
                        local_158[100] = pTVar31->Pad[3];
                        local_158[0x65] = pTVar31->Pad[4];
                        local_158[0x66] = pTVar31->Pad[5];
                        local_158[0x67] = pTVar31->Pad[6];
                        local_158._108_4_ = *(undefined4 *)(pFVar42 + 4);
                        local_158._112_4_ = local_4c0->CustomFloatCount;
                        local_378 = *(wchar_t **)pFVar48;
                        iStack_370 = *(int *)(pFVar48 + 8) + -1;
                        if (*(int *)(pFVar48 + 8) == 0) {
                          iStack_370 = 0;
                        }
                        local_2b8._12_4_ = uStack_36c;
                        local_2b8.Size = iStack_370;
                        local_2b8.DataPtr = local_378;
                        FSoftObjectPath::SetPath(&local_440,&local_2b8);
                        local_158._120_8_ = 0;
                        FSoftObjectPath::operator=((FSoftObjectPath *)(local_158 + 0x80),&local_440)
                        ;
                        if (local_440.SubPathString.Data.AllocatorInstance.Data !=
                            (FScriptContainerElement *)0x0) {
                          FMemory::Free(local_440.SubPathString.Data.AllocatorInstance.Data);
                        }
                        uVar45 = local_48c;
                        local_158._39_2_ = 0;
                        if ((int)local_48c < (int)local_158._108_4_) {
                          bVar15 = UE::Assert::Private::ExecCheckImplInternal
                                             (&bGEnsureHasExecuted<2517564130739618402>,false,
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\Elements\\PCGSkinnedMeshSpawnerDataInterface.cpp"
                                              ,0x262,
                                              "Descriptor.NumInstancesGPUOnly <= TotalInputPointCount"
                                             );
                          if (bVar15) {
                            pcVar9 = (code *)swi(3);
                            (*pcVar9)();
                            return;
                          }
                          local_158._108_4_ = uVar45;
                        }
                        pTVar39 = &pUVar11->PrimitiveStringKeys;
                        pFVar48 = (pTVar39->AllocatorInstance).Data;
                        if (((pFVar48 <= pFVar42) &&
                            (pFVar42 < pFVar48 + (longlong)(pUVar11->PrimitiveStringKeys).ArrayMax *
                                                 4)) &&
                           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                ,
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x7a5,
                                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                               ), bVar15)) {
                          pcVar9 = (code *)swi(3);
                          (*pcVar9)();
                          return;
                        }
                        iVar19 = (pUVar11->PrimitiveStringKeys).ArrayNum;
                        piVar41 = &(pUVar11->PrimitiveStringKeys).ArrayMax;
                        if (iVar19 == *piVar41) {
                          iVar19 = UE::Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (0x404,&pTVar39->AllocatorInstance,piVar41);
                        }
                        pTVar47 = local_480;
                        (pUVar11->PrimitiveStringKeys).ArrayNum = iVar19 + 1;
                        *(uint *)((pTVar39->AllocatorInstance).Data + (longlong)iVar19 * 4) =
                             *(uint *)pFVar42;
                        pFVar42 = (local_480->AllocatorInstance).Data;
                        if (((pFVar42 <= (FScriptContainerElement *)local_158) &&
                            ((FScriptContainerElement *)local_158 <
                             pFVar42 + (longlong)local_480->ArrayMax * 0xd8)) &&
                           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                ,
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x7a5,
                                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                               ), bVar15)) {
                          pcVar9 = (code *)swi(3);
                          (*pcVar9)();
                          return;
                        }
                        iVar19 = pTVar47->ArrayNum;
                        if (iVar19 == pTVar47->ArrayMax) {
                          iVar19 = UE::Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (0x8d8,&pTVar47->AllocatorInstance,&pTVar47->ArrayMax);
                        }
                        pTVar47->ArrayNum = iVar19 + 1;
                        this_01 = (FSoftSkinnedMeshComponentDescriptor *)
                                  ((pTVar47->AllocatorInstance).Data + (longlong)iVar19 * 0xd8);
                        FSoftSkinnedMeshComponentDescriptor::FSoftSkinnedMeshComponentDescriptor
                                  (this_01,(FSoftSkinnedMeshComponentDescriptor *)local_158);
                        this_01->_padding_ =
                             (longlong)&___7FPCGSoftSkinnedMeshComponentDescriptor__6B_;
                        this_01[1]._padding_ = 0;
                        this_01[1]._padding_ = (longlong)local_90.AllocatorInstance.Data;
                        *(int *)&this_01[1]._padding_ = local_90.ArrayNum;
                        *(int *)((longlong)&this_01[1]._padding_ + 4) = local_90.ArrayMax;
                        local_90.ArrayNum = 0;
                        local_90.ArrayMax = 0;
                        local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                        FSoftSkinnedMeshComponentDescriptor::~FSoftSkinnedMeshComponentDescriptor
                                  ((FSoftSkinnedMeshComponentDescriptor *)local_158);
                      }
                    }
                  }
                  TStack_3c0.UnvisitedBitMask =
                       TStack_3c0.UnvisitedBitMask & ~TStack_3c0._padding_._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_3c0);
                } while( true );
              }
              pUVar22 = (UObject *)this->_padding_;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar22 != (UObject *)0x0)) {
                UE::GC::MarkAsReachable(pUVar22);
              }
              local_410 = pUVar22;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar22 != (UObject *)0x0)) {
                UE::GC::MarkAsReachable(pUVar22);
              }
              pFVar32 = UPCGDataBinding::FindOrAddMeshSpawnerPrimitives
                                  (param_2,(TObjectPtr<UComputeKernel_const_>)&local_410);
              pFVar32->NumCustomFloats = this->CustomFloatCount;
              TArray<UE::Math::TIntVector4<unsigned_int>,TSizedDefaultAllocator<32>_>::operator=
                        (&pFVar32->AttributeIdOffsetStrides,&this->AttributeIdOffsetStrides);
              pFVar32->SelectorAttributeId = this->SelectorAttributeId;
              TArray<float,TSizedDefaultAllocator<32>_>::operator=
                        (&pFVar32->SelectionCDF,&this->PrimitiveSelectionCDF);
              TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>::operator=
                        (&pFVar32->PrimitiveMeshBounds,&this->PrimitiveMeshBounds);
            }
          }
        }
        else {
          pFVar25 = FText::AsLocalizable_Advanced_LocText
                              (&local_248,L"PCGSkinnedMeshSpawnerDataInterface",L"TooManyInstances",
                               L"Tried to spawn too many instances ({0}), procedural ISM component creation skipped and instances will not be rendered."
                              );
          pFVar26 = FTextFormat::FTextFormat(local_188,pFVar25,Default);
          pFVar25 = FText::Format<int>(&local_258,pFVar26,uVar16);
          PCGComputeHelpers::LogKernelError(param_1,(UPCGSettings *)pUVar21,pFVar25);
          if (local_258.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_258.TextData.Reference + 0x10))();
          }
          if (local_248.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_248.TextData.Reference + 0x10))();
          }
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4a8.SharedReferenceCount.ReferenceController);
  }
  return;
}

// GetPrivateStaticClass @ 14975c940

UClass * __cdecl UPCGSkinnedMeshSpawnerDataProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSkinnedMeshSpawnerDataProvider.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSkinnedMeshSpawnerDataProvider",
               &Z_Registration_Info_UClass_UPCGSkinnedMeshSpawnerDataProvider.InnerSingleton,
               StaticRegisterNativesUPCGSkinnedMeshSpawnerDataProvider,0x158,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGSkinnedMeshSpawnerDataProvider>,
               InternalVTableHelperCtorCaller<UPCGSkinnedMeshSpawnerDataProvider>,local_res8,
               UPCGComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSkinnedMeshSpawnerDataProvider.InnerSingleton;
}

// GetRenderProxy @ 14975ef60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FComputeDataProviderRenderProxy * __thiscall
UPCGSkinnedMeshSpawnerDataProvider::GetRenderProxy(UPCGSkinnedMeshSpawnerDataProvider *this)

{
  FScriptContainerElement *_Src;
  FPCGSkinnedMeshSpawnerDataProviderProxy *pFVar1;
  longlong lVar2;
  TArray<float,TSizedDefaultAllocator<32>_> local_18;
  
  pFVar1 = ::operator_new(0x78);
  if (pFVar1 != (FPCGSkinnedMeshSpawnerDataProviderProxy *)0x0) {
    _Src = (this->PrimitiveSelectionCDF).AllocatorInstance.Data;
    local_18.ArrayNum = (this->PrimitiveSelectionCDF).ArrayNum;
    lVar2 = (longlong)local_18.ArrayNum;
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_18.ArrayNum == 0) {
      local_18.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_18.ArrayNum,0,&local_18.AllocatorInstance,local_18.ArrayNum,
                 &local_18.ArrayMax);
      memcpy(local_18.AllocatorInstance.Data,_Src,lVar2 << 2);
    }
    pFVar1 = FPCGSkinnedMeshSpawnerDataProviderProxy::FPCGSkinnedMeshSpawnerDataProviderProxy
                       (pFVar1,&this->AttributeIdOffsetStrides,this->SelectorAttributeId,
                        &this->PrimitiveStringKeys,&local_18,&this->PrimitiveMeshBounds);
    return (FComputeDataProviderRenderProxy *)pFVar1;
  }
  return (FComputeDataProviderRenderProxy *)0x0;
}

// PerformPreExecuteReadbacks_GameThread @ 14976d980

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
UPCGSkinnedMeshSpawnerDataProvider::PerformPreExecuteReadbacks_GameThread
          (UPCGSkinnedMeshSpawnerDataProvider *this,UPCGDataBinding *param_1)

{
  uint uVar1;
  UObject *pUVar2;
  UPCGComputeKernel *pUVar3;
  code *pcVar4;
  FName FVar5;
  FPCGMetadataDomainID FVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  UPCGSettings *pUVar10;
  UPCGSkinnedMeshSpawnerSettings *pUVar11;
  FPCGDataCollection *pFVar12;
  UPCGParamData *pUVar13;
  UPCGMetadata *this_00;
  FPCGMetadataAttribute<int> *this_01;
  FPCGMetadataAttribute<int> *this_02;
  long64 lVar14;
  UClass *pUVar15;
  uint uVar16;
  longlong lVar17;
  bool bVar18;
  int local_res10 [2];
  int local_res18 [4];
  int *local_c8;
  int *local_c0;
  FName local_b8;
  FPCGMetadataDomainID FStack_b0;
  FPCGAttributeIdentifier local_98;
  FName local_78;
  FPCGMetadataDomainID FStack_70;
  FPCGAttributeIdentifier local_58;
  
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId207,
               "UPCGSkinnedMeshSpawnerDataProvider::PerformPreExecuteReadbacks_GameThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\Elements\\PCGSkinnedMeshSpawnerDataInterface.cpp"
               ,0xcf);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId207);
  }
  if ((param_1 == (UPCGDataBinding *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InBinding",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\Elements\\PCGSkinnedMeshSpawnerDataInterface.cpp"
                         ,0xd0,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  pUVar2 = (UObject *)this->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  pUVar10 = (UPCGSettings *)(**(code **)(*(longlong *)pUVar2 + 0x2b0))(pUVar2);
  pUVar11 = CastChecked<UPCGSkinnedMeshSpawnerSettings,UPCGSettings_const_>(pUVar10);
  iVar9 = this->AnalysisDataIndex;
  if (iVar9 == -1) {
    if ((pUVar11->MeshSelectorParameters).field0_0x0.DebugPtr == (UPCGSkinnedMeshSelector *)0x0) {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2517564130739618012>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\Elements\\PCGSkinnedMeshSpawnerDataInterface.cpp"
                         ,0xdc,"Settings->MeshSelectorParameters");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
    }
    else {
      pUVar2 = (UObject *)this->_padding_;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar2 == (UObject *)0x0) goto LAB_14976db0b;
      }
      else {
        if (pUVar2 == (UObject *)0x0) {
LAB_14976db0b:
          this->AnalysisDataIndex = -1;
          goto LAB_14976ddc1;
        }
        UE::GC::MarkAsReachable(pUVar2);
      }
      FVar5 = PCGSkinnedMeshSpawnerConstants::InstanceCountsPinLabel;
      pUVar3 = (UPCGComputeKernel *)this->_padding_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 != (UPCGComputeKernel *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      iVar9 = UPCGDataBinding::GetFirstInputDataIndex(param_1,pUVar3,FVar5);
      this->AnalysisDataIndex = iVar9;
      if (iVar9 != -1) goto LAB_14976daf6;
    }
  }
  else {
LAB_14976daf6:
    bVar7 = UPCGDataBinding::ReadbackInputDataToCPU(param_1,iVar9);
    if (!bVar7) {
      bVar7 = false;
      goto LAB_14976ddc3;
    }
    pFVar12 = UPCGDataBinding::GetInputDataCollection(param_1);
    uVar1 = this->AnalysisDataIndex;
    lVar17 = 0;
    uVar16 = 0;
    if ((int)uVar1 < (pFVar12->TaggedData).ArrayNum) {
      uVar16 = ~uVar1 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
    pUVar13 = Cast<UPCGParamData>((FPCGDataPtrWrapper *)
                                  ((pFVar12->TaggedData).AllocatorInstance.Data +
                                  (longlong)(int)uVar1 * 0x78));
    if ((pUVar13 != (UPCGParamData *)0x0) &&
       (this_00 = (UPCGMetadata *)(**(code **)(pUVar13->_padding_ + 800))(pUVar13),
       this_00 != (UPCGMetadata *)0x0)) {
      local_b8 = PCGCountUniqueAttributeValuesConstants::ValueAttributeName;
      FStack_b0 = PCGMetadataDomainID::Default;
      FVar6 = FStack_b0;
      FStack_b0._0_8_ = PCGMetadataDomainID::Default._0_8_;
      local_98.Name = PCGCountUniqueAttributeValuesConstants::ValueAttributeName;
      local_98.MetadataDomain.Flag = FStack_b0.Flag;
      local_98.MetadataDomain._1_3_ = FStack_b0._1_3_;
      local_98.MetadataDomain.CustomFlag = FStack_b0.CustomFlag;
      local_98.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
      FStack_b0 = FVar6;
      this_01 = (FPCGMetadataAttribute<int> *)UPCGMetadata::GetConstAttribute(this_00,&local_98);
      local_78 = PCGCountUniqueAttributeValuesConstants::ValueCountAttributeName;
      FStack_70 = PCGMetadataDomainID::Default;
      FVar6 = FStack_70;
      FStack_70._0_8_ = PCGMetadataDomainID::Default._0_8_;
      local_58.Name = PCGCountUniqueAttributeValuesConstants::ValueCountAttributeName;
      local_58.MetadataDomain.Flag = FStack_70.Flag;
      local_58.MetadataDomain._1_3_ = FStack_70._1_3_;
      local_58.MetadataDomain.CustomFlag = FStack_70.CustomFlag;
      local_58.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
      FStack_70 = FVar6;
      this_02 = (FPCGMetadataAttribute<int> *)UPCGMetadata::GetConstAttribute(this_00,&local_58);
      if ((this_01 != (FPCGMetadataAttribute<int> *)0x0) &&
         ((((short)this_01->_padding_ == 2 && (this_02 != (FPCGMetadataAttribute<int> *)0x0)) &&
          ((short)this_02->_padding_ == 2)))) {
        lVar14 = UPCGMetadata::GetItemCountForChild(this_00);
        iVar9 = (int)lVar14;
        TSet<TTuple<int,unsigned_int>,TDefaultMapHashableKeyFuncs<int,unsigned_int,0>,FDefaultSetAllocator>
        ::Reserve((TSet<TTuple<int,unsigned_int>,TDefaultMapHashableKeyFuncs<int,unsigned_int,0>,FDefaultSetAllocator>
                   *)&this->StringKeyToInstanceCount,iVar9);
        if (0 < (longlong)iVar9) {
          local_c8 = local_res18;
          local_c0 = local_res10;
          do {
            local_res10[0] = FPCGMetadataAttribute<int>::GetValue(this_02,(int)lVar17);
            local_res18[0] = FPCGMetadataAttribute<int>::GetValue(this_01,(int)lVar17);
            TSet<TTuple<int,unsigned_int>,TDefaultMapHashableKeyFuncs<int,unsigned_int,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<int_&&,unsigned_int_&&>_>
                      ((TSet<TTuple<int,unsigned_int>,TDefaultMapHashableKeyFuncs<int,unsigned_int,0>,FDefaultSetAllocator>
                        *)&this->StringKeyToInstanceCount,
                       (TPairInitializer<int_&&,unsigned_int_&&> *)(local_res18 + 2),
                       (bool *)&local_c8);
            lVar17 = lVar17 + 1;
          } while (lVar17 < iVar9);
        }
        goto LAB_14976ddc1;
      }
    }
    if (2 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
    pFVar12 = UPCGDataBinding::GetInputDataCollection(param_1);
    uVar1 = this->AnalysisDataIndex;
    uVar16 = 0;
    if ((int)uVar1 < (pFVar12->TaggedData).ArrayNum) {
      uVar16 = ~uVar1 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
    lVar17 = *(longlong *)
              ((pFVar12->TaggedData).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x78);
    pUVar15 = Z_Construct_UClass_UPCGProxyForGPUData_NoRegister();
    lVar17 = *(longlong *)(lVar17 + 0x10);
    iVar9 = (int)pUVar15->_padding_;
    if (((iVar9 <= *(int *)(lVar17 + 0x38)) &&
        ((longlong *)*(undefined1 **)(*(longlong *)(lVar17 + 0x30) + (longlong)iVar9 * 8) ==
         &pUVar15->_padding_)) && (1 < (byte)LogPCG._0_1_)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
  }
LAB_14976ddc1:
  bVar7 = true;
LAB_14976ddc3:
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar7;
}

// PrepareForExecute_GameThread @ 149771eb0

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
UPCGSkinnedMeshSpawnerDataProvider::PrepareForExecute_GameThread
          (UPCGSkinnedMeshSpawnerDataProvider *this,UPCGDataBinding *param_1)

{
  atomic<int> *paVar1;
  FScriptContainerElement *pFVar2;
  atomic<int> aVar3;
  int iVar4;
  int iVar5;
  TReferenceControllerBase<1> *pTVar6;
  FPCGContextHandle *pFVar7;
  IPCGGraphExecutionSource *pIVar8;
  UPCGSkinnedMeshSelector *pUVar9;
  UPCGComputeKernel *pUVar10;
  code *pcVar11;
  FName FVar12;
  bool bVar13;
  undefined1 uVar14;
  bool bVar15;
  char cVar16;
  atomic<int> aVar17;
  UPCGSettings *pUVar18;
  longlong lVar19;
  UClass *pUVar20;
  FText *pFVar21;
  FText *pFVar22;
  FTextFormat *pFVar23;
  UObject *pUVar24;
  int *piVar25;
  TObjectPtr<UComputeKernel_const_>_u_0 TVar26;
  int *piVar27;
  FSoftObjectPath *this_00;
  FScriptContainerElement *pFVar28;
  FPCGContext *pFVar29;
  FScriptContainerElement *pFVar30;
  bool bVar31;
  undefined1 local_res20 [8];
  TReferenceControllerBase<1> *local_1c8;
  undefined1 local_1c0 [8];
  longlong local_1b8;
  FPCGContext *local_1b0;
  FName local_1a8;
  UPCGSkinnedMeshSpawnerSettings *local_1a0;
  UObject *local_198;
  UObject *local_190;
  UObject *local_188;
  UObject *local_180;
  UObject *local_178;
  UObject *local_170;
  UObject *local_168;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> local_160;
  FString local_150;
  FString local_140;
  TDelegateBase<FNotThreadSafeDelegateMode> local_130;
  FPCGSpawnerPrimitives local_118;
  FText local_c8;
  FText local_b8;
  FLoadAssetAsyncOptionalParams local_a8;
  TDelegateBase<FNotThreadSafeDelegateMode> local_80;
  FText local_68;
  FTextFormat local_58;
  
  bVar31 = -1 < CpuChannel->Enabled;
  if (bVar31) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId280,
               "UPCGSkinnedMeshSpawnerDataProvider::PrepareForExecute_GameThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\Elements\\PCGSkinnedMeshSpawnerDataInterface.cpp"
               ,0x118);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId280);
  }
  if ((param_1 == (UPCGDataBinding *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InBinding",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\Elements\\PCGSkinnedMeshSpawnerDataInterface.cpp"
                          ,0x119,L""), bVar13)) {
    pcVar11 = (code *)swi(3);
    uVar14 = (*pcVar11)();
    return (bool)uVar14;
  }
  pUVar24 = (UObject *)this->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar24 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar24);
  }
  pUVar18 = (UPCGSettings *)(**(code **)(*(longlong *)pUVar24 + 0x2b0))(pUVar24);
  local_1a0 = CastChecked<UPCGSkinnedMeshSpawnerSettings,UPCGSettings_const_>(pUVar18);
  if (this->bRegisteredPrimitives == false) {
    pUVar24 = (UObject *)this->_padding_;
    local_118.PrimitiveMeshBounds.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_118.PrimitiveMeshBounds.ArrayNum = 0;
    local_118.PrimitiveMeshBounds.ArrayMax = 0;
    local_118.SelectionCDF.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_118.SelectionCDF.ArrayNum = 0;
    local_118.SelectionCDF.ArrayMax = 0;
    local_118.NumCustomFloats = 0;
    local_118.AttributeIdOffsetStrides.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_118.AttributeIdOffsetStrides.ArrayNum = 0;
    local_118.AttributeIdOffsetStrides.ArrayMax = 0;
    local_118.SelectorAttributeId = -1;
    local_118.PrimitiveFactory.Object = (IPCGRuntimePrimitiveFactory *)0x0;
    local_118.PrimitiveFactory.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar24 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar24);
    }
    local_198 = pUVar24;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar24 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar24);
    }
    UPCGDataBinding::AddMeshSpawnerPrimitives
              (param_1,(TObjectPtr<UComputeKernel_const_>)&local_198,&local_118);
    if (local_118.AttributeIdOffsetStrides.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_118.AttributeIdOffsetStrides.AllocatorInstance.Data);
    }
    if (local_118.SelectionCDF.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.SelectionCDF.AllocatorInstance.Data);
    }
    if (local_118.PrimitiveMeshBounds.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.PrimitiveMeshBounds.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_118.PrimitiveFactory.SharedReferenceCount.ReferenceController);
    this->bRegisteredPrimitives = true;
  }
  pTVar6 = (param_1->ContextHandle).WeakReferenceCount.ReferenceController;
  pFVar7 = (param_1->ContextHandle).Object;
  local_1c8 = pTVar6;
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
LAB_1497727df:
    bVar13 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<2517564130739618089>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\Elements\\PCGSkinnedMeshSpawnerDataInterface.cpp"
                        ,0x129,"Context");
    if (bVar13) {
      pcVar11 = (code *)swi(3);
      uVar14 = (*pcVar11)();
      return (bool)uVar14;
    }
    pUVar24 = (UObject *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar24 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar24);
    }
    local_168 = pUVar24;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar24 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar24);
    }
    TVar26.DebugPtr = (UComputeKernel *)&local_168;
  }
  else {
    LOCK();
    pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
    UNLOCK();
    aVar3 = pTVar6->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        local_1c8 = (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar17 = pTVar6->SharedReferenceCount;
      bVar13 = aVar3 == aVar17;
      if (bVar13) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar17 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar17;
    } while (!bVar13);
    LOCK();
    paVar1 = &pTVar6->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar6->_padding_ + 8))(pTVar6);
    }
    if (((local_1c8 == (TReferenceControllerBase<1> *)0x0) || (pFVar7 == (FPCGContextHandle *)0x0))
       || (pFVar29 = pFVar7->Context, local_1b0 = pFVar29, pFVar29 == (FPCGContext *)0x0))
    goto LAB_1497727df;
    if (((((pFVar29->ExecutionSource).InterfaceInstance == (IPCGGraphExecutionSource *)0x0) ||
         (bVar13 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&pFVar29->ExecutionSource), !bVar13))
        || (pIVar8 = (pFVar29->ExecutionSource).InterfaceInstance,
           pIVar8 == (IPCGGraphExecutionSource *)0x0)) ||
       (lVar19 = (**(code **)((longlong)*pIVar8 + 8))(), lVar19 == 0)) {
LAB_14977276a:
      bVar13 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<2517564130739618096>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\Elements\\PCGSkinnedMeshSpawnerDataInterface.cpp"
                          ,0x130,"SourceComponent");
      if (bVar13) {
        pcVar11 = (code *)swi(3);
        uVar14 = (*pcVar11)();
        return (bool)uVar14;
      }
      pUVar24 = (UObject *)this->_padding_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar24 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar24);
      }
      local_170 = pUVar24;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar24 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar24);
      }
      TVar26.DebugPtr = (UComputeKernel *)&local_170;
    }
    else {
      pUVar20 = Z_Construct_UClass_UPCGComponent_NoRegister();
      iVar5 = (int)pUVar20->_padding_;
      if ((*(int *)(*(longlong *)(lVar19 + 0x10) + 0x38) < iVar5) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar19 + 0x10) + 0x30) + (longlong)iVar5 * 8)
          != &pUVar20->_padding_)) goto LAB_14977276a;
      local_1b8 = lVar19;
      if (this->SelectorAttributeId == -1) {
        pUVar9 = (local_1a0->MeshSelectorParameters).field0_0x0.DebugPtr;
        if (pUVar9 == (UPCGSkinnedMeshSelector *)0x0) {
          bVar13 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<2517564130739618102>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\Elements\\PCGSkinnedMeshSpawnerDataInterface.cpp"
                              ,0x136,"Settings->MeshSelectorParameters");
          if (bVar13) {
            pcVar11 = (code *)swi(3);
            uVar14 = (*pcVar11)();
            return (bool)uVar14;
          }
        }
        else {
          FPCGAttributePropertySelector::GetName
                    ((FPCGAttributePropertySelector *)&pUVar9->MeshAttribute);
          FVar12 = PCGPinConstants::DefaultInputLabel;
          pUVar10 = (UPCGComputeKernel *)this->_padding_;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar10 != (UPCGComputeKernel *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar10);
          }
          UPCGDataBinding::GetCachedKernelPinDataDesc(param_1,&local_160,pUVar10,FVar12,true);
          if (local_160.Object == (FPCGDataCollectionDesc *)0x0) {
            bVar13 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<2517564130739618107>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\Elements\\PCGSkinnedMeshSpawnerDataInterface.cpp"
                                ,0x13b,"InputDataDesc");
            if (bVar13) {
              pcVar11 = (code *)swi(3);
              uVar14 = (*pcVar11)();
              return (bool)uVar14;
            }
            pUVar24 = (UObject *)this->_padding_;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar24 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar24);
            }
            local_190 = pUVar24;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar24 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar24);
            }
            UPCGDataBinding::AddCompletedMeshSpawnerKernel
                      (param_1,(TObjectPtr<UComputeKernel_const_>)&local_190);
            bVar13 = true;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_160.SharedReferenceCount.ReferenceController);
            goto LAB_149772852;
          }
          iVar5 = ((local_160.Object)->DataDescs).ArrayNum;
          pFVar28 = ((local_160.Object)->DataDescs).AllocatorInstance.Data;
          bVar13 = false;
          if ((iVar5 < 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar15)) {
            pcVar11 = (code *)swi(3);
            uVar14 = (*pcVar11)();
            return (bool)uVar14;
          }
          local_1b8 = lVar19;
          if (pFVar28 != pFVar28 + (longlong)iVar5 * 0x68) {
            pFVar30 = pFVar28 + 0x18;
            do {
              if (0 < *(int *)pFVar30) {
                iVar4 = *(int *)(pFVar30 + 0x20);
                piVar27 = *(int **)(pFVar30 + 0x18);
                bVar13 = true;
                if ((iVar4 < 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("InCount >= 0",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0xeb,L""), bVar15)) {
                  pcVar11 = (code *)swi(3);
                  uVar14 = (*pcVar11)();
                  return (bool)uVar14;
                }
                piVar25 = piVar27 + (longlong)iVar4 * 0x1e;
                for (; piVar27 != piVar25; piVar27 = piVar27 + 0x1e) {
                  if ((*(FName *)(piVar27 + 2) == local_1a8) && ((char)piVar27[8] == '\n')) {
                    this->SelectorAttributeId = *piVar27;
                    break;
                  }
                }
                if (this->SelectorAttributeId != -1) break;
              }
              pFVar2 = pFVar30 + 0x50;
              pFVar30 = pFVar30 + 0x68;
            } while (pFVar2 != pFVar28 + (longlong)iVar5 * 0x68);
          }
          pFVar29 = local_1b0;
          if (this->SelectorAttributeId == -1) {
            if (bVar13) {
              pFVar21 = FText::FromName(&local_68,&local_1a8);
              pFVar22 = FText::AsLocalizable_Advanced_LocText
                                  (&local_b8,L"PCGSkinnedMeshSpawnerDataInterface",
                                   L"MeshSelectorAttributeNotFound",
                                   L"Mesh selector attribute \'{0}\' not found.");
              pFVar23 = FTextFormat::FTextFormat(&local_58,pFVar22,Default);
              pFVar21 = FText::Format<FText>(&local_c8,pFVar23,pFVar21);
              PCGComputeHelpers::LogKernelError(local_1b0,(UPCGSettings *)local_1a0,pFVar21);
              if (local_c8.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
              }
              if (local_b8.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
              }
            }
            pUVar24 = (UObject *)this->_padding_;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar24 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar24);
            }
            local_188 = pUVar24;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar24 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar24);
            }
            UPCGDataBinding::AddCompletedMeshSpawnerKernel
                      (param_1,(TObjectPtr<UComputeKernel_const_>)&local_188);
            bVar13 = true;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_160.SharedReferenceCount.ReferenceController);
            goto LAB_149772852;
          }
          bVar13 = FPCGAsyncState::ShouldStop(&local_1b0->AsyncState);
          if (bVar13) {
            bVar13 = false;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_160.SharedReferenceCount.ReferenceController);
            goto LAB_149772852;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_160.SharedReferenceCount.ReferenceController);
        }
      }
      if (this->bPrimitiveDescriptorsCreated == false) {
        CreatePrimitiveDescriptors(this,pFVar29,param_1);
        pFVar28 = (this->PrimitiveDescriptors).AllocatorInstance.Data;
        iVar5 = (this->PrimitiveDescriptors).ArrayNum;
        this_00 = (FSoftObjectPath *)(pFVar28 + 0x80);
        while( true ) {
          if ((this->PrimitiveDescriptors).ArrayNum != iVar5) {
            `TCheckedPointerIterator<FPCGSoftSkinnedMeshComponentDescriptor,int,0>::operator!='::
            __l2::<lambda_1>::operator()(local_res20);
          }
          pFVar29 = local_1b0;
          if (this_00 + -4 == (FSoftObjectPath *)(pFVar28 + (longlong)iVar5 * 0xd8)) break;
          if (5 < (byte)LogPCG._0_1_) {
            FSoftObjectPath::ToString(this_00,&local_150);
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
            if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_150.Data.AllocatorInstance.Data);
            }
          }
          local_130._16_8_ = 0;
          local_130._0_8_ = 0;
          local_130._8_8_ = 0;
          local_a8.ProgressDelegate.Object = (FLoadPackageAsyncProgressDelegate *)0x0;
          local_a8.ProgressDelegate.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
          local_a8.PackagePriority = 0;
          local_a8.InstancingContext = (FLinkerInstancingContext *)0x0;
          local_a8.LoadFlags = 0;
          TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                    (&local_80,&local_130);
          FSoftObjectPath::LoadAsync
                    (this_00,(TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy>
                              *)&local_80,&local_a8);
          TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                    (&local_130);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          this_00 = (FSoftObjectPath *)&this_00[6].SubPathString.Data.ArrayNum;
        }
        this->bPrimitiveDescriptorsCreated = true;
        bVar13 = FPCGAsyncState::ShouldStop(&local_1b0->AsyncState);
        if (bVar13) {
          bVar13 = false;
          goto LAB_149772852;
        }
      }
      if (this->bStaticMeshesLoaded == false) {
        iVar5 = (this->PrimitiveDescriptors).ArrayNum;
        pFVar28 = (this->PrimitiveDescriptors).AllocatorInstance.Data;
        pFVar30 = pFVar28 + (longlong)iVar5 * 0xd8;
        while( true ) {
          if ((this->PrimitiveDescriptors).ArrayNum != iVar5) {
            `TCheckedPointerIterator<FPCGSoftSkinnedMeshComponentDescriptor,int,0>::operator!='::
            __l2::<lambda_1>::operator()(local_1c0);
          }
          if (pFVar28 == pFVar30) {
            this->bStaticMeshesLoaded = true;
            pFVar29 = local_1b0;
            goto LAB_149772696;
          }
          pUVar24 = TPersistentObjectPtr<FSoftObjectPath>::Get
                              ((TPersistentObjectPtr<FSoftObjectPath> *)(pFVar28 + 0x78));
          if ((pUVar24 == (UObject *)0x0) &&
             ((((FSoftObjectPath *)(pFVar28 + 0x80))->AssetPath).PackageName != (FName)0x0)) break;
          pFVar28 = pFVar28 + 0xd8;
        }
        if (5 < (byte)LogPCG._0_1_) {
          FSoftObjectPath::ToString((FSoftObjectPath *)(pFVar28 + 0x80),&local_140);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_140.Data.AllocatorInstance.Data);
          }
        }
        bVar13 = false;
        goto LAB_149772852;
      }
LAB_149772696:
      if (this->bPrimitivesSetUp == false) {
        cVar16 = (**(code **)(this->_padding_ + 0x2e8))(this,pFVar29,param_1);
        if (cVar16 == '\0') {
          bVar13 = false;
          goto LAB_149772852;
        }
        this->bPrimitivesSetUp = true;
        if (0 < this->NumPrimitivesSetup) {
          bVar13 = false;
          *(undefined1 *)(local_1b8 + 0x381) = 1;
          goto LAB_149772852;
        }
        pUVar24 = (UObject *)this->_padding_;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar24 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar24);
        }
        local_180 = pUVar24;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar24 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar24);
        }
        TVar26.DebugPtr = (UComputeKernel *)&local_180;
      }
      else {
        pUVar24 = (UObject *)this->_padding_;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar24 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar24);
        }
        local_178 = pUVar24;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar24 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar24);
        }
        TVar26.DebugPtr = (UComputeKernel *)&local_178;
      }
    }
  }
  UPCGDataBinding::AddCompletedMeshSpawnerKernel(param_1,(TObjectPtr<UComputeKernel_const_>)TVar26);
  bVar13 = true;
LAB_149772852:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1c8);
  if (bVar31) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar13;
}

// Reset @ 149774fa0

void __thiscall UPCGSkinnedMeshSpawnerDataProvider::Reset(UPCGSkinnedMeshSpawnerDataProvider *this)

{
  int *piVar1;
  undefined1 *puVar2;
  TMap<int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,unsigned_int,0>_>
  *this_00;
  int iVar3;
  bool bVar4;
  
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
  DestructItems<FPCGSoftSkinnedMeshComponentDescriptor,int>
            ((FPCGSoftSkinnedMeshComponentDescriptor *)
             (this->PrimitiveDescriptors).AllocatorInstance.Data,
             (this->PrimitiveDescriptors).ArrayNum);
  piVar1 = &(this->PrimitiveDescriptors).ArrayMax;
  (this->PrimitiveDescriptors).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xd8,8,0,&(this->PrimitiveDescriptors).AllocatorInstance,0,piVar1);
  }
  this->CustomFloatCount = 0;
  this->bStaticMeshesLoaded = false;
  this->bPrimitivesSetUp = false;
  this->NumPrimitivesSetup = 0;
  this->bRegisteredPrimitives = false;
  return;
}

// SetupPrimitives @ 149777760

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
UPCGSkinnedMeshSpawnerDataProvider::SetupPrimitives
          (UPCGSkinnedMeshSpawnerDataProvider *this,FPCGContext *param_1,UPCGDataBinding *param_2)

{
  int *piVar1;
  TSoftObjectPtr<AActor> *this_00;
  TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  FPCGSoftSkinnedMeshComponentDescriptor *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  FSharedReferencer<1> FVar7;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  int iVar11;
  UPCGSettings *pUVar12;
  UObject *pUVar13;
  UClass *pUVar14;
  AActor *pAVar15;
  FPCGSpawnerPrimitives *pFVar16;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  AActor *pAVar19;
  undefined1 auStackY_138 [32];
  TReferenceControllerBase<1> *local_e8;
  FSharedReferencer<1> FStack_e0;
  ForAnyElementType local_d8;
  undefined8 local_d0;
  AActor *local_c8;
  FPCGContext *local_c0;
  undefined8 local_b8;
  FSharedReferencer<1> local_b0;
  undefined1 local_a8 [32];
  ForAnyElementType local_88;
  FSharedReferencer<1> local_80;
  undefined1 local_78 [56];
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_138;
  if ((this->PrimitiveDescriptors).ArrayNum == 0) {
    return true;
  }
  pUVar13 = (UObject *)this->_padding_;
  local_c0 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar13 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar13);
  }
  pUVar12 = (UPCGSettings *)(**(code **)(*(longlong *)pUVar13 + 0x2b0))(pUVar13);
  local_a8._24_8_ = CastChecked<UPCGSkinnedMeshSpawnerSettings,UPCGSettings_const_>(pUVar12);
  this_00 = &((UPCGSkinnedMeshSpawnerSettings *)local_a8._24_8_)->TargetActor;
  pUVar13 = TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  pAVar19 = (AActor *)0x0;
  if (pUVar13 != (UObject *)0x0) {
    pUVar14 = Z_Construct_UClass_AActor_NoRegister();
    iVar11 = (int)pUVar14->_padding_;
    if ((iVar11 <= *(int *)(*(longlong *)&pUVar13->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar13->field_0x10 + 0x30) + (longlong)iVar11 * 8) ==
        &pUVar14->_padding_)) {
      pAVar15 = (AActor *)
                TPersistentObjectPtr<FSoftObjectPath>::Get
                          ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
      if (pAVar15 != (AActor *)0x0) {
        pUVar14 = Z_Construct_UClass_AActor_NoRegister();
        iVar11 = (int)pUVar14->_padding_;
        if ((iVar11 <= *(int *)(pAVar15->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pAVar15->_padding_ + 0x30) + (longlong)iVar11 * 8) ==
            &pUVar14->_padding_)) goto LAB_149777858;
      }
      pAVar15 = pAVar19;
      goto LAB_149777858;
    }
  }
  pAVar15 = FPCGContext::GetTargetActor(param_1,(UPCGSpatialData *)0x0);
LAB_149777858:
  if (pAVar15 == (AActor *)0x0) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2517564130739618435>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\Elements\\PCGSkinnedMeshSpawnerDataInterface.cpp"
                       ,0x283,"TargetActor");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
  }
  else {
    pUVar13 = (UObject *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar13);
    }
    local_a8._16_8_ = pUVar13;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar13);
    }
    pFVar16 = UPCGDataBinding::FindMeshSpawnerPrimitives
                        (param_2,(TObjectPtr<UComputeKernel_const_>)((longlong)local_a8 + 0x10));
    if (pFVar16 != (FPCGSpawnerPrimitives *)0x0) {
      local_e8 = (TReferenceControllerBase<1> *)(pFVar16->PrimitiveFactory).Object;
      FStack_e0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (local_e8 == (TReferenceControllerBase<1> *)0x0) {
        local_b0.ReferenceController = ::operator_new(0x68);
        if (local_b0.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
          local_b0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          local_e8 = (TReferenceControllerBase<1> *)&DAT_00000010;
        }
        else {
          (local_b0.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
          local_e8 = local_b0.ReferenceController + 1;
          (local_b0.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
          (local_b0.ReferenceController)->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_VFPCGPrimitiveFactoryISKMC___00_SharedPointerInternals__6B_
          ;
          local_b0.ReferenceController[3]._padding_ = 0;
          local_b0.ReferenceController[1]._padding_ = (longlong)&___7FPCGPrimitiveFactoryISKMC__6B_;
          local_b0.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
          local_b0.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
          local_b0.ReferenceController[2]._padding_ = 0;
          local_b0.ReferenceController[2].SharedReferenceCount = (atomic<int>)0x0;
          local_b0.ReferenceController[2].WeakReferenceCount = (atomic<int>)0x0;
          local_b0.ReferenceController[3].SharedReferenceCount = (atomic<int>)0x0;
          local_b0.ReferenceController[3].WeakReferenceCount = (atomic<int>)0x0;
          local_b0.ReferenceController[4]._padding_ = 0;
          local_b0.ReferenceController[4].SharedReferenceCount = (atomic<int>)0x0;
          local_b0.ReferenceController[4].WeakReferenceCount = (atomic<int>)0x0;
          local_b0.ReferenceController[5]._padding_ = 0;
          local_b0.ReferenceController[5].SharedReferenceCount = (atomic<int>)0x0;
          local_b0.ReferenceController[5].WeakReferenceCount = (atomic<int>)0x0;
          local_b0.ReferenceController[6]._padding_ = 0;
          if ((local_e8 == (TReferenceControllerBase<1> *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("InObject != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x246,L""), bVar8)) {
            pcVar5 = (code *)swi(3);
            uVar9 = (*pcVar5)();
            return (bool)uVar9;
          }
          LOCK();
          (local_b0.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(local_b0.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        FVar7.ReferenceController = local_b0.ReferenceController;
        local_b8 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_e0,&local_b0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_b0.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar7.ReferenceController);
        local_a8._8_8_ = FStack_e0.ReferenceController;
        if (FStack_e0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FStack_e0.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FStack_e0.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_a8._0_8_ = local_e8;
        if (pFVar16 != (FPCGSpawnerPrimitives *)local_a8) {
          (pFVar16->PrimitiveFactory).Object = (IPCGRuntimePrimitiveFactory *)local_e8;
          local_a8._0_8_ = (TReferenceControllerBase<1> *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(pFVar16->PrimitiveFactory).SharedReferenceCount,
                     (FSharedReferencer<1> *)(local_a8 + 8));
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_a8._8_8_);
        local_d8.Data = (FScriptContainerElement *)0x0;
        local_d0 = 0;
        local_c8 = (AActor *)0x0;
        if ((TArray<FPCGSoftSkinnedMeshComponentDescriptor,TSizedDefaultAllocator<32>_> *)&local_d8
            != &this->PrimitiveDescriptors) {
          DestructItems<FPCGSoftSkinnedMeshComponentDescriptor,int>
                    ((FPCGSoftSkinnedMeshComponentDescriptor *)0x0,0);
          iVar11 = (this->PrimitiveDescriptors).ArrayNum;
          pFVar3 = (FPCGSoftSkinnedMeshComponentDescriptor *)
                   (this->PrimitiveDescriptors).AllocatorInstance.Data;
          local_d0 = CONCAT44(local_d0._4_4_,iVar11);
          if ((iVar11 == 0) && (local_d0._4_4_ == 0)) {
            local_d0 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xd8,8,iVar11,local_d0._4_4_,&local_d8,iVar11,
                       (int *)((longlong)&local_d0 + 4));
            ConstructItems<FPCGSoftSkinnedMeshComponentDescriptor,FPCGSoftSkinnedMeshComponentDescriptor,int>
                      (local_d8.Data,pFVar3,iVar11);
          }
        }
        local_c8 = pAVar15;
        if ((local_e8 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
        (**(code **)(local_e8->_padding_ + 0x28))(local_e8,&local_d8);
        DestructItems<FPCGSoftSkinnedMeshComponentDescriptor,int>
                  ((FPCGSoftSkinnedMeshComponentDescriptor *)local_d8.Data,(int)local_d0);
        param_1 = local_c0;
        if ((FPCGSoftSkinnedMeshComponentDescriptor *)local_d8.Data !=
            (FPCGSoftSkinnedMeshComponentDescriptor *)0x0) {
          FMemory::Free(local_d8.Data);
          param_1 = local_c0;
        }
      }
      else {
        local_80.ReferenceController =
             (pFVar16->PrimitiveFactory).SharedReferenceCount.ReferenceController;
        if (local_80.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_80.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(local_80.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_88.Data = (FScriptContainerElement *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_e0,&local_80);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_80.ReferenceController);
      }
      if ((local_e8 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
      cVar10 = (**(code **)(local_e8->_padding_ + 0x30))(local_e8,param_1);
      if (cVar10 == '\0') {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_e0.ReferenceController);
        return false;
      }
      if (*(bool *)(local_a8._24_8_ + 0xf0) != false) {
        while( true ) {
          if ((local_e8 == (TReferenceControllerBase<1> *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar5 = (code *)swi(3);
            uVar9 = (*pcVar5)();
            return (bool)uVar9;
          }
          iVar11 = (**(code **)(local_e8->_padding_ + 8))(local_e8);
          if (iVar11 <= (int)pAVar19) break;
          pTVar2 = &this->PrimitiveMeshBounds;
          if ((local_e8 == (TReferenceControllerBase<1> *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar5 = (code *)swi(3);
            uVar9 = (*pcVar5)();
            return (bool)uVar9;
          }
          pFVar17 = (FScriptContainerElement *)
                    (**(code **)(local_e8->_padding_ + 0x38))(local_e8,local_78,pAVar19);
          pFVar4 = (pTVar2->AllocatorInstance).Data;
          if (((pFVar4 <= pFVar17) &&
              (pFVar17 < pFVar4 + (longlong)(this->PrimitiveMeshBounds).ArrayMax * 0x38)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar5 = (code *)swi(3);
            uVar9 = (*pcVar5)();
            return (bool)uVar9;
          }
          iVar11 = (this->PrimitiveMeshBounds).ArrayNum;
          piVar1 = &(this->PrimitiveMeshBounds).ArrayMax;
          if (iVar11 == *piVar1) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x838,&pTVar2->AllocatorInstance,piVar1);
          }
          (this->PrimitiveMeshBounds).ArrayNum = iVar11 + 1;
          uVar6 = *(undefined8 *)(pFVar17 + 8);
          lVar18 = (longlong)iVar11 * 0x38;
          pFVar4 = (pTVar2->AllocatorInstance).Data;
          pAVar19 = (AActor *)(ulonglong)((int)pAVar19 + 1);
          *(undefined8 *)(pFVar4 + lVar18) = *(undefined8 *)pFVar17;
          *(undefined8 *)(pFVar4 + lVar18 + 8) = uVar6;
          uVar6 = *(undefined8 *)(pFVar17 + 0x18);
          *(undefined8 *)(pFVar4 + lVar18 + 0x10) = *(undefined8 *)(pFVar17 + 0x10);
          *(undefined8 *)(pFVar4 + lVar18 + 0x10 + 8) = uVar6;
          uVar6 = *(undefined8 *)(pFVar17 + 0x28);
          *(undefined8 *)(pFVar4 + lVar18 + 0x20) = *(undefined8 *)(pFVar17 + 0x20);
          *(undefined8 *)(pFVar4 + lVar18 + 0x20 + 8) = uVar6;
          *(undefined8 *)(pFVar4 + lVar18 + 0x30) = *(undefined8 *)(pFVar17 + 0x30);
        }
      }
      if ((local_e8 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
      iVar11 = (**(code **)(local_e8->_padding_ + 8))(local_e8);
      this->NumPrimitivesSetup = iVar11;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_e0.ReferenceController);
      return true;
    }
  }
  return true;
}

// StaticRegisterNativesUPCGSkinnedMeshSpawnerDataProvider @ 149778880

void __cdecl
UPCGSkinnedMeshSpawnerDataProvider::StaticRegisterNativesUPCGSkinnedMeshSpawnerDataProvider(void)

{
  return;
}

