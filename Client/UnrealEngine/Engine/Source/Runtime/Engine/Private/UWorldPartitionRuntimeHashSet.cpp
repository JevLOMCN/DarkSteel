// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 38

// StaticClass @ 148a71e90

UClass * __cdecl UWorldPartitionRuntimeHashSet::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionRuntimeHashSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionRuntimeHashSet",
               &Z_Registration_Info_UClass_UWorldPartitionRuntimeHashSet.InnerSingleton,
               StaticRegisterNativesUWorldPartitionRuntimeHashSet,0x1e8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWorldPartitionRuntimeHashSet>,
               InternalVTableHelperCtorCaller<UWorldPartitionRuntimeHashSet>,local_res8,
               UWorldPartitionRuntimeHash::StaticClass,UWorldPartition::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionRuntimeHashSet.InnerSingleton;
}

// UWorldPartitionRuntimeHashSet @ 148a808c0

UWorldPartitionRuntimeHashSet * __thiscall
UWorldPartitionRuntimeHashSet::UWorldPartitionRuntimeHashSet
          (UWorldPartitionRuntimeHashSet *this,FVTableHelper *param_1)

{
  UWorldPartitionRuntimeHash::UWorldPartitionRuntimeHash((UWorldPartitionRuntimeHash *)this,param_1)
  ;
  this->_padding_ = (longlong)&___7UWorldPartitionRuntimeHashSet__6B_;
  (this->RuntimePartitions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RuntimePartitions).ArrayNum = 0;
  (this->RuntimePartitions).ArrayMax = 0;
  (this->RuntimeStreamingData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RuntimeStreamingData).ArrayNum = 0;
  (this->RuntimeStreamingData).ArrayMax = 0;
  *(undefined8 *)&this->WorldAssetStreamingObjects = 0;
  *(undefined8 *)&(this->WorldAssetStreamingObjects).field_0x8 = 0;
  *(undefined8 *)&(this->WorldAssetStreamingObjects).field_0x20 = 0;
  *(undefined4 *)&(this->WorldAssetStreamingObjects).field_0x28 = 0;
  *(undefined4 *)&(this->WorldAssetStreamingObjects).field_0x2c = 0x80;
  *(undefined4 *)&(this->WorldAssetStreamingObjects).field_0x34 = 0;
  *(undefined4 *)&(this->WorldAssetStreamingObjects).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->WorldAssetStreamingObjects).field_0x40 = 0;
  *(undefined4 *)&(this->WorldAssetStreamingObjects).field_0x48 = 0;
  *(undefined8 *)&this->StandaloneHLODActorToSourceCellsMap = 0;
  *(undefined8 *)&(this->StandaloneHLODActorToSourceCellsMap).field_0x8 = 0;
  *(undefined8 *)&(this->StandaloneHLODActorToSourceCellsMap).field_0x20 = 0;
  *(undefined4 *)&(this->StandaloneHLODActorToSourceCellsMap).field_0x28 = 0;
  *(undefined4 *)&(this->StandaloneHLODActorToSourceCellsMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->StandaloneHLODActorToSourceCellsMap).field_0x34 = 0;
  *(undefined4 *)&(this->StandaloneHLODActorToSourceCellsMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->StandaloneHLODActorToSourceCellsMap).field_0x40 = 0;
  *(undefined4 *)&(this->StandaloneHLODActorToSourceCellsMap).field_0x48 = 0;
  *(undefined8 *)&this->CustomHLODActorToSourceCellsMap = 0;
  *(undefined8 *)&(this->CustomHLODActorToSourceCellsMap).field_0x8 = 0;
  *(undefined8 *)&(this->CustomHLODActorToSourceCellsMap).field_0x20 = 0;
  *(undefined4 *)&(this->CustomHLODActorToSourceCellsMap).field_0x28 = 0;
  *(undefined4 *)&(this->CustomHLODActorToSourceCellsMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CustomHLODActorToSourceCellsMap).field_0x34 = 0;
  *(undefined4 *)&(this->CustomHLODActorToSourceCellsMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CustomHLODActorToSourceCellsMap).field_0x40 = 0;
  *(undefined4 *)&(this->CustomHLODActorToSourceCellsMap).field_0x48 = 0;
  *(undefined8 *)&this->RuntimeSpatiallyLoadedDataGridMap = 0;
  *(undefined8 *)&(this->RuntimeSpatiallyLoadedDataGridMap).field_0x8 = 0;
  *(undefined8 *)&(this->RuntimeSpatiallyLoadedDataGridMap).field_0x20 = 0;
  *(undefined4 *)&(this->RuntimeSpatiallyLoadedDataGridMap).field_0x28 = 0;
  *(undefined4 *)&(this->RuntimeSpatiallyLoadedDataGridMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->RuntimeSpatiallyLoadedDataGridMap).field_0x34 = 0;
  *(undefined4 *)&(this->RuntimeSpatiallyLoadedDataGridMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->RuntimeSpatiallyLoadedDataGridMap).field_0x40 = 0;
  *(undefined4 *)&(this->RuntimeSpatiallyLoadedDataGridMap).field_0x48 = 0;
  (this->RuntimeNonSpatiallyLoadedDataGridList).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RuntimeNonSpatiallyLoadedDataGridList).ArrayNum = 0;
  (this->RuntimeNonSpatiallyLoadedDataGridList).ArrayMax = 0;
  return this;
}

// UWorldPartitionRuntimeHashSet @ 148a80a20

UWorldPartitionRuntimeHashSet * __thiscall
UWorldPartitionRuntimeHashSet::UWorldPartitionRuntimeHashSet
          (UWorldPartitionRuntimeHashSet *this,FObjectInitializer *param_1)

{
  UWorldPartitionRuntimeHash::UWorldPartitionRuntimeHash((UWorldPartitionRuntimeHash *)this,param_1)
  ;
  this->_padding_ = (longlong)&___7UWorldPartitionRuntimeHashSet__6B_;
  (this->RuntimePartitions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RuntimePartitions).ArrayNum = 0;
  (this->RuntimePartitions).ArrayMax = 0;
  (this->RuntimeStreamingData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RuntimeStreamingData).ArrayNum = 0;
  (this->RuntimeStreamingData).ArrayMax = 0;
  *(undefined8 *)&this->WorldAssetStreamingObjects = 0;
  *(undefined8 *)&(this->WorldAssetStreamingObjects).field_0x8 = 0;
  *(undefined8 *)&(this->WorldAssetStreamingObjects).field_0x20 = 0;
  *(undefined4 *)&(this->WorldAssetStreamingObjects).field_0x28 = 0;
  *(undefined4 *)&(this->WorldAssetStreamingObjects).field_0x2c = 0x80;
  *(undefined4 *)&(this->WorldAssetStreamingObjects).field_0x34 = 0;
  *(undefined4 *)&(this->WorldAssetStreamingObjects).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->WorldAssetStreamingObjects).field_0x40 = 0;
  *(undefined4 *)&(this->WorldAssetStreamingObjects).field_0x48 = 0;
  *(undefined8 *)&this->StandaloneHLODActorToSourceCellsMap = 0;
  *(undefined8 *)&(this->StandaloneHLODActorToSourceCellsMap).field_0x8 = 0;
  *(undefined8 *)&(this->StandaloneHLODActorToSourceCellsMap).field_0x20 = 0;
  *(undefined4 *)&(this->StandaloneHLODActorToSourceCellsMap).field_0x28 = 0;
  *(undefined4 *)&(this->StandaloneHLODActorToSourceCellsMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->StandaloneHLODActorToSourceCellsMap).field_0x34 = 0;
  *(undefined4 *)&(this->StandaloneHLODActorToSourceCellsMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->StandaloneHLODActorToSourceCellsMap).field_0x40 = 0;
  *(undefined4 *)&(this->StandaloneHLODActorToSourceCellsMap).field_0x48 = 0;
  *(undefined8 *)&this->CustomHLODActorToSourceCellsMap = 0;
  *(undefined8 *)&(this->CustomHLODActorToSourceCellsMap).field_0x8 = 0;
  *(undefined8 *)&(this->CustomHLODActorToSourceCellsMap).field_0x20 = 0;
  *(undefined4 *)&(this->CustomHLODActorToSourceCellsMap).field_0x28 = 0;
  *(undefined4 *)&(this->CustomHLODActorToSourceCellsMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CustomHLODActorToSourceCellsMap).field_0x34 = 0;
  *(undefined4 *)&(this->CustomHLODActorToSourceCellsMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CustomHLODActorToSourceCellsMap).field_0x40 = 0;
  *(undefined4 *)&(this->CustomHLODActorToSourceCellsMap).field_0x48 = 0;
  *(undefined8 *)&this->RuntimeSpatiallyLoadedDataGridMap = 0;
  *(undefined8 *)&(this->RuntimeSpatiallyLoadedDataGridMap).field_0x8 = 0;
  *(undefined8 *)&(this->RuntimeSpatiallyLoadedDataGridMap).field_0x20 = 0;
  *(undefined4 *)&(this->RuntimeSpatiallyLoadedDataGridMap).field_0x28 = 0;
  *(undefined4 *)&(this->RuntimeSpatiallyLoadedDataGridMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->RuntimeSpatiallyLoadedDataGridMap).field_0x34 = 0;
  *(undefined4 *)&(this->RuntimeSpatiallyLoadedDataGridMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->RuntimeSpatiallyLoadedDataGridMap).field_0x40 = 0;
  *(undefined4 *)&(this->RuntimeSpatiallyLoadedDataGridMap).field_0x48 = 0;
  (this->RuntimeNonSpatiallyLoadedDataGridList).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RuntimeNonSpatiallyLoadedDataGridList).ArrayNum = 0;
  (this->RuntimeNonSpatiallyLoadedDataGridList).ArrayMax = 0;
  return this;
}

// ~UWorldPartitionRuntimeHashSet @ 148a81e80

void __thiscall
UWorldPartitionRuntimeHashSet::~UWorldPartitionRuntimeHashSet(UWorldPartitionRuntimeHashSet *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UWorldPartitionRuntimeHashSet__6B_;
  pFVar1 = (this->RuntimeNonSpatiallyLoadedDataGridList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->RuntimeSpatiallyLoadedDataGridMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->RuntimeSpatiallyLoadedDataGridMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RuntimeSpatiallyLoadedDataGridMap);
  *(undefined4 *)&(this->CustomHLODActorToSourceCellsMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->CustomHLODActorToSourceCellsMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CustomHLODActorToSourceCellsMap);
  *(undefined4 *)&(this->StandaloneHLODActorToSourceCellsMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->StandaloneHLODActorToSourceCellsMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StandaloneHLODActorToSourceCellsMap);
  *(undefined4 *)&(this->WorldAssetStreamingObjects).field_0x48 = 0;
  pvVar2 = *(void **)&(this->WorldAssetStreamingObjects).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,TObjectPtr<URuntimeHashSetExternalStreamingObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,TObjectPtr<URuntimeHashSetExternalStreamingObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,TObjectPtr<URuntimeHashSetExternalStreamingObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->WorldAssetStreamingObjects);
  DestructItems<FRuntimePartitionStreamingData,int>
            ((FRuntimePartitionStreamingData *)(this->RuntimeStreamingData).AllocatorInstance.Data,
             (this->RuntimeStreamingData).ArrayNum);
  pFVar1 = (this->RuntimeStreamingData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FRuntimePartitionDesc,int>
            ((FRuntimePartitionDesc *)(this->RuntimePartitions).AllocatorInstance.Data,
             (this->RuntimePartitions).ArrayNum);
  pFVar1 = (this->RuntimePartitions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UWorldPartitionRuntimeHash::~UWorldPartitionRuntimeHash((UWorldPartitionRuntimeHash *)this);
  return;
}

// operator() @ 148a82dc0

bool __thiscall
`UWorldPartitionRuntimeHashSet::Draw2D'::__l2::<lambda_1>::operator()
          (void *this,FRuntimePartitionStreamingData *param_1)

{
  TMapBase<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  FName FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_> *pTVar8;
  FRuntimePartitionStreamingData *local_18 [2];
  
  if ((param_1->SpatiallyLoadedCells).ArrayNum != 0) {
    bVar4 = FWorldPartitionDebugHelper::IsDebugRuntimeHashGridShown(param_1->Name);
    if (bVar4) {
      this_00 = *(TMapBase<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>,0>_>
                  **)this;
      FVar1 = param_1->Name;
      uVar6 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
      pTVar8 = TMapBase<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>,0>_>
               ::FindOrAddImpl<FName_const_&>(this_00,uVar6 + FVar1.Number,&param_1->Name);
      pFVar2 = (pTVar8->AllocatorInstance).Data;
      local_18[0] = param_1;
      if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
         ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)pTVar8->ArrayMax * 8)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      iVar7 = pTVar8->ArrayNum;
      if (iVar7 == pTVar8->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
      }
      pTVar8->ArrayNum = iVar7 + 1;
      *(FRuntimePartitionStreamingData **)((pTVar8->AllocatorInstance).Data + (longlong)iVar7 * 8) =
           local_18[0];
    }
  }
  return true;
}

// operator() @ 148a82ed0

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

void __thiscall
`UWorldPartitionRuntimeHashSet::Draw3D'::__l2::<lambda_1>::operator()
          (void *this,UWorldPartitionRuntimeCell *param_1)

{
  FName *pFVar1;
  UWorldPartitionRuntimeCellData *pUVar2;
  UContentBundleManager *this_00;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  float fVar17;
  bool bVar18;
  int iVar19;
  FScriptContainerElement *pFVar20;
  double *pdVar21;
  int *piVar22;
  FGuid *pFVar23;
  FContentBundleBase *this_01;
  UContentBundleDescriptor *pUVar24;
  longlong lVar25;
  longlong *plVar26;
  TTuple<FName,FColor> *pTVar27;
  FName *pFVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined4 uVar38;
  float fVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auStackY_398 [32];
  ForAnyElementType local_348;
  undefined8 local_340;
  undefined1 local_338 [4];
  FColor_u_0 local_334;
  uchar local_330;
  uchar local_32f;
  uchar local_32e;
  float local_32c;
  float fStack_328;
  float fStack_324;
  float fStack_320;
  float local_31c;
  float fStack_318;
  float fStack_314;
  float fStack_310;
  UWorldPartitionRuntimeCell *local_308;
  double local_300;
  double dStack_2f8;
  double local_2f0;
  undefined1 local_2e8 [16];
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  TVector<double>_u_0 local_2a0;
  TVector<double>_u_0 local_288;
  undefined1 local_268 [16];
  double local_258;
  double dStack_250;
  undefined1 local_248 [16];
  undefined1 local_238 [56];
  undefined1 local_200 [168];
  undefined1 local_158 [56];
  undefined1 local_120 [56];
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_398;
  local_308 = param_1;
  bVar18 = IsDebugCellShown(param_1);
  if (!bVar18) {
    return;
  }
  pUVar2 = (param_1->RuntimeCellData).field0_0x0.DebugPtr;
  if (param_1->bIsCustomHLODPlaceholderCell == false) {
    (**(code **)(pUVar2->_padding_ + 0x2f8))(pUVar2,local_200);
  }
  else {
    (**(code **)(pUVar2->_padding_ + 0x2f0))(pUVar2,local_238);
  }
  lVar25 = ((param_1->RuntimeCellData).field0_0x0.DebugPtr)->_padding_;
  if (param_1->bIsCustomHLODPlaceholderCell == false) {
    (**(code **)(lVar25 + 0x2f8))();
  }
  else {
    (**(code **)(lVar25 + 0x2f0))();
  }
  local_348.Data = (FScriptContainerElement *)0x0;
  local_340 = 0;
  fVar39 = 0.0;
  if (GShowRuntimeHashSetDebugDisplayMode == 0) {
LAB_148a8300d:
    pFVar20 = (FScriptContainerElement *)
              (**(code **)(param_1->_padding_ + 0x2e8))
                        (param_1,local_248,*(undefined4 *)((longlong)this + 0x70));
    if (((local_348.Data <= pFVar20) &&
        (pFVar20 < local_348.Data + (longlong)local_340._4_4_ * 0x10)) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar18)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar19 = (int)local_340;
    if ((int)local_340 == local_340._4_4_) {
      iVar19 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x410,&local_348,(int *)((longlong)&local_340 + 4));
    }
    fVar17 = __real_3e800000;
    local_340 = CONCAT44(local_340._4_4_,iVar19 + 1);
    uVar16 = *(undefined8 *)(pFVar20 + 8);
    *(undefined8 *)(local_348.Data + (longlong)iVar19 * 0x10) = *(undefined8 *)pFVar20;
    *(undefined8 *)(local_348.Data + (longlong)iVar19 * 0x10 + 8) = uVar16;
    fVar39 = (float)GShowRuntimeHashSetDebugDisplayLevelCount;
    if ((float)GShowRuntimeHashSetDebugDisplayLevelCount <= __real_3f800000) {
      fVar39 = __real_3f800000;
    }
    fVar39 = fVar17 / fVar39;
LAB_148a830eb:
    if ((int)local_340 != 0) goto LAB_148a831a7;
LAB_148a830fc:
    iVar19 = 0;
    if (local_348.Data < (FScriptContainerElement *)((longlong)&FLinearColor::White.field0_0x0 + 1))
    goto LAB_148a83101;
  }
  else {
    if (GShowRuntimeHashSetDebugDisplayMode == 1) {
      if (*(int *)(*(longlong *)((longlong)this + 0x78) + 8) !=
          *(int *)(*(longlong *)((longlong)this + 0x78) + 0x34)) {
        lVar25 = (**(code **)(param_1->_padding_ + 0x38))(&param_1->_padding_);
        if (*(int *)(lVar25 + 8) != 0) {
          plVar26 = (longlong *)(**(code **)(param_1->_padding_ + 0x38))(&param_1->_padding_);
          fVar17 = __real_3b808081;
          pFVar28 = (FName *)*plVar26;
          lVar25 = plVar26[1];
          pFVar1 = pFVar28 + (int)lVar25;
          while( true ) {
            if ((int)plVar26[1] != (int)lVar25) {
              local_338[0] = 0;
              `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_338);
            }
            param_1 = local_308;
            fVar39 = __real_3f2b851f;
            if (pFVar28 == pFVar1) break;
            pTVar27 = TSet<TTuple<FName,FColor>,TDefaultMapHashableKeyFuncs<FName,FColor,0>,FDefaultSetAllocator>
                      ::Find(*(TSet<TTuple<FName,FColor>,TDefaultMapHashableKeyFuncs<FName,FColor,0>,FDefaultSetAllocator>
                               **)((longlong)this + 0x78),*pFVar28);
            if ((pTVar27 == (TTuple<FName,FColor> *)0x0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Pair != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                    ,0x27b,L""), bVar18)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            local_31c = FLinearColor::sRGBToLinearTable[(byte)pTVar27->field_0xa];
            fStack_318 = FLinearColor::sRGBToLinearTable[(byte)pTVar27->field_0x9];
            fStack_314 = FLinearColor::sRGBToLinearTable[(byte)pTVar27->field_0x8];
            fStack_310 = (float)(byte)pTVar27->field_0xb * fVar17;
            if (((local_348.Data <= (FScriptContainerElement *)&local_31c) &&
                ((FScriptContainerElement *)&local_31c <
                 local_348.Data + (longlong)local_340._4_4_ * 0x10)) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar18)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar19 = (int)local_340;
            if ((int)local_340 == local_340._4_4_) {
              iVar19 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x410,&local_348,(int *)((longlong)&local_340 + 4));
            }
            local_340 = CONCAT44(local_340._4_4_,iVar19 + 1);
            pFVar28 = pFVar28 + 1;
            *(ulonglong *)(local_348.Data + (longlong)iVar19 * 0x10) =
                 CONCAT44(fStack_318,local_31c);
            *(ulonglong *)(local_348.Data + (longlong)iVar19 * 0x10 + 8) =
                 CONCAT44(fStack_310,fStack_314);
          }
        }
        goto LAB_148a830eb;
      }
    }
    else {
      if (GShowRuntimeHashSetDebugDisplayMode != 2) {
        if (GShowRuntimeHashSetDebugDisplayMode == 3) goto LAB_148a8300d;
        goto LAB_148a830fc;
      }
      if (*(longlong *)((longlong)this + 0x68) != 0) {
        piVar22 = (int *)(**(code **)(param_1->_padding_ + 800))(param_1);
        if (((piVar22[3] != 0 || piVar22[2] != 0) || piVar22[1] != 0) || *piVar22 != 0) {
          this_00 = *(UContentBundleManager **)((longlong)this + 0x68);
          pFVar23 = (FGuid *)(**(code **)(param_1->_padding_ + 800))(param_1);
          this_01 = UContentBundleManager::GetContentBundle
                              (this_00,*(UWorld **)((longlong)this + 0x60),pFVar23);
          if (this_01 != (FContentBundleBase *)0x0) {
            pUVar24 = FContentBundleBase::GetDescriptor(this_01);
            if ((pUVar24 == (UContentBundleDescriptor *)0x0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ContentBundle->GetDescriptor()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\RuntimeHashSet\\WorldPartitionRuntimeHashSetDebugDraw.cpp"
                                    ,0x193,L""), bVar18)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pUVar24 = FContentBundleBase::GetDescriptor(this_01);
            local_32c = FLinearColor::sRGBToLinearTable[(pUVar24->DebugColor).field0_0x0._s_0.R];
            fStack_328 = FLinearColor::sRGBToLinearTable[(pUVar24->DebugColor).field0_0x0._s_0.G];
            fStack_324 = FLinearColor::sRGBToLinearTable[(pUVar24->DebugColor).field0_0x0._s_0.B];
            fStack_320 = (float)(pUVar24->DebugColor).field0_0x0._s_0.A * __real_3b808081;
            if (((local_348.Data <= (FScriptContainerElement *)&local_32c) &&
                ((FScriptContainerElement *)&local_32c <
                 local_348.Data + (longlong)local_340._4_4_ * 0x10)) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar18)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar19 = (int)local_340;
            if ((int)local_340 == local_340._4_4_) {
              iVar19 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x410,&local_348,(int *)((longlong)&local_340 + 4));
            }
            fVar39 = __real_3f2b851f;
            local_340 = CONCAT44(local_340._4_4_,iVar19 + 1);
            *(ulonglong *)(local_348.Data + (longlong)iVar19 * 0x10) =
                 CONCAT44(fStack_328,local_32c);
            *(ulonglong *)(local_348.Data + (longlong)iVar19 * 0x10 + 8) =
                 CONCAT44(fStack_320,fStack_324);
          }
        }
        goto LAB_148a830eb;
      }
    }
LAB_148a83101:
    iVar19 = 0;
    if (&FLinearColor::White < local_348.Data + (longlong)local_340._4_4_ * 0x10) {
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar18) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar19 = (int)local_340;
    }
  }
  if (iVar19 == local_340._4_4_) {
    iVar19 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x410,&local_348,(int *)((longlong)&local_340 + 4));
  }
  fVar39 = __real_3dcccccd;
  local_340 = CONCAT44(local_340._4_4_,iVar19 + 1);
  ((FLinearColor_u_0 *)(local_348.Data + (longlong)iVar19 * 0x10))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
LAB_148a831a7:
  pUVar2 = (param_1->RuntimeCellData).field0_0x0.DebugPtr;
  if (param_1->bIsCustomHLODPlaceholderCell == false) {
    pdVar21 = (double *)(**(code **)(pUVar2->_padding_ + 0x2f8))(pUVar2,local_120);
  }
  else {
    pdVar21 = (double *)(**(code **)(pUVar2->_padding_ + 0x2f0))(pUVar2,local_158);
  }
  dVar9 = pdVar21[2];
  dVar10 = pdVar21[3];
  dVar11 = *pdVar21;
  dVar12 = pdVar21[1];
  dVar13 = pdVar21[4];
  dVar14 = pdVar21[5];
  local_2a8 = pdVar21[6];
  local_300 = (dVar11 + dVar10) * __real_3fe0000000000000;
  dStack_2f8 = (dVar12 + dVar13) * __real_3fe0000000000000;
  local_2f0 = (dVar9 + dVar14) * __real_3fe0000000000000;
  local_2d8 = dVar11;
  dStack_2d0 = dVar12;
  local_2c8 = dVar9;
  dStack_2c0 = dVar10;
  local_2b8 = dVar13;
  dStack_2b0 = dVar14;
  if (((int)local_340 < 1) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_2e8._0_8_ = *(undefined8 *)local_348.Data;
  local_2e8._8_4_ = (undefined4)*(undefined8 *)(local_348.Data + 8);
  local_2e8._12_4_ = fVar39;
  FLinearColor::ToFColorSRGB((FLinearColor *)local_2e8);
  auVar37 = *(undefined1 (*) [16])((longlong)this + 0x10);
  dVar31 = auVar37._0_8_;
  dVar7 = local_2f0 * *(double *)((longlong)this + 0x50);
  dVar8 = *(double *)((longlong)this + 0x58) * 0.0;
  local_334._s_0.B = local_330;
  local_334._s_0.G = local_32f;
  local_334._s_0.R = local_32e;
  local_334._s_0.A = 0xff;
  dVar15 = *(double *)((longlong)this + 0x18);
  dVar5 = *(double *)((longlong)this + 0x40) * local_300;
  dVar6 = *(double *)((longlong)this + 0x48) * dStack_2f8;
  uVar38 = (undefined4)((ulonglong)dVar6 >> 0x20);
  auVar29 = *(undefined1 (*) [16])this;
  auVar32 = blendpd(auVar29,auVar37,2);
  auVar40._8_4_ = SUB84(dVar6,0);
  auVar40._0_8_ = dVar5;
  auVar40._12_4_ = uVar38;
  auVar41._0_8_ = auVar40._8_8_ * auVar29._0_8_ - auVar29._8_8_ * dVar5;
  auVar41._8_8_ = dVar7 * auVar29._8_8_ - dVar31 * dVar6;
  auVar42._8_4_ = SUB84(dVar6,0);
  auVar42._0_8_ = dVar5;
  auVar42._12_4_ = uVar38;
  auVar29._8_4_ = SUB84(dVar8,0);
  auVar29._0_8_ = dVar7;
  auVar29._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  auVar29 = blendpd(auVar42,auVar29,2);
  auVar30._0_8_ = auVar29._0_8_ * dVar31 - auVar32._0_8_ * dVar7;
  auVar30._8_8_ = auVar29._8_8_ * auVar37._8_8_ - auVar32._8_8_ * dVar8;
  auVar29 = *(undefined1 (*) [16])this;
  auVar42 = blendpd(auVar41,auVar30,2);
  dVar8 = auVar41._8_8_ + auVar41._8_8_;
  dVar4 = auVar30._0_8_ + auVar30._0_8_;
  uVar38 = (undefined4)((ulonglong)dVar4 >> 0x20);
  auVar43._0_8_ = auVar42._0_8_ + auVar42._0_8_;
  auVar43._8_8_ = auVar42._8_8_ + auVar42._8_8_;
  auVar35._8_4_ = SUB84(dVar4,0);
  auVar35._0_8_ = dVar8;
  auVar35._12_4_ = uVar38;
  auVar33._8_4_ = SUB84(dVar4,0);
  auVar33._0_8_ = dVar8;
  auVar33._12_4_ = uVar38;
  auVar42 = blendpd(auVar33,auVar43,2);
  auVar36._0_8_ = auVar35._8_8_ * auVar29._0_8_ - auVar29._8_8_ * dVar8;
  auVar36._8_8_ = auVar43._0_8_ * auVar29._8_8_ - dVar31 * dVar4;
  auVar29 = blendpd(auVar29,auVar37,2);
  local_268 = *(undefined1 (*) [16])this;
  auVar32._8_4_ = SUB84(auVar36._8_8_,0);
  auVar32._0_8_ = auVar36._0_8_;
  auVar32._12_4_ = (int)((ulonglong)auVar36._8_8_ >> 0x20);
  auVar34._0_8_ = auVar42._0_8_ * dVar31 - auVar29._0_8_ * auVar43._0_8_;
  auVar34._8_8_ = auVar42._8_8_ * auVar37._8_8_ - auVar29._8_8_ * auVar43._8_8_;
  local_258 = *(double *)((longlong)this + 0x10);
  dStack_250 = *(double *)((longlong)this + 0x18);
  dVar4 = dVar4 * dVar15 + dVar6 + auVar34._0_8_ + *(double *)((longlong)this + 0x28);
  auVar37 = blendpd(auVar36,auVar34,2);
  local_288._s_0.Z =
       auVar43._0_8_ * dVar15 + dVar7 + auVar37._0_8_ + *(double *)((longlong)this + 0x30);
  local_2a0._s_0.X = (dVar10 - dVar11) * __real_3fe0000000000000;
  local_2a0._s_0.Y = (dVar13 - dVar12) * __real_3fe0000000000000;
  local_288._8_4_ = SUB84(dVar4,0);
  local_288._0_8_ = dVar8 * dVar15 + dVar5 + auVar32._8_8_ + *(double *)((longlong)this + 0x20);
  local_288._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  local_2a0._s_0.Z = (dVar14 - dVar9) * __real_3fe0000000000000;
  DrawDebugBox(*(UWorld **)((longlong)this + 0x60),(TVector<double> *)&local_288._s_0,
               (TVector<double> *)&local_2a0._s_0,(TQuat<double> *)local_268,
               (FColor *)&local_334._s_0,false,__real_bf800000,'\0',__real_41a00000);
  if (local_348.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_348.Data);
  }
  return;
}

// operator() @ 148a83980

bool __thiscall
`UWorldPartitionRuntimeHashSet::ForEachStreamingCells'::__l2::<lambda_1>::operator()
          (void *this,
          TArray<TObjectPtr<UWorldPartitionRuntimeCell>,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  char cVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_res10;
  
  pFVar4 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UWorldPartitionRuntimeCell>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(&local_res10);
    }
    if (pFVar4 == pFVar1) break;
    local_res10 = *(undefined8 *)pFVar4;
    cVar3 = (*(code *)**(undefined8 **)((longlong)this + 8))
                      ((*(undefined8 **)((longlong)this + 8))[1],&local_res10);
    if (cVar3 == '\0') {
      return false;
    }
    pFVar4 = pFVar4 + 8;
  }
  return true;
}

// operator() @ 148a83a00

bool __thiscall
`UWorldPartitionRuntimeHashSet::ForEachStreamingCellsQuery'::__l2::<lambda_1>::operator()
          (void *this,UWorldPartitionRuntimeCell *param_1,
          FWorldPartitionStreamingQuerySource *param_2)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  
  bVar2 = UWorldPartitionRuntimeHash::IsCellRelevantFor
                    (*(UWorldPartitionRuntimeHash **)this,param_1->bClientOnlyVisible);
  if (bVar2) {
    if ((param_1->DataLayers).DataLayers.ArrayNum == 0) {
      return param_2->bDataLayersOnly == false;
    }
    plVar3 = (longlong *)(**(code **)(param_1->_padding_ + 0x38))(&param_1->_padding_);
    plVar5 = (longlong *)*plVar3;
    plVar3 = plVar5 + (int)plVar3[1];
    if (plVar5 != plVar3) {
      pFVar1 = (param_2->DataLayers).AllocatorInstance.Data;
      do {
        if (pFVar1 != pFVar1 + (longlong)(param_2->DataLayers).ArrayNum * 8) {
          pFVar4 = pFVar1;
          do {
            if (*(longlong *)pFVar4 == *plVar5) {
              return true;
            }
            pFVar4 = pFVar4 + 8;
          } while (pFVar4 != pFVar1 + (longlong)(param_2->DataLayers).ArrayNum * 8);
        }
        plVar5 = plVar5 + 1;
      } while (plVar5 != plVar3);
    }
  }
  return false;
}

// operator() @ 148a83df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
`UWorldPartitionRuntimeHashSet::RegisterWorldAssetStreaming'::__l2::<lambda_1>::operator()
          (void *this,URuntimePartition *param_1,TSoftObjectPtr<UWorld> *param_2,bool param_3)

{
  longlong *plVar1;
  FName *pFVar2;
  bool bVar3;
  uint *puVar4;
  longlong lVar5;
  UWorldPartitionRuntimeHash *this_00;
  UObject *pUVar6;
  code *pcVar7;
  undefined8 uVar8;
  longlong lVar9;
  TSoftObjectPtr<UWorld> *pTVar10;
  ForAnyElementType _Src;
  bool bVar11;
  undefined1 uVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  FArchive *pFVar16;
  UClass *pUVar17;
  UClass *pUVar18;
  UWorldPartitionRuntimeLevelStreamingCell *this_01;
  FLinearColor *pFVar19;
  UWorldPartitionRuntimeCellDataHashSet *pUVar20;
  wchar_t *pwVar21;
  undefined1 auStackY_2d8 [32];
  ForAnyElementType local_280;
  undefined8 local_278;
  UWorldPartitionRuntimeLevelStreamingCell *local_270;
  FName local_268;
  uint local_260;
  FName local_258;
  undefined8 local_250;
  FName local_248;
  undefined8 local_240;
  FName local_238;
  FName FStack_230;
  FName local_228;
  FString local_218;
  FString local_208;
  FName local_1f8;
  TSoftObjectPtr<UWorld> *local_1f0;
  FGuid local_1e8;
  URuntimePartition *local_1d8;
  FName local_1d0;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FGuid local_188;
  FString local_178;
  FString local_168;
  FLinearColor local_158;
  FArchiveMD5 local_148;
  undefined1 local_58;
  uint local_57;
  uint uStack_53;
  uint uStack_4f;
  uint uStack_4b;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  local_1f0 = param_2;
  local_1d8 = param_1;
  if ((param_1 == (URuntimePartition *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("TargetPartition",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\RuntimeHashSet\\WorldPartitionRuntimeHashSet.cpp"
                          ,0x32e,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    uVar12 = (*pcVar7)();
    return (bool)uVar12;
  }
  bVar11 = param_1->bClientOnlyVisible;
  local_268 = param_1->Name;
  bVar3 = param_1->bBlockOnSlowStreaming;
  local_260 = param_1->LoadingRange;
  local_258.ComparisonIndex.Value = 0;
  local_258.Number = 0;
  local_250 = 0;
  local_248.ComparisonIndex.Value = 0;
  local_248.Number = 0;
  local_240 = 0;
  local_238.ComparisonIndex.Value = 0;
  local_238.Number = 0;
  FStack_230.ComparisonIndex.Value = 0;
  FStack_230.Number = 0;
  local_228.ComparisonIndex.Value = 0;
  local_228.Number = 0;
  local_188._0_8_ = *(undefined8 *)(*(longlong *)this + 0x40);
  local_188._8_8_ = *(undefined8 *)(*(longlong *)this + 0x48);
  local_1f8 = local_268;
  FArchiveState::FArchiveState((FArchiveState *)&local_148);
  local_148._padding_ = (longlong)&___7FArchiveMD5__6B_;
  FMD5::FMD5(&local_148.MD5);
  (**(code **)(local_148._padding_ + 200))(&local_148,0);
  (**(code **)(local_148._padding_ + 0xd8))(&local_148,1);
  (**(code **)(local_148._padding_ + 0x108))(&local_148,0);
  if (*(code **)(local_148._padding_ + 0x178) == FArchiveMD5::operator<<) {
    pFVar16 = FArchiveMD5::operator<<(&local_148,&local_1f8);
  }
  else {
    pFVar16 = (FArchive *)(**(code **)(local_148._padding_ + 0x178))();
  }
  ::operator<<(pFVar16,&local_188);
  local_58 = 0;
  FMD5::Final(&local_148.MD5,(uchar *)&local_57);
  local_58 = 1;
  local_1e8.A = local_57;
  local_1e8.B = uStack_53;
  local_1e8.C = uStack_4f;
  local_1e8.D = uStack_4b;
  if ((((uStack_4b == 0 && uStack_4f == 0) && uStack_53 == 0) && local_57 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("CellGuid.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\RuntimeHashSet\\WorldPartitionRuntimeHashSet.cpp"
                          ,0x33d,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    uVar12 = (*pcVar7)();
    return (bool)uVar12;
  }
  if (!param_3) {
    puVar4 = *(uint **)((longlong)this + 8);
    *puVar4 = local_1e8.A;
    puVar4[1] = local_1e8.B;
    puVar4[2] = local_1e8.C;
    puVar4[3] = local_1e8.D;
  }
  local_208.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_208.Data.ArrayNum = 0;
  local_208.Data.ArrayMax = 0;
  FGuid::AppendString(&local_1e8,&local_208,Digits);
  ::FString::PrintfImpl(&local_218,L"InjectedCell_%s");
  if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.Data.AllocatorInstance.Data);
  }
  lVar5 = *(longlong *)this;
  this_00 = *(UWorldPartitionRuntimeHash **)((longlong)this + 0x18);
  pUVar6 = *(UObject **)((longlong)this + 0x10);
  pUVar17 = UWorldPartitionRuntimeCellDataHashSet::StaticClass();
  pUVar18 = Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell_NoRegister();
  this_01 = (UWorldPartitionRuntimeLevelStreamingCell *)
            UWorldPartitionRuntimeHash::CreateRuntimeCell
                      (this_00,pUVar18,pUVar17,&local_218,(FString *)(lVar5 + 0xf0),pUVar6);
  if (this_01 == (UWorldPartitionRuntimeLevelStreamingCell *)0x0) {
LAB_148a844d2:
    if (1 < (byte)LogWorldPartition._0_1_) {
      UE::Math::TTransform<double>::ToString
                ((TTransform<double> *)(*(longlong *)this + 0x50),&local_168);
      FSoftObjectPath::ToString((FSoftObjectPath *)&(local_1f0->SoftObjectPtr).field_0x8,&local_198)
      ;
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
      if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.Data.AllocatorInstance.Data);
      }
LAB_148a8454d:
      if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    pUVar17 = Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell_NoRegister();
    iVar15 = (int)pUVar17->_padding_;
    if ((*(int *)(this_01->_padding_ + 0x38) < iVar15) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar15 * 8) !=
        &pUVar17->_padding_)) goto LAB_148a844d2;
    pwVar21 = L"";
    *(bool *)&this_01->_padding_ = bVar11;
    *(bool *)((longlong)&this_01->_padding_ + 3) = bVar3;
    *(bool *)((longlong)&this_01->_padding_ + 1) = param_3;
    *(ulonglong *)((longlong)&this_01->_padding_ + 4) = CONCAT44(local_1e8.B,local_1e8.A);
    *(ulonglong *)((longlong)&this_01->_padding_ + 4) = CONCAT44(local_1e8.D,local_1e8.C);
    if (local_218.Data.ArrayNum == 0) {
      local_218.Data.ArrayNum = 0;
    }
    else {
      local_218.Data.ArrayNum = local_218.Data.ArrayNum + -1;
      pwVar21 = (wchar_t *)local_218.Data.AllocatorInstance.Data;
    }
    uVar14 = FCrc::Strihash_DEPRECATED<wchar_t>(local_218.Data.ArrayNum,pwVar21);
    pFVar19 = FLinearColor::MakeRandomSeededColor(&local_158,uVar14);
    uVar8 = *(undefined8 *)((longlong)&pFVar19->field0_0x0 + 8);
    *(undefined8 *)((longlong)&this_01->_padding_ + 4) = *(undefined8 *)&pFVar19->field0_0x0;
    *(undefined8 *)((longlong)&this_01->_padding_ + 4) = uVar8;
    if (param_3) {
      uVar8 = (*(undefined8 **)((longlong)this + 8))[1];
      *(undefined8 *)((longlong)&this_01->_padding_ + 4) = **(undefined8 **)((longlong)this + 8);
      *(undefined8 *)((longlong)&this_01->_padding_ + 4) = uVar8;
    }
    pUVar20 = CastChecked<UWorldPartitionRuntimeCellDataHashSet,UWorldPartitionRuntimeCellData>
                        ((TObjectPtr<UWorldPartitionRuntimeCellData> *)&this_01->_padding_,
                         NullChecked);
    ::FString::ConcatFF(&local_1c8,&local_218,(FString *)(*(longlong *)this + 0xf0));
    _Src.Data = local_1c8.Data.AllocatorInstance.Data;
    local_280.Data = (FScriptContainerElement *)0x0;
    local_278 = (ulonglong)(uint)local_1c8.Data.ArrayNum;
    if (local_1c8.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_1c8.Data.ArrayNum,0,&local_280,local_1c8.Data.ArrayNum,
                 (int *)((longlong)&local_278 + 4));
      memcpy(local_280.Data,_Src.Data,(longlong)local_1c8.Data.ArrayNum * 2);
    }
    plVar1 = &pUVar20->_padding_;
    if ((ForAnyElementType *)plVar1 != &local_280) {
      if ((void *)*plVar1 != (void *)0x0) {
        FMemory::Free((void *)*plVar1);
      }
      *plVar1 = (longlong)local_280.Data;
      *(undefined4 *)&pUVar20->_padding_ = (undefined4)local_278;
      local_280.Data = (FScriptContainerElement *)0x0;
      *(undefined4 *)((longlong)&pUVar20->_padding_ + 4) = local_278._4_4_;
      local_278 = 0;
    }
    if (local_280.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_280.Data);
    }
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
    pTVar10 = local_1f0;
    lVar5 = *(longlong *)this;
    if ((longlong *)(lVar5 + 0xb0) != &pUVar20->_padding_) {
      lVar9 = *(longlong *)(lVar5 + 0xb8);
      pUVar20->_padding_ = *(longlong *)(lVar5 + 0xb0);
      pUVar20->_padding_ = lVar9;
      lVar9 = *(longlong *)(lVar5 + 200);
      pUVar20->_padding_ = *(longlong *)(lVar5 + 0xc0);
      pUVar20->_padding_ = lVar9;
      lVar9 = *(longlong *)(lVar5 + 0xd8);
      pUVar20->_padding_ = *(longlong *)(lVar5 + 0xd0);
      pUVar20->_padding_ = lVar9;
      pUVar20->_padding_ = *(longlong *)(lVar5 + 0xe0);
      *(undefined1 *)&pUVar20->_padding_ = 1;
    }
    lVar5 = *(longlong *)this;
    lVar9 = *(longlong *)(lVar5 + 0xb8);
    pUVar20->_padding_ = *(longlong *)(lVar5 + 0xb0);
    pUVar20->_padding_ = lVar9;
    lVar9 = *(longlong *)(lVar5 + 200);
    pUVar20->_padding_ = *(longlong *)(lVar5 + 0xc0);
    pUVar20->_padding_ = lVar9;
    lVar9 = *(longlong *)(lVar5 + 0xd8);
    pUVar20->_padding_ = *(longlong *)(lVar5 + 0xd0);
    pUVar20->_padding_ = lVar9;
    pUVar20->_padding_ = *(longlong *)(lVar5 + 0xe0);
    *(undefined4 *)((longlong)&pUVar20->_padding_ + 4) = 0x7fffffff;
    *(undefined4 *)&pUVar20->_padding_ = *(undefined4 *)(*(longlong *)this + 0xe8);
    pUVar20->_padding_ = (longlong)local_1d8->Name;
    pUVar20->bIs2D = false;
    bVar11 = UWorldPartitionRuntimeLevelStreamingCell::CreateAndSetLevelStreaming
                       (this_01,local_1f0,(TTransform<double> *)(*(longlong *)this + 0x50));
    if (bVar11) {
      local_270 = this_01;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_01);
      }
      if ((((ulonglong)local_258 <= &local_270) &&
          (&local_270 <
           (UWorldPartitionRuntimeLevelStreamingCell **)
           ((longlong)local_258 + (longlong)(int)local_250._4_4_ * 8))) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar7 = (code *)swi(3);
        uVar12 = (*pcVar7)();
        return (bool)uVar12;
      }
      iVar15 = (uint)local_250;
      if ((uint)local_250 == local_250._4_4_) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)&local_258,(int *)((longlong)&local_250 + 4))
        ;
      }
      local_250 = CONCAT44(local_250._4_4_,iVar15 + 1);
      *(UWorldPartitionRuntimeLevelStreamingCell **)((longlong)local_258 + (longlong)iVar15 * 8) =
           local_270;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_270 != (UWorldPartitionRuntimeLevelStreamingCell *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_270);
      }
      lVar5 = *(longlong *)((longlong)this + 0x10);
      iVar15 = *(int *)(lVar5 + 0x1d0);
      if (iVar15 == *(int *)(lVar5 + 0x1d4)) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x848,(ForAnyElementType *)(lVar5 + 0x1c8),(int *)(lVar5 + 0x1d4));
      }
      *(int *)(lVar5 + 0x1d0) = iVar15 + 1;
      bVar11 = true;
      pFVar2 = (FName *)(*(longlong *)(lVar5 + 0x1c8) + (longlong)iVar15 * 0x48);
      *pFVar2 = local_268;
      pFVar2[1].ComparisonIndex.Value = local_260;
      pFVar2[2].ComparisonIndex = 0;
      pFVar2[2].Number = 0;
      pFVar2[2] = local_258;
      local_258.ComparisonIndex.Value = 0;
      local_258.Number = 0;
      pFVar2[3].ComparisonIndex.Value = (uint)local_250;
      pFVar2[3].Number = local_250._4_4_;
      local_250 = 0;
      pFVar2[4].ComparisonIndex = 0;
      pFVar2[4].Number = 0;
      pFVar2[4] = local_248;
      local_248.ComparisonIndex.Value = 0;
      local_248.Number = 0;
      pFVar2[5].ComparisonIndex.Value = (uint)local_240;
      pFVar2[5].Number = local_240._4_4_;
      local_240 = 0;
      pFVar2[6] = local_238;
      local_238.ComparisonIndex.Value = 0;
      local_238.Number = 0;
      pFVar2[7] = FStack_230;
      FStack_230.ComparisonIndex.Value = 0;
      FStack_230.Number = 0;
      pFVar2[8] = local_228;
      local_228.ComparisonIndex.Value = 0;
      local_228.Number = 0;
      goto LAB_148a84559;
    }
    if (1 < (byte)LogWorldPartition._0_1_) {
      UE::Math::TTransform<double>::ToString
                ((TTransform<double> *)(*(longlong *)this + 0x50),&local_178);
      FSoftObjectPath::ToString((FSoftObjectPath *)&(pTVar10->SoftObjectPtr).field_0x8,&local_1a8);
      local_1d0 = (FName)this_01->_padding_;
      ::FName::ToString(&local_1d0,&local_1b8);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
      if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
      }
      local_168.Data.AllocatorInstance.Data = local_178.Data.AllocatorInstance.Data;
      if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
        local_168.Data.AllocatorInstance.Data = local_178.Data.AllocatorInstance.Data;
      }
      goto LAB_148a8454d;
    }
  }
  bVar11 = false;
