// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesiaCore
// Functions: 1

// TScopedSlidingWindow<float> @ 14d7f4a00

TScopedSlidingWindow<float> * __thiscall
Audio::TScopedSlidingWindow<float>::TScopedSlidingWindow<float>
          (TScopedSlidingWindow<float> *this,TSlidingBuffer<float> *param_1,
          TArrayView<float_const_,int> *param_2,bool param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  TScopedSlidingWindow<float> *pTVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  uVar4 = *(undefined4 *)&param_2->DataPtr;
  uVar5 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
  iVar2 = param_2->ArrayNum;
  uVar6 = *(undefined4 *)&param_2->field_0xc;
  this->_padding_ = (longlong)&___7__TSlidingWindow_M_Audio__6B_;
  this->_padding_ = (longlong)(param_1->StorageBuffer).AllocatorInstance.Data;
  iVar1 = (param_1->StorageBuffer).ArrayNum;
  if ((iVar1 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    pTVar8 = (TScopedSlidingWindow<float> *)(*pcVar3)();
    return pTVar8;
  }
  *(int *)&this->_padding_ = iVar1;
  iVar11 = 0;
  *(undefined4 *)&this->_padding_ = uVar4;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar5;
  *(int *)&this->_padding_ = iVar2;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar6;
  iVar1 = param_1->NumWindowSamples;
  iVar10 = (int)this->_padding_ + (int)this->_padding_;
  *(int *)&this->_padding_ = iVar1;
  iVar2 = param_1->NumHopSamples;
  *(int *)((longlong)&this->_padding_ + 4) = iVar2;
  *(undefined4 *)&this->_padding_ = 0;
  iVar9 = param_1->NumUnderflowSamples;
  *(int *)((longlong)&this->_padding_ + 4) = iVar9;
  if ((param_3) && (0 < iVar10)) {
    if (iVar10 < iVar1) {
      iVar11 = iVar1 - iVar10;
    }
    else {
      iVar9 = (iVar10 - iVar1) - iVar9;
      iVar2 = ((iVar9 % iVar2 - iVar9) - iVar2) + iVar10;
      if (0 < iVar2) {
        iVar11 = iVar1 - iVar2;
      }
    }
    iVar10 = iVar10 + iVar11;
  }
  *(int *)&this->_padding_ = iVar10 - iVar1;
  if (iVar10 - iVar1 < 0) {
    *(undefined4 *)&this->_padding_ = 0xffffffff;
  }
  this->_padding_ = (longlong)&___7__TScopedSlidingWindow_M_Audio__6B_;
  this->SlidingBuffer = param_1;
  return this;
}

