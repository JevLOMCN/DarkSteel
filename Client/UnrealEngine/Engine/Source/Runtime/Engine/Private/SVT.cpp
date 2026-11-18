// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 13

// SerializeEnumAs<unsigned_char,enum_EPixelFormat> @ 14870e460

void __cdecl
UE::SVT::Private::SerializeEnumAs<unsigned_char,enum_EPixelFormat>
          (FArchive *param_1,EPixelFormat *param_2)

{
  longlong *plVar1;
  EPixelFormat local_res8 [8];
  
  local_res8[0] = *param_2;
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((EPixelFormat *)plVar1[1] < (EPixelFormat *)*plVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
  }
  else {
    local_res8[0] = *(EPixelFormat *)*plVar1;
    *plVar1 = *plVar1 + 1;
  }
  if ((param_1->field_0x28 & 1) != 0) {
    *param_2 = local_res8[0];
  }
  return;
}

// F16ToF32 @ 148733990

float __cdecl UE::SVT::Private::F16ToF32(ushort param_1)

{
  float fVar1;
  ushort local_res8 [16];
  
  local_res8[0] = param_1;
  fVar1 = FGenericPlatformMath::LoadHalf(local_res8);
  return fVar1;
}

// F32ToF16 @ 1487339b0

ushort __cdecl UE::SVT::Private::F32ToF16(float param_1)

{
  ushort local_res10 [12];
  
  local_res10[0] = 0;
  FGenericPlatformMath::StoreHalf(local_res10,param_1);
  return local_res10[0];
}

// GetStreamingManager @ 14873ffd0

IStreamingManager * __cdecl UE::SVT::GetStreamingManager(void)

{
  return (IStreamingManager *)&GStreamingManager.field_0x20;
}

// IsInBounds @ 14874b580

bool __cdecl
UE::SVT::IsInBounds(TIntVector3<int> *param_1,TIntVector3<int> *param_2,TIntVector3<int> *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (param_1->field0_0x0)._s_0.X;
  if (((((param_2->field0_0x0)._s_0.X <= iVar1) &&
       (iVar2 = (param_1->field0_0x0)._s_0.Y, (param_2->field0_0x0)._s_0.Y <= iVar2)) &&
      (iVar3 = (param_1->field0_0x0)._s_0.Z, (param_2->field0_0x0)._s_0.Z <= iVar3)) &&
     (((iVar1 < (param_3->field0_0x0)._s_0.X && (iVar2 < (param_3->field0_0x0)._s_0.Y)) &&
      (iVar3 < (param_3->field0_0x0)._s_0.Z)))) {
    return true;
  }
  return false;
}

// IsSupportedFormat @ 14874b730

bool __cdecl UE::SVT::IsSupportedFormat(EPixelFormat param_1)

{
  switch(param_1) {
  case PF_Unknown:
  case PF_A32B32G32R32F:
  case PF_B8G8R8A8:
  case PF_G8:
  case PF_FloatRGBA:
  case PF_R32_FLOAT:
  case PF_G16R16F:
  case PF_G32R32F:
  case PF_A2B10G10R10:
  case PF_R16F:
  case PF_FloatR11G11B10:
  case PF_R8G8B8A8:
  case PF_R8G8:
  case PF_R8:
    return true;
  default:
    return false;
  }
}

// PackPageTableEntry @ 14874d410

uint __cdecl UE::SVT::PackPageTableEntry(TIntVector3<int> *param_1)

{
  return (uint)CONCAT21(CONCAT11(*(undefined1 *)((longlong)&param_1->field0_0x0 + 8),
                                 *(undefined1 *)((longlong)&param_1->field0_0x0 + 4)),
                        *(undefined1 *)&param_1->field0_0x0);
}

// PackX11Y11Z10 @ 14874d430

uint __cdecl UE::SVT::PackX11Y11Z10(TIntVector3<int> *param_1)

{
  return ((param_1->field0_0x0)._s_0.Y & 0x7ffU | (param_1->field0_0x0)._s_0.Z << 0xb) << 0xb |
         (param_1->field0_0x0)._s_0.X & 0x7ffU;
}

// ReadVoxel @ 148750b40

