// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 30

// ~IMediaTextureSample @ 14d78cf00

void __thiscall IMediaTextureSample::~IMediaTextureSample(IMediaTextureSample *this)

{
  *this = (IMediaTextureSample)&___7IMediaTextureSample__6B_;
  return;
}

// GetAspectRatio @ 14d7a9060

double __thiscall IMediaTextureSample::GetAspectRatio(IMediaTextureSample *this)

{
  int local_res8;
  int local_resc;
  
  (**(code **)((longlong)*this + 0x30))(this,&local_res8);
  return (double)local_res8 / (double)local_resc;
}

// GetChromaticAdapationMethod @ 14d7a9760

EChromaticAdaptationMethod __thiscall
IMediaTextureSample::GetChromaticAdapationMethod(IMediaTextureSample *this)

{
  return Bradford;
}

// GetDisplayMasteringColorSpace @ 14d7aa150

TOptional<UE::Color::FColorSpace> * __thiscall
IMediaTextureSample::GetDisplayMasteringColorSpace
          (IMediaTextureSample *this,TOptional<UE::Color::FColorSpace> *__return_storage_ptr__)

{
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// GetDisplayMasteringLuminance @ 14d7aa170

bool __thiscall
IMediaTextureSample::GetDisplayMasteringLuminance
          (IMediaTextureSample *this,float *param_1,float *param_2)

{
  return false;
}

// GetDisplayPrimaryBlue @ 14d7aa3c0

TVector2<double> * __thiscall
IMediaTextureSample::GetDisplayPrimaryBlue
          (IMediaTextureSample *this,TVector2<double> *__return_storage_ptr__)

{
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.15;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.06;
  return __return_storage_ptr__;
}

// GetDisplayPrimaryGreen @ 14d7aa3f0

TVector2<double> * __thiscall
IMediaTextureSample::GetDisplayPrimaryGreen
          (IMediaTextureSample *this,TVector2<double> *__return_storage_ptr__)

{
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.3;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.6;
  return __return_storage_ptr__;
}

// GetDisplayPrimaryRed @ 14d7aa420

TVector2<double> * __thiscall
IMediaTextureSample::GetDisplayPrimaryRed
          (IMediaTextureSample *this,TVector2<double> *__return_storage_ptr__)

{
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.64;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.33;
  return __return_storage_ptr__;
}

// GetEncodingType @ 14d7aa520

EEncoding __thiscall IMediaTextureSample::GetEncodingType(IMediaTextureSample *this)

{
  char cVar1;
  
  cVar1 = (**(code **)((longlong)*this + 0x80))();
  return (cVar1 != '\0') + Linear;
}

// GetFramerate @ 14d7aa9c0

TOptional<FFrameRate> * __thiscall
IMediaTextureSample::GetFramerate
          (IMediaTextureSample *this,TOptional<FFrameRate> *__return_storage_ptr__)

{
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// GetFullRange @ 14d7aacf0

bool __thiscall IMediaTextureSample::GetFullRange(IMediaTextureSample *this)

{
  return false;
}

// GetGamutToXYZMatrix @ 14d7aad20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TMatrix<double> * __thiscall
IMediaTextureSample::GetGamutToXYZMatrix
          (IMediaTextureSample *this,TMatrix<double> *__return_storage_ptr__)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  TMatrix<float> *pTVar21;
  undefined1 auStack_78 [32];
  TMatrix<float> local_58;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  pTVar21 = GamutToXYZMatrix(&local_58,sRGB_D65);
  fVar6 = pTVar21->M[0][1];
  fVar7 = pTVar21->M[0][2];
  fVar8 = pTVar21->M[0][3];
  fVar9 = pTVar21->M[1][0];
  fVar10 = pTVar21->M[1][1];
  fVar11 = pTVar21->M[1][2];
  fVar12 = pTVar21->M[1][3];
  fVar13 = pTVar21->M[2][0];
  fVar14 = pTVar21->M[2][1];
  fVar15 = pTVar21->M[2][2];
  fVar16 = pTVar21->M[2][3];
  fVar17 = pTVar21->M[3][0];
  fVar18 = pTVar21->M[3][1];
  fVar19 = pTVar21->M[3][2];
  fVar20 = pTVar21->M[3][3];
  __return_storage_ptr__->M[0][0] = (double)pTVar21->M[0][0];
  __return_storage_ptr__->M[0][1] = (double)fVar6;
  dVar5 = (double)fVar8;
  auVar1._8_4_ = SUB84(dVar5,0);
  auVar1._0_8_ = (double)fVar7;
  auVar1._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->M[0] + 2) = auVar1;
  __return_storage_ptr__->M[1][0] = (double)fVar9;
  __return_storage_ptr__->M[1][1] = (double)fVar10;
  dVar5 = (double)fVar12;
  auVar2._8_4_ = SUB84(dVar5,0);
  auVar2._0_8_ = (double)fVar11;
  auVar2._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->M[1] + 2) = auVar2;
  dVar5 = (double)fVar16;
  __return_storage_ptr__->M[2][0] = (double)fVar13;
  __return_storage_ptr__->M[2][1] = (double)fVar14;
  auVar3._8_4_ = SUB84(dVar5,0);
  auVar3._0_8_ = (double)fVar15;
  auVar3._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->M[2] + 2) = auVar3;
  dVar5 = (double)fVar20;
  __return_storage_ptr__->M[3][0] = (double)fVar17;
  __return_storage_ptr__->M[3][1] = (double)fVar18;
  auVar4._8_4_ = SUB84(dVar5,0);
  auVar4._0_8_ = (double)fVar19;
  auVar4._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->M[3] + 2) = auVar4;
  return __return_storage_ptr__;
}

