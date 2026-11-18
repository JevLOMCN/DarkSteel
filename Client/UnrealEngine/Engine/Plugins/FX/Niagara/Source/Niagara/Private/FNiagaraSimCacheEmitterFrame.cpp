// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// StaticStruct @ 1493774f0

UScriptStruct * __cdecl FNiagaraSimCacheEmitterFrame::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraSimCacheEmitterFrame.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraSimCacheEmitterFrame.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraSimCacheEmitterFrame,(UObject *)pUVar1,
                         L"NiagaraSimCacheEmitterFrame");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraSimCacheEmitterFrame.OuterSingleton;
}

// FNiagaraSimCacheEmitterFrame @ 149387320

FNiagaraSimCacheEmitterFrame * __thiscall
FNiagaraSimCacheEmitterFrame::FNiagaraSimCacheEmitterFrame(FNiagaraSimCacheEmitterFrame *this)

{
  uchar uVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  
  (this->LocalBounds).Min.field0_0x0._s_0.X = 0.0;
  (this->LocalBounds).Min.field0_0x0._s_0.Y = 0.0;
  (this->LocalBounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->LocalBounds).Max.field0_0x0._s_0.X = 0.0;
  (this->LocalBounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->LocalBounds).Max.field0_0x0._s_0.Z = 0.0;
  (this->LocalBounds).IsValid = '\0';
  (this->LocalBounds).Pad[0] = '\0';
  (this->LocalBounds).Pad[1] = '\0';
  (this->LocalBounds).Pad[2] = '\0';
  (this->LocalBounds).Pad[3] = '\0';
  (this->LocalBounds).Pad[4] = '\0';
  (this->LocalBounds).Pad[5] = '\0';
  (this->LocalBounds).Pad[6] = '\0';
  this->TotalSpawnedParticles = 0;
  (this->ParticleDataBuffers).NumInstances = 0;
  (this->ParticleDataBuffers).IDAcquireTag = 0;
  (this->ParticleDataBuffers).IDToIndexTableElements = 0;
  (this->ParticleDataBuffers).FloatData.DataPtr = (uchar *)0x0;
  (this->ParticleDataBuffers).FloatData.ArrayNum = 0;
  (this->ParticleDataBuffers).HalfData.DataPtr = (uchar *)0x0;
  (this->ParticleDataBuffers).HalfData.ArrayNum = 0;
  (this->ParticleDataBuffers).Int32Data.DataPtr = (uchar *)0x0;
  (this->ParticleDataBuffers).Int32Data.ArrayNum = 0;
  (this->ParticleDataBuffers).IDToIndexTable.DataPtr = (int *)0x0;
  (this->ParticleDataBuffers).IDToIndexTable.ArrayNum = 0;
  (this->ParticleDataBuffers).InterpMapping.DataPtr = (uint *)0x0;
  (this->ParticleDataBuffers).InterpMapping.ArrayNum = 0;
  (this->ParticleDataBuffers).DataBuffer.View.DataPtr = (uchar *)0x0;
  (this->ParticleDataBuffers).DataBuffer.View.ArrayNum = 0;
  *(undefined8 *)&(this->ParticleDataBuffers).BulkData = 0;
  *(undefined8 *)&(this->ParticleDataBuffers).BulkData.field_0x8 = 0;
  *(undefined8 *)&(this->ParticleDataBuffers).BulkData.field_0x10 = 0;
  *(undefined4 *)&(this->ParticleDataBuffers).BulkData.field_0xd = 0xffffffff;
  (this->ParticleDataBuffers).BulkData.field_0x11 = 0xff;
  uVar1 = FIoChunkId::InvalidChunkId.Id[1];
  uVar2 = FIoChunkId::InvalidChunkId.Id[2];
  uVar3 = FIoChunkId::InvalidChunkId.Id[3];
  uVar4 = FIoChunkId::InvalidChunkId.Id[4];
  uVar5 = FIoChunkId::InvalidChunkId.Id[5];
  uVar6 = FIoChunkId::InvalidChunkId.Id[6];
  uVar7 = FIoChunkId::InvalidChunkId.Id[7];
  (this->ParticleDataBuffers).BulkData.field_0x18 = FIoChunkId::InvalidChunkId.Id[0];
  (this->ParticleDataBuffers).BulkData.field_0x19 = uVar1;
  (this->ParticleDataBuffers).BulkData.field_0x1a = uVar2;
  (this->ParticleDataBuffers).BulkData.field_0x1b = uVar3;
  (this->ParticleDataBuffers).BulkData.field_0x1c = uVar4;
  (this->ParticleDataBuffers).BulkData.field_0x1d = uVar5;
  (this->ParticleDataBuffers).BulkData.field_0x1e = uVar6;
  (this->ParticleDataBuffers).BulkData.field_0x1f = uVar7;
  uVar1 = FIoChunkId::InvalidChunkId.Id[9];
  uVar2 = FIoChunkId::InvalidChunkId.Id[10];
  uVar3 = FIoChunkId::InvalidChunkId.Id[0xb];
  (this->ParticleDataBuffers).BulkData.field_0x20 = FIoChunkId::InvalidChunkId.Id[8];
  (this->ParticleDataBuffers).BulkData.field_0x21 = uVar1;
  (this->ParticleDataBuffers).BulkData.field_0x22 = uVar2;
  (this->ParticleDataBuffers).BulkData.field_0x23 = uVar3;
  return this;
}

