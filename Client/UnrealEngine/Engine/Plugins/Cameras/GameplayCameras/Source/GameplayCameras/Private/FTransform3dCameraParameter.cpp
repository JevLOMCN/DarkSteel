// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 5

// StaticStruct @ 14d56e270

UScriptStruct * __cdecl FTransform3dCameraParameter::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTransform3dCameraParameter.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UScriptStruct_FTransform3dCameraParameter.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTransform3dCameraParameter,(UObject *)pUVar1,
                         L"Transform3dCameraParameter");
  }
  return Z_Registration_Info_UScriptStruct_FTransform3dCameraParameter.OuterSingleton;
}

// operator= @ 14d593000

FTransform3dCameraParameter * __thiscall
FTransform3dCameraParameter::operator=
          (FTransform3dCameraParameter *this,FTransform3dCameraParameter *param_1)

{
  UTransform3dCameraVariable *pUVar1;
  double dVar2;
  
  dVar2 = (param_1->Value).Rotation.XY.m128d_f64[1];
  (this->Value).Rotation.XY.m128d_f64[0] = (param_1->Value).Rotation.XY.m128d_f64[0];
  (this->Value).Rotation.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Value).Rotation.ZW.m128d_f64[1];
  (this->Value).Rotation.ZW.m128d_f64[0] = (param_1->Value).Rotation.ZW.m128d_f64[0];
  (this->Value).Rotation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Value).Translation.XY.m128d_f64[1];
  (this->Value).Translation.XY.m128d_f64[0] = (param_1->Value).Translation.XY.m128d_f64[0];
  (this->Value).Translation.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Value).Translation.ZW.m128d_f64[1];
  (this->Value).Translation.ZW.m128d_f64[0] = (param_1->Value).Translation.ZW.m128d_f64[0];
  (this->Value).Translation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Value).Scale3D.XY.m128d_f64[1];
  (this->Value).Scale3D.XY.m128d_f64[0] = (param_1->Value).Scale3D.XY.m128d_f64[0];
  (this->Value).Scale3D.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Value).Scale3D.ZW.m128d_f64[1];
  (this->Value).Scale3D.ZW.m128d_f64[0] = (param_1->Value).Scale3D.ZW.m128d_f64[0];
  (this->Value).Scale3D.ZW.m128d_f64[1] = dVar2;
  (this->VariableID).Value = (param_1->VariableID).Value;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->Variable).field0_0x0.DebugPtr, pUVar1 != (UTransform3dCameraVariable *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->Variable).field0_0x0 = (param_1->Variable).field0_0x0;
  return this;
}

// GetValue @ 14d5ac1f0