// GetHDRNitsNormalizationFactor @ 14d7aae20

float __thiscall IMediaTextureSample::GetHDRNitsNormalizationFactor(IMediaTextureSample *this)

{
  char cVar1;
  
  cVar1 = (**(code **)((longlong)*this + 0x100))();
  if (cVar1 != '\x02') {
    cVar1 = (**(code **)((longlong)*this + 0x100))(this);
    if (cVar1 != '\x01') {
      return __real_3c23d70a;
    }
  }
  return __real_3f800000;
}

// GetMaxLuminanceLevels @ 14d7ab380

bool __thiscall
IMediaTextureSample::GetMaxLuminanceLevels
          (IMediaTextureSample *this,ushort *param_1,ushort *param_2)

{
  return false;
}

// GetMediaTextureSampleColorConverter @ 14d7abc70

IMediaTextureSampleColorConverter * __thiscall
IMediaTextureSample::GetMediaTextureSampleColorConverter(IMediaTextureSample *this)

{
  return (IMediaTextureSampleColorConverter *)0x0;
}

// GetMediaTextureSampleConverter @ 14d7abc90

IMediaTextureSampleConverter * __thiscall
IMediaTextureSample::GetMediaTextureSampleConverter(IMediaTextureSample *this)

{
  return (IMediaTextureSampleConverter *)0x0;
}

// GetNumMips @ 14d7ac2d0

uchar __thiscall IMediaTextureSample::GetNumMips(IMediaTextureSample *this)

{
  return '\x01';
}

// GetOffset @ 14d7ac4f0

FLinearColor * __thiscall
IMediaTextureSample::GetOffset(IMediaTextureSample *this,FLinearColor *__return_storage_ptr__)

{
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
  return __return_storage_ptr__;
}

// GetOrientation @ 14d7ac850

EMediaOrientation __thiscall IMediaTextureSample::GetOrientation(IMediaTextureSample *this)

{
  return Original;
}

