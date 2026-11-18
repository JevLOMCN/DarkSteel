// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticClass @ 14b5c3bc0

UClass * __cdecl UDS_TransportWarpAbilityData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_TransportWarpAbilityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_TransportWarpAbilityData",
               &Z_Registration_Info_UClass_UDS_TransportWarpAbilityData.InnerSingleton,
               StaticRegisterNativesUDS_TransportWarpAbilityData,0x88,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_TransportWarpAbilityData>,
               InternalVTableHelperCtorCaller<UDS_TransportWarpAbilityData>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_TransportWarpAbilityData.InnerSingleton;
}

// UDS_TransportWarpAbilityData @ 14b5c7700

UDS_TransportWarpAbilityData * __thiscall
UDS_TransportWarpAbilityData::UDS_TransportWarpAbilityData
          (UDS_TransportWarpAbilityData *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_TransportWarpAbilityData__6B_;
  this->TransportEntityID = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->WarpLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->WarpLocation).field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->IsLandID = 0;
  this->ServerWaitTime = 0.0;
  (this->WarpLocation).field0_0x0._s_0.Z = (double)uVar1;
  return this;
}

// UDS_TransportWarpAbilityData @ 14b5c7750

UDS_TransportWarpAbilityData * __thiscall
UDS_TransportWarpAbilityData::UDS_TransportWarpAbilityData
          (UDS_TransportWarpAbilityData *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_TransportWarpAbilityData__6B_;
  this->TransportEntityID = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->WarpLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->WarpLocation).field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->IsLandID = 0;
  this->ServerWaitTime = 0.0;
  (this->WarpLocation).field0_0x0._s_0.Z = (double)uVar1;
  return this;
}

// ~UDS_TransportWarpAbilityData @ 14b5c8dc0

void __thiscall
UDS_TransportWarpAbilityData::~UDS_TransportWarpAbilityData(UDS_TransportWarpAbilityData *this)

{
  this->_padding_ = (longlong)&___7UDS_TransportWarpAbilityData__6B_;
  UDS_AbilityData::~UDS_AbilityData((UDS_AbilityData *)this);
  return;
}

// GetPrivateStaticClass @ 14b5cc6e0

UClass * __cdecl UDS_TransportWarpAbilityData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_TransportWarpAbilityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_TransportWarpAbilityData",
               &Z_Registration_Info_UClass_UDS_TransportWarpAbilityData.InnerSingleton,
               StaticRegisterNativesUDS_TransportWarpAbilityData,0x88,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_TransportWarpAbilityData>,
               InternalVTableHelperCtorCaller<UDS_TransportWarpAbilityData>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_TransportWarpAbilityData.InnerSingleton;
}

// StaticRegisterNativesUDS_TransportWarpAbilityData @ 14b5ce0c0

void __cdecl UDS_TransportWarpAbilityData::StaticRegisterNativesUDS_TransportWarpAbilityData(void)

{
  return;
}

// ResetData @ 14ba696c0

void __thiscall UDS_TransportWarpAbilityData::ResetData(UDS_TransportWarpAbilityData *this)

{
  undefined8 uVar1;
  
  this->TransportEntityID = 0;
  this->IsLandID = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->WarpLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->WarpLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->WarpLocation).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// UpdateTransportWarpData @ 14ba82e40

void __thiscall
UDS_TransportWarpAbilityData::UpdateTransportWarpData
          (UDS_TransportWarpAbilityData *this,TransportWarpMapLoadingNotify *param_1)

{
  Vector *pVVar1;
  Vector *pVVar2;
  TVector<double>_u_0 local_28;
  
  this->TransportEntityID = (param_1->_impl_).transport_entity_id_;
  this->IsLandID = (param_1->_impl_).warp_island_id_;
  pVVar1 = (param_1->_impl_).warp_location_;
  pVVar2 = &_Vector_default_instance_._instance;
  if (pVVar1 != (Vector *)0x0) {
    pVVar2 = pVVar1;
  }
  DS_Util::SetFVector((TVector<double> *)&local_28._s_0,pVVar2);
  (this->WarpLocation).field0_0x0._s_0.X = local_28._s_0.X;
  (this->WarpLocation).field0_0x0._s_0.Y = local_28._s_0.Y;
  (this->WarpLocation).field0_0x0._s_0.Z = local_28._s_0.Z;
  this->ServerWaitTime = (double)(param_1->_impl_).server_wait_time_;
  return;
}

