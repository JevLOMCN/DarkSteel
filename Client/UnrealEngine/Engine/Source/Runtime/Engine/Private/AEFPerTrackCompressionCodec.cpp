// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// ByteSwapOneTrack<FMemoryReader> @ 147427ee0

void __cdecl
AEFPerTrackCompressionCodec::ByteSwapOneTrack<FMemoryReader>
          (FUECompressedAnimData *param_1,FMemoryReader *param_2,int param_3,int param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 local_res20 [8];
  undefined1 local_48 [4];
  uint local_44;
  ulonglong local_40;
  
  if (param_4 != -1) {
    param_2->_padding_ = (longlong)(param_3 + param_4);
    puVar9 = (uint *)(*(longlong *)&param_1->field_0x38 + (longlong)param_4);
    (**(code **)(param_2->_padding_ + 0x188))(param_2,puVar9,4);
    uVar8 = *puVar9;
    local_40 = (ulonglong)uVar8;
    puVar9 = puVar9 + 1;
    uVar4 = (int)uVar8 >> 0x1c & 0xf;
    uVar12 = uVar8 & 0xffffff;
    uVar13 = (ulonglong)uVar12;
    iVar1 = CompressedRotationStrides[uVar4];
    uVar10 = 1;
    if (uVar4 != 3) {
      uVar10 = (uint)"\x04\x04\x04\x04\x04\x04\x04\x04\x03\x01\x01\x02\x01\x02\x02\x03\x03\x01\x01\x02\x01\x02\x02\x03\x06\x02\x02\x04\x02\x04\x04\x06\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01"
                     [uVar4 * 8 | uVar8 >> 0x18 & 7];
    }
    iVar7 = 0;
    uVar5 = 0;
    if (uVar4 == 3) {
      uVar5 = (uint)"\x04\x04\x04\x04\x04\x04\x04\x04\x03\x01\x01\x02\x01\x02\x02\x03\x03\x01\x01\x02\x01\x02\x02\x03\x06\x02\x02\x04\x02\x04\x04\x06\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01"
                    [uVar4 * 8 | uVar8 >> 0x18 & 7];
    }
    local_44 = uVar12;
    if ((iVar1 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("KeyComponentSize != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimEncoding_PerTrackCompression.cpp"
                           ,0x14d,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar5 != 0) {
      do {
        (**(code **)(param_2->_padding_ + 0x188))(param_2,puVar9,4);
        puVar9 = puVar9 + 1;
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)uVar5);
    }
    if (uVar12 != 0) {
      do {
        if (uVar10 != 0) {
          uVar6 = (ulonglong)uVar10;
          do {
            (**(code **)(param_2->_padding_ + 0x188))(param_2,puVar9,(longlong)iVar1);
            puVar9 = (uint *)((longlong)puVar9 + (longlong)iVar1);
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        uVar13 = uVar13 - 1;
        uVar12 = local_44;
      } while (uVar13 != 0);
    }
    if ((local_40 & 0x8000000) != 0) {
      uVar8 = ((int)puVar9 + 3U & 0xfffffffc) - (int)puVar9;
      if ((param_2->_padding_ & 4) == 0) {
        (**(code **)(param_2->_padding_ + 0x188))(param_2,puVar9,(longlong)(int)uVar8);
      }
      else {
        local_res20[0] = 0x55;
        if (0 < (int)uVar8) {
          uVar13 = (ulonglong)uVar8;
          do {
            (**(code **)(param_2->_padding_ + 0x188))(param_2,local_res20,1);
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
      }
      puVar9 = (uint *)((longlong)puVar9 + (longlong)(int)uVar8);
      if (uVar12 != 0) {
        uVar13 = (ulonglong)uVar12;
        lVar11 = (ulonglong)(0xff < *(int *)&param_1->field_0x8) + 1;
        do {
          (**(code **)(param_2->_padding_ + 0x188))(param_2,puVar9,lVar11);
          puVar9 = (uint *)((longlong)puVar9 + lVar11);
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
    }
    uVar8 = ((int)puVar9 + 3U & 0xfffffffc) - (int)puVar9;
    if ((param_2->_padding_ & 4) == 0) {
      (**(code **)(param_2->_padding_ + 0x188))(param_2,puVar9,(longlong)(int)uVar8);
    }
    else {
      local_48[0] = 0x55;
      if (0 < (int)uVar8) {
        uVar13 = (ulonglong)uVar8;
        do {
          (**(code **)(param_2->_padding_ + 0x188))(param_2,local_48,1);
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
        return;
      }
    }
  }
  return;
}

// ByteSwapOneTrack<FMemoryWriter> @ 147428170

void __cdecl
AEFPerTrackCompressionCodec::ByteSwapOneTrack<FMemoryWriter>
          (FUECompressedAnimData *param_1,FMemoryWriter *param_2,int param_3,int param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 local_res20 [8];
  undefined1 local_48 [4];
  uint local_44;
  ulonglong local_40;
  
  if (param_4 != -1) {
    *(longlong *)&param_2->field_0x90 = (longlong)(param_3 + param_4);
    puVar9 = (uint *)(*(longlong *)&param_1->field_0x38 + (longlong)param_4);
    (**(code **)(*(longlong *)param_2 + 0x188))(param_2,puVar9,4);
    uVar8 = *puVar9;
    local_40 = (ulonglong)uVar8;
    puVar9 = puVar9 + 1;
    uVar4 = (int)uVar8 >> 0x1c & 0xf;
    uVar12 = uVar8 & 0xffffff;
    uVar13 = (ulonglong)uVar12;
    iVar1 = CompressedRotationStrides[uVar4];
    uVar10 = 1;
    if (uVar4 != 3) {
      uVar10 = (uint)"\x04\x04\x04\x04\x04\x04\x04\x04\x03\x01\x01\x02\x01\x02\x02\x03\x03\x01\x01\x02\x01\x02\x02\x03\x06\x02\x02\x04\x02\x04\x04\x06\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01"
                     [uVar4 * 8 | uVar8 >> 0x18 & 7];
    }
    iVar7 = 0;
    uVar5 = 0;
    if (uVar4 == 3) {
      uVar5 = (uint)"\x04\x04\x04\x04\x04\x04\x04\x04\x03\x01\x01\x02\x01\x02\x02\x03\x03\x01\x01\x02\x01\x02\x02\x03\x06\x02\x02\x04\x02\x04\x04\x06\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01"
                    [uVar4 * 8 | uVar8 >> 0x18 & 7];
    }
    local_44 = uVar12;
    if ((iVar1 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("KeyComponentSize != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimEncoding_PerTrackCompression.cpp"
                           ,0x14d,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar5 != 0) {
      do {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,puVar9,4);
        puVar9 = puVar9 + 1;
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)uVar5);
    }
    if (uVar12 != 0) {
      do {
        if (uVar10 != 0) {
          uVar6 = (ulonglong)uVar10;
          do {
            (**(code **)(*(longlong *)param_2 + 0x188))(param_2,puVar9,(longlong)iVar1);
            puVar9 = (uint *)((longlong)puVar9 + (longlong)iVar1);
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        uVar13 = uVar13 - 1;
        uVar12 = local_44;
      } while (uVar13 != 0);
    }
    if ((local_40 & 0x8000000) != 0) {
      uVar8 = ((int)puVar9 + 3U & 0xfffffffc) - (int)puVar9;
      if ((param_2->field_0x28 & 4) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,puVar9,(longlong)(int)uVar8);
      }
      else {
        local_res20[0] = 0x55;
        if (0 < (int)uVar8) {
          uVar13 = (ulonglong)uVar8;
          do {
            (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_res20,1);
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
      }
      puVar9 = (uint *)((longlong)puVar9 + (longlong)(int)uVar8);
      if (uVar12 != 0) {
        uVar13 = (ulonglong)uVar12;
        lVar11 = (ulonglong)(0xff < *(int *)&param_1->field_0x8) + 1;
        do {
          (**(code **)(*(longlong *)param_2 + 0x188))(param_2,puVar9,lVar11);
          puVar9 = (uint *)((longlong)puVar9 + lVar11);
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
    }
    uVar8 = ((int)puVar9 + 3U & 0xfffffffc) - (int)puVar9;
    if ((param_2->field_0x28 & 4) == 0) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,puVar9,(longlong)(int)uVar8);
    }
    else {
      local_48[0] = 0x55;
      if (0 < (int)uVar8) {
        uVar13 = (ulonglong)uVar8;
        do {
          (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_48,1);
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
        return;
      }
    }
  }
  return;
}

// ByteSwapIn @ 1474419c0

void __thiscall
AEFPerTrackCompressionCodec::ByteSwapIn
          (AEFPerTrackCompressionCodec *this,FUECompressedAnimData *param_1,FMemoryReader *param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  
  lVar2 = param_2->_padding_;
  lVar7 = (**(code **)(param_2->_padding_ + 0x30))(param_2);
  lVar7 = lVar7 - lVar2;
  if ((0x7ffffffe < lVar7) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("OriginalNumBytes < 2147483647",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimEncoding_PerTrackCompression.cpp"
                         ,0x19c,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((*(int *)&param_1->field_0x40 != lVar7) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("CompressedData.CompressedByteStream.Num() == OriginalNumBytes",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimEncoding_PerTrackCompression.cpp"
                         ,0x19e,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar9 = 0;
  iVar1 = *(int *)&param_1->field_0x28;
  iVar5 = *(int *)&param_1->field_0x18 / 2;
  if (0 < iVar5) {
    lVar7 = 0;
    uVar10 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar10 < *(int *)&param_1->field_0x18) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar11 = (int)lVar2;
      ByteSwapOneTrack<FMemoryReader>
                (param_1,param_2,iVar11,*(int *)(*(longlong *)&param_1->field_0x10 + lVar7 * 8));
      uVar6 = 0;
      if ((int)(uVar10 + 1) < *(int *)&param_1->field_0x18) {
        uVar6 = ~(uVar10 + 1) >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      ByteSwapOneTrack<FMemoryReader>
                (param_1,param_2,iVar11,*(int *)(*(longlong *)&param_1->field_0x10 + 4 + lVar7 * 8))
      ;
      if (0 < iVar1) {
        piVar8 = TArrayView<int,int>::operator[]
                           ((TArrayView<int,int> *)&param_1->field_0x20,
                            iVar9 * *(int *)&param_1->field_0x30);
        ByteSwapOneTrack<FMemoryReader>(param_1,param_2,iVar11,*piVar8);
      }
      iVar9 = iVar9 + 1;
      uVar10 = uVar10 + 2;
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar5);
  }
  return;
}

// ByteSwapOut @ 147441f20

void __thiscall
AEFPerTrackCompressionCodec::ByteSwapOut
          (AEFPerTrackCompressionCodec *this,FUECompressedAnimData *param_1,FMemoryWriter *param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  
  iVar1 = *(int *)&param_1->field_0x28;
  iVar8 = 0;
  iVar2 = *(int *)&param_2->field_0x90;
  iVar5 = *(int *)&param_1->field_0x18 / 2;
  if (0 < iVar5) {
    lVar9 = 0;
    uVar10 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar10 < *(int *)&param_1->field_0x18) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      ByteSwapOneTrack<FMemoryWriter>
                (param_1,param_2,iVar2,*(int *)(*(longlong *)&param_1->field_0x10 + lVar9 * 8));
      uVar6 = 0;
      if ((int)(uVar10 + 1) < *(int *)&param_1->field_0x18) {
        uVar6 = ~(uVar10 + 1) >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      ByteSwapOneTrack<FMemoryWriter>
                (param_1,param_2,iVar2,*(int *)(*(longlong *)&param_1->field_0x10 + 4 + lVar9 * 8));
      if (0 < iVar1) {
        piVar7 = TArrayView<int,int>::operator[]
                           ((TArrayView<int,int> *)&param_1->field_0x20,
                            iVar8 * *(int *)&param_1->field_0x30);
        ByteSwapOneTrack<FMemoryWriter>(param_1,param_2,iVar2,*piVar7);
      }
      iVar8 = iVar8 + 1;
      uVar10 = uVar10 + 2;
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar5);
  }
  return;
}

// GetBoneAtomRotation @ 14744f290

void __cdecl
AEFPerTrackCompressionCodec::GetBoneAtomRotation
          (TTransform<double> *param_1,FAnimSequenceDecompressionContext *param_2,int param_3)

{
  byte bVar1;
  ICompressedAnimData *pIVar2;
  bool bVar3;
  bool bVar4;
  double dVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uchar *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  int local_res10 [2];
  float local_res18;
  int local_res20 [2];
  TQuat<float> local_88;
  TQuat<float> local_78 [4];
  
  dVar28 = UE::Math::TQuat<double>::Identity.W;
  dVar5 = UE::Math::TQuat<double>::Identity.Z;
  dVar27 = UE::Math::TQuat<double>::Identity.Y;
  fVar35 = __real_3f800000;
  pIVar2 = param_2->CompressedAnimData;
  iVar11 = *(int *)(pIVar2[1]._padding_ + 4 + (longlong)(param_3 * 2) * 4);
  if (iVar11 == -1) {
    (param_1->Rotation).XY.m128d_f64[0] = UE::Math::TQuat<double>::Identity.X;
    (param_1->Rotation).XY.m128d_f64[1] = dVar27;
    (param_1->Rotation).ZW.m128d_f64[0] = dVar5;
    (param_1->Rotation).ZW.m128d_f64[1] = dVar28;
    return;
  }
  puVar15 = (uchar *)(*(longlong *)&pIVar2[3].CompressedNumberOfKeys + 4 + (longlong)iVar11);
  uVar6 = *(uint *)(*(longlong *)&pIVar2[3].CompressedNumberOfKeys + (longlong)iVar11);
  uVar13 = uVar6 & 0xffffff;
  uVar8 = (int)uVar6 >> 0x1c & 0xf;
  uVar14 = (int)uVar6 >> 0x18;
  bVar1 = "\x04\x04\x04\x04\x04\x04\x04\x04\x03\x01\x01\x02\x01\x02\x02\x03\x03\x01\x01\x02\x01\x02\x02\x03\x06\x02\x02\x04\x02\x04\x04\x06\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01"
          [uVar8 * 8 | uVar14 & 7];
  uVar10 = 1;
  if (uVar8 != 3) {
    uVar10 = (uint)bVar1;
  }
  iVar11 = uVar10 * CompressedRotationStrides[uVar8];
  local_res18 = 0.0;
  local_res10[0] = 0;
  uVar10 = 0;
  if (uVar8 == 3) {
    uVar10 = (uint)bVar1;
  }
  local_res20[0] = 0;
  uVar17 = (ulonglong)(uVar10 << 2);
  iVar12 = 0;
  iVar9 = 0;
  if (1 < uVar13) {
    dVar27 = ((double)(param_2->SamplingTime).SubFrame +
             (double)(param_2->SamplingTime).FrameNumber.Value) / (double)param_2->NumberOfFrames;
    if (__real_3ff0000000000000 <= dVar27) {
      dVar27 = __real_3ff0000000000000;
    }
    if ((uVar14 & 8) == 0) {
      local_res18 = (float)dVar27;
      if (0.0 < local_res18) {
        iVar9 = uVar13 - 1;
        iVar12 = iVar9;
        if (local_res18 < __real_3f800000) {
          local_res18 = (float)iVar9 * local_res18;
          iVar7 = (int)local_res18;
          fVar19 = local_res18;
          if ((iVar7 != -0x80000000) && ((float)iVar7 != local_res18)) {
            auVar25._4_4_ = local_res18;
            auVar25._0_4_ = local_res18;
            auVar25._8_8_ = 0;
            uVar6 = movmskps((uint)bVar1,auVar25);
            fVar19 = (float)(int)(iVar7 - (uVar6 & 1));
          }
          if ((int)fVar19 < iVar9) {
            iVar12 = (int)fVar19;
          }
          if (param_2->Interpolation == Step) {
            local_res18 = 0.0;
            if (iVar12 + 1 < iVar9) {
              iVar9 = iVar12 + 1;
            }
          }
          else {
            local_res18 = local_res18 - fVar19;
            if (iVar12 + 1 < iVar9) {
              iVar9 = iVar12 + 1;
            }
          }
        }
        else {
          local_res18 = 0.0;
        }
      }
      else {
        local_res18 = 0.0;
        iVar12 = 0;
        iVar9 = 0;
      }
    }
    else {
      local_res18 = AnimEncoding::TimeToIndex
                              (param_2->Interpolation,pIVar2->CompressedNumberOfKeys,
                               (uchar *)((ulonglong)
                                         (puVar15 + uVar17 + (longlong)(int)(uVar13 * iVar11) + 3) &
                                        0xfffffffffffffffc),(float)dVar27,uVar6 & 0xffffff,
                               local_res10,local_res20);
      iVar12 = local_res10[0];
      iVar9 = local_res20[0];
    }
  }
  FAnimationCompression_PerTrackUtils::DecompressRotation<1>
            (uVar8,uVar14 & 0xf,&local_88,puVar15,puVar15 + (longlong)(iVar12 * iVar11) + uVar17);
  if (iVar12 == iVar9) {
    auVar29._0_8_ = (double)local_88.Z;
    (param_1->Rotation).XY.m128d_f64[0] = (double)local_88.X;
    (param_1->Rotation).XY.m128d_f64[1] = (double)local_88.Y;
    dVar28 = (double)local_88.W;
    (param_1->Rotation).ZW.m128d_f64[0] = auVar29._0_8_;
    (param_1->Rotation).ZW.m128d_f64[1] = dVar28;
    dVar27 = (param_1->Rotation).XY.m128d_f64[0];
    dVar5 = (param_1->Rotation).XY.m128d_f64[1];
    auVar29._8_4_ = SUB84(dVar28,0);
    auVar29._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
    auVar26._0_8_ = auVar29._0_8_ * auVar29._0_8_ + dVar27 * dVar27;
    auVar26._8_8_ = dVar28 * dVar28 + dVar5 * dVar5;
    auVar33._8_4_ = SUB84(auVar26._8_8_,0);
    auVar33._0_8_ = auVar26._0_8_;
    auVar33._12_4_ = (int)((ulonglong)auVar26._8_8_ >> 0x20);
    auVar23._0_8_ = auVar33._8_8_ + auVar26._0_8_;
    auVar23._8_8_ = auVar26._0_8_ + auVar26._8_8_;
    auVar25 = sqrtpd(auVar26,auVar23);
    uVar16 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar23._0_8_);
    uVar18 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar23._8_8_);
    bVar3 = GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar23._0_8_;
    bVar4 = GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar23._8_8_;
    auVar33 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar25);
    auVar25 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar25);
    auVar22._0_8_ = auVar25._0_8_ * auVar29._0_8_;
    auVar22._8_8_ = auVar25._8_8_ * auVar29._8_8_;
    auVar32._0_8_ = (ulonglong)(auVar33._0_8_ * dVar27) & uVar16;
    uVar17 = uVar18 & (ulonglong)(auVar33._8_8_ * dVar5);
    auVar32._8_4_ = (uint)uVar17;
    auVar32._12_4_ = (uint)(uVar17 >> 0x20);
    auVar34._0_4_ = ~(uint)uVar16 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
    auVar34._4_4_ =
         ~(uint)(uVar16 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
    auVar34._8_4_ = ~(uint)uVar18 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
    auVar34._12_4_ =
         ~(uint)(uVar18 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
  }
  else {
    FAnimationCompression_PerTrackUtils::DecompressRotation<1>
              (uVar8,uVar14 & 0xf,local_78,puVar15,puVar15 + (longlong)(iVar9 * iVar11) + uVar17);
    fVar19 = local_res18;
    if (local_78[0].W * local_88.W + local_78[0].Z * local_88.Z +
        local_78[0].Y * local_88.Y + local_78[0].X * local_88.X < 0.0) {
      fVar19 = (float)((uint)local_res18 ^ __xmm_80000000800000008000000080000000);
      fVar35 = __real_bf800000;
    }
    fVar35 = fVar35 - fVar19;
    dVar31 = (double)(fVar35 * local_88.Z + local_res18 * local_78[0].Z);
    (param_1->Rotation).XY.m128d_f64[0] =
         (double)(fVar35 * local_88.X + local_res18 * local_78[0].X);
    (param_1->Rotation).XY.m128d_f64[1] =
         (double)(fVar35 * local_88.Y + local_res18 * local_78[0].Y);
    dVar28 = (double)(fVar35 * local_88.W + local_res18 * local_78[0].W);
    (param_1->Rotation).ZW.m128d_f64[0] = dVar31;
    (param_1->Rotation).ZW.m128d_f64[1] = dVar28;
    dVar27 = (param_1->Rotation).XY.m128d_f64[0];
    dVar5 = (param_1->Rotation).XY.m128d_f64[1];
    auVar30._8_4_ = SUB84(dVar28,0);
    auVar30._0_8_ = dVar31;
    auVar30._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
    auVar24._0_8_ = dVar31 * dVar31 + dVar27 * dVar27;
    auVar24._8_8_ = dVar28 * dVar28 + dVar5 * dVar5;
    auVar20._8_4_ = SUB84(auVar24._8_8_,0);
    auVar20._0_8_ = auVar24._0_8_;
    auVar20._12_4_ = (int)((ulonglong)auVar24._8_8_ >> 0x20);
    auVar21._0_8_ = auVar20._8_8_ + auVar24._0_8_;
    auVar21._8_8_ = auVar24._0_8_ + auVar24._8_8_;
    auVar25 = sqrtpd(auVar24,auVar21);
    uVar16 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar21._0_8_);
    uVar17 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar21._8_8_);
    bVar3 = GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar21._0_8_;
    bVar4 = GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar21._8_8_;
    auVar32._0_4_ = ~(uint)uVar16 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
    auVar32._4_4_ =
         ~(uint)(uVar16 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
    auVar32._8_4_ = ~(uint)uVar17 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
    auVar32._12_4_ =
         ~(uint)(uVar17 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
    auVar33 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar25);
    auVar25 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar25);
    auVar22._0_8_ = auVar25._0_8_ * dVar31;
    auVar22._8_8_ = auVar25._8_8_ * auVar30._8_8_;
    auVar34._0_8_ = uVar16 & (ulonglong)(auVar33._0_8_ * dVar27);
    uVar17 = uVar17 & (ulonglong)(auVar33._8_8_ * dVar5);
    auVar34._8_4_ = (uint)uVar17;
    auVar34._12_4_ = (uint)(uVar17 >> 0x20);
  }
  uVar38 = (uint)(-(ulonglong)bVar4 >> 0x20);
  uVar37 = (uint)-(ulonglong)bVar4;
  uVar36 = (uint)(-(ulonglong)bVar3 >> 0x20);
  uVar14 = (uint)-(ulonglong)bVar3;
  uVar6 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
  uVar10 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
  uVar8 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
  uVar13 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
  *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64 = auVar32 | auVar34;
  *(uint *)(param_1->Rotation).ZW.m128d_f64 = auVar22._0_4_ & uVar14 | ~uVar14 & uVar6;
  *(uint *)((longlong)(param_1->Rotation).ZW.m128d_f64 + 4) =
       auVar22._4_4_ & uVar36 | ~uVar36 & uVar10;
  *(uint *)((param_1->Rotation).ZW.m128d_f64 + 1) = auVar22._8_4_ & uVar37 | ~uVar37 & uVar8;
  *(uint *)((longlong)(param_1->Rotation).ZW.m128d_f64 + 0xc) =
       auVar22._12_4_ & uVar38 | ~uVar38 & uVar13;
  return;
}

// GetBoneAtomScale @ 1474515a0

void __cdecl
AEFPerTrackCompressionCodec::GetBoneAtomScale
          (TTransform<double> *param_1,FAnimSequenceDecompressionContext *param_2,int param_3)

{
  byte bVar1;
  ICompressedAnimData *pIVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uchar *puVar14;
  float fVar15;
  float fVar16;
  double dVar17;
  undefined1 auVar18 [16];
  float fVar19;
  int local_res10 [2];
  float local_res18;
  int local_res20 [2];
  TVector<float>_u_0 local_60;
  TVector<float>_u_0 local_50 [2];
  
  pIVar2 = param_2->CompressedAnimData;
  piVar5 = TArrayView<int,int>::operator[]
                     ((TArrayView<int,int> *)(pIVar2 + 2),param_3 * (int)pIVar2[3]._padding_);
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  iVar10 = *piVar5;
  if (iVar10 != -1) {
    fVar19 = 0.0;
    uVar12 = *(uint *)(*(longlong *)&pIVar2[3].CompressedNumberOfKeys + (longlong)iVar10);
    uVar11 = uVar12 & 0xffffff;
    uVar7 = (int)uVar12 >> 0x1c & 0xf;
    uVar12 = (int)uVar12 >> 0x18;
    local_60._0_8_ = ZEXT48(uVar7);
    puVar14 = (uchar *)(*(longlong *)&pIVar2[3].CompressedNumberOfKeys + 4 + (longlong)iVar10);
    bVar1 = "\x04\x04\x04\x04\x04\x04\x04\x04\x03\x01\x01\x02\x01\x02\x02\x03\x03\x01\x01\x02\x01\x02\x02\x03\x06\x02\x02\x04\x02\x04\x04\x06\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01"
            [uVar7 * 8 | uVar12 & 7];
    uVar8 = 1;
    if (uVar7 != 3) {
      uVar8 = (uint)bVar1;
    }
    iVar10 = 0;
    iVar13 = uVar8 * CompressedRotationStrides[local_60._0_8_];
    local_res18 = 0.0;
    local_res10[0] = 0;
    uVar8 = 0;
    if (uVar7 == 3) {
      uVar8 = (uint)bVar1;
    }
    local_res20[0] = 0;
    uVar8 = uVar8 << 2;
    iVar9 = 0;
    if (1 < uVar11) {
      dVar17 = ((double)(param_2->SamplingTime).SubFrame +
               (double)(param_2->SamplingTime).FrameNumber.Value) / (double)param_2->NumberOfFrames;
      if (__real_3ff0000000000000 <= dVar17) {
        dVar17 = __real_3ff0000000000000;
      }
      if ((uVar12 & 8) == 0) {
        fVar15 = (float)dVar17;
        local_res18 = fVar19;
        if (0.0 < fVar15) {
          iVar9 = uVar11 - 1;
          iVar10 = iVar9;
          if (__real_3f800000 <= fVar15) {
            local_res18 = 0.0;
          }
          else {
            fVar15 = (float)iVar9 * fVar15;
            iVar6 = (int)fVar15;
            fVar16 = fVar15;
            if ((iVar6 != -0x80000000) && ((float)iVar6 != fVar15)) {
              auVar18._4_4_ = fVar15;
              auVar18._0_4_ = fVar15;
              auVar18._8_8_ = 0;
              uVar7 = movmskps((uint)bVar1,auVar18);
              fVar16 = (float)(int)(iVar6 - (uVar7 & 1));
            }
            if ((int)fVar16 < iVar9) {
              iVar10 = (int)fVar16;
            }
            if (param_2->Interpolation != Step) {
              fVar19 = fVar15 - fVar16;
            }
            local_res18 = fVar19;
            if (iVar10 + 1 < iVar9) {
              iVar9 = iVar10 + 1;
            }
          }
        }
      }
      else {
        local_res18 = AnimEncoding::TimeToIndex
                                (param_2->Interpolation,pIVar2->CompressedNumberOfKeys,
                                 (uchar *)((ulonglong)
                                           (puVar14 +
                                           (ulonglong)uVar8 + (longlong)(int)(uVar11 * iVar13) + 3)
                                          & 0xfffffffffffffffc),(float)dVar17,uVar11,local_res10,
                                 local_res20);
        iVar9 = local_res20[0];
        iVar10 = local_res10[0];
      }
    }
    iVar6 = (int)local_60._0_8_;
    FAnimationCompression_PerTrackUtils::DecompressScale<1>
              (iVar6,uVar12 & 0xf,(TVector<float> *)&local_50[0]._s_0,puVar14,
               puVar14 + (longlong)(iVar10 * iVar13) + (ulonglong)uVar8);
    if (iVar10 != iVar9) {
      FAnimationCompression_PerTrackUtils::DecompressScale<1>
                (iVar6,uVar12 & 0xf,(TVector<float> *)&local_60._s_0,puVar14,
                 puVar14 + (longlong)(iVar9 * iVar13) + (ulonglong)uVar8);
      local_50[0]._0_4_ =
           (local_60._s_0.X - (float)local_50[0]._0_4_) * local_res18 + (float)local_50[0]._0_4_;
      local_50[0]._4_4_ =
           (local_60._s_0.Y - (float)local_50[0]._4_4_) * local_res18 + (float)local_50[0]._4_4_;
      local_50[0]._8_4_ =
           (local_60._s_0.Z - (float)local_50[0]._8_4_) * local_res18 + (float)local_50[0]._8_4_;
    }
    (param_1->Scale3D).XY.m128d_f64[0] = (double)(float)local_50[0]._0_4_;
    (param_1->Scale3D).XY.m128d_f64[1] = (double)(float)local_50[0]._4_4_;
    (param_1->Scale3D).ZW.m128d_f64[0] = (double)(float)local_50[0]._8_4_;
    (param_1->Scale3D).ZW.m128d_f64[1] = 0.0;
    return;
  }
  (param_1->Scale3D).XY.m128d_f64[0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_1->Scale3D).XY.m128d_f64[1] = (double)uVar3;
  (param_1->Scale3D).ZW.m128d_f64[0] = (double)uVar4;
  (param_1->Scale3D).ZW.m128d_f64[1] = 0.0;
  return;
}

// GetBoneAtomTranslation @ 147453410

void __cdecl
AEFPerTrackCompressionCodec::GetBoneAtomTranslation
          (TTransform<double> *param_1,FAnimSequenceDecompressionContext *param_2,int param_3)

{
  ICompressedAnimData *pIVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  uint extraout_EAX;
  uint extraout_EAX_00;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uchar *puVar13;
  ulonglong uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  undefined1 auVar19 [16];
  float fVar20;
  int local_res10 [2];
  float local_res18;
  int local_res20 [2];
  TVector<float>_u_0 local_b0;
  TVector<float>_u_0 local_a0;
  ulonglong local_90;
  FString local_88;
  FString local_78 [4];
  
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  pIVar1 = param_2->CompressedAnimData;
  iVar10 = *(int *)(pIVar1[1]._padding_ + (longlong)(param_3 * 2) * 4);
  if (iVar10 == -1) {
    (param_1->Translation).XY.m128d_f64[0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
    ;
    (param_1->Translation).XY.m128d_f64[1] = (double)uVar3;
    (param_1->Translation).ZW.m128d_f64[0] = (double)uVar4;
    (param_1->Translation).ZW.m128d_f64[1] = 0.0;
    return;
  }
  iVar9 = 0;
  uVar15 = *(uint *)(*(longlong *)&pIVar1[3].CompressedNumberOfKeys + (longlong)iVar10);
  uVar12 = (int)uVar15 >> 0x18;
  puVar13 = (uchar *)(*(longlong *)&pIVar1[3].CompressedNumberOfKeys + 4 + (longlong)iVar10);
  uVar8 = (int)uVar15 >> 0x1c & 0xf;
  local_90 = (ulonglong)uVar8;
  uVar6 = uVar12 & 7;
  uVar15 = uVar15 & 0xffffff;
  iVar10 = CompressedRotationStrides[local_90];
  if (uVar8 == 3) {
    uVar14 = (ulonglong)
             ((uint)"\x04\x04\x04\x04\x04\x04\x04\x04\x03\x01\x01\x02\x01\x02\x02\x03\x03\x01\x01\x02\x01\x02\x02\x03\x06\x02\x02\x04\x02\x04\x04\x06\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01"
                    [uVar8 * 8 | uVar6] * 4);
  }
  else {
    iVar10 = (uint)"\x04\x04\x04\x04\x04\x04\x04\x04\x03\x01\x01\x02\x01\x02\x02\x03\x03\x01\x01\x02\x01\x02\x02\x03\x06\x02\x02\x04\x02\x04\x04\x06\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01"
                   [uVar8 * 8 | uVar6] * iVar10;
    local_res18 = (float)param_3;
    if (uVar8 == 0) {
      ::FName::ToString(&param_2->AnimName,&local_88);
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("KeyFormat != ACF_None",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimEncoding_PerTrackCompression.cpp"
                         ,0x240,
                         L"[%s] contians invalid keyformat. NumKeys (%d), FormatFlags (%d), BytesPerKeys (%d), FixedBytes (%d)"
                        );
      uVar6 = (uint)CONCAT71(extraout_var,bVar5);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
        uVar6 = extraout_EAX;
      }
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      uVar14 = 0;
      if (uVar8 < 7) goto LAB_147453568;
      ::FName::ToString(&param_2->AnimName,local_78);
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("KeyFormat < ACF_MAX",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimEncoding_PerTrackCompression.cpp"
                         ,0x242,
                         L"[%s] contians invalid keyformat. NumKeys (%d), FormatFlags (%d), BytesPerKeys (%d), FixedBytes (%d), PosKeysOffset (%d), TrackIndex (%d)"
                        );
      uVar6 = (uint)CONCAT71(extraout_var_00,bVar5);
      if (local_78[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78[0].Data.AllocatorInstance.Data);
        uVar6 = extraout_EAX_00;
      }
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uVar14 = 0;
  }
LAB_147453568:
  local_res10[0] = 0;
  fVar20 = 0.0;
  local_res18 = 0.0;
  local_res20[0] = 0;
  iVar11 = 0;
  if (1 < uVar15) {
    dVar18 = ((double)(param_2->SamplingTime).SubFrame +
             (double)(param_2->SamplingTime).FrameNumber.Value) / (double)param_2->NumberOfFrames;
    if (__real_3ff0000000000000 <= dVar18) {
      dVar18 = __real_3ff0000000000000;
    }
    if ((uVar12 & 8) == 0) {
      fVar16 = (float)dVar18;
      iVar11 = 0;
      local_res18 = fVar20;
      if (0.0 < fVar16) {
        iVar11 = uVar15 - 1;
        iVar9 = iVar11;
        if (__real_3f800000 <= fVar16) {
          local_res18 = 0.0;
        }
        else {
          fVar16 = (float)iVar11 * fVar16;
          iVar7 = (int)fVar16;
          fVar17 = fVar16;
          if ((iVar7 != -0x80000000) && ((float)iVar7 != fVar16)) {
            auVar19._4_4_ = fVar16;
            auVar19._0_4_ = fVar16;
            auVar19._8_8_ = 0;
            uVar15 = movmskps(uVar6,auVar19);
            fVar17 = (float)(int)(iVar7 - (uVar15 & 1));
          }
          if ((int)fVar17 < iVar11) {
            iVar9 = (int)fVar17;
          }
          if (param_2->Interpolation != Step) {
            fVar20 = fVar16 - fVar17;
          }
          local_res18 = fVar20;
          if (iVar9 + 1 < iVar11) {
            iVar11 = iVar9 + 1;
          }
        }
      }
    }
    else {
      local_res18 = AnimEncoding::TimeToIndex
                              (param_2->Interpolation,pIVar1->CompressedNumberOfKeys,
                               (uchar *)((ulonglong)
                                         (puVar13 + uVar14 + (longlong)(int)(uVar15 * iVar10) + 3) &
                                        0xfffffffffffffffc),(float)dVar18,uVar15,local_res10,
                               local_res20);
      iVar9 = local_res10[0];
      iVar11 = local_res20[0];
    }
  }
  iVar7 = (int)local_90;
  FAnimationCompression_PerTrackUtils::DecompressTranslation<1>
            (iVar7,uVar12 & 0xf,(TVector<float> *)&local_b0._s_0,puVar13,
             puVar13 + (longlong)(iVar9 * iVar10) + uVar14);
  if (iVar9 != iVar11) {
    FAnimationCompression_PerTrackUtils::DecompressTranslation<1>
              (iVar7,uVar12 & 0xf,(TVector<float> *)&local_a0._s_0,puVar13,
               puVar13 + (longlong)(iVar11 * iVar10) + uVar14);
    local_b0._s_0.X = (local_a0._s_0.X - local_b0._s_0.X) * local_res18 + local_b0._s_0.X;
    local_b0._s_0.Y = (local_a0._s_0.Y - local_b0._s_0.Y) * local_res18 + local_b0._s_0.Y;
    local_b0._s_0.Z = (local_a0._s_0.Z - local_b0._s_0.Z) * local_res18 + local_b0._s_0.Z;
  }
  (param_1->Translation).XY.m128d_f64[0] = (double)local_b0._s_0.X;
  (param_1->Translation).XY.m128d_f64[1] = (double)local_b0._s_0.Y;
  (param_1->Translation).ZW.m128d_f64[0] = (double)local_b0._s_0.Z;
  (param_1->Translation).ZW.m128d_f64[1] = 0.0;
  return;
}

// GetPoseRotations @ 14745b0b0

void __thiscall
AEFPerTrackCompressionCodec::GetPoseRotations
          (AEFPerTrackCompressionCodec *this,TArrayView<UE::Math::TTransform<double>,int> *param_1,
          TArray<BoneTrackPair,TSizedDefaultAllocator<32>_> *param_2,
          FAnimSequenceDecompressionContext *param_3)

{
  int iVar1;
  int iVar2;
  ICompressedAnimData *pIVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  double dVar11;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 != 0) {
    if (bAnim_PerTrackCompression_ISPC_Enabled) {
      iVar2 = (param_3->SamplingRate).Denominator;
      pIVar3 = param_3->CompressedAnimData;
      dVar11 = ((double)(param_3->SamplingTime).SubFrame +
               (double)(param_3->SamplingTime).FrameNumber.Value) / (double)param_3->NumberOfFrames;
      if (__real_3ff0000000000000 <= dVar11) {
        dVar11 = __real_3ff0000000000000;
      }
      GetPerTrackCompressionPoseRotations
                (param_1->DataPtr,(param_2->AllocatorInstance).Data,pIVar3[1]._padding_,
                 *(undefined8 *)&pIVar3[3].CompressedNumberOfKeys,pIVar3->CompressedNumberOfKeys,
                 ((float)((longlong)iVar2 * (longlong)param_3->NumberOfFrames) + (float)iVar2 * 0.0)
                 / (float)(param_3->SamplingRate).Numerator,(float)dVar11,param_3->Interpolation,
                 iVar1);
      return;
    }
    uVar9 = 0;
    if (0 < iVar1) {
      lVar10 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar9 < param_2->ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (param_2->AllocatorInstance).Data;
        uVar7 = *(uint *)(pFVar4 + lVar10 * 8);
        iVar2 = *(int *)(pFVar4 + lVar10 * 8 + 4);
        uVar8 = 0;
        if ((int)uVar7 < param_1->ArrayNum) {
          uVar8 = ~uVar7 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        GetBoneAtomRotation(param_1->DataPtr + (int)uVar7,param_3,iVar2);
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 1;
      } while (lVar10 < iVar1);
    }
  }
  return;
}

// GetPoseScales @ 14745e440

void __thiscall
AEFPerTrackCompressionCodec::GetPoseScales
          (AEFPerTrackCompressionCodec *this,TArrayView<UE::Math::TTransform<double>,int> *param_1,
          TArray<BoneTrackPair,TSizedDefaultAllocator<32>_> *param_2,
          FAnimSequenceDecompressionContext *param_3)

{
  int iVar1;
  int iVar2;
  ICompressedAnimData *pIVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  double dVar11;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 != 0) {
    if (bAnim_PerTrackCompression_ISPC_Enabled) {
      iVar2 = (param_3->SamplingRate).Denominator;
      pIVar3 = param_3->CompressedAnimData;
      dVar11 = ((double)(param_3->SamplingTime).SubFrame +
               (double)(param_3->SamplingTime).FrameNumber.Value) / (double)param_3->NumberOfFrames;
      if (__real_3ff0000000000000 <= dVar11) {
        dVar11 = __real_3ff0000000000000;
      }
      GetPerTrackCompressionPoseScales
                (param_1->DataPtr,(param_2->AllocatorInstance).Data,pIVar3[2]._padding_,
                 (int)pIVar3[3]._padding_,*(undefined8 *)&pIVar3[3].CompressedNumberOfKeys,
                 pIVar3->CompressedNumberOfKeys,
                 ((float)((longlong)iVar2 * (longlong)param_3->NumberOfFrames) + (float)iVar2 * 0.0)
                 / (float)(param_3->SamplingRate).Numerator,(float)dVar11,param_3->Interpolation,
                 iVar1);
      return;
    }
    uVar9 = 0;
    if (0 < iVar1) {
      lVar10 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar9 < param_2->ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (param_2->AllocatorInstance).Data;
        uVar7 = *(uint *)(pFVar4 + lVar10 * 8);
        iVar2 = *(int *)(pFVar4 + lVar10 * 8 + 4);
        uVar8 = 0;
        if ((int)uVar7 < param_1->ArrayNum) {
          uVar8 = ~uVar7 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        GetBoneAtomScale(param_1->DataPtr + (int)uVar7,param_3,iVar2);
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 1;
      } while (lVar10 < iVar1);
    }
  }
  return;
}

// GetPoseTranslations @ 147461a30

void __thiscall
AEFPerTrackCompressionCodec::GetPoseTranslations
          (AEFPerTrackCompressionCodec *this,TArrayView<UE::Math::TTransform<double>,int> *param_1,
          TArray<BoneTrackPair,TSizedDefaultAllocator<32>_> *param_2,
          FAnimSequenceDecompressionContext *param_3)

{
  int iVar1;
  int iVar2;
  ICompressedAnimData *pIVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  double dVar11;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 != 0) {
    if (bAnim_PerTrackCompression_ISPC_Enabled) {
      iVar2 = (param_3->SamplingRate).Denominator;
      pIVar3 = param_3->CompressedAnimData;
      dVar11 = ((double)(param_3->SamplingTime).SubFrame +
               (double)(param_3->SamplingTime).FrameNumber.Value) / (double)param_3->NumberOfFrames;
      if (__real_3ff0000000000000 <= dVar11) {
        dVar11 = __real_3ff0000000000000;
      }
      GetPerTrackCompressionPoseTranslations
                (param_1->DataPtr,(param_2->AllocatorInstance).Data,pIVar3[1]._padding_,
                 *(undefined8 *)&pIVar3[3].CompressedNumberOfKeys,pIVar3->CompressedNumberOfKeys,
                 ((float)((longlong)iVar2 * (longlong)param_3->NumberOfFrames) + (float)iVar2 * 0.0)
                 / (float)(param_3->SamplingRate).Numerator,(float)dVar11,param_3->Interpolation,
                 iVar1);
      return;
    }
    uVar9 = 0;
    if (0 < iVar1) {
      lVar10 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar9 < param_2->ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (param_2->AllocatorInstance).Data;
        uVar7 = *(uint *)(pFVar4 + lVar10 * 8);
        iVar2 = *(int *)(pFVar4 + lVar10 * 8 + 4);
        uVar8 = 0;
        if ((int)uVar7 < param_1->ArrayNum) {
          uVar8 = ~uVar7 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        GetBoneAtomTranslation(param_1->DataPtr + (int)uVar7,param_3,iVar2);
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 1;
      } while (lVar10 < iVar1);
    }
  }
  return;
}

// PreservePadding @ 1474715c0

void __cdecl AEFPerTrackCompressionCodec::PreservePadding(uchar **param_1,FMemoryArchive *param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (int)*param_1;
  uVar2 = (iVar1 + 3U & 0xfffffffc) - iVar1;
  if ((param_2->_padding_ & 4) == 0) {
    (**(code **)(param_2->_padding_ + 0x188))(param_2,*param_1,(longlong)(int)uVar2);
    *param_1 = *param_1 + (int)uVar2;
    return;
  }
  local_res8[0] = 0x55;
  if (0 < (int)uVar2) {
    uVar3 = (ulonglong)uVar2;
    do {
      (**(code **)(param_2->_padding_ + 0x188))(param_2,local_res8,1);
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  *param_1 = *param_1 + (int)uVar2;
  return;
}

