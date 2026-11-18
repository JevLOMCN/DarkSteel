// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 4

// StaticStruct @ 14d56d6c0

UScriptStruct * __cdecl FTransform3fCameraParameter::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTransform3fCameraParameter.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UScriptStruct_FTransform3fCameraParameter.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTransform3fCameraParameter,(UObject *)pUVar1,
                         L"Transform3fCameraParameter");
  }
  return Z_Registration_Info_UScriptStruct_FTransform3fCameraParameter.OuterSingleton;
}

// GetValue @ 14d5ac2a0

TTransform<float> * __thiscall
FTransform3fCameraParameter::GetValue
          (FTransform3fCameraParameter *this,TTransform<float> *__return_storage_ptr__,
          FCameraVariableTable *param_1)

{
  ulong64 uVar1;
  TTransform<float> *pTVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if ((this->VariableID).Value != 0xffffffff) {
    pTVar2 = UE::Cameras::FCameraVariableTable::FindValue<UE::Math::TTransform<float>_>
                       (param_1,(FCameraVariableID)(this->VariableID).Value);
    if (pTVar2 != (TTransform<float> *)0x0) {
      uVar1 = (pTVar2->Rotation).m128_u64[1];
      fVar7 = (pTVar2->Translation).m128_f32[0];
      fVar8 = (pTVar2->Translation).m128_f32[1];
      fVar9 = (pTVar2->Translation).m128_f32[2];
      fVar10 = (pTVar2->Translation).m128_f32[3];
      (__return_storage_ptr__->Rotation).m128_u64[0] = (pTVar2->Rotation).m128_u64[0];
      (__return_storage_ptr__->Rotation).m128_u64[1] = uVar1;
      fVar3 = (pTVar2->Scale3D).m128_f32[0];
      fVar4 = (pTVar2->Scale3D).m128_f32[1];
      fVar5 = (pTVar2->Scale3D).m128_f32[2];
      fVar6 = (pTVar2->Scale3D).m128_f32[3];
      goto LAB_14d5ac2e4;
    }
  }
  uVar1 = (this->Value).Rotation.m128_u64[1];
  fVar7 = (this->Value).Translation.m128_f32[0];
  fVar8 = (this->Value).Translation.m128_f32[1];
  fVar9 = (this->Value).Translation.m128_f32[2];
  fVar10 = (this->Value).Translation.m128_f32[3];
  (__return_storage_ptr__->Rotation).m128_u64[0] = (this->Value).Rotation.m128_u64[0];
  (__return_storage_ptr__->Rotation).m128_u64[1] = uVar1;
  fVar3 = (this->Value).Scale3D.m128_f32[0];
  fVar4 = (this->Value).Scale3D.m128_f32[1];
  fVar5 = (this->Value).Scale3D.m128_f32[2];
  fVar6 = (this->Value).Scale3D.m128_f32[3];
LAB_14d5ac2e4:
  (__return_storage_ptr__->Translation).m128_f32[0] = fVar7;
  (__return_storage_ptr__->Translation).m128_f32[1] = fVar8;
  (__return_storage_ptr__->Translation).m128_f32[2] = fVar9;
  (__return_storage_ptr__->Translation).m128_f32[3] = fVar10;
  (__return_storage_ptr__->Scale3D).m128_f32[0] = fVar3;
  (__return_storage_ptr__->Scale3D).m128_f32[1] = fVar4;
  (__return_storage_ptr__->Scale3D).m128_f32[2] = fVar5;
  (__return_storage_ptr__->Scale3D).m128_f32[3] = fVar6;
  return __return_storage_ptr__;
}

// PostSerialize @ 14d5c8100

void __thiscall
FTransform3fCameraParameter::PostSerialize(FTransform3fCameraParameter *this,FArchive *param_1)

{
  int iVar1;
  UTransform3fCameraVariable *pUVar2;
  longlong lVar3;
  UClass *pUVar4;
  
  if (((param_1->field_0x28 & 1) != 0) &&
     (pUVar2 = (this->Variable).field0_0x0.DebugPtr, pUVar2 != (UTransform3fCameraVariable *)0x0)) {
    lVar3 = pUVar2->_padding_;
    pUVar4 = UCameraRigAsset::StaticClass();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(lVar3 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      (this->Variable).field0_0x0.DebugPtr = (UTransform3fCameraVariable *)0x0;
    }
  }
  return;
}

// SerializeFromMismatchedTag @ 14d5cda10

bool __thiscall
FTransform3fCameraParameter::SerializeFromMismatchedTag
          (FTransform3fCameraParameter *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2)

{
  FName FVar1;
  bool bVar2;
  FNameEntryId FVar3;
  undefined4 extraout_var;
  FArchive *pFVar4;
  __m128 _Var5;
  __m128 _Var6;
  FSlotBase local_res10;
  uint local_res20 [2];
  
  local_res10.StructuredArchive._0_4_ = (param_1->TypeName).Index;
  FVar3 = FNameEntryId::FromValidEName((EName)local_res20);
  local_res20[0] = *(uint *)CONCAT44(extraout_var,FVar3.Value);
  local_res20[1] = 0;
  FVar1.Number = 0;
  FVar1.ComparisonIndex.Value = local_res20[0];
  bVar2 = UE::FPropertyTypeName::IsStruct((FPropertyTypeName *)&local_res10,FVar1);
  if (bVar2) {
    local_res10.StructuredArchive = (FStructuredArchive *)param_2;
    pFVar4 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
    UE::Math::operator<<(pFVar4,(TQuat<float> *)this);
    UE::Math::operator<<(pFVar4,(TVector<float> *)&(this->Value).Translation);
    UE::Math::operator<<(pFVar4,(TVector<float> *)&(this->Value).Scale3D);
    if ((pFVar4->field_0x28 & 1) != 0) {
      _Var5 = (this->Value).Translation;
      _Var6 = (this->Value).Scale3D;
      _Var5.m128_f32 = (float  [4])insertps(_Var5.m128_f32,_Var5.m128_f32,8);
      _Var6.m128_f32 = (float  [4])insertps(_Var6.m128_f32,_Var6.m128_f32,8);
      (this->Value).Translation = _Var5;
      (this->Value).Scale3D = _Var6;
    }
    return true;
  }
  return false;
}

