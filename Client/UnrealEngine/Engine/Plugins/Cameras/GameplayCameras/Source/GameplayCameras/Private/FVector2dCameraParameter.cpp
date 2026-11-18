// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 5

// StaticStruct @ 14d579c10

UScriptStruct * __cdecl FVector2dCameraParameter::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FVector2dCameraParameter.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UScriptStruct_FVector2dCameraParameter.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FVector2dCameraParameter,(UObject *)pUVar1,
                         L"Vector2dCameraParameter");
  }
  return Z_Registration_Info_UScriptStruct_FVector2dCameraParameter.OuterSingleton;
}

// FVector2dCameraParameter @ 14d58eb50

FVector2dCameraParameter * __thiscall
FVector2dCameraParameter::FVector2dCameraParameter(FVector2dCameraParameter *this)

{
  (this->VariableID).Value = 0xffffffff;
  (this->Value).field0_0x0._s_0.X = 0.0;
  (this->Value).field0_0x0._s_0.Y = 0.0;
  (this->Variable).field0_0x0.DebugPtr = (UVector2dCameraVariable *)0x0;
  return this;
}

// GetValue @ 14d5ac320

TVector2<double> * __thiscall
FVector2dCameraParameter::GetValue
          (FVector2dCameraParameter *this,TVector2<double> *__return_storage_ptr__,
          FCameraVariableTable *param_1)

{
  double dVar1;
  TVector2<double> *pTVar2;
  
  if ((this->VariableID).Value != 0xffffffff) {
    pTVar2 = UE::Cameras::FCameraVariableTable::FindValue<UE::Math::TVector2<double>_>
                       (param_1,(FCameraVariableID)(this->VariableID).Value);
    if (pTVar2 != (TVector2<double> *)0x0) {
      dVar1 = (pTVar2->field0_0x0)._s_0.Y;
      (__return_storage_ptr__->field0_0x0)._s_0.X = (pTVar2->field0_0x0)._s_0.X;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
      return __return_storage_ptr__;
    }
  }
  dVar1 = (this->Value).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->Value).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  return __return_storage_ptr__;
}

// PostSerialize @ 14d5c8160

void __thiscall
FVector2dCameraParameter::PostSerialize(FVector2dCameraParameter *this,FArchive *param_1)

{
  int iVar1;
  UVector2dCameraVariable *pUVar2;
  longlong lVar3;
  UClass *pUVar4;
  
  if (((param_1->field_0x28 & 1) != 0) &&
     (pUVar2 = (this->Variable).field0_0x0.DebugPtr, pUVar2 != (UVector2dCameraVariable *)0x0)) {
    lVar3 = pUVar2->_padding_;
    pUVar4 = UCameraRigAsset::StaticClass();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(lVar3 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      (this->Variable).field0_0x0.DebugPtr = (UVector2dCameraVariable *)0x0;
    }
  }
  return;
}

// SerializeFromMismatchedTag @ 14d5cdae0

bool __thiscall
FVector2dCameraParameter::SerializeFromMismatchedTag
          (FVector2dCameraParameter *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2)

{
  FName FVar1;
  bool bVar2;
  FNameEntryId FVar3;
  undefined4 extraout_var;
  FPropertyTypeName local_res10 [4];
  uint local_res20 [2];
  
  local_res10[0].Index = (param_1->TypeName).Index;
  FVar3 = FNameEntryId::FromValidEName((EName)local_res20);
  local_res20[0] = *(uint *)CONCAT44(extraout_var,FVar3.Value);
  local_res20[1] = 0;
  FVar1.Number = 0;
  FVar1.ComparisonIndex.Value = local_res20[0];
  bVar2 = UE::FPropertyTypeName::IsStruct(local_res10,FVar1);
  if (bVar2) {
    UE::Math::operator<<(param_2,&this->Value);
    return true;
  }
  return false;
}

