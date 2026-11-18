// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SoundFieldRendering
// Functions: 12

// FSoundFieldDecoder @ 1464c7eb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FSoundFieldDecoder * __thiscall FSoundFieldDecoder::FSoundFieldDecoder(FSoundFieldDecoder *this)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  int iVar10;
  FSoundFieldDecoder *pFVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  ulonglong uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  
  uVar14 = 0;
  piVar1 = &(this->FoaVirtualSpeakerWordLockedGains).ArrayNum;
  piVar2 = &(this->FoaVirtualSpeakerWordLockedGains).ArrayMax;
  (this->VirtualSpeakerScratchBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VirtualSpeakerScratchBuffers).ArrayNum = 0;
  (this->VirtualSpeakerScratchBuffers).ArrayMax = 0;
  (this->FoaVirtualSpeakerWordLockedGains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetSpeakerGains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetSpeakerGains).ArrayNum = 0;
  (this->TargetSpeakerGains).ArrayMax = 0;
  (this->CurrentSpeakerGains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentSpeakerGains).ArrayNum = 0;
  (this->CurrentSpeakerGains).ArrayMax = 0;
  (this->MixdownGainsMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MixdownGainsMap).ArrayNum = 0;
  (this->MixdownGainsMap).ArrayMax = 0;
  *piVar1 = 0;
  *piVar2 = 0;
  Audio::FBufferLinearEase::FBufferLinearEase(&this->SpeakerGainLerper);
  fVar8 = _UNK_1512c321c;
  fVar7 = _UNK_1512c3218;
  fVar6 = _UNK_1512c3214;
  fVar5 = ___xmm_3ec1848f3ec1848f3ec1848f3ec1848f;
  (this->LastListenerRotationSphericalCoord).field0_0x0._s_0.X = -999.0;
  (this->LastListenerRotationSphericalCoord).field0_0x0._s_0.Y = -999.0;
  *piVar1 = 0;
  if (*piVar2 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,&(this->FoaVirtualSpeakerWordLockedGains).AllocatorInstance,0,piVar2);
  }
  iVar10 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                     (4,4,0x24,&(this->FoaVirtualSpeakerWordLockedGains).AllocatorInstance,piVar1,
                      piVar2);
  fVar4 = __real_3c8efa35;
  lVar12 = (longlong)iVar10;
  pFVar15 = (this->FoaVirtualSpeakerWordLockedGains).AllocatorInstance.Data;
  *(undefined8 *)(pFVar15 + lVar12 * 4) = 0;
  *(undefined8 *)(pFVar15 + lVar12 * 4 + 8) = 0;
  *(undefined8 *)(pFVar15 + lVar12 * 4 + 0x10) = 0;
  *(undefined8 *)(pFVar15 + lVar12 * 4 + 0x10 + 8) = 0;
  *(undefined8 *)(pFVar15 + lVar12 * 4 + 0x20) = 0;
  *(undefined8 *)(pFVar15 + lVar12 * 4 + 0x20 + 8) = 0;
  *(undefined8 *)(pFVar15 + lVar12 * 4 + 0x30) = 0;
  *(undefined8 *)(pFVar15 + lVar12 * 4 + 0x30 + 8) = 0;
  *(undefined8 *)(pFVar15 + lVar12 * 4 + 0x40) = 0;
  *(undefined8 *)(pFVar15 + lVar12 * 4 + 0x40 + 8) = 0;
  *(undefined8 *)(pFVar15 + lVar12 * 4 + 0x50) = 0;
  *(undefined8 *)(pFVar15 + lVar12 * 4 + 0x50 + 8) = 0;
  *(undefined8 *)(pFVar15 + lVar12 * 4 + 0x60) = 0;
  *(undefined8 *)(pFVar15 + lVar12 * 4 + 0x60 + 8) = 0;
  *(undefined8 *)(pFVar15 + lVar12 * 4 + 0x70) = 0;
  *(undefined8 *)(pFVar15 + lVar12 * 4 + 0x70 + 8) = 0;
  *(undefined8 *)(pFVar15 + lVar12 * 4 + 0x80) = 0;
  *(undefined8 *)(pFVar15 + lVar12 * 4 + 0x80 + 8) = 0;
  pFVar15 = (this->FoaVirtualSpeakerWordLockedGains).AllocatorInstance.Data;
  uVar16 = uVar14;
  do {
    if (VirtualSpeakerLocationsHorzOnly.ArrayNum <= (int)uVar14) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar3 = (code *)swi(3);
        pFVar11 = (FSoundFieldDecoder *)(*pcVar3)();
        return pFVar11;
      }
    }
    if (*(int *)(VirtualSpeakerLocationsHorzOnly.AllocatorInstance.Data + uVar16) != 3) {
      FSphericalHarmonicCalculator::ComputeSoundfieldChannelGains
                (1,*(float *)(VirtualSpeakerLocationsHorzOnly.AllocatorInstance.Data + uVar16 + 4) *
                   fVar4,*(float *)(VirtualSpeakerLocationsHorzOnly.AllocatorInstance.Data +
                                   uVar16 + 8) * fVar4,(float *)pFVar15);
      *(float *)pFVar15 = fVar5 * *(float *)pFVar15;
      *(float *)(pFVar15 + 4) = fVar6 * *(float *)(pFVar15 + 4);
      *(float *)(pFVar15 + 8) = fVar7 * *(float *)(pFVar15 + 8);
      *(float *)(pFVar15 + 0xc) = fVar8 * *(float *)(pFVar15 + 0xc);
    }
    uVar13 = (int)uVar14 + 1;
    uVar14 = (ulonglong)uVar13;
    uVar16 = uVar16 + 0x10;
    pFVar15 = pFVar15 + 0x10;
  } while ((int)uVar13 < 9);
  pFVar15 = (this->FoaVirtualSpeakerWordLockedGains).AllocatorInstance.Data;
  dVar21 = (double)*(float *)(pFVar15 + 0x20) * Sqrt2Over2Vec.XY.m128d_f64[0];
  dVar22 = (double)*(float *)(pFVar15 + 0x24) * Sqrt2Over2Vec.XY.m128d_f64[1];
  dVar17 = (double)*(float *)(pFVar15 + 0x28) * Sqrt2Over2Vec.ZW.m128d_f64[0];
  dVar19 = (double)*(float *)(pFVar15 + 0x2c) * Sqrt2Over2Vec.ZW.m128d_f64[1];
  *(float *)pFVar15 = (float)((double)*(float *)pFVar15 + dVar21);
  *(float *)(pFVar15 + 4) = (float)((double)*(float *)(pFVar15 + 4) + dVar22);
  *(float *)(pFVar15 + 8) = (float)((double)*(float *)(pFVar15 + 8) + dVar17);
  *(float *)(pFVar15 + 0xc) = (float)((double)*(float *)(pFVar15 + 0xc) + dVar19);
  dVar18 = (double)*(float *)(pFVar15 + 0x80) * Sqrt2Over2Vec.XY.m128d_f64[0];
  dVar20 = (double)*(float *)(pFVar15 + 0x84) * Sqrt2Over2Vec.XY.m128d_f64[1];
  *(float *)(pFVar15 + 0x10) = (float)((double)*(float *)(pFVar15 + 0x10) + dVar21);
  *(float *)(pFVar15 + 0x14) = (float)((double)*(float *)(pFVar15 + 0x14) + dVar22);
  *(float *)(pFVar15 + 0x18) = (float)((double)*(float *)(pFVar15 + 0x18) + dVar17);
  *(float *)(pFVar15 + 0x1c) = (float)((double)*(float *)(pFVar15 + 0x1c) + dVar19);
  dVar17 = (double)*(float *)(pFVar15 + 0x88) * Sqrt2Over2Vec.ZW.m128d_f64[0];
  dVar19 = (double)*(float *)(pFVar15 + 0x8c) * Sqrt2Over2Vec.ZW.m128d_f64[1];
  *(float *)(pFVar15 + 0x40) = (float)((double)*(float *)(pFVar15 + 0x40) + dVar18);
  *(float *)(pFVar15 + 0x44) = (float)((double)*(float *)(pFVar15 + 0x44) + dVar20);
  *(float *)(pFVar15 + 0x48) = (float)((double)*(float *)(pFVar15 + 0x48) + dVar17);
  *(float *)(pFVar15 + 0x4c) = (float)((double)*(float *)(pFVar15 + 0x4c) + dVar19);
  *(undefined8 *)(pFVar15 + 0x20) = 0;
  *(undefined8 *)(pFVar15 + 0x28) = 0;
  *(undefined8 *)(pFVar15 + 0x80) = 0;
  *(undefined8 *)(pFVar15 + 0x88) = 0;
  *(float *)(pFVar15 + 0x50) = (float)((double)*(float *)(pFVar15 + 0x50) + dVar18);
  *(float *)(pFVar15 + 0x54) = (float)((double)*(float *)(pFVar15 + 0x54) + dVar20);
  *(float *)(pFVar15 + 0x58) = (float)((double)*(float *)(pFVar15 + 0x58) + dVar17);
  *(float *)(pFVar15 + 0x5c) = (float)((double)*(float *)(pFVar15 + 0x5c) + dVar19);
  TArray<float,TAlignedHeapAllocator<16>_>::operator=
            (&this->TargetSpeakerGains,&this->FoaVirtualSpeakerWordLockedGains);
  return this;
}

