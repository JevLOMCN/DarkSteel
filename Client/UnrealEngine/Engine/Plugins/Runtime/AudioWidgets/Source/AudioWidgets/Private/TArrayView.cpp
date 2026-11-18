// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 6

// TArrayView<float_const_,int> @ 14d8a6860

TArrayView<float_const_,int> * __thiscall
TArrayView<float_const_,int>::TArrayView<float_const_,int>(TArrayView<float_const_,int> *this)

{
  this->DataPtr = (float *)0x0;
  this->ArrayNum = 0;
  return this;
}

// operator[] @ 14d8c3b50

TSharedPtr<EAudioOscilloscopeTriggerMode,1> * __thiscall
TArrayView<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_const_,int>::operator[]
          (void *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TSharedPtr<EAudioOscilloscopeTriggerMode,1> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)((longlong)this + 8)) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedPtr<EAudioOscilloscopeTriggerMode,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TSharedPtr<EAudioOscilloscopeTriggerMode,1> *)
         ((longlong)param_1 * 0x10 + *(longlong *)this);
}

// operator[] @ 14d8c3bd0

TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> * __thiscall
TArrayView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_const_,int>
::operator[](TArrayView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_const_,int>
             *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> *)
               (*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

// Find @ 14d924e30

int __thiscall
TArrayView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_const_,int>
::Find(TArrayView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_const_,int>
       *this,TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> *param_1)

{
  TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> *pTVar1;
  TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> *pTVar2;
  
  pTVar1 = this->DataPtr;
  if (pTVar1 != pTVar1 + this->ArrayNum) {
    pTVar2 = pTVar1;
    do {
      if (pTVar2->Object == param_1->Object) {
        return (int)((longlong)pTVar2 - (longlong)pTVar1 >> 4);
      }
      pTVar2 = pTVar2 + 1;
    } while (pTVar2 != pTVar1 + this->ArrayNum);
  }
  return -1;
}

// Last @ 14d93f710

TSharedPtr<EAudioOscilloscopeTriggerMode,1> * __thiscall
TArrayView<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_const_,int>::Last
          (void *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TSharedPtr<EAudioOscilloscopeTriggerMode,1> *pTVar4;
  uint uVar5;
  
  uVar5 = ~param_1 + *(int *)((longlong)this + 8);
  uVar3 = 0;
  if ((int)uVar5 < *(int *)((longlong)this + 8)) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedPtr<EAudioOscilloscopeTriggerMode,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TSharedPtr<EAudioOscilloscopeTriggerMode,1> *)
         ((longlong)((*(int *)((longlong)this + 8) - param_1) + -1) * 0x10 + *(longlong *)this);
}

// Last @ 14d93f7a0

TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> * __thiscall
TArrayView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_const_,int>
::Last(TArrayView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_const_,int>
       *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> *pTVar4;
  uint uVar5;
  
  uVar5 = ~param_1 + this->ArrayNum;
  uVar3 = 0;
  if ((int)uVar5 < this->ArrayNum) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> *)
               (*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + ((this->ArrayNum - param_1) + -1);
}

