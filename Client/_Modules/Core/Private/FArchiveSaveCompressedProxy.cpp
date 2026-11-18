// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 6

// FArchiveSaveCompressedProxy @ 1419cc620

/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

FArchiveSaveCompressedProxy * __thiscall
FArchiveSaveCompressedProxy::FArchiveSaveCompressedProxy
          (FArchiveSaveCompressedProxy *this,
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
  this->_padding_ = (longlong)&___7FArchiveSaveCompressedProxy__6B_;
  this->CompressionFormat = param_2;
  this->CompressionFlags = param_3;
  FArchiveState::SetIsSaving((FArchiveState *)this,true);
  (**(code **)(this->_padding_ + 0x108))(this,CONCAT71(uVar3,1));
  (**(code **)(this->_padding_ + 0xf0))(this);
  this->bShouldSerializeToArray = false;
  this->RawBytesSerialized = 0;
  this->CurrentIndex = 0;
  puVar1 = FMemory::Malloc(0x20000,0);
  this->TmpDataStart = puVar1;
  this->TmpData = puVar1;
  this->TmpDataEnd = puVar1 + 0x20000;
  return this;
}

// ~FArchiveSaveCompressedProxy @ 1419d1ea0

/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

void __thiscall
FArchiveSaveCompressedProxy::~FArchiveSaveCompressedProxy(FArchiveSaveCompressedProxy *this)

{
  uchar *puVar1;
  longlong lVar2;
  
  this->_padding_ = (longlong)&___7FArchiveSaveCompressedProxy__6B_;
  puVar1 = this->TmpDataStart;
  lVar2 = (longlong)this->TmpData - (longlong)puVar1;
  if (0 < lVar2) {
    this->bShouldSerializeToArray = true;
    FArchive::SerializeCompressed
              ((FArchive *)this,puVar1,lVar2,this->CompressionFormat,this->CompressionFlags,false);
    puVar1 = this->TmpDataStart;
    this->TmpData = puVar1;
    this->bShouldSerializeToArray = false;
  }
  FMemory::Free(puVar1);
  this->TmpDataStart = (uchar *)0x0;
  this->TmpDataEnd = (uchar *)0x0;
  this->TmpData = (uchar *)0x0;
  FArchive::~FArchive((FArchive *)this);
  return;
}

// Flush @ 1419faf70

/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

void __thiscall FArchiveSaveCompressedProxy::Flush(FArchiveSaveCompressedProxy *this)

{
  longlong lVar1;
  
  lVar1 = (longlong)this->TmpData - (longlong)this->TmpDataStart;
  if (0 < lVar1) {
    this->bShouldSerializeToArray = true;
    FArchive::SerializeCompressed
              ((FArchive *)this,this->TmpDataStart,lVar1,this->CompressionFormat,
               this->CompressionFlags,false);
    this->TmpData = this->TmpDataStart;
    this->bShouldSerializeToArray = false;
  }
  return;
}

// Seek @ 141a1d5c0

/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FArchiveSaveCompressedProxy::Seek(FArchiveSaveCompressedProxy *this,long64 param_1)

{
  if (this->bShouldSerializeToArray != false) {
    this->CurrentIndex = (int)param_1;
    return;
  }
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
  return;
}

// Serialize @ 141a1dcf0

/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

void __thiscall
FArchiveSaveCompressedProxy::Serialize
          (FArchiveSaveCompressedProxy *this,void *param_1,long64 param_2)

{
  uint uVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  size_t _Size;
  int iVar6;
  
  if (this->bShouldSerializeToArray == false) {
    while (param_2 != 0) {
      iVar6 = *(int *)&this->TmpDataEnd - *(int *)&this->TmpData;
      if ((int)param_2 < iVar6) {
        iVar6 = (int)param_2;
      }
      if (iVar6 == 0) {
        (**(code **)(this->_padding_ + 0x208))(this);
      }
      else {
        _Size = (size_t)iVar6;
        memcpy(this->TmpData,param_1,_Size);
        this->TmpData = this->TmpData + _Size;
        param_2 = param_2 - _Size;
        param_1 = (void *)((longlong)param_1 + _Size);
        this->RawBytesSerialized = this->RawBytesSerialized + _Size;
      }
    }
  }
  else {
    pTVar2 = this->CompressedData;
    iVar6 = ((int)param_2 - pTVar2->ArrayNum) + this->CurrentIndex;
    if (0 < iVar6) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar6,&pTVar2->AllocatorInstance,&pTVar2->ArrayNum,&pTVar2->ArrayMax);
    }
    uVar1 = this->CurrentIndex;
    pTVar2 = this->CompressedData;
    uVar5 = 0;
    if ((int)uVar1 < pTVar2->ArrayNum) {
      uVar5 = ~uVar1 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    memcpy((pTVar2->AllocatorInstance).Data + (int)uVar1,param_1,param_2);
    this->CurrentIndex = this->CurrentIndex + (int)param_2;
  }
  return;
}

// Tell @ 141a248a0

/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

long64 __thiscall FArchiveSaveCompressedProxy::Tell(FArchiveSaveCompressedProxy *this)

{
  if (this->bShouldSerializeToArray != false) {
    return (longlong)this->CurrentIndex;
  }
  return this->RawBytesSerialized;
}

