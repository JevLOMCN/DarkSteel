// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosVDRuntime
// Functions: 3

// StaticStruct @ 1436c6df0

UScriptStruct * __cdecl FChaosVDShapeCollisionData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDShapeCollisionData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UScriptStruct_FChaosVDShapeCollisionData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDShapeCollisionData,(UObject *)pUVar1,
                         L"ChaosVDShapeCollisionData");
  }
  return Z_Registration_Info_UScriptStruct_FChaosVDShapeCollisionData.OuterSingleton;
}

// operator== @ 1436d7930

bool __thiscall
FChaosVDShapeCollisionData::operator==
          (FChaosVDShapeCollisionData *this,FChaosVDShapeCollisionData *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  if (this->CollisionTraceType == param_1->CollisionTraceType) {
    uVar1 = this->field_0x4;
    uVar2 = param_1->field_0x4;
    if ((((((((this->bSimCollision ^ param_1->bSimCollision) & 1) == 0) &&
           (((uVar2 ^ uVar1) & 2) == 0)) && (((uVar2 ^ uVar1) & 4) == 0)) &&
         (((this->QueryData).Word0 == (param_1->QueryData).Word0 &&
          ((this->QueryData).Word1 == (param_1->QueryData).Word1)))) &&
        (((this->QueryData).Word2 == (param_1->QueryData).Word2 &&
         (((this->QueryData).Word3 == (param_1->QueryData).Word3 &&
          ((this->SimData).Word0 == (param_1->SimData).Word0)))))) &&
       (((this->SimData).Word1 == (param_1->SimData).Word1 &&
        (((this->SimData).Word2 == (param_1->SimData).Word2 &&
         ((this->SimData).Word3 == (param_1->SimData).Word3)))))) {
      return true;
    }
  }
  return false;
}

// Serialize @ 1436e0660

bool __thiscall
FChaosVDShapeCollisionData::Serialize(FChaosVDShapeCollisionData *this,FArchive *param_1)

{
  undefined1 *puVar1;
  EChaosVDCollisionTraceFlag *pEVar2;
  longlong *plVar3;
  byte bVar4;
  int iVar5;
  byte local_res8 [8];
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  pEVar2 = (EChaosVDCollisionTraceFlag *)**(undefined8 **)&param_1->field_0x8;
  if ((EChaosVDCollisionTraceFlag *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&this->CollisionTraceType);
    }
  }
  else {
    this->CollisionTraceType = *pEVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  local_res8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    bVar4 = this->bSimCollision;
    local_res8[0] = bVar4 != 0;
    if (this->bQueryCollision != '\0') {
      bVar4 = bVar4 | 2;
      local_res8[0] = bVar4;
    }
    if (this->bIsProbe != '\0') {
      local_res8[0] = bVar4 | 4;
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((byte *)plVar3[1] < (byte *)*plVar3 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
    }
    else {
      local_res8[0] = *(byte *)*plVar3;
      *plVar3 = *plVar3 + 1;
    }
  }
  else {
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((byte *)plVar3[1] < (byte *)*plVar3 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
      this->bSimCollision = '\0';
      this->bIsProbe = '\0';
      this->bQueryCollision = '\0';
      this->field_0x4 = this->field_0x4 | local_res8[0] & 7;
    }
    else {
      local_res8[0] = *(byte *)*plVar3;
      *plVar3 = *plVar3 + 1;
      this->bSimCollision = '\0';
      this->bIsProbe = '\0';
      this->bQueryCollision = '\0';
      this->field_0x4 = this->field_0x4 | local_res8[0] & 7;
    }
  }
  iVar5 = FArchiveState::CustomVer((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID)
  ;
  if (0x8f < iVar5) {
    FChaosVDCollisionFilterData::Serialize(&this->SimData,param_1);
    FChaosVDCollisionFilterData::Serialize(&this->QueryData,param_1);
  }
  return (bool)((byte)~param_1->field_0x29 >> 1 & 1);
}