LAB_148a84559:
  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
  FMD5::~FMD5(&local_148.MD5);
  FArchive::~FArchive((FArchive *)&local_148);
  if (local_228 != (FName)0x0) {
    (*(code *)**(undefined8 **)local_228)(local_228,1);
  }
  if (FStack_230 != (FName)0x0) {
    (*(code *)**(undefined8 **)FStack_230)(FStack_230,1);
  }
  if (local_238 != (FName)0x0) {
    (*(code *)**(undefined8 **)local_238)(local_238,1);
  }
  if (local_248 != (FName)0x0) {
    FMemory::Free((void *)local_248);
  }
  if (local_258 != (FName)0x0) {
    FMemory::Free((void *)local_258);
  }
  return bVar11;
}

// operator() @ 148a84610

bool __thiscall
`UWorldPartitionRuntimeHashSet::UpdateRuntimeDataGridMap'::__l2::<lambda_1>::operator()
          (void *this,FRuntimePartitionStreamingData *param_1)

{
  FName FVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_> *pTVar9;
  ForAnyElementType *pFVar10;
  FRuntimePartitionStreamingData *local_18;
  FRuntimePartitionStreamingData *local_10;
  
  if ((param_1->SpatiallyLoadedCells).ArrayNum != 0) {
    FVar1 = param_1->Name;
    lVar2 = *(longlong *)this;
    uVar7 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
    pTVar9 = TMapBase<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>,0>_>
             ::FindOrAddImpl<FName_const_&>
                       ((TMapBase<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>,0>_>
                         *)(lVar2 + 0x188),uVar7 + FVar1.Number,&param_1->Name);
    pFVar3 = (pTVar9->AllocatorInstance).Data;
    local_18 = param_1;
    if ((pFVar3 <= (FScriptContainerElement *)&local_18) &&
       ((FScriptContainerElement *)&local_18 < pFVar3 + (longlong)pTVar9->ArrayMax * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    iVar8 = pTVar9->ArrayNum;
    if (iVar8 == pTVar9->ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar9->AllocatorInstance,&pTVar9->ArrayMax);
    }
    pTVar9->ArrayNum = iVar8 + 1;
    *(FRuntimePartitionStreamingData **)((pTVar9->AllocatorInstance).Data + (longlong)iVar8 * 8) =
         local_18;
  }
  if ((param_1->NonSpatiallyLoadedCells).ArrayNum != 0) {
    lVar2 = *(longlong *)this;
    pFVar10 = (ForAnyElementType *)(lVar2 + 0x1d8);
    local_10 = param_1;
    if ((pFVar10->Data <= (FScriptContainerElement *)&local_10) &&
       ((FScriptContainerElement *)&local_10 < pFVar10->Data + (longlong)*(int *)(lVar2 + 0x1e4) * 8
       )) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    iVar8 = *(int *)(lVar2 + 0x1e0);
    if (iVar8 == *(int *)(lVar2 + 0x1e4)) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar10,(int *)(lVar2 + 0x1e4));
    }
    *(int *)(lVar2 + 0x1e0) = iVar8 + 1;
    *(FRuntimePartitionStreamingData **)(pFVar10->Data + (longlong)iVar8 * 8) = local_10;
  }
  return true;
}

// operator() @ 148a84a80

void __thiscall
`UWorldPartitionRuntimeHashSet::GetWorldAssetStreamingCells'::__l5::<lambda_1>::operator()
          (void *this,UWorldPartitionRuntimeCell *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UWorldPartitionRuntimeCell *local_18 [2];
  
  pFVar2 = *(ForAnyElementType **)this;
  local_18[0] = param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8)) {
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
                      (0x808,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar5 + 1;
  *(UWorldPartitionRuntimeCell **)(pFVar2->Data + (longlong)iVar5 * 8) = local_18[0];
  return;
}

// operator() @ 148a85460

void __thiscall
`UWorldPartitionRuntimeHashSet::ForEachStreamingCellsSources'::__l68::<lambda_1>::operator()
          (void *this,FSphericalSector *param_1)

{
  double dVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  uint uVar9;
  code *local_118;
  TVector<double>_u_0 *local_110;
  undefined1 local_108 [8];
  undefined8 local_100;
  longlong local_f8;
  FSphericalSector *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  TVector2<double>_u_0 local_d8;
  double local_c8;
  TVector<double>_u_0 local_b8;
  FCone local_98;
  
  local_98.Angle = param_1->Angle;
  uVar2 = *(undefined8 *)this;
  lVar3 = *(longlong *)((longlong)this + 8);
  uVar4 = *(undefined8 *)((longlong)this + 0x18);
  uVar5 = *(undefined8 *)((longlong)this + 0x20);
  uVar8 = SUB84(local_98.Angle - __real_4076800000000000,0) &
          (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar9 = (uint)((ulonglong)(local_98.Angle - __real_4076800000000000) >> 0x20) &
          __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  local_100 = uVar2;
  local_f8 = lVar3;
  local_f0 = param_1;
  local_e8 = uVar4;
  local_e0 = uVar5;
  if (__real_3e45798ee2308c3a <= (double)CONCAT44(uVar9,uVar8) &&
      (double)CONCAT44(uVar9,uVar8) != __real_3e45798ee2308c3a) {
    local_98._padding_ = (longlong)(param_1->Center).field0_0x0._s_0.Z;
    local_98._padding_ = (longlong)param_1->Radius;
    local_98._padding_ = (longlong)(param_1->Center).field0_0x0._s_0.X;
    local_98._padding_ = (longlong)(param_1->Center).field0_0x0._s_0.Y;
    local_98.Axis.field0_0x0._s_0.X = (param_1->Axis).field0_0x0._s_0.X;
    local_98.Axis.field0_0x0._s_0.Y = (param_1->Axis).field0_0x0._s_0.Y;
    local_d8._s_0.X = *(double *)(*(longlong *)((longlong)this + 0x10) + 0x30);
    local_98.Axis.field0_0x0._s_0.Z = (param_1->Axis).field0_0x0._s_0.Z;
    if (local_d8._s_0.X != 0.0) {
      local_108[0] = 1;
      if (*(char *)(lVar3 + 0x11a) == '\0') {
        local_d8._s_0.Y = (double)local_108;
        local_110 = (TVector<double>_u_0 *)&local_d8;
        local_118 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile3D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>_>::ForEachIntersectingElement<``UWorldPartitionRuntimeHashSet::ForEachStreamingCellsSources'::__l68::<lambda_1>::operator()'::__l2::<lambda_1>_>'::__l2::<lambda_1>,bool,unsigned_int>
                    ::Call;
        FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::
        ForEachIntersectingElement
                  ((TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64> *)
                   ((longlong)local_d8._s_0.X + 0x18),&local_98,
                   (TFunctionRef<bool___cdecl(unsigned_int)> *)&local_118);
      }
      else {
        local_d8._s_0.X = *(double *)(*(longlong *)((longlong)this + 0x10) + 0x38);
        local_d8._s_0.Y = (double)local_108;
        local_110 = (TVector<double>_u_0 *)&local_d8;
        local_118 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>::ForEachIntersectingElement<``UWorldPartitionRuntimeHashSet::ForEachStreamingCellsSources'::__l68::<lambda_1>::operator()'::__l2::<lambda_1>_>'::__l2::<lambda_1>,bool,unsigned_int>
                    ::Call;
        FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::
        ForEachIntersectingElement
                  ((TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64> *)
                   ((longlong)local_d8._s_0.X + 0x18),&local_98,
                   (TFunctionRef<bool___cdecl(unsigned_int)> *)&local_118);
      }
    }
    local_d8._s_0.X = *(double *)(*(longlong *)((longlong)this + 0x10) + 0x40);
    if (local_d8._s_0.X != 0.0) {
      local_d8._s_0.Y = (double)local_108;
      local_110 = (TVector<double>_u_0 *)&local_d8;
      local_108[0] = 1;
      local_118 = UE::Core::Private::Function::
                  TFunctionRefCaller<`TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>::ForEachIntersectingElement<``UWorldPartitionRuntimeHashSet::ForEachStreamingCellsSources'::__l68::<lambda_1>::operator()'::__l2::<lambda_1>_>'::__l2::<lambda_1>,bool,unsigned_int>
                  ::Call;
      local_100 = uVar2;
      local_f8 = lVar3;
      local_f0 = param_1;
      local_e8 = uVar4;
      local_e0 = uVar5;
      FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::
      ForEachIntersectingElement
                ((TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64> *)
                 ((longlong)local_d8._s_0.X + 0x18),&local_98,
                 (TFunctionRef<bool___cdecl(unsigned_int)> *)&local_118);
    }
  }
  else {
    local_c8 = (param_1->Center).field0_0x0._s_0.Z;
    dVar1 = param_1->Radius;
    dVar6 = (param_1->Center).field0_0x0._s_0.X;
    dVar7 = (param_1->Center).field0_0x0._s_0.Y;
    local_d8._s_0.X = *(double *)(*(longlong *)((longlong)this + 0x10) + 0x30);
    if (local_d8._s_0.X != 0.0) {
      local_108[0] = 1;
      if (*(char *)(lVar3 + 0x11a) == '\0') {
        local_d8._s_0.Y = (double)local_108;
        local_118 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile3D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>_>::ForEachIntersectingElement<``UWorldPartitionRuntimeHashSet::ForEachStreamingCellsSources'::__l68::<lambda_1>::operator()'::__l2::<lambda_1>_>'::__l2::<lambda_1>,bool,unsigned_int>
                    ::Call;
        local_110 = (TVector<double>_u_0 *)&local_d8;
        local_b8._s_0.X = dVar6;
        local_b8._s_0.Y = dVar7;
        local_b8._s_0.Z = local_c8;
        FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::
        ForEachIntersectingElementRecursive
                  ((TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64> *)
                   ((longlong)local_d8._s_0.X + 0x18),(FNode *)((longlong)local_d8._s_0.X + 0x20),
                   (TVector<double> *)&local_b8._s_0,dVar1 * dVar1,
                   (TFunctionRef<bool___cdecl(unsigned_int)> *)&local_118);
      }
      else {
        local_b8._s_0.X = *(double *)(*(longlong *)((longlong)this + 0x10) + 0x38);
        local_118 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>::ForEachIntersectingElement<``UWorldPartitionRuntimeHashSet::ForEachStreamingCellsSources'::__l68::<lambda_1>::operator()'::__l2::<lambda_1>_>'::__l2::<lambda_1>,bool,unsigned_int>
                    ::Call;
        local_b8._s_0.Y = (double)local_108;
        local_110 = &local_b8;
        local_d8._s_0.X = dVar6;
        local_d8._s_0.Y = dVar7;
        FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::
        ForEachIntersectingElementRecursive
                  ((TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64> *)
                   ((longlong)local_b8._s_0.X + 0x18),(FNode *)((longlong)local_b8._s_0.X + 0x20),
                   (TVector2<double> *)&local_d8._s_0,dVar1 * dVar1,
                   (TFunctionRef<bool___cdecl(unsigned_int)> *)&local_118);
      }
    }
    local_d8._s_0.X = *(double *)(*(longlong *)((longlong)this + 0x10) + 0x40);
    if (local_d8._s_0.X != 0.0) {
      local_d8._s_0.Y = (double)local_108;
      local_110 = (TVector<double>_u_0 *)&local_d8;
      local_108[0] = 1;
      local_118 = UE::Core::Private::Function::
                  TFunctionRefCaller<`TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>::ForEachIntersectingElement<``UWorldPartitionRuntimeHashSet::ForEachStreamingCellsSources'::__l68::<lambda_1>::operator()'::__l2::<lambda_1>_>'::__l2::<lambda_1>,bool,unsigned_int>
                  ::Call;
      local_100 = uVar2;
      local_f8 = lVar3;
      local_f0 = param_1;
      local_e8 = uVar4;
      local_e0 = uVar5;
      local_b8._s_0.X = dVar6;
      local_b8._s_0.Y = dVar7;
      FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::
      ForEachIntersectingElementRecursive
                ((TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64> *)
                 ((longlong)local_d8._s_0.X + 0x18),(FNode *)((longlong)local_d8._s_0.X + 0x20),
                 (TVector2<double> *)&local_b8._s_0,dVar1 * dVar1,
                 (TFunctionRef<bool___cdecl(unsigned_int)> *)&local_118);
    }
  }
  return;
}

// operator() @ 148a86820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
`UWorldPartitionRuntimeHashSet::Draw2D'::__l2::<lambda_2>::operator()
          (void *this,FRuntimePartitionStreamingData *param_1,TBox2<double> *param_2,
          TBox2<double> *param_3,
          TFunctionRef<UE::Math::TVector2<double>___cdecl(UE::Math::TVector2<double>_const_&,bool)>
          *param_4,FWorldPartitionDraw2DContext *param_5)

{
  FWorldPartitionCanvasItems *pFVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  FName FVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  int iVar11;
  UDataLayerManager *this_00;
  TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>,FStaticSpatialIndex::FSpatialIndexProfile3D>
  *pTVar12;
  TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>,FStaticSpatialIndex::FSpatialIndexProfile2D>
  *pTVar13;
  longlong *plVar14;
  longlong lVar15;
  FName FVar16;
  code *pcVar17;
  float fVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  uint uVar21;
  TFunctionRef<UE::Math::TVector2<double>___cdecl(UE::Math::TVector2<double>_const_&,bool)> *pTVar22
  ;
  TObjectPtr<UContentBundleManager>_u_0 this_01;
  bool bVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  double *pdVar27;
  undefined4 *puVar28;
  FScriptContainerElement *pFVar29;
  int *piVar30;
  FGuid *pFVar31;
  FContentBundleBase *this_02;
  UContentBundleDescriptor *pUVar32;
  longlong lVar33;
  longlong *plVar34;
  FString *pFVar35;
  UWorldPartition *pUVar36;
  ulonglong uVar37;
  undefined1 *puVar38;
  UWorldPartition *this_03;
  longlong lVar39;
  longlong *plVar40;
  ForAnyElementType FVar41;
  FName *pFVar42;
  wchar_t *pwVar43;
  FName *pFVar44;
  longlong *plVar45;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float fVar46;
  double dVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  float fVar50;
  float fVar51;
  double dVar52;
  undefined1 auStackY_978 [32];
  ForAnyElementType local_928;
  int local_920;
  int local_91c;
  byte local_918;
  byte local_917;
  byte local_916;
  byte local_915;
  undefined1 local_910 [8];
  undefined1 local_908 [8];
  undefined1 local_900 [8];
  undefined1 local_8f8 [8];
  undefined1 local_8f0 [8];
  undefined1 local_8e8 [8];
  undefined1 local_8e0 [8];
  undefined1 local_8d8;
  undefined1 local_8d7 [7];
  undefined1 local_8d0 [8];
  undefined1 local_8c8 [8];
  undefined1 local_8c0 [8];
  undefined1 local_8b8 [8];
  undefined1 local_8b0 [8];
  undefined1 local_8a8 [8];
  undefined1 local_8a0 [8];
  undefined1 local_898 [8];
  undefined1 local_890 [8];
  undefined1 local_888 [8];
  undefined1 local_880 [8];
  undefined1 local_878 [8];
  undefined1 local_870 [8];
  undefined1 local_868 [8];
  undefined1 local_860 [8];
  undefined1 local_858 [8];
  undefined1 local_850 [8];
  TFunctionRef<UE::Math::TVector2<double>___cdecl(UE::Math::TVector2<double>_const_&,bool)>
  *local_848;
  double local_840;
  double local_838;
  undefined4 local_830;
  undefined4 uStack_82c;
  undefined4 local_828;
  undefined4 uStack_824;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_820;
  longlong *local_810;
  uint local_808;
  undefined4 local_804;
  double local_800;
  double local_7f8;
  int local_7f0;
  int local_7ec;
  uint local_7e8;
  FRuntimePartitionStreamingData *local_7e0;
  uint local_7d8;
  float local_7d4;
  float fStack_7d0;
  float fStack_7cc;
  float fStack_7c8;
  float local_7c4;
  float fStack_7c0;
  float fStack_7bc;
  float fStack_7b8;
  UWorld *local_7b0;
  longlong *local_7a8;
  TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_> *local_7a0;
  FLinearColor_u_0 local_798;
  FName local_788;
  FName FStack_780;
  float local_778;
  float fStack_774;
  float fStack_770;
  float fStack_76c;
  undefined8 local_768;
  undefined8 uStack_760;
  undefined8 local_758;
  undefined8 uStack_750;
  undefined8 local_748;
  undefined8 uStack_740;
  undefined4 local_738;
  undefined4 uStack_734;
  LARGE_INTEGER local_728;
  TSparseArray<TSparseSetElement<TTuple<FName,FColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_720;
  TObjectPtr<UContentBundleManager>_u_0 local_718;
  TBox2<double> *local_710;
  longlong *local_708;
  FName local_700;
  TVector2<double>_u_0 local_6f8;
  TVector2<double>_u_0 local_6e8;
  undefined8 *local_6d8;
  TVector2<double>_u_0 local_6d0;
  double local_6c0;
  double local_6b8;
  undefined1 local_6b0;
  undefined1 local_6a8 [8];
  longlong **local_6a0;
  TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>,FStaticSpatialIndex::FSpatialIndexProfile3D>
  *local_698;
  undefined1 *local_690;
  code *local_688;
  TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>,FStaticSpatialIndex::FSpatialIndexProfile3D>
  **local_680;
  undefined1 local_678 [8];
  longlong **local_670;
  TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>,FStaticSpatialIndex::FSpatialIndexProfile2D>
  *local_668;
  undefined1 *local_660;
  code *local_658;
  TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>,FStaticSpatialIndex::FSpatialIndexProfile2D>
  **local_650;
  double local_648;
  double local_640;
  double local_638;
  double local_630;
  double local_628;
  double local_620;
  FLinearColor_u_0 local_618;
  double local_608;
  double local_600;
  double local_5f8;
  double local_5f0;
  double local_5e8;
  double local_5e0;
  TVector2<double> local_5d8;
  TVector2<double> local_5c8;
  TVector2<double> local_5b8;
  TVector2<double> local_5a8;
  double local_598;
  double local_590;
  double local_588;
  double local_580;
  double local_578;
  double local_570;
  undefined1 local_568 [16];
  double local_558;
  undefined8 local_550;
  double local_548;
  double local_540;
  undefined8 local_538;
  double local_530;
  TVector2<double> local_528;
  TVector2<double> local_518;
  TVector2<double> local_508;
  TVector2<double> local_4f8;
  code *local_4e8;
  byte **local_4e0;
  double local_4d8;
  double local_4d0;
  code *local_4c8;
  TSparseArray<TSparseSetElement<TTuple<FName,FColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  **local_4c0;
  byte *local_4b8;
  TFunctionRef<UE::Math::TVector2<double>___cdecl(UE::Math::TVector2<double>_const_&,bool)>
  **local_4b0;
  TBox2<double> *local_4a8;
  FWorldPartitionDraw2DContext *local_4a0;
  undefined8 local_498;
  TVector<double>_u_0 local_490;
  double local_478;
  double local_470;
  undefined8 local_468;
  undefined1 local_460;
  TVector2<double> local_458;
  TVector2<double> local_448;
  TVector2<double> local_438;
  TVector2<double> local_428;
  TVector2<double> local_418;
  TVector2<double> local_408;
  TVector2<double> local_3f8;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  TVector2<double> local_3c8;
  TVector2<double> local_3b8;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  TVector2<double> local_388;
  TVector2<double> local_378;
  FString local_368;
  TVector2<double> local_358;
  TVector2<double> local_348;
  double local_338;
  TVector2<double> local_330;
  double local_320;
  double dStack_318;
  double local_310;
  double dStack_308;
  double local_300;
  double dStack_2f8;
  double local_2f0;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined1 local_2c8 [16];
  undefined8 local_2b8;
  undefined1 local_2b0 [24];
  TSparseArray<TSparseSetElement<TTuple<FName,FColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_298;
  undefined1 local_260 [8];
  undefined1 *local_258;
  int local_250;
  undefined1 local_248 [56];
  undefined1 local_210 [56];
  undefined1 local_1d8 [56];
  undefined1 local_1a0 [56];
  undefined1 local_168 [56];
  undefined1 local_130 [56];
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_978;
  pUVar36 = (UWorldPartition *)0x0;
  local_7e0 = param_1;
  local_710 = param_3;
  local_6d8 = this;
  if ((*(uint *)(*(longlong *)this + 8) & 0x10) == 0) {
    this_03 = *(UWorldPartition **)(*(longlong *)this + 0x20);
  }
  else {
    bVar23 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<1240560329461596353>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\WorldPartitionRuntimeHash.h"
                        ,0xc1,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    this_03 = pUVar36;
    if (bVar23) {
      pcVar17 = (code *)swi(3);
      (*pcVar17)();
      return;
    }
  }
  local_7a0 = UWorldPartition::GetStreamingSources(this_03);
  dVar4 = (param_2->Min).field0_0x0._s_0.X;
  dVar5 = (param_2->Min).field0_0x0._s_0.Y;
  dVar6 = (param_2->Max).field0_0x0._s_0.X;
  dVar52 = (param_2->Max).field0_0x0._s_0.Y;
  local_7b0 = (this_03->World).field0_0x0.DebugPtr;
  if (local_7b0 == (UWorld *)0x0) {
    local_7b0 = UObject::GetWorld((UObject *)this_03);
  }
  local_718 = (local_7b0->ContentBundleManager).field0_0x0;
  bVar23 = FWorldPartitionDebugHelper::ShowRuntimeSpatialHashCellStreamingPriorityMode == 0;
  local_298._0_8_ = 0;
  local_298._8_8_ = 0;
  local_298._32_8_ = 0;
  local_298._40_4_ = 0;
  local_298._44_4_ = 0x80;
  local_298._48_4_ = 0xffffffff;
  local_298._52_4_ = 0;
  local_258 = (undefined1 *)0x0;
  local_250 = 0;
  this_00 = (this_03->DataLayerManager).field0_0x0.DebugPtr;
  local_7e8 = (uint)bVar23;
  if (this_00 != (UDataLayerManager *)0x0) {
    local_720 = &local_298;
    local_4c0 = &local_720;
    local_4c8 = UE::Core::Private::Function::
                TFunctionRefCaller<`GetDataLayerDebugColors'::__l5::<lambda_1>,bool,UDataLayerInstance_*>
                ::Call;
    UDataLayerManager::ForEachDataLayerInstance
              (this_00,(TFunctionRef<bool___cdecl(UDataLayerInstance_*)> *)&local_4c8);
  }
  local_848 = param_4;
  pTVar12 = (param_1->SpatialIndex).Ptr;
  local_490._s_0.Z = __real_c290000000000000;
  local_468 = __real_4290000000000000;
  local_810 = (longlong *)0x0;
  local_808 = 0;
  local_804 = 0;
  local_460 = 1;
  local_490._s_0.X = dVar4;
  local_490._s_0.Y = dVar5;
  local_478 = dVar6;
  local_470 = dVar52;
  if (pTVar12 !=
      (TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>,FStaticSpatialIndex::FSpatialIndexProfile3D>
       *)0x0) {
    local_6a0 = &local_810;
    local_6a8[0] = 1;
    local_690 = local_6a8;
    local_688 = UE::Core::Private::Function::
                TFunctionRefCaller<`TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile3D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>_>::ForEachIntersectingElement<``UWorldPartitionRuntimeHashSet::Draw2D'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>_>'::__l2::<lambda_1>,bool,unsigned_int>
                ::Call;
    local_680 = &local_698;
    local_698 = pTVar12;
    FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::
    ForEachIntersectingElementRecursive
              ((TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64> *)&pTVar12->field_0x18
               ,(FNode *)&pTVar12->field_0x20,(TBox<double> *)&local_490._s_0,
               (TFunctionRef<bool___cdecl(unsigned_int)> *)&local_688);
    pUVar36 = (UWorldPartition *)(ulonglong)local_808;
  }
  pTVar13 = (param_1->SpatialIndex2D).Ptr;
  if (pTVar13 !=
      (TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>,FStaticSpatialIndex::FSpatialIndexProfile2D>
       *)0x0) {
    local_670 = &local_810;
    local_678[0] = 1;
    local_660 = local_678;
    local_658 = UE::Core::Private::Function::
                TFunctionRefCaller<`TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>::ForEachIntersectingElement<``UWorldPartitionRuntimeHashSet::Draw2D'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>_>'::__l2::<lambda_1>,bool,unsigned_int>
                ::Call;
    local_650 = &local_668;
    local_668 = pTVar13;
    FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::
    ForEachIntersectingElementRecursive
              ((TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64> *)&pTVar13->field_0x18
               ,(FNode *)&pTVar13->field_0x20,param_2,
               (TFunctionRef<bool___cdecl(unsigned_int)> *)&local_658);
    pUVar36 = (UWorldPartition *)(ulonglong)local_808;
  }
  fVar51 = __real_3f2b851f;
  fVar3 = __real_3f400000;
  fVar2 = __real_3e800000;
  fVar46 = __real_3f800000;
  uVar24 = (uint)pUVar36;
  if (uVar24 != 0) {
    uVar37 = (ulonglong)(int)uVar24;
    local_708 = local_810 + uVar37;
    plVar45 = local_810;
    local_7d8 = uVar24;
    uVar24 = (uint)bVar23;
    while( true ) {
      plVar14 = local_708;
      fVar18 = __real_3b808081;
      local_7a8 = plVar45;
      if ((int)pUVar36 != (int)uVar37) {
        local_858[0] = 0;
        `TCheckedPointerIterator<UWorldPartitionRuntimeCell_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_858);
      }
      param_1 = local_7e0;
      if (plVar45 == plVar14) break;
      plVar14 = (longlong *)*plVar45;
      pdVar27 = (double *)(**(code **)(plVar14[5] + 0x58))(plVar14 + 5,local_248);
      dVar4 = pdVar27[3] - *pdVar27;
      dVar5 = pdVar27[4] - pdVar27[1];
      pdVar27 = (double *)(**(code **)(plVar14[5] + 0x58))(plVar14 + 5,local_210);
      pTVar22 = local_848;
      local_850[0] = 1;
      local_840 = *pdVar27;
      local_838 = pdVar27[1];
      local_618._0_12_ = FLinearColor::Gray.field0_0x0._0_12_;
      local_618._s_0.A = 0.05;
      (**(code **)local_848)(&local_438,*(undefined8 *)&local_848->field_0x8,&local_840,local_850);
      local_910[0] = 1;
      local_648 = dVar4 + local_840;
      local_640 = local_838;
      (**(code **)pTVar22)(&local_448,*(undefined8 *)&pTVar22->field_0x8,&local_648,local_910);
      local_908[0] = 1;
      local_638 = dVar4 + local_840;
      local_630 = dVar5 + local_838;
      (**(code **)pTVar22)(&local_458,*(undefined8 *)&pTVar22->field_0x8,&local_638,local_908);
      local_628 = local_840;
      local_620 = dVar5 + local_838;
      local_900[0] = 1;
      (**(code **)pTVar22)(&local_330,*(undefined8 *)&pTVar22->field_0x8,&local_628,local_900);
      FWorldPartitionDraw2DContext::PushDrawTile
                (param_5,param_3,&local_438,&local_448,&local_458,&local_330,
                 (FLinearColor *)&local_618._s_0);
      pTVar22 = local_848;
      local_8f8[0] = 1;
      local_798._0_12_ = FLinearColor::Black.field0_0x0._0_12_;
      local_798._s_0.A = 0.05;
      (**(code **)local_848)(&local_5a8,*(undefined8 *)&local_848->field_0x8,&local_840,local_8f8);
      local_8f0[0] = 1;
      local_608 = dVar4 + local_840;
      local_600 = local_838;
      (**(code **)pTVar22)(&local_5d8,*(undefined8 *)&pTVar22->field_0x8,&local_608,local_8f0);
      local_5f8 = dVar4 + local_840;
      local_8e8[0] = 1;
      local_5f0 = dVar5 + local_838;
      (**(code **)pTVar22)(&local_5c8,*(undefined8 *)&pTVar22->field_0x8,&local_5f8,local_8e8);
      local_5e0 = dVar5 + local_838;
      local_5e8 = local_840;
      local_8e0[0] = 1;
      (**(code **)pTVar22)(&local_5b8,*(undefined8 *)&pTVar22->field_0x8,&local_5e8,local_8e0);
      FWorldPartitionDraw2DContext::PushDrawSegment
                (param_5,param_3,&local_5a8,&local_5d8,(FLinearColor *)&local_798._s_0,fVar46);
      FWorldPartitionDraw2DContext::PushDrawSegment
                (param_5,param_3,&local_5d8,&local_5c8,(FLinearColor *)&local_798._s_0,fVar46);
      FWorldPartitionDraw2DContext::PushDrawSegment
                (param_5,param_3,&local_5c8,&local_5b8,(FLinearColor *)&local_798._s_0,fVar46);
      FWorldPartitionDraw2DContext::PushDrawSegment
                (param_5,param_3,&local_5a8,&local_5b8,(FLinearColor *)&local_798._s_0,fVar46);
      plVar40 = (longlong *)plVar14[0x15];
      if (*(char *)((longlong)plVar14 + 0x5a) == '\0') {
        pdVar27 = (double *)(**(code **)(*plVar40 + 0x2f8))(plVar40,local_1a0);
      }
      else {
        pdVar27 = (double *)(**(code **)(*plVar40 + 0x2f0))(plVar40,local_1d8);
      }
      local_320 = *pdVar27;
      dStack_318 = pdVar27[1];
      plVar40 = (longlong *)plVar14[0x15];
      local_310 = pdVar27[2];
      dStack_308 = pdVar27[3];
      local_300 = pdVar27[4];
      dStack_2f8 = pdVar27[5];
      local_2f0 = pdVar27[6];
      dVar5 = dStack_308 - local_320;
      dVar4 = local_300 - dStack_318;
      if (*(char *)((longlong)plVar14 + 0x5a) == '\0') {
        puVar28 = (undefined4 *)(**(code **)(*plVar40 + 0x2f8))(plVar40,local_130);
      }
      else {
        puVar28 = (undefined4 *)(**(code **)(*plVar40 + 0x2f0))(plVar40,local_168);
      }
      this_01 = local_718;
      local_2d8 = *(undefined8 *)(puVar28 + 4);
      uStack_2d0 = *(undefined8 *)(puVar28 + 6);
      fVar50 = 0.0;
      local_830 = *puVar28;
      uStack_82c = puVar28[1];
      local_828 = puVar28[2];
      uStack_824 = puVar28[3];
      local_2c8 = *(undefined1 (*) [16])(puVar28 + 8);
      local_2b8 = *(undefined8 *)(puVar28 + 0xc);
      local_928.Data = (FScriptContainerElement *)0x0;
      local_920 = 0;
      local_91c = 0;
      local_2e8 = local_830;
      uStack_2e4 = uStack_82c;
      uStack_2e0 = local_828;
      uStack_2dc = uStack_824;
      if (GShowRuntimeHashSetDebugDisplayMode == 0) {
LAB_148a86fd8:
        pFVar29 = (FScriptContainerElement *)
                  (**(code **)(*plVar14 + 0x2e8))(plVar14,local_2b0,uVar24);
        if (((local_928.Data <= pFVar29) && (pFVar29 < local_928.Data + (longlong)local_91c * 0x10))
           && (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar23)) {
          pcVar17 = (code *)swi(3);
          (*pcVar17)();
          return;
        }
        if (local_920 == local_91c) {
          local_920 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x410,&local_928,&local_91c);
        }
        iVar25 = local_920 + 1;
        uVar19 = *(undefined8 *)(pFVar29 + 8);
        *(undefined8 *)(local_928.Data + (longlong)local_920 * 0x10) = *(undefined8 *)pFVar29;
        *(undefined8 *)(local_928.Data + (longlong)local_920 * 0x10 + 8) = uVar19;
        fVar50 = fVar3;
        local_920 = iVar25;
        if (uVar24 != 0) {
          fVar18 = (float)GShowRuntimeHashSetDebugDisplayLevelCount;
          if ((float)GShowRuntimeHashSetDebugDisplayLevelCount <= fVar46) {
            fVar18 = fVar46;
          }
          fVar50 = fVar2 / fVar18;
        }
LAB_148a87493:
        if (local_920 == 0) {
LAB_148a874a7:
          iVar25 = 0;
          if (local_928.Data <
              (FScriptContainerElement *)((longlong)&FLinearColor::White.field0_0x0 + 1))
          goto LAB_148a874b3;
          goto LAB_148a87521;
        }
      }
      else {
        if (GShowRuntimeHashSetDebugDisplayMode == 1) {
          if (local_298._8_4_ != local_298._52_4_) {
            lVar33 = (**(code **)(plVar14[5] + 0x38))(plVar14 + 5);
            if (*(int *)(lVar33 + 8) != 0) {
              plVar34 = (longlong *)(**(code **)(plVar14[5] + 0x38))(plVar14 + 5);
              plVar40 = (longlong *)*plVar34;
              lVar33 = plVar34[1];
              plVar14 = plVar40 + (int)lVar33;
              while( true ) {
                if ((int)plVar34[1] != (int)lVar33) {
                  local_8d8 = 0;
                  `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::
                  operator()(&local_8d8);
                }
                param_3 = local_710;
                plVar45 = local_7a8;
                fVar50 = fVar51;
                if (plVar40 == plVar14) break;
                lVar15 = *plVar40;
                uVar24 = ::GetTypeHash((FNameEntryId)(uint)lVar15);
                if (local_298._8_4_ != local_298._52_4_) {
                  puVar38 = local_260;
                  if (local_258 != (undefined1 *)0x0) {
                    puVar38 = local_258;
                  }
                  iVar25 = *(int *)(puVar38 +
                                   (ulonglong)
                                   (local_250 - 1U & (int)((ulonglong)lVar15 >> 0x20) + uVar24) * 4)
                  ;
                  while (iVar25 != -1) {
                    lVar39 = local_298._0_8_ + (longlong)iVar25 * 0x14;
                    if (*(longlong *)(local_298._0_8_ + (longlong)iVar25 * 0x14) == lVar15) {
                      if (lVar39 != 0) goto LAB_148a87344;
                      goto LAB_148a8731e;
                    }
                    iVar25 = *(int *)(lVar39 + 0xc);
                  }
                }
                lVar39 = 0;
LAB_148a8731e:
                bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Pair != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                    ,0x288,L"");
                if (bVar23) {
                  pcVar17 = (code *)swi(3);
                  (*pcVar17)();
                  return;
                }
LAB_148a87344:
                local_7c4 = FLinearColor::sRGBToLinearTable[*(byte *)(lVar39 + 10)];
                fStack_7c0 = FLinearColor::sRGBToLinearTable[*(byte *)(lVar39 + 9)];
                fStack_7bc = FLinearColor::sRGBToLinearTable[*(byte *)(lVar39 + 8)];
                fStack_7b8 = (float)*(byte *)(lVar39 + 0xb) * fVar18;
                if (((local_928.Data <= (FScriptContainerElement *)&local_7c4) &&
                    ((FScriptContainerElement *)&local_7c4 <
                     local_928.Data + (longlong)local_91c * 0x10)) &&
                   (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar23)) {
                  pcVar17 = (code *)swi(3);
                  (*pcVar17)();
                  return;
                }
                if (local_920 == local_91c) {
                  local_920 = UE::Core::Private::
                              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                        (0x410,&local_928,&local_91c);
                }
                plVar40 = plVar40 + 1;
                *(ulonglong *)(local_928.Data + (longlong)local_920 * 0x10) =
                     CONCAT44(fStack_7c0,local_7c4);
                *(ulonglong *)(local_928.Data + (longlong)local_920 * 0x10 + 8) =
                     CONCAT44(fStack_7b8,fStack_7bc);
                local_920 = local_920 + 1;
              }
            }
            goto LAB_148a87493;
          }
        }
        else {
          if (GShowRuntimeHashSetDebugDisplayMode != 2) {
            if (GShowRuntimeHashSetDebugDisplayMode == 3) goto LAB_148a86fd8;
            goto LAB_148a874a7;
          }
          if (local_718.DebugPtr != (UContentBundleManager *)0x0) {
            piVar30 = (int *)(**(code **)(*plVar14 + 800))(plVar14);
            if (((piVar30[3] != 0 || piVar30[2] != 0) || piVar30[1] != 0) || *piVar30 != 0) {
              pFVar31 = (FGuid *)(**(code **)(*plVar14 + 800))(plVar14);
              this_02 = UContentBundleManager::GetContentBundle(this_01.DebugPtr,local_7b0,pFVar31);
              if (this_02 != (FContentBundleBase *)0x0) {
                pUVar32 = FContentBundleBase::GetDescriptor(this_02);
                if ((pUVar32 == (UContentBundleDescriptor *)0x0) &&
                   (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                       ("ContentBundle->GetDescriptor()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\RuntimeHashSet\\WorldPartitionRuntimeHashSetDebugDraw.cpp"
                                        ,0xbf,L""), bVar23)) {
                  pcVar17 = (code *)swi(3);
                  (*pcVar17)();
                  return;
                }
                pUVar32 = FContentBundleBase::GetDescriptor(this_02);
                local_7d4 = FLinearColor::sRGBToLinearTable[(pUVar32->DebugColor).field0_0x0._s_0.R]
                ;
                fStack_7d0 = FLinearColor::sRGBToLinearTable
                             [(pUVar32->DebugColor).field0_0x0._s_0.G];
                fStack_7cc = FLinearColor::sRGBToLinearTable
                             [(pUVar32->DebugColor).field0_0x0._s_0.B];
                fStack_7c8 = (float)(pUVar32->DebugColor).field0_0x0._s_0.A * fVar18;
                if (((local_928.Data <= (FScriptContainerElement *)&local_7d4) &&
                    ((FScriptContainerElement *)&local_7d4 <
                     local_928.Data + (longlong)local_91c * 0x10)) &&
                   (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar23)) {
                  pcVar17 = (code *)swi(3);
                  (*pcVar17)();
                  return;
                }
                if (local_920 == local_91c) {
                  local_920 = UE::Core::Private::
                              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                        (0x410,&local_928,&local_91c);
                }
                *(ulonglong *)(local_928.Data + (longlong)local_920 * 0x10) =
                     CONCAT44(fStack_7d0,local_7d4);
                *(ulonglong *)(local_928.Data + (longlong)local_920 * 0x10 + 8) =
                     CONCAT44(fStack_7c8,fStack_7cc);
                fVar50 = fVar51;
                local_920 = local_920 + 1;
              }
            }
            goto LAB_148a87493;
          }
        }
LAB_148a874b3:
        iVar25 = 0;
        if ((&FLinearColor::White < local_928.Data + (longlong)local_91c * 0x10) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), iVar25 = local_920, bVar23)) {
          pcVar17 = (code *)swi(3);
          (*pcVar17)();
          return;
        }
LAB_148a87521:
        if (iVar25 == local_91c) {
          iVar25 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x410,&local_928,&local_91c);
        }
        fVar50 = __real_3dcccccd;
        local_920 = iVar25 + 1;
        ((FLinearColor_u_0 *)(local_928.Data + (longlong)iVar25 * 0x10))->_s_0 =
             (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
      }
      iVar25 = local_920;
      dVar52 = 0.0;
      pFVar29 = local_928.Data + (longlong)local_920 * 0x10;
      dVar6 = dVar5 / (double)local_920;
      FVar41.Data = local_928.Data;
      while( true ) {
        if (local_920 != iVar25) {
          local_8d7[0] = 0;
          `TCheckedPointerIterator<FLinearColor,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_8d7);
        }
        pTVar22 = local_848;
        if (FVar41.Data == pFVar29) break;
        local_568._0_8_ = *(undefined8 *)FVar41.Data;
        local_8d0[0] = 1;
        local_800 = (double)CONCAT44(uStack_82c,local_830) + dVar52;
        local_568._8_4_ = (undefined4)*(undefined8 *)(FVar41.Data + 8);
        local_568._12_4_ = fVar50;
        local_7f8 = (double)CONCAT44(uStack_824,local_828);
        (**(code **)local_848)(&local_3f8,*(undefined8 *)&local_848->field_0x8,&local_800,local_8d0)
        ;
        local_598 = local_800 + dVar6;
        local_8c8[0] = 1;
        local_590 = local_7f8;
        (**(code **)pTVar22)(&local_408,*(undefined8 *)&pTVar22->field_0x8,&local_598,local_8c8);
        local_588 = local_800 + dVar6;
        local_8c0[0] = 1;
        local_580 = dVar4 + local_7f8;
        (**(code **)pTVar22)(&local_418,*(undefined8 *)&pTVar22->field_0x8,&local_588,local_8c0);
        local_570 = local_7f8 + dVar4;
        local_578 = local_800;
        local_8b8[0] = 1;
        (**(code **)pTVar22)(&local_428,*(undefined8 *)&pTVar22->field_0x8,&local_578,local_8b8);
        FWorldPartitionDraw2DContext::PushDrawTile
                  (param_5,param_3,&local_3f8,&local_408,&local_418,&local_428,
                   (FLinearColor *)local_568);
        dVar52 = dVar52 + dVar6;
        FVar41.Data = FVar41.Data + 0x10;
      }
      local_8b0[0] = 1;
      (**(code **)local_848)(&local_4f8,*(undefined8 *)&local_848->field_0x8,&local_830,local_8b0);
      local_8a8[0] = 1;
      local_558 = dVar5 + (double)CONCAT44(uStack_82c,local_830);
      local_550 = CONCAT44(uStack_824,local_828);
      (**(code **)pTVar22)(&local_528,*(undefined8 *)&pTVar22->field_0x8,&local_558,local_8a8);
      local_548 = dVar5 + (double)CONCAT44(uStack_82c,local_830);
      local_8a0[0] = 1;
      local_540 = dVar4 + (double)CONCAT44(uStack_824,local_828);
      (**(code **)pTVar22)(&local_518,*(undefined8 *)&pTVar22->field_0x8,&local_548,local_8a0);
      local_530 = dVar4 + (double)CONCAT44(uStack_824,local_828);
      local_538 = CONCAT44(uStack_82c,local_830);
      local_898[0] = 1;
      (**(code **)pTVar22)(&local_508,*(undefined8 *)&pTVar22->field_0x8,&local_538,local_898);
      FWorldPartitionDraw2DContext::PushDrawSegment
                (param_5,param_3,&local_4f8,&local_528,&FLinearColor::Black,fVar46);
      FWorldPartitionDraw2DContext::PushDrawSegment
                (param_5,param_3,&local_528,&local_518,&FLinearColor::Black,fVar46);
      FWorldPartitionDraw2DContext::PushDrawSegment
                (param_5,param_3,&local_518,&local_508,&FLinearColor::Black,fVar46);
      FWorldPartitionDraw2DContext::PushDrawSegment
                (param_5,param_3,&local_4f8,&local_508,&FLinearColor::Black,fVar46);
      if (local_928.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_928.Data);
      }
      pUVar36 = (UWorldPartition *)(ulonglong)local_808;
      plVar45 = plVar45 + 1;
      uVar37 = (ulonglong)local_7d8;
      uVar24 = local_7e8;
    }
  }
  if (param_5->bDrawGridAxis != false) {
    local_3e8 = ___xmm_00000000000000004139000000000000;
    uStack_3e0 = _UNK_151c37138;
    local_890[0] = 0;
    (**(code **)local_848)(&local_3c8,*(undefined8 *)&local_848->field_0x8,&local_3e8,local_890);
    local_3d8 = ___xmm_0000000000000000c139000000000000;
    uStack_3d0 = _UNK_151c37148;
    local_888[0] = 0;
    (**(code **)local_848)(&local_3b8,*(undefined8 *)&local_848->field_0x8,&local_3d8,local_888);
    fVar2 = __real_40400000;
    FWorldPartitionDraw2DContext::PushDrawSegment
              (param_5,param_3,&local_3b8,&local_3c8,&FLinearColor::Red,__real_40400000);
    local_3a8 = ___xmm_41390000000000000000000000000000;
    uStack_3a0 = _UNK_151c37158;
    local_880[0] = 0;
    (**(code **)local_848)(&local_388,*(undefined8 *)&local_848->field_0x8,&local_3a8,local_880);
    local_398 = ___xmm_c1390000000000000000000000000000;
    uStack_390 = _UNK_151c37168;
    local_878[0] = 0;
    (**(code **)local_848)(&local_378,*(undefined8 *)&local_848->field_0x8,&local_398,local_878);
    FWorldPartitionDraw2DContext::PushDrawSegment
              (param_5,param_3,&local_378,&local_388,&FLinearColor::Green,fVar2);
  }
  if (param_5->bDrawGridBounds != false) {
    local_6e8._s_0.X = (param_3->Min).field0_0x0._s_0.X;
    local_6f8._s_0.Y = (param_3->Min).field0_0x0._s_0.Y;
    local_6f8._s_0.X = (param_3->Max).field0_0x0._s_0.X;
    local_6d0._s_0.X = local_6e8._s_0.X - __real_4024000000000000;
    local_6e8._s_0.Y = (param_3->Max).field0_0x0._s_0.Y;
    local_6c0 = local_6f8._s_0.X + __real_4024000000000000;
    local_6d0._s_0.Y = local_6f8._s_0.Y - __real_4024000000000000;
    local_6b0 = 1;
    local_6b8 = local_6e8._s_0.Y + __real_4024000000000000;
    FWorldPartitionDraw2DContext::PushDrawSegment
              (param_5,(TBox2<double> *)&local_6d0._s_0,&param_3->Min,
               (TVector2<double> *)&local_6f8._s_0,&FLinearColor::White,fVar46);
    FWorldPartitionDraw2DContext::PushDrawSegment
              (param_5,(TBox2<double> *)&local_6d0._s_0,(TVector2<double> *)&local_6f8._s_0,
               &param_3->Max,&FLinearColor::White,fVar46);
    FWorldPartitionDraw2DContext::PushDrawSegment
              (param_5,(TBox2<double> *)&local_6d0._s_0,&param_3->Max,
               (TVector2<double> *)&local_6e8._s_0,&FLinearColor::White,fVar46);
    FWorldPartitionDraw2DContext::PushDrawSegment
              (param_5,(TBox2<double> *)&local_6d0._s_0,&param_3->Min,
               (TVector2<double> *)&local_6e8._s_0,&FLinearColor::White,fVar46);
  }
  dVar6 = __real_3f1a36e2e0000000;
  uVar21 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar24 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar5 = __real_3fe0000000000000;
  dVar4 = __real_3e45798ee0000000;
  iVar25 = local_7a0->ArrayNum;
  pFVar42 = (FName *)(local_7a0->AllocatorInstance).Data;
  uVar48 = (undefined4)__real_3ff0000000000000;
  uVar49 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  pFVar44 = pFVar42 + (longlong)iVar25 * 0x2c;
  while( true ) {
    while( true ) {
      while( true ) {
        dVar52 = 0.0;
        if (local_7a0->ArrayNum != iVar25) {
          local_870[0] = 0;
          `TCheckedPointerIterator<FWorldPartitionStreamingSource_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_870);
        }
        if (pFVar42 == pFVar44) {
          if (local_810 != (longlong *)0x0) {
            FMemory::Free(local_810);
          }
          local_250 = 0;
          if (local_258 != (undefined1 *)0x0) {
            FMemory::Free(local_258);
          }
          TSparseArray<TSparseSetElement<TTuple<FName,FColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<FName,FColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_298);
          return;
        }
        bVar8 = (byte)pFVar42[0xb].Number;
        bVar9 = *(byte *)((longlong)&pFVar42[0xb].Number + 1);
        bVar10 = *(byte *)((longlong)&pFVar42[0xb].Number + 2);
        if (CONCAT31(CONCAT21(CONCAT11(bVar8,bVar9),bVar10),
                     *(undefined1 *)((longlong)&pFVar42[0xb].Number + 3)) == 0) {
          local_700 = *pFVar42;
          if (local_700 == (FName)0x0) {
            QueryPerformanceCounter(&local_728);
            fVar46 = extraout_XMM0_Da_01;
          }
          else {
            pFVar35 = ::FName::ToString(&local_700,&local_368);
            iVar11 = (pFVar35->Data).ArrayNum;
            iVar26 = iVar11 + -1;
            if (iVar11 == 0) {
              pwVar43 = L"";
              iVar26 = 0;
            }
            else {
              pwVar43 = (wchar_t *)(pFVar35->Data).AllocatorInstance.Data;
            }
            FCrc::Strihash_DEPRECATED<wchar_t>(iVar26,pwVar43);
            fVar46 = extraout_XMM0_Da;
            if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_368.Data.AllocatorInstance.Data);
              fVar46 = extraout_XMM0_Da_00;
            }
          }
          FColor::MakeRedToGreenColorFromScalar(fVar46);
        }
        else {
          local_915 = 0xff;
          local_918 = bVar8;
          local_917 = bVar9;
          local_916 = bVar10;
        }
        FVar16 = param_1->Name;
        local_4b8 = &local_918;
        local_4b0 = &local_848;
        local_4a0 = param_5;
        local_498 = *local_6d8;
        local_4a8 = param_3;
        bVar23 = UWorldPartitionSubsystem::GetOverrideLoadingRange(FVar16,&local_7f0);
        iVar26 = local_7f0;
        if (!bVar23) {
          iVar26 = param_1->LoadingRange;
        }
        bVar23 = FStreamingSourceShapeHelper::IsSourceAffectingGrid
                           ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
                            (pFVar42 + 0xd),
                            (EStreamingSourceTargetBehavior)pFVar42[0xc].ComparisonIndex.Value,
                            FVar16);
        if (bVar23) {
          local_4e8 = UE::Core::Private::Function::
                      TFunctionRefCaller<``UWorldPartitionRuntimeHashSet::Draw2D'::__l2::<lambda_2>::operator()'::__l54::<lambda_3>,void,FSphericalSector_const_&>
                      ::Call;
          local_4e0 = &local_4b8;
          FStreamingSourceShapeHelper::ForEachShape
                    ((float)iVar26,(float)iVar26,true,(TVector<double> *)(pFVar42 + 1),
                     (TRotator<double> *)(pFVar42 + 4),
                     (TArray<FStreamingSourceShape,TSizedDefaultAllocator<32>_> *)(pFVar42 + 0x21),
                     (TFunctionRef<void___cdecl(FSphericalSector_const_&)> *)&local_4e8,
                     (float)pFVar42[0x2b].ComparisonIndex.Value,(float)pFVar42[0x2b].Number);
        }
        param_1 = local_7e0;
        FVar16 = pFVar42[8];
        FVar7 = pFVar42[9];
        if ((dVar6 < (double)CONCAT44(FVar16.Number & uVar21,
                                      FVar16.ComparisonIndex.Value.Value & uVar24)) ||
           (dVar6 < (double)CONCAT44(FVar7.Number & uVar21,
                                     FVar7.ComparisonIndex.Value.Value & uVar24))) break;
        pFVar42 = pFVar42 + 0x2c;
      }
      local_788 = pFVar42[1];
      FStack_780 = pFVar42[2];
      fVar46 = FLinearColor::sRGBToLinearTable[local_916];
      fVar2 = FLinearColor::sRGBToLinearTable[local_917];
      fVar3 = FLinearColor::sRGBToLinearTable[local_918];
      dVar47 = (double)FVar16 * (double)FVar16 + (double)FVar7 * (double)FVar7;
      fVar51 = (float)local_915 * __real_3b808081;
      if (dVar47 <= dVar4) {
        dVar47 = 0.0;
      }
      else {
        local_338 = (double)CONCAT44(uVar49,uVar48) / SQRT(dVar47);
        dVar52 = local_338 * (double)FVar7;
        dVar47 = local_338 * (double)FVar16;
      }
      bVar23 = UWorldPartitionSubsystem::GetOverrideLoadingRange(local_7e0->Name,&local_7ec);
      iVar26 = local_7ec;
      if (!bVar23) {
        iVar26 = param_1->LoadingRange;
      }
      local_868[0] = 1;
      local_4d8 = dVar47 * (double)iVar26 * dVar5 + (double)local_788;
      local_4d0 = dVar52 * (double)iVar26 * dVar5 + (double)FStack_780;
      (**(code **)local_848)(&local_358,*(undefined8 *)&local_848->field_0x8,&local_4d8,local_868);
      local_860[0] = 1;
      (**(code **)local_848)(&local_348,*(undefined8 *)&local_848->field_0x8,&local_788,local_860);
      local_820.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_820.ArrayNum = 0;
      local_820.ArrayMax = 0;
      bVar23 = FWorldPartitionDraw2DContext::BoxSegmentIntersect
                         (param_5,param_3,&local_348,&local_358,&local_820);
      if (bVar23) break;
      if (local_820.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_820.AllocatorInstance.Data);
      }
      uVar48 = (undefined4)__real_3ff0000000000000;
      uVar49 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
      pFVar42 = pFVar42 + 0x2c;
    }
    if (local_820.ArrayNum < 2) {
      bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar23) {
        pcVar17 = (code *)swi(3);
        (*pcVar17)();
        return;
      }
    }
    FVar41.Data = local_820.AllocatorInstance.Data;
    if ((local_820.ArrayNum < 1) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar23)) break;
    local_768 = *(undefined8 *)local_820.AllocatorInstance.Data;
    uStack_760 = *(undefined8 *)(local_820.AllocatorInstance.Data + 8);
    local_758 = 0;
    uStack_750 = *(undefined8 *)(FVar41.Data + 0x10);
    local_748 = *(undefined8 *)(FVar41.Data + 0x18);
    pFVar1 = &param_5->CanvasItems;
    local_738 = 0x3f800000;
    uStack_740 = 0;
    pFVar29 = (pFVar1->Lines).AllocatorInstance.Data;
    local_778 = fVar46;
    fStack_774 = fVar2;
    fStack_770 = fVar3;
    fStack_76c = fVar51;
    if (((pFVar29 <= (FScriptContainerElement *)&local_778) &&
        ((FScriptContainerElement *)&local_778 <
         pFVar29 + (longlong)(param_5->CanvasItems).Lines.ArrayMax * 0x48)) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar23)) {
      pcVar17 = (code *)swi(3);
      (*pcVar17)();
      return;
    }
    iVar26 = (param_5->CanvasItems).Lines.ArrayNum;
    piVar30 = &(param_5->CanvasItems).Lines.ArrayMax;
    if (iVar26 == *piVar30) {
      iVar26 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x848,(ForAnyElementType *)pFVar1,piVar30);
    }
    (param_5->CanvasItems).Lines.ArrayNum = iVar26 + 1;
    lVar33 = (longlong)iVar26;
    pFVar29 = (pFVar1->Lines).AllocatorInstance.Data;
    *(ulonglong *)(pFVar29 + lVar33 * 0x48) = CONCAT44(fStack_774,local_778);
    *(ulonglong *)(pFVar29 + lVar33 * 0x48 + 8) = CONCAT44(fStack_76c,fStack_770);
    *(undefined8 *)(pFVar29 + lVar33 * 0x48 + 0x10) = local_768;
    *(undefined8 *)(pFVar29 + lVar33 * 0x48 + 0x10 + 8) = uStack_760;
    *(undefined8 *)(pFVar29 + lVar33 * 0x48 + 0x20) = local_758;
    *(undefined8 *)(pFVar29 + lVar33 * 0x48 + 0x20 + 8) = uStack_750;
    auVar20._8_8_ = uStack_740;
    auVar20._0_8_ = local_748;
    *(undefined1 (*) [16])(pFVar29 + lVar33 * 0x48 + 0x30) = auVar20;
    *(ulonglong *)(pFVar29 + lVar33 * 0x48 + 0x40) = CONCAT44(uStack_734,local_738);
    if (local_820.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_820.AllocatorInstance.Data);
    }
    uVar48 = (undefined4)__real_3ff0000000000000;
    uVar49 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    pFVar42 = pFVar42 + 0x2c;
  }
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}

// operator() @ 148a88200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
`UWorldPartitionRuntimeHashSet::Draw3D'::__l2::<lambda_2>::operator()
          (void *this,FRuntimePartitionStreamingData *param_1)

{
  longlong *plVar1;
  FName FVar2;
  bool bVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  FWorldPartitionStreamingSource *this_00;
  FWorldPartitionStreamingSource *pFVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStackY_138 [32];
  undefined1 local_e8 [4];
  uint local_e4;
  double *local_e0;
  code *local_d8;
  undefined8 **local_d0;
  undefined1 local_c8 [8];
  undefined8 local_c0;
  TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>,FStaticSpatialIndex::FSpatialIndexProfile2D>
  *local_b8;
  undefined1 *local_b0;
  code *local_a8;
  TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>,FStaticSpatialIndex::FSpatialIndexProfile2D>
  **local_a0;
  TVector2<double>_u_0 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined8 *local_70;
  FRuntimePartitionStreamingData *pFStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_138;
  if ((param_1->SpatialIndex).Ptr !=
      (TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>,FStaticSpatialIndex::FSpatialIndexProfile3D>
       *)0x0) {
    plVar1 = *(longlong **)((longlong)this + 8);
    local_e4 = *(uint *)(plVar1 + 1);
    uVar5 = (ulonglong)(int)local_e4;
    lVar6 = *plVar1;
    lVar8 = uVar5 * 0x160 + lVar6;
    while( true ) {
      if ((int)plVar1[1] != (int)uVar5) {
        `TCheckedPointerIterator<FWorldPartitionStreamingSource_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_e8);
      }
      if (lVar6 == lVar8) break;
      local_70 = *(undefined8 **)this;
      FVar2 = param_1->Name;
      local_60 = CONCAT44(local_60._4_4_,*(undefined4 *)((longlong)this + 0x10));
      uStack_58 = *(undefined8 *)((longlong)this + 0x18);
      local_50 = *(undefined8 *)((longlong)this + 0x20);
      uStack_48 = *(undefined8 *)((longlong)this + 0x28);
      local_40 = *(undefined8 *)((longlong)this + 0x30);
      local_38 = *(undefined8 *)((longlong)this + 0x38);
      pFStack_68 = param_1;
      bVar3 = UWorldPartitionSubsystem::GetOverrideLoadingRange(FVar2,(int *)&local_e0);
      iVar9 = (int)local_e0;
      if (!bVar3) {
        iVar9 = param_1->LoadingRange;
      }
      bVar3 = FStreamingSourceShapeHelper::IsSourceAffectingGrid
                        ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(lVar6 + 0x68)
                         ,*(EStreamingSourceTargetBehavior *)(lVar6 + 0x60),FVar2);
      if (bVar3) {
        local_d8 = UE::Core::Private::Function::
                   TFunctionRefCaller<``UWorldPartitionRuntimeHashSet::Draw3D'::__l2::<lambda_2>::operator()'::__l9::<lambda_1>,void,FSphericalSector_const_&>
                   ::Call;
        local_d0 = &local_70;
        FStreamingSourceShapeHelper::ForEachShape
                  ((float)iVar9,(float)iVar9,false,(TVector<double> *)(lVar6 + 8),
                   (TRotator<double> *)(lVar6 + 0x20),
                   (TArray<FStreamingSourceShape,TSizedDefaultAllocator<32>_> *)(lVar6 + 0x108),
                   (TFunctionRef<void___cdecl(FSphericalSector_const_&)> *)&local_d8,
                   *(float *)(lVar6 + 0x158),*(float *)(lVar6 + 0x15c));
      }
      uVar5 = (ulonglong)local_e4;
      lVar6 = lVar6 + 0x160;
    }
  }
  if ((param_1->SpatialIndex2D).Ptr !=
      (TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>,FStaticSpatialIndex::FSpatialIndexProfile2D>
       *)0x0) {
    plVar1 = *(longlong **)((longlong)this + 8);
    lVar6 = plVar1[1];
    this_00 = (FWorldPartitionStreamingSource *)*plVar1;
    pFVar7 = this_00 + (int)lVar6;
    while( true ) {
      if ((int)plVar1[1] != (int)lVar6) {
        `TCheckedPointerIterator<FWorldPartitionStreamingSource_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_e8);
      }
      if (this_00 == pFVar7) break;
      FVar2 = param_1->Name;
      bVar3 = UWorldPartitionSubsystem::GetOverrideLoadingRange(FVar2,(int *)&local_e4);
      uVar4 = local_e4;
      if (!bVar3) {
        uVar4 = param_1->LoadingRange;
      }
      local_40 = 0;
      local_60 = 0;
      uStack_58 = 0;
      local_e0 = (double *)&local_70;
      local_d0 = &local_e0;
      local_d8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FWorldPartitionStreamingSource::CalcBounds'::__l2::<lambda_1>,void,FSphericalSector_const_&>
                 ::Call;
      local_70 = (double *)0x0;
      pFStack_68 = (FRuntimePartitionStreamingData *)0x0;
      local_50 = 0;
      uStack_48 = 0;
      FWorldPartitionStreamingSource::ForEachShape
                (this_00,(float)(int)uVar4,FVar2,true,
                 (TFunctionRef<void___cdecl(FSphericalSector_const_&)> *)&local_d8);
      local_b8 = (param_1->SpatialIndex2D).Ptr;
      local_c0 = *(undefined8 *)((longlong)this + 0x38);
      local_b0 = local_c8;
      local_98._s_0.X = (double)local_70;
      local_98._s_0.Y = (double)pFStack_68;
      local_a8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>::ForEachIntersectingElement<``UWorldPartitionRuntimeHashSet::Draw3D'::__l2::<lambda_2>::operator()'::__l16::<lambda_2>_>'::__l2::<lambda_1>,bool,unsigned_int>
                 ::Call;
      local_a0 = &local_b8;
      local_78 = 1;
      local_88 = uStack_58;
      uStack_80 = local_50;
      local_c8[0] = 1;
      FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::
      ForEachIntersectingElementRecursive
                ((TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64> *)
                 &local_b8->field_0x18,(FNode *)&local_b8->field_0x20,
                 (TBox2<double> *)&local_98._s_0,
                 (TFunctionRef<bool___cdecl(unsigned_int)> *)&local_a8);
      this_00 = this_00 + 1;
    }
  }
  return true;
}

// operator() @ 148a88770

void __thiscall
`UWorldPartitionRuntimeHashSet::Draw2D'::__l16::<lambda_3>::operator()
          (void *this,FSphericalSector *param_1)

{
  double dVar1;
  double dVar2;
  undefined1 (*pauVar3) [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined7 uStack_27;
  
  dVar1 = param_1->Radius;
  dVar2 = (param_1->Center).field0_0x0._s_0.X;
  dVar8 = (param_1->Center).field0_0x0._s_0.Y;
  dVar11 = (param_1->Center).field0_0x0._s_0.Z;
  dVar9 = dVar2 + dVar1;
  pauVar3 = *(undefined1 (**) [16])this;
  dVar2 = dVar2 - dVar1;
  dVar7 = dVar8 + dVar1;
  dVar10 = dVar11 + dVar1;
  dVar8 = dVar8 - dVar1;
  dVar11 = dVar11 - dVar1;
  if (pauVar3[3][0] != '\0') {
    if (*(double *)*pauVar3 <= dVar2) {
      dVar2 = *(double *)*pauVar3;
    }
    if (*(double *)(*pauVar3 + 8) <= dVar8) {
      dVar8 = *(double *)(*pauVar3 + 8);
    }
    if (dVar9 <= *(double *)(pauVar3[1] + 8)) {
      dVar9 = *(double *)(pauVar3[1] + 8);
    }
    if (dVar10 <= *(double *)(pauVar3[2] + 8)) {
      dVar10 = *(double *)(pauVar3[2] + 8);
    }
    dVar1 = *(double *)pauVar3[1];
    if (dVar11 <= *(double *)pauVar3[1]) {
      dVar1 = dVar11;
    }
    *(double *)*pauVar3 = dVar2;
    *(double *)(*pauVar3 + 8) = dVar8;
    *(double *)(pauVar3[1] + 8) = dVar9;
    *(double *)(pauVar3[2] + 8) = dVar10;
    *(double *)pauVar3[1] = dVar1;
    dVar1 = *(double *)pauVar3[2];
    if (*(double *)pauVar3[2] <= dVar7) {
      dVar1 = dVar7;
    }
    *(double *)pauVar3[2] = dVar1;
    return;
  }
  auVar4._8_4_ = SUB84(dVar8,0);
  auVar4._0_8_ = dVar2;
  auVar4._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  *pauVar3 = auVar4;
  auVar6._8_4_ = SUB84(dVar9,0);
  auVar6._0_8_ = dVar11;
  auVar6._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  pauVar3[1] = auVar6;
  auVar5._8_4_ = SUB84(dVar10,0);
  auVar5._0_8_ = dVar7;
  auVar5._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  pauVar3[2] = auVar5;
  *(ulonglong *)pauVar3[3] = CONCAT71(uStack_27,1);
  return;
}

// operator() @ 148a89100

bool __thiscall
`UWorldPartitionRuntimeHashSet::ForEachStreamingCellsQuery'::__l2::<lambda_4>::operator()
          (void *this,FRuntimePartitionStreamingData *param_1)

{
  undefined8 *puVar1;
  TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>,FStaticSpatialIndex::FSpatialIndexProfile3D>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  char cVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  ForAnyElementType FVar12;
  longlong *plVar13;
  float fVar14;
  longlong local_res8;
  ForAnyElementType local_88;
  int local_80;
  int local_7c;
  code *local_78;
  TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>,FStaticSpatialIndex::FSpatialIndexProfile3D>
  **local_70;
  TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>,FStaticSpatialIndex::FSpatialIndexProfile3D>
  *local_68;
  undefined8 local_60;
  undefined8 local_58;
  TVector<double> *local_50;
  undefined8 local_48;
  
  bVar7 = FStreamingSourceShapeHelper::IsSourceAffectingGrid
                    ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
                     (*(longlong *)this + 0x58),
                     *(EStreamingSourceTargetBehavior *)(*(longlong *)this + 0x50),param_1->Name);
  if (!bVar7) {
    return true;
  }
  puVar1 = *(undefined8 **)((longlong)this + 8);
  bVar7 = UWorldPartitionSubsystem::GetOverrideLoadingRange(param_1->Name,(int *)&local_res8);
  iVar11 = (int)local_res8;
  if (!bVar7) {
    iVar11 = param_1->LoadingRange;
  }
  pTVar2 = (param_1->SpatialIndex).Ptr;
  if (pTVar2 != (TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>,FStaticSpatialIndex::FSpatialIndexProfile3D>
                 *)0x0) {
    local_50 = (TVector<double> *)puVar1[2];
    local_60 = puVar1[1];
    local_58 = *puVar1;
    local_48 = puVar1[3];
    local_68 = pTVar2;
    if (*(char *)((longlong)&local_50[2].field0_0x0 + 1) != '\0') {
      local_78 = UE::Core::Private::Function::
                 TFunctionRefCaller<``UWorldPartitionRuntimeHashSet::ForEachStreamingCellsQuery'::__l2::<lambda_2>::operator()<TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>,FStaticSpatialIndex::FSpatialIndexProfile3D>_>'::__l5::<lambda_1>,void,FSphericalSector_const_&>
                 ::Call;
      local_70 = &local_68;
      fVar14 = (float)iVar11;
      if (*(char *)((longlong)&local_50[1].field0_0x0 + 4) == '\0') {
        fVar14 = *(float *)&local_50[1].field0_0x0;
      }
      FStreamingSourceShapeHelper::ForEachShape
                ((float)iVar11,fVar14,false,local_50,
                 (TRotator<double> *)((longlong)&local_50[2].field0_0x0 + 8),
                 (TArray<FStreamingSourceShape,TSizedDefaultAllocator<32>_> *)
                 ((longlong)&local_50[10].field0_0x0 + 8),
                 (TFunctionRef<void___cdecl(FSphericalSector_const_&)> *)&local_78,0.0,0.0);
    }
  }
  puVar1 = *(undefined8 **)((longlong)this + 8);
  bVar7 = UWorldPartitionSubsystem::GetOverrideLoadingRange(param_1->Name,(int *)&local_res8);
  iVar11 = (int)local_res8;
  if (!bVar7) {
    iVar11 = param_1->LoadingRange;
  }
  pTVar2 = (TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>,FStaticSpatialIndex::FSpatialIndexProfile3D>
            *)(param_1->SpatialIndex2D).Ptr;
  if (pTVar2 != (TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>,FStaticSpatialIndex::FSpatialIndexProfile3D>
                 *)0x0) {
    local_50 = (TVector<double> *)puVar1[2];
    local_60 = puVar1[1];
    local_58 = *puVar1;
    local_48 = puVar1[3];
    local_68 = pTVar2;
    if (*(char *)((longlong)&local_50[2].field0_0x0 + 1) != '\0') {
      local_78 = UE::Core::Private::Function::
                 TFunctionRefCaller<``UWorldPartitionRuntimeHashSet::ForEachStreamingCellsQuery'::__l2::<lambda_2>::operator()<TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>,FStaticSpatialIndex::FSpatialIndexProfile2D>_>'::__l5::<lambda_1>,void,FSphericalSector_const_&>
                 ::Call;
      local_70 = &local_68;
      fVar14 = (float)iVar11;
      if (*(char *)((longlong)&local_50[1].field0_0x0 + 4) == '\0') {
        fVar14 = *(float *)&local_50[1].field0_0x0;
      }
      FStreamingSourceShapeHelper::ForEachShape
                ((float)iVar11,fVar14,false,local_50,
                 (TRotator<double> *)((longlong)&local_50[2].field0_0x0 + 8),
                 (TArray<FStreamingSourceShape,TSizedDefaultAllocator<32>_> *)
                 ((longlong)&local_50[10].field0_0x0 + 8),
                 (TFunctionRef<void___cdecl(FSphericalSector_const_&)> *)&local_78,0.0,0.0);
    }
  }
  iVar11 = (param_1->NonSpatiallyLoadedCells).ArrayNum;
  puVar1 = *(undefined8 **)((longlong)this + 0x10);
  pFVar3 = (param_1->NonSpatiallyLoadedCells).AllocatorInstance.Data;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = iVar11;
  if (iVar11 == 0) {
    local_7c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar11,0,&local_88,iVar11,&local_7c);
    ConstructItems<TObjectPtr<UWorldPartitionRuntimeCell>,TObjectPtr<UWorldPartitionRuntimeCell>,int>
              (local_88.Data,(TObjectPtr<UWorldPartitionRuntimeCell> *)pFVar3,iVar11);
  }
  iVar11 = local_80;
  pFVar3 = local_88.Data + (longlong)local_80 * 8;
  FVar12.Data = local_88.Data;
  do {
    while( true ) {
      if (local_80 != iVar11) {
        `TCheckedPointerIterator<TObjectPtr<UWorldPartitionRuntimeCell>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_res8);
      }
      if (FVar12.Data == pFVar3) {
        if (local_88.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data);
        }
        return true;
      }
      lVar4 = *(longlong *)FVar12.Data;
      lVar5 = puVar1[1];
      bVar7 = UWorldPartitionRuntimeHash::IsCellRelevantFor
                        (*(UWorldPartitionRuntimeHash **)*puVar1,*(bool *)(lVar4 + 0x58));
      if (bVar7) break;
LAB_148a893d2:
      FVar12.Data = FVar12.Data + 8;
    }
    if (*(int *)(lVar4 + 0x50) == 0) {
      if (*(char *)(lVar5 + 0x30) == '\0') {
LAB_148a893b9:
        local_res8 = lVar4;
        cVar8 = (**(code **)puVar1[2])(((undefined8 *)puVar1[2])[1],&local_res8);
        if (cVar8 == '\0') {
          if (local_88.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data);
          }
          return false;
        }
      }
      goto LAB_148a893d2;
    }
    plVar9 = (longlong *)(**(code **)(*(longlong *)(lVar4 + 0x28) + 0x38))(lVar4 + 0x28);
    plVar13 = (longlong *)*plVar9;
    plVar9 = plVar13 + (int)plVar9[1];
    if (plVar13 == plVar9) goto LAB_148a893d2;
    plVar6 = *(longlong **)(lVar5 + 0x20);
    do {
      if (plVar6 != plVar6 + *(int *)(lVar5 + 0x28)) {
        plVar10 = plVar6;
        do {
          if (*plVar10 == *plVar13) goto LAB_148a893b9;
          plVar10 = plVar10 + 1;
        } while (plVar10 != plVar6 + *(int *)(lVar5 + 0x28));
      }
      plVar13 = plVar13 + 1;
    } while (plVar13 != plVar9);
    FVar12.Data = FVar12.Data + 8;
  } while( true );
}

// operator() @ 148a89440

TVector2<double> * __thiscall
`UWorldPartitionRuntimeHashSet::Draw2D'::__l12::<lambda_4>::operator()
          (void *this,TVector2<double> *__return_storage_ptr__,TVector2<double> *param_1,
          bool param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float *pfVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  
  if (param_2) {
    pfVar4 = *(float **)this;
    fVar8 = (float)(param_1->field0_0x0)._s_0.Y;
    fVar7 = (float)(param_1->field0_0x0)._s_0.X;
    dVar5 = (double)(fVar8 * pfVar4[2] + fVar7 * *pfVar4 + pfVar4[4]);
    dVar6 = (double)(fVar8 * pfVar4[3] + fVar7 * pfVar4[1] + pfVar4[5]);
  }
  else {
    dVar5 = (param_1->field0_0x0)._s_0.X;
    dVar6 = (param_1->field0_0x0)._s_0.Y;
  }
  dVar1 = (*(double **)((longlong)this + 0x10))[1];
  dVar2 = (*(double **)((longlong)this + 8))[1];
  dVar3 = (*(double **)((longlong)this + 0x18))[1];
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (dVar5 - **(double **)((longlong)this + 0x10)) * **(double **)((longlong)this + 8) +
       **(double **)((longlong)this + 0x18);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (dVar6 - dVar1) * dVar2 + dVar3;
  return __return_storage_ptr__;
}

// Draw2D @ 148a8d920

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
UWorldPartitionRuntimeHashSet::Draw2D
          (UWorldPartitionRuntimeHashSet *this,FWorldPartitionDraw2DContext *param_1)

{
  FName *pFVar1;
  int *piVar2;
  TArray<FWorldPartitionCanvasMultiLineTextItem,TSizedDefaultAllocator<32>_> *pTVar3;
  double dVar4;
  undefined8 uVar5;
  FName FVar6;
  FName *pFVar7;
  code *pcVar8;
  TVector2<double>_u_0 TVar9;
  double dVar10;
  TVector2<double>_u_0 TVar11;
  undefined1 auVar12 [16];
  longlong *plVar13;
  float fVar14;
  float fVar15;
  bool bVar16;
  undefined1 uVar17;
  char cVar18;
  int iVar19;
  int iVar20;
  TTransform<double> *pTVar21;
  longlong lVar22;
  UPackage *pUVar23;
  FString *pFVar24;
  byte bVar25;
  ulonglong uVar26;
  UWorldPartition *this_00;
  ForAnyElementType FVar27;
  FName FVar28;
  uint uVar29;
  FScriptContainerElement *pFVar30;
  FName *pFVar31;
  uint *puVar32;
  uint uVar33;
  FScriptContainerElement *pFVar34;
  bool bVar35;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  float fVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined1 auStackY_5b8 [32];
  ForAnyElementType local_560;
  undefined8 local_558;
  undefined1 local_550;
  undefined1 local_54f;
  undefined1 local_54e;
  undefined1 local_54d [5];
  ForAnyElementType local_548;
  undefined8 local_540;
  int local_538;
  float local_530;
  float fStack_52c;
  undefined1 local_528 [16];
  ForAnyElementType local_518;
  undefined8 local_510;
  uint local_508;
  int local_504;
  TVector2<double>_u_0 local_500;
  double local_4f0;
  double dStack_4e8;
  char local_4e0;
  TVector2<double>_u_0 local_4d8;
  double local_4c8;
  double dStack_4c0;
  char local_4b8;
  undefined7 uStack_4b7;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  double local_4a0;
  double dStack_498;
  undefined8 local_490;
  TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_> *local_488;
  FWorldPartitionDraw2DContext *local_480;
  UWorldPartition *local_478;
  double local_470;
  double dStack_468;
  double local_460;
  double dStack_458;
  double local_450;
  double dStack_448;
  double local_440;
  double local_438;
  FName *local_430;
  double dStack_428;
  double local_420;
  FName *local_418;
  FName *local_410;
  FName local_408 [2];
  double local_3f8;
  double dStack_3f0;
  FString local_3e8;
  int local_3d8;
  int local_3d4;
  undefined8 *local_3d0;
  double *local_3c8;
  longlong *local_3c0;
  int iStack_3b8;
  uint uStack_3b4;
  TBitArray<FDefaultBitArrayAllocator> *local_3b0;
  undefined4 uStack_3a8;
  uint uStack_3a4;
  int local_3a0;
  undefined4 uStack_39c;
  int iStack_398;
  undefined4 uStack_394;
  longlong *local_390;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_388;
  undefined8 uStack_368;
  FString local_360;
  code *local_350;
  undefined8 **local_348;
  code *local_340;
  double **local_338;
  double local_330;
  double dStack_328;
  code *local_320;
  float **local_318;
  UWorldPartitionRuntimeHashSet *local_310;
  double *local_308;
  float *local_300;
  double *local_2f8;
  double *local_2f0;
  double *local_2e8;
  undefined1 local_2e0 [16];
  FString local_2d0;
  FString local_2c0;
  FString local_2b0 [2];
  undefined8 local_290;
  TQuat<double> local_288;
  TRotator<double> local_268;
  double local_250;
  double dStack_248;
  double local_240;
  undefined8 local_218;
  undefined4 local_1f4;
  double local_1f0;
  double dStack_1e8;
  double local_1e0;
  double dStack_1d8;
  double local_1d0;
  double dStack_1c8;
  char local_1c0;
  undefined4 local_1bf;
  undefined2 local_1bb;
  undefined1 local_1b9;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  undefined1 local_198 [32];
  uint *local_178;
  uint local_170;
  undefined4 local_16c;
  undefined4 local_168;
  int local_164;
  void *local_158;
  undefined4 local_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_5b8;
  bVar35 = -1 < CpuChannel->Enabled;
  local_480 = param_1;
  if (bVar35) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId64,"UWorldPartitionRuntimeHashSet::Draw2D",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\RuntimeHashSet\\WorldPartitionRuntimeHashSetDebugDraw.cpp"
               ,0x40);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId64);
  }
  this_00 = (UWorldPartition *)0x0;
  if ((this->_padding_ & 0x10) == 0) {
    this_00 = (UWorldPartition *)this->_padding_;
  }
  else {
    bVar16 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<1240560329461596353>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\WorldPartitionRuntimeHash.h"
                        ,0xc1,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar16) {
      pcVar8 = (code *)swi(3);
      uVar17 = (*pcVar8)();
      return (bool)uVar17;
    }
  }
  local_478 = this_00;
  local_488 = UWorldPartition::GetStreamingSources(this_00);
  if (local_488->ArrayNum == 0) {
    bVar16 = false;
    goto LAB_148a8eed4;
  }
  local_3d0 = (undefined8 *)local_198;
  local_198._0_8_ = 0;
  local_348 = &local_3d0;
  local_198._8_8_ = 0;
  local_178 = (uint *)0x0;
  local_350 = UE::Core::Private::Function::
              TFunctionRefCaller<`UWorldPartitionRuntimeHashSet::Draw2D'::__l2::<lambda_1>,bool,FRuntimePartitionStreamingData_const_&>
              ::Call;
  local_170 = 0;
  local_16c = 0x80;
  local_168 = 0xffffffff;
  local_164 = 0;
  local_158 = (void *)0x0;
  local_150 = 0;
  ForEachStreamingData
            (this,(TFunctionRef<bool___cdecl(FRuntimePartitionStreamingData_const_&)> *)&local_350);
  if (local_198._8_4_ == local_164) {
    bVar16 = false;
  }
  else {
    pTVar21 = &(this_00->InstanceTransform).TypedValue;
    if ((this_00->InstanceTransform).bIsSet == false) {
      pTVar21 = &UE::Math::TTransform<double>::Identity;
    }
    local_288.X = (pTVar21->Rotation).XY.m128d_f64[0];
    local_288.Y = (pTVar21->Rotation).XY.m128d_f64[1];
    local_288.Z = (pTVar21->Rotation).ZW.m128d_f64[0];
    local_288.W = (pTVar21->Rotation).ZW.m128d_f64[1];
    dVar4 = (&pTVar21->Rotation)[1].XY.m128d_f64[0];
    dVar36 = (&pTVar21->Rotation)[1].XY.m128d_f64[1];
    local_240 = (&pTVar21->Rotation)[1].ZW.m128d_f64[0];
    dStack_110 = (&pTVar21->Rotation)[1].ZW.m128d_f64[1];
    local_108 = (&pTVar21->Rotation)[2].XY.m128d_f64[0];
    dStack_100 = (&pTVar21->Rotation)[2].XY.m128d_f64[1];
    local_f8 = (&pTVar21->Rotation)[2].ZW.m128d_f64[0];
    dStack_f0 = (&pTVar21->Rotation)[2].ZW.m128d_f64[1];
    local_250 = dVar4;
    dStack_248 = dVar36;
    local_148 = local_288.X;
    dStack_140 = local_288.Y;
    local_138 = local_288.Z;
    dStack_130 = local_288.W;
    local_128 = dVar4;
    dStack_120 = dVar36;
    local_118 = local_240;
    UE::Math::TQuat<double>::Rotator(&local_288,&local_268);
    __libm_sse2_sincosf_();
    local_1b0 = (float)((uint)extraout_XMM0_Da ^ __xmm_80000000800000008000000080000000);
    local_1a8 = (float)dVar4;
    local_1a4 = (float)dVar36;
    fVar49 = __real_3f800000 / (extraout_XMM0_Db * extraout_XMM0_Db - local_1b0 * extraout_XMM0_Da);
    fVar52 = fVar49 * extraout_XMM0_Db;
    fVar50 = fVar49 * extraout_XMM0_Db;
    fVar51 = (float)((uint)(fVar49 * extraout_XMM0_Da) ^ __xmm_80000000800000008000000080000000);
    fVar49 = (float)((uint)(fVar49 * local_1b0) ^ __xmm_80000000800000008000000080000000);
    local_530 = (float)((uint)local_1a4 ^ __xmm_80000000800000008000000080000000) * fVar49 +
                fVar52 * (float)((uint)local_1a8 ^ __xmm_80000000800000008000000080000000);
    fStack_52c = fVar50 * (float)((uint)local_1a4 ^ __xmm_80000000800000008000000080000000) +
                 fVar51 * (float)((uint)local_1a8 ^ __xmm_80000000800000008000000080000000);
    local_290 = CONCAT44(fStack_52c,local_530);
    local_1b8 = extraout_XMM0_Db;
    local_1b4 = extraout_XMM0_Da;
    local_1ac = extraout_XMM0_Db;
    if (((param_1->WorldRegion).bIsValid == false) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("WorldRegion.bIsValid",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionDraw2DContext.h"
                            ,0x98,L""), bVar16)) {
      pcVar8 = (code *)swi(3);
      uVar17 = (*pcVar8)();
      return (bool)uVar17;
    }
    dVar4 = (param_1->WorldRegion).Min.field0_0x0._s_0.X;
    dVar36 = (param_1->WorldRegion).Min.field0_0x0._s_0.Y;
    dVar40 = (param_1->WorldRegion).Max.field0_0x0._s_0.X - dVar4;
    fVar14 = (float)local_290;
    dVar39 = (param_1->WorldRegion).Max.field0_0x0._s_0.Y - dVar36;
    fVar15 = local_290._4_4_;
    fVar48 = (float)dVar4;
    local_560.Data = (FScriptContainerElement *)0x0;
    local_558 = 0;
    fVar45 = (float)dVar36;
    dVar36 = (double)(fVar52 * fVar48 + fVar49 * fVar45 + (float)local_290);
    dVar4 = (double)(fVar50 * fVar45 + fVar51 * fVar48 + local_290._4_4_);
    iVar19 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&local_560,(int *)((longlong)&local_558 + 4));
    iVar20 = iVar19 + 1;
    uVar42 = SUB84(dVar4,0);
    uVar44 = (undefined4)((ulonglong)dVar4 >> 0x20);
    local_2e0._8_4_ = uVar42;
    local_2e0._0_8_ = dVar36;
    local_2e0._12_4_ = uVar44;
    auVar12._8_4_ = uVar42;
    auVar12._0_8_ = dVar36;
    auVar12._12_4_ = uVar44;
    *(undefined1 (*) [16])(local_560.Data + (longlong)iVar19 * 0x10) = auVar12;
    fVar48 = (float)(param_1->WorldRegion).Min.field0_0x0._s_0.Y;
    fVar45 = (float)(dVar40 + (param_1->WorldRegion).Min.field0_0x0._s_0.X);
    local_470 = (double)(fVar45 * fVar52 + fVar49 * fVar48 + fVar14);
    dStack_468 = (double)(fVar51 * fVar45 + fVar50 * fVar48 + fVar15);
    local_558._0_4_ = iVar20;
    if (((local_560.Data <= (FScriptContainerElement *)&local_470) &&
        ((FScriptContainerElement *)&local_470 < local_560.Data + (longlong)local_558._4_4_ * 0x10))
       && (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar16)) {
      pcVar8 = (code *)swi(3);
      uVar17 = (*pcVar8)();
      return (bool)uVar17;
    }
    if ((int)local_558 == local_558._4_4_) {
      local_558._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x810,&local_560,(int *)((longlong)&local_558 + 4));
    }
    iVar20 = (int)local_558 + 1;
    *(double *)(local_560.Data + (longlong)(int)local_558 * 0x10) = local_470;
    *(double *)(local_560.Data + (longlong)(int)local_558 * 0x10 + 8) = dStack_468;
    fVar48 = (float)(dVar39 + (param_1->WorldRegion).Min.field0_0x0._s_0.Y);
    fVar45 = (float)(dVar40 + (param_1->WorldRegion).Min.field0_0x0._s_0.X);
    local_460 = (double)(fVar48 * fVar49 + fVar45 * fVar52 + fVar14);
    dStack_458 = (double)(fVar48 * fVar50 + fVar45 * fVar51 + fVar15);
    local_558._0_4_ = iVar20;
    if (((local_560.Data <= (FScriptContainerElement *)&local_460) &&
        ((FScriptContainerElement *)&local_460 < local_560.Data + (longlong)local_558._4_4_ * 0x10))
       && (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar16)) {
      pcVar8 = (code *)swi(3);
      uVar17 = (*pcVar8)();
      return (bool)uVar17;
    }
    if ((int)local_558 == local_558._4_4_) {
      local_558._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x810,&local_560,(int *)((longlong)&local_558 + 4));
    }
    iVar20 = (int)local_558 + 1;
    *(double *)(local_560.Data + (longlong)(int)local_558 * 0x10) = local_460;
    *(double *)(local_560.Data + (longlong)(int)local_558 * 0x10 + 8) = dStack_458;
    fVar48 = (float)(param_1->WorldRegion).Min.field0_0x0._s_0.X;
    fVar45 = (float)(dVar39 + (param_1->WorldRegion).Min.field0_0x0._s_0.Y);
    local_450 = (double)(fVar49 * fVar45 + fVar52 * fVar48 + fVar14);
    dStack_448 = (double)(fVar50 * fVar45 + fVar51 * fVar48 + fVar15);
    local_558._0_4_ = iVar20;
    if (((local_560.Data <= (FScriptContainerElement *)&local_450) &&
        ((FScriptContainerElement *)&local_450 < local_560.Data + (longlong)local_558._4_4_ * 0x10))
       && (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar16)) {
      pcVar8 = (code *)swi(3);
      uVar17 = (*pcVar8)();
      return (bool)uVar17;
    }
    if ((int)local_558 == local_558._4_4_) {
      local_558._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x810,&local_560,(int *)((longlong)&local_558 + 4));
    }
    iVar20 = (int)local_558 + 1;
    lVar22 = (longlong)(int)local_558;
    local_558 = CONCAT44(local_558._4_4_,iVar20);
    *(double *)(local_560.Data + lVar22 * 0x10) = local_450;
    *(double *)(local_560.Data + lVar22 * 0x10 + 8) = dStack_448;
    uVar26 = (ulonglong)iVar20;
    cVar18 = '\0';
    local_500._s_0.X = 0.0;
    local_500._s_0.Y = 0.0;
    pFVar30 = local_560.Data + uVar26 * 0x10;
    local_4f0 = 0.0;
    dStack_4e8 = 0.0;
    local_4e0 = '\0';
    uVar53 = 0;
    uVar54 = 0;
    uVar42 = 0;
    uVar44 = 0;
    FVar27.Data = local_560.Data;
    uVar41 = 0;
    uVar43 = 0;
    uVar46 = 0;
    uVar47 = 0;
    while( true ) {
      if ((int)uVar26 != iVar20) {
        local_550 = 0;
        `TCheckedPointerIterator<UE::Math::TVector2<double>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_550);
        uVar26 = local_558 & 0xffffffff;
        uVar53 = SUB84(dStack_4e8,0);
        uVar54 = (undefined4)((ulonglong)dStack_4e8 >> 0x20);
        uVar42 = SUB84(local_4f0,0);
        uVar44 = (undefined4)((ulonglong)local_4f0 >> 0x20);
        uVar46 = SUB84(local_500._s_0.Y,0);
        uVar47 = (undefined4)((ulonglong)local_500._8_8_ >> 0x20);
        uVar41 = SUB84(local_500._s_0.X,0);
        uVar43 = (undefined4)((ulonglong)local_500._0_8_ >> 0x20);
        cVar18 = local_4e0;
      }
      if (FVar27.Data == pFVar30) break;
      if (cVar18 == '\0') {
        uVar42 = *(undefined4 *)FVar27.Data;
        uVar44 = *(undefined4 *)(FVar27.Data + 4);
        local_500._s_0.X = (double)*(undefined8 *)FVar27.Data;
        local_4f0 = *(double *)FVar27.Data;
        pFVar34 = FVar27.Data + 8;
        uVar53 = *(undefined4 *)pFVar34;
        uVar54 = *(undefined4 *)(FVar27.Data + 0xc);
        local_500._s_0.Y = (double)*(undefined8 *)pFVar34;
        dStack_4e8 = *(double *)pFVar34;
        cVar18 = '\x01';
        FVar27.Data = FVar27.Data + 0x10;
        local_4e0 = '\x01';
        uVar41 = uVar42;
        uVar43 = uVar44;
        uVar46 = uVar53;
        uVar47 = uVar54;
      }
      else {
        dVar4 = *(double *)FVar27.Data;
        if (dVar4 <= (double)CONCAT44(uVar43,uVar41)) {
          uVar41 = SUB84(dVar4,0);
          uVar43 = (undefined4)((ulonglong)dVar4 >> 0x20);
        }
        local_500._s_0.X = (double)CONCAT44(uVar43,uVar41);
        local_500._s_0.Y = (double)*(undefined8 *)(FVar27.Data + 8);
        if ((double)CONCAT44(uVar47,uVar46) <= local_500._s_0.Y) {
          local_500._s_0.Y = (double)CONCAT44(uVar47,uVar46);
        }
        dVar4 = *(double *)FVar27.Data;
        if ((double)CONCAT44(uVar44,uVar42) <= dVar4) {
          uVar42 = SUB84(dVar4,0);
          uVar44 = (undefined4)((ulonglong)dVar4 >> 0x20);
        }
        local_4f0 = (double)CONCAT44(uVar44,uVar42);
        dStack_4e8 = *(double *)(FVar27.Data + 8);
        FVar27.Data = FVar27.Data + 0x10;
        if (dStack_4e8 <= (double)CONCAT44(uVar54,uVar53)) {
          dStack_4e8 = (double)CONCAT44(uVar54,uVar53);
        }
        uVar53 = SUB84(dStack_4e8,0);
        uVar54 = (undefined4)((ulonglong)dStack_4e8 >> 0x20);
        uVar46 = SUB84(local_500._s_0.Y,0);
        uVar47 = (int)((ulonglong)local_500._s_0.Y >> 0x20);
      }
    }
    if (((param_1->CanvasRegion).bIsValid == false) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("CanvasRegion.bIsValid",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionDraw2DContext.h"
                            ,0x97,L""), bVar16)) {
      pcVar8 = (code *)swi(3);
      uVar17 = (*pcVar8)();
      return (bool)uVar17;
    }
    fVar49 = (float)local_170;
    dVar4 = __real_3fe0000000000000;
    uStack_3b4 = 1;
    if (param_1->bIsDetailedMode == false) {
      iVar20 = 1;
LAB_148a8e1c3:
      uVar42 = 0;
      uVar44 = 0;
      uVar53 = 0;
      uVar54 = 0;
    }
    else {
      iVar20 = local_198._8_4_ - local_164;
      if (iVar20 < 2) goto LAB_148a8e1c3;
      uVar42 = (undefined4)__real_4034000000000000;
      uVar44 = (undefined4)((ulonglong)__real_4034000000000000 >> 0x20);
      uVar53 = (undefined4)__real_4024000000000000;
      uVar54 = (undefined4)((ulonglong)__real_4024000000000000 >> 0x20);
    }
    iStack_3b8 = 0;
    local_3a0 = 0;
    local_1c0 = '\0';
    local_308 = &local_148;
    local_1bf = 0;
    local_1bb = 0;
    local_1b9 = 0;
    local_490 = 0;
    local_538 = 0;
    dVar36 = (param_1->CanvasRegion).Max.field0_0x0._s_0.Y -
             (param_1->CanvasRegion).Min.field0_0x0._s_0.Y;
    local_420 = (double)((float)((param_1->CanvasRegion).Max.field0_0x0._s_0.X -
                                (param_1->CanvasRegion).Min.field0_0x0._s_0.X) / (float)iVar20);
    if (local_420 <= dVar36) {
      dVar36 = local_420;
    }
    local_1e0 = 0.0;
    dStack_1d8 = 0.0;
    local_430 = (FName *)(param_1->CanvasRegion).Min.field0_0x0._s_0.X;
    dStack_428 = (param_1->CanvasRegion).Min.field0_0x0._s_0.Y;
    dVar36 = (double)(float)(dVar36 - (double)CONCAT44(uVar44,uVar42)) * __real_3fe0000000000000;
    local_1f0 = 0.0;
    dStack_1e8 = 0.0;
    local_1d0 = 0.0;
    dStack_1c8 = 0.0;
    local_4b0 = 0.0;
    uStack_4a8 = 0.0;
    local_4a0 = 0.0;
    dStack_498 = 0.0;
    uStack_3a4 = 0;
    if (local_170 != 0) {
      puVar32 = (uint *)(local_198 + 0x10);
      if (local_178 != (uint *)0x0) {
        puVar32 = local_178;
      }
      uVar33 = *puVar32;
      while (uVar33 == 0) {
        lVar22 = (longlong)iStack_3b8;
        local_3a0 = local_3a0 + 0x20;
        iStack_3b8 = iStack_3b8 + 1;
        uStack_3a4 = local_170;
        if ((int)((local_170 - 1) + ((int)(local_170 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_3b8)
        goto LAB_148a8e303;
        uVar33 = puVar32[lVar22 + 1];
      }
      uStack_3b4 = -uVar33 & uVar33;
      uVar26 = (ulonglong)uStack_3b4 * 2 + 1;
      lVar22 = 0x3f;
      if (uVar26 != 0) {
        for (; uVar26 >> lVar22 == 0; lVar22 = lVar22 + -1) {
        }
      }
      local_3d8 = (int)lVar22;
      uStack_3a4 = local_3d8 + -1 + local_3a0;
      if ((int)local_170 < (int)uStack_3a4) {
        uStack_3a4 = local_170;
      }
    }
LAB_148a8e303:
    iStack_398 = local_198._8_4_ - local_164;
    local_3c0 = (longlong *)local_198;
    local_3b0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_198 + 0x10);
    uStack_3a8 = 0xffffffff;
    TStack_388.CurrentBitIndex = uStack_3a4;
    TStack_388.UnvisitedBitMask = 0xffffffff;
    uVar33 = local_170 & 0xffffffe0;
    TStack_388._padding_ = CONCAT44(uStack_3b4,iStack_3b8);
    uStack_39c = local_1f4;
    iVar20 = (int)local_170 >> 5;
    TStack_388._28_4_ = local_1f4;
    TStack_388.BaseBitIndex = local_3a0;
    uStack_368 = CONCAT44(uStack_394,iStack_398);
    bVar25 = (byte)local_170;
    local_530 = (float)local_170;
    local_390 = local_3c0;
    TStack_388.Array = local_3b0;
    local_310 = this;
    if (((int)local_170 < 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar16)) {
      pcVar8 = (code *)swi(3);
      uVar17 = (*pcVar8)();
      return (bool)uVar17;
    }
    dVar40 = dStack_428;
    dVar39 = __real_3fa99999a0000000;
    if (fVar49 != (float)local_170) {
      puVar32 = (uint *)(local_198 + 0x10);
      if (local_178 != (uint *)0x0) {
        puVar32 = local_178;
      }
      uVar29 = -1 << (bVar25 & 0x1f) & puVar32[iVar20];
      while (uVar29 == 0) {
        lVar22 = (longlong)iVar20;
        uVar33 = uVar33 + 0x20;
        iVar20 = iVar20 + 1;
        if ((int)((local_170 - 1) + ((int)(local_170 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20) {
          local_530 = (float)local_170;
          fVar49 = (float)local_170;
          goto LAB_148a8e448;
        }
        uVar29 = puVar32[lVar22 + 1];
      }
      uVar26 = (ulonglong)(-uVar29 & uVar29) * 2 + 1;
      lVar22 = 0x3f;
      if (uVar26 != 0) {
        for (; uVar26 >> lVar22 == 0; lVar22 = lVar22 + -1) {
        }
      }
      local_3d4 = (int)lVar22;
      local_530 = (float)((uVar33 - 1) + local_3d4);
      fVar49 = local_530;
      if ((int)local_170 < (int)local_530) {
        fVar49 = (float)local_170;
        local_530 = (float)local_170;
      }
    }
LAB_148a8e448:
    local_418 = local_430;
    while( true ) {
      plVar13 = local_390;
      if ((int)local_390[1] - *(int *)((longlong)local_390 + 0x34) != (int)uStack_368) {
        local_54f = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_54f);
      }
      if ((((float)TStack_388.CurrentBitIndex == fVar49) &&
          (TStack_388.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_198 + 0x10))) &&
         (plVar13 == (longlong *)local_198)) break;
      pFVar31 = (FName *)((longlong)TStack_388.CurrentBitIndex * 0x20 + *plVar13);
      iVar20 = local_488->ArrayNum;
      pFVar30 = (local_488->AllocatorInstance).Data;
      pFVar1 = pFVar31 + 1;
      pFVar34 = pFVar30 + (longlong)iVar20 * 0x160;
      local_430 = pFVar31;
      local_410 = pFVar1;
      while( true ) {
        if (local_488->ArrayNum != iVar20) {
          local_54e = 0;
          `TCheckedPointerIterator<FWorldPartitionStreamingSource_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_54e);
        }
        param_1 = local_480;
        if (pFVar30 == pFVar34) break;
        FVar6 = *pFVar31;
        local_3c8 = &local_1f0;
        if (((int)pFVar31[2].ComparisonIndex.Value < 1) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar8 = (code *)swi(3);
          uVar17 = (*pcVar8)();
          return (bool)uVar17;
        }
        pFVar7 = *(FName **)*pFVar1;
        bVar16 = UWorldPartitionSubsystem::GetOverrideLoadingRange(*pFVar7,(int *)&local_508);
        uVar33 = local_508;
        if (!bVar16) {
          uVar33 = pFVar7[1].ComparisonIndex.Value;
        }
        bVar16 = FStreamingSourceShapeHelper::IsSourceAffectingGrid
                           ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
                            (pFVar30 + 0x68),(EStreamingSourceTargetBehavior)pFVar30[0x60],FVar6);
        if (bVar16) {
          local_340 = UE::Core::Private::Function::
                      TFunctionRefCaller<`UWorldPartitionRuntimeHashSet::Draw2D'::__l16::<lambda_3>,void,FSphericalSector_const_&>
                      ::Call;
          local_338 = &local_3c8;
          FStreamingSourceShapeHelper::ForEachShape
                    ((float)(int)uVar33,(float)(int)uVar33,true,(TVector<double> *)(pFVar30 + 8),
                     (TRotator<double> *)(pFVar30 + 0x20),
                     (TArray<FStreamingSourceShape,TSizedDefaultAllocator<32>_> *)(pFVar30 + 0x108),
                     (TFunctionRef<void___cdecl(FSphericalSector_const_&)> *)&local_340,
                     *(float *)(pFVar30 + 0x158),*(float *)(pFVar30 + 0x15c));
        }
        pFVar30 = pFVar30 + 0x160;
      }
      if (local_480->bIsDetailedMode == false) {
        dVar10 = (local_480->WorldRegion).Max.field0_0x0._s_0.X;
        dVar38 = (local_480->WorldRegion).Max.field0_0x0._s_0.Y;
        local_3f8 = (local_480->WorldRegion).Min.field0_0x0._s_0.X + dVar10;
        dStack_3f0 = (local_480->WorldRegion).Min.field0_0x0._s_0.Y + dVar38;
        dVar10 = (dVar10 - (local_480->WorldRegion).Min.field0_0x0._s_0.X) * dVar4;
        local_330 = (dVar38 - (local_480->WorldRegion).Min.field0_0x0._s_0.Y) * dVar4;
        if (local_330 <= dVar10) {
          local_330 = dVar10;
        }
      }
      else {
        local_3f8 = local_1f0 + dStack_1d8;
        dStack_3f0 = dStack_1e8 + local_1d0;
        dVar38 = (dStack_1c8 - local_1e0) * dVar39;
        dVar10 = (local_1d0 - dStack_1e8) * dVar39;
        dVar37 = (dStack_1d8 - local_1f0) * dVar39;
        dVar10 = ((local_1d0 + dVar10) - (dStack_1e8 - dVar10)) * dVar4;
        local_330 = ((dVar37 + dStack_1d8) - (local_1f0 - dVar37)) * dVar4;
        dVar38 = ((dVar38 + dStack_1c8) - (local_1e0 - dVar38)) * dVar4;
        if (local_330 <= dVar10) {
          local_330 = dVar10;
        }
        if (local_330 <= dVar38) {
          local_330 = dVar38;
        }
      }
      dStack_3f0 = dStack_3f0 * dVar4;
      local_3f8 = local_3f8 * dVar4;
      local_300 = &local_1b8;
      FVar28 = *pFVar1;
      local_2f8 = &local_330;
      local_2f0 = &local_3f8;
      local_4b8 = '\x01';
      local_2e8 = &local_440;
      uVar33 = pFVar31[2].ComparisonIndex.Value;
      FVar6 = (FName)((longlong)FVar28 + (longlong)(int)uVar33 * 8);
      local_438 = dVar36 + dVar40 + (double)CONCAT44(uVar54,uVar53);
      local_330 = dVar36 / local_330;
      local_4d8._s_0.Y = local_438 - dVar36;
      dStack_4c0 = local_438 + dVar36;
      local_440 = (double)local_538 * local_420 + (double)local_418 + dVar36 +
                  (double)CONCAT44(uVar54,uVar53);
      local_4d8._s_0.X = local_440 - dVar36;
      local_4c8 = local_440 + dVar36;
      dStack_328 = local_330;
      while( true ) {
        if (pFVar31[2].ComparisonIndex.Value != uVar33) {
          local_54d[0] = 0;
          `TCheckedPointerIterator<FRuntimePartitionStreamingData_const_*,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(local_54d);
        }
        pFVar1 = local_410;
        if (FVar28 == FVar6) break;
        local_318 = &local_300;
        local_320 = UE::Core::Private::Function::
                    TFunctionRefCaller<`UWorldPartitionRuntimeHashSet::Draw2D'::__l12::<lambda_4>,UE::Math::TVector2<double>,UE::Math::TVector2<double>_const_&,bool>
                    ::Call;
        `UWorldPartitionRuntimeHashSet::Draw2D'::__l2::<lambda_2>::operator()
                  (&local_310,*(FRuntimePartitionStreamingData **)FVar28,
                   (TBox2<double> *)&local_500._s_0,(TBox2<double> *)&local_4d8._s_0,
                   (TFunctionRef<UE::Math::TVector2<double>___cdecl(UE::Math::TVector2<double>_const_&,bool)>
                    *)&local_320,param_1);
        FVar28 = (FName)((longlong)FVar28 + 8);
      }
      if ((char)local_490 == '\0') {
        if (local_4b8 != '\0') {
          local_4b0 = local_4d8._s_0.X;
          uStack_4a8 = local_4d8._s_0.Y;
          local_490 = CONCAT71(uStack_4b7,local_4b8);
          local_4a0 = local_4c8;
          dStack_498 = dStack_4c0;
        }
      }
      else if (local_4b8 != '\0') {
        uVar46 = SUB84(local_4b0,0);
        uVar47 = (undefined4)((ulonglong)local_4b0 >> 0x20);
        uVar41 = SUB84(uStack_4a8,0);
        uVar43 = (undefined4)((ulonglong)uStack_4a8 >> 0x20);
        uVar42 = SUB84(dStack_498,0);
        uVar44 = (undefined4)((ulonglong)dStack_498 >> 0x20);
        if (local_4d8._s_0.X <= local_4b0) {
          uVar46 = SUB84(local_4d8._s_0.X,0);
          uVar47 = (undefined4)((ulonglong)local_4d8._0_8_ >> 0x20);
        }
        if (local_4d8._s_0.Y <= uStack_4a8) {
          uVar41 = SUB84(local_4d8._s_0.Y,0);
          uVar43 = (undefined4)((ulonglong)local_4d8._8_8_ >> 0x20);
        }
        if (local_4a0 <= local_4c8) {
          local_4a0 = local_4c8;
        }
        if (dStack_498 <= dStack_4c0) {
          uVar42 = SUB84(dStack_4c0,0);
          uVar44 = (undefined4)((ulonglong)dStack_4c0 >> 0x20);
        }
        local_4b0 = (double)CONCAT44(uVar47,uVar46);
        uStack_4a8 = (double)CONCAT44(uVar43,uVar41);
        dStack_498 = (double)CONCAT44(uVar44,uVar42);
      }
      if (param_1->bIsDetailedMode != false) {
        dVar10 = local_440 - dVar36;
        dVar38 = local_438 - dVar36;
        local_548.Data = (FScriptContainerElement *)0x0;
        local_540 = 0;
        pUVar23 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)local_478);
        local_408[0] = (FName)pUVar23->_padding_;
        ::FName::ToString(local_408,&local_360);
        pFVar24 = FPaths::GetBaseFilename(&local_2c0,&local_360,true);
        pFVar24 = UWorld::RemovePIEPrefix(&local_2d0,pFVar24,(int *)0x0);
        iVar20 = (int)local_540;
        if ((int)local_540 == local_540._4_4_) {
          iVar20 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x820,&local_548,(int *)((longlong)&local_540 + 4));
        }
        local_540 = CONCAT44(local_540._4_4_,iVar20 + 1);
        lVar22 = (longlong)iVar20 * 0x20;
        *(undefined8 *)(local_548.Data + lVar22) = 0;
        *(FScriptContainerElement **)(local_548.Data + lVar22) =
             (pFVar24->Data).AllocatorInstance.Data;
        (pFVar24->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(local_548.Data + lVar22 + 8) = (pFVar24->Data).ArrayNum;
        *(int *)(local_548.Data + lVar22 + 0xc) = (pFVar24->Data).ArrayMax;
        (pFVar24->Data).ArrayNum = 0;
        (pFVar24->Data).ArrayMax = 0;
        ((FLinearColor_u_0 *)(local_548.Data + lVar22 + 0x10))->_s_0 =
             (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
        if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
        }
        if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
        }
        if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_360.Data.AllocatorInstance.Data);
        }
        if (((int)pFVar31[2].ComparisonIndex.Value < 1) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar8 = (code *)swi(3);
          uVar17 = (*pcVar8)();
          return (bool)uVar17;
        }
        UWorldPartitionSubsystem::GetOverrideLoadingRange(**(FName **)*pFVar1,&local_504);
        ::FName::ToString(local_430,local_2b0);
        ::FString::PrintfImpl(&local_3e8,L"%s | %d m");
        if (local_2b0[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2b0[0].Data.AllocatorInstance.Data);
        }
        iVar20 = (int)local_540;
        if ((int)local_540 == local_540._4_4_) {
          iVar20 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x820,&local_548,(int *)((longlong)&local_540 + 4));
        }
        FVar27.Data = local_3e8.Data.AllocatorInstance.Data;
        pFVar30 = local_548.Data + (longlong)iVar20 * 0x20;
        local_540 = CONCAT44(local_540._4_4_,iVar20 + 1);
        *(FScriptContainerElement **)pFVar30 = (FScriptContainerElement *)0x0;
        iVar20 = local_3e8.Data.ArrayNum;
        *(int *)(pFVar30 + 8) = iVar20;
        if (iVar20 == 0) {
          *(int *)(pFVar30 + 0xc) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar20,0,(ForAnyElementType *)pFVar30,iVar20,(int *)(pFVar30 + 0xc));
                    /* WARNING: Load size is inaccurate */
          memcpy(*pFVar30,FVar27.Data,(longlong)iVar20 * 2);
        }
        FVar27.Data = local_548.Data;
        *(FLinearColor_u_0 *)(pFVar30 + 0x10) =
             (FLinearColor_u_0_s_0)FLinearColor::Yellow.field0_0x0;
        iVar20 = (int)local_540;
        local_518.Data = (FScriptContainerElement *)0x0;
        local_510 = CONCAT44(local_510._4_4_,(int)local_540);
        local_528._8_4_ = SUB84(dVar38,0);
        local_528._0_8_ = dVar10;
        local_528._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
        if ((int)local_540 == 0) {
          local_510 = local_540 & 0xffffffff;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,(int)local_540,0,&local_518,(int)local_540,
                     (int *)((longlong)&local_510 + 4));
          ConstructItems<TTuple<FString,FLinearColor>,TTuple<FString,FLinearColor>,int>
                    (local_518.Data,(TTuple<FString,FLinearColor> *)FVar27.Data,iVar20);
        }
        pTVar3 = &(param_1->CanvasItems).MultiLineTexts;
        pFVar30 = (pTVar3->AllocatorInstance).Data;
        if (((pFVar30 <= (FScriptContainerElement *)local_528) &&
            ((FScriptContainerElement *)local_528 <
             pFVar30 + (longlong)(param_1->CanvasItems).MultiLineTexts.ArrayMax * 0x20)) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar16)) {
          pcVar8 = (code *)swi(3);
          uVar17 = (*pcVar8)();
          return (bool)uVar17;
        }
        iVar20 = (param_1->CanvasItems).MultiLineTexts.ArrayNum;
        piVar2 = &(param_1->CanvasItems).MultiLineTexts.ArrayMax;
        if (iVar20 == *piVar2) {
          iVar20 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x820,&pTVar3->AllocatorInstance,piVar2);
        }
        (param_1->CanvasItems).MultiLineTexts.ArrayNum = iVar20 + 1;
        pFVar30 = (pTVar3->AllocatorInstance).Data;
        lVar22 = (longlong)iVar20 * 0x20;
        *(undefined8 *)(pFVar30 + lVar22) = local_528._0_8_;
        *(undefined8 *)(pFVar30 + lVar22 + 8) = local_528._8_8_;
        *(undefined8 *)(pFVar30 + lVar22 + 0x10) = 0;
        *(FScriptContainerElement **)(pFVar30 + lVar22 + 0x10) = local_518.Data;
        local_518.Data = (FScriptContainerElement *)0x0;
        *(undefined4 *)(pFVar30 + lVar22 + 0x18) = (undefined4)local_510;
        *(undefined4 *)(pFVar30 + lVar22 + 0x1c) = local_510._4_4_;
        local_510 = 0;
        DestructItems<TTuple<FString,FLinearColor>,int>((TTuple<FString,FLinearColor> *)0x0,0);
        if (local_518.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_518.Data);
        }
        if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
        }
        DestructItems<TTuple<FString,FLinearColor>,int>
                  ((TTuple<FString,FLinearColor> *)local_548.Data,(int)local_540);
        if ((TTuple<FString,FLinearColor> *)local_548.Data != (TTuple<FString,FLinearColor> *)0x0) {
          FMemory::Free(local_548.Data);
        }
      }
      local_538 = local_538 + 1;
      TStack_388.UnvisitedBitMask = TStack_388.UnvisitedBitMask & ~TStack_388._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_388);
      fVar49 = local_530;
    }
    dVar38 = 0.0;
    dVar10 = 0.0;
    dVar36 = 0.0;
    dVar40 = 0.0;
    local_218 = 0;
    if (local_1c0 == '\0') {
      uVar5 = 0;
    }
    else {
      local_4b8 = '\x01';
      dVar36 = (dStack_1d8 - local_1f0) * dVar4;
      fVar50 = (float)((local_1f0 + dStack_1d8) * dVar4);
      fVar49 = (float)((dStack_1e8 + local_1d0) * dVar4);
      dVar4 = (local_1d0 - dStack_1e8) * dVar4;
      if (dVar36 <= dVar4) {
        dVar36 = dVar4;
      }
      dVar38 = (double)(fVar49 * local_1b0 + fVar50 * local_1b8 + local_1a8);
      dVar10 = (double)(fVar49 * local_1ac + fVar50 * local_1b4 + local_1a4);
      dVar4 = dVar36 + dVar38;
      dVar40 = dVar36 + dVar10;
      dVar38 = dVar38 - dVar36;
      dVar10 = dVar10 - dVar36;
      dVar36 = (dVar4 - dVar38) * dVar39;
      dVar39 = (dVar40 - dVar10) * dVar39;
      dVar38 = dVar38 - dVar36;
      dVar36 = dVar36 + dVar4;
      dVar10 = dVar10 - dVar39;
      dVar40 = dVar39 + dVar40;
      uVar5 = CONCAT71(uStack_4b7,1);
    }
    bVar16 = true;
    TVar11._8_4_ = SUB84(dVar10,0);
    TVar11._s_0.X = dVar38;
    TVar11._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    (param_1->DesiredWorldBounds).Min.field0_0x0 = TVar11;
    TVar9._8_4_ = SUB84(dVar40,0);
    TVar9._s_0.X = dVar36;
    TVar9._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
    (param_1->DesiredWorldBounds).Max.field0_0x0 = TVar9;
    *(undefined8 *)&(param_1->DesiredWorldBounds).bIsValid = uVar5;
    (param_1->UsedCanvasBounds).Min.field0_0x0._s_0.X = local_4b0;
    (param_1->UsedCanvasBounds).Min.field0_0x0._s_0.Y = uStack_4a8;
    (param_1->UsedCanvasBounds).Max.field0_0x0._s_0.X = local_4a0;
    (param_1->UsedCanvasBounds).Max.field0_0x0._s_0.Y = dStack_498;
    *(undefined8 *)&(param_1->UsedCanvasBounds).bIsValid = local_490;
    if (local_560.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_560.Data);
    }
  }
  local_150 = 0;
  if (local_158 != (void *)0x0) {
    FMemory::Free(local_158);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_198);
LAB_148a8eed4:
  if (bVar35) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar16;
}

// Draw3D @ 148a8ef20

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

void __thiscall
UWorldPartitionRuntimeHashSet::Draw3D
          (UWorldPartitionRuntimeHashSet *this,
          TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_> *param_1)

{
  TObjectPtr<UContentBundleManager>_u_0 TVar1;
  code *pcVar2;
  ulonglong uVar3;
  bool bVar4;
  TTransform<double> *pTVar5;
  UObject *this_00;
  bool bVar6;
  undefined1 auStackY_208 [32];
  ForAnyElementType *local_1d8;
  code *local_1d0;
  ForAnyElementType **local_1c8;
  code *local_1c0;
  UWorldPartitionRuntimeHashSet **local_1b8;
  UWorldPartitionRuntimeHashSet *local_1b0;
  TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_> *local_1a8;
  uint local_1a0;
  ForAnyElementType *local_198;
  TObjectPtr<UContentBundleManager>_u_0 local_190;
  UWorld *local_188;
  double *local_180;
  double *local_178;
  ForAnyElementType local_168;
  undefined8 local_160;
  TBitArray<FDefaultBitArrayAllocator> local_158;
  undefined4 local_138;
  undefined4 local_134;
  void *local_128;
  undefined4 local_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  UWorld *local_58;
  TObjectPtr<UContentBundleManager>_u_0 local_50;
  uint local_48;
  ForAnyElementType *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_208;
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId359,"UWorldPartitionRuntimeHashSet::Draw3D",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\RuntimeHashSet\\WorldPartitionRuntimeHashSetDebugDraw.cpp"
               ,0x167);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId359);
  }
  this_00 = (UObject *)0x0;
  if ((this->_padding_ & 0x10) == 0) {
    this_00 = (UObject *)this->_padding_;
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1240560329461596353>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\WorldPartitionRuntimeHash.h"
                       ,0xc1,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar5 = (TTransform<double> *)(this_00 + 4);
  if (this_00[6].field_0x10 == '\0') {
    pTVar5 = &UE::Math::TTransform<double>::Identity;
  }
  local_118 = (pTVar5->Rotation).XY.m128d_f64[0];
  dStack_110 = (pTVar5->Rotation).XY.m128d_f64[1];
  local_108 = (pTVar5->Rotation).ZW.m128d_f64[0];
  dStack_100 = (pTVar5->Rotation).ZW.m128d_f64[1];
  local_f8 = (pTVar5->Translation).XY.m128d_f64[0];
  dStack_f0 = (pTVar5->Translation).XY.m128d_f64[1];
  local_e8 = (pTVar5->Translation).ZW.m128d_f64[0];
  dStack_e0 = (pTVar5->Translation).ZW.m128d_f64[1];
  local_d8 = (pTVar5->Scale3D).XY.m128d_f64[0];
  dStack_d0 = (pTVar5->Scale3D).XY.m128d_f64[1];
  local_c8 = (pTVar5->Scale3D).ZW.m128d_f64[0];
  dStack_c0 = (pTVar5->Scale3D).ZW.m128d_f64[1];
  local_188 = *(UWorld **)&this_00[1].field_0x18;
  if (local_188 == (UWorld *)0x0) {
    local_188 = UObject::GetWorld(this_00);
  }
  TVar1 = (local_188->ContentBundleManager).field0_0x0;
  bVar4 = FWorldPartitionDebugHelper::ShowRuntimeSpatialHashCellStreamingPriorityMode == 0;
  local_168.Data = (FScriptContainerElement *)0x0;
  local_160 = 0;
  local_158.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_158.NumBits = 0;
  local_158.MaxBits = 0x80;
  local_138 = 0xffffffff;
  local_134 = 0;
  local_128 = (void *)0x0;
  local_120 = 0;
  if (*(UDataLayerManager **)&this_00[7].field_0x8 != (UDataLayerManager *)0x0) {
    local_1d8 = &local_168;
    local_1c8 = &local_1d8;
    local_1d0 = UE::Core::Private::Function::
                TFunctionRefCaller<`GetDataLayerDebugColors'::__l5::<lambda_1>,bool,UDataLayerInstance_*>
                ::Call;
    UDataLayerManager::ForEachDataLayerInstance
              (*(UDataLayerManager **)&this_00[7].field_0x8,
               (TFunctionRef<bool___cdecl(UDataLayerInstance_*)> *)&local_1d0);
  }
  local_40 = &local_168;
  local_b8 = local_118;
  dStack_b0 = dStack_110;
  local_198 = &local_168;
  local_180 = &local_118;
  local_178 = &local_b8;
  local_1b8 = &local_1b0;
  local_a8 = local_108;
  dStack_a0 = dStack_100;
  local_98 = local_f8;
  dStack_90 = dStack_f0;
  local_88 = local_e8;
  dStack_80 = dStack_e0;
  local_1c0 = UE::Core::Private::Function::
              TFunctionRefCaller<`UWorldPartitionRuntimeHashSet::Draw3D'::__l2::<lambda_2>,bool,FRuntimePartitionStreamingData_const_&>
              ::Call;
  local_78 = local_d8;
  dStack_70 = dStack_d0;
  local_68 = local_c8;
  dStack_60 = dStack_c0;
  local_1a0 = (uint)bVar4;
  local_1b0 = this;
  local_1a8 = param_1;
  local_190 = TVar1;
  local_58 = local_188;
  local_50 = TVar1;
  local_48 = local_1a0;
  ForEachStreamingData
            (this,(TFunctionRef<bool___cdecl(FRuntimePartitionStreamingData_const_&)> *)&local_1c0);
  local_120 = 0;
  if (local_128 != (void *)0x0) {
    FMemory::Free(local_128);
  }
  uVar3 = local_160 >> 0x20;
  local_160 = local_160 & 0xffffffff00000000;
  if ((int)uVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,&local_168,0,(int *)((longlong)&local_160 + 4));
  }
  local_138 = 0xffffffff;
  local_134 = 0;
  local_158.NumBits = 0;
  if (0x80 < (uint)local_158.MaxBits) {
    local_158.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_158,0);
  }
  if (local_158.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_158.AllocatorInstance.SecondaryData);
  }
  if (local_168.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data);
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ForEachStreamingCells @ 148a92e00

void __thiscall
UWorldPartitionRuntimeHashSet::ForEachStreamingCells
          (UWorldPartitionRuntimeHashSet *this,
          TFunctionRef<bool___cdecl(UWorldPartitionRuntimeCell_const_*)> *param_1)

{
  UWorldPartitionRuntimeHashSet **local_res8 [4];
  UWorldPartitionRuntimeHashSet *local_28;
  TFunctionRef<bool___cdecl(UWorldPartitionRuntimeCell_const_*)> *local_20;
  code *local_18;
  undefined8 **local_10;
  
  local_res8[0] = &local_28;
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UWorldPartitionRuntimeHashSet::ForEachStreamingCells'::__l2::<lambda_2>,bool,FRuntimePartitionStreamingData_const_&>
             ::Call;
  local_28 = this;
  local_20 = param_1;
  ForEachStreamingData
            (this,(TFunctionRef<bool___cdecl(FRuntimePartitionStreamingData_const_&)> *)&local_18);
  return;
}

// ForEachStreamingCellsQuery @ 148a92e40

void __thiscall
UWorldPartitionRuntimeHashSet::ForEachStreamingCellsQuery
          (UWorldPartitionRuntimeHashSet *this,FWorldPartitionStreamingQuerySource *param_1,
          TFunctionRef<bool___cdecl(UWorldPartitionRuntimeCell_const_*)> *param_2,
          FWorldPartitionQueryCache *param_3)

{
  UWorldPartitionRuntimeHashSet *local_res8 [4];
  code *local_68;
  FWorldPartitionStreamingQuerySource **local_60;
  UWorldPartitionRuntimeHashSet **local_58;
  FWorldPartitionStreamingQuerySource *local_50;
  TFunctionRef<bool___cdecl(UWorldPartitionRuntimeCell_const_*)> *local_48;
  FWorldPartitionStreamingQuerySource *local_40;
  undefined8 **local_38;
  undefined8 **local_30;
  UWorldPartitionRuntimeHashSet **local_28;
  FWorldPartitionQueryCache *local_20;
  FWorldPartitionStreamingQuerySource *local_18;
  TFunctionRef<bool___cdecl(UWorldPartitionRuntimeCell_const_*)> *local_10;
  
  local_28 = local_res8;
  local_58 = local_res8;
  local_38 = &local_28;
  local_30 = &local_58;
  local_60 = &local_40;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`UWorldPartitionRuntimeHashSet::ForEachStreamingCellsQuery'::__l2::<lambda_4>,bool,FRuntimePartitionStreamingData_const_&>
             ::Call;
  local_res8[0] = this;
  local_50 = param_1;
  local_48 = param_2;
  local_40 = param_1;
  local_20 = param_3;
  local_18 = param_1;
  local_10 = param_2;
  ForEachStreamingData
            (this,(TFunctionRef<bool___cdecl(FRuntimePartitionStreamingData_const_&)> *)&local_68);
  return;
}

// ForEachStreamingCellsSources @ 148a92eb0

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

void __thiscall
UWorldPartitionRuntimeHashSet::ForEachStreamingCellsSources
          (UWorldPartitionRuntimeHashSet *this,
          TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_> *param_1,
          TFunctionRef<bool___cdecl(UWorldPartitionRuntimeCell_const_*,EStreamingSourceTargetState)>
          *param_2,FWorldPartitionStreamingContext *param_3)

{
  undefined1 *puVar1;
  TMap<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar2;
  undefined8 *puVar3;
  uint uVar4;
  FName FVar5;
  UWorldPartitionRuntimeCell *this_00;
  uint *puVar6;
  undefined1 *puVar7;
  FName *pFVar8;
  code *pcVar9;
  UWorldPartitionRuntimeHashSet *pUVar10;
  TMap<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar11;
  bool bVar12;
  EDataLayerRuntimeState EVar13;
  int iVar14;
  uint uVar15;
  UClass *pUVar16;
  UWorld *pUVar17;
  FWorldPartitionStreamingContext *pFVar18;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar19;
  ForElementType<FName> FVar20;
  TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_> *pTVar21;
  longlong lVar22;
  FScriptContainerElement *pFVar23;
  int iVar24;
  undefined8 *puVar25;
  FScriptContainerElement *pFVar26;
  FScriptContainerElement *pFVar27;
  undefined1 *puVar28;
  uint *puVar29;
  ForElementType<FName> FVar30;
  ulonglong uVar31;
  uint uVar32;
  undefined1 auStackY_268 [32];
  undefined1 local_218;
  undefined1 local_217 [7];
  undefined1 local_210;
  undefined1 local_208;
  undefined1 local_207;
  undefined1 local_206;
  undefined1 local_205;
  uint local_204;
  UWorldPartitionRuntimeHashSet *local_200;
  ForElementType<FName> local_1f8;
  ForElementType<FName> local_1f0;
  uint local_1e8 [2];
  FWorldPartitionStreamingContext *local_1e0;
  TFunctionRef<bool___cdecl(UWorldPartitionRuntimeCell_const_*,EStreamingSourceTargetState)>
  *local_1d8;
  TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_> *local_1d0;
  int local_1c8;
  int local_1c4;
  UWorldPartitionRuntimeCell *local_1c0;
  ForElementType<FName> local_1b8;
  FScriptContainerElement *local_1b0;
  TMap<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>,0>_>
  *local_1a8;
  int iStack_1a0;
  uint uStack_19c;
  undefined1 *local_198;
  undefined4 uStack_190;
  int iStack_18c;
  int local_188;
  undefined4 uStack_184;
  int iStack_180;
  undefined4 uStack_17c;
  TMap<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>,0>_>
  *local_178;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_170;
  undefined8 uStack_150;
  code *local_148;
  UWorldPartitionRuntimeHashSet **local_140;
  UWorldPartitionRuntimeHashSet *local_138;
  FScriptContainerElement *local_130;
  FName *local_128;
  FWorldPartitionStreamingContext *local_120;
  TFunctionRef<bool___cdecl(UWorldPartitionRuntimeCell_const_*,EStreamingSourceTargetState)>
  *local_118;
  TArray<FName,TSizedDefaultAllocator<32>_> local_110;
  FWorldPartitionStreamingContext local_100;
  FWorldPartitionStreamingContext local_e8;
  FWorldPartitionStreamingContext local_d0 [2];
  undefined4 local_9c;
  TArray<FName,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_268;
  local_200 = this;
  local_1d8 = param_2;
  local_1d0 = param_1;
  if (param_3->bIsValid == false) {
    pUVar16 = Z_Construct_UClass_UWorld_NoRegister();
    pUVar17 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar16);
    pFVar18 = FWorldPartitionStreamingContext::Create(&local_e8,pUVar17);
  }
  else {
    pFVar18 = FWorldPartitionStreamingContext::FWorldPartitionStreamingContext(local_d0);
  }
  local_100.bIsValid = pFVar18->bIsValid;
  local_100.DataLayersLogicOperator = pFVar18->DataLayersLogicOperator;
  local_100._2_6_ = *(undefined6 *)&pFVar18->field_0x2;
  local_100.DataLayerEffectiveStates = pFVar18->DataLayerEffectiveStates;
  local_1e0 = &local_100;
  if (param_3->bIsValid != false) {
    local_1e0 = param_3;
  }
  local_100.UpdateStreamingStateEpoch = pFVar18->UpdateStreamingStateEpoch;
  local_100._20_4_ = *(undefined4 *)&pFVar18->field_0x14;
  if ((local_1e0->bIsValid == false) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Context.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\RuntimeHashSet\\WorldPartitionRuntimeHashSet.cpp"
                          ,0x283,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  local_204 = (this->RuntimeNonSpatiallyLoadedDataGridList).ArrayNum;
  uVar31 = (ulonglong)(int)local_204;
  FVar30 = (ForElementType<FName>)
           (this->RuntimeNonSpatiallyLoadedDataGridList).AllocatorInstance.Data;
  local_1f0 = (ForElementType<FName>)((longlong)FVar30 + uVar31 * 8);
  while( true ) {
    FVar20 = local_1f0;
    local_1f8 = FVar30;
    if ((this->RuntimeNonSpatiallyLoadedDataGridList).ArrayNum != (int)uVar31) {
      local_218 = 0;
      `TCheckedPointerIterator<FRuntimePartitionStreamingData_const_*_const,int,0>::operator!='::
      __l2::<lambda_1>::operator()(&local_218);
    }
    pFVar18 = local_1e0;
    pUVar10 = local_200;
    if (FVar30 == FVar20) break;
    FVar5 = *(FName *)FVar30;
    puVar25 = *(undefined8 **)((longlong)FVar5 + 0x20);
    iVar14 = *(int *)((longlong)FVar5 + 0x28);
    puVar3 = puVar25 + iVar14;
    while( true ) {
      if (*(int *)((longlong)FVar5 + 0x28) != iVar14) {
        local_217[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UWorldPartitionRuntimeCell>_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_217);
      }
      if (puVar25 == puVar3) break;
      this_00 = (UWorldPartitionRuntimeCell *)*puVar25;
      bVar12 = UWorldPartitionRuntimeHash::IsCellRelevantFor
                         ((UWorldPartitionRuntimeHash *)pUVar10,this_00->bClientOnlyVisible);
      if ((!bVar12) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsCellRelevantFor(Cell->GetClientOnlyVisible())",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\RuntimeHashSet\\WorldPartitionRuntimeHashSet.cpp"
                              ,0x290,L""), bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      EVar13 = UWorldPartitionRuntimeCell::GetCellEffectiveWantedState(this_00,pFVar18);
      if (EVar13 != Unloaded) {
        local_210 = EVar13 != Loaded;
        local_1c0 = this_00;
        (**(code **)local_1d8)(*(undefined8 *)&local_1d8->field_0x8,&local_1c0);
      }
      puVar25 = puVar25 + 1;
    }
    uVar31 = (ulonglong)local_204;
    FVar30 = (ForElementType<FName>)((longlong)local_1f8 + 8);
    this = local_200;
  }
  uVar31 = (ulonglong)local_1d0->ArrayNum;
  pFVar27 = (local_1d0->AllocatorInstance).Data;
  local_1f8._0_4_ = local_1d0->ArrayNum;
  local_1b0 = pFVar27 + uVar31 * 0x160;
  do {
    pFVar23 = local_1b0;
    if (local_1d0->ArrayNum != (int)uVar31) {
      local_208 = 0;
      `TCheckedPointerIterator<FWorldPartitionStreamingSource_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_208);
    }
    if (pFVar27 == pFVar23) {
      return;
    }
    local_98.AllocatorInstance.SecondaryData = (ForElementType<FName>)0x0;
    local_98.ArrayNum = 0;
    local_98.ArrayMax = 8;
    if (pFVar27[0x60] == (FScriptContainerElement)0x0) {
      if (*(int *)(pFVar27 + 0x70) == *(int *)(pFVar27 + 0x9c)) {
        TMapBase<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>,0>_>
        ::GenerateKeyArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                  ((TMapBase<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>,0>_>
                    *)&this->RuntimeSpatiallyLoadedDataGridMap,&local_98);
      }
      else {
        pTVar19 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Array
                            ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
                             (pFVar27 + 0x68),&local_110);
        uVar15 = pTVar19->ArrayNum;
        pFVar23 = (pTVar19->AllocatorInstance).Data;
        local_98.ArrayNum = uVar15;
        if ((uVar15 == 0) && (local_98.ArrayMax == 0)) {
          local_98.ArrayMax = 8;
        }
        else {
          UE::Core::Private::
          ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                    (8,4,uVar15,local_98.ArrayMax,&local_98.AllocatorInstance,uVar15,
                     &local_98.ArrayMax);
          FVar30 = (ForElementType<FName>)&local_98;
          if (local_98.AllocatorInstance.SecondaryData != (ForElementType<FName>)0x0) {
            FVar30 = local_98.AllocatorInstance.SecondaryData;
          }
          if (uVar15 != 0) {
            memcpy((void *)FVar30,pFVar23,(longlong)(int)uVar15 << 3);
          }
        }
        if (local_110.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_110.AllocatorInstance.Data);
        }
      }
    }
    else if (pFVar27[0x60] == (FScriptContainerElement)0x1) {
      puVar1 = &(this->RuntimeSpatiallyLoadedDataGridMap).field_0x10;
      iStack_1a0 = 0;
      iVar14 = *(int *)&(this->RuntimeSpatiallyLoadedDataGridMap).field_0x28;
      pTVar2 = &this->RuntimeSpatiallyLoadedDataGridMap;
      local_188 = 0;
      uStack_19c = 1;
      iStack_18c = 0;
      if (iVar14 != 0) {
        puVar6 = *(uint **)&(this->RuntimeSpatiallyLoadedDataGridMap).field_0x20;
        puVar29 = (uint *)puVar1;
        if (puVar6 != (uint *)0x0) {
          puVar29 = puVar6;
        }
        uVar15 = *puVar29;
        while (uVar15 == 0) {
          lVar22 = (longlong)iStack_1a0;
          local_188 = local_188 + 0x20;
          iStack_1a0 = iStack_1a0 + 1;
          iStack_18c = iVar14;
          if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1a0)
          goto LAB_148a9323d;
          uVar15 = puVar29[lVar22 + 1];
        }
        uStack_19c = -uVar15 & uVar15;
        uVar31 = (ulonglong)uStack_19c * 2 + 1;
        lVar22 = 0x3f;
        if (uVar31 != 0) {
          for (; uVar31 >> lVar22 == 0; lVar22 = lVar22 + -1) {
          }
        }
        local_1c8 = (int)lVar22;
        iStack_18c = local_188 + -1 + local_1c8;
        if (iVar14 < iStack_18c) {
          iStack_18c = iVar14;
        }
      }
LAB_148a9323d:
      uVar15 = *(uint *)&(this->RuntimeSpatiallyLoadedDataGridMap).field_0x28;
      uStack_184 = local_9c;
      iStack_180 = *(int *)&(this->RuntimeSpatiallyLoadedDataGridMap).field_0x8 -
                   *(int *)&(this->RuntimeSpatiallyLoadedDataGridMap).field_0x34;
      uVar32 = uVar15 & 0xffffffe0;
      TStack_170._padding_ = CONCAT44(uStack_19c,iStack_1a0);
      uStack_190 = 0xffffffff;
      TStack_170.CurrentBitIndex = iStack_18c;
      TStack_170.UnvisitedBitMask = 0xffffffff;
      iVar24 = (int)uVar15 >> 5;
      TStack_170._28_4_ = local_9c;
      TStack_170.BaseBitIndex = local_188;
      uStack_150 = CONCAT44(uStack_17c,iStack_180);
      local_1a8 = pTVar2;
      local_198 = puVar1;
      local_178 = pTVar2;
      TStack_170.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar15 < 0) || (iVar14 < (int)uVar15)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar4 = *(uint *)&(this->RuntimeSpatiallyLoadedDataGridMap).field_0x28;
      if (uVar15 != uVar4) {
        puVar7 = *(undefined1 **)&(this->RuntimeSpatiallyLoadedDataGridMap).field_0x20;
        puVar28 = puVar1;
        if (puVar7 != (undefined1 *)0x0) {
          puVar28 = puVar7;
        }
        uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar28 + (longlong)iVar24 * 4);
        while (uVar15 == 0) {
          lVar22 = (longlong)iVar24;
          uVar32 = uVar32 + 0x20;
          iVar24 = iVar24 + 1;
          uVar15 = uVar4;
          if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar24)
          goto LAB_148a93350;
          uVar15 = *(uint *)(puVar28 + lVar22 * 4 + 4);
        }
        uVar31 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
        lVar22 = 0x3f;
        if (uVar31 != 0) {
          for (; uVar31 >> lVar22 == 0; lVar22 = lVar22 + -1) {
          }
        }
        local_1c4 = (int)lVar22;
        uVar15 = local_1c4 + -1 + uVar32;
        if ((int)uVar4 < (int)uVar15) {
          uVar15 = uVar4;
        }
      }