// GetSampleToRGBMatrix @ 14d7ad840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TMatrix<float> * __thiscall
IMediaTextureSample::GetSampleToRGBMatrix
          (IMediaTextureSample *this,TMatrix<float> *__return_storage_ptr__)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_158 [48];
  undefined8 local_128;
  TMatrix<double> local_118;
  TMatrix<double> local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  local_118.M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
  local_118.M[0][1] = UE::Math::TMatrix<double>::Identity.M[0][1];
  local_118.M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
  local_118.M[0][3] = UE::Math::TMatrix<double>::Identity.M[0][3];
  local_118.M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
  local_118.M[1][1] = UE::Math::TMatrix<double>::Identity.M[1][1];
  local_118.M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
  local_118.M[1][3] = UE::Math::TMatrix<double>::Identity.M[1][3];
  local_118.M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
  local_118.M[2][1] = UE::Math::TMatrix<double>::Identity.M[2][1];
  local_118.M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
  local_118.M[2][3] = UE::Math::TMatrix<double>::Identity.M[2][3];
  local_118.M[3][0]._0_4_ = UE::Math::TMatrix<double>::Identity.M[3][0]._0_4_;
  local_118.M[3][0]._4_4_ = UE::Math::TMatrix<double>::Identity.M[3][0]._4_4_;
  local_118.M[3][1]._0_4_ = UE::Math::TMatrix<double>::Identity.M[3][1]._0_4_;
  local_118.M[3][1]._4_4_ = UE::Math::TMatrix<double>::Identity.M[3][1]._4_4_;
  local_118.M[3][2]._0_4_ = UE::Math::TMatrix<double>::Identity.M[3][2]._0_4_;
  local_118.M[3][2]._4_4_ = UE::Math::TMatrix<double>::Identity.M[3][2]._4_4_;
  local_118.M[3][3]._0_4_ = UE::Math::TMatrix<double>::Identity.M[3][3]._0_4_;
  local_118.M[3][3]._4_4_ = UE::Math::TMatrix<double>::Identity.M[3][3]._4_4_;
  uVar1 = (**(code **)((longlong)*this + 0x28))();
  switch(uVar1) {
  case 0xe:
    uVar2 = SUB84(MediaShaders::YUVOffset10bits.field0_0x0._s_0.Z,0);
    uVar3 = (uint)((ulonglong)MediaShaders::YUVOffset10bits.field0_0x0._16_8_ >> 0x20);
    uVar1 = MediaShaders::YUVOffset10bits.field0_0x0._0_4_;
    uVar6 = MediaShaders::YUVOffset10bits.field0_0x0._4_4_;
    uVar7 = MediaShaders::YUVOffset10bits.field0_0x0._8_4_;
    uVar8 = MediaShaders::YUVOffset10bits.field0_0x0._12_4_;
    break;
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x13:
    uVar2 = SUB84(MediaShaders::YUVOffset16bits.field0_0x0._s_0.Z,0);
    uVar3 = (uint)((ulonglong)MediaShaders::YUVOffset16bits.field0_0x0._16_8_ >> 0x20);
    uVar1 = MediaShaders::YUVOffset16bits.field0_0x0._0_4_;
    uVar6 = MediaShaders::YUVOffset16bits.field0_0x0._4_4_;
    uVar7 = MediaShaders::YUVOffset16bits.field0_0x0._8_4_;
    uVar8 = MediaShaders::YUVOffset16bits.field0_0x0._12_4_;
    break;
  case 0x12:
    uVar2 = SUB84(MediaShaders::YUVOffsetFloat.field0_0x0._s_0.Z,0);
    uVar3 = (uint)((ulonglong)MediaShaders::YUVOffsetFloat.field0_0x0._16_8_ >> 0x20);
    uVar1 = MediaShaders::YUVOffsetFloat.field0_0x0._0_4_;
    uVar6 = MediaShaders::YUVOffsetFloat.field0_0x0._4_4_;
    uVar7 = MediaShaders::YUVOffsetFloat.field0_0x0._8_4_;
    uVar8 = MediaShaders::YUVOffsetFloat.field0_0x0._12_4_;
    break;
  default:
    uVar2 = SUB84(MediaShaders::YUVOffset8bits.field0_0x0._s_0.Z,0);
    uVar3 = (uint)((ulonglong)MediaShaders::YUVOffset8bits.field0_0x0._16_8_ >> 0x20);
    uVar1 = MediaShaders::YUVOffset8bits.field0_0x0._0_4_;
    uVar6 = MediaShaders::YUVOffset8bits.field0_0x0._4_4_;
    uVar7 = MediaShaders::YUVOffset8bits.field0_0x0._8_4_;
    uVar8 = MediaShaders::YUVOffset8bits.field0_0x0._12_4_;
  }
  uVar4 = (uint)__xmm_80000000000000008000000000000000;
  uVar5 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_128 = CONCAT44(uVar3,uVar2);
  local_118.M[0][3] = (double)CONCAT44(uVar6 ^ uVar5,uVar1 ^ uVar4);
  local_118.M[1][3] = (double)CONCAT44(uVar8 ^ uVar5,uVar7 ^ uVar4);
  local_118.M[2][3] = (double)CONCAT44(uVar3 ^ uVar5,uVar2 ^ uVar4);
  VectorMatrixMultiply(&local_98,&MediaShaders::YuvToRgbRec709Scaled,&local_118);
  __return_storage_ptr__->M[0][0] = (float)local_98.M[0][0];
  __return_storage_ptr__->M[0][1] = (float)local_98.M[0][1];
  __return_storage_ptr__->M[0][2] = (float)local_98.M[0][2];
  __return_storage_ptr__->M[0][3] = (float)local_98.M[0][3];
  __return_storage_ptr__->M[1][0] = (float)local_98.M[1][0];
  __return_storage_ptr__->M[1][1] = (float)local_98.M[1][1];
  __return_storage_ptr__->M[1][2] = (float)local_98.M[1][2];
  __return_storage_ptr__->M[1][3] = (float)local_98.M[1][3];
  __return_storage_ptr__->M[2][0] = (float)local_98.M[2][0];
  __return_storage_ptr__->M[2][1] = (float)local_98.M[2][1];
  __return_storage_ptr__->M[2][2] = (float)local_98.M[2][2];
  __return_storage_ptr__->M[2][3] = (float)local_98.M[2][3];
  __return_storage_ptr__->M[3][0] = (float)local_98.M[3][0];
  __return_storage_ptr__->M[3][1] = (float)local_98.M[3][1];
  __return_storage_ptr__->M[3][2] = (float)local_98.M[3][2];
  __return_storage_ptr__->M[3][3] = (float)local_98.M[3][3];
  return __return_storage_ptr__;
}

