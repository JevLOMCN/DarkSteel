// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// FHitResult @ 14737a850

FHitResult * __thiscall FHitResult::FHitResult(FHitResult *this,FHitResult *param_1)

{
  undefined8 uVar1;
  byte bVar2;
  
  this->FaceIndex = param_1->FaceIndex;
  this->Time = param_1->Time;
  this->Distance = param_1->Distance;
  uVar1 = *(undefined8 *)&(param_1->Location).field_0x8;
  *(undefined8 *)&this->Location = *(undefined8 *)&param_1->Location;
  *(undefined8 *)&(this->Location).field_0x8 = uVar1;
  *(undefined8 *)&(this->Location).field_0x10 = *(undefined8 *)&(param_1->Location).field_0x10;
  uVar1 = *(undefined8 *)&(param_1->ImpactPoint).field_0x8;
  *(undefined8 *)&this->ImpactPoint = *(undefined8 *)&param_1->ImpactPoint;
  *(undefined8 *)&(this->ImpactPoint).field_0x8 = uVar1;
  *(undefined8 *)&(this->ImpactPoint).field_0x10 = *(undefined8 *)&(param_1->ImpactPoint).field_0x10
  ;
  uVar1 = *(undefined8 *)&(param_1->Normal).field_0x8;
  *(undefined8 *)&this->Normal = *(undefined8 *)&param_1->Normal;
  *(undefined8 *)&(this->Normal).field_0x8 = uVar1;
  *(undefined8 *)&(this->Normal).field_0x10 = *(undefined8 *)&(param_1->Normal).field_0x10;
  uVar1 = *(undefined8 *)&(param_1->ImpactNormal).field_0x8;
  *(undefined8 *)&this->ImpactNormal = *(undefined8 *)&param_1->ImpactNormal;
  *(undefined8 *)&(this->ImpactNormal).field_0x8 = uVar1;
  *(undefined8 *)&(this->ImpactNormal).field_0x10 =
       *(undefined8 *)&(param_1->ImpactNormal).field_0x10;
  uVar1 = *(undefined8 *)&(param_1->TraceStart).field_0x8;
  *(undefined8 *)&this->TraceStart = *(undefined8 *)&param_1->TraceStart;
  *(undefined8 *)&(this->TraceStart).field_0x8 = uVar1;
  *(undefined8 *)&(this->TraceStart).field_0x10 = *(undefined8 *)&(param_1->TraceStart).field_0x10;
  uVar1 = *(undefined8 *)&(param_1->TraceEnd).field_0x8;
  *(undefined8 *)&this->TraceEnd = *(undefined8 *)&param_1->TraceEnd;
  *(undefined8 *)&(this->TraceEnd).field_0x8 = uVar1;
  *(undefined8 *)&(this->TraceEnd).field_0x10 = *(undefined8 *)&(param_1->TraceEnd).field_0x10;
  this->PenetrationDepth = param_1->PenetrationDepth;
  this->MyItem = param_1->MyItem;
  this->Item = param_1->Item;
  this->ElementIndex = param_1->ElementIndex;
  bVar2 = (this->bBlockingHit ^ param_1->bBlockingHit) & 1 ^ this->field_0xad;
  this->field_0xad = bVar2;
  this->field_0xad = (bVar2 ^ param_1->field_0xad) & 2 ^ bVar2;
  (this->PhysMaterial).WeakPtr = (param_1->PhysMaterial).WeakPtr;
  FActorInstanceHandle::FActorInstanceHandle(&this->HitObjectHandle,&param_1->HitObjectHandle);
  (this->Component).WeakPtr = (param_1->Component).WeakPtr;
  (this->PhysicsObjectOwner).WeakPtr = (param_1->PhysicsObjectOwner).WeakPtr;
  this->PhysicsObject = param_1->PhysicsObject;
  this->BoneName = param_1->BoneName;
  this->MyBoneName = param_1->MyBoneName;
  return this;
}

// FHitResult @ 1476e7950

