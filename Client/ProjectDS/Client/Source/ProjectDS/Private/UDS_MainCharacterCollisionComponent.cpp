// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 16

// StaticClass @ 14b4e57c0

UClass * __cdecl UDS_MainCharacterCollisionComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MainCharacterCollisionComponent.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MainCharacterCollisionComponent",
               &Z_Registration_Info_UClass_UDS_MainCharacterCollisionComponent.InnerSingleton,
               StaticRegisterNativesUDS_MainCharacterCollisionComponent,0xd0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_MainCharacterCollisionComponent>,
               InternalVTableHelperCtorCaller<UDS_MainCharacterCollisionComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MainCharacterCollisionComponent.InnerSingleton;
}

// UDS_MainCharacterCollisionComponent @ 14b4e8e20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UDS_MainCharacterCollisionComponent * __thiscall
UDS_MainCharacterCollisionComponent::UDS_MainCharacterCollisionComponent
          (UDS_MainCharacterCollisionComponent *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->OwnerCharacter).WeakPtr = (FWeakObjectPtr)0x0;
  (this->DefaultCollisionProfileName).ComparisonIndex = 0;
  (this->DefaultCollisionProfileName).Number = 0;
  return this;
}

// ~UDS_MainCharacterCollisionComponent @ 14b4e9c40

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
UDS_MainCharacterCollisionComponent::~UDS_MainCharacterCollisionComponent
          (UDS_MainCharacterCollisionComponent *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// GetPrivateStaticClass @ 14b4eb8d0

UClass * __cdecl UDS_MainCharacterCollisionComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MainCharacterCollisionComponent.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MainCharacterCollisionComponent",
               &Z_Registration_Info_UClass_UDS_MainCharacterCollisionComponent.InnerSingleton,
               StaticRegisterNativesUDS_MainCharacterCollisionComponent,0xd0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_MainCharacterCollisionComponent>,
               InternalVTableHelperCtorCaller<UDS_MainCharacterCollisionComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MainCharacterCollisionComponent.InnerSingleton;
}

// StaticRegisterNativesUDS_MainCharacterCollisionComponent @ 14b4ec1c0

void __cdecl
UDS_MainCharacterCollisionComponent::StaticRegisterNativesUDS_MainCharacterCollisionComponent(void)

{
  return;
}

// UDS_MainCharacterCollisionComponent @ 14bbeace0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UDS_MainCharacterCollisionComponent * __thiscall
UDS_MainCharacterCollisionComponent::UDS_MainCharacterCollisionComponent
          (UDS_MainCharacterCollisionComponent *this)

{
  byte *pbVar1;
  FObjectInitializer *pFVar2;
  
  pFVar2 = FObjectInitializer::Get();
  UActorComponent::UActorComponent((UActorComponent *)this,pFVar2);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 & 0xfd;
  (this->OwnerCharacter).WeakPtr = (FWeakObjectPtr)0x0;
  (this->DefaultCollisionProfileName).ComparisonIndex = 0;
  (this->DefaultCollisionProfileName).Number = 0;
  this->DefaultCollisionProfileName = ::COLLISION_PROFILE_PLAYER;
  return this;
}

// BeginPlay @ 14bbecec0

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

