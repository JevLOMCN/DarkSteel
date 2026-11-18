// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 13

// operator[] @ 14a3bf340

float __thiscall
UE::MovieScene::TMultiChannelValue<float,1>::operator[]
          (TMultiChannelValue<float,1> *this,uchar param_1)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if ((param_1 == '\0') && ((this->Mask & 1) != 0)) {
    return this->Channels[0];
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Index < N && IsSet(Index)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\Blending\\MovieSceneMultiChannelBlending.h"
                     ,0x5d,L"Attempting to access an invalid channel.");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    fVar3 = (float)(*pcVar1)();
    return fVar3;
  }
  return this->Channels[param_1];
}

// Increment @ 14a41e6d0

void __thiscall
UE::MovieScene::TMultiChannelValue<float,1>::Increment
          (TMultiChannelValue<float,1> *this,uchar param_1,float param_2)

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

// Increment @ 14a41e770

void __thiscall
UE::MovieScene::TMultiChannelValue<float,2>::Increment
          (TMultiChannelValue<float,2> *this,uchar param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (1 < param_1) {
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

// Increment @ 14a41e810

void __thiscall
UE::MovieScene::TMultiChannelValue<float,3>::Increment
          (TMultiChannelValue<float,3> *this,uchar param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (2 < param_1) {
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

// Increment @ 14a41e8b0

void __thiscall
UE::MovieScene::TMultiChannelValue<float,9>::Increment
          (TMultiChannelValue<float,9> *this,uchar param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (8 < param_1) {
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

// IsSet @ 14a428470

bool __thiscall
UE::MovieScene::TMultiChannelValue<float,1>::IsSet(TMultiChannelValue<float,1> *this,uchar param_1)

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

// IsSet @ 14a4284d0

bool __thiscall
UE::MovieScene::TMultiChannelValue<float,2>::IsSet(TMultiChannelValue<float,2> *this,uchar param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (1 < param_1) {
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

// IsSet @ 14a428530

bool __thiscall
UE::MovieScene::TMultiChannelValue<float,3>::IsSet(TMultiChannelValue<float,3> *this,uchar param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (2 < param_1) {
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

// IsSet @ 14a428590

bool __thiscall
UE::MovieScene::TMultiChannelValue<float,9>::IsSet(TMultiChannelValue<float,9> *this,uchar param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (8 < param_1) {
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

// Set @ 14a457920

void __thiscall
UE::MovieScene::TMultiChannelValue<float,1>::Set
          (TMultiChannelValue<float,1> *this,uchar param_1,float param_2)

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

// Set @ 14a457990

void __thiscall
UE::MovieScene::TMultiChannelValue<float,2>::Set
          (TMultiChannelValue<float,2> *this,uchar param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (1 < param_1) {
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

// Set @ 14a457a00

void __thiscall
UE::MovieScene::TMultiChannelValue<float,3>::Set
          (TMultiChannelValue<float,3> *this,uchar param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (2 < param_1) {
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

// Set @ 14a457a70

void __thiscall
UE::MovieScene::TMultiChannelValue<float,9>::Set
          (TMultiChannelValue<float,9> *this,uchar param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (8 < param_1) {
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

