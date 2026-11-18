// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// RecalculateAvgPing @ 1480bf890

void __thiscall
UE::Net::FNetPing::FPlayerStateAvgStorage::RecalculateAvgPing(FPlayerStateAvgStorage *this)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = 0;
  iVar2 = 0;
  lVar4 = 4;
  pbVar1 = &this->PingBucket[0].field_0x2;
  do {
    iVar3 = iVar3 + (*(ushort *)(pbVar1 + -2) & 0x1fff);
    iVar2 = iVar2 + (*pbVar1 & 7);
    lVar4 = lVar4 + -1;
    pbVar1 = pbVar1 + 4;
  } while (lVar4 != 0);
  if (0 < iVar2) {
    FSampleMinMaxAvg::AddSample_Internal
              ((FSampleMinMaxAvg *)&this->PingValues,
               (__real_3f50624dd2f1a9fc / (double)iVar2) * (double)iVar3);
    return;
  }
  FSampleMinMaxAvg::AddSample_Internal((FSampleMinMaxAvg *)&this->PingValues,0.0);
  return;
}

// Reset @ 1480cc3a0

void __thiscall UE::Net::FNetPing::FPlayerStateAvgStorage::Reset(FPlayerStateAvgStorage *this)

{
  PingAvgData local_res8;
  
  this->_padding_ = 0;
  FSampleMinMaxAvg::Reset((FSampleMinMaxAvg *)&this->PingValues);
  this->CurPingBucket = '\0';
  local_res8.PingCount = '\0';
  local_res8.PingSum = 0;
  this->PingBucket[0] = local_res8;
  this->PingBucket[1] = local_res8;
  this->PingBucket[2] = local_res8;
  this->PingBucket[3] = local_res8;
  this->CurPingBucketTimestamp = 0.0;
  return;
}

// UpdatePing @ 1480e0af0

void __thiscall
UE::Net::FNetPing::FPlayerStateAvgStorage::UpdatePing
          (FPlayerStateAvgStorage *this,double param_1,float param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  double dVar9;
  float fVar10;
  
  if (__real_3f8ccccd <= param_2) {
    param_2 = __real_3f8ccccd;
  }
  dVar9 = (double)param_2;
  if (dVar9 < *(double *)&this->PingValues) {
    *(double *)&this->PingValues = dVar9;
  }
  puVar1 = &(this->PingValues).field_0x8;
  if (*(double *)puVar1 <= dVar9 && dVar9 != *(double *)puVar1) {
    *(double *)&(this->PingValues).field_0x8 = dVar9;
  }
  if (param_1 - this->CurPingBucketTimestamp < __real_3ff0000000000000) {
    bVar4 = this->CurPingBucket;
    if (this->PingBucket[bVar4].PingCount < 7) {
      uVar3 = *(undefined2 *)(this->PingBucket + bVar4);
      *(ushort *)(this->PingBucket + bVar4) =
           ((short)((int)ROUND(param_2 * __real_44fa0000 - __real_3f000000) >> 1) +
            ((undefined2 *)(this->PingBucket + bVar4))->PingSum ^ this->PingBucket[bVar4].PingSum) &
           0x1fff ^ uVar3;
      puVar1 = &this->PingBucket[this->CurPingBucket].field_0x2;
      uVar2 = *puVar1;
      this->PingBucket[this->CurPingBucket].field_0x2 =
           (this->PingBucket[this->CurPingBucket].PingCount + 1 ^
           this->PingBucket[this->CurPingBucket].PingCount) & 7 ^ uVar2;
    }
  }
  else {
    iVar7 = 0;
    iVar6 = 0;
    lVar8 = 4;
    pbVar5 = &this->PingBucket[0].field_0x2;
    do {
      iVar7 = iVar7 + (*(ushort *)(pbVar5 + -2) & 0x1fff);
      iVar6 = iVar6 + (*pbVar5 & 7);
      lVar8 = lVar8 + -1;
      pbVar5 = pbVar5 + 4;
    } while (lVar8 != 0);
    if (iVar6 < 1) {
      dVar9 = 0.0;
    }
    else {
      dVar9 = (__real_3f50624dd2f1a9fc / (double)iVar6) * (double)iVar7;
    }
    FSampleMinMaxAvg::AddSample_Internal((FSampleMinMaxAvg *)&this->PingValues,dVar9);
    fVar10 = param_2 * __real_44fa0000;
    bVar4 = this->CurPingBucket + 1 & 3;
    this->CurPingBucketTimestamp = param_1;
    fVar10 = fVar10 - __real_3f000000;
    this->CurPingBucket = bVar4;
    *(ushort *)(this->PingBucket + bVar4) =
         *(ushort *)(this->PingBucket + bVar4) ^
         ((ushort)((int)ROUND(fVar10) >> 1) ^ this->PingBucket[bVar4].PingSum) & 0x1fff;
    bVar4 = this->CurPingBucket;
    puVar1 = &this->PingBucket[bVar4].field_0x2;
    *puVar1 = *puVar1 & 0xf9;
    puVar1 = &this->PingBucket[bVar4].field_0x2;
    *puVar1 = *puVar1 | 1;
  }
  return;
}