void __thiscall
UDS_MainCharacterCollisionComponent::BeginPlay(UDS_MainCharacterCollisionComponent *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UDS_LogManager *pUVar5;
  undefined1 auStackY_178 [32];
  UObject *local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  UActorComponent::BeginPlay((UActorComponent *)this);
  local_148[0] = (UObject *)this->_padding_;
  if (local_148[0] != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_ADS_MainCharacter_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&local_148[0]->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&local_148[0]->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14bbecf1d;
  }
  local_148[0] = (UObject *)0x0;
LAB_14bbecf1d:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_148[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_148[0]);
  }
  FWeakObjectPtr::operator=(&(this->OwnerCharacter).WeakPtr,(FObjectPtr)local_148);
  bVar3 = FWeakObjectPtr::IsValid(&(this->OwnerCharacter).WeakPtr);
  if (bVar3) {
    OnDefaultCollisionProfile(this);
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_576009377010417633>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Character\\Components\\DS_MainCharacterCollisionComponent.cpp"
                       ,0x1f,"OwnerCharacter.IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_MainCharacterCollisionComponent::BeginPlay",0x2e,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_138.Ptr,0x21,L"OwnerCharacter is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// EndPlay @ 14bbf0410

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
UDS_MainCharacterCollisionComponent::EndPlay(UDS_MainCharacterCollisionComponent *this,Type param_1)

{
  byte *pbVar1;
  uint uVar2;
  AActor *this_00;
  code *pcVar3;
  bool bVar4;
  UWorld *pUVar5;
  FUObjectItem *pFVar6;
  UFunction *pUVar7;
  undefined1 auStackX_10 [8];
  
  bVar4 = FTraceFilter::IsObjectTraceable<1>((UObject *)this);
  if (!bVar4) {
    if (this == (UDS_MainCharacterCollisionComponent *)0x0) goto LAB_14781e7e6;
    this_00 = (AActor *)this->_padding_;
    bVar4 = FTraceFilter::IsObjectTraceable<1>((UObject *)this_00);
    if ((!bVar4) || (this_00 == (AActor *)0x0)) goto LAB_14781e7e6;
    pUVar5 = AActor::GetWorld(this_00);
    bVar4 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar5);
    if (!bVar4) goto LAB_14781e7e6;
  }
  FObjectTrace::OutputObjectLifetimeEnd((UObject *)this);
LAB_14781e7e6:
  if ((this->_padding_ & 0x20000000) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bHasBegunPlay",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x65d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((param_1 - EndPlayInEditor & 0xfffffffd) != 0) {
    UE::Net::FReplicationSystemUtil::StopReplicatingActorComponent((UActorComponent *)this);
  }
  if (((uint)this->_padding_ >> 0xf & 1) == 0) {
    pFVar6 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4));
    if ((((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0) &&
       ((uVar2 = *(uint *)(this->_padding_ + 0xd4), (uVar2 >> 0x12 & 1) != 0 || (-1 < (char)uVar2)))
       ) {
      auStackX_10[0] = (undefined1)param_1;
      pUVar7 = UObject::FindFunctionChecked((UObject *)this,NAME_UActorComponent_ReceiveEndPlay);
      (**(code **)(this->_padding_ + 0x260))(this,pUVar7,auStackX_10);
    }
  }
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 & 0xcf;
  return;
}

// HandleInteractionBeginOverlap @ 14bbf8ad0

void __thiscall
UDS_MainCharacterCollisionComponent::HandleInteractionBeginOverlap
          (UDS_MainCharacterCollisionComponent *this,ulong64 param_1)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res10 [3];
  
  if ((param_1 & 8) != 0) {
    bVar1 = FWeakObjectPtr::IsValid(&(this->OwnerCharacter).WeakPtr);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get(&(this->OwnerCharacter).WeakPtr);
      (**(code **)(*(longlong *)&pUVar2[0x29].field_0x10 + 0x160))
                (&pUVar2[0x29].field_0x10,local_res10);
      bVar1 = FWeakObjectPtr::IsValid(local_res10);
      if (bVar1) {
        pUVar2 = FWeakObjectPtr::Get(local_res10);
        (**(code **)(*(longlong *)pUVar2 + 0x788))
                  (pUVar2,::COLLISION_PROFILE_PLAYER_IGNORE_COLLISION,1);
      }
    }
  }
  return;
}

