// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosVDRuntime
// Functions: 3

// StaticStruct @ 1436c6090

UScriptStruct * __cdecl FChaosVDJointStateDataWrapper::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDJointStateDataWrapper.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UScriptStruct_FChaosVDJointStateDataWrapper.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDJointStateDataWrapper,(UObject *)pUVar1,
                         L"ChaosVDJointStateDataWrapper");
  }
  return Z_Registration_Info_UScriptStruct_FChaosVDJointStateDataWrapper.OuterSingleton;
}

// operator= @ 1436d6ec0

FChaosVDJointStateDataWrapper * __thiscall
FChaosVDJointStateDataWrapper::operator=
          (FChaosVDJointStateDataWrapper *this,FChaosVDJointStateDataWrapper *param_1)

{
  double dVar1;
  byte bVar2;
  
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  this->Island = param_1->Island;
  this->Level = param_1->Level;
  this->Color = param_1->Color;
  this->IslandSize = param_1->IslandSize;
  bVar2 = (this->bDisabled ^ param_1->bDisabled) & 1 ^ this->field_0x20;
  this->field_0x20 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x20) & 2 ^ bVar2;
  this->field_0x20 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x20) & 4 ^ bVar2;
  this->field_0x20 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x20) & 8 ^ bVar2;
  this->field_0x20 = bVar2;
  this->field_0x20 = (bVar2 ^ param_1->field_0x20) & 0x10 ^ bVar2;
  dVar1 = (param_1->LinearImpulse).field0_0x0._s_0.Y;
  (this->LinearImpulse).field0_0x0._s_0.X = (param_1->LinearImpulse).field0_0x0._s_0.X;
  (this->LinearImpulse).field0_0x0._s_0.Y = dVar1;
  (this->LinearImpulse).field0_0x0._s_0.Z = (param_1->LinearImpulse).field0_0x0._s_0.Z;
  dVar1 = (param_1->AngularImpulse).field0_0x0._s_0.Y;
  (this->AngularImpulse).field0_0x0._s_0.X = (param_1->AngularImpulse).field0_0x0._s_0.X;
  (this->AngularImpulse).field0_0x0._s_0.Y = dVar1;
  (this->AngularImpulse).field0_0x0._s_0.Z = (param_1->AngularImpulse).field0_0x0._s_0.Z;
  this->ResimType = param_1->ResimType;
  this->SyncState = param_1->SyncState;
  return this;
}

// Serialize @ 1436de1f0

bool __thiscall
FChaosVDJointStateDataWrapper::Serialize(FChaosVDJointStateDataWrapper *this,FArchive *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  EChaosVDJointReSimType *pEVar3;
  EChaosVDJointSyncType *pEVar4;
  undefined1 *puVar5;
  int *piVar6;
  longlong *plVar7;
  EChaosVDJointReSimType *pEVar8;
  EChaosVDJointSyncType *pEVar9;
  byte bVar10;
  byte bVar11;
  byte local_res8 [8];
  
  ::operator<<(param_1,(bool *)&this->_padding_);
  if ((char)this->_padding_ != '\0') {
    piVar1 = &this->Island;
    piVar6 = (int *)**(undefined8 **)&param_1->field_0x8;
    if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar6 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
      }
    }
    else {
      *piVar1 = *piVar6;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    piVar1 = &this->Level;
    puVar5 = &param_1->field_0x2a;
    piVar6 = (int *)**(undefined8 **)&param_1->field_0x8;
    if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar6 + 1) {
      if ((*puVar5 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
      }
    }
    else {
      *piVar1 = *piVar6;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    piVar1 = &this->Color;
    piVar6 = (int *)**(undefined8 **)&param_1->field_0x8;
    if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar6 + 1) {
      if ((*puVar5 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
      }
    }
    else {
      *piVar1 = *piVar6;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    piVar1 = &this->IslandSize;
    piVar6 = (int *)**(undefined8 **)&param_1->field_0x8;
    if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar6 + 1) {
      if ((*puVar5 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
      }
    }
    else {
      *piVar1 = *piVar6;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    local_res8[0] = 0;
    if ((param_1->field_0x28 & 1) == 0) {
      bVar11 = this->bDisabled;
      local_res8[0] = bVar11 != 0;
      if (this->bBroken != '\0') {
        local_res8[0] = bVar11 | 2;
        bVar11 = local_res8[0];
      }
      if (this->bBreaking != '\0') {
        local_res8[0] = bVar11 | 4;
      }
      bVar10 = bVar11 | 4;
      if (this->bBreaking == '\0') {
        bVar10 = bVar11;
      }
      if (this->bDriveTargetChanged != '\0') {
        local_res8[0] = bVar10 | 8;
      }
      if (this->bEnabledDuringResim != '\0') {
        local_res8[0] = local_res8[0] | 0x10;
      }
      plVar7 = *(longlong **)&param_1->field_0x8;
      if ((byte *)plVar7[1] < (byte *)*plVar7 + 1) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
      }
      else {
        local_res8[0] = *(byte *)*plVar7;
        *plVar7 = *plVar7 + 1;
      }
    }
    else {
      plVar7 = *(longlong **)&param_1->field_0x8;
      if ((byte *)plVar7[1] < (byte *)*plVar7 + 1) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
        this->bDisabled = '\0';
        this->bEnabledDuringResim = '\0';
        this->bDriveTargetChanged = '\0';
        this->bBreaking = '\0';
        this->bBroken = '\0';
        this->field_0x20 = this->field_0x20 | local_res8[0] & 0x1f;
      }
      else {
        local_res8[0] = *(byte *)*plVar7;
        *plVar7 = *plVar7 + 1;
        this->bDisabled = '\0';
        this->bEnabledDuringResim = '\0';
        this->bDriveTargetChanged = '\0';
        this->bBreaking = '\0';
        this->bBroken = '\0';
        this->field_0x20 = this->field_0x20 | local_res8[0] & 0x1f;
      }
    }
    UE::Math::operator<<(param_1,&this->LinearImpulse);
    UE::Math::operator<<(param_1,&this->AngularImpulse);
    pEVar3 = &this->ResimType;
    pEVar8 = (EChaosVDJointReSimType *)**(undefined8 **)&param_1->field_0x8;
    if ((EChaosVDJointReSimType *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar8 + 1) {
      if ((*puVar5 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pEVar3,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,pEVar3);
      }
    }
    else {
      *pEVar3 = *pEVar8;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    pEVar4 = &this->SyncState;
    pEVar9 = (EChaosVDJointSyncType *)**(undefined8 **)&param_1->field_0x8;
    if ((EChaosVDJointSyncType *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar9 + 1) {
      if ((*puVar5 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pEVar4,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,pEVar4);
      }
    }
    else {
      *pEVar4 = *pEVar9;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
  }
  return (bool)((byte)~param_1->field_0x29 >> 1 & 1);
}

