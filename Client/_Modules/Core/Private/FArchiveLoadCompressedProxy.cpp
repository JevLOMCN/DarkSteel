// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 6

// FArchiveLoadCompressedProxy @ 1419cc500

/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

FArchiveLoadCompressedProxy * __thiscall
FArchiveLoadCompressedProxy::FArchiveLoadCompressedProxy
          (FArchiveLoadCompressedProxy *this,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,FName param_2,
          ECompressionFlags param_3)

{
  uchar *puVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined7 uVar3;
  
  pTVar2 = param_1;
  FArchiveState::FArchiveState((FArchiveState *)this);
  this->CompressedData = param_1;
  uVar3 = (undefined7)((ulonglong)pTVar2 >> 8);
  this->_padding_ = (longlong)&___7FArchiveLoadCompressedProxy__6B_;
  this->CompressionFormat = param_2;
  this->CompressionFlags = param_3;
  FArchiveState::SetIsLoading((FArchiveState *)this,true);
  (**(code **)(this->_padding_ + 0x108))(this,CONCAT71(uVar3,1));
  (**(code **)(this->_padding_ + 0xf0))(this);
  this->bShouldSerializeFromArray = false;
  this->RawBytesSerialized = 0;
  this->CurrentIndex = 0;
  puVar1 = FMemory::Malloc(0x20000,0);
  this->TmpDataStart = puVar1;
  this->TmpDataEnd = puVar1 + 0x20000;
  this->TmpData = puVar1 + 0x20000;
  return this;
}

// ~FArchiveLoadCompressedProxy @ 1419d1e10

/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

void __thiscall
FArchiveLoadCompressedProxy::~FArchiveLoadCompressedProxy(FArchiveLoadCompressedProxy *this)

{
  this->_padding_ = (longlong)&___7FArchiveLoadCompressedProxy__6B_;
  FMemory::Free(this->TmpDataStart);
  this->TmpDataStart = (uchar *)0x0;
  this->TmpDataEnd = (uchar *)0x0;
  this->TmpData = (uchar *)0x0;
  FArchive::~FArchive((FArchive *)this);
  return;
}

// DecompressMoreData @ 1419eb450

/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

void __thiscall FArchiveLoadCompressedProxy::DecompressMoreData(FArchiveLoadCompressedProxy *this)

{
  uchar *puVar1;
  code *pcVar2;
  bool bVar3;
  long64 local_res8 [4];
  
  puVar1 = this->TmpDataStart;
  if ((this->_padding_ & 0x200) != 0) {
    this->TmpData = puVar1;
    this->TmpDataEnd = puVar1;
    return;
  }
  this->bShouldSerializeFromArray = true;
  local_res8[0] = 0;
  FArchive::SerializeCompressedNew
            ((FArchive *)this,puVar1,0x20000,this->CompressionFormat,this->CompressionFormat,
             this->CompressionFlags,false,local_res8);
  if (0x20000 < local_res8[0]) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DecompressedLength <= 131072",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\ArchiveLoadCompressedProxy.cpp"
                       ,0x3f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->bShouldSerializeFromArray = false;
  this->TmpData = this->TmpDataStart;
  this->TmpDataEnd = this->TmpDataStart + local_res8[0];
  return;
}

// Seek @ 141a1d550

/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

void __thiscall FArchiveLoadCompressedProxy::Seek(FArchiveLoadCompressedProxy *this,long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar3 = (**(code **)(this->_padding_ + 0x28))();
  if (param_1 - lVar3 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Difference>=0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\ArchiveLoadCompressedProxy.cpp"
                       ,0x87,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000141a1d5a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x188))(this,0,param_1 - lVar3);
  return;
}

// Serialize @ 141a1dac0

/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

void __thiscall
FArchiveLoadCompressedProxy::Serialize
          (FArchiveLoadCompressedProxy *this,void *param_1,long64 param_2)

{
  uint uVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  uchar *puVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  size_t _Size;
  uint uVar7;
  long64 local_res8;
  
  if (this->bShouldSerializeFromArray == false) {
    do {
      while( true ) {
        if (param_2 == 0) {
          return;
        }
        iVar6 = *(int *)&this->TmpDataEnd - *(int *)&this->TmpData;
        if ((int)param_2 < iVar6) {
          iVar6 = (int)param_2;
        }
        if (iVar6 == 0) break;
        _Size = (size_t)iVar6;
        if (param_1 != (void *)0x0) {
          memcpy(param_1,this->TmpData,_Size);
          param_1 = (void *)((longlong)param_1 + _Size);
        }
        this->TmpData = this->TmpData + _Size;
        param_2 = param_2 - _Size;
        this->RawBytesSerialized = this->RawBytesSerialized + _Size;
      }
      puVar3 = this->TmpDataStart;
      if ((this->_padding_ & 0x200) != 0) {
        this->TmpData = puVar3;
        this->TmpDataEnd = puVar3;
        break;
      }
      this->bShouldSerializeFromArray = true;
      local_res8 = 0;
      FArchive::SerializeCompressedNew
                ((FArchive *)this,puVar3,0x20000,this->CompressionFormat,this->CompressionFormat,
                 this->CompressionFlags,false,&local_res8);
      if ((0x20000 < local_res8) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("DecompressedLength <= 131072",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\ArchiveLoadCompressedProxy.cpp"
                             ,0x3f,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      puVar3 = this->TmpDataStart;
      this->bShouldSerializeFromArray = false;
      this->TmpData = puVar3;
      this->TmpDataEnd = puVar3 + local_res8;
    } while (puVar3 + local_res8 != puVar3);
    FArchiveState::SetError((FArchiveState *)this);
  }
  else {
    if (((longlong)this->CompressedData->ArrayNum < this->CurrentIndex + param_2) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("CurrentIndex+Count<=CompressedData.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\ArchiveLoadCompressedProxy.cpp"
                           ,0x54,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar1 = this->CurrentIndex;
    pTVar2 = this->CompressedData;
    uVar7 = 0;
    if ((int)uVar1 < pTVar2->ArrayNum) {
      uVar7 = ~uVar1 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    memcpy(param_1,(pTVar2->AllocatorInstance).Data + (int)uVar1,param_2);
    this->CurrentIndex = this->CurrentIndex + (int)param_2;
  }
  return;
}

// Tell @ 141a24890

/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

long64 __thiscall FArchiveLoadCompressedProxy::Tell(FArchiveLoadCompressedProxy *this)

{
  return this->RawBytesSerialized;
}