LAB_148a93350:
      while( true ) {
        pTVar11 = local_178;
        if (*(int *)&local_178->field_0x8 - *(int *)&local_178->field_0x34 != (int)uStack_150) {
          local_207 = 0;
          `TSparseArray<TSparseSetElement<TTuple<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_207);
        }
        if (((TStack_170.CurrentBitIndex == uVar15) &&
            (TStack_170.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (this = local_200, pTVar11 == pTVar2)) break;
        FVar30 = (ForElementType<FName>)
                 ((longlong)TStack_170.CurrentBitIndex * 0x20 + *(longlong *)pTVar11);
        FVar5 = *(FName *)FVar30;
        uVar32 = ::GetTypeHash(FVar5.ComparisonIndex.Value);
        if (*(int *)(pFVar27 + 0x70) != *(int *)(pFVar27 + 0x9c)) {
          pFVar23 = pFVar27 + 0xa0;
          if (*(FScriptContainerElement **)(pFVar27 + 0xa8) != (FScriptContainerElement *)0x0) {
            pFVar23 = *(FScriptContainerElement **)(pFVar27 + 0xa8);
          }
          iVar14 = *(int *)(pFVar23 +
                           (ulonglong)(*(int *)(pFVar27 + 0xb0) - 1U & FVar5.Number + uVar32) * 4);
          if (iVar14 != -1) {
            do {
              if (*(FName *)(*(longlong *)(pFVar27 + 0x68) + (longlong)iVar14 * 0x10) == FVar5)
              goto LAB_148a934dd;
              iVar14 = *(int *)(*(longlong *)(pFVar27 + 0x68) + 8 + (longlong)iVar14 * 0x10);
            } while (iVar14 != -1);
          }
        }
        FVar20 = (ForElementType<FName>)&local_98;
        if (local_98.AllocatorInstance.SecondaryData != (ForElementType<FName>)0x0) {
          FVar20 = local_98.AllocatorInstance.SecondaryData;
        }
        if ((ulonglong)FVar20 <= (ulonglong)FVar30) {
          FVar20 = (ForElementType<FName>)&local_98;
          if (local_98.AllocatorInstance.SecondaryData != (ForElementType<FName>)0x0) {
            FVar20 = local_98.AllocatorInstance.SecondaryData;
          }
          if (((ulonglong)FVar30 < (ulonglong)((longlong)FVar20 + (longlong)local_98.ArrayMax * 8))
             && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar12)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        if (local_98.ArrayNum == local_98.ArrayMax) {
          local_98.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                         (0x408,&local_98.AllocatorInstance,&local_98.ArrayMax);
        }
        lVar22 = (longlong)local_98.ArrayNum;
        FVar20 = (ForElementType<FName>)&local_98;
        if (local_98.AllocatorInstance.SecondaryData != (ForElementType<FName>)0x0) {
          FVar20 = local_98.AllocatorInstance.SecondaryData;
        }
        local_98.ArrayNum = local_98.ArrayNum + 1;
        *(FName *)((longlong)FVar20 + lVar22 * 8) = *(FName *)FVar30;
LAB_148a934dd:
        TStack_170.UnvisitedBitMask = TStack_170.UnvisitedBitMask & ~TStack_170._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_170);
      }
    }
    uVar31 = (ulonglong)local_98.ArrayNum;
    local_204 = local_98.ArrayNum;
    FVar30 = (ForElementType<FName>)&local_98;
    if (local_98.AllocatorInstance.SecondaryData != (ForElementType<FName>)0x0) {
      FVar30 = local_98.AllocatorInstance.SecondaryData;
    }
    local_1b8 = (ForElementType<FName>)((longlong)FVar30 + uVar31 * 8);
    while( true ) {
      FVar20 = local_1b8;
      local_1f0 = FVar30;
      if (local_98.ArrayNum != (uint)uVar31) {
        local_206 = 0;
        `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_206)
        ;
      }
      if (FVar30 == FVar20) break;
      FVar5 = *(FName *)FVar30;
      pTVar21 = TMapBase<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>,0>_>
                ::Find((TMapBase<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>,0>_>
                        *)&this->RuntimeSpatiallyLoadedDataGridMap,FVar5);
      if (pTVar21 !=
          (TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_> *)0x0) {
        if (pFVar27[0x60] == (FScriptContainerElement)0x0) {
          if (*(int *)(pFVar27 + 0x70) != *(int *)(pFVar27 + 0x9c)) {
            uVar15 = ::GetTypeHash(FVar5.ComparisonIndex.Value);
            if (*(int *)(pFVar27 + 0x70) != *(int *)(pFVar27 + 0x9c)) {
              pFVar23 = pFVar27 + 0xa0;
              if (*(FScriptContainerElement **)(pFVar27 + 0xa8) != (FScriptContainerElement *)0x0) {
                pFVar23 = *(FScriptContainerElement **)(pFVar27 + 0xa8);
              }
              iVar14 = *(int *)(pFVar23 +
                               (ulonglong)(*(int *)(pFVar27 + 0xb0) - 1U & FVar5.Number + uVar15) *
                               4);
              if (iVar14 != -1) {
                do {
                  if (*(FName *)(*(longlong *)(pFVar27 + 0x68) + (longlong)iVar14 * 0x10) == FVar5)
                  goto LAB_148a936ba;
                  iVar14 = *(int *)(*(longlong *)(pFVar27 + 0x68) + 8 + (longlong)iVar14 * 0x10);
                } while (iVar14 != -1);
              }
            }
            goto LAB_148a93694;
          }
        }
        else {
          if (pFVar27[0x60] == (FScriptContainerElement)0x1) {
            uVar15 = ::GetTypeHash(FVar5.ComparisonIndex.Value);
            if (*(int *)(pFVar27 + 0x70) != *(int *)(pFVar27 + 0x9c)) {
              pFVar23 = pFVar27 + 0xa0;
              if (*(FScriptContainerElement **)(pFVar27 + 0xa8) != (FScriptContainerElement *)0x0) {
                pFVar23 = *(FScriptContainerElement **)(pFVar27 + 0xa8);
              }
              iVar14 = *(int *)(pFVar23 +
                               (ulonglong)(*(int *)(pFVar27 + 0xb0) - 1U & FVar5.Number + uVar15) *
                               4);
              if (iVar14 != -1) {
                do {
                  if (*(FName *)(*(longlong *)(pFVar27 + 0x68) + (longlong)iVar14 * 0x10) == FVar5)
                  goto LAB_148a9361a;
                  iVar14 = *(int *)(*(longlong *)(pFVar27 + 0x68) + 8 + (longlong)iVar14 * 0x10);
                } while (iVar14 != -1);
              }
            }
            iVar14 = -1;
LAB_148a9361a:
            if (iVar14 == -1) goto LAB_148a936ba;
          }
          else {
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("!\"Enclosing block should never be called\"",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\WorldPartitionStreamingSource.h"
                                ,0xaf,L"");
            if (bVar12) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
LAB_148a93694:
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("FStreamingSourceShapeHelper::IsSourceAffectingGrid(Source.TargetGrids, Source.TargetBehavior, GridName)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\RuntimeHashSet\\WorldPartitionRuntimeHashSet.cpp"
                              ,0x2b9,L"");
          if (bVar12) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
LAB_148a936ba:
        pUVar10 = local_200;
        pFVar26 = (pTVar21->AllocatorInstance).Data;
        iVar14 = pTVar21->ArrayNum;
        pFVar23 = pFVar26 + (longlong)iVar14 * 8;
        while( true ) {
          if (pTVar21->ArrayNum != iVar14) {
            local_205 = 0;
            `TCheckedPointerIterator<FRuntimePartitionStreamingData_const_*_const,int,0>::
            operator!='::__l2::<lambda_1>::operator()(&local_205);
          }
          FVar30 = local_1f0;
          this = local_200;
          if (pFVar26 == pFVar23) break;
          pFVar8 = *(FName **)pFVar26;
          local_120 = local_1e0;
          local_138 = pUVar10;
          local_118 = local_1d8;
          local_130 = pFVar27;
          local_128 = pFVar8;
          bVar12 = UWorldPartitionSubsystem::GetOverrideLoadingRange(*pFVar8,(int *)local_1e8);
          uVar15 = local_1e8[0];
          if (!bVar12) {
            uVar15 = pFVar8[1].ComparisonIndex.Value;
          }
          local_148 = UE::Core::Private::Function::
                      TFunctionRefCaller<`UWorldPartitionRuntimeHashSet::ForEachStreamingCellsSources'::__l68::<lambda_1>,void,FSphericalSector_const_&>
                      ::Call;
          local_140 = &local_138;
          FStreamingSourceShapeHelper::ForEachShape
                    ((float)(int)uVar15,(float)(int)uVar15,false,(TVector<double> *)(pFVar27 + 8),
                     (TRotator<double> *)(pFVar27 + 0x20),
                     (TArray<FStreamingSourceShape,TSizedDefaultAllocator<32>_> *)(pFVar27 + 0x108),
                     (TFunctionRef<void___cdecl(FSphericalSector_const_&)> *)&local_148,
                     *(float *)(pFVar27 + 0x158),*(float *)(pFVar27 + 0x15c));
          pFVar26 = pFVar26 + 8;
        }
      }
      uVar31 = (ulonglong)local_204;
      FVar30 = (ForElementType<FName>)((longlong)FVar30 + 8);
    }
    if (local_98.AllocatorInstance.SecondaryData != (ForElementType<FName>)0x0) {
      FMemory::Free((void *)local_98.AllocatorInstance.SecondaryData);
    }
    pFVar27 = pFVar27 + 0x160;
    uVar31 = (ulonglong)local_1f8 & 0xffffffff;
  } while( true );
}

