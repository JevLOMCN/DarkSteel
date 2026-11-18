// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticClass @ 14b41fe10

UClass * __cdecl ADS_AnimOpt_DefaultPawn::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_AnimOpt_DefaultPawn.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AnimOpt_DefaultPawn",
               &Z_Registration_Info_UClass_ADS_AnimOpt_DefaultPawn.InnerSingleton,
               StaticRegisterNativesADS_AnimOpt_DefaultPawn,0x368,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<ADS_AnimOpt_DefaultPawn>,
               InternalVTableHelperCtorCaller<ADS_AnimOpt_DefaultPawn>,local_res8,
               ASpectatorPawn::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_AnimOpt_DefaultPawn.InnerSingleton;
}

// ADS_AnimOpt_DefaultPawn @ 14b4237e0

ADS_AnimOpt_DefaultPawn * __thiscall
ADS_AnimOpt_DefaultPawn::ADS_AnimOpt_DefaultPawn
          (ADS_AnimOpt_DefaultPawn *this,FVTableHelper *param_1)

{
  ASpectatorPawn::ASpectatorPawn((ASpectatorPawn *)this,param_1);
  *(undefined ***)this = &_vftable__for__AActor__;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__INavAgentInterface__;
  return this;
}

// ADS_AnimOpt_DefaultPawn @ 14b423820

ADS_AnimOpt_DefaultPawn * __thiscall
ADS_AnimOpt_DefaultPawn::ADS_AnimOpt_DefaultPawn
          (ADS_AnimOpt_DefaultPawn *this,FObjectInitializer *param_1)

{
  ASpectatorPawn::ASpectatorPawn((ASpectatorPawn *)this,param_1);
  *(undefined ***)this = &_vftable__for__AActor__;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__INavAgentInterface__;
  return this;
}

// ~ADS_AnimOpt_DefaultPawn @ 14b423e90

void __thiscall ADS_AnimOpt_DefaultPawn::~ADS_AnimOpt_DefaultPawn(ADS_AnimOpt_DefaultPawn *this)

{
  *(undefined ***)this = &_vftable__for__AActor__;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__INavAgentInterface__;
  ASpectatorPawn::~ASpectatorPawn((ASpectatorPawn *)this);
  return;
}

// GetPrivateStaticClass @ 14b424ab0

UClass * __cdecl ADS_AnimOpt_DefaultPawn::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_AnimOpt_DefaultPawn.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AnimOpt_DefaultPawn",
               &Z_Registration_Info_UClass_ADS_AnimOpt_DefaultPawn.InnerSingleton,
               StaticRegisterNativesADS_AnimOpt_DefaultPawn,0x368,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<ADS_AnimOpt_DefaultPawn>,
               InternalVTableHelperCtorCaller<ADS_AnimOpt_DefaultPawn>,local_res8,
               ASpectatorPawn::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_AnimOpt_DefaultPawn.InnerSingleton;
}

// StaticRegisterNativesADS_AnimOpt_DefaultPawn @ 14b425470

void __cdecl ADS_AnimOpt_DefaultPawn::StaticRegisterNativesADS_AnimOpt_DefaultPawn(void)

{
  return;
}

// BeginPlay @ 14bbabc50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ADS_AnimOpt_DefaultPawn::BeginPlay(ADS_AnimOpt_DefaultPawn *this)

{
  bool bVar1;
  UObject *pUVar2;
  ulong64 uVar3;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  ADS_AnimOpt_DefaultPawn *local_res20;
  ServerMessages local_28;
  
  APawn::BeginPlay((APawn *)this);
  ADS_AnimOpt_GameMode::GetInst();
  bVar1 = TWeakObjectPtr<ADS_AnimOpt_GameMode,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_AnimOpt_GameMode,FWeakObjectPtr> *)&local_res18,(void *)0x0
                    );
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&local_res18);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (ADS_AnimOpt_DefaultPawn *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res20 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (ADS_AnimOpt_DefaultPawn *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res20);
    uVar3 = entityID + 1;
    entityID = uVar3;
    *(int *)&pUVar2[0x16].field_0x0 = local_res10.ObjectIndex;
    *(int *)&pUVar2[0x16].field_0x4 = local_res10.ObjectSerialNumber;
    server_msg::ServerMessages::ServerMessages(&local_28,(Arena *)0x0);
    local_28._padding_ = (longlong)&___7ServerMessages_server_msg__6B_;
    if (local_28._impl_._oneof_case_[0] != 3) {
      server_msg::ServerMessages::clear_ServerMessage(&local_28);
      local_28._impl_._oneof_case_[0] = 3;
      if (((byte)local_28._padding_ & 1) == 0) {
        local_28._impl_.ServerMessage_.errorcoderes_ =
             google::protobuf::Arena::DefaultConstruct<server_msg::JoinMapResponse>
                       ((Arena *)(CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                                 0xfffffffffffffffe));
      }
      else {
        local_28._impl_.ServerMessage_.errorcoderes_ =
             google::protobuf::Arena::DefaultConstruct<server_msg::JoinMapResponse>
                       (*(Arena **)
                         (CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                         0xfffffffffffffffe));
      }
    }
    *(ulong64 *)(local_28._impl_.ServerMessage_.errorcoderes_ + 5) = uVar3;
    *(uint *)(local_28._impl_.ServerMessage_.errorcoderes_ + 1) =
         *(uint *)(local_28._impl_.ServerMessage_.errorcoderes_ + 1) | 0x20;
    FDS_LoginService::ReceiveJoinMapResponse(&local_28);
    server_msg::ServerMessages::~ServerMessages(&local_28);
  }
  return;
}

// EndPlay @ 14bbb37a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_AnimOpt_DefaultPawn::EndPlay(ADS_AnimOpt_DefaultPawn *this,Type param_1)

{
  if (param_1 != Destroyed) {
    (**(code **)(*(longlong *)this + 0x858))();
  }
  AActor::EndPlay((AActor *)this,param_1);
  return;
}

