// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Voice
// Functions: 4

// ~IVoiceCapture @ 14ec3ad50

void __thiscall IVoiceCapture::~IVoiceCapture(IVoiceCapture *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  this->_padding_ = (longlong)&___7IVoiceCapture__6B_;
  DeleteCriticalSection
            ((LPCRITICAL_SECTION)&(this->MicrophoneOutput).ConnectedOutputsCriticalSection);
  DestructItems<Audio::FPatchInput,int>
            ((FPatchInput *)(this->MicrophoneOutput).ConnectedOutputs.AllocatorInstance.Data,
             (this->MicrophoneOutput).ConnectedOutputs.ArrayNum);
  pFVar3 = (this->MicrophoneOutput).ConnectedOutputs.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->MicrophoneOutput).PendingOutputsCriticalSection)
  ;
  DestructItems<Audio::FPatchInput,int>
            ((FPatchInput *)(this->MicrophoneOutput).PendingOutputs.AllocatorInstance.Data,
             (this->MicrophoneOutput).PendingOutputs.ArrayNum);
  pFVar3 = (this->MicrophoneOutput).PendingOutputs.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014ec3add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

// GetCurrentAmplitude @ 14ec3eba0

float __thiscall IVoiceCapture::GetCurrentAmplitude(IVoiceCapture *this)

{
  return __real_bf800000;
}

// GetVoiceData @ 14ec3f100

Type __thiscall
IVoiceCapture::GetVoiceData(IVoiceCapture *this,uchar *param_1,uint param_2,uint *param_3)

{
  return UnInitialized;
}

// GetVoiceData @ 14ec3f110

Type __thiscall
IVoiceCapture::GetVoiceData
          (IVoiceCapture *this,uchar *param_1,uint param_2,uint *param_3,ulong64 *param_4)

{
  Type TVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014ec3f113. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TVar1 = (**(code **)(this->_padding_ + 0x48))();
  return TVar1;
}

