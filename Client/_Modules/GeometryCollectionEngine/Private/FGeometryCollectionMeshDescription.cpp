// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 1

// Serialize @ 1463c48e0

void __thiscall
FGeometryCollectionMeshDescription::Serialize
          (FGeometryCollectionMeshDescription *this,FArchive *param_1)

{
  uint *puVar1;
  uint *puVar2;
  FArchive *pFVar3;
  
  puVar1 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&this->NumVertices);
    }
  }
  else {
    this->NumVertices = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = &this->NumTriangles;
  puVar2 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pFVar3 = TArrayPrivateFriend::
           Serialize<FGeometryCollectionMeshElement,TSizedDefaultAllocator<32>_>
                     (param_1,&this->Sections);
  TArrayPrivateFriend::Serialize<FGeometryCollectionMeshElement,TSizedDefaultAllocator<32>_>
            (pFVar3,&this->SectionsNoInternal);
  TArrayPrivateFriend::Serialize<FGeometryCollectionMeshElement,TSizedDefaultAllocator<32>_>
            (param_1,&this->SubSections);
  return;
}

