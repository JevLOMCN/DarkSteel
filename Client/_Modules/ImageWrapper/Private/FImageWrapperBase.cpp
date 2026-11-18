// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWrapper
// Functions: 18

// Reset @ 142606f40

void __thiscall FImageWrapperBase::Reset(FImageWrapperBase *this)

{
  long64 *plVar1;
  
  ::FString::Empty(&this->LastError);
  plVar1 = &(this->RawData).ArrayMax;
  (this->RawData).ArrayNum = 0;
  if (*plVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (1,1,0,&(this->RawData).AllocatorInstance,0,plVar1);
  }
  plVar1 = &(this->CompressedData).ArrayMax;
  (this->CompressedData).ArrayNum = 0;
  if (*plVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (1,1,0,&(this->CompressedData).AllocatorInstance,0,plVar1);
  }
  this->Format = Invalid;
  this->BitDepth = 0;
  this->Width = 0;
  this->Height = 0;
  return;
}

// Uncompress @ 142606fd0

void __thiscall
FImageWrapperBase::Uncompress
          (FImageWrapperBase *this,ERGBFormat param_1,int param_2,FDecompressedImageOutput *param_3)

{
  int iVar1;
  int iVar2;
  FDecompressedImageOutput local_68;
  
  local_68.MipMapImage.RawData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.MipMapImage.RawData.ArrayNum = 0;
  local_68.MipMapImage.RawData.ArrayMax = 0;
  local_68.MipMapImage.SubImages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.MipMapImage.SubImages.ArrayNum = 0;
  local_68.MipMapImage.SubImages.ArrayMax = 0;
  local_68.MipMapImage.Format = BGRA8;
  local_68.MipMapImage.GammaSpace = sRGB;
  local_68.MipMapImage._42_6_ = 0;
  local_68.ApplicationVendor.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ApplicationVendor.Data.ArrayNum = 0;
  local_68.ApplicationVendor.Data.ArrayMax = 0;
  local_68.ApplicationName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ApplicationName.Data.ArrayNum = 0;
  local_68.ApplicationName.Data.ArrayMax = 0;
  local_68.ApplicationVersion.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ApplicationVersion.Data.ArrayNum = 0;
  local_68.ApplicationVersion.Data.ArrayMax = 0;
  FDecompressedImageOutput::operator=(param_3,&local_68);
  if (local_68.ApplicationVersion.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.ApplicationVersion.Data.AllocatorInstance.Data);
  }
  if (local_68.ApplicationName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.ApplicationName.Data.AllocatorInstance.Data);
  }
  if (local_68.ApplicationVendor.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.ApplicationVendor.Data.AllocatorInstance.Data);
  }
  if (local_68.MipMapImage.SubImages.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.MipMapImage.SubImages.AllocatorInstance.Data);
  }
  if (local_68.MipMapImage.RawData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.MipMapImage.RawData.AllocatorInstance.Data);
  }
  (**(code **)(this->_padding_ + 0x98))(this,param_1,param_2);
  iVar1 = (**(code **)(this->_padding_ + 0x48))(this);
  iVar2 = (**(code **)(this->_padding_ + 0x40))(this);
  FMipMapImage::AddMipImage(&param_3->MipMapImage,&this->RawData,iVar2,iVar1);
  return;
}

// GetCompressed @ 142607100

TArray<unsigned_char,TSizedDefaultAllocator<64>_> * __thiscall
FImageWrapperBase::GetCompressed
          (FImageWrapperBase *this,
          TArray<unsigned_char,TSizedDefaultAllocator<64>_> *__return_storage_ptr__,int param_1)

{
  ::FString::Empty(&this->LastError);
  (**(code **)(this->_padding_ + 0x80))(this,param_1);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AllocatorInstance).Data = (this->CompressedData).AllocatorInstance.Data;
  (this->CompressedData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = (this->CompressedData).ArrayNum;
  __return_storage_ptr__->ArrayMax = (this->CompressedData).ArrayMax;
  (this->CompressedData).ArrayNum = 0;
  (this->CompressedData).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetBitDepth @ 142607180

int __thiscall FImageWrapperBase::GetBitDepth(FImageWrapperBase *this)

{
  return this->BitDepth;
}

// GetFormat @ 142607190

ERGBFormat __thiscall FImageWrapperBase::GetFormat(FImageWrapperBase *this)

{
  return this->Format;
}

// GetHeight @ 1426071a0

long64 __thiscall FImageWrapperBase::GetHeight(FImageWrapperBase *this)

{
  return this->Height;
}

// GetRaw @ 1426071b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FImageWrapperBase::GetRaw
          (FImageWrapperBase *this,ERGBFormat param_1,int param_2,
          TArray<unsigned_char,TSizedDefaultAllocator<64>_> *param_3)

{
  ::FString::Empty(&this->LastError);
  (**(code **)(this->_padding_ + 0x98))(this,param_1,param_2);
  if ((this->LastError).Data.ArrayNum < 2) {
    if ((this->RawData).ArrayNum != 0) {
      TArray<unsigned_char,TSizedDefaultAllocator<64>_>::operator=(param_3,&this->RawData);
      return true;
    }
  }
  else if (2 < (byte)LogImageWrapper._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogImageWrapper);
    return false;
  }
  return false;
}

