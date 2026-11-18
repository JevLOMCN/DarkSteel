// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SoundFields
// Functions: 1

// MixTogether @ 14f09d5b0

void __thiscall
FAmbisonicsMixer::MixTogether
          (FAmbisonicsMixer *this,FSoundfieldMixerInputData *param_1,ISoundfieldAudioPacket *param_2
          )

{
  int *piVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  FAmbisonicsSoundfieldBuffer *pFVar5;
  ISoundfieldAudioPacket IVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  undefined4 uStack_ac;
  undefined4 uStack_9c;
  TArrayView<float,int> local_98;
  TArrayView<float_const_,int> local_88;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  pFVar5 = (FAmbisonicsSoundfieldBuffer *)param_1->InputPacket;
  if (pFVar5 == (FAmbisonicsSoundfieldBuffer *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("&InRef != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Public\\ISoundfieldFormat.h"
                        ,0x5c,L"");
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  if (param_2 == (ISoundfieldAudioPacket *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("&InRef != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Public\\ISoundfieldFormat.h"
                        ,0x5c,L"");
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  if (*(int *)(param_2 + 3) == 0) {
    *(int *)(param_2 + 3) = pFVar5->NumChannels;
    iVar3 = *(int *)&param_2[2].field_0x4;
    *(undefined4 *)(param_2 + 2) = 0;
    if (iVar3 < 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,0,(ForAnyElementType *)(param_2 + 1),0,(int *)&param_2[2].field_0x4);
    }
    TArray<float,TAlignedHeapAllocator<16>_>::AddZeroed
              ((TArray<float,TAlignedHeapAllocator<16>_> *)(param_2 + 1),
               (pFVar5->AudioBuffer).ArrayNum);
  }
  if ((this->RotatedAudio).NumChannels == 0) {
    piVar1 = &(this->RotatedAudio).AudioBuffer.ArrayMax;
    (this->RotatedAudio).NumChannels = pFVar5->NumChannels;
    iVar3 = *piVar1;
    (this->RotatedAudio).AudioBuffer.ArrayNum = 0;
    if (iVar3 < 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,0,&(this->RotatedAudio).AudioBuffer.AllocatorInstance,0,piVar1);
    }
    TArray<float,TAlignedHeapAllocator<16>_>::AddZeroed
              (&(this->RotatedAudio).AudioBuffer,(pFVar5->AudioBuffer).ArrayNum);
  }
  if (*(int *)(param_2 + 3) != pFVar5->NumChannels) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("OutAudio.NumChannels == InAudio.NumChannels",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\SoundFields\\Source\\SoundFields\\Private\\SoundFields.cpp"
                        ,0xd1,L"");
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  if ((pFVar5->AudioBuffer).ArrayNum != *(int *)(param_2 + 2)) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("InAudio.AudioBuffer.Num() == OutAudio.AudioBuffer.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\SoundFields\\Source\\SoundFields\\Private\\SoundFields.cpp"
                        ,0xd2,L"");
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  dVar10 = (pFVar5->Rotation).Y * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar9 = (pFVar5->Rotation).W * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  local_58._8_4_ = SUB84(dVar10,0);
  local_58._0_8_ =
       (pFVar5->Rotation).X * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  local_58._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  local_48._8_4_ = SUB84(dVar9,0);
  local_48._0_8_ =
       (pFVar5->Rotation).Z * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  local_48._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  dVar10 = (pFVar5->PreviousRotation).Y *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar9 = (pFVar5->PreviousRotation).W *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  local_78._8_4_ = SUB84(dVar10,0);
  local_78._0_8_ =
       (pFVar5->PreviousRotation).X * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  local_78._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  local_68._8_4_ = SUB84(dVar9,0);
  local_68._0_8_ =
       (pFVar5->PreviousRotation).Z * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  local_68._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  FSoundFieldDecoder::RotateFirstOrderAmbisonicsBed
            (pFVar5,&this->RotatedAudio,(TQuat<double> *)local_58,(TQuat<double> *)local_78);
  IVar6 = param_2[1];
  iVar3 = *(int *)(param_2 + 2);
  fVar2 = param_1->SendLevel;
  if (iVar3 < 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pFVar7 = (this->RotatedAudio).AudioBuffer.AllocatorInstance.Data;
  iVar4 = (this->RotatedAudio).AudioBuffer.ArrayNum;
  if (iVar4 < 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  local_98._12_4_ = uStack_ac;
  local_98.ArrayNum = iVar3;
  local_88._12_4_ = uStack_9c;
  local_88.ArrayNum = iVar4;
  local_98.DataPtr = (float *)IVar6;
  local_88.DataPtr = (float *)pFVar7;
  Audio::ArrayMixIn(&local_88,&local_98,fVar2);
  return;
}

