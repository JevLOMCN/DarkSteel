// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsControl
// Functions: 3

// StaticStruct @ 14d9b0ec0

UScriptStruct * __cdecl FPhysicsControlData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPhysicsControlData.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_PhysicsControl();
    Z_Registration_Info_UScriptStruct_FPhysicsControlData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPhysicsControlData,(UObject *)pUVar1,
                         L"PhysicsControlData");
  }
  return Z_Registration_Info_UScriptStruct_FPhysicsControlData.OuterSingleton;
}

// GetControlPoint @ 14d9dd990

TVector<double> * __thiscall
FPhysicsControlData::GetControlPoint
          (FPhysicsControlData *this,TVector<double> *__return_storage_ptr__,FActorHandle *param_1)

{
  double dVar1;
  
  if (this->bUseCustomControlPoint != false) {
    dVar1 = (this->CustomControlPoint).field0_0x0._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (this->CustomControlPoint).field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (this->CustomControlPoint).field0_0x0._s_0.Z;
    return __return_storage_ptr__;
  }
  ImmediatePhysics_Chaos::FActorHandle::GetLocalCoMLocation(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// UpdateFromSparseData @ 14d9f17e0

void __thiscall
FPhysicsControlData::UpdateFromSparseData
          (FPhysicsControlData *this,FPhysicsControlSparseData *param_1)

{
  double dVar1;
  bool bVar2;
  FPhysicsControlSparseData *pFVar3;
  TVector<double> *pTVar4;
  float fVar5;
  
  pFVar3 = param_1;
  if (param_1->bEnableLinearStrength == '\0') {
    pFVar3 = (FPhysicsControlSparseData *)&this->LinearStrength;
  }
  this->LinearStrength = pFVar3->LinearStrength;
  if (param_1->bEnableLinearDampingRatio == '\0') {
    fVar5 = this->LinearDampingRatio;
  }
  else {
    fVar5 = param_1->LinearDampingRatio;
  }
  this->LinearDampingRatio = fVar5;
  if ((bool)param_1->bEnableLinearExtraDamping) {
    fVar5 = param_1->LinearExtraDamping;
  }
  else {
    fVar5 = this->LinearExtraDamping;
  }
  this->LinearExtraDamping = fVar5;
  if (param_1->bEnableMaxForce == 0) {
    fVar5 = this->MaxForce;
  }
  else {
    fVar5 = param_1->MaxForce;
  }
  this->MaxForce = fVar5;
  if (param_1->bEnableAngularStrength == '\0') {
    fVar5 = this->AngularStrength;
  }
  else {
    fVar5 = param_1->AngularStrength;
  }
  this->AngularStrength = fVar5;
  if (param_1->bEnableAngularDampingRatio == '\0') {
    fVar5 = this->AngularDampingRatio;
  }
  else {
    fVar5 = param_1->AngularDampingRatio;
  }
  this->AngularDampingRatio = fVar5;
  if (param_1->bEnableAngularExtraDamping == '\0') {
    fVar5 = this->AngularExtraDamping;
  }
  else {
    fVar5 = param_1->AngularExtraDamping;
  }
  this->AngularExtraDamping = fVar5;
  if (param_1->bEnableMaxTorque == '\0') {
    fVar5 = this->MaxTorque;
  }
  else {
    fVar5 = param_1->MaxTorque;
  }
  this->MaxTorque = fVar5;
  if (param_1->bEnableLinearTargetVelocityMultiplier == '\0') {
    fVar5 = this->LinearTargetVelocityMultiplier;
  }
  else {
    fVar5 = param_1->LinearTargetVelocityMultiplier;
  }
  this->LinearTargetVelocityMultiplier = fVar5;
  if (param_1->bEnableAngularTargetVelocityMultiplier == '\0') {
    fVar5 = this->AngularTargetVelocityMultiplier;
  }
  else {
    fVar5 = param_1->AngularTargetVelocityMultiplier;
  }
  this->AngularTargetVelocityMultiplier = fVar5;
  pTVar4 = &param_1->CustomControlPoint;
  if (!(bool)param_1->bEnableCustomControlPoint) {
    pTVar4 = &this->CustomControlPoint;
  }
  dVar1 = (pTVar4->field0_0x0)._s_0.Y;
  (this->CustomControlPoint).field0_0x0._s_0.X = (pTVar4->field0_0x0)._s_0.X;
  (this->CustomControlPoint).field0_0x0._s_0.Y = dVar1;
  (this->CustomControlPoint).field0_0x0._s_0.Z = (pTVar4->field0_0x0)._s_0.Z;
  if (param_1->bEnablebEnabled == 0) {
    bVar2 = this->bEnabled;
  }
  else {
    bVar2 = param_1->bEnabled;
  }
  this->bEnabled = bVar2;
  if (param_1->bEnablebUseCustomControlPoint == '\0') {
    bVar2 = this->bUseCustomControlPoint;
  }
  else {
    bVar2 = param_1->bUseCustomControlPoint;
  }
  this->bUseCustomControlPoint = bVar2;
  if (param_1->bEnablebUseSkeletalAnimation == '\0') {
    bVar2 = this->bUseSkeletalAnimation;
  }
  else {
    bVar2 = param_1->bUseSkeletalAnimation;
  }
  this->bUseSkeletalAnimation = bVar2;
  if (param_1->bEnablebDisableCollision == '\0') {
    bVar2 = this->bDisableCollision;
  }
  else {
    bVar2 = param_1->bDisableCollision;
  }
  this->bDisableCollision = bVar2;
  if (param_1->bEnablebOnlyControlChildObject != '\0') {
    this->bOnlyControlChildObject = param_1->bOnlyControlChildObject;
    return;
  }
  this->bOnlyControlChildObject = this->bOnlyControlChildObject;
  return;
}

