// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// Update<FDynamicSkelMeshObjectDataGPUSkin> @ 14861f600

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FSkeletalMeshUpdateHandle::Update<FDynamicSkelMeshObjectDataGPUSkin>
          (FSkeletalMeshUpdateHandle *this,FDynamicSkelMeshObjectDataGPUSkin *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (this->Channel != (FSkeletalMeshUpdateChannel *)0x0) {
    if ((FBackend *)FSkeletalMeshUpdateChannel::TBackend<FSkeletalMeshUpdatePacketGPUSkin>::Instance
        != this->Channel->Backend) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Channel->IsChannelFor<SkeletalMeshMeshDynamicDataType>()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\SkeletalMeshUpdater.inl"
                         ,10,L"Provided MeshDynamicData is not the correct type for this handle.");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    bVar2 = FSkeletalMeshUpdateChannel::Update
                      (this->Channel,this,(FSkeletalMeshDynamicData *)param_1);
    return bVar2;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<2989335531944411144>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\SkeletalMeshUpdater.inl"
                     ,8,"Channel");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// Update<FDynamicSkelMeshObjectDataNanite> @ 1486903d0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FSkeletalMeshUpdateHandle::Update<FDynamicSkelMeshObjectDataNanite>
          (FSkeletalMeshUpdateHandle *this,FDynamicSkelMeshObjectDataNanite *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (this->Channel != (FSkeletalMeshUpdateChannel *)0x0) {
    if ((FBackend *)FSkeletalMeshUpdateChannel::TBackend<FSkeletalMeshUpdatePacketNanite>::Instance
        != this->Channel->Backend) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Channel->IsChannelFor<SkeletalMeshMeshDynamicDataType>()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\SkeletalMeshUpdater.inl"
                         ,10,L"Provided MeshDynamicData is not the correct type for this handle.");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    bVar2 = FSkeletalMeshUpdateChannel::Update
                      (this->Channel,this,(FSkeletalMeshDynamicData *)param_1);
    return bVar2;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<2989335531944411144>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\SkeletalMeshUpdater.inl"
                     ,8,"Channel");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