// ForEachStreamingData @ 148a93810

void __thiscall
UWorldPartitionRuntimeHashSet::ForEachStreamingData
          (UWorldPartitionRuntimeHashSet *this,
          TFunctionRef<bool___cdecl(FRuntimePartitionStreamingData_const_&)> *param_1)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  URuntimeHashExternalStreamingObjectBase *pUVar11;
  UClass *pUVar12;
  FString *pFVar13;
  FScriptContainerElement *pFVar14;
  FWeakObjectPtr *this_00;
  longlong lVar15;
  wchar_t *pwVar16;
  uint uVar17;
  int iVar18;
  longlong *plVar19;
  int iVar20;
  uint uVar21;
  wchar_t *pwVar22;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined4 uStack_ac;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  FString local_68;
  FString local_58;
  FString local_48;
  
  iVar4 = (this->RuntimeStreamingData).ArrayNum;
  pFVar14 = (this->RuntimeStreamingData).AllocatorInstance.Data;
  pFVar2 = pFVar14 + (longlong)iVar4 * 0x48;
  while( true ) {
    if ((this->RuntimeStreamingData).ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FRuntimePartitionStreamingData_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar14 == pFVar2) break;
    cVar7 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,pFVar14);
    if (cVar7 == '\0') {
      return;
    }
    pFVar14 = pFVar14 + 0x48;
  }
  iVar4 = (int)this->_padding_;
  iVar18 = 0;
  plVar1 = &this->_padding_;
  uVar9 = 1;
  iVar20 = 0;
  iVar10 = 0;
  if (iVar4 != 0) {
    plVar19 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar19 = plVar1;
    }
    uVar17 = (uint)*plVar19;
    while (uVar17 == 0) {
      iVar18 = iVar18 + 1;
      iVar20 = iVar20 + 0x20;
      iVar10 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_148a9390c;
      uVar17 = *(uint *)((longlong)plVar19 + (longlong)iVar18 * 4);
    }
    uVar9 = ~(uVar17 - 1) & uVar17;
    uVar3 = (ulonglong)uVar9 * 2 + 1;
    lVar5 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    iVar10 = (int)lVar5 + -1 + iVar20;
    if (iVar4 < iVar10) {
      iVar10 = iVar4;
    }
  }
