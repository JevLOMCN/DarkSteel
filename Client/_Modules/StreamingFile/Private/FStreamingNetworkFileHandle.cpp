// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StreamingFile
// Functions: 9

// Flush @ 148beaf20

bool __thiscall FStreamingNetworkFileHandle::Flush(FStreamingNetworkFileHandle *this,bool param_1)

{
  return false;
}

// Read @ 148beaf60

bool __thiscall
FStreamingNetworkFileHandle::Read(FStreamingNetworkFileHandle *this,uchar *param_1,long64 param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  size_t sVar7;
  int *piVar8;
  longlong lVar9;
  longlong lVar10;
  int *piVar11;
  uchar *local_res10;
  
  bVar4 = false;
  if ((this->bReadable != false) && (-1 < param_2)) {
    lVar9 = this->FilePos;
    lVar1 = this->FileSize;
    if (lVar9 + param_2 <= lVar1) {
      if (param_2 == 0) {
        return true;
      }
      piVar8 = &this->CurrentCache;
      lVar6 = (longlong)*piVar8;
      lVar10 = 0x10000;
      lVar2 = this->CacheStart[lVar6];
      if (param_2 < 0x10001) {
        bVar4 = true;
        if ((lVar2 == -1) && (lVar1 < 0x10000)) {
          bVar4 = FStreamingNetworkPlatformFile::SendReadMessage
                            (this->Network,this->HandleId,this->BufferCache[lVar6],lVar1);
          if (!bVar4) {
            return bVar4;
          }
          this->CacheStart[*piVar8] = 0;
          this->CacheEnd[*piVar8] = this->FileSize;
        }
        else {
          lVar1 = this->CacheEnd[lVar6];
          if ((lVar1 < lVar9 + param_2) || ((lVar2 == -1 || (lVar9 < lVar2)))) {
            piVar8 = &this->CurrentCache;
            local_res10 = param_1;
            if ((lVar2 != -1) && ((lVar2 <= lVar9 && (lVar9 < lVar1)))) {
              sVar7 = lVar1 - lVar9;
              memcpy(param_1,(void *)(lVar9 + 0x3a + (lVar6 * 0x10000 - lVar2) + (longlong)this),
                     sVar7);
              this->FilePos = this->FilePos + sVar7;
              param_2 = param_2 - sVar7;
              local_res10 = param_1 + sVar7;
            }
            piVar11 = &this->CurrentCache;
            if (this->CacheStart[*piVar8] != -1) {
              uVar5 = *piVar8 + 1;
              *piVar8 = uVar5;
              uVar5 = uVar5 & 0x80000001;
              if ((int)uVar5 < 0) {
                uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
              }
              *piVar8 = uVar5;
            }
            lVar9 = this->FilePos;
            if (this->FileSize < lVar9 + 0x10000) {
              lVar10 = this->FileSize - lVar9;
            }
            bVar3 = FStreamingNetworkPlatformFile::SendSeekMessage
                              (this->Network,this->HandleId,lVar9);
            if ((bVar3) &&
               (bVar4 = FStreamingNetworkPlatformFile::SendReadMessage
                                  (this->Network,this->HandleId,this->BufferCache[*piVar11],lVar10),
               !bVar4)) {
              return bVar4;
            }
            this->CacheStart[*piVar11] = this->FilePos;
            this->CacheEnd[*piVar11] = this->FilePos + lVar10;
            param_1 = local_res10;
          }
        }
        memcpy(param_1,(void *)(((longlong)this->CurrentCache * 0x10000 -
                                this->CacheStart[this->CurrentCache]) + 0x3a + this->FilePos +
                               (longlong)this),param_2);
        this->FilePos = this->FilePos + param_2;
      }
      else {
        if (((lVar2 != -1) && (lVar2 <= lVar9)) && (lVar9 < this->CacheEnd[lVar6])) {
          sVar7 = this->CacheEnd[lVar6] - lVar9;
          memcpy(param_1,(void *)(lVar9 + 0x3a + (lVar6 * 0x10000 - lVar2) + (longlong)this),sVar7);
          this->FilePos = this->FilePos + sVar7;
          param_2 = param_2 - sVar7;
          lVar9 = this->FilePos;
          param_1 = param_1 + sVar7;
        }
        bVar3 = FStreamingNetworkPlatformFile::SendSeekMessage(this->Network,this->HandleId,lVar9);
        if ((bVar3) &&
           (bVar4 = FStreamingNetworkPlatformFile::SendReadMessage
                              (this->Network,this->HandleId,param_1,param_2), bVar4)) {
          this->FilePos = this->FilePos + param_2;
          uVar5 = *piVar8 + 1U & 0x80000001;
          if ((int)uVar5 < 0) {
            uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
          }
          *piVar8 = uVar5;
          this->CacheStart[(int)uVar5] = -1;
        }
      }
    }
  }
  return bVar4;
}

