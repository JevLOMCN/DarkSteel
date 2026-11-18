// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 22

// StaticClass @ 148aa8420

UClass * __cdecl UWorldPartitionLevelStreamingDynamic::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionLevelStreamingDynamic.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionLevelStreamingDynamic",
               &Z_Registration_Info_UClass_UWorldPartitionLevelStreamingDynamic.InnerSingleton,
               StaticRegisterNativesUWorldPartitionLevelStreamingDynamic,0x230,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWorldPartitionLevelStreamingDynamic>,
               InternalVTableHelperCtorCaller<UWorldPartitionLevelStreamingDynamic>,local_res8,
               ULevelStreamingDynamic::StaticClass,UWorld::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionLevelStreamingDynamic.InnerSingleton;
}

// UWorldPartitionLevelStreamingDynamic @ 148ab5270

UWorldPartitionLevelStreamingDynamic * __thiscall
UWorldPartitionLevelStreamingDynamic::UWorldPartitionLevelStreamingDynamic
          (UWorldPartitionLevelStreamingDynamic *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  ULevelStreamingDynamic::ULevelStreamingDynamic((ULevelStreamingDynamic *)this,param_1);
  this_00 = &(this->OuterWorldPartition).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UWorldPartitionLevelStreamingDynamic__6B_;
  (this->StreamingCell).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->OuterWorldPartition).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->OuterWorldPartition).SoftObjectPtr = 0;
  *(undefined8 *)&(this->OuterWorldPartition).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->OuterWorldPartition).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  return this;
}

// UWorldPartitionLevelStreamingDynamic @ 148ab52d0

UWorldPartitionLevelStreamingDynamic * __thiscall
UWorldPartitionLevelStreamingDynamic::UWorldPartitionLevelStreamingDynamic
          (UWorldPartitionLevelStreamingDynamic *this,FObjectInitializer *param_1)

{
  undefined1 *this_00;
  
  ULevelStreamingDynamic::ULevelStreamingDynamic((ULevelStreamingDynamic *)this,param_1);
  this_00 = &(this->OuterWorldPartition).SoftObjectPtr.field_0x18;
  this->bShouldBeAlwaysLoaded = false;
  this->bHasSetLevelTransform = false;
  this->_padding_ = (longlong)&___7UWorldPartitionLevelStreamingDynamic__6B_;
  (this->StreamingCell).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->OuterWorldPartition).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->OuterWorldPartition).SoftObjectPtr = 0;
  *(undefined8 *)&(this->OuterWorldPartition).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->OuterWorldPartition).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  return this;
}

// ~UWorldPartitionLevelStreamingDynamic @ 148ab7420

void __thiscall
UWorldPartitionLevelStreamingDynamic::~UWorldPartitionLevelStreamingDynamic
          (UWorldPartitionLevelStreamingDynamic *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UWorldPartitionLevelStreamingDynamic__6B_;
  pvVar1 = *(void **)&(this->OuterWorldPartition).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  ULevelStreamingDynamic::~ULevelStreamingDynamic((ULevelStreamingDynamic *)this);
  return;
}

