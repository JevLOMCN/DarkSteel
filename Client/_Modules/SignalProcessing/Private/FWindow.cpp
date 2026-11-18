// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 4

// FWindow @ 1444a5270

FWindow * __thiscall
Audio::FWindow::FWindow(FWindow *this,EWindowType param_1,int param_2,int param_3,bool param_4)

{
  int *piVar1;
  EWindowType EVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FWindow *pFVar6;
  
  this->WindowType = param_1;
  (this->WindowBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->WindowBuffer).ArrayMax;
  (this->WindowBuffer).ArrayNum = 0;
  *piVar1 = 0;
  this->NumSamples = param_2 * param_3;
  uVar5 = param_2 * param_3 & 0x80000003;
  if ((int)uVar5 < 0) {
    uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
  }
  if (uVar5 != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumSamples % 4 == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\AudioFFT.cpp"
                       ,0x93,
                       L"For performance reasons, this window\'s length should be a multiple of 4.")
    ;
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FWindow *)(*pcVar3)();
      return pFVar6;
    }
  }
  if (this->WindowType != None) {
    (this->WindowBuffer).ArrayNum = 0;
    if (*piVar1 < 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,0,&(this->WindowBuffer).AllocatorInstance,0,piVar1);
    }
    TArray<float,TAlignedHeapAllocator<16>_>::AddZeroed(&this->WindowBuffer,this->NumSamples);
    EVar2 = this->WindowType;
    if (EVar2 == Hamming) {
      GenerateHammingWindow
                ((float *)(this->WindowBuffer).AllocatorInstance.Data,param_2,param_3,param_4);
    }
    else if (EVar2 == Hann) {
      GenerateHannWindow((float *)(this->WindowBuffer).AllocatorInstance.Data,param_2,param_3,
                         param_4);
    }
    else if (EVar2 == Blackman) {
      GenerateBlackmanWindow
                ((float *)(this->WindowBuffer).AllocatorInstance.Data,param_2,param_3,param_4);
    }
    else {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\AudioFFT.cpp"
                         ,0xc9,L"Unknown window type!");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FWindow *)(*pcVar3)();
        return pFVar6;
      }
    }
  }
  return this;
}

// ApplyToBuffer @ 1444aa000

void __thiscall Audio::FWindow::ApplyToBuffer(FWindow *this,float *param_1)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined4 uStack_3c;
  undefined4 uStack_2c;
  TArrayView<float,int> local_28;
  TArrayView<float_const_,int> local_18;
  
  if (this->WindowType != None) {
    pFVar3 = (this->WindowBuffer).AllocatorInstance.Data;
    iVar1 = this->NumSamples;
    if (iVar1 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar2 = this->NumSamples;
    if (iVar2 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    local_28._12_4_ = uStack_3c;
    local_28.ArrayNum = iVar2;
    local_18._12_4_ = uStack_2c;
    local_18.ArrayNum = iVar1;
    local_28.DataPtr = param_1;
    local_18.DataPtr = (float *)pFVar3;
    ArrayMultiplyInPlace(&local_18,&local_28);
  }
  return;
}

// Generate @ 1444bf110

void __thiscall Audio::FWindow::Generate(FWindow *this,int param_1,int param_2,bool param_3)

{
  EWindowType EVar1;
  code *pcVar2;
  bool bVar3;
  
  if (this->WindowType != None) {
    (this->WindowBuffer).ArrayNum = 0;
    if ((this->WindowBuffer).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,0,&(this->WindowBuffer).AllocatorInstance,0,&(this->WindowBuffer).ArrayMax);
    }
    TArray<float,TAlignedHeapAllocator<16>_>::AddZeroed(&this->WindowBuffer,this->NumSamples);
    EVar1 = this->WindowType;
    if (EVar1 == Hamming) {
      GenerateHammingWindow
                ((float *)(this->WindowBuffer).AllocatorInstance.Data,param_1,param_2,param_3);
    }
    else if (EVar1 == Hann) {
      GenerateHannWindow((float *)(this->WindowBuffer).AllocatorInstance.Data,param_1,param_2,
                         param_3);
    }
    else if (EVar1 == Blackman) {
      GenerateBlackmanWindow
                ((float *)(this->WindowBuffer).AllocatorInstance.Data,param_1,param_2,param_3);
    }
    else {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\AudioFFT.cpp"
                         ,0xc9,L"Unknown window type!");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  return;
}

// GetWindowType @ 1444c1520

EWindowType __thiscall Audio::FWindow::GetWindowType(FWindow *this)

{
  return this->WindowType;
}