LAB_148a9390c:
  uVar17 = (uint)this->_padding_;
  uVar21 = uVar17 & 0xffffffe0;
  TStack_90._padding_ = CONCAT44(uVar9,iVar18);
  TStack_90.CurrentBitIndex = iVar10;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar17 >> 5;
  TStack_90._28_4_ = iVar10;
  TStack_90.BaseBitIndex = iVar20;
  uStack_70 = CONCAT44(uStack_ac,(int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4));
  TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)plVar1;
  if ((((int)uVar17 < 0) || (iVar4 < (int)uVar17)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar9 = (uint)this->_padding_;
  if (uVar17 != uVar9) {
    plVar19 = plVar1;
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
      plVar19 = (longlong *)this->_padding_;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)((longlong)plVar19 + (longlong)iVar18 * 4);
    while (uVar17 == 0) {
      iVar18 = iVar18 + 1;
      uVar21 = uVar21 + 0x20;
      uVar17 = uVar9;
      if ((int)(((int)(uVar9 - 1) >> 0x1f & 0x1fU) + (uVar9 - 1)) >> 5 < iVar18) goto LAB_148a93a10;
      uVar17 = *(uint *)((longlong)plVar19 + (longlong)iVar18 * 4);
    }
    uVar3 = (ulonglong)(~(uVar17 - 1) & uVar17) * 2 + 1;
    lVar5 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    uVar17 = (int)lVar5 + -1 + uVar21;
    if ((int)uVar9 < (int)uVar17) {
      uVar17 = uVar9;
    }
  }
LAB_148a93a10:
  do {
    if ((int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4) != (int)uStack_70) {
      `TSparseArray<TSparseSetElement<TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_90.CurrentBitIndex == uVar17) &&
       (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)plVar1)) {
      return;
    }
    this_00 = (FWeakObjectPtr *)(this->_padding_ + (longlong)TStack_90.CurrentBitIndex * 0x10);
    bVar8 = FWeakObjectPtr::IsValid(this_00);
    if (bVar8) {
      pUVar11 = (URuntimeHashExternalStreamingObjectBase *)FWeakObjectPtr::Get(this_00);
      if (pUVar11 == (URuntimeHashExternalStreamingObjectBase *)0x0) {
        pFVar13 = GetTypeName<URuntimeHashSetExternalStreamingObject>(&local_48);
        if ((pFVar13->Data).ArrayNum == 0) {
          pwVar22 = L"";
        }
        else {
          pwVar22 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(L"nullptr",pwVar22);
      }
      pUVar12 = URuntimeHashSetExternalStreamingObject::StaticClass();
      iVar4 = (int)pUVar12->_padding_;
      if ((*(int *)(pUVar11->_padding_ + 0x38) < iVar4) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar11->_padding_ + 0x30) + (longlong)iVar4 * 8) !=
          &pUVar12->_padding_)) {
        pFVar13 = GetTypeName<URuntimeHashSetExternalStreamingObject>(&local_68);
        pwVar22 = L"";
        if ((pFVar13->Data).ArrayNum == 0) {
          pwVar16 = L"";
        }
        else {
          pwVar16 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
        }
        pFVar13 = GetFullNameForCastLogError<URuntimeHashExternalStreamingObjectBase>
                            (&local_58,pUVar11);
        if ((pFVar13->Data).ArrayNum != 0) {
          pwVar22 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar22,pwVar16);
      }
      iVar4 = (int)pUVar11[1]._padding_;
      lVar15 = pUVar11[1]._padding_;
      lVar5 = lVar15 + (longlong)iVar4 * 0x48;
      while( true ) {
        if ((int)pUVar11[1]._padding_ != iVar4) {
          `TCheckedPointerIterator<FRuntimePartitionStreamingData,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res20);
        }
        if (lVar15 == lVar5) break;
        cVar7 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,lVar15);
        if (cVar7 == '\0') {
          return;
        }
        lVar15 = lVar15 + 0x48;
      }
    }
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
  } while( true );
}

