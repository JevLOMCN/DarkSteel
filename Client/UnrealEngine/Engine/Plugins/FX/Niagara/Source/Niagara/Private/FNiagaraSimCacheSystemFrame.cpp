// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// StaticStruct @ 149377530

UScriptStruct * __cdecl FNiagaraSimCacheSystemFrame::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraSimCacheSystemFrame.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraSimCacheSystemFrame.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraSimCacheSystemFrame,(UObject *)pUVar1,
                         L"NiagaraSimCacheSystemFrame");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraSimCacheSystemFrame.OuterSingleton;
}

// FNiagaraSimCacheSystemFrame @ 149387640

FNiagaraSimCacheSystemFrame * __thiscall
FNiagaraSimCacheSystemFrame::FNiagaraSimCacheSystemFrame(FNiagaraSimCacheSystemFrame *this)

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
  (this->SystemDataBuffers).NumInstances = 0;
  (this->SystemDataBuffers).IDAcquireTag = 0;
  (this->SystemDataBuffers).IDToIndexTableElements = 0;
  (this->SystemDataBuffers).FloatData.DataPtr = (uchar *)0x0;
  (this->SystemDataBuffers).FloatData.ArrayNum = 0;
  (this->SystemDataBuffers).HalfData.DataPtr = (uchar *)0x0;
  (this->SystemDataBuffers).HalfData.ArrayNum = 0;
  (this->SystemDataBuffers).Int32Data.DataPtr = (uchar *)0x0;
  (this->SystemDataBuffers).Int32Data.ArrayNum = 0;
  (this->SystemDataBuffers).IDToIndexTable.DataPtr = (int *)0x0;
  (this->SystemDataBuffers).IDToIndexTable.ArrayNum = 0;
  (this->SystemDataBuffers).InterpMapping.DataPtr = (uint *)0x0;
  (this->SystemDataBuffers).InterpMapping.ArrayNum = 0;
  (this->SystemDataBuffers).DataBuffer.View.DataPtr = (uchar *)0x0;
  (this->SystemDataBuffers).DataBuffer.View.ArrayNum = 0;
  *(undefined8 *)&(this->SystemDataBuffers).BulkData = 0;
  *(undefined8 *)&(this->SystemDataBuffers).BulkData.field_0x8 = 0;
  *(undefined8 *)&(this->SystemDataBuffers).BulkData.field_0x10 = 0;
  *(undefined4 *)&(this->SystemDataBuffers).BulkData.field_0xd = 0xffffffff;
  (this->SystemDataBuffers).BulkData.field_0x11 = 0xff;
  uVar1 = FIoChunkId::InvalidChunkId.Id[1];
  uVar2 = FIoChunkId::InvalidChunkId.Id[2];
  uVar3 = FIoChunkId::InvalidChunkId.Id[3];
  uVar4 = FIoChunkId::InvalidChunkId.Id[4];
  uVar5 = FIoChunkId::InvalidChunkId.Id[5];
  uVar6 = FIoChunkId::InvalidChunkId.Id[6];
  uVar7 = FIoChunkId::InvalidChunkId.Id[7];
  (this->SystemDataBuffers).BulkData.field_0x18 = FIoChunkId::InvalidChunkId.Id[0];
  (this->SystemDataBuffers).BulkData.field_0x19 = uVar1;
  (this->SystemDataBuffers).BulkData.field_0x1a = uVar2;
  (this->SystemDataBuffers).BulkData.field_0x1b = uVar3;
  (this->SystemDataBuffers).BulkData.field_0x1c = uVar4;
  (this->SystemDataBuffers).BulkData.field_0x1d = uVar5;
  (this->SystemDataBuffers).BulkData.field_0x1e = uVar6;
  (this->SystemDataBuffers).BulkData.field_0x1f = uVar7;
  uVar1 = FIoChunkId::InvalidChunkId.Id[9];
  uVar2 = FIoChunkId::InvalidChunkId.Id[10];
  uVar3 = FIoChunkId::InvalidChunkId.Id[0xb];
  (this->SystemDataBuffers).BulkData.field_0x20 = FIoChunkId::InvalidChunkId.Id[8];
  (this->SystemDataBuffers).BulkData.field_0x21 = uVar1;
  (this->SystemDataBuffers).BulkData.field_0x22 = uVar2;
  (this->SystemDataBuffers).BulkData.field_0x23 = uVar3;
  return this;
}

