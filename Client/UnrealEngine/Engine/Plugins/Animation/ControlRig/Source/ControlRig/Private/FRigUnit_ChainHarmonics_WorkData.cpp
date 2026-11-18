// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 3

// StaticStruct @ 14a47c4a0

UScriptStruct * __cdecl FRigUnit_ChainHarmonics_WorkData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_ChainHarmonics_WorkData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_ChainHarmonics_WorkData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData,
                         (UObject *)pUVar1,L"RigUnit_ChainHarmonics_WorkData");
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_ChainHarmonics_WorkData.OuterSingleton;
}

// ~FRigUnit_ChainHarmonics_WorkData @ 14a5183d0

void __thiscall
FRigUnit_ChainHarmonics_WorkData::~FRigUnit_ChainHarmonics_WorkData
          (FRigUnit_ChainHarmonics_WorkData *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->VelocityLines).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->HierarchyLine).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PendulumVelocity).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PendulumPosition).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PendulumTip).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LocalTip).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Ratio).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Items).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 14a51a090

FRigUnit_ChainHarmonics_WorkData * __thiscall
FRigUnit_ChainHarmonics_WorkData::operator=
          (FRigUnit_ChainHarmonics_WorkData *this,FRigUnit_ChainHarmonics_WorkData *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->Time).field0_0x0._s_0.Y;
  (this->Time).field0_0x0._s_0.X = (param_1->Time).field0_0x0._s_0.X;
  (this->Time).field0_0x0._s_0.Y = dVar1;
  (this->Time).field0_0x0._s_0.Z = (param_1->Time).field0_0x0._s_0.Z;
  TArray<FCachedRigElement,TSizedDefaultAllocator<32>_>::operator=(&this->Items,&param_1->Items);
  TArray<float,TSizedDefaultAllocator<32>_>::operator=(&this->Ratio,&param_1->Ratio);
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->LocalTip,&param_1->LocalTip);
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->PendulumTip,&param_1->PendulumTip);
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->PendulumPosition,&param_1->PendulumPosition);
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->PendulumVelocity,&param_1->PendulumVelocity);
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->HierarchyLine,&param_1->HierarchyLine);
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->VelocityLines,&param_1->VelocityLines);
  return this;
}

