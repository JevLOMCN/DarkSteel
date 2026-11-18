// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioGameplayVolume
// Functions: 1

// GetSubsystem<UAudioGameplayVolumeSubsystem> @ 14d99ccb0

UAudioGameplayVolumeSubsystem * __thiscall
FAudioDevice::GetSubsystem<UAudioGameplayVolumeSubsystem>(FAudioDevice *this)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UAudioGameplayVolumeSubsystem *pUVar5;
  
  pUVar3 = UAudioGameplayVolumeSubsystem::StaticClass();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar3 != (UClass *)0x0) goto LAB_14d99cce2;
  }
  else if (pUVar3 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
LAB_14d99cce2:
    pUVar4 = UAudioGameplayVolumeSubsystem::StaticClass();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar3->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_14d99cd12;
    }
  }
  pUVar3 = (UClass *)0x0;
LAB_14d99cd12:
  pUVar5 = (UAudioGameplayVolumeSubsystem *)
           FSubsystemCollectionBase::GetSubsystemInternal
                     ((FSubsystemCollectionBase *)&this->SubsystemCollection,pUVar3);
  return pUVar5;
}

