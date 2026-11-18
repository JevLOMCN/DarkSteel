// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a2c7ce0

UScriptStruct * __cdecl FRigLocalAndGlobalTransform::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigLocalAndGlobalTransform.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigLocalAndGlobalTransform.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigLocalAndGlobalTransform,(UObject *)pUVar1,
                         L"RigLocalAndGlobalTransform");
  }
  return Z_Registration_Info_UScriptStruct_FRigLocalAndGlobalTransform.OuterSingleton;
}

// operator= @ 14a2e07c0

FRigLocalAndGlobalTransform * __thiscall
FRigLocalAndGlobalTransform::operator=
          (FRigLocalAndGlobalTransform *this,FRigLocalAndGlobalTransform *param_1)

{
  TTransform<double> *pTVar1;
  double dVar2;
  TTransform<double> *pTVar3;
  
  if ((this->Local).Storage != (TTransform<double> *)0x0) {
    pTVar3 = FRigComputedTransform::Get(&param_1->Local);
    pTVar1 = (this->Local).Storage;
    dVar2 = (pTVar3->Rotation).XY.m128d_f64[1];
    (pTVar1->Rotation).XY.m128d_f64[0] = (pTVar3->Rotation).XY.m128d_f64[0];
    (pTVar1->Rotation).XY.m128d_f64[1] = dVar2;
    dVar2 = (pTVar3->Rotation).ZW.m128d_f64[1];
    (pTVar1->Rotation).ZW.m128d_f64[0] = (pTVar3->Rotation).ZW.m128d_f64[0];
    (pTVar1->Rotation).ZW.m128d_f64[1] = dVar2;
    dVar2 = (pTVar3->Translation).XY.m128d_f64[1];
    (pTVar1->Translation).XY.m128d_f64[0] = (pTVar3->Translation).XY.m128d_f64[0];
    (pTVar1->Translation).XY.m128d_f64[1] = dVar2;
    dVar2 = (pTVar3->Translation).ZW.m128d_f64[1];
    (pTVar1->Translation).ZW.m128d_f64[0] = (pTVar3->Translation).ZW.m128d_f64[0];
    (pTVar1->Translation).ZW.m128d_f64[1] = dVar2;
    dVar2 = (pTVar3->Scale3D).XY.m128d_f64[1];
    (pTVar1->Scale3D).XY.m128d_f64[0] = (pTVar3->Scale3D).XY.m128d_f64[0];
    (pTVar1->Scale3D).XY.m128d_f64[1] = dVar2;
    dVar2 = (pTVar3->Scale3D).ZW.m128d_f64[1];
    (pTVar1->Scale3D).ZW.m128d_f64[0] = (pTVar3->Scale3D).ZW.m128d_f64[0];
    (pTVar1->Scale3D).ZW.m128d_f64[1] = dVar2;
  }
  if ((this->Global).Storage != (TTransform<double> *)0x0) {
    pTVar3 = FRigComputedTransform::Get(&param_1->Global);
    pTVar1 = (this->Global).Storage;
    dVar2 = (pTVar3->Rotation).XY.m128d_f64[1];
    (pTVar1->Rotation).XY.m128d_f64[0] = (pTVar3->Rotation).XY.m128d_f64[0];
    (pTVar1->Rotation).XY.m128d_f64[1] = dVar2;
    dVar2 = (pTVar3->Rotation).ZW.m128d_f64[1];
    (pTVar1->Rotation).ZW.m128d_f64[0] = (pTVar3->Rotation).ZW.m128d_f64[0];
    (pTVar1->Rotation).ZW.m128d_f64[1] = dVar2;
    dVar2 = (pTVar3->Translation).XY.m128d_f64[1];
    (pTVar1->Translation).XY.m128d_f64[0] = (pTVar3->Translation).XY.m128d_f64[0];
    (pTVar1->Translation).XY.m128d_f64[1] = dVar2;
    dVar2 = (pTVar3->Translation).ZW.m128d_f64[1];
    (pTVar1->Translation).ZW.m128d_f64[0] = (pTVar3->Translation).ZW.m128d_f64[0];
    (pTVar1->Translation).ZW.m128d_f64[1] = dVar2;
    dVar2 = (pTVar3->Scale3D).XY.m128d_f64[1];
    (pTVar1->Scale3D).XY.m128d_f64[0] = (pTVar3->Scale3D).XY.m128d_f64[0];
    (pTVar1->Scale3D).XY.m128d_f64[1] = dVar2;
    dVar2 = (pTVar3->Scale3D).ZW.m128d_f64[1];
    (pTVar1->Scale3D).ZW.m128d_f64[0] = (pTVar3->Scale3D).ZW.m128d_f64[0];
    (pTVar1->Scale3D).ZW.m128d_f64[1] = dVar2;
  }
  return this;
}

// LinkStorage @ 14a32a0a0

