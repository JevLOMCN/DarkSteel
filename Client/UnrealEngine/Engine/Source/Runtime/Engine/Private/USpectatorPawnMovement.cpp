// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 148702b20

UClass * __cdecl USpectatorPawnMovement::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USpectatorPawnMovement.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SpectatorPawnMovement",
               &Z_Registration_Info_UClass_USpectatorPawnMovement.InnerSingleton,
               StaticRegisterNativesUSpectatorPawnMovement,0x1b0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<USpectatorPawnMovement>,
               InternalVTableHelperCtorCaller<USpectatorPawnMovement>,local_res8,
               UFloatingPawnMovement::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USpectatorPawnMovement.InnerSingleton;
}

// USpectatorPawnMovement @ 148713110

USpectatorPawnMovement * __thiscall
USpectatorPawnMovement::USpectatorPawnMovement(USpectatorPawnMovement *this,FVTableHelper *param_1)

{
  UFloatingPawnMovement::UFloatingPawnMovement((UFloatingPawnMovement *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&___7USpectatorPawnMovement__6B_;
  return this;
}

// USpectatorPawnMovement @ 148713160

USpectatorPawnMovement * __thiscall
USpectatorPawnMovement::USpectatorPawnMovement
          (USpectatorPawnMovement *this,FObjectInitializer *param_1)

{
  UFloatingPawnMovement::UFloatingPawnMovement((UFloatingPawnMovement *)this,param_1);
  *(undefined4 *)&this->_padding_ = 0x44960000;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&___7USpectatorPawnMovement__6B_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x457a0000;
  *(undefined4 *)&this->_padding_ = 0x463b8000;
  *(char *)&this->_padding_ = (char)this->_padding_;
  this->bIgnoreTimeDilation = 0;
  return this;
}

// ~USpectatorPawnMovement @ 148714cb0

void __thiscall USpectatorPawnMovement::~USpectatorPawnMovement(USpectatorPawnMovement *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&___7USpectatorPawnMovement__6B_;
  UFloatingPawnMovement::~UFloatingPawnMovement((UFloatingPawnMovement *)this);
  return;
}

// GetPrivateStaticClass @ 14873e980

UClass * __cdecl USpectatorPawnMovement::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USpectatorPawnMovement.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SpectatorPawnMovement",
               &Z_Registration_Info_UClass_USpectatorPawnMovement.InnerSingleton,
               StaticRegisterNativesUSpectatorPawnMovement,0x1b0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<USpectatorPawnMovement>,
               InternalVTableHelperCtorCaller<USpectatorPawnMovement>,local_res8,
               UFloatingPawnMovement::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USpectatorPawnMovement.InnerSingleton;
}

// StaticRegisterNativesUSpectatorPawnMovement @ 14875d190

void __cdecl USpectatorPawnMovement::StaticRegisterNativesUSpectatorPawnMovement(void)

{
  return;
}

// TickComponent @ 14875d480

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
USpectatorPawnMovement::TickComponent
          (USpectatorPawnMovement *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  if ((this->_padding_ != 0) && (this->_padding_ != 0)) {
    if (this->bIgnoreTimeDilation != 0) {
      UFloatingPawnMovement::TickComponent
                ((UFloatingPawnMovement *)this,(float)(double)FApp::DeltaTime,param_2,param_3);
      return;
    }
    UFloatingPawnMovement::TickComponent((UFloatingPawnMovement *)this,param_1,param_2,param_3);
    return;
  }
  return;
}