TTransform<double> * __thiscall
FTransform3dCameraParameter::GetValue
          (FTransform3dCameraParameter *this,TTransform<double> *__return_storage_ptr__,
          FCameraVariableTable *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  TTransform<double> *pTVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  if ((this->VariableID).Value != 0xffffffff) {
    pTVar5 = UE::Cameras::FCameraVariableTable::FindValue<UE::Math::TTransform<double>_>
                       (param_1,(FCameraVariableID)(this->VariableID).Value);
    if (pTVar5 != (TTransform<double> *)0x0) {
      dVar1 = (pTVar5->Rotation).XY.m128d_f64[1];
      dVar2 = (pTVar5->Rotation).ZW.m128d_f64[0];
      dVar3 = (pTVar5->Rotation).ZW.m128d_f64[1];
      (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (pTVar5->Rotation).XY.m128d_f64[0];
      (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar1;
      dVar1 = (pTVar5->Translation).XY.m128d_f64[0];
      dVar4 = (pTVar5->Translation).XY.m128d_f64[1];
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar2;
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar3;
      dVar2 = (pTVar5->Translation).ZW.m128d_f64[0];
      dVar3 = (pTVar5->Translation).ZW.m128d_f64[1];
      (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar1;
      (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar4;
      uVar6 = *(undefined4 *)(pTVar5->Scale3D).XY.m128d_f64;
      uVar7 = *(undefined4 *)((longlong)(pTVar5->Scale3D).XY.m128d_f64 + 4);
      uVar8 = *(undefined4 *)((pTVar5->Scale3D).XY.m128d_f64 + 1);
      uVar9 = *(undefined4 *)((longlong)(pTVar5->Scale3D).XY.m128d_f64 + 0xc);
      (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar2;
      (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar3;
      uVar10 = *(undefined4 *)(pTVar5->Scale3D).ZW.m128d_f64;
      uVar11 = *(undefined4 *)((longlong)(pTVar5->Scale3D).ZW.m128d_f64 + 4);
      uVar12 = *(undefined4 *)((pTVar5->Scale3D).ZW.m128d_f64 + 1);
      uVar13 = *(undefined4 *)((longlong)(pTVar5->Scale3D).ZW.m128d_f64 + 0xc);
      goto LAB_14d5ac264;
    }
  }
  dVar1 = (this->Value).Rotation.XY.m128d_f64[1];
  dVar2 = (this->Value).Rotation.ZW.m128d_f64[0];
  dVar3 = (this->Value).Rotation.ZW.m128d_f64[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (this->Value).Rotation.XY.m128d_f64[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar1;
  dVar1 = (this->Value).Translation.XY.m128d_f64[0];
  dVar4 = (this->Value).Translation.XY.m128d_f64[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar3;
  dVar2 = (this->Value).Translation.ZW.m128d_f64[0];
  dVar3 = (this->Value).Translation.ZW.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar1;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar4;
  uVar6 = *(undefined4 *)(this->Value).Scale3D.XY.m128d_f64;
  uVar7 = *(undefined4 *)((longlong)(this->Value).Scale3D.XY.m128d_f64 + 4);
  uVar8 = *(undefined4 *)((this->Value).Scale3D.XY.m128d_f64 + 1);
  uVar9 = *(undefined4 *)((longlong)(this->Value).Scale3D.XY.m128d_f64 + 0xc);
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar3;
  uVar10 = *(undefined4 *)(this->Value).Scale3D.ZW.m128d_f64;
  uVar11 = *(undefined4 *)((longlong)(this->Value).Scale3D.ZW.m128d_f64 + 4);
  uVar12 = *(undefined4 *)((this->Value).Scale3D.ZW.m128d_f64 + 1);
  uVar13 = *(undefined4 *)((longlong)(this->Value).Scale3D.ZW.m128d_f64 + 0xc);
LAB_14d5ac264:
  *(undefined4 *)(__return_storage_ptr__->Scale3D).XY.m128d_f64 = uVar6;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).XY.m128d_f64 + 4) = uVar7;
  *(undefined4 *)((__return_storage_ptr__->Scale3D).XY.m128d_f64 + 1) = uVar8;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).XY.m128d_f64 + 0xc) = uVar9;
  *(undefined4 *)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = uVar10;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 4) = uVar11;
  *(undefined4 *)((__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 1) = uVar12;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 0xc) = uVar13;
  return __return_storage_ptr__;
}

// PostSerialize @ 14d5c80a0

void __thiscall
FTransform3dCameraParameter::PostSerialize(FTransform3dCameraParameter *this,FArchive *param_1)

{
  int iVar1;
  UTransform3dCameraVariable *pUVar2;
  longlong lVar3;
  UClass *pUVar4;
  
  if (((param_1->field_0x28 & 1) != 0) &&
     (pUVar2 = (this->Variable).field0_0x0.DebugPtr, pUVar2 != (UTransform3dCameraVariable *)0x0)) {
    lVar3 = pUVar2->_padding_;
    pUVar4 = UCameraRigAsset::StaticClass();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(lVar3 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      (this->Variable).field0_0x0.DebugPtr = (UTransform3dCameraVariable *)0x0;
    }
  }
  return;
}

// SerializeFromMismatchedTag @ 14d5cd980

bool __thiscall
FTransform3dCameraParameter::SerializeFromMismatchedTag
          (FTransform3dCameraParameter *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2)

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

