// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 5

// StaticStruct @ 14d578ef0

UScriptStruct * __cdecl FVector2fCameraParameter::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FVector2fCameraParameter.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UScriptStruct_FVector2fCameraParameter.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FVector2fCameraParameter,(UObject *)pUVar1,
                         L"Vector2fCameraParameter");
  }
  return Z_Registration_Info_UScriptStruct_FVector2fCameraParameter.OuterSingleton;
}

// FVector2fCameraParameter @ 14d58eb70

FVector2fCameraParameter * __thiscall
FVector2fCameraParameter::FVector2fCameraParameter(FVector2fCameraParameter *this)

{
  (this->VariableID).Value = 0xffffffff;
  (this->Value).field0_0x0 = (TVector2<float>_u_0)0x0;
  (this->Variable).field0_0x0.DebugPtr = (UVector2fCameraVariable *)0x0;
  return this;
}

// GetValue @ 14d5ac3a0

TVector2<float> __thiscall
FVector2fCameraParameter::GetValue(FVector2fCameraParameter *this,FCameraVariableTable *param_1)

{
  TVector2<float>_u_0 *pTVar1;
  FCameraVariableTable *in_R8;
  
  if ((this->VariableID).Value == 0xffffffff) {
    (param_1->Entries).AllocatorInstance.Data = (FScriptContainerElement *)(this->Value).field0_0x0;
    return (TVector2<float>)(TVector2<float>_u_0)param_1;
  }
  pTVar1 = &UE::Cameras::FCameraVariableTable::FindValue<UE::Math::TVector2<float>_>
                      (in_R8,(FCameraVariableID)(this->VariableID).Value)->field0_0x0;
  if (pTVar1 != (TVector2<float>_u_0 *)0x0) {
    (param_1->Entries).AllocatorInstance.Data = (FScriptContainerElement *)*pTVar1;
    return (TVector2<float>)(TVector2<float>_u_0)param_1;
  }
  (param_1->Entries).AllocatorInstance.Data = (FScriptContainerElement *)(this->Value).field0_0x0;
  return (TVector2<float>)(TVector2<float>_u_0)param_1;
}

// PostSerialize @ 14d5c81c0

void __thiscall
FVector2fCameraParameter::PostSerialize(FVector2fCameraParameter *this,FArchive *param_1)

{
  int iVar1;
  UVector2fCameraVariable *pUVar2;
  longlong lVar3;
  UClass *pUVar4;
  
  if (((param_1->field_0x28 & 1) != 0) &&
     (pUVar2 = (this->Variable).field0_0x0.DebugPtr, pUVar2 != (UVector2fCameraVariable *)0x0)) {
    lVar3 = pUVar2->_padding_;
    pUVar4 = UCameraRigAsset::StaticClass();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(lVar3 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      (this->Variable).field0_0x0.DebugPtr = (UVector2fCameraVariable *)0x0;
    }
  }
  return;
}

// SerializeFromMismatchedTag @ 14d5cdb60

bool __thiscall
FVector2fCameraParameter::SerializeFromMismatchedTag
          (FVector2fCameraParameter *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2)

{
  FArchive *pFVar1;
  float *pfVar2;
  float *pfVar3;
  FName FVar4;
  FName FVar5;
  bool bVar6;
  FNameEntryId FVar7;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  FPropertyTypeName local_res10 [2];
  uint local_res20 [2];
  
  local_res10[0].Index = (param_1->TypeName).Index;
  FVar7 = FNameEntryId::FromValidEName((EName)local_res20);
  local_res20[0] = *(uint *)CONCAT44(extraout_var,FVar7.Value);
  local_res20[1] = 0;
  FVar4.Number = 0;
  FVar4.ComparisonIndex.Value = local_res20[0];
  bVar6 = UE::FPropertyTypeName::IsStruct(local_res10,FVar4);
  if (!bVar6) {
    local_res10[0].Index = (param_1->TypeName).Index;
    FVar7 = FNameEntryId::FromValidEName((EName)local_res20);
    local_res20[0] = *(uint *)CONCAT44(extraout_var_00,FVar7.Value);
    local_res20[1] = 0;
    FVar5.Number = 0;
    FVar5.ComparisonIndex.Value = local_res20[0];
    bVar6 = UE::FPropertyTypeName::IsStruct(local_res10,FVar5);
    if (!bVar6) {
      return false;
    }
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

