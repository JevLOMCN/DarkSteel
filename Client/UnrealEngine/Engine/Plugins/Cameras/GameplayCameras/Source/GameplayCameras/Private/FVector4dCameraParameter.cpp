// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 5

// StaticStruct @ 14d56b8f0

UScriptStruct * __cdecl FVector4dCameraParameter::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FVector4dCameraParameter.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UScriptStruct_FVector4dCameraParameter.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FVector4dCameraParameter,(UObject *)pUVar1,
                         L"Vector4dCameraParameter");
  }
  return Z_Registration_Info_UScriptStruct_FVector4dCameraParameter.OuterSingleton;
}

// FVector4dCameraParameter @ 14d58ebe0

FVector4dCameraParameter * __thiscall
FVector4dCameraParameter::FVector4dCameraParameter(FVector4dCameraParameter *this)

{
  (this->VariableID).Value = 0xffffffff;
  (this->Value).field0_0x0._s_0.X = 0.0;
  (this->Value).field0_0x0._s_0.Y = 0.0;
  (this->Value).field0_0x0._s_0.Z = 0.0;
  (this->Value).field0_0x0._s_0.W = 0.0;
  (this->Variable).field0_0x0.DebugPtr = (UVector4dCameraVariable *)0x0;
  return this;
}

// GetValue @ 14d5ac530

TVector4<double> * __thiscall
FVector4dCameraParameter::GetValue
          (FVector4dCameraParameter *this,TVector4<double> *__return_storage_ptr__,
          FCameraVariableTable *param_1)

{
  TVector4<double> *pTVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if ((this->VariableID).Value != 0xffffffff) {
    pTVar1 = UE::Cameras::FCameraVariableTable::FindValue<UE::Math::TVector4<double>_>
                       (param_1,(FCameraVariableID)(this->VariableID).Value);
    if (pTVar1 != (TVector4<double> *)0x0) {
      uVar2 = *(undefined4 *)&pTVar1->field0_0x0;
      uVar3 = *(undefined4 *)((longlong)&pTVar1->field0_0x0 + 4);
      uVar4 = *(undefined4 *)((longlong)&pTVar1->field0_0x0 + 8);
      uVar5 = *(undefined4 *)((longlong)&pTVar1->field0_0x0 + 0xc);
      uVar6 = *(undefined4 *)((longlong)&pTVar1->field0_0x0 + 0x10);
      uVar7 = *(undefined4 *)((longlong)&pTVar1->field0_0x0 + 0x14);
      uVar8 = *(undefined4 *)((longlong)&pTVar1->field0_0x0 + 0x18);
      uVar9 = *(undefined4 *)((longlong)&pTVar1->field0_0x0 + 0x1c);
      goto LAB_14d5ac566;
    }
  }
  uVar2 = *(undefined4 *)&(this->Value).field0_0x0;
  uVar3 = *(undefined4 *)((longlong)&(this->Value).field0_0x0 + 4);
  uVar4 = *(undefined4 *)((longlong)&(this->Value).field0_0x0 + 8);
  uVar5 = *(undefined4 *)((longlong)&(this->Value).field0_0x0 + 0xc);
  uVar6 = *(undefined4 *)((longlong)&(this->Value).field0_0x0 + 0x10);
  uVar7 = *(undefined4 *)((longlong)&(this->Value).field0_0x0 + 0x14);
  uVar8 = *(undefined4 *)((longlong)&(this->Value).field0_0x0 + 0x18);
  uVar9 = *(undefined4 *)((longlong)&(this->Value).field0_0x0 + 0x1c);
LAB_14d5ac566:
  *(undefined4 *)&__return_storage_ptr__->field0_0x0 = uVar2;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = uVar3;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar4;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = uVar5;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0x10) = uVar6;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0x14) = uVar7;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0x18) = uVar8;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0x1c) = uVar9;
  return __return_storage_ptr__;
}

// PostSerialize @ 14d5c82e0

void __thiscall
FVector4dCameraParameter::PostSerialize(FVector4dCameraParameter *this,FArchive *param_1)

{
  int iVar1;
  UVector4dCameraVariable *pUVar2;
  longlong lVar3;
  UClass *pUVar4;
  
  if (((param_1->field_0x28 & 1) != 0) &&
     (pUVar2 = (this->Variable).field0_0x0.DebugPtr, pUVar2 != (UVector4dCameraVariable *)0x0)) {
    lVar3 = pUVar2->_padding_;
    pUVar4 = UCameraRigAsset::StaticClass();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(lVar3 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      (this->Variable).field0_0x0.DebugPtr = (UVector4dCameraVariable *)0x0;
    }
  }
  return;
}

// SerializeFromMismatchedTag @ 14d5cdeb0

bool __thiscall
FVector4dCameraParameter::SerializeFromMismatchedTag
          (FVector4dCameraParameter *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2)

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

