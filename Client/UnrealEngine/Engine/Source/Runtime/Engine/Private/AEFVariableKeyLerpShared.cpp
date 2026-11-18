// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// ByteSwapRotationIn @ 1474425f0

void __thiscall
AEFVariableKeyLerpShared::ByteSwapRotationIn
          (AEFVariableKeyLerpShared *this,FUECompressedAnimData *param_1,FMemoryReader *param_2,
          uchar **param_3,int param_4)

{
  int iVar1;
  uchar *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  
  uVar4 = (ulonglong)(uint)param_4;
  if (param_4 == 1) {
    iVar6 = (int)CompressedRotationStrides._4_8_;
    uVar8 = (uint)CompressedRotationNum._4_8_;
  }
  else {
    iVar1 = *(int *)&param_1->field_0x68;
    iVar6 = CompressedRotationStrides[iVar1];
    uVar8 = CompressedRotationNum[iVar1];
    if (iVar1 == 3) {
      lVar5 = 6;
      do {
        (**(code **)(param_2->_padding_ + 0x188))(param_2,*param_3,4);
        *param_3 = *param_3 + 4;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
  }
  uVar7 = uVar4;
  if (0 < param_4) {
    do {
      if (0 < (int)uVar8) {
        uVar3 = (ulonglong)uVar8;
        do {
          (**(code **)(param_2->_padding_ + 0x188))(param_2,*param_3,(longlong)iVar6);
          *param_3 = *param_3 + iVar6;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if (1 < param_4) {
    iVar1 = (int)*param_3;
    lVar5 = (longlong)(int)((iVar1 + 3U & 0xfffffffc) - iVar1);
    (**(code **)(param_2->_padding_ + 0x188))(param_2,*param_3,lVar5);
    *param_3 = *param_3 + lVar5;
    puVar2 = *param_3;
    lVar5 = (ulonglong)(0xff < *(int *)&param_1->field_0x8) + 1;
    do {
      (**(code **)(param_2->_padding_ + 0x188))(param_2,puVar2,lVar5);
      *param_3 = *param_3 + lVar5;
      puVar2 = *param_3;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}

// ByteSwapRotationOut @ 147442860

void __thiscall
AEFVariableKeyLerpShared::ByteSwapRotationOut
          (AEFVariableKeyLerpShared *this,FUECompressedAnimData *param_1,FMemoryWriter *param_2,
          uchar **param_3,int param_4)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  
  uVar3 = (ulonglong)(uint)param_4;
  if (param_4 == 1) {
    iVar5 = (int)CompressedRotationStrides._4_8_;
    uVar7 = (uint)CompressedRotationNum._4_8_;
  }
  else {
    iVar1 = *(int *)&param_1->field_0x68;
    iVar5 = CompressedRotationStrides[iVar1];
    uVar7 = CompressedRotationNum[iVar1];
    if (iVar1 == 3) {
      lVar4 = 6;
      do {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,*param_3,4);
        *param_3 = *param_3 + 4;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
  }
  uVar6 = uVar3;
  if (0 < param_4) {
    do {
      if (0 < (int)uVar7) {
        uVar2 = (ulonglong)uVar7;
        do {
          (**(code **)(*(longlong *)param_2 + 0x188))(param_2,*param_3,(longlong)iVar5);
          *param_3 = *param_3 + iVar5;
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (1 < param_4) {
    PadMemoryWriter(param_2,param_3,4);
    lVar4 = (ulonglong)(0xff < *(int *)&param_1->field_0x8) + 1;
    do {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,*param_3,lVar4);
      *param_3 = *param_3 + lVar4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}

// ByteSwapScaleIn @ 147442ac0

void __thiscall
AEFVariableKeyLerpShared::ByteSwapScaleIn
          (AEFVariableKeyLerpShared *this,FUECompressedAnimData *param_1,FMemoryReader *param_2,
          uchar **param_3,int param_4)

{
  int iVar1;
  uchar *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  
  uVar4 = (ulonglong)(uint)param_4;
  iVar6 = CompressedScaleStrides[0];
  uVar8 = CompressedScaleNum[0];
  if (param_4 != 1) {
    iVar1 = *(int *)&param_1->field_0x6c;
    iVar6 = CompressedScaleStrides[iVar1];
    uVar8 = CompressedScaleNum[iVar1];
    if (iVar1 == 3) {
      lVar5 = 6;
      do {
        (**(code **)(param_2->_padding_ + 0x188))(param_2,*param_3,4);
        *param_3 = *param_3 + 4;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
  }
  uVar7 = uVar4;
  if (0 < param_4) {
    do {
      if (0 < (int)uVar8) {
        uVar3 = (ulonglong)uVar8;
        do {
          (**(code **)(param_2->_padding_ + 0x188))(param_2,*param_3,(longlong)iVar6);
          *param_3 = *param_3 + iVar6;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if (1 < param_4) {
    iVar6 = (int)*param_3;
    lVar5 = (longlong)(int)((iVar6 + 3U & 0xfffffffc) - iVar6);
    (**(code **)(param_2->_padding_ + 0x188))(param_2,*param_3,lVar5);
    *param_3 = *param_3 + lVar5;
    puVar2 = *param_3;
    lVar5 = (ulonglong)(0xff < *(int *)&param_1->field_0x8) + 1;
    do {
      (**(code **)(param_2->_padding_ + 0x188))(param_2,puVar2,lVar5);
      *param_3 = *param_3 + lVar5;
      puVar2 = *param_3;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}

// ByteSwapScaleOut @ 147442d30

void __thiscall
AEFVariableKeyLerpShared::ByteSwapScaleOut
          (AEFVariableKeyLerpShared *this,FUECompressedAnimData *param_1,FMemoryWriter *param_2,
          uchar **param_3,int param_4)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  
  uVar3 = (ulonglong)(uint)param_4;
  iVar5 = CompressedScaleStrides[0];
  uVar7 = CompressedScaleNum[0];
  if (param_4 != 1) {
    iVar1 = *(int *)&param_1->field_0x6c;
    iVar5 = CompressedScaleStrides[iVar1];
    uVar7 = CompressedScaleNum[iVar1];
    if (iVar1 == 3) {
      lVar4 = 6;
      do {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,*param_3,4);
        *param_3 = *param_3 + 4;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
  }
  uVar6 = uVar3;
  if (0 < param_4) {
    do {
      if (0 < (int)uVar7) {
        uVar2 = (ulonglong)uVar7;
        do {
          (**(code **)(*(longlong *)param_2 + 0x188))(param_2,*param_3,(longlong)iVar5);
          *param_3 = *param_3 + iVar5;
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (1 < param_4) {
    PadMemoryWriter(param_2,param_3,4);
    lVar4 = (ulonglong)(0xff < *(int *)&param_1->field_0x8) + 1;
    do {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,*param_3,lVar4);
      *param_3 = *param_3 + lVar4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}

// ByteSwapTranslationIn @ 147442f90

void __thiscall
AEFVariableKeyLerpShared::ByteSwapTranslationIn
          (AEFVariableKeyLerpShared *this,FUECompressedAnimData *param_1,FMemoryReader *param_2,
          uchar **param_3,int param_4)

{
  int iVar1;
  uchar *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  
  uVar4 = (ulonglong)(uint)param_4;
  iVar6 = CompressedTranslationStrides[0];
  uVar8 = CompressedTranslationNum[0];
  if (param_4 != 1) {
    iVar1 = *(int *)&param_1->field_0x64;
    iVar6 = CompressedTranslationStrides[iVar1];
    uVar8 = CompressedTranslationNum[iVar1];
    if (iVar1 == 3) {
      lVar5 = 6;
      do {
        (**(code **)(param_2->_padding_ + 0x188))(param_2,*param_3,4);
        *param_3 = *param_3 + 4;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
  }
  uVar7 = uVar4;
  if (0 < param_4) {
    do {
      if (0 < (int)uVar8) {
        uVar3 = (ulonglong)uVar8;
        do {
          (**(code **)(param_2->_padding_ + 0x188))(param_2,*param_3,(longlong)iVar6);
          *param_3 = *param_3 + iVar6;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if (1 < param_4) {
    iVar6 = (int)*param_3;
    lVar5 = (longlong)(int)((iVar6 + 3U & 0xfffffffc) - iVar6);
    (**(code **)(param_2->_padding_ + 0x188))(param_2,*param_3,lVar5);
    *param_3 = *param_3 + lVar5;
    puVar2 = *param_3;
    lVar5 = (ulonglong)(0xff < *(int *)&param_1->field_0x8) + 1;
    do {
      (**(code **)(param_2->_padding_ + 0x188))(param_2,puVar2,lVar5);
      *param_3 = *param_3 + lVar5;
      puVar2 = *param_3;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}

// ByteSwapTranslationOut @ 147443200

void __thiscall
AEFVariableKeyLerpShared::ByteSwapTranslationOut
          (AEFVariableKeyLerpShared *this,FUECompressedAnimData *param_1,FMemoryWriter *param_2,
          uchar **param_3,int param_4)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  
  uVar3 = (ulonglong)(uint)param_4;
  iVar5 = CompressedTranslationStrides[0];
  uVar7 = CompressedTranslationNum[0];
  if (param_4 != 1) {
    iVar1 = *(int *)&param_1->field_0x64;
    iVar5 = CompressedTranslationStrides[iVar1];
    uVar7 = CompressedTranslationNum[iVar1];
    if (iVar1 == 3) {
      lVar4 = 6;
      do {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,*param_3,4);
        *param_3 = *param_3 + 4;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
  }
  uVar6 = uVar3;
  if (0 < param_4) {
    do {
      if (0 < (int)uVar7) {
        uVar2 = (ulonglong)uVar7;
        do {
          (**(code **)(*(longlong *)param_2 + 0x188))(param_2,*param_3,(longlong)iVar5);
          *param_3 = *param_3 + iVar5;
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (1 < param_4) {
    PadMemoryWriter(param_2,param_3,4);
    lVar4 = (ulonglong)(0xff < *(int *)&param_1->field_0x8) + 1;
    do {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,*param_3,lVar4);
      *param_3 = *param_3 + lVar4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}

