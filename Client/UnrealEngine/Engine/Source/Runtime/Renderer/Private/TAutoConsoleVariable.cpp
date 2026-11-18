// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 7

// GetValueOnRenderThread @ 14481ba70

int __thiscall TAutoConsoleVariable<int>::GetValueOnRenderThread(TAutoConsoleVariable<int> *this)

{
  TConsoleVariableData<int> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  pTVar1 = this->Ref;
  bVar3 = IsInParallelRenderingThread();
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  return pTVar1->ShadowedValue[1];
}

// GetValueOnRenderThread @ 14481bac0

float __thiscall
TAutoConsoleVariable<float>::GetValueOnRenderThread(TAutoConsoleVariable<float> *this)

{
  TConsoleVariableData<float> *pTVar1;
  code *pcVar2;
  bool bVar3;
  float fVar4;
  
  pTVar1 = this->Ref;
  bVar3 = IsInParallelRenderingThread();
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar4 = (float)(*pcVar2)();
      return fVar4;
    }
  }
  return pTVar1->ShadowedValue[1];
}

// GetValueOnRenderThread @ 144928940

bool __thiscall TAutoConsoleVariable<bool>::GetValueOnRenderThread(TAutoConsoleVariable<bool> *this)

{
  TConsoleVariableData<bool> *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  pTVar1 = this->Ref;
  bVar3 = IsInParallelRenderingThread();
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return pTVar1->ShadowedValue[1];
}

// TAutoConsoleVariable<bool> @ 144b95f70

TAutoConsoleVariable<bool> * __thiscall
TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
          (TAutoConsoleVariable<bool> *this,wchar_t *param_1,bool *param_2,wchar_t *param_3,
          TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *param_4,
          uint param_5)

{
  TAutoConsoleVariable<bool>(this,param_1,param_2,param_3,param_5);
  this->_padding_ = (longlong)vftable;
  (**(code **)(*(longlong *)this->_padding_ + 0xe0))((longlong *)this->_padding_,param_4);
  return this;
}

// TAutoConsoleVariable<int> @ 144c1d600

TAutoConsoleVariable<int> * __thiscall
TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
          (TAutoConsoleVariable<int> *this,wchar_t *param_1,int *param_2,wchar_t *param_3,
          TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *param_4,
          uint param_5)

{
  TAutoConsoleVariable<int>(this,param_1,param_2,param_3,param_5);
  this->_padding_ = (longlong)&___7__TAutoConsoleVariable_H__6B_;
  (**(code **)(*(longlong *)this->_padding_ + 0xe0))((longlong *)this->_padding_,param_4);
  return this;
}

// TAutoConsoleVariable<float> @ 144c1d650

TAutoConsoleVariable<float> * __thiscall
TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
          (TAutoConsoleVariable<float> *this,wchar_t *param_1,float *param_2,wchar_t *param_3,
          TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *param_4,
          uint param_5)

{
  TAutoConsoleVariable<float>(this,param_1,param_2,param_3,param_5);
  this->_padding_ = (longlong)&___7__TAutoConsoleVariable_M__6B_;
  (**(code **)(*(longlong *)this->_padding_ + 0xe0))((longlong *)this->_padding_,param_4);
  return this;
}

// TAutoConsoleVariable<FString> @ 1457c0a70

TAutoConsoleVariable<FString> * __thiscall
TAutoConsoleVariable<FString>::TAutoConsoleVariable<FString>
          (TAutoConsoleVariable<FString> *this,wchar_t *param_1,FString *param_2,wchar_t *param_3,
          TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *param_4,
          uint param_5)

{
  TAutoConsoleVariable<FString>(this,param_1,param_2,param_3,param_5);
  this->_padding_ = (longlong)&___7__TAutoConsoleVariable_VFString____6B_;
  (**(code **)(*(longlong *)this->_padding_ + 0xe0))((longlong *)this->_padding_,param_4);
  return this;
}

