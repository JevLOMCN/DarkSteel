// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// AStaticMeshActor @ 148776810

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AStaticMeshActor * __thiscall
AStaticMeshActor::AStaticMeshActor(AStaticMeshActor *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AStaticMeshActor__6B_;
  (this->StaticMeshComponent).field0_0x0.DebugPtr = (UStaticMeshComponent *)0x0;
  return this;
}

// AStaticMeshActor @ 148776850

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AStaticMeshActor * __thiscall
AStaticMeshActor::AStaticMeshActor(AStaticMeshActor *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  FName FVar3;
  UClass *pUVar4;
  UStaticMeshComponent *pUVar5;
  UClass *pUVar6;
  byte bVar7;
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AStaticMeshActor__6B_;
  (this->StaticMeshComponent).field0_0x0.DebugPtr = (UStaticMeshComponent *)0x0;
  AActor::SetCanBeDamaged((AActor *)this,false);
  FVar3 = StaticMeshComponentName;
  pUVar4 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
  bVar7 = 0;
  pUVar5 = (UStaticMeshComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar3,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (UStaticMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->StaticMeshComponent).field0_0x0.DebugPtr = pUVar5;
  (**(code **)(pUVar5->_padding_ + 0x788))(pUVar5,UCollisionProfile::BlockAll_ProfileName,1);
  *(undefined1 *)((longlong)&((this->StaticMeshComponent).field0_0x0.DebugPtr)->_padding_ + 3) = 0;
  UPrimitiveComponent::SetGenerateOverlapEvents
            ((UPrimitiveComponent *)(this->StaticMeshComponent).field0_0x0.DebugPtr,false);
  ((this->StaticMeshComponent).field0_0x0.DebugPtr)->bUseDefaultCollision = '\x01';
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 = (this->StaticMeshComponent).field0_0x0.DebugPtr,
     pUVar5 != (UStaticMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  this->_padding_ = (longlong)(this->StaticMeshComponent).field0_0x0;
  pUVar4 = (UClass *)this->_padding_;
  pUVar6 = GetPrivateStaticClass();
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 & 0xef;
  if (pUVar4 == pUVar6) {
    bVar7 = 0x10;
  }
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | bVar7;
  return this;
}

// ~AStaticMeshActor @ 14877e9e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AStaticMeshActor::~AStaticMeshActor(AStaticMeshActor *this)

{
  this->_padding_ = (longlong)&___7AStaticMeshActor__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// BeginPlay @ 148789920

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AStaticMeshActor::BeginPlay(AStaticMeshActor *this)

{
  byte *pbVar1;
  
  if (((char)this->_padding_ == '\x03') && (this->bStaticMeshReplicateMovement != false)) {
    pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
    *pbVar1 = *pbVar1 & 0xf7;
    *(undefined1 *)&this->_padding_ = 1;
    AActor::SetReplicates((AActor *)this,true);
  }
  AActor::SetPhysicsReplicationMode((AActor *)this,this->StaticMeshPhysicsReplicationMode);
  AActor::BeginPlay((AActor *)this);
  return;
}

// GetDetailedInfoInternal @ 14879d6c0

FString * __thiscall
AStaticMeshActor::GetDetailedInfoInternal(AStaticMeshActor *this,FString *__return_storage_ptr__)

{
  UStaticMeshComponent *pUVar1;
  FString *pFVar2;
  bool bVar3;
  FString local_28;
  void *local_18 [2];
  
  pUVar1 = (this->StaticMeshComponent).field0_0x0.DebugPtr;
  bVar3 = pUVar1 == (UStaticMeshComponent *)0x0;
  if (bVar3) {
    pFVar2 = ::FString::FString(&local_28,L"No_StaticMeshComponent");
  }
  else {
    pFVar2 = (FString *)(**(code **)(pUVar1->_padding_ + 0x48))(pUVar1,local_18);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar2->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar2->Data).ArrayMax;
  (pFVar2->Data).ArrayNum = 0;
  (pFVar2->Data).ArrayMax = 0;
  if (bVar3) {
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if ((!bVar3) && (local_18[0] != (void *)0x0)) {
    FMemory::Free(local_18[0]);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1487a29a0

UClass * __cdecl AStaticMeshActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AStaticMeshActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"StaticMeshActor",
               &Z_Registration_Info_UClass_AStaticMeshActor.InnerSingleton,
               StaticRegisterNativesAStaticMeshActor,0x2d0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AStaticMeshActor>,
               InternalVTableHelperCtorCaller<AStaticMeshActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AStaticMeshActor.InnerSingleton;
}

// Serialize @ 1487c0b20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AStaticMeshActor::Serialize(AStaticMeshActor *this,FArchive *param_1)

{
  int iVar1;
  bool abStackX_10 [24];
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5SpecialProjectStreamObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5ReleaseStreamObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  UObject::Serialize((UObject *)this,param_1);
  if ((param_1->field_0x29 & 1) != 0) {
    iVar1 = FArchiveState::CustomVer
                      ((FArchiveState *)param_1,&FUE5SpecialProjectStreamObjectVersion::GUID);
    if (3 < iVar1) {
      if ((*(longlong *)&param_1->field_0x68 == 0) ||
         (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)) {
        abStackX_10[0] = false;
      }
      else {
        abStackX_10[0] = true;
      }
      ::operator<<(param_1,abStackX_10);
      if (abStackX_10[0] != false) {
        ::operator<<(param_1,(FString *)&this->_padding_);
      }
    }
  }
  if (((*(longlong *)&param_1->field_0x68 != 0) &&
      (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) != 0)) ||
     ((param_1->field_0x28 & 2) != 0)) {
    iVar1 = FArchiveState::CustomVer
                      ((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID);
    if (0x95 < iVar1) {
      FActorInstanceGuid::Serialize(param_1,(AActor *)this);
    }
  }
  return;
}

// Serialize @ 1487c0b30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AStaticMeshActor::Serialize(AStaticMeshActor *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  AActor::Serialize((AActor *)this,pFVar1);
  return;
}

// SetMobility @ 1487c2ff0

void __thiscall AStaticMeshActor::SetMobility(AStaticMeshActor *this,Type param_1)

{
  UStaticMeshComponent *pUVar1;
  
  pUVar1 = (this->StaticMeshComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UStaticMeshComponent *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001487c2fff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar1->_padding_ + 0x5f8))();
    return;
  }
  return;
}

// StaticRegisterNativesAStaticMeshActor @ 1487c5790

void __cdecl AStaticMeshActor::StaticRegisterNativesAStaticMeshActor(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_AStaticMeshActor_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execSetMobility @ 1487d33a0

void __cdecl AStaticMeshActor::execSetMobility(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  undefined1 local_res8 [8];
  
  local_res8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  plVar2 = *(longlong **)&param_1[0x11].field_0x18;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x5f8))(plVar2,local_res8[0]);
  }
  return;
}

