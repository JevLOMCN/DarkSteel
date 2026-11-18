// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWrapper
// Functions: 23

// ConvertToWriteFormat<unsigned_char,unsigned_char> @ 142611630

uchar __cdecl
UE::ImageWrapper::Private::TiffImageWrapper::ConvertToWriteFormat<unsigned_char,unsigned_char>
          (uchar param_1)

{
  return param_1;
}

// ConvertToWriteFormat<unsigned_short,unsigned_short> @ 142611640

ushort __cdecl
UE::ImageWrapper::Private::TiffImageWrapper::ConvertToWriteFormat<unsigned_short,unsigned_short>
          (ushort param_1)

{
  return param_1;
}

// ConvertToWriteFormat<unsigned_short,unsigned_int> @ 142611650

ushort __cdecl
UE::ImageWrapper::Private::TiffImageWrapper::ConvertToWriteFormat<unsigned_short,unsigned_int>
          (uint param_1)

{
  return (ushort)(int)((double)param_1 * __real_3eefffe0001fffe0 + __real_3fe0000000000000);
}

// ConvertToWriteFormat<unsigned_short,float> @ 142611680

ushort __cdecl
UE::ImageWrapper::Private::TiffImageWrapper::ConvertToWriteFormat<unsigned_short,float>
          (float param_1)

{
  double dVar1;
  
  dVar1 = (double)param_1;
  if (__real_3ff0000000000000 <= (double)param_1) {
    dVar1 = __real_3ff0000000000000;
  }
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  return (ushort)(int)(dVar1 * __real_40efffe000000000 + __real_3fe0000000000000);
}

// ConvertToWriteFormat<unsigned_short,double> @ 1426116c0

ushort __cdecl
UE::ImageWrapper::Private::TiffImageWrapper::ConvertToWriteFormat<unsigned_short,double>
          (double param_1)

{
  if (__real_3ff0000000000000 <= param_1) {
    param_1 = __real_3ff0000000000000;
  }
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  return (ushort)(int)(param_1 * __real_40efffe000000000 + __real_3fe0000000000000);
}

// ConvertToWriteFormat<unsigned_short,FFloat16> @ 1426116f0

ushort __cdecl
UE::ImageWrapper::Private::TiffImageWrapper::ConvertToWriteFormat<unsigned_short,FFloat16>
          (FFloat16 param_1)

{
  float fVar1;
  double dVar2;
  ushort local_res8 [16];
  
  local_res8[0] = param_1.Encoded;
  fVar1 = FGenericPlatformMath::LoadHalf(local_res8);
  dVar2 = (double)fVar1;
  if (__real_3ff0000000000000 <= (double)fVar1) {
    dVar2 = __real_3ff0000000000000;
  }
  if (dVar2 <= 0.0) {
    dVar2 = 0.0;
  }
  return (ushort)(int)(dVar2 * __real_40efffe000000000 + __real_3fe0000000000000);
}

// ConvertToWriteFormat<unsigned_short,unsigned___int64> @ 142611740

ushort __cdecl
UE::ImageWrapper::Private::TiffImageWrapper::ConvertToWriteFormat<unsigned_short,unsigned___int64>
          (ulong64 param_1)

{
  return (ushort)(int)((double)param_1 * __real_3cefffe000000000 + __real_3fe0000000000000);
}

// ConvertToWriteFormat<float,unsigned_short> @ 142611780

float __cdecl
UE::ImageWrapper::Private::TiffImageWrapper::ConvertToWriteFormat<float,unsigned_short>
          (ushort param_1)

{
  return (float)((double)param_1 * __real_3ef0001000100010);
}

// ConvertToWriteFormat<float,unsigned_int> @ 1426117a0

float __cdecl
UE::ImageWrapper::Private::TiffImageWrapper::ConvertToWriteFormat<float,unsigned_int>(uint param_1)

{
  return (float)((double)param_1 * __real_3df0000000100000);
}

// ConvertToWriteFormat<float,float> @ 1426117c0

float __cdecl
UE::ImageWrapper::Private::TiffImageWrapper::ConvertToWriteFormat<float,float>(float param_1)

{
  return param_1;
}

// ConvertToWriteFormat<float,double> @ 1426117d0

float __cdecl
UE::ImageWrapper::Private::TiffImageWrapper::ConvertToWriteFormat<float,double>(double param_1)

{
  if (__real_3ff0000000000000 <= param_1) {
    param_1 = __real_3ff0000000000000;
  }
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  return (float)param_1;
}

// ConvertToWriteFormat<float,FFloat16> @ 1426117f0

float __cdecl
UE::ImageWrapper::Private::TiffImageWrapper::ConvertToWriteFormat<float,FFloat16>(FFloat16 param_1)

{
  float fVar1;
  double dVar2;
  ushort local_res8 [16];
  
  local_res8[0] = param_1.Encoded;
  fVar1 = FGenericPlatformMath::LoadHalf(local_res8);
  dVar2 = (double)fVar1;
  if (__real_3ff0000000000000 <= (double)fVar1) {
    dVar2 = __real_3ff0000000000000;
  }
  if (dVar2 <= 0.0) {
    dVar2 = 0.0;
  }
  return (float)dVar2;
}

// ConvertToWriteFormat<float,unsigned___int64> @ 142611830

float __cdecl
UE::ImageWrapper::Private::TiffImageWrapper::ConvertToWriteFormat<float,unsigned___int64>
          (ulong64 param_1)

