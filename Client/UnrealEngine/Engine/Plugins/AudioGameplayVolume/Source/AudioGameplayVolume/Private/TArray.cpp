// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioGameplayVolume
// Functions: 2

// Append<FSoundSubmixSendInfo,TSizedDefaultAllocator<32>_> @ 14d999a00

void __thiscall
TArray<FSoundSubmixSendInfo,TSizedDefaultAllocator<32>_>::
Append<FSoundSubmixSendInfo,TSizedDefaultAllocator<32>_>
          (TArray<FSoundSubmixSendInfo,TSizedDefaultAllocator<32>_> *this,
          TArray<FSoundSubmixSendInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (this == param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xb8,8,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
    ConstructItems<FSoundSubmixSendInfo,FSoundSubmixSendInfo,int>
              ((this->AllocatorInstance).Data + (longlong)iVar4 * 0xb8,
               (FSoundSubmixSendInfo *)(param_1->AllocatorInstance).Data,iVar1);
  }
  return;
}

// RemoveAtImpl @ 14d9a8c90

void __thiscall
TArray<FAudioGameplayVolumeListener,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FAudioGameplayVolumeListener,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  FAudioGameplayVolumeListener *_Dst;
  
  _Dst = (FAudioGameplayVolumeListener *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x138);
  DestructItems<FAudioGameplayVolumeListener,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x138);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

