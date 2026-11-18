// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsControl
// Functions: 2

// StaticStruct @ 14d9b0d70

UScriptStruct * __cdecl FPhysicsBodyModifierCreationData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPhysicsBodyModifierCreationData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PhysicsControl();
    Z_Registration_Info_UScriptStruct_FPhysicsBodyModifierCreationData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPhysicsBodyModifierCreationData,
                         (UObject *)pUVar1,L"PhysicsBodyModifierCreationData");
  }
  return Z_Registration_Info_UScriptStruct_FPhysicsBodyModifierCreationData.OuterSingleton;
}

// FPhysicsBodyModifierCreationData @ 14d9bf110

FPhysicsBodyModifierCreationData * __thiscall
FPhysicsBodyModifierCreationData::FPhysicsBodyModifierCreationData
          (FPhysicsBodyModifierCreationData *this,FPhysicsBodyModifierCreationData *param_1)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  EPhysicsMovementType EVar4;
  TEnumAsByte<ECollisionEnabled::Type> TVar5;
  EPhysicsControlKinematicTargetSpace EVar6;
  undefined1 uVar7;
  float fVar8;
  bool bVar9;
  undefined3 uVar10;
  
  EVar4 = (param_1->Modifier).ModifierData.MovementType;
  TVar5.Value = (param_1->Modifier).ModifierData.CollisionType.Value;
  EVar6 = (param_1->Modifier).ModifierData.KinematicTargetSpace;
  uVar7 = (param_1->Modifier).ModifierData.field_0x3;
  fVar8 = (param_1->Modifier).ModifierData.GravityMultiplier;
  pTVar1 = &this->Sets;
  piVar2 = &(this->Sets).ArrayMax;
  (this->Modifier).BoneName = (param_1->Modifier).BoneName;
  (this->Modifier).ModifierData.MovementType = EVar4;
  (this->Modifier).ModifierData.CollisionType = (TEnumAsByte<ECollisionEnabled::Type>)TVar5.Value;
  (this->Modifier).ModifierData.KinematicTargetSpace = EVar6;
  (this->Modifier).ModifierData.field_0x3 = uVar7;
  (this->Modifier).ModifierData.GravityMultiplier = fVar8;
  bVar9 = (param_1->Modifier).ModifierData.bUpdateKinematicFromSimulation;
  uVar10 = *(undefined3 *)&(param_1->Modifier).ModifierData.field_0xd;
  (this->Modifier).ModifierData.PhysicsBlendWeight =
       (param_1->Modifier).ModifierData.PhysicsBlendWeight;
  (this->Modifier).ModifierData.bUpdateKinematicFromSimulation = bVar9;
  *(undefined3 *)&(this->Modifier).ModifierData.field_0xd = uVar10;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Sets).ArrayNum;
  _Src = (param_1->Sets).AllocatorInstance.Data;
  (this->Sets).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 3);
  }
  return this;
}