// GetScaleRotation @ 14d7ada90

FLinearColor * __thiscall
IMediaTextureSample::GetScaleRotation
          (IMediaTextureSample *this,FLinearColor *__return_storage_ptr__)

{
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0x3f800000;
  (__return_storage_ptr__->field0_0x0)._s_0.B = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.A = 1.0;
  return __return_storage_ptr__;
}

// GetSourceColorSpace @ 14d7add40

FColorSpace * __thiscall IMediaTextureSample::GetSourceColorSpace(IMediaTextureSample *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      UE::Color::FColorSpace::FColorSpace(&ColorSpaceSRGB,sRGB);
      _Init_thread_footer(&::_TSS0);
      return &ColorSpaceSRGB;
    }
  }
  return &ColorSpaceSRGB;
}

// GetTilingDescription @ 14d7ae610

FMediaTextureTilingDescription * __thiscall
IMediaTextureSample::GetTilingDescription
          (IMediaTextureSample *this,FMediaTextureTilingDescription *__return_storage_ptr__)

{
  TIntPoint<int> TVar1;
  
  TVar1.field0_0x0 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  (__return_storage_ptr__->TileNum).field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  (__return_storage_ptr__->TileSize).field0_0x0._s_0 = (TIntPoint<int>_u_0_s_0)TVar1.field0_0x0;
  __return_storage_ptr__->TileBorderSize = 0;
  return __return_storage_ptr__;
}

// GetTimecode @ 14d7ae760

TOptional<FTimecode> * __thiscall
IMediaTextureSample::GetTimecode
          (IMediaTextureSample *this,TOptional<FTimecode> *__return_storage_ptr__)

{
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// GetToneMapMethod @ 14d7ae770

EToneMapMethod __thiscall IMediaTextureSample::GetToneMapMethod(IMediaTextureSample *this)

{
  return None;
}

// GetWhitePoint @ 14d7aecc0

TVector2<double> * __thiscall
IMediaTextureSample::GetWhitePoint
          (IMediaTextureSample *this,TVector2<double> *__return_storage_ptr__)

{
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.3127;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.329;
  return __return_storage_ptr__;
}

// GetYUVToRGBMatrix @ 14d7aed20

TMatrix<double> * __thiscall IMediaTextureSample::GetYUVToRGBMatrix(IMediaTextureSample *this)

{
  return &MediaShaders::YuvToRgbRec709Scaled;
}

// IsExternalImage @ 14d7b1690

bool __thiscall IMediaTextureSample::IsExternalImage(IMediaTextureSample *this)

{
  return false;
}

// Reset @ 14d7baf40

void __thiscall IMediaTextureSample::Reset(IMediaTextureSample *this)

{
  return;
}

// ShouldApplyColorConversion @ 14d7bd4e0

bool __thiscall IMediaTextureSample::ShouldApplyColorConversion(IMediaTextureSample *this)

{
  return true;
}

