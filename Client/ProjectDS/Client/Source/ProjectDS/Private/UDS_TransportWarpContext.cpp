// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b4031b0

UClass * __cdecl UDS_TransportWarpContext::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_TransportWarpContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_TransportWarpContext",
               &Z_Registration_Info_UClass_UDS_TransportWarpContext.InnerSingleton,
               StaticRegisterNativesUDS_TransportWarpContext,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_TransportWarpContext>,
               InternalVTableHelperCtorCaller<UDS_TransportWarpContext>,local_res8,
               UDS_AbilityContext::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_TransportWarpContext.InnerSingleton;
}

// UDS_TransportWarpContext @ 14b407730

UDS_TransportWarpContext * __thiscall
UDS_TransportWarpContext::UDS_TransportWarpContext
          (UDS_TransportWarpContext *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UWN_AbilityContext::UWN_AbilityContext((UWN_AbilityContext *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_TransportWarpContext__6B_;
  this->TransportEntityID = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->WarpLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->WarpLocation).field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->WarpIslandID = 0;
  this->ServerWaitTime = 0.0;
  (this->WarpLocation).field0_0x0._s_0.Z = (double)uVar1;
  return this;
}

// UDS_TransportWarpContext @ 14b407780

UDS_TransportWarpContext * __thiscall
UDS_TransportWarpContext::UDS_TransportWarpContext
          (UDS_TransportWarpContext *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UWN_AbilityContext::UWN_AbilityContext((UWN_AbilityContext *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_TransportWarpContext__6B_;
  this->TransportEntityID = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->WarpLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->WarpLocation).field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->WarpIslandID = 0;
  this->ServerWaitTime = 0.0;
  (this->WarpLocation).field0_0x0._s_0.Z = (double)uVar1;
  return this;
}

// ~UDS_TransportWarpContext @ 14b408110

void __thiscall UDS_TransportWarpContext::~UDS_TransportWarpContext(UDS_TransportWarpContext *this)

{
  this->_padding_ = (longlong)&___7UWN_AbilityContext__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b40aa40

UClass * __cdecl UDS_TransportWarpContext::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_TransportWarpContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_TransportWarpContext",
               &Z_Registration_Info_UClass_UDS_TransportWarpContext.InnerSingleton,
               StaticRegisterNativesUDS_TransportWarpContext,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_TransportWarpContext>,
               InternalVTableHelperCtorCaller<UDS_TransportWarpContext>,local_res8,
               UDS_AbilityContext::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_TransportWarpContext.InnerSingleton;
}

// StaticRegisterNativesUDS_TransportWarpContext @ 14b40af30

void __cdecl UDS_TransportWarpContext::StaticRegisterNativesUDS_TransportWarpContext(void)

{
  return;
}

