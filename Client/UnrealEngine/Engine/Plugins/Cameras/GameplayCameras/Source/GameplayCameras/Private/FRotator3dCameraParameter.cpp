// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 5

// StaticStruct @ 14d56d220

UScriptStruct * __cdecl FRotator3dCameraParameter::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRotator3dCameraParameter.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UScriptStruct_FRotator3dCameraParameter.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRotator3dCameraParameter,(UObject *)pUVar1,
                         L"Rotator3dCameraParameter");
  }
  return Z_Registration_Info_UScriptStruct_FRotator3dCameraParameter.OuterSingleton;
}

// FRotator3dCameraParameter @ 14d58e910

FRotator3dCameraParameter * __thiscall
FRotator3dCameraParameter::FRotator3dCameraParameter(FRotator3dCameraParameter *this)

{
  (this->VariableID).Value = 0xffffffff;
  (this->Value).Pitch = 0.0;
  (this->Value).Yaw = 0.0;
  (this->Value).Roll = 0.0;
  (this->Variable).field0_0x0.DebugPtr = (URotator3dCameraVariable *)0x0;
  return this;
}

// GetValue @ 14d5ac0f0

TRotator<double> * __thiscall
FRotator3dCameraParameter::GetValue
          (FRotator3dCameraParameter *this,TRotator<double> *__return_storage_ptr__,
          FCameraVariableTable *param_1)

{
  TRotator<double> *pTVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  double dVar6;
  
  if ((this->VariableID).Value != 0xffffffff) {
    pTVar1 = UE::Cameras::FCameraVariableTable::FindValue<UE::Math::TRotator<double>_>
                       (param_1,(FCameraVariableID)(this->VariableID).Value);
    if (pTVar1 != (TRotator<double> *)0x0) {
      uVar2 = *(undefined4 *)&pTVar1->Pitch;
      uVar3 = *(undefined4 *)((longlong)&pTVar1->Pitch + 4);
      uVar4 = *(undefined4 *)&pTVar1->Yaw;
      uVar5 = *(undefined4 *)((longlong)&pTVar1->Yaw + 4);
      dVar6 = pTVar1->Roll;
      goto LAB_14d5ac128;
    }
  }
  uVar2 = *(undefined4 *)&(this->Value).Pitch;
  uVar3 = *(undefined4 *)((longlong)&(this->Value).Pitch + 4);
  uVar4 = *(undefined4 *)&(this->Value).Yaw;
  uVar5 = *(undefined4 *)((longlong)&(this->Value).Yaw + 4);
  dVar6 = (this->Value).Roll;
LAB_14d5ac128:
  *(undefined4 *)&__return_storage_ptr__->Pitch = uVar2;
  *(undefined4 *)((longlong)&__return_storage_ptr__->Pitch + 4) = uVar3;
  *(undefined4 *)&__return_storage_ptr__->Yaw = uVar4;
  *(undefined4 *)((longlong)&__return_storage_ptr__->Yaw + 4) = uVar5;
  __return_storage_ptr__->Roll = dVar6;
  return __return_storage_ptr__;
}

// PostSerialize @ 14d5c7fe0

void __thiscall
FRotator3dCameraParameter::PostSerialize(FRotator3dCameraParameter *this,FArchive *param_1)

{
  int iVar1;
  URotator3dCameraVariable *pUVar2;
  longlong lVar3;
  UClass *pUVar4;
  
  if (((param_1->field_0x28 & 1) != 0) &&
     (pUVar2 = (this->Variable).field0_0x0.DebugPtr, pUVar2 != (URotator3dCameraVariable *)0x0)) {
    lVar3 = pUVar2->_padding_;
    pUVar4 = UCameraRigAsset::StaticClass();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(lVar3 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      (this->Variable).field0_0x0.DebugPtr = (URotator3dCameraVariable *)0x0;
    }
  }
  return;
}

// SerializeFromMismatchedTag @ 14d5cd770

bool __thiscall
FRotator3dCameraParameter::SerializeFromMismatchedTag
          (FRotator3dCameraParameter *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2)

{
  FName FVar1;
  bool bVar2;
  FNameEntryId FVar3;
  undefined4 extraout_var;
  FArchive *pFVar4;
  FSlotBase local_res10 [2];
  uint local_res20 [2];
  
  local_res10[0].StructuredArchive._0_4_ = (param_1->TypeName).Index;
  FVar3 = FNameEntryId::FromValidEName((EName)local_res20);
  local_res20[0] = *(uint *)CONCAT44(extraout_var,FVar3.Value);
  local_res20[1] = 0;
  FVar1.Number = 0;
  FVar1.ComparisonIndex.Value = local_res20[0];
  bVar2 = UE::FPropertyTypeName::IsStruct((FPropertyTypeName *)local_res10,FVar1);
  if (bVar2) {
    local_res10[0].StructuredArchive = (FStructuredArchive *)param_2;
    pFVar4 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
    UE::Math::operator<<(pFVar4,&this->Value);
    return true;
  }
  return false;
}

