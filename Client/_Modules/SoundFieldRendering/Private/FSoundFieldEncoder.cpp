// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SoundFieldRendering
// Functions: 3

// FSoundFieldEncoder @ 1464c81a0

FSoundFieldEncoder * __thiscall FSoundFieldEncoder::FSoundFieldEncoder(FSoundFieldEncoder *this)

{
  (this->VirtualSpeakerScratchBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VirtualSpeakerScratchBuffers).ArrayNum = 0;
  (this->VirtualSpeakerScratchBuffers).ArrayMax = 0;
  (this->SpeakerGains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpeakerGains).ArrayNum = 0;
  (this->SpeakerGains).ArrayMax = 0;
  (this->MixdownGainsMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MixdownGainsMap).ArrayNum = 0;
  (this->MixdownGainsMap).ArrayMax = 0;
  return this;
}

// EncodeAudioDirectlyFromOutputPositions @ 1464c9670

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FSoundFieldEncoder::EncodeAudioDirectlyFromOutputPositions
          (FSoundFieldEncoder *this,TArray<float,TAlignedHeapAllocator<16>_> *param_1,
          FSoundfieldSpeakerPositionalData *param_2,FAmbisonicsSoundfieldSettings *param_3,
          FAmbisonicsSoundfieldBuffer *param_4)

