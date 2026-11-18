// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 3

// StaticStruct @ 14a49a7e0

UScriptStruct * __cdecl FRigUnit_FitChainToCurve_WorkData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_FitChainToCurve_WorkData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_FitChainToCurve_WorkData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_WorkData,
                         (UObject *)pUVar1,L"RigUnit_FitChainToCurve_WorkData");
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_FitChainToCurve_WorkData.OuterSingleton;
}

// ~FRigUnit_FitChainToCurve_WorkData @ 14a518670

void __thiscall
FRigUnit_FitChainToCurve_WorkData::~FRigUnit_FitChainToCurve_WorkData
          (FRigUnit_FitChainToCurve_WorkData *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ItemLocalTransforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ItemRotationT).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ItemRotationB).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ItemRotationA).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedItems).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CurveSegments).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CurvePositions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ItemSegments).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ItemPositions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 14a51a430

FRigUnit_FitChainToCurve_WorkData * __thiscall
FRigUnit_FitChainToCurve_WorkData::operator=
          (FRigUnit_FitChainToCurve_WorkData *this,FRigUnit_FitChainToCurve_WorkData *param_1)

{
  this->ChainLength = param_1->ChainLength;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->ItemPositions,&param_1->ItemPositions);
  TArray<float,TSizedDefaultAllocator<32>_>::operator=(&this->ItemSegments,&param_1->ItemSegments);
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->CurvePositions,&param_1->CurvePositions);
  TArray<float,TSizedDefaultAllocator<32>_>::operator=(&this->CurveSegments,&param_1->CurveSegments)
  ;
  TArray<FCachedRigElement,TSizedDefaultAllocator<32>_>::operator=
            (&this->CachedItems,&param_1->CachedItems);
  TArray<int,TSizedDefaultAllocator<32>_>::operator=(&this->ItemRotationA,&param_1->ItemRotationA);
  TArray<int,TSizedDefaultAllocator<32>_>::operator=(&this->ItemRotationB,&param_1->ItemRotationB);
  TArray<float,TSizedDefaultAllocator<32>_>::operator=(&this->ItemRotationT,&param_1->ItemRotationT)
  ;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->ItemLocalTransforms,&param_1->ItemLocalTransforms);
  return this;
}