FHitResult * __thiscall FHitResult::FHitResult(FHitResult *this,FHitResult *param_1)

{
  undefined8 uVar1;
  byte bVar2;
  
  this->FaceIndex = param_1->FaceIndex;
  this->Time = param_1->Time;
  this->Distance = param_1->Distance;
  uVar1 = *(undefined8 *)&(param_1->Location).field_0x8;
  *(undefined8 *)&this->Location = *(undefined8 *)&param_1->Location;
  *(undefined8 *)&(this->Location).field_0x8 = uVar1;
  *(undefined8 *)&(this->Location).field_0x10 = *(undefined8 *)&(param_1->Location).field_0x10;
  uVar1 = *(undefined8 *)&(param_1->ImpactPoint).field_0x8;
  *(undefined8 *)&this->ImpactPoint = *(undefined8 *)&param_1->ImpactPoint;
  *(undefined8 *)&(this->ImpactPoint).field_0x8 = uVar1;
  *(undefined8 *)&(this->ImpactPoint).field_0x10 = *(undefined8 *)&(param_1->ImpactPoint).field_0x10
  ;
  uVar1 = *(undefined8 *)&(param_1->Normal).field_0x8;
  *(undefined8 *)&this->Normal = *(undefined8 *)&param_1->Normal;
  *(undefined8 *)&(this->Normal).field_0x8 = uVar1;
  *(undefined8 *)&(this->Normal).field_0x10 = *(undefined8 *)&(param_1->Normal).field_0x10;
  uVar1 = *(undefined8 *)&(param_1->ImpactNormal).field_0x8;
  *(undefined8 *)&this->ImpactNormal = *(undefined8 *)&param_1->ImpactNormal;
  *(undefined8 *)&(this->ImpactNormal).field_0x8 = uVar1;
  *(undefined8 *)&(this->ImpactNormal).field_0x10 =
       *(undefined8 *)&(param_1->ImpactNormal).field_0x10;
  uVar1 = *(undefined8 *)&(param_1->TraceStart).field_0x8;
  *(undefined8 *)&this->TraceStart = *(undefined8 *)&param_1->TraceStart;
  *(undefined8 *)&(this->TraceStart).field_0x8 = uVar1;
  *(undefined8 *)&(this->TraceStart).field_0x10 = *(undefined8 *)&(param_1->TraceStart).field_0x10;
  uVar1 = *(undefined8 *)&(param_1->TraceEnd).field_0x8;
  *(undefined8 *)&this->TraceEnd = *(undefined8 *)&param_1->TraceEnd;
  *(undefined8 *)&(this->TraceEnd).field_0x8 = uVar1;
  *(undefined8 *)&(this->TraceEnd).field_0x10 = *(undefined8 *)&(param_1->TraceEnd).field_0x10;
  this->PenetrationDepth = param_1->PenetrationDepth;
  this->MyItem = param_1->MyItem;
  this->Item = param_1->Item;
  this->ElementIndex = param_1->ElementIndex;
  bVar2 = (this->bBlockingHit ^ param_1->bBlockingHit) & 1 ^ this->field_0xad;
  this->field_0xad = bVar2;
  this->field_0xad = (bVar2 ^ param_1->field_0xad) & 2 ^ bVar2;
  (this->PhysMaterial).WeakPtr = (param_1->PhysMaterial).WeakPtr;
  FActorInstanceHandle::FActorInstanceHandle(&this->HitObjectHandle,&param_1->HitObjectHandle);
  (this->Component).WeakPtr = (param_1->Component).WeakPtr;
  (this->PhysicsObjectOwner).WeakPtr = (param_1->PhysicsObjectOwner).WeakPtr;
  this->PhysicsObject = param_1->PhysicsObject;
  this->BoneName = param_1->BoneName;
  this->MyBoneName = param_1->MyBoneName;
  return this;
}

// Reset @ 147724620

