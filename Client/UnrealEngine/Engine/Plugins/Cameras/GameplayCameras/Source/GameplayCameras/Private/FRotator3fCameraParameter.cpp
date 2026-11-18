// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 5

// StaticStruct @ 14d56c290

UScriptStruct * __cdecl FRotator3fCameraParameter::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRotator3fCameraParameter.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UScriptStruct_FRotator3fCameraParameter.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRotator3fCameraParameter,(UObject *)pUVar1,
                         L"Rotator3fCameraParameter");
  }
  return Z_Registration_Info_UScriptStruct_FRotator3fCameraParameter.OuterSingleton;
}

// FRotator3fCameraParameter @ 14d58e940

FRotator3fCameraParameter * __thiscall
FRotator3fCameraParameter::FRotator3fCameraParameter(FRotator3fCameraParameter *this)

{
  (this->VariableID).Value = 0xffffffff;
  (this->Value).Pitch = 0.0;
  (this->Value).Yaw = 0.0;
  (this->Value).Roll = 0.0;
  (this->Variable).field0_0x0.DebugPtr = (URotator3fCameraVariable *)0x0;
  return this;
}

// GetValue @ 14d5ac170

TRotator<float> * __thiscall
FRotator3fCameraParameter::GetValue
          (FRotator3fCameraParameter *this,TRotator<float> *__return_storage_ptr__,
          FCameraVariableTable *param_1)

{
  float fVar1;
  TRotator<float> *pTVar2;
  undefined8 uVar3;
  
  if ((this->VariableID).Value != 0xffffffff) {
    pTVar2 = UE::Cameras::FCameraVariableTable::FindValue<UE::Math::TRotator<float>_>
                       (param_1,(FCameraVariableID)(this->VariableID).Value);
    if (pTVar2 != (TRotator<float> *)0x0) {
      uVar3._0_4_ = pTVar2->Pitch;
      uVar3._4_4_ = pTVar2->Yaw;
      fVar1 = pTVar2->Roll;
      goto LAB_14d5ac1a6;
    }
  }
  uVar3._0_4_ = (this->Value).Pitch;
  uVar3._4_4_ = (this->Value).Yaw;
  fVar1 = (this->Value).Roll;
LAB_14d5ac1a6:
  __return_storage_ptr__->Pitch = (float)(int)uVar3;
  __return_storage_ptr__->Yaw = (float)(int)((ulonglong)uVar3 >> 0x20);
  __return_storage_ptr__->Roll = fVar1;
  return __return_storage_ptr__;
}

// PostSerialize @ 14d5c8040

void __thiscall
FRotator3fCameraParameter::PostSerialize(FRotator3fCameraParameter *this,FArchive *param_1)

{
  int iVar1;
  URotator3fCameraVariable *pUVar2;
  longlong lVar3;
  UClass *pUVar4;
  
  if (((param_1->field_0x28 & 1) != 0) &&
     (pUVar2 = (this->Variable).field0_0x0.DebugPtr, pUVar2 != (URotator3fCameraVariable *)0x0)) {
    lVar3 = pUVar2->_padding_;
    pUVar4 = UCameraRigAsset::StaticClass();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(lVar3 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      (this->Variable).field0_0x0.DebugPtr = (URotator3fCameraVariable *)0x0;
    }
  }
  return;
}

// SerializeFromMismatchedTag @ 14d5cd800

bool __thiscall
FRotator3fCameraParameter::SerializeFromMismatchedTag
          (FRotator3fCameraParameter *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2)

{
  float *pfVar1;
  float *pfVar2;
  FName FVar3;
  bool bVar4;
  FNameEntryId FVar5;
  undefined4 extraout_var;
  FArchive *this_00;
  FSlotBase local_res10;
  uint local_res20 [2];
  
  local_res10.StructuredArchive._0_4_ = (param_1->TypeName).Index;
  FVar5 = FNameEntryId::FromValidEName((EName)local_res20);
  local_res20[0] = *(uint *)CONCAT44(extraout_var,FVar5.Value);
  local_res20[1] = 0;
  FVar3.Number = 0;
  FVar3.ComparisonIndex.Value = local_res20[0];
  bVar4 = UE::FPropertyTypeName::IsStruct((FPropertyTypeName *)&local_res10,FVar3);
  if (!bVar4) {
    return false;
  }
  local_res10.StructuredArchive = (FStructuredArchive *)param_2;
  this_00 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
  pfVar1 = (float *)**(undefined8 **)&this_00->field_0x8;
  if ((float *)(*(undefined8 **)&this_00->field_0x8)[1] < pfVar1 + 1) {
    if ((this_00->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this_00 + 0x188))(this_00,this,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(this_00,(uint *)this);
    }
  }
  else {
    (this->Value).Pitch = *pfVar1;
    **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
  }
  pfVar1 = &(this->Value).Yaw;
  pfVar2 = (float *)**(undefined8 **)&this_00->field_0x8;
  if ((float *)(*(undefined8 **)&this_00->field_0x8)[1] < pfVar2 + 1) {
    if ((this_00->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this_00 + 0x188))(this_00,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(this_00,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar2;
    **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
  }
  pfVar1 = &(this->Value).Roll;
  pfVar2 = (float *)**(undefined8 **)&this_00->field_0x8;
  if (pfVar2 + 1 <= (float *)(*(undefined8 **)&this_00->field_0x8)[1]) {
    *pfVar1 = *pfVar2;
    **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
    return true;
  }
  if ((this_00->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)this_00 + 0x188))(this_00,pfVar1,4);
    return true;
  }
  FArchive::SerializeByteOrderSwapped(this_00,(uint *)pfVar1);
  return true;
}

