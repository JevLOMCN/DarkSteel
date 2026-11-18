// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 5

// StaticStruct @ 14d57a3c0

UScriptStruct * __cdecl FVector3fCameraParameter::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FVector3fCameraParameter.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UScriptStruct_FVector3fCameraParameter.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FVector3fCameraParameter,(UObject *)pUVar1,
                         L"Vector3fCameraParameter");
  }
  return Z_Registration_Info_UScriptStruct_FVector3fCameraParameter.OuterSingleton;
}

// FVector3fCameraParameter @ 14d58ebc0

FVector3fCameraParameter * __thiscall
FVector3fCameraParameter::FVector3fCameraParameter(FVector3fCameraParameter *this)

{
  (this->VariableID).Value = 0xffffffff;
  *(undefined8 *)&(this->Value).field0_0x0 = 0;
  (this->Value).field0_0x0._s_0.Z = 0.0;
  (this->Variable).field0_0x0.DebugPtr = (UVector3fCameraVariable *)0x0;
  return this;
}

// GetValue @ 14d5ac4b0

TVector<float> * __thiscall
FVector3fCameraParameter::GetValue
          (FVector3fCameraParameter *this,TVector<float> *__return_storage_ptr__,
          FCameraVariableTable *param_1)

{
  float fVar1;
  TVector<float> *pTVar2;
  undefined8 uVar3;
  
  if ((this->VariableID).Value != 0xffffffff) {
    pTVar2 = UE::Cameras::FCameraVariableTable::FindValue<UE::Math::TVector<float>_>
                       (param_1,(FCameraVariableID)(this->VariableID).Value);
    if (pTVar2 != (TVector<float> *)0x0) {
      uVar3 = *(undefined8 *)&pTVar2->field0_0x0;
      fVar1 = (pTVar2->field0_0x0)._s_0.Z;
      goto LAB_14d5ac4e6;
    }
  }
  uVar3 = *(undefined8 *)&(this->Value).field0_0x0;
  fVar1 = (this->Value).field0_0x0._s_0.Z;
LAB_14d5ac4e6:
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = uVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar1;
  return __return_storage_ptr__;
}

// PostSerialize @ 14d5c8280

void __thiscall
FVector3fCameraParameter::PostSerialize(FVector3fCameraParameter *this,FArchive *param_1)

{
  int iVar1;
  UVector3fCameraVariable *pUVar2;
  longlong lVar3;
  UClass *pUVar4;
  
  if (((param_1->field_0x28 & 1) != 0) &&
     (pUVar2 = (this->Variable).field0_0x0.DebugPtr, pUVar2 != (UVector3fCameraVariable *)0x0)) {
    lVar3 = pUVar2->_padding_;
    pUVar4 = UCameraRigAsset::StaticClass();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(lVar3 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      (this->Variable).field0_0x0.DebugPtr = (UVector3fCameraVariable *)0x0;
    }
  }
  return;
}

// SerializeFromMismatchedTag @ 14d5cdd50

bool __thiscall
FVector3fCameraParameter::SerializeFromMismatchedTag
          (FVector3fCameraParameter *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2)

{
  FArchive *pFVar1;
  float *pfVar2;
  float *pfVar3;
  FName FVar4;
  bool bVar5;
  FNameEntryId FVar6;
  undefined4 extraout_var;
  FPropertyTypeName local_res10 [4];
  uint local_res20 [2];
  
  local_res10[0].Index = (param_1->TypeName).Index;
  FVar6 = FNameEntryId::FromValidEName((EName)local_res20);
  local_res20[0] = *(uint *)CONCAT44(extraout_var,FVar6.Value);
  local_res20[1] = 0;
  FVar4.Number = 0;
  FVar4.ComparisonIndex.Value = local_res20[0];
  bVar5 = UE::FPropertyTypeName::IsStruct(local_res10,FVar4);
  if (!bVar5) {
    return false;
  }
  pFVar1 = *(FArchive **)(*(longlong *)param_2 + 8);
  pfVar2 = (float *)**(undefined8 **)&pFVar1->field_0x8;
  if ((float *)(*(undefined8 **)&pFVar1->field_0x8)[1] < pfVar2 + 1) {
    if ((pFVar1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,this,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar1,(uint *)this);
    }
  }
  else {
    (this->Value).field0_0x0._s_0.X = *pfVar2;
    **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 4;
  }
  pfVar2 = &(this->Value).field0_0x0._s_0.Y;
  pFVar1 = *(FArchive **)(*(longlong *)param_2 + 8);
  pfVar3 = (float *)**(undefined8 **)&pFVar1->field_0x8;
  if ((float *)(*(undefined8 **)&pFVar1->field_0x8)[1] < pfVar3 + 1) {
    if ((pFVar1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,pfVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar1,(uint *)pfVar2);
    }
  }
  else {
    *pfVar2 = *pfVar3;
    **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 4;
  }
  pfVar2 = &(this->Value).field0_0x0._s_0.Z;
  pFVar1 = *(FArchive **)(*(longlong *)param_2 + 8);
  pfVar3 = (float *)**(undefined8 **)&pFVar1->field_0x8;
  if (pfVar3 + 1 <= (float *)(*(undefined8 **)&pFVar1->field_0x8)[1]) {
    *pfVar2 = *pfVar3;
    **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 4;
    return true;
  }
  if ((pFVar1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,pfVar2,4);
    return true;
  }
  FArchive::SerializeByteOrderSwapped(pFVar1,(uint *)pfVar2);
  return true;
}