void __thiscall FHitResult::Reset(FHitResult *this,float param_1,bool param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar3 = *(undefined8 *)&this->TraceStart;
  uVar4 = *(undefined8 *)&(this->TraceStart).field_0x8;
  uVar1 = *(undefined8 *)&(this->TraceStart).field_0x10;
  uVar5 = *(undefined8 *)&this->TraceEnd;
  uVar6 = *(undefined8 *)&(this->TraceEnd).field_0x8;
  uVar2 = *(undefined8 *)&(this->TraceEnd).field_0x10;
  memset(this,0,0x100);
  this->Time = param_1;
  this->MyItem = -1;
  (this->HitObjectHandle).ReferenceObject.WeakPtr = (FWeakObjectPtr)0x0;
  (this->HitObjectHandle).ManagerInterface.ObjectInstance.WeakPtr = (FWeakObjectPtr)0x0;
  (this->HitObjectHandle).ManagerInterface.InterfaceInstance = (IActorInstanceManagerInterface *)0x0
  ;
  (this->HitObjectHandle).InstanceIndex = -1;
  (this->HitObjectHandle).ResolutionStatus = Invalid;
  *(undefined3 *)&(this->HitObjectHandle).field_0x1d = 0;
  if (param_2) {
    *(undefined8 *)&this->TraceStart = uVar3;
    *(undefined8 *)&(this->TraceStart).field_0x8 = uVar4;
    *(undefined8 *)&this->TraceEnd = uVar5;
    *(undefined8 *)&(this->TraceEnd).field_0x8 = uVar6;
    *(undefined8 *)&(this->TraceStart).field_0x10 = uVar1;
    *(undefined8 *)&(this->TraceEnd).field_0x10 = uVar2;
  }
  return;
}

// StaticStruct @ 147ba7d50

UScriptStruct * __cdecl FHitResult::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FHitResult.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FHitResult.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FHitResult,(UObject *)pUVar1,L"HitResult");
  }
  return Z_Registration_Info_UScriptStruct_FHitResult.OuterSingleton;
}

