// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FAudioSpatializationInterfaceInfo @ 14761d080

FAudioSpatializationInterfaceInfo * __thiscall
FAudioDevice::FAudioSpatializationInterfaceInfo::FAudioSpatializationInterfaceInfo
          (FAudioSpatializationInterfaceInfo *this,FName param_1,FAudioDevice *param_2,
          IAudioSpatializationFactory *param_3)

{
  TSharedPtr<IAudioSpatialization,1> *pTVar1;
  code *pcVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  FAudioSpatializationInterfaceInfo *pFVar8;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  pTVar1 = &this->SpatializationPlugin;
  this->PluginName = param_1;
  pTVar1->Object = (IAudioSpatialization *)0x0;
  (this->SpatializationPlugin).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bIsInitialized = '\0';
  this->MaxChannelsSupportedBySpatializationPlugin = 1;
  if ((param_2 == (FAudioDevice *)0x0) || (param_3 == (IAudioSpatializationFactory *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4014293163186331131>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDevice.cpp"
                       ,0x1dfb,"InAudioDevice && InAudioSpatializationFactoryPtr");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FAudioSpatializationInterfaceInfo *)(*pcVar2)();
      return pFVar8;
    }
  }
  else {
    puVar7 = (undefined8 *)(**(code **)((longlong)*param_3 + 0x30))(param_3,local_18);
    if (pTVar1 != (TSharedPtr<IAudioSpatialization,1> *)puVar7) {
      pTVar1->Object = (IAudioSpatialization *)*puVar7;
      *puVar7 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->SpatializationPlugin).SharedReferenceCount,
                 (FSharedReferencer<1> *)(puVar7 + 1));
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
    bVar3 = (**(code **)((longlong)*param_3 + 0x10))(param_3);
    this->field_0x1c = this->field_0x1c ^ (this->bSpatializationIsExternalSend ^ bVar3) & 1;
    iVar6 = (**(code **)((longlong)*param_3 + 0x28))(param_3);
    this->MaxChannelsSupportedBySpatializationPlugin = iVar6;
    cVar4 = (**(code **)((longlong)*param_3 + 0x18))(param_3);
    this->field_0x1c = this->field_0x1c ^ (cVar4 << 2 ^ this->field_0x1c) & 4U;
  }
  return this;
}

// IsValid @ 147649400

bool __thiscall
FAudioDevice::FAudioSpatializationInterfaceInfo::IsValid(FAudioSpatializationInterfaceInfo *this)

{
  if (((this->SpatializationPlugin).Object == (IAudioSpatialization *)0x0) &&
     (this->PluginName == (FName)0x0)) {
    return false;
  }
  return true;
}

