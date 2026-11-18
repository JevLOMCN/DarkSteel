// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 4

// operator[] @ 14629c630

double __thiscall
UE::MovieScene::TMultiChannelValue<double,1>::operator[]
          (TMultiChannelValue<double,1> *this,uchar param_1)

{
  code *pcVar1;
  bool bVar2;
  double dVar3;
  
  if ((param_1 == '\0') && ((this->Mask & 1) != 0)) {
    return this->Channels[0];
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Index < N && IsSet(Index)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\Blending\\MovieSceneMultiChannelBlending.h"
                     ,0x5d,L"Attempting to access an invalid channel.");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    dVar3 = (double)(*pcVar1)();
    return dVar3;
  }
  return this->Channels[param_1];
}

// Increment @ 1462b2110

void __thiscall
UE::MovieScene::TMultiChannelValue<double,1>::Increment
          (TMultiChannelValue<double,1> *this,uchar param_1,double param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (param_1 != '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < N",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\Blending\\MovieSceneMultiChannelBlending.h"
                       ,0x87,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < N",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\Blending\\MovieSceneMultiChannelBlending.h"
                       ,0x77,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = 1 << (param_1 & 0x1f);
  if ((this->Mask & uVar3) != 0) {
    param_2 = param_2 + this->Channels[param_1];
  }
  this->Channels[param_1] = param_2;
  this->Mask = this->Mask | uVar3;
  return;
}

// IsSet @ 1462b5740

bool __thiscall
UE::MovieScene::TMultiChannelValue<double,1>::IsSet
          (TMultiChannelValue<double,1> *this,uchar param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (param_1 != '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < N",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\Blending\\MovieSceneMultiChannelBlending.h"
                       ,0x77,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (this->Mask >> (param_1 & 0x1f) & 1) != 0;
}

// Set @ 1462bbba0

void __thiscall
UE::MovieScene::TMultiChannelValue<double,1>::Set
          (TMultiChannelValue<double,1> *this,uchar param_1,double param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 != '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < N",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\Blending\\MovieSceneMultiChannelBlending.h"
                       ,0x7e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->Channels[param_1] = param_2;
  this->Mask = this->Mask | 1 << (param_1 & 0x1f);
  return;
}

