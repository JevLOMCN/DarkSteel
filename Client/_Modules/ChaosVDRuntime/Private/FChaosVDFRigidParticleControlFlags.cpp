// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosVDRuntime
// Functions: 2

// StaticStruct @ 1436c8030

UScriptStruct * __cdecl FChaosVDFRigidParticleControlFlags::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDFRigidParticleControlFlags.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UScriptStruct_FChaosVDFRigidParticleControlFlags.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDFRigidParticleControlFlags,
                         (UObject *)pUVar1,L"ChaosVDFRigidParticleControlFlags");
  }
  return Z_Registration_Info_UScriptStruct_FChaosVDFRigidParticleControlFlags.OuterSingleton;
}

// Serialize @ 1436dcda0

bool __thiscall
FChaosVDFRigidParticleControlFlags::Serialize
          (FChaosVDFRigidParticleControlFlags *this,FArchive *param_1)

{
  int *piVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 local_res10 [8];
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteSeasonBranchObjectVersion::GUID);
  iVar4 = FArchiveState::CustomVer
                    ((FArchiveState *)param_1,&FFortniteSeasonBranchObjectVersion::GUID);
  if (0xc < iVar4) {
    ::operator<<(param_1,(bool *)&this->_padding_);
    if ((char)this->_padding_ == '\0') goto LAB_1436dcf9d;
  }
  ::operator<<(param_1,&this->bGravityEnabled);
  ::operator<<(param_1,&this->bCCDEnabled);
  ::operator<<(param_1,&this->bOneWayInteractionEnabled);
  ::operator<<(param_1,&this->bInertiaConditioningEnabled);
  piVar1 = &this->GravityGroupIndex;
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  ::operator<<(param_1,&this->bMACDEnabled);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  iVar4 = FArchiveState::CustomVer((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID)
  ;
  if (0xa9 < iVar4) {
    iVar4 = FArchiveState::CustomVer
                      ((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID);
    if (iVar4 < 0xd7) {
      plVar3 = *(longlong **)&param_1->field_0x8;
      if ((undefined1 *)plVar3[1] < (undefined1 *)*plVar3 + 1) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,1);
      }
      else {
        local_res10[0] = *(undefined1 *)*plVar3;
        *plVar3 = *plVar3 + 1;
      }
      plVar3 = *(longlong **)&param_1->field_0x8;
      if ((undefined1 *)plVar3[1] < (undefined1 *)*plVar3 + 1) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,1);
      }
      else {
        local_res10[0] = *(undefined1 *)*plVar3;
        *plVar3 = *plVar3 + 1;
      }
      plVar3 = *(longlong **)&param_1->field_0x8;
      if ((undefined1 *)plVar3[1] < (undefined1 *)*plVar3 + 1) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,1);
      }
      else {
        local_res10[0] = *(undefined1 *)*plVar3;
        *plVar3 = *plVar3 + 1;
      }
    }
  }
  iVar4 = FArchiveState::CustomVer((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID)
  ;
  if (0xad < iVar4) {
    ::operator<<(param_1,&this->bGyroscopicTorqueEnabled);
  }
  iVar4 = FArchiveState::CustomVer((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID)
  ;
  if (0xd0 < iVar4) {
    ::operator<<(param_1,&this->bPartialIslandSleepAllowed);
  }
LAB_1436dcf9d:
  return (bool)((byte)~param_1->field_0x29 >> 1 & 1);
}

