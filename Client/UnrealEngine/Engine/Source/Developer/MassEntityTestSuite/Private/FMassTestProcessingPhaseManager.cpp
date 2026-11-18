// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// OnNewArchetype @ 147192df0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UE::Mass::Testing::FMassTestProcessingPhaseManager::OnNewArchetype
          (FMassTestProcessingPhaseManager *this,FMassArchetypeHandle *param_1)

{
  FMassProcessingPhaseManager::OnNewArchetype((FMassProcessingPhaseManager *)this,param_1);
  return;
}

// Start @ 1471ab900

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UE::Mass::Testing::FMassTestProcessingPhaseManager::Start
          (FMassTestProcessingPhaseManager *this,TSharedPtr<FMassEntityManager,1> *param_1)

{
  FMassEntityManager *this_00;
  TMulticastDelegate<void___cdecl(FMassArchetypeHandle_const_&),FDefaultDelegateUserPolicy> *this_01
  ;
  FDelegateHandle FVar1;
  longlong lVar2;
  code **ppcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 local_50 [8];
  code *local_48;
  undefined4 local_40;
  undefined1 local_38 [16];
  undefined1 local_28 [24];
  
  TSharedPtr<FMassEntityManager,1>::operator=
            ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x560,param_1);
  this_00 = TSharedPtr<FMassEntityManager,1>::operator->
                      ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x560);
  this_01 = FMassEntityManager::GetOnNewArchetypeEvent(this_00);
  local_48 = OnNewArchetype;
  local_40 = 0;
  ppcVar3 = &local_48;
  puVar4 = local_38;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *(undefined1 *)ppcVar3;
    ppcVar3 = (code **)((longlong)ppcVar3 + 1);
    puVar4 = puVar4 + 1;
  }
  puVar4 = local_38;
  puVar5 = local_28;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  FVar1 = TMulticastDelegateRegistration<void___cdecl(FMassArchetypeHandle_const_&),FDefaultDelegateUserPolicy>
          ::AddRaw<UE::Mass::Testing::FMassTestProcessingPhaseManager>
                    ((TMulticastDelegateRegistration<void___cdecl(FMassArchetypeHandle_const_&),FDefaultDelegateUserPolicy>
                      *)this_01,(FMassTestProcessingPhaseManager *)local_50,(pmf_a2a88769 *)this);
  *(undefined8 *)&this->field_0x580 = *(undefined8 *)FVar1.ID;
  this->field_0x589 = 1;
  return;
}

