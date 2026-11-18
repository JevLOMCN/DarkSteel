// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 1

// TArrayView<enum_EAudioMixerChannel::Type_const_,int><TArray<enum_EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_>_const_&,TArray<enum_EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_>_> @ 14f0aaad0

/* WARNING: Enum "Type": Some values do not have unique names */

TArrayView<EAudioMixerChannel::Type_const_,int> * __thiscall
TArrayView<enum_EAudioMixerChannel::Type_const_,int>::
TArrayView<enum_EAudioMixerChannel::Type_const_,int><TArray<enum_EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_>_const_&,TArray<enum_EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_>_>
          (void *this,TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<EAudioMixerChannel::Type_const_,int> *pTVar4;
  
  *(FScriptContainerElement **)this = (param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  if (-1 < iVar1) {
    *(int *)((longlong)this + 8) = iVar1;
    return this;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<EAudioMixerChannel::Type_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  *(int *)((longlong)this + 8) = iVar1;
  return this;
}