// GetCustomHLODActorSourceCellOverride @ 148a95100

FGuid * __thiscall
UWorldPartitionRuntimeHashSet::GetCustomHLODActorSourceCellOverride
          (UWorldPartitionRuntimeHashSet *this,FGuid *param_1)

{
  FGuid *pFVar1;
  
  pFVar1 = TMapBase<FGuid,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>_>::
           Find((TMapBase<FGuid,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>_>
                 *)&this->CustomHLODActorToSourceCellsMap,param_1);
  return pFVar1;
}

// GetPrivateStaticClass @ 148a96d50

UClass * __cdecl UWorldPartitionRuntimeHashSet::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionRuntimeHashSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionRuntimeHashSet",
               &Z_Registration_Info_UClass_UWorldPartitionRuntimeHashSet.InnerSingleton,
               StaticRegisterNativesUWorldPartitionRuntimeHashSet,0x1e8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWorldPartitionRuntimeHashSet>,
               InternalVTableHelperCtorCaller<UWorldPartitionRuntimeHashSet>,local_res8,
               UWorldPartitionRuntimeHash::StaticClass,UWorldPartition::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionRuntimeHashSet.InnerSingleton;
}

// GetStandaloneHLODActorSourceCellOverride @ 148a96f80

FGuid * __thiscall
UWorldPartitionRuntimeHashSet::GetStandaloneHLODActorSourceCellOverride
          (UWorldPartitionRuntimeHashSet *this,FGuid *param_1)