{
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar1;
  int *piVar2;
  int *piVar3;
  longlong lVar4;
  float fVar5;
  FScriptContainerElement *pFVar6;
  TArray<Audio::FChannelPositionInfo,TSizedDefaultAllocator<32>_> *pTVar7;
  code *pcVar8;
  double dVar9;
  bool bVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  int iVar20;
  longlong lVar21;
  int iVar22;
  uint uVar23;
  FScriptContainerElement *pFVar24;
  longlong lVar25;
  longlong lVar26;
  ulonglong uVar27;
  FScriptContainerElement *pFVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  float fVar34;
  uint uVar35;
  TVector<double>_u_0 local_f8;
  TVector<double>_u_0 local_d8 [6];
  
  iVar20 = param_2->NumChannels;
  lVar26 = (longlong)iVar20;
  iVar22 = param_3->Order + 1;
  uVar23 = iVar22 * iVar22;
  uVar11 = param_1->ArrayNum / iVar20;
  if (((iVar20 < 1) || ((int)uVar23 < 1)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumInputChannels > 0 && NumAmbiChannels > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SoundFieldRendering\\Private\\SoundFieldRendering.cpp"
                          ,0x2c6,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar1 = &this->SpeakerGains;
  piVar2 = &(this->SpeakerGains).ArrayMax;
  piVar3 = &(this->SpeakerGains).ArrayNum;
  *piVar3 = 0;
  if ((this->SpeakerGains).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  iVar22 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                     (4,4,uVar23 * iVar20,&pTVar1->AllocatorInstance,piVar3,piVar2);
  memset((pTVar1->AllocatorInstance).Data + (longlong)iVar22 * 4,0,
         (longlong)(int)(uVar23 * iVar20) << 2);
  piVar2 = &(param_4->AudioBuffer).ArrayMax;
  (param_4->AudioBuffer).ArrayNum = 0;
  if ((param_4->AudioBuffer).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,&(param_4->AudioBuffer).AllocatorInstance,0,piVar2);
  }
  iVar22 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                     (4,4,uVar23 * uVar11,&(param_4->AudioBuffer).AllocatorInstance,
                      &(param_4->AudioBuffer).ArrayNum,piVar2);
  memset((param_4->AudioBuffer).AllocatorInstance.Data + (longlong)iVar22 * 4,0,
         (longlong)(int)(uVar23 * uVar11) << 2);
  pFVar6 = (param_4->AudioBuffer).AllocatorInstance.Data;
  param_4->NumChannels = uVar23;
  dVar29 = UE::Math::TQuat<double>::Identity.Y;
  (param_4->Rotation).X = UE::Math::TQuat<double>::Identity.X;
  (param_4->Rotation).Y = dVar29;
  dVar29 = UE::Math::TQuat<double>::Identity.W;
  (param_4->Rotation).Z = UE::Math::TQuat<double>::Identity.Z;
  (param_4->Rotation).W = dVar29;
  pFVar28 = (param_1->AllocatorInstance).Data;
  pFVar18 = (pTVar1->AllocatorInstance).Data;
  fVar34 = SQRT(__real_3f800000 / (float)(int)uVar23);
  local_d8[0]._s_0.X = ___xmm_00000000000000003ff0000000000000;
  local_d8[0]._s_0.Y = _UNK_150689518;
  local_d8[0]._s_0.Z = 0.0;
  UE::Math::TQuat<double>::RotateVector
            (&param_2->Rotation,(TVector<double> *)&local_f8._s_0,
             (TVector<double> *)&local_d8[0]._s_0);
  auVar30._0_8_ = local_f8._s_0.X * local_f8._s_0.X;
  auVar30._8_8_ = 0;
  auVar31._8_8_ = 0;
  auVar31._0_8_ =
       local_f8._s_0.Y * local_f8._s_0.Y + auVar30._0_8_ + local_f8._s_0.Z * local_f8._s_0.Z;
  auVar31 = sqrtpd(auVar30,auVar31);
  dVar33 = local_f8._s_0.Z / auVar31._0_8_;
  dVar29 = __real_bff0000000000000;
  if ((__real_bff0000000000000 <= dVar33) && (dVar29 = dVar33, __real_3ff0000000000000 <= dVar33)) {
    dVar29 = __real_3ff0000000000000;
  }
  dVar29 = acos(dVar29);
  dVar33 = FGenericPlatformMath::Atan2(local_f8._s_0.Y,local_f8._s_0.X);
  if ((param_2->ChannelPositions ==
       (TArray<Audio::FChannelPositionInfo,TSizedDefaultAllocator<32>_> *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InputPositions.ChannelPositions",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SoundFieldRendering\\Private\\SoundFieldRendering.cpp"
                          ,0x2db,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  dVar9 = __real_bff921fb60000000;
  fVar5 = __real_3c8efa35;
  uVar19 = 0;
  if (0 < lVar26) {
    uVar35 = (uint)__xmm_80000000000000008000000000000000;
    uVar27 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
    lVar25 = 0;
    lVar21 = (longlong)(int)uVar23;
    do {
      pTVar7 = param_2->ChannelPositions;
      uVar15 = 0;
      if ((int)uVar19 < pTVar7->ArrayNum) {
        uVar15 = ~uVar19 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar12 = (pTVar7->AllocatorInstance).Data;
      if ((*(int *)(pFVar12 + lVar25) != 3) && ((iVar20 == 1 || (*(int *)(pFVar12 + lVar25) != 2))))
      {
        FSphericalHarmonicCalculator::ComputeSoundfieldChannelGains
                  (param_3->Order,
                   (float)(dVar9 - ((double)(*(float *)(pFVar12 + lVar25 + 4) * fVar5) + dVar33)),
                   (float)((double)CONCAT44((uint)((ulonglong)dVar29 >> 0x20) ^ (uint)uVar27,
                                            SUB84(dVar29,0) ^ uVar35) -
                          (double)(*(float *)(pFVar12 + lVar25 + 8) * fVar5)),(float *)pFVar18);
        lVar14 = 0;
        if ((0 < (int)uVar23) && (0xf < uVar23)) {
          uVar15 = uVar23 & 0x8000000f;
          if ((int)uVar15 < 0) {
            uVar15 = (uVar15 - 1 | 0xfffffff0) + 1;
          }
          pFVar12 = pFVar18 + 0x20;
          do {
            lVar14 = lVar14 + 0x10;
            *(float *)(pFVar12 + -0x20) = *(float *)(pFVar12 + -0x20) * fVar34;
            *(float *)(pFVar12 + -0x1c) = *(float *)(pFVar12 + -0x1c) * fVar34;
            *(float *)(pFVar12 + -0x18) = *(float *)(pFVar12 + -0x18) * fVar34;
            *(float *)(pFVar12 + -0x14) = *(float *)(pFVar12 + -0x14) * fVar34;
            *(float *)(pFVar12 + -0x10) = fVar34 * *(float *)(pFVar12 + -0x10);
            *(float *)(pFVar12 + -0xc) = fVar34 * *(float *)(pFVar12 + -0xc);
            *(float *)(pFVar12 + -8) = fVar34 * *(float *)(pFVar12 + -8);
            *(float *)(pFVar12 + -4) = fVar34 * *(float *)(pFVar12 + -4);
            *(float *)pFVar12 = *(float *)pFVar12 * fVar34;
            *(float *)(pFVar12 + 4) = *(float *)(pFVar12 + 4) * fVar34;
            *(float *)(pFVar12 + 8) = *(float *)(pFVar12 + 8) * fVar34;
            *(float *)(pFVar12 + 0xc) = *(float *)(pFVar12 + 0xc) * fVar34;
            auVar32._0_4_ = *(float *)(pFVar12 + 0x10) * fVar34;
            auVar32._4_4_ = *(float *)(pFVar12 + 0x14) * fVar34;
            auVar32._8_4_ = *(float *)(pFVar12 + 0x18) * fVar34;
            auVar32._12_4_ = *(float *)(pFVar12 + 0x1c) * fVar34;
            *(undefined1 (*) [16])(pFVar12 + 0x10) = auVar32;
            pFVar12 = pFVar12 + 0x40;
          } while (lVar14 < (int)(uVar23 - uVar15));
        }
        if (lVar14 < lVar21) {
          if (3 < lVar21 - lVar14) {
            lVar4 = lVar14 + 2;
            lVar16 = ((lVar21 - lVar14) - 4U >> 2) + 1;
            lVar14 = lVar14 + lVar16 * 4;
            pFVar12 = pFVar18 + lVar4 * 4;
            do {
              *(float *)(pFVar12 + -8) = fVar34 * *(float *)(pFVar12 + -8);
              *(float *)(pFVar12 + -4) = fVar34 * *(float *)(pFVar12 + -4);
              *(float *)pFVar12 = fVar34 * *(float *)pFVar12;
              *(float *)(pFVar12 + 4) = fVar34 * *(float *)(pFVar12 + 4);
              lVar16 = lVar16 + -1;
              pFVar12 = pFVar12 + 0x10;
            } while (lVar16 != 0);
            if (lVar21 <= lVar14) goto LAB_1464c9b25;
          }
          do {
            *(float *)(pFVar18 + lVar14 * 4) = fVar34 * *(float *)(pFVar18 + lVar14 * 4);
            lVar14 = lVar14 + 1;
          } while (lVar14 < lVar21);
        }
      }
LAB_1464c9b25:
      uVar19 = uVar19 + 1;
      pFVar18 = pFVar18 + lVar21 * 4;
      lVar25 = lVar25 + 0x10;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
  }
  pFVar18 = (pTVar1->AllocatorInstance).Data;
  if (0 < (int)uVar11) {
    lVar26 = (longlong)iVar20;
    iVar20 = 0;
    uVar27 = (ulonglong)uVar11;
    pFVar12 = pFVar6;
    do {
      iVar22 = 0;
      pFVar24 = pFVar12;
      if (0 < (int)uVar23) {
        do {
          *(undefined4 *)pFVar24 = 0;
          if (0 < lVar26) {
            fVar34 = 0.0;
            pFVar17 = pFVar28;
            lVar21 = lVar26;
            iVar13 = iVar22;
            do {
              lVar25 = (longlong)iVar13;
              iVar13 = iVar13 + uVar23;
              fVar5 = *(float *)pFVar17;
              pFVar17 = pFVar17 + 4;
              fVar34 = fVar34 + *(float *)(pFVar18 + lVar25 * 4) * fVar5;
              lVar21 = lVar21 + -1;
            } while (lVar21 != 0);
            *(float *)(pFVar6 + (longlong)(iVar20 + iVar22) * 4) = fVar34;
          }
          iVar22 = iVar22 + 1;
          pFVar24 = pFVar24 + 4;
        } while (iVar22 < (int)uVar23);
      }
      pFVar28 = pFVar28 + lVar26 * 4;
      iVar20 = iVar20 + uVar23;
      pFVar12 = pFVar12 + (longlong)(int)uVar23 * 4;
      uVar27 = uVar27 - 1;
    } while (uVar27 != 0);
  }
  return;
}

// EncodeLoop @ 1464c9c70

void __cdecl
FSoundFieldEncoder::EncodeLoop
          (int param_1,int param_2,float *param_3,int param_4,float *param_5,float *param_6)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  ulonglong uVar5;
  longlong lVar6;
  float *pfVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  float fVar11;
  
  if (0 < param_1) {
    lVar6 = (longlong)param_5 - (longlong)param_6;
    lVar10 = (longlong)param_4;
    uVar9 = (ulonglong)(uint)param_1;
    do {
      pfVar7 = param_6;
      uVar8 = (ulonglong)(uint)param_4;
      if (0 < param_4) {
        do {
          *pfVar7 = 0.0;
          if (0 < param_2) {
            fVar11 = 0.0;
            pfVar4 = (float *)(lVar6 + (longlong)pfVar7);
            pfVar3 = param_3;
            uVar5 = (ulonglong)(uint)param_2;
            do {
              fVar1 = *pfVar4;
              pfVar4 = pfVar4 + lVar10;
              fVar2 = *pfVar3;
              pfVar3 = pfVar3 + 1;
              fVar11 = fVar11 + fVar1 * fVar2;
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
            *pfVar7 = fVar11;
          }
          uVar8 = uVar8 - 1;
          pfVar7 = pfVar7 + 1;
        } while (uVar8 != 0);
      }
      param_3 = param_3 + param_2;
      param_6 = param_6 + lVar10;
      lVar6 = lVar6 + lVar10 * -4;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  return;
}

