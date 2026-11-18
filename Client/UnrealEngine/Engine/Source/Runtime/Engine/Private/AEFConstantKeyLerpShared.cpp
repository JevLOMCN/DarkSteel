// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// ByteSwapRotationIn @ 147442500

void __thiscall
AEFConstantKeyLerpShared::ByteSwapRotationIn
          (AEFConstantKeyLerpShared *this,FUECompressedAnimData *param_1,FMemoryReader *param_2,
          uchar **param_3,int param_4)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  
  uVar2 = (ulonglong)(uint)param_4;
  if (param_4 == 1) {
    iVar5 = (int)CompressedRotationStrides._4_8_;
    uVar6 = (uint)CompressedRotationNum._4_8_;
  }
  else {
    iVar1 = *(int *)&param_1->field_0x68;
    iVar5 = CompressedRotationStrides[iVar1];
    uVar6 = CompressedRotationNum[iVar1];
    if (iVar1 == 3) {
      lVar4 = 6;
      do {
        (**(code **)(param_2->_padding_ + 0x188))(param_2,*param_3,4);
        *param_3 = *param_3 + 4;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
  }
  if (0 < param_4) {
    do {
      if (0 < (int)uVar6) {
        uVar3 = (ulonglong)uVar6;
        do {
          (**(code **)(param_2->_padding_ + 0x188))(param_2,*param_3,(longlong)iVar5);
          *param_3 = *param_3 + iVar5;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}

// ByteSwapRotationOut @ 147442770

void __thiscall
AEFConstantKeyLerpShared::ByteSwapRotationOut
          (AEFConstantKeyLerpShared *this,FUECompressedAnimData *param_1,FMemoryWriter *param_2,
          uchar **param_3,int param_4)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  
  uVar2 = (ulonglong)(uint)param_4;
  if (param_4 == 1) {
    iVar5 = (int)CompressedRotationStrides._4_8_;
    uVar6 = (uint)CompressedRotationNum._4_8_;
  }
  else {
    iVar1 = *(int *)&param_1->field_0x68;
    iVar5 = CompressedRotationStrides[iVar1];
    uVar6 = CompressedRotationNum[iVar1];
    if (iVar1 == 3) {
      lVar4 = 6;
      do {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,*param_3,4);
        *param_3 = *param_3 + 4;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
  }
  if (0 < param_4) {
    do {
      if (0 < (int)uVar6) {
        uVar3 = (ulonglong)uVar6;
        do {
          (**(code **)(*(longlong *)param_2 + 0x188))(param_2,*param_3,(longlong)iVar5);
          *param_3 = *param_3 + iVar5;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}

// ByteSwapScaleIn @ 1474429d0

void __thiscall
AEFConstantKeyLerpShared::ByteSwapScaleIn
          (AEFConstantKeyLerpShared *this,FUECompressedAnimData *param_1,FMemoryReader *param_2,
          uchar **param_3,int param_4)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  
  uVar2 = (ulonglong)(uint)param_4;
  iVar5 = CompressedScaleStrides[0];
  uVar6 = CompressedScaleNum[0];
  if (param_4 != 1) {
    iVar1 = *(int *)&param_1->field_0x6c;
    iVar5 = CompressedScaleStrides[iVar1];
    uVar6 = CompressedScaleNum[iVar1];
    if (iVar1 == 3) {
      lVar4 = 6;
      do {
        (**(code **)(param_2->_padding_ + 0x188))(param_2,*param_3,4);
        *param_3 = *param_3 + 4;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
  }
  if (0 < param_4) {
    do {
      if (0 < (int)uVar6) {
        uVar3 = (ulonglong)uVar6;
        do {
          (**(code **)(param_2->_padding_ + 0x188))(param_2,*param_3,(longlong)iVar5);
          *param_3 = *param_3 + iVar5;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}

// ByteSwapScaleOut @ 147442c40

void __thiscall
AEFConstantKeyLerpShared::ByteSwapScaleOut
          (AEFConstantKeyLerpShared *this,FUECompressedAnimData *param_1,FMemoryWriter *param_2,
          uchar **param_3,int param_4)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  
  uVar2 = (ulonglong)(uint)param_4;
  iVar5 = CompressedScaleStrides[0];
  uVar6 = CompressedScaleNum[0];
  if (param_4 != 1) {
    iVar1 = *(int *)&param_1->field_0x6c;
    iVar5 = CompressedScaleStrides[iVar1];
    uVar6 = CompressedScaleNum[iVar1];
    if (iVar1 == 3) {
      lVar4 = 6;
      do {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,*param_3,4);
        *param_3 = *param_3 + 4;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
  }
  if (0 < param_4) {
    do {
      if (0 < (int)uVar6) {
        uVar3 = (ulonglong)uVar6;
        do {
          (**(code **)(*(longlong *)param_2 + 0x188))(param_2,*param_3,(longlong)iVar5);
          *param_3 = *param_3 + iVar5;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}

// ByteSwapTranslationIn @ 147442ea0

void __thiscall
AEFConstantKeyLerpShared::ByteSwapTranslationIn
          (AEFConstantKeyLerpShared *this,FUECompressedAnimData *param_1,FMemoryReader *param_2,
          uchar **param_3,int param_4)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  
  uVar2 = (ulonglong)(uint)param_4;
  iVar5 = CompressedTranslationStrides[0];
  uVar6 = CompressedTranslationNum[0];
  if (param_4 != 1) {
    iVar1 = *(int *)&param_1->field_0x64;
    iVar5 = CompressedTranslationStrides[iVar1];
    uVar6 = CompressedTranslationNum[iVar1];
    if (iVar1 == 3) {
      lVar4 = 6;
      do {
        (**(code **)(param_2->_padding_ + 0x188))(param_2,*param_3,4);
        *param_3 = *param_3 + 4;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
  }
  if (0 < param_4) {
    do {
      if (0 < (int)uVar6) {
        uVar3 = (ulonglong)uVar6;
        do {
          (**(code **)(param_2->_padding_ + 0x188))(param_2,*param_3,(longlong)iVar5);
          *param_3 = *param_3 + iVar5;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}

// ByteSwapTranslationOut @ 147443110

void __thiscall
AEFConstantKeyLerpShared::ByteSwapTranslationOut
          (AEFConstantKeyLerpShared *this,FUECompressedAnimData *param_1,FMemoryWriter *param_2,
          uchar **param_3,int param_4)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  
  uVar2 = (ulonglong)(uint)param_4;
  iVar5 = CompressedTranslationStrides[0];
  uVar6 = CompressedTranslationNum[0];
  if (param_4 != 1) {
    iVar1 = *(int *)&param_1->field_0x64;
    iVar5 = CompressedTranslationStrides[iVar1];
    uVar6 = CompressedTranslationNum[iVar1];
    if (iVar1 == 3) {
      lVar4 = 6;
      do {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,*param_3,4);
        *param_3 = *param_3 + 4;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
  }
  if (0 < param_4) {
    do {
      if (0 < (int)uVar6) {
        uVar3 = (ulonglong)uVar6;
        do {
          (**(code **)(*(longlong *)param_2 + 0x188))(param_2,*param_3,(longlong)iVar5);
          *param_3 = *param_3 + iVar5;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}

