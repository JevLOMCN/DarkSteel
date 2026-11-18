// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 9

// ~FImportImage @ 14e691a00

void __thiscall UE::Interchange::FImportImage::~FImportImage(FImportImage *this)

{
  FScriptContainerElement *pFVar1;
  
  if ((this->TextureCreatorApplicationMetadata).bIsSet != false) {
    pFVar1 = (this->TextureCreatorApplicationMetadata).TypedValue.ApplicationVersion.Data.
             AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (this->TextureCreatorApplicationMetadata).TypedValue.ApplicationName.Data.
             AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (this->TextureCreatorApplicationMetadata).TypedValue.ApplicationVendor.Data.
             AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  }
  FUniqueBuffer::~FUniqueBuffer(&this->RawData);
  return;
}

// FImportImage @ 14e6b54b0

FImportImage * __thiscall
UE::Interchange::FImportImage::FImportImage(FImportImage *this,FImportImage *param_1)

{
  bool bVar1;
  FBufferOwner *pFVar2;
  
  this->_padding_ = (longlong)&___7FImportImage_Interchange_UE__6B_;
  pFVar2 = (param_1->RawData).Owner.Owner;
  (param_1->RawData).Owner.Owner = (FBufferOwner *)0x0;
  (this->RawData).Owner.Owner = pFVar2;
  this->RawDataCompressionFormat = param_1->RawDataCompressionFormat;
  this->Format = param_1->Format;
  this->CompressionSettings = param_1->CompressionSettings;
  this->NumMips = param_1->NumMips;
  this->SizeX = param_1->SizeX;
  this->SizeY = param_1->SizeY;
  bVar1 = param_1->bSRGB;
  (this->MipGenSettings).bIsSet = false;
  this->bSRGB = bVar1;
  bVar1 = (param_1->MipGenSettings).bIsSet;
  (this->MipGenSettings).bIsSet = bVar1;
  if (bVar1 != false) {
    (this->MipGenSettings).TypedValue = (param_1->MipGenSettings).TypedValue;
  }
  (this->TextureCreatorApplicationMetadata).bIsSet = false;
  bVar1 = (param_1->TextureCreatorApplicationMetadata).bIsSet;
  (this->TextureCreatorApplicationMetadata).bIsSet = bVar1;
  if (bVar1 != false) {
    (this->TextureCreatorApplicationMetadata).TypedValue.ApplicationVendor.Data.AllocatorInstance.
    Data = (FScriptContainerElement *)0x0;
    (this->TextureCreatorApplicationMetadata).TypedValue.ApplicationVendor.Data.AllocatorInstance.
    Data = (param_1->TextureCreatorApplicationMetadata).TypedValue.ApplicationVendor.Data.
           AllocatorInstance.Data;
    (param_1->TextureCreatorApplicationMetadata).TypedValue.ApplicationVendor.Data.AllocatorInstance
    .Data = (FScriptContainerElement *)0x0;
    (this->TextureCreatorApplicationMetadata).TypedValue.ApplicationVendor.Data.ArrayNum =
         (param_1->TextureCreatorApplicationMetadata).TypedValue.ApplicationVendor.Data.ArrayNum;
    (this->TextureCreatorApplicationMetadata).TypedValue.ApplicationVendor.Data.ArrayMax =
         (param_1->TextureCreatorApplicationMetadata).TypedValue.ApplicationVendor.Data.ArrayMax;
    (param_1->TextureCreatorApplicationMetadata).TypedValue.ApplicationVendor.Data.ArrayNum = 0;
    (param_1->TextureCreatorApplicationMetadata).TypedValue.ApplicationVendor.Data.ArrayMax = 0;
    (this->TextureCreatorApplicationMetadata).TypedValue.ApplicationName.Data.AllocatorInstance.Data
         = (FScriptContainerElement *)0x0;
    (this->TextureCreatorApplicationMetadata).TypedValue.ApplicationName.Data.AllocatorInstance.Data
         = (param_1->TextureCreatorApplicationMetadata).TypedValue.ApplicationName.Data.
           AllocatorInstance.Data;
    (param_1->TextureCreatorApplicationMetadata).TypedValue.ApplicationName.Data.AllocatorInstance.
    Data = (FScriptContainerElement *)0x0;
    (this->TextureCreatorApplicationMetadata).TypedValue.ApplicationName.Data.ArrayNum =
         (param_1->TextureCreatorApplicationMetadata).TypedValue.ApplicationName.Data.ArrayNum;
    (this->TextureCreatorApplicationMetadata).TypedValue.ApplicationName.Data.ArrayMax =
         (param_1->TextureCreatorApplicationMetadata).TypedValue.ApplicationName.Data.ArrayMax;
    (param_1->TextureCreatorApplicationMetadata).TypedValue.ApplicationName.Data.ArrayNum = 0;
    (param_1->TextureCreatorApplicationMetadata).TypedValue.ApplicationName.Data.ArrayMax = 0;
    (this->TextureCreatorApplicationMetadata).TypedValue.ApplicationVersion.Data.AllocatorInstance.
    Data = (FScriptContainerElement *)0x0;
    (this->TextureCreatorApplicationMetadata).TypedValue.ApplicationVersion.Data.AllocatorInstance.
    Data = (param_1->TextureCreatorApplicationMetadata).TypedValue.ApplicationVersion.Data.
           AllocatorInstance.Data;
    (param_1->TextureCreatorApplicationMetadata).TypedValue.ApplicationVersion.Data.
    AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->TextureCreatorApplicationMetadata).TypedValue.ApplicationVersion.Data.ArrayNum =
         (param_1->TextureCreatorApplicationMetadata).TypedValue.ApplicationVersion.Data.ArrayNum;
    (this->TextureCreatorApplicationMetadata).TypedValue.ApplicationVersion.Data.ArrayMax =
         (param_1->TextureCreatorApplicationMetadata).TypedValue.ApplicationVersion.Data.ArrayMax;
    (param_1->TextureCreatorApplicationMetadata).TypedValue.ApplicationVersion.Data.ArrayNum = 0;
    (param_1->TextureCreatorApplicationMetadata).TypedValue.ApplicationVersion.Data.ArrayMax = 0;
  }
  return this;
}