{
  if (-1 < (longlong)param_1) {
    return (float)((double)(longlong)param_1 * __real_3bf0000000000000);
  }
  return (float)((double)param_1 * __real_3bf0000000000000);
}

// ConvertToWriteFormat<FFloat16,unsigned_short> @ 142611880

FFloat16 __cdecl
UE::ImageWrapper::Private::TiffImageWrapper::ConvertToWriteFormat<FFloat16,unsigned_short>
          (ushort param_1)

{
  undefined6 in_register_0000000a;
  ushort in_DX;
  
  *(undefined2 *)CONCAT62(in_register_0000000a,param_1) = 0;
  FGenericPlatformMath::StoreHalf
            ((ushort *)CONCAT62(in_register_0000000a,param_1),
             (float)((double)in_DX * __real_3ef0001000100010));
  return (FFloat16)param_1;
}

// ConvertToWriteFormat<FFloat16,unsigned_int> @ 1426118c0

FFloat16 __cdecl
UE::ImageWrapper::Private::TiffImageWrapper::ConvertToWriteFormat<FFloat16,unsigned_int>
          (uint param_1)

{
  undefined4 in_register_0000000c;
  uint in_EDX;
  
  *(undefined2 *)CONCAT44(in_register_0000000c,param_1) = 0;
  FGenericPlatformMath::StoreHalf
            ((ushort *)CONCAT44(in_register_0000000c,param_1),
             (float)((double)in_EDX * __real_3df0000000100000));
  return (FFloat16)(ushort)param_1;
}

// ConvertToWriteFormat<FFloat16,float> @ 142611900

FFloat16 __cdecl
UE::ImageWrapper::Private::TiffImageWrapper::ConvertToWriteFormat<FFloat16,float>(float param_1)

{
  ushort *in_RCX;
  float in_XMM1_Da;
  double dVar1;
  
  *in_RCX = 0;
  dVar1 = (double)in_XMM1_Da;
  if (__real_3ff0000000000000 <= (double)in_XMM1_Da) {
    dVar1 = __real_3ff0000000000000;
  }
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  FGenericPlatformMath::StoreHalf(in_RCX,(float)dVar1);
  return (FFloat16)(ushort)in_RCX;
}

// ConvertToWriteFormat<FFloat16,double> @ 142611940

FFloat16 __cdecl
UE::ImageWrapper::Private::TiffImageWrapper::ConvertToWriteFormat<FFloat16,double>(double param_1)

{
  ushort *in_RCX;
  double in_XMM1_Qa;
  
  if (__real_3ff0000000000000 <= in_XMM1_Qa) {
    in_XMM1_Qa = __real_3ff0000000000000;
  }
  *in_RCX = 0;
  if (in_XMM1_Qa <= 0.0) {
    in_XMM1_Qa = 0.0;
  }
  FGenericPlatformMath::StoreHalf(in_RCX,(float)in_XMM1_Qa);
  return (FFloat16)(ushort)in_RCX;
}

// ConvertToWriteFormat<FFloat16,FFloat16> @ 142611980

FFloat16 __cdecl
UE::ImageWrapper::Private::TiffImageWrapper::ConvertToWriteFormat<FFloat16,FFloat16>
          (FFloat16 param_1)

{
  undefined6 in_register_0000000a;
  undefined2 in_DX;
  
  *(undefined2 *)CONCAT62(in_register_0000000a,param_1.Encoded) = in_DX;
  return (FFloat16)param_1.Encoded;
}

// ConvertToWriteFormat<FFloat16,unsigned___int64> @ 142611990

FFloat16 __cdecl
UE::ImageWrapper::Private::TiffImageWrapper::ConvertToWriteFormat<FFloat16,unsigned___int64>
          (ulong64 param_1)

{
  ulonglong in_RDX;
  
  *(undefined2 *)param_1 = 0;
  FGenericPlatformMath::StoreHalf
            ((ushort *)param_1,(float)((double)in_RDX * __real_3bf0000000000000));
  return (FFloat16)(ushort)param_1;
}

// ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_> @ 1426123f0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
          (uint param_1,uint param_2,ForElementType<TRefCountPtr<FBaseGraphTask>_> *param_3,
          int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 5) {
    iVar2 = 4;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TRefCountPtr<FBaseGraphTask>_>::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// GetEndOfBufferErrorMessage @ 14268b000

FText * __cdecl
UE::ImageWrapper::Private::HdrImageWrapper::GetEndOfBufferErrorMessage
          (FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"HdrImageWrapper",L"EndOFBufferError",
             L"Reached the end of the buffer before finishing decompressing the HDR. The HDR image is likely corrupted."
            );
  return __return_storage_ptr__;
}

// GetMalformedHeaderErrorMessage @ 14268b5d0

FText * __cdecl
UE::ImageWrapper::Private::HdrImageWrapper::GetMalformedHeaderErrorMessage
          (FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"HdrImageWrapper",L"MalformedHeader",
             L"The file header is malformed. The HDR image is likely corrupted.");
  return __return_storage_ptr__;
}

// GetMalformedScanlineErrorMessage @ 14268b610

FText * __cdecl
UE::ImageWrapper::Private::HdrImageWrapper::GetMalformedScanlineErrorMessage
          (FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"HdrImageWrapper",L"MalformedScanline",
             L"Compressed data for HDR scanline is malformed. The HDR image is likely to be corrupted."
            );
  return __return_storage_ptr__;
}