void __thiscall
FRigLocalAndGlobalTransform::LinkStorage
          (FRigLocalAndGlobalTransform *this,TArrayView<UE::Math::TTransform<double>,int> *param_1)

{
  int iVar1;
  
  iVar1 = (this->Local).StorageIndex;
  if ((-1 < iVar1) && (iVar1 < param_1->ArrayNum)) {
    (this->Local).Storage = param_1->DataPtr + iVar1;
  }
  iVar1 = (this->Global).StorageIndex;
  if ((-1 < iVar1) && (iVar1 < param_1->ArrayNum)) {
    (this->Global).Storage = param_1->DataPtr + iVar1;
  }
  return;
}

// Load @ 14a32c220

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRigLocalAndGlobalTransform::Load
          (FRigLocalAndGlobalTransform *this,FArchive *param_1,
          FRigHierarchySerializationSettings *param_2,FRigLocalAndGlobalDirtyState *param_3)

{
  code *pcVar1;
  bool bVar2;
  bool *pbVar3;
  
  if (param_2->bSerializeLocalTransform != false) {
    FRigComputedTransform::Load(&this->Local,param_1,param_2,&param_3->Local);
    if (param_2->bSerializeGlobalTransform != false) goto LAB_14a32c2e3;
    pbVar3 = (param_3->Local).Storage;
    if (pbVar3 == (bool *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_4557919968548617682>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyElements.cpp"
                         ,0x22e,"false");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pbVar3 = &bDefaultDirtyFlag;
    }
    if ((*pbVar3 != false) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!OutDirtyState.Local.Get()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyElements.cpp"
                           ,0x2eb,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pbVar3 = (param_3->Global).Storage;
    if ((pbVar3 != (bool *)0x0) && (*pbVar3 != true)) {
      *pbVar3 = true;
    }
  }
  if (param_2->bSerializeGlobalTransform == false) {
    return;
  }
LAB_14a32c2e3:
  FRigComputedTransform::Load(&this->Global,param_1,param_2,&param_3->Global);
  if (param_2->bSerializeLocalTransform == false) {
    pbVar3 = (param_3->Global).Storage;
    if (pbVar3 == (bool *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_4557919968548617682>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyElements.cpp"
                         ,0x22e,"false");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pbVar3 = &bDefaultDirtyFlag;
    }
    if ((*pbVar3 != false) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!OutDirtyState.Global.Get()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyElements.cpp"
                           ,0x2f4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pbVar3 = (param_3->Local).Storage;
    if ((pbVar3 != (bool *)0x0) && (*pbVar3 != true)) {
      *pbVar3 = true;
    }
  }
  return;
}

// Save @ 14a345630

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRigLocalAndGlobalTransform::Save
          (FRigLocalAndGlobalTransform *this,FArchive *param_1,
          FRigHierarchySerializationSettings *param_2,FRigLocalAndGlobalDirtyState *param_3)

{
  bool *pbVar1;
  code *pcVar2;
  bool bVar3;
  
  if (param_2->bSerializeLocalTransform != false) {
    if (param_2->bSerializeGlobalTransform == false) {
      pbVar1 = (param_3->Local).Storage;
      if (pbVar1 == (bool *)0x0) {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4557919968548617693>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyElements.cpp"
                           ,0x223,"false");
      }
      else {
        if (*pbVar1 == false) goto LAB_14a3456bf;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InDirtyState.Local.Get()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyElements.cpp"
                           ,0x2d6,L"");
      }
      if (bVar3 != false) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
LAB_14a3456bf:
    FRigComputedTransform::Save(&this->Local,param_1,param_2,&param_3->Local);
  }
  if (param_2->bSerializeGlobalTransform == false) {
    return;
  }
  if (param_2->bSerializeLocalTransform == false) {
    pbVar1 = (param_3->Global).Storage;
    if (pbVar1 == (bool *)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_4557919968548617693>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyElements.cpp"
                         ,0x223,"false");
    }
    else {
      if (*pbVar1 == false) goto LAB_14a345733;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InDirtyState.Global.Get()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyElements.cpp"
                         ,0x2de,L"");
    }
    if (bVar3 != false) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
LAB_14a345733:
  FRigComputedTransform::Save(&this->Global,param_1,param_2,&param_3->Global);
  return;
}

// UnlinkStorage @ 14a35bf80

void __thiscall
FRigLocalAndGlobalTransform::UnlinkStorage
          (FRigLocalAndGlobalTransform *this,
          FRigReusableElementStorage<UE::Math::TTransform<double>_> *param_1)

{
  FRigReusableElementStorage<UE::Math::TTransform<double>_>::Deallocate
            (param_1,(int *)this,&(this->Local).Storage);
  FRigReusableElementStorage<UE::Math::TTransform<double>_>::Deallocate
            (param_1,&(this->Global).StorageIndex,&(this->Global).Storage);
  return;
}