// operator= @ 14e709c20

FImportImage * __thiscall
UE::Interchange::FImportImage::operator=(FImportImage *this,FImportImage *param_1)

{
  TOptional<UE::Interchange::FTextureCreatorApplicationMetadata> *pTVar1;
  FScriptContainerElement *pFVar2;
  TOptional<UE::Interchange::FTextureCreatorApplicationMetadata> *pTVar3;
  
  SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::operator=
            (&(this->RawData).Owner,&(param_1->RawData).Owner);
  this->RawDataCompressionFormat = param_1->RawDataCompressionFormat;
  this->Format = param_1->Format;
  this->CompressionSettings = param_1->CompressionSettings;
  this->NumMips = param_1->NumMips;
  this->SizeX = param_1->SizeX;
  this->SizeY = param_1->SizeY;
  this->bSRGB = param_1->bSRGB;
  if (&param_1->MipGenSettings != &this->MipGenSettings) {
    if ((param_1->MipGenSettings).bIsSet == false) {
      if ((this->MipGenSettings).bIsSet != false) {
        (this->MipGenSettings).bIsSet = false;
      }
    }
    else {
      (this->MipGenSettings).TypedValue = (param_1->MipGenSettings).TypedValue;
      (this->MipGenSettings).bIsSet = true;
    }
  }
  pTVar3 = &param_1->TextureCreatorApplicationMetadata;
  pTVar1 = &this->TextureCreatorApplicationMetadata;
  if (pTVar3 != pTVar1) {
    if ((param_1->TextureCreatorApplicationMetadata).bIsSet != false) {
      if ((this->TextureCreatorApplicationMetadata).bIsSet != false) {
        pFVar2 = (this->TextureCreatorApplicationMetadata).TypedValue.ApplicationVersion.Data.
                 AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        pFVar2 = (this->TextureCreatorApplicationMetadata).TypedValue.ApplicationName.Data.
                 AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        pFVar2 = (pTVar1->TypedValue).ApplicationVendor.Data.AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
      }
      (pTVar1->TypedValue).ApplicationVendor.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (pTVar1->TypedValue).ApplicationVendor.Data.AllocatorInstance.Data =
           (pTVar3->TypedValue).ApplicationVendor.Data.AllocatorInstance.Data;
      (pTVar3->TypedValue).ApplicationVendor.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (this->TextureCreatorApplicationMetadata).TypedValue.ApplicationVendor.Data.ArrayNum =
           (param_1->TextureCreatorApplicationMetadata).TypedValue.ApplicationVendor.Data.ArrayNum;
      (this->TextureCreatorApplicationMetadata).TypedValue.ApplicationVendor.Data.ArrayMax =
           (param_1->TextureCreatorApplicationMetadata).TypedValue.ApplicationVendor.Data.ArrayMax;
      (param_1->TextureCreatorApplicationMetadata).TypedValue.ApplicationVendor.Data.ArrayNum = 0;
      (param_1->TextureCreatorApplicationMetadata).TypedValue.ApplicationVendor.Data.ArrayMax = 0;
      (this->TextureCreatorApplicationMetadata).TypedValue.ApplicationName.Data.AllocatorInstance.
      Data = (FScriptContainerElement *)0x0;
      (this->TextureCreatorApplicationMetadata).TypedValue.ApplicationName.Data.AllocatorInstance.
      Data = (param_1->TextureCreatorApplicationMetadata).TypedValue.ApplicationName.Data.
             AllocatorInstance.Data;
      (param_1->TextureCreatorApplicationMetadata).TypedValue.ApplicationName.Data.AllocatorInstance
      .Data = (FScriptContainerElement *)0x0;
      (this->TextureCreatorApplicationMetadata).TypedValue.ApplicationName.Data.ArrayNum =
           (param_1->TextureCreatorApplicationMetadata).TypedValue.ApplicationName.Data.ArrayNum;
      (this->TextureCreatorApplicationMetadata).TypedValue.ApplicationName.Data.ArrayMax =
           (param_1->TextureCreatorApplicationMetadata).TypedValue.ApplicationName.Data.ArrayMax;
      (param_1->TextureCreatorApplicationMetadata).TypedValue.ApplicationName.Data.ArrayNum = 0;
      (param_1->TextureCreatorApplicationMetadata).TypedValue.ApplicationName.Data.ArrayMax = 0;
      (this->TextureCreatorApplicationMetadata).TypedValue.ApplicationVersion.Data.AllocatorInstance
      .Data = (FScriptContainerElement *)0x0;
      (this->TextureCreatorApplicationMetadata).TypedValue.ApplicationVersion.Data.AllocatorInstance
      .Data = (param_1->TextureCreatorApplicationMetadata).TypedValue.ApplicationVersion.Data.
              AllocatorInstance.Data;
      (param_1->TextureCreatorApplicationMetadata).TypedValue.ApplicationVersion.Data.
      AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->TextureCreatorApplicationMetadata).TypedValue.ApplicationVersion.Data.ArrayNum =
           (param_1->TextureCreatorApplicationMetadata).TypedValue.ApplicationVersion.Data.ArrayNum;
      (this->TextureCreatorApplicationMetadata).TypedValue.ApplicationVersion.Data.ArrayMax =
           (param_1->TextureCreatorApplicationMetadata).TypedValue.ApplicationVersion.Data.ArrayMax;
      (param_1->TextureCreatorApplicationMetadata).TypedValue.ApplicationVersion.Data.ArrayNum = 0;
      (param_1->TextureCreatorApplicationMetadata).TypedValue.ApplicationVersion.Data.ArrayMax = 0;
      (this->TextureCreatorApplicationMetadata).bIsSet = true;
      return this;
    }
    if ((this->TextureCreatorApplicationMetadata).bIsSet != false) {
      pFVar2 = (this->TextureCreatorApplicationMetadata).TypedValue.ApplicationVersion.Data.
               AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      pFVar2 = (this->TextureCreatorApplicationMetadata).TypedValue.ApplicationName.Data.
               AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      pFVar2 = (pTVar1->TypedValue).ApplicationVendor.Data.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (this->TextureCreatorApplicationMetadata).bIsSet = false;
    }
  }
  return this;
}

