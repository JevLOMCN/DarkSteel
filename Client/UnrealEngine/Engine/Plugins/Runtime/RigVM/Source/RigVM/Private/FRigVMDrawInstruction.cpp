// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 2

// StaticStruct @ 14a06fa30

UScriptStruct * __cdecl FRigVMDrawInstruction::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMDrawInstruction.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMDrawInstruction.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMDrawInstruction,(UObject *)pUVar1,
                         L"RigVMDrawInstruction");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMDrawInstruction.OuterSingleton;
}

// FRigVMDrawInstruction @ 14a079790

FRigVMDrawInstruction * __thiscall
FRigVMDrawInstruction::FRigVMDrawInstruction
          (FRigVMDrawInstruction *this,FRigVMDrawInstruction *param_1)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FDynamicMeshVertex,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  undefined8 uVar7;
  double dVar8;
  
  pTVar1 = &this->Positions;
  this->Name = param_1->Name;
  (this->PrimitiveType).Value = (param_1->PrimitiveType).Value;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Positions).ArrayMax;
  iVar5 = (param_1->Positions).ArrayNum;
  pFVar6 = (param_1->Positions).AllocatorInstance.Data;
  (this->Positions).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar5,0,&pTVar1->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar6,(longlong)iVar5 * 0x18);
  }
  uVar7 = *(undefined8 *)((longlong)&(param_1->Color).field0_0x0 + 8);
  pTVar3 = &this->MeshVerts;
  *(undefined8 *)&(this->Color).field0_0x0 = *(undefined8 *)&(param_1->Color).field0_0x0;
  *(undefined8 *)((longlong)&(this->Color).field0_0x0 + 8) = uVar7;
  this->Thickness = param_1->Thickness;
  dVar8 = (param_1->Transform).Rotation.XY.m128d_f64[1];
  (this->Transform).Rotation.XY.m128d_f64[0] = (param_1->Transform).Rotation.XY.m128d_f64[0];
  (this->Transform).Rotation.XY.m128d_f64[1] = dVar8;
  dVar8 = (param_1->Transform).Rotation.ZW.m128d_f64[1];
  (this->Transform).Rotation.ZW.m128d_f64[0] = (param_1->Transform).Rotation.ZW.m128d_f64[0];
  (this->Transform).Rotation.ZW.m128d_f64[1] = dVar8;
  dVar8 = (param_1->Transform).Translation.XY.m128d_f64[1];
  (this->Transform).Translation.XY.m128d_f64[0] = (param_1->Transform).Translation.XY.m128d_f64[0];
  (this->Transform).Translation.XY.m128d_f64[1] = dVar8;
  dVar8 = (param_1->Transform).Translation.ZW.m128d_f64[1];
  (this->Transform).Translation.ZW.m128d_f64[0] = (param_1->Transform).Translation.ZW.m128d_f64[0];
  (this->Transform).Translation.ZW.m128d_f64[1] = dVar8;
  dVar8 = (param_1->Transform).Scale3D.XY.m128d_f64[1];
  (this->Transform).Scale3D.XY.m128d_f64[0] = (param_1->Transform).Scale3D.XY.m128d_f64[0];
  (this->Transform).Scale3D.XY.m128d_f64[1] = dVar8;
  dVar8 = (param_1->Transform).Scale3D.ZW.m128d_f64[1];
  (this->Transform).Scale3D.ZW.m128d_f64[0] = (param_1->Transform).Scale3D.ZW.m128d_f64[0];
  (this->Transform).Scale3D.ZW.m128d_f64[1] = dVar8;
  (this->DepthPriority).Value = (param_1->DepthPriority).Value;
  this->Lifetime = param_1->Lifetime;
  piVar2 = &(this->MeshVerts).ArrayMax;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar5 = (param_1->MeshVerts).ArrayNum;
  pFVar6 = (param_1->MeshVerts).AllocatorInstance.Data;
  (this->MeshVerts).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,4,iVar5,0,&pTVar3->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar6,(longlong)iVar5 * 0x58);
  }
  pTVar4 = &this->MeshIndices;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->MeshIndices).ArrayMax;
  iVar5 = (param_1->MeshIndices).ArrayNum;
  pFVar6 = (param_1->MeshIndices).AllocatorInstance.Data;
  (this->MeshIndices).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar5,0,&pTVar4->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar4->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 2);
  }
  this->MaterialRenderProxy = param_1->MaterialRenderProxy;
  return this;
}