// GetRaw @ 142607260

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FImageWrapperBase::GetRaw
          (FImageWrapperBase *this,ERGBFormat param_1,int param_2,FDecompressedImageOutput *param_3)

{
  bool bVar1;
  
  ::FString::Empty(&this->LastError);
  (**(code **)(this->_padding_ + 0x90))(this,param_1,param_2,param_3);
  if ((this->LastError).Data.ArrayNum < 2) {
    bVar1 = (param_3->MipMapImage).RawData.ArrayNum != 0;
  }
  else {
    if (2 < (byte)LogImageWrapper._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogImageWrapper);
    }
    bVar1 = false;
  }
  return bVar1;
}

// GetWidth @ 142607300

long64 __thiscall FImageWrapperBase::GetWidth(FImageWrapperBase *this)

{
  return this->Width;
}

// SetRaw @ 142607310

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FImageWrapperBase::SetRaw
          (FImageWrapperBase *this,void *param_1,long64 param_2,int param_3,int param_4,
          ERGBFormat param_5,int param_6,int param_7)

{
  long64 *plVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  size_t _Size;
  ulonglong uVar6;
  char *pcVar7;
  uint uVar8;
  ulonglong uVar9;
  size_t sVar10;
  int iVar11;
  size_t _Size_00;
  
  if (param_1 == (void *)0x0) {
    iVar11 = 0x81;
    pcVar7 = "InRawData != 0";
  }
  else if (param_2 < 1) {
    iVar11 = 0x82;
    pcVar7 = "InRawSize > 0";
  }
  else if (param_3 < 1) {
    iVar11 = 0x83;
    pcVar7 = "InWidth > 0";
  }
  else if (param_4 < 1) {
    iVar11 = 0x84;
    pcVar7 = "InHeight > 0";
  }
  else {
    sVar10 = (size_t)param_7;
    if (param_7 < 0) {
      iVar11 = 0x85;
      pcVar7 = "InBytesPerRow >= 0";
    }
    else {
      (**(code **)(this->_padding_ + 0x88))();
      uVar6 = 0;
      plVar1 = &(this->CompressedData).ArrayMax;
      (this->CompressedData).ArrayNum = 0;
      if (*plVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                  (1,1,0,&(this->CompressedData).AllocatorInstance,0,plVar1);
      }
      cVar3 = (**(code **)(this->_padding_ + 0x10))(this,param_5,param_6);
      if (cVar3 == '\0') {
        if ((byte)LogImageWrapper._0_1_ < 3) {
          return false;
        }
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogImageWrapper);
        return false;
      }
      this->Width = (longlong)param_3;
      this->Format = param_5;
      this->BitDepth = param_6;
      this->Height = (longlong)param_4;
      _Size = GetBytesPerRow(this);
      _Size_00 = _Size * this->Height;
      TArray<unsigned_char,TSizedDefaultAllocator<64>_>::Empty(&this->RawData,_Size_00);
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                (1,1,_Size_00,&(this->RawData).AllocatorInstance,&(this->RawData).ArrayNum,
                 &(this->RawData).ArrayMax);
      if ((param_7 == 0) || (_Size == sVar10)) {
        if ((longlong)_Size_00 <= param_2) {
          memcpy((this->RawData).AllocatorInstance.Data,param_1,_Size_00);
          return true;
        }
        iVar11 = 0xa1;
        pcVar7 = "InRawSize >= RawSize";
      }
      else {
        if ((longlong)_Size < (longlong)sVar10) {
          if ((param_2 < (longlong)((this->Height + -1) * sVar10 + _Size)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("InRawSize >= (int64) (Height-1)*InBytesPerRow + BytesPerRow",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\ImageWrapperBase.cpp"
                                 ,0xab,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          if (param_2 < (longlong)((this->Height + -1) * sVar10 + _Size)) {
            return false;
          }
          uVar9 = uVar6;
          if (this->Height < 1) {
            return true;
          }
          do {
            memcpy((this->RawData).AllocatorInstance.Data + uVar6 * _Size,
                   (void *)(uVar6 * sVar10 + (longlong)param_1),_Size);
            uVar8 = (int)uVar9 + 1;
            uVar6 = (ulonglong)(int)uVar8;
            uVar9 = (ulonglong)uVar8;
          } while ((longlong)uVar6 < this->Height);
          return true;
        }
        iVar11 = 0xaa;
        pcVar7 = "InBytesPerRow > BytesPerRow";
      }
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    (pcVar7,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\ImageWrapperBase.cpp"
                     ,iVar11,L"");
  if (!bVar4) {
    return false;
  }
  pcVar2 = (code *)swi(3);
  uVar5 = (*pcVar2)();
  return (bool)uVar5;
}

// SupportsMetadata @ 1426075b0

bool __thiscall FImageWrapperBase::SupportsMetadata(FImageWrapperBase *this)

{
  return false;
}

// AddMetadata @ 1426075c0

void __thiscall
FImageWrapperBase::AddMetadata(FImageWrapperBase *this,FString *param_1,FString *param_2)

{
  return;
}

// GetMetadata @ 1426075d0

void __thiscall
FImageWrapperBase::GetMetadata
          (FImageWrapperBase *this,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_1)

{
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
           *)param_1);
  return;
}

// FImageWrapperBase @ 142664c80

FImageWrapperBase * __thiscall FImageWrapperBase::FImageWrapperBase(FImageWrapperBase *this)

{
  this->_padding_ = (longlong)&___7FImageWrapperBase__6B_;
  this->_padding_ = 0;
  (this->RawData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RawData).ArrayNum = 0;
  (this->RawData).ArrayMax = 0;
  (this->CompressedData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompressedData).ArrayNum = 0;
  (this->CompressedData).ArrayMax = 0;
  this->Format = Invalid;
  this->BitDepth = 0;
  this->Width = 0;
  this->Height = 0;
  (this->LastError).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LastError).Data.ArrayNum = 0;
  (this->LastError).Data.ArrayMax = 0;
  return this;
}

// GetBytesPerRow @ 14268af00

/* WARNING: Enum "Type": Some values do not have unique names */

long64 __thiscall FImageWrapperBase::GetBytesPerRow(FImageWrapperBase *this)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = this->BitDepth;
  switch(this->Format) {
  case RGBA:
  case BGRA:
    if (iVar1 != 8) {
      if (iVar1 == 0x10) goto LAB_14268af3c;
      break;
    }
    goto LAB_14268af7e;
  case Gray:
    if (iVar1 == 8) {
      return this->Width;
    }
    if (iVar1 == 0x10) {
LAB_14268af68:
      return this->Width * 2;
    }
    break;
  case RGBAF:
    if (iVar1 == 0x10) {
LAB_14268af3c:
      return this->Width * 8;
    }
    if (iVar1 == 0x20) {
      return this->Width * 0x10;
    }
    break;
  case BGRE:
    bVar2 = iVar1 == 8;
    goto LAB_14268af7c;
  case GrayF:
    if (iVar1 == 0x10) goto LAB_14268af68;
    bVar2 = iVar1 == 0x20;
LAB_14268af7c:
    if (bVar2) {
LAB_14268af7e:
      return this->Width * 4;
    }
  }
  if (1 < (byte)LogImageWrapper._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogImageWrapper);
  }
  return 0;
}