// Activate @ 148abef80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UWorldPartitionLevelStreamingDynamic::Activate(UWorldPartitionLevelStreamingDynamic *this)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  UWorld *this_00;
  FString local_18;
  
  if (5 < (byte)LogLevelStreaming._0_1_) {
    ULevelStreaming::GetWorldAssetPackageName((ULevelStreaming *)this,&local_18);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLevelStreaming);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  cVar2 = (**(code **)(this->_padding_ + 0x2f0))(this);
  if ((cVar2 != '\0') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ShouldBeVisible()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionLevelStreamingDynamic.cpp"
                         ,0x28d,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (**(code **)(this->_padding_ + 0x2d0))(this,1);
  ULevelStreaming::SetShouldBeVisible((ULevelStreaming *)this,true);
  ULevelStreaming::SetIsRequestingUnloadAndRemoval((ULevelStreaming *)this,false);
  this_00 = ULevelStreaming::GetWorld((ULevelStreaming *)this);
  if (((this_00 == (UWorld *)0x0) || (bVar3 = UWorld::IsGameWorld(this_00), !bVar3)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PlayWorld && PlayWorld->IsGameWorld()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionLevelStreamingDynamic.cpp"
                         ,0x296,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UWorld::AddUniqueStreamingLevel(this_00,(ULevelStreaming *)this);
  return;
}

// CanChangeVisibility @ 148ac1de0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UWorldPartitionLevelStreamingDynamic::CanChangeVisibility
          (UWorldPartitionLevelStreamingDynamic *this,bool param_1)

{
  int iVar1;
  bool bVar2;
  ENetMode EVar3;
  UWorld *pUVar4;
  UWorldPartitionRuntimeCell *pUVar5;
  UWorldPartition *pUVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  UWorldPartitionHLODRuntimeSubsystem *this_00;
  
  pUVar4 = ULevelStreaming::GetWorld((ULevelStreaming *)this);
  EVar3 = UWorld::InternalGetNetMode(pUVar4);
  if (EVar3 == NM_DedicatedServer) {
    return true;
  }
  pUVar5 = (UWorldPartitionRuntimeCell *)FWeakObjectPtr::Get(&(this->StreamingCell).WeakPtr);
  if (pUVar5 == (UWorldPartitionRuntimeCell *)0x0) {
    return true;
  }
  if ((param_1) && (pUVar5->bIsHLOD == false)) {
    return true;
  }
  pUVar4 = (UWorld *)(**(code **)(pUVar5->_padding_ + 0x78))(&pUVar5->_padding_);
  if (pUVar4 == (UWorld *)0x0) {
    return true;
  }
  pUVar6 = UWorld::GetWorldPartition(pUVar4);
  if (pUVar6 == (UWorldPartition *)0x0) {
    return true;
  }
  pUVar4 = ULevelStreaming::GetWorld((ULevelStreaming *)this);
  pUVar7 = Z_Construct_UClass_UWorldPartitionHLODRuntimeSubsystem_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar7 != (UClass *)0x0) goto LAB_148ac1e90;
  }
  else if (pUVar7 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
LAB_148ac1e90:
    pUVar8 = Z_Construct_UClass_UWorldPartitionHLODRuntimeSubsystem_NoRegister();
    if (pUVar8 != (UClass *)0x0) {
      iVar1 = (int)pUVar8->_padding_;
      if (((int)pUVar7->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar8->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_148ac1ec0;
    }
  }
  pUVar7 = (UClass *)0x0;
LAB_148ac1ec0:
  this_00 = (UWorldPartitionHLODRuntimeSubsystem *)
            FSubsystemCollectionBase::GetSubsystemInternal
                      ((FSubsystemCollectionBase *)&pUVar4->SubsystemCollection,pUVar7);
  if (this_00 == (UWorldPartitionHLODRuntimeSubsystem *)0x0) {
    return true;
  }
  if (!param_1) {
    bVar2 = UWorldPartitionHLODRuntimeSubsystem::CanMakeInvisible(this_00,pUVar5);
    return bVar2;
  }
  bVar2 = UWorldPartitionHLODRuntimeSubsystem::CanMakeVisible(this_00,pUVar5);
  return bVar2;
}

// CanReplicateStreamingStatus @ 148ac1f20

bool __thiscall
UWorldPartitionLevelStreamingDynamic::CanReplicateStreamingStatus
          (UWorldPartitionLevelStreamingDynamic *this)

{
  return false;
}

// Deactivate @ 148ac4090

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UWorldPartitionLevelStreamingDynamic::Deactivate(UWorldPartitionLevelStreamingDynamic *this)

{
  code *pcVar1;
  char cVar2;
  ELevelStreamingState EVar3;
  bool bVar4;
  FString local_18;
  
  if (5 < (byte)LogLevelStreaming._0_1_) {
    ULevelStreaming::GetWorldAssetPackageName((ULevelStreaming *)this,&local_18);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLevelStreaming);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  cVar2 = (**(code **)(this->_padding_ + 0x2e8))(this);
  if (((cVar2 == '\0') &&
      (EVar3 = ULevelStreaming::GetLevelStreamingState((ULevelStreaming *)this),
      EVar3 != FailedToLoad)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShouldBeLoaded() || (GetLevelStreamingState() == ELevelStreamingState::FailedToLoad)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionLevelStreamingDynamic.cpp"
                         ,0x2a1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  cVar2 = (**(code **)(this->_padding_ + 0x2f0))(this);
  if (((cVar2 == '\0') &&
      (EVar3 = ULevelStreaming::GetLevelStreamingState((ULevelStreaming *)this),
      EVar3 != FailedToLoad)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShouldBeVisible() || (GetLevelStreamingState() == ELevelStreamingState::FailedToLoad)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionLevelStreamingDynamic.cpp"
                         ,0x2a2,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  ULevelStreaming::SetShouldBeVisible((ULevelStreaming *)this,false);
  return;
}

// GetPrivateStaticClass @ 148acf370

UClass * __cdecl UWorldPartitionLevelStreamingDynamic::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionLevelStreamingDynamic.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionLevelStreamingDynamic",
               &Z_Registration_Info_UClass_UWorldPartitionLevelStreamingDynamic.InnerSingleton,
               StaticRegisterNativesUWorldPartitionLevelStreamingDynamic,0x230,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWorldPartitionLevelStreamingDynamic>,
               InternalVTableHelperCtorCaller<UWorldPartitionLevelStreamingDynamic>,local_res8,
               ULevelStreamingDynamic::StaticClass,UWorld::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionLevelStreamingDynamic.InnerSingleton;
}

// GetStreamingWorld @ 148ad19b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall
UWorldPartitionLevelStreamingDynamic::GetStreamingWorld(UWorldPartitionLevelStreamingDynamic *this)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UWorld *pUVar4;
  
  pUVar2 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->OuterWorldPartition);
  if (pUVar2 == (UObject *)0x0) {
    return (UWorld *)0x0;
  }
  pUVar3 = Z_Construct_UClass_UWorldPartition_NoRegister();
  iVar1 = (int)pUVar3->_padding_;
  if (*(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38) < iVar1) {
    return (UWorld *)0x0;
  }
  if ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8)
      != &pUVar3->_padding_) {
    return (UWorld *)0x0;
  }
  pUVar2 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->OuterWorldPartition);
  if (pUVar2 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_UWorldPartition_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_148ad1a29;
  }
  pUVar2 = (UObject *)0x0;
LAB_148ad1a29:
  pUVar3 = Z_Construct_UClass_UWorld_NoRegister();
  pUVar4 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)pUVar2,pUVar3);
  return pUVar4;
}

