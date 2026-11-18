// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesia
// Functions: 4

// FindChecked @ 14d8213d0

ESpectrumType * __thiscall
TMapBase<enum_EAudioSpectrumType,enum_Audio::ESpectrumType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EAudioSpectrumType,enum_Audio::ESpectrumType,0>_>
::FindChecked(void *this,EAudioSpectrumType param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  ESpectrumType *pEVar4;
  longlong lVar5;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar5 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar5 = (longlong)this + 0x38;
    }
    iVar3 = *(int *)(lVar5 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (iVar3 != -1) {
      do {
        lVar5 = *(longlong *)this + (longlong)iVar3 * 0xc;
        if (*(EAudioSpectrumType *)(*(longlong *)this + (longlong)iVar3 * 0xc) == param_1) {
          if (lVar5 != 0) {
            return (ESpectrumType *)(lVar5 + 1);
          }
          break;
        }
        iVar3 = *(int *)(lVar5 + 4);
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return &DAT_00000001;
  }
  pcVar1 = (code *)swi(3);
  pEVar4 = (ESpectrumType *)(*pcVar1)();
  return pEVar4;
}

// FindChecked @ 14d821470

int * __thiscall
TMapBase<enum_EConstantQFFTSizeEnum,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EConstantQFFTSizeEnum,int,0>_>
::FindChecked(void *this,EConstantQFFTSizeEnum param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  int *piVar4;
  EConstantQFFTSizeEnum *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    uVar3 = *(int *)(lVar6 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pEVar5 = (EConstantQFFTSizeEnum *)((longlong)(int)uVar3 * 0x10 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EConstantQFFTSizeEnum *)0x0) {
            return (int *)(pEVar5 + 4);
          }
          break;
        }
        uVar3 = *(undefined4 *)(pEVar5 + 8);
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (int *)&DAT_00000004;
  }
  pcVar1 = (code *)swi(3);
  piVar4 = (int *)(*pcVar1)();
  return piVar4;
}

// FindChecked @ 14d821510

EPseudoConstantQNormalization * __thiscall
TMapBase<enum_EConstantQNormalizationEnum,enum_Audio::EPseudoConstantQNormalization,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EConstantQNormalizationEnum,enum_Audio::EPseudoConstantQNormalization,0>_>
::FindChecked(void *this,EConstantQNormalizationEnum param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  EPseudoConstantQNormalization *pEVar4;
  longlong lVar5;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar5 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar5 = (longlong)this + 0x38;
    }
    iVar3 = *(int *)(lVar5 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (iVar3 != -1) {
      do {
        lVar5 = *(longlong *)this + (longlong)iVar3 * 0xc;
        if (*(EConstantQNormalizationEnum *)(*(longlong *)this + (longlong)iVar3 * 0xc) == param_1)
        {
          if (lVar5 != 0) {
            return (EPseudoConstantQNormalization *)(lVar5 + 1);
          }
          break;
        }
        iVar3 = *(int *)(lVar5 + 4);
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return &DAT_00000001;
  }
  pcVar1 = (code *)swi(3);
  pEVar4 = (EPseudoConstantQNormalization *)(*pcVar1)();
  return pEVar4;
}

// FindChecked @ 14d8215b0

EWindowType * __thiscall
TMapBase<enum_EFFTWindowType,enum_Audio::EWindowType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EFFTWindowType,enum_Audio::EWindowType,0>_>
::FindChecked(void *this,EFFTWindowType param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  EWindowType *pEVar4;
  longlong lVar5;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar5 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar5 = (longlong)this + 0x38;
    }
    iVar3 = *(int *)(lVar5 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (iVar3 != -1) {
      do {
        lVar5 = *(longlong *)this + (longlong)iVar3 * 0xc;
        if (*(EFFTWindowType *)(*(longlong *)this + (longlong)iVar3 * 0xc) == param_1) {
          if (lVar5 != 0) {
            return (EWindowType *)(lVar5 + 1);
          }
          break;
        }
        iVar3 = *(int *)(lVar5 + 4);
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return &DAT_00000001;
  }
  pcVar1 = (code *)swi(3);
  pEVar4 = (EWindowType *)(*pcVar1)();
  return pEVar4;
}