{
  FGuid *pFVar1;
  
  pFVar1 = TMapBase<FGuid,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>_>::
           Find((TMapBase<FGuid,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>_>
                 *)&this->StandaloneHLODActorToSourceCellsMap,param_1);
  return pFVar1;
}

// GetWorldAssetStreamingCells @ 148a97230

TArray<UWorldPartitionRuntimeCell_*,TSizedDefaultAllocator<32>_> * __thiscall
UWorldPartitionRuntimeHashSet::GetWorldAssetStreamingCells
          (UWorldPartitionRuntimeHashSet *this,
          TArray<UWorldPartitionRuntimeCell_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FGuid *param_1)

{
  int iVar1;
  ulong64 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  TArray<UWorldPartitionRuntimeCell_*,TSizedDefaultAllocator<32>_> *local_res8;
  code *local_18;
  TArray<UWorldPartitionRuntimeCell_*,TSizedDefaultAllocator<32>_> **local_10;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  uVar2 = CityHash64((char *)param_1,0x10);
  iVar1 = TSet<TTuple<FGuid,TObjectPtr<URuntimeHashSetExternalStreamingObject>_>,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<URuntimeHashSetExternalStreamingObject>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,TObjectPtr<URuntimeHashSetExternalStreamingObject>_>,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<URuntimeHashSetExternalStreamingObject>,0>,FDefaultSetAllocator>
                      *)&this->WorldAssetStreamingObjects,(uint)uVar2,param_1);
  if (iVar1 != -1) {
    lVar3 = (longlong)iVar1 * 0x20 + *(longlong *)&(this->WorldAssetStreamingObjects).field_0x0;
    puVar4 = (undefined8 *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      puVar4 = (undefined8 *)0x0;
    }
    if (puVar4 != (undefined8 *)0x0) {
      local_10 = &local_res8;
      local_18 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UWorldPartitionRuntimeHashSet::GetWorldAssetStreamingCells'::__l5::<lambda_1>,void,UWorldPartitionRuntimeCell_&>
                 ::Call;
      local_res8 = __return_storage_ptr__;
      URuntimeHashExternalStreamingObjectBase::ForEachStreamingCells
                ((URuntimeHashExternalStreamingObjectBase *)*puVar4,
                 (TFunctionRef<void___cdecl(UWorldPartitionRuntimeCell_&)> *)&local_18);
    }
  }
  return __return_storage_ptr__;
}

// InjectExternalStreamingObject @ 148a99ee0

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
UWorldPartitionRuntimeHashSet::InjectExternalStreamingObject
          (UWorldPartitionRuntimeHashSet *this,URuntimeHashExternalStreamingObjectBase *param_1)