// GetWorldPartitionCell @ 148ad1eb0

IWorldPartitionCell * __thiscall
UWorldPartitionLevelStreamingDynamic::GetWorldPartitionCell
          (UWorldPartitionLevelStreamingDynamic *this)

{
  UObject *pUVar1;
  UObject *pUVar2;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->StreamingCell).WeakPtr);
  pUVar2 = pUVar1 + 1;
  if (pUVar1 == (UObject *)0x0) {
    pUVar2 = (UObject *)0x0;
  }
  return (IWorldPartitionCell *)pUVar2;
}

// Initialize @ 148ad2270

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UWorldPartitionLevelStreamingDynamic::Initialize
          (UWorldPartitionLevelStreamingDynamic *this,
          UWorldPartitionRuntimeLevelStreamingCell *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  UWorld *pUVar5;
  UWorldPartitionRuntimeLevelStreamingCell *local_res8;
  UWorldPartition *local_res10;
  
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (param_1 != (UWorldPartitionRuntimeLevelStreamingCell *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->StreamingCell).WeakPtr,(FObjectPtr)&local_res8);
  pUVar5 = ULevelStreaming::GetWorld((ULevelStreaming *)this);
  cVar3 = (**(code **)(this->_padding_ + 0x2e8))(this);
  if (cVar3 != '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ShouldBeLoaded()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionLevelStreamingDynamic.cpp"
                       ,0x36,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar4 = UWorld::IsGameWorld(pUVar5);
  if (bVar4) {
    cVar3 = (**(code **)(this->_padding_ + 0x2f0))(this);
    if (cVar3 == '\0') goto LAB_148ad234c;
  }
  bVar4 = UWorld::IsGameWorld(pUVar5);
  if ((bVar4) || ((this->_padding_ & 8) != 0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(World->IsGameWorld() && !ShouldBeVisible()) || (!World->IsGameWorld() && !GetShouldBeVisibleFlag())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionLevelStreamingDynamic.cpp"
                       ,0x37,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
LAB_148ad234c:
  if (this->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!WorldAsset.IsNull()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionLevelStreamingDynamic.cpp"
                       ,0x38,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar4 = (bool)(**(code **)(param_1->_padding_ + 0x2f0))(param_1);
  *(undefined4 *)&this->_padding_ = 0;
  this->bShouldBeAlwaysLoaded = bVar4;
  pUVar5 = (UWorld *)(**(code **)(param_1->_padding_ + 0x78))();
  local_res10 = UWorld::GetWorldPartition(pUVar5);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res10 != (UWorldPartition *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10);
  }
  FSoftObjectPtr::operator=(&(this->OuterWorldPartition).SoftObjectPtr,(FObjectPtr)&local_res10);
  uVar2 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  *(undefined8 *)((longlong)&this->_padding_ + 4) =
       *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar2;
  UpdateShouldSkipMakingVisibilityTransactionRequest(this);
  return;
}

// Load @ 148ad4eb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UWorldPartitionLevelStreamingDynamic::Load(UWorldPartitionLevelStreamingDynamic *this)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  UWorld *this_00;
  FString local_18;
  
  if (5 < (byte)LogLevelStreaming._0_1_) {
    ULevelStreaming::GetWorldAssetPackageName((ULevelStreaming *)this,&local_18);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLevelStreaming);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  cVar2 = (**(code **)(this->_padding_ + 0x2e8))(this);
  if ((cVar2 != '\0') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ShouldBeLoaded()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionLevelStreamingDynamic.cpp"
                         ,0x26d,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (**(code **)(this->_padding_ + 0x2d0))(this);
  ULevelStreaming::SetShouldBeVisible((ULevelStreaming *)this,false);
  ULevelStreaming::SetIsRequestingUnloadAndRemoval((ULevelStreaming *)this,false);
  this_00 = ULevelStreaming::GetWorld((ULevelStreaming *)this);
  if (((this_00 == (UWorld *)0x0) || (bVar3 = UWorld::IsGameWorld(this_00), !bVar3)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PlayWorld && PlayWorld->IsGameWorld()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionLevelStreamingDynamic.cpp"
                         ,0x274,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UWorld::AddUniqueStreamingLevel(this_00,(ULevelStreaming *)this);
  return;
}

// PostLoad @ 148ad60e0

void __thiscall
UWorldPartitionLevelStreamingDynamic::PostLoad(UWorldPartitionLevelStreamingDynamic *this)

{
  ULevelStreamingDynamic::PostLoad((ULevelStreamingDynamic *)this);
  UpdateShouldSkipMakingVisibilityTransactionRequest(this);
  return;
}

// RequestVisibilityChange @ 148ad9930

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UWorldPartitionLevelStreamingDynamic::RequestVisibilityChange
          (UWorldPartitionLevelStreamingDynamic *this,bool param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  ENetMode EVar4;
  UWorld *pUVar5;
  UWorldPartitionRuntimeCell *pUVar6;
  UWorldPartition *pUVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  UWorldPartitionHLODRuntimeSubsystem *this_00;
  
  bVar2 = ULevelStreaming::RequestVisibilityChange((ULevelStreaming *)this,param_1);
  pUVar5 = ULevelStreaming::GetWorld((ULevelStreaming *)this);
  EVar4 = UWorld::InternalGetNetMode(pUVar5);
  if (EVar4 != NM_DedicatedServer) {
    pUVar6 = (UWorldPartitionRuntimeCell *)FWeakObjectPtr::Get(&(this->StreamingCell).WeakPtr);
    if ((pUVar6 != (UWorldPartitionRuntimeCell *)0x0) && ((!param_1 || (pUVar6->bIsHLOD != false))))
    {
      pUVar5 = (UWorld *)(**(code **)(pUVar6->_padding_ + 0x78))(&pUVar6->_padding_);
      if (pUVar5 != (UWorld *)0x0) {
        pUVar7 = UWorld::GetWorldPartition(pUVar5);
        if (pUVar7 != (UWorldPartition *)0x0) {
          pUVar5 = ULevelStreaming::GetWorld((ULevelStreaming *)this);
          pUVar8 = Z_Construct_UClass_UWorldPartitionHLODRuntimeSubsystem_NoRegister();
          if (UE::GC::GIsIncrementalReachabilityPending == false) {
            if (pUVar8 != (UClass *)0x0) goto LAB_148ad99f5;
LAB_148ad9a23:
            pUVar8 = (UClass *)0x0;
          }
          else {
            if (pUVar8 == (UClass *)0x0) goto LAB_148ad9a23;
            UE::GC::MarkAsReachable((UObject *)pUVar8);
LAB_148ad99f5:
            pUVar9 = Z_Construct_UClass_UWorldPartitionHLODRuntimeSubsystem_NoRegister();
            if (pUVar9 == (UClass *)0x0) goto LAB_148ad9a23;
            iVar1 = (int)pUVar9->_padding_;
            if (((int)pUVar8->_padding_ < iVar1) ||
               ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar1 * 8) !=
                &pUVar9->_padding_)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (!bVar3) goto LAB_148ad9a23;
          }
          this_00 = (UWorldPartitionHLODRuntimeSubsystem *)
                    FSubsystemCollectionBase::GetSubsystemInternal
                              ((FSubsystemCollectionBase *)&pUVar5->SubsystemCollection,pUVar8);
          if (this_00 != (UWorldPartitionHLODRuntimeSubsystem *)0x0) {
            if (param_1) {
              bVar3 = UWorldPartitionHLODRuntimeSubsystem::CanMakeVisible(this_00,pUVar6);
            }
            else {
              bVar3 = UWorldPartitionHLODRuntimeSubsystem::CanMakeInvisible(this_00,pUVar6);
            }
            goto LAB_148ad9a55;
          }
        }
      }
    }
  }
  bVar3 = true;
LAB_148ad9a55:
  if ((bVar2) && (bVar3 != false)) {
    return true;
  }
  return false;
}

// SetLevelTransform @ 148adb2b0

void __thiscall
UWorldPartitionLevelStreamingDynamic::SetLevelTransform
          (UWorldPartitionLevelStreamingDynamic *this,TTransform<double> *param_1)

{
  double dVar1;
  
  if (this->bHasSetLevelTransform == false) {
    dVar1 = (param_1->Rotation).XY.m128d_f64[1];
    this->_padding_ = (longlong)(param_1->Rotation).XY.m128d_f64[0];
    this->_padding_ = (longlong)dVar1;
    dVar1 = (param_1->Rotation).ZW.m128d_f64[1];
    this->_padding_ = (longlong)(param_1->Rotation).ZW.m128d_f64[0];
    this->_padding_ = (longlong)dVar1;
    dVar1 = (param_1->Translation).XY.m128d_f64[1];
    this->_padding_ = (longlong)(param_1->Translation).XY.m128d_f64[0];
    this->_padding_ = (longlong)dVar1;
    dVar1 = (param_1->Translation).ZW.m128d_f64[1];
    this->_padding_ = (longlong)(param_1->Translation).ZW.m128d_f64[0];
    this->_padding_ = (longlong)dVar1;
    dVar1 = (param_1->Scale3D).XY.m128d_f64[1];
    this->_padding_ = (longlong)(param_1->Scale3D).XY.m128d_f64[0];
    this->_padding_ = (longlong)dVar1;
    dVar1 = (param_1->Scale3D).ZW.m128d_f64[1];
    this->_padding_ = (longlong)(param_1->Scale3D).ZW.m128d_f64[0];
    this->_padding_ = (longlong)dVar1;
    this->bHasSetLevelTransform = true;
  }
  return;
}

// ShouldBeAlwaysLoaded @ 148adb440

bool __thiscall
UWorldPartitionLevelStreamingDynamic::ShouldBeAlwaysLoaded
          (UWorldPartitionLevelStreamingDynamic *this)

{
  return this->bShouldBeAlwaysLoaded;
}

// ShouldBlockOnUnload @ 148adb450

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
UWorldPartitionLevelStreamingDynamic::ShouldBlockOnUnload
          (UWorldPartitionLevelStreamingDynamic *this)

{
  int iVar1;
  bool bVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  UWorldPartition *this_00;
  
  if ((this->_padding_ & 0x80000) != 0) {
    return true;
  }
  pUVar3 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->OuterWorldPartition);
  if (pUVar3 == (UObject *)0x0) {
    return false;
  }
  pUVar4 = Z_Construct_UClass_UWorldPartition_NoRegister();
  iVar1 = (int)pUVar4->_padding_;
  if (*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar1) {
    return false;
  }
  if ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8)
      != &pUVar4->_padding_) {
    return false;
  }
  this_00 = (UWorldPartition *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->OuterWorldPartition);
  if (this_00 != (UWorldPartition *)0x0) {
    pUVar4 = Z_Construct_UClass_UWorldPartition_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_148adb4da;
  }
  this_00 = (UWorldPartition *)0x0;
LAB_148adb4da:
  bVar2 = UWorldPartition::CanStream(this_00);
  return !bVar2;
}

// ShouldRequireFullVisibilityToRender @ 148adb520

bool __thiscall
UWorldPartitionLevelStreamingDynamic::ShouldRequireFullVisibilityToRender
          (UWorldPartitionLevelStreamingDynamic *this)

{
  return true;
}

// StaticRegisterNativesUWorldPartitionLevelStreamingDynamic @ 148adb860

void __cdecl
UWorldPartitionLevelStreamingDynamic::StaticRegisterNativesUWorldPartitionLevelStreamingDynamic
          (void)

{
  return;
}

// Unload @ 148adcf80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UWorldPartitionLevelStreamingDynamic::Unload(UWorldPartitionLevelStreamingDynamic *this)

{
  code *pcVar1;
  char cVar2;
  ELevelStreamingState EVar3;
  bool bVar4;
  FString local_18;
  
  if (5 < (byte)LogLevelStreaming._0_1_) {
    ULevelStreaming::GetWorldAssetPackageName((ULevelStreaming *)this,&local_18);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLevelStreaming);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  cVar2 = (**(code **)(this->_padding_ + 0x2e8))(this);
  if (((cVar2 == '\0') &&
      (EVar3 = ULevelStreaming::GetLevelStreamingState((ULevelStreaming *)this),
      EVar3 != FailedToLoad)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShouldBeLoaded() || (GetLevelStreamingState() == ELevelStreamingState::FailedToLoad)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionLevelStreamingDynamic.cpp"
                         ,0x27f,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (**(code **)(this->_padding_ + 0x2d0))(this);
  ULevelStreaming::SetShouldBeVisible((ULevelStreaming *)this,false);
  ULevelStreaming::SetIsRequestingUnloadAndRemoval((ULevelStreaming *)this,true);
  return;
}

// UpdateShouldSkipMakingVisibilityTransactionRequest @ 148addb00

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
UWorldPartitionLevelStreamingDynamic::UpdateShouldSkipMakingVisibilityTransactionRequest
          (UWorldPartitionLevelStreamingDynamic *this)

{
  longlong *plVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  UObject *pUVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  UWorldPartition *this_00;
  byte bVar8;
  
  pUVar5 = FWeakObjectPtr::Get(&(this->StreamingCell).WeakPtr);
  if ((pUVar5 == (UObject *)0x0) ||
     (pUVar6 = TPersistentObjectPtr<FSoftObjectPath>::Get
                         ((TPersistentObjectPtr<FSoftObjectPath> *)&this->OuterWorldPartition),
     pUVar6 == (UObject *)0x0)) {
LAB_148addbf3:
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4226768566868770067>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionLevelStreamingDynamic.cpp"
                       ,0x2ed,"Cell && OuterWorldPartition.IsValid()");
    if (!bVar4) {
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pUVar7 = Z_Construct_UClass_UWorldPartition_NoRegister();
  iVar2 = (int)pUVar7->_padding_;
  if ((*(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38) < iVar2) ||
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar2 * 8)
      != &pUVar7->_padding_)) goto LAB_148addbf3;
  this_00 = (UWorldPartition *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->OuterWorldPartition);
  if (this_00 != (UWorldPartition *)0x0) {
    pUVar7 = Z_Construct_UClass_UWorldPartition_NoRegister();
    iVar2 = (int)pUVar7->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar7->_padding_)) goto LAB_148addbab;
  }
  this_00 = (UWorldPartition *)0x0;
LAB_148addbab:
  bVar4 = UWorldPartition::IsServerStreamingEnabled(this_00);
  if ((bVar4) || (*(int *)(pUVar5 + 2) != 0)) {
    plVar1 = &this->_padding_;
    *(byte *)plVar1 = (byte)*plVar1 & 0xbf;
    bVar8 = (byte)*plVar1;
  }
  else {
    plVar1 = &this->_padding_;
    *(byte *)plVar1 = (byte)*plVar1 | 0x40;
    bVar8 = (byte)*plVar1;
    if (pUVar5[2].field_0x8 != '\0') {
      *(byte *)plVar1 = bVar8 & 0xdf | 0x20;
      return;
    }
  }
  *(byte *)&this->_padding_ = bVar8 & 0xdf;
  return;
}