// ReadAt @ 148beb270

bool __thiscall
FStreamingNetworkFileHandle::ReadAt
          (FStreamingNetworkFileHandle *this,uchar *param_1,long64 param_2,long64 param_3)

{
  bool bVar1;
  longlong lVar2;
  
  if ((((this->bReadable != false) && (-1 < param_2)) && (-1 < param_3)) &&
     (lVar2 = (**(code **)(this->_padding_ + 0x50))(), param_2 + param_3 <= lVar2)) {
    if (param_2 == 0) {
      return true;
    }
    bVar1 = FStreamingNetworkPlatformFile::SendReadMessage
                      (this->Network,this->HandleId,param_1,param_2,param_3);
    return bVar1;
  }
  return false;
}

// Seek @ 148beb2f0

bool __thiscall FStreamingNetworkFileHandle::Seek(FStreamingNetworkFileHandle *this,long64 param_1)

{
  bool bVar1;
  uint uVar2;
  
  if (this->bWritable == false) {
    if (((this->bReadable != false) && (-1 < param_1)) && (param_1 <= this->FileSize)) {
      if (((this->CacheStart[0] <= param_1) && (param_1 < this->CacheEnd[0])) &&
         (this->CacheStart[0] != -1)) {
        this->LazySeek = false;
        this->FilePos = param_1;
        this->CurrentCache = 0;
        return true;
      }
      if (((this->CacheStart[1] <= param_1) && (param_1 < this->CacheEnd[1])) &&
         (this->CacheStart[1] != -1)) {
        this->LazySeek = false;
        this->FilePos = param_1;
        this->CurrentCache = 1;
        return true;
      }
      this->LazySeek = true;
      this->FilePos = param_1;
      if (this->CacheStart[this->CurrentCache] == -1) {
        return true;
      }
      uVar2 = this->CurrentCache + 1U & 0x80000001;
      if ((int)uVar2 < 0) {
        uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
      }
      this->CurrentCache = uVar2;
      this->CacheStart[(int)uVar2] = -1;
      return true;
    }
  }
  else {
    if (param_1 == this->FilePos) {
      return true;
    }
    if (((-1 < param_1) && (param_1 <= this->FileSize)) &&
       (bVar1 = FStreamingNetworkPlatformFile::SendSeekMessage(this->Network,this->HandleId,param_1)
       , bVar1)) {
      this->FilePos = param_1;
      return true;
    }
  }
  return false;
}

// SeekFromEnd @ 148beb450

bool __thiscall
FStreamingNetworkFileHandle::SeekFromEnd(FStreamingNetworkFileHandle *this,long64 param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000148beb457. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x10))(this,param_1 + this->FileSize);
  return (bool)uVar1;
}

// Size @ 148becf00

long64 __thiscall FStreamingNetworkFileHandle::Size(FStreamingNetworkFileHandle *this)

{
  return this->FileSize;
}

// Tell @ 148becf10

long64 __thiscall FStreamingNetworkFileHandle::Tell(FStreamingNetworkFileHandle *this)

{
  return this->FilePos;
}

// Truncate @ 148becf20

bool __thiscall
FStreamingNetworkFileHandle::Truncate(FStreamingNetworkFileHandle *this,long64 param_1)

{
  return false;
}

// Write @ 148becf30

bool __thiscall
FStreamingNetworkFileHandle::Write(FStreamingNetworkFileHandle *this,uchar *param_1,long64 param_2)

{
  bool bVar1;
  longlong lVar2;
  
  if ((this->bWritable != false) && (-1 < param_2)) {
    if (param_2 == 0) {
      return true;
    }
    bVar1 = FStreamingNetworkPlatformFile::SendWriteMessage
                      (this->Network,this->HandleId,param_1,param_2);
    if (bVar1) {
      this->FilePos = this->FilePos + param_2;
      lVar2 = this->FileSize;
      if (this->FileSize < this->FilePos) {
        lVar2 = this->FilePos;
      }
      this->FileSize = lVar2;
      return true;
    }
  }
  return false;
}

