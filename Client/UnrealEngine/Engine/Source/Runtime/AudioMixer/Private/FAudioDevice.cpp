// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 4

// GetSubsystem<UAudioBusSubsystem> @ 1464d5180

UAudioBusSubsystem * __thiscall FAudioDevice::GetSubsystem<UAudioBusSubsystem>(FAudioDevice *this)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UAudioBusSubsystem *pUVar5;
  
  pUVar3 = UAudioBusSubsystem::StaticClass();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar3 != (UClass *)0x0) goto LAB_1464d51b2;
  }
  else if (pUVar3 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
LAB_1464d51b2:
    pUVar4 = UAudioBusSubsystem::StaticClass();
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
      if (bVar2) goto LAB_1464d51e2;
    }
  }
  pUVar3 = (UClass *)0x0;
LAB_1464d51e2:
  pUVar5 = (UAudioBusSubsystem *)
           FSubsystemCollectionBase::GetSubsystemInternal
                     ((FSubsystemCollectionBase *)&this->SubsystemCollection,pUVar3);
  return pUVar5;
}

// DisablePCMAudioCaching @ 1464fb8f0

bool __thiscall FAudioDevice::DisablePCMAudioCaching(FAudioDevice *this)

{
  return true;
}

// SupportsRealtimeDecompression @ 146527820

bool __thiscall FAudioDevice::SupportsRealtimeDecompression(FAudioDevice *this)

{
  return true;
}

// UpdateSubmixModulationSettings @ 14652e030

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAudioDevice::UpdateSubmixModulationSettings
          (FAudioDevice *this,USoundSubmix *param_1,USoundModulatorBase *param_2,
          USoundModulatorBase *param_3,USoundModulatorBase *param_4)

{
  if (1 < (byte)LogAudio._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_void___cdecl_FAudioDevice::UpdateSubmixModulationSettings(USoundSubmix*___ptr64,USoundModulatorBase*___ptr64,USoundModulatorBase*___ptr64,USoundModulatorBase*___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogAudio);
    return;
  }
  return;
}

