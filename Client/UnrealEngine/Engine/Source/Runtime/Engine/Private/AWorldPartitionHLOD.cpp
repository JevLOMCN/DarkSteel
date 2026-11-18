// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 31

// StaticClass @ 148a29480

UClass * __cdecl AWorldPartitionHLOD::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWorldPartitionHLOD.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionHLOD",
               &Z_Registration_Info_UClass_AWorldPartitionHLOD.InnerSingleton,
               StaticRegisterNativesAWorldPartitionHLOD,0x2f0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AWorldPartitionHLOD>,
               InternalVTableHelperCtorCaller<AWorldPartitionHLOD>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWorldPartitionHLOD.InnerSingleton;
}

// AWorldPartitionHLOD @ 148a415d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AWorldPartitionHLOD * __thiscall
AWorldPartitionHLOD::AWorldPartitionHLOD(AWorldPartitionHLOD *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__IWorldPartitionHLODObject__;
  (this->SourceCellGuid).A = 0;
  (this->SourceCellGuid).B = 0;
  (this->SourceCellGuid).C = 0;
  (this->SourceCellGuid).D = 0;
  (this->StandaloneHLODGuid).A = 0;
  (this->StandaloneHLODGuid).B = 0;
  (this->StandaloneHLODGuid).C = 0;
  (this->StandaloneHLODGuid).D = 0;
  return this;
}

// AWorldPartitionHLOD @ 148a41630

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AWorldPartitionHLOD * __thiscall
AWorldPartitionHLOD::AWorldPartitionHLOD(AWorldPartitionHLOD *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  float fVar2;
  
  AActor::AActor((AActor *)this,param_1);
  this->bRequireWarmup = false;
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__IWorldPartitionHLODObject__;
  (this->SourceCellGuid).A = 0;
  (this->SourceCellGuid).B = 0;
  (this->SourceCellGuid).C = 0;
  (this->SourceCellGuid).D = 0;
  (this->StandaloneHLODGuid).A = 0;
  (this->StandaloneHLODGuid).B = 0;
  (this->StandaloneHLODGuid).C = 0;
  (this->StandaloneHLODGuid).D = 0;
  AActor::SetCanBeDamaged((AActor *)this,false);
  AActor::SetActorEnableCollision((AActor *)this,false);
  fVar2 = __real_3f800000;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 8;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 4;
  AActor::SetNetUpdateFrequency((AActor *)this,fVar2);
  return this;
}

// ~AWorldPartitionHLOD @ 148a440d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWorldPartitionHLOD::~AWorldPartitionHLOD(AWorldPartitionHLOD *this)

{
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__IWorldPartitionHLODObject__;
  AActor::~AActor((AActor *)this);
  return;
}

// operator() @ 148a457a0

