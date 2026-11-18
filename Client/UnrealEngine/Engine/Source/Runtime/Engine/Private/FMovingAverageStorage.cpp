// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FMovingAverageStorage @ 148088d70

FMovingAverageStorage * __thiscall
UE::Net::FNetPing::FMovingAverageStorage::FMovingAverageStorage(FMovingAverageStorage *this)

{
  FBin *pFVar1;
  double dVar2;
  TArrayView<UE::Net::FBinnedMovingValueBase::FBin,int> local_18;
  
  dVar2 = __real_3ff0000000000000;
  local_18.ArrayNum = 4;
  this->_padding_ = 0;
  *(undefined8 *)&(this->PingValues).field_0x10 = 0;
  *(undefined8 *)&(this->PingValues).field_0x18 = 0;
  *(undefined4 *)&(this->PingValues).field_0x20 = 0;
  *(undefined8 *)&this->PingValues = 0x7fefffffffffffff;
  pFVar1 = (this->PingAccumulator).Bins;
  *(undefined8 *)&(this->PingValues).field_0x8 = 0x10000000000000;
  local_18.DataPtr = pFVar1;
  FBinnedMovingValueBase::FBinnedMovingValueBase
            ((FBinnedMovingValueBase *)&this->PingAccumulator,&local_18,dVar2,MovingAvg);
  *(undefined4 *)&(this->PingAccumulator).Bins[0].field_0xc = 0;
  *(undefined4 *)&(this->PingAccumulator).Bins[1].field_0xc = 0;
  *(undefined4 *)&(this->PingAccumulator).Bins[2].field_0xc = 0;
  *(undefined4 *)&(this->PingAccumulator).Bins[3].field_0xc = 0;
  pFVar1->Sum = 0.0;
  (this->PingAccumulator).Bins[0].Count = 0;
  (this->PingAccumulator).Bins[1].Sum = 0.0;
  (this->PingAccumulator).Bins[1].Count = 0;
  (this->PingAccumulator).Bins[2].Sum = 0.0;
  (this->PingAccumulator).Bins[2].Count = 0;
  (this->PingAccumulator).Bins[3].Sum = 0.0;
  (this->PingAccumulator).Bins[3].Count = 0;
  (this->PingAccumulator)._padding_ = (longlong)&this->PingValues;
  return this;
}

