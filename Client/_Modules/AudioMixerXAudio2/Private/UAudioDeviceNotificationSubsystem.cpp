// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixerXAudio2
// Functions: 1

// Get @ 148d3d0b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UAudioDeviceNotificationSubsystem * __cdecl UAudioDeviceNotificationSubsystem::Get(void)

{
  int iVar1;
  bool bVar2;
  UEngine *pUVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UAudioDeviceNotificationSubsystem *pUVar6;
  
  pUVar3 = GEngine;
  pUVar4 = Z_Construct_UClass_UAudioDeviceNotificationSubsystem_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar4 != (UClass *)0x0) goto LAB_148d3d0e6;
  }
  else if (pUVar4 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
LAB_148d3d0e6:
    pUVar5 = Z_Construct_UClass_UAudioDeviceNotificationSubsystem_NoRegister();
    if (pUVar5 != (UClass *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)pUVar4->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_148d3d116;
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_148d3d116:
  pUVar6 = (UAudioDeviceNotificationSubsystem *)
           FSubsystemCollectionBase::GetSubsystemInternal
                     ((FSubsystemCollectionBase *)&pUVar3->EngineSubsystemCollection,pUVar4);
  return pUVar6;
}