// HandleInteractionEndOverlap @ 14bbf8b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_MainCharacterCollisionComponent::HandleInteractionEndOverlap
          (UDS_MainCharacterCollisionComponent *this,ulong64 param_1)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  bool bVar3;
  ADS_MainCharacter *this_00;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  UDS_ZoneManager *pUVar6;
  FDS_ZoneDistrictTableRow *this_01;
  int iVar7;
  undefined8 uVar8;
  FName FVar9;
  ForAnyElementType FVar10;
  undefined1 auStackY_1a8 [32];
  undefined1 auStack_178 [8];
  FWeakObjectPtr FStack_170;
  FWeakObjectPtr FStack_168;
  TArray<FDS_ZoneDistrictPropTableRow_const_*,TSizedDefaultAllocator<32>_> TStack_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_148;
  ulonglong uStack_28;
  
  if ((param_1 & 8) != 0) {
    return;
  }
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  bVar3 = FWeakObjectPtr::IsValid(&(this->OwnerCharacter).WeakPtr);
  if (!bVar3) {
    return;
  }
  this_00 = (ADS_MainCharacter *)FWeakObjectPtr::Get(&(this->OwnerCharacter).WeakPtr);
  ADS_MainCharacter::GetInteractionComponent(this_00);
  bVar3 = FWeakObjectPtr::IsValid(&FStack_168);
  if (!bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    TStack_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_148,"UDS_MainCharacterCollisionComponent::OnDefaultCollisionProfile",0x3e,Yes
              );
    UDS_LogManager::PrintLog(pUVar4,1,Warning,TStack_148.Ptr,0x38,L"interactionComp is nullptr.");
    if ((void *)TStack_148._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)TStack_148._padding_);
    return;
  }
  pUVar5 = FWeakObjectPtr::Get(&FStack_168);
  uVar2 = *(ulonglong *)&pUVar5[0x13].field_0x18;
  pUVar5 = FWeakObjectPtr::Get(&(this->OwnerCharacter).WeakPtr);
  (**(code **)(*(longlong *)&pUVar5[0x29].field_0x10 + 0x160))(&pUVar5[0x29].field_0x10,&FStack_170)
  ;
  bVar3 = FWeakObjectPtr::IsValid(&FStack_170);
  if (!bVar3) {
    return;
  }
  pUVar6 = UDS_ZoneManager::GetInst();
  if (pUVar6 == (UDS_ZoneManager *)0x0) {
    return;
  }
  this_01 = FDS_ZoneDistrictTableRow::GetRef((longlong)(int)pUVar6->DistrictID,true);
  bVar3 = FDS_ZoneDistrictTableRow::IsValid(this_01);
  if (bVar3) {
    FDS_ZoneDistrictTableRow::ID_DistrictPropTables(this_01,&TStack_160);
    iVar7 = TStack_160.ArrayNum;
    pFVar1 = TStack_160.AllocatorInstance.Data + (longlong)iVar7 * 8;
    uVar8 = TStack_160._8_8_;
    FVar10.Data = TStack_160.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar8 != iVar7) {
        `TCheckedPointerIterator<FDS_ZoneDistrictPropTableRow_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(auStack_178);
        uVar8 = TStack_160._8_8_;
      }
      if (FVar10.Data == pFVar1) {
        if (TStack_160.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(TStack_160.AllocatorInstance.Data);
        }
        goto LAB_14bbfb021;
      }
      if ((*(longlong *)FVar10.Data != 0) && (*(int *)(*(longlong *)FVar10.Data + 8) == 0xc)) break;
      FVar10.Data = FVar10.Data + 8;
    }
    if (TStack_160.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_160.AllocatorInstance.Data);
    }
  }
  else {
LAB_14bbfb021:
    if ((uVar2 & 8) == 0) {
      pUVar5 = FWeakObjectPtr::Get(&FStack_170);
      FVar9 = this->DefaultCollisionProfileName;
      goto LAB_14bbfafcc;
    }
  }
  pUVar5 = FWeakObjectPtr::Get(&FStack_170);
  FVar9 = ::COLLISION_PROFILE_PLAYER_IGNORE_COLLISION;
LAB_14bbfafcc:
  (**(code **)(*(longlong *)pUVar5 + 0x788))(pUVar5,FVar9,1);
  return;
}

// IsDistrictNoCollision @ 14bbf9800

bool __thiscall
UDS_MainCharacterCollisionComponent::IsDistrictNoCollision
          (UDS_MainCharacterCollisionComponent *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  FDS_ZoneDistrictTableRow *this_00;
  int iVar3;
  undefined8 uVar4;
  ForAnyElementType FVar5;
  undefined1 local_res10 [8];
  TArray<FDS_ZoneDistrictPropTableRow_const_*,TSizedDefaultAllocator<32>_> local_18;
  
  this_00 = FDS_ZoneDistrictTableRow::GetRef((longlong)param_1,true);
  bVar2 = FDS_ZoneDistrictTableRow::IsValid(this_00);
  if (!bVar2) {
    return false;
  }
  FDS_ZoneDistrictTableRow::ID_DistrictPropTables(this_00,&local_18);
  iVar3 = local_18.ArrayNum;
  pFVar1 = local_18.AllocatorInstance.Data + (longlong)iVar3 * 8;
  uVar4 = local_18._8_8_;
  FVar5.Data = local_18.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar4 != iVar3) {
      `TCheckedPointerIterator<FDS_ZoneDistrictPropTableRow_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
      uVar4 = local_18._8_8_;
    }
    if (FVar5.Data == pFVar1) break;
    if ((*(longlong *)FVar5.Data != 0) && (*(int *)(*(longlong *)FVar5.Data + 8) == 0xc)) {
      bVar2 = true;
LAB_14bbf9882:
      if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
      return bVar2;
    }
    FVar5.Data = FVar5.Data + 8;
  }
  bVar2 = false;
  goto LAB_14bbf9882;
}

