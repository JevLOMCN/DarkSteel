// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 1

// FLevelSetShape3d @ 14c897210

FLevelSetShape3d * __thiscall
UE::Geometry::FLevelSetShape3d::FLevelSetShape3d(FLevelSetShape3d *this,FLevelSetShape3d *param_1)

{
  TDenseGrid3<float> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  double dVar4;
  
  dVar4 = (param_1->GridTransform).Rotation.XY.m128d_f64[1];
  pTVar1 = &this->Grid;
  piVar2 = &(this->Grid).Buffer.ArrayMax;
  (this->GridTransform).Rotation.XY.m128d_f64[0] = (param_1->GridTransform).Rotation.XY.m128d_f64[0]
  ;
  (this->GridTransform).Rotation.XY.m128d_f64[1] = dVar4;
  dVar4 = (param_1->GridTransform).Rotation.ZW.m128d_f64[1];
  (this->GridTransform).Rotation.ZW.m128d_f64[0] = (param_1->GridTransform).Rotation.ZW.m128d_f64[0]
  ;
  (this->GridTransform).Rotation.ZW.m128d_f64[1] = dVar4;
  dVar4 = (param_1->GridTransform).Translation.XY.m128d_f64[1];
  (this->GridTransform).Translation.XY.m128d_f64[0] =
       (param_1->GridTransform).Translation.XY.m128d_f64[0];
  (this->GridTransform).Translation.XY.m128d_f64[1] = dVar4;
  dVar4 = (param_1->GridTransform).Translation.ZW.m128d_f64[1];
  (this->GridTransform).Translation.ZW.m128d_f64[0] =
       (param_1->GridTransform).Translation.ZW.m128d_f64[0];
  (this->GridTransform).Translation.ZW.m128d_f64[1] = dVar4;
  dVar4 = (param_1->GridTransform).Scale3D.XY.m128d_f64[1];
  (this->GridTransform).Scale3D.XY.m128d_f64[0] = (param_1->GridTransform).Scale3D.XY.m128d_f64[0];
  (this->GridTransform).Scale3D.XY.m128d_f64[1] = dVar4;
  dVar4 = (param_1->GridTransform).Scale3D.ZW.m128d_f64[1];
  (this->GridTransform).Scale3D.ZW.m128d_f64[0] = (param_1->GridTransform).Scale3D.ZW.m128d_f64[0];
  (this->GridTransform).Scale3D.ZW.m128d_f64[1] = dVar4;
  (pTVar1->Buffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Grid).Buffer.ArrayNum;
  _Src = (param_1->Grid).Buffer.AllocatorInstance.Data;
  (this->Grid).Buffer.ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,(ForAnyElementType *)pTVar1,iVar3,piVar2);
    memcpy((pTVar1->Buffer).AllocatorInstance.Data,_Src,(longlong)iVar3 << 2);
  }
  *(undefined8 *)&(this->Grid).Dimensions.field0_0x0 =
       *(undefined8 *)&(param_1->Grid).Dimensions.field0_0x0;
  (this->Grid).Dimensions.field0_0x0._s_0.Z = (param_1->Grid).Dimensions.field0_0x0._s_0.Z;
  this->CellSize = param_1->CellSize;
  return this;
}