// FHitResult @ 147bb9080

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FHitResult * __thiscall
FHitResult::FHitResult
          (FHitResult *this,AActor *param_1,UPrimitiveComponent *param_2,TVector<double> *param_3,
          TVector<double> *param_4)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  FWeakObjectPtr local_28;
  FWeakObjectPtr FStack_20;
  IActorInstanceManagerInterface *local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  memset(this,0,0x100);
  dVar2 = (param_3->field0_0x0)._s_0.Y;
  dVar1 = (param_3->field0_0x0)._s_0.Z;
  *(double *)&this->Location = (param_3->field0_0x0)._s_0.X;
  *(double *)&(this->Location).field_0x8 = dVar2;
  *(double *)&(this->Location).field_0x10 = dVar1;
  dVar2 = (param_3->field0_0x0)._s_0.Y;
  dVar1 = (param_3->field0_0x0)._s_0.Z;
  *(double *)&this->ImpactPoint = (param_3->field0_0x0)._s_0.X;
  *(double *)&(this->ImpactPoint).field_0x8 = dVar2;
  *(double *)&(this->ImpactPoint).field_0x10 = dVar1;
  dVar2 = (param_4->field0_0x0)._s_0.Y;
  dVar1 = (param_4->field0_0x0)._s_0.Z;
  *(double *)&this->Normal = (param_4->field0_0x0)._s_0.X;
  *(double *)&(this->Normal).field_0x8 = dVar2;
  *(double *)&(this->Normal).field_0x10 = dVar1;
  dVar2 = (param_4->field0_0x0)._s_0.Y;
  dVar1 = (param_4->field0_0x0)._s_0.Z;
  *(double *)&this->ImpactNormal = (param_4->field0_0x0)._s_0.X;
  *(double *)&(this->ImpactNormal).field_0x8 = dVar2;
  *(double *)&(this->ImpactNormal).field_0x10 = dVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_28.ObjectIndex = 0;
  local_28.ObjectSerialNumber = 0;
  param_4 = (TVector<double> *)param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_28,(FObjectPtr)&param_4);
  FStack_20.ObjectIndex = 0;
  FStack_20.ObjectSerialNumber = 0;
  local_18 = (IActorInstanceManagerInterface *)0x0;
  uStack_10 = 0xffffffff;
  uStack_c = CONCAT31(uStack_c._1_3_,1);
  if (UE::FActorInstanceHandle::Private::bValidateAccessFromGameThread != false) {
    bVar3 = IsInGameThread();
    if (!bVar3) {
      bVar3 = IsInParallelGameThread();
      if (!bVar3) {
        `FActorInstanceHandle::FActorInstanceHandle'::__l5::<lambda_1>::operator()(&param_4);
      }
    }
  }
  (this->HitObjectHandle).ReferenceObject.WeakPtr = local_28;
  (this->HitObjectHandle).ManagerInterface.ObjectInstance.WeakPtr = FStack_20;
  (this->HitObjectHandle).ManagerInterface.InterfaceInstance = local_18;
  (this->HitObjectHandle).InstanceIndex = uStack_10;
  (this->HitObjectHandle).ResolutionStatus = (char)uStack_c;
  *(int3 *)&(this->HitObjectHandle).field_0x1d = (int3)((uint)uStack_c >> 8);
  param_4 = (TVector<double> *)param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_2 != (UPrimitiveComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=(&(this->Component).WeakPtr,(FObjectPtr)&param_4);
  return this;
}

// NetSerialize @ 147bf2d50

bool __thiscall
FHitResult::NetSerialize(FHitResult *this,FArchive *param_1,UPackageMap *param_2,bool *param_3)

{
  float *pfVar1;
  undefined8 uVar2;
  float *pfVar3;
  int *piVar4;
  int *piVar5;
  uchar *puVar6;
  undefined8 uVar7;
  UObject *pUVar8;
  byte bVar9;
  byte bVar10;
  uint uVar11;
  char cVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  bool bVar16;
  bool bVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  UObject *local_res8;
  byte local_res10 [8];
  UObject *local_res20;
  
  bVar14 = 0;
  bVar13 = 0;
  bVar10 = 0;
  bVar9 = 0;
  bVar16 = false;
  bVar17 = false;
  cVar12 = '\0';
  if ((param_1->field_0x28 & 4) != 0) {
    bVar13 = bVar14;
    if (((*(double *)&this->Location == *(double *)&this->ImpactPoint) &&
        (*(double *)&(this->Location).field_0x8 == *(double *)&(this->ImpactPoint).field_0x8)) &&
       (*(double *)&(this->Location).field_0x10 == *(double *)&(this->ImpactPoint).field_0x10)) {
      bVar13 = 1;
    }
    bVar9 = bVar10;
    if (((*(double *)&this->Normal == *(double *)&this->ImpactNormal) &&
        (*(double *)&(this->Normal).field_0x8 == *(double *)&(this->ImpactNormal).field_0x8)) &&
       (*(double *)&(this->Normal).field_0x10 == *(double *)&(this->ImpactNormal).field_0x10)) {
      bVar9 = 1;
    }
    bVar16 = this->Item == -1;
    bVar17 = this->FaceIndex == -1;
    if (this->PenetrationDepth == 0.0) {
      cVar12 = '\x01';
    }
  }
  local_res10[0] =
       ((((cVar12 * '\x02' | bVar17) * '\x02' | bVar16) * '\x02' | bVar9) * '\x02' | bVar13) << 2 |
       this->field_0xad & 3;
  (**(code **)(*(longlong *)param_1 + 400))(param_1,local_res10,8);
  bVar13 = local_res10[0];
  this->field_0xad = this->field_0xad & 0xfc | local_res10[0] & 3;
  bVar9 = local_res10[0] >> 4;
  bVar15 = local_res10[0] >> 2;
  pfVar3 = (float *)**(undefined8 **)&param_1->field_0x8;
  bVar10 = local_res10[0] >> 5;
  bVar14 = local_res10[0] >> 3;
  local_res20 = (UObject *)(CONCAT71(local_res20._1_7_,local_res10[0] >> 6) & 0xffffffffffffff01);
  pfVar1 = &this->Time;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  *param_3 = true;
  local_res8 = (UObject *)CONCAT71(local_res8._1_7_,1);
  FVector_NetQuantize::NetSerialize(&this->Location,param_1,param_2,(bool *)&local_res8);
  *param_3 = (bool)(*param_3 & (byte)local_res8);
  FVector_NetQuantizeNormal::NetSerialize(&this->Normal,param_1,param_2,(bool *)&local_res8);
  *param_3 = (bool)(*param_3 & (byte)local_res8);
  if ((bVar15 & 1) == 0) {
    FVector_NetQuantize::NetSerialize(&this->ImpactPoint,param_1,param_2,(bool *)&local_res8);
    *param_3 = (bool)(*param_3 & (byte)local_res8);
  }
  else if ((param_1->field_0x28 & 1) != 0) {
    uVar7 = *(undefined8 *)&(this->Location).field_0x8;
    uVar2 = *(undefined8 *)&(this->Location).field_0x10;
    *(undefined8 *)&this->ImpactPoint = *(undefined8 *)&this->Location;
    *(undefined8 *)&(this->ImpactPoint).field_0x8 = uVar7;
    *(undefined8 *)&(this->ImpactPoint).field_0x10 = uVar2;
  }
  if ((bVar14 & 1) == 0) {
    FVector_NetQuantizeNormal::NetSerialize(&this->ImpactNormal,param_1,param_2,(bool *)&local_res8)
    ;
    *param_3 = (bool)(*param_3 & (byte)local_res8);
  }
  else if ((param_1->field_0x28 & 1) != 0) {
    uVar7 = *(undefined8 *)&(this->Normal).field_0x8;
    uVar2 = *(undefined8 *)&(this->Normal).field_0x10;
    *(undefined8 *)&this->ImpactNormal = *(undefined8 *)&this->Normal;
    *(undefined8 *)&(this->ImpactNormal).field_0x8 = uVar7;
    *(undefined8 *)&(this->ImpactNormal).field_0x10 = uVar2;
  }
  FVector_NetQuantize::NetSerialize(&this->TraceStart,param_1,param_2,(bool *)&local_res8);
  *param_3 = (bool)(*param_3 & (byte)local_res8);
  FVector_NetQuantize::NetSerialize(&this->TraceEnd,param_1,param_2,(bool *)&local_res8);
  *param_3 = (bool)(*param_3 & (byte)local_res8);
  if ((char)local_res20 == '\0') {
    pfVar1 = &this->PenetrationDepth;
    pfVar3 = (float *)**(undefined8 **)&param_1->field_0x8;
    if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
      }
    }
    else {
      *pfVar1 = *pfVar3;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
  }
  else if ((param_1->field_0x28 & 1) != 0) {
    this->PenetrationDepth = 0.0;
  }
  bVar14 = param_1->field_0x28;
  if (((bVar14 & 1) != 0) && (*param_3 != false)) {
    dVar22 = *(double *)&(this->ImpactPoint).field_0x8 - *(double *)&(this->TraceStart).field_0x8;
    dVar21 = *(double *)&this->ImpactPoint - *(double *)&this->TraceStart;
    dVar18 = *(double *)&(this->ImpactPoint).field_0x10 - *(double *)&(this->TraceStart).field_0x10;
    auVar19._0_8_ = dVar18 * dVar18;
    auVar19._8_8_ = 0;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = dVar22 * dVar22 + dVar21 * dVar21 + auVar19._0_8_;
    auVar20 = sqrtpd(auVar19,auVar20);
    this->Distance = (float)auVar20._0_8_;
    bVar14 = param_1->field_0x28;
  }
  if ((bVar9 & 1) == 0) {
    piVar5 = &this->Item;
    piVar4 = (int *)**(undefined8 **)&param_1->field_0x8;
    if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar5,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar5);
      }
    }
    else {
      *piVar5 = *piVar4;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
  }
  else if ((bVar14 & 1) != 0) {
    this->Item = -1;
  }
  (**(code **)(*(longlong *)param_1 + 0x138))(param_1,&this->PhysMaterial);
  if ((param_1->field_0x28 & 1) != 0) {
    uVar11 = (**(code **)(*(longlong *)param_1 + 0x48))(param_1);
    if (uVar11 < 0x13) {
      local_res20 = (UObject *)0x0;
      (**(code **)(*(longlong *)param_1 + 0x168))(param_1,&local_res20);
      pUVar8 = local_res20;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res20);
      }
      (this->HitObjectHandle).ReferenceObject.WeakPtr = (FWeakObjectPtr)0x0;
      local_res8 = pUVar8;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar8);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->HitObjectHandle,(FObjectPtr)&local_res8);
      (this->HitObjectHandle).ManagerInterface.ObjectInstance.WeakPtr = (FWeakObjectPtr)0x0;
      (this->HitObjectHandle).ManagerInterface.InterfaceInstance =
           (IActorInstanceManagerInterface *)0x0;
      (this->HitObjectHandle).InstanceIndex = -1;
      (this->HitObjectHandle).ResolutionStatus = Resolved;
      if (UE::FActorInstanceHandle::Private::bValidateAccessFromGameThread != false) {
        bVar16 = IsInGameThread();
        if (!bVar16) {
          bVar16 = IsInParallelGameThread();
          if (!bVar16) {
            `FActorInstanceHandle::FActorInstanceHandle'::__l5::<lambda_1>::operator()(&local_res8);
          }
        }
      }
      goto LAB_147bf31af;
    }
  }
  ::operator<<(param_1,&this->HitObjectHandle);