// GetImageViewOfSetRawForCompress @ 14268b4f0

bool __thiscall
FImageWrapperBase::GetImageViewOfSetRawForCompress(FImageWrapperBase *this,FImageView *param_1)

{
  code *pcVar1;
  ERGBFormat EVar2;
  Type TVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  bool local_res8 [8];
  
  if ((this->RawData).ArrayNum != 0) {
    EVar2 = (**(code **)(this->_padding_ + 0x58))();
    iVar6 = (**(code **)(this->_padding_ + 0x50))(this);
    TVar3 = IImageWrapper::ConvertRGBFormat(EVar2,iVar6,local_res8);
    if ((TVar3 != Invalid) && (local_res8[0] != false)) {
      if (((this->RawData).ArrayNum < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
      param_1->RawData = (this->RawData).AllocatorInstance.Data;
      *(int *)&param_1->_padding_ = (int)this->Width;
      *(int *)((longlong)&param_1->_padding_ + 4) = (int)this->Height;
      *(undefined4 *)&param_1->_padding_ = 1;
      *(Type *)((longlong)&param_1->_padding_ + 4) = TVar3;
      *(byte *)((longlong)&param_1->_padding_ + 5) = -(TVar3 < BGRE8) & 2;
      return true;
    }
  }
  return false;
}

// SetCompressed @ 14268e150

bool __thiscall
FImageWrapperBase::SetCompressed(FImageWrapperBase *this,void *param_1,long64 param_2)

{
  long64 *plVar1;
  long64 *plVar2;
  
  (**(code **)(this->_padding_ + 0x88))();
  plVar1 = &(this->RawData).ArrayMax;
  (this->RawData).ArrayNum = 0;
  if (*plVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (1,1,0,&(this->RawData).AllocatorInstance,0,plVar1);
  }
  if ((0 < param_2) && (param_1 != (void *)0x0)) {
    plVar1 = &(this->CompressedData).ArrayMax;
    plVar2 = &(this->CompressedData).ArrayNum;
    *plVar2 = 0;
    if (*plVar1 != param_2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                (1,1,param_2,&(this->CompressedData).AllocatorInstance,0,plVar1);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (1,1,param_2,&(this->CompressedData).AllocatorInstance,plVar2,plVar1);
    memcpy((this->CompressedData).AllocatorInstance.Data,param_1,param_2);
    return true;
  }
  return false;
}

// SetError @ 14268ee20

void __thiscall FImageWrapperBase::SetError(FImageWrapperBase *this,wchar_t *param_1)

{
  ::FString::operator=(&this->LastError,param_1);
  return;
}