{
  FRuntimePartitionStreamingData *pFVar1;
  int iVar2;
  bool bVar3;
  URuntimeHashSetExternalStreamingObject *pUVar4;
  UClass *pUVar5;
  UWorld *this_00;
  FRuntimePartitionStreamingData *pFVar6;
  undefined1 local_res18 [16];
  
  bVar3 = UWorldPartitionRuntimeHash::InjectExternalStreamingObject
                    ((UWorldPartitionRuntimeHash *)this,param_1);
  if (bVar3) {
    pUVar4 = CastChecked<URuntimeHashSetExternalStreamingObject,URuntimeHashExternalStreamingObjectBase>
                       (param_1);
    pUVar5 = Z_Construct_UClass_UWorld_NoRegister();
    this_00 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar5);
    if (this_00 != (UWorld *)0x0) {
      bVar3 = UWorld::HasBegunPlay(this_00);
      if (bVar3) {
        iVar2 = (pUVar4->RuntimeStreamingData).ArrayNum;
        pFVar6 = (FRuntimePartitionStreamingData *)
                 (pUVar4->RuntimeStreamingData).AllocatorInstance.Data;
        pFVar1 = pFVar6 + iVar2;
        while( true ) {
          if ((pUVar4->RuntimeStreamingData).ArrayNum != iVar2) {
            `TCheckedPointerIterator<FRuntimePartitionStreamingData,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res18);
          }
          if (pFVar6 == pFVar1) break;
          RemoveIrrelevantCells(this,pFVar6);
          pFVar6 = pFVar6 + 1;
        }
      }
    }
    iVar2 = (pUVar4->RuntimeStreamingData).ArrayNum;
    pFVar6 = (FRuntimePartitionStreamingData *)(pUVar4->RuntimeStreamingData).AllocatorInstance.Data
    ;
    pFVar1 = pFVar6 + iVar2;
    while( true ) {
      if ((pUVar4->RuntimeStreamingData).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FRuntimePartitionStreamingData_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pFVar6 == pFVar1) break;
      FRuntimePartitionStreamingData::CreatePartitionsSpatialIndex(pFVar6);
      pFVar6 = pFVar6 + 1;
    }
    UpdateRuntimeDataGridMap(this);
    return true;
  }
  return false;
}

// OnBeginPlay @ 148a9ac90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UWorldPartitionRuntimeHashSet::OnBeginPlay(UWorldPartitionRuntimeHashSet *this)

{
  bool bVar1;
  UClass *pUVar2;
  UWorld *this_00;
  UWorldPartitionRuntimeHashSet *local_res10 [3];
  code *local_18;
  UWorldPartitionRuntimeHashSet **local_10;
  
  pUVar2 = Z_Construct_UClass_UWorld_NoRegister();
  this_00 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar2);
  bVar1 = UWorld::IsGameWorld(this_00);
  if (bVar1) {
    local_10 = local_res10;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UWorldPartitionRuntimeHashSet::OnBeginPlay'::__l5::<lambda_1>,bool,FRuntimePartitionStreamingData_const_&>
               ::Call;
    local_res10[0] = this;
    ForEachStreamingData
              (this,(TFunctionRef<bool___cdecl(FRuntimePartitionStreamingData_const_&)> *)&local_18)
    ;
  }
  UpdateRuntimeDataGridMap(this);
  return;
}

// ParseGridName @ 148a9d110

bool __cdecl
UWorldPartitionRuntimeHashSet::ParseGridName
          (FName param_1,TArray<FName,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_3)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  FString *this;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  wchar_t *pwVar9;
  ForAnyElementType FVar10;
  wchar_t *pwVar11;
  FName local_res8;
  undefined1 local_res20 [8];
  undefined8 local_88;
  FName local_80;
  FName local_78;
  TArray<FString,TSizedDefaultAllocator<32>_> local_70;
  TArray<FString,TSizedDefaultAllocator<32>_> local_60;
  FString local_50;
  FString local_40;
  
  local_res8 = param_1;
  if (param_1 == (FName)0x0) {
    pFVar7 = (param_2->AllocatorInstance).Data;
    local_88 = 0;
    if (((pFVar7 <= (FScriptContainerElement *)&local_88) &&
        ((FScriptContainerElement *)&local_88 < pFVar7 + (longlong)param_2->ArrayMax * 8)) &&
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
    iVar5 = param_2->ArrayNum;
    if (iVar5 == param_2->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar5 + 1;
    *(undefined8 *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_88;
    return true;
  }
  local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.ArrayNum = 0;
  local_70.ArrayMax = 0;
  this = ::FName::ToString(&local_res8,&local_50);
  iVar5 = ::FString::ParseIntoArray(this,&local_70,L":",true);
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  if (iVar5 == 0) {
    pFVar7 = (FScriptContainerElement *)::FName::ToString(&local_res8,&local_40);
    if (((local_70.AllocatorInstance.Data <= pFVar7) &&
        (pFVar7 < local_70.AllocatorInstance.Data + (longlong)local_70.ArrayMax * 0x10)) &&
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
    iVar5 = local_70.ArrayNum;
    if (local_70.ArrayNum == local_70.ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_70.AllocatorInstance,&local_70.ArrayMax);
    }
    local_70.ArrayNum = iVar5 + 1;
    pFVar8 = local_70.AllocatorInstance.Data + (longlong)iVar5 * 0x10;
    *(undefined8 *)pFVar8 = 0;
    *(undefined8 *)pFVar8 = *(undefined8 *)pFVar7;
    *(undefined8 *)pFVar7 = 0;
    *(int *)(pFVar8 + 8) = *(int *)(pFVar7 + 8);
    *(int *)(pFVar8 + 0xc) = *(int *)(pFVar7 + 0xc);
    *(undefined8 *)(pFVar7 + 8) = 0;
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
  }
  if (local_70.ArrayNum < 3) {
    local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_60.ArrayNum = 0;
    local_60.ArrayMax = 0;
    if ((local_70.ArrayNum < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    iVar5 = ::FString::ParseIntoArray
                      ((FString *)local_70.AllocatorInstance.Data,&local_60,L".",true);
    pwVar11 = L"";
    if (iVar5 != 0) {
      iVar5 = local_60.ArrayNum;
      pFVar7 = local_60.AllocatorInstance.Data + (longlong)local_60.ArrayNum * 0x10;
      FVar10.Data = local_60.AllocatorInstance.Data;
      while( true ) {
        if (local_60.ArrayNum != iVar5) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res20);
        }
        if (FVar10.Data == pFVar7) break;
        if (*(int *)(FVar10.Data + 8) == 0) {
          pwVar9 = L"";
        }
        else {
          pwVar9 = *(wchar_t **)FVar10.Data;
        }
        ::FName::FName(&local_80,pwVar9);
        pFVar1 = (FName *)(param_2->AllocatorInstance).Data;
        if (((pFVar1 <= &local_80) && (&local_80 < pFVar1 + param_2->ArrayMax)) &&
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
        iVar6 = param_2->ArrayNum;
        if (iVar6 == param_2->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        FVar10.Data = FVar10.Data + 0x10;
        param_2->ArrayNum = iVar6 + 1;
        *(FName *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_80;
      }
    }
    if (1 < local_70.ArrayNum) {
      if (*(int *)(local_70.AllocatorInstance.Data + 0x18) != 0) {
        pwVar11 = *(wchar_t **)(local_70.AllocatorInstance.Data + 0x10);
      }
      ::FName::FName(&local_78,pwVar11);
      pFVar1 = (FName *)(param_3->AllocatorInstance).Data;
      if (((pFVar1 <= &local_78) && (&local_78 < pFVar1 + param_3->ArrayMax)) &&
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
      iVar5 = param_3->ArrayNum;
      if (iVar5 == param_3->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&param_3->AllocatorInstance,&param_3->ArrayMax);
      }
      param_3->ArrayNum = iVar5 + 1;
      *(FName *)((param_3->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_78;
    }
    bVar3 = true;
    DestructItems<FString,int>((FString *)local_60.AllocatorInstance.Data,local_60.ArrayNum);
    if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  DestructItems<FString,int>((FString *)local_70.AllocatorInstance.Data,local_70.ArrayNum);
  if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.AllocatorInstance.Data);
  }
  return bVar3;
}

// RegisterWorldAssetStreaming @ 148a9ee20

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

FGuid * __thiscall
UWorldPartitionRuntimeHashSet::RegisterWorldAssetStreaming
          (UWorldPartitionRuntimeHashSet *this,FGuid *__return_storage_ptr__,
          FRegisterWorldAssetStreamingParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  ulong64 uVar7;
  URuntimePartition *pUVar8;
  FGuid *pFVar9;
  UClass *pUVar10;
  UWorld *pUVar11;
  URuntimeHashExternalStreamingObjectBase *pUVar12;
  URuntimeHashSetExternalStreamingObject *pUVar13;
  ulonglong uVar14;
  longlong lVar15;
  UWorldPartition *this_00;
  FScriptContainerElement *pFVar16;
  ForAnyElementType FVar17;
  FScriptContainerElement *pFVar18;
  TTuple<URuntimePartition_const_*,TSoftObjectPtr<UWorld>_const_> *pTVar19;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  ForAnyElementType local_128;
  undefined8 local_120;
  uint local_118;
  FScriptContainerElement *local_110;
  FString local_108;
  undefined8 local_f8;
  undefined8 local_f0;
  TPairInitializer<FGuid_const_&,TObjectPtr<URuntimeHashSetExternalStreamingObject>_&&> local_e8;
  URuntimePartition *local_d8;
  URuntimeHashSetExternalStreamingObject *local_d0;
  TSet<TTuple<FGuid,TObjectPtr<URuntimeHashSetExternalStreamingObject>_>,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<URuntimeHashSetExternalStreamingObject>,0>,FDefaultSetAllocator>
  *local_c8;
  undefined1 local_c0 [32];
  void *local_a0;
  FGuid *local_90;
  URuntimeHashSetExternalStreamingObject **local_88;
  FRegisterWorldAssetStreamingParams *local_80;
  undefined8 *local_78;
  URuntimeHashSetExternalStreamingObject *local_70;
  UWorldPartitionRuntimeHashSet *local_68;
  FString local_60;
  FString local_50;
  
  this_00 = (UWorldPartition *)0x0;
  if ((((*(longlong *)&(param_1->WorldAssetDesc).WorldAsset.SoftObjectPtr.field_0x8 == 0) ||
       ((param_1->WorldAssetDesc).TargetGrid == (FName)0x0)) ||
      ((((param_1->Guid).D == 0 && (param_1->Guid).C == 0) && (param_1->Guid).B == 0) &&
       (param_1->Guid).A == 0)) || ((param_1->Bounds).IsValid == '\0')) {
    if (1 < (byte)LogWorldPartition._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
    }
LAB_148a9f327:
    __return_storage_ptr__->A = 0;
    __return_storage_ptr__->B = 0;
    __return_storage_ptr__->C = 0;
    __return_storage_ptr__->D = 0;
    return __return_storage_ptr__;
  }
  uVar7 = CityHash64((char *)&param_1->Guid,0x10);
  local_c8 = (TSet<TTuple<FGuid,TObjectPtr<URuntimeHashSetExternalStreamingObject>_>,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<URuntimeHashSetExternalStreamingObject>,0>,FDefaultSetAllocator>
              *)&this->WorldAssetStreamingObjects;
  iVar6 = TSet<TTuple<FGuid,TObjectPtr<URuntimeHashSetExternalStreamingObject>_>,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<URuntimeHashSetExternalStreamingObject>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>(local_c8,(uint)uVar7,&param_1->Guid);
  if (iVar6 != -1) {
    if (1 < (byte)LogWorldPartition._0_1_) {
      local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_108.Data.ArrayNum = 0;
      local_108.Data.ArrayMax = 0;
      FGuid::AppendString(&param_1->Guid,&local_108,Digits);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
    }
    goto LAB_148a9f327;
  }
  local_d8 = ResolveRuntimePartition(this,(param_1->WorldAssetDesc).TargetGrid,false);
  if (local_d8 == (URuntimePartition *)0x0) {
    if (1 < (byte)LogWorldPartition._0_1_) {
      ::FName::ToString(&(param_1->WorldAssetDesc).TargetGrid,&local_60);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
    }
    goto LAB_148a9f327;
  }
  local_118 = (param_1->HLODWorldAssetDescs).ArrayNum;
  uVar14 = (ulonglong)(int)local_118;
  pFVar16 = (param_1->HLODWorldAssetDescs).AllocatorInstance.Data;
  local_128.Data = (FScriptContainerElement *)0x0;
  local_120 = 0;
  pFVar18 = pFVar16 + uVar14 * 0x30;
  local_110 = pFVar18;
  while( true ) {
    if ((param_1->HLODWorldAssetDescs).ArrayNum != (int)uVar14) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<UWorldPartition::FRegisterWorldAssetStreamingParams::FWorldAssetDesc_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar16 == pFVar18) break;
    if ((*(longlong *)(pFVar16 + 8) != 0) &&
       (pFVar18 = local_110, *(longlong *)(pFVar16 + 0x28) != 0)) {
      pUVar8 = ResolveRuntimePartition(this,*(FName *)(pFVar16 + 0x28),false);
      if (pUVar8 == (URuntimePartition *)0x0) {
        if (1 < (byte)LogWorldPartition._0_1_) {
          ::FName::ToString((FName *)(pFVar16 + 0x28),&local_50);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
          if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_50.Data.AllocatorInstance.Data);
          }
        }
        goto LAB_148a9f13e;
      }
      local_c0._8_8_ = *(undefined8 *)pFVar16;
      local_c0._0_8_ = pUVar8;
      FSoftObjectPath::FSoftObjectPath
                ((FSoftObjectPath *)(local_c0 + 0x10),(FSoftObjectPath *)(pFVar16 + 8));
      if (((local_128.Data <=
            (TTuple<URuntimePartition_const_*,TSoftObjectPtr<UWorld>_const_> *)local_c0) &&
          ((FScriptContainerElement *)local_c0 < local_128.Data + (longlong)local_120._4_4_ * 0x30))
         && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar5)) {
        pcVar1 = (code *)swi(3);
        pFVar9 = (FGuid *)(*pcVar1)();
        return pFVar9;
      }
      iVar6 = (int)local_120;
      if ((int)local_120 == local_120._4_4_) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&local_128,(int *)((longlong)&local_120 + 4));
      }
      local_120 = CONCAT44(local_120._4_4_,iVar6 + 1);
      lVar15 = (longlong)iVar6 * 0x30;
      *(undefined8 *)(local_128.Data + lVar15) = local_c0._0_8_;
      *(undefined8 *)(local_128.Data + lVar15 + 8) = local_c0._8_8_;
      FSoftObjectPath::FSoftObjectPath
                ((FSoftObjectPath *)(local_128.Data + lVar15 + 0x10),
                 (FSoftObjectPath *)(local_c0 + 0x10));
      pFVar18 = local_110;
      if (local_a0 != (void *)0x0) {
        FMemory::Free(local_a0);
        pFVar18 = local_110;
      }
    }
    uVar14 = (ulonglong)local_118;
    pFVar16 = pFVar16 + 0x30;
  }
  pUVar10 = Z_Construct_UClass_UWorld_NoRegister();
  pUVar11 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar10);
  local_e8.Value =
       (TObjectPtr<URuntimeHashSetExternalStreamingObject> *)
       URuntimeHashSetExternalStreamingObject::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_e8.Value != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_e8.Value);
  }
  pUVar12 = UWorldPartitionRuntimeHash::CreateExternalStreamingObject
                      ((TSubclassOf<URuntimeHashExternalStreamingObjectBase>)&local_e8.Value,
                       (UObject *)this,pUVar11);
  pUVar13 = CastChecked<URuntimeHashSetExternalStreamingObject,URuntimeHashExternalStreamingObjectBase>
                      (pUVar12);
  if (pUVar13 == (URuntimeHashSetExternalStreamingObject *)0x0) {
    if (1 < (byte)LogWorldPartition._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
      __return_storage_ptr__->A = 0;
      __return_storage_ptr__->B = 0;
      __return_storage_ptr__->C = 0;
      __return_storage_ptr__->D = 0;
      goto LAB_148a9f2ec;
    }
  }
  else {
    local_78 = &local_f8;
    local_f8 = 0;
    local_f0 = 0;
    local_80 = param_1;
    local_70 = pUVar13;
    local_68 = this;
    bVar5 = `UWorldPartitionRuntimeHashSet::RegisterWorldAssetStreaming'::__l2::<lambda_1>::
            operator()(&local_80,local_d8,(TSoftObjectPtr<UWorld> *)param_1,false);
    if (!bVar5) {
      __return_storage_ptr__->A = 0;
      __return_storage_ptr__->B = 0;
      __return_storage_ptr__->C = 0;
      __return_storage_ptr__->D = 0;
      goto LAB_148a9f2ec;
    }
    iVar6 = (int)local_120;
    uVar14 = (ulonglong)(int)local_120;
    pTVar19 = (TTuple<URuntimePartition_const_*,TSoftObjectPtr<UWorld>_const_> *)
              (local_128.Data + uVar14 * 0x30);
    FVar17.Data = local_128.Data;
    while( true ) {
      if ((int)uVar14 != iVar6) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<TTuple<URuntimePartition_const_*,TSoftObjectPtr<UWorld>_const_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if ((TTuple<URuntimePartition_const_*,TSoftObjectPtr<UWorld>_const_> *)FVar17.Data == pTVar19)
      {
        if ((this->_padding_ & 0x10) == 0) {
          this_00 = (UWorldPartition *)this->_padding_;
        }
        else {
          bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<1240560329461596353>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\WorldPartitionRuntimeHash.h"
                             ,0xc1,"false || !HasAnyFlags(RF_ClassDefaultObject)");
          if (bVar5) {
            pcVar1 = (code *)swi(3);
            pFVar9 = (FGuid *)(*pcVar1)();
            return pFVar9;
          }
        }
        UWorldPartition::InjectExternalStreamingObject
                  (this_00,(URuntimeHashExternalStreamingObjectBase *)pUVar13);
        local_d0 = pUVar13;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar13);
        }
        local_88 = &local_d0;
        pFVar9 = &param_1->Guid;
        local_90 = pFVar9;
        TSet<TTuple<FGuid,TObjectPtr<URuntimeHashSetExternalStreamingObject>_>,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<URuntimeHashSetExternalStreamingObject>,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<FGuid_const_&,TObjectPtr<URuntimeHashSetExternalStreamingObject>_&&>_>
                  (local_c8,&local_e8,(bool *)&local_90);
        uVar2 = pFVar9->B;
        uVar3 = (param_1->Guid).C;
        uVar4 = (param_1->Guid).D;
        __return_storage_ptr__->A = pFVar9->A;
        __return_storage_ptr__->B = uVar2;
        __return_storage_ptr__->C = uVar3;
        __return_storage_ptr__->D = uVar4;
        goto LAB_148a9f2ec;
      }
      bVar5 = `UWorldPartitionRuntimeHashSet::RegisterWorldAssetStreaming'::__l2::<lambda_1>::
              operator()(&local_80,*(URuntimePartition **)FVar17.Data,
                         (TSoftObjectPtr<UWorld> *)
                         &((TTuple<URuntimePartition_const_*,TSoftObjectPtr<UWorld>_const_> *)
                          FVar17.Data)->field_0x8,true);
      if (!bVar5) break;
      uVar14 = local_120 & 0xffffffff;
      FVar17.Data = FVar17.Data + 0x30;
    }
  }
LAB_148a9f13e:
  __return_storage_ptr__->A = 0;
  __return_storage_ptr__->B = 0;
  __return_storage_ptr__->C = 0;
  __return_storage_ptr__->D = 0;
LAB_148a9f2ec:
  DestructItems<TTuple<URuntimePartition_const_*,TSoftObjectPtr<UWorld>_const_>,int>
            ((TTuple<URuntimePartition_const_*,TSoftObjectPtr<UWorld>_const_> *)local_128.Data,
             (int)local_120);
  if ((TTuple<URuntimePartition_const_*,TSoftObjectPtr<UWorld>_const_> *)local_128.Data ==
      (TTuple<URuntimePartition_const_*,TSoftObjectPtr<UWorld>_const_> *)0x0) {
    return __return_storage_ptr__;
  }
  FMemory::Free(local_128.Data);
  return __return_storage_ptr__;
}

// RemoveExternalStreamingObject @ 148aa1140

bool __thiscall
UWorldPartitionRuntimeHashSet::RemoveExternalStreamingObject
          (UWorldPartitionRuntimeHashSet *this,URuntimeHashExternalStreamingObjectBase *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined8 *puVar3;
  bool bVar4;
  URuntimeHashSetExternalStreamingObject *pUVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res18 [8];
  
  bVar4 = UWorldPartitionRuntimeHash::RemoveExternalStreamingObject
                    ((UWorldPartitionRuntimeHash *)this,param_1);
  if (bVar4) {
    pUVar5 = CastChecked<URuntimeHashSetExternalStreamingObject,URuntimeHashExternalStreamingObjectBase>
                       (param_1);
    iVar2 = (pUVar5->RuntimeStreamingData).ArrayNum;
    pFVar6 = (pUVar5->RuntimeStreamingData).AllocatorInstance.Data;
    pFVar1 = pFVar6 + (longlong)iVar2 * 0x48;
    while( true ) {
      if ((pUVar5->RuntimeStreamingData).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FRuntimePartitionStreamingData_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pFVar6 == pFVar1) break;
      puVar3 = *(undefined8 **)(pFVar6 + 0x30);
      if (puVar3 != (undefined8 *)0x0) {
        *(undefined8 *)(pFVar6 + 0x30) = 0;
        (**(code **)*puVar3)(puVar3,1);
      }
      puVar3 = *(undefined8 **)(pFVar6 + 0x38);
      if (puVar3 != (undefined8 *)0x0) {
        *(undefined8 *)(pFVar6 + 0x38) = 0;
        (**(code **)*puVar3)(puVar3,1);
      }
      puVar3 = *(undefined8 **)(pFVar6 + 0x40);
      if (puVar3 != (undefined8 *)0x0) {
        *(undefined8 *)(pFVar6 + 0x40) = 0;
        (**(code **)*puVar3)(puVar3,1);
      }
      pFVar6 = pFVar6 + 0x48;
    }
    UpdateRuntimeDataGridMap(this);
    return true;
  }
  return false;
}

// RemoveIrrelevantCells @ 148aa14f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UWorldPartitionRuntimeHashSet::RemoveIrrelevantCells
          (UWorldPartitionRuntimeHashSet *this,FRuntimePartitionStreamingData *param_1)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  
  pFVar1 = (param_1->SpatiallyLoadedCells).AllocatorInstance.Data;
  pFVar4 = pFVar1 + (longlong)(param_1->SpatiallyLoadedCells).ArrayNum * 8;
  pFVar3 = pFVar1;
  while (pFVar3 != pFVar4) {
    bVar2 = UWorldPartitionRuntimeHash::IsCellRelevantFor
                      ((UWorldPartitionRuntimeHash *)this,*(bool *)(*(longlong *)pFVar3 + 0x58));
    if (bVar2) {
      pFVar3 = pFVar3 + 8;
    }
    else {
      do {
        pFVar4 = pFVar4 + -8;
        if (pFVar3 == pFVar4) goto LAB_148aa157e;
        bVar2 = UWorldPartitionRuntimeHash::IsCellRelevantFor
                          ((UWorldPartitionRuntimeHash *)this,*(bool *)(*(longlong *)pFVar4 + 0x58))
        ;
      } while (!bVar2);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)pFVar4 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(*(UObject **)pFVar4);
      }
      *(longlong *)pFVar3 = *(longlong *)pFVar4;
      pFVar3 = pFVar3 + 8;
    }
  }
LAB_148aa157e:
  TArray<TObjectPtr<UWorldPartitionRuntimeCell>,TSizedDefaultAllocator<32>_>::SetNum
            (&param_1->SpatiallyLoadedCells,(int)((longlong)pFVar3 - (longlong)pFVar1 >> 3),Default)
  ;
  pFVar1 = (param_1->NonSpatiallyLoadedCells).AllocatorInstance.Data;
  pFVar4 = pFVar1 + (longlong)(param_1->NonSpatiallyLoadedCells).ArrayNum * 8;
  pFVar3 = pFVar1;
  while (pFVar3 != pFVar4) {
    bVar2 = UWorldPartitionRuntimeHash::IsCellRelevantFor
                      ((UWorldPartitionRuntimeHash *)this,*(bool *)(*(longlong *)pFVar3 + 0x58));
    if (bVar2) {
      pFVar3 = pFVar3 + 8;
    }
    else {
      do {
        pFVar4 = pFVar4 + -8;
        if (pFVar3 == pFVar4) goto LAB_148aa15fe;
        bVar2 = UWorldPartitionRuntimeHash::IsCellRelevantFor
                          ((UWorldPartitionRuntimeHash *)this,*(bool *)(*(longlong *)pFVar4 + 0x58))
        ;
      } while (!bVar2);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)pFVar4 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(*(UObject **)pFVar4);
      }
      *(longlong *)pFVar3 = *(longlong *)pFVar4;
      pFVar3 = pFVar3 + 8;
    }
  }
LAB_148aa15fe:
  TArray<TObjectPtr<UWorldPartitionRuntimeCell>,TSizedDefaultAllocator<32>_>::SetNum
            (&param_1->NonSpatiallyLoadedCells,(int)((longlong)pFVar3 - (longlong)pFVar1 >> 3),
             Default);
  return;
}

// ResolveRuntimePartition @ 148aa1d00

URuntimePartition * __thiscall
UWorldPartitionRuntimeHashSet::ResolveRuntimePartition
          (UWorldPartitionRuntimeHashSet *this,FName param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  URuntimePartition *pUVar4;
  FRuntimePartitionDesc *pFVar5;
  FRuntimePartitionHLODSetup *pFVar6;
  URuntimePartition *pUVar7;
  TArray<FName,TSizedDefaultAllocator<32>_> local_28;
  TArray<FName,TSizedDefaultAllocator<32>_> local_18;
  
  pUVar7 = (URuntimePartition *)0x0;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  bVar2 = ParseGridName(param_1,&local_18,&local_28);
  pUVar4 = (URuntimePartition *)0x0;
  if (bVar2) {
    if ((local_18.ArrayNum < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pUVar4 = (URuntimePartition *)(*pcVar1)();
      return pUVar4;
    }
    if (*(longlong *)local_18.AllocatorInstance.Data == 0) {
      if (0 < (this->RuntimePartitions).ArrayNum) {
        pUVar4 = *(URuntimePartition **)((this->RuntimePartitions).AllocatorInstance.Data + 0x10);
      }
    }
    else {
      pFVar5 = TArray<FRuntimePartitionDesc,TSizedDefaultAllocator<32>_>::
               FindByPredicate<_UWorldPartitionRuntimeHashSet::ResolveRuntimePartition_::__l5::<lambda_1>_>
                         (&this->RuntimePartitions,&local_18);
      pUVar4 = pUVar7;
      if (((pFVar5 != (FRuntimePartitionDesc *)0x0) &&
          (pUVar7 = (pFVar5->MainLayer).field0_0x0.DebugPtr, pUVar7 != (URuntimePartition *)0x0)) &&
         (cVar3 = (**(code **)(pUVar7->_padding_ + 0x2b0))(pUVar7,&local_18), cVar3 != '\0')) {
        if (((param_2) || (local_28.ArrayNum < 1)) ||
           (*(longlong *)local_28.AllocatorInstance.Data == 0)) {
          pUVar4 = (pFVar5->MainLayer).field0_0x0.DebugPtr;
        }
        else {
          pFVar6 = TArray<FRuntimePartitionHLODSetup,TSizedDefaultAllocator<32>_>::
                   FindByPredicate<_UWorldPartitionRuntimeHashSet::ResolveRuntimePartition_::__l19::<lambda_2>_>
                             (&pFVar5->HLODSetups,&local_28);
          if (((pFVar6 != (FRuntimePartitionHLODSetup *)0x0) &&
              (pUVar7 = (pFVar6->PartitionLayer).field0_0x0.DebugPtr,
              pUVar7 != (URuntimePartition *)0x0)) &&
             (cVar3 = (**(code **)(pUVar7->_padding_ + 0x2b0))(pUVar7,&local_28), cVar3 != '\0')) {
            pUVar4 = (pFVar6->PartitionLayer).field0_0x0.DebugPtr;
          }
        }
      }
    }
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return pUVar4;
}

// StaticRegisterNativesUWorldPartitionRuntimeHashSet @ 148aa2af0

void __cdecl UWorldPartitionRuntimeHashSet::StaticRegisterNativesUWorldPartitionRuntimeHashSet(void)

{
  return;
}

// SupportsWorldAssetStreaming @ 148aa2b70

bool __thiscall
UWorldPartitionRuntimeHashSet::SupportsWorldAssetStreaming
          (UWorldPartitionRuntimeHashSet *this,FName *param_1)

{
  URuntimePartition *pUVar1;
  
  pUVar1 = ResolveRuntimePartition(this,*param_1,false);
  return pUVar1 != (URuntimePartition *)0x0;
}

// UnregisterWorldAssetStreaming @ 148aa3f10

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
UWorldPartitionRuntimeHashSet::UnregisterWorldAssetStreaming
          (UWorldPartitionRuntimeHashSet *this,FGuid *param_1)

{
  TMap<FGuid,TObjectPtr<URuntimeHashSetExternalStreamingObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<URuntimeHashSetExternalStreamingObject>,0>_>
  *this_00;
  URuntimeHashExternalStreamingObjectBase *this_01;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  FNameEntryId FVar5;
  ulong64 uVar6;
  UWorldPartition *this_02;
  undefined4 extraout_var;
  FString *pFVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 local_res8 [16];
  undefined1 local_res18 [8];
  EUniqueObjectNameOptions local_res20;
  undefined4 uStackX_24;
  char *in_stack_ffffffffffffff98;
  ulonglong uVar11;
  undefined1 local_58 [8];
  undefined1 local_50 [16];
  FString local_40;
  
  this_00 = &this->WorldAssetStreamingObjects;
  uVar6 = CityHash64((char *)param_1,0x10);
  iVar4 = TSet<TTuple<FGuid,TObjectPtr<URuntimeHashSetExternalStreamingObject>_>,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<URuntimeHashSetExternalStreamingObject>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,TObjectPtr<URuntimeHashSetExternalStreamingObject>_>,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<URuntimeHashSetExternalStreamingObject>,0>,FDefaultSetAllocator>
                      *)this_00,(uint)uVar6,param_1);
  if (iVar4 != -1) {
    lVar9 = (longlong)iVar4 * 0x20 + *(longlong *)&this_00->field_0x0;
    plVar10 = (longlong *)(lVar9 + 0x10);
    if (lVar9 == 0) {
      plVar10 = (longlong *)0x0;
    }
    if (plVar10 != (longlong *)0x0) {
      if ((*plVar10 != 0) && ((*(uint *)(*plVar10 + 8) >> 0x1e & 1) == 0)) {
        if ((this->_padding_ & 0x10) == 0) {
          if ((this->_padding_ != 0) && ((*(uint *)(this->_padding_ + 8) >> 0x1e & 1) == 0)) {
            this_02 = UWorldPartitionRuntimeHash::GetOuterUWorldPartition
                                ((UWorldPartitionRuntimeHash *)this);
            UWorldPartition::RemoveExternalStreamingObject
                      (this_02,(URuntimeHashExternalStreamingObjectBase *)*plVar10);
          }
        }
        else {
          in_stack_ffffffffffffff98 = "false || !HasAnyFlags(RF_ClassDefaultObject)";
          bVar2 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<1240560329461596353>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\WorldPartitionRuntimeHash.h"
                             ,0xc1,"false || !HasAnyFlags(RF_ClassDefaultObject)");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
        }
        this_01 = (URuntimeHashExternalStreamingObjectBase *)*plVar10;
        local_50._8_8_ = local_res8;
        local_50._0_8_ =
             UE::Core::Private::Function::
             TFunctionRefCaller<``UWorldPartitionRuntimeHashSet::UnregisterWorldAssetStreaming'::__l5::<lambda_1>::operator()'::__l2::<lambda_2>,void,UWorldPartitionRuntimeCell_&>
             ::Call;
        URuntimeHashExternalStreamingObjectBase::ForEachStreamingCells
                  (this_01,(TFunctionRef<void___cdecl(UWorldPartitionRuntimeCell_&)> *)local_50);
        FVar5 = FNameEntryId::FromValidEName((EName)local_res18);
        uStackX_24 = 0;
        local_res20 = *(EUniqueObjectNameOptions *)CONCAT44(extraout_var,FVar5.Value);
        uVar11 = (ulonglong)in_stack_ffffffffffffff98 & 0xffffffff00000000;
        MakeUniqueObjectName
                  ((UObject *)local_58,(UClass *)this_01->_padding_,(FName)this_01->_padding_,
                   local_res20);
        pcVar1 = *(code **)(this_01->_padding_ + 0x170);
        pFVar7 = ::FName::ToString((FName *)local_58,&local_40);
        if ((pFVar7->Data).ArrayNum == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
        }
        (*pcVar1)(this_01,pwVar8,0,0x34,uVar11);
        if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_40.Data.AllocatorInstance.Data);
        }
      }
      if (*(int *)&(this->WorldAssetStreamingObjects).field_0x8 !=
          *(int *)&(this->WorldAssetStreamingObjects).field_0x34) {
        uVar6 = CityHash64((char *)param_1,0x10);
        TSet<TTuple<FGuid,TObjectPtr<URuntimeHashSetExternalStreamingObject>_>,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<URuntimeHashSetExternalStreamingObject>,0>,FDefaultSetAllocator>
        ::RemoveImpl<FGuid>((TSet<TTuple<FGuid,TObjectPtr<URuntimeHashSetExternalStreamingObject>_>,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<URuntimeHashSetExternalStreamingObject>,0>,FDefaultSetAllocator>
                             *)this_00,(uint)uVar6,param_1);
      }
      return true;
    }
  }
  return false;
}

// UpdateRuntimeDataGridMap @ 148aa40e0

void __thiscall
UWorldPartitionRuntimeHashSet::UpdateRuntimeDataGridMap(UWorldPartitionRuntimeHashSet *this)

{
  int *piVar1;
  undefined1 *puVar2;
  TMap<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  int iVar3;
  bool bVar4;
  UWorldPartitionRuntimeHashSet *local_res8;
  code *local_28;
  UWorldPartitionRuntimeHashSet **local_20;
  
  this_00 = &this->RuntimeSpatiallyLoadedDataGridMap;
  TSet<TTuple<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *)this_00);
  piVar1 = &(this->RuntimeNonSpatiallyLoadedDataGridList).ArrayMax;
  (this->RuntimeNonSpatiallyLoadedDataGridList).ArrayNum = 0;
  if ((this->RuntimeNonSpatiallyLoadedDataGridList).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->RuntimeNonSpatiallyLoadedDataGridList).AllocatorInstance,0,piVar1);
  }
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`UWorldPartitionRuntimeHashSet::UpdateRuntimeDataGridMap'::__l2::<lambda_1>,bool,FRuntimePartitionStreamingData_const_&>
             ::Call;
  local_res8 = this;
  ForEachStreamingData
            (this,(TFunctionRef<bool___cdecl(FRuntimePartitionStreamingData_const_&)> *)&local_28);
  if (*(int *)&(this->RuntimeSpatiallyLoadedDataGridMap).field_0x8 ==
      *(int *)&(this->RuntimeSpatiallyLoadedDataGridMap).field_0x34) {
    bVar4 = 1 < *(int *)&(this->RuntimeSpatiallyLoadedDataGridMap).field_0x48;
    if (!bVar4) {
      TSet<TTuple<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                        *)this_00);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this_00,0,*(int *)&(this->RuntimeSpatiallyLoadedDataGridMap).field_0x8);
    puVar2 = &(this->RuntimeSpatiallyLoadedDataGridMap).field_0xc;
    *(undefined4 *)&(this->RuntimeSpatiallyLoadedDataGridMap).field_0x8 = 0;
    if (*(int *)puVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar2);
    }
    *(undefined4 *)&(this->RuntimeSpatiallyLoadedDataGridMap).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->RuntimeSpatiallyLoadedDataGridMap).field_0x34 = 0;
    iVar3 = *(int *)&(this->RuntimeSpatiallyLoadedDataGridMap).field_0x2c;
    *(undefined4 *)&(this->RuntimeSpatiallyLoadedDataGridMap).field_0x28 = 0;
    if ((iVar3 < 0) || (0x80 < iVar3)) {
      *(undefined4 *)&(this->RuntimeSpatiallyLoadedDataGridMap).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)
                 &(this->RuntimeSpatiallyLoadedDataGridMap).field_0x10,0);
    }
    if (bVar4) {
      *(undefined4 *)&(this->RuntimeSpatiallyLoadedDataGridMap).field_0x48 = 1;
      TSet<TTuple<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FRuntimePartitionStreamingData_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)this_00);
    }
  }
  if (((this->RuntimeNonSpatiallyLoadedDataGridList).ArrayNum == 0) &&
     ((this->RuntimeNonSpatiallyLoadedDataGridList).ArrayNum = 0, *piVar1 != 0)) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->RuntimeNonSpatiallyLoadedDataGridList).AllocatorInstance,0,piVar1);
  }
  return;
}

