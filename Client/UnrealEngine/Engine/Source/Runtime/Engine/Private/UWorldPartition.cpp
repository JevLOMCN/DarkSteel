// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 66

// StaticClass @ 148a6a1e0

UClass * __cdecl UWorldPartition::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartition.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartition",
               &Z_Registration_Info_UClass_UWorldPartition.InnerSingleton,
               StaticRegisterNativesUWorldPartition,0x150,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UWorldPartition>,
               InternalVTableHelperCtorCaller<UWorldPartition>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartition.InnerSingleton;
}

// UWorldPartition @ 148a7ff50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorldPartition * __thiscall
UWorldPartition::UWorldPartition(UWorldPartition *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UWorldPartition__6B_;
  (this->RuntimeHash).field0_0x0.DebugPtr = (UWorldPartitionRuntimeHash *)0x0;
  (this->World).field0_0x0.DebugPtr = (UWorld *)0x0;
  *(undefined8 *)&(this->ReferencedObjects).Elements = 0;
  *(undefined8 *)&(this->ReferencedObjects).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ReferencedObjects).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ReferencedObjects).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ReferencedObjects).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ReferencedObjects).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->ReferencedObjects).Elements.field_0x30 = 0xffffffff;
  (this->ReferencedObjects).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ReferencedObjects).HashSize = 0;
  (this->InstanceTransform).bIsSet = false;
  (this->bCachedUseMakingInvisibleTransactionRequests).bIsSet = false;
  (this->bCachedUseMakingVisibleTransactionRequests).bIsSet = false;
  (this->bCachedIsServerStreamingEnabled).bIsSet = false;
  (this->bCachedIsServerStreamingOutEnabled).bIsSet = false;
  (this->DataLayerManager).field0_0x0.DebugPtr = (UDataLayerManager *)0x0;
  (this->ExternalDataLayerManager).field0_0x0.DebugPtr = (UExternalDataLayerManager *)0x0;
  (this->StreamingPolicy).field0_0x0.DebugPtr = (UWorldPartitionStreamingPolicy *)0x0;
  return this;
}

// UWorldPartition @ 148a7fff0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorldPartition * __thiscall
UWorldPartition::UWorldPartition(UWorldPartition *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UWorldPartition__6B_;
  (this->RuntimeHash).field0_0x0.DebugPtr = (UWorldPartitionRuntimeHash *)0x0;
  (this->World).field0_0x0.DebugPtr = (UWorld *)0x0;
  *(undefined8 *)&(this->ReferencedObjects).Elements = 0;
  *(undefined8 *)&(this->ReferencedObjects).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ReferencedObjects).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ReferencedObjects).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ReferencedObjects).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ReferencedObjects).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->ReferencedObjects).Elements.field_0x30 = 0xffffffff;
  (this->ReferencedObjects).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ReferencedObjects).HashSize = 0;
  this->bHasStandaloneHLOD = '\0';
  this->bDisableContentBundles = '\0';
  this->bIsStandaloneHLODWorld = '\0';
  this->InitState = Uninitialized;
  (this->InstanceTransform).bIsSet = false;
  (this->bCachedUseMakingInvisibleTransactionRequests).bIsSet = false;
  (this->bCachedUseMakingVisibleTransactionRequests).bIsSet = false;
  (this->bCachedIsServerStreamingEnabled).bIsSet = false;
  (this->bCachedIsServerStreamingOutEnabled).bIsSet = false;
  (this->DataLayerManager).field0_0x0.DebugPtr = (UDataLayerManager *)0x0;
  (this->ExternalDataLayerManager).field0_0x0.DebugPtr = (UExternalDataLayerManager *)0x0;
  (this->StreamingPolicy).field0_0x0.DebugPtr = (UWorldPartitionStreamingPolicy *)0x0;
  this->Replay = (AWorldPartitionReplay *)0x0;
  this->StreamingStateEpoch = 0;
  this->bStreamingInEnabled = true;
  this->bEnableStreaming = true;
  this->ServerStreamingMode = ProjectDefault;
  this->ServerStreamingOutMode = ProjectDefault;
  this->DataLayersLogicOperator = Or;
  return this;
}

// ~UWorldPartition @ 148a81ad0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UWorldPartition::~UWorldPartition(UWorldPartition *this)

{
  ForElementType<FSetElementId> FVar1;
  
  *(undefined ***)this = &___7UWorldPartition__6B_;
  (this->ReferencedObjects).HashSize = 0;
  FVar1 = (this->ReferencedObjects).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ReferencedObjects).Elements);
  UObject::~UObject((UObject *)this);
  return;
}

// AddReferencedObject @ 148a8ace0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UWorldPartition::AddReferencedObject(UWorldPartition *this,UObject *param_1)

{
  TObjectPtr<UObject> local_res8;
  UObject *local_res10 [3];
  
  local_res10[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
  Emplace<TObjectPtr<UObject>_>(&this->ReferencedObjects,&local_res8,(bool *)local_res10);
  return;
}

// AddReferencedObjects @ 148a8ad40

void __cdecl UWorldPartition::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  return;
}

// BeginDestroy @ 148a8afc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UWorldPartition::BeginDestroy(UWorldPartition *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->InitState != Uninitialized) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InitState == EWorldPartitionInitState::Uninitialized",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartition.cpp"
                       ,0x6da,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UObject::BeginDestroy((UObject *)this);
  return;
}

// CanAddCellToWorld @ 148a8b9b0

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
UWorldPartition::CanAddCellToWorld(UWorldPartition *this,IWorldPartitionCell *param_1)

