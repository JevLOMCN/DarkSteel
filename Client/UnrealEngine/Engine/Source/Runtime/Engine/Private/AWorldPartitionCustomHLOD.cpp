// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 20

// StaticClass @ 148a29190

UClass * __cdecl AWorldPartitionCustomHLOD::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWorldPartitionCustomHLOD.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionCustomHLOD",
               &Z_Registration_Info_UClass_AWorldPartitionCustomHLOD.InnerSingleton,
               StaticRegisterNativesAWorldPartitionCustomHLOD,0x2e0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AWorldPartitionCustomHLOD>,
               InternalVTableHelperCtorCaller<AWorldPartitionCustomHLOD>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWorldPartitionCustomHLOD.InnerSingleton;
}

// AWorldPartitionCustomHLOD @ 148a413e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AWorldPartitionCustomHLOD * __thiscall
AWorldPartitionCustomHLOD::AWorldPartitionCustomHLOD
          (AWorldPartitionCustomHLOD *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__IWorldPartitionHLODObject__;
  (this->StaticMeshComponent).field0_0x0.DebugPtr = (UStaticMeshComponent *)0x0;
  (this->HLODInstanceGuid).A = 0;
  (this->HLODInstanceGuid).B = 0;
  (this->HLODInstanceGuid).C = 0;
  (this->HLODInstanceGuid).D = 0;
  return this;
}