TVector4<float> * __cdecl
UE::SVT::ReadVoxel(TVector4<float> *__return_storage_ptr__,long64 param_1,uchar *param_2,
                  EPixelFormat param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  TVector4<float> *pTVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ushort local_res20 [4];
  ushort local_68 [2];
  ushort local_64 [2];
  ushort local_60 [2];
  ushort local_5c [2];
  ushort local_58 [2];
  ushort local_54 [2];
  ushort local_50 [2];
  ushort local_4c [2];
  ushort local_48 [32];
  
  fVar10 = __real_3a802008;
  fVar9 = __real_3b808081;
  if (param_3 == PF_Unknown) {
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    return __return_storage_ptr__;
  }
  switch(param_3) {
  case PF_A32B32G32R32F:
    (__return_storage_ptr__->field0_0x0)._s_0.X = *(float *)(param_2 + param_1 * 0x10);
    (__return_storage_ptr__->field0_0x0)._s_0.Y = *(float *)(param_2 + param_1 * 0x10 + 4);
    (__return_storage_ptr__->field0_0x0)._s_0.Z = *(float *)(param_2 + param_1 * 0x10 + 8);
    (__return_storage_ptr__->field0_0x0)._s_0.W = *(float *)(param_2 + param_1 * 0x10 + 0xc);
    break;
  case PF_B8G8R8A8:
    bVar1 = param_2[param_1 * 4 + 1];
    (__return_storage_ptr__->field0_0x0)._s_0.X = (float)param_2[param_1 * 4 + 2] * __real_3b808081;
    bVar2 = param_2[param_1 * 4];
    goto LAB_148750c32;
  case PF_G8:
  case PF_R8:
    bVar1 = param_2[param_1];
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = 0;
    (__return_storage_ptr__->field0_0x0)._s_0.W = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (float)bVar1 * __real_3b808081;
    break;
  default:
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureUtility.cpp"
                       ,0x60,L"\'%s\' is not a supported SparseVolumeTexture format!");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TVector4<float> *)(*pcVar5)();
      return pTVar7;
    }
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
    goto LAB_148750ef1;
  case PF_FloatRGBA:
    local_60[0] = *(ushort *)(param_2 + param_1 * 8 + 6);
    fVar9 = FGenericPlatformMath::LoadHalf(local_60);
    local_5c[0] = *(ushort *)(param_2 + param_1 * 8 + 4);
    fVar10 = FGenericPlatformMath::LoadHalf(local_5c);
    local_58[0] = *(ushort *)(param_2 + param_1 * 8 + 2);
    fVar11 = FGenericPlatformMath::LoadHalf(local_58);
    local_54[0] = *(ushort *)(param_2 + param_1 * 8);
    fVar8 = FGenericPlatformMath::LoadHalf(local_54);
    (__return_storage_ptr__->field0_0x0)._s_0.W = fVar9;
    (__return_storage_ptr__->field0_0x0)._s_0.X = fVar8;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar11;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar10;
    break;
  case PF_R32_FLOAT:
    (__return_storage_ptr__->field0_0x0)._s_0.X = *(float *)(param_2 + param_1 * 4);
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = 0;
    (__return_storage_ptr__->field0_0x0)._s_0.W = 0.0;
    break;
  case PF_G16R16F:
    local_68[0] = *(ushort *)(param_2 + param_1 * 4 + 2);
    fVar9 = FGenericPlatformMath::LoadHalf(local_68);
    local_64[0] = *(ushort *)(param_2 + param_1 * 4);
    fVar10 = FGenericPlatformMath::LoadHalf(local_64);
    (__return_storage_ptr__->field0_0x0)._s_0.X = fVar10;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar9;
    goto LAB_148750ef1;
  case PF_G32R32F:
    (__return_storage_ptr__->field0_0x0)._s_0.X = *(float *)(param_2 + param_1 * 8);
    (__return_storage_ptr__->field0_0x0)._s_0.Y = *(float *)(param_2 + param_1 * 8 + 4);
    goto LAB_148750ef1;
  case PF_A2B10G10R10:
    uVar4 = *(uint *)(param_2 + param_1 * 4);
    (__return_storage_ptr__->field0_0x0)._s_0.X = (float)(uVar4 & 0x3ff) * __real_3a802008;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (float)(uVar4 >> 10 & 0x3ff) * fVar10;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (float)(uVar4 >> 0x14 & 0x3ff) * fVar10;
    (__return_storage_ptr__->field0_0x0)._s_0.W = (float)(uVar4 >> 0x1e) * __real_3eaaaaab;
    break;
  case PF_R16F:
    local_res20[0] = *(ushort *)(param_2 + param_1 * 2);
    fVar9 = FGenericPlatformMath::LoadHalf(local_res20);
    (__return_storage_ptr__->field0_0x0)._s_0.X = fVar9;
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = 0;
    (__return_storage_ptr__->field0_0x0)._s_0.W = 0.0;
    break;
  case PF_FloatR11G11B10:
    uVar4 = *(uint *)(param_2 + param_1 * 4);
    local_50[0] = ((ushort)uVar4 & 0x3ff) << 5;
    fVar9 = FGenericPlatformMath::LoadHalf(local_50);
    local_4c[0] = (ushort)(uVar4 >> 6) & 0x7ff0;
    fVar10 = FGenericPlatformMath::LoadHalf(local_4c);
    local_48[0] = (ushort)(uVar4 >> 0x11) & 0x7ff0;
    fVar11 = FGenericPlatformMath::LoadHalf(local_48);
    (__return_storage_ptr__->field0_0x0)._s_0.X = fVar11;
    (__return_storage_ptr__->field0_0x0)._s_0.W = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar10;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar9;
    break;
  case PF_R8G8B8A8:
    bVar1 = param_2[param_1 * 4 + 1];
    (__return_storage_ptr__->field0_0x0)._s_0.X = (float)param_2[param_1 * 4] * __real_3b808081;
    bVar2 = param_2[param_1 * 4 + 2];