// OnChangedZoneDistrictID @ 14bbfa9c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_MainCharacterCollisionComponent::OnChangedZoneDistrictID
          (UDS_MainCharacterCollisionComponent *this,uint param_1,uint param_2)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  bool bVar3;
  ADS_MainCharacter *this_00;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  UDS_ZoneManager *pUVar6;
  FDS_ZoneDistrictTableRow *this_01;
  int iVar7;
  undefined8 uVar8;
  FName FVar9;
  ForAnyElementType FVar10;
  undefined1 auStackY_1a8 [32];
  undefined1 auStack_178 [8];
  FWeakObjectPtr FStack_170;
  FWeakObjectPtr FStack_168;
  TArray<FDS_ZoneDistrictPropTableRow_const_*,TSizedDefaultAllocator<32>_> TStack_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_148;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  bVar3 = FWeakObjectPtr::IsValid(&(this->OwnerCharacter).WeakPtr);
  if (!bVar3) {
    return;
  }
  this_00 = (ADS_MainCharacter *)FWeakObjectPtr::Get(&(this->OwnerCharacter).WeakPtr);
  ADS_MainCharacter::GetInteractionComponent(this_00);
  bVar3 = FWeakObjectPtr::IsValid(&FStack_168);
  if (!bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    TStack_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_148,"UDS_MainCharacterCollisionComponent::OnDefaultCollisionProfile",0x3e,Yes
              );
    UDS_LogManager::PrintLog(pUVar4,1,Warning,TStack_148.Ptr,0x38,L"interactionComp is nullptr.");
    if ((void *)TStack_148._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)TStack_148._padding_);
    return;
  }
  pUVar5 = FWeakObjectPtr::Get(&FStack_168);
  uVar2 = *(ulonglong *)&pUVar5[0x13].field_0x18;
  pUVar5 = FWeakObjectPtr::Get(&(this->OwnerCharacter).WeakPtr);
  (**(code **)(*(longlong *)&pUVar5[0x29].field_0x10 + 0x160))(&pUVar5[0x29].field_0x10,&FStack_170)
  ;
  bVar3 = FWeakObjectPtr::IsValid(&FStack_170);
  if (!bVar3) {
    return;
  }
  pUVar6 = UDS_ZoneManager::GetInst();
  if (pUVar6 == (UDS_ZoneManager *)0x0) {
    return;
  }
  this_01 = FDS_ZoneDistrictTableRow::GetRef((longlong)(int)pUVar6->DistrictID,true);
  bVar3 = FDS_ZoneDistrictTableRow::IsValid(this_01);
  if (bVar3) {
    FDS_ZoneDistrictTableRow::ID_DistrictPropTables(this_01,&TStack_160);
    iVar7 = TStack_160.ArrayNum;
    pFVar1 = TStack_160.AllocatorInstance.Data + (longlong)iVar7 * 8;
    uVar8 = TStack_160._8_8_;
    FVar10.Data = TStack_160.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar8 != iVar7) {
        `TCheckedPointerIterator<FDS_ZoneDistrictPropTableRow_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(auStack_178);
        uVar8 = TStack_160._8_8_;
      }
      if (FVar10.Data == pFVar1) {
        if (TStack_160.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(TStack_160.AllocatorInstance.Data);
        }
        goto LAB_14bbfb021;
      }
      if ((*(longlong *)FVar10.Data != 0) && (*(int *)(*(longlong *)FVar10.Data + 8) == 0xc)) break;
      FVar10.Data = FVar10.Data + 8;
    }
    if (TStack_160.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_160.AllocatorInstance.Data);
    }
  }
  else {
LAB_14bbfb021:
    if ((uVar2 & 8) == 0) {
      pUVar5 = FWeakObjectPtr::Get(&FStack_170);
      FVar9 = this->DefaultCollisionProfileName;
      goto LAB_14bbfafcc;
    }
  }
  pUVar5 = FWeakObjectPtr::Get(&FStack_170);
  FVar9 = ::COLLISION_PROFILE_PLAYER_IGNORE_COLLISION;
LAB_14bbfafcc:
  (**(code **)(*(longlong *)pUVar5 + 0x788))(pUVar5,FVar9,1);
  return;
}

// OnDefaultCollisionProfile @ 14bbfadf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_MainCharacterCollisionComponent::OnDefaultCollisionProfile
          (UDS_MainCharacterCollisionComponent *this)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  bool bVar3;
  ADS_MainCharacter *this_00;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  UDS_ZoneManager *pUVar6;
  FDS_ZoneDistrictTableRow *this_01;
  int iVar7;
  undefined8 uVar8;
  FName FVar9;
  ForAnyElementType FVar10;
  undefined1 auStackY_1a8 [32];
  undefined1 local_178 [8];
  FWeakObjectPtr local_170;
  FWeakObjectPtr local_168;
  TArray<FDS_ZoneDistrictPropTableRow_const_*,TSizedDefaultAllocator<32>_> local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  bVar3 = FWeakObjectPtr::IsValid(&(this->OwnerCharacter).WeakPtr);
  if (!bVar3) {
    return;
  }
  this_00 = (ADS_MainCharacter *)FWeakObjectPtr::Get(&(this->OwnerCharacter).WeakPtr);
  ADS_MainCharacter::GetInteractionComponent(this_00);
  bVar3 = FWeakObjectPtr::IsValid(&local_168);
  if (!bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_MainCharacterCollisionComponent::OnDefaultCollisionProfile",0x3e,Yes)
    ;
    UDS_LogManager::PrintLog(pUVar4,1,Warning,local_148.Ptr,0x38,L"interactionComp is nullptr.");
    if ((void *)local_148._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_148._padding_);
    return;
  }
  pUVar5 = FWeakObjectPtr::Get(&local_168);
  uVar2 = *(ulonglong *)&pUVar5[0x13].field_0x18;
  pUVar5 = FWeakObjectPtr::Get(&(this->OwnerCharacter).WeakPtr);
  (**(code **)(*(longlong *)&pUVar5[0x29].field_0x10 + 0x160))(&pUVar5[0x29].field_0x10,&local_170);
  bVar3 = FWeakObjectPtr::IsValid(&local_170);
  if (!bVar3) {
    return;
  }
  pUVar6 = UDS_ZoneManager::GetInst();
  if (pUVar6 == (UDS_ZoneManager *)0x0) {
    return;
  }
  this_01 = FDS_ZoneDistrictTableRow::GetRef((longlong)(int)pUVar6->DistrictID,true);
  bVar3 = FDS_ZoneDistrictTableRow::IsValid(this_01);
  if (bVar3) {
    FDS_ZoneDistrictTableRow::ID_DistrictPropTables(this_01,&local_160);
    iVar7 = local_160.ArrayNum;
    pFVar1 = local_160.AllocatorInstance.Data + (longlong)iVar7 * 8;
    uVar8 = local_160._8_8_;
    FVar10.Data = local_160.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar8 != iVar7) {
        `TCheckedPointerIterator<FDS_ZoneDistrictPropTableRow_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_178);
        uVar8 = local_160._8_8_;
      }
      if (FVar10.Data == pFVar1) {
        if (local_160.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_160.AllocatorInstance.Data);
        }
        goto LAB_14bbfb021;
      }
      if ((*(longlong *)FVar10.Data != 0) && (*(int *)(*(longlong *)FVar10.Data + 8) == 0xc)) break;
      FVar10.Data = FVar10.Data + 8;
    }
    if (local_160.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.AllocatorInstance.Data);
    }
  }
  else {
LAB_14bbfb021:
    if ((uVar2 & 8) == 0) {
      pUVar5 = FWeakObjectPtr::Get(&local_170);
      FVar9 = this->DefaultCollisionProfileName;
      goto LAB_14bbfafcc;
    }
  }
  pUVar5 = FWeakObjectPtr::Get(&local_170);
  FVar9 = ::COLLISION_PROFILE_PLAYER_IGNORE_COLLISION;