void __thiscall
`AWorldPartitionHLOD::GetAssetsToWarmup'::__l2::<lambda_1>::operator()
          (void *this,UStaticMeshComponent *param_1)

{
  int iVar1;
  UClass *pUVar2;
  TObjectPtr<UStaticMesh>_u_0 TVar3;
  int iVar4;
  UObject *local_res10;
  TObjectPtr<UStaticMesh>_u_0 local_res18;
  
  pUVar2 = Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      != &pUVar2->_padding_)) {
    iVar4 = 0;
    iVar1 = (**(code **)(param_1->_padding_ + 0x810))(param_1);
    if (0 < iVar1) {
      do {
        TVar3.DebugPtr = (UStaticMesh *)UStaticMeshComponent::GetMaterial(param_1,iVar4);
        if (TVar3.DebugPtr != (UStaticMesh *)0x0) {
          local_res18.DebugPtr = TVar3.DebugPtr;
          TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Emplace<UObject_*>
                    (*(TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> **)this,
                     &local_res10,(bool *)&local_res18);
        }
        iVar4 = iVar4 + 1;
        iVar1 = (**(code **)(param_1->_padding_ + 0x810))(param_1);
      } while (iVar4 < iVar1);
    }
    TVar3 = (TObjectPtr<UStaticMesh>_u_0)(param_1->StaticMesh).field0_0x0.DebugPtr;
    if (TVar3.DebugPtr != (UStaticMesh *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
      }
      local_res18 = TVar3;
      TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Emplace<UObject_*>
                (*(TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> **)this,
                 &local_res10,(bool *)&local_res18);
    }
  }
  return;
}

// BeginPlay @ 148a4a330

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWorldPartitionHLOD::BeginPlay(AWorldPartitionHLOD *this)

{
  UWorld *this_00;
  UWorldPartitionHLODRuntimeSubsystem *this_01;
  IWorldPartitionHLODObject *pIVar1;
  
  AActor::BeginPlay((AActor *)this);
  this_00 = AActor::GetWorld((AActor *)this);
  this_01 = UWorld::GetSubsystem<UWorldPartitionHLODRuntimeSubsystem>(this_00);
  pIVar1 = (IWorldPartitionHLODObject *)&this->_padding_;
  if (this == (AWorldPartitionHLOD *)0x0) {
    pIVar1 = (IWorldPartitionHLODObject *)0x0;
  }
  UWorldPartitionHLODRuntimeSubsystem::RegisterHLODObject(this_01,pIVar1);
  return;
}

// DoesRequireWarmup @ 148a50670

bool __thiscall AWorldPartitionHLOD::DoesRequireWarmup(AWorldPartitionHLOD *this)

{
  return (bool)*(undefined1 *)((longlong)&this->_padding_ + 4);
}

// EndPlay @ 148a51db0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWorldPartitionHLOD::EndPlay(AWorldPartitionHLOD *this,Type param_1)

{
  UWorld *this_00;
  UWorldPartitionHLODRuntimeSubsystem *this_01;
  IWorldPartitionHLODObject *pIVar1;
  
  this_00 = AActor::GetWorld((AActor *)this);
  this_01 = UWorld::GetSubsystem<UWorldPartitionHLODRuntimeSubsystem>(this_00);
  pIVar1 = (IWorldPartitionHLODObject *)&this->_padding_;
  if (this == (AWorldPartitionHLOD *)0x0) {
    pIVar1 = (IWorldPartitionHLODObject *)0x0;
  }
  UWorldPartitionHLODRuntimeSubsystem::UnregisterHLODObject(this_01,pIVar1);
  AActor::EndPlay((AActor *)this,param_1);
  return;
}

// GetAssetsToWarmup @ 148a54450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> * __thiscall
AWorldPartitionHLOD::GetAssetsToWarmup
          (AWorldPartitionHLOD *this,
          TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *__return_storage_ptr__)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  undefined1 auStack_38 [32];
  UClass *local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_38;
  pUVar5 = (UClass *)0x0;
  pUVar6 = (UClass *)0x0;
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  pUVar3 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar3 == (UClass *)0x0) goto LAB_148a544fb;
  }
  else {
    pUVar6 = pUVar5;
    if (pUVar3 == (UClass *)0x0) goto LAB_148a544fb;
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  pUVar4 = Z_Construct_UClass_UActorComponent_NoRegister();
  pUVar6 = pUVar5;
  if (pUVar4 != (UClass *)0x0) {
    iVar1 = (int)pUVar4->_padding_;
    if (((int)pUVar3->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_)
       ) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      pUVar6 = pUVar3;
    }
  }
LAB_148a544fb:
  pUVar5 = Z_Construct_UClass_UActorComponent_NoRegister();
  local_18 = pUVar3;
  if (pUVar6 == pUVar5) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    AActor::
    ForEachComponent_Internal<UStaticMeshComponent,1,0,_AWorldPartitionHLOD::GetAssetsToWarmup_::__l2::<lambda_1>_>
              ((AActor *)&this[-1]._padding_,(TSubclassOf<UActorComponent>)&local_18,
               (<lambda_1>)__return_storage_ptr__);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    AActor::
    ForEachComponent_Internal<UStaticMeshComponent,0,0,_AWorldPartitionHLOD::GetAssetsToWarmup_::__l2::<lambda_1>_>
              ((AActor *)&this[-1]._padding_,(TSubclassOf<UActorComponent>)&local_18,
               (<lambda_1>)__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// GetCustomHLODGuid @ 148a551e0

FGuid * __thiscall AWorldPartitionHLOD::GetCustomHLODGuid(AWorldPartitionHLOD *this)

{
  return &InvalidGuid;
}

// GetHLODLevel @ 148a58970

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ULevel * __thiscall AWorldPartitionHLOD::GetHLODLevel(AWorldPartitionHLOD *this)

{
  ULevel *pUVar1;
  
  pUVar1 = AActor::GetLevel((AActor *)&this[-1]._padding_);
  return pUVar1;
}

// GetHLODNameOrLabel @ 148a589e0

FString * __thiscall
AWorldPartitionHLOD::GetHLODNameOrLabel(AWorldPartitionHLOD *this,FString *__return_storage_ptr__)

{
  FName local_res8 [4];
  
  if (1 < (int)this[-1]._padding_) {
    ::FString::FString(__return_storage_ptr__,(FString *)&this[-1]._padding_);
    return __return_storage_ptr__;
  }
  local_res8[0] = (FName)this[-1]._padding_;
  ::FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 148a59860

UClass * __cdecl AWorldPartitionHLOD::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWorldPartitionHLOD.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionHLOD",
               &Z_Registration_Info_UClass_AWorldPartitionHLOD.InnerSingleton,
               StaticRegisterNativesAWorldPartitionHLOD,0x2f0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AWorldPartitionHLOD>,
               InternalVTableHelperCtorCaller<AWorldPartitionHLOD>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWorldPartitionHLOD.InnerSingleton;
}

// GetSourceCellGuid @ 148a5b1a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FGuid * __thiscall AWorldPartitionHLOD::GetSourceCellGuid(AWorldPartitionHLOD *this)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  ULevel *this_00;
  IWorldPartitionCell *pIVar4;
  longlong lVar5;
  UClass *pUVar6;
  
  plVar1 = &this->_padding_;
  if (((*(int *)((longlong)&this->_padding_ + 4) == 0 && (int)this->_padding_ == 0) &&
      *(int *)((longlong)&this->_padding_ + 4) == 0) && (int)*plVar1 == 0) {
    this_00 = AActor::GetLevel((AActor *)&this[-1]._padding_);
    pIVar4 = ULevel::GetWorldPartitionRuntimeCell(this_00);
    if (pIVar4 != (IWorldPartitionCell *)0x0) {
      lVar5 = (**(code **)((longlong)*pIVar4 + 8))(pIVar4);
      if (lVar5 != 0) {
        pUVar6 = Z_Construct_UClass_UWorldPartitionRuntimeCell_NoRegister();
        iVar2 = (int)pUVar6->_padding_;
        if ((iVar2 <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar2 * 8) ==
            &pUVar6->_padding_)) {
          if (*(char *)(lVar5 + 0x59) != '\0') {
            lVar3 = *(longlong *)(lVar5 + 0x94);
            *plVar1 = *(longlong *)(lVar5 + 0x8c);
            this->_padding_ = lVar3;
          }
          return (FGuid *)plVar1;
        }
      }
      return (FGuid *)plVar1;
    }
  }
  return (FGuid *)plVar1;
}

// GetStandaloneHLODGuid @ 148a5b260

FGuid * __thiscall AWorldPartitionHLOD::GetStandaloneHLODGuid(AWorldPartitionHLOD *this)

{
  return (FGuid *)&this->_padding_;
}

// GetUObject @ 148a5b4f0

UObject * __thiscall AWorldPartitionHLOD::GetUObject(AWorldPartitionHLOD *this)

{
  return (UObject *)&this[-1]._padding_;
}

// IsComponentRelevantForNavigation @ 148a5e210

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
AWorldPartitionHLOD::IsComponentRelevantForNavigation
          (AWorldPartitionHLOD *this,UActorComponent *param_1)

{
  return false;
}

// IsCustomHLOD @ 148a5e230

bool __thiscall AWorldPartitionHLOD::IsCustomHLOD(AWorldPartitionHLOD *this)

{
  return false;
}

// IsEditorOnly @ 148a5e4e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall AWorldPartitionHLOD::IsEditorOnly(AWorldPartitionHLOD *this)

{
  bool bVar1;
  
  bVar1 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if ((!bVar1) && (this->_padding_ == 0)) {
    return true;
  }
  bVar1 = AActor::IsEditorOnly((AActor *)this);
  return bVar1;
}

// IsHLODRelevant @ 148a5eab0

bool __thiscall AWorldPartitionHLOD::IsHLODRelevant(AWorldPartitionHLOD *this)

{
  return true;
}

// IsRuntimeOnly @ 148a5ebb0

bool __thiscall AWorldPartitionHLOD::IsRuntimeOnly(AWorldPartitionHLOD *this)

{
  return true;
}

// IsStandalone @ 148a5ecd0

bool __thiscall AWorldPartitionHLOD::IsStandalone(AWorldPartitionHLOD *this)

{
  return ((*(int *)((longlong)&this->_padding_ + 4) != 0 || (int)this->_padding_ != 0) ||
         *(int *)((longlong)&this->_padding_ + 4) != 0) || (int)this->_padding_ != 0;
}

// NeedsLoadForServer @ 148a5f3c0

bool __thiscall AWorldPartitionHLOD::NeedsLoadForServer(AWorldPartitionHLOD *this)

{
  return (bool)(*(byte *)((longlong)&this->_padding_ + 3) >> 3 & 1);
}

// PostLoad @ 148a613a0

void __thiscall AWorldPartitionHLOD::PostLoad(AWorldPartitionHLOD *this)

{
  byte *pbVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FPackageFileVersion FVar6;
  ForAnyElementType *pFVar7;
  AWorldPartitionHLOD *apAStack_18 [2];
  
  UObject::PostLoad((UObject *)this);
  lVar2 = this->_padding_;
  if (lVar2 != 0) {
    pFVar7 = (ForAnyElementType *)(lVar2 + 0x1a8);
    apAStack_18[0] = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    if ((pFVar7->Data <= (FScriptContainerElement *)apAStack_18) &&
       ((FScriptContainerElement *)apAStack_18 <
        pFVar7->Data + (longlong)*(int *)(lVar2 + 0x1b4) * 8)) {
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
    iVar5 = *(int *)(lVar2 + 0x1b0);
    if (iVar5 == *(int *)(lVar2 + 0x1b4)) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar7,(int *)(lVar2 + 0x1b4));
    }
    *(int *)(lVar2 + 0x1b0) = iVar5 + 1;
    *(AWorldPartitionHLOD **)(pFVar7->Data + (longlong)iVar5 * 8) = apAStack_18[0];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (apAStack_18[0] != (AWorldPartitionHLOD *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)apAStack_18[0]);
    }
  }
  FVar6 = UObjectBaseUtility::GetLinkerUEVersion((UObjectBaseUtility *)this);
  if (*(int *)FVar6 < 0x156) {
    *(byte *)((longlong)&this->_padding_ + 3) =
         -((char)this->_padding_ != '\0') & 8U | *(byte *)((longlong)&this->_padding_ + 3) & 0xf7;
  }
  if ((this->_padding_ & 0x10) != 0) {
    pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
    *pbVar1 = *pbVar1 & 0xfb;
  }
  pbVar1 = (byte *)((longlong)&this->_padding_ + 4);
  *pbVar1 = *pbVar1 | 1;
  return;
}

// PreRegisterAllComponents @ 148a617a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWorldPartitionHLOD::PreRegisterAllComponents(AWorldPartitionHLOD *this)

{
  int iVar1;
  bool bVar2;
  UWorld *pUVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UWorldPartition *this_00;
  ULevel *this_01;
  UClass *pUVar7;
  UClass *pUVar8;
  UClass *local_res8;
  
  AActor::PreRegisterAllComponents((AActor *)this);
  pUVar7 = (UClass *)0x0;
  pUVar8 = (UClass *)0x0;
  if ((GWorldPartitionHLODForceDisableShadows != 0) &&
     (pUVar3 = AActor::GetWorld((AActor *)this), pUVar3 != (UWorld *)0x0)) {
    pUVar3 = AActor::GetWorld((AActor *)this);
    bVar2 = UWorld::IsGameWorld(pUVar3);
    if (bVar2) {
      pUVar4 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar4 != (UClass *)0x0) goto LAB_148a61818;
LAB_148a61849:
        pUVar5 = pUVar7;
      }
      else {
        if (pUVar4 == (UClass *)0x0) goto LAB_148a61849;
        UE::GC::MarkAsReachable((UObject *)pUVar4);
LAB_148a61818:
        pUVar5 = Z_Construct_UClass_UActorComponent_NoRegister();
        if (pUVar5 == (UClass *)0x0) goto LAB_148a61849;
        iVar1 = (int)pUVar5->_padding_;
        if (((int)pUVar4->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar5->_padding_)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        pUVar5 = pUVar4;
        if (!bVar2) goto LAB_148a61849;
      }
      pUVar6 = Z_Construct_UClass_UActorComponent_NoRegister();
      local_res8 = pUVar4;
      if (pUVar5 == pUVar6) {
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar4);
        }
        AActor::
        ForEachComponent_Internal<UPrimitiveComponent,1,0,_AWorldPartitionHLOD::PreRegisterAllComponents_::__l5::<lambda_1>_>
                  ((AActor *)this,(TSubclassOf<UActorComponent>)&local_res8,local_res8._0_1_);
      }
      else {
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar4);
        }
        AActor::
        ForEachComponent_Internal<UPrimitiveComponent,0,0,_AWorldPartitionHLOD::PreRegisterAllComponents_::__l5::<lambda_1>_>
                  ((AActor *)this,(TSubclassOf<UActorComponent>)&local_res8,local_res8._0_1_);
      }
    }
  }
  if (this == (AWorldPartitionHLOD *)0x0) {
    return;
  }
  if (((uint)this->_padding_ >> 0x1e & 1) != 0) {
    return;
  }
  this_00 = FWorldPartitionHelpersPrivate::GetWorldPartitionFromObject((UObject *)this);
  if (this_00 == (UWorldPartition *)0x0) {
    return;
  }
  pUVar4 = Z_Construct_UClass_ULevel_NoRegister();
  this_01 = (ULevel *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_00,pUVar4);
  bVar2 = ULevel::IsInstancedLevel(this_01);
  if (!bVar2) {
    return;
  }
  pUVar4 = Z_Construct_UClass_USceneComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar4 == (UClass *)0x0) goto LAB_148a61954;
  }
  else {
    pUVar8 = pUVar7;
    if (pUVar4 == (UClass *)0x0) goto LAB_148a61954;
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  pUVar5 = Z_Construct_UClass_UActorComponent_NoRegister();
  pUVar8 = pUVar7;
  if (pUVar5 != (UClass *)0x0) {
    iVar1 = (int)pUVar5->_padding_;
    if (((int)pUVar4->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) != &pUVar5->_padding_)
       ) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      pUVar8 = pUVar4;
    }
  }
LAB_148a61954:
  pUVar7 = Z_Construct_UClass_UActorComponent_NoRegister();
  local_res8 = pUVar4;
  if (pUVar8 != pUVar7) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    AActor::
    ForEachComponent_Internal<USceneComponent,0,0,_AWorldPartitionHLOD::PreRegisterAllComponents_::__l11::<lambda_2>_>
              ((AActor *)this,(TSubclassOf<UActorComponent>)&local_res8,(<lambda_2>)local_res8._0_1_
              );
    return;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  AActor::
  ForEachComponent_Internal<USceneComponent,1,0,_AWorldPartitionHLOD::PreRegisterAllComponents_::__l11::<lambda_2>_>
            ((AActor *)this,(TSubclassOf<UActorComponent>)&local_res8,(<lambda_2>)local_res8._0_1_);
  return;
}

// Serialize @ 148a67ae0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWorldPartitionHLOD::Serialize(AWorldPartitionHLOD *this,FArchive *param_1)

{
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5SpecialProjectStreamObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))
            (param_1,&FFortniteReleaseBranchCustomObjectVersion::GUID);
  AActor::Serialize((AActor *)this,param_1);
  return;
}

// Serialize @ 148a67b60

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
AWorldPartitionHLOD::Serialize(AWorldPartitionHLOD *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FUE5MainStreamObjectVersion::GUID);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FUE5SpecialProjectStreamObjectVersion::GUID);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FFortniteMainBranchObjectVersion::GUID);
  (**(code **)(*(longlong *)pFVar1 + 0x230))
            (pFVar1,&FFortniteReleaseBranchCustomObjectVersion::GUID);
  AActor::Serialize((AActor *)this,pFVar1);
  return;
}

// SetVisibility @ 148a697c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWorldPartitionHLOD::SetVisibility(AWorldPartitionHLOD *this,bool param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UClass *local_res8;
  
  pUVar3 = Z_Construct_UClass_USceneComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar3 != (UClass *)0x0) goto LAB_148a69803;
  }
  else if (pUVar3 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
LAB_148a69803:
    pUVar4 = Z_Construct_UClass_UActorComponent_NoRegister();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar3->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      pUVar4 = pUVar3;
      if (bVar2) goto LAB_148a69838;
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_148a69838:
  pUVar5 = Z_Construct_UClass_UActorComponent_NoRegister();
  local_res8 = pUVar3;
  if (pUVar4 == pUVar5) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    AActor::
    ForEachComponent_Internal<USceneComponent,1,0,_AWorldPartitionHLOD::SetVisibility_::__l2::<lambda_1>_>
              ((AActor *)&this[-1]._padding_,(TSubclassOf<UActorComponent>)&local_res8,
               (<lambda_1>)param_1);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    AActor::
    ForEachComponent_Internal<USceneComponent,0,0,_AWorldPartitionHLOD::SetVisibility_::__l2::<lambda_1>_>
              ((AActor *)&this[-1]._padding_,(TSubclassOf<UActorComponent>)&local_res8,
               (<lambda_1>)param_1);
  }
  return;
}

// StaticRegisterNativesAWorldPartitionHLOD @ 148a6a250

void __cdecl AWorldPartitionHLOD::StaticRegisterNativesAWorldPartitionHLOD(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18._8_8_ = (ulonglong)(uint)local_18._12_4_ << 0x20;
  local_18.DataPtr = (FClassNativeFunction *)0x0;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SupportsIncrementalPreRegisterComponents @ 148a6a580

bool __thiscall
AWorldPartitionHLOD::SupportsIncrementalPreRegisterComponents(AWorldPartitionHLOD *this)

{
  return false;
}

// SupportsIncrementalPreUnregisterComponents @ 148a6a590

bool __thiscall
AWorldPartitionHLOD::SupportsIncrementalPreUnregisterComponents(AWorldPartitionHLOD *this)

{
  return false;
}

