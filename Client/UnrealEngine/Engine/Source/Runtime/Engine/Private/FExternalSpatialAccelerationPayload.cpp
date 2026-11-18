// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticStruct @ 14822a850

UScriptStruct * __cdecl FExternalSpatialAccelerationPayload::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FExternalSpatialAccelerationPayload.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FExternalSpatialAccelerationPayload.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FExternalSpatialAccelerationPayload,
                         (UObject *)pUVar1,L"ExternalSpatialAccelerationPayload");
  }
  return Z_Registration_Info_UScriptStruct_FExternalSpatialAccelerationPayload.OuterSingleton;
}

// FExternalSpatialAccelerationPayload @ 14824ec10

FExternalSpatialAccelerationPayload * __thiscall
FExternalSpatialAccelerationPayload::FExternalSpatialAccelerationPayload
          (FExternalSpatialAccelerationPayload *this)

{
  this->BoneId = -1;
  this->CachedUniqueIdx = -1;
  (this->Component).ObjectKey = (FObjectKey)0x0;
  return this;
}

// DebugDraw @ 148277d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FExternalSpatialAccelerationPayload::DebugDraw
          (FExternalSpatialAccelerationPayload *this,bool param_1,bool param_2)

{
  TGeometryParticle<double,3> *pTVar1;
  FColor *pFVar2;
  undefined1 auStack_98 [32];
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  undefined1 local_58 [16];
  double local_48;
  double dStack_40;
  undefined1 local_38 [16];
  double local_28;
  double dStack_20;
  ulonglong local_18;
  
  if (param_1) {
    local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
    pTVar1 = GetExternalGeometryParticle_ExternalThread(this);
    if (pTVar1 != (TGeometryParticle<double,3> *)0x0) {
      pFVar2 = &FColor::Green;
      local_78 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      dStack_70 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      if (param_2) {
        pFVar2 = &FColor::Red;
      }
      local_68 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      dStack_60 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_48 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      dStack_40 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_58._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_58._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_58._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_28 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      dStack_20 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      local_38._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_38._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_38._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      Chaos::DebugDraw::DrawParticleShapes
                ((TRigidTransform<double,3> *)&local_78,pTVar1,pFVar2,(FChaosDebugDrawSettings *)0x0
                );
    }
  }
  return;
}

// GetExternalGeometryParticle_ExternalThread @ 148287820

TGeometryParticle<double,3> * __thiscall
FExternalSpatialAccelerationPayload::GetExternalGeometryParticle_ExternalThread
          (FExternalSpatialAccelerationPayload *this)

{
  char cVar1;
  UObject *pUVar2;
  FPhysicsObject *pFVar3;
  TGeometryParticle<double,3> *pTVar4;
  FWeakObjectPtr local_res8;
  FLockedPhysicsObjectExternalInterface<0> local_28;
  
  local_res8.ObjectIndex = (this->Component).ObjectKey.ObjectIndex;
  local_res8.ObjectSerialNumber = (this->Component).ObjectKey.ObjectSerialNumber;
  pUVar2 = FWeakObjectPtr::Get(&local_res8);
  if (pUVar2 != (UObject *)0x0) {
    cVar1 = (**(code **)(*(longlong *)pUVar2 + 0x3c8))(pUVar2);
    if (cVar1 != '\0') {
      pFVar3 = (FPhysicsObject *)
               (**(code **)(*(longlong *)&pUVar2[0xf].field_0x8 + 0x10))
                         (&pUVar2[0xf].field_0x8,this->BoneId);
      FPhysicsObjectExternalInterface::LockRead(&local_28,pFVar3);
      pTVar4 = Chaos::FReadPhysicsObjectInterface<0>::GetParticle(&local_28.Interface,pFVar3);
      FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_28.Lock);
      return pTVar4;
    }
  }
  return (TGeometryParticle<double,3> *)0x0;
}

// Initialize @ 148293e70

void __thiscall
FExternalSpatialAccelerationPayload::Initialize
          (FExternalSpatialAccelerationPayload *this,TObjectKey<UPrimitiveComponent> param_1,
          int param_2)

{
  TGeometryParticle<double,3> *pTVar1;
  
  (this->Component).ObjectKey = param_1.ObjectKey;
  this->BoneId = param_2;
  pTVar1 = GetExternalGeometryParticle_ExternalThread(this);
  if (pTVar1 != (TGeometryParticle<double,3> *)0x0) {
    (this->CachedUniqueIdx).Idx = (pTVar1->MNonFrequentData).Property.MUniqueIdx.Idx;
  }
  return;
}

// Initialize @ 148293ea0

void __thiscall
FExternalSpatialAccelerationPayload::Initialize
          (FExternalSpatialAccelerationPayload *this,TObjectKey<UPrimitiveComponent> param_1,
          int param_2,FUniqueIdx *param_3)

{
  (this->Component).ObjectKey = param_1.ObjectKey;
  this->BoneId = param_2;
  (this->CachedUniqueIdx).Idx = param_3->Idx;
  return;
}

// Serialize @ 1482a8d90

void __thiscall
FExternalSpatialAccelerationPayload::Serialize
          (FExternalSpatialAccelerationPayload *this,FChaosArchive *param_1)

{
  return;
}

// UniqueIdx @ 1482b5990

FUniqueIdx __thiscall
FExternalSpatialAccelerationPayload::UniqueIdx(FExternalSpatialAccelerationPayload *this)

{
  int *in_RDX;
  
  *in_RDX = (this->CachedUniqueIdx).Idx;
  return (FUniqueIdx)(int)in_RDX;
}

