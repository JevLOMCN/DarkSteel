// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosVDRuntime
// Functions: 2

// StaticStruct @ 1436ce3a0

UScriptStruct * __cdecl FChaosVDDebugDrawShapeBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDDebugDrawShapeBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UScriptStruct_FChaosVDDebugDrawShapeBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDDebugDrawShapeBase,(UObject *)pUVar1,
                         L"ChaosVDDebugDrawShapeBase");
  }
  return Z_Registration_Info_UScriptStruct_FChaosVDDebugDrawShapeBase.OuterSingleton;
}

// SerializeBase_Internal @ 1436e0830

void __thiscall
FChaosVDDebugDrawShapeBase::SerializeBase_Internal
          (FChaosVDDebugDrawShapeBase *this,FArchive *param_1)

{
  int *piVar1;
  FColor *pFVar2;
  EChaosVDParticleContext *pEVar3;
  int *piVar4;
  FColor_u_0 *pFVar5;
  EChaosVDParticleContext *pEVar6;
  int iVar7;
  
  piVar1 = &this->SolverID;
  piVar4 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->Tag);
  pFVar2 = &this->Color;
  pFVar5 = (FColor_u_0 *)**(undefined8 **)&param_1->field_0x8;
  if ((FColor_u_0 *)(*(undefined8 **)&param_1->field_0x8)[1] < pFVar5 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar2);
    }
  }
  else {
    pFVar2->field0_0x0 = *pFVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  iVar7 = FArchiveState::CustomVer((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID)
  ;
  if (0xcd < iVar7) {
    pEVar3 = &this->ThreadContext;
    pEVar6 = (EChaosVDParticleContext *)**(undefined8 **)&param_1->field_0x8;
    if (pEVar6 + 1 <= (EChaosVDParticleContext *)(*(undefined8 **)&param_1->field_0x8)[1]) {
      *pEVar3 = *pEVar6;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      return;
    }
    if ((param_1->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001436e095e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pEVar3,4);
      return;
    }
    FArchive::SerializeByteOrderSwapped(param_1,pEVar3);
  }
  return;
}

