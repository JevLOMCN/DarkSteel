// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FTexture2DMipMap @ 14887cbd0

FTexture2DMipMap * __thiscall
FTexture2DMipMap::FTexture2DMipMap(FTexture2DMipMap *this,uint param_1,uint param_2,uint param_3)

{
  uchar uVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  
  (this->DerivedData).CookedData.ChunkOffset = 0;
  (this->DerivedData).CookedData.ChunkSize = 0;
  (this->DerivedData).CookedData.ChunkId[0] = '\0';
  (this->DerivedData).CookedData.ChunkId[1] = '\0';
  (this->DerivedData).CookedData.ChunkId[2] = '\0';
  (this->DerivedData).CookedData.ChunkId[3] = '\0';
  (this->DerivedData).CookedData.ChunkId[4] = '\0';
  (this->DerivedData).CookedData.ChunkId[5] = '\0';
  (this->DerivedData).CookedData.ChunkId[6] = '\0';
  (this->DerivedData).CookedData.ChunkId[7] = '\0';
  *(undefined8 *)((this->DerivedData).CookedData.ChunkId + 8) = 0;
  *(undefined8 *)&this->BulkData = 0;
  *(undefined8 *)&(this->BulkData).field_0x8 = 0;
  *(undefined8 *)&(this->BulkData).field_0x10 = 0;
  *(undefined4 *)&(this->BulkData).field_0xd = 0xffffffff;
  (this->BulkData).field_0x11 = 0xff;
  uVar1 = FIoChunkId::InvalidChunkId.Id[1];
  uVar2 = FIoChunkId::InvalidChunkId.Id[2];
  uVar3 = FIoChunkId::InvalidChunkId.Id[3];
  uVar4 = FIoChunkId::InvalidChunkId.Id[4];
  uVar5 = FIoChunkId::InvalidChunkId.Id[5];
  uVar6 = FIoChunkId::InvalidChunkId.Id[6];
  uVar7 = FIoChunkId::InvalidChunkId.Id[7];
  (this->BulkData).field_0x18 = FIoChunkId::InvalidChunkId.Id[0];
  (this->BulkData).field_0x19 = uVar1;
  (this->BulkData).field_0x1a = uVar2;
  (this->BulkData).field_0x1b = uVar3;
  (this->BulkData).field_0x1c = uVar4;
  (this->BulkData).field_0x1d = uVar5;
  (this->BulkData).field_0x1e = uVar6;
  (this->BulkData).field_0x1f = uVar7;
  uVar1 = FIoChunkId::InvalidChunkId.Id[9];
  uVar2 = FIoChunkId::InvalidChunkId.Id[10];
  uVar3 = FIoChunkId::InvalidChunkId.Id[0xb];
  (this->BulkData).field_0x20 = FIoChunkId::InvalidChunkId.Id[8];
  (this->BulkData).field_0x21 = uVar1;
  (this->BulkData).field_0x22 = uVar2;
  (this->BulkData).field_0x23 = uVar3;
  this->SizeX = (ushort)param_1;
  this->SizeY = (ushort)param_2;
  this->SizeZ = (ushort)param_3;
  if (((0xffff < param_1) || (0xffff < param_2)) || (0xffff < param_3)) {
    UE::Assert::Private::ProcessLowLevelFatalError
              ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\TextureResource.h"
               ,0x42,L"texture mip size doesn\'t fit in 16 bits! %ux%ux%u");
  }
  return this;
}

// Serialize @ 1488980b0

void __thiscall
FTexture2DMipMap::Serialize
          (FTexture2DMipMap *this,FArchive *param_1,UObject *param_2,int param_3,bool param_4)

{
  longlong *plVar1;
  uint local_res8 [2];
  uint local_res10 [2];
  undefined3 in_stack_00000029;
  
  if (param_4) {
    FBulkData::Serialize((FBulkData *)&this->BulkData,param_1,param_2,false,1,None);
  }
  else if ((param_1->field_0x28 & 1) != 0) {
    FBulkData::RemoveBulkData((FBulkData *)&this->BulkData);
  }
  plVar1 = *(longlong **)&param_1->field_0x8;
  _param_4 = (uint)this->SizeX;
  local_res8[0] = (uint)this->SizeY;
  local_res10[0] = (uint)this->SizeZ;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_4,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)&param_4);
    }
  }
  else {
    _param_4 = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  this->SizeX = _param_4;
  this->SizeY = (ushort)local_res8[0];
  this->SizeZ = (ushort)local_res10[0];
  return;
}

