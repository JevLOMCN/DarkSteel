// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 1

// operator= @ 1464dd8a0

FAudioSpatializationInterfaceInfo * __thiscall
FAudioDevice::FAudioSpatializationInterfaceInfo::operator=
          (FAudioSpatializationInterfaceInfo *this,FAudioSpatializationInterfaceInfo *param_1)

{
  byte bVar1;
  TSharedPtr<IAudioSpatialization,1> *pTVar2;
  
  this->PluginName = param_1->PluginName;
  pTVar2 = &param_1->SpatializationPlugin;
  if (&this->SpatializationPlugin != pTVar2) {
    (this->SpatializationPlugin).Object = pTVar2->Object;
    pTVar2->Object = (IAudioSpatialization *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SpatializationPlugin).SharedReferenceCount,
               &(param_1->SpatializationPlugin).SharedReferenceCount);
  }
  this->MaxChannelsSupportedBySpatializationPlugin =
       param_1->MaxChannelsSupportedBySpatializationPlugin;
  bVar1 = (this->bSpatializationIsExternalSend ^ param_1->bSpatializationIsExternalSend) & 1 ^
          this->field_0x1c;
  this->field_0x1c = bVar1;
  bVar1 = (bVar1 ^ param_1->field_0x1c) & 2 ^ bVar1;
  this->field_0x1c = bVar1;
  this->field_0x1c = (bVar1 ^ param_1->field_0x1c) & 4 ^ bVar1;
  return this;
}

