// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 5

// StaticStruct @ 14d56b020

UScriptStruct * __cdecl FVector4fCameraParameter::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FVector4fCameraParameter.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UScriptStruct_FVector4fCameraParameter.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FVector4fCameraParameter,(UObject *)pUVar1,
                         L"Vector4fCameraParameter");
  }
  return Z_Registration_Info_UScriptStruct_FVector4fCameraParameter.OuterSingleton;
}

// FVector4fCameraParameter @ 14d58ec10

FVector4fCameraParameter * __thiscall
FVector4fCameraParameter::FVector4fCameraParameter(FVector4fCameraParameter *this)

{
  (this->VariableID).Value = 0xffffffff;
  *(undefined8 *)&(this->Value).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->Value).field0_0x0 + 8) = 0;
  (this->Variable).field0_0x0.DebugPtr = (UVector4fCameraVariable *)0x0;
  return this;
}

// GetValue @ 14d5ac5b0

TVector4<float> * __thiscall
FVector4fCameraParameter::GetValue
          (FVector4fCameraParameter *this,TVector4<float> *__return_storage_ptr__,
          FCameraVariableTable *param_1)

{
  undefined8 uVar1;
  TVector4<float> *pTVar2;
  
  if ((this->VariableID).Value != 0xffffffff) {
    pTVar2 = UE::Cameras::FCameraVariableTable::FindValue<UE::Math::TVector4<float>_>
                       (param_1,(FCameraVariableID)(this->VariableID).Value);
    if (pTVar2 != (TVector4<float> *)0x0) {
      uVar1 = *(undefined8 *)((longlong)&pTVar2->field0_0x0 + 8);
      *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&pTVar2->field0_0x0;
      *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar1;
      return __return_storage_ptr__;
    }
  }
  uVar1 = *(undefined8 *)((longlong)&(this->Value).field0_0x0 + 8);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&(this->Value).field0_0x0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar1;
  return __return_storage_ptr__;
}

// PostSerialize @ 14d5c8340

void __thiscall
FVector4fCameraParameter::PostSerialize(FVector4fCameraParameter *this,FArchive *param_1)

{
  int iVar1;
  UVector4fCameraVariable *pUVar2;
  longlong lVar3;
  UClass *pUVar4;
  
  if (((param_1->field_0x28 & 1) != 0) &&
     (pUVar2 = (this->Variable).field0_0x0.DebugPtr, pUVar2 != (UVector4fCameraVariable *)0x0)) {
    lVar3 = pUVar2->_padding_;
    pUVar4 = UCameraRigAsset::StaticClass();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(lVar3 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      (this->Variable).field0_0x0.DebugPtr = (UVector4fCameraVariable *)0x0;
    }
  }
  return;
}

// SerializeFromMismatchedTag @ 14d5cdf40

bool __thiscall
FVector4fCameraParameter::SerializeFromMismatchedTag
          (FVector4fCameraParameter *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2)

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