// DecodeAudioDirectlyToDeviceOutputPositions @ 1464c85b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FSoundFieldDecoder::DecodeAudioDirectlyToDeviceOutputPositions
          (FSoundFieldDecoder *this,FAmbisonicsSoundfieldBuffer *param_1,
          FSoundfieldSpeakerPositionalData *param_2,
          TArray<float,TAlignedHeapAllocator<16>_> *param_3)

{
  TArray<float,TAlignedHeapAllocator<16>_> *this_00;
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  TArray<Audio::FChannelPositionInfo,TSizedDefaultAllocator<32>_> *pTVar8;
  code *pcVar9;
  float fVar10;
  bool bVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  longlong lVar19;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar20;
  longlong lVar21;
  longlong lVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined4 uVar27;
  double dVar28;
  undefined4 uVar29;
  float fVar30;
  int local_res10;
  TVector<double>_u_0 local_c8;
  TVector<double>_u_0 local_a8 [4];
  
  uVar3 = param_1->NumChannels;
  lVar19 = (longlong)(int)uVar3;
  if ((uVar3 == 0) || (iVar12 = (param_1->AudioBuffer).ArrayNum, iVar12 == 0)) {
    memset((param_3->AllocatorInstance).Data,0,(longlong)param_3->ArrayNum << 2);
    return;
  }
  iVar4 = param_2->NumChannels;
  iVar12 = iVar12 / (int)uVar3;
  local_res10 = 0;
  if (uVar3 == 4) {
    local_res10 = 1;
  }
  else if (uVar3 == 9) {
    local_res10 = 2;
  }
  else if (uVar3 == 0x10) {
    local_res10 = 3;
  }
  else if (uVar3 == 0x19) {
    local_res10 = 4;
  }
  else if (uVar3 == 0x24) {
    local_res10 = 5;
  }
  else {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("!\"Enclosing block should never be called\"",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SoundFieldRendering\\Private\\SoundFieldRendering.cpp"
                        ,0x7b,L"");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  if ((iVar4 < 1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumOutputChannels > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SoundFieldRendering\\Private\\SoundFieldRendering.cpp"
                          ,0x7e,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if ((param_3->ArrayNum != iVar4 * iVar12) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("OutputData.Num() == NumFrames * NumOutputChannels",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SoundFieldRendering\\Private\\SoundFieldRendering.cpp"
                          ,0x7f,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  this_00 = &this->TargetSpeakerGains;
  pTVar20 = &this->CurrentSpeakerGains;
  if (pTVar20 != this_00) {
    iVar5 = (this->TargetSpeakerGains).ArrayNum;
    piVar1 = &(this->CurrentSpeakerGains).ArrayMax;
    pFVar6 = (this_00->AllocatorInstance).Data;
    (this->CurrentSpeakerGains).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,iVar5,*piVar1,&pTVar20->AllocatorInstance,iVar5,piVar1);
      if (iVar5 != 0) {
        memcpy((pTVar20->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 2);
      }
    }
  }
  (this->TargetSpeakerGains).ArrayNum = 0;
  if ((this->TargetSpeakerGains).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,&this_00->AllocatorInstance,0,&(this->TargetSpeakerGains).ArrayMax);
  }
  TArray<float,TAlignedHeapAllocator<16>_>::AddZeroed(this_00,uVar3 * iVar4);
  pFVar6 = (param_3->AllocatorInstance).Data;
  pFVar17 = (this_00->AllocatorInstance).Data;
  pFVar7 = (param_1->AudioBuffer).AllocatorInstance.Data;
  fVar30 = SQRT(__real_3f800000 / (float)iVar4);
  local_a8[0]._s_0.X = ___xmm_00000000000000003ff0000000000000;
  local_a8[0]._s_0.Y = _UNK_150689518;
  local_a8[0]._s_0.Z = 0.0;
  UE::Math::TQuat<double>::RotateVector
            (&param_2->Rotation,(TVector<double> *)&local_c8._s_0,
             (TVector<double> *)&local_a8[0]._s_0);
  uVar27 = SUB84(__real_bff0000000000000,0);
  uVar29 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
  auVar24._0_8_ = local_c8._s_0.X * local_c8._s_0.X;
  auVar24._8_8_ = 0;
  auVar25._8_8_ = 0;
  auVar25._0_8_ =
       local_c8._s_0.Y * local_c8._s_0.Y + auVar24._0_8_ + local_c8._s_0.Z * local_c8._s_0.Z;
  auVar25 = sqrtpd(auVar24,auVar25);
  dVar28 = local_c8._s_0.Z / auVar25._0_8_;
  if (__real_bff0000000000000 <= dVar28) {
    if (__real_3ff0000000000000 <= dVar28) {
      dVar28 = __real_3ff0000000000000;
    }
    uVar27 = SUB84(dVar28,0);
    uVar29 = (undefined4)((ulonglong)dVar28 >> 0x20);
  }
  dVar23 = FGenericPlatformMath::Atan2(local_c8._s_0.Y,local_c8._s_0.X);
  dVar28 = acos((double)CONCAT44(uVar29,uVar27));
  dVar28 = __real_3ff921fb60000000 - dVar28;
  if ((param_2->ChannelPositions ==
       (TArray<Audio::FChannelPositionInfo,TSizedDefaultAllocator<32>_> *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("OutputPositions.ChannelPositions",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SoundFieldRendering\\Private\\SoundFieldRendering.cpp"
                          ,0x92,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  fVar10 = __real_3c8efa35;
  uVar18 = 0;
  lVar21 = (longlong)iVar4;
  if (0 < iVar4) {
    lVar22 = 0;
    do {
      pTVar8 = param_2->ChannelPositions;
      uVar15 = 0;
      if ((int)uVar18 < pTVar8->ArrayNum) {
        uVar15 = ~uVar18 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar13 = (pTVar8->AllocatorInstance).Data;
      if ((*(int *)(pFVar13 + lVar22) != 3) && (*(int *)(pFVar13 + lVar22) != 2)) {
        FSphericalHarmonicCalculator::ComputeSoundfieldChannelGains
                  (local_res10,(float)(dVar23 - (double)(*(float *)(pFVar13 + lVar22 + 4) * fVar10))
                   ,(float)(dVar28 - (double)(*(float *)(pFVar13 + lVar22 + 8) * fVar10)),
                   (float *)pFVar17);
        lVar14 = 0;
        if ((0 < (int)uVar3) && (0xf < uVar3)) {
          uVar15 = uVar3 & 0x8000000f;
          if ((int)uVar15 < 0) {
            uVar15 = (uVar15 - 1 | 0xfffffff0) + 1;
          }
          pFVar13 = pFVar17 + 0x20;
          do {
            lVar14 = lVar14 + 0x10;
            *(float *)(pFVar13 + -0x20) = *(float *)(pFVar13 + -0x20) * fVar30;
            *(float *)(pFVar13 + -0x1c) = *(float *)(pFVar13 + -0x1c) * fVar30;
            *(float *)(pFVar13 + -0x18) = *(float *)(pFVar13 + -0x18) * fVar30;
            *(float *)(pFVar13 + -0x14) = *(float *)(pFVar13 + -0x14) * fVar30;
            *(float *)(pFVar13 + -0x10) = fVar30 * *(float *)(pFVar13 + -0x10);
            *(float *)(pFVar13 + -0xc) = fVar30 * *(float *)(pFVar13 + -0xc);
            *(float *)(pFVar13 + -8) = fVar30 * *(float *)(pFVar13 + -8);
            *(float *)(pFVar13 + -4) = fVar30 * *(float *)(pFVar13 + -4);
            *(float *)pFVar13 = fVar30 * *(float *)pFVar13;
            *(float *)(pFVar13 + 4) = fVar30 * *(float *)(pFVar13 + 4);
            *(float *)(pFVar13 + 8) = fVar30 * *(float *)(pFVar13 + 8);
            *(float *)(pFVar13 + 0xc) = fVar30 * *(float *)(pFVar13 + 0xc);
            auVar26._0_4_ = *(float *)(pFVar13 + 0x10) * fVar30;
            auVar26._4_4_ = *(float *)(pFVar13 + 0x14) * fVar30;
            auVar26._8_4_ = *(float *)(pFVar13 + 0x18) * fVar30;
            auVar26._12_4_ = *(float *)(pFVar13 + 0x1c) * fVar30;
            *(undefined1 (*) [16])(pFVar13 + 0x10) = auVar26;
            pFVar13 = pFVar13 + 0x40;
          } while (lVar14 < (int)(uVar3 - uVar15));
        }
        if (lVar14 < lVar19) {
          if (3 < lVar19 - lVar14) {
            lVar2 = lVar14 + 2;
            lVar16 = ((lVar19 - lVar14) - 4U >> 2) + 1;
            lVar14 = lVar14 + lVar16 * 4;
            pFVar13 = pFVar17 + lVar2 * 4;
            do {
              *(float *)(pFVar13 + -8) = fVar30 * *(float *)(pFVar13 + -8);
              *(float *)(pFVar13 + -4) = fVar30 * *(float *)(pFVar13 + -4);
              *(float *)pFVar13 = fVar30 * *(float *)pFVar13;
              *(float *)(pFVar13 + 4) = fVar30 * *(float *)(pFVar13 + 4);
              lVar16 = lVar16 + -1;
              pFVar13 = pFVar13 + 0x10;
            } while (lVar16 != 0);
            if (lVar19 <= lVar14) goto LAB_1464c8a95;
          }
          do {
            *(float *)(pFVar17 + lVar14 * 4) = fVar30 * *(float *)(pFVar17 + lVar14 * 4);
            lVar14 = lVar14 + 1;
          } while (lVar14 < lVar19);
        }
      }
LAB_1464c8a95:
      pFVar17 = pFVar17 + lVar19 * 4;
      uVar18 = uVar18 + 1;
      lVar22 = lVar22 + 0x10;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
  }
  pFVar17 = (this_00->AllocatorInstance).Data;
  if (uVar3 == 4) {
    FirstOrderDecodeLoop(iVar12,iVar4,(float *)pFVar7,4,(float *)pFVar17,(float *)pFVar6);
  }
  else {
    uVar18 = uVar3 & 0x80000003;
    if ((int)uVar18 < 0) {
      uVar18 = (uVar18 - 1 | 0xfffffffc) + 1;
    }
    if (uVar18 == 0) {
      OddOrderDecodeLoop(iVar12,iVar4,(float *)pFVar7,uVar3,(float *)pFVar17,(float *)pFVar6);
    }
    else {
      EvenOrderDecodeLoop(iVar12,iVar4,(float *)pFVar7,uVar3,(float *)pFVar17,(float *)pFVar6);
    }
  }
  return;
}

// DecodeAudioToSevenOneAndDownmixToDevice @ 1464c8bb0

void __thiscall
FSoundFieldDecoder::DecodeAudioToSevenOneAndDownmixToDevice
          (FSoundFieldDecoder *this,FAmbisonicsSoundfieldBuffer *param_1,
          FSoundfieldSpeakerPositionalData *param_2,
          TArray<float,TAlignedHeapAllocator<16>_> *param_3)

{
  int iVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  code *pcVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  bool bVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  int iVar36;
  bool bVar37;
  FSoundFieldDecoder *pFVar38;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  uint uVar45;
  uint uVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  TVector<double>_u_0 local_c0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  
  iVar36 = VirtualSpeakerLocationsHorzOnly.ArrayNum;
  uVar45 = param_1->NumChannels;
  if ((uVar45 == 0) || (iVar6 = (param_1->AudioBuffer).ArrayNum, iVar6 == 0)) {
    memset((param_3->AllocatorInstance).Data,0,(longlong)param_3->ArrayNum << 2);
    return;
  }
  iVar7 = param_2->NumChannels;
  iVar6 = iVar6 / (int)uVar45;
  if (((0x24 < uVar45) || ((0x1002010210U >> ((longlong)(int)uVar45 & 0x3fU) & 1) == 0)) &&
     (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                         ("!\"Enclosing block should never be called\"",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SoundFieldRendering\\Private\\SoundFieldRendering.cpp"
                          ,0x145,L""), bVar37)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  iVar1 = iVar36 + -1;
  if ((iVar36 != 9) &&
     (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumVirtualChannels == 9",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SoundFieldRendering\\Private\\SoundFieldRendering.cpp"
                          ,0x14a,L""), bVar37)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  dVar16 = (param_1->Rotation).Z;
  dVar47 = (param_1->Rotation).W;
  dVar49 = (param_1->Rotation).X;
  dVar19 = (param_1->Rotation).Y;
  dVar20 = (param_2->Rotation).X;
  dVar21 = (param_2->Rotation).Y;
  dVar22 = (param_2->Rotation).Z;
  dVar23 = (param_2->Rotation).W;
  dVar17 = dVar20 * dVar47 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           dVar23 * dVar49 +
           dVar16 * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           dVar19 * dVar22 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar48 = dVar20 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
           dVar23 * dVar19 +
           dVar47 * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
           dVar49 * dVar22 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  local_a8._8_4_ = SUB84(dVar48,0);
  local_a8._0_8_ = dVar17;
  local_a8._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
  uVar45 = SUB84(dVar48 + dVar48,0) ^ (uint)__xmm_80000000000000008000000000000000;
  uVar46 = (uint)((ulonglong)(dVar48 + dVar48) >> 0x20) ^
           __xmm_80000000000000008000000000000000._4_4_;
  dVar15 = dVar20 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
           dVar23 * dVar16 +
           dVar49 * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
           dVar47 * dVar22 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar16 = dVar20 * dVar49 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
           dVar23 * dVar47 +
           dVar19 * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
           dVar16 * dVar22 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  local_98._8_4_ = SUB84(dVar16,0);
  local_98._0_8_ = dVar15;
  local_98._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
  dVar47 = dVar15 + dVar15;
  dVar48 = (dVar48 * (double)CONCAT44(uVar46,uVar45) - dVar15 * dVar47) + __real_3ff0000000000000;
  dVar49 = dVar16 * dVar47 - dVar17 * (double)CONCAT44(uVar46,uVar45);
  dVar15 = dVar17 * dVar47 + dVar16 * (double)CONCAT44(uVar46,uVar45);
  dVar15 = dVar15 / SQRT(dVar49 * dVar49 + dVar48 * dVar48 + dVar15 * dVar15);
  dVar16 = __real_bff0000000000000;
  if ((__real_bff0000000000000 <= dVar15) && (dVar16 = dVar15, __real_3ff0000000000000 <= dVar15)) {
    dVar16 = __real_3ff0000000000000;
  }
  dVar15 = FGenericPlatformMath::Atan2(dVar49,dVar48);
  dVar16 = acos(dVar16);
  piVar2 = &(this->VirtualSpeakerScratchBuffers).ArrayMax;
  dVar16 = __real_3ff921fb60000000 - dVar16;
  uVar42 = 0;
  (this->VirtualSpeakerScratchBuffers).ArrayNum = 0;
  if (*piVar2 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)this,0,piVar2);
  }
  TArray<float,TAlignedHeapAllocator<16>_>::AddZeroed(&this->VirtualSpeakerScratchBuffers,iVar6 * 8)
  ;
  dVar17 = dVar16 - (this->LastListenerRotationSphericalCoord).field0_0x0._s_0.Y;
  dVar48 = dVar15 - (this->LastListenerRotationSphericalCoord).field0_0x0._s_0.X;
  uVar45 = SUB84(dVar17,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar46 = (uint)((ulonglong)dVar17 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  bVar37 = (double)CONCAT44(uVar46,uVar45) != __real_3e45798ee2308c3a;
  bVar12 = __real_3e45798ee2308c3a <= (double)CONCAT44(uVar46,uVar45);
  uVar45 = SUB84(dVar48,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar46 = (uint)((ulonglong)dVar48 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  bVar11 = (double)CONCAT44(uVar46,uVar45) != __real_3e45798ee2308c3a;
  bVar13 = __real_3e45798ee2308c3a <= (double)CONCAT44(uVar46,uVar45);
  bVar18 = bVar12 && bVar37 || bVar13 && bVar11;
  if (bVar12 && bVar37 || bVar13 && bVar11) {
    TArray<float,TAlignedHeapAllocator<16>_>::operator=
              (&this->CurrentSpeakerGains,&this->TargetSpeakerGains);
    TArray<float,TAlignedHeapAllocator<16>_>::operator=
              (&this->TargetSpeakerGains,&this->FoaVirtualSpeakerWordLockedGains);
    UE::Math::TQuat<double>::Euler((TQuat<double> *)local_a8,(TVector<double> *)&local_c0._s_0);
    FoaRotationInPlace(&this->TargetSpeakerGains,(float)local_c0._s_0.X,(float)local_c0._s_0.Y,
                       (float)local_c0._s_0.Z);
    if ((this->CurrentSpeakerGains).ArrayNum != (this->TargetSpeakerGains).ArrayNum) {
      TArray<float,TAlignedHeapAllocator<16>_>::operator=
                (&this->CurrentSpeakerGains,&this->TargetSpeakerGains);
      bVar18 = false;
    }
  }
  pFVar8 = (param_1->AudioBuffer).AllocatorInstance.Data;
  pFVar9 = (&this->TargetSpeakerGains)[bVar18].AllocatorInstance.Data;
  pFVar38 = (FSoundFieldDecoder *)param_3;
  if (iVar7 != iVar1) {
    pFVar38 = this;
  }
  pFVar10 = (pFVar38->VirtualSpeakerScratchBuffers).AllocatorInstance.Data;
  uVar44 = (ulonglong)(iVar6 * 8);
  if (bVar18 == false) {
    if (3 < uVar44) {
      uVar43 = 2;
      do {
        pFVar3 = pFVar8 + (uVar42 >> 1 & 0x7ffffffffffffffc) * 4;
        pFVar5 = pFVar9 + (ulonglong)((uint)uVar42 & 7) * 0x10;
        pFVar4 = pFVar8 + (uVar43 - 1 >> 1 & 0x7ffffffffffffffc) * 4;
        fVar24 = *(float *)pFVar4;
        fVar25 = *(float *)(pFVar4 + 4);
        fVar26 = *(float *)(pFVar4 + 8);
        fVar27 = *(float *)(pFVar4 + 0xc);
        *(float *)(pFVar10 + uVar42 * 4) =
             *(float *)(pFVar5 + 0xc) * *(float *)(pFVar3 + 0xc) +
             *(float *)(pFVar5 + 4) * *(float *)(pFVar3 + 4) +
             *(float *)(pFVar5 + 8) * *(float *)(pFVar3 + 8) + *(float *)pFVar5 * *(float *)pFVar3;
        pFVar4 = pFVar9 + (ulonglong)((uint)(uVar43 - 1) & 7) * 0x10;
        pFVar3 = pFVar8 + (uVar43 >> 1 & 0x7ffffffffffffffc) * 4;
        fVar28 = *(float *)pFVar3;
        fVar29 = *(float *)(pFVar3 + 4);
        fVar30 = *(float *)(pFVar3 + 8);
        fVar31 = *(float *)(pFVar3 + 0xc);
        *(float *)(pFVar10 + uVar42 * 4 + 4) =
             *(float *)(pFVar4 + 0xc) * fVar27 + *(float *)(pFVar4 + 4) * fVar25 +
             *(float *)(pFVar4 + 8) * fVar26 + *(float *)pFVar4 * fVar24;
        pFVar4 = pFVar9 + (ulonglong)((uint)uVar43 & 7) * 0x10;
        pFVar3 = pFVar8 + (uVar43 + 1 >> 1 & 0x7ffffffffffffffc) * 4;
        fVar24 = *(float *)pFVar3;
        fVar25 = *(float *)(pFVar3 + 4);
        fVar26 = *(float *)(pFVar3 + 8);
        fVar27 = *(float *)(pFVar3 + 0xc);
        *(float *)(pFVar10 + uVar42 * 4 + 8) =
             *(float *)(pFVar4 + 0xc) * fVar31 + *(float *)(pFVar4 + 4) * fVar29 +
             *(float *)(pFVar4 + 8) * fVar30 + *(float *)pFVar4 * fVar28;
        pFVar3 = pFVar9 + (ulonglong)((uint)(uVar43 + 1) & 7) * 0x10;
        uVar43 = uVar43 + 4;
        *(float *)(pFVar10 + uVar42 * 4 + 0xc) =
             *(float *)(pFVar3 + 0xc) * fVar27 + *(float *)(pFVar3 + 4) * fVar25 +
             *(float *)(pFVar3 + 8) * fVar26 + *(float *)pFVar3 * fVar24;
        uVar42 = uVar42 + 4;
      } while (uVar42 < uVar44 - 3);
    }
    for (; uVar42 < uVar44; uVar42 = uVar42 + 1) {
      pFVar3 = pFVar8 + (uVar42 >> 1 & 0x7ffffffffffffffc) * 4;
      pFVar4 = pFVar9 + (ulonglong)((uint)uVar42 & 7) * 0x10;
      *(float *)(pFVar10 + uVar42 * 4) =
           *(float *)(pFVar4 + 0xc) * *(float *)(pFVar3 + 0xc) +
           *(float *)(pFVar4 + 4) * *(float *)(pFVar3 + 4) +
           *(float *)(pFVar4 + 8) * *(float *)(pFVar3 + 8) + *(float *)pFVar4 * *(float *)pFVar3;
    }
  }
  else {
    Audio::FBufferLinearEase::Init
              (&this->SpeakerGainLerper,&this->CurrentSpeakerGains,&this->TargetSpeakerGains,iVar6);
    pTVar39 = Audio::FBufferLinearEase::GetDeltaBuffer(&this->SpeakerGainLerper);
    pFVar3 = (pTVar39->AllocatorInstance).Data;
    if (3 < uVar44) {
      uVar43 = 2;
      do {
        pFVar4 = pFVar8 + (uVar42 >> 1 & 0x7ffffffffffffffc) * 4;
        uVar40 = (ulonglong)((uint)uVar42 & 7);
        pFVar5 = pFVar9 + uVar40 * 0x10;
        fVar24 = *(float *)pFVar5;
        fVar25 = *(float *)(pFVar5 + 4);
        fVar26 = *(float *)(pFVar5 + 8);
        fVar27 = *(float *)(pFVar5 + 0xc);
        pFVar5 = pFVar3 + uVar40 * 0x10;
        fVar28 = *(float *)pFVar5;
        fVar29 = *(float *)(pFVar5 + 4);
        fVar30 = *(float *)(pFVar5 + 8);
        fVar31 = *(float *)(pFVar5 + 0xc);
        *(float *)(pFVar10 + uVar42 * 4) =
             *(float *)(pFVar4 + 0xc) * fVar27 + *(float *)(pFVar4 + 4) * fVar25 +
             *(float *)(pFVar4 + 8) * fVar26 + *(float *)pFVar4 * fVar24;
        pFVar4 = pFVar9 + uVar40 * 0x10;
        *(float *)pFVar4 = fVar28 + fVar24;
        *(float *)(pFVar4 + 4) = fVar29 + fVar25;
        *(float *)(pFVar4 + 8) = fVar30 + fVar26;
        *(float *)(pFVar4 + 0xc) = fVar31 + fVar27;
        uVar40 = (ulonglong)((uint)(uVar43 - 1) & 7);
        pFVar4 = pFVar8 + (uVar43 - 1 >> 1 & 0x7ffffffffffffffc) * 4;
        pFVar5 = pFVar9 + uVar40 * 0x10;
        fVar24 = *(float *)pFVar5;
        fVar25 = *(float *)(pFVar5 + 4);
        fVar26 = *(float *)(pFVar5 + 8);
        fVar27 = *(float *)(pFVar5 + 0xc);
        pFVar5 = pFVar3 + uVar40 * 0x10;
        fVar28 = *(float *)pFVar5;
        fVar29 = *(float *)(pFVar5 + 4);
        fVar30 = *(float *)(pFVar5 + 8);
        fVar31 = *(float *)(pFVar5 + 0xc);
        pFVar5 = pFVar8 + (uVar43 >> 1 & 0x7ffffffffffffffc) * 4;
        fVar32 = *(float *)pFVar5;
        fVar33 = *(float *)(pFVar5 + 4);
        fVar34 = *(float *)(pFVar5 + 8);
        fVar35 = *(float *)(pFVar5 + 0xc);
        uVar41 = (ulonglong)((uint)uVar43 & 7);
        *(float *)(pFVar10 + uVar42 * 4 + 4) =
             *(float *)(pFVar4 + 0xc) * fVar27 + *(float *)(pFVar4 + 4) * fVar25 +
             *(float *)(pFVar4 + 8) * fVar26 + *(float *)pFVar4 * fVar24;
        pFVar4 = pFVar9 + uVar40 * 0x10;
        *(float *)pFVar4 = fVar28 + fVar24;
        *(float *)(pFVar4 + 4) = fVar29 + fVar25;
        *(float *)(pFVar4 + 8) = fVar30 + fVar26;
        *(float *)(pFVar4 + 0xc) = fVar31 + fVar27;
        pFVar4 = pFVar9 + uVar41 * 0x10;
        fVar24 = *(float *)pFVar4;
        fVar25 = *(float *)(pFVar4 + 4);
        fVar26 = *(float *)(pFVar4 + 8);
        fVar27 = *(float *)(pFVar4 + 0xc);
        pFVar4 = pFVar3 + uVar41 * 0x10;
        fVar28 = *(float *)pFVar4;
        fVar29 = *(float *)(pFVar4 + 4);
        fVar30 = *(float *)(pFVar4 + 8);
        fVar31 = *(float *)(pFVar4 + 0xc);
        uVar40 = uVar43 + 1;
        uVar43 = uVar43 + 4;
        *(float *)(pFVar10 + uVar42 * 4 + 8) =
             fVar35 * fVar27 + fVar33 * fVar25 + fVar34 * fVar26 + fVar32 * fVar24;
        pFVar4 = pFVar9 + uVar41 * 0x10;
        *(float *)pFVar4 = fVar28 + fVar24;
        *(float *)(pFVar4 + 4) = fVar29 + fVar25;
        *(float *)(pFVar4 + 8) = fVar30 + fVar26;
        *(float *)(pFVar4 + 0xc) = fVar31 + fVar27;
        uVar41 = (ulonglong)((uint)uVar40 & 7);
        pFVar4 = pFVar9 + uVar41 * 0x10;
        fVar24 = *(float *)pFVar4;
        fVar25 = *(float *)(pFVar4 + 4);
        fVar26 = *(float *)(pFVar4 + 8);
        fVar27 = *(float *)(pFVar4 + 0xc);
        pFVar4 = pFVar8 + (uVar40 >> 1 & 0x7ffffffffffffffc) * 4;
        pFVar5 = pFVar3 + uVar41 * 0x10;
        fVar28 = *(float *)pFVar5;
        fVar29 = *(float *)(pFVar5 + 4);
        fVar30 = *(float *)(pFVar5 + 8);
        fVar31 = *(float *)(pFVar5 + 0xc);
        *(float *)(pFVar10 + uVar42 * 4 + 0xc) =
             *(float *)(pFVar4 + 0xc) * fVar27 + *(float *)(pFVar4 + 4) * fVar25 +
             *(float *)(pFVar4 + 8) * fVar26 + *(float *)pFVar4 * fVar24;
        uVar42 = uVar42 + 4;
        pFVar4 = pFVar9 + uVar41 * 0x10;
        *(float *)pFVar4 = fVar28 + fVar24;
        *(float *)(pFVar4 + 4) = fVar29 + fVar25;
        *(float *)(pFVar4 + 8) = fVar30 + fVar26;
        *(float *)(pFVar4 + 0xc) = fVar31 + fVar27;
      } while (uVar42 < uVar44 - 3);
    }
    for (; uVar42 < uVar44; uVar42 = uVar42 + 1) {
      pFVar4 = pFVar8 + (uVar42 >> 1 & 0x7ffffffffffffffc) * 4;
      uVar43 = (ulonglong)((uint)uVar42 & 7);
      pFVar5 = pFVar9 + uVar43 * 0x10;
      fVar24 = *(float *)pFVar5;
      fVar25 = *(float *)(pFVar5 + 4);
      fVar26 = *(float *)(pFVar5 + 8);
      fVar27 = *(float *)(pFVar5 + 0xc);
      pFVar5 = pFVar3 + uVar43 * 0x10;
      fVar28 = *(float *)pFVar5;
      fVar29 = *(float *)(pFVar5 + 4);
      fVar30 = *(float *)(pFVar5 + 8);
      fVar31 = *(float *)(pFVar5 + 0xc);
      *(float *)(pFVar10 + uVar42 * 4) =
           *(float *)(pFVar4 + 0xc) * fVar27 + *(float *)(pFVar4 + 4) * fVar25 +
           *(float *)(pFVar4 + 8) * fVar26 + *(float *)pFVar4 * fVar24;
      pFVar4 = pFVar9 + uVar43 * 0x10;
      *(float *)pFVar4 = fVar28 + fVar24;
      *(float *)(pFVar4 + 4) = fVar29 + fVar25;
      *(float *)(pFVar4 + 8) = fVar30 + fVar26;
      *(float *)(pFVar4 + 0xc) = fVar31 + fVar27;
    }
  }
  pTVar39 = &this->MixdownGainsMap;
  if (iVar7 != iVar1) {
    Audio::FMixerDevice::Get2DChannelMap(false,8,iVar7,false,pTVar39);
    Audio::DownmixAndSumIntoBuffer
              (8,iVar7,&this->VirtualSpeakerScratchBuffers,param_3,
               (float *)(pTVar39->AllocatorInstance).Data);
    Audio::FMixerDevice::Get2DChannelMap(false,8,iVar7,false,pTVar39);
    Audio::DownmixBuffer
              (8,iVar7,&this->VirtualSpeakerScratchBuffers,param_3,
               (float *)(pTVar39->AllocatorInstance).Data);
  }
  (this->LastListenerRotationSphericalCoord).field0_0x0._s_0.X = dVar15;
  (this->LastListenerRotationSphericalCoord).field0_0x0._s_0.Y = dVar16;
  return;
}

// EvenOrderDecodeLoop @ 1464c9d70

void __cdecl
FSoundFieldDecoder::EvenOrderDecodeLoop
          (int param_1,int param_2,float *param_3,int param_4,float *param_5,float *param_6)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  uint uVar9;
  ulonglong uVar10;
  float *pfVar11;
  longlong lVar12;
  float *pfVar13;
  float *pfVar14;
  int iVar15;
  float *pfVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong local_48;
  
  if (0 < param_1) {
    uVar10 = (ulonglong)(uint)param_1;
    lVar19 = (longlong)param_4;
    pfVar11 = param_6 + 2;
    local_48 = 0;
    do {
      lVar17 = 0;
      pfVar14 = param_3;
      if (0 < lVar19) {
        do {
          fVar2 = *pfVar14;
          fVar3 = pfVar14[1];
          fVar4 = pfVar14[2];
          fVar5 = pfVar14[3];
          iVar15 = 0;
          lVar18 = 0;
          if (3 < param_2) {
            lVar12 = (longlong)(param_4 * 2);
            pfVar13 = param_5 + lVar12 + lVar17;
            uVar9 = (param_2 - 4U >> 2) + 1;
            uVar20 = (ulonglong)uVar9;
            iVar15 = uVar9 * 4;
            lVar18 = (ulonglong)uVar9 * 4;
            pfVar16 = pfVar11;
            do {
              pfVar1 = pfVar13 + -lVar12;
              pfVar16[-2] = pfVar16[-2] +
                            pfVar1[3] * fVar5 + pfVar1[1] * fVar3 +
                            pfVar1[2] * fVar4 + *pfVar1 * fVar2;
              pfVar1 = pfVar13 + (lVar19 - lVar12);
              pfVar16[-1] = pfVar16[-1] +
                            pfVar1[3] * fVar5 + pfVar1[1] * fVar3 +
                            pfVar1[2] * fVar4 + *pfVar1 * fVar2;
              *pfVar16 = *pfVar16 +
                         pfVar13[3] * fVar5 + pfVar13[1] * fVar3 +
                         pfVar13[2] * fVar4 + *pfVar13 * fVar2;
              pfVar1 = pfVar13 + (param_4 * 3 - lVar12);
              pfVar13 = pfVar13 + param_4 * 4;
              pfVar16[1] = pfVar16[1] +
                           pfVar1[3] * fVar5 + pfVar1[1] * fVar3 +
                           pfVar1[2] * fVar4 + *pfVar1 * fVar2;
              pfVar16 = pfVar16 + 4;
              uVar20 = uVar20 - 1;
            } while (uVar20 != 0);
          }
          if (iVar15 < param_2) {
            pfVar13 = param_6 + lVar18 + local_48;
            pfVar16 = param_5 + iVar15 * param_4 + lVar17;
            uVar20 = (ulonglong)(uint)(param_2 - iVar15);
            do {
              fVar6 = *pfVar16;
              pfVar1 = pfVar16 + 1;
              pfVar7 = pfVar16 + 2;
              pfVar8 = pfVar16 + 3;
              pfVar16 = pfVar16 + lVar19;
              *pfVar13 = *pfVar13 +
                         *pfVar8 * fVar5 + *pfVar1 * fVar3 + *pfVar7 * fVar4 + fVar6 * fVar2;
              pfVar13 = pfVar13 + 1;
              uVar20 = uVar20 - 1;
            } while (uVar20 != 0);
          }
          lVar17 = lVar17 + 4;
          pfVar14 = pfVar14 + 4;
        } while (lVar17 < lVar19);
      }
      iVar15 = 0;
      if (param_2 < 4) {
        if (0 < param_2) {
          lVar17 = 0;
          goto LAB_1464ca101;
        }
      }
      else {
        lVar18 = (longlong)(param_4 * 2);
        pfVar14 = param_5 + lVar18 + -1;
        uVar9 = (param_2 - 4U >> 2) + 1;
        uVar20 = (ulonglong)uVar9;
        iVar15 = uVar9 * 4;
        lVar17 = (ulonglong)uVar9 * 4;
        pfVar13 = pfVar11;
        do {
          pfVar13[-2] = pfVar14[-lVar18] * param_3[lVar19 + -1] + pfVar13[-2];
          pfVar13[-1] = pfVar14[lVar19 - lVar18] * param_3[lVar19 + -1] + pfVar13[-1];
          *pfVar13 = *pfVar14 * param_3[lVar19 + -1] + *pfVar13;
          pfVar16 = pfVar14 + (param_4 * 3 - lVar18);
          pfVar14 = pfVar14 + param_4 * 4;
          pfVar13[1] = *pfVar16 * param_3[lVar19 + -1] + pfVar13[1];
          pfVar13 = pfVar13 + 4;
          uVar20 = uVar20 - 1;
        } while (uVar20 != 0);
        if (iVar15 < param_2) {
LAB_1464ca101:
          pfVar14 = param_6 + lVar17 + local_48;
          pfVar13 = param_5 + (longlong)(iVar15 * param_4) + -1;
          uVar20 = (ulonglong)(uint)(param_2 - iVar15);
          do {
            fVar2 = *pfVar13;
            pfVar13 = pfVar13 + lVar19;
            *pfVar14 = param_3[lVar19 + -1] * fVar2 + *pfVar14;
            pfVar14 = pfVar14 + 1;
            uVar20 = uVar20 - 1;
          } while (uVar20 != 0);
        }
      }
      pfVar11 = pfVar11 + param_2;
      param_3 = param_3 + lVar19;
      local_48 = local_48 + param_2;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  return;
}

// EvenOrderToSevenOneLoop @ 1464ca1c0

void __cdecl
FSoundFieldDecoder::EvenOrderToSevenOneLoop
          (int param_1,int param_2,float *param_3,int param_4,float *param_5,float *param_6)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  uint uVar6;
  longlong lVar7;
  float *pfVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  float fVar16;
  
  lVar10 = (longlong)param_4;
  uVar15 = 0;
  lVar11 = (longlong)(param_1 * 8);
  if (0 < param_1 * 8) {
    do {
      iVar13 = ((int)(((int)uVar15 >> 0x1f & 7U) + uVar15) >> 3) * param_4;
      if (0 < param_4) {
        lVar9 = (longlong)(int)((uVar15 & 7) * param_4);
        pfVar8 = param_5 + lVar9;
        lVar7 = (lVar10 - 1U >> 2) + 1;
        do {
          pfVar1 = (float *)((longlong)pfVar8 +
                            ((iVar13 - lVar9) * 4 - (longlong)param_5) + (longlong)param_3);
          fVar16 = *pfVar8;
          pfVar3 = pfVar8 + 1;
          pfVar4 = pfVar8 + 2;
          pfVar5 = pfVar8 + 3;
          pfVar8 = pfVar8 + 4;
          *param_6 = pfVar1[3] * *pfVar5 + pfVar1[1] * *pfVar3 +
                     pfVar1[2] * *pfVar4 + *pfVar1 * fVar16;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      iVar12 = 0;
      lVar7 = (longlong)(iVar13 + param_4);
      if (3 < param_2) {
        fVar16 = *param_6;
        lVar9 = (longlong)(param_4 * 2);
        pfVar8 = param_5 + lVar9 + -1;
        uVar6 = (param_2 - 4U >> 2) + 1;
        uVar14 = (ulonglong)uVar6;
        iVar12 = uVar6 * 4;
        do {
          fVar16 = pfVar8[-lVar9] * param_3[lVar7 + -1] + fVar16;
          *param_6 = fVar16;
          fVar16 = pfVar8[lVar10 - lVar9] * param_3[lVar7 + -1] + fVar16;
          *param_6 = fVar16;
          fVar16 = param_3[lVar7 + -1] * *pfVar8 + fVar16;
          *param_6 = fVar16;
          pfVar1 = pfVar8 + (param_4 * 3 - lVar9);
          pfVar8 = pfVar8 + param_4 * 4;
          fVar16 = *pfVar1 * param_3[lVar7 + -1] + fVar16;
          *param_6 = fVar16;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      if (iVar12 < param_2) {
        fVar16 = *param_6;
        pfVar8 = param_5 + (longlong)(iVar12 * param_4) + -1;
        uVar14 = (ulonglong)(uint)(param_2 - iVar12);
        do {
          fVar2 = *pfVar8;
          pfVar8 = pfVar8 + lVar10;
          fVar16 = fVar16 + param_3[lVar7 + -1] * fVar2;
          *param_6 = fVar16;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      uVar15 = uVar15 + 1;
      param_6 = param_6 + 1;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return;
}

// FirstOrderDecodeLoop @ 1464ca400

void __cdecl
FSoundFieldDecoder::FirstOrderDecodeLoop
          (int param_1,int param_2,float *param_3,int param_4,float *param_5,float *param_6)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  uint uVar5;
  longlong lVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  if (0 < param_1) {
    iVar10 = 0;
    pfVar9 = param_6 + 2;
    uVar12 = (ulonglong)(uint)param_1;
    do {
      iVar11 = 0;
      if (3 < param_2) {
        lVar6 = (longlong)(param_4 * 2);
        pfVar7 = param_5 + lVar6;
        uVar5 = (param_2 - 4U >> 2) + 1;
        uVar13 = (ulonglong)uVar5;
        iVar11 = uVar5 * 4;
        pfVar8 = pfVar9;
        do {
          pfVar1 = pfVar7 + -lVar6;
          pfVar8[-2] = pfVar8[-2] +
                       pfVar1[3] * 0.0 + pfVar1[1] * 0.0 + pfVar1[2] * 0.0 + *pfVar1 * 0.0;
          pfVar1 = pfVar7 + (param_4 - lVar6);
          pfVar8[-1] = pfVar8[-1] +
                       pfVar1[3] * 0.0 + pfVar1[1] * 0.0 + pfVar1[2] * 0.0 + *pfVar1 * 0.0;
          *pfVar8 = *pfVar8 + pfVar7[3] * 0.0 + pfVar7[1] * 0.0 + pfVar7[2] * 0.0 + *pfVar7 * 0.0;
          pfVar1 = pfVar7 + (param_4 * 3 - lVar6);
          pfVar7 = pfVar7 + param_4 * 4;
          pfVar8[1] = pfVar8[1] +
                      pfVar1[3] * 0.0 + pfVar1[1] * 0.0 + pfVar1[2] * 0.0 + *pfVar1 * 0.0;
          pfVar8 = pfVar8 + 4;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      if (iVar11 < param_2) {
        pfVar8 = param_6 + (iVar10 + iVar11);
        pfVar7 = param_5 + iVar11 * param_4;
        uVar13 = (ulonglong)(uint)(param_2 - iVar11);
        do {
          fVar2 = *pfVar7;
          pfVar1 = pfVar7 + 1;
          pfVar3 = pfVar7 + 2;
          pfVar4 = pfVar7 + 3;
          pfVar7 = pfVar7 + param_4;
          *pfVar8 = *pfVar8 + *pfVar4 * 0.0 + *pfVar1 * 0.0 + *pfVar3 * 0.0 + fVar2 * 0.0;
          pfVar8 = pfVar8 + 1;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      iVar10 = iVar10 + param_2;
      pfVar9 = pfVar9 + param_2;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  return;
}

// FirstOrderToSevenOneLoop @ 1464ca6a0

void __cdecl
FSoundFieldDecoder::FirstOrderToSevenOneLoop
          (int param_1,int param_2,float *param_3,int param_4,float *param_5,float *param_6)

{
  ulonglong uVar1;
  float *pfVar2;
  float *pfVar3;
  ulonglong uVar4;
  float *pfVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar4 = 0;
  uVar7 = (ulonglong)(param_1 * 8);
  if (3 < uVar7) {
    pfVar5 = param_6 + 2;
    uVar6 = 2;
    do {
      pfVar2 = param_3 + (uVar4 >> 1 & 0x7ffffffffffffffc);
      pfVar3 = param_5 + (ulonglong)((uint)uVar4 & 7) * 4;
      pfVar5[-2] = pfVar5[-2] +
                   pfVar3[3] * pfVar2[3] + pfVar3[1] * pfVar2[1] +
                   pfVar3[2] * pfVar2[2] + *pfVar3 * *pfVar2;
      pfVar2 = param_3 + (uVar6 - 1 >> 1 & 0x7ffffffffffffffc);
      pfVar3 = param_5 + (ulonglong)((uint)(uVar6 - 1) & 7) * 4;
      pfVar5[-1] = pfVar5[-1] +
                   pfVar3[3] * pfVar2[3] + pfVar3[1] * pfVar2[1] +
                   pfVar3[2] * pfVar2[2] + *pfVar3 * *pfVar2;
      pfVar2 = param_3 + (uVar6 >> 1 & 0x7ffffffffffffffc);
      pfVar3 = param_5 + (ulonglong)((uint)uVar6 & 7) * 4;
      *pfVar5 = *pfVar5 + pfVar3[3] * pfVar2[3] + pfVar3[1] * pfVar2[1] +
                          pfVar3[2] * pfVar2[2] + *pfVar3 * *pfVar2;
      uVar1 = uVar6 + 1;
      uVar4 = uVar4 + 4;
      uVar6 = uVar6 + 4;
      pfVar2 = param_5 + (ulonglong)((uint)uVar1 & 7) * 4;
      pfVar3 = param_3 + (uVar1 >> 1 & 0x7ffffffffffffffc);
      pfVar5[1] = pfVar5[1] +
                  pfVar2[3] * pfVar3[3] + pfVar2[1] * pfVar3[1] +
                  pfVar2[2] * pfVar3[2] + *pfVar2 * *pfVar3;
      pfVar5 = pfVar5 + 4;
    } while (uVar4 < uVar7 - 3);
  }
  for (; uVar4 < uVar7; uVar4 = uVar4 + 1) {
    pfVar5 = param_3 + (uVar4 >> 1 & 0x7ffffffffffffffc);
    pfVar2 = param_5 + (ulonglong)((uint)uVar4 & 7) * 4;
    param_6[uVar4] =
         param_6[uVar4] +
         pfVar2[3] * pfVar5[3] + pfVar2[1] * pfVar5[1] + pfVar2[2] * pfVar5[2] + *pfVar2 * *pfVar5;
  }
  return;
}

// FoaRotationInPlace @ 1464ca910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FSoundFieldDecoder::FoaRotationInPlace
          (TArray<float,TAlignedHeapAllocator<16>_> *param_1,float param_2,float param_3,
          float param_4)

{
  int iVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_128 [32];
  TMatrix<double> local_108;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_128;
  iVar1 = param_1->ArrayNum;
  pFVar3 = (param_1->AllocatorInstance).Data;
  FSphericalHarmonicCalculator::GenerateFirstOrderRotationMatrixGivenDegrees
            (__real_43340000 - param_2,
             (float)((uint)param_3 ^ __xmm_80000000800000008000000080000000),param_4,&local_108);
  if (0 < iVar1) {
    pFVar3 = pFVar3 + 8;
    lVar2 = ((longlong)iVar1 - 1U >> 2) + 1;
    do {
      dVar4 = (double)*(float *)(pFVar3 + -8);
      dVar5 = (double)*(float *)(pFVar3 + -4);
      dVar6 = (double)*(float *)pFVar3;
      dVar7 = (double)*(float *)(pFVar3 + 4);
      *(float *)(pFVar3 + -8) =
           (float)(dVar7 * local_108.M[0][3] + dVar5 * local_108.M[0][1] +
                  dVar6 * local_108.M[0][2] + dVar4 * local_108.M[0][0]);
      *(float *)(pFVar3 + -4) =
           (float)(dVar7 * local_108.M[1][3] + dVar5 * local_108.M[1][1] +
                  dVar6 * local_108.M[1][2] + dVar4 * local_108.M[1][0]);
      *(float *)pFVar3 =
           (float)(dVar7 * local_108.M[2][3] + dVar5 * local_108.M[2][1] +
                  dVar6 * local_108.M[2][2] + dVar4 * local_108.M[2][0]);
      *(float *)(pFVar3 + 4) =
           (float)(dVar7 * local_108.M[3][3] + dVar5 * local_108.M[3][1] +
                  dVar6 * local_108.M[3][2] + dVar4 * local_108.M[3][0]);
      pFVar3 = pFVar3 + 0x10;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}

// GetDefaultChannelPositions @ 1464cab50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<Audio::FChannelPositionInfo,TSizedDefaultAllocator<32>_> * __cdecl
FSoundFieldDecoder::GetDefaultChannelPositions(int param_1)

{
  FMixerDevice *this;
  TArray<Audio::FChannelPositionInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  
  if (GEngine != (UEngine *)0x0) {
    this = (FMixerDevice *)UEngine::GetMainAudioDeviceRaw(GEngine);
    if (this != (FMixerDevice *)0x0) {
      pTVar1 = Audio::FMixerDevice::GetDefaultPositionMap(this,param_1);
      return pTVar1;
    }
  }
  return (TArray<Audio::FChannelPositionInfo,TSizedDefaultAllocator<32>_> *)0x0;
}

// OddOrderDecodeLoop @ 1464cac50

void __cdecl
FSoundFieldDecoder::OddOrderDecodeLoop
          (int param_1,int param_2,float *param_3,int param_4,float *param_5,float *param_6)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  float *pfVar19;
  ulonglong uVar20;
  longlong local_48;
  
  if (0 < param_1) {
    lVar18 = (longlong)param_4;
    uVar12 = (ulonglong)(uint)param_1;
    pfVar14 = param_6 + 2;
    local_48 = 0;
    do {
      lVar16 = 0;
      pfVar19 = param_3;
      if (0 < param_4) {
        do {
          fVar2 = *pfVar19;
          fVar3 = pfVar19[1];
          fVar4 = pfVar19[2];
          fVar5 = pfVar19[3];
          iVar17 = 0;
          lVar10 = 0;
          if (3 < param_2) {
            lVar11 = (longlong)(param_4 * 2);
            pfVar13 = param_5 + lVar11 + lVar16;
            uVar9 = (param_2 - 4U >> 2) + 1;
            uVar20 = (ulonglong)uVar9;
            iVar17 = uVar9 * 4;
            lVar10 = (ulonglong)uVar9 * 4;
            pfVar15 = pfVar14;
            do {
              pfVar1 = pfVar13 + -lVar11;
              pfVar15[-2] = pfVar15[-2] +
                            pfVar1[3] * fVar5 + pfVar1[1] * fVar3 +
                            pfVar1[2] * fVar4 + *pfVar1 * fVar2;
              pfVar1 = pfVar13 + (lVar18 - lVar11);
              pfVar15[-1] = pfVar15[-1] +
                            pfVar1[3] * fVar5 + pfVar1[1] * fVar3 +
                            pfVar1[2] * fVar4 + *pfVar1 * fVar2;
              *pfVar15 = *pfVar15 +
                         pfVar13[3] * fVar5 + pfVar13[1] * fVar3 +
                         pfVar13[2] * fVar4 + *pfVar13 * fVar2;
              pfVar1 = pfVar13 + (param_4 * 3 - lVar11);
              pfVar13 = pfVar13 + param_4 * 4;
              pfVar15[1] = pfVar15[1] +
                           pfVar1[3] * fVar5 + pfVar1[1] * fVar3 +
                           pfVar1[2] * fVar4 + *pfVar1 * fVar2;
              pfVar15 = pfVar15 + 4;
              uVar20 = uVar20 - 1;
            } while (uVar20 != 0);
          }
          if (iVar17 < param_2) {
            pfVar13 = param_6 + lVar10 + local_48;
            pfVar15 = param_5 + iVar17 * param_4 + lVar16;
            uVar20 = (ulonglong)(uint)(param_2 - iVar17);
            do {
              fVar6 = *pfVar15;
              pfVar1 = pfVar15 + 1;
              pfVar7 = pfVar15 + 2;
              pfVar8 = pfVar15 + 3;
              pfVar15 = pfVar15 + lVar18;
              *pfVar13 = *pfVar13 +
                         *pfVar8 * fVar5 + *pfVar1 * fVar3 + *pfVar7 * fVar4 + fVar6 * fVar2;
              pfVar13 = pfVar13 + 1;
              uVar20 = uVar20 - 1;
            } while (uVar20 != 0);
          }
          lVar16 = lVar16 + 4;
          pfVar19 = pfVar19 + 4;
        } while (lVar16 < lVar18);
      }
      local_48 = local_48 + param_2;
      pfVar14 = pfVar14 + param_2;
      param_3 = param_3 + lVar18;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  return;
}

// OddOrderToSevenOneLoop @ 1464caf50

void __cdecl
FSoundFieldDecoder::OddOrderToSevenOneLoop
          (int param_1,int param_2,float *param_3,int param_4,float *param_5,float *param_6)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  float *pfVar9;
  uint uVar10;
  
  uVar10 = 0;
  lVar8 = (longlong)(param_1 * 8);
  if (0 < param_1 * 8) {
    do {
      if (0 < param_4) {
        lVar7 = (longlong)(int)((uVar10 & 7) * param_4);
        pfVar9 = param_5 + lVar7;
        lVar6 = ((longlong)param_4 - 1U >> 2) + 1;
        do {
          pfVar1 = (float *)(((((int)(uVar10 + ((int)uVar10 >> 0x1f & 7U)) >> 3) * param_4 - lVar7)
                              * 4 - (longlong)param_5) + (longlong)param_3 + (longlong)pfVar9);
          fVar2 = *pfVar9;
          pfVar3 = pfVar9 + 1;
          pfVar4 = pfVar9 + 2;
          pfVar5 = pfVar9 + 3;
          pfVar9 = pfVar9 + 4;
          *param_6 = pfVar1[3] * *pfVar5 + pfVar1[1] * *pfVar3 +
                     pfVar1[2] * *pfVar4 + *pfVar1 * fVar2;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      uVar10 = uVar10 + 1;
      param_6 = param_6 + 1;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}

// RotateFirstOrderAmbisonicsBed @ 1464cb0a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FSoundFieldDecoder::RotateFirstOrderAmbisonicsBed
          (FAmbisonicsSoundfieldBuffer *param_1,FAmbisonicsSoundfieldBuffer *param_2,
          TQuat<double> *param_3,TQuat<double> *param_4)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  double dVar14;
  double dVar15;
  double dVar17;
  undefined1 auVar16 [16];
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auStack_2d8 [32];
  TVector<double>_u_0 local_2b8;
  undefined1 local_298 [16];
  double local_288;
  double dStack_280;
  undefined8 local_278;
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  double local_238;
  double dStack_230;
  undefined1 local_228 [16];
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  TMatrix<double> local_1d8;
  TMatrix<double> local_158;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_2d8;
  if ((param_1->NumChannels != 4) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InputData.NumChannels == 4",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SoundFieldRendering\\Private\\SoundFieldRendering.cpp"
                         ,0x1c2,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar7 = (param_2->AudioBuffer).AllocatorInstance.Data;
  uVar2 = (longlong)(param_1->AudioBuffer).ArrayNum / (longlong)param_1->NumChannels;
  pFVar10 = (param_1->AudioBuffer).AllocatorInstance.Data;
  uVar9 = uVar2 & 0xffffffff;
  UE::Math::TQuat<double>::Euler(param_4,(TVector<double> *)&local_2b8._s_0);
  UE::Math::TQuat<double>::Euler(param_3,(TVector<double> *)&local_288);
  uVar27 = SUB84(local_2b8._s_0.X - local_288,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar28 = (uint)((ulonglong)(local_2b8._s_0.X - local_288) >> 0x20) &
           __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar25 = SUB84(local_2b8._s_0.Y - dStack_280,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar26 = (uint)((ulonglong)(local_2b8._s_0.Y - dStack_280) >> 0x20) &
           __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar23 = SUB84(local_2b8._s_0.Z - (double)local_278,0) &
           (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar24 = (uint)((ulonglong)(local_2b8._s_0.Z - (double)local_278) >> 0x20) &
           __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  FSphericalHarmonicCalculator::GenerateFirstOrderRotationMatrixGivenDegrees
            ((float)local_288,(float)dStack_280,(float)(double)local_278,&local_158);
  local_298._0_8_ = local_158.M[3][2];
  local_298._8_8_ = local_158.M[3][3];
  iVar11 = (int)uVar2;
  if (__real_3e45798ee2308c3a <= (double)CONCAT44(uVar28,uVar27) &&
      (double)CONCAT44(uVar28,uVar27) != __real_3e45798ee2308c3a ||
      (__real_3e45798ee2308c3a <= (double)CONCAT44(uVar26,uVar25) &&
       (double)CONCAT44(uVar26,uVar25) != __real_3e45798ee2308c3a ||
      __real_3e45798ee2308c3a <= (double)CONCAT44(uVar24,uVar23) &&
      (double)CONCAT44(uVar24,uVar23) != __real_3e45798ee2308c3a)) {
    FSphericalHarmonicCalculator::GenerateFirstOrderRotationMatrixGivenDegrees
              ((float)local_2b8._s_0.X,(float)local_2b8._s_0.Y,(float)local_2b8._s_0.Z,&local_1d8);
    local_248._8_8_ = local_1d8.M[3][1];
    local_248._0_8_ = local_1d8.M[3][0];
    local_268._8_8_ = local_1d8.M[2][1];
    local_268._0_8_ = local_1d8.M[2][0];
    auVar38._0_8_ = local_158.M[3][0] - local_1d8.M[3][0];
    auVar38._8_8_ = local_158.M[3][1] - local_1d8.M[3][1];
    auVar29._0_8_ = local_158.M[0][0] - local_1d8.M[0][0];
    auVar29._8_8_ = local_158.M[0][1] - local_1d8.M[0][1];
    dVar4 = (double)iVar11;
    uVar12 = SUB84((double)iVar11,0);
    uVar13 = (undefined4)((ulonglong)(double)iVar11 >> 0x20);
    auVar16._0_8_ = (double)iVar11;
    auVar16._8_8_ = (double)iVar11;
    local_258._8_8_ = local_1d8.M[2][3];
    local_258._0_8_ = local_1d8.M[2][2];
    auVar32._0_8_ = local_158.M[1][0] - local_1d8.M[1][0];
    auVar32._8_8_ = local_158.M[1][1] - local_1d8.M[1][1];
    auVar35._0_8_ = local_158.M[2][0] - local_1d8.M[2][0];
    auVar35._8_8_ = local_158.M[2][1] - local_1d8.M[2][1];
    auVar22._8_4_ = uVar12;
    auVar22._0_8_ = dVar4;
    auVar22._12_4_ = uVar13;
    auVar29 = divpd(auVar29,auVar22);
    auVar31._8_4_ = uVar12;
    auVar31._0_8_ = dVar4;
    auVar31._12_4_ = uVar13;
    auVar32 = divpd(auVar32,auVar31);
    auVar34._8_4_ = uVar12;
    auVar34._0_8_ = dVar4;
    auVar34._12_4_ = uVar13;
    auVar35 = divpd(auVar35,auVar34);
    auVar37._8_4_ = uVar12;
    auVar37._0_8_ = dVar4;
    auVar37._12_4_ = uVar13;
    auVar38 = divpd(auVar38,auVar37);
    local_238 = local_1d8.M[3][2];
    dStack_230 = local_1d8.M[3][3];
    auVar21._0_8_ = (double)local_298._0_8_ - local_1d8.M[3][2];
    auVar21._8_8_ = (double)local_298._8_8_ - local_1d8.M[3][3];
    auVar30._0_8_ = local_158.M[0][2] - local_1d8.M[0][2];
    auVar30._8_8_ = local_158.M[0][3] - local_1d8.M[0][3];
    auVar33._0_8_ = local_158.M[1][2] - local_1d8.M[1][2];
    auVar33._8_8_ = local_158.M[1][3] - local_1d8.M[1][3];
    auVar36._0_8_ = local_158.M[2][2] - local_1d8.M[2][2];
    auVar36._8_8_ = local_158.M[2][3] - local_1d8.M[2][3];
    auVar22 = divpd(auVar21,auVar16);
    auVar31 = divpd(auVar30,auVar16);
    auVar34 = divpd(auVar33,auVar16);
    auVar37 = divpd(auVar36,auVar16);
    if (0 < iVar11) {
      local_1e8._8_8_ = local_1d8.M[2][3];
      local_1e8._0_8_ = local_1d8.M[2][2];
      pFVar8 = pFVar7 + 8;
      local_298._8_8_ = local_1d8.M[3][1];
      local_298._0_8_ = local_1d8.M[3][0];
      local_228._8_8_ = local_1d8.M[0][3];
      local_228._0_8_ = local_1d8.M[0][2];
      local_218._8_8_ = local_1d8.M[0][1];
      local_218._0_8_ = local_1d8.M[0][0];
      local_208._8_8_ = local_1d8.M[1][3];
      local_208._0_8_ = local_1d8.M[1][2];
      local_1f8._8_8_ = local_1d8.M[1][1];
      local_1f8._0_8_ = local_1d8.M[1][0];
      dStack_280 = local_1d8.M[2][1];
      local_288 = local_1d8.M[2][0];
      do {
        pFVar1 = pFVar10 + (-8 - (longlong)pFVar7) + (longlong)pFVar8;
        dVar15 = (double)*(float *)pFVar1;
        dVar18 = (double)*(float *)(pFVar1 + 4);
        dVar4 = (double)*(float *)(pFVar1 + 8);
        dVar14 = (double)*(float *)(pFVar1 + 0xc);
        dVar5 = local_1d8.M[0][0] * dVar15;
        dVar17 = local_1d8.M[0][1] * dVar18;
        local_1d8.M[0][0] = (double)local_218._0_8_ + auVar29._0_8_;
        local_1d8.M[0][1] = (double)local_218._8_8_ + auVar29._8_8_;
        *(float *)(pFVar8 + -8) =
             (float)(dVar14 * local_1d8.M[0][3] + dVar17 + dVar4 * local_1d8.M[0][2] + dVar5);
        local_1d8.M[0][2] = (double)local_228._0_8_ + auVar31._0_8_;
        local_1d8.M[0][3] = (double)local_228._8_8_ + auVar31._8_8_;
        *(float *)(pFVar8 + -4) =
             (float)(local_1d8.M[1][3] * dVar14 + local_1d8.M[1][1] * dVar18 +
                    local_1d8.M[1][2] * dVar4 + local_1d8.M[1][0] * dVar15);
        local_288 = local_288 + auVar35._0_8_;
        dStack_280 = dStack_280 + auVar35._8_8_;
        uVar12 = SUB84(dStack_280,0);
        uVar13 = (undefined4)((ulonglong)dStack_280 >> 0x20);
        *(float *)pFVar8 =
             (float)(dVar14 * (double)local_258._8_8_ + dVar18 * (double)local_268._8_8_ +
                    dVar4 * (double)local_258._0_8_ + dVar15 * (double)local_268._0_8_);
        dVar5 = (double)local_298._0_8_ + auVar38._0_8_;
        dVar17 = (double)local_298._8_8_ + auVar38._8_8_;
        uVar19 = SUB84(dVar17,0);
        uVar20 = (undefined4)((ulonglong)dVar17 >> 0x20);
        *(float *)(pFVar8 + 4) =
             (float)(dVar14 * dStack_230 + dVar18 * (double)local_248._8_8_ +
                    dVar4 * local_238 + dVar15 * (double)local_248._0_8_);
        pFVar8 = pFVar8 + 0x10;
        local_268._8_4_ = uVar12;
        local_268._0_8_ = local_288;
        local_268._12_4_ = uVar13;
        local_248._8_4_ = uVar19;
        local_248._0_8_ = dVar5;
        local_248._12_4_ = uVar20;
        local_228._8_4_ = SUB84(local_1d8.M[0][3],0);
        local_228._0_8_ = local_1d8.M[0][2];
        local_228._12_4_ = (int)((ulonglong)local_1d8.M[0][3] >> 0x20);
        local_218._8_4_ = SUB84(local_1d8.M[0][1],0);
        local_218._0_8_ = local_1d8.M[0][0];
        local_218._12_4_ = (int)((ulonglong)local_1d8.M[0][1] >> 0x20);
        unique0x10000736 = uVar12;
        unique0x1000073a = uVar13;
        local_298._8_4_ = uVar19;
        local_298._0_8_ = dVar5;
        local_298._12_4_ = uVar20;
        dVar4 = (double)local_1e8._0_8_ + auVar37._0_8_;
        dVar5 = (double)local_1e8._8_8_ + auVar37._8_8_;
        uVar12 = SUB84(dVar5,0);
        uVar13 = (undefined4)((ulonglong)dVar5 >> 0x20);
        local_238 = local_238 + auVar22._0_8_;
        dStack_230 = dStack_230 + auVar22._8_8_;
        local_258._8_4_ = uVar12;
        local_258._0_8_ = dVar4;
        local_258._12_4_ = uVar13;
        local_1e8._8_4_ = uVar12;
        local_1e8._0_8_ = dVar4;
        local_1e8._12_4_ = uVar13;
        local_1d8.M[1][0] = (double)local_1f8._0_8_ + auVar32._0_8_;
        local_1d8.M[1][1] = (double)local_1f8._8_8_ + auVar32._8_8_;
        local_1d8.M[1][2] = (double)local_208._0_8_ + auVar34._0_8_;
        local_1d8.M[1][3] = (double)local_208._8_8_ + auVar34._8_8_;
        local_1f8._8_4_ = SUB84(local_1d8.M[1][1],0);
        local_1f8._0_8_ = local_1d8.M[1][0];
        local_1f8._12_4_ = (int)((ulonglong)local_1d8.M[1][1] >> 0x20);
        local_208._8_4_ = SUB84(local_1d8.M[1][3],0);
        local_208._0_8_ = local_1d8.M[1][2];
        local_208._12_4_ = (int)((ulonglong)local_1d8.M[1][3] >> 0x20);
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  else if (0 < iVar11) {
    pFVar7 = pFVar7 + 8;
    do {
      pFVar8 = pFVar10 + 8;
      pFVar1 = pFVar10 + 0xc;
      dVar4 = (double)*(float *)pFVar10;
      dVar5 = (double)*(float *)(pFVar10 + 4);
      pFVar10 = pFVar10 + 0x10;
      dVar14 = (double)*(float *)pFVar8;
      dVar17 = (double)*(float *)pFVar1;
      *(float *)(pFVar7 + -8) =
           (float)(local_158.M[0][3] * dVar17 + local_158.M[0][1] * dVar5 +
                  local_158.M[0][2] * dVar14 + local_158.M[0][0] * dVar4);
      *(float *)(pFVar7 + -4) =
           (float)(local_158.M[1][3] * dVar17 + local_158.M[1][1] * dVar5 +
                  local_158.M[1][2] * dVar14 + local_158.M[1][0] * dVar4);
      *(float *)pFVar7 =
           (float)(local_158.M[2][3] * dVar17 + local_158.M[2][1] * dVar5 +
                  local_158.M[2][2] * dVar14 + local_158.M[2][0] * dVar4);
      *(float *)(pFVar7 + 4) =
           (float)(local_158.M[3][3] * dVar17 + local_158.M[3][1] * dVar5 +
                  local_158.M[3][2] * dVar14 + local_158.M[3][0] * dVar4);
      pFVar7 = pFVar7 + 0x10;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  return;
}