// ComputeBufferSize @ 14e711b20

long64 __thiscall UE::Interchange::FImportImage::ComputeBufferSize(FImportImage *this)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar2 = 0;
  uVar4 = uVar2;
  if (0 < this->NumMips) {
    do {
      lVar1 = (**(code **)(this->_padding_ + 8))(this,uVar4);
      uVar2 = uVar2 + lVar1;
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while ((int)uVar3 < this->NumMips);
  }
  return uVar2;
}

// GetArrayViewOfRawData @ 14e715f30

TArrayView<unsigned_char,__int64> * __thiscall
UE::Interchange::FImportImage::GetArrayViewOfRawData
          (FImportImage *this,TArrayView<unsigned_char,__int64> *__return_storage_ptr__)

{
  FBufferOwner *pFVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<unsigned_char,__int64> *pTVar4;
  uchar *puVar5;
  uchar *puVar6;
  
  pFVar1 = (this->RawData).Owner.Owner;
  puVar5 = (uchar *)0x0;
  puVar6 = puVar5;
  if (pFVar1 != (FBufferOwner *)0x0) {
    if (((ulonglong)pFVar1->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)(pFVar1->_padding_ + 8))(pFVar1);
    }
    puVar6 = (uchar *)pFVar1->Size;
  }
  pFVar1 = (this->RawData).Owner.Owner;
  if (pFVar1 != (FBufferOwner *)0x0) {
    if (((ulonglong)pFVar1->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)(pFVar1->_padding_ + 8))(pFVar1);
    }
    puVar5 = pFVar1->Data;
  }
  __return_storage_ptr__->DataPtr = puVar5;
  __return_storage_ptr__->ArrayNum = (long64)puVar6;
  if (((longlong)puVar6 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<unsigned_char,__int64> *)(*pcVar2)();
    return pTVar4;
  }
  return __return_storage_ptr__;
}

