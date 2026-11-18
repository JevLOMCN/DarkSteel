// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 4

// Apply @ 14cb74030

void __thiscall
FGeometrySelectionManager_SelectionTypeChange::Apply
          (FGeometrySelectionManager_SelectionTypeChange *this,UObject *param_1)

{
  EGeometryElementType EVar1;
  bool bVar2;
  UGeometrySelectionManager *this_00;
  
  bVar2 = false;
  this_00 = CastChecked<UGeometrySelectionManager,UObject>(param_1);
  EVar1 = this->ToElementType;
  if (EVar1 == Vertex) {
    if ((this->FromElementType != Edge) && (this->FromElementType != Face)) goto LAB_14cb740bf;
  }
  else if (((EVar1 != Edge) && (EVar1 != Face)) || (this->FromElementType != Vertex))
  goto LAB_14cb740bf;
  if (this->ToTopologyMode != None) {
    UGeometrySelectionManager::RemoveAllSets(this_00);
    bVar2 = true;
  }
LAB_14cb740bf:
  if (this->FromTopologyMode != this->ToTopologyMode) {
    if (this->ToTopologyMode == None) {
      UGeometrySelectionManager::RemoveAllSets(this_00);
    }
    else {
      bVar2 = true;
    }
    UGeometrySelectionManager::SetMeshTopologyModeInternal(this_00,this->ToTopologyMode);
  }
  if (this->FromElementType != this->ToElementType) {
    UGeometrySelectionManager::SetSelectionElementTypeInternal(this_00,this->ToElementType);
  }
  if (bVar2) {
    UGeometrySelectionManager::RebuildSelectable(this_00);
  }
  return;
}

// HasExpired @ 14cba0f20

bool __thiscall
FGeometrySelectionManager_SelectionTypeChange::HasExpired
          (FGeometrySelectionManager_SelectionTypeChange *this,UObject *param_1)

{
  int iVar1;
  char cVar2;
  UClass *pUVar3;
  
  if (param_1 != (UObject *)0x0) {
    pUVar3 = UGeometrySelectionManager::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if (((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
        ((longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar3->_padding_)) && ((*(uint *)&param_1->field_0x8 >> 0x1e & 1) == 0)) {
      cVar2 = (**(code **)(*(longlong *)param_1 + 0x2d0))(param_1);
      if (cVar2 == '\0') {
        return false;
      }
    }
  }
  return true;
}

// Revert @ 14cbadc20

void __thiscall
FGeometrySelectionManager_SelectionTypeChange::Revert
          (FGeometrySelectionManager_SelectionTypeChange *this,UObject *param_1)

{
  EGeometryElementType EVar1;
  bool bVar2;
  UGeometrySelectionManager *this_00;
  
  bVar2 = false;
  this_00 = CastChecked<UGeometrySelectionManager,UObject>(param_1);
  EVar1 = this->ToElementType;
  if (EVar1 == Vertex) {
    if ((this->FromElementType != Edge) && (this->FromElementType != Face)) goto LAB_14cbadcaf;
  }
  else if (((EVar1 != Edge) && (EVar1 != Face)) || (this->FromElementType != Vertex))
  goto LAB_14cbadcaf;
  if (this->FromTopologyMode != None) {
    UGeometrySelectionManager::RemoveAllSets(this_00);
    bVar2 = true;
  }
LAB_14cbadcaf:
  if (this->FromTopologyMode != this->ToTopologyMode) {
    if (this->FromTopologyMode == None) {
      UGeometrySelectionManager::RemoveAllSets(this_00);
    }
    else {
      bVar2 = true;
    }
    UGeometrySelectionManager::SetMeshTopologyModeInternal(this_00,this->FromTopologyMode);
  }
  if (this->FromElementType != this->ToElementType) {
    UGeometrySelectionManager::SetSelectionElementTypeInternal(this_00,this->FromElementType);
  }
  if (bVar2) {
    UGeometrySelectionManager::RebuildSelectable(this_00);
  }
  return;
}

// ToString @ 14cbb4b40

FString * __thiscall
FGeometrySelectionManager_SelectionTypeChange::ToString
          (FGeometrySelectionManager_SelectionTypeChange *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FGeometrySelectionManager_SelectionTypeChange");
  return __return_storage_ptr__;
}