LAB_147bf31af:
  (**(code **)(*(longlong *)param_1 + 0x138))(param_1,&this->Component);
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->BoneName);
  if ((bVar10 & 1) == 0) {
    piVar5 = (int *)**(undefined8 **)&param_1->field_0x8;
    if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar5 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)this);
      }
    }
    else {
      this->FaceIndex = *piVar5;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
  }
  else if ((param_1->field_0x28 & 1) != 0) {
    this->FaceIndex = -1;
  }
  if ((char)bVar13 < '\0') {
    if ((param_1->field_0x28 & 1) != 0) {
      this->ElementIndex = 0xff;
    }
  }
  else {
    puVar6 = (uchar *)**(undefined8 **)&param_1->field_0x8;
    if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar6 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->ElementIndex,1);
    }
    else {
      this->ElementIndex = *puVar6;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    }
  }
  return true;
}

// ToString @ 147c07eb0

FString * __thiscall FHitResult::ToString(FHitResult *this,FString *__return_storage_ptr__)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  FName FVar9;
  FName local_128;
  FName local_120;
  FScriptContainerElement *local_118;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70 [3];
  
  bVar3 = ::FName::IsWithinBounds((FNameEntryId)(this->BoneName).ComparisonIndex.Value);
  local_120 = (FName)&u_None;
  if (bVar3) {
    ::FName::ToString(&this->BoneName,local_70);
  }
  bVar2 = false;
  bVar4 = FWeakObjectPtr::IsValid(&(this->Component).WeakPtr);
  if (bVar4) {
    pUVar7 = FWeakObjectPtr::Get(&(this->Component).WeakPtr);
    bVar2 = true;
    local_128.ComparisonIndex.Value = *(uint *)&pUVar7->field_0x18;
    local_128.Number = *(uint *)&pUVar7->field_0x1c;
    ::FName::ToString(&local_128,&local_80);
    local_118 = (FScriptContainerElement *)0x15060d16c;
    if (local_80.Data.ArrayNum != 0) {
      local_118 = local_80.Data.AllocatorInstance.Data;
    }
  }
  else {
    local_118 = (FScriptContainerElement *)&u_None;
  }
  bVar4 = false;
  bVar5 = FActorInstanceHandle::IsValid(&this->HitObjectHandle);
  FVar9 = (FName)&u_None;
  if (!bVar5) goto LAB_147c080a7;
  bVar4 = true;
  FActorInstanceHandle::ResolveHandle(&this->HitObjectHandle);
  pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->HitObjectHandle);
  if (pUVar7 == (UObject *)0x0) {
LAB_147c08008:
    if (((this->HitObjectHandle).ManagerInterface.InterfaceInstance ==
         (IActorInstanceManagerInterface *)0x0) ||
       (bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&(this->HitObjectHandle).ManagerInterface)
       , !bVar5)) {
      ::FString::FString(&local_110,L"Invalid");
    }
    else {
      pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&(this->HitObjectHandle).ManagerInterface);
      if (pUVar7 == (UObject *)0x0) {
        ::FString::FString(&local_100,L"None");
      }
      else {
        local_128.ComparisonIndex.Value = *(uint *)&pUVar7->field_0x18;
        local_128.Number = *(uint *)&pUVar7->field_0x1c;
        ::FName::ToString(&local_128,&local_100);
      }
      ::FString::PrintfImpl(&local_110,L"%s:%d");
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    pUVar8 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar8->_padding_;
    if ((*(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar8->_padding_)) goto LAB_147c08008;
    local_128.ComparisonIndex.Value = *(uint *)&pUVar7->field_0x18;
    local_128.Number = *(uint *)&pUVar7->field_0x1c;
    ::FName::ToString(&local_128,&local_110);
  }
  FVar9 = (FName)L"";
  if (local_110.Data.ArrayNum != 0) {
    FVar9 = (FName)local_110.Data.AllocatorInstance;
  }
