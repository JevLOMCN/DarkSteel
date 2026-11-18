// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 15

// StaticClass @ 147f91a50

UClass * __cdecl USimulatedClientNetConnection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USimulatedClientNetConnection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UNetConnection::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SimulatedClientNetConnection",
               &Z_Registration_Info_UClass_USimulatedClientNetConnection.InnerSingleton,
               StaticRegisterNativesUSimulatedClientNetConnection,0x1f80,0x10,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<USimulatedClientNetConnection>,
               InternalVTableHelperCtorCaller<USimulatedClientNetConnection>,local_res8,
               UNetConnection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USimulatedClientNetConnection.InnerSingleton;
}

// USimulatedClientNetConnection @ 147fa75c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

USimulatedClientNetConnection * __thiscall
USimulatedClientNetConnection::USimulatedClientNetConnection
          (USimulatedClientNetConnection *this,FVTableHelper *param_1)

{
  UNetConnection::UNetConnection((UNetConnection *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__FExec__;
  return this;
}

// USimulatedClientNetConnection @ 147fa7600

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

USimulatedClientNetConnection * __thiscall
USimulatedClientNetConnection::USimulatedClientNetConnection
          (USimulatedClientNetConnection *this,FObjectInitializer *param_1)

{
  UNetConnection::UNetConnection((UNetConnection *)this,param_1);
  *(uint *)&this->field_0xa4 = *(uint *)&this->field_0xa4 | 1;
  *(uint *)&this->field_0xfc = *(uint *)&this->field_0xfc | 9;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__FExec__;
  return this;
}

// ~USimulatedClientNetConnection @ 147fa9db0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
USimulatedClientNetConnection::~USimulatedClientNetConnection(USimulatedClientNetConnection *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__FExec__;
  UNetConnection::~UNetConnection((UNetConnection *)this);
  return;
}

// ClientHasInitializedLevel @ 147fb9e60

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
USimulatedClientNetConnection::ClientHasInitializedLevel
          (USimulatedClientNetConnection *this,ULevel *param_1)

{
  return true;
}

// DestroyOwningActor @ 147fc2670

void __thiscall
USimulatedClientNetConnection::DestroyOwningActor(USimulatedClientNetConnection *this)

{
  return;
}

// GetPrivateStaticClass @ 147fd65b0

UClass * __cdecl USimulatedClientNetConnection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USimulatedClientNetConnection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UNetConnection::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SimulatedClientNetConnection",
               &Z_Registration_Info_UClass_USimulatedClientNetConnection.InnerSingleton,
               StaticRegisterNativesUSimulatedClientNetConnection,0x1f80,0x10,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<USimulatedClientNetConnection>,
               InternalVTableHelperCtorCaller<USimulatedClientNetConnection>,local_res8,
               UNetConnection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USimulatedClientNetConnection.InnerSingleton;
}

// GetRemoteAddr @ 147fd6890

TSharedPtr<FInternetAddr_const_,1> * __thiscall
USimulatedClientNetConnection::GetRemoteAddr
          (USimulatedClientNetConnection *this,
          TSharedPtr<FInternetAddr_const_,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (FInternetAddr *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// HandleClientPlayer @ 147fdd670

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
USimulatedClientNetConnection::HandleClientPlayer
          (USimulatedClientNetConnection *this,APlayerController *param_1,UNetConnection *param_2)

{
  *(undefined4 *)&this->field_0x18c = 3;
  FNetTrace::TraceConnectionStateUpdated
            (*(uint *)&this->field_0x1ed0,*(uint *)&this->field_0x1eb4,'\x03');
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (APlayerController *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  *(APlayerController **)&this->field_0x30 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (APlayerController *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  *(APlayerController **)&this->field_0x98 = param_1;
  UNetConnection::NotifyConnectionUpdated((UNetConnection *)this);
  return;
}

// InitLocalConnection @ 147fe00e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
USimulatedClientNetConnection::InitLocalConnection
          (USimulatedClientNetConnection *this,UNetDriver *param_1,FSocket *param_2,FURL *param_3,
          EConnectionState param_4,int param_5,int param_6)

{
  return;
}

// InitRemoteConnection @ 147fe0270

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
USimulatedClientNetConnection::InitRemoteConnection
          (USimulatedClientNetConnection *this,UNetDriver *param_1,FSocket *param_2,FURL *param_3,
          FInternetAddr *param_4,EConnectionState param_5,int param_6,int param_7)

{
  return;
}

// LowLevelDescribe @ 147fe4320

FString * __thiscall
USimulatedClientNetConnection::LowLevelDescribe
          (USimulatedClientNetConnection *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Simulated Client");
  return __return_storage_ptr__;
}

// LowLevelGetRemoteAddress @ 147fe43a0

FString * __thiscall
USimulatedClientNetConnection::LowLevelGetRemoteAddress
          (USimulatedClientNetConnection *this,FString *__return_storage_ptr__,bool param_1)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// LowLevelSend @ 147fe43f0

void __thiscall
USimulatedClientNetConnection::LowLevelSend
          (USimulatedClientNetConnection *this,void *param_1,int param_2,FOutPacketTraits *param_3)

{
  return;
}

// StaticRegisterNativesUSimulatedClientNetConnection @ 147ff88b0

void __cdecl USimulatedClientNetConnection::StaticRegisterNativesUSimulatedClientNetConnection(void)

{
  return;
}

