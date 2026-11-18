// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWrapper
// Functions: 29

// SetCompressed @ 142606200

bool __thiscall FHdrImageWrapper::SetCompressed(FHdrImageWrapper *this,void *param_1,long64 param_2)

{
  long64 *plVar1;
  long64 *plVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  long64 lVar8;
  TArrayView<unsigned_char_const_,__int64> local_28;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(param_2);
  }
  plVar1 = &(this->CompressedDataHolder).ArrayNum;
  plVar2 = &(this->CompressedDataHolder).ArrayMax;
  *plVar1 = 0;
  if ((this->CompressedDataHolder).ArrayMax < param_2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (1,1,param_2,&(this->CompressedDataHolder).AllocatorInstance,0,plVar2);
  }
  if ((param_1 == (void *)0x0) && (param_2 != 0)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ptr != nullptr || Count == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9c1,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  lVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (1,1,param_2,&(this->CompressedDataHolder).AllocatorInstance,plVar1,plVar2);
  if (param_2 != 0) {
    memcpy((this->CompressedDataHolder).AllocatorInstance.Data + lVar8,param_1,param_2);
  }
  lVar3 = *plVar1;
  pFVar4 = (this->CompressedDataHolder).AllocatorInstance.Data;
  if ((lVar3 < 0) || (0x7fffffff < lVar3)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0 && InCount <= static_cast<InCountType>(TNumericLimits<SizeType>::Max())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xe7,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  local_28.ArrayNum = (long64)(int)lVar3;
  local_28.DataPtr = (uchar *)pFVar4;
  bVar6 = SetCompressedFromView(this,&local_28);
  return bVar6;
}

// SetRaw @ 142606370

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FHdrImageWrapper::SetRaw
          (FHdrImageWrapper *this,void *param_1,long64 param_2,int param_3,int param_4,
          ERGBFormat param_5,int param_6,int param_7)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  long64 lVar5;
  FStaticBasicLogRecord *pFVar6;
  
  cVar2 = (**(code **)(this->_padding_ + 0x10))(this,param_5,param_6);
  if (cVar2 == '\0') {
    if ((byte)LogImageWrapper._0_1_ < 3) {
      return false;
    }
    pFVar6 = &::LOG_Static;
  }
  else {
    if ((0 < param_3) && (0 < param_4)) {
      TArray<unsigned_char,TSizedDefaultAllocator<64>_>::Empty(&this->RawDataHolder,param_2);
      if ((param_1 == (void *)0x0) &&
         ((param_2 != 0 &&
          (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("Ptr != nullptr || Count == 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x9c1,L""), bVar3)))) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      lVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                        (1,1,param_2,&(this->RawDataHolder).AllocatorInstance,
                         &(this->RawDataHolder).ArrayNum,&(this->RawDataHolder).ArrayMax);
      if (param_2 != 0) {
        memcpy((this->RawDataHolder).AllocatorInstance.Data + lVar5,param_1,param_2);
      }
      this->Height = (longlong)param_4;
      this->Width = (longlong)param_3;
      if ((param_5 != BGRE) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InFormat == ERGBFormat::BGRE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\HdrImageWrapper.cpp"
                             ,0xa4,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      if ((param_6 != 8) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InBitDepth == 8",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\HdrImageWrapper.cpp"
                             ,0xa5,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      return true;
    }
    if ((byte)LogImageWrapper._0_1_ < 3) {
      return false;
    }
    pFVar6 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar6,(FLogCategoryBase *)&LogImageWrapper);
  return false;
}

// GetCompressed @ 142606510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<unsigned_char,TSizedDefaultAllocator<64>_> * __thiscall
FHdrImageWrapper::GetCompressed
          (FHdrImageWrapper *this,
          TArray<unsigned_char,TSizedDefaultAllocator<64>_> *__return_storage_ptr__,int param_1)

{
  long64 *plVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  int iVar5;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  size_t _Size;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  undefined1 auStackY_498 [32];
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> local_468;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> *local_448;
  char local_438 [1024];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_498;
  lVar9 = this->Width * this->Height;
  local_448 = __return_storage_ptr__;
  if ((this->RawDataHolder).ArrayNum != lVar9 * 4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("RawDataHolder.Num() == NumPixels * 4",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\HdrImageWrapper.cpp"
                       ,0xae,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)(*pcVar2)();
      return pTVar6;
    }
  }
  iVar5 = TCString<char>::SprintfImpl
                    (local_438,"#?RADIANCE\nFORMAT=32-bit_rle_rgbe\n\n-Y %d +X %d\n");
  _Size = (size_t)iVar5;
  if (iVar5 < 1) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    (this->CompressedData).DataPtr = (uchar *)0x0;
    (this->CompressedData).ArrayNum = 0;
    this->RGBDataStart = (uchar *)0x0;
    (this->CompressedDataHolder).ArrayNum = 0;
    plVar1 = &(this->CompressedDataHolder).ArrayMax;
    if (*plVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                (1,1,0,&(this->CompressedDataHolder).AllocatorInstance,0,plVar1);
    }
    local_468.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_468.ArrayNum = 0;
    local_468.ArrayMax = 0;
    TArray<unsigned_char,TSizedDefaultAllocator<64>_>::SetNumUninitialized
              (&local_468,_Size + lVar9 * 4,Default);
    FVar3.Data = local_468.AllocatorInstance.Data;
    memcpy(local_468.AllocatorInstance.Data,local_438,_Size);
    pFVar8 = (this->RawDataHolder).AllocatorInstance.Data;
    if (0 < lVar9) {
      pFVar7 = pFVar8 + 1;
      pFVar8 = FVar3.Data + (_Size - (longlong)pFVar8);
      do {
        pFVar7[(longlong)(pFVar8 + -1)] = pFVar7[1];
        pFVar7[(longlong)pFVar8] = *pFVar7;
        pFVar7[(longlong)(pFVar8 + 1)] = pFVar7[-1];
        pFVar7[(longlong)(pFVar8 + 2)] = pFVar7[2];
        pFVar7 = pFVar7 + 4;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    (__return_storage_ptr__->AllocatorInstance).Data = local_468.AllocatorInstance.Data;
    __return_storage_ptr__->ArrayNum = local_468.ArrayNum;
    __return_storage_ptr__->ArrayMax = local_468.ArrayMax;
  }
  return __return_storage_ptr__;
}

// GetRaw @ 1426066b0

bool __thiscall
FHdrImageWrapper::GetRaw
          (FHdrImageWrapper *this,ERGBFormat param_1,int param_2,
          TArray<unsigned_char,TSizedDefaultAllocator<64>_> *param_3)

{
  long64 *plVar1;
  long64 *plVar2;
  uchar *puVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  FText *pFVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  uchar *local_38;
  FText local_30;
  
  if ((param_1 == BGRE) && (param_2 == 8)) {
    if ((0 < (this->CompressedData).ArrayNum) && (this->RGBDataStart != (uchar *)0x0)) {
      lVar9 = this->Height * this->Width * 4;
      TArray<unsigned_char,TSizedDefaultAllocator<64>_>::Reset(param_3,lVar9);
      plVar1 = &param_3->ArrayMax;
      plVar2 = &param_3->ArrayNum;
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                (1,1,lVar9,&param_3->AllocatorInstance,plVar2,plVar1);
      local_38 = this->RGBDataStart;
      puVar3 = (this->CompressedData).DataPtr;
      lVar9 = (this->CompressedData).ArrayNum;
      iVar11 = 0;
      if (0 < this->Height) {
        lVar10 = 0;
        do {
          lVar10 = lVar10 * this->Width * 4;
          uVar7 = 0;
          if (lVar10 < *plVar2) {
            uVar7 = (uint)((ulonglong)lVar10 >> 0x3f) ^ 1;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          bVar5 = DecompressScanline(this,(uchar *)((param_3->AllocatorInstance).Data + lVar10),
                                     &local_38,puVar3 + lVar9);
          if (!bVar5) {
            *plVar2 = 0;
            if (*plVar1 == 0) {
              return false;
            }
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                      (1,1,0,&param_3->AllocatorInstance,0,plVar1);
            return false;
          }
          iVar11 = iVar11 + 1;
          lVar10 = (longlong)iVar11;
        } while (lVar10 < this->Height);
      }
      return true;
    }
  }
  else {
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_30,L"HdrImageWrapper",L"UnSupportedFormatORBitDepth",
                        L"The format and/or the bit depth is not supported by the HdrImageWrapper. Only the BGRE format and a bitdepth of 8 is supported"
                       );
    SetAndLogError(this,pFVar8);
    if (local_30.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_30.TextData.Reference + 0x10))();
    }
  }
  return false;
}

// GetRaw @ 142606870

bool __thiscall
FHdrImageWrapper::GetRaw
          (FHdrImageWrapper *this,ERGBFormat param_1,int param_2,FDecompressedImageOutput *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined7 in_register_00000011;
  undefined4 in_register_00000084;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> local_28;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  cVar1 = (**(code **)(this->_padding_ + 0x38))
                    (0,CONCAT71(in_register_00000011,param_1),CONCAT44(in_register_00000084,param_2)
                     ,&local_28);
  if (cVar1 != '\0') {
    iVar2 = (**(code **)(this->_padding_ + 0x48))(this);
    iVar3 = (**(code **)(this->_padding_ + 0x40))(this);
    FMipMapImage::AddMipImage(&param_3->MipMapImage,&local_28,iVar3,iVar2);
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return cVar1 != '\0';
}

// CanSetRawFormat @ 142606900

bool __thiscall
FHdrImageWrapper::CanSetRawFormat(FHdrImageWrapper *this,ERGBFormat param_1,int param_2)

{
  if ((param_1 == BGRE) && (param_2 == 8)) {
    return true;
  }
  return false;
}

// GetSupportedRawFormat @ 142606920

Type __thiscall FHdrImageWrapper::GetSupportedRawFormat(FHdrImageWrapper *this,Type param_1)

{
  return BGRE8;
}

// GetWidth @ 142606930

long64 __thiscall FHdrImageWrapper::GetWidth(FHdrImageWrapper *this)

{
  return this->Width;
}

// GetHeight @ 142606940

long64 __thiscall FHdrImageWrapper::GetHeight(FHdrImageWrapper *this)

{
  return this->Height;
}

// GetBitDepth @ 142606950

int __thiscall FHdrImageWrapper::GetBitDepth(FHdrImageWrapper *this)

{
  return 8;
}

// GetFormat @ 142606960

ERGBFormat __thiscall FHdrImageWrapper::GetFormat(FHdrImageWrapper *this)

{
  return BGRE;
}

// SupportsMetadata @ 142606970

bool __thiscall FHdrImageWrapper::SupportsMetadata(FHdrImageWrapper *this)

{
  return false;
}

// AddMetadata @ 142606980

void __thiscall
FHdrImageWrapper::AddMetadata(FHdrImageWrapper *this,FString *param_1,FString *param_2)

{
  return;
}

// GetMetadata @ 142606990

void __thiscall
FHdrImageWrapper::GetMetadata
          (FHdrImageWrapper *this,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_1)

{
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
           *)param_1);
  return;
}

// DecompressScanline @ 142686ff0

bool __thiscall
FHdrImageWrapper::DecompressScanline
          (FHdrImageWrapper *this,uchar *param_1,uchar **param_2,uchar *param_3)

{
  uchar uVar1;
  uchar uVar2;
  uchar uVar3;
  byte bVar4;
  uchar *puVar5;
  bool bVar6;
  byte bVar7;
  byte *pbVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulonglong uVar12;
  long64 lVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  
  iVar9 = (int)this->Width;
  if (0x7ff7 < this->Width - 8U) {
    bVar6 = OldDecompressScanline(this,param_1,param_2,param_3,iVar9,false);
    return bVar6;
  }
  puVar5 = *param_2;
  if (0 < (longlong)param_3 - (longlong)puVar5) {
    if (*puVar5 != '\x02') {
      bVar6 = OldDecompressScanline(this,param_1,param_2,param_3,iVar9,false);
      return bVar6;
    }
    *param_2 = puVar5 + 1;
    if (2 < ((longlong)param_3 - (longlong)puVar5) + -1) {
      uVar1 = puVar5[1];
      *param_2 = puVar5 + 2;
      uVar2 = puVar5[2];
      pbVar10 = puVar5 + 4;
      *param_2 = puVar5 + 3;
      uVar3 = puVar5[3];
      *param_2 = pbVar10;
      if ((uVar1 != '\x02') || ((char)uVar2 < '\0')) {
        *param_1 = uVar2;
        param_1[1] = uVar1;
        param_1[3] = uVar3;
        param_1[2] = '\x02';
        bVar6 = OldDecompressScanline(this,param_1 + 4,param_2,param_3,(int)this->Width + -1,true);
        return bVar6;
      }
      uVar16 = 0;
      do {
        if (uVar16 == 0) {
          bVar7 = 2;
        }
        else {
          bVar7 = (byte)uVar16;
          if (uVar16 == 2) {
            bVar7 = 0;
          }
        }
        lVar13 = this->Width;
        iVar9 = 0;
        pbVar8 = param_1 + bVar7;
        pbVar11 = pbVar10;
        if (0 < lVar13) {
          do {
            if ((longlong)param_3 - (longlong)pbVar11 < 1) {
LAB_1426871c1:
              bVar6 = FailUnexpectedEOB(this);
              return bVar6;
            }
            bVar7 = *pbVar11;
            uVar12 = (ulonglong)bVar7;
            uVar15 = (uint)bVar7;
            pbVar10 = pbVar11 + 1;
            uVar14 = (uint)bVar7;
            if (bVar7 < 0x81) {
              if ((longlong)param_3 - (longlong)pbVar10 < (longlong)(int)uVar14) goto LAB_1426871c1;
              if (lVar13 - iVar9 < (longlong)(int)uVar14) goto LAB_1426871b7;
              if (uVar14 != 0) {
                do {
                  bVar4 = *pbVar10;
                  pbVar10 = pbVar10 + 1;
                  *pbVar8 = bVar4;
                  pbVar8 = pbVar8 + 4;
                  uVar12 = uVar12 - 1;
                  uVar15 = (uint)bVar7;
                } while (uVar12 != 0);
                goto LAB_142687173;
              }
            }
            else {
              uVar15 = uVar14 & 0x7f;
              uVar12 = (ulonglong)uVar15;
              if ((longlong)param_3 - (longlong)pbVar10 < 1) goto LAB_1426871c1;
              bVar4 = *pbVar10;
              pbVar10 = pbVar11 + 2;
              if (lVar13 - iVar9 < (longlong)uVar12) {
LAB_1426871b7:
                bVar6 = FailMalformedScanline(this);
                return bVar6;
              }
              if ((bVar7 & 0x7f) != 0) {
                do {
                  *pbVar8 = bVar4;
                  pbVar8 = pbVar8 + 4;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
LAB_142687173:
                lVar13 = this->Width;
              }
            }
            iVar9 = iVar9 + uVar15;
            pbVar11 = pbVar10;
          } while (iVar9 < lVar13);
        }
        uVar16 = uVar16 + 1;
        *param_2 = pbVar10;
        if (3 < uVar16) {
          return true;
        }
      } while( true );
    }
  }
  return false;
}

// FailHeaderParsing @ 14268a370

bool __thiscall FHdrImageWrapper::FailHeaderParsing(FHdrImageWrapper *this)

{
  long64 *plVar1;
  FText local_18;
  
  FText::AsLocalizable_Advanced_LocText
            (&local_18,L"HdrImageWrapper",L"MalformedHeader",
             L"The file header is malformed. The HDR image is likely corrupted.");
  SetAndLogError(this,&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  (this->CompressedData).DataPtr = (uchar *)0x0;
  (this->CompressedData).ArrayNum = 0;
  this->RGBDataStart = (uchar *)0x0;
  (this->CompressedDataHolder).ArrayNum = 0;
  plVar1 = &(this->CompressedDataHolder).ArrayMax;
  if (*plVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (1,1,0,&(this->CompressedDataHolder).AllocatorInstance,0,plVar1);
  }
  return false;
}

// FailMalformedScanline @ 14268a410

bool __thiscall FHdrImageWrapper::FailMalformedScanline(FHdrImageWrapper *this)

{
  FText local_18;
  
  FText::AsLocalizable_Advanced_LocText
            (&local_18,L"HdrImageWrapper",L"MalformedScanline",
             L"Compressed data for HDR scanline is malformed. The HDR image is likely to be corrupted."
            );
  SetAndLogError(this,&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return false;
}

// FailUnexpectedEOB @ 14268a470

bool __thiscall FHdrImageWrapper::FailUnexpectedEOB(FHdrImageWrapper *this)

{
  FText local_18;
  
  FText::AsLocalizable_Advanced_LocText
            (&local_18,L"HdrImageWrapper",L"EndOFBufferError",
             L"Reached the end of the buffer before finishing decompressing the HDR. The HDR image is likely corrupted."
            );
  SetAndLogError(this,&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return false;
}

// FreeCompressedData @ 14268a550

void __thiscall FHdrImageWrapper::FreeCompressedData(FHdrImageWrapper *this)

{
  long64 *plVar1;
  
  (this->CompressedData).DataPtr = (uchar *)0x0;
  plVar1 = &(this->CompressedDataHolder).ArrayMax;
  (this->CompressedData).ArrayNum = 0;
  this->RGBDataStart = (uchar *)0x0;
  (this->CompressedDataHolder).ArrayNum = 0;
  if (*plVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (1,1,0,&(this->CompressedDataHolder).AllocatorInstance,0,plVar1);
  }
  return;
}

// GetErrorMessage @ 14268b040

FText * __thiscall FHdrImageWrapper::GetErrorMessage(FHdrImageWrapper *this)

{
  return &this->ErrorMessage;
}

// GetHeaderLine @ 14268b1f0

bool __thiscall
FHdrImageWrapper::GetHeaderLine(FHdrImageWrapper *this,uchar **param_1,char *param_2)

{
  uchar uVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  ulonglong uVar6;
  uchar *puVar7;
  ulonglong uVar8;
  
  puVar7 = (this->CompressedData).DataPtr + (this->CompressedData).ArrayNum;
  uVar6 = 0;
  uVar8 = uVar6;
  while( true ) {
    if ((puVar7 < *param_1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("BufferPos <= EndOfBuffer",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\HdrImageWrapper.cpp"
                           ,0x131,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    puVar2 = *param_1;
    if (puVar7 <= puVar2) {
      return false;
    }
    uVar1 = *puVar2;
    if (uVar1 == '\0') break;
    *param_1 = puVar2 + 1;
    if (uVar1 == '\n') {
      param_2[(int)uVar8] = '\0';
      return true;
    }
    param_2[uVar6] = uVar1;
    uVar8 = (ulonglong)((int)uVar8 + 1);
    uVar6 = uVar6 + 1;
    if (0xff < (longlong)uVar6) {
      return false;
    }
  }
  return false;
}

// HaveBytes @ 14268c0c0

bool __cdecl FHdrImageWrapper::HaveBytes(uchar *param_1,uchar *param_2,int param_3)

{
  return (longlong)param_3 <= (longlong)param_2 - (longlong)param_1;
}

// IsCompressedImageValid @ 14268c110

bool __thiscall FHdrImageWrapper::IsCompressedImageValid(FHdrImageWrapper *this)

{
  if ((0 < (this->CompressedData).ArrayNum) && (this->RGBDataStart != (uchar *)0x0)) {
    return true;
  }
  return false;
}

// OldDecompressScanline @ 14268cf10

bool __thiscall
FHdrImageWrapper::OldDecompressScanline
          (FHdrImageWrapper *this,uchar *param_1,uchar **param_2,uchar *param_3,int param_4,
          bool param_5)

{
  uchar *puVar1;
  uchar uVar2;
  uchar uVar3;
  byte bVar4;
  uchar uVar5;
  uchar uVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  uchar *puVar11;
  
  puVar11 = *param_2;
  if (0 < param_4) {
    iVar8 = (param_5 ^ 1) << 5;
    lVar9 = (longlong)param_3 - (longlong)puVar11;
    do {
      if (lVar9 < 4) {
        bVar7 = FailUnexpectedEOB(this);
        return bVar7;
      }
      uVar2 = *puVar11;
      lVar9 = lVar9 + -4;
      uVar3 = puVar11[1];
      puVar1 = puVar11 + 2;
      bVar4 = puVar11[3];
      puVar11 = puVar11 + 4;
      if (((uVar2 == '\x01') && (uVar3 == '\x01')) && (*puVar1 == '\x01')) {
        if ((0x1f < iVar8) ||
           (lVar10 = (ulonglong)bVar4 << ((byte)iVar8 & 0x3f),
           (longlong)(ulonglong)(uint)param_4 < lVar10)) {
          bVar7 = FailMalformedScanline(this);
          return bVar7;
        }
        uVar2 = param_1[-4];
        param_4 = param_4 - (int)lVar10;
        uVar3 = param_1[-3];
        uVar5 = param_1[-2];
        uVar6 = param_1[-1];
        for (; 0 < lVar10; lVar10 = lVar10 + -1) {
          *param_1 = uVar5;
          param_1[1] = uVar3;
          param_1[2] = uVar2;
          param_1[3] = uVar6;
          param_1 = param_1 + 4;
        }
        iVar8 = iVar8 + 8;
      }
      else {
        *param_1 = *puVar1;
        iVar8 = 0;
        param_1[1] = uVar3;
        param_1[2] = uVar2;
        param_1[3] = bVar4;
        param_1 = param_1 + 4;
        param_4 = param_4 - 1;
      }
    } while (0 < param_4);
  }
  *param_2 = puVar11;
  return true;
}

// ParseImageSize @ 14268d040

bool __cdecl FHdrImageWrapper::ParseImageSize(char *param_1,int *param_2,int *param_3)

{
  byte bVar1;
  char *pcVar2;
  byte *pbVar3;
  char cVar4;
  byte bVar5;
  ulonglong uVar6;
  char *pcVar7;
  byte *pbVar8;
  byte *pbVar9;
  
  cVar4 = '-';
  pcVar2 = param_1;
  do {
    pcVar7 = pcVar2;
    if (*pcVar7 != cVar4) {
      return false;
    }
    cVar4 = pcVar7[(longlong)("-Y " + (1 - (longlong)param_1))];
    pcVar2 = pcVar7 + 1;
  } while (cVar4 != '\0');
  cVar4 = pcVar7[1];
  if ((byte)(cVar4 - 0x30U) < 10) {
    uVar6 = (ulonglong)((int)cVar4 - 0x30);
    pbVar8 = (byte *)(pcVar7 + 2);
    bVar5 = pcVar7[2];
    while (('/' < (char)bVar5 && (bVar5 < 0x3a))) {
      pbVar8 = pbVar8 + 1;
      uVar6 = ((ulonglong)bVar5 + (longlong)(int)uVar6 * 10) - 0x30;
      if (0x7fffffff < (longlong)uVar6) {
        return false;
      }
      bVar5 = *pbVar8;
    }
    *param_3 = (int)uVar6;
    bVar5 = 0x20;
    pbVar3 = pbVar8;
    do {
      pbVar9 = pbVar3;
      if (*pbVar9 != bVar5) {
        return false;
      }
      bVar5 = pbVar9[(longlong)(" +X " + (1 - (longlong)pbVar8))];
      pbVar3 = pbVar9 + 1;
    } while (bVar5 != 0);
    bVar5 = pbVar9[1];
    if ((byte)(bVar5 - 0x30) < 10) {
      pbVar8 = pbVar9 + 2;
      bVar1 = pbVar9[2];
      uVar6 = (ulonglong)((int)(char)bVar5 - 0x30);
      while( true ) {
        if (((char)bVar1 < '0') || (0x39 < bVar1)) {
          *param_2 = (int)uVar6;
          return *pbVar8 == 0;
        }
        pbVar8 = pbVar8 + 1;
        uVar6 = ((ulonglong)bVar1 + (longlong)(int)uVar6 * 10) - 0x30;
        if (0x7fffffff < (longlong)uVar6) break;
        bVar1 = *pbVar8;
      }
    }
  }
  return false;
}

// ParseMatchString @ 14268d130

bool __cdecl FHdrImageWrapper::ParseMatchString(char **param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  
  cVar3 = *param_2;
  pcVar1 = *param_1;
  pcVar2 = pcVar1;
  if (cVar3 != '\0') {
    do {
      if (*pcVar2 != cVar3) {
        return false;
      }
      cVar3 = pcVar2[(longlong)(param_2 + (1 - (longlong)pcVar1))];
      pcVar2 = pcVar2 + 1;
    } while (cVar3 != '\0');
  }
  *param_1 = pcVar2;
  return true;
}

// ParsePositiveInt @ 14268d170

bool __cdecl FHdrImageWrapper::ParsePositiveInt(char **param_1,int *param_2)

{
  char cVar1;
  char *pcVar2;
  ulonglong uVar3;
  
  cVar1 = **param_1;
  if ((byte)(cVar1 - 0x30U) < 10) {
    pcVar2 = *param_1 + 1;
    uVar3 = (ulonglong)((int)cVar1 - 0x30);
    *param_1 = pcVar2;
    cVar1 = *pcVar2;
    while( true ) {
      if ((cVar1 < '0') || ('9' < cVar1)) {
        *param_2 = (int)uVar3;
        return true;
      }
      pcVar2 = pcVar2 + 1;
      *param_1 = pcVar2;
      uVar3 = (longlong)(cVar1 + -0x30) + (longlong)(int)uVar3 * 10;
      if (0x7fffffff < (longlong)uVar3) break;
      cVar1 = *pcVar2;
    }
  }
  return false;
}

// SetAndLogError @ 14268d910

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FHdrImageWrapper::SetAndLogError(FHdrImageWrapper *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined1 local_res8 [8];
  
  pIVar1 = (param_1->TextData).Reference;
  pIVar2 = (this->ErrorMessage).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->ErrorMessage).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->ErrorMessage).Flags = param_1->Flags;
  if (1 < (byte)LogImageWrapper._0_1_) {
    FText::ToString(param_1);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogImageWrapper);
  }
  return;
}

// SetCompressedFromView @ 14268e850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FHdrImageWrapper::SetCompressedFromView
          (FHdrImageWrapper *this,TArrayView<unsigned_char_const_,__int64> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  long64 lVar3;
  int iVar4;
  uchar uVar5;
  byte bVar6;
  undefined1 uVar7;
  bool bVar8;
  int iVar9;
  uchar *puVar10;
  FText *pFVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uchar *puVar14;
  uchar *puVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  ulonglong uVar19;
  undefined1 auStack_178 [32];
  FString local_158;
  FText local_148;
  FText local_138;
  FText local_128;
  uchar local_118 [2];
  byte local_116 [254];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_178;
  lVar3 = param_1->ArrayNum;
  (this->CompressedData).DataPtr = param_1->DataPtr;
  (this->CompressedData).ArrayNum = lVar3;
  lVar1 = (this->CompressedData).ArrayNum;
  if (10 < lVar1) {
    puVar10 = (this->CompressedData).DataPtr;
    puVar14 = puVar10 + lVar1;
    uVar12 = 0;
    uVar13 = uVar12;
    uVar19 = uVar12;
    do {
      if (puVar14 < puVar10) goto LAB_14268ec5e;
      if ((puVar14 <= puVar10) || (uVar5 = *puVar10, uVar5 == '\0')) break;
      puVar10 = puVar10 + 1;
      if (uVar5 == '\n') {
        local_118[(int)uVar19] = '\0';
        iVar9 = strcmp((char *)local_118,"#?RADIANCE");
        if ((iVar9 == 0) || (iVar9 = strcmp((char *)local_118,"#?RGBE"), iVar9 == 0)) {
          bVar8 = false;
          goto LAB_14268e920;
        }
        break;
      }
      local_118[uVar13] = uVar5;
      uVar19 = (ulonglong)((int)uVar19 + 1);
      uVar13 = uVar13 + 1;
    } while ((longlong)uVar13 < 0x100);
  }
  goto LAB_14268ec87;
LAB_14268e920:
  puVar14 = (this->CompressedData).DataPtr + (this->CompressedData).ArrayNum;
  uVar13 = uVar12;
  while( true ) {
    if (puVar14 < puVar10) goto LAB_14268ec5e;
    if ((puVar14 <= puVar10) || (uVar5 = *puVar10, uVar5 == '\0')) goto LAB_14268ec87;
    puVar10 = puVar10 + 1;
    if (uVar5 == '\n') break;
    local_118[uVar13] = uVar5;
    uVar13 = uVar13 + 1;
    if (0xff < (longlong)uVar13) goto LAB_14268ec87;
  }
  local_118[uVar13] = '\0';
  if (local_118[0] == '\0') {
    if (!bVar8) goto LAB_14268ec87;
    puVar14 = (this->CompressedData).DataPtr + (this->CompressedData).ArrayNum;
    uVar13 = uVar12;
    goto LAB_14268ea20;
  }
  puVar14 = local_118;
  uVar5 = 'F';
  do {
    if (*puVar14 != uVar5) goto LAB_14268e920;
    puVar14 = puVar14 + 1;
    uVar5 = puVar14[(longlong)"FORMAT=" - (longlong)local_118];
  } while (uVar5 != '\0');
  bVar8 = true;
  iVar9 = strcmp((char *)puVar14,"32-bit_rle_rgbe");
  if (iVar9 != 0) {
    pFVar11 = FText::AsLocalizable_Advanced_LocText
                        (&local_148,L"HdrImageWrapper",L"WrongFormatError",
                         L"The HDR image uses an unsupported format. Only the 32-bit_rle_rgbe format is supported."
                        );
    SetAndLogError(this,pFVar11);
    if (local_148.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_148.TextData.Reference + 0x10))();
    }
    FreeCompressedData(this);
    return false;
  }
  goto LAB_14268e920;
LAB_14268ec5e:
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("BufferPos <= EndOfBuffer",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\HdrImageWrapper.cpp"
                     ,0x131,L"");
  if (bVar8) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return (bool)uVar7;
  }
  goto LAB_14268ec87;
  while( true ) {
    puVar14 = puVar15 + 1;
    uVar5 = puVar14[(longlong)"-Y " - (longlong)local_118];
    if (uVar5 == '\0') break;
LAB_14268ea80:
    puVar15 = puVar14;
    if (*puVar15 != uVar5) goto LAB_14268ebc6;
  }
  if ((byte)(*puVar14 - 0x30) < 10) {
    uVar13 = (ulonglong)((int)(char)*puVar14 - 0x30);
    pbVar16 = puVar15 + 2;
    bVar6 = *pbVar16;
    while ((iVar9 = (int)uVar13, '/' < (char)bVar6 && (bVar6 < 0x3a))) {
      pbVar16 = pbVar16 + 1;
      uVar13 = (ulonglong)bVar6 + ((longlong)iVar9 * 5 + -0x18) * 2;
      if (0x7fffffff < (longlong)uVar13) goto LAB_14268ebc6;
      bVar6 = *pbVar16;
    }
    bVar6 = 0x20;
    pbVar17 = pbVar16;
    do {
      pbVar18 = pbVar17;
      if (*pbVar18 != bVar6) goto LAB_14268ebc6;
      pbVar17 = pbVar18 + 1;
      bVar6 = pbVar17[(longlong)" +X " - (longlong)pbVar16];
    } while (bVar6 != 0);
    if ((byte)(*pbVar17 - 0x30) < 10) {
      uVar13 = (ulonglong)((int)(char)*pbVar17 - 0x30);
      pbVar18 = pbVar18 + 2;
      bVar6 = *pbVar18;
      while ((iVar4 = (int)uVar13, '/' < (char)bVar6 && (bVar6 < 0x3a))) {
        pbVar18 = pbVar18 + 1;
        uVar13 = ((ulonglong)bVar6 + (longlong)iVar4 * 10) - 0x30;
        if (0x7fffffff < (longlong)uVar13) goto LAB_14268ebc6;
        bVar6 = *pbVar18;
      }
      if (((*pbVar18 == 0) && (0 < iVar4)) && (0 < iVar9)) {
        this->Width = (longlong)iVar4;
        this->Height = (longlong)iVar9;
        this->RGBDataStart = puVar10;
        bVar8 = FImageCoreUtils::IsImageImportPossible((longlong)iVar4,(longlong)iVar9);
        if (bVar8) {
          return true;
        }
        pFVar11 = FText::AsLocalizable_Advanced_LocText
                            (&local_138,L"HdrImageWrapper",L"ImpossibleImport",
                             L"Image dimensions are not possible to import");
        SetAndLogError(this,pFVar11);
        if (local_138.TextData.Reference == (ITextData *)0x0) {
          return false;
        }
        (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
        return false;
      }
    }
  }
LAB_14268ebc6:
  ::FString::FString(&local_158,(char *)local_118);
  if (3 < (byte)LogImageWrapper._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogImageWrapper);
  }
  pFVar11 = FText::AsLocalizable_Advanced_LocText
                      (&local_128,L"HdrImageWrapper",L"InvalidSizeError",
                       L"The HDR image specifies an invalid size.");
  SetAndLogError(this,pFVar11);
  if (local_128.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
  }
  FreeCompressedData(this);
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  return false;
  while( true ) {
    puVar10 = puVar10 + 1;
    if (uVar5 == '\n') {
      local_118[(int)uVar13] = '\0';
      uVar5 = '-';
      puVar14 = local_118;
      goto LAB_14268ea80;
    }
    local_118[uVar12] = uVar5;
    uVar13 = (ulonglong)((int)uVar13 + 1);
    uVar12 = uVar12 + 1;
    if (0xff < (longlong)uVar12) break;
LAB_14268ea20:
    if (puVar14 < puVar10) goto LAB_14268ec5e;
    if ((puVar14 <= puVar10) || (uVar5 = *puVar10, uVar5 == '\0')) break;
  }
LAB_14268ec87:
  bVar8 = FailHeaderParsing(this);
  return bVar8;
}