// AWorldPartitionCustomHLOD @ 148a41430

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AWorldPartitionCustomHLOD * __thiscall
AWorldPartitionCustomHLOD::AWorldPartitionCustomHLOD
          (AWorldPartitionCustomHLOD *this,FObjectInitializer *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UStaticMeshComponent *pUVar4;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__IWorldPartitionHLODObject__;
  (this->StaticMeshComponent).field0_0x0.DebugPtr = (UStaticMeshComponent *)0x0;
  (this->HLODInstanceGuid).A = 0;
  (this->HLODInstanceGuid).B = 0;
  (this->HLODInstanceGuid).C = 0;
  (this->HLODInstanceGuid).D = 0;
  pFVar2 = ::FName::FName(&local_res8,L"RootComponent");
  FVar1 = *pFVar2;
  pUVar3 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
  pUVar4 = (UStaticMeshComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UStaticMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->StaticMeshComponent).field0_0x0.DebugPtr = pUVar4;
  *(undefined1 *)((longlong)&pUVar4->_padding_ + 3) = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 = (this->StaticMeshComponent).field0_0x0.DebugPtr,
     pUVar4 != (UStaticMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  this->_padding_ = (longlong)(this->StaticMeshComponent).field0_0x0;
  return this;
}

// ~AWorldPartitionCustomHLOD @ 148a44080

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
AWorldPartitionCustomHLOD::~AWorldPartitionCustomHLOD(AWorldPartitionCustomHLOD *this)

{
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__IWorldPartitionHLODObject__;
  AActor::~AActor((AActor *)this);
  return;
}

// operator() @ 148a456e0

void __thiscall
`AWorldPartitionCustomHLOD::GetAssetsToWarmup'::__l2::<lambda_1>::operator()
          (void *this,UStaticMeshComponent *param_1)

{
  int iVar1;
  TObjectPtr<UStaticMesh>_u_0 TVar2;
  int iVar3;
  UObject *local_res10;
  TObjectPtr<UStaticMesh>_u_0 local_res18;
  
  iVar3 = 0;
  iVar1 = (**(code **)(param_1->_padding_ + 0x810))(param_1);
  if (0 < iVar1) {
    do {
      TVar2.DebugPtr = (UStaticMesh *)UStaticMeshComponent::GetMaterial(param_1,iVar3);
      if (TVar2.DebugPtr != (UStaticMesh *)0x0) {
        local_res18.DebugPtr = TVar2.DebugPtr;
        TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Emplace<UObject_*>
                  (*(TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> **)this,
                   &local_res10,(bool *)&local_res18);
      }
      iVar3 = iVar3 + 1;
      iVar1 = (**(code **)(param_1->_padding_ + 0x810))(param_1);
    } while (iVar3 < iVar1);
  }
  TVar2 = (TObjectPtr<UStaticMesh>_u_0)(param_1->StaticMesh).field0_0x0.DebugPtr;
  if (TVar2.DebugPtr != (UStaticMesh *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
    }
    local_res18 = TVar2;
    TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Emplace<UObject_*>
              (*(TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> **)this,
               &local_res10,(bool *)&local_res18);
  }
  return;
}

// BeginPlay @ 148a4a2e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWorldPartitionCustomHLOD::BeginPlay(AWorldPartitionCustomHLOD *this)

{
  UWorld *this_00;
  UWorldPartitionHLODRuntimeSubsystem *this_01;
  IWorldPartitionHLODObject *pIVar1;
  
  AActor::BeginPlay((AActor *)this);
  this_00 = AActor::GetWorld((AActor *)this);
  this_01 = UWorld::GetSubsystem<UWorldPartitionHLODRuntimeSubsystem>(this_00);
  pIVar1 = (IWorldPartitionHLODObject *)&this->_padding_;
  if (this == (AWorldPartitionCustomHLOD *)0x0) {
    pIVar1 = (IWorldPartitionHLODObject *)0x0;
  }
  UWorldPartitionHLODRuntimeSubsystem::RegisterHLODObject(this_01,pIVar1);
  return;
}

// DoesRequireWarmup @ 148a50660

bool __thiscall AWorldPartitionCustomHLOD::DoesRequireWarmup(AWorldPartitionCustomHLOD *this)

{
  return true;
}

// EndPlay @ 148a51d60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWorldPartitionCustomHLOD::EndPlay(AWorldPartitionCustomHLOD *this,Type param_1)

{
  UWorld *this_00;
  UWorldPartitionHLODRuntimeSubsystem *this_01;
  IWorldPartitionHLODObject *pIVar1;
  
  this_00 = AActor::GetWorld((AActor *)this);
  this_01 = UWorld::GetSubsystem<UWorldPartitionHLODRuntimeSubsystem>(this_00);
  pIVar1 = (IWorldPartitionHLODObject *)&this->_padding_;
  if (this == (AWorldPartitionCustomHLOD *)0x0) {
    pIVar1 = (IWorldPartitionHLODObject *)0x0;
  }
  UWorldPartitionHLODRuntimeSubsystem::UnregisterHLODObject(this_01,pIVar1);
  AActor::EndPlay((AActor *)this,param_1);
  return;
}

// GetAssetsToWarmup @ 148a54310

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
AWorldPartitionCustomHLOD::GetAssetsToWarmup
          (AWorldPartitionCustomHLOD *this,
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
    if (pUVar3 == (UClass *)0x0) goto LAB_148a543bb;
  }
  else {
    pUVar6 = pUVar5;
    if (pUVar3 == (UClass *)0x0) goto LAB_148a543bb;
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
LAB_148a543bb:
  pUVar5 = Z_Construct_UClass_UActorComponent_NoRegister();
  local_18 = pUVar3;
  if (pUVar6 == pUVar5) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    AActor::
    ForEachComponent_Internal<UStaticMeshComponent,1,0,_AWorldPartitionCustomHLOD::GetAssetsToWarmup_::__l2::<lambda_1>_>
              ((AActor *)&this[-1]._padding_,(TSubclassOf<UActorComponent>)&local_18,
               (<lambda_1>)__return_storage_ptr__);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    AActor::
    ForEachComponent_Internal<UStaticMeshComponent,0,0,_AWorldPartitionCustomHLOD::GetAssetsToWarmup_::__l2::<lambda_1>_>
              ((AActor *)&this[-1]._padding_,(TSubclassOf<UActorComponent>)&local_18,
               (<lambda_1>)__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// GetCustomHLODGuid @ 148a551d0

FGuid * __thiscall AWorldPartitionCustomHLOD::GetCustomHLODGuid(AWorldPartitionCustomHLOD *this)

{
  return (FGuid *)&this->_padding_;
}

// GetHLODLevel @ 148a58950

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ULevel * __thiscall AWorldPartitionCustomHLOD::GetHLODLevel(AWorldPartitionCustomHLOD *this)

{
  ULevel *pUVar1;
  
  pUVar1 = AActor::GetLevel((AActor *)&this[-1]._padding_);
  return pUVar1;
}

// GetHLODNameOrLabel @ 148a58990

FString * __thiscall
AWorldPartitionCustomHLOD::GetHLODNameOrLabel
          (AWorldPartitionCustomHLOD *this,FString *__return_storage_ptr__)

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

// GetPrivateStaticClass @ 148a596e0

UClass * __cdecl AWorldPartitionCustomHLOD::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWorldPartitionCustomHLOD.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionCustomHLOD",
               &Z_Registration_Info_UClass_AWorldPartitionCustomHLOD.InnerSingleton,
               StaticRegisterNativesAWorldPartitionCustomHLOD,0x2e0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AWorldPartitionCustomHLOD>,
               InternalVTableHelperCtorCaller<AWorldPartitionCustomHLOD>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWorldPartitionCustomHLOD.InnerSingleton;
}

// GetSourceCellGuid @ 148a5b190

FGuid * __thiscall AWorldPartitionCustomHLOD::GetSourceCellGuid(AWorldPartitionCustomHLOD *this)

{
  return &InvalidGuid;
}

// GetStandaloneHLODGuid @ 148a5b250

FGuid * __thiscall AWorldPartitionCustomHLOD::GetStandaloneHLODGuid(AWorldPartitionCustomHLOD *this)

{
  return &InvalidGuid;
}

// GetUObject @ 148a5b4e0

UObject * __thiscall AWorldPartitionCustomHLOD::GetUObject(AWorldPartitionCustomHLOD *this)

{
  return (UObject *)&this[-1]._padding_;
}

// IsCustomHLOD @ 148a5e220

bool __thiscall AWorldPartitionCustomHLOD::IsCustomHLOD(AWorldPartitionCustomHLOD *this)

{
  return true;
}

// IsStandalone @ 148a5ecc0

bool __thiscall AWorldPartitionCustomHLOD::IsStandalone(AWorldPartitionCustomHLOD *this)

{
  return false;
}

// SetVisibility @ 148a696c0

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
AWorldPartitionCustomHLOD::SetVisibility(AWorldPartitionCustomHLOD *this,bool param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UClass *local_res8;
  
  pUVar3 = Z_Construct_UClass_USceneComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar3 != (UClass *)0x0) goto LAB_148a69703;
  }
  else if (pUVar3 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
LAB_148a69703:
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
      if (bVar2) goto LAB_148a69738;
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_148a69738:
  pUVar5 = Z_Construct_UClass_UActorComponent_NoRegister();
  local_res8 = pUVar3;
  if (pUVar4 == pUVar5) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    AActor::
    ForEachComponent_Internal<USceneComponent,1,0,_AWorldPartitionCustomHLOD::SetVisibility_::__l2::<lambda_1>_>
              ((AActor *)&this[-1]._padding_,(TSubclassOf<UActorComponent>)&local_res8,
               (<lambda_1>)param_1);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    AActor::
    ForEachComponent_Internal<USceneComponent,0,0,_AWorldPartitionCustomHLOD::SetVisibility_::__l2::<lambda_1>_>
              ((AActor *)&this[-1]._padding_,(TSubclassOf<UActorComponent>)&local_res8,
               (<lambda_1>)param_1);
  }
  return;
}

// StaticRegisterNativesAWorldPartitionCustomHLOD @ 148a6a230

void __cdecl AWorldPartitionCustomHLOD::StaticRegisterNativesAWorldPartitionCustomHLOD(void)

{
  return;
}