// GetMipSize @ 14e719250

long64 __thiscall UE::Interchange::FImportImage::GetMipSize(FImportImage *this,int param_1)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  long64 lVar4;
  int iVar5;
  int iVar6;
  
  if (param_1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InMipIndex >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Texture\\InterchangeTexturePayloadData.cpp"
                       ,0x21,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      lVar4 = (*pcVar1)();
      return lVar4;
    }
  }
  if (this->NumMips <= param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InMipIndex < NumMips",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Texture\\InterchangeTexturePayloadData.cpp"
                       ,0x22,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      lVar4 = (*pcVar1)();
      return lVar4;
    }
  }
  iVar5 = this->SizeY >> ((byte)param_1 & 0x1f);
  iVar6 = this->SizeX >> ((byte)param_1 & 0x1f);
  lVar4 = FTextureSource::GetBytesPerPixel(this->Format);
  iVar2 = 1;
  if (1 < iVar5) {
    iVar2 = iVar5;
  }
  iVar5 = 1;
  if (1 < iVar6) {
    iVar5 = iVar6;
  }
  return lVar4 * iVar2 * (longlong)iVar5;
}

// Init2DWithParams @ 14e723310

void __thiscall
UE::Interchange::FImportImage::Init2DWithParams
          (FImportImage *this,int param_1,int param_2,int param_3,ETextureSourceFormat param_4,
          bool param_5,bool param_6)

{
  FUniqueBuffer FVar1;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_res8 [4];
  
  this->Format = param_4;
  this->bSRGB = param_5;
  this->SizeX = param_1;
  this->SizeY = param_2;
  this->NumMips = param_3;
  if (param_6) {
    (**(code **)(this->_padding_ + 0x10))();
    FVar1 = FUniqueBuffer::Alloc((ulong64)local_res8);
    SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::operator=
              (&(this->RawData).Owner,
               (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)FVar1.Owner.Owner);
    SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(local_res8);
  }
  return;
}

// Init2DWithParams @ 14e723370

void __thiscall
UE::Interchange::FImportImage::Init2DWithParams
          (FImportImage *this,int param_1,int param_2,ETextureSourceFormat param_3,bool param_4,
          bool param_5)

{
  FUniqueBuffer FVar1;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_res8 [4];
  
  this->bSRGB = param_4;
  this->SizeX = param_1;
  this->SizeY = param_2;
  this->NumMips = 1;
  this->Format = param_3;
  if (param_5) {
    (**(code **)(this->_padding_ + 0x10))();
    FVar1 = FUniqueBuffer::Alloc((ulong64)local_res8);
    SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::operator=
              (&(this->RawData).Owner,
               (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)FVar1.Owner.Owner);
    SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(local_res8);
  }
  return;
}

// IsValid @ 14e7239f0

bool __thiscall UE::Interchange::FImportImage::IsValid(FImportImage *this)

{
  FBufferOwner *pFVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  bool bVar4;
  
  if (this->RawDataCompressionFormat == TSCF_None) {
    uVar2 = (**(code **)(this->_padding_ + 0x10))();
    pFVar1 = (this->RawData).Owner.Owner;
    if (pFVar1 == (FBufferOwner *)0x0) {
      uVar3 = 0;
    }
    else {
      if (((ulonglong)pFVar1->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
        (**(code **)(pFVar1->_padding_ + 8))(pFVar1);
      }
      uVar3 = pFVar1->Size;
    }
    bVar4 = uVar2 == uVar3;
  }
  else {
    bVar4 = (this->RawData).Owner.Owner != (FBufferOwner *)0x0;
  }
  if ((((0 < this->SizeX) && (0 < this->SizeY)) && (0 < this->NumMips)) &&
     ((this->Format != TSF_Invalid && (bVar4)))) {
    return true;
  }
  return false;
}