LAB_147c080a7:
  bVar5 = false;
  local_128 = FVar9;
  bVar6 = FWeakObjectPtr::IsValid(&(this->PhysMaterial).WeakPtr);
  if (bVar6) {
    pUVar7 = FWeakObjectPtr::Get(&(this->PhysMaterial).WeakPtr);
    bVar5 = true;
    local_120.ComparisonIndex.Value = *(uint *)&pUVar7->field_0x18;
    local_120.Number = *(uint *)&pUVar7->field_0x1c;
    ::FName::ToString(&local_120,&local_90);
    local_120 = (FName)0x15060d16c;
    if (local_90.Data.ArrayNum != 0) {
      local_120 = (FName)local_90.Data.AllocatorInstance.Data;
    }
  }
  ::FString::PrintfImpl(&local_a0,L"X=%3.3f Y=%3.3f Z=%3.3f");
  ::FString::PrintfImpl(&local_b0,L"X=%3.3f Y=%3.3f Z=%3.3f");
  ::FString::PrintfImpl(&local_c0,L"X=%3.3f Y=%3.3f Z=%3.3f");
  ::FString::PrintfImpl(&local_d0,L"X=%3.3f Y=%3.3f Z=%3.3f");
  ::FString::PrintfImpl(&local_e0,L"X=%3.3f Y=%3.3f Z=%3.3f");
  ::FString::PrintfImpl(&local_f0,L"X=%3.3f Y=%3.3f Z=%3.3f");
  ::FString::PrintfImpl
            (__return_storage_ptr__,
             L"bBlockingHit:%s bStartPenetrating:%s Time:%f Location:%s ImpactPoint:%s Normal:%s ImpactNormal:%s TraceStart:%s TraceEnd:%s PenetrationDepth:%f Item:%d PhysMaterial:%s Actor:%s Component:%s BoneName:%s FaceIndex:%d"
            );
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  if ((bVar5) && ((FName)local_90.Data.AllocatorInstance.Data != (FName)0x0)) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  if ((bVar4) && ((FName)local_110.Data.AllocatorInstance.Data != (FName)0x0)) {
    FMemory::Free(local_110.Data.AllocatorInstance.Data);
  }
  if ((bVar2) && (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_70[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_70[0].Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