LAB_148750c32:
    bVar3 = param_2[param_1 * 4 + 3];
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (float)bVar1 * fVar9;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (float)bVar2 * fVar9;
    (__return_storage_ptr__->field0_0x0)._s_0.W = (float)bVar3 * fVar9;
    break;
  case PF_R8G8:
    bVar1 = param_2[param_1 * 2 + 1];
    (__return_storage_ptr__->field0_0x0)._s_0.X = (float)param_2[param_1 * 2] * __real_3b808081;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (float)bVar1 * __real_3b808081;
LAB_148750ef1:
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
  }
  return __return_storage_ptr__;
}

// ShiftRightAndMax @ 14875c770

TIntVector3<int> * __cdecl
UE::SVT::ShiftRightAndMax
          (TIntVector3<int> *__return_storage_ptr__,TIntVector3<int> *param_1,uint param_2,
          int param_3)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  bVar2 = (byte)param_2;
  iVar5 = (param_1->field0_0x0)._s_0.Z >> (bVar2 & 0x1f);
  iVar4 = (param_1->field0_0x0)._s_0.Y >> (bVar2 & 0x1f);
  iVar3 = (param_1->field0_0x0)._s_0.X >> (bVar2 & 0x1f);
  iVar1 = param_3;
  if (param_3 < iVar3) {
    iVar1 = iVar3;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = iVar1;
  iVar1 = param_3;
  if (param_3 < iVar4) {
    iVar1 = iVar4;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Y = iVar1;
  if (param_3 < iVar5) {
    param_3 = iVar5;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Z = param_3;
  return __return_storage_ptr__;
}

// UnpackPageTableEntry @ 14875e230

TIntVector3<int> * __cdecl
UE::SVT::UnpackPageTableEntry(TIntVector3<int> *__return_storage_ptr__,uint param_1)

{
  (__return_storage_ptr__->field0_0x0)._s_0.X = param_1 & 0xff;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = param_1 >> 8 & 0xff;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = param_1 >> 0x10 & 0xff;
  return __return_storage_ptr__;
}

// UseAsyncComputeForStreaming @ 14875ec30

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl UE::SVT::UseAsyncComputeForStreaming(void)

{
  if (((GRHIGlobals.SupportsEfficientAsyncCompute) && (GSVTStreamingAsyncCompute != 0)) &&
     (GNumExplicitGPUsForRendering == 1)) {
    return true;
  }
  return false;
}

// WriteVoxel @ 14875f140

void __cdecl
UE::SVT::WriteVoxel(long64 param_1,uchar *param_2,EPixelFormat param_3,TVector4<float> *param_4,
                   int param_5)

{
  code *pcVar1;
  bool bVar2;
  uchar *puVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ushort local_res18 [4];
  ushort local_48 [2];
  ushort local_44 [2];
  ushort local_40 [2];
  ushort local_3c [2];
  ushort local_38 [2];
  ushort local_34 [2];
  ushort local_30 [2];
  ushort local_2c [2];
  ushort local_28 [8];
  
  fVar6 = __real_437f0000;
  fVar5 = __real_447fc000;
  fVar7 = __real_3f800000;
  if (param_3 == PF_Unknown) {
    return;
  }
  switch(param_3) {
  case PF_A32B32G32R32F:
    lVar4 = param_1 * 0x10;
    if (((((((param_5 + 1U < 2) &&
            (*(float *)(param_2 + lVar4) = (param_4->field0_0x0)._s_0.X, param_5 == -1)) ||
           (param_5 == 1)) &&
          (*(float *)(param_2 + lVar4 + 4) = (param_4->field0_0x0)._s_0.Y, param_5 == -1)) ||
         (param_5 == 2)) &&
        (*(float *)(param_2 + lVar4 + 8) = (param_4->field0_0x0)._s_0.Z, param_5 == -1)) ||
       (param_5 == 3)) {
      *(float *)(param_2 + lVar4 + 0xc) = (param_4->field0_0x0)._s_0.W;
    }
    break;
  case PF_B8G8R8A8:
    if (param_5 + 1U < 2) {
      fVar5 = (param_4->field0_0x0)._s_0.X;
      if (__real_3f800000 <= fVar5) {
        fVar5 = __real_3f800000;
      }
      if (fVar5 <= 0.0) {
        fVar5 = 0.0;
      }
      param_2[param_1 * 4 + 2] = (uchar)(int)(fVar5 * __real_437f0000);
      if (param_5 != -1) goto LAB_14875f302;
LAB_14875f307:
      fVar5 = (param_4->field0_0x0)._s_0.Y;
      puVar3 = param_2 + param_1 * 4;
      if (fVar7 <= fVar5) {
        fVar5 = fVar7;
      }
      if (fVar5 <= 0.0) {
        fVar5 = 0.0;
      }
      puVar3[1] = (uchar)(int)(fVar5 * fVar6);
      if (param_5 != -1) goto LAB_14875f336;
    }
    else {
LAB_14875f302:
      if (param_5 == 1) goto LAB_14875f307;
      puVar3 = param_2 + param_1 * 4;
LAB_14875f336:
      if (param_5 != 2) goto LAB_14875f358;
    }
    fVar5 = (param_4->field0_0x0)._s_0.Z;
    if (fVar7 <= fVar5) {
      fVar5 = fVar7;
    }
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    *puVar3 = (uchar)(int)(fVar5 * fVar6);
LAB_14875f353:
    if (param_5 != -1) goto LAB_14875f358;
    goto LAB_14875f361;
  case PF_G8:
  case PF_R8:
    if (param_5 + 1U < 2) {
      fVar7 = (param_4->field0_0x0)._s_0.X;
      if (__real_3f800000 <= fVar7) {
        fVar7 = __real_3f800000;
      }
      if (fVar7 <= 0.0) {
        fVar7 = 0.0;
      }
      param_2[param_1] = (uchar)(int)(fVar7 * __real_437f0000);
    }
    break;
  default:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureUtility.cpp"
                       ,0xae,L"\'%s\' is not a supported SparseVolumeTexture format!");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    break;
  case PF_FloatRGBA:
    if (param_5 + 1U < 2) {
      local_40[0] = 0;
      FGenericPlatformMath::StoreHalf(local_40,(param_4->field0_0x0)._s_0.X);
      *(ushort *)(param_2 + param_1 * 8) = local_40[0];
      if (param_5 != -1) goto LAB_14875f43e;
LAB_14875f444:
      local_3c[0] = 0;
      FGenericPlatformMath::StoreHalf(local_3c,(param_4->field0_0x0)._s_0.Y);
      puVar3 = param_2 + param_1 * 8;
      *(ushort *)(puVar3 + 2) = local_3c[0];
      if (param_5 != -1) goto LAB_14875f475;
LAB_14875f47b:
      local_38[0] = 0;
      FGenericPlatformMath::StoreHalf(local_38,(param_4->field0_0x0)._s_0.Z);
      *(ushort *)(puVar3 + 4) = local_38[0];
      if (param_5 != -1) goto LAB_14875f49c;
    }
    else {
LAB_14875f43e:
      if (param_5 == 1) goto LAB_14875f444;
      puVar3 = param_2 + param_1 * 8;
LAB_14875f475:
      if (param_5 == 2) goto LAB_14875f47b;
LAB_14875f49c:
      if (param_5 != 3) {
        return;
      }
    }
    local_34[0] = 0;
    FGenericPlatformMath::StoreHalf(local_34,(param_4->field0_0x0)._s_0.W);
    *(ushort *)(puVar3 + 6) = local_34[0];
    break;
  case PF_R32_FLOAT:
    if (param_5 + 1U < 2) {
      *(float *)(param_2 + param_1 * 4) = (param_4->field0_0x0)._s_0.X;
    }
    break;
  case PF_G16R16F:
    if (param_5 + 1U < 2) {
      local_48[0] = 0;
      FGenericPlatformMath::StoreHalf(local_48,(param_4->field0_0x0)._s_0.X);
      *(ushort *)(param_2 + param_1 * 4) = local_48[0];
      if (param_5 != -1) goto LAB_14875f3e2;
    }
    else {
LAB_14875f3e2:
      if (param_5 != 1) {
        return;
      }
    }
    local_44[0] = 0;
    FGenericPlatformMath::StoreHalf(local_44,(param_4->field0_0x0)._s_0.Y);
    *(ushort *)(param_2 + param_1 * 4 + 2) = local_44[0];
    break;
  case PF_G32R32F:
    if (((param_5 + 1U < 2) &&
        (*(float *)(param_2 + param_1 * 8) = (param_4->field0_0x0)._s_0.X, param_5 == -1)) ||
       (param_5 == 1)) {
      *(float *)(param_2 + param_1 * 8 + 4) = (param_4->field0_0x0)._s_0.Y;
    }
    break;
  case PF_A2B10G10R10:
    if (param_5 + 1U < 2) {
      fVar6 = (param_4->field0_0x0)._s_0.X;
      if (__real_3f800000 <= fVar6) {
        fVar6 = __real_3f800000;
      }
      if (fVar6 <= 0.0) {
        fVar6 = 0.0;
      }
      *(uint *)(param_2 + param_1 * 4) =
           *(uint *)(param_2 + param_1 * 4) | (uint)(longlong)(fVar6 * __real_447fc000) & 0x3ff;
      if (param_5 != -1) goto LAB_14875f5ae;
LAB_14875f5b3:
      fVar6 = (param_4->field0_0x0)._s_0.Y;
      if (fVar7 <= fVar6) {
        fVar6 = fVar7;
      }
      if (fVar6 <= 0.0) {
        fVar6 = 0.0;
      }
      *(uint *)(param_2 + param_1 * 4) =
           *(uint *)(param_2 + param_1 * 4) | ((uint)(longlong)(fVar6 * fVar5) & 0x3ff) << 10;
      if (param_5 != -1) goto LAB_14875f5da;
LAB_14875f5df:
      fVar6 = (param_4->field0_0x0)._s_0.Z;
      if (fVar7 <= fVar6) {
        fVar6 = fVar7;
      }
      if (fVar6 <= 0.0) {
        fVar6 = 0.0;
      }
      *(uint *)(param_2 + param_1 * 4) =
           *(uint *)(param_2 + param_1 * 4) | ((uint)(longlong)(fVar6 * fVar5) & 0x3ff) << 0x14;
      if (param_5 != -1) goto LAB_14875f606;
    }
    else {
LAB_14875f5ae:
      if (param_5 == 1) goto LAB_14875f5b3;
LAB_14875f5da:
      if (param_5 == 2) goto LAB_14875f5df;
LAB_14875f606:
      if (param_5 != 3) {
        return;
      }
    }
    fVar5 = (param_4->field0_0x0)._s_0.W;
    if (fVar7 <= fVar5) {
      fVar5 = fVar7;
    }
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    *(uint *)(param_2 + param_1 * 4) =
         *(uint *)(param_2 + param_1 * 4) | (int)(longlong)(fVar5 * __real_40400000) << 0x1e;
    break;
  case PF_R16F:
    if (param_5 + 1U < 2) {
      local_res18[0] = 0;
      FGenericPlatformMath::StoreHalf(local_res18,(param_4->field0_0x0)._s_0.X);
      *(ushort *)(param_2 + param_1 * 2) = local_res18[0];
    }
    break;
  case PF_FloatR11G11B10:
    if (param_5 + 1U < 2) {
      local_30[0] = 0;
      FGenericPlatformMath::StoreHalf(local_30,(param_4->field0_0x0)._s_0.X);
      *(uint *)(param_2 + param_1 * 4) =
           *(uint *)(param_2 + param_1 * 4) | (local_30[0] & 0xfffffff0) << 0x11;
      if (param_5 != -1) goto LAB_14875f66b;
LAB_14875f671:
      local_2c[0] = 0;
      FGenericPlatformMath::StoreHalf(local_2c,(param_4->field0_0x0)._s_0.Y);
      *(uint *)(param_2 + param_1 * 4) =
           *(uint *)(param_2 + param_1 * 4) | (local_2c[0] & 0x7ff0) << 6;
      if (param_5 != -1) goto LAB_14875f699;
    }
    else {
LAB_14875f66b:
      if (param_5 == 1) goto LAB_14875f671;
LAB_14875f699:
      if (param_5 != 2) {
        return;
      }
    }
    local_28[0] = 0;
    FGenericPlatformMath::StoreHalf(local_28,(param_4->field0_0x0)._s_0.Z);
    *(uint *)(param_2 + param_1 * 4) = *(uint *)(param_2 + param_1 * 4) | local_28[0] >> 5 & 0x3ff;
    break;
  case PF_R8G8B8A8:
    if (param_5 + 1U < 2) {
      fVar5 = (param_4->field0_0x0)._s_0.X;
      if (__real_3f800000 <= fVar5) {
        fVar5 = __real_3f800000;
      }
      if (fVar5 <= 0.0) {
        fVar5 = 0.0;
      }
      param_2[param_1 * 4] = (uchar)(int)(fVar5 * __real_437f0000);
      if (param_5 != -1) goto LAB_14875f26b;
LAB_14875f270:
      fVar5 = (param_4->field0_0x0)._s_0.Y;
      puVar3 = param_2 + param_1 * 4;
      if (fVar7 <= fVar5) {
        fVar5 = fVar7;
      }
      if (fVar5 <= 0.0) {
        fVar5 = 0.0;
      }
      puVar3[1] = (uchar)(int)(fVar5 * fVar6);
      if (param_5 != -1) goto LAB_14875f29f;
LAB_14875f2a8:
      fVar5 = (param_4->field0_0x0)._s_0.Z;
      if (fVar7 <= fVar5) {
        fVar5 = fVar7;
      }
      if (fVar5 <= 0.0) {
        fVar5 = 0.0;
      }
      puVar3[2] = (uchar)(int)(fVar5 * fVar6);
      goto LAB_14875f353;
    }
LAB_14875f26b:
    if (param_5 == 1) goto LAB_14875f270;
    puVar3 = param_2 + param_1 * 4;
LAB_14875f29f:
    if (param_5 == 2) goto LAB_14875f2a8;
LAB_14875f358:
    if (param_5 != 3) {
      return;
    }
LAB_14875f361:
    fVar5 = (param_4->field0_0x0)._s_0.W;
    if (fVar7 <= fVar5) {
      fVar5 = fVar7;
    }
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    puVar3[3] = (uchar)(int)(fVar5 * fVar6);
    break;
  case PF_R8G8:
    if (param_5 + 1U < 2) {
      fVar5 = (param_4->field0_0x0)._s_0.X;
      if (__real_3f800000 <= fVar5) {
        fVar5 = __real_3f800000;
      }
      if (fVar5 <= 0.0) {
        fVar5 = 0.0;
      }
      param_2[param_1 * 2] = (uchar)(int)(fVar5 * __real_437f0000);
      if (param_5 != -1) goto LAB_14875f208;
    }
    else {
LAB_14875f208:
      if (param_5 != 1) {
        return;
      }
    }
    fVar5 = (param_4->field0_0x0)._s_0.Y;
    if (fVar7 <= fVar5) {
      fVar5 = fVar7;
    }
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    param_2[param_1 * 2 + 1] = (uchar)(int)(fVar5 * fVar6);
  }
  return;
}