{
  int iVar1;
  UWorldPartitionStreamingPolicy *pUVar2;
  bool bVar3;
  undefined1 uVar4;
  UWorld *this_00;
  longlong lVar5;
  UClass *pUVar6;
  
  this_00 = (this->World).field0_0x0.DebugPtr;
  if (this_00 == (UWorld *)0x0) {
    this_00 = UObject::GetWorld((UObject *)this);
  }
  bVar3 = UWorld::IsGameWorld(this_00);
  if (((bVar3) &&
      ((this->StreamingPolicy).field0_0x0.DebugPtr != (UWorldPartitionStreamingPolicy *)0x0)) &&
     (param_1 != (IWorldPartitionCell *)0x0)) {
    lVar5 = (**(code **)((longlong)*param_1 + 8))(param_1);
    if (lVar5 != 0) {
      pUVar6 = Z_Construct_UClass_UWorldPartitionRuntimeCell_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar1 * 8)
          == &pUVar6->_padding_)) {
        pUVar2 = (this->StreamingPolicy).field0_0x0.DebugPtr;
                    /* WARNING: Could not recover jumptable at 0x000148a8ba34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (**(code **)(pUVar2->_padding_ + 0x2c0))(pUVar2,lVar5);
        return (bool)uVar4;
      }
    }
  }
  return true;
}

// CanInitialize @ 148a8ba50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UWorldPartition::CanInitialize(UWorldPartition *this,UWorld *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UWorldPartitionSubsystem *this_00;
  
  if (param_1 == (UWorld *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InWorld",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartition.cpp"
                       ,0x28c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (this->InitState != Initialized) {
    bVar2 = UWorld::IsGameWorld(param_1);
    if (bVar2) {
      this_00 = UWorld::GetSubsystem<UWorldPartitionSubsystem>(param_1);
      if (this_00 != (UWorldPartitionSubsystem *)0x0) {
        bVar2 = UWorldPartitionSubsystem::HasUninitializationPendingStreamingLevels(this_00,this);
        return !bVar2;
      }
    }
  }
  return true;
}

// CanStream @ 148a8bd50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UWorldPartition::CanStream(UWorldPartition *this)

{
  ULevel *this_00;
  char cVar1;
  UClass *pUVar2;
  UObject *pUVar3;
  UWorld *pUVar4;
  ULevelStreaming *pUVar5;
  
  if (this->InitState == Initialized) {
    pUVar2 = Z_Construct_UClass_UWorld_NoRegister();
    pUVar3 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar2);
    this_00 = *(ULevel **)&pUVar3[1].field_0x8;
    pUVar4 = ULevel::GetWorld(this_00);
    if ((pUVar4 != (UWorld *)0x0) &&
       (pUVar4 = ULevel::GetWorld(this_00), !(bool)pUVar4->bShouldForceUnloadStreamingLevels)) {
      pUVar5 = ULevelStreaming::FindStreamingLevel(this_00);
      if (pUVar5 == (ULevelStreaming *)0x0) {
        return true;
      }
      if ((pUVar5->bIsRequestingUnloadAndRemoval == 0) &&
         (cVar1 = (**(code **)(pUVar5->_padding_ + 0x2f0))(pUVar5), cVar1 != '\0')) {
        return true;
      }
    }
  }
  return false;
}

// ConvertEditorPathToRuntimePath @ 148a8c0c0

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
UWorldPartition::ConvertEditorPathToRuntimePath
          (UWorldPartition *this,FSoftObjectPath *param_1,FSoftObjectPath *param_2)

{
  UWorldPartitionStreamingPolicy *pUVar1;
  undefined1 uVar2;
  
  pUVar1 = (this->StreamingPolicy).field0_0x0.DebugPtr;
  if (pUVar1 != (UWorldPartitionStreamingPolicy *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a8c0cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(pUVar1->_padding_ + 0x310))();
    return (bool)uVar2;
  }
  return false;
}

// DisableStreamingIn @ 148a8d880

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UWorldPartition::DisableStreamingIn(UWorldPartition *this)

{
  if ((2 < (byte)LogWorldPartition._0_1_) && (this->bStreamingInEnabled == false)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
    this->bStreamingInEnabled = false;
    return;
  }
  this->bStreamingInEnabled = false;
  return;
}

// DrawRuntimeCellsDetails @ 148a8f220

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
UWorldPartition::DrawRuntimeCellsDetails
          (UWorldPartition *this,UCanvas *param_1,TVector2<double> *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000148a8f22a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((this->StreamingPolicy).field0_0x0.DebugPtr)->_padding_ + 0x2d8))();
  return;
}

// DrawRuntimeHash2D @ 148a8f240

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
UWorldPartition::DrawRuntimeHash2D(UWorldPartition *this,FWorldPartitionDraw2DContext *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000148a8f24a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(((this->StreamingPolicy).field0_0x0.DebugPtr)->_padding_ + 0x2c8))();
  return (bool)uVar1;
}

// DrawRuntimeHash3D @ 148a8f260

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UWorldPartition::DrawRuntimeHash3D(UWorldPartition *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148a8f26a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((this->StreamingPolicy).field0_0x0.DebugPtr)->_padding_ + 0x2d0))();
  return;
}

// EnableStreamingIn @ 148a8f590

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UWorldPartition::EnableStreamingIn(UWorldPartition *this)

{
  if ((2 < (byte)LogWorldPartition._0_1_) && (this->bStreamingInEnabled != false)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
    this->bStreamingInEnabled = true;
    return;
  }
  this->bStreamingInEnabled = true;
  return;
}

// GetDataLayerManager @ 148a95130

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UDataLayerManager * __thiscall UWorldPartition::GetDataLayerManager(UWorldPartition *this)

{
  return (this->DataLayerManager).field0_0x0.DebugPtr;
}

// GetExternalDataLayerManager @ 148a953a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UExternalDataLayerManager * __thiscall
UWorldPartition::GetExternalDataLayerManager(UWorldPartition *this)

{
  return (this->ExternalDataLayerManager).field0_0x0.DebugPtr;
}

// GetInstanceTransform @ 148a954b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TTransform<double> * __thiscall UWorldPartition::GetInstanceTransform(UWorldPartition *this)

{
  TTransform<double> *pTVar1;
  
  pTVar1 = &(this->InstanceTransform).TypedValue;
  if ((this->InstanceTransform).bIsSet == false) {
    pTVar1 = &UE::Math::TTransform<double>::Identity;
  }
  return pTVar1;
}

// GetIntersectingCells @ 148a95680

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
UWorldPartition::GetIntersectingCells
          (UWorldPartition *this,
          TArray<FWorldPartitionStreamingQuerySource,TSizedDefaultAllocator<32>_> *param_1,
          TArray<IWorldPartitionCell_const_*,TSizedDefaultAllocator<32>_> *param_2)

{
  UWorldPartitionStreamingPolicy *pUVar1;
  undefined1 uVar2;
  
  pUVar1 = (this->StreamingPolicy).field0_0x0.DebugPtr;
  if (pUVar1 != (UWorldPartitionStreamingPolicy *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a9568f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(pUVar1->_padding_ + 0x2b0))();
    return (bool)uVar2;
  }
  return false;
}

// GetOnScreenMessages @ 148a95770

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
UWorldPartition::GetOnScreenMessages
          (UWorldPartition *this,
          TMultiMap<FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
          *param_1)

{
  UWorldPartitionStreamingPolicy *pUVar1;
  
  pUVar1 = (this->StreamingPolicy).field0_0x0.DebugPtr;
  if (pUVar1 != (UWorldPartitionStreamingPolicy *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a9577f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar1->_padding_ + 0x308))();
    return;
  }
  return;
}

// GetPrivateStaticClass @ 148a96540

UClass * __cdecl UWorldPartition::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartition.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartition",
               &Z_Registration_Info_UClass_UWorldPartition.InnerSingleton,
               StaticRegisterNativesUWorldPartition,0x150,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UWorldPartition>,
               InternalVTableHelperCtorCaller<UWorldPartition>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartition.InnerSingleton;
}

// GetResolvingDataLayerManager @ 148a96ed0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UDataLayerManager * __thiscall UWorldPartition::GetResolvingDataLayerManager(UWorldPartition *this)

{
  bool bVar1;
  UWorld *this_00;
  UWorldPartition *pUVar2;
  TObjectPtr<UDataLayerManager>_u_0 TVar3;
  TObjectPtr<UDataLayerManager>_u_0 TVar4;
  
  this_00 = (this->World).field0_0x0.DebugPtr;
  if ((((this_00 != (UWorld *)0x0) ||
       (this_00 = UObject::GetWorld((UObject *)this), this_00 != (UWorld *)0x0)) &&
      (bVar1 = UWorld::IsGameWorld(this_00), !bVar1)) &&
     (pUVar2 = UWorld::GetWorldPartition(this_00), pUVar2 != (UWorldPartition *)0x0)) {
    TVar4.DebugPtr = (UDataLayerManager *)0x0;
    if ((*(uint *)&pUVar2->field_0x8 >> 0x1e & 1) == 0) {
      TVar3.DebugPtr = TVar4.DebugPtr;
      if ((*(uint *)&pUVar2->field_0x8 >> 0x1e & 1) == 0) {
        TVar3.DebugPtr =
             (UDataLayerManager *)
             FWorldPartitionHelpersPrivate::GetWorldPartitionFromObject((UObject *)pUVar2);
      }
      if ((UWorldPartition *)TVar3.DebugPtr != (UWorldPartition *)0x0) {
        TVar4 = (TObjectPtr<UDataLayerManager>_u_0)
                ((TObjectPtr<UDataLayerManager>_u_0 *)(TVar3.DebugPtr + 2))->DebugPtr;
      }
    }
    return TVar4.DebugPtr;
  }
  return (this->DataLayerManager).field0_0x0.DebugPtr;
}

// GetStreamingPerformance @ 148a96fa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

EWorldPartitionStreamingPerformance __thiscall
UWorldPartition::GetStreamingPerformance(UWorldPartition *this)

{
  return ((this->StreamingPolicy).field0_0x0.DebugPtr)->CurrentStreamingPerformance;
}

// GetStreamingSources @ 148a96fc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_> * __thiscall
UWorldPartition::GetStreamingSources(UWorldPartition *this)

{
  bool bVar1;
  UWorld *this_00;
  
  if ((this->StreamingPolicy).field0_0x0.DebugPtr != (UWorldPartitionStreamingPolicy *)0x0) {
    this_00 = (this->World).field0_0x0.DebugPtr;
    if (this_00 == (UWorld *)0x0) {
      this_00 = UObject::GetWorld((UObject *)this);
    }
    bVar1 = UWorld::IsGameWorld(this_00);
    if (bVar1) {
      return &(((this->StreamingPolicy).field0_0x0.DebugPtr)->CurrentState).StreamingSources;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UWorldPartition::GetStreamingSources'::__l2::
             _dynamic_atexit_destructor_for__EmptyStreamingSources__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &EmptyStreamingSources;
}

// GetStreamingStateEpoch @ 148a97070

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall UWorldPartition::GetStreamingStateEpoch(UWorldPartition *this)

{
  uint uVar1;
  UClass *pUVar2;
  UWorld *this_00;
  AWorldDataLayers *pAVar3;
  int iVar4;
  
  pUVar2 = Z_Construct_UClass_UWorld_NoRegister();
  this_00 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar2);
  pAVar3 = UWorld::GetWorldDataLayers(this_00);
  if (pAVar3 == (AWorldDataLayers *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = pAVar3->DataLayersStateEpoch;
  }
  uVar1 = this->StreamingStateEpoch;
  return uVar1 * 0x40 + iVar4 + (uVar1 >> 2) + 0x9e3779b9 ^ uVar1;
}

// GetUpdateStreamingStateEpoch @ 148a97110

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall UWorldPartition::GetUpdateStreamingStateEpoch(UWorldPartition *this)

{
  UWorldPartitionStreamingPolicy *pUVar1;
  
  pUVar1 = (this->StreamingPolicy).field0_0x0.DebugPtr;
  if (pUVar1 != (UWorldPartitionStreamingPolicy *)0x0) {
    return pUVar1->UpdateStreamingStateCounter;
  }
  return 0;
}

// GetWorld @ 148a97140

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall UWorldPartition::GetWorld(UWorldPartition *this)

{
  UWorld *pUVar1;
  
  pUVar1 = (this->World).field0_0x0.DebugPtr;
  if (pUVar1 != (UWorld *)0x0) {
    return pUVar1;
  }
  if (*(longlong **)&this->field_0x20 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001420fdaec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pUVar1 = (UWorld *)(**(code **)(**(longlong **)&this->field_0x20 + 0x180))();
    return pUVar1;
  }
  *(undefined1 *)
   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc99) = 0;
  return (UWorld *)0x0;
}

// GetWorldAssetStreamingCells @ 148a97180

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<UWorldPartitionRuntimeCell_*,TSizedDefaultAllocator<32>_> * __thiscall
UWorldPartition::GetWorldAssetStreamingCells
          (UWorldPartition *this,
          TArray<UWorldPartitionRuntimeCell_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FGuid *param_1)

{
  UWorldPartitionRuntimeHash *pUVar1;
  void **ppvVar2;
  bool bVar3;
  void *local_28;
  undefined8 local_20;
  void *local_18 [2];
  
  pUVar1 = (this->RuntimeHash).field0_0x0.DebugPtr;
  bVar3 = pUVar1 == (UWorldPartitionRuntimeHash *)0x0;
  if (bVar3) {
    local_28 = (void *)0x0;
    ppvVar2 = &local_28;
    local_20 = 0;
  }
  else {
    ppvVar2 = (void **)(**(code **)(pUVar1->_padding_ + 0x350))(pUVar1,local_18);
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AllocatorInstance).Data = *ppvVar2;
  *ppvVar2 = (void *)0x0;
  __return_storage_ptr__->ArrayNum = *(int *)(ppvVar2 + 1);
  __return_storage_ptr__->ArrayMax = *(int *)((longlong)ppvVar2 + 0xc);
  ppvVar2[1] = (void *)0x0;
  if (bVar3) {
    if (local_28 != (void *)0x0) {
      FMemory::Free(local_28);
    }
  }
  if ((!bVar3) && (local_18[0] != (void *)0x0)) {
    FMemory::Free(local_18[0]);
  }
  return __return_storage_ptr__;
}

// Initialize @ 148a98e40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UWorldPartition::Initialize(UWorldPartition *this,UWorld *param_1,TTransform<double> *param_2)

{
  FName FVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  bool bVar20;
  undefined4 extraout_EAX;
  undefined4 uVar21;
  int iVar22;
  ENetMode EVar23;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  UWorldPartitionSubsystem *this_00;
  undefined7 extraout_var_02;
  undefined7 extraout_var_03;
  UClass *pUVar24;
  UWorld *pUVar25;
  UWorld *pUVar26;
  FName *pFVar27;
  UDataLayerManager *this_01;
  UExternalDataLayerManager *this_02;
  undefined4 uVar28;
  uint uVar29;
  int iVar30;
  uint uVar31;
  UWorldPartition *pUVar32;
  longlong *plVar33;
  bool bVar34;
  longlong lVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  undefined1 auStackY_b48 [32];
  undefined1 local_ae8;
  undefined1 local_ae7 [3];
  uint local_ae4;
  FString local_ae0;
  double local_ac8;
  double *local_ac0;
  LARGE_INTEGER local_ab8;
  UObject *local_ab0;
  wchar_t *local_aa8;
  LARGE_INTEGER local_aa0;
  FString local_a98;
  double local_a88;
  double local_a80;
  double local_a78;
  FName local_a70;
  FName local_a68;
  FString local_a60;
  FString local_a50;
  FString local_a40;
  FString local_a30;
  FString local_a20;
  FString local_a10;
  TVector<double>_u_0 local_a00;
  TQuat<double> local_9e8;
  TRotator<double> local_9c8;
  undefined1 local_9a8 [128];
  undefined1 local_928 [128];
  TStringBuilderBase<wchar_t> local_8a8;
  wchar_t local_888 [1024];
  ulonglong local_88 [10];
  
  local_88[0] = __security_cookie.value ^ (ulonglong)auStackY_b48;
  ::FString::FString(&local_ae0,L"WorldPartition initialize");
  QueryPerformanceCounter(&local_ab8);
  dVar15 = __real_4170000000000000;
  local_ac0 = &ScopedTimerTotal_668;
  dVar8 = (double)local_ab8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  local_ac8 = (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) ^
                               __xmm_80000000000000008000000000000000._4_4_,
                               SUB84(dVar8,0) ^ (uint)__xmm_80000000000000008000000000000000);
  ::FString::PrintfImpl(&local_a98,L"%s started...");
  if (3 < (byte)LogWorldPartition._0_1_) {
    UE::Logging::Private::BasicLog<4>
              ((FStaticBasicLogRecord *)&PTR_u__s_151c36178,(FLogCategoryBase *)&LogWorldPartition);
  }
  if (local_a98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a98.Data.AllocatorInstance.Data);
  }
  bVar34 = -1 < CpuChannel->Enabled;
  if (bVar34) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId669,"UWorldPartition::Initialize",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartition.cpp"
               ,0x29d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId669);
  }
  pUVar26 = (this->World).field0_0x0.DebugPtr;
  if (((pUVar26 != (UWorld *)0x0) && (pUVar26 != param_1)) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("!World || (World == InWorld)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartition.cpp"
                          ,0x29f,L""), bVar20)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (this->InitState == Initialized) {
    bVar20 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_8171299272050867552>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartition.cpp"
                        ,0x2a0,"!IsInitialized()");
    if (bVar20) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    goto LAB_148a9982c;
  }
  pUVar32 = this;
  bVar20 = UObjectBaseUtility::IsTemplate
                     ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  uVar28 = SUB84(pUVar32,0);
  uVar21 = (undefined4)CONCAT71(extraout_var,bVar20);
  if (bVar20) goto LAB_148a9982c;
  if (param_1 == (UWorld *)0x0) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("InWorld",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartition.cpp"
                        ,0x2aa,L"");
    if (bVar20) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar28 = 0x51198090;
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("InWorld",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartition.cpp"
                        ,0x28c,L"");
    uVar21 = (undefined4)CONCAT71(extraout_var_00,bVar20);
    if (bVar20) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (this->InitState != Initialized) {
    pUVar26 = param_1;
    bVar20 = UWorld::IsGameWorld(param_1);
    uVar28 = SUB84(pUVar26,0);
    uVar21 = (undefined4)CONCAT71(extraout_var_01,bVar20);
    if (bVar20) {
      pUVar26 = param_1;
      this_00 = UWorld::GetSubsystem<UWorldPartitionSubsystem>(param_1);
      uVar28 = SUB84(pUVar26,0);
      uVar21 = 0;
      if (this_00 != (UWorldPartitionSubsystem *)0x0) {
        bVar20 = UWorldPartitionSubsystem::HasUninitializationPendingStreamingLevels(this_00,this);
        uVar28 = SUB84(this_00,0);
        uVar21 = (undefined4)CONCAT71(extraout_var_02,bVar20);
        if (bVar20) {
          uVar28 = 0x51c365c0;
          bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("CanInitialize(InWorld)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartition.cpp"
                              ,0x2ab,L"");
          uVar21 = (undefined4)CONCAT71(extraout_var_03,bVar20);
          if (bVar20) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
      }
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWorld *)0x0)) {
    pUVar26 = param_1;
    UE::GC::MarkAsReachable((UObject *)param_1);
    uVar28 = SUB84(pUVar26,0);
    uVar21 = extraout_EAX;
  }
  local_a88 = __real_3f1a36e2e0000000;
  uVar19 = _UNK_15061cc8c;
  uVar18 = _UNK_15061cc88;
  uVar17 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar16 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  (this->World).field0_0x0.DebugPtr = param_1;
  dVar8 = (param_2->Translation).ZW.m128d_f64[0] -
          UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
  dVar9 = (param_2->Translation).ZW.m128d_f64[1] -
          UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
  dVar36 = (param_2->Translation).XY.m128d_f64[0] -
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
  dVar38 = (param_2->Translation).XY.m128d_f64[1] -
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
  lVar35 = -(ulonglong)
            (local_a88 <
            (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) & uVar19,SUB84(dVar9,0) & uVar18));
  auVar3._8_4_ = (int)lVar35;
  auVar3._0_8_ = -(ulonglong)
                  (local_a88 <
                  (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) & uVar17,SUB84(dVar8,0) & uVar16
                                  ));
  auVar3._12_4_ = (int)((ulonglong)lVar35 >> 0x20);
  uVar29 = movmskpd(uVar28,auVar3);
  lVar35 = -(ulonglong)
            (local_a88 <
            (double)CONCAT44((uint)((ulonglong)dVar38 >> 0x20) & uVar19,SUB84(dVar38,0) & uVar18));
  auVar10._8_4_ = (int)lVar35;
  auVar10._0_8_ =
       -(ulonglong)
        (local_a88 <
        (double)CONCAT44((uint)((ulonglong)dVar36 >> 0x20) & uVar17,SUB84(dVar36,0) & uVar16));
  auVar10._12_4_ = (int)((ulonglong)lVar35 >> 0x20);
  iVar22 = movmskpd(uVar21,auVar10);
  if ((uVar29 & 0x3fffffff) == 0 && iVar22 == 0) {
    dVar13 = (param_2->Rotation).ZW.m128d_f64[0];
    dVar14 = (param_2->Rotation).ZW.m128d_f64[1];
    dVar36 = (param_2->Rotation).XY.m128d_f64[0];
    dVar38 = (param_2->Rotation).XY.m128d_f64[1];
    local_a80 = local_a88;
    dVar37 = dVar13 - UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
    dVar39 = dVar14 - UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
    dVar13 = dVar13 + UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
    dVar14 = dVar14 + UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
    dVar8 = dVar36 - UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
    dVar9 = dVar38 - UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
    dVar36 = dVar36 + UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
    dVar38 = dVar38 + UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
    lVar35 = -(ulonglong)
              (local_a88 <
              (double)CONCAT44((uint)((ulonglong)dVar39 >> 0x20) & uVar19,SUB84(dVar39,0) & uVar18))
    ;
    auVar4._8_4_ = (int)lVar35;
    auVar4._0_8_ = -(ulonglong)
                    (local_a88 <
                    (double)CONCAT44((uint)((ulonglong)dVar37 >> 0x20) & uVar17,
                                     SUB84(dVar37,0) & uVar16));
    auVar4._12_4_ = (int)((ulonglong)lVar35 >> 0x20);
    iVar30 = movmskpd(0,auVar4);
    lVar35 = -(ulonglong)
              (local_a88 <
              (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) & uVar19,SUB84(dVar9,0) & uVar18));
    auVar5._8_4_ = (int)lVar35;
    auVar5._0_8_ = -(ulonglong)
                    (local_a88 <
                    (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) & uVar17,
                                     SUB84(dVar8,0) & uVar16));
    auVar5._12_4_ = (int)((ulonglong)lVar35 >> 0x20);
    uVar29 = movmskpd(iVar22,auVar5);
    uVar31 = iVar30 << 2 | uVar29;
    if (uVar31 != 0) {
      lVar35 = -(ulonglong)
                (local_a88 <
                (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & uVar19,SUB84(dVar14,0) & uVar18
                                ));
      auVar6._8_4_ = (int)lVar35;
      auVar6._0_8_ = -(ulonglong)
                      (local_a88 <
                      (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) & uVar17,
                                       SUB84(dVar13,0) & uVar16));
      auVar6._12_4_ = (int)((ulonglong)lVar35 >> 0x20);
      uVar31 = movmskpd(uVar31,auVar6);
      lVar35 = -(ulonglong)
                (local_a88 <
                (double)CONCAT44((uint)((ulonglong)dVar38 >> 0x20) & uVar19,SUB84(dVar38,0) & uVar18
                                ));
      auVar12._8_4_ = (int)lVar35;
      auVar12._0_8_ =
           -(ulonglong)
            (local_a88 <
            (double)CONCAT44((uint)((ulonglong)dVar36 >> 0x20) & uVar17,SUB84(dVar36,0) & uVar16));
      auVar12._12_4_ = (int)((ulonglong)lVar35 >> 0x20);
      uVar29 = movmskpd(uVar29,auVar12);
      if ((uVar31 & 0x3fffffff) != 0 || uVar29 != 0) goto LAB_148a991f3;
    }
    dVar8 = (param_2->Scale3D).ZW.m128d_f64[0] -
            UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
    dVar9 = (param_2->Scale3D).ZW.m128d_f64[1] -
            UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
    dVar36 = (param_2->Scale3D).XY.m128d_f64[0] -
             UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
    dVar38 = (param_2->Scale3D).XY.m128d_f64[1] -
             UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
    local_a78 = local_a88;
    lVar35 = -(ulonglong)
              (local_a88 <
              (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) & uVar19,SUB84(dVar9,0) & uVar18));
    auVar7._8_4_ = (int)lVar35;
    auVar7._0_8_ = -(ulonglong)
                    (local_a88 <
                    (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) & uVar17,
                                     SUB84(dVar8,0) & uVar16));
    auVar7._12_4_ = (int)((ulonglong)lVar35 >> 0x20);
    uVar31 = movmskpd(0,auVar7);
    lVar35 = -(ulonglong)
              (local_a88 <
              (double)CONCAT44((uint)((ulonglong)dVar38 >> 0x20) & uVar19,SUB84(dVar38,0) & uVar18))
    ;
    auVar11._8_4_ = (int)lVar35;
    auVar11._0_8_ =
         -(ulonglong)
          (local_a88 <
          (double)CONCAT44((uint)((ulonglong)dVar36 >> 0x20) & uVar17,SUB84(dVar36,0) & uVar16));
    auVar11._12_4_ = (int)((ulonglong)lVar35 >> 0x20);
    iVar22 = movmskpd(uVar29,auVar11);
    if ((uVar31 & 0x3fffffff) != 0 || iVar22 != 0) goto LAB_148a991f3;
  }
  else {
LAB_148a991f3:
    if ((TOptional<UE::Math::TTransform<double>_> *)param_2 != &this->InstanceTransform) {
      dVar8 = (param_2->Rotation).XY.m128d_f64[1];
      (this->InstanceTransform).TypedValue.Rotation.XY.m128d_f64[0] =
           (param_2->Rotation).XY.m128d_f64[0];
      (this->InstanceTransform).TypedValue.Rotation.XY.m128d_f64[1] = dVar8;
      dVar8 = (param_2->Rotation).ZW.m128d_f64[1];
      (this->InstanceTransform).TypedValue.Rotation.ZW.m128d_f64[0] =
           (param_2->Rotation).ZW.m128d_f64[0];
      (this->InstanceTransform).TypedValue.Rotation.ZW.m128d_f64[1] = dVar8;
      dVar8 = (param_2->Translation).XY.m128d_f64[1];
      (this->InstanceTransform).TypedValue.Translation.XY.m128d_f64[0] =
           (param_2->Translation).XY.m128d_f64[0];
      (this->InstanceTransform).TypedValue.Translation.XY.m128d_f64[1] = dVar8;
      dVar8 = (param_2->Translation).ZW.m128d_f64[1];
      (this->InstanceTransform).TypedValue.Translation.ZW.m128d_f64[0] =
           (param_2->Translation).ZW.m128d_f64[0];
      (this->InstanceTransform).TypedValue.Translation.ZW.m128d_f64[1] = dVar8;
      dVar8 = (param_2->Scale3D).XY.m128d_f64[1];
      (this->InstanceTransform).TypedValue.Scale3D.XY.m128d_f64[0] =
           (param_2->Scale3D).XY.m128d_f64[0];
      (this->InstanceTransform).TypedValue.Scale3D.XY.m128d_f64[1] = dVar8;
      dVar8 = (param_2->Scale3D).ZW.m128d_f64[1];
      (this->InstanceTransform).TypedValue.Scale3D.ZW.m128d_f64[0] =
           (param_2->Scale3D).ZW.m128d_f64[0];
      (this->InstanceTransform).TypedValue.Scale3D.ZW.m128d_f64[1] = dVar8;
      (this->InstanceTransform).bIsSet = true;
    }
  }
  if ((this->InitState != Uninitialized) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("InitState == EWorldPartitionInitState::Uninitialized",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartition.cpp"
                          ,0x2b3,L""), bVar20)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this->InitState = Initializing;
  pUVar24 = Z_Construct_UClass_UWorld_NoRegister();
  local_ab0 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar24);
  if ((local_ab0 == (UObject *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("OuterWorld",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartition.cpp"
                          ,0x2b7,L""), bVar20)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  RegisterDelegates(this);
  if (((this->World).field0_0x0.DebugPtr == (UWorld *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("World",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartition.cpp"
                          ,0x40c,L""), bVar20)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pUVar24 = Z_Construct_UClass_UWorld_NoRegister();
  pUVar25 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar24);
  pUVar26 = (this->World).field0_0x0.DebugPtr;
  if (pUVar26 == (UWorld *)0x0) {
    bVar20 = pUVar25 == (UWorld *)0x0;
  }
  else {
    bVar20 = pUVar26 == pUVar25;
  }
  if (bVar20) {
    AWorldPartitionReplay::Initialize(pUVar26);
  }
  UWorld::IsGameWorld((this->World).field0_0x0.DebugPtr);
  if (4 < (byte)LogWorldPartition._0_1_) {
    local_9e8.X = (param_2->Rotation).XY.m128d_f64[0];
    local_9e8.Y = (param_2->Rotation).XY.m128d_f64[1];
    local_9e8.Z = (param_2->Rotation).ZW.m128d_f64[0];
    local_9e8.W = (param_2->Rotation).ZW.m128d_f64[1];
    UE::Math::TQuat<double>::Rotator(&local_9e8,&local_9c8);
    UE::Math::TRotator<double>::ToCompactString(&local_9c8,&local_a40);
    local_a00._s_0.X = (param_2->Translation).XY.m128d_f64[0];
    local_a00._s_0.Y = (param_2->Translation).XY.m128d_f64[1];
    local_a00._s_0.Z = (param_2->Translation).ZW.m128d_f64[0];
    UE::Math::TVector<double>::ToCompactString((TVector<double> *)&local_a00._s_0,&local_a50);
    bVar20 = IsMainWorldPartition(this);
    local_ae4 = (uint)bVar20;
    local_aa8 = ::LexToString((uint)(((this->World).field0_0x0.DebugPtr)->WorldType).Value);
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)local_ab0,&local_a60,(UObject *)0x0);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
    if (local_a60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a60.Data.AllocatorInstance.Data);
    }
    if (local_a50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a50.Data.AllocatorInstance.Data);
    }
    if (local_a40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a40.Data.AllocatorInstance.Data);
    }
  }
  bVar20 = UWorld::IsGameWorld((this->World).field0_0x0.DebugPtr);
  if ((bVar20) && (4 < (byte)LogWorldPartition._0_1_)) {
    if ((this->bCachedUseMakingInvisibleTransactionRequests).bIsSet == false) {
      pUVar26 = (this->World).field0_0x0.DebugPtr;
      if ((((pUVar26 == (UWorld *)0x0) &&
           (pUVar26 = UObject::GetWorld((UObject *)this), pUVar26 == (UWorld *)0x0)) ||
          (bVar20 = UWorld::IsGameWorld(pUVar26), !bVar20)) ||
         (bUseMakingInvisibleTransactionRequests == false)) {
        bVar20 = false;
      }
      else {
        bVar20 = true;
      }
      if ((TOptional<bool> *)&local_ae8 != &this->bCachedUseMakingInvisibleTransactionRequests) {
        (this->bCachedUseMakingInvisibleTransactionRequests).TypedValue = bVar20;
        (this->bCachedUseMakingInvisibleTransactionRequests).bIsSet = true;
      }
    }
    if ((this->bCachedUseMakingVisibleTransactionRequests).bIsSet == false) {
      pUVar26 = (this->World).field0_0x0.DebugPtr;
      if (((pUVar26 == (UWorld *)0x0) &&
          (pUVar26 = UObject::GetWorld((UObject *)this), pUVar26 == (UWorld *)0x0)) ||
         ((bVar20 = UWorld::IsGameWorld(pUVar26), !bVar20 ||
          (bUseMakingVisibleTransactionRequests == false)))) {
        bVar20 = false;
      }
      else {
        bVar20 = true;
      }
      if ((TOptional<bool> *)local_ae7 != &this->bCachedUseMakingVisibleTransactionRequests) {
        (this->bCachedUseMakingVisibleTransactionRequests).TypedValue = bVar20;
        (this->bCachedUseMakingVisibleTransactionRequests).bIsSet = true;
      }
    }
    IsServerStreamingOutEnabled(this);
    IsServerStreamingEnabled(this);
    bVar20 = IsServer(this);
    local_ae4 = (uint)bVar20;
    EVar23 = UWorld::InternalGetNetMode((this->World).field0_0x0.DebugPtr);
    ::ToString(&local_a30,EVar23);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
    if (local_a30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a30.Data.AllocatorInstance.Data);
    }
  }
  if (((this->DataLayerManager).field0_0x0.DebugPtr != (UDataLayerManager *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("!DataLayerManager",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartition.cpp"
                          ,0x313,L""), bVar20)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((this->ExternalDataLayerManager).field0_0x0.DebugPtr != (UExternalDataLayerManager *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("!ExternalDataLayerManager",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartition.cpp"
                          ,0x314,L""), bVar20)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((this->DataLayerManager).field0_0x0.DebugPtr == (UDataLayerManager *)0x0) {
    pFVar27 = ::FName::FName(&local_a70,L"DataLayerManager");
    FVar1 = *pFVar27;
    if (FVar1 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar24 = Z_Construct_UClass_UDataLayerManager_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_9a8,pUVar24);
    local_9a8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_9a8._56_8_ = (UPackage *)0x0;
    local_9a8._24_4_ = RF_Transient;
    local_9a8._40_8_ = (UObject *)0x0;
    local_9a8[0x20] = false;
    local_9a8._8_8_ = this;
    local_9a8._16_8_ = FVar1;
    this_01 = (UDataLayerManager *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_9a8);
    if (local_9a8._64_8_ != 0) {
      plVar33 = (longlong *)(local_9a8 + 0x50);
      if ((longlong *)local_9a8._104_8_ != (longlong *)0x0) {
        plVar33 = (longlong *)local_9a8._104_8_;
      }
      (**(code **)(*plVar33 + 0x10))(plVar33);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_01 != (UDataLayerManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_01);
    }
    (this->DataLayerManager).field0_0x0.DebugPtr = this_01;
    UDataLayerManager::Initialize(this_01);
  }
  this_02 = (this->ExternalDataLayerManager).field0_0x0.DebugPtr;
  if (this_02 == (UExternalDataLayerManager *)0x0) {
    pFVar27 = ::FName::FName(&local_a68,L"ExternalDataLayerManager");
    FVar1 = *pFVar27;
    if (FVar1 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar24 = Z_Construct_UClass_UExternalDataLayerManager_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_928,pUVar24);
    local_928._48_8_ = (FObjectInstancingGraph *)0x0;
    local_928._56_8_ = (UPackage *)0x0;
    local_928._24_4_ = RF_Transient|RF_Transactional;
    local_928._40_8_ = (UObject *)0x0;
    local_928[0x20] = false;
    local_928._8_8_ = this;
    local_928._16_8_ = FVar1;
    this_02 = (UExternalDataLayerManager *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_928);
    if (local_928._64_8_ != 0) {
      plVar33 = (longlong *)(local_928 + 0x50);
      if ((longlong *)local_928._104_8_ != (longlong *)0x0) {
        plVar33 = (longlong *)local_928._104_8_;
      }
      (**(code **)(*plVar33 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_02 != (UExternalDataLayerManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_02);
    }
    (this->ExternalDataLayerManager).field0_0x0.DebugPtr = this_02;
  }
  UExternalDataLayerManager::Initialize(this_02);
  pUVar26 = (this->World).field0_0x0.DebugPtr;
  this->InitState = Initialized;
  FWorldPartitionEvents::BroadcastWorldPartitionInitialized(pUVar26,this);
LAB_148a9982c:
  if (bVar34) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  QueryPerformanceCounter(&local_aa0);
  local_ac8 = local_ac8 +
              (double)local_aa0.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar15;
  *local_ac0 = local_ac8 + *local_ac0;
  local_8a8.Base = local_888;
  local_8a8.CurPos = local_888;
  local_8a8.End = (wchar_t *)local_88;
  local_8a8.bIsDynamic = false;
  local_8a8.bIsExternal = false;
  FGenericPlatformTime::PrettyTime(&local_a20,local_ac8);
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_8a8,L"%s took %s");
  if (local_a20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a20.Data.AllocatorInstance.Data);
  }
  if (local_ac8 < *local_ac0) {
    FGenericPlatformTime::PrettyTime(&local_a10,*local_ac0);
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_8a8,L" (total: %s)");
    if (local_a10.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a10.Data.AllocatorInstance.Data);
    }
  }
  if (local_8a8.End < local_8a8.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_8a8,1);
  }
  *local_8a8.CurPos = L'\0';
  if (3 < (byte)LogWorldPartition._0_1_) {
    UE::Logging::Private::BasicLog<4>
              ((FStaticBasicLogRecord *)&PTR_u__s_151c36178,(FLogCategoryBase *)&LogWorldPartition);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_8a8);
  if (local_ae0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ae0.Data.AllocatorInstance.Data);
  }
  return;
}

// InjectExternalStreamingObject @ 148a99d20

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
UWorldPartition::InjectExternalStreamingObject
          (UWorldPartition *this,URuntimeHashExternalStreamingObjectBase *param_1)

{
  int iVar1;
  UWorldPartitionStreamingPolicy *pUVar2;
  UWorldPartitionRuntimeHash *pUVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  UWorld *pUVar8;
  UWorldPartitionHLODRuntimeSubsystem *pUVar9;
  UClass *pUVar10;
  TTuple<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData>
  *pTVar11;
  UWorldPartition *local_res8 [2];
  undefined1 *local_res18;
  UWorldPartition *local_res20;
  code *local_38;
  undefined1 **local_30;
  
  pUVar2 = (this->StreamingPolicy).field0_0x0.DebugPtr;
  if (pUVar2 != (UWorldPartitionStreamingPolicy *)0x0) {
    UWorldPartitionStreamingPolicy::OnPreChangeStreamingContent(pUVar2);
  }
  pUVar3 = (this->RuntimeHash).field0_0x0.DebugPtr;
  cVar5 = (**(code **)(pUVar3->_padding_ + 0x2e0))(pUVar3,param_1);
  if (cVar5 == '\0') {
    return false;
  }
  pUVar2 = (this->StreamingPolicy).field0_0x0.DebugPtr;
  if (pUVar2 != (UWorldPartitionStreamingPolicy *)0x0) {
    (**(code **)(pUVar2->_padding_ + 800))(pUVar2,param_1);
  }
  pUVar8 = (this->World).field0_0x0.DebugPtr;
  if (pUVar8 == (UWorld *)0x0) {
    pUVar8 = UObject::GetWorld((UObject *)this);
  }
  pUVar9 = UWorld::GetSubsystem<UWorldPartitionHLODRuntimeSubsystem>(pUVar8);
  pUVar8 = (UWorld *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&param_1->OuterWorld);
  if (pUVar8 != (UWorld *)0x0) {
    pUVar10 = Z_Construct_UClass_UWorld_NoRegister();
    iVar1 = (int)pUVar10->_padding_;
    if ((iVar1 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar10->_padding_)) goto LAB_148a99dd2;
  }
  pUVar8 = (UWorld *)0x0;
LAB_148a99dd2:
  local_res8[0] = UWorld::GetWorldPartition(pUVar8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res8[0] != (UWorldPartition *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res8[0] != (UWorldPartition *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  pTVar11 = TSet<TTuple<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData>,TDefaultMapHashableKeyFuncs<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData>,TDefaultMapHashableKeyFuncs<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData,0>,FDefaultSetAllocator>
                    *)&pUVar9->WorldPartitionsHLODRuntimeData,
                   (TObjectPtr<UWorldPartition_const_>)local_res8);
  if ((pTVar11 !=
       (TTuple<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData>
        *)0x0) && (&pTVar11->field_0x8 != (undefined1 *)0x0)) {
    local_30 = &local_res18;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`UWorldPartitionHLODRuntimeSubsystem::OnExternalStreamingObjectInjected'::__l5::<lambda_1>,void,UWorldPartitionRuntimeCell_&>
               ::Call;
    local_res18 = &pTVar11->field_0x8;
    URuntimeHashExternalStreamingObjectBase::ForEachStreamingCells
              (param_1,(TFunctionRef<void___cdecl(UWorldPartitionRuntimeCell_&)> *)&local_38);
  }
  this->StreamingStateEpoch = this->StreamingStateEpoch + 1;
  if ((((param_1->TargetInjectedWorldPartition).WeakPtr.ObjectIndex != 0) ||
      ((param_1->TargetInjectedWorldPartition).WeakPtr.ObjectSerialNumber != 0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InExternalStreamingObject->TargetInjectedWorldPartition.IsExplicitlyNull()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartition.cpp"
                         ,0x76d,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  local_res20 = this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=
            (&(param_1->TargetInjectedWorldPartition).WeakPtr,(FObjectPtr)&local_res20);
  return (bool)cVar5;
}

// IsExternalStreamingObjectInjected @ 148a9a110

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
UWorldPartition::IsExternalStreamingObjectInjected
          (UWorldPartition *this,URuntimeHashExternalStreamingObjectBase *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000148a9a117. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(((this->RuntimeHash).field0_0x0.DebugPtr)->_padding_ + 0x2d8))();
  return (bool)uVar1;
}

// IsInitialized @ 148a9a140

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UWorldPartition::IsInitialized(UWorldPartition *this)

{
  return this->InitState == Initialized;
}

// IsMainWorldPartition @ 148a9a190

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UWorldPartition::IsMainWorldPartition(UWorldPartition *this)

{
  UWorld *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UClass *pUVar5;
  UWorld *pUVar6;
  
  if ((this->World).field0_0x0.DebugPtr == (UWorld *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("World",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartition.cpp"
                       ,0x40c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pUVar5 = Z_Construct_UClass_UWorld_NoRegister();
  pUVar6 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar5);
  pUVar1 = (this->World).field0_0x0.DebugPtr;
  if (pUVar1 == (UWorld *)0x0) {
    return pUVar6 == (UWorld *)0x0;
  }
  return pUVar1 == pUVar6;
}

// IsServer @ 148a9a2f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UWorldPartition::IsServer(UWorldPartition *this)

{
  ENetMode EVar1;
  UWorld *this_00;
  
  this_00 = (this->World).field0_0x0.DebugPtr;
  if (this_00 == (UWorld *)0x0) {
    this_00 = UObject::GetWorld((UObject *)this);
    if (this_00 == (UWorld *)0x0) {
      return false;
    }
  }
  EVar1 = UWorld::InternalGetNetMode(this_00);
  return EVar1 - NM_DedicatedServer < 2;
}

// IsServerStreamingEnabled @ 148a9a330

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UWorldPartition::IsServerStreamingEnabled(UWorldPartition *this)

{
  bool bVar1;
  bool bVar2;
  UWorld *this_00;
  UWorldPartition *this_01;
  undefined1 local_18 [16];
  
  if ((this->bCachedIsServerStreamingEnabled).bIsSet == false) {
    this_00 = (this->World).field0_0x0.DebugPtr;
    if (((this_00 != (UWorld *)0x0) ||
        (this_00 = UObject::GetWorld((UObject *)this), bVar2 = false, this_00 != (UWorld *)0x0)) &&
       (bVar1 = UWorld::IsGameWorld(this_00), bVar2 = false, bVar1)) {
      if (this->ServerStreamingMode == ProjectDefault) {
        this_01 = UWorld::GetWorldPartition(this_00);
        if ((this_01 == (UWorldPartition *)0x0) || (this == this_01)) {
          if (GlobalEnableServerStreaming == 1) {
            bVar2 = true;
          }
        }
        else {
          bVar2 = IsServerStreamingEnabled(this_01);
        }
      }
      else {
        bVar2 = false;
        if (this->ServerStreamingMode == Enabled) {
          bVar2 = true;
        }
      }
    }
    if ((TOptional<bool> *)local_18 != &this->bCachedIsServerStreamingEnabled) {
      (this->bCachedIsServerStreamingEnabled).TypedValue = bVar2;
      (this->bCachedIsServerStreamingEnabled).bIsSet = true;
    }
  }
  if ((this->bCachedIsServerStreamingEnabled).bIsSet == false) {
    return false;
  }
  return (this->bCachedIsServerStreamingEnabled).TypedValue;
}

// IsServerStreamingOutEnabled @ 148a9a400

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UWorldPartition::IsServerStreamingOutEnabled(UWorldPartition *this)

{
  bool bVar1;
  bool bVar2;
  UWorld *this_00;
  UWorldPartition *this_01;
  undefined1 local_18 [16];
  
  if ((this->bCachedIsServerStreamingOutEnabled).bIsSet == false) {
    this_00 = (this->World).field0_0x0.DebugPtr;
    bVar2 = false;
    if ((((this_00 != (UWorld *)0x0) ||
         (this_00 = UObject::GetWorld((UObject *)this), this_00 != (UWorld *)0x0)) &&
        (bVar1 = UWorld::IsGameWorld(this_00), bVar1)) &&
       (bVar1 = IsServerStreamingEnabled(this), bVar1)) {
      if (this->ServerStreamingMode == ProjectDefault) {
        this_01 = UWorld::GetWorldPartition(this_00);
        bVar2 = bGlobalEnableServerStreamingOut;
        if ((this_01 != (UWorldPartition *)0x0) && (this != this_01)) {
          bVar2 = IsServerStreamingOutEnabled(this_01);
        }
      }
      else {
        bVar2 = this->ServerStreamingOutMode == Enabled;
      }
    }
    if ((TOptional<bool> *)local_18 != &this->bCachedIsServerStreamingOutEnabled) {
      (this->bCachedIsServerStreamingOutEnabled).TypedValue = bVar2;
      (this->bCachedIsServerStreamingOutEnabled).bIsSet = true;
    }
  }
  if ((this->bCachedIsServerStreamingOutEnabled).bIsSet == false) {
    return false;
  }
  return (this->bCachedIsServerStreamingOutEnabled).TypedValue;
}

// IsSimulating @ 148a9a4d0

bool __cdecl UWorldPartition::IsSimulating(bool param_1)

{
  return false;
}

// IsStreamingCompleted @ 148a9a630

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
UWorldPartition::IsStreamingCompleted
          (UWorldPartition *this,
          TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_> *param_1)

{
  UWorldPartitionStreamingPolicy *pUVar1;
  bool bVar2;
  undefined1 uVar3;
  UWorld *this_00;
  
  this_00 = (this->World).field0_0x0.DebugPtr;
  if (this_00 == (UWorld *)0x0) {
    this_00 = UObject::GetWorld((UObject *)this);
  }
  bVar2 = UWorld::IsGameWorld(this_00);
  if ((bVar2) &&
     (pUVar1 = (this->StreamingPolicy).field0_0x0.DebugPtr,
     pUVar1 != (UWorldPartitionStreamingPolicy *)0x0)) {
    this->StreamingStateEpoch = this->StreamingStateEpoch + 1;
                    /* WARNING: Could not recover jumptable at 0x000148a9a67c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(pUVar1->_padding_ + 0x2e8))(pUVar1,param_1);
    return (bool)uVar3;
  }
  return true;
}

// IsStreamingCompleted @ 148a9a6a0

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
UWorldPartition::IsStreamingCompleted
          (UWorldPartition *this,EWorldPartitionRuntimeCellState param_1,
          TArray<FWorldPartitionStreamingQuerySource,TSizedDefaultAllocator<32>_> *param_2,
          bool param_3)

{
  UWorldPartitionStreamingPolicy *pUVar1;
  bool bVar2;
  undefined1 uVar3;
  UWorld *this_00;
  
  this_00 = (this->World).field0_0x0.DebugPtr;
  if (this_00 == (UWorld *)0x0) {
    this_00 = UObject::GetWorld((UObject *)this);
  }
  bVar2 = UWorld::IsGameWorld(this_00);
  if ((bVar2) &&
     (pUVar1 = (this->StreamingPolicy).field0_0x0.DebugPtr,
     pUVar1 != (UWorldPartitionStreamingPolicy *)0x0)) {
    this->StreamingStateEpoch = this->StreamingStateEpoch + 1;
    uVar3 = (**(code **)(pUVar1->_padding_ + 0x2e0))(pUVar1,param_1,param_2,param_3);
  }
  else {
    uVar3 = 1;
  }
  return (bool)uVar3;
}

// IsStreamingEnabled @ 148a9a720

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UWorldPartition::IsStreamingEnabled(UWorldPartition *this)

{
  UWorld *this_00;
  char cVar1;
  AWorldSettings *pAVar2;
  
  if ((this->bEnableStreaming != false) &&
     (this_00 = (this->World).field0_0x0.DebugPtr, this_00 != (UWorld *)0x0)) {
    pAVar2 = UWorld::GetWorldSettings(this_00,false,true);
    cVar1 = (**(code **)(pAVar2->_padding_ + 0x780))(pAVar2);
    if (cVar1 != '\0') {
      return true;
    }
  }
  return false;
}

// IsStreamingInEnabled @ 148a9a770

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UWorldPartition::IsStreamingInEnabled(UWorldPartition *this)

{
  bool bVar1;
  ENetMode EVar2;
  UWorld *this_00;
  
  this_00 = (this->World).field0_0x0.DebugPtr;
  if ((((this_00 != (UWorld *)0x0) ||
       (this_00 = UObject::GetWorld((UObject *)this), this_00 != (UWorld *)0x0)) &&
      (EVar2 = UWorld::InternalGetNetMode(this_00), EVar2 - NM_DedicatedServer < 2)) &&
     (bVar1 = IsServerStreamingEnabled(this), !bVar1)) {
    return true;
  }
  return this->bStreamingInEnabled;
}

// OnBeginPlay @ 148a9ac60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UWorldPartition::OnBeginPlay(UWorldPartition *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148a9ac67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((this->RuntimeHash).field0_0x0.DebugPtr)->_padding_ + 0x2b0))();
  return;
}

// OnCellHidden @ 148a9b940

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
UWorldPartition::OnCellHidden(UWorldPartition *this,UWorldPartitionRuntimeCell *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  IWorldPartitionHLODObject *pIVar3;
  UWorldPartitionStreamingPolicy *pUVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  UWorld *pUVar8;
  AWorldSettings *pAVar9;
  UWorldPartitionHLODRuntimeSubsystem *this_00;
  FCellData *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  FString local_48;
  void *local_38 [2];
  
  if ((this->InitState != Initialized) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartition.cpp"
                         ,0x7c6,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pUVar8 = (this->World).field0_0x0.DebugPtr;
  if (pUVar8 == (UWorld *)0x0) {
    pUVar8 = UObject::GetWorld((UObject *)this);
  }
  bVar6 = UWorld::IsGameWorld(pUVar8);
  if (bVar6) {
    if ((this->bEnableStreaming != false) &&
       (pUVar8 = (this->World).field0_0x0.DebugPtr, pUVar8 != (UWorld *)0x0)) {
      pAVar9 = UWorld::GetWorldSettings(pUVar8,false,true);
      cVar7 = (**(code **)(pAVar9->_padding_ + 0x780))(pAVar9);
      if (cVar7 != '\0') {
        pUVar8 = (this->World).field0_0x0.DebugPtr;
        if (pUVar8 == (UWorld *)0x0) {
          pUVar8 = UObject::GetWorld((UObject *)this);
        }
        this_00 = UWorld::GetSubsystem<UWorldPartitionHLODRuntimeSubsystem>(pUVar8);
        pFVar10 = UWorldPartitionHLODRuntimeSubsystem::GetCellData(this_00,param_1);
        if ((pFVar10 != (FCellData *)0x0) &&
           (iVar2 = (pFVar10->LoadedHLODs).ArrayNum, pFVar10->bIsCellVisible = false, iVar2 != 0)) {
          if (5 < (byte)LogHLODRuntimeSubsystem._0_1_) {
            local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_48.Data.ArrayNum = 0;
            local_48.Data.ArrayMax = 0;
            FGuid::AppendString(&param_1->CellGuid,&local_48,Digits);
            UE::Logging::Private::BasicLog<6>
                      (&::LOG_Static,(FLogCategoryBase *)&LogHLODRuntimeSubsystem);
            if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_48.Data.AllocatorInstance.Data);
            }
          }
          pFVar11 = (pFVar10->LoadedHLODs).AllocatorInstance.Data;
          iVar2 = (pFVar10->LoadedHLODs).ArrayNum;
          pFVar1 = pFVar11 + (longlong)iVar2 * 8;
          while( true ) {
            if ((pFVar10->LoadedHLODs).ArrayNum != iVar2) {
              `TCheckedPointerIterator<IWorldPartitionHLODObject_*,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_res8);
            }
            if (pFVar11 == pFVar1) break;
            pIVar3 = *(IWorldPartitionHLODObject **)pFVar11;
            if (5 < (byte)LogHLODRuntimeSubsystem._0_1_) {
              (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3,local_38);
              UE::Logging::Private::BasicLog<6>
                        (&::LOG_Static,(FLogCategoryBase *)&LogHLODRuntimeSubsystem);
              if (local_38[0] != (void *)0x0) {
                FMemory::Free(local_38[0]);
              }
            }
            (**(code **)((longlong)*pIVar3 + 0x28))
                      (pIVar3,UWorldPartitionHLODRuntimeSubsystem::WorldPartitionHLODEnabled);
            UWorldPartitionHLODRuntimeSubsystem::RemoveHLODObjectFromWarmup(this_00,pIVar3);
            pFVar11 = pFVar11 + 8;
          }
        }
      }
    }
    pUVar4 = (this->StreamingPolicy).field0_0x0.DebugPtr;
    (**(code **)(pUVar4->_padding_ + 0x2f8))(pUVar4,param_1);
  }
  return;
}

// OnCellShown @ 148a9bcc0

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
UWorldPartition::OnCellShown(UWorldPartition *this,UWorldPartitionRuntimeCell *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  UWorldPartitionStreamingPolicy *pUVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  UWorld *pUVar8;
  AWorldSettings *pAVar9;
  UWorldPartitionHLODRuntimeSubsystem *this_00;
  FCellData *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  FString local_48;
  void *local_38 [2];
  
  if ((this->InitState != Initialized) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartition.cpp"
                         ,0x7b8,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pUVar8 = (this->World).field0_0x0.DebugPtr;
  if (pUVar8 == (UWorld *)0x0) {
    pUVar8 = UObject::GetWorld((UObject *)this);
  }
  bVar6 = UWorld::IsGameWorld(pUVar8);
  if (bVar6) {
    if ((this->bEnableStreaming != false) &&
       (pUVar8 = (this->World).field0_0x0.DebugPtr, pUVar8 != (UWorld *)0x0)) {
      pAVar9 = UWorld::GetWorldSettings(pUVar8,false,true);
      cVar7 = (**(code **)(pAVar9->_padding_ + 0x780))(pAVar9);
      if (cVar7 != '\0') {
        pUVar8 = (this->World).field0_0x0.DebugPtr;
        if (pUVar8 == (UWorld *)0x0) {
          pUVar8 = UObject::GetWorld((UObject *)this);
        }
        this_00 = UWorld::GetSubsystem<UWorldPartitionHLODRuntimeSubsystem>(pUVar8);
        pFVar10 = UWorldPartitionHLODRuntimeSubsystem::GetCellData(this_00,param_1);
        if ((pFVar10 != (FCellData *)0x0) &&
           (iVar2 = (pFVar10->LoadedHLODs).ArrayNum, pFVar10->bIsCellVisible = true, iVar2 != 0)) {
          if (5 < (byte)LogHLODRuntimeSubsystem._0_1_) {
            local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_48.Data.ArrayNum = 0;
            local_48.Data.ArrayMax = 0;
            FGuid::AppendString(&param_1->CellGuid,&local_48,Digits);
            UE::Logging::Private::BasicLog<6>
                      (&::LOG_Static,(FLogCategoryBase *)&LogHLODRuntimeSubsystem);
            if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_48.Data.AllocatorInstance.Data);
            }
          }
          pFVar11 = (pFVar10->LoadedHLODs).AllocatorInstance.Data;
          iVar2 = (pFVar10->LoadedHLODs).ArrayNum;
          pFVar1 = pFVar11 + (longlong)iVar2 * 8;
          while( true ) {
            if ((pFVar10->LoadedHLODs).ArrayNum != iVar2) {
              `TCheckedPointerIterator<IWorldPartitionHLODObject_*,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_res8);
            }
            if (pFVar11 == pFVar1) break;
            plVar3 = *(longlong **)pFVar11;
            if (5 < (byte)LogHLODRuntimeSubsystem._0_1_) {
              (**(code **)(*plVar3 + 0x10))(plVar3,local_38);
              UE::Logging::Private::BasicLog<6>
                        (&::LOG_Static,(FLogCategoryBase *)&LogHLODRuntimeSubsystem);
              if (local_38[0] != (void *)0x0) {
                FMemory::Free(local_38[0]);
              }
            }
            (**(code **)(*plVar3 + 0x28))(plVar3,0);
            pFVar11 = pFVar11 + 8;
          }
        }
      }
    }
    pUVar4 = (this->StreamingPolicy).field0_0x0.DebugPtr;
    (**(code **)(pUVar4->_padding_ + 0x2f0))(pUVar4,param_1);
  }
  return;
}

// OnCleanupLevel @ 148a9c010

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UWorldPartition::OnCleanupLevel(UWorldPartition *this)

{
  UWorld *pUVar1;
  UExternalDataLayerManager *this_00;
  UDataLayerManager *this_01;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  UWorld *pUVar6;
  UWorldPartitionSubsystem *pUVar7;
  bool bVar8;
  FString FStack_18;
  
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId881,"UWorldPartition::Uninitialize",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartition.cpp"
               ,0x371);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId881);
  }
  if (this->InitState == Initialized) {
    if (((this->World).field0_0x0.DebugPtr == (UWorld *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("World",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartition.cpp"
                           ,0x375,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (4 < (byte)LogWorldPartition._0_1_) {
      pUVar4 = Z_Construct_UClass_UWorld_NoRegister();
      pUVar5 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar4);
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar5,&FStack_18,(UObject *)0x0);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
      if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
      }
    }
    this->InitState = Uninitializing;
    bVar3 = IsMainWorldPartition(this);
    if (bVar3) {
      AWorldPartitionReplay::Uninitialize((this->World).field0_0x0.DebugPtr);
    }
    if (((this->World).field0_0x0.DebugPtr == (UWorld *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("World",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartition.cpp"
                           ,0x45f,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = UWorld::IsGameWorld((this->World).field0_0x0.DebugPtr);
    if (bVar3) {
      if (((this->World).field0_0x0.DebugPtr == (UWorld *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("World",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartition.cpp"
                             ,0x40c,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pUVar4 = Z_Construct_UClass_UWorld_NoRegister();
      pUVar6 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar4);
      pUVar1 = (this->World).field0_0x0.DebugPtr;
      if (pUVar1 == (UWorld *)0x0) {
        bVar3 = pUVar6 == (UWorld *)0x0;
      }
      else {
        bVar3 = pUVar1 == pUVar6;
      }
      if (bVar3) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &pUVar1->OnWorldPreBeginPlay,this);
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &((this->World).field0_0x0.DebugPtr)->OnWorldMatchStarting,this);
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &FCoreDelegates::OnGetOnScreenMessages,this);
      }
      pUVar7 = UWorld::GetSubsystem<UWorldPartitionSubsystem>((this->World).field0_0x0.DebugPtr);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &pUVar7->StreamingStateUpdated,this);
    }
    pUVar4 = Z_Construct_UClass_ULevel_NoRegister();
    pUVar5 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar4);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar5[0xf].field_0x18,this);
    bVar3 = UWorld::IsGameWorld((this->World).field0_0x0.DebugPtr);
    if (bVar3) {
      UWorldPartitionSubsystem::UpdateStreamingStateInternal((this->World).field0_0x0.DebugPtr,this)
      ;
    }
    this_00 = (this->ExternalDataLayerManager).field0_0x0.DebugPtr;
    if (this_00 != (UExternalDataLayerManager *)0x0) {
      UExternalDataLayerManager::DeInitialize(this_00);
      (this->ExternalDataLayerManager).field0_0x0.DebugPtr = (UExternalDataLayerManager *)0x0;
    }
    this_01 = (this->DataLayerManager).field0_0x0.DebugPtr;
    if (this_01 != (UDataLayerManager *)0x0) {
      UDataLayerManager::DeInitialize(this_01);
      (this->DataLayerManager).field0_0x0.DebugPtr = (UDataLayerManager *)0x0;
    }
    pUVar1 = (this->World).field0_0x0.DebugPtr;
    this->InitState = Uninitialized;
    FWorldPartitionEvents::BroadcastWorldPartitionUninitialized(pUVar1,this);
    (this->World).field0_0x0.DebugPtr = (UWorld *)0x0;
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  return;
}

// OnPreChangeStreamingContent @ 148a9c650

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UWorldPartition::OnPreChangeStreamingContent(UWorldPartition *this)

{
  int *piVar1;
  UWorldPartitionStreamingPolicy *pUVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<_private:_bool___cdecl_UWorldPartitionStreamingPolicy::WaitForAsyncUpdateStreamingState(void)_::_15_::FStat_STAT_WorldPartitionStreamingPolicy_WaitForAsyncUpdateStreamingState>
  FVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  FColor_u_0 aFStackX_8 [2];
  FName FStackX_10;
  uint uStackX_18;
  uint uStackX_1c;
  LARGE_INTEGER LStackX_20;
  FName FStack_58;
  FName FStack_50;
  FName FStack_48;
  FStatMessage FStack_38;
  
  pUVar2 = (this->StreamingPolicy).field0_0x0.DebugPtr;
  if (pUVar2 == (UWorldPartitionStreamingPolicy *)0x0) {
    return;
  }
  if (pUVar2->AsyncUpdateStreamingStateTask == (TTask<void>)0x0) {
    return;
  }
  if ((pUVar2->AsyncUpdateTaskState != Started) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("AsyncUpdateTaskState == EAsyncUpdateTaskState::Started",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
                         ,0x2e8,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (pUVar2->AsyncUpdateStreamingStateTask == (TTask<void>)0x0) {
    return;
  }
  if (*(char *)((longlong)pUVar2->AsyncUpdateStreamingStateTask + 0xd0) != '\0') {
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_WorldPartitionStreamingPolicy_WaitForAsyncUpdateStreamingState ==
        (FThreadSafeStaticStat<_private:_bool___cdecl_UWorldPartitionStreamingPolicy::WaitForAsyncUpdateStreamingState(void)_::_15_::FStat_STAT_WorldPartitionStreamingPolicy_WaitForAsyncUpdateStreamingState>
         )0x0) {
      pFVar8 = ::FName::FName(&FStack_58,
                              "STAT_WorldPartitionStreamingPolicy_WaitForAsyncUpdateStreamingState")
      ;
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_WorldPartitionStreamingPolicy_WaitForAsyncUpdateStreamingState,
                 *pFVar8,L"STAT_WorldPartitionStreamingPolicy_WaitForAsyncUpdateStreamingState",
                 "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,
                 MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar9 = StatPtr_STAT_WorldPartitionStreamingPolicy_WaitForAsyncUpdateStreamingState;
  if (StatPtr_STAT_WorldPartitionStreamingPolicy_WaitForAsyncUpdateStreamingState ==
      (FThreadSafeStaticStat<_private:_bool___cdecl_UWorldPartitionStreamingPolicy::WaitForAsyncUpdateStreamingState(void)_::_15_::FStat_STAT_WorldPartitionStreamingPolicy_WaitForAsyncUpdateStreamingState>
       )0x0) {
    pFVar8 = ::FName::FName(&FStack_50,
                            "STAT_WorldPartitionStreamingPolicy_WaitForAsyncUpdateStreamingState");
    FVar9 = (FThreadSafeStaticStat<_private:_bool___cdecl_UWorldPartitionStreamingPolicy::WaitForAsyncUpdateStreamingState(void)_::_15_::FStat_STAT_WorldPartitionStreamingPolicy_WaitForAsyncUpdateStreamingState>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &
                         StatPtr_STAT_WorldPartitionStreamingPolicy_WaitForAsyncUpdateStreamingState
                         ,*pFVar8,
                         L"STAT_WorldPartitionStreamingPolicy_WaitForAsyncUpdateStreamingState",
                         "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false
                         ,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar9;
  bVar6 = false;
  bVar5 = false;
  FStack_48.ComparisonIndex.Value = 0;
  FStack_48.Number = 0;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      aFStackX_8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&aFStackX_8[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar6 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        FStackX_10.ComparisonIndex.Value = FVar11.Value;
        FStackX_10.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&FStackX_10,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
                   ,0x2ec);
        bVar6 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      uStackX_18 = FVar11.Value;
      uStackX_1c = uVar10;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar4 = true;
      goto LAB_148ae0b8a;
    }
  }
  bVar4 = false;
  FVar12 = FStack_48;
LAB_148ae0b8a:
  if (pUVar2->AsyncUpdateStreamingStateTask != (TTask<void>)0x0) {
    UE::Tasks::Private::FTaskBase::Wait((FTaskBase *)pUVar2->AsyncUpdateStreamingStateTask);
  }
  if (((pUVar2->AsyncUpdateStreamingStateTask != (TTask<void>)0x0) &&
      (*(char *)((longlong)pUVar2->AsyncUpdateStreamingStateTask + 0xd0) == '\0')) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("AsyncUpdateStreamingStateTask.IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
                         ,0x2ee,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar4) && (FVar12 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      FStack_38.NameAndInfo.Index = FVar12.ComparisonIndex.Value;
      FStack_38.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&LStackX_20);
      FStack_38.StatData.Pad[4] = '\0';
      FStack_38.StatData.Pad[5] = '\0';
      FStack_38.StatData.Pad[6] = '\0';
      FStack_38.StatData.Pad[7] = '\0';
      FStack_38.StatData.Pad[0] = LStackX_20.s.LowPart._0_1_;
      FStack_38.StatData.Pad[1] = LStackX_20.s.LowPart._1_1_;
      FStack_38.StatData.Pad[2] = LStackX_20.s.LowPart._2_1_;
      FStack_38.StatData.Pad[3] = LStackX_20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&FStack_38);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// OnStreamingStateUpdated @ 148a9c670

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UWorldPartition::OnStreamingStateUpdated(UWorldPartition *this)

{
  UWorldPartitionStreamingPolicy *this_00;
  code *pcVar1;
  bool bVar2;
  UWorld *this_01;
  
  this_01 = (this->World).field0_0x0.DebugPtr;
  if (this_01 == (UWorld *)0x0) {
    this_01 = UObject::GetWorld((UObject *)this);
  }
  bVar2 = UWorld::IsGameWorld(this_01);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetWorld()->IsGameWorld()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartition.cpp"
                       ,0x4a6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (this->StreamingPolicy).field0_0x0.DebugPtr;
  if (this_00 != (UWorldPartitionStreamingPolicy *)0x0) {
    UWorldPartitionStreamingPolicy::OnStreamingStateUpdated(this_00);
    return;
  }
  return;
}

// OnWorldMatchStarting @ 148a9c6e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UWorldPartition::OnWorldMatchStarting(UWorldPartition *this)

{
  code *pcVar1;
  bool bVar2;
  UWorld *pUVar3;
  
  pUVar3 = (this->World).field0_0x0.DebugPtr;
  if (pUVar3 == (UWorld *)0x0) {
    pUVar3 = UObject::GetWorld((UObject *)this);
  }
  bVar2 = UWorld::IsGameWorld(pUVar3);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetWorld()->IsGameWorld()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartition.cpp"
                       ,0x49e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pUVar3 = (this->World).field0_0x0.DebugPtr;
  if (pUVar3 == (UWorld *)0x0) {
    pUVar3 = UObject::GetWorld((UObject *)this);
  }
  UWorld::BlockTillLevelStreamingCompleted(pUVar3);
  return;
}

// OnWorldPreBeginPlay @ 148a9d0a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UWorldPartition::OnWorldPreBeginPlay(UWorldPartition *this)

{
  code *pcVar1;
  bool bVar2;
  UWorld *pUVar3;
  
  pUVar3 = (this->World).field0_0x0.DebugPtr;
  if (pUVar3 == (UWorld *)0x0) {
    pUVar3 = UObject::GetWorld((UObject *)this);
  }
  bVar2 = UWorld::IsGameWorld(pUVar3);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetWorld()->IsGameWorld()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartition.cpp"
                       ,0x496,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pUVar3 = (this->World).field0_0x0.DebugPtr;
  if (pUVar3 == (UWorld *)0x0) {
    pUVar3 = UObject::GetWorld((UObject *)this);
  }
  UWorld::BlockTillLevelStreamingCompleted(pUVar3);
  return;
}

// RegisterDelegates @ 148a9e230

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UWorldPartition::RegisterDelegates(UWorldPartition *this)

{
  UWorld *pUVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UWorld *pUVar5;
  UWorldPartitionSubsystem *pUVar6;
  UObject *pUVar7;
  undefined1 local_78 [24];
  ulonglong uStack_60;
  code *local_58;
  ulonglong uStack_50;
  code *local_48;
  ulonglong uStack_40;
  code *local_38;
  ulonglong uStack_30;
  code *local_28;
  ulonglong uStack_20;
  
  if ((this->World).field0_0x0.DebugPtr == (UWorld *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("World",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartition.cpp"
                       ,0x433,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  bVar3 = UWorld::IsGameWorld((this->World).field0_0x0.DebugPtr);
  if (bVar3) {
    if ((this->World).field0_0x0.DebugPtr == (UWorld *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("World",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartition.cpp"
                         ,0x40c,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pUVar4 = Z_Construct_UClass_UWorld_NoRegister();
    pUVar5 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar4);
    pUVar1 = (this->World).field0_0x0.DebugPtr;
    if (pUVar1 == (UWorld *)0x0) {
      bVar3 = pUVar5 == (UWorld *)0x0;
    }
    else {
      bVar3 = pUVar1 == pUVar5;
    }
    if (bVar3) {
      uStack_60 = uStack_60 & 0xffffffff00000000;
      local_78._16_8_ = OnWorldPreBeginPlay;
      TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
      AddUObject<UWorldPartition>
                ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 &pUVar1->OnWorldPreBeginPlay,(UWorldPartition *)&stack0x00000008,
                 (pmf_a0dd64d9 *)this);
      local_78._16_8_ = OnWorldMatchStarting;
      uStack_60 = uStack_60 & 0xffffffff00000000;
      local_58 = OnWorldMatchStarting;
      uStack_50 = uStack_60;
      TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
      AddUObject<UWorldPartition>
                ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 &((this->World).field0_0x0.DebugPtr)->OnWorldMatchStarting,
                 (UWorldPartition *)&stack0x00000010,(pmf_a0dd64d9 *)this);
      uStack_60 = uStack_60 & 0xffffffff00000000;
      local_78._16_8_ = GetOnScreenMessages;
      local_48 = GetOnScreenMessages;
      uStack_40 = uStack_60;
      TMulticastDelegateRegistration<void___cdecl(TMultiMap<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>_&),FDefaultDelegateUserPolicy>
      ::AddUObject<UWorldPartition>
                (&FCoreDelegates::OnGetOnScreenMessages,(UWorldPartition *)&stack0x00000018,
                 (pmf_c359e39e *)this);
    }
    local_78._16_8_ = OnStreamingStateUpdated;
    uStack_60 = uStack_60 & 0xffffffff00000000;
    local_38 = OnStreamingStateUpdated;
    uStack_30 = uStack_60;
    pUVar6 = UWorld::GetSubsystem<UWorldPartitionSubsystem>((this->World).field0_0x0.DebugPtr);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UWorldPartition>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar6->StreamingStateUpdated,(UWorldPartition *)&stack0x00000020,
               (pmf_a0dd64d9 *)this);
  }
  pUVar4 = Z_Construct_UClass_ULevel_NoRegister();
  uStack_60 = uStack_60 & 0xffffffff00000000;
  local_78._16_8_ = OnCleanupLevel;
  local_28 = OnCleanupLevel;
  uStack_20 = uStack_60;
  pUVar7 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar4);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UWorldPartition>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &pUVar7[0xf].field_0x18,(UWorldPartition *)local_78,(pmf_a0dd64d9 *)this);
  return;
}

// RegisterWorldAssetStreaming @ 148a9eda0

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
UWorldPartition::RegisterWorldAssetStreaming
          (UWorldPartition *this,FGuid *__return_storage_ptr__,
          FRegisterWorldAssetStreamingParams *param_1)

{
  UWorldPartitionStreamingPolicy *this_00;
  UWorldPartitionRuntimeHash *pUVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 local_18;
  undefined8 uStack_10;
  
  this_00 = (this->StreamingPolicy).field0_0x0.DebugPtr;
  if (this_00 != (UWorldPartitionStreamingPolicy *)0x0) {
    UWorldPartitionStreamingPolicy::OnPreChangeStreamingContent(this_00);
  }
  pUVar1 = (this->RuntimeHash).field0_0x0.DebugPtr;
  if (pUVar1 == (UWorldPartitionRuntimeHash *)0x0) {
    local_18 = 0;
    uStack_10 = 0;
    puVar4 = &local_18;
  }
  else {
    puVar4 = (undefined8 *)(**(code **)(pUVar1->_padding_ + 0x340))(pUVar1,&local_18,param_1);
  }
  uVar2 = *puVar4;
  uVar3 = puVar4[1];
  __return_storage_ptr__->A = (int)uVar2;
  __return_storage_ptr__->B = (int)((ulonglong)uVar2 >> 0x20);
  __return_storage_ptr__->C = (int)uVar3;
  __return_storage_ptr__->D = (int)((ulonglong)uVar3 >> 0x20);
  return __return_storage_ptr__;
}

// RemoveExternalStreamingObject @ 148aa0f80

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
UWorldPartition::RemoveExternalStreamingObject
          (UWorldPartition *this,URuntimeHashExternalStreamingObjectBase *param_1)

{
  int iVar1;
  UWorldPartitionStreamingPolicy *pUVar2;
  UWorldPartitionRuntimeHash *pUVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  UWorld *pUVar8;
  UWorldPartitionHLODRuntimeSubsystem *pUVar9;
  UClass *pUVar10;
  TTuple<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData>
  *pTVar11;
  FWeakObjectPtr local_res8 [2];
  undefined8 local_res18;
  UWorldPartition *local_res20;
  undefined1 *local_48;
  code *local_40;
  undefined1 **local_38;
  
  pUVar2 = (this->StreamingPolicy).field0_0x0.DebugPtr;
  if (pUVar2 != (UWorldPartitionStreamingPolicy *)0x0) {
    UWorldPartitionStreamingPolicy::OnPreChangeStreamingContent(pUVar2);
  }
  pUVar3 = (this->RuntimeHash).field0_0x0.DebugPtr;
  cVar5 = (**(code **)(pUVar3->_padding_ + 0x2e8))(pUVar3,param_1);
  if (cVar5 == '\0') {
    return false;
  }
  bVar6 = FWeakObjectPtr::IsValid(&(param_1->TargetInjectedWorldPartition).WeakPtr);
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InExternalStreamingObject->TargetInjectedWorldPartition.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartition.cpp"
                         ,0x77c,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  local_res8[0].ObjectIndex = 0;
  local_res8[0].ObjectSerialNumber = 0;
  local_res18 = 0;
  FWeakObjectPtr::operator=(local_res8,(FObjectPtr)&local_res18);
  (param_1->TargetInjectedWorldPartition).WeakPtr = local_res8[0];
  pUVar2 = (this->StreamingPolicy).field0_0x0.DebugPtr;
  if (pUVar2 != (UWorldPartitionStreamingPolicy *)0x0) {
    (**(code **)(pUVar2->_padding_ + 0x328))(pUVar2,param_1);
  }
  pUVar8 = (this->World).field0_0x0.DebugPtr;
  if (pUVar8 == (UWorld *)0x0) {
    pUVar8 = UObject::GetWorld((UObject *)this);
  }
  pUVar9 = UWorld::GetSubsystem<UWorldPartitionHLODRuntimeSubsystem>(pUVar8);
  pUVar8 = (UWorld *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&param_1->OuterWorld);
  if (pUVar8 != (UWorld *)0x0) {
    pUVar10 = Z_Construct_UClass_UWorld_NoRegister();
    iVar1 = (int)pUVar10->_padding_;
    if ((iVar1 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar10->_padding_)) goto LAB_148aa1097;
  }
  pUVar8 = (UWorld *)0x0;
LAB_148aa1097:
  local_res20 = UWorld::GetWorldPartition(pUVar8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res20 != (UWorldPartition *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res20 != (UWorldPartition *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  pTVar11 = TSet<TTuple<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData>,TDefaultMapHashableKeyFuncs<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData>,TDefaultMapHashableKeyFuncs<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData,0>,FDefaultSetAllocator>
                    *)&pUVar9->WorldPartitionsHLODRuntimeData,
                   (TObjectPtr<UWorldPartition_const_>)&local_res20);
  if ((pTVar11 !=
       (TTuple<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData>
        *)0x0) && (local_48 = &pTVar11->field_0x8, local_48 != (undefined1 *)0x0)) {
    local_38 = &local_48;
    local_40 = UE::Core::Private::Function::
               TFunctionRefCaller<`UWorldPartitionHLODRuntimeSubsystem::OnExternalStreamingObjectRemoved'::__l5::<lambda_1>,void,UWorldPartitionRuntimeCell_&>
               ::Call;
    URuntimeHashExternalStreamingObjectBase::ForEachStreamingCells
              (param_1,(TFunctionRef<void___cdecl(UWorldPartitionRuntimeCell_&)> *)&local_40);
  }
  this->StreamingStateEpoch = this->StreamingStateEpoch + 1;
  return (bool)cVar5;
}

// RemoveReferencedObject @ 148aa1680

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UWorldPartition::RemoveReferencedObject(UWorldPartition *this,UObject *param_1)

{
  uint uVar1;
  TObjectPtr<UObject_const_>_u_0 local_res8;
  
  local_res8.DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  if (*(int *)&(this->ReferencedObjects).Elements.field_0x8 !=
      *(int *)&(this->ReferencedObjects).Elements.field_0x34) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_1);
    }
    uVar1 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
    RemoveImpl<TObjectPtr<UObject_const_>_>
              (&this->ReferencedObjects,uVar1 >> 0x10 ^ uVar1,
               (TObjectPtr<UObject_const_> *)&local_res8.ObjectPtr);
  }
  return;
}

// ResolveSubobject @ 148aa1e70

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
UWorldPartition::ResolveSubobject
          (UWorldPartition *this,wchar_t *param_1,UObject **param_2,bool param_3)

{
  UWorldPartitionStreamingPolicy *pUVar1;
  bool bVar2;
  UWorld *pUVar3;
  UObject *pUVar4;
  
  if (((this->World).field0_0x0.DebugPtr == (UWorld *)0x0) &&
     (pUVar3 = UObject::GetWorld((UObject *)this), pUVar3 == (UWorld *)0x0)) {
    return false;
  }
  pUVar3 = (this->World).field0_0x0.DebugPtr;
  if (pUVar3 == (UWorld *)0x0) {
    pUVar3 = UObject::GetWorld((UObject *)this);
  }
  bVar2 = UWorld::IsGameWorld(pUVar3);
  if ((bVar2) &&
     (pUVar1 = (this->StreamingPolicy).field0_0x0.DebugPtr,
     pUVar1 != (UWorldPartitionStreamingPolicy *)0x0)) {
    pUVar4 = (UObject *)(**(code **)(pUVar1->_padding_ + 0x318))(pUVar1,param_1);
    if (pUVar4 != (UObject *)0x0) {
      *param_2 = pUVar4;
      return true;
    }
    *param_2 = (UObject *)0x0;
  }
  return false;
}

// Serialize @ 148aa2030

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UWorldPartition::Serialize(UWorldPartition *this,FArchive *param_1)

{
  uint *puVar1;
  ulonglong *puVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  uint local_res10 [2];
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  UObject::Serialize((UObject *)this,param_1);
  iVar3 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID);
  if (iVar3 < 0x4a) goto LAB_148aa212b;
  if ((*(longlong *)&param_1->field_0x68 == 0) ||
     (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  bVar5 = SUB41(uVar4,0);
  puVar2 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    local_res10[0] = 0;
    if ((param_1->field_0x28 & 1) == 0) {
      local_res10[0] = uVar4;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    if (1 < local_res10[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar4 = local_res10[0];
    if ((param_1->field_0x28 & 1) != 0) goto LAB_148aa210a;
  }
  else {
    uVar4 = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
LAB_148aa210a:
    bVar5 = uVar4 != 0;
  }
  if (bVar5 != false) {
    (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&this->StreamingPolicy);
  }
LAB_148aa212b:
  iVar3 = FArchiveState::CustomVer((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID)
  ;
  if (iVar3 < 0x75) {
    this->DataLayersLogicOperator = Or;
  }
  return;
}

// Serialize @ 148aa2160

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UWorldPartition::Serialize(UWorldPartition *this,FStructuredArchiveRecord param_1)

{
  uint *puVar1;
  FFastPathLoadBuffer *pFVar2;
  int iVar3;
  FArchiveState *this_00;
  uint uVar4;
  bool bVar5;
  uint local_res10 [2];
  FSlotBase local_res18;
  
  local_res18.StructuredArchive = (FStructuredArchive *)param_1;
  this_00 = (FArchiveState *)
            UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res18);
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FUE5MainStreamObjectVersion::GUID);
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FFortniteMainBranchObjectVersion::GUID);
  UObject::Serialize((UObject *)this,(FArchive *)this_00);
  iVar3 = FArchiveState::CustomVer(this_00,&FUE5MainStreamObjectVersion::GUID);
  if (iVar3 < 0x4a) goto LAB_148aa226f;
  if ((this_00->SavePackageData == (FArchiveSavePackageData *)0x0) ||
     (this_00->SavePackageData->CookContext == (FArchiveCookContext *)0x0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  bVar5 = SUB41(uVar4,0);
  pFVar2 = this_00->ActiveFPLB;
  puVar1 = (uint *)((longlong)pFVar2->StartFastPathLoadBuffer + 4);
  if (pFVar2->EndFastPathLoadBuffer < puVar1) {
    local_res10[0] = 0;
    if (this_00->ArIsLoading == 0) {
      local_res10[0] = uVar4;
    }
    (**(code **)(this_00->_padding_ + 0x188))(this_00,local_res10,4);
    if (1 < local_res10[0]) {
      FArchiveState::SetError(this_00);
    }
    uVar4 = local_res10[0];
    if (this_00->ArIsLoading != 0) goto LAB_148aa224e;
  }
  else {
    uVar4 = *(uint *)pFVar2->StartFastPathLoadBuffer;
    pFVar2->StartFastPathLoadBuffer = (uchar *)puVar1;
LAB_148aa224e:
    bVar5 = uVar4 != 0;
  }
  if (bVar5 != false) {
    (**(code **)(this_00->_padding_ + 0x150))(this_00,&this->StreamingPolicy);
  }
LAB_148aa226f:
  iVar3 = FArchiveState::CustomVer(this_00,&FFortniteMainBranchObjectVersion::GUID);
  if (iVar3 < 0x75) {
    this->DataLayersLogicOperator = Or;
  }
  return;
}

// StaticRegisterNativesUWorldPartition @ 148aa29b0

void __cdecl UWorldPartition::StaticRegisterNativesUWorldPartition(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18._8_8_ = (ulonglong)(uint)local_18._12_4_ << 0x20;
  local_18.DataPtr = (FClassNativeFunction *)0x0;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SupportsStreaming @ 148aa2b10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UWorldPartition::SupportsStreaming(UWorldPartition *this)

{
  UWorld *this_00;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar1;
  AWorldSettings *pAVar2;
  
  this_00 = (this->World).field0_0x0.DebugPtr;
  if (this_00 != (UWorld *)0x0) {
    pAVar2 = UWorld::GetWorldSettings(this_00,false,true);
    UNRECOVERED_JUMPTABLE = *(code **)(pAVar2->_padding_ + 0x780);
                    /* WARNING: Could not recover jumptable at 0x000148aa2b38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(pAVar2,UNRECOVERED_JUMPTABLE);
    return (bool)uVar1;
  }
  return false;
}

// SupportsWorldAssetStreaming @ 148aa2b50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UWorldPartition::SupportsWorldAssetStreaming(UWorldPartition *this,FName *param_1)

{
  UWorldPartitionRuntimeHash *pUVar1;
  undefined1 uVar2;
  
  pUVar1 = (this->RuntimeHash).field0_0x0.DebugPtr;
  if (pUVar1 != (UWorldPartitionRuntimeHash *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148aa2b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(pUVar1->_padding_ + 0x338))();
    return (bool)uVar2;
  }
  return false;
}

// Tick @ 148aa2b90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UWorldPartition::Tick(UWorldPartition *this,float param_1)

{
  return;
}

// Uninitialize @ 148aa3370

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UWorldPartition::Uninitialize(UWorldPartition *this)

{
  UWorld *pUVar1;
  UExternalDataLayerManager *this_00;
  UDataLayerManager *this_01;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  UWorld *pUVar6;
  UWorldPartitionSubsystem *pUVar7;
  bool bVar8;
  FString local_18;
  
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId881,"UWorldPartition::Uninitialize",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartition.cpp"
               ,0x371);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId881);
  }
  if (this->InitState == Initialized) {
    if (((this->World).field0_0x0.DebugPtr == (UWorld *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("World",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartition.cpp"
                           ,0x375,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (4 < (byte)LogWorldPartition._0_1_) {
      pUVar4 = Z_Construct_UClass_UWorld_NoRegister();
      pUVar5 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar4);
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar5,&local_18,(UObject *)0x0);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    this->InitState = Uninitializing;
    bVar3 = IsMainWorldPartition(this);
    if (bVar3) {
      AWorldPartitionReplay::Uninitialize((this->World).field0_0x0.DebugPtr);
    }
    if (((this->World).field0_0x0.DebugPtr == (UWorld *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("World",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartition.cpp"
                           ,0x45f,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = UWorld::IsGameWorld((this->World).field0_0x0.DebugPtr);
    if (bVar3) {
      if (((this->World).field0_0x0.DebugPtr == (UWorld *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("World",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartition.cpp"
                             ,0x40c,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pUVar4 = Z_Construct_UClass_UWorld_NoRegister();
      pUVar6 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar4);
      pUVar1 = (this->World).field0_0x0.DebugPtr;
      if (pUVar1 == (UWorld *)0x0) {
        bVar3 = pUVar6 == (UWorld *)0x0;
      }
      else {
        bVar3 = pUVar1 == pUVar6;
      }
      if (bVar3) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &pUVar1->OnWorldPreBeginPlay,this);
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &((this->World).field0_0x0.DebugPtr)->OnWorldMatchStarting,this);
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &FCoreDelegates::OnGetOnScreenMessages,this);
      }
      pUVar7 = UWorld::GetSubsystem<UWorldPartitionSubsystem>((this->World).field0_0x0.DebugPtr);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &pUVar7->StreamingStateUpdated,this);
    }
    pUVar4 = Z_Construct_UClass_ULevel_NoRegister();
    pUVar5 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar4);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar5[0xf].field_0x18,this);
    bVar3 = UWorld::IsGameWorld((this->World).field0_0x0.DebugPtr);
    if (bVar3) {
      UWorldPartitionSubsystem::UpdateStreamingStateInternal((this->World).field0_0x0.DebugPtr,this)
      ;
    }
    this_00 = (this->ExternalDataLayerManager).field0_0x0.DebugPtr;
    if (this_00 != (UExternalDataLayerManager *)0x0) {
      UExternalDataLayerManager::DeInitialize(this_00);
      (this->ExternalDataLayerManager).field0_0x0.DebugPtr = (UExternalDataLayerManager *)0x0;
    }
    this_01 = (this->DataLayerManager).field0_0x0.DebugPtr;
    if (this_01 != (UDataLayerManager *)0x0) {
      UDataLayerManager::DeInitialize(this_01);
      (this->DataLayerManager).field0_0x0.DebugPtr = (UDataLayerManager *)0x0;
    }
    pUVar1 = (this->World).field0_0x0.DebugPtr;
    this->InitState = Uninitialized;
    FWorldPartitionEvents::BroadcastWorldPartitionUninitialized(pUVar1,this);
    (this->World).field0_0x0.DebugPtr = (UWorld *)0x0;
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  return;
}

// UnregisterDelegates @ 148aa3610

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UWorldPartition::UnregisterDelegates(UWorldPartition *this)

{
  UWorld *pUVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UWorld *pUVar5;
  UWorldPartitionSubsystem *pUVar6;
  UObject *pUVar7;
  
  if ((this->World).field0_0x0.DebugPtr == (UWorld *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("World",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartition.cpp"
                       ,0x45f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  bVar3 = UWorld::IsGameWorld((this->World).field0_0x0.DebugPtr);
  if (bVar3) {
    if ((this->World).field0_0x0.DebugPtr == (UWorld *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("World",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartition.cpp"
                         ,0x40c,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pUVar4 = Z_Construct_UClass_UWorld_NoRegister();
    pUVar5 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar4);
    pUVar1 = (this->World).field0_0x0.DebugPtr;
    if (pUVar1 == (UWorld *)0x0) {
      bVar3 = pUVar5 == (UWorld *)0x0;
    }
    else {
      bVar3 = pUVar1 == pUVar5;
    }
    if (bVar3) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnWorldPreBeginPlay,
                 this);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &((this->World).field0_0x0.DebugPtr)->OnWorldMatchStarting,this);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &FCoreDelegates::OnGetOnScreenMessages,this);
    }
    pUVar6 = UWorld::GetSubsystem<UWorldPartitionSubsystem>((this->World).field0_0x0.DebugPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar6->StreamingStateUpdated,
               this);
  }
  pUVar4 = Z_Construct_UClass_ULevel_NoRegister();
  pUVar7 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar4);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar7[0xf].field_0x18,this);
  return;
}

// UnregisterWorldAssetStreaming @ 148aa3eb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UWorldPartition::UnregisterWorldAssetStreaming(UWorldPartition *this,FGuid *param_1)

{
  UWorldPartitionStreamingPolicy *this_00;
  UWorldPartitionRuntimeHash *pUVar1;
  undefined1 uVar2;
  
  this_00 = (this->StreamingPolicy).field0_0x0.DebugPtr;
  if (this_00 != (UWorldPartitionStreamingPolicy *)0x0) {
    UWorldPartitionStreamingPolicy::OnPreChangeStreamingContent(this_00);
  }
  pUVar1 = (this->RuntimeHash).field0_0x0.DebugPtr;
  if (pUVar1 != (UWorldPartitionRuntimeHash *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148aa3eea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(pUVar1->_padding_ + 0x348))(pUVar1,param_1);
    return (bool)uVar2;
  }
  return false;
}

// UseMakingInvisibleTransactionRequests @ 148aa4260

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UWorldPartition::UseMakingInvisibleTransactionRequests(UWorldPartition *this)

{
  bool bVar1;
  UWorld *this_00;
  undefined1 local_18 [16];
  
  if ((this->bCachedUseMakingInvisibleTransactionRequests).bIsSet != false) goto LAB_148aa42b7;
  this_00 = (this->World).field0_0x0.DebugPtr;
  if (this_00 == (UWorld *)0x0) {
    this_00 = UObject::GetWorld((UObject *)this);
    if (this_00 != (UWorld *)0x0) goto LAB_148aa4285;
LAB_148aa429e:
    bVar1 = false;
  }
  else {
LAB_148aa4285:
    bVar1 = UWorld::IsGameWorld(this_00);
    if ((!bVar1) || (bUseMakingInvisibleTransactionRequests == false)) goto LAB_148aa429e;
    bVar1 = true;
  }
  if ((TOptional<bool> *)local_18 != &this->bCachedUseMakingInvisibleTransactionRequests) {
    (this->bCachedUseMakingInvisibleTransactionRequests).TypedValue = bVar1;
    (this->bCachedUseMakingInvisibleTransactionRequests).bIsSet = true;
  }
LAB_148aa42b7:
  if ((this->bCachedUseMakingInvisibleTransactionRequests).bIsSet != false) {
    return (this->bCachedUseMakingInvisibleTransactionRequests).TypedValue;
  }
  return false;
}

// UseMakingVisibleTransactionRequests @ 148aa42e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UWorldPartition::UseMakingVisibleTransactionRequests(UWorldPartition *this)

{
  bool bVar1;
  UWorld *this_00;
  undefined1 local_18 [16];
  
  if ((this->bCachedUseMakingVisibleTransactionRequests).bIsSet != false) goto LAB_148aa4337;
  this_00 = (this->World).field0_0x0.DebugPtr;
  if (this_00 == (UWorld *)0x0) {
    this_00 = UObject::GetWorld((UObject *)this);
    if (this_00 != (UWorld *)0x0) goto LAB_148aa4305;
LAB_148aa431e:
    bVar1 = false;
  }
  else {
LAB_148aa4305:
    bVar1 = UWorld::IsGameWorld(this_00);
    if ((!bVar1) || (bUseMakingVisibleTransactionRequests == false)) goto LAB_148aa431e;
    bVar1 = true;
  }
  if ((TOptional<bool> *)local_18 != &this->bCachedUseMakingVisibleTransactionRequests) {
    (this->bCachedUseMakingVisibleTransactionRequests).TypedValue = bVar1;
    (this->bCachedUseMakingVisibleTransactionRequests).bIsSet = true;
  }
LAB_148aa4337:
  if ((this->bCachedUseMakingVisibleTransactionRequests).bIsSet != false) {
    return (this->bCachedUseMakingVisibleTransactionRequests).TypedValue;
  }
  return false;
}