LAB_14bbfafcc:
  (**(code **)(*(longlong *)pUVar5 + 0x788))(pUVar5,FVar9,1);
  return;
}

// UpdateCapsuleCollisionForAbnormal @ 14bc20ca0

void __thiscall
UDS_MainCharacterCollisionComponent::UpdateCapsuleCollisionForAbnormal
          (UDS_MainCharacterCollisionComponent *this,UCapsuleComponent *param_1,
          FDS_CharStateInfo *param_2,bool param_3)

{
  code *UNRECOVERED_JUMPTABLE_00;
  
  if ((param_1 != (UCapsuleComponent *)0x0) && (param_2->State == Abnormal)) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(param_1->_padding_ + 0x9f0);
    if (param_3) {
                    /* WARNING: Could not recover jumptable at 0x00014bc20ccd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(param_1,5,0);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00014bc20cd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(param_1,5,2);
    return;
  }
  return;
}

// UpdateCapsuleCollisionForInteraction @ 14bc20ce0

void __thiscall
UDS_MainCharacterCollisionComponent::UpdateCapsuleCollisionForInteraction
          (UDS_MainCharacterCollisionComponent *this,UCapsuleComponent *param_1,
          FDS_CharStateInfo *param_2,bool param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if (((param_1 != (UCapsuleComponent *)0x0) && (param_2->State == Interaction)) &&
     (param_2->DetailState == Interaction_LiftUp)) {
    pcVar1 = *(code **)(param_1->_padding_ + 0x9f0);
    if (param_3) {
      (*pcVar1)(param_1,0x1b,0);
      uVar2 = 2;
    }
    else {
      (*pcVar1)(param_1,0x1b,2);
      uVar2 = 0;
    }
    (**(code **)(param_1->_padding_ + 0x9f0))(param_1,0x13,uVar2);
  }
  return;
}

// UpdateInteractionComponentForNPCTalk @ 14bc210c0

void __thiscall
UDS_MainCharacterCollisionComponent::UpdateInteractionComponentForNPCTalk
          (UDS_MainCharacterCollisionComponent *this,FGameplayTag *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  FName *pFVar3;
  ADS_MainCharacter *this_00;
  UObject *pUVar4;
  EDS_StateTagType local_res20 [8];
  FWeakObjectPtr local_18 [2];
  
  local_res20[0] = Interaction_NPCTalk;
  pFVar3 = &FDS_GameplayTags::GetStateTag(local_res20)->TagName;
  if ((*pFVar3 != (FName)0x0) && (param_1->TagName == *pFVar3)) {
    bVar2 = FWeakObjectPtr::IsValid(&(this->OwnerCharacter).WeakPtr);
    if (bVar2) {
      this_00 = (ADS_MainCharacter *)FWeakObjectPtr::Get(&(this->OwnerCharacter).WeakPtr);
      ADS_MainCharacter::GetInteractionComponent(this_00);
      bVar2 = FWeakObjectPtr::IsValid(local_18);
      if (bVar2) {
        pUVar4 = FWeakObjectPtr::Get(local_18);
        (**(code **)(*(longlong *)pUVar4 + 0x420))(pUVar4,!param_2);
      }
      else {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_576009377010417503>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Character\\Components\\DS_MainCharacterCollisionComponent.cpp"
                           ,0xa1,"interactionComp.IsValid()");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
  }
  return;
}

