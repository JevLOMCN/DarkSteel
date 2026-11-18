// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 47

// FGeometryCollection @ 143fd4920

FGeometryCollection * __thiscall
FGeometryCollection::FGeometryCollection
          (FGeometryCollection *this,FGeometryCollectionDefaults *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FTransformCollection::FTransformCollection((FTransformCollection *)this);
  FGeometryCollectionConvexPropertiesInterface::FGeometryCollectionConvexPropertiesInterface
            ((FGeometryCollectionConvexPropertiesInterface *)&this->_padding_,
             (FManagedArrayCollection *)this);
  FGeometryCollectionProximityPropertiesInterface::FGeometryCollectionProximityPropertiesInterface
            ((FGeometryCollectionProximityPropertiesInterface *)&this->_padding_,this);
  uVar1 = *(undefined8 *)&(param_1->DefaultVertexColor).field0_0x0;
  uVar2 = *(undefined8 *)((longlong)&(param_1->DefaultVertexColor).field0_0x0 + 8);
  this->_padding_ = (longlong)&_vftable__for__FTransformCollection__;
  this->_padding_ = (longlong)&_vftable__for__FGeometryCollectionConvexPropertiesInterface__;
  this->_padding_ = (longlong)&_vftable__for__FGeometryCollectionProximityPropertiesInterface__;
  *(undefined8 *)&(this->Defaults).DefaultVertexColor.field0_0x0 = uVar1;
  *(undefined8 *)((longlong)&(this->Defaults).DefaultVertexColor.field0_0x0 + 8) = uVar2;
  *(undefined ***)&this->Color = &___7__TManagedArray_UFLinearColor____6B_;
  *(undefined ***)&this->Indices = &___7__TManagedArray_U__TIntVector3_H_Math_UE____6B_;
  (this->TransformToGeometryIndex).field_0x8 = 0;
  *(undefined8 *)&(this->TransformToGeometryIndex).field_0x10 = 0;
  *(undefined8 *)&(this->TransformToGeometryIndex).field_0x18 = 0;
  *(undefined ***)&this->TransformToGeometryIndex = &___7__TManagedArray_H__6B_;
  (this->SimulationType).field_0x8 = 0;
  *(undefined8 *)&(this->SimulationType).field_0x10 = 0;
  *(undefined8 *)&(this->SimulationType).field_0x18 = 0;
  *(undefined ***)&this->SimulationType = &___7__TManagedArray_H__6B_;
  (this->StatusFlags).field_0x8 = 0;
  *(undefined8 *)&(this->StatusFlags).field_0x10 = 0;
  *(undefined8 *)&(this->StatusFlags).field_0x18 = 0;
  *(undefined ***)&this->StatusFlags = &___7__TManagedArray_H__6B_;
  (this->InitialDynamicState).field_0x8 = 0;
  *(undefined8 *)&(this->InitialDynamicState).field_0x10 = 0;
  *(undefined8 *)&(this->InitialDynamicState).field_0x18 = 0;
  *(undefined ***)&this->InitialDynamicState = &___7__TManagedArray_H__6B_;
  (this->ExemplarIndex).field_0x8 = 0;
  *(undefined8 *)&(this->ExemplarIndex).field_0x10 = 0;
  *(undefined8 *)&(this->ExemplarIndex).field_0x18 = 0;
  *(undefined ***)&this->ExemplarIndex = &___7__TManagedArray_H__6B_;
  (this->Vertex).field_0x8 = 0;
  *(undefined8 *)&(this->Vertex).field_0x10 = 0;
  *(undefined8 *)&(this->Vertex).field_0x18 = 0;
  *(undefined ***)&this->Vertex = &___7__TManagedArray_U__TVector_M_Math_UE____6B_;
  (this->Color).field_0x8 = 0;
  *(undefined8 *)&(this->Color).field_0x10 = 0;
  *(undefined8 *)&(this->Color).field_0x18 = 0;
  (this->TangentU).field_0x8 = 0;
  *(undefined8 *)&(this->TangentU).field_0x10 = 0;
  *(undefined8 *)&(this->TangentU).field_0x18 = 0;
  *(undefined ***)&this->TangentU = &___7__TManagedArray_U__TVector_M_Math_UE____6B_;
  (this->TangentV).field_0x8 = 0;
  *(undefined8 *)&(this->TangentV).field_0x10 = 0;
  *(undefined8 *)&(this->TangentV).field_0x18 = 0;
  *(undefined ***)&this->TangentV = &___7__TManagedArray_U__TVector_M_Math_UE____6B_;
  (this->Normal).field_0x8 = 0;
  *(undefined8 *)&(this->Normal).field_0x10 = 0;
  *(undefined8 *)&(this->Normal).field_0x18 = 0;
  *(undefined ***)&this->Normal = &___7__TManagedArray_U__TVector_M_Math_UE____6B_;
  (this->BoneMap).field_0x8 = 0;
  *(undefined8 *)&(this->BoneMap).field_0x10 = 0;
  *(undefined8 *)&(this->BoneMap).field_0x18 = 0;
  *(undefined ***)&this->BoneMap = &___7__TManagedArray_H__6B_;
  (this->Indices).field_0x8 = 0;
  *(undefined8 *)&(this->Indices).field_0x10 = 0;
  *(undefined8 *)&(this->Indices).field_0x18 = 0;
  *(undefined8 *)&(this->Visible).field_0x20 = 0;
  (this->Visible).field_0x8 = 0;
  *(undefined4 *)&(this->Visible).field_0x28 = 0;
  *(undefined4 *)&(this->Visible).field_0x2c = 0x80;
  *(undefined ***)&this->Visible = &___7__TManagedArray__N__6B_;
  (this->MaterialIndex).field_0x8 = 0;
  *(undefined8 *)&(this->MaterialIndex).field_0x10 = 0;
  *(undefined8 *)&(this->MaterialIndex).field_0x18 = 0;
  *(undefined ***)&this->MaterialIndex = &___7__TManagedArray_H__6B_;
  (this->MaterialID).field_0x8 = 0;
  *(undefined8 *)&(this->MaterialID).field_0x10 = 0;
  *(undefined8 *)&(this->MaterialID).field_0x18 = 0;
  *(undefined ***)&this->MaterialID = &___7__TManagedArray_H__6B_;
  *(undefined8 *)&(this->Internal).field_0x20 = 0;
  (this->Internal).field_0x8 = 0;
  *(undefined4 *)&(this->Internal).field_0x28 = 0;
  *(undefined4 *)&(this->Internal).field_0x2c = 0x80;
  *(undefined ***)&this->Internal = &___7__TManagedArray__N__6B_;
  *(undefined ***)&this->BoundingBox = &___7__TManagedArray_U__TBox_N_Math_UE____6B_;
  *(undefined ***)&this->InnerRadius = &___7__TManagedArray_M__6B_;
  *(undefined ***)&this->OuterRadius = &___7__TManagedArray_M__6B_;
  *(undefined ***)&this->Sections = &___7__TManagedArray_UFGeometryCollectionSection____6B_;
  (this->TransformIndex).field_0x8 = 0;
  *(undefined8 *)&(this->TransformIndex).field_0x10 = 0;
  *(undefined8 *)&(this->TransformIndex).field_0x18 = 0;
  *(undefined ***)&this->TransformIndex = &___7__TManagedArray_H__6B_;
  (this->BoundingBox).field_0x8 = 0;
  *(undefined8 *)&(this->BoundingBox).field_0x10 = 0;
  *(undefined8 *)&(this->BoundingBox).field_0x18 = 0;
  (this->InnerRadius).field_0x8 = 0;
  *(undefined8 *)&(this->InnerRadius).field_0x10 = 0;
  *(undefined8 *)&(this->InnerRadius).field_0x18 = 0;
  (this->OuterRadius).field_0x8 = 0;
  *(undefined8 *)&(this->OuterRadius).field_0x10 = 0;
  *(undefined8 *)&(this->OuterRadius).field_0x18 = 0;
  (this->VertexStart).field_0x8 = 0;
  *(undefined8 *)&(this->VertexStart).field_0x10 = 0;
  *(undefined8 *)&(this->VertexStart).field_0x18 = 0;
  *(undefined ***)&this->VertexStart = &___7__TManagedArray_H__6B_;
  (this->VertexCount).field_0x8 = 0;
  *(undefined8 *)&(this->VertexCount).field_0x10 = 0;
  *(undefined8 *)&(this->VertexCount).field_0x18 = 0;
  *(undefined ***)&this->VertexCount = &___7__TManagedArray_H__6B_;
  (this->FaceStart).field_0x8 = 0;
  *(undefined8 *)&(this->FaceStart).field_0x10 = 0;
  *(undefined8 *)&(this->FaceStart).field_0x18 = 0;
  *(undefined ***)&this->FaceStart = &___7__TManagedArray_H__6B_;
  (this->FaceCount).field_0x8 = 0;
  *(undefined8 *)&(this->FaceCount).field_0x10 = 0;
  *(undefined8 *)&(this->FaceCount).field_0x18 = 0;
  *(undefined ***)&this->FaceCount = &___7__TManagedArray_H__6B_;
  (this->Sections).field_0x8 = 0;
  *(undefined8 *)&(this->Sections).field_0x10 = 0;
  *(undefined8 *)&(this->Sections).field_0x18 = 0;
  Construct(this);
  return this;
}

// ~FGeometryCollection @ 143fd7580

void __thiscall FGeometryCollection::~FGeometryCollection(FGeometryCollection *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__FTransformCollection__;
  this->_padding_ = (longlong)&_vftable__for__FGeometryCollectionConvexPropertiesInterface__;
  this->_padding_ = (longlong)&_vftable__for__FGeometryCollectionProximityPropertiesInterface__;
  *(undefined ***)&this->Sections = &___7__TManagedArrayBase_UFGeometryCollectionSection____6B_;
  pvVar1 = *(void **)&(this->Sections).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->Sections = &___7FManagedArrayBase__6B_;
  *(undefined ***)&this->FaceCount = &___7__TManagedArrayBase_H__6B_;
  pvVar1 = *(void **)&(this->FaceCount).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->FaceCount = &___7FManagedArrayBase__6B_;
  *(undefined ***)&this->FaceStart = &___7__TManagedArrayBase_H__6B_;
  pvVar1 = *(void **)&(this->FaceStart).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->FaceStart = &___7FManagedArrayBase__6B_;
  *(undefined ***)&this->VertexCount = &___7__TManagedArrayBase_H__6B_;
  pvVar1 = *(void **)&(this->VertexCount).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->VertexCount = &___7FManagedArrayBase__6B_;
  *(undefined ***)&this->VertexStart = &___7__TManagedArrayBase_H__6B_;
  pvVar1 = *(void **)&(this->VertexStart).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->VertexStart = &___7FManagedArrayBase__6B_;
  *(undefined ***)&this->OuterRadius = &___7__TManagedArrayBase_M__6B_;
  pvVar1 = *(void **)&(this->OuterRadius).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->OuterRadius = &___7FManagedArrayBase__6B_;
  *(undefined ***)&this->InnerRadius = &___7__TManagedArrayBase_M__6B_;
  pvVar1 = *(void **)&(this->InnerRadius).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->InnerRadius = &___7FManagedArrayBase__6B_;
  *(undefined ***)&this->BoundingBox = &___7__TManagedArrayBase_U__TBox_N_Math_UE____6B_;
  pvVar1 = *(void **)&(this->BoundingBox).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->BoundingBox = &___7FManagedArrayBase__6B_;
  *(undefined ***)&this->TransformIndex = &___7__TManagedArrayBase_H__6B_;
  pvVar1 = *(void **)&(this->TransformIndex).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->TransformIndex = &___7FManagedArrayBase__6B_;
  *(undefined ***)&this->Internal = &___7FManagedBitArrayBase__6B_;
  pvVar1 = *(void **)&(this->Internal).field_0x20;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->Internal = &___7FManagedArrayBase__6B_;
  *(undefined ***)&this->MaterialID = &___7__TManagedArrayBase_H__6B_;
  pvVar1 = *(void **)&(this->MaterialID).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MaterialID = &___7FManagedArrayBase__6B_;
  *(undefined ***)&this->MaterialIndex = &___7__TManagedArrayBase_H__6B_;
  pvVar1 = *(void **)&(this->MaterialIndex).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MaterialIndex = &___7FManagedArrayBase__6B_;
  *(undefined ***)&this->Visible = &___7FManagedBitArrayBase__6B_;
  pvVar1 = *(void **)&(this->Visible).field_0x20;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->Visible = &___7FManagedArrayBase__6B_;
  *(undefined ***)&this->Indices = &___7__TManagedArrayBase_U__TIntVector3_H_Math_UE____6B_;
  pvVar1 = *(void **)&(this->Indices).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->Indices = &___7FManagedArrayBase__6B_;
  *(undefined ***)&this->BoneMap = &___7__TManagedArrayBase_H__6B_;
  pvVar1 = *(void **)&(this->BoneMap).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->BoneMap = &___7FManagedArrayBase__6B_;
  *(undefined ***)&this->Normal = &___7__TManagedArrayBase_U__TVector_M_Math_UE____6B_;
  pvVar1 = *(void **)&(this->Normal).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->Normal = &___7FManagedArrayBase__6B_;
  *(undefined ***)&this->TangentV = &___7__TManagedArrayBase_U__TVector_M_Math_UE____6B_;
  pvVar1 = *(void **)&(this->TangentV).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->TangentV = &___7FManagedArrayBase__6B_;
  *(undefined ***)&this->TangentU = &___7__TManagedArrayBase_U__TVector_M_Math_UE____6B_;
  pvVar1 = *(void **)&(this->TangentU).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->TangentU = &___7FManagedArrayBase__6B_;
  *(undefined ***)&this->Color = &___7__TManagedArrayBase_UFLinearColor____6B_;
  pvVar1 = *(void **)&(this->Color).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->Color = &___7FManagedArrayBase__6B_;
  *(undefined ***)&this->Vertex = &___7__TManagedArrayBase_U__TVector_M_Math_UE____6B_;
  pvVar1 = *(void **)&(this->Vertex).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->Vertex = &___7FManagedArrayBase__6B_;
  *(undefined ***)&this->ExemplarIndex = &___7__TManagedArrayBase_H__6B_;
  pvVar1 = *(void **)&(this->ExemplarIndex).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->ExemplarIndex = &___7FManagedArrayBase__6B_;
  *(undefined ***)&this->InitialDynamicState = &___7__TManagedArrayBase_H__6B_;
  pvVar1 = *(void **)&(this->InitialDynamicState).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->InitialDynamicState = &___7FManagedArrayBase__6B_;
  *(undefined ***)&this->StatusFlags = &___7__TManagedArrayBase_H__6B_;
  pvVar1 = *(void **)&(this->StatusFlags).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->StatusFlags = &___7FManagedArrayBase__6B_;
  *(undefined ***)&this->SimulationType = &___7__TManagedArrayBase_H__6B_;
  pvVar1 = *(void **)&(this->SimulationType).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->SimulationType = &___7FManagedArrayBase__6B_;
  *(undefined ***)&this->TransformToGeometryIndex = &___7__TManagedArrayBase_H__6B_;
  pvVar1 = *(void **)&(this->TransformToGeometryIndex).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->TransformToGeometryIndex = &___7FManagedArrayBase__6B_;
  FTransformCollection::~FTransformCollection((FTransformCollection *)this);
  return;
}

// Append @ 143fdb5c0

void __thiscall
FGeometryCollection::Append(FGeometryCollection *this,FManagedArrayCollection *param_1)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  FManagedArrayCollection *this_00;
  ulonglong uVar10;
  ulonglong uVar11;
  FName local_res10;
  
  FTransformCollection::Append((FTransformCollection *)this,param_1);
  pcVar2 = *(code **)(param_1->_padding_ + 8);
  ::FName::FName(&local_res10,"FGeometryCollection");
  cVar3 = (*pcVar2)(param_1,local_res10);
  this_00 = (FManagedArrayCollection *)0x0;
  if (cVar3 != '\0') {
    this_00 = param_1;
  }
  if (this_00 != (FManagedArrayCollection *)0x0) {
    iVar5 = FManagedArrayCollection::NumElements(this_00,GeometryGroup);
    iVar6 = FManagedArrayCollection::NumElements(this_00,FTransformCollection::TransformGroup);
    iVar7 = FManagedArrayCollection::NumElements
                      ((FManagedArrayCollection *)this,FTransformCollection::TransformGroup);
    uVar10 = (ulonglong)iVar6;
    uVar11 = uVar10;
    for (; (longlong)uVar10 < (longlong)iVar7; uVar10 = uVar10 + 1) {
      uVar9 = (uint)uVar11;
      uVar8 = 0;
      if ((int)uVar9 < *(int *)&(this->TransformToGeometryIndex).field_0x18) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(int *)(*(longlong *)&(this->TransformToGeometryIndex).field_0x10 + uVar10 * 4) != -1) {
        uVar8 = 0;
        if ((int)uVar9 < *(int *)&(this->TransformToGeometryIndex).field_0x18) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        piVar1 = (int *)(*(longlong *)&(this->TransformToGeometryIndex).field_0x10 + uVar10 * 4);
        *piVar1 = *piVar1 + iVar5;
      }
      uVar11 = (ulonglong)(uVar9 + 1);
    }
  }
  return;
}

// AppendCollection @ 143fdb740

void __thiscall
FGeometryCollection::AppendCollection(FGeometryCollection *this,FGeometryCollection *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143fdb743. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x10))();
  return;
}

// AppendEmbeddedInstance @ 143fdb750

bool __thiscall
FGeometryCollection::AppendEmbeddedInstance
          (FGeometryCollection *this,int param_1,int param_2,TTransform<double> *param_3)

{
  float *pfVar1;
  longlong lVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  bool bVar16;
  undefined1 uVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  uint local_res18 [4];
  int local_58 [16];
  
  if (param_2 != -1) {
    iVar18 = FManagedArrayCollection::NumElements
                       ((FManagedArrayCollection *)this,FTransformCollection::TransformGroup);
    if (param_2 < iVar18) {
      local_res18[0] =
           FManagedArrayCollection::AddElements
                     ((FManagedArrayCollection *)this,1,FTransformCollection::TransformGroup);
      dVar4 = (param_3->Rotation).ZW.m128d_f64[0];
      dVar5 = (param_3->Rotation).ZW.m128d_f64[1];
      lVar20 = (longlong)(int)local_res18[0];
      dVar6 = (param_3->Rotation).XY.m128d_f64[0];
      dVar7 = (param_3->Rotation).XY.m128d_f64[1];
      dVar8 = (param_3->Translation).XY.m128d_f64[0];
      dVar9 = (param_3->Translation).XY.m128d_f64[1];
      dVar10 = (param_3->Scale3D).XY.m128d_f64[0];
      dVar11 = (param_3->Scale3D).XY.m128d_f64[1];
      dVar12 = (param_3->Translation).ZW.m128d_f64[0];
      dVar13 = (param_3->Translation).ZW.m128d_f64[1];
      dVar14 = (param_3->Scale3D).ZW.m128d_f64[0];
      dVar15 = (param_3->Scale3D).ZW.m128d_f64[1];
      uVar19 = 0;
      if ((int)local_res18[0] < (int)this->_padding_) {
        uVar19 = ~local_res18[0] >> 0x1f;
      }
      if (uVar19 == 0) {
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar16) {
          pcVar3 = (code *)swi(3);
          uVar17 = (*pcVar3)();
          return (bool)uVar17;
        }
      }
      lVar2 = this->_padding_;
      pfVar1 = (float *)(lVar2 + lVar20 * 0x30);
      *pfVar1 = (float)dVar6;
      pfVar1[1] = (float)dVar7;
      pfVar1[2] = (float)dVar4;
      pfVar1[3] = (float)dVar5;
      pfVar1 = (float *)(lVar2 + 0x10 + lVar20 * 0x30);
      *pfVar1 = (float)dVar8;
      pfVar1[1] = (float)dVar9;
      pfVar1[2] = (float)dVar12;
      pfVar1[3] = (float)dVar13;
      pfVar1 = (float *)(lVar2 + 0x20 + lVar20 * 0x30);
      *pfVar1 = (float)dVar10;
      pfVar1[1] = (float)dVar11;
      pfVar1[2] = (float)dVar14;
      pfVar1[3] = (float)dVar15;
      lVar20 = (longlong)(int)local_res18[0];
      uVar19 = 0;
      if ((int)local_res18[0] < (int)this->_padding_) {
        uVar19 = ~local_res18[0] >> 0x1f;
      }
      if (uVar19 == 0) {
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar16) {
          pcVar3 = (code *)swi(3);
          uVar17 = (*pcVar3)();
          return (bool)uVar17;
        }
      }
      *(int *)(this->_padding_ + lVar20 * 4) = param_2;
      uVar19 = 0;
      if (param_2 < (int)this->_padding_) {
        uVar19 = (uint)~param_2 >> 0x1f;
      }
      if (uVar19 == 0) {
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar16) {
          pcVar3 = (code *)swi(3);
          uVar17 = (*pcVar3)();
          return (bool)uVar17;
        }
      }
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                 ((longlong)param_2 * 0x50 + this->_padding_),local_58,(bool *)local_res18);
      lVar20 = (longlong)(int)local_res18[0];
      uVar19 = 0;
      if ((int)local_res18[0] < *(int *)&(this->SimulationType).field_0x18) {
        uVar19 = ~local_res18[0] >> 0x1f;
      }
      if (uVar19 == 0) {
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar16) {
          pcVar3 = (code *)swi(3);
          uVar17 = (*pcVar3)();
          return (bool)uVar17;
        }
      }
      *(undefined4 *)(*(longlong *)&(this->SimulationType).field_0x10 + lVar20 * 4) = 0;
      lVar20 = (longlong)(int)local_res18[0];
      uVar19 = 0;
      if ((int)local_res18[0] < *(int *)&(this->ExemplarIndex).field_0x18) {
        uVar19 = ~local_res18[0] >> 0x1f;
      }
      if (uVar19 == 0) {
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar16) {
          pcVar3 = (code *)swi(3);
          uVar17 = (*pcVar3)();
          return (bool)uVar17;
        }
      }
      *(int *)(*(longlong *)&(this->ExemplarIndex).field_0x10 + lVar20 * 4) = param_1;
      lVar20 = (longlong)(int)local_res18[0];
      uVar19 = 0;
      if ((int)local_res18[0] < *(int *)&(this->TransformToGeometryIndex).field_0x18) {
        uVar19 = ~local_res18[0] >> 0x1f;
      }
      if (uVar19 == 0) {
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar16) {
          pcVar3 = (code *)swi(3);
          uVar17 = (*pcVar3)();
          return (bool)uVar17;
        }
      }
      *(undefined4 *)(*(longlong *)&(this->TransformToGeometryIndex).field_0x10 + lVar20 * 4) =
           0xffffffff;
      return true;
    }
  }
  return false;
}

// AppendGeometry @ 143fdba80

int __thiscall
FGeometryCollection::AppendGeometry
          (FGeometryCollection *this,FGeometryCollection *param_1,int param_2,bool param_3,
          TTransform<double> *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  code *pcVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  bool bVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  TManagedArray<UE::Math::TVector2<float>_> *pTVar27;
  longlong lVar28;
  undefined1 *puVar29;
  longlong lVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  longlong lVar34;
  longlong lVar35;
  int iVar36;
  ulonglong uVar37;
  FName *pFVar38;
  ulonglong uVar39;
  int iVar40;
  uint uVar41;
  uint uVar42;
  longlong lVar43;
  uint uVar44;
  uint uVar45;
  float fVar46;
  float fVar47;
  double dVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  uint local_158;
  longlong local_150;
  int local_148;
  uint local_140;
  longlong local_138;
  longlong local_120;
  longlong local_110;
  longlong local_f8;
  
  iVar21 = FManagedArrayCollection::NumElements
                     ((FManagedArrayCollection *)param_1,FTransformCollection::TransformGroup);
  if (iVar21 == 0) {
    return -1;
  }
  iVar21 = FManagedArrayCollection::NumElements
                     ((FManagedArrayCollection *)this,FTransformCollection::TransformGroup);
  iVar22 = FManagedArrayCollection::NumElements
                     ((FManagedArrayCollection *)param_1,FTransformCollection::TransformGroup);
  iVar23 = FTransformCollection::AppendTransform
                     ((FTransformCollection *)this,(FTransformCollection *)param_1,param_4);
  if ((iVar21 != iVar23) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumTransforms == StartTransformIndex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollection.cpp"
                          ,0xef,L""), bVar20)) {
    pcVar12 = (code *)swi(3);
    iVar21 = (*pcVar12)();
    return iVar21;
  }
  iVar21 = FManagedArrayCollection::NumElements((FManagedArrayCollection *)param_1,FacesGroup);
  if ((iVar21 < 1) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("Element.NumElements(FGeometryCollection::FacesGroup) > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollection.cpp"
                          ,0xf1,L""), bVar20)) {
    pcVar12 = (code *)swi(3);
    iVar21 = (*pcVar12)();
    return iVar21;
  }
  iVar21 = FManagedArrayCollection::NumElements((FManagedArrayCollection *)param_1,VerticesGroup);
  if ((iVar21 < 1) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("Element.NumElements(FGeometryCollection::VerticesGroup) > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollection.cpp"
                          ,0xf2,L""), bVar20)) {
    pcVar12 = (code *)swi(3);
    iVar21 = (*pcVar12)();
    return iVar21;
  }
  iVar21 = FManagedArrayCollection::NumElements((FManagedArrayCollection *)param_1,VerticesGroup);
  uVar31 = 0;
  if (0 < iVar22) {
    local_150 = 0;
    local_f8 = 0;
    iVar40 = iVar23;
    do {
      uVar33 = ~uVar31 >> 0x1f;
      uVar45 = 0;
      if ((int)uVar31 < *(int *)&(param_1->SimulationType).field_0x18) {
        uVar45 = uVar33;
      }
      if ((uVar45 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar12 = (code *)swi(3);
        iVar21 = (*pcVar12)();
        return iVar21;
      }
      uVar7 = *(undefined4 *)(local_f8 + *(longlong *)&(param_1->SimulationType).field_0x10);
      uVar45 = uVar31 + iVar23;
      uVar44 = ~uVar45 >> 0x1f;
      uVar42 = 0;
      if (iVar40 < *(int *)&(this->SimulationType).field_0x18) {
        uVar42 = uVar44;
      }
      if ((uVar42 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar12 = (code *)swi(3);
        iVar21 = (*pcVar12)();
        return iVar21;
      }
      lVar28 = local_150 * 4;
      lVar43 = lVar28 + (longlong)iVar23 * 4;
      *(undefined4 *)(*(longlong *)&(this->SimulationType).field_0x10 + lVar43) = uVar7;
      uVar42 = 0;
      if ((int)uVar31 < *(int *)&(param_1->StatusFlags).field_0x18) {
        uVar42 = uVar33;
      }
      if ((uVar42 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar12 = (code *)swi(3);
        iVar21 = (*pcVar12)();
        return iVar21;
      }
      uVar7 = *(undefined4 *)(lVar28 + *(longlong *)&(param_1->StatusFlags).field_0x10);
      uVar42 = 0;
      if ((int)uVar45 < *(int *)&(this->StatusFlags).field_0x18) {
        uVar42 = uVar44;
      }
      if ((uVar42 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar12 = (code *)swi(3);
        iVar21 = (*pcVar12)();
        return iVar21;
      }
      *(undefined4 *)(*(longlong *)&(this->StatusFlags).field_0x10 + lVar43) = uVar7;
      uVar42 = 0;
      if ((int)uVar31 < *(int *)&(param_1->InitialDynamicState).field_0x18) {
        uVar42 = uVar33;
      }
      if ((uVar42 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar12 = (code *)swi(3);
        iVar21 = (*pcVar12)();
        return iVar21;
      }
      uVar7 = *(undefined4 *)(lVar28 + *(longlong *)&(param_1->InitialDynamicState).field_0x10);
      uVar42 = 0;
      if ((int)uVar45 < *(int *)&(this->InitialDynamicState).field_0x18) {
        uVar42 = uVar44;
      }
      if ((uVar42 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar12 = (code *)swi(3);
        iVar21 = (*pcVar12)();
        return iVar21;
      }
      *(undefined4 *)(*(longlong *)&(this->InitialDynamicState).field_0x10 + lVar43) = uVar7;
      uVar42 = 0;
      if ((int)uVar31 < *(int *)&(param_1->ExemplarIndex).field_0x18) {
        uVar42 = uVar33;
      }
      if ((uVar42 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar12 = (code *)swi(3);
        iVar21 = (*pcVar12)();
        return iVar21;
      }
      uVar7 = *(undefined4 *)(lVar28 + *(longlong *)&(param_1->ExemplarIndex).field_0x10);
      uVar33 = 0;
      if ((int)uVar45 < *(int *)&(this->ExemplarIndex).field_0x18) {
        uVar33 = uVar44;
      }
      if ((uVar33 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar12 = (code *)swi(3);
        iVar21 = (*pcVar12)();
        return iVar21;
      }
      uVar31 = uVar31 + 1;
      local_150 = local_150 + 1;
      local_f8 = local_f8 + 4;
      *(undefined4 *)(*(longlong *)&(this->ExemplarIndex).field_0x10 + lVar43) = uVar7;
      iVar40 = iVar40 + 1;
    } while (local_150 < iVar22);
  }
  iVar22 = FManagedArrayCollection::NumElements((FManagedArrayCollection *)this,VerticesGroup);
  uVar31 = FManagedArrayCollection::AddElements
                     ((FManagedArrayCollection *)this,iVar21,VerticesGroup);
  lVar43 = (longlong)(int)uVar31;
  iVar40 = NumUVLayers(this);
  iVar24 = NumUVLayers(param_1);
  if (iVar40 < iVar24) {
    GeometryCollection::UV::SetNumUVLayers((FManagedArrayCollection *)this,iVar24);
  }
  uVar45 = 0;
  if (0 < iVar21) {
    local_110 = 0;
    local_120 = 0;
    local_150 = 0;
    local_140 = uVar31;
    do {
      uVar42 = ~uVar45 >> 0x1f;
      uVar33 = 0;
      if ((int)uVar45 < *(int *)&(param_1->Vertex).field_0x18) {
        uVar33 = uVar42;
      }
      if ((uVar33 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar12 = (code *)swi(3);
        iVar21 = (*pcVar12)();
        return iVar21;
      }
      lVar28 = *(longlong *)&(param_1->Vertex).field_0x10;
      uVar2 = *(undefined8 *)(lVar28 + local_120);
      uVar7 = *(undefined4 *)(lVar28 + 8 + local_120);
      lVar28 = local_120 + lVar43 * 0xc;
      lVar30 = local_110 * 4;
      uVar41 = uVar31 + uVar45;
      uVar44 = ~uVar41 >> 0x1f;
      uVar33 = 0;
      if ((int)local_140 < *(int *)&(this->Vertex).field_0x18) {
        uVar33 = uVar44;
      }
      if ((uVar33 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar12 = (code *)swi(3);
        iVar21 = (*pcVar12)();
        return iVar21;
      }
      lVar34 = *(longlong *)&(this->Vertex).field_0x10;
      *(undefined8 *)(lVar34 + lVar28) = uVar2;
      *(undefined4 *)(lVar34 + 8 + lVar28) = uVar7;
      uVar33 = 0;
      if ((int)uVar45 < *(int *)&(param_1->Normal).field_0x18) {
        uVar33 = uVar42;
      }
      if ((uVar33 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar12 = (code *)swi(3);
        iVar21 = (*pcVar12)();
        return iVar21;
      }
      lVar34 = *(longlong *)&(param_1->Normal).field_0x10;
      uVar2 = *(undefined8 *)(local_120 + lVar34);
      uVar7 = *(undefined4 *)(local_120 + 8 + lVar34);
      uVar33 = 0;
      if ((int)uVar41 < *(int *)&(this->Normal).field_0x18) {
        uVar33 = uVar44;
      }
      if ((uVar33 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar12 = (code *)swi(3);
        iVar21 = (*pcVar12)();
        return iVar21;
      }
      lVar34 = *(longlong *)&(this->Normal).field_0x10;
      *(undefined8 *)(lVar34 + lVar28) = uVar2;
      *(undefined4 *)(lVar34 + 8 + lVar28) = uVar7;
      iVar40 = 0;
      if (0 < iVar24) {
        pFVar38 = GeometryCollection::UV::UVLayerNames;
        do {
          pTVar27 = GeometryCollection::UV::GetUVLayer((FManagedArrayCollection *)param_1,iVar40);
          uVar33 = 0;
          if ((int)uVar45 < *(int *)&pTVar27->field_0x18) {
            uVar33 = uVar42;
          }
          if ((uVar33 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar12 = (code *)swi(3);
            iVar21 = (*pcVar12)();
            return iVar21;
          }
          uVar2 = *(undefined8 *)(local_110 * 8 + *(longlong *)&pTVar27->field_0x10);
          pTVar27 = FManagedArrayCollection::ModifyAttribute<UE::Math::TVector2<float>_>
                              ((FManagedArrayCollection *)this,*pFVar38,
                               GeometryCollection::UV::VerticesGroupName);
          uVar33 = 0;
          if ((int)uVar41 < *(int *)&pTVar27->field_0x18) {
            uVar33 = uVar44;
          }
          if ((uVar33 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar12 = (code *)swi(3);
            iVar21 = (*pcVar12)();
            return iVar21;
          }
          iVar40 = iVar40 + 1;
          pFVar38 = pFVar38 + 1;
          *(undefined8 *)(local_110 * 8 + lVar43 * 8 + *(longlong *)&pTVar27->field_0x10) = uVar2;
        } while (iVar40 < iVar24);
      }
      uVar33 = 0;
      if ((int)uVar45 < *(int *)&(param_1->Color).field_0x18) {
        uVar33 = uVar42;
      }
      if ((uVar33 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar12 = (code *)swi(3);
        iVar21 = (*pcVar12)();
        return iVar21;
      }
      puVar1 = (undefined8 *)(*(longlong *)&(param_1->Color).field_0x10 + local_150);
      uVar2 = *puVar1;
      uVar5 = puVar1[1];
      uVar33 = 0;
      if ((int)uVar41 < *(int *)&(this->Color).field_0x18) {
        uVar33 = uVar44;
      }
      if ((uVar33 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar12 = (code *)swi(3);
        iVar21 = (*pcVar12)();
        return iVar21;
      }
      puVar1 = (undefined8 *)(lVar43 * 0x10 + local_150 + *(longlong *)&(this->Color).field_0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar5;
      uVar33 = 0;
      if ((int)uVar45 < *(int *)&(param_1->TangentU).field_0x18) {
        uVar33 = uVar42;
      }
      if ((uVar33 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar12 = (code *)swi(3);
        iVar21 = (*pcVar12)();
        return iVar21;
      }
      lVar28 = *(longlong *)&(param_1->TangentU).field_0x10;
      uVar2 = *(undefined8 *)(lVar28 + local_120);
      uVar7 = *(undefined4 *)(lVar28 + 8 + local_120);
      uVar33 = 0;
      if ((int)uVar41 < *(int *)&(this->TangentU).field_0x18) {
        uVar33 = uVar44;
      }
      if ((uVar33 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar12 = (code *)swi(3);
        iVar21 = (*pcVar12)();
        return iVar21;
      }
      lVar34 = *(longlong *)&(this->TangentU).field_0x10;
      lVar28 = local_120 + lVar43 * 0xc;
      *(undefined8 *)(lVar34 + lVar28) = uVar2;
      *(undefined4 *)(lVar34 + 8 + lVar28) = uVar7;
      uVar33 = 0;
      if ((int)uVar45 < *(int *)&(param_1->TangentV).field_0x18) {
        uVar33 = uVar42;
      }
      if ((uVar33 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar12 = (code *)swi(3);
        iVar21 = (*pcVar12)();
        return iVar21;
      }
      lVar34 = *(longlong *)&(param_1->TangentV).field_0x10;
      uVar2 = *(undefined8 *)(lVar34 + local_120);
      uVar7 = *(undefined4 *)(lVar34 + 8 + local_120);
      uVar33 = 0;
      if ((int)uVar41 < *(int *)&(this->TangentV).field_0x18) {
        uVar33 = uVar44;
      }
      if ((uVar33 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar12 = (code *)swi(3);
        iVar21 = (*pcVar12)();
        return iVar21;
      }
      lVar34 = *(longlong *)&(this->TangentV).field_0x10;
      *(undefined8 *)(lVar34 + lVar28) = uVar2;
      *(undefined4 *)(lVar34 + 8 + lVar28) = uVar7;
      uVar33 = 0;
      if ((int)uVar45 < *(int *)&(param_1->BoneMap).field_0x18) {
        uVar33 = uVar42;
      }
      if ((uVar33 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar12 = (code *)swi(3);
        iVar21 = (*pcVar12)();
        return iVar21;
      }
      iVar40 = *(int *)(lVar30 + *(longlong *)&(param_1->BoneMap).field_0x10);
      uVar33 = 0;
      if ((int)uVar41 < *(int *)&(this->BoneMap).field_0x18) {
        uVar33 = uVar44;
      }
      if ((uVar33 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar12 = (code *)swi(3);
        iVar21 = (*pcVar12)();
        return iVar21;
      }
      uVar45 = uVar45 + 1;
      local_110 = local_110 + 1;
      local_150 = local_150 + 0x10;
      local_120 = local_120 + 0xc;
      local_140 = local_140 + 1;
      *(int *)(lVar30 + lVar43 * 4 + *(longlong *)&(this->BoneMap).field_0x10) = iVar23 + iVar40;
    } while (local_110 < iVar21);
  }
  iVar40 = FManagedArrayCollection::NumElements((FManagedArrayCollection *)this,FacesGroup);
  iVar24 = (**(code **)(*(longlong *)&param_1->Indices + 0x60))(&param_1->Indices);
  local_158 = FManagedArrayCollection::AddElements
                        ((FManagedArrayCollection *)this,iVar24,FacesGroup);
  uVar39 = (ulonglong)(int)local_158;
  if (0 < iVar24) {
    local_150 = 0;
    local_140 = 1;
    lVar43 = uVar39 * 0xc;
    iVar36 = 0;
    local_138 = 0;
    uVar45 = local_158;
    do {
      uVar44 = uVar45 - (int)uVar39;
      uVar42 = ~uVar44 >> 0x1f;
      uVar33 = 0;
      if (iVar36 < *(int *)&(param_1->Indices).field_0x18) {
        uVar33 = uVar42;
      }
      if ((uVar33 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar12 = (code *)swi(3);
        iVar21 = (*pcVar12)();
        return iVar21;
      }
      lVar28 = *(longlong *)&(param_1->Indices).field_0x10;
      iVar26 = *(int *)(lVar28 + local_138);
      iVar8 = *(int *)(lVar28 + 4 + local_138);
      iVar9 = *(int *)(lVar28 + 8 + local_138);
      uVar41 = ~uVar45 >> 0x1f;
      uVar33 = 0;
      if ((int)uVar45 < *(int *)&(this->Indices).field_0x18) {
        uVar33 = uVar41;
      }
      if ((uVar33 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar12 = (code *)swi(3);
        iVar21 = (*pcVar12)();
        return iVar21;
      }
      lVar28 = *(longlong *)&(this->Indices).field_0x10 + lVar43;
      *(uint *)(lVar28 + local_138) = iVar26 + uVar31;
      *(uint *)(lVar28 + 4 + local_138) = iVar8 + uVar31;
      *(uint *)(lVar28 + 8 + local_138) = iVar9 + uVar31;
      if ((((int)uVar44 < 0) || (*(int *)&(param_1->Visible).field_0x28 <= (int)uVar44)) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5c6,L""), bVar20)) {
        pcVar12 = (code *)swi(3);
        iVar21 = (*pcVar12)();
        return iVar21;
      }
      puVar29 = *(undefined1 **)&(param_1->Visible).field_0x20;
      if (puVar29 == (undefined1 *)0x0) {
        puVar29 = &(param_1->Visible).field_0x10;
      }
      uVar33 = uVar44;
      if ((int)uVar44 < 0) {
        uVar33 = uVar44 + 0x1f;
      }
      uVar25 = *(uint *)(puVar29 + (longlong)((int)uVar33 >> 5) * 4);
      if ((((int)uVar45 < 0) || (*(int *)&(this->Visible).field_0x28 <= (int)uVar45)) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar20)) {
        pcVar12 = (code *)swi(3);
        iVar21 = (*pcVar12)();
        return iVar21;
      }
      puVar29 = *(undefined1 **)&(this->Visible).field_0x20;
      if (puVar29 == (undefined1 *)0x0) {
        puVar29 = &(this->Visible).field_0x10;
      }
      uVar32 = uVar45;
      if ((int)uVar45 < 0) {
        uVar32 = uVar45 + 0x1f;
      }
      lVar28 = (longlong)((int)uVar32 >> 5);
      uVar32 = 1 << ((byte)uVar45 & 0x1f);
      if ((uVar25 & local_140) == 0) {
        uVar25 = ~uVar32 & *(uint *)(puVar29 + lVar28 * 4);
      }
      else {
        uVar25 = uVar32 | *(uint *)(puVar29 + lVar28 * 4);
      }
      *(uint *)(puVar29 + lVar28 * 4) = uVar25;
      if ((((int)uVar44 < 0) || (*(int *)&(param_1->Internal).field_0x28 <= (int)uVar44)) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5c6,L""), bVar20)) {
        pcVar12 = (code *)swi(3);
        iVar21 = (*pcVar12)();
        return iVar21;
      }
      puVar29 = *(undefined1 **)&(param_1->Internal).field_0x20;
      if (puVar29 == (undefined1 *)0x0) {
        puVar29 = &(param_1->Internal).field_0x10;
      }
      uVar33 = *(uint *)(puVar29 + (longlong)((int)uVar33 >> 5) * 4);
      if ((((int)uVar45 < 0) || (*(int *)&(this->Internal).field_0x28 <= (int)uVar45)) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar20)) {
        pcVar12 = (code *)swi(3);
        iVar21 = (*pcVar12)();
        return iVar21;
      }
      puVar29 = *(undefined1 **)&(this->Internal).field_0x20;
      if (puVar29 == (undefined1 *)0x0) {
        puVar29 = &(this->Internal).field_0x10;
      }
      if ((uVar33 & local_140) == 0) {
        uVar32 = ~uVar32 & *(uint *)(puVar29 + lVar28 * 4);
      }
      else {
        uVar32 = uVar32 | *(uint *)(puVar29 + lVar28 * 4);
      }
      *(uint *)(puVar29 + lVar28 * 4) = uVar32;
      uVar33 = 0;
      if ((int)uVar44 < *(int *)&(param_1->MaterialIndex).field_0x18) {
        uVar33 = uVar42;
      }
      if ((uVar33 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar12 = (code *)swi(3);
        iVar21 = (*pcVar12)();
        return iVar21;
      }
      lVar28 = local_150 * 4;
      uVar7 = *(undefined4 *)(lVar28 + *(longlong *)&(param_1->MaterialIndex).field_0x10);
      uVar33 = 0;
      if ((int)uVar45 < *(int *)&(this->MaterialIndex).field_0x18) {
        uVar33 = uVar41;
      }
      if ((uVar33 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar12 = (code *)swi(3);
        iVar21 = (*pcVar12)();
        return iVar21;
      }
      lVar30 = lVar28 + (longlong)(int)local_158 * 4;
      *(undefined4 *)(lVar30 + *(longlong *)&(this->MaterialIndex).field_0x10) = uVar7;
      uVar33 = 0;
      if ((int)uVar44 < *(int *)&(param_1->MaterialID).field_0x18) {
        uVar33 = uVar42;
      }
      if ((uVar33 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar12 = (code *)swi(3);
        iVar21 = (*pcVar12)();
        return iVar21;
      }
      iVar26 = *(int *)(lVar28 + *(longlong *)&(param_1->MaterialID).field_0x10);
      uVar33 = 0;
      if ((int)uVar45 < *(int *)&(this->MaterialID).field_0x18) {
        uVar33 = uVar41;
      }
      if ((uVar33 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar12 = (code *)swi(3);
        iVar21 = (*pcVar12)();
        return iVar21;
      }
      uVar45 = uVar45 + 1;
      local_138 = local_138 + 0xc;
      uVar39 = (ulonglong)local_158;
      local_140 = local_140 << 1 | (uint)((int)local_140 < 0);
      local_150 = local_150 + 1;
      *(int *)(lVar30 + *(longlong *)&(this->MaterialID).field_0x10) = param_2 + iVar26;
      iVar36 = iVar36 + 1;
    } while (local_150 < iVar24);
  }
  iVar36 = FManagedArrayCollection::NumElements((FManagedArrayCollection *)param_1,GeometryGroup);
  if (iVar36 == 0) {
    iVar36 = 1;
  }
  uVar45 = FManagedArrayCollection::AddElements
                     ((FManagedArrayCollection *)this,iVar36,GeometryGroup);
  uVar39 = (ulonglong)(int)uVar45;
  iVar26 = (**(code **)(*(longlong *)&param_1->TransformIndex + 0x60))(&param_1->TransformIndex);
  if (iVar26 < 1) {
    uVar42 = ~uVar45 >> 0x1f;
    uVar33 = 0;
    if ((int)uVar45 < *(int *)&(this->BoundingBox).field_0x18) {
      uVar33 = uVar42;
    }
    if ((uVar33 == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar12 = (code *)swi(3);
      iVar21 = (*pcVar12)();
      return iVar21;
    }
    lVar43 = *(longlong *)&(this->BoundingBox).field_0x10;
    lVar30 = (longlong)(int)uVar31;
    lVar28 = uVar39 * 0x38;
    *(undefined8 *)(lVar28 + lVar43) = 0;
    ((undefined8 *)(lVar28 + lVar43))[1] = 0;
    puVar1 = (undefined8 *)(lVar28 + 0x10 + lVar43);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar28 + 0x20 + lVar43);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)(lVar28 + 0x30 + lVar43) = 0;
    uVar33 = 0;
    if ((int)uVar31 < *(int *)&(this->BoneMap).field_0x18) {
      uVar33 = ~uVar31 >> 0x1f;
    }
    if ((uVar33 == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar12 = (code *)swi(3);
      iVar21 = (*pcVar12)();
      return iVar21;
    }
    uVar7 = *(undefined4 *)(*(longlong *)&(this->BoneMap).field_0x10 + lVar30 * 4);
    uVar33 = 0;
    if ((int)uVar45 < *(int *)&(this->TransformIndex).field_0x18) {
      uVar33 = uVar42;
    }
    if ((uVar33 == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar12 = (code *)swi(3);
      iVar21 = (*pcVar12)();
      return iVar21;
    }
    *(undefined4 *)(*(longlong *)&(this->TransformIndex).field_0x10 + uVar39 * 4) = uVar7;
    uVar33 = 0;
    if ((int)uVar45 < *(int *)&(this->VertexStart).field_0x18) {
      uVar33 = uVar42;
    }
    if ((uVar33 == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar12 = (code *)swi(3);
      iVar21 = (*pcVar12)();
      return iVar21;
    }
    *(uint *)(*(longlong *)&(this->VertexStart).field_0x10 + uVar39 * 4) = uVar31;
    uVar33 = 0;
    if ((int)uVar45 < *(int *)&(this->VertexCount).field_0x18) {
      uVar33 = uVar42;
    }
    if ((uVar33 == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar12 = (code *)swi(3);
      iVar21 = (*pcVar12)();
      return iVar21;
    }
    *(int *)(*(longlong *)&(this->VertexCount).field_0x10 + uVar39 * 4) = iVar21;
    uVar33 = 0;
    if ((int)uVar45 < *(int *)&(this->FaceStart).field_0x18) {
      uVar33 = uVar42;
    }
    if ((uVar33 == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar12 = (code *)swi(3);
      iVar21 = (*pcVar12)();
      return iVar21;
    }
    *(uint *)(*(longlong *)&(this->FaceStart).field_0x10 + uVar39 * 4) = local_158;
    uVar33 = 0;
    if ((int)uVar45 < *(int *)&(this->FaceCount).field_0x18) {
      uVar33 = uVar42;
    }
    if ((uVar33 == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar12 = (code *)swi(3);
      iVar21 = (*pcVar12)();
      return iVar21;
    }
    *(int *)(*(longlong *)&(this->FaceCount).field_0x10 + uVar39 * 4) = iVar24;
    uVar33 = 0;
    if ((int)uVar45 < *(int *)&(this->TransformIndex).field_0x18) {
      uVar33 = uVar42;
    }
    if ((uVar33 == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar12 = (code *)swi(3);
      iVar21 = (*pcVar12)();
      return iVar21;
    }
    uVar33 = *(uint *)(*(longlong *)&(this->TransformIndex).field_0x10 + uVar39 * 4);
    uVar44 = 0;
    if ((int)uVar33 < *(int *)&(this->TransformToGeometryIndex).field_0x18) {
      uVar44 = ~uVar33 >> 0x1f;
    }
    if ((uVar44 == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar12 = (code *)swi(3);
      iVar21 = (*pcVar12)();
      return iVar21;
    }
    *(uint *)(*(longlong *)&(this->TransformToGeometryIndex).field_0x10 + (longlong)(int)uVar33 * 4)
         = uVar45;
    iVar22 = iVar21 + uVar31;
    if ((int)uVar31 < iVar22) {
      lVar43 = uVar39 * 0x38;
      lVar28 = lVar30 * 0xc;
      uVar33 = uVar31;
      do {
        uVar44 = 0;
        if ((int)uVar33 < *(int *)&(this->Vertex).field_0x18) {
          uVar44 = ~uVar33 >> 0x1f;
        }
        if ((uVar44 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar12 = (code *)swi(3);
          iVar21 = (*pcVar12)();
          return iVar21;
        }
        lVar34 = *(longlong *)&(this->Vertex).field_0x10;
        dVar13 = (double)*(float *)(lVar28 + lVar34);
        uVar44 = 0;
        if ((int)uVar45 < *(int *)&(this->BoundingBox).field_0x18) {
          uVar44 = uVar42;
        }
        dVar14 = (double)*(float *)(lVar28 + 4 + lVar34);
        dVar15 = (double)*(float *)(lVar28 + 8 + lVar34);
        if ((uVar44 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar12 = (code *)swi(3);
          iVar21 = (*pcVar12)();
          return iVar21;
        }
        lVar34 = *(longlong *)&(this->BoundingBox).field_0x10;
        if (*(char *)(lVar34 + 0x30 + lVar43) == '\0') {
          *(double *)(lVar34 + 0x18 + lVar43) = dVar13;
          *(double *)(lVar34 + 0x20 + lVar43) = dVar14;
          *(double *)(lVar34 + 0x28 + lVar43) = dVar15;
          puVar1 = (undefined8 *)(lVar34 + 0x18 + lVar43);
          uVar5 = puVar1[1];
          *(undefined1 *)(lVar34 + 0x30 + lVar43) = 1;
          uVar2 = *(undefined8 *)(lVar34 + 0x28 + lVar43);
          *(undefined8 *)(lVar34 + lVar43) = *puVar1;
          ((undefined8 *)(lVar34 + lVar43))[1] = uVar5;
          *(undefined8 *)(lVar34 + 0x10 + lVar43) = uVar2;
        }
        else {
          dVar4 = dVar13;
          if (*(double *)(lVar34 + lVar43) <= dVar13) {
            dVar4 = *(double *)(lVar34 + lVar43);
          }
          dVar3 = *(double *)(lVar34 + 8 + lVar43);
          dVar48 = dVar14;
          if (dVar3 <= dVar14) {
            dVar48 = dVar3;
          }
          dVar3 = *(double *)(lVar34 + 0x18 + lVar43);
          if (dVar13 <= dVar3) {
            dVar13 = dVar3;
          }
          dVar3 = *(double *)(lVar34 + 0x20 + lVar43);
          if (dVar14 <= dVar3) {
            dVar14 = dVar3;
          }
          *(double *)(lVar34 + lVar43) = dVar4;
          dVar4 = *(double *)(lVar34 + 0x10 + lVar43);
          dVar3 = dVar15;
          if (dVar4 <= dVar15) {
            dVar3 = dVar4;
          }
          *(double *)(lVar34 + 8 + lVar43) = dVar48;
          *(double *)(lVar34 + 0x18 + lVar43) = dVar13;
          *(double *)(lVar34 + 0x20 + lVar43) = dVar14;
          *(double *)(lVar34 + 0x10 + lVar43) = dVar3;
          dVar13 = *(double *)(lVar34 + 0x28 + lVar43);
          if (dVar13 <= dVar15) {
            dVar13 = dVar15;
          }
          *(double *)(lVar34 + 0x28 + lVar43) = dVar13;
        }
        uVar33 = uVar33 + 1;
        lVar28 = lVar28 + 0xc;
      } while ((int)uVar33 < iVar22);
      fVar52 = 0.0;
      fVar53 = 0.0;
      fVar54 = 0.0;
      lVar43 = lVar30 * 0xc;
      uVar33 = uVar31;
      do {
        uVar44 = 0;
        if ((int)uVar33 < *(int *)&(this->Vertex).field_0x18) {
          uVar44 = ~uVar33 >> 0x1f;
        }
        if ((uVar44 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar12 = (code *)swi(3);
          iVar21 = (*pcVar12)();
          return iVar21;
        }
        lVar28 = *(longlong *)&(this->Vertex).field_0x10;
        uVar33 = uVar33 + 1;
        fVar52 = fVar52 + *(float *)(lVar43 + lVar28);
        fVar53 = fVar53 + *(float *)(lVar43 + 4 + lVar28);
        fVar54 = fVar54 + *(float *)(lVar43 + 8 + lVar28);
        lVar43 = lVar43 + 0xc;
      } while ((int)uVar33 < iVar22);
    }
    else {
      fVar52 = 0.0;
      fVar53 = 0.0;
      fVar54 = 0.0;
    }
    if (iVar21 != 0) {
      fVar46 = __real_3f800000 / (float)iVar21;
      fVar52 = fVar52 * fVar46;
      fVar53 = fVar53 * fVar46;
      fVar54 = fVar54 * fVar46;
    }
    uVar33 = 0;
    if ((int)uVar45 < *(int *)&(this->InnerRadius).field_0x18) {
      uVar33 = uVar42;
    }
    if ((uVar33 == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar12 = (code *)swi(3);
      iVar21 = (*pcVar12)();
      return iVar21;
    }
    *(undefined4 *)(*(longlong *)&(this->InnerRadius).field_0x10 + uVar39 * 4) = 0x7f7fffff;
    uVar33 = 0;
    if ((int)uVar45 < *(int *)&(this->OuterRadius).field_0x18) {
      uVar33 = uVar42;
    }
    if ((uVar33 == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar12 = (code *)swi(3);
      iVar21 = (*pcVar12)();
      return iVar21;
    }
    *(undefined4 *)(*(longlong *)&(this->OuterRadius).field_0x10 + uVar39 * 4) = 0xff7fffff;
    if ((int)uVar31 < iVar22) {
      lVar30 = lVar30 * 0xc;
      do {
        uVar33 = 0;
        if ((int)uVar31 < *(int *)&(this->Vertex).field_0x18) {
          uVar33 = ~uVar31 >> 0x1f;
        }
        if ((uVar33 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar12 = (code *)swi(3);
          iVar21 = (*pcVar12)();
          return iVar21;
        }
        lVar43 = *(longlong *)&(this->Vertex).field_0x10;
        fVar49 = fVar53 - *(float *)(lVar30 + 4 + lVar43);
        fVar47 = fVar52 - *(float *)(lVar30 + lVar43);
        fVar46 = fVar54 - *(float *)(lVar30 + 8 + lVar43);
        uVar33 = 0;
        if ((int)uVar45 < *(int *)&(this->InnerRadius).field_0x18) {
          uVar33 = uVar42;
        }
        fVar46 = SQRT(fVar49 * fVar49 + fVar47 * fVar47 + fVar46 * fVar46);
        if ((uVar33 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar12 = (code *)swi(3);
          iVar21 = (*pcVar12)();
          return iVar21;
        }
        fVar47 = *(float *)(*(longlong *)&(this->InnerRadius).field_0x10 + uVar39 * 4);
        if (fVar46 <= fVar47) {
          fVar47 = fVar46;
        }
        uVar33 = 0;
        if ((int)uVar45 < *(int *)&(this->InnerRadius).field_0x18) {
          uVar33 = uVar42;
        }
        if ((uVar33 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar12 = (code *)swi(3);
          iVar21 = (*pcVar12)();
          return iVar21;
        }
        *(float *)(*(longlong *)&(this->InnerRadius).field_0x10 + uVar39 * 4) = fVar47;
        uVar33 = 0;
        if ((int)uVar45 < *(int *)&(this->OuterRadius).field_0x18) {
          uVar33 = uVar42;
        }
        if ((uVar33 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar12 = (code *)swi(3);
          iVar21 = (*pcVar12)();
          return iVar21;
        }
        fVar47 = *(float *)(*(longlong *)&(this->OuterRadius).field_0x10 + uVar39 * 4);
        if (fVar47 <= fVar46) {
          fVar47 = fVar46;
        }
        uVar33 = 0;
        if ((int)uVar45 < *(int *)&(this->OuterRadius).field_0x18) {
          uVar33 = uVar42;
        }
        if ((uVar33 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar12 = (code *)swi(3);
          iVar21 = (*pcVar12)();
          return iVar21;
        }
        uVar31 = uVar31 + 1;
        lVar30 = lVar30 + 0xc;
        *(float *)(*(longlong *)&(this->OuterRadius).field_0x10 + uVar39 * 4) = fVar47;
      } while ((int)uVar31 < iVar22);
    }
    fVar46 = __real_3eaaaaab;
    iVar24 = iVar24 + local_158;
    if ((int)local_158 < iVar24) {
      lVar43 = (longlong)(int)local_158 * 0xc;
      uVar31 = local_158;
      do {
        uVar44 = ~uVar31 >> 0x1f;
        uVar33 = 0;
        if ((int)uVar31 < *(int *)&(this->Indices).field_0x18) {
          uVar33 = uVar44;
        }
        if ((uVar33 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar12 = (code *)swi(3);
          iVar21 = (*pcVar12)();
          return iVar21;
        }
        uVar33 = *(uint *)(lVar43 + *(longlong *)&(this->Indices).field_0x10);
        uVar41 = 0;
        if ((int)uVar33 < *(int *)&(this->Vertex).field_0x18) {
          uVar41 = ~uVar33 >> 0x1f;
        }
        if ((uVar41 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar12 = (code *)swi(3);
          iVar21 = (*pcVar12)();
          return iVar21;
        }
        lVar28 = *(longlong *)&(this->Vertex).field_0x10;
        fVar47 = *(float *)(lVar28 + 8 + (longlong)(int)uVar33 * 0xc);
        uVar2 = *(undefined8 *)(lVar28 + (longlong)(int)uVar33 * 0xc);
        uVar33 = 0;
        if ((int)uVar31 < *(int *)&(this->Indices).field_0x18) {
          uVar33 = uVar44;
        }
        if ((uVar33 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar12 = (code *)swi(3);
          iVar21 = (*pcVar12)();
          return iVar21;
        }
        uVar33 = *(uint *)(*(longlong *)&(this->Indices).field_0x10 + 4 + lVar43);
        uVar41 = 0;
        if ((int)uVar33 < *(int *)&(this->Vertex).field_0x18) {
          uVar41 = ~uVar33 >> 0x1f;
        }
        if ((uVar41 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar12 = (code *)swi(3);
          iVar21 = (*pcVar12)();
          return iVar21;
        }
        lVar28 = *(longlong *)&(this->Vertex).field_0x10;
        fVar49 = *(float *)(lVar28 + 8 + (longlong)(int)uVar33 * 0xc);
        uVar5 = *(undefined8 *)(lVar28 + (longlong)(int)uVar33 * 0xc);
        uVar33 = 0;
        if ((int)uVar31 < *(int *)&(this->Indices).field_0x18) {
          uVar33 = uVar44;
        }
        if ((uVar33 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar12 = (code *)swi(3);
          iVar21 = (*pcVar12)();
          return iVar21;
        }
        uVar33 = *(uint *)(*(longlong *)&(this->Indices).field_0x10 + 8 + lVar43);
        uVar44 = 0;
        if ((int)uVar33 < *(int *)&(this->Vertex).field_0x18) {
          uVar44 = ~uVar33 >> 0x1f;
        }
        if ((uVar44 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar12 = (code *)swi(3);
          iVar21 = (*pcVar12)();
          return iVar21;
        }
        lVar28 = *(longlong *)&(this->Vertex).field_0x10;
        uVar6 = *(undefined8 *)(lVar28 + (longlong)(int)uVar33 * 0xc);
        uVar44 = 0;
        if ((int)uVar45 < *(int *)&(this->InnerRadius).field_0x18) {
          uVar44 = uVar42;
        }
        fVar51 = fVar52 - ((float)uVar6 + (float)uVar2 + (float)uVar5) * fVar46;
        fVar50 = fVar53 - ((float)((ulonglong)uVar6 >> 0x20) +
                          (float)((ulonglong)uVar2 >> 0x20) + (float)((ulonglong)uVar5 >> 0x20)) *
                          fVar46;
        fVar47 = fVar54 - (*(float *)(lVar28 + 8 + (longlong)(int)uVar33 * 0xc) + fVar47 + fVar49) *
                          fVar46;
        fVar47 = SQRT(fVar50 * fVar50 + fVar51 * fVar51 + fVar47 * fVar47);
        if ((uVar44 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar12 = (code *)swi(3);
          iVar21 = (*pcVar12)();
          return iVar21;
        }
        fVar49 = *(float *)(*(longlong *)&(this->InnerRadius).field_0x10 + uVar39 * 4);
        if (fVar47 <= fVar49) {
          fVar49 = fVar47;
        }
        uVar33 = 0;
        if ((int)uVar45 < *(int *)&(this->InnerRadius).field_0x18) {
          uVar33 = uVar42;
        }
        if ((uVar33 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar12 = (code *)swi(3);
          iVar21 = (*pcVar12)();
          return iVar21;
        }
        *(float *)(*(longlong *)&(this->InnerRadius).field_0x10 + uVar39 * 4) = fVar49;
        uVar33 = 0;
        if ((int)uVar45 < *(int *)&(this->OuterRadius).field_0x18) {
          uVar33 = uVar42;
        }
        if ((uVar33 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar12 = (code *)swi(3);
          iVar21 = (*pcVar12)();
          return iVar21;
        }
        fVar49 = *(float *)(*(longlong *)&(this->OuterRadius).field_0x10 + uVar39 * 4);
        if (fVar49 <= fVar47) {
          fVar49 = fVar47;
        }
        uVar33 = 0;
        if ((int)uVar45 < *(int *)&(this->OuterRadius).field_0x18) {
          uVar33 = uVar42;
        }
        if ((uVar33 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar12 = (code *)swi(3);
          iVar21 = (*pcVar12)();
          return iVar21;
        }
        lVar43 = lVar43 + 0xc;
        uVar31 = uVar31 + 1;
        *(float *)(*(longlong *)&(this->OuterRadius).field_0x10 + uVar39 * 4) = fVar49;
        fVar47 = __real_3f000000;
      } while ((int)uVar31 < iVar24);
      uVar37 = (ulonglong)(int)local_158;
      uVar31 = ~uVar45 >> 0x1f;
      local_150 = uVar37 * 3;
      lVar43 = uVar37 * 0xc;
      do {
        local_138 = 3;
        local_148 = 1;
        uVar33 = ~(uint)uVar37 >> 0x1f;
        do {
          uVar42 = 0;
          if ((int)uVar37 < *(int *)&(this->Indices).field_0x18) {
            uVar42 = uVar33;
          }
          if ((uVar42 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar12 = (code *)swi(3);
            iVar21 = (*pcVar12)();
            return iVar21;
          }
          uVar42 = *(uint *)(lVar43 + *(longlong *)&(this->Indices).field_0x10);
          lVar28 = (longlong)(int)uVar42;
          uVar44 = 0;
          if ((int)uVar42 < *(int *)&(this->Vertex).field_0x18) {
            uVar44 = ~uVar42 >> 0x1f;
          }
          if ((uVar44 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar12 = (code *)swi(3);
            iVar21 = (*pcVar12)();
            return iVar21;
          }
          lVar30 = *(longlong *)&(this->Vertex).field_0x10;
          uVar42 = 0;
          if ((int)local_158 < *(int *)&(this->Indices).field_0x18) {
            uVar42 = uVar33;
          }
          if ((uVar42 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar12 = (code *)swi(3);
            iVar21 = (*pcVar12)();
            return iVar21;
          }
          uVar42 = *(uint *)(*(longlong *)&(this->Indices).field_0x10 +
                            ((local_148 +
                             (local_148 / 3 + (local_148 >> 0x1f) +
                             (int)(((longlong)local_148 / 3 + ((longlong)local_148 >> 0x3f) &
                                   0xffffffffU) >> 0x1f)) * -3) + local_150) * 4);
          lVar34 = (longlong)(int)uVar42;
          uVar44 = 0;
          if ((int)uVar42 < *(int *)&(this->Vertex).field_0x18) {
            uVar44 = ~uVar42 >> 0x1f;
          }
          if ((uVar44 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar12 = (code *)swi(3);
            iVar21 = (*pcVar12)();
            return iVar21;
          }
          lVar10 = *(longlong *)&(this->Vertex).field_0x10;
          uVar42 = 0;
          if ((int)local_158 < *(int *)&(this->Indices).field_0x18) {
            uVar42 = uVar33;
          }
          if ((uVar42 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar12 = (code *)swi(3);
            iVar21 = (*pcVar12)();
            return iVar21;
          }
          uVar42 = *(uint *)(lVar43 + *(longlong *)&(this->Indices).field_0x10);
          lVar35 = (longlong)(int)uVar42;
          uVar44 = 0;
          if ((int)uVar42 < *(int *)&(this->Vertex).field_0x18) {
            uVar44 = ~uVar42 >> 0x1f;
          }
          if ((uVar44 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar12 = (code *)swi(3);
            iVar21 = (*pcVar12)();
            return iVar21;
          }
          lVar11 = *(longlong *)&(this->Vertex).field_0x10;
          fVar49 = fVar52 - ((*(float *)(lVar10 + lVar34 * 0xc) - *(float *)(lVar11 + lVar35 * 0xc))
                             * fVar47 + *(float *)(lVar30 + lVar28 * 0xc));
          fVar46 = fVar53 - ((*(float *)(lVar10 + 4 + lVar34 * 0xc) -
                             *(float *)(lVar11 + 4 + lVar35 * 0xc)) * fVar47 +
                            *(float *)(lVar30 + 4 + lVar28 * 0xc));
          uVar42 = 0;
          if ((int)uVar45 < *(int *)&(this->InnerRadius).field_0x18) {
            uVar42 = uVar31;
          }
          fVar50 = fVar54 - ((*(float *)(lVar10 + 8 + lVar34 * 0xc) -
                             *(float *)(lVar11 + 8 + lVar35 * 0xc)) * fVar47 +
                            *(float *)(lVar30 + 8 + lVar28 * 0xc));
          fVar46 = SQRT(fVar46 * fVar46 + fVar49 * fVar49 + fVar50 * fVar50);
          if ((uVar42 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar12 = (code *)swi(3);
            iVar21 = (*pcVar12)();
            return iVar21;
          }
          fVar49 = *(float *)(*(longlong *)&(this->InnerRadius).field_0x10 + uVar39 * 4);
          if (fVar46 <= fVar49) {
            fVar49 = fVar46;
          }
          uVar42 = 0;
          if ((int)uVar45 < *(int *)&(this->InnerRadius).field_0x18) {
            uVar42 = uVar31;
          }
          if ((uVar42 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar12 = (code *)swi(3);
            iVar21 = (*pcVar12)();
            return iVar21;
          }
          *(float *)(*(longlong *)&(this->InnerRadius).field_0x10 + uVar39 * 4) = fVar49;
          uVar42 = 0;
          if ((int)uVar45 < *(int *)&(this->OuterRadius).field_0x18) {
            uVar42 = uVar31;
          }
          if ((uVar42 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar12 = (code *)swi(3);
            iVar21 = (*pcVar12)();
            return iVar21;
          }
          fVar49 = *(float *)(*(longlong *)&(this->OuterRadius).field_0x10 + uVar39 * 4);
          if (fVar49 <= fVar46) {
            fVar49 = fVar46;
          }
          uVar42 = 0;
          if ((int)uVar45 < *(int *)&(this->OuterRadius).field_0x18) {
            uVar42 = uVar31;
          }
          if ((uVar42 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar12 = (code *)swi(3);
            iVar21 = (*pcVar12)();
            return iVar21;
          }
          lVar43 = lVar43 + 4;
          local_148 = local_148 + 1;
          local_138 = local_138 + -1;
          uVar37 = (ulonglong)local_158;
          *(float *)(*(longlong *)&(this->OuterRadius).field_0x10 + uVar39 * 4) = fVar49;
        } while (local_138 != 0);
        local_150 = local_150 + 3;
        local_158 = local_158 + 1;
        uVar37 = (ulonglong)local_158;
      } while ((int)local_158 < iVar24);
    }
  }
  else {
    local_138 = (longlong)iVar36;
    if (0 < iVar36) {
      lVar28 = uVar39 * 0x38;
      lVar43 = uVar39 * 4;
      local_150 = 0;
      iVar24 = -uVar45;
      iVar21 = 0;
      local_110 = 0;
      uVar37 = uVar39;
      do {
        uVar31 = (uint)uVar37;
        uVar33 = ~(uVar31 + iVar24) >> 0x1f;
        uVar45 = 0;
        if (iVar21 < *(int *)&(param_1->BoundingBox).field_0x18) {
          uVar45 = uVar33;
        }
        if ((uVar45 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar12 = (code *)swi(3);
          iVar21 = (*pcVar12)();
          return iVar21;
        }
        lVar30 = *(longlong *)&(param_1->BoundingBox).field_0x10;
        uVar5 = *(undefined8 *)(local_150 + lVar30);
        uVar6 = ((undefined8 *)(local_150 + lVar30))[1];
        puVar1 = (undefined8 *)(local_150 + 0x10 + lVar30);
        uVar16 = *puVar1;
        uVar17 = puVar1[1];
        puVar1 = (undefined8 *)(local_150 + 0x20 + lVar30);
        uVar18 = *puVar1;
        uVar19 = puVar1[1];
        uVar2 = *(undefined8 *)(local_150 + 0x30 + lVar30);
        uVar42 = ~uVar31 >> 0x1f;
        uVar45 = 0;
        if ((int)uVar31 < *(int *)&(this->BoundingBox).field_0x18) {
          uVar45 = uVar42;
        }
        if ((uVar45 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar12 = (code *)swi(3);
          iVar21 = (*pcVar12)();
          return iVar21;
        }
        lVar30 = *(longlong *)&(this->BoundingBox).field_0x10 + local_150;
        *(undefined8 *)(lVar30 + lVar28) = uVar5;
        ((undefined8 *)(lVar30 + lVar28))[1] = uVar6;
        puVar1 = (undefined8 *)(lVar30 + 0x10 + lVar28);
        *puVar1 = uVar16;
        puVar1[1] = uVar17;
        puVar1 = (undefined8 *)(lVar30 + 0x20 + lVar28);
        *puVar1 = uVar18;
        puVar1[1] = uVar19;
        *(undefined8 *)(lVar30 + 0x30 + lVar28) = uVar2;
        uVar45 = 0;
        if ((int)(uVar31 + iVar24) < *(int *)&(param_1->InnerRadius).field_0x18) {
          uVar45 = uVar33;
        }
        if ((uVar45 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar12 = (code *)swi(3);
          iVar21 = (*pcVar12)();
          return iVar21;
        }
        uVar7 = *(undefined4 *)(local_110 + *(longlong *)&(param_1->InnerRadius).field_0x10);
        uVar45 = 0;
        if ((int)uVar31 < *(int *)&(this->InnerRadius).field_0x18) {
          uVar45 = uVar42;
        }
        if ((uVar45 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar12 = (code *)swi(3);
          iVar21 = (*pcVar12)();
          return iVar21;
        }
        *(undefined4 *)(lVar43 + *(longlong *)&(this->InnerRadius).field_0x10) = uVar7;
        uVar45 = 0;
        if ((int)(uVar31 + iVar24) < *(int *)&(param_1->OuterRadius).field_0x18) {
          uVar45 = uVar33;
        }
        if ((uVar45 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar12 = (code *)swi(3);
          iVar21 = (*pcVar12)();
          return iVar21;
        }
        uVar7 = *(undefined4 *)
                 (lVar43 + uVar39 * -4 + *(longlong *)&(param_1->OuterRadius).field_0x10);
        uVar45 = 0;
        if ((int)uVar31 < *(int *)&(this->OuterRadius).field_0x18) {
          uVar45 = uVar42;
        }
        if ((uVar45 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar12 = (code *)swi(3);
          iVar21 = (*pcVar12)();
          return iVar21;
        }
        *(undefined4 *)(lVar43 + *(longlong *)&(this->OuterRadius).field_0x10) = uVar7;
        uVar45 = 0;
        if ((int)(uVar31 + iVar24) < *(int *)&(param_1->FaceStart).field_0x18) {
          uVar45 = uVar33;
        }
        if ((uVar45 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar12 = (code *)swi(3);
          iVar21 = (*pcVar12)();
          return iVar21;
        }
        iVar36 = *(int *)(*(longlong *)&(param_1->FaceStart).field_0x10 + lVar43 + uVar39 * -4);
        uVar45 = 0;
        if ((int)uVar31 < *(int *)&(this->FaceStart).field_0x18) {
          uVar45 = uVar42;
        }
        if ((uVar45 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar12 = (code *)swi(3);
          iVar21 = (*pcVar12)();
          return iVar21;
        }
        *(int *)(lVar43 + *(longlong *)&(this->FaceStart).field_0x10) = iVar40 + iVar36;
        uVar45 = 0;
        if ((int)(uVar31 + iVar24) < *(int *)&(param_1->FaceCount).field_0x18) {
          uVar45 = uVar33;
        }
        if ((uVar45 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar12 = (code *)swi(3);
          iVar21 = (*pcVar12)();
          return iVar21;
        }
        uVar7 = *(undefined4 *)
                 (lVar43 + uVar39 * -4 + *(longlong *)&(param_1->FaceCount).field_0x10);
        uVar45 = 0;
        if ((int)uVar31 < *(int *)&(this->FaceCount).field_0x18) {
          uVar45 = uVar42;
        }
        if ((uVar45 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar12 = (code *)swi(3);
          iVar21 = (*pcVar12)();
          return iVar21;
        }
        *(undefined4 *)(lVar43 + *(longlong *)&(this->FaceCount).field_0x10) = uVar7;
        uVar45 = 0;
        if ((int)(uVar31 + iVar24) < *(int *)&(param_1->VertexStart).field_0x18) {
          uVar45 = uVar33;
        }
        if ((uVar45 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar12 = (code *)swi(3);
          iVar21 = (*pcVar12)();
          return iVar21;
        }
        iVar36 = *(int *)(lVar43 + uVar39 * -4 + *(longlong *)&(param_1->VertexStart).field_0x10);
        uVar45 = 0;
        if ((int)uVar31 < *(int *)&(this->VertexStart).field_0x18) {
          uVar45 = uVar42;
        }
        if ((uVar45 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar12 = (code *)swi(3);
          iVar21 = (*pcVar12)();
          return iVar21;
        }
        *(int *)(lVar43 + *(longlong *)&(this->VertexStart).field_0x10) = iVar22 + iVar36;
        uVar45 = 0;
        if ((int)(uVar31 + iVar24) < *(int *)&(param_1->VertexCount).field_0x18) {
          uVar45 = uVar33;
        }
        if ((uVar45 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar12 = (code *)swi(3);
          iVar21 = (*pcVar12)();
          return iVar21;
        }
        uVar7 = *(undefined4 *)
                 (lVar43 + uVar39 * -4 + *(longlong *)&(param_1->VertexCount).field_0x10);
        uVar45 = 0;
        if ((int)uVar31 < *(int *)&(this->VertexCount).field_0x18) {
          uVar45 = uVar42;
        }
        if ((uVar45 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar12 = (code *)swi(3);
          iVar21 = (*pcVar12)();
          return iVar21;
        }
        *(undefined4 *)(lVar43 + *(longlong *)&(this->VertexCount).field_0x10) = uVar7;
        uVar45 = 0;
        if ((int)uVar31 < *(int *)&(this->VertexStart).field_0x18) {
          uVar45 = uVar42;
        }
        if ((uVar45 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar12 = (code *)swi(3);
          iVar21 = (*pcVar12)();
          return iVar21;
        }
        uVar45 = *(uint *)(lVar43 + *(longlong *)&(this->VertexStart).field_0x10);
        uVar33 = 0;
        if ((int)uVar45 < *(int *)&(this->BoneMap).field_0x18) {
          uVar33 = ~uVar45 >> 0x1f;
        }
        if ((uVar33 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar12 = (code *)swi(3);
          iVar21 = (*pcVar12)();
          return iVar21;
        }
        uVar7 = *(undefined4 *)
                 (*(longlong *)&(this->BoneMap).field_0x10 + (longlong)(int)uVar45 * 4);
        uVar45 = 0;
        if ((int)uVar31 < *(int *)&(this->TransformIndex).field_0x18) {
          uVar45 = uVar42;
        }
        if ((uVar45 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar12 = (code *)swi(3);
          iVar21 = (*pcVar12)();
          return iVar21;
        }
        *(undefined4 *)(lVar43 + *(longlong *)&(this->TransformIndex).field_0x10) = uVar7;
        uVar45 = 0;
        if ((int)uVar31 < *(int *)&(this->TransformIndex).field_0x18) {
          uVar45 = uVar42;
        }
        if ((uVar45 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar12 = (code *)swi(3);
          iVar21 = (*pcVar12)();
          return iVar21;
        }
        uVar45 = *(uint *)(lVar43 + *(longlong *)&(this->TransformIndex).field_0x10);
        uVar33 = 0;
        if ((int)uVar45 < *(int *)&(this->TransformToGeometryIndex).field_0x18) {
          uVar33 = ~uVar45 >> 0x1f;
        }
        if ((uVar33 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar12 = (code *)swi(3);
          iVar21 = (*pcVar12)();
          return iVar21;
        }
        lVar43 = lVar43 + 4;
        iVar21 = iVar21 + 1;
        local_110 = local_110 + 4;
        *(uint *)(*(longlong *)&(this->TransformToGeometryIndex).field_0x10 +
                 (longlong)(int)uVar45 * 4) = uVar31;
        uVar37 = (ulonglong)(uVar31 + 1);
        local_150 = local_150 + 0x38;
        local_138 = local_138 + -1;
      } while (local_138 != 0);
    }
  }
  if (param_3) {
    ReindexMaterials((FManagedArrayCollection *)this);
  }
  return iVar23;
}

// AreCollisionParticlesEnabled @ 143fde440

bool __cdecl FGeometryCollection::AreCollisionParticlesEnabled(void)

{
  return bChaosGeometryCollectionEnableCollisionParticles;
}

// BuildFaceToGeometryMapping @ 143fde720

bool __thiscall
FGeometryCollection::BuildFaceToGeometryMapping(FGeometryCollection *this,bool param_1)

{
  int iVar1;
  FName FVar2;
  longlong lVar3;
  code *pcVar4;
  FName FVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  FName *pFVar11;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar12;
  TManagedArray<int> *pTVar13;
  FValueType *pFVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  bool local_res8;
  FName local_res18;
  FName local_res20;
  FName local_88;
  FName local_80;
  ushort local_78;
  undefined2 uStack_76;
  FConstructionParameters local_68;
  FName local_58;
  FName local_50;
  FName local_48;
  FName local_40;
  
  FVar2 = FacesGroup;
  bVar6 = false;
  local_res8 = false;
  pFVar11 = ::FName::FName(&local_res18,"FaceToGeometryIndex");
  local_50 = FVar2;
  local_58 = *pFVar11;
  pTVar12 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                    *)&this->_padding_,(TTuple<FName,FName> *)&local_58);
  pFVar14 = (FValueType *)&pTVar12->field_0x10;
  if (pTVar12 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar14 = (FValueType *)0x0;
  }
  if ((pFVar14 == (FValueType *)0x0) ||
     (pTVar13 = FManagedArrayCollection::FValueType::ModifyTypedPtr<int>(pFVar14),
     pTVar13 == (TManagedArray<int> *)0x0)) {
    pFVar11 = ::FName::FName(&local_res20,"");
    FVar5 = FacesGroup;
    local_78._1_1_ = false;
    local_78._0_1_ = param_1;
    local_80 = *pFVar11;
    pFVar11 = ::FName::FName(&local_88,"FaceToGeometryIndex");
    local_68.GroupIndexDependency = local_80;
    FVar2 = *pFVar11;
    local_68.Saved = local_78._0_1_;
    local_68.bAllowCircularDependency = local_78._1_1_;
    local_68._10_2_ = uStack_76;
    bVar6 = FManagedArrayCollection::HasAttribute((FManagedArrayCollection *)this,FVar2,FVar5);
    if (!bVar6) {
      FManagedArrayCollection::AddNewAttributeImpl<int>
                ((FManagedArrayCollection *)this,FVar2,FVar5,&local_68);
    }
    FManagedArrayCollection::ModifyAttribute<int>((FManagedArrayCollection *)this,FVar2,FVar5);
    bVar6 = true;
    local_res8 = true;
  }
  FVar2 = FacesGroup;
  pFVar11 = ::FName::FName(&local_80,"FaceToGeometryIndex");
  local_40 = FVar2;
  local_48 = *pFVar11;
  pTVar12 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                    *)&this->_padding_,(TTuple<FName,FName> *)&local_48);
  pFVar14 = (FValueType *)&pTVar12->field_0x10;
  if (pTVar12 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar14 = (FValueType *)0x0;
  }
  if ((pFVar14 == (FValueType *)0x0) ||
     (pTVar13 = FManagedArrayCollection::FValueType::ModifyTypedPtr<int>(pFVar14),
     pTVar13 == (TManagedArray<int> *)0x0)) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3315325426611520459>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollection.cpp"
                       ,0x3cb,"FaceGeometryMap");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
  }
  else {
    iVar9 = FManagedArrayCollection::NumElements((FManagedArrayCollection *)this,GeometryGroup);
    uVar16 = iVar9 - 1;
    if (-1 < (int)uVar16) {
      lVar19 = (longlong)(int)uVar16;
      do {
        uVar15 = ~uVar16 >> 0x1f;
        uVar10 = 0;
        if ((int)uVar16 < *(int *)&(this->FaceCount).field_0x18) {
          uVar10 = uVar15;
        }
        if ((uVar10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        lVar3 = *(longlong *)&(this->FaceCount).field_0x10;
        uVar10 = 0;
        if ((int)uVar16 < *(int *)&(this->FaceStart).field_0x18) {
          uVar10 = uVar15;
        }
        if ((uVar10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        iVar9 = *(int *)(*(longlong *)&(this->FaceStart).field_0x10 + lVar19 * 4);
        iVar1 = *(int *)(lVar3 + lVar19 * 4);
        uVar10 = 0;
        if ((int)uVar16 < *(int *)&(this->FaceStart).field_0x18) {
          uVar10 = uVar15;
        }
        if ((uVar10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        uVar17 = (ulonglong)*(int *)(*(longlong *)&(this->FaceStart).field_0x10 + lVar19 * 4);
        uVar18 = uVar17;
        for (; (longlong)uVar17 < (longlong)(iVar9 + iVar1); uVar17 = uVar17 + 1) {
          uVar15 = (uint)uVar18;
          uVar10 = 0;
          if ((int)uVar15 < *(int *)&pTVar13->field_0x18) {
            uVar10 = ~uVar15 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          uVar18 = (ulonglong)(uVar15 + 1);
          *(uint *)(*(longlong *)&pTVar13->field_0x10 + uVar17 * 4) = uVar16;
        }
        lVar19 = lVar19 + -1;
        uVar16 = uVar16 - 1;
        bVar6 = local_res8;
      } while (-1 < (int)uVar16);
    }
  }
  return bVar6;
}

// BuildMeshSections @ 143fdf6d0

TArray<FGeometryCollectionSection,TSizedDefaultAllocator<32>_> * __thiscall
FGeometryCollection::BuildMeshSections
          (FGeometryCollection *this,
          TArray<FGeometryCollectionSection,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FGeometryCollectionSection::BuildMeshSections
            (__return_storage_ptr__,(FManagedArrayCollection *)this,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

// BuildVertexToGeometryMapping @ 143fdf7b0

bool __thiscall
FGeometryCollection::BuildVertexToGeometryMapping(FGeometryCollection *this,bool param_1)

{
  int iVar1;
  FName FVar2;
  longlong lVar3;
  code *pcVar4;
  FName FVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  FName *pFVar11;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar12;
  TManagedArray<int> *pTVar13;
  FValueType *pFVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  bool local_res8;
  FName local_res18;
  FName local_res20;
  FName local_88;
  FName local_80;
  ushort local_78;
  undefined2 uStack_76;
  FConstructionParameters local_68;
  FName local_58;
  FName local_50;
  FName local_48;
  FName local_40;
  
  FVar2 = VerticesGroup;
  bVar6 = false;
  local_res8 = false;
  pFVar11 = ::FName::FName(&local_res18,"VertexToGeometryIndex");
  local_50 = FVar2;
  local_58 = *pFVar11;
  pTVar12 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                    *)&this->_padding_,(TTuple<FName,FName> *)&local_58);
  pFVar14 = (FValueType *)&pTVar12->field_0x10;
  if (pTVar12 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar14 = (FValueType *)0x0;
  }
  if ((pFVar14 == (FValueType *)0x0) ||
     (pTVar13 = FManagedArrayCollection::FValueType::ModifyTypedPtr<int>(pFVar14),
     pTVar13 == (TManagedArray<int> *)0x0)) {
    pFVar11 = ::FName::FName(&local_res20,"");
    FVar5 = VerticesGroup;
    local_78._1_1_ = false;
    local_78._0_1_ = param_1;
    local_80 = *pFVar11;
    pFVar11 = ::FName::FName(&local_88,"VertexToGeometryIndex");
    local_68.GroupIndexDependency = local_80;
    FVar2 = *pFVar11;
    local_68.Saved = local_78._0_1_;
    local_68.bAllowCircularDependency = local_78._1_1_;
    local_68._10_2_ = uStack_76;
    bVar6 = FManagedArrayCollection::HasAttribute((FManagedArrayCollection *)this,FVar2,FVar5);
    if (!bVar6) {
      FManagedArrayCollection::AddNewAttributeImpl<int>
                ((FManagedArrayCollection *)this,FVar2,FVar5,&local_68);
    }
    FManagedArrayCollection::ModifyAttribute<int>((FManagedArrayCollection *)this,FVar2,FVar5);
    bVar6 = true;
    local_res8 = true;
  }
  FVar2 = VerticesGroup;
  pFVar11 = ::FName::FName(&local_80,"VertexToGeometryIndex");
  local_40 = FVar2;
  local_48 = *pFVar11;
  pTVar12 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                    *)&this->_padding_,(TTuple<FName,FName> *)&local_48);
  pFVar14 = (FValueType *)&pTVar12->field_0x10;
  if (pTVar12 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar14 = (FValueType *)0x0;
  }
  if ((pFVar14 == (FValueType *)0x0) ||
     (pTVar13 = FManagedArrayCollection::FValueType::ModifyTypedPtr<int>(pFVar14),
     pTVar13 == (TManagedArray<int> *)0x0)) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3315325426611520391>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollection.cpp"
                       ,0x387,"VertexGeometryMap");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
  }
  else {
    iVar9 = FManagedArrayCollection::NumElements((FManagedArrayCollection *)this,GeometryGroup);
    uVar16 = iVar9 - 1;
    if (-1 < (int)uVar16) {
      lVar19 = (longlong)(int)uVar16;
      do {
        uVar15 = ~uVar16 >> 0x1f;
        uVar10 = 0;
        if ((int)uVar16 < *(int *)&(this->VertexCount).field_0x18) {
          uVar10 = uVar15;
        }
        if ((uVar10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        lVar3 = *(longlong *)&(this->VertexCount).field_0x10;
        uVar10 = 0;
        if ((int)uVar16 < *(int *)&(this->VertexStart).field_0x18) {
          uVar10 = uVar15;
        }
        if ((uVar10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        iVar9 = *(int *)(*(longlong *)&(this->VertexStart).field_0x10 + lVar19 * 4);
        iVar1 = *(int *)(lVar3 + lVar19 * 4);
        uVar10 = 0;
        if ((int)uVar16 < *(int *)&(this->VertexStart).field_0x18) {
          uVar10 = uVar15;
        }
        if ((uVar10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        uVar17 = (ulonglong)*(int *)(*(longlong *)&(this->VertexStart).field_0x10 + lVar19 * 4);
        uVar18 = uVar17;
        for (; (longlong)uVar17 < (longlong)(iVar9 + iVar1); uVar17 = uVar17 + 1) {
          uVar15 = (uint)uVar18;
          uVar10 = 0;
          if ((int)uVar15 < *(int *)&pTVar13->field_0x18) {
            uVar10 = ~uVar15 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          uVar18 = (ulonglong)(uVar15 + 1);
          *(uint *)(*(longlong *)&pTVar13->field_0x10 + uVar17 * 4) = uVar16;
        }
        lVar19 = lVar19 + -1;
        uVar16 = uVar16 - 1;
        bVar6 = local_res8;
      } while (-1 < (int)uVar16);
    }
  }
  return bVar6;
}

// ConnectionGraph @ 143fe0750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> * __thiscall
FGeometryCollection::ConnectionGraph
          (FGeometryCollection *this,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar9;
  ForElementType<FSetElementId> FVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  uint *puVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined1 auStack_198 [32];
  FScriptContainerElement *local_178;
  FScriptContainerElement *local_170;
  longlong local_168;
  longlong local_160;
  undefined8 local_158;
  uint local_148 [2];
  ForAnyElementType local_140;
  undefined8 local_138;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_130;
  int local_120 [2];
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *local_118;
  TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> local_110;
  float local_100;
  float fStack_fc;
  float local_f8;
  double local_f0;
  double dStack_e8;
  double local_e0;
  TArray<int,TSizedDefaultAllocator<32>_> local_d8;
  TPairInitializer<int_&&,int_const_&> local_c8;
  uint *local_b8;
  TArrayView<UE::Math::TVector<double>_const_,int> local_b0;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_198;
  local_118 = __return_storage_ptr__;
  iVar5 = FManagedArrayCollection::NumElements
                    ((FManagedArrayCollection *)this,FTransformCollection::TransformGroup);
  uVar18 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 0;
  local_d8.ArrayMax = 0;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::Init
            (__return_storage_ptr__,&local_d8,iVar5);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  local_110.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_110.ArrayNum = 0;
  local_110.ArrayMax = 0;
  GeometryCollectionAlgo::GlobalMatrices<UE::Math::TTransform<float>,UE::Math::TTransform<float>_>
            ((TManagedArray<UE::Math::TTransform<float>_> *)&this->_padding_,
             (TManagedArray<int> *)&this->_padding_,&local_110);
  local_140.Data = (FScriptContainerElement *)0x0;
  local_138 = 0;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  local_148[0] = 0;
  uVar11 = uVar18;
  if (0 < iVar5) {
    do {
      iVar6 = *(int *)&(this->TransformToGeometryIndex).field_0x18;
      uVar17 = (uint)uVar11;
      uVar15 = 0;
      if ((int)uVar17 < iVar6) {
        uVar15 = ~uVar17 >> 0x1f;
      }
      if (uVar15 == 0) {
        local_178 = (FScriptContainerElement *)(longlong)(int)uVar17;
        local_170 = (FScriptContainerElement *)(longlong)iVar6;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pTVar9 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar9;
        }
      }
      if (*(int *)(*(longlong *)&(this->TransformToGeometryIndex).field_0x10 +
                  (longlong)(int)uVar17 * 4) != -1) {
        local_120[0] = (int)local_138;
        local_c8.Value = local_120;
        local_b8 = local_148;
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<int_&&,int_const_&>_>(&local_98,&local_c8,(bool *)&local_c8.Value);
        pFVar12 = (FScriptContainerElement *)(longlong)(int)local_148[0];
        uVar15 = 0;
        if ((int)local_148[0] < local_110.ArrayNum) {
          uVar15 = ~local_148[0] >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (local_178 = pFVar12, local_170 = (FScriptContainerElement *)(longlong)local_110.ArrayNum
           , bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar9 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar9;
        }
        pFVar12 = local_110.AllocatorInstance.Data + (longlong)pFVar12 * 0x30 + 0x10;
        local_100 = *(float *)pFVar12;
        fStack_fc = *(float *)(pFVar12 + 4);
        local_f8 = *(float *)(pFVar12 + 8);
        local_f0 = (double)local_100;
        dStack_e8 = (double)fStack_fc;
        local_e0 = (double)local_f8;
        if (local_140.Data <= (FScriptContainerElement *)&local_f0) {
          if ((FScriptContainerElement *)&local_f0 <
              local_140.Data + (longlong)local_138._4_4_ * 0x18) {
            local_160 = (longlong)(int)local_138;
            local_158 = 0x18;
            local_178 = (FScriptContainerElement *)&local_f0;
            local_170 = local_140.Data;
            local_168 = (longlong)local_138._4_4_;
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar4) {
              pcVar2 = (code *)swi(3);
              pTVar9 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                        *)(*pcVar2)();
              return pTVar9;
            }
          }
        }
        iVar6 = (int)local_138;
        if ((int)local_138 == local_138._4_4_) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&local_140,(int *)((longlong)&local_138 + 4));
        }
        local_138 = CONCAT44(local_138._4_4_,iVar6 + 1);
        *(double *)(local_140.Data + (longlong)iVar6 * 0x18) = local_f0;
        *(double *)(local_140.Data + (longlong)iVar6 * 0x18 + 8) = dStack_e8;
        *(double *)(local_140.Data + (longlong)iVar6 * 0x18 + 0x10) = local_e0;
      }
      local_148[0] = local_148[0] + 1;
      uVar11 = (ulonglong)local_148[0];
    } while ((int)local_148[0] < iVar5);
  }
  iVar5 = (int)local_138;
  local_b0.DataPtr = (TVector<double> *)local_140.Data;
  local_130.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_130.ArrayNum = 0;
  local_130.ArrayMax = 0;
  if (((int)local_138 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar9 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
             (*pcVar2)();
    return pTVar9;
  }
  local_b0.ArrayNum = iVar5;
  VoronoiNeighbors(&local_b0,&local_130,true,__real_3f1a36e2e0000000);
  uVar15 = 0;
  if (0 < local_130.ArrayNum) {
    do {
      uVar17 = 0;
      lVar16 = 0;
      while( true ) {
        uVar7 = 0;
        if ((int)uVar15 < local_130.ArrayNum) {
          uVar7 = ~uVar15 >> 0x1f;
        }
        if (uVar7 == 0) {
          local_178 = (FScriptContainerElement *)(longlong)(int)uVar15;
          local_170 = (FScriptContainerElement *)(longlong)local_130.ArrayNum;
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            pTVar9 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                     (*pcVar2)();
            return pTVar9;
          }
        }
        if (*(int *)(local_130.AllocatorInstance.Data + uVar18 + 8) <= (int)uVar17) break;
        if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
          FVar10 = (ForElementType<FSetElementId>)&local_98.Hash;
          if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar10 = local_98.Hash.SecondaryData;
          }
          uVar7 = *(uint *)((longlong)FVar10 + (ulonglong)(local_98.HashSize - 1U & uVar15) * 4);
          while (uVar7 != 0xffffffff) {
            puVar13 = (uint *)((longlong)(int)uVar7 * 0x10 + local_98.Elements._0_8_);
            if (*puVar13 == uVar15) {
              if (puVar13 != (uint *)0x0) goto LAB_143fe0b73;
              goto LAB_143fe0b4d;
            }
            uVar7 = puVar13[2];
          }
        }
        puVar13 = (uint *)0x0;
LAB_143fe0b4d:
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pTVar9 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar9;
        }
LAB_143fe0b73:
        uVar7 = puVar13[1];
        uVar8 = 0;
        if ((int)uVar7 < local_118->ArrayNum) {
          uVar8 = ~uVar7 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (local_178 = (FScriptContainerElement *)(longlong)(int)uVar7,
           local_170 = (FScriptContainerElement *)(longlong)local_118->ArrayNum,
           bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar9 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar9;
        }
        pFVar12 = (local_118->AllocatorInstance).Data + (longlong)(int)uVar7 * 0x10;
        uVar7 = 0;
        if ((int)uVar15 < local_130.ArrayNum) {
          uVar7 = ~uVar15 >> 0x1f;
        }
        if (uVar7 == 0) {
          local_178 = (FScriptContainerElement *)(longlong)(int)uVar15;
          local_170 = (FScriptContainerElement *)(longlong)local_130.ArrayNum;
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            pTVar9 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                     (*pcVar2)();
            return pTVar9;
          }
        }
        FVar3.Data = local_130.AllocatorInstance.Data;
        uVar7 = 0;
        if ((int)uVar17 < *(int *)(local_130.AllocatorInstance.Data + uVar18 + 8)) {
          uVar7 = ~uVar17 >> 0x1f;
        }
        if (uVar7 == 0) {
          local_178 = (FScriptContainerElement *)(longlong)(int)uVar17;
          local_170 = (FScriptContainerElement *)
                      (longlong)*(int *)(local_130.AllocatorInstance.Data + uVar18 + 8);
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            pTVar9 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                     (*pcVar2)();
            return pTVar9;
          }
        }
        if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
          FVar10 = (ForElementType<FSetElementId>)&local_98.Hash;
          if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar10 = local_98.Hash.SecondaryData;
          }
          uVar7 = *(uint *)((longlong)FVar10 +
                           (ulonglong)
                           (local_98.HashSize - 1U &
                           *(uint *)(*(longlong *)(FVar3.Data + uVar18) + lVar16)) * 4);
          while (uVar7 != 0xffffffff) {
            puVar13 = (uint *)((longlong)(int)uVar7 * 0x10 + local_98.Elements._0_8_);
            if (*puVar13 == *(uint *)(*(longlong *)(FVar3.Data + uVar18) + lVar16)) {
              if (puVar13 != (uint *)0x0) goto LAB_143fe0ce4;
              goto LAB_143fe0cbe;
            }
            uVar7 = puVar13[2];
          }
        }
        puVar13 = (uint *)0x0;
LAB_143fe0cbe:
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pTVar9 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar9;
        }
LAB_143fe0ce4:
        pFVar1 = *(FScriptContainerElement **)&pFVar12->field_0x0;
        pFVar14 = (FScriptContainerElement *)(puVar13 + 1);
        if ((pFVar1 <= pFVar14) && (pFVar14 < pFVar1 + (longlong)*(int *)(pFVar12 + 0xc) * 4)) {
          local_160 = (longlong)*(int *)&pFVar12[8].field_0x0;
          local_158 = 4;
          local_178 = pFVar14;
          local_170 = pFVar1;
          local_168 = (longlong)*(int *)(pFVar12 + 0xc);
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            pTVar9 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                     (*pcVar2)();
            return pTVar9;
          }
        }
        iVar5 = *(int *)&pFVar12[8].field_0x0;
        if (iVar5 == *(int *)(pFVar12 + 0xc)) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,(ForAnyElementType *)pFVar12,(int *)(pFVar12 + 0xc));
        }
        uVar17 = uVar17 + 1;
        *(int *)&pFVar12[8].field_0x0 = iVar5 + 1;
        lVar16 = lVar16 + 4;
        *(uint *)(*(longlong *)&pFVar12->field_0x0 + (longlong)iVar5 * 4) = *(uint *)pFVar14;
      }
      uVar15 = uVar15 + 1;
      uVar18 = uVar18 + 0x10;
      __return_storage_ptr__ = local_118;
    } while ((int)uVar15 < local_130.ArrayNum);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_130.AllocatorInstance.Data,
             local_130.ArrayNum);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_130.AllocatorInstance.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_130.AllocatorInstance.Data);
  }
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
  if (local_140.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.Data);
  }
  if (local_110.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Construct @ 143fe0e60

void __thiscall FGeometryCollection::Construct(FGeometryCollection *this)

{
  FName FVar1;
  FName FVar2;
  FName FVar3;
  FName FVar4;
  FName *pFVar5;
  FName local_res8;
  undefined2 local_60;
  undefined2 uStack_5e;
  undefined2 local_50;
  undefined2 uStack_4e;
  undefined2 local_40;
  undefined2 uStack_3e;
  undefined2 local_30;
  undefined2 uStack_2e;
  FConstructionParameters local_28;
  
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 10;
  FVar4 = FTransformCollection::TransformGroup;
  FVar3 = VerticesGroup;
  FVar1 = FacesGroup;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  pFVar5 = ::FName::FName(&local_res8,"TransformToGeometryIndex");
  local_28.Saved = true;
  local_28.bAllowCircularDependency = false;
  local_28._10_2_ = uStack_2e;
  local_28.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_28.GroupIndexDependency.Number = 0;
  FManagedArrayCollection::AddExternalAttribute<int>
            ((FManagedArrayCollection *)this,*pFVar5,FVar4,&this->TransformToGeometryIndex,&local_28
            );
  FVar2 = FTransformCollection::TransformGroup;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  pFVar5 = ::FName::FName(&local_res8,"SimulationType");
  local_28.Saved = true;
  local_28.bAllowCircularDependency = false;
  local_28.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_28.GroupIndexDependency.Number = 0;
  FManagedArrayCollection::AddExternalAttribute<int>
            ((FManagedArrayCollection *)this,*pFVar5,FVar2,&this->SimulationType,&local_28);
  FVar2 = FTransformCollection::TransformGroup;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  pFVar5 = ::FName::FName(&local_res8,"StatusFlags");
  local_28.Saved = true;
  local_28.bAllowCircularDependency = false;
  local_28.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_28.GroupIndexDependency.Number = 0;
  FManagedArrayCollection::AddExternalAttribute<int>
            ((FManagedArrayCollection *)this,*pFVar5,FVar2,&this->StatusFlags,&local_28);
  FVar2 = FTransformCollection::TransformGroup;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  pFVar5 = ::FName::FName(&local_res8,"InitialDynamicState");
  local_28.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_28.GroupIndexDependency.Number = 0;
  local_28.Saved = true;
  local_28.bAllowCircularDependency = false;
  FManagedArrayCollection::AddExternalAttribute<int>
            ((FManagedArrayCollection *)this,*pFVar5,FVar2,&this->InitialDynamicState,&local_28);
  FVar2 = FTransformCollection::TransformGroup;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  pFVar5 = ::FName::FName(&local_res8,"ExemplarIndex");
  local_28.Saved = true;
  local_28.bAllowCircularDependency = false;
  local_28.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_28.GroupIndexDependency.Number = 0;
  FManagedArrayCollection::AddExternalAttribute<int>
            ((FManagedArrayCollection *)this,*pFVar5,FVar2,&this->ExemplarIndex,&local_28);
  FVar2 = VerticesGroup;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  pFVar5 = ::FName::FName(&local_res8,"Vertex");
  local_28.Saved = true;
  local_28.bAllowCircularDependency = false;
  local_28.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_28.GroupIndexDependency.Number = 0;
  FManagedArrayCollection::AddExternalAttribute<UE::Math::TVector<float>_>
            ((FManagedArrayCollection *)this,*pFVar5,FVar2,&this->Vertex,&local_28);
  FVar2 = VerticesGroup;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  pFVar5 = ::FName::FName(&local_res8,"Normal");
  local_28.Saved = true;
  local_28.bAllowCircularDependency = false;
  local_28.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_28.GroupIndexDependency.Number = 0;
  FManagedArrayCollection::AddExternalAttribute<UE::Math::TVector<float>_>
            ((FManagedArrayCollection *)this,*pFVar5,FVar2,&this->Normal,&local_28);
  local_28.Saved = true;
  local_28.bAllowCircularDependency = false;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_28.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_28.GroupIndexDependency.Number = 0;
  FManagedArrayCollection::AddExternalAttribute<FLinearColor>
            ((FManagedArrayCollection *)this,ColorAttribute,VerticesGroup,&this->Color,&local_28);
  FVar2 = VerticesGroup;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  pFVar5 = ::FName::FName(&local_res8,"TangentU");
  local_28.Saved = true;
  local_28.bAllowCircularDependency = false;
  local_28.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_28.GroupIndexDependency.Number = 0;
  FManagedArrayCollection::AddExternalAttribute<UE::Math::TVector<float>_>
            ((FManagedArrayCollection *)this,*pFVar5,FVar2,&this->TangentU,&local_28);
  FVar2 = VerticesGroup;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  pFVar5 = ::FName::FName(&local_res8,"TangentV");
  local_28.Saved = true;
  local_28.bAllowCircularDependency = false;
  local_28.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_28.GroupIndexDependency.Number = 0;
  FManagedArrayCollection::AddExternalAttribute<UE::Math::TVector<float>_>
            ((FManagedArrayCollection *)this,*pFVar5,FVar2,&this->TangentV,&local_28);
  FVar2 = VerticesGroup;
  pFVar5 = ::FName::FName(&local_res8,"BoneMap");
  local_28.GroupIndexDependency = FVar4;
  local_28.Saved = true;
  local_28.bAllowCircularDependency = false;
  local_28._10_2_ = uStack_5e;
  FManagedArrayCollection::AddExternalAttribute<int>
            ((FManagedArrayCollection *)this,*pFVar5,FVar2,&this->BoneMap,&local_28);
  GeometryCollection::UV::DefineUVSchema((FManagedArrayCollection *)this);
  FVar2 = FacesGroup;
  pFVar5 = ::FName::FName(&local_res8,"Indices");
  local_28.GroupIndexDependency = FVar3;
  local_28.Saved = true;
  local_28.bAllowCircularDependency = false;
  local_28._10_2_ = uStack_4e;
  FManagedArrayCollection::AddExternalAttribute<UE::Math::TIntVector3<int>_>
            ((FManagedArrayCollection *)this,*pFVar5,FVar2,&this->Indices,&local_28);
  FVar2 = FacesGroup;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  pFVar5 = ::FName::FName(&local_res8,"Visible");
  local_28.Saved = true;
  local_28.bAllowCircularDependency = false;
  local_28._10_2_ = uStack_2e;
  local_28.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_28.GroupIndexDependency.Number = 0;
  FManagedArrayCollection::AddExternalAttribute<bool>
            ((FManagedArrayCollection *)this,*pFVar5,FVar2,&this->Visible,&local_28);
  FVar2 = FacesGroup;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  pFVar5 = ::FName::FName(&local_res8,"MaterialIndex");
  local_28.Saved = true;
  local_28.bAllowCircularDependency = false;
  local_28.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_28.GroupIndexDependency.Number = 0;
  FManagedArrayCollection::AddExternalAttribute<int>
            ((FManagedArrayCollection *)this,*pFVar5,FVar2,&this->MaterialIndex,&local_28);
  FVar2 = FacesGroup;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  pFVar5 = ::FName::FName(&local_res8,"MaterialID");
  local_28.Saved = true;
  local_28.bAllowCircularDependency = false;
  local_28.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_28.GroupIndexDependency.Number = 0;
  FManagedArrayCollection::AddExternalAttribute<int>
            ((FManagedArrayCollection *)this,*pFVar5,FVar2,&this->MaterialID,&local_28);
  FVar2 = FacesGroup;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  pFVar5 = ::FName::FName(&local_res8,"Internal");
  local_28.Saved = true;
  local_28.bAllowCircularDependency = false;
  local_28.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_28.GroupIndexDependency.Number = 0;
  FManagedArrayCollection::AddExternalAttribute<bool>
            ((FManagedArrayCollection *)this,*pFVar5,FVar2,&this->Internal,&local_28);
  FVar2 = GeometryGroup;
  pFVar5 = ::FName::FName(&local_res8,"TransformIndex");
  local_28.GroupIndexDependency = FVar4;
  local_28.Saved = true;
  local_28.bAllowCircularDependency = false;
  local_28._10_2_ = uStack_5e;
  FManagedArrayCollection::AddExternalAttribute<int>
            ((FManagedArrayCollection *)this,*pFVar5,FVar2,&this->TransformIndex,&local_28);
  FVar2 = GeometryGroup;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  pFVar5 = ::FName::FName(&local_res8,"BoundingBox");
  local_28.Saved = true;
  local_28.bAllowCircularDependency = false;
  local_28._10_2_ = uStack_2e;
  local_28.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_28.GroupIndexDependency.Number = 0;
  FManagedArrayCollection::AddExternalAttribute<UE::Math::TBox<double>_>
            ((FManagedArrayCollection *)this,*pFVar5,FVar2,&this->BoundingBox,&local_28);
  FVar2 = GeometryGroup;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  pFVar5 = ::FName::FName(&local_res8,"InnerRadius");
  local_28.Saved = true;
  local_28.bAllowCircularDependency = false;
  local_28.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_28.GroupIndexDependency.Number = 0;
  FManagedArrayCollection::AddExternalAttribute<float>
            ((FManagedArrayCollection *)this,*pFVar5,FVar2,&this->InnerRadius,&local_28);
  FVar2 = GeometryGroup;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  pFVar5 = ::FName::FName(&local_res8,"OuterRadius");
  local_28.Saved = true;
  local_28.bAllowCircularDependency = false;
  local_28.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_28.GroupIndexDependency.Number = 0;
  FManagedArrayCollection::AddExternalAttribute<float>
            ((FManagedArrayCollection *)this,*pFVar5,FVar2,&this->OuterRadius,&local_28);
  FVar2 = GeometryGroup;
  pFVar5 = ::FName::FName(&local_res8,"VertexStart");
  local_28.GroupIndexDependency = FVar3;
  local_28.Saved = true;
  local_28.bAllowCircularDependency = false;
  local_28._10_2_ = uStack_4e;
  FManagedArrayCollection::AddExternalAttribute<int>
            ((FManagedArrayCollection *)this,*pFVar5,FVar2,&this->VertexStart,&local_28);
  FVar2 = GeometryGroup;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  pFVar5 = ::FName::FName(&local_res8,"VertexCount");
  local_28.Saved = true;
  local_28.bAllowCircularDependency = false;
  local_28._10_2_ = uStack_2e;
  local_28.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_28.GroupIndexDependency.Number = 0;
  FManagedArrayCollection::AddExternalAttribute<int>
            ((FManagedArrayCollection *)this,*pFVar5,FVar2,&this->VertexCount,&local_28);
  FVar2 = GeometryGroup;
  pFVar5 = ::FName::FName(&local_res8,"FaceStart");
  local_28.GroupIndexDependency = FVar1;
  local_28.Saved = true;
  local_28.bAllowCircularDependency = false;
  local_28._10_2_ = uStack_3e;
  FManagedArrayCollection::AddExternalAttribute<int>
            ((FManagedArrayCollection *)this,*pFVar5,FVar2,&this->FaceStart,&local_28);
  FVar2 = GeometryGroup;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  pFVar5 = ::FName::FName(&local_res8,"FaceCount");
  local_28.Saved = true;
  local_28.bAllowCircularDependency = false;
  local_28._10_2_ = uStack_2e;
  local_28.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_28.GroupIndexDependency.Number = 0;
  FManagedArrayCollection::AddExternalAttribute<int>
            ((FManagedArrayCollection *)this,*pFVar5,FVar2,&this->FaceCount,&local_28);
  FVar2 = MaterialGroup;
  pFVar5 = ::FName::FName(&local_res8,"Sections");
  local_28.GroupIndexDependency = FVar1;
  local_28.Saved = true;
  local_28.bAllowCircularDependency = false;
  local_28._10_2_ = uStack_3e;
  FManagedArrayCollection::AddExternalAttribute<FGeometryCollectionSection>
            ((FManagedArrayCollection *)this,*pFVar5,FVar2,&this->Sections,&local_28);
                    /* WARNING: Could not recover jumptable at 0x000143fe16cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x58))(this);
  return;
}

// DefineGeometrySchema @ 143fe72e0

void __cdecl FGeometryCollection::DefineGeometrySchema(FManagedArrayCollection *param_1)

{
  FName FVar1;
  longlong lVar2;
  code *pcVar3;
  FName FVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  FName *pFVar9;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar10;
  FName local_428;
  undefined2 local_420;
  undefined2 uStack_41e;
  FName local_418;
  undefined2 local_410;
  undefined2 uStack_40e;
  FName local_408;
  undefined2 local_400;
  undefined2 uStack_3fe;
  FName local_3f8;
  undefined2 local_3f0;
  undefined2 uStack_3ee;
  FName local_3ec;
  undefined2 local_3e4;
  undefined2 uStack_3e2;
  FName local_3e0;
  undefined2 local_3d8;
  undefined2 uStack_3d6;
  FName local_3d4;
  undefined2 local_3cc;
  undefined2 uStack_3ca;
  FName local_3c8;
  undefined2 local_3c0;
  undefined2 uStack_3be;
  FName local_3bc;
  undefined2 local_3b4;
  undefined2 uStack_3b2;
  FName local_3b0;
  undefined2 local_3a8;
  undefined2 uStack_3a6;
  FName local_3a4;
  undefined2 local_39c;
  undefined2 uStack_39a;
  FName local_398;
  undefined2 local_390;
  undefined2 uStack_38e;
  FName local_38c;
  undefined2 local_384;
  undefined2 uStack_382;
  FName local_380;
  undefined2 local_378;
  undefined2 uStack_376;
  undefined8 local_374;
  undefined2 local_36c;
  undefined2 uStack_36a;
  FName local_368;
  undefined2 local_360;
  undefined2 uStack_35e;
  FName local_35c;
  undefined2 local_354;
  undefined2 uStack_352;
  FName local_350;
  undefined2 local_348;
  undefined2 uStack_346;
  FName local_344;
  undefined2 local_33c;
  undefined2 uStack_33a;
  FName local_338;
  undefined2 local_330;
  undefined2 uStack_32e;
  FName local_32c;
  undefined2 local_324;
  undefined2 uStack_322;
  FName local_320;
  undefined2 local_318;
  undefined2 uStack_316;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  FName local_298;
  FName local_290;
  FConstructionParameters local_288;
  FConstructionParameters local_278;
  FConstructionParameters local_268;
  FConstructionParameters local_258;
  FConstructionParameters local_248;
  FConstructionParameters local_238;
  FConstructionParameters local_228;
  FConstructionParameters local_218;
  FConstructionParameters local_208;
  FConstructionParameters local_1f8;
  FConstructionParameters local_1e8;
  FConstructionParameters local_1d8;
  FConstructionParameters local_1c8;
  FConstructionParameters local_1b8;
  FConstructionParameters local_1a8;
  FConstructionParameters local_198;
  FConstructionParameters local_188;
  FConstructionParameters local_178;
  FConstructionParameters local_168;
  FConstructionParameters local_158;
  FConstructionParameters local_148;
  FConstructionParameters local_138;
  FConstructionParameters local_128;
  FConstructionParameters local_118;
  FConstructionParameters local_108;
  FName local_f8;
  FName local_f0;
  FName local_e8;
  FName local_e0;
  FName local_d8;
  FName local_d0;
  FName local_c8;
  FName local_c0;
  FName local_b8;
  FName local_b0;
  FName local_a8;
  FName local_a0;
  FName local_98;
  FName local_90;
  FName local_88;
  FName local_80;
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50;
  FName local_48;
  FName local_40;
  
  FTransformCollection::DefineTransformSchema(param_1);
  FVar4 = FTransformCollection::TransformGroup;
  local_428 = VerticesGroup;
  local_408 = FacesGroup;
  local_320.ComparisonIndex.Value = 0;
  local_320.Number = 0;
  local_418 = FTransformCollection::TransformGroup;
  local_410._0_1_ = true;
  local_410._1_1_ = false;
  local_420._0_1_ = true;
  local_420._1_1_ = false;
  local_400._0_1_ = true;
  local_400._1_1_ = false;
  local_318._0_1_ = true;
  local_318._1_1_ = false;
  pFVar9 = ::FName::FName(&local_e8,"TransformToGeometryIndex");
  local_128.GroupIndexDependency = local_320;
  FVar1 = *pFVar9;
  local_128.Saved = local_318._0_1_;
  local_128.bAllowCircularDependency = local_318._1_1_;
  local_128._10_2_ = uStack_316;
  bVar8 = FManagedArrayCollection::HasAttribute(param_1,FVar1,FVar4);
  if (!bVar8) {
    FManagedArrayCollection::AddNewAttributeImpl<int>(param_1,FVar1,FVar4,&local_128);
  }
  FManagedArrayCollection::ModifyAttribute<int>(param_1,FVar1,FVar4);
  FVar4 = FTransformCollection::TransformGroup;
  local_368.ComparisonIndex.Value = 0;
  local_368.Number = 0;
  local_360._0_1_ = true;
  local_360._1_1_ = false;
  pFVar9 = ::FName::FName(&local_e0,"SimulationType");
  local_178.GroupIndexDependency = local_368;
  FVar1 = *pFVar9;
  local_178.Saved = local_360._0_1_;
  local_178.bAllowCircularDependency = local_360._1_1_;
  local_178._10_2_ = uStack_35e;
  bVar8 = FManagedArrayCollection::HasAttribute(param_1,FVar1,FVar4);
  if (!bVar8) {
    FManagedArrayCollection::AddNewAttributeImpl<int>(param_1,FVar1,FVar4,&local_178);
  }
  FManagedArrayCollection::ModifyAttribute<int>(param_1,FVar1,FVar4);
  FVar4 = FTransformCollection::TransformGroup;
  local_32c.ComparisonIndex.Value = 0;
  local_32c.Number = 0;
  local_324._0_1_ = true;
  local_324._1_1_ = false;
  pFVar9 = ::FName::FName(&local_d8,"StatusFlags");
  local_108.GroupIndexDependency = local_32c;
  FVar1 = *pFVar9;
  local_108.Saved = local_324._0_1_;
  local_108.bAllowCircularDependency = local_324._1_1_;
  local_108._10_2_ = uStack_322;
  bVar8 = FManagedArrayCollection::HasAttribute(param_1,FVar1,FVar4);
  if (!bVar8) {
    FManagedArrayCollection::AddNewAttributeImpl<int>(param_1,FVar1,FVar4,&local_108);
  }
  FManagedArrayCollection::ModifyAttribute<int>(param_1,FVar1,FVar4);
  FVar4 = FTransformCollection::TransformGroup;
  local_338.ComparisonIndex.Value = 0;
  local_338.Number = 0;
  local_330._0_1_ = true;
  local_330._1_1_ = false;
  pFVar9 = ::FName::FName(&local_d0,"InitialDynamicState");
  local_288.GroupIndexDependency = local_338;
  FVar1 = *pFVar9;
  local_288.Saved = local_330._0_1_;
  local_288.bAllowCircularDependency = local_330._1_1_;
  local_288._10_2_ = uStack_32e;
  bVar8 = FManagedArrayCollection::HasAttribute(param_1,FVar1,FVar4);
  if (!bVar8) {
    FManagedArrayCollection::AddNewAttributeImpl<int>(param_1,FVar1,FVar4,&local_288);
  }
  FManagedArrayCollection::ModifyAttribute<int>(param_1,FVar1,FVar4);
  FVar4 = FTransformCollection::TransformGroup;
  local_310 = 0;
  local_344.ComparisonIndex.Value = 0;
  local_344.Number = 0;
  local_33c._0_1_ = true;
  local_33c._1_1_ = false;
  pFVar9 = ::FName::FName(&local_48,"ExemplarIndex");
  local_278.GroupIndexDependency = local_344;
  FVar1 = *pFVar9;
  local_278.Saved = local_33c._0_1_;
  local_278.bAllowCircularDependency = local_33c._1_1_;
  local_278._10_2_ = uStack_33a;
  bVar8 = FManagedArrayCollection::HasAttribute(param_1,FVar1,FVar4);
  if (!bVar8) {
    FManagedArrayCollection::AddNewAttributeImpl<int>(param_1,FVar1,FVar4,&local_278);
  }
  FManagedArrayCollection::ModifyAttribute<int>(param_1,FVar1,FVar4);
  FVar1 = VerticesGroup;
  local_308 = 0;
  local_350.ComparisonIndex.Value = 0;
  local_350.Number = 0;
  local_348._0_1_ = true;
  local_348._1_1_ = false;
  pFVar9 = ::FName::FName(&local_50,"Vertex");
  local_268.Saved = local_348._0_1_;
  local_268.bAllowCircularDependency = local_348._1_1_;
  local_268._10_2_ = uStack_346;
  local_268.GroupIndexDependency = local_350;
  FManagedArrayCollection::AddAttribute<UE::Math::TVector<float>_>(param_1,*pFVar9,FVar1,&local_268)
  ;
  FVar1 = VerticesGroup;
  local_300 = 0;
  local_35c.ComparisonIndex.Value = 0;
  local_35c.Number = 0;
  local_354._0_1_ = true;
  local_354._1_1_ = false;
  pFVar9 = ::FName::FName(&local_58,"Normal");
  local_258.Saved = local_354._0_1_;
  local_258.bAllowCircularDependency = local_354._1_1_;
  local_258._10_2_ = uStack_352;
  local_258.GroupIndexDependency = local_35c;
  FManagedArrayCollection::AddAttribute<UE::Math::TVector<float>_>(param_1,*pFVar9,FVar1,&local_258)
  ;
  local_374 = 0;
  local_36c._0_1_ = true;
  local_36c._1_1_ = false;
  local_248.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_248.GroupIndexDependency.Number = 0;
  local_2f8 = 0;
  local_248.Saved = true;
  local_248.bAllowCircularDependency = false;
  local_248._10_2_ = uStack_36a;
  FManagedArrayCollection::AddAttribute<FLinearColor>
            (param_1,ColorAttribute,VerticesGroup,&local_248);
  FVar1 = VerticesGroup;
  local_2f0 = 0;
  local_38c.ComparisonIndex.Value = 0;
  local_38c.Number = 0;
  local_384._0_1_ = true;
  local_384._1_1_ = false;
  pFVar9 = ::FName::FName(&local_60,"TangentU");
  local_238.Saved = local_384._0_1_;
  local_238.bAllowCircularDependency = local_384._1_1_;
  local_238._10_2_ = uStack_382;
  local_238.GroupIndexDependency = local_38c;
  FManagedArrayCollection::AddAttribute<UE::Math::TVector<float>_>(param_1,*pFVar9,FVar1,&local_238)
  ;
  FVar1 = VerticesGroup;
  local_2e8 = 0;
  local_398.ComparisonIndex.Value = 0;
  local_398.Number = 0;
  local_390._0_1_ = true;
  local_390._1_1_ = false;
  pFVar9 = ::FName::FName(&local_68,"TangentV");
  local_228.GroupIndexDependency = local_398;
  local_228.Saved = local_390._0_1_;
  local_228.bAllowCircularDependency = local_390._1_1_;
  local_228._10_2_ = uStack_38e;
  FManagedArrayCollection::AddAttribute<UE::Math::TVector<float>_>(param_1,*pFVar9,FVar1,&local_228)
  ;
  FVar4 = VerticesGroup;
  pFVar9 = ::FName::FName(&local_40,"BoneMap");
  uVar6 = _local_410;
  local_298 = local_418;
  FVar1 = *pFVar9;
  local_218.GroupIndexDependency = local_418;
  local_218.Saved = local_410._0_1_;
  local_218.bAllowCircularDependency = local_410._1_1_;
  local_218._10_2_ = uStack_40e;
  bVar8 = FManagedArrayCollection::HasAttribute(param_1,FVar1,FVar4);
  if (!bVar8) {
    FManagedArrayCollection::AddNewAttributeImpl<int>(param_1,FVar1,FVar4,&local_218);
  }
  FManagedArrayCollection::ModifyAttribute<int>(param_1,FVar1,FVar4);
  GeometryCollection::UV::DefineUVSchema(param_1);
  FVar4 = FacesGroup;
  pFVar9 = ::FName::FName(&local_70,"Indices");
  uVar5 = _local_420;
  local_290 = local_428;
  FVar1 = *pFVar9;
  local_208.GroupIndexDependency = local_428;
  local_208.Saved = local_420._0_1_;
  local_208.bAllowCircularDependency = local_420._1_1_;
  local_208._10_2_ = uStack_41e;
  bVar8 = FManagedArrayCollection::HasAttribute(param_1,FVar1,FVar4);
  if (!bVar8) {
    FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TIntVector3<int>_>
              (param_1,FVar1,FVar4,&local_208);
  }
  bVar8 = FManagedArrayCollection::HasAttribute(param_1,FVar1,FVar4);
  if (!bVar8) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(Name, Group)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x164,L"");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_f0 = FVar4;
  local_f8 = FVar1;
  pTVar10 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                    *)&param_1->Map,(TTuple<FName,FName> *)&local_f8);
  if (pTVar10 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (pTVar10->field_0x10 != '\x02') {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSameType<T>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x315,L"");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FManagedArrayCollection::FValueType::MakeUniqueForWrite((FValueType *)&pTVar10->field_0x10);
  lVar2 = *(longlong *)&pTVar10->field_0x30;
  if (lVar2 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedManagedArray != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x319,L"");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(undefined1 *)(lVar2 + 8) = 1;
  FVar4 = FacesGroup;
  local_3a4.ComparisonIndex.Value = 0;
  local_3a4.Number = 0;
  local_2e0 = 0;
  local_39c._0_1_ = true;
  local_39c._1_1_ = false;
  pFVar9 = ::FName::FName(&local_78,"Visible");
  local_1f8.GroupIndexDependency = local_3a4;
  FVar1 = *pFVar9;
  local_1f8.Saved = local_39c._0_1_;
  local_1f8.bAllowCircularDependency = local_39c._1_1_;
  local_1f8._10_2_ = uStack_39a;
  bVar8 = FManagedArrayCollection::HasAttribute(param_1,FVar1,FVar4);
  if (!bVar8) {
    FManagedArrayCollection::AddNewAttributeImpl<bool>(param_1,FVar1,FVar4,&local_1f8);
  }
  FManagedArrayCollection::ModifyAttribute<bool>(param_1,FVar1,FVar4);
  FVar4 = FacesGroup;
  local_2d8 = 0;
  local_380.ComparisonIndex.Value = 0;
  local_380.Number = 0;
  local_378._0_1_ = true;
  local_378._1_1_ = false;
  pFVar9 = ::FName::FName(&local_88,"MaterialIndex");
  local_1e8.GroupIndexDependency = local_380;
  FVar1 = *pFVar9;
  local_1e8.Saved = local_378._0_1_;
  local_1e8.bAllowCircularDependency = local_378._1_1_;
  local_1e8._10_2_ = uStack_376;
  bVar8 = FManagedArrayCollection::HasAttribute(param_1,FVar1,FVar4);
  if (!bVar8) {
    FManagedArrayCollection::AddNewAttributeImpl<int>(param_1,FVar1,FVar4,&local_1e8);
  }
  FManagedArrayCollection::ModifyAttribute<int>(param_1,FVar1,FVar4);
  FVar4 = FacesGroup;
  local_2d0 = 0;
  local_3b0.ComparisonIndex.Value = 0;
  local_3b0.Number = 0;
  local_3a8._0_1_ = true;
  local_3a8._1_1_ = false;
  pFVar9 = ::FName::FName(&local_90,"MaterialID");
  local_1d8.GroupIndexDependency = local_3b0;
  FVar1 = *pFVar9;
  local_1d8.Saved = local_3a8._0_1_;
  local_1d8.bAllowCircularDependency = local_3a8._1_1_;
  local_1d8._10_2_ = uStack_3a6;
  bVar8 = FManagedArrayCollection::HasAttribute(param_1,FVar1,FVar4);
  if (!bVar8) {
    FManagedArrayCollection::AddNewAttributeImpl<int>(param_1,FVar1,FVar4,&local_1d8);
  }
  FManagedArrayCollection::ModifyAttribute<int>(param_1,FVar1,FVar4);
  FVar4 = FacesGroup;
  local_2c8 = 0;
  local_3bc.ComparisonIndex.Value = 0;
  local_3bc.Number = 0;
  local_3b4._0_1_ = true;
  local_3b4._1_1_ = false;
  pFVar9 = ::FName::FName(&local_98,"Internal");
  local_1c8.GroupIndexDependency = local_3bc;
  FVar1 = *pFVar9;
  local_1c8.Saved = local_3b4._0_1_;
  local_1c8.bAllowCircularDependency = local_3b4._1_1_;
  local_1c8._10_2_ = uStack_3b2;
  bVar8 = FManagedArrayCollection::HasAttribute(param_1,FVar1,FVar4);
  if (!bVar8) {
    FManagedArrayCollection::AddNewAttributeImpl<bool>(param_1,FVar1,FVar4,&local_1c8);
  }
  FManagedArrayCollection::ModifyAttribute<bool>(param_1,FVar1,FVar4);
  FVar4 = GeometryGroup;
  pFVar9 = ::FName::FName(&local_a0,"TransformIndex");
  uVar7 = _local_410;
  local_1b8.GroupIndexDependency = local_298;
  local_410._0_1_ = SUB41(uVar6,0);
  local_410._1_1_ = SUB41(uVar6,1);
  uStack_40e = SUB42(uVar6,2);
  local_1b8.Saved = local_410._0_1_;
  local_1b8.bAllowCircularDependency = local_410._1_1_;
  local_1b8._10_2_ = uStack_40e;
  FVar1 = *pFVar9;
  _local_410 = uVar7;
  bVar8 = FManagedArrayCollection::HasAttribute(param_1,FVar1,FVar4);
  if (!bVar8) {
    FManagedArrayCollection::AddNewAttributeImpl<int>(param_1,FVar1,FVar4,&local_1b8);
  }
  FManagedArrayCollection::ModifyAttribute<int>(param_1,FVar1,FVar4);
  FVar4 = GeometryGroup;
  local_2a0 = 0;
  local_3c8.ComparisonIndex.Value = 0;
  local_3c8.Number = 0;
  local_3c0._0_1_ = true;
  local_3c0._1_1_ = false;
  pFVar9 = ::FName::FName(&local_80,"BoundingBox");
  local_1a8.GroupIndexDependency = local_3c8;
  FVar1 = *pFVar9;
  local_1a8.Saved = local_3c0._0_1_;
  local_1a8.bAllowCircularDependency = local_3c0._1_1_;
  local_1a8._10_2_ = uStack_3be;
  bVar8 = FManagedArrayCollection::HasAttribute(param_1,FVar1,FVar4);
  if (!bVar8) {
    FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TBox<double>_>
              (param_1,FVar1,FVar4,&local_1a8);
  }
  FManagedArrayCollection::ModifyAttribute<UE::Math::TBox<double>_>(param_1,FVar1,FVar4);
  FVar1 = GeometryGroup;
  local_2c0 = 0;
  local_3d4.ComparisonIndex.Value = 0;
  local_3d4.Number = 0;
  local_3cc._0_1_ = true;
  local_3cc._1_1_ = false;
  pFVar9 = ::FName::FName(&local_a8,"InnerRadius");
  local_198.Saved = local_3cc._0_1_;
  local_198.bAllowCircularDependency = local_3cc._1_1_;
  local_198._10_2_ = uStack_3ca;
  local_198.GroupIndexDependency = local_3d4;
  FManagedArrayCollection::AddAttribute<float>(param_1,*pFVar9,FVar1,&local_198);
  FVar1 = GeometryGroup;
  local_2b8 = 0;
  local_3e0.ComparisonIndex.Value = 0;
  local_3e0.Number = 0;
  local_3d8._0_1_ = true;
  local_3d8._1_1_ = false;
  pFVar9 = ::FName::FName(&local_b0,"OuterRadius");
  local_118.Saved = local_3d8._0_1_;
  local_118.bAllowCircularDependency = local_3d8._1_1_;
  local_118._10_2_ = uStack_3d6;
  local_118.GroupIndexDependency = local_3e0;
  FManagedArrayCollection::AddAttribute<float>(param_1,*pFVar9,FVar1,&local_118);
  FVar4 = GeometryGroup;
  pFVar9 = ::FName::FName(&local_b8,"VertexStart");
  uVar6 = _local_420;
  local_188.GroupIndexDependency = local_290;
  local_420._0_1_ = SUB41(uVar5,0);
  local_420._1_1_ = SUB41(uVar5,1);
  uStack_41e = SUB42(uVar5,2);
  local_188.Saved = local_420._0_1_;
  local_188.bAllowCircularDependency = local_420._1_1_;
  local_188._10_2_ = uStack_41e;
  FVar1 = *pFVar9;
  _local_420 = uVar6;
  bVar8 = FManagedArrayCollection::HasAttribute(param_1,FVar1,FVar4);
  if (!bVar8) {
    FManagedArrayCollection::AddNewAttributeImpl<int>(param_1,FVar1,FVar4,&local_188);
  }
  FManagedArrayCollection::ModifyAttribute<int>(param_1,FVar1,FVar4);
  FVar4 = GeometryGroup;
  local_2b0 = 0;
  local_3ec.ComparisonIndex.Value = 0;
  local_3ec.Number = 0;
  local_3e4._0_1_ = true;
  local_3e4._1_1_ = false;
  pFVar9 = ::FName::FName(&local_c0,"VertexCount");
  local_168.GroupIndexDependency = local_3ec;
  FVar1 = *pFVar9;
  local_168.Saved = local_3e4._0_1_;
  local_168.bAllowCircularDependency = local_3e4._1_1_;
  local_168._10_2_ = uStack_3e2;
  bVar8 = FManagedArrayCollection::HasAttribute(param_1,FVar1,FVar4);
  if (!bVar8) {
    FManagedArrayCollection::AddNewAttributeImpl<int>(param_1,FVar1,FVar4,&local_168);
  }
  FManagedArrayCollection::ModifyAttribute<int>(param_1,FVar1,FVar4);
  FVar4 = GeometryGroup;
  pFVar9 = ::FName::FName(&local_c8,"FaceStart");
  uVar6 = _local_400;
  local_158.GroupIndexDependency = local_408;
  FVar1 = *pFVar9;
  local_158.Saved = local_400._0_1_;
  local_158.bAllowCircularDependency = local_400._1_1_;
  local_158._10_2_ = uStack_3fe;
  bVar8 = FManagedArrayCollection::HasAttribute(param_1,FVar1,FVar4);
  if (!bVar8) {
    FManagedArrayCollection::AddNewAttributeImpl<int>(param_1,FVar1,FVar4,&local_158);
  }
  FManagedArrayCollection::ModifyAttribute<int>(param_1,FVar1,FVar4);
  FVar4 = GeometryGroup;
  local_2a8 = 0;
  local_3f8.ComparisonIndex.Value = 0;
  local_3f8.Number = 0;
  local_3f0._0_1_ = true;
  local_3f0._1_1_ = false;
  pFVar9 = ::FName::FName(&local_428,"FaceCount");
  local_148.GroupIndexDependency = local_3f8;
  FVar1 = *pFVar9;
  local_148.Saved = local_3f0._0_1_;
  local_148.bAllowCircularDependency = local_3f0._1_1_;
  local_148._10_2_ = uStack_3ee;
  bVar8 = FManagedArrayCollection::HasAttribute(param_1,FVar1,FVar4);
  if (!bVar8) {
    FManagedArrayCollection::AddNewAttributeImpl<int>(param_1,FVar1,FVar4,&local_148);
  }
  FManagedArrayCollection::ModifyAttribute<int>(param_1,FVar1,FVar4);
  FVar4 = MaterialGroup;
  pFVar9 = ::FName::FName(&local_418,"Sections");
  uVar5 = _local_400;
  local_138.GroupIndexDependency = local_408;
  local_400._0_1_ = SUB41(uVar6,0);
  local_400._1_1_ = SUB41(uVar6,1);
  uStack_3fe = SUB42(uVar6,2);
  local_138.Saved = local_400._0_1_;
  local_138.bAllowCircularDependency = local_400._1_1_;
  local_138._10_2_ = uStack_3fe;
  FVar1 = *pFVar9;
  _local_400 = uVar5;
  bVar8 = FManagedArrayCollection::HasAttribute(param_1,FVar1,FVar4);
  if (!bVar8) {
    FManagedArrayCollection::AddNewAttributeImpl<FGeometryCollectionSection>
              (param_1,FVar1,FVar4,&local_138);
  }
  FManagedArrayCollection::ModifyAttribute<FGeometryCollectionSection>(param_1,FVar1,FVar4);
  return;
}

// Empty @ 143fe8850

void __thiscall FGeometryCollection::Empty(FGeometryCollection *this)

{
  FName *pFVar1;
  int iVar2;
  ForAnyElementType FVar3;
  undefined1 local_res8 [8];
  TArray<FName,TSizedDefaultAllocator<32>_> local_18;
  
  FManagedArrayCollection::GroupNames((FManagedArrayCollection *)this,&local_18);
  iVar2 = local_18.ArrayNum;
  pFVar1 = (FName *)(local_18.AllocatorInstance.Data + (longlong)iVar2 * 8);
  FVar3.Data = local_18.AllocatorInstance.Data;
  while( true ) {
    if (local_18.ArrayNum != iVar2) {
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((FName *)FVar3.Data == pFVar1) break;
    FManagedArrayCollection::EmptyGroup((FManagedArrayCollection *)this,*(FName *)FVar3.Data);
    FVar3.Data = FVar3.Data + 8;
  }
  if ((FName *)local_18.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  (**(code **)(this->_padding_ + 0x58))(this);
  GeometryCollection::UV::SetNumUVLayers((FManagedArrayCollection *)this,1);
  return;
}

// GetBoundingBox @ 143fe99e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TBoxSphereBounds<double,double> * __thiscall
FGeometryCollection::GetBoundingBox
          (FGeometryCollection *this,TBoxSphereBounds<double,double> *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  TBoxSphereBounds<double,double> *pTVar11;
  TMatrix<double> *pTVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined4 uVar17;
  undefined4 uVar18;
  double dVar19;
  undefined1 auStack_198 [32];
  longlong local_178;
  longlong local_170;
  double local_168;
  double dStack_160;
  double local_158;
  undefined8 uStack_150;
  double local_148;
  double dStack_140;
  undefined8 local_138;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_130;
  TVector<double>_u_0 local_120;
  undefined4 uStack_108;
  undefined4 uStack_104;
  double local_100;
  double dStack_f8;
  char local_f0;
  undefined7 uStack_ef;
  TMatrix<double> local_e8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_198;
  local_130.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_130.ArrayNum = 0;
  local_130.ArrayMax = 0;
  GeometryCollectionAlgo::GlobalMatrices<UE::Math::TTransform<double>,UE::Math::TTransform<float>_>
            ((TManagedArray<UE::Math::TTransform<float>_> *)&this->_padding_,
             (TManagedArray<int> *)&this->_padding_,&local_130);
  local_168 = 0.0;
  dStack_160 = 0.0;
  local_138 = 0;
  uVar13 = 0;
  local_158 = 0.0;
  uStack_150 = 0.0;
  local_148 = 0.0;
  dStack_140 = 0.0;
  iVar8 = FManagedArrayCollection::NumElements((FManagedArrayCollection *)this,GeometryGroup);
  if (0 < iVar8) {
    lVar14 = 0;
    do {
      iVar8 = *(int *)&(this->TransformIndex).field_0x18;
      uVar9 = 0;
      if ((int)uVar13 < iVar8) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if (uVar9 == 0) {
        local_178 = (longlong)(int)uVar13;
        local_170 = (longlong)iVar8;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar2 = (code *)swi(3);
          pTVar11 = (TBoxSphereBounds<double,double> *)(*pcVar2)();
          return pTVar11;
        }
      }
      iVar8 = *(int *)&(this->BoundingBox).field_0x18;
      uVar9 = *(uint *)(lVar14 + *(longlong *)&(this->TransformIndex).field_0x10);
      uVar10 = 0;
      if ((int)uVar13 < iVar8) {
        uVar10 = ~uVar13 >> 0x1f;
      }
      if (uVar10 == 0) {
        local_178 = (longlong)(int)uVar13;
        local_170 = (longlong)iVar8;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar2 = (code *)swi(3);
          pTVar11 = (TBoxSphereBounds<double,double> *)(*pcVar2)();
          return pTVar11;
        }
      }
      lVar1 = *(longlong *)&(this->BoundingBox).field_0x10;
      uVar10 = 0;
      if ((int)uVar9 < local_130.ArrayNum) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (local_178 = (longlong)(int)uVar9, local_170 = (longlong)local_130.ArrayNum,
         bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        pTVar11 = (TBoxSphereBounds<double,double> *)(*pcVar2)();
        return pTVar11;
      }
      pTVar12 = UE::Math::TTransform<double>::ToMatrixWithScale
                          ((TTransform<double> *)
                           (local_130.AllocatorInstance.Data + (longlong)(int)uVar9 * 0x60),
                           &local_e8);
      UE::Math::TBox<double>::TransformBy
                ((TBox<double> *)((longlong)(int)uVar13 * 0x38 + lVar1),
                 (TBox<double> *)&local_120._s_0,pTVar12);
      if ((char)local_138 == '\0') {
        if (local_f0 != '\0') {
          local_138 = CONCAT71(uStack_ef,local_f0);
          uStack_150 = (double)CONCAT44(uStack_104,uStack_108);
          dStack_160 = (double)CONCAT44(local_120._12_4_,local_120._8_4_);
          dStack_140 = dStack_f8;
          local_148 = local_100;
          local_158 = local_120._s_0.Z;
          local_168 = (double)CONCAT44(local_120._4_4_,local_120._0_4_);
        }
      }
      else if (local_f0 != '\0') {
        if ((double)CONCAT44(local_120._4_4_,local_120._0_4_) <= local_168) {
          local_168 = (double)CONCAT44(local_120._4_4_,local_120._0_4_);
        }
        uVar17 = SUB84(dStack_160,0);
        uVar18 = (int)((ulonglong)dStack_160 >> 0x20);
        if ((double)CONCAT44(local_120._12_4_,local_120._8_4_) <= dStack_160) {
          uVar17 = local_120._8_4_;
          uVar18 = local_120._12_4_;
        }
        if (local_120._s_0.Z <= local_158) {
          local_158 = local_120._s_0.Z;
        }
        dStack_160 = (double)CONCAT44(uVar18,uVar17);
        uVar17 = SUB84(uStack_150,0);
        uVar18 = (int)((ulonglong)uStack_150 >> 0x20);
        if (uStack_150 <= (double)CONCAT44(uStack_104,uStack_108)) {
          uVar17 = uStack_108;
          uVar18 = uStack_104;
        }
        if (local_148 <= local_100) {
          local_148 = local_100;
        }
        uStack_150 = (double)CONCAT44(uVar18,uVar17);
        uVar17 = SUB84(dStack_140,0);
        uVar18 = (undefined4)((ulonglong)dStack_140 >> 0x20);
        if (dStack_140 <= dStack_f8) {
          uVar17 = SUB84(dStack_f8,0);
          uVar18 = (undefined4)((ulonglong)dStack_f8 >> 0x20);
        }
        dStack_140 = (double)CONCAT44(uVar18,uVar17);
      }
      uVar13 = uVar13 + 1;
      lVar14 = lVar14 + 4;
      iVar8 = FManagedArrayCollection::NumElements((FManagedArrayCollection *)this,GeometryGroup);
    } while ((int)uVar13 < iVar8);
  }
  dVar6 = dStack_140 - local_158;
  dVar5 = local_148 - dStack_160;
  dVar3 = dVar6 * __real_3fe0000000000000;
  dVar4 = (uStack_150 - local_168) * __real_3fe0000000000000;
  dVar19 = dVar5 * __real_3fe0000000000000;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = dVar4 + local_168;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar19 + dStack_160;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar3 + local_158;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dVar4;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = dVar19;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar3;
  dVar3 = (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X;
  auVar15._0_8_ = dVar3 * dVar3;
  auVar15._8_8_ = 0;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = (dVar6 * dVar6 + dVar5 * dVar5) * __real_3fd0000000000000 + auVar15._0_8_;
  auVar16 = sqrtpd(auVar15,auVar16);
  __return_storage_ptr__->SphereRadius = auVar16._0_8_;
  if (local_130.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// HasContiguousFaces @ 143feb590

bool __thiscall FGeometryCollection::HasContiguousFaces(FGeometryCollection *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  int local_res10;
  uint local_res18;
  longlong local_70;
  longlong local_68;
  
  iVar7 = FManagedArrayCollection::NumElements
                    ((FManagedArrayCollection *)this,FTransformCollection::TransformGroup);
  iVar8 = FManagedArrayCollection::NumElements((FManagedArrayCollection *)this,VerticesGroup);
  iVar9 = (**(code **)(*(longlong *)&this->Indices + 0x60))();
  iVar10 = (**(code **)(*(longlong *)&this->TransformIndex + 0x60))();
  local_res18 = 0;
  if (0 < iVar10) {
    local_68 = 0;
    do {
      uVar13 = ~local_res18 >> 0x1f;
      uVar17 = 0;
      if ((int)local_res18 < *(int *)&(this->TransformIndex).field_0x18) {
        uVar17 = uVar13;
      }
      if ((uVar17 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      iVar1 = *(int *)(*(longlong *)&(this->TransformIndex).field_0x10 + local_68 * 4);
      uVar17 = 0;
      if ((int)local_res18 < *(int *)&(this->FaceStart).field_0x18) {
        uVar17 = uVar13;
      }
      if ((uVar17 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      iVar2 = *(int *)(*(longlong *)&(this->FaceStart).field_0x10 + local_68 * 4);
      uVar17 = 0;
      if ((int)local_res18 < *(int *)&(this->FaceCount).field_0x18) {
        uVar17 = uVar13;
      }
      if ((uVar17 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      uVar17 = 0;
      lVar16 = 0;
      iVar3 = *(int *)(*(longlong *)&(this->FaceCount).field_0x10 + local_68 * 4);
      iVar11 = iVar3;
      if (0 < (longlong)iVar9) {
        local_70 = 0;
        local_res10 = iVar3;
        do {
          if ((iVar2 <= lVar16) && (iVar11 = local_res10, (int)uVar17 < iVar3 + iVar2)) {
            lVar14 = 0;
            lVar15 = local_70;
            do {
              uVar13 = 0;
              if ((int)uVar17 < *(int *)&(this->Indices).field_0x18) {
                uVar13 = ~uVar17 >> 0x1f;
              }
              if ((uVar13 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                uVar6 = (*pcVar4)();
                return (bool)uVar6;
              }
              uVar13 = *(uint *)(lVar15 + *(longlong *)&(this->Indices).field_0x10);
              if ((int)uVar13 < 0) {
                return false;
              }
              if (iVar8 <= (int)uVar13) {
                return false;
              }
              uVar12 = 0;
              if ((int)uVar13 < *(int *)&(this->BoneMap).field_0x18) {
                uVar12 = ~uVar13 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                uVar6 = (*pcVar4)();
                return (bool)uVar6;
              }
              iVar11 = *(int *)(*(longlong *)&(this->BoneMap).field_0x10 + (longlong)(int)uVar13 * 4
                               );
              if ((iVar11 < 0) && (iVar7 < iVar11)) {
                return false;
              }
              if (iVar1 != iVar11) {
                return false;
              }
              lVar14 = lVar14 + 1;
              lVar15 = lVar15 + 4;
            } while (lVar14 < 3);
            local_res10 = local_res10 + -1;
            iVar11 = local_res10;
          }
          local_70 = local_70 + 0xc;
          uVar17 = uVar17 + 1;
          lVar16 = lVar16 + 1;
        } while (lVar16 < iVar9);
      }
      if (iVar11 != 0) {
        return false;
      }
      local_res18 = local_res18 + 1;
      local_68 = local_68 + 1;
    } while (local_68 < iVar10);
  }
  return true;
}

// HasContiguousRenderFaces @ 143feb900

bool __thiscall FGeometryCollection::HasContiguousRenderFaces(FGeometryCollection *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  
  iVar6 = 0;
  uVar8 = 0;
  iVar4 = FManagedArrayCollection::NumElements((FManagedArrayCollection *)this,FacesGroup);
  if (0 < iVar4) {
    lVar12 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar8 < *(int *)&(this->MaterialIndex).field_0x18) {
        uVar9 = ~uVar8 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      uVar9 = *(uint *)(*(longlong *)&(this->MaterialIndex).field_0x10 + lVar12 * 4);
      uVar5 = 0;
      if ((int)uVar9 < *(int *)&(this->MaterialID).field_0x18) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      if (*(int *)(*(longlong *)&(this->MaterialID).field_0x10 + (longlong)(int)uVar9 * 4) < iVar6)
      {
        return false;
      }
      uVar9 = 0;
      if ((int)uVar8 < *(int *)&(this->MaterialIndex).field_0x18) {
        uVar9 = ~uVar8 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      uVar9 = *(uint *)(*(longlong *)&(this->MaterialIndex).field_0x10 + lVar12 * 4);
      uVar5 = 0;
      if ((int)uVar9 < *(int *)&(this->MaterialID).field_0x18) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      uVar8 = uVar8 + 1;
      lVar12 = lVar12 + 1;
      iVar6 = *(int *)(*(longlong *)&(this->MaterialID).field_0x10 + (longlong)(int)uVar9 * 4);
    } while (lVar12 < iVar4);
  }
  uVar8 = 0;
  iVar6 = FManagedArrayCollection::NumElements((FManagedArrayCollection *)this,MaterialGroup);
  if (0 < iVar6) {
    lVar11 = 0;
    lVar12 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar8 < *(int *)&(this->Sections).field_0x18) {
        uVar9 = ~uVar8 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      uVar9 = *(int *)(*(longlong *)&(this->Sections).field_0x10 + 4 + lVar12) / 3;
      uVar5 = 0;
      if ((int)uVar8 < *(int *)&(this->Sections).field_0x18) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      iVar4 = *(int *)(*(longlong *)&(this->Sections).field_0x10 + 8 + lVar12) + uVar9;
      for (lVar10 = (longlong)(int)uVar9; lVar10 < iVar4; lVar10 = lVar10 + 1) {
        uVar5 = 0;
        if ((int)uVar9 < *(int *)&(this->MaterialIndex).field_0x18) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        uVar5 = *(uint *)(*(longlong *)&(this->MaterialIndex).field_0x10 + lVar10 * 4);
        uVar7 = 0;
        if ((int)uVar5 < *(int *)&(this->MaterialID).field_0x18) {
          uVar7 = ~uVar5 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        if (*(uint *)(*(longlong *)&(this->MaterialID).field_0x10 + (longlong)(int)uVar5 * 4) !=
            uVar8) {
          return false;
        }
        uVar9 = uVar9 + 1;
      }
      uVar8 = uVar8 + 1;
      lVar11 = lVar11 + 1;
      lVar12 = lVar12 + 0x20;
    } while (lVar11 < iVar6);
  }
  return true;
}

// HasContiguousVertices @ 143febcb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FGeometryCollection::HasContiguousVertices(FGeometryCollection *this)

{
  undefined4 uVar1;
  code *pcVar2;
  ulonglong uVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ForElementType<FSetElementId> FVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined1 auStackY_128 [32];
  ForAnyElementType local_d8;
  uint local_d0;
  uint local_cc;
  undefined4 local_c8;
  uint local_c4;
  uint local_c0;
  int local_bc;
  int local_b8;
  longlong local_b0;
  ulonglong local_a8;
  longlong local_a0;
  int local_98 [2];
  longlong local_90;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  local_bc = FManagedArrayCollection::NumElements
                       ((FManagedArrayCollection *)this,FTransformCollection::TransformGroup);
  local_88.Elements._0_8_ = 0;
  local_88.Elements._8_8_ = 0;
  local_88.Elements._32_8_ = 0;
  local_88.Elements._40_4_ = 0;
  local_88.Elements._52_4_ = 0;
  local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_88.HashSize = 0;
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_cc = 0;
  local_88.Elements._44_4_ = 0x80;
  local_88.Elements._48_4_ = 0xffffffff;
  uVar6 = FManagedArrayCollection::NumElements((FManagedArrayCollection *)this,VerticesGroup);
  uVar12 = (ulonglong)uVar6;
  local_c8 = 0xffffffff;
  if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar12);
  }
  local_d0 = 0;
  if (local_cc != uVar6) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar6,&local_d8,0,(int *)&local_cc);
  }
  if (0 < (int)uVar6) {
    do {
      if (((local_d8.Data <= (FScriptContainerElement *)&local_c8) &&
          ((FScriptContainerElement *)&local_c8 < local_d8.Data + (longlong)(int)local_cc * 4)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      uVar6 = local_d0;
      if (local_d0 == local_cc) {
        uVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&local_d8,(int *)&local_cc);
      }
      local_d0 = uVar6 + 1;
      *(undefined4 *)(local_d8.Data + (longlong)(int)uVar6 * 4) = local_c8;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  iVar7 = (**(code **)(*(longlong *)&this->TransformIndex + 0x60))();
  local_c0 = 0;
  iVar8 = (**(code **)(*(longlong *)&this->BoneMap + 0x60))();
  local_b0 = (longlong)iVar8;
  if (0 < iVar7) {
    local_a0 = 0;
    local_90 = (longlong)iVar7;
    uVar6 = 0;
    do {
      lVar14 = local_a0;
      lVar15 = 0;
      uVar11 = 0;
      uVar10 = ~uVar6 >> 0x1f;
      uVar13 = uVar11;
      if ((int)uVar6 < *(int *)&(this->TransformIndex).field_0x18) {
        uVar13 = uVar10;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      local_c4 = *(uint *)(*(longlong *)&(this->TransformIndex).field_0x10 + lVar14 * 4);
      uVar13 = uVar11;
      if ((int)uVar6 < *(int *)&(this->VertexStart).field_0x18) {
        uVar13 = uVar10;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      uVar12 = (ulonglong)*(int *)(*(longlong *)&(this->VertexStart).field_0x10 + lVar14 * 4);
      uVar13 = uVar11;
      if ((int)uVar6 < *(int *)&(this->VertexCount).field_0x18) {
        uVar13 = uVar10;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      iVar7 = *(int *)(*(longlong *)&(this->VertexCount).field_0x10 + lVar14 * 4);
      local_b8 = iVar7;
      if (local_88.Elements._8_4_ != local_88.Elements._52_4_) {
        FVar9 = (ForElementType<FSetElementId>)&local_88.Hash;
        if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar9 = local_88.Hash.SecondaryData;
        }
        for (iVar8 = *(int *)((longlong)FVar9 + (ulonglong)(local_88.HashSize - 1U & local_c4) * 4);
            iVar8 != -1; iVar8 = *(int *)(local_88.Elements._0_8_ + 4 + (longlong)iVar8 * 0xc)) {
          if (*(uint *)(local_88.Elements._0_8_ + (longlong)iVar8 * 0xc) == local_c4)
          goto LAB_143fec2aa;
        }
      }
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&local_88,local_98,(bool *)&local_c4);
      lVar14 = local_b0;
      uVar16 = uVar12;
      iVar8 = iVar7;
      uVar3 = uVar12;
      if (0 < local_b0) {
        do {
          local_a8 = uVar3;
          if (((longlong)uVar12 <= lVar15) && (uVar12 = local_a8, (int)uVar11 < iVar8 + (int)uVar16)
             ) {
            uVar13 = ~uVar11 >> 0x1f;
            uVar6 = 0;
            if ((int)uVar11 < *(int *)&(this->BoneMap).field_0x18) {
              uVar6 = uVar13;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              uVar5 = (*pcVar2)();
              return (bool)uVar5;
            }
            uVar6 = *(uint *)(*(longlong *)&(this->BoneMap).field_0x10 + lVar15 * 4);
            uVar10 = 0;
            if ((int)uVar11 < *(int *)&(this->BoneMap).field_0x18) {
              uVar10 = uVar13;
            }
            if ((uVar10 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              uVar5 = (*pcVar2)();
              return (bool)uVar5;
            }
            uVar1 = *(undefined4 *)(*(longlong *)&(this->BoneMap).field_0x10 + lVar15 * 4);
            uVar10 = 0;
            if ((int)uVar11 < (int)local_d0) {
              uVar10 = uVar13;
            }
            if ((uVar10 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              uVar5 = (*pcVar2)();
              return (bool)uVar5;
            }
            *(undefined4 *)(local_d8.Data + lVar15 * 4) = uVar1;
            if ((((int)uVar6 < 0) || (local_bc <= (int)uVar6)) || (local_c4 != uVar6))
            goto LAB_143fec2aa;
            iVar7 = iVar7 + -1;
            uVar16 = local_a8 & 0xffffffff;
            uVar12 = local_a8;
            lVar14 = local_b0;
            iVar8 = local_b8;
          }
          uVar11 = uVar11 + 1;
          lVar15 = lVar15 + 1;
          uVar6 = local_c0;
          uVar3 = local_a8;
        } while (lVar15 < lVar14);
      }
      if (iVar7 != 0) goto LAB_143fec2aa;
      local_c0 = uVar6 + 1;
      local_a0 = local_a0 + 1;
      uVar6 = local_c0;
    } while (local_a0 < local_90);
  }
  lVar14 = 0;
  iVar7 = FManagedArrayCollection::NumElements((FManagedArrayCollection *)this,VerticesGroup);
  uVar6 = 0;
  if (0 < iVar7) {
    do {
      uVar13 = 0;
      if ((int)uVar6 < (int)local_d0) {
        uVar13 = ~uVar6 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      if (*(int *)(local_d8.Data + lVar14) < 0) goto LAB_143fec2aa;
      uVar6 = uVar6 + 1;
      lVar14 = lVar14 + 4;
      iVar7 = FManagedArrayCollection::NumElements((FManagedArrayCollection *)this,VerticesGroup);
    } while ((int)uVar6 < iVar7);
  }
  bVar4 = true;
LAB_143fec239:
  if (local_d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data);
  }
  local_88.HashSize = 0;
  if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_88.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_88.Elements);
  return bVar4;
LAB_143fec2aa:
  bVar4 = false;
  goto LAB_143fec239;
}

// HasVisibleGeometry @ 143fec590

bool __thiscall FGeometryCollection::HasVisibleGeometry(FGeometryCollection *this)

{
  TManagedArray<bool> *pTVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  uint uVar9;
  
  pTVar1 = &this->Visible;
  uVar9 = 0;
  iVar6 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
  if (iVar6 < 1) {
    return false;
  }
  while( true ) {
    if ((((int)uVar9 < 0) || (*(int *)&(this->Visible).field_0x28 <= (int)uVar9)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    puVar2 = *(undefined1 **)&(this->Visible).field_0x20;
    puVar8 = &(this->Visible).field_0x10;
    if (puVar2 != (undefined1 *)0x0) {
      puVar8 = puVar2;
    }
    uVar7 = uVar9;
    if ((int)uVar9 < 0) {
      uVar7 = uVar9 + 0x1f;
    }
    if ((*(uint *)(puVar8 + (longlong)((int)uVar7 >> 5) * 4) >> (uVar9 & 0x1f) & 1) != 0) break;
    uVar9 = uVar9 + 1;
    iVar6 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    if (iVar6 <= (int)uVar9) {
      return false;
    }
  }
  return true;
}

// Init @ 143fecb20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FGeometryCollection::Init
          (FGeometryCollection *param_1,TArray<float,TSizedDefaultAllocator<32>_> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,bool param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  __m128 *p_Var4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  __m128 _Var10;
  __m128 _Var11;
  TVector2<float> TVar12;
  longlong *plVar13;
  ForAnyElementType FVar14;
  TManagedArray<UE::Math::TIntVector3<int>_> *pTVar15;
  bool bVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  TManagedArray<UE::Math::TVector2<float>_> *pTVar21;
  longlong lVar22;
  longlong lVar23;
  int iVar24;
  uint uVar25;
  undefined1 *puVar26;
  uint uVar27;
  int iVar28;
  ulonglong uVar29;
  uint uVar30;
  ulonglong uVar31;
  longlong lVar32;
  uint uVar33;
  longlong lVar34;
  uint uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined4 uVar43;
  float fVar44;
  float fVar45;
  longlong local_138;
  uint local_130;
  uint local_128;
  uint local_124;
  longlong local_120;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_118;
  undefined8 local_108;
  longlong local_f8;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_f0;
  uint local_e0;
  uint local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  TManagedArray<UE::Math::TIntVector3<int>_> *local_c8;
  undefined8 local_c0;
  float local_b8;
  TManagedArray<UE::Math::TVector<float>_> *local_b0;
  
  if (param_1 != (FGeometryCollection *)0x0) {
    iVar28 = param_2->ArrayNum;
    iVar24 = (int)(((longlong)iVar28 / 3 + ((longlong)iVar28 >> 0x3f) & 0xffffffffU) >> 0x1f) +
             iVar28 / 3 + (iVar28 >> 0x1f);
    FManagedArrayCollection::AddElements((FManagedArrayCollection *)param_1,iVar24,VerticesGroup);
    iVar28 = param_3->ArrayNum / 3;
    FManagedArrayCollection::AddElements((FManagedArrayCollection *)param_1,iVar28,FacesGroup);
    FManagedArrayCollection::AddElements
              ((FManagedArrayCollection *)param_1,1,FTransformCollection::TransformGroup);
    local_b0 = &param_1->Vertex;
    local_c8 = &param_1->Indices;
    GeometryCollection::UV::SetNumUVLayers((FManagedArrayCollection *)param_1,1);
    pTVar21 = FManagedArrayCollection::FindAttributeTyped<UE::Math::TVector2<float>_>
                        ((FManagedArrayCollection *)param_1,GeometryCollection::UV::UVLayerNames[0],
                         GeometryCollection::UV::VerticesGroupName);
    uVar29 = 0;
    local_108 = (longlong *)&(param_1->Vertex).field_0x10;
    uVar20 = 0;
    uVar18 = 0;
    if (0 < iVar24) {
      local_120 = 0;
      local_f8 = 0;
      uVar33 = 1;
      uVar37 = uVar29;
      uVar31 = uVar29;
      do {
        uVar19 = 0;
        if ((int)(uVar33 + 1) < param_2->ArrayNum) {
          uVar19 = ~(uVar33 + 1) >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar43 = *(undefined4 *)((param_2->AllocatorInstance).Data + uVar31 + 8);
        uVar19 = uVar18;
        if ((int)uVar33 < param_2->ArrayNum) {
          uVar19 = ~uVar33 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar2 = *(undefined4 *)((param_2->AllocatorInstance).Data + uVar31 + 4);
        uVar19 = uVar18;
        if ((int)(uVar33 - 1) < param_2->ArrayNum) {
          uVar19 = ~(uVar33 - 1) >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        plVar13 = local_108;
        uVar25 = (uint)uVar37;
        uVar35 = ~uVar25 >> 0x1f;
        uVar3 = *(undefined4 *)((param_2->AllocatorInstance).Data + uVar31);
        uVar19 = uVar18;
        if ((int)uVar25 < (int)local_108[1]) {
          uVar19 = uVar35;
        }
        if ((uVar19 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar23 = *plVar13;
        *(undefined4 *)(lVar23 + uVar31) = uVar3;
        *(undefined4 *)(lVar23 + 4 + uVar31) = uVar2;
        *(undefined4 *)(lVar23 + 8 + uVar31) = uVar43;
        TVar12 = UE::Math::TVector2<float>::ZeroVector;
        uVar19 = uVar18;
        if ((int)uVar25 < *(int *)&pTVar21->field_0x18) {
          uVar19 = uVar35;
        }
        if ((uVar19 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        ((TVector2<float>_u_0 *)(*(longlong *)&pTVar21->field_0x10 + local_120 * 8))->_s_0 =
             (TVector2<float>_u_0_s_0)TVar12.field0_0x0;
        uVar6 = *(undefined8 *)&(param_1->Defaults).DefaultVertexColor.field0_0x0;
        uVar7 = *(undefined8 *)((longlong)&(param_1->Defaults).DefaultVertexColor.field0_0x0 + 8);
        uVar19 = uVar20;
        if ((int)uVar25 < *(int *)&(param_1->Color).field_0x18) {
          uVar19 = uVar35;
        }
        if ((uVar19 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar23 = local_f8;
        puVar1 = (undefined8 *)(*(longlong *)&(param_1->Color).field_0x10 + local_f8);
        *puVar1 = uVar6;
        puVar1[1] = uVar7;
        uVar19 = uVar20;
        if ((int)uVar25 < *(int *)&(param_1->BoneMap).field_0x18) {
          uVar19 = uVar35;
        }
        if ((uVar19 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_f8 = lVar23 + 0x10;
        uVar37 = (ulonglong)(uVar25 + 1);
        uVar33 = uVar33 + 3;
        uVar31 = uVar31 + 0xc;
        *(undefined4 *)(*(longlong *)&(param_1->BoneMap).field_0x10 + local_120 * 4) = 0;
        local_120 = local_120 + 1;
      } while (local_120 < iVar24);
    }
    _Var11 = GlobalVectorConstants::Float1110;
    _Var10 = GlobalVectorConstants::Float0001;
    if (((int)param_1->_padding_ < 1) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    p_Var4 = (__m128 *)param_1->_padding_;
    *p_Var4 = _Var10;
    p_Var4[1].m128_u64[0] = 0;
    *(undefined8 *)((longlong)p_Var4 + 0x18) = 0;
    p_Var4[2] = _Var11;
    local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f0.ArrayNum = 0;
    local_f0.ArrayMax = 0;
    TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNum(&local_f0,iVar28,Default);
    fVar9 = __real_3f800000;
    fVar8 = __real_322bcc77;
    local_120 = (longlong)iVar28;
    uVar33 = 0;
    uVar19 = 0;
    if (0 < iVar28) {
      local_138 = 0;
      local_130 = 1;
      local_124 = 1;
      uVar37 = uVar29;
      uVar31 = uVar29;
      do {
        uVar25 = ~(local_130 - 1) >> 0x1f;
        if (param_4) {
          uVar35 = uVar18;
          if ((int)(local_130 - 1) < param_3->ArrayNum) {
            uVar35 = uVar25;
          }
          if ((uVar35 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar25 = *(uint *)((param_3->AllocatorInstance).Data + uVar31);
          uVar35 = uVar18;
          if ((int)(local_130 + 1) < param_3->ArrayNum) {
            uVar35 = ~(local_130 + 1) >> 0x1f;
          }
          local_e0 = uVar25;
          if ((uVar35 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_128 = *(uint *)((param_3->AllocatorInstance).Data + uVar31 + 8);
          uVar35 = uVar20;
          if ((int)local_130 < param_3->ArrayNum) {
            uVar35 = ~local_130 >> 0x1f;
          }
          if ((uVar35 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar35 = *(uint *)((param_3->AllocatorInstance).Data + uVar31 + 4);
        }
        else {
          uVar35 = uVar20;
          if ((int)(local_130 - 1) < param_3->ArrayNum) {
            uVar35 = uVar25;
          }
          if ((uVar35 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar25 = *(uint *)((param_3->AllocatorInstance).Data + uVar31);
          uVar35 = uVar18;
          if ((int)local_130 < param_3->ArrayNum) {
            uVar35 = ~local_130 >> 0x1f;
          }
          local_e0 = uVar25;
          if ((uVar35 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_128 = *(uint *)((param_3->AllocatorInstance).Data + uVar31 + 4);
          uVar35 = uVar18;
          if ((int)(local_130 + 1) < param_3->ArrayNum) {
            uVar35 = ~(local_130 + 1) >> 0x1f;
          }
          if ((uVar35 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar35 = *(uint *)((param_3->AllocatorInstance).Data + uVar31 + 8);
        }
        uVar27 = (uint)uVar37;
        uVar30 = ~uVar27 >> 0x1f;
        local_f8 = CONCAT44(local_f8._4_4_,uVar30);
        uVar17 = uVar20;
        if ((int)uVar27 < *(int *)&(param_1->Indices).field_0x18) {
          uVar17 = uVar30;
        }
        local_dc = uVar35;
        if ((uVar17 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar23 = *(longlong *)&(param_1->Indices).field_0x10;
        *(uint *)(uVar31 + lVar23) = uVar25;
        *(uint *)(uVar31 + 4 + lVar23) = local_128;
        *(uint *)(uVar31 + 8 + lVar23) = uVar35;
        if ((((int)uVar27 < 0) || (*(int *)&(param_1->Visible).field_0x28 <= (int)uVar27)) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar16)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        puVar26 = *(undefined1 **)&(param_1->Visible).field_0x20;
        uVar35 = uVar27;
        if ((int)uVar27 < 0) {
          uVar35 = uVar27 + 0x1f;
        }
        if (puVar26 == (undefined1 *)0x0) {
          puVar26 = &(param_1->Visible).field_0x10;
        }
        *(uint *)(puVar26 + (longlong)((int)uVar35 >> 5) * 4) =
             *(uint *)(puVar26 + (longlong)((int)uVar35 >> 5) * 4) | local_124;
        if ((((int)uVar27 < 0) || (*(int *)&(param_1->Internal).field_0x28 <= (int)uVar27)) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar16)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        puVar26 = *(undefined1 **)&(param_1->Internal).field_0x20;
        if (puVar26 == (undefined1 *)0x0) {
          puVar26 = &(param_1->Internal).field_0x10;
        }
        *(uint *)(puVar26 + (longlong)((int)uVar35 >> 5) * 4) =
             *(uint *)(puVar26 + (longlong)((int)uVar35 >> 5) * 4) & ~local_124;
        uVar35 = uVar18;
        if ((int)uVar27 < *(int *)&(param_1->MaterialID).field_0x18) {
          uVar35 = uVar30;
        }
        if ((uVar35 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(undefined4 *)(*(longlong *)&(param_1->MaterialID).field_0x10 + local_138 * 4) = 0;
        uVar35 = uVar18;
        if ((int)uVar27 < *(int *)&(param_1->MaterialIndex).field_0x18) {
          uVar35 = uVar30;
        }
        if ((uVar35 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(uint *)(*(longlong *)&(param_1->MaterialIndex).field_0x10 + local_138 * 4) = uVar27;
        uVar35 = uVar19;
        if ((int)uVar25 < (int)local_108[1]) {
          uVar35 = ~uVar25 >> 0x1f;
        }
        if ((uVar35 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar32 = (longlong)(int)uVar25;
        lVar23 = *local_108;
        uVar35 = uVar19;
        if ((int)local_128 < (int)local_108[1]) {
          uVar35 = ~local_128 >> 0x1f;
        }
        if ((uVar35 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        plVar13 = local_108;
        lVar22 = (longlong)(int)local_128;
        lVar34 = *local_108;
        fVar45 = *(float *)(lVar23 + lVar32 * 0xc) - *(float *)(lVar34 + lVar22 * 0xc);
        fVar42 = *(float *)(lVar23 + 4 + lVar32 * 0xc) - *(float *)(lVar34 + 4 + lVar22 * 0xc);
        fVar44 = *(float *)(lVar23 + 8 + lVar32 * 0xc) - *(float *)(lVar34 + 8 + lVar22 * 0xc);
        uVar35 = uVar19;
        if ((int)local_e0 < (int)local_108[1]) {
          uVar35 = ~uVar25 >> 0x1f;
        }
        if ((uVar35 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar23 = *plVar13;
        lVar34 = (longlong)(int)local_dc;
        uVar25 = uVar19;
        if ((int)local_dc < (int)plVar13[1]) {
          uVar25 = ~local_dc >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar22 = *local_108;
        fVar39 = *(float *)(lVar23 + 4 + lVar32 * 0xc) - *(float *)(lVar22 + 4 + lVar34 * 0xc);
        fVar38 = *(float *)(lVar23 + 8 + lVar32 * 0xc) - *(float *)(lVar22 + 8 + lVar34 * 0xc);
        fVar40 = *(float *)(lVar23 + lVar32 * 0xc) - *(float *)(lVar22 + lVar34 * 0xc);
        fVar41 = fVar44 * fVar39 - fVar42 * fVar38;
        uVar43 = fVar42 * fVar40 - fVar45 * fVar39;
        fVar42 = fVar45 * fVar38 - fVar44 * fVar40;
        fVar44 = fVar42 * fVar42 + fVar41 * fVar41 + (float)uVar43 * (float)uVar43;
        if (fVar44 != fVar9) {
          if (fVar8 <= fVar44) {
            fVar44 = fVar9 / SQRT(fVar44);
            uVar43 = fVar44 * (float)uVar43;
            fVar41 = fVar44 * fVar41;
            fVar42 = fVar44 * fVar42;
          }
          else {
            fVar41 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
            fVar42 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >>
                            0x20);
            uVar43 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          }
        }
        uVar25 = uVar33;
        if ((int)uVar27 < local_f0.ArrayNum) {
          uVar25 = (uint)(float)local_f8;
        }
        if ((uVar25 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar37 = (ulonglong)(uVar27 + 1);
        *(ulonglong *)(local_f0.AllocatorInstance.Data + uVar31) = CONCAT44(fVar42,fVar41);
        *(undefined4 *)(local_f0.AllocatorInstance.Data + uVar31 + 8) = uVar43;
        uVar31 = uVar31 + 0xc;
        local_124 = local_124 << 1 | (uint)((int)local_124 < 0);
        local_130 = local_130 + 3;
        local_138 = local_138 + 1;
      } while (local_138 < local_120);
    }
    local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_118.ArrayNum = 0;
    local_118.ArrayMax = 0;
    TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNum(&local_118,iVar24,Default);
    lVar23 = (longlong)iVar24;
    uVar37 = uVar29;
    uVar31 = uVar29;
    if (0 < lVar23) {
      do {
        uVar25 = (uint)uVar31;
        uVar18 = uVar33;
        if ((int)uVar25 < local_118.ArrayNum) {
          uVar18 = ~uVar25 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(undefined8 *)(local_118.AllocatorInstance.Data + uVar37) = 0;
        *(undefined4 *)(local_118.AllocatorInstance.Data + uVar37 + 8) = 0;
        lVar23 = lVar23 + -1;
        uVar37 = uVar37 + 0xc;
        uVar31 = (ulonglong)(uVar25 + 1);
      } while (lVar23 != 0);
    }
    pTVar15 = local_c8;
    uVar37 = uVar29;
    uVar31 = uVar29;
    uVar36 = uVar29;
    if (0 < local_120) {
      do {
        uVar35 = (uint)uVar36;
        uVar25 = ~uVar35 >> 0x1f;
        uVar18 = uVar19;
        if ((int)uVar35 < local_f0.ArrayNum) {
          uVar18 = uVar25;
        }
        if ((uVar18 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar14.Data = local_f0.AllocatorInstance.Data;
        uVar18 = uVar19;
        if ((int)uVar35 < *(int *)&pTVar15->field_0x18) {
          uVar18 = uVar25;
        }
        if ((uVar18 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar18 = *(uint *)(uVar37 + *(longlong *)&pTVar15->field_0x10);
        lVar23 = (longlong)(int)uVar18;
        uVar17 = uVar19;
        if ((int)uVar18 < local_118.ArrayNum) {
          uVar17 = ~uVar18 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(float *)(local_118.AllocatorInstance.Data + lVar23 * 0xc) =
             *(float *)(local_118.AllocatorInstance.Data + lVar23 * 0xc) +
             *(float *)(FVar14.Data + uVar37);
        *(float *)(local_118.AllocatorInstance.Data + lVar23 * 0xc + 4) =
             *(float *)(FVar14.Data + uVar37 + 4) +
             *(float *)(local_118.AllocatorInstance.Data + lVar23 * 0xc + 4);
        *(float *)(local_118.AllocatorInstance.Data + lVar23 * 0xc + 8) =
             *(float *)(FVar14.Data + uVar37 + 8) +
             *(float *)(local_118.AllocatorInstance.Data + lVar23 * 0xc + 8);
        uVar18 = uVar19;
        if ((int)uVar35 < local_f0.ArrayNum) {
          uVar18 = uVar25;
        }
        if ((uVar18 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar14.Data = local_f0.AllocatorInstance.Data;
        uVar18 = uVar19;
        if ((int)uVar35 < *(int *)&pTVar15->field_0x18) {
          uVar18 = uVar25;
        }
        if ((uVar18 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar18 = *(uint *)(uVar37 + 4 + *(longlong *)&pTVar15->field_0x10);
        lVar23 = (longlong)(int)uVar18;
        uVar17 = uVar19;
        if ((int)uVar18 < local_118.ArrayNum) {
          uVar17 = ~uVar18 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(float *)(local_118.AllocatorInstance.Data + lVar23 * 0xc) =
             *(float *)(FVar14.Data + uVar37) +
             *(float *)(local_118.AllocatorInstance.Data + lVar23 * 0xc);
        *(float *)(local_118.AllocatorInstance.Data + lVar23 * 0xc + 4) =
             *(float *)(FVar14.Data + uVar37 + 4) +
             *(float *)(local_118.AllocatorInstance.Data + lVar23 * 0xc + 4);
        *(float *)(local_118.AllocatorInstance.Data + lVar23 * 0xc + 8) =
             *(float *)(FVar14.Data + uVar37 + 8) +
             *(float *)(local_118.AllocatorInstance.Data + lVar23 * 0xc + 8);
        uVar18 = uVar19;
        if ((int)uVar35 < local_f0.ArrayNum) {
          uVar18 = uVar25;
        }
        if ((uVar18 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar14.Data = local_f0.AllocatorInstance.Data;
        uVar18 = uVar19;
        if ((int)uVar35 < *(int *)&pTVar15->field_0x18) {
          uVar18 = uVar25;
        }
        if ((uVar18 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar18 = *(uint *)(uVar37 + 8 + *(longlong *)&pTVar15->field_0x10);
        lVar23 = (longlong)(int)uVar18;
        uVar25 = uVar33;
        if ((int)uVar18 < local_118.ArrayNum) {
          uVar25 = ~uVar18 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar31 = uVar31 + 1;
        *(float *)(local_118.AllocatorInstance.Data + lVar23 * 0xc) =
             *(float *)(FVar14.Data + uVar37) +
             *(float *)(local_118.AllocatorInstance.Data + lVar23 * 0xc);
        *(float *)(local_118.AllocatorInstance.Data + lVar23 * 0xc + 4) =
             *(float *)(FVar14.Data + uVar37 + 4) +
             *(float *)(local_118.AllocatorInstance.Data + lVar23 * 0xc + 4);
        *(float *)(local_118.AllocatorInstance.Data + lVar23 * 0xc + 8) =
             *(float *)(FVar14.Data + uVar37 + 8) +
             *(float *)(local_118.AllocatorInstance.Data + lVar23 * 0xc + 8);
        uVar37 = uVar37 + 0xc;
        uVar36 = (ulonglong)(uVar35 + 1);
      } while ((longlong)uVar31 < local_120);
    }
    fVar44 = __real_3de38e3a;
    fVar42 = __real_3eaaaaab;
    uVar37 = uVar29;
    uVar31 = uVar29;
    uVar36 = uVar29;
    if (0 < iVar24) {
      do {
        uVar25 = (uint)uVar37;
        uVar18 = uVar33;
        if ((int)uVar25 < local_118.ArrayNum) {
          uVar18 = ~uVar25 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        fVar45 = *(float *)(local_118.AllocatorInstance.Data + uVar36);
        fVar41 = *(float *)(local_118.AllocatorInstance.Data + uVar36 + 4);
        fVar38 = *(float *)(local_118.AllocatorInstance.Data + uVar36 + 8);
        fVar40 = fVar45 * fVar42;
        fVar39 = fVar41 * fVar42;
        uVar43 = fVar38 * fVar42;
        local_c0 = CONCAT44(fVar39,fVar40);
        local_b8 = (float)uVar43;
        fVar45 = (fVar41 * fVar41 + fVar45 * fVar45 + fVar38 * fVar38) * fVar44;
        if (fVar45 == fVar9) {
          local_c0 = CONCAT44(fVar39,fVar40);
        }
        else if (fVar8 <= fVar45) {
          fVar45 = fVar9 / SQRT(fVar45);
          uVar43 = (float)uVar43 * fVar45;
          fVar40 = fVar45 * fVar40;
          fVar39 = fVar45 * fVar39;
        }
        else {
          fVar40 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
          fVar39 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20)
          ;
          uVar43 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        }
        uVar18 = uVar33;
        if ((int)uVar25 < *(int *)&(param_1->Normal).field_0x18) {
          uVar18 = ~uVar25 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar23 = *(longlong *)&(param_1->Normal).field_0x10;
        uVar31 = uVar31 + 1;
        *(ulonglong *)(uVar36 + lVar23) = CONCAT44(fVar39,fVar40);
        *(undefined4 *)(uVar36 + 8 + lVar23) = uVar43;
        uVar37 = (ulonglong)(uVar25 + 1);
        uVar36 = uVar36 + 0xc;
      } while ((longlong)uVar31 < (longlong)iVar24);
    }
    local_130 = 0;
    if (0 < local_120) {
      local_138 = 0;
      uVar37 = uVar29;
      do {
        uVar18 = uVar33;
        if ((int)(uint)uVar37 < *(int *)&(param_1->Indices).field_0x18) {
          uVar18 = ~(uint)uVar37 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar23 = *(longlong *)&(param_1->Indices).field_0x10;
        iVar28 = 1;
        local_d8 = *(undefined8 *)(local_138 + lVar23);
        local_d0 = *(undefined4 *)(local_138 + 8 + lVar23);
        uVar37 = uVar29;
        do {
          uVar18 = *(uint *)((longlong)&local_d8 + uVar37 * 4);
          uVar25 = uVar19;
          if ((int)uVar18 < *(int *)&(param_1->Normal).field_0x18) {
            uVar25 = ~uVar18 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar23 = *(longlong *)&(param_1->Normal).field_0x10;
          local_108 = *(longlong **)(lVar23 + (longlong)(int)uVar18 * 0xc);
          local_f8 = CONCAT44(local_f8._4_4_,
                              *(undefined4 *)(lVar23 + 8 + (longlong)(int)uVar18 * 0xc));
          uVar18 = *(uint *)((longlong)&local_d8 +
                            (longlong)
                            (iVar28 + (iVar28 / 3 + (iVar28 >> 0x1f) +
                                      (int)(((longlong)iVar28 / 3 + ((longlong)iVar28 >> 0x3f) &
                                            0xffffffffU) >> 0x1f)) * -3) * 4);
          lVar23 = (longlong)(int)uVar18;
          uVar25 = uVar19;
          if ((int)uVar18 < *(int *)&(param_1->Vertex).field_0x18) {
            uVar25 = ~uVar18 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar18 = *(uint *)((longlong)&local_d8 + uVar37 * 4);
          lVar34 = (longlong)(int)uVar18;
          lVar32 = *(longlong *)&(param_1->Vertex).field_0x10;
          uVar25 = uVar19;
          if ((int)uVar18 < *(int *)&(param_1->Vertex).field_0x18) {
            uVar25 = ~uVar18 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar22 = *(longlong *)&(param_1->Vertex).field_0x10;
          fVar41 = *(float *)(lVar32 + 4 + lVar23 * 0xc) - *(float *)(lVar22 + 4 + lVar34 * 0xc);
          fVar38 = *(float *)(lVar32 + 8 + lVar23 * 0xc) - *(float *)(lVar22 + 8 + lVar34 * 0xc);
          fVar39 = *(float *)(lVar32 + lVar23 * 0xc) - *(float *)(lVar22 + lVar34 * 0xc);
          fVar45 = (float)local_f8;
          fVar44 = local_108._4_4_;
          fVar42 = (float)local_108;
          fVar40 = fVar41 * (float)local_f8 - fVar38 * local_108._4_4_;
          fVar38 = fVar38 * (float)local_108 - fVar39 * (float)local_f8;
          uVar43 = fVar39 * local_108._4_4_ - fVar41 * (float)local_108;
          fVar41 = fVar38 * fVar38 + fVar40 * fVar40 + (float)uVar43 * (float)uVar43;
          if (fVar41 != fVar9) {
            if (fVar8 <= fVar41) {
              fVar41 = fVar9 / SQRT(fVar41);
              fVar40 = fVar40 * fVar41;
              fVar38 = fVar38 * fVar41;
              uVar43 = (float)uVar43 * fVar41;
            }
            else {
              fVar40 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
              fVar38 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >>
                              0x20);
              uVar43 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
            }
          }
          uVar25 = uVar19;
          if ((int)uVar18 < *(int *)&(param_1->TangentU).field_0x18) {
            uVar25 = ~uVar18 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar23 = *(longlong *)&(param_1->TangentU).field_0x10;
          *(ulonglong *)(lVar23 + (longlong)(int)uVar18 * 0xc) = CONCAT44(fVar38,fVar40);
          *(undefined4 *)(lVar23 + 8 + (longlong)(int)uVar18 * 0xc) = uVar43;
          uVar18 = *(uint *)((longlong)&local_d8 + uVar37 * 4);
          lVar23 = (longlong)(int)uVar18;
          uVar25 = uVar33;
          if ((int)uVar18 < *(int *)&(param_1->TangentU).field_0x18) {
            uVar25 = ~uVar18 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar32 = *(longlong *)&(param_1->TangentU).field_0x10;
          fVar41 = *(float *)(lVar32 + 4 + lVar23 * 0xc);
          fVar38 = *(float *)(lVar32 + 8 + lVar23 * 0xc);
          fVar39 = *(float *)(lVar32 + lVar23 * 0xc);
          fVar40 = fVar38 * fVar44 - fVar41 * fVar45;
          fVar45 = fVar39 * fVar45 - fVar38 * fVar42;
          uVar43 = fVar41 * fVar42 - fVar39 * fVar44;
          fVar42 = fVar45 * fVar45 + fVar40 * fVar40 + (float)uVar43 * (float)uVar43;
          if (fVar42 != fVar9) {
            if (fVar8 <= fVar42) {
              fVar42 = fVar9 / SQRT(fVar42);
              fVar40 = fVar40 * fVar42;
              fVar45 = fVar45 * fVar42;
              uVar43 = (float)uVar43 * fVar42;
            }
            else {
              fVar40 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
              fVar45 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >>
                              0x20);
              uVar43 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
            }
          }
          uVar25 = uVar33;
          if ((int)uVar18 < *(int *)&(param_1->TangentV).field_0x18) {
            uVar25 = ~uVar18 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar37 = uVar37 + 1;
          lVar23 = *(longlong *)&(param_1->TangentV).field_0x10;
          *(ulonglong *)(lVar23 + (longlong)(int)uVar18 * 0xc) = CONCAT44(fVar45,fVar40);
          *(undefined4 *)(lVar23 + 8 + (longlong)(int)uVar18 * 0xc) = uVar43;
          iVar28 = iVar28 + 1;
        } while ((longlong)uVar37 < 3);
        local_130 = local_130 + 1;
        uVar37 = (ulonglong)local_130;
        local_138 = local_138 + 0xc;
        local_120 = local_120 + -1;
      } while (local_120 != 0);
    }
    GeometryCollection::AddGeometryProperties((FManagedArrayCollection *)param_1);
    uVar19 = FManagedArrayCollection::AddElements
                       ((FManagedArrayCollection *)param_1,1,MaterialGroup);
    puVar26 = &(param_1->Sections).field_0x10;
    lVar23 = (longlong)(int)uVar19;
    uVar25 = ~uVar19 >> 0x1f;
    uVar18 = uVar33;
    if ((int)uVar19 < *(int *)&(param_1->Sections).field_0x18) {
      uVar18 = uVar25;
    }
    if ((uVar18 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar32 = lVar23 * 0x20;
    *(undefined4 *)(lVar32 + *(longlong *)puVar26) = 0;
    if ((int)uVar19 < *(int *)&(param_1->Sections).field_0x18) {
      uVar33 = uVar25;
    }
    if ((uVar33 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(undefined4 *)(lVar32 + 4 + *(longlong *)puVar26) = 0;
    uVar43 = (**(code **)(*(longlong *)local_c8 + 0x60))();
    uVar18 = uVar20;
    if ((int)uVar19 < *(int *)&(param_1->Sections).field_0x18) {
      uVar18 = uVar25;
    }
    if ((uVar18 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(undefined4 *)(lVar32 + 8 + *(longlong *)puVar26) = uVar43;
    if ((int)uVar19 < *(int *)&(param_1->Sections).field_0x18) {
      uVar20 = uVar25;
    }
    if ((uVar20 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(undefined4 *)(lVar23 * 0x20 + 0xc + *(longlong *)puVar26) = 0;
    iVar28 = (**(code **)(*(longlong *)local_b0 + 0x60))();
    uVar20 = 0;
    if ((int)uVar19 < *(int *)&(param_1->Sections).field_0x18) {
      uVar20 = uVar25;
    }
    if ((uVar20 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(int *)(lVar23 * 0x20 + 0x10 + *(longlong *)puVar26) = iVar28 + -1;
    if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.AllocatorInstance.Data);
    }
    if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.AllocatorInstance.Data);
    }
  }
  return;
}

// InitializeInterfaces @ 143fee3c0

void __thiscall FGeometryCollection::InitializeInterfaces(FGeometryCollection *this)

{
  FGeometryCollectionConvexPropertiesInterface::InitializeInterface
            ((FGeometryCollectionConvexPropertiesInterface *)&this->_padding_);
  FGeometryCollectionProximityPropertiesInterface::InitializeInterface
            ((FGeometryCollectionProximityPropertiesInterface *)&this->_padding_);
  return;
}

// IsAType @ 143fef900

bool __thiscall FGeometryCollection::IsAType(FGeometryCollection *this,FName param_1)

{
  uint uVar1;
  FNameEntryId FVar2;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  
  ::FName::FName(&local_res10,"FGeometryCollection");
  FVar2 = param_1.ComparisonIndex.Value;
  uVar1 = param_1.Number;
  if ((FVar2.Value != local_res10.ComparisonIndex.Value) || (uVar1 != local_res10.Number)) {
    ::FName::FName(&local_res18,"FTransformCollection");
    if ((FVar2.Value != local_res18.ComparisonIndex.Value) || (uVar1 != local_res18.Number)) {
      ::FName::FName(&local_res20,"FManagedArrayCollection");
      if ((FVar2.Value != local_res20.ComparisonIndex.Value) || (uVar1 != local_res20.Number)) {
        return false;
      }
    }
  }
  return true;
}

// IsVisible @ 143fefea0

bool __thiscall FGeometryCollection::IsVisible(FGeometryCollection *this,int param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 *puVar10;
  longlong lVar11;
  
  lVar11 = (longlong)param_1;
  uVar9 = (uint)~param_1 >> 0x1f;
  uVar5 = 0;
  if (param_1 < *(int *)&(this->SimulationType).field_0x18) {
    uVar5 = uVar9;
  }
  if ((uVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if (*(int *)(*(longlong *)&(this->SimulationType).field_0x10 + lVar11 * 4) == 1) {
    uVar5 = 0;
    if (param_1 < *(int *)&(this->TransformToGeometryIndex).field_0x18) {
      uVar5 = uVar9;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (-1 < *(int *)(*(longlong *)&(this->TransformToGeometryIndex).field_0x10 + lVar11 * 4)) {
      uVar5 = 0;
      if (param_1 < *(int *)&(this->TransformToGeometryIndex).field_0x18) {
        uVar5 = uVar9;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      uVar5 = *(uint *)(*(longlong *)&(this->TransformToGeometryIndex).field_0x10 + lVar11 * 4);
      uVar8 = 0;
      if ((int)uVar5 < *(int *)&(this->FaceStart).field_0x18) {
        uVar8 = ~uVar5 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      uVar5 = *(uint *)(*(longlong *)&(this->FaceStart).field_0x10 + (longlong)(int)uVar5 * 4);
      uVar8 = uVar5;
      while( true ) {
        uVar6 = 0;
        if (param_1 < *(int *)&(this->TransformToGeometryIndex).field_0x18) {
          uVar6 = uVar9;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        uVar6 = *(uint *)(*(longlong *)&(this->TransformToGeometryIndex).field_0x10 + lVar11 * 4);
        uVar7 = 0;
        if ((int)uVar6 < *(int *)&(this->FaceCount).field_0x18) {
          uVar7 = ~uVar6 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        if (*(int *)(*(longlong *)&(this->FaceCount).field_0x10 + (longlong)(int)uVar6 * 4) <=
            (int)(uVar8 - uVar5)) break;
        if ((((int)uVar8 < 0) || (*(int *)&(this->Visible).field_0x28 <= (int)uVar8)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        puVar1 = *(undefined1 **)&(this->Visible).field_0x20;
        puVar10 = &(this->Visible).field_0x10;
        if (puVar1 != (undefined1 *)0x0) {
          puVar10 = puVar1;
        }
        uVar6 = uVar8;
        if ((int)uVar8 < 0) {
          uVar6 = uVar8 + 0x1f;
        }
        if ((*(uint *)(puVar10 + (longlong)((int)uVar6 >> 5) * 4) >> (uVar8 & 0x1f) & 1) != 0) {
          return true;
        }
        uVar8 = uVar8 + 1;
      }
    }
  }
  return false;
}

// MatchOptionalDefaultAttributes @ 143ff0160

void __thiscall
FGeometryCollection::MatchOptionalDefaultAttributes
          (FGeometryCollection *this,FManagedArrayCollection *param_1)

{
  bool bVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = 1;
  do {
    uVar2 = (uint)uVar3;
    bVar1 = FManagedArrayCollection::HasAttribute
                      (param_1,GeometryCollection::UV::UVLayerNames[uVar3],
                       GeometryCollection::UV::VerticesGroupName);
    if (!bVar1) break;
    uVar2 = uVar2 + 1;
    uVar3 = (ulonglong)uVar2;
  } while ((int)uVar2 < 8);
  GeometryCollection::UV::SetNumUVLayers((FManagedArrayCollection *)this,uVar2);
  return;
}

// NewGeometryCollection @ 143ff0b10

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FGeometryCollection * __cdecl
FGeometryCollection::NewGeometryCollection
          (TArray<float,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_4,
          TManagedArray<int> *param_5,TManagedArray<int> *param_6,
          TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *param_7,
          TManagedArray<int> *param_8,TManagedArray<int> *param_9,
          FGeometryCollectionDefaults *param_10)

{
  undefined8 *puVar1;
  float *pfVar2;
  uint *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  TVector2<float> TVar25;
  ForAnyElementType FVar26;
  TManagedArray<UE::Math::TIntVector3<int>_> *pTVar27;
  bool bVar28;
  int iVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  FGeometryCollection *pFVar35;
  FGeometryCollection *pFVar36;
  TManagedArray<UE::Math::TVector2<float>_> *pTVar37;
  longlong lVar38;
  longlong lVar39;
  undefined1 *puVar40;
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this;
  FGeometryCollection *pFVar41;
  FGeometryCollection *pFVar42;
  longlong lVar43;
  uint uVar44;
  uint uVar45;
  longlong lVar46;
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar47;
  uint uVar48;
  FGeometryCollection *pFVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  undefined1 auVar54 [16];
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  undefined4 uVar61;
  float fVar62;
  longlong local_168;
  longlong local_160;
  uint local_158 [2];
  longlong local_150;
  longlong local_148;
  uint local_140;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_138;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_128;
  longlong local_118;
  FGeometryCollection *local_110;
  undefined8 local_108;
  undefined8 local_f8;
  undefined4 local_f0;
  TManagedArray<UE::Math::TIntVector3<int>_> *local_e8;
  longlong local_e0;
  int local_d8;
  undefined8 local_d4;
  float local_cc;
  int local_c8 [2];
  FGeometryCollectionProximityUtility local_c0;
  FLinearColor_u_0 local_b8 [7];
  
  pFVar35 = ::operator_new(0x4c0);
  pFVar41 = (FGeometryCollection *)0x0;
  pFVar36 = pFVar41;
  if (pFVar35 != (FGeometryCollection *)0x0) {
    local_b8[0]._0_8_ = *(undefined8 *)&(param_10->DefaultVertexColor).field0_0x0;
    local_b8[0]._8_8_ = *(undefined8 *)((longlong)&(param_10->DefaultVertexColor).field0_0x0 + 8);
    pFVar36 = FGeometryCollection(pFVar35,(FGeometryCollectionDefaults *)&local_b8[0]._s_0);
  }
  iVar8 = param_1->ArrayNum / 3;
  local_110 = pFVar36;
  local_d8 = iVar8;
  FManagedArrayCollection::AddElements((FManagedArrayCollection *)pFVar36,iVar8,VerticesGroup);
  iVar29 = param_2->ArrayNum;
  local_140 = (int)(((longlong)iVar29 / 3 + ((longlong)iVar29 >> 0x3f) & 0xffffffffU) >> 0x1f) +
              iVar29 / 3 + (iVar29 >> 0x1f);
  FManagedArrayCollection::AddElements((FManagedArrayCollection *)pFVar36,local_140,FacesGroup);
  local_e8 = &pFVar36->Indices;
  GeometryCollection::UV::SetNumUVLayers((FManagedArrayCollection *)pFVar36,1);
  pTVar37 = FManagedArrayCollection::FindAttributeTyped<UE::Math::TVector2<float>_>
                      ((FManagedArrayCollection *)pFVar36,GeometryCollection::UV::UVLayerNames[0],
                       GeometryCollection::UV::VerticesGroupName);
  local_e0 = (longlong)iVar8;
  uVar34 = 0;
  uVar32 = 0;
  uVar33 = 0;
  if (0 < iVar8) {
    local_150 = 0;
    local_168 = 0;
    uVar44 = 1;
    pFVar35 = pFVar41;
    pFVar42 = pFVar41;
    do {
      uVar45 = 0;
      if ((int)(uVar44 + 1) < param_1->ArrayNum) {
        uVar45 = ~(uVar44 + 1) >> 0x1f;
      }
      if ((uVar45 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar7 = (code *)swi(3);
        pFVar36 = (FGeometryCollection *)(*pcVar7)();
        return pFVar36;
      }
      uVar61 = *(undefined4 *)
                ((longlong)&pFVar35->_padding_ + (longlong)(param_1->AllocatorInstance).Data);
      uVar45 = uVar33;
      if ((int)uVar44 < param_1->ArrayNum) {
        uVar45 = ~uVar44 >> 0x1f;
      }
      if ((uVar45 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar7 = (code *)swi(3);
        pFVar36 = (FGeometryCollection *)(*pcVar7)();
        return pFVar36;
      }
      uVar4 = *(undefined4 *)
               ((longlong)&pFVar35->_padding_ + (longlong)((param_1->AllocatorInstance).Data + 4));
      uVar45 = uVar33;
      if ((int)(uVar44 - 1) < param_1->ArrayNum) {
        uVar45 = ~(uVar44 - 1) >> 0x1f;
      }
      if ((uVar45 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar7 = (code *)swi(3);
        pFVar36 = (FGeometryCollection *)(*pcVar7)();
        return pFVar36;
      }
      uVar31 = (uint)pFVar42;
      uVar48 = ~uVar31 >> 0x1f;
      uVar5 = *(undefined4 *)
               ((longlong)&pFVar35->_padding_ + (longlong)(param_1->AllocatorInstance).Data);
      uVar45 = uVar33;
      if ((int)uVar31 < *(int *)&(pFVar36->Vertex).field_0x18) {
        uVar45 = uVar48;
      }
      if ((uVar45 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar7 = (code *)swi(3);
        pFVar36 = (FGeometryCollection *)(*pcVar7)();
        return pFVar36;
      }
      lVar46 = *(longlong *)&(pFVar36->Vertex).field_0x10;
      *(undefined4 *)((longlong)&pFVar35->_padding_ + lVar46) = uVar5;
      *(undefined4 *)((longlong)&pFVar35->_padding_ + lVar46 + 4) = uVar4;
      *(undefined4 *)((longlong)&pFVar35->_padding_ + lVar46) = uVar61;
      uVar45 = uVar33;
      if ((int)uVar31 < param_3->ArrayNum) {
        uVar45 = uVar48;
      }
      if ((uVar45 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar7 = (code *)swi(3);
        pFVar36 = (FGeometryCollection *)(*pcVar7)();
        return pFVar36;
      }
      local_148 = CONCAT44(local_148._4_4_,
                           *(undefined4 *)((param_3->AllocatorInstance).Data + local_168 * 4));
      uVar45 = uVar32;
      if ((int)uVar31 < *(int *)&(pFVar36->BoneMap).field_0x18) {
        uVar45 = uVar48;
      }
      if ((uVar45 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar7 = (code *)swi(3);
        pFVar36 = (FGeometryCollection *)(*pcVar7)();
        return pFVar36;
      }
      *(int *)(*(longlong *)&(pFVar36->BoneMap).field_0x10 + local_168 * 4) = (int)local_148;
      TVar25 = UE::Math::TVector2<float>::ZeroVector;
      uVar45 = uVar32;
      if ((int)uVar31 < *(int *)&pTVar37->field_0x18) {
        uVar45 = uVar48;
      }
      if ((uVar45 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar7 = (code *)swi(3);
        pFVar36 = (FGeometryCollection *)(*pcVar7)();
        return pFVar36;
      }
      ((TVector2<float>_u_0 *)(*(longlong *)&pTVar37->field_0x10 + local_168 * 8))->_s_0 =
           (TVector2<float>_u_0_s_0)TVar25.field0_0x0;
      uVar23 = *(undefined8 *)&(pFVar36->Defaults).DefaultVertexColor.field0_0x0;
      uVar24 = *(undefined8 *)((longlong)&(pFVar36->Defaults).DefaultVertexColor.field0_0x0 + 8);
      uVar45 = uVar34;
      if ((int)uVar31 < *(int *)&(pFVar36->Color).field_0x18) {
        uVar45 = uVar48;
      }
      if ((uVar45 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar7 = (code *)swi(3);
        pFVar36 = (FGeometryCollection *)(*pcVar7)();
        return pFVar36;
      }
      pFVar42 = (FGeometryCollection *)(ulonglong)(uVar31 + 1);
      uVar44 = uVar44 + 3;
      local_168 = local_168 + 1;
      pFVar35 = (FGeometryCollection *)((longlong)&pFVar35->_padding_ + 4);
      puVar1 = (undefined8 *)(local_150 + *(longlong *)&(pFVar36->Color).field_0x10);
      *puVar1 = uVar23;
      puVar1[1] = uVar24;
      local_150 = local_150 + 0x10;
    } while (local_168 < local_e0);
  }
  iVar29 = param_4->ArrayNum;
  local_150 = CONCAT44(local_150._4_4_,iVar29);
  FManagedArrayCollection::AddElements
            ((FManagedArrayCollection *)pFVar36,iVar29,FTransformCollection::TransformGroup);
  local_108 = (longlong)iVar29;
  if (0 < iVar29) {
    local_148 = 0;
    local_118 = 0;
    local_168 = 0;
    local_160 = 0;
    pFVar35 = pFVar41;
    pFVar42 = pFVar41;
    do {
      lVar43 = local_118;
      lVar46 = local_148;
      uVar31 = (uint)pFVar42;
      uVar45 = ~uVar31 >> 0x1f;
      uVar44 = uVar34;
      if ((int)uVar31 < param_4->ArrayNum) {
        uVar44 = uVar45;
      }
      if ((uVar44 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar7 = (code *)swi(3);
        pFVar36 = (FGeometryCollection *)(*pcVar7)();
        return pFVar36;
      }
      pFVar6 = (param_4->AllocatorInstance).Data;
      dVar9 = *(double *)(pFVar6 + local_168 + 0x10);
      dVar10 = *(double *)(pFVar6 + local_168 + 0x10 + 8);
      dVar11 = *(double *)(pFVar6 + local_168);
      dVar12 = *(double *)(pFVar6 + local_168 + 8);
      dVar13 = *(double *)(pFVar6 + local_168 + 0x20);
      dVar14 = *(double *)(pFVar6 + local_168 + 0x20 + 8);
      dVar15 = *(double *)(pFVar6 + local_168 + 0x40);
      dVar16 = *(double *)(pFVar6 + local_168 + 0x40 + 8);
      dVar17 = *(double *)(pFVar6 + local_168 + 0x30);
      dVar18 = *(double *)(pFVar6 + local_168 + 0x30 + 8);
      dVar19 = *(double *)(pFVar6 + local_168 + 0x50);
      dVar20 = *(double *)(pFVar6 + local_168 + 0x50 + 8);
      uVar44 = uVar32;
      if ((int)uVar31 < (int)pFVar36->_padding_) {
        uVar44 = uVar45;
      }
      if ((uVar44 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar7 = (code *)swi(3);
        pFVar36 = (FGeometryCollection *)(*pcVar7)();
        return pFVar36;
      }
      lVar38 = pFVar36->_padding_;
      pfVar2 = (float *)(lVar43 + lVar38);
      *pfVar2 = (float)dVar11;
      pfVar2[1] = (float)dVar12;
      pfVar2[2] = (float)dVar9;
      pfVar2[3] = (float)dVar10;
      pfVar2 = (float *)(lVar43 + 0x10 + lVar38);
      *pfVar2 = (float)dVar13;
      pfVar2[1] = (float)dVar14;
      pfVar2[2] = (float)dVar17;
      pfVar2[3] = (float)dVar18;
      pfVar2 = (float *)(lVar43 + 0x20 + lVar38);
      *pfVar2 = (float)dVar15;
      pfVar2[1] = (float)dVar16;
      pfVar2[2] = (float)dVar19;
      pfVar2[3] = (float)dVar20;
      uVar44 = uVar32;
      if ((int)uVar31 < (int)pFVar36->_padding_) {
        uVar44 = uVar45;
      }
      if ((uVar44 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar7 = (code *)swi(3);
        pFVar36 = (FGeometryCollection *)(*pcVar7)();
        return pFVar36;
      }
      pfVar2 = (float *)(lVar43 + pFVar36->_padding_);
      fVar21 = *pfVar2;
      fVar22 = pfVar2[1];
      fVar60 = pfVar2[2];
      fVar62 = pfVar2[3];
      fVar55 = fVar22 * fVar22 + fVar21 * fVar21;
      fVar56 = fVar21 * fVar21 + fVar22 * fVar22;
      fVar57 = fVar62 * fVar62 + fVar60 * fVar60;
      fVar58 = fVar60 * fVar60 + fVar62 * fVar62;
      auVar54._0_4_ = fVar57 + fVar55;
      auVar54._4_4_ = fVar58 + fVar56;
      auVar54._8_4_ = fVar55 + fVar57;
      auVar54._12_4_ = fVar56 + fVar58;
      uVar50 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[0] <= auVar54._0_4_);
      uVar51 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[1] <= auVar54._4_4_);
      uVar52 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[2] <= auVar54._8_4_);
      uVar53 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[3] <= auVar54._12_4_);
      auVar54 = sqrtps(auVar54,auVar54);
      auVar54 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar54);
      uVar44 = GlobalVectorConstants::Float0001.m128_u32[1];
      uVar48 = GlobalVectorConstants::Float0001.m128_u32[2];
      uVar30 = GlobalVectorConstants::Float0001.m128_u32[3];
      puVar3 = (uint *)(lVar43 + pFVar36->_padding_);
      *puVar3 = (uint)(auVar54._0_4_ * fVar21) & uVar50 |
                ~uVar50 & GlobalVectorConstants::Float0001.m128_u32[0];
      puVar3[1] = (uint)(auVar54._4_4_ * fVar22) & uVar51 | ~uVar51 & uVar44;
      puVar3[2] = (uint)(auVar54._8_4_ * fVar60) & uVar52 | ~uVar52 & uVar48;
      puVar3[3] = (uint)(auVar54._12_4_ * fVar62) & uVar53 | ~uVar53 & uVar30;
      uVar44 = uVar33;
      if ((int)uVar31 < *(int *)&param_6->field_0x18) {
        uVar44 = uVar45;
      }
      if ((uVar44 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar7 = (code *)swi(3);
        pFVar36 = (FGeometryCollection *)(*pcVar7)();
        return pFVar36;
      }
      uVar61 = *(undefined4 *)(local_160 + *(longlong *)&param_6->field_0x10);
      uVar44 = uVar33;
      if ((int)uVar31 < (int)pFVar36->_padding_) {
        uVar44 = uVar45;
      }
      if ((uVar44 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar7 = (code *)swi(3);
        pFVar36 = (FGeometryCollection *)(*pcVar7)();
        return pFVar36;
      }
      *(undefined4 *)(pFVar36->_padding_ + (longlong)pFVar35 * 4) = uVar61;
      iVar29 = (**(code **)(*(longlong *)param_7 + 0x60))(param_7);
      if (0 < iVar29) {
        uVar44 = uVar33;
        if ((int)uVar31 < *(int *)&param_7->field_0x18) {
          uVar44 = uVar45;
        }
        if ((uVar44 == 0) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar28)) {
          pcVar7 = (code *)swi(3);
          pFVar36 = (FGeometryCollection *)(*pcVar7)();
          return pFVar36;
        }
        pTVar47 = (TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)(lVar46 + *(longlong *)&param_7->field_0x10);
        uVar44 = uVar33;
        if ((int)uVar31 < (int)pFVar36->_padding_) {
          uVar44 = uVar45;
        }
        if ((uVar44 == 0) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar28)) {
          pcVar7 = (code *)swi(3);
          pFVar36 = (FGeometryCollection *)(*pcVar7)();
          return pFVar36;
        }
        this = (TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(local_148 + pFVar36->_padding_);
        if (this != pTVar47) {
          UE::Core::Private::
          CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                    ((ForElementType<FSetElementId> *)(this + 1),(int *)&this[1].field_0x10,
                     (ForElementType<FSetElementId> *)(pTVar47 + 1),*(int *)&pTVar47[1].field_0x10);
          iVar29 = *(int *)&pTVar47->field_0x8;
          TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::Empty(this,iVar29);
          UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,iVar29,(ForAnyElementType *)this,(int *)&this->field_0x8,
                     (int *)&this->field_0xc);
          *(undefined4 *)&this->field_0x30 = *(undefined4 *)&pTVar47->field_0x30;
          *(undefined4 *)&this->field_0x34 = *(undefined4 *)&pTVar47->field_0x34;
          if (&this->field_0x10 != &pTVar47->field_0x10) {
            TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                      ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,
                       (TBitArray<FDefaultBitArrayAllocator> *)&pTVar47->field_0x10);
          }
          if (iVar29 != 0) {
            memcpy(*(void **)this,*(void **)pTVar47,(longlong)iVar29 * 0xc);
          }
        }
      }
      uVar44 = uVar33;
      if ((int)uVar31 < *(int *)&param_8->field_0x18) {
        uVar44 = uVar45;
      }
      if ((uVar44 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar7 = (code *)swi(3);
        pFVar36 = (FGeometryCollection *)(*pcVar7)();
        return pFVar36;
      }
      uVar61 = *(undefined4 *)(*(longlong *)&param_8->field_0x10 + (longlong)pFVar35 * 4);
      uVar44 = uVar33;
      if ((int)uVar31 < *(int *)&(pFVar36->SimulationType).field_0x18) {
        uVar44 = uVar45;
      }
      if ((uVar44 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar7 = (code *)swi(3);
        pFVar36 = (FGeometryCollection *)(*pcVar7)();
        return pFVar36;
      }
      *(undefined4 *)(*(longlong *)&(pFVar36->SimulationType).field_0x10 + (longlong)pFVar35 * 4) =
           uVar61;
      uVar44 = uVar33;
      if ((int)uVar31 < *(int *)&param_9->field_0x18) {
        uVar44 = uVar45;
      }
      if ((uVar44 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar7 = (code *)swi(3);
        pFVar36 = (FGeometryCollection *)(*pcVar7)();
        return pFVar36;
      }
      uVar61 = *(undefined4 *)(*(longlong *)&param_9->field_0x10 + (longlong)pFVar35 * 4);
      uVar44 = uVar33;
      if ((int)uVar31 < *(int *)&(pFVar36->StatusFlags).field_0x18) {
        uVar44 = uVar45;
      }
      if ((uVar44 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar7 = (code *)swi(3);
        pFVar36 = (FGeometryCollection *)(*pcVar7)();
        return pFVar36;
      }
      local_158[0] = 0;
      *(undefined4 *)(*(longlong *)&(pFVar36->StatusFlags).field_0x10 + (longlong)pFVar35 * 4) =
           uVar61;
      pFVar42 = pFVar41;
      if (0 < (int)(uint)local_150) {
        do {
          uVar48 = (uint)pFVar42;
          uVar44 = uVar32;
          if ((int)uVar48 < *(int *)&param_6->field_0x18) {
            uVar44 = ~uVar48 >> 0x1f;
          }
          if ((uVar44 == 0) &&
             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar28)) {
            pcVar7 = (code *)swi(3);
            pFVar36 = (FGeometryCollection *)(*pcVar7)();
            return pFVar36;
          }
          if (*(uint *)(*(longlong *)&param_6->field_0x10 + (longlong)(int)uVar48 * 4) == uVar31) {
            uVar44 = uVar32;
            if ((int)uVar31 < (int)pFVar36->_padding_) {
              uVar44 = uVar45;
            }
            if ((uVar44 == 0) &&
               (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar28)) {
              pcVar7 = (code *)swi(3);
              pFVar36 = (FGeometryCollection *)(*pcVar7)();
              return pFVar36;
            }
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                       (local_148 + pFVar36->_padding_),local_c8,(bool *)local_158);
          }
          local_158[0] = uVar48 + 1;
          pFVar42 = (FGeometryCollection *)(ulonglong)local_158[0];
        } while ((int)local_158[0] < (int)(uint)local_150);
      }
      pFVar42 = (FGeometryCollection *)(ulonglong)(uVar31 + 1);
      local_168 = local_168 + 0x60;
      local_118 = local_118 + 0x30;
      local_160 = local_160 + 4;
      local_148 = local_148 + 0x50;
      pFVar35 = (FGeometryCollection *)((longlong)&pFVar35->_padding_ + 1);
    } while ((longlong)pFVar35 < local_108);
  }
  uVar44 = local_140;
  local_168 = (longlong)(int)local_140;
  local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.ArrayNum = 0;
  local_128.ArrayMax = 0;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNum(&local_128,local_140,Default)
  ;
  fVar22 = __real_3f800000;
  fVar21 = __real_322bcc77;
  uVar45 = 0;
  if (0 < (int)uVar44) {
    uVar31 = 2;
    local_160 = 0;
    local_148 = CONCAT44(local_148._4_4_,2);
    uVar44 = 1;
    pFVar35 = pFVar41;
    pFVar42 = pFVar41;
    do {
      uVar48 = uVar32;
      if ((int)(uVar31 - 2) < param_2->ArrayNum) {
        uVar48 = ~(uVar31 - 2) >> 0x1f;
      }
      if ((uVar48 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar7 = (code *)swi(3);
        pFVar36 = (FGeometryCollection *)(*pcVar7)();
        return pFVar36;
      }
      uVar48 = *(uint *)((longlong)&pFVar42->_padding_ + (longlong)(param_2->AllocatorInstance).Data
                        );
      lVar46 = (longlong)(int)uVar48;
      uVar30 = uVar32;
      if ((int)(uVar31 - 1) < param_2->ArrayNum) {
        uVar30 = ~(uVar31 - 1) >> 0x1f;
      }
      local_140 = uVar48;
      if ((uVar30 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar7 = (code *)swi(3);
        pFVar36 = (FGeometryCollection *)(*pcVar7)();
        return pFVar36;
      }
      uVar30 = *(uint *)((longlong)&pFVar42->_padding_ +
                        (longlong)((param_2->AllocatorInstance).Data + 4));
      uVar50 = uVar33;
      if ((int)uVar31 < param_2->ArrayNum) {
        uVar50 = ~uVar31 >> 0x1f;
      }
      if ((uVar50 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar7 = (code *)swi(3);
        pFVar36 = (FGeometryCollection *)(*pcVar7)();
        return pFVar36;
      }
      uVar50 = (uint)pFVar35;
      uVar51 = ~uVar50 >> 0x1f;
      uVar61 = *(undefined4 *)
                ((longlong)&pFVar42->_padding_ + (longlong)(param_2->AllocatorInstance).Data);
      uVar31 = uVar33;
      if ((int)uVar50 < *(int *)&(pFVar36->Indices).field_0x18) {
        uVar31 = uVar51;
      }
      local_150 = CONCAT44(local_150._4_4_,uVar61);
      if ((uVar31 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar7 = (code *)swi(3);
        pFVar36 = (FGeometryCollection *)(*pcVar7)();
        return pFVar36;
      }
      lVar43 = *(longlong *)&(pFVar36->Indices).field_0x10;
      *(uint *)((longlong)&pFVar42->_padding_ + lVar43) = uVar48;
      *(uint *)((longlong)&pFVar42->_padding_ + lVar43 + 4) = uVar30;
      *(undefined4 *)((longlong)&pFVar42->_padding_ + lVar43) = uVar61;
      if ((((int)uVar50 < 0) || (*(int *)&(pFVar36->Visible).field_0x28 <= (int)uVar50)) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar28)) {
        pcVar7 = (code *)swi(3);
        pFVar36 = (FGeometryCollection *)(*pcVar7)();
        return pFVar36;
      }
      puVar40 = *(undefined1 **)&(pFVar36->Visible).field_0x20;
      uVar31 = uVar50;
      if ((int)uVar50 < 0) {
        uVar31 = uVar50 + 0x1f;
      }
      if (puVar40 == (undefined1 *)0x0) {
        puVar40 = &(pFVar36->Visible).field_0x10;
      }
      *(uint *)(puVar40 + (longlong)((int)uVar31 >> 5) * 4) =
           *(uint *)(puVar40 + (longlong)((int)uVar31 >> 5) * 4) | uVar44;
      if ((((int)uVar50 < 0) || (*(int *)&(pFVar36->Internal).field_0x28 <= (int)uVar50)) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar28)) {
        pcVar7 = (code *)swi(3);
        pFVar36 = (FGeometryCollection *)(*pcVar7)();
        return pFVar36;
      }
      puVar40 = *(undefined1 **)&(pFVar36->Internal).field_0x20;
      if (puVar40 == (undefined1 *)0x0) {
        puVar40 = &(pFVar36->Internal).field_0x10;
      }
      *(uint *)(puVar40 + (longlong)((int)uVar31 >> 5) * 4) =
           *(uint *)(puVar40 + (longlong)((int)uVar31 >> 5) * 4) & ~uVar44;
      uVar31 = uVar33;
      if ((int)uVar50 < *(int *)&(pFVar36->MaterialID).field_0x18) {
        uVar31 = uVar51;
      }
      if ((uVar31 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar7 = (code *)swi(3);
        pFVar36 = (FGeometryCollection *)(*pcVar7)();
        return pFVar36;
      }
      *(undefined4 *)(*(longlong *)&(pFVar36->MaterialID).field_0x10 + local_160 * 4) = 0;
      uVar31 = uVar33;
      if ((int)uVar50 < *(int *)&(pFVar36->MaterialIndex).field_0x18) {
        uVar31 = uVar51;
      }
      if ((uVar31 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar7 = (code *)swi(3);
        pFVar36 = (FGeometryCollection *)(*pcVar7)();
        return pFVar36;
      }
      *(uint *)(*(longlong *)&(pFVar36->MaterialIndex).field_0x10 + local_160 * 4) = uVar50;
      uVar31 = uVar45;
      if ((int)uVar48 < *(int *)&(pFVar36->Vertex).field_0x18) {
        uVar31 = ~uVar48 >> 0x1f;
      }
      if ((uVar31 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar7 = (code *)swi(3);
        pFVar36 = (FGeometryCollection *)(*pcVar7)();
        return pFVar36;
      }
      local_108 = *(longlong *)&(pFVar36->Vertex).field_0x10;
      uVar31 = uVar45;
      if ((int)uVar30 < *(int *)&(pFVar36->Vertex).field_0x18) {
        uVar31 = ~uVar30 >> 0x1f;
      }
      local_118 = lVar46;
      if ((uVar31 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar7 = (code *)swi(3);
        pFVar36 = (FGeometryCollection *)(*pcVar7)();
        return pFVar36;
      }
      lVar38 = (longlong)(int)uVar30;
      lVar43 = *(longlong *)&(pFVar36->Vertex).field_0x10;
      fVar55 = *(float *)(local_108 + lVar46 * 0xc) - *(float *)(lVar43 + lVar38 * 0xc);
      fVar60 = *(float *)(local_108 + 4 + lVar46 * 0xc) - *(float *)(lVar43 + 4 + lVar38 * 0xc);
      fVar62 = *(float *)(local_108 + 8 + lVar46 * 0xc) - *(float *)(lVar43 + 8 + lVar38 * 0xc);
      uVar31 = uVar45;
      if ((int)local_140 < *(int *)&(pFVar36->Vertex).field_0x18) {
        uVar31 = ~uVar48 >> 0x1f;
      }
      if ((uVar31 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar7 = (code *)swi(3);
        pFVar36 = (FGeometryCollection *)(*pcVar7)();
        return pFVar36;
      }
      lVar43 = *(longlong *)&(pFVar36->Vertex).field_0x10;
      uVar31 = uVar45;
      if ((int)(uint)local_150 < *(int *)&(pFVar36->Vertex).field_0x18) {
        uVar31 = ~(uint)local_150 >> 0x1f;
      }
      if (uVar31 == 0) {
        bVar28 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar28) {
          pcVar7 = (code *)swi(3);
          pFVar36 = (FGeometryCollection *)(*pcVar7)();
          return pFVar36;
        }
      }
      lVar39 = (longlong)(int)(uint)local_150;
      lVar38 = *(longlong *)&(pFVar36->Vertex).field_0x10;
      fVar58 = *(float *)(lVar43 + 4 + lVar46 * 0xc) - *(float *)(lVar38 + 4 + lVar39 * 0xc);
      fVar57 = *(float *)(lVar43 + 8 + lVar46 * 0xc) - *(float *)(lVar38 + 8 + lVar39 * 0xc);
      fVar59 = *(float *)(lVar43 + lVar46 * 0xc) - *(float *)(lVar38 + lVar39 * 0xc);
      fVar56 = fVar62 * fVar58 - fVar60 * fVar57;
      uVar61 = fVar60 * fVar59 - fVar55 * fVar58;
      fVar60 = fVar55 * fVar57 - fVar62 * fVar59;
      fVar62 = fVar60 * fVar60 + fVar56 * fVar56 + (float)uVar61 * (float)uVar61;
      if (fVar62 != fVar22) {
        if (fVar21 <= fVar62) {
          fVar62 = fVar22 / SQRT(fVar62);
          uVar61 = fVar62 * (float)uVar61;
          fVar56 = fVar62 * fVar56;
          fVar60 = fVar62 * fVar60;
        }
        else {
          fVar56 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
          fVar60 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20)
          ;
          uVar61 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        }
      }
      uVar31 = uVar34;
      if ((int)uVar50 < local_128.ArrayNum) {
        uVar31 = uVar51;
      }
      if ((uVar31 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar7 = (code *)swi(3);
        pFVar36 = (FGeometryCollection *)(*pcVar7)();
        return pFVar36;
      }
      pFVar35 = (FGeometryCollection *)(ulonglong)(uVar50 + 1);
      uVar44 = uVar44 << 1 | (uint)((int)uVar44 < 0);
      *(ulonglong *)(local_128.AllocatorInstance.Data + (longlong)&pFVar42->_padding_) =
           CONCAT44(fVar60,fVar56);
      local_160 = local_160 + 1;
      *(undefined4 *)((longlong)&pFVar42->_padding_ + local_128.AllocatorInstance.Data) = uVar61;
      pFVar42 = (FGeometryCollection *)((longlong)&pFVar42->_padding_ + 4);
      uVar31 = (int)local_148 + 3;
      local_148 = CONCAT44(local_148._4_4_,uVar31);
    } while (local_160 < local_168);
  }
  local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.ArrayNum = 0;
  local_138.ArrayMax = 0;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNum(&local_138,local_d8,Default);
  pFVar35 = pFVar41;
  pFVar42 = pFVar41;
  lVar46 = local_e0;
  if (0 < local_e0) {
    do {
      uVar31 = (uint)pFVar42;
      uVar44 = uVar34;
      if ((int)uVar31 < local_138.ArrayNum) {
        uVar44 = ~uVar31 >> 0x1f;
      }
      if ((uVar44 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar7 = (code *)swi(3);
        pFVar36 = (FGeometryCollection *)(*pcVar7)();
        return pFVar36;
      }
      *(undefined8 *)(local_138.AllocatorInstance.Data + (longlong)&pFVar35->_padding_) = 0;
      *(undefined4 *)((longlong)&pFVar35->_padding_ + local_138.AllocatorInstance.Data) = 0;
      lVar46 = lVar46 + -1;
      pFVar35 = (FGeometryCollection *)((longlong)&pFVar35->_padding_ + 4);
      pFVar42 = (FGeometryCollection *)(ulonglong)(uVar31 + 1);
    } while (lVar46 != 0);
  }
  pFVar35 = pFVar41;
  pFVar42 = pFVar41;
  pFVar49 = pFVar41;
  if (0 < local_168) {
    do {
      uVar48 = (uint)pFVar49;
      uVar31 = ~uVar48 >> 0x1f;
      uVar44 = uVar45;
      if ((int)uVar48 < local_128.ArrayNum) {
        uVar44 = uVar31;
      }
      if ((uVar44 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar7 = (code *)swi(3);
        pFVar36 = (FGeometryCollection *)(*pcVar7)();
        return pFVar36;
      }
      pTVar27 = local_e8;
      FVar26.Data = local_128.AllocatorInstance.Data;
      uVar44 = uVar45;
      if ((int)uVar48 < *(int *)&local_e8->field_0x18) {
        uVar44 = uVar31;
      }
      if ((uVar44 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar7 = (code *)swi(3);
        pFVar36 = (FGeometryCollection *)(*pcVar7)();
        return pFVar36;
      }
      uVar44 = *(uint *)((longlong)&pFVar35->_padding_ + *(longlong *)&pTVar27->field_0x10);
      lVar46 = (longlong)(int)uVar44;
      uVar30 = uVar45;
      if ((int)uVar44 < local_138.ArrayNum) {
        uVar30 = ~uVar44 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar7 = (code *)swi(3);
        pFVar36 = (FGeometryCollection *)(*pcVar7)();
        return pFVar36;
      }
      *(float *)(local_138.AllocatorInstance.Data + lVar46 * 0xc) =
           *(float *)(FVar26.Data + (longlong)&pFVar35->_padding_) +
           *(float *)(local_138.AllocatorInstance.Data + lVar46 * 0xc);
      *(float *)(local_138.AllocatorInstance.Data + lVar46 * 0xc + 4) =
           *(float *)((undefined1 *)((longlong)&pFVar35->_padding_ + 4) + (longlong)FVar26.Data) +
           *(float *)(local_138.AllocatorInstance.Data + lVar46 * 0xc + 4);
      *(float *)(local_138.AllocatorInstance.Data + lVar46 * 0xc + 8) =
           *(float *)((longlong)&pFVar35->_padding_ + FVar26.Data) +
           *(float *)(local_138.AllocatorInstance.Data + lVar46 * 0xc + 8);
      uVar44 = uVar45;
      if ((int)uVar48 < local_128.ArrayNum) {
        uVar44 = uVar31;
      }
      if ((uVar44 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar7 = (code *)swi(3);
        pFVar36 = (FGeometryCollection *)(*pcVar7)();
        return pFVar36;
      }
      pTVar27 = local_e8;
      FVar26.Data = local_128.AllocatorInstance.Data;
      uVar44 = uVar45;
      if ((int)uVar48 < *(int *)&local_e8->field_0x18) {
        uVar44 = uVar31;
      }
      if ((uVar44 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar7 = (code *)swi(3);
        pFVar36 = (FGeometryCollection *)(*pcVar7)();
        return pFVar36;
      }
      uVar44 = *(uint *)((longlong)&pFVar35->_padding_ + *(longlong *)&pTVar27->field_0x10 + 4);
      lVar46 = (longlong)(int)uVar44;
      uVar30 = uVar45;
      if ((int)uVar44 < local_138.ArrayNum) {
        uVar30 = ~uVar44 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar7 = (code *)swi(3);
        pFVar36 = (FGeometryCollection *)(*pcVar7)();
        return pFVar36;
      }
      *(float *)(local_138.AllocatorInstance.Data + lVar46 * 0xc) =
           *(float *)(local_138.AllocatorInstance.Data + lVar46 * 0xc) +
           *(float *)(FVar26.Data + (longlong)&pFVar35->_padding_);
      *(float *)(local_138.AllocatorInstance.Data + lVar46 * 0xc + 4) =
           *(float *)((undefined1 *)((longlong)&pFVar35->_padding_ + 4) + (longlong)FVar26.Data) +
           *(float *)(local_138.AllocatorInstance.Data + lVar46 * 0xc + 4);
      *(float *)(local_138.AllocatorInstance.Data + lVar46 * 0xc + 8) =
           *(float *)((longlong)&pFVar35->_padding_ + FVar26.Data) +
           *(float *)(local_138.AllocatorInstance.Data + lVar46 * 0xc + 8);
      uVar44 = uVar45;
      if ((int)uVar48 < local_128.ArrayNum) {
        uVar44 = uVar31;
      }
      if ((uVar44 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar7 = (code *)swi(3);
        pFVar36 = (FGeometryCollection *)(*pcVar7)();
        return pFVar36;
      }
      FVar26.Data = local_128.AllocatorInstance.Data;
      uVar44 = uVar45;
      if ((int)uVar48 < *(int *)&local_e8->field_0x18) {
        uVar44 = uVar31;
      }
      if ((uVar44 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar7 = (code *)swi(3);
        pFVar36 = (FGeometryCollection *)(*pcVar7)();
        return pFVar36;
      }
      uVar44 = *(uint *)((longlong)&pFVar35->_padding_ + *(longlong *)&local_e8->field_0x10);
      lVar46 = (longlong)(int)uVar44;
      uVar31 = uVar32;
      if ((int)uVar44 < local_138.ArrayNum) {
        uVar31 = ~uVar44 >> 0x1f;
      }
      if ((uVar31 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar7 = (code *)swi(3);
        pFVar36 = (FGeometryCollection *)(*pcVar7)();
        return pFVar36;
      }
      pFVar42 = (FGeometryCollection *)((longlong)&pFVar42->_padding_ + 1);
      *(float *)(local_138.AllocatorInstance.Data + lVar46 * 0xc) =
           *(float *)(local_138.AllocatorInstance.Data + lVar46 * 0xc) +
           *(float *)(FVar26.Data + (longlong)&pFVar35->_padding_);
      *(float *)(local_138.AllocatorInstance.Data + lVar46 * 0xc + 4) =
           *(float *)((undefined1 *)((longlong)&pFVar35->_padding_ + 4) + (longlong)FVar26.Data) +
           *(float *)(local_138.AllocatorInstance.Data + lVar46 * 0xc + 4);
      *(float *)(local_138.AllocatorInstance.Data + lVar46 * 0xc + 8) =
           *(float *)((longlong)&pFVar35->_padding_ + FVar26.Data) +
           *(float *)(local_138.AllocatorInstance.Data + lVar46 * 0xc + 8);
      pFVar35 = (FGeometryCollection *)((longlong)&pFVar35->_padding_ + 4);
      pFVar36 = local_110;
      pFVar49 = (FGeometryCollection *)(ulonglong)(uVar48 + 1);
    } while ((longlong)pFVar42 < local_168);
  }
  fVar62 = __real_3de38e3a;
  fVar60 = __real_3eaaaaab;
  pFVar35 = pFVar41;
  pFVar42 = pFVar41;
  pFVar49 = pFVar41;
  if (0 < local_e0) {
    do {
      uVar31 = (uint)pFVar49;
      uVar44 = uVar32;
      if ((int)uVar31 < local_138.ArrayNum) {
        uVar44 = ~uVar31 >> 0x1f;
      }
      if ((uVar44 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar7 = (code *)swi(3);
        pFVar36 = (FGeometryCollection *)(*pcVar7)();
        return pFVar36;
      }
      fVar55 = *(float *)(local_138.AllocatorInstance.Data + (longlong)&pFVar42->_padding_);
      fVar56 = *(float *)((undefined1 *)((longlong)&pFVar42->_padding_ + 4) +
                         (longlong)local_138.AllocatorInstance.Data);
      fVar57 = *(float *)((longlong)&pFVar42->_padding_ + local_138.AllocatorInstance.Data);
      fVar58 = fVar55 * fVar60;
      fVar59 = fVar56 * fVar60;
      uVar61 = fVar57 * fVar60;
      local_d4 = CONCAT44(fVar59,fVar58);
      local_cc = (float)uVar61;
      fVar55 = (fVar56 * fVar56 + fVar55 * fVar55 + fVar57 * fVar57) * fVar62;
      if (fVar55 == fVar22) {
        local_d4 = CONCAT44(fVar59,fVar58);
      }
      else if (fVar21 <= fVar55) {
        fVar55 = fVar22 / SQRT(fVar55);
        fVar58 = fVar58 * fVar55;
        fVar59 = fVar59 * fVar55;
        uVar61 = (float)uVar61 * fVar55;
      }
      else {
        fVar58 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        fVar59 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
        uVar61 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      }
      uVar44 = uVar32;
      if ((int)uVar31 < *(int *)&(pFVar36->Normal).field_0x18) {
        uVar44 = ~uVar31 >> 0x1f;
      }
      if ((uVar44 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar7 = (code *)swi(3);
        pFVar36 = (FGeometryCollection *)(*pcVar7)();
        return pFVar36;
      }
      lVar46 = *(longlong *)&(pFVar36->Normal).field_0x10;
      pFVar35 = (FGeometryCollection *)((longlong)&pFVar35->_padding_ + 1);
      *(ulonglong *)((longlong)&pFVar42->_padding_ + lVar46) = CONCAT44(fVar59,fVar58);
      *(undefined4 *)((longlong)&pFVar42->_padding_ + lVar46) = uVar61;
      pFVar42 = (FGeometryCollection *)((longlong)&pFVar42->_padding_ + 4);
      pFVar49 = (FGeometryCollection *)(ulonglong)(uVar31 + 1);
    } while ((longlong)pFVar35 < local_e0);
  }
  uVar44 = 0;
  if (0 < local_168) {
    local_110 = (FGeometryCollection *)0x0;
    pFVar35 = pFVar41;
    do {
      pFVar42 = local_110;
      uVar31 = uVar32;
      if ((int)(uint)pFVar35 < *(int *)&(pFVar36->Indices).field_0x18) {
        uVar31 = ~(uint)pFVar35 >> 0x1f;
      }
      if ((uVar31 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar7 = (code *)swi(3);
        pFVar36 = (FGeometryCollection *)(*pcVar7)();
        return pFVar36;
      }
      lVar46 = *(longlong *)&(pFVar36->Indices).field_0x10;
      iVar29 = 1;
      local_f8 = *(undefined8 *)((longlong)&pFVar42->_padding_ + lVar46);
      local_f0 = *(undefined4 *)((longlong)&pFVar42->_padding_ + lVar46);
      pFVar35 = pFVar41;
      do {
        uVar31 = *(uint *)((longlong)&local_f8 + (longlong)pFVar35 * 4);
        uVar48 = uVar45;
        if ((int)uVar31 < *(int *)&(pFVar36->Normal).field_0x18) {
          uVar48 = ~uVar31 >> 0x1f;
        }
        if ((uVar48 == 0) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar28)) {
          pcVar7 = (code *)swi(3);
          pFVar36 = (FGeometryCollection *)(*pcVar7)();
          return pFVar36;
        }
        lVar46 = *(longlong *)&(pFVar36->Normal).field_0x10;
        local_108 = *(longlong *)(lVar46 + (longlong)(int)uVar31 * 0xc);
        fVar60 = *(float *)(lVar46 + 8 + (longlong)(int)uVar31 * 0xc);
        uVar31 = *(uint *)((longlong)&local_f8 +
                          (longlong)
                          (iVar29 + (iVar29 / 3 + (iVar29 >> 0x1f) +
                                    (int)(((longlong)iVar29 / 3 + ((longlong)iVar29 >> 0x3f) &
                                          0xffffffffU) >> 0x1f)) * -3) * 4);
        lVar46 = (longlong)(int)uVar31;
        uVar48 = uVar45;
        if ((int)uVar31 < *(int *)&(pFVar36->Vertex).field_0x18) {
          uVar48 = ~uVar31 >> 0x1f;
        }
        if ((uVar48 == 0) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar28)) {
          pcVar7 = (code *)swi(3);
          pFVar36 = (FGeometryCollection *)(*pcVar7)();
          return pFVar36;
        }
        uVar31 = *(uint *)((longlong)&local_f8 + (longlong)pFVar35 * 4);
        lVar38 = (longlong)(int)uVar31;
        lVar43 = *(longlong *)&(pFVar36->Vertex).field_0x10;
        uVar48 = uVar45;
        if ((int)uVar31 < *(int *)&(pFVar36->Vertex).field_0x18) {
          uVar48 = ~uVar31 >> 0x1f;
        }
        if ((uVar48 == 0) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar28)) {
          pcVar7 = (code *)swi(3);
          pFVar36 = (FGeometryCollection *)(*pcVar7)();
          return pFVar36;
        }
        lVar39 = *(longlong *)&(pFVar36->Vertex).field_0x10;
        fVar58 = *(float *)(lVar43 + 4 + lVar46 * 0xc) - *(float *)(lVar39 + 4 + lVar38 * 0xc);
        fVar57 = *(float *)(lVar43 + 8 + lVar46 * 0xc) - *(float *)(lVar39 + 8 + lVar38 * 0xc);
        fVar55 = local_108._4_4_;
        fVar62 = (float)local_108;
        fVar59 = *(float *)(lVar43 + lVar46 * 0xc) - *(float *)(lVar39 + lVar38 * 0xc);
        fVar56 = fVar60 * fVar58 - local_108._4_4_ * fVar57;
        fVar57 = (float)local_108 * fVar57 - fVar60 * fVar59;
        uVar61 = local_108._4_4_ * fVar59 - (float)local_108 * fVar58;
        fVar58 = fVar57 * fVar57 + fVar56 * fVar56 + (float)uVar61 * (float)uVar61;
        if (fVar58 != fVar22) {
          if (fVar21 <= fVar58) {
            fVar58 = fVar22 / SQRT(fVar58);
            uVar61 = fVar58 * (float)uVar61;
            fVar56 = fVar58 * fVar56;
            fVar57 = fVar58 * fVar57;
          }
          else {
            fVar56 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
            fVar57 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >>
                            0x20);
            uVar61 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          }
        }
        uVar48 = uVar45;
        if ((int)uVar31 < *(int *)&(pFVar36->TangentU).field_0x18) {
          uVar48 = ~uVar31 >> 0x1f;
        }
        if ((uVar48 == 0) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar28)) {
          pcVar7 = (code *)swi(3);
          pFVar36 = (FGeometryCollection *)(*pcVar7)();
          return pFVar36;
        }
        lVar46 = *(longlong *)&(pFVar36->TangentU).field_0x10;
        *(ulonglong *)(lVar46 + (longlong)(int)uVar31 * 0xc) = CONCAT44(fVar57,fVar56);
        *(undefined4 *)(lVar46 + 8 + (longlong)(int)uVar31 * 0xc) = uVar61;
        uVar31 = *(uint *)((longlong)&local_f8 + (longlong)pFVar35 * 4);
        lVar46 = (longlong)(int)uVar31;
        uVar48 = uVar33;
        if ((int)uVar31 < *(int *)&(pFVar36->TangentU).field_0x18) {
          uVar48 = ~uVar31 >> 0x1f;
        }
        if ((uVar48 == 0) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar28)) {
          pcVar7 = (code *)swi(3);
          pFVar36 = (FGeometryCollection *)(*pcVar7)();
          return pFVar36;
        }
        lVar43 = *(longlong *)&(pFVar36->TangentU).field_0x10;
        fVar56 = fVar55 * *(float *)(lVar43 + 8 + lVar46 * 0xc) -
                 fVar60 * *(float *)(lVar43 + 4 + lVar46 * 0xc);
        uVar61 = fVar62 * *(float *)(lVar43 + 4 + lVar46 * 0xc) -
                 fVar55 * *(float *)(lVar43 + lVar46 * 0xc);
        fVar62 = fVar60 * *(float *)(lVar43 + lVar46 * 0xc) -
                 fVar62 * *(float *)(lVar43 + 8 + lVar46 * 0xc);
        fVar60 = fVar62 * fVar62 + fVar56 * fVar56 + (float)uVar61 * (float)uVar61;
        if (fVar60 != fVar22) {
          if (fVar21 <= fVar60) {
            fVar60 = fVar22 / SQRT(fVar60);
            fVar62 = fVar62 * fVar60;
            fVar56 = fVar56 * fVar60;
            uVar61 = (float)uVar61 * fVar60;
          }
          else {
            fVar56 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
            fVar62 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >>
                            0x20);
            uVar61 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          }
        }
        uVar48 = uVar33;
        if ((int)uVar31 < *(int *)&(pFVar36->TangentV).field_0x18) {
          uVar48 = ~uVar31 >> 0x1f;
        }
        if ((uVar48 == 0) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar28)) {
          pcVar7 = (code *)swi(3);
          pFVar36 = (FGeometryCollection *)(*pcVar7)();
          return pFVar36;
        }
        pFVar35 = (FGeometryCollection *)((longlong)&pFVar35->_padding_ + 1);
        lVar46 = *(longlong *)&(pFVar36->TangentV).field_0x10;
        *(ulonglong *)(lVar46 + (longlong)(int)uVar31 * 0xc) = CONCAT44(fVar62,fVar56);
        *(undefined4 *)(lVar46 + 8 + (longlong)(int)uVar31 * 0xc) = uVar61;
        iVar29 = iVar29 + 1;
      } while ((longlong)pFVar35 < 3);
      uVar44 = uVar44 + 1;
      pFVar35 = (FGeometryCollection *)(ulonglong)uVar44;
      local_110 = (FGeometryCollection *)((longlong)&local_110->_padding_ + 4);
      local_168 = local_168 + -1;
    } while (local_168 != 0);
  }
  GeometryCollection::AddGeometryProperties((FManagedArrayCollection *)pFVar36);
  FGeometryCollectionProximityUtility::FGeometryCollectionProximityUtility(&local_c0,pFVar36);
  FGeometryCollectionProximityUtility::UpdateProximity(&local_c0,(FConvexHulls *)0x0);
  uVar44 = FManagedArrayCollection::AddElements((FManagedArrayCollection *)pFVar36,1,MaterialGroup);
  lVar46 = (longlong)(int)uVar44;
  uVar45 = ~uVar44 >> 0x1f;
  uVar32 = uVar33;
  if ((int)uVar44 < *(int *)&(pFVar36->Sections).field_0x18) {
    uVar32 = uVar45;
  }
  if ((uVar32 == 0) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar28)) {
    pcVar7 = (code *)swi(3);
    pFVar36 = (FGeometryCollection *)(*pcVar7)();
    return pFVar36;
  }
  lVar43 = lVar46 * 0x20;
  *(undefined4 *)(lVar43 + *(longlong *)&(pFVar36->Sections).field_0x10) = 0;
  if ((int)uVar44 < *(int *)&(pFVar36->Sections).field_0x18) {
    uVar33 = uVar45;
  }
  if ((uVar33 == 0) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar28)) {
    pcVar7 = (code *)swi(3);
    pFVar36 = (FGeometryCollection *)(*pcVar7)();
    return pFVar36;
  }
  *(undefined4 *)(lVar43 + 4 + *(longlong *)&(pFVar36->Sections).field_0x10) = 0;
  uVar61 = (**(code **)(*(longlong *)&pFVar36->Indices + 0x60))();
  uVar33 = uVar34;
  if ((int)uVar44 < *(int *)&(pFVar36->Sections).field_0x18) {
    uVar33 = uVar45;
  }
  if ((uVar33 == 0) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar28)) {
    pcVar7 = (code *)swi(3);
    pFVar36 = (FGeometryCollection *)(*pcVar7)();
    return pFVar36;
  }
  *(undefined4 *)(*(longlong *)&(pFVar36->Sections).field_0x10 + 8 + lVar43) = uVar61;
  if ((int)uVar44 < *(int *)&(pFVar36->Sections).field_0x18) {
    uVar34 = uVar45;
  }
  if ((uVar34 == 0) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar28)) {
    pcVar7 = (code *)swi(3);
    pFVar36 = (FGeometryCollection *)(*pcVar7)();
    return pFVar36;
  }
  *(undefined4 *)(lVar46 * 0x20 + 0xc + *(longlong *)&(pFVar36->Sections).field_0x10) = 0;
  iVar29 = (**(code **)(*(longlong *)&pFVar36->Vertex + 0x60))();
  uVar33 = 0;
  if ((int)uVar44 < *(int *)&(pFVar36->Sections).field_0x18) {
    uVar33 = uVar45;
  }
  if ((uVar33 == 0) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar28)) {
    pcVar7 = (code *)swi(3);
    pFVar36 = (FGeometryCollection *)(*pcVar7)();
    return pFVar36;
  }
  *(int *)(lVar46 * 0x20 + 0x10 + *(longlong *)&(pFVar36->Sections).field_0x10) = iVar29 + -1;
  if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.AllocatorInstance.Data);
  }
  if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.AllocatorInstance.Data);
  }
  return pFVar36;
}

// NewGeometryCollection @ 143ff29b0

FGeometryCollection * __cdecl
FGeometryCollection::NewGeometryCollection
          (TArray<float,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,bool param_3,
          FGeometryCollectionDefaults *param_4)

{
  FGeometryCollection *pFVar1;
  FLinearColor_u_0 local_18;
  
  pFVar1 = ::operator_new(0x4c0);
  if (pFVar1 == (FGeometryCollection *)0x0) {
    pFVar1 = (FGeometryCollection *)0x0;
  }
  else {
    local_18._0_8_ = *(undefined8 *)&(param_4->DefaultVertexColor).field0_0x0;
    local_18._8_8_ = *(undefined8 *)((longlong)&(param_4->DefaultVertexColor).field0_0x0 + 8);
    pFVar1 = FGeometryCollection(pFVar1,(FGeometryCollectionDefaults *)&local_18._s_0);
  }
  Init(pFVar1,param_1,param_2,param_3);
  return pFVar1;
}

// NumUVLayers @ 143ff2c40

int __thiscall FGeometryCollection::NumUVLayers(FGeometryCollection *this)

{
  bool bVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = 1;
  do {
    bVar1 = FManagedArrayCollection::HasAttribute
                      ((FManagedArrayCollection *)this,GeometryCollection::UV::UVLayerNames[uVar3],
                       GeometryCollection::UV::VerticesGroupName);
    if (!bVar1) {
      return (int)uVar3;
    }
    uVar2 = (int)uVar3 + 1;
    uVar3 = (ulonglong)uVar2;
  } while ((int)uVar2 < 8);
  return uVar2;
}

// ReindexExemplarIndices @ 143ff41c0

void __thiscall
FGeometryCollection::ReindexExemplarIndices
          (FGeometryCollection *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  longlong local_res18;
  longlong local_res20;
  
  uVar10 = 0;
  iVar5 = FManagedArrayCollection::NumElements
                    ((FManagedArrayCollection *)this,FTransformCollection::TransformGroup);
  if (0 < iVar5) {
    local_res20 = 0;
    local_res18 = 0;
    do {
      uVar8 = ~uVar10 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar10 < *(int *)&(this->ExemplarIndex).field_0x18) {
        uVar7 = uVar8;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((-1 < *(int *)(local_res20 + *(longlong *)&(this->ExemplarIndex).field_0x10)) &&
         (uVar7 = param_1->ArrayNum - 1, -1 < (int)uVar7)) {
        lVar9 = (longlong)(int)uVar7 * 4;
        do {
          uVar6 = 0;
          if ((int)uVar10 < *(int *)&(this->ExemplarIndex).field_0x18) {
            uVar6 = uVar8;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          lVar2 = *(longlong *)&(this->ExemplarIndex).field_0x10;
          uVar6 = 0;
          if ((int)uVar7 < param_1->ArrayNum) {
            uVar6 = ~uVar7 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar5 = *(int *)&(this->ExemplarIndex).field_0x18;
          if (*(int *)(lVar2 + local_res18 * 4) ==
              *(int *)((param_1->AllocatorInstance).Data + lVar9)) {
            uVar7 = 0;
            if ((int)uVar10 < iVar5) {
              uVar7 = uVar8;
            }
            if ((uVar7 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            *(undefined4 *)(*(longlong *)&(this->ExemplarIndex).field_0x10 + local_res18 * 4) =
                 0xffffffff;
            break;
          }
          uVar6 = 0;
          if ((int)uVar10 < iVar5) {
            uVar6 = uVar8;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          lVar2 = *(longlong *)&(this->ExemplarIndex).field_0x10;
          uVar6 = 0;
          if ((int)uVar7 < param_1->ArrayNum) {
            uVar6 = ~uVar7 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (*(int *)((param_1->AllocatorInstance).Data + lVar9) <
              *(int *)(lVar2 + local_res18 * 4)) {
            uVar6 = 0;
            if ((int)uVar10 < *(int *)&(this->ExemplarIndex).field_0x18) {
              uVar6 = uVar8;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            piVar1 = (int *)(*(longlong *)&(this->ExemplarIndex).field_0x10 + local_res18 * 4);
            *piVar1 = *piVar1 + (-1 - uVar7);
            break;
          }
          lVar9 = lVar9 + -4;
          uVar7 = uVar7 - 1;
        } while (-1 < (int)uVar7);
      }
      local_res18 = local_res18 + 1;
      local_res20 = local_res20 + 4;
      uVar10 = uVar10 + 1;
      iVar5 = FManagedArrayCollection::NumElements
                        ((FManagedArrayCollection *)this,FTransformCollection::TransformGroup);
    } while ((int)uVar10 < iVar5);
  }
  return;
}

// ReindexMaterials @ 143ff4a50

void __thiscall FGeometryCollection::ReindexMaterials(FGeometryCollection *this)

{
  code *pcVar1;
  longlong lVar2;
  FName FVar3;
  undefined8 uVar4;
  TManagedArray<int> *pTVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  FName *pFVar11;
  TManagedArray<int> *pTVar12;
  TManagedArray<FGeometryCollectionSection> *pTVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  uint uStackX_18;
  int *piVar24;
  uint auStack_c8 [2];
  TArray<int,TSizedDefaultAllocator<32>_> TStack_c0;
  ForAnyElementType FStack_b0;
  int aiStack_a8 [4];
  longlong lStack_98;
  TManagedArray<int> *pTStack_90;
  longlong lStack_88;
  TManagedArray<int> *pTStack_80;
  FName FStack_78;
  FName FStack_70;
  FName FStack_68;
  FName FStack_60;
  FName FStack_58;
  FName aFStack_50 [2];
  
  FVar3 = FacesGroup;
  pFVar11 = ::FName::FName(&FStack_78,"MaterialID");
  bVar6 = FManagedArrayCollection::HasAttribute((FManagedArrayCollection *)this,*pFVar11,FVar3);
  FVar3 = MaterialGroup;
  if (bVar6) {
    pFVar11 = ::FName::FName(&FStack_70,"Sections");
    bVar6 = FManagedArrayCollection::HasAttribute((FManagedArrayCollection *)this,*pFVar11,FVar3);
    FVar3 = FacesGroup;
    if (bVar6) {
      pFVar11 = ::FName::FName(&FStack_68,"MaterialIndex");
      bVar6 = FManagedArrayCollection::HasAttribute((FManagedArrayCollection *)this,*pFVar11,FVar3);
      FVar3 = FacesGroup;
      if (bVar6) {
        pFVar11 = ::FName::FName(&FStack_60,"MaterialID");
        pTVar12 = FManagedArrayCollection::ModifyAttribute<int>
                            ((FManagedArrayCollection *)this,*pFVar11,FVar3);
        FVar3 = MaterialGroup;
        pTStack_90 = pTVar12;
        pFVar11 = ::FName::FName(&FStack_58,"Sections");
        pTVar13 = FManagedArrayCollection::ModifyAttribute<FGeometryCollectionSection>
                            ((FManagedArrayCollection *)this,*pFVar11,FVar3);
        FVar3 = FacesGroup;
        pFVar11 = ::FName::FName(aFStack_50,"MaterialIndex");
        pTStack_80 = FManagedArrayCollection::ModifyAttribute<int>
                               ((FManagedArrayCollection *)this,*pFVar11,FVar3);
        TStack_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        TStack_c0.ArrayNum = 0;
        TStack_c0.ArrayMax = 0;
        iVar7 = FManagedArrayCollection::NumElements((FManagedArrayCollection *)this,MaterialGroup);
        GeometryCollectionAlgo::ContiguousArray(&TStack_c0,iVar7);
        (**(code **)(this->_padding_ + 0x28))(this,&MaterialGroup,&TStack_c0,0x100);
        uVar4 = TStack_c0._8_8_;
        iVar7 = TStack_c0.ArrayMax;
        TStack_c0._8_8_ = (ulonglong)(uint)TStack_c0.ArrayMax << 0x20;
        if (((longlong)uVar4 < 0) && (iVar7 != 0)) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,&TStack_c0.AllocatorInstance,0,&TStack_c0.ArrayMax);
        }
        uStackX_18 = 0;
        iVar7 = FManagedArrayCollection::NumElements((FManagedArrayCollection *)this,FacesGroup);
        lVar19 = (longlong)iVar7;
        lStack_88 = lVar19;
        if (0 < iVar7) {
          lStack_98 = 0;
          do {
            lVar2 = lStack_98;
            uVar8 = 0;
            if ((int)uStackX_18 < *(int *)&pTVar12->field_0x18) {
              uVar8 = ~uStackX_18 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            uVar8 = *(uint *)(*(longlong *)&pTVar12->field_0x10 + lVar2 * 4);
            aiStack_a8[2] = uVar8;
            iVar7 = FManagedArrayCollection::NumElements
                              ((FManagedArrayCollection *)this,MaterialGroup);
            uVar17 = uVar8;
            while (iVar7 < (int)(uVar8 + 1)) {
              uVar9 = FManagedArrayCollection::AddElements
                                ((FManagedArrayCollection *)this,1,MaterialGroup);
              uVar21 = ~uVar9 >> 0x1f;
              uVar17 = 0;
              if ((int)uVar9 < *(int *)&pTVar13->field_0x18) {
                uVar17 = uVar21;
              }
              if ((uVar17 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              lVar19 = (longlong)(int)uVar9 * 0x20;
              *(uint *)(lVar19 + *(longlong *)&pTVar13->field_0x10) = uVar9;
              uVar17 = 0;
              if ((int)uVar9 < *(int *)&pTVar13->field_0x18) {
                uVar17 = uVar21;
              }
              if ((uVar17 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              *(undefined4 *)(lVar19 + 4 + *(longlong *)&pTVar13->field_0x10) = 0xffffffff;
              uVar17 = 0;
              if ((int)uVar9 < *(int *)&pTVar13->field_0x18) {
                uVar17 = uVar21;
              }
              if ((uVar17 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              *(undefined4 *)(lVar19 + 8 + *(longlong *)&pTVar13->field_0x10) = 0;
              uVar17 = 0;
              if ((int)uVar9 < *(int *)&pTVar13->field_0x18) {
                uVar17 = uVar21;
              }
              if ((uVar17 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              *(undefined4 *)(lVar19 + 0xc + *(longlong *)&pTVar13->field_0x10) = 0;
              uVar17 = 0;
              if ((int)uVar9 < *(int *)&pTVar13->field_0x18) {
                uVar17 = uVar21;
              }
              if ((uVar17 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              *(undefined4 *)(lVar19 + 0x10 + *(longlong *)&pTVar13->field_0x10) = 0;
              iVar7 = FManagedArrayCollection::NumElements
                                ((FManagedArrayCollection *)this,MaterialGroup);
              uVar17 = aiStack_a8[2];
              lVar19 = lStack_88;
              lVar2 = lStack_98;
            }
            uVar8 = 0;
            if ((int)uVar17 < *(int *)&pTVar13->field_0x18) {
              uVar8 = ~uVar17 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            uStackX_18 = uStackX_18 + 1;
            lStack_98 = lVar2 + 1;
            piVar24 = (int *)((longlong)(int)uVar17 * 0x20 + 8 + *(longlong *)&pTVar13->field_0x10);
            *piVar24 = *piVar24 + 1;
            pTVar12 = pTStack_90;
          } while (lStack_98 < lVar19);
        }
        uVar20 = 0;
        auStack_c8[0] = 0;
        iVar7 = FManagedArrayCollection::NumElements((FManagedArrayCollection *)this,MaterialGroup);
        if ((int)auStack_c8[0] < iVar7) {
          do {
            uVar8 = 0;
            if (auStack_c8[0] == 0) {
              if ((*(int *)&pTVar13->field_0x18 < 1) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              *(undefined4 *)(*(longlong *)&pTVar13->field_0x10 + 4) = 0;
            }
            else {
              uVar17 = auStack_c8[0] - 1;
              uVar9 = uVar8;
              if ((int)uVar17 < *(int *)&pTVar13->field_0x18) {
                uVar9 = ~uVar17 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              uVar9 = auStack_c8[0] - 1;
              lVar19 = *(longlong *)&pTVar13->field_0x10;
              uVar21 = uVar8;
              if ((int)uVar9 < *(int *)&pTVar13->field_0x18) {
                uVar21 = ~uVar9 >> 0x1f;
              }
              if ((uVar21 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              uVar21 = auStack_c8[0];
              iVar7 = *(int *)((longlong)(int)uVar9 * 0x20 + 8 + *(longlong *)&pTVar13->field_0x10);
              iVar10 = *(int *)((longlong)(int)uVar17 * 0x20 + lVar19 + 4);
              uVar17 = 0;
              if ((int)auStack_c8[0] < *(int *)&pTVar13->field_0x18) {
                uVar17 = ~auStack_c8[0] >> 0x1f;
              }
              if ((uVar17 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              *(int *)((longlong)(int)uVar21 * 0x20 + 4 + *(longlong *)&pTVar13->field_0x10) =
                   iVar7 * 3 + iVar10;
            }
            iVar7 = FManagedArrayCollection::NumElements
                              ((FManagedArrayCollection *)this,VerticesGroup);
            lVar19 = (longlong)(int)auStack_c8[0];
            uVar17 = 0;
            if ((int)auStack_c8[0] < *(int *)&pTVar13->field_0x18) {
              uVar17 = ~auStack_c8[0] >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            *(int *)(lVar19 * 0x20 + 0x10 + *(longlong *)&pTVar13->field_0x10) = iVar7 + -1;
            lVar19 = (longlong)(int)auStack_c8[0];
            if ((int)auStack_c8[0] < *(int *)&pTVar13->field_0x18) {
              uVar8 = ~auStack_c8[0] >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            if (*(int *)(lVar19 * 0x20 + 8 + *(longlong *)&pTVar13->field_0x10) == 0) {
              if (((TStack_c0.AllocatorInstance.Data <= (FScriptContainerElement *)auStack_c8) &&
                  ((FScriptContainerElement *)auStack_c8 <
                   TStack_c0.AllocatorInstance.Data + (longlong)TStack_c0.ArrayMax * 4)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar6)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              iVar7 = TStack_c0.ArrayNum;
              if (TStack_c0.ArrayNum == TStack_c0.ArrayMax) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&TStack_c0.AllocatorInstance,&TStack_c0.ArrayMax);
              }
              TStack_c0.ArrayNum = iVar7 + 1;
              *(uint *)(TStack_c0.AllocatorInstance.Data + (longlong)iVar7 * 4) = auStack_c8[0];
            }
            auStack_c8[0] = auStack_c8[0] + 1;
            iVar7 = FManagedArrayCollection::NumElements
                              ((FManagedArrayCollection *)this,MaterialGroup);
          } while ((int)auStack_c8[0] < iVar7);
        }
        iVar7 = FManagedArrayCollection::NumElements((FManagedArrayCollection *)this,MaterialGroup);
        iVar10 = FManagedArrayCollection::NumElements((FManagedArrayCollection *)this,FacesGroup);
        piVar24 = aiStack_a8 + 1;
        FStack_b0.Data = (FScriptContainerElement *)0x0;
        piVar15 = aiStack_a8;
        aiStack_a8[0] = 0;
        aiStack_a8[1] = 0;
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar7,&FStack_b0,piVar15,piVar24);
        uVar18 = uVar20;
        uVar22 = uVar20;
        uVar23 = uVar20;
        if (0 < iVar7) {
          do {
            piVar14 = (int *)(longlong)aiStack_a8[0];
            uVar17 = (uint)uVar22;
            uVar8 = 0;
            if ((int)uVar17 < aiStack_a8[0]) {
              uVar8 = ~uVar17 >> 0x1f;
            }
            if (uVar8 == 0) {
              piVar15 = (int *)(longlong)(int)uVar17;
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              piVar24 = piVar14;
              if (bVar6) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
            }
            *(int *)(FStack_b0.Data + uVar23 * 4) = (int)uVar18;
            piVar14 = (int *)(longlong)*(int *)&pTVar13->field_0x18;
            uVar8 = 0;
            if ((int)uVar17 < *(int *)&pTVar13->field_0x18) {
              uVar8 = ~uVar17 >> 0x1f;
            }
            if (uVar8 == 0) {
              piVar15 = (int *)(longlong)(int)uVar17;
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              piVar24 = piVar14;
              if (bVar6) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
            }
            uVar23 = uVar23 + 1;
            lVar19 = uVar20 + 8;
            uVar20 = uVar20 + 0x20;
            uVar18 = (ulonglong)
                     (uint)((int)uVar18 + *(int *)(lVar19 + *(longlong *)&pTVar13->field_0x10));
            uVar22 = (ulonglong)(uVar17 + 1);
          } while ((longlong)uVar23 < (longlong)iVar7);
        }
        pTVar5 = pTStack_80;
        pTVar12 = pTStack_90;
        uVar18 = 0;
        uVar20 = uVar18;
        if (0 < (longlong)iVar10) {
          do {
            iVar7 = *(int *)&pTVar12->field_0x18;
            piVar14 = (int *)(longlong)iVar7;
            uVar17 = (uint)uVar18;
            uVar8 = 0;
            if ((int)uVar17 < iVar7) {
              uVar8 = ~uVar17 >> 0x1f;
            }
            if (uVar8 == 0) {
              piVar15 = (int *)(longlong)(int)uVar17;
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              piVar24 = piVar14;
              if (bVar6) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
            }
            piVar14 = (int *)(longlong)aiStack_a8[0];
            uVar8 = *(uint *)(*(longlong *)&pTVar12->field_0x10 + uVar20 * 4);
            piVar16 = (int *)(longlong)(int)uVar8;
            uVar9 = 0;
            if ((int)uVar8 < aiStack_a8[0]) {
              uVar9 = ~uVar8 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (piVar15 = piVar16,
               bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
               piVar24 = piVar14, bVar6)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            uVar8 = *(uint *)(FStack_b0.Data + (longlong)piVar16 * 4);
            *(uint *)(FStack_b0.Data + (longlong)piVar16 * 4) = uVar8 + 1;
            iVar7 = *(int *)&pTVar5->field_0x18;
            piVar14 = (int *)(longlong)iVar7;
            uVar9 = 0;
            if ((int)uVar8 < iVar7) {
              uVar9 = ~uVar8 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (piVar15 = (int *)(longlong)(int)uVar8,
               bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
               piVar24 = piVar14, bVar6)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            uVar20 = uVar20 + 1;
            *(uint *)(*(longlong *)&pTVar5->field_0x10 + (longlong)(int)uVar8 * 4) = uVar17;
            uVar18 = (ulonglong)(uVar17 + 1);
          } while ((longlong)uVar20 < (longlong)iVar10);
        }
        if (TStack_c0.ArrayNum != 0) {
          (**(code **)(this->_padding_ + 0x28))
                    (this,&MaterialGroup,&TStack_c0,0x100,piVar15,piVar24);
        }
        if (FStack_b0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_b0.Data);
        }
        if (TStack_c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(TStack_c0.AllocatorInstance.Data);
        }
      }
    }
  }
  return;
}

// ReindexMaterials @ 143ff4a60

void __cdecl FGeometryCollection::ReindexMaterials(FManagedArrayCollection *param_1)

{
  code *pcVar1;
  longlong lVar2;
  FName FVar3;
  undefined8 uVar4;
  TManagedArray<int> *pTVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  FName *pFVar11;
  TManagedArray<int> *pTVar12;
  TManagedArray<FGeometryCollectionSection> *pTVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  uint local_res18;
  int *piVar24;
  uint local_c8 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_c0;
  ForAnyElementType local_b0;
  int local_a8 [4];
  longlong local_98;
  TManagedArray<int> *local_90;
  longlong local_88;
  TManagedArray<int> *local_80;
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50 [2];
  
  FVar3 = FacesGroup;
  pFVar11 = ::FName::FName(&local_78,"MaterialID");
  bVar6 = FManagedArrayCollection::HasAttribute(param_1,*pFVar11,FVar3);
  FVar3 = MaterialGroup;
  if (bVar6) {
    pFVar11 = ::FName::FName(&local_70,"Sections");
    bVar6 = FManagedArrayCollection::HasAttribute(param_1,*pFVar11,FVar3);
    FVar3 = FacesGroup;
    if (bVar6) {
      pFVar11 = ::FName::FName(&local_68,"MaterialIndex");
      bVar6 = FManagedArrayCollection::HasAttribute(param_1,*pFVar11,FVar3);
      FVar3 = FacesGroup;
      if (bVar6) {
        pFVar11 = ::FName::FName(&local_60,"MaterialID");
        pTVar12 = FManagedArrayCollection::ModifyAttribute<int>(param_1,*pFVar11,FVar3);
        FVar3 = MaterialGroup;
        local_90 = pTVar12;
        pFVar11 = ::FName::FName(&local_58,"Sections");
        pTVar13 = FManagedArrayCollection::ModifyAttribute<FGeometryCollectionSection>
                            (param_1,*pFVar11,FVar3);
        FVar3 = FacesGroup;
        pFVar11 = ::FName::FName(local_50,"MaterialIndex");
        local_80 = FManagedArrayCollection::ModifyAttribute<int>(param_1,*pFVar11,FVar3);
        local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_c0.ArrayNum = 0;
        local_c0.ArrayMax = 0;
        iVar7 = FManagedArrayCollection::NumElements(param_1,MaterialGroup);
        GeometryCollectionAlgo::ContiguousArray(&local_c0,iVar7);
        (**(code **)(param_1->_padding_ + 0x28))(param_1,&MaterialGroup,&local_c0,0x100);
        uVar4 = local_c0._8_8_;
        iVar7 = local_c0.ArrayMax;
        local_c0._8_8_ = (ulonglong)(uint)local_c0.ArrayMax << 0x20;
        if (((longlong)uVar4 < 0) && (iVar7 != 0)) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,&local_c0.AllocatorInstance,0,&local_c0.ArrayMax);
        }
        local_res18 = 0;
        iVar7 = FManagedArrayCollection::NumElements(param_1,FacesGroup);
        lVar19 = (longlong)iVar7;
        local_88 = lVar19;
        if (0 < iVar7) {
          local_98 = 0;
          do {
            lVar2 = local_98;
            uVar8 = 0;
            if ((int)local_res18 < *(int *)&pTVar12->field_0x18) {
              uVar8 = ~local_res18 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            uVar8 = *(uint *)(*(longlong *)&pTVar12->field_0x10 + lVar2 * 4);
            local_a8[2] = uVar8;
            iVar7 = FManagedArrayCollection::NumElements(param_1,MaterialGroup);
            uVar17 = uVar8;
            while (iVar7 < (int)(uVar8 + 1)) {
              uVar9 = FManagedArrayCollection::AddElements(param_1,1,MaterialGroup);
              uVar21 = ~uVar9 >> 0x1f;
              uVar17 = 0;
              if ((int)uVar9 < *(int *)&pTVar13->field_0x18) {
                uVar17 = uVar21;
              }
              if ((uVar17 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              lVar19 = (longlong)(int)uVar9 * 0x20;
              *(uint *)(lVar19 + *(longlong *)&pTVar13->field_0x10) = uVar9;
              uVar17 = 0;
              if ((int)uVar9 < *(int *)&pTVar13->field_0x18) {
                uVar17 = uVar21;
              }
              if ((uVar17 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              *(undefined4 *)(lVar19 + 4 + *(longlong *)&pTVar13->field_0x10) = 0xffffffff;
              uVar17 = 0;
              if ((int)uVar9 < *(int *)&pTVar13->field_0x18) {
                uVar17 = uVar21;
              }
              if ((uVar17 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              *(undefined4 *)(lVar19 + 8 + *(longlong *)&pTVar13->field_0x10) = 0;
              uVar17 = 0;
              if ((int)uVar9 < *(int *)&pTVar13->field_0x18) {
                uVar17 = uVar21;
              }
              if ((uVar17 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              *(undefined4 *)(lVar19 + 0xc + *(longlong *)&pTVar13->field_0x10) = 0;
              uVar17 = 0;
              if ((int)uVar9 < *(int *)&pTVar13->field_0x18) {
                uVar17 = uVar21;
              }
              if ((uVar17 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              *(undefined4 *)(lVar19 + 0x10 + *(longlong *)&pTVar13->field_0x10) = 0;
              iVar7 = FManagedArrayCollection::NumElements(param_1,MaterialGroup);
              uVar17 = local_a8[2];
              lVar19 = local_88;
              lVar2 = local_98;
            }
            uVar8 = 0;
            if ((int)uVar17 < *(int *)&pTVar13->field_0x18) {
              uVar8 = ~uVar17 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            local_res18 = local_res18 + 1;
            local_98 = lVar2 + 1;
            piVar24 = (int *)((longlong)(int)uVar17 * 0x20 + 8 + *(longlong *)&pTVar13->field_0x10);
            *piVar24 = *piVar24 + 1;
            pTVar12 = local_90;
          } while (local_98 < lVar19);
        }
        uVar20 = 0;
        local_c8[0] = 0;
        iVar7 = FManagedArrayCollection::NumElements(param_1,MaterialGroup);
        if ((int)local_c8[0] < iVar7) {
          do {
            uVar8 = 0;
            if (local_c8[0] == 0) {
              if ((*(int *)&pTVar13->field_0x18 < 1) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              *(undefined4 *)(*(longlong *)&pTVar13->field_0x10 + 4) = 0;
            }
            else {
              uVar17 = local_c8[0] - 1;
              uVar9 = uVar8;
              if ((int)uVar17 < *(int *)&pTVar13->field_0x18) {
                uVar9 = ~uVar17 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              uVar9 = local_c8[0] - 1;
              lVar19 = *(longlong *)&pTVar13->field_0x10;
              uVar21 = uVar8;
              if ((int)uVar9 < *(int *)&pTVar13->field_0x18) {
                uVar21 = ~uVar9 >> 0x1f;
              }
              if ((uVar21 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              uVar21 = local_c8[0];
              iVar7 = *(int *)((longlong)(int)uVar9 * 0x20 + 8 + *(longlong *)&pTVar13->field_0x10);
              iVar10 = *(int *)((longlong)(int)uVar17 * 0x20 + lVar19 + 4);
              uVar17 = 0;
              if ((int)local_c8[0] < *(int *)&pTVar13->field_0x18) {
                uVar17 = ~local_c8[0] >> 0x1f;
              }
              if ((uVar17 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              *(int *)((longlong)(int)uVar21 * 0x20 + 4 + *(longlong *)&pTVar13->field_0x10) =
                   iVar7 * 3 + iVar10;
            }
            iVar7 = FManagedArrayCollection::NumElements(param_1,VerticesGroup);
            lVar19 = (longlong)(int)local_c8[0];
            uVar17 = 0;
            if ((int)local_c8[0] < *(int *)&pTVar13->field_0x18) {
              uVar17 = ~local_c8[0] >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            *(int *)(lVar19 * 0x20 + 0x10 + *(longlong *)&pTVar13->field_0x10) = iVar7 + -1;
            lVar19 = (longlong)(int)local_c8[0];
            if ((int)local_c8[0] < *(int *)&pTVar13->field_0x18) {
              uVar8 = ~local_c8[0] >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            if (*(int *)(lVar19 * 0x20 + 8 + *(longlong *)&pTVar13->field_0x10) == 0) {
              if (((local_c0.AllocatorInstance.Data <= (FScriptContainerElement *)local_c8) &&
                  ((FScriptContainerElement *)local_c8 <
                   local_c0.AllocatorInstance.Data + (longlong)local_c0.ArrayMax * 4)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar6)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              iVar7 = local_c0.ArrayNum;
              if (local_c0.ArrayNum == local_c0.ArrayMax) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&local_c0.AllocatorInstance,&local_c0.ArrayMax);
              }
              local_c0.ArrayNum = iVar7 + 1;
              *(uint *)(local_c0.AllocatorInstance.Data + (longlong)iVar7 * 4) = local_c8[0];
            }
            local_c8[0] = local_c8[0] + 1;
            iVar7 = FManagedArrayCollection::NumElements(param_1,MaterialGroup);
          } while ((int)local_c8[0] < iVar7);
        }
        iVar7 = FManagedArrayCollection::NumElements(param_1,MaterialGroup);
        iVar10 = FManagedArrayCollection::NumElements(param_1,FacesGroup);
        piVar24 = local_a8 + 1;
        local_b0.Data = (FScriptContainerElement *)0x0;
        piVar15 = local_a8;
        local_a8[0] = 0;
        local_a8[1] = 0;
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar7,&local_b0,piVar15,piVar24);
        uVar18 = uVar20;
        uVar22 = uVar20;
        uVar23 = uVar20;
        if (0 < iVar7) {
          do {
            piVar14 = (int *)(longlong)local_a8[0];
            uVar17 = (uint)uVar22;
            uVar8 = 0;
            if ((int)uVar17 < local_a8[0]) {
              uVar8 = ~uVar17 >> 0x1f;
            }
            if (uVar8 == 0) {
              piVar15 = (int *)(longlong)(int)uVar17;
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              piVar24 = piVar14;
              if (bVar6) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
            }
            *(int *)(local_b0.Data + uVar23 * 4) = (int)uVar18;
            piVar14 = (int *)(longlong)*(int *)&pTVar13->field_0x18;
            uVar8 = 0;
            if ((int)uVar17 < *(int *)&pTVar13->field_0x18) {
              uVar8 = ~uVar17 >> 0x1f;
            }
            if (uVar8 == 0) {
              piVar15 = (int *)(longlong)(int)uVar17;
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              piVar24 = piVar14;
              if (bVar6) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
            }
            uVar23 = uVar23 + 1;
            lVar19 = uVar20 + 8;
            uVar20 = uVar20 + 0x20;
            uVar18 = (ulonglong)
                     (uint)((int)uVar18 + *(int *)(lVar19 + *(longlong *)&pTVar13->field_0x10));
            uVar22 = (ulonglong)(uVar17 + 1);
          } while ((longlong)uVar23 < (longlong)iVar7);
        }
        pTVar5 = local_80;
        pTVar12 = local_90;
        uVar18 = 0;
        uVar20 = uVar18;
        if (0 < (longlong)iVar10) {
          do {
            iVar7 = *(int *)&pTVar12->field_0x18;
            piVar14 = (int *)(longlong)iVar7;
            uVar17 = (uint)uVar18;
            uVar8 = 0;
            if ((int)uVar17 < iVar7) {
              uVar8 = ~uVar17 >> 0x1f;
            }
            if (uVar8 == 0) {
              piVar15 = (int *)(longlong)(int)uVar17;
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              piVar24 = piVar14;
              if (bVar6) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
            }
            piVar14 = (int *)(longlong)local_a8[0];
            uVar8 = *(uint *)(*(longlong *)&pTVar12->field_0x10 + uVar20 * 4);
            piVar16 = (int *)(longlong)(int)uVar8;
            uVar9 = 0;
            if ((int)uVar8 < local_a8[0]) {
              uVar9 = ~uVar8 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (piVar15 = piVar16,
               bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
               piVar24 = piVar14, bVar6)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            uVar8 = *(uint *)(local_b0.Data + (longlong)piVar16 * 4);
            *(uint *)(local_b0.Data + (longlong)piVar16 * 4) = uVar8 + 1;
            iVar7 = *(int *)&pTVar5->field_0x18;
            piVar14 = (int *)(longlong)iVar7;
            uVar9 = 0;
            if ((int)uVar8 < iVar7) {
              uVar9 = ~uVar8 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (piVar15 = (int *)(longlong)(int)uVar8,
               bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
               piVar24 = piVar14, bVar6)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            uVar20 = uVar20 + 1;
            *(uint *)(*(longlong *)&pTVar5->field_0x10 + (longlong)(int)uVar8 * 4) = uVar17;
            uVar18 = (ulonglong)(uVar17 + 1);
          } while ((longlong)uVar20 < (longlong)iVar10);
        }
        if (local_c0.ArrayNum != 0) {
          (**(code **)(param_1->_padding_ + 0x28))
                    (param_1,&MaterialGroup,&local_c0,0x100,piVar15,piVar24);
        }
        if (local_b0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data);
        }
        if (local_c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c0.AllocatorInstance.Data);
        }
      }
    }
  }
  return;
}

// RemoveElements @ 143ff66a0

void __thiscall
FGeometryCollection::RemoveElements
          (FGeometryCollection *this,FName *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2
          ,FProcessingParameters param_3)

{
  TManagedArray<int> *pTVar1;
  FScriptContainerElement *pFVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  uint local_40;
  int local_3c;
  TArray<int,TSizedDefaultAllocator<32>_> local_38;
  
  if (param_2->ArrayNum != 0) {
    local_3c = FManagedArrayCollection::NumElements((FManagedArrayCollection *)this,*param_1);
    GeometryCollectionAlgo::ValidateSortedList(param_2,&local_3c);
    FVar3 = *param_1;
    if (FVar3 == FTransformCollection::TransformGroup) {
      pTVar1 = &this->TransformIndex;
      local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.ArrayNum = 0;
      local_38.ArrayMax = 0;
      local_40 = 0;
      iVar6 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
      if ((int)local_40 < iVar6) {
        do {
          lVar9 = (longlong)(int)local_40;
          uVar7 = 0;
          if ((int)local_40 < *(int *)&(this->TransformIndex).field_0x18) {
            uVar7 = ~local_40 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar8 = (param_2->AllocatorInstance).Data;
          pFVar2 = pFVar8 + (longlong)param_2->ArrayNum * 4;
          if (pFVar8 != pFVar2) {
            do {
              if (*(int *)pFVar8 ==
                  *(int *)(*(longlong *)&(this->TransformIndex).field_0x10 + lVar9 * 4)) {
                if (((local_38.AllocatorInstance.Data <= (FScriptContainerElement *)&local_40) &&
                    ((FScriptContainerElement *)&local_40 <
                     local_38.AllocatorInstance.Data + (longlong)local_38.ArrayMax * 4)) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar5)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                iVar6 = local_38.ArrayNum;
                if (local_38.ArrayNum == local_38.ArrayMax) {
                  iVar6 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x404,&local_38.AllocatorInstance,&local_38.ArrayMax);
                }
                local_38.ArrayNum = iVar6 + 1;
                *(uint *)(local_38.AllocatorInstance.Data + (longlong)iVar6 * 4) = local_40;
                break;
              }
              pFVar8 = pFVar8 + 4;
            } while (pFVar8 != pFVar2);
          }
          local_40 = local_40 + 1;
          iVar6 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
        } while ((int)local_40 < iVar6);
      }
      RemoveGeometryElements(this,&local_38);
      FGeometryCollectionConvexUtility::RemoveConvexHulls((FManagedArrayCollection *)this,param_2);
      FTransformCollection::RemoveElements
                ((FTransformCollection *)this,param_1,param_2,(FProcessingParameters)0x101);
      if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
        return;
      }
    }
    else {
      if (FVar3 == GeometryGroup) {
        RemoveGeometryElements(this,param_2);
        return;
      }
      if (FVar3 == FacesGroup) {
        BuildFaceToGeometryMapping(this,false);
        FTransformCollection::RemoveElements
                  ((FTransformCollection *)this,param_1,param_2,(FProcessingParameters)0x101);
        UpdateFaceGroupElements(this);
        return;
      }
      if (FVar3 == VerticesGroup) {
        BuildVertexToGeometryMapping(this,false);
        FTransformCollection::RemoveElements
                  ((FTransformCollection *)this,param_1,param_2,(FProcessingParameters)0x101);
        UpdateVerticesGroupElements(this);
        return;
      }
      FTransformCollection::RemoveElements
                ((FTransformCollection *)this,param_1,param_2,(FProcessingParameters)0x101);
    }
  }
  return;
}

// RemoveGeometryElements @ 143ff6980

void __thiscall
FGeometryCollection::RemoveGeometryElements
          (FGeometryCollection *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  TManagedArray<UE::Math::TIntVector3<int>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  FIdentityFunctor local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_a8;
  uint local_a4;
  undefined2 local_a0;
  undefined2 local_9e;
  undefined2 local_9c;
  TArray<int,TSizedDefaultAllocator<32>_> local_98;
  TArray<int,TSizedDefaultAllocator<32>_> local_88;
  TArray<int,TSizedDefaultAllocator<32>_> local_78;
  TArray<bool,TSizedDefaultAllocator<32>_> local_68;
  int local_58;
  int local_54;
  int local_50 [2];
  longlong local_48;
  longlong local_40;
  
  if (param_1->ArrayNum != 0) {
    local_58 = FManagedArrayCollection::NumElements((FManagedArrayCollection *)this,GeometryGroup);
    GeometryCollectionAlgo::ValidateSortedList(param_1,&local_58);
    iVar5 = param_1->ArrayNum;
    uVar13 = 0;
    local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.ArrayNum = 0;
    local_78.ArrayMax = 0;
    uVar14 = uVar13;
    if (0 < iVar5) {
      do {
        uVar8 = (uint)uVar13;
        uVar15 = 0;
        if ((int)uVar8 < iVar5) {
          uVar15 = ~uVar8 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar15 = *(uint *)((param_1->AllocatorInstance).Data + uVar14);
        if ((-1 < (int)uVar15) &&
           (iVar5 = (**(code **)(*(longlong *)&this->TransformIndex + 0x60))(), (int)uVar15 < iVar5)
           ) {
          uVar6 = 0;
          if ((int)uVar15 < *(int *)&(this->TransformIndex).field_0x18) {
            uVar6 = ~uVar15 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (*(int *)((longlong)(int)uVar15 * 4 + *(longlong *)&(this->TransformIndex).field_0x10)
              != -1) {
            uVar6 = 0;
            if ((int)uVar15 < *(int *)&(this->TransformIndex).field_0x18) {
              uVar6 = ~uVar15 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar9 = (FScriptContainerElement *)
                     (*(longlong *)&(this->TransformIndex).field_0x10 + (longlong)(int)uVar15 * 4);
            if (((local_78.AllocatorInstance.Data <= pFVar9) &&
                (pFVar9 < local_78.AllocatorInstance.Data + (longlong)local_78.ArrayMax * 4)) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar5 = local_78.ArrayNum;
            if (local_78.ArrayNum == local_78.ArrayMax) {
              iVar5 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&local_78.AllocatorInstance,&local_78.ArrayMax);
            }
            local_78.ArrayNum = iVar5 + 1;
            *(undefined4 *)(local_78.AllocatorInstance.Data + (longlong)iVar5 * 4) =
                 *(undefined4 *)pFVar9;
          }
        }
        iVar5 = param_1->ArrayNum;
        uVar13 = (ulonglong)(uVar8 + 1);
        uVar14 = uVar14 + 4;
      } while ((int)(uVar8 + 1) < iVar5);
    }
    local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.ArrayNum = 0;
    local_68.ArrayMax = 0;
    local_54 = FManagedArrayCollection::NumElements
                         ((FManagedArrayCollection *)this,FTransformCollection::TransformGroup);
    GeometryCollectionAlgo::BuildLookupMask(&local_78,&local_54,&local_68);
    local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.ArrayNum = 0;
    local_98.ArrayMax = 0;
    local_a8 = 0;
    iVar5 = (**(code **)(*(longlong *)&this->BoneMap + 0x60))(&this->BoneMap);
    uVar15 = 0;
    if ((int)local_a8 < iVar5) {
      do {
        lVar10 = (longlong)(int)local_a8;
        uVar8 = 0;
        if ((int)local_a8 < *(int *)&(this->BoneMap).field_0x18) {
          uVar8 = ~local_a8 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (*(int *)(*(longlong *)&(this->BoneMap).field_0x10 + lVar10 * 4) !=
            (int)FManagedArrayCollection::Invalid) {
          lVar10 = (longlong)(int)local_a8;
          iVar5 = local_68.ArrayNum;
          uVar8 = uVar15;
          if ((int)local_a8 < *(int *)&(this->BoneMap).field_0x18) {
            uVar8 = ~local_a8 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (*(int *)(*(longlong *)&(this->BoneMap).field_0x10 + lVar10 * 4) < iVar5) {
            lVar10 = (longlong)(int)local_a8;
            uVar8 = uVar15;
            if ((int)local_a8 < *(int *)&(this->BoneMap).field_0x18) {
              uVar8 = ~local_a8 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar8 = *(uint *)(*(longlong *)&(this->BoneMap).field_0x10 + lVar10 * 4);
            uVar6 = 0;
            if ((int)uVar8 < local_68.ArrayNum) {
              uVar6 = ~uVar8 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (local_68.AllocatorInstance.Data[(int)uVar8] != (FScriptContainerElement)0x0) {
              if (((local_98.AllocatorInstance.Data <= (FScriptContainerElement *)&local_a8) &&
                  ((FScriptContainerElement *)&local_a8 <
                   local_98.AllocatorInstance.Data + (longlong)local_98.ArrayMax * 4)) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              iVar5 = local_98.ArrayNum;
              if (local_98.ArrayNum == local_98.ArrayMax) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&local_98.AllocatorInstance,&local_98.ArrayMax);
              }
              local_98.ArrayNum = iVar5 + 1;
              *(uint *)(local_98.AllocatorInstance.Data + (longlong)iVar5 * 4) = local_a8;
            }
          }
        }
        local_a8 = local_a8 + 1;
        iVar5 = (**(code **)(*(longlong *)&this->BoneMap + 0x60))(&this->BoneMap);
      } while ((int)local_a8 < iVar5);
    }
    local_res10 = SUB81(param_1,0);
    AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
              ((int *)local_98.AllocatorInstance.Data,local_98.ArrayNum,local_res10,
               (TLess<void> *)local_res18);
    local_50[0] = FManagedArrayCollection::NumElements
                            ((FManagedArrayCollection *)this,VerticesGroup);
    GeometryCollectionAlgo::BuildLookupMask(&local_98,local_50,&local_68);
    pTVar1 = &this->Indices;
    local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.ArrayNum = 0;
    local_88.ArrayMax = 0;
    local_a4 = 0;
    iVar5 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    if ((int)local_a4 < iVar5) {
      do {
        uVar8 = local_a4;
        uVar6 = 0;
        if ((int)local_a4 < *(int *)&(this->Indices).field_0x18) {
          uVar6 = ~local_a4 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar10 = *(longlong *)&(this->Indices).field_0x10 + (longlong)(int)uVar8 * 0xc;
        lVar11 = 0;
        do {
          if ((local_68.ArrayNum <= *(int *)(lVar10 + lVar11 * 4)) &&
             (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<3315325426611520202>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollection.cpp"
                                 ,0x2ca,"Face[i] < Mask.Num()"), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar8 = *(uint *)(lVar10 + lVar11 * 4);
          uVar6 = uVar15;
          if ((int)uVar8 < local_68.ArrayNum) {
            uVar6 = ~uVar8 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (local_68.AllocatorInstance.Data[(int)uVar8] != (FScriptContainerElement)0x0) {
            if (((local_88.AllocatorInstance.Data <= (FScriptContainerElement *)&local_a4) &&
                ((FScriptContainerElement *)&local_a4 <
                 local_88.AllocatorInstance.Data + (longlong)local_88.ArrayMax * 4)) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar5 = local_88.ArrayNum;
            if (local_88.ArrayNum == local_88.ArrayMax) {
              iVar5 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&local_88.AllocatorInstance,&local_88.ArrayMax);
            }
            local_88.ArrayNum = iVar5 + 1;
            *(uint *)(local_88.AllocatorInstance.Data + (longlong)iVar5 * 4) = local_a4;
            break;
          }
          lVar11 = lVar11 + 1;
        } while (lVar11 < 3);
        local_a4 = local_a4 + 1;
        iVar5 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
      } while ((int)local_a4 < iVar5);
    }
    AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
              ((int *)local_88.AllocatorInstance.Data,local_88.ArrayNum,local_res10,
               (TLess<void> *)local_res20);
    local_a0 = 0x101;
    FTransformCollection::RemoveElements
              ((FTransformCollection *)this,&GeometryGroup,param_1,(FProcessingParameters)0x101);
    local_9e = 0x101;
    FTransformCollection::RemoveElements
              ((FTransformCollection *)this,&VerticesGroup,&local_98,(FProcessingParameters)0x101);
    local_9c = 0x101;
    FTransformCollection::RemoveElements
              ((FTransformCollection *)this,&FacesGroup,&local_88,(FProcessingParameters)0x101);
    uVar15 = param_1->ArrayNum - 1;
    if (-1 < (int)uVar15) {
      local_48 = (longlong)(int)uVar15;
      lVar10 = local_48 * 4;
      do {
        uVar8 = 0;
        if ((int)uVar15 < param_1->ArrayNum) {
          uVar8 = ~uVar15 >> 0x1f;
        }
        local_40 = lVar10;
        if ((uVar8 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar5 = *(int *)((param_1->AllocatorInstance).Data + lVar10);
        uVar8 = 0;
        iVar7 = (**(code **)(*(longlong *)&this->TransformToGeometryIndex + 0x60))
                          (&this->TransformToGeometryIndex);
        if (0 < iVar7) {
          lVar10 = 0;
          do {
            uVar12 = ~uVar8 >> 0x1f;
            uVar6 = 0;
            if ((int)uVar8 < *(int *)&(this->TransformToGeometryIndex).field_0x18) {
              uVar6 = uVar12;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar7 = *(int *)&(this->TransformToGeometryIndex).field_0x18;
            if (iVar5 < *(int *)(lVar10 + *(longlong *)&(this->TransformToGeometryIndex).field_0x10)
               ) {
              uVar6 = 0;
              if ((int)uVar8 < iVar7) {
                uVar6 = uVar12;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              piVar2 = (int *)(lVar10 + *(longlong *)&(this->TransformToGeometryIndex).field_0x10);
              *piVar2 = *piVar2 + -1;
            }
            else {
              uVar6 = 0;
              if ((int)uVar8 < iVar7) {
                uVar6 = uVar12;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              if (*(int *)(lVar10 + *(longlong *)&(this->TransformToGeometryIndex).field_0x10) ==
                  iVar5) {
                uVar6 = 0;
                if ((int)uVar8 < *(int *)&(this->TransformToGeometryIndex).field_0x18) {
                  uVar6 = uVar12;
                }
                if ((uVar6 == 0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                *(undefined4 *)(lVar10 + *(longlong *)&(this->TransformToGeometryIndex).field_0x10)
                     = 0xffffffff;
              }
            }
            uVar8 = uVar8 + 1;
            lVar10 = lVar10 + 4;
            iVar7 = (**(code **)(*(longlong *)&this->TransformToGeometryIndex + 0x60))
                              (&this->TransformToGeometryIndex);
          } while ((int)uVar8 < iVar7);
        }
        local_48 = local_48 + -1;
        lVar10 = local_40 + -4;
        uVar15 = uVar15 - 1;
        local_40 = lVar10;
      } while (-1 < (int)uVar15);
    }
    ReindexMaterials((FManagedArrayCollection *)this);
    if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.AllocatorInstance.Data);
    }
    if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.AllocatorInstance.Data);
    }
    if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.AllocatorInstance.Data);
    }
    if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
  }
  return;
}

// ReorderElements @ 143ff85e0

void __thiscall
FGeometryCollection::ReorderElements
          (FGeometryCollection *this,FName param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  if (param_1 == FTransformCollection::TransformGroup) {
    ReorderTransformElements(this,param_2);
    return;
  }
  if (param_1 == GeometryGroup) {
    ReorderGeometryElements(this,param_2);
    return;
  }
  FManagedArrayCollection::ReorderElements((FManagedArrayCollection *)this,param_1,param_2);
  return;
}

// ReorderGeometryElements @ 143ff8610

void __thiscall
FGeometryCollection::ReorderGeometryElements
          (FGeometryCollection *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong local_res18;
  int local_68;
  int local_64;
  TArray<int,TSizedDefaultAllocator<32>_> local_60;
  TArray<int,TSizedDefaultAllocator<32>_> local_50;
  
  iVar5 = FManagedArrayCollection::NumElements((FManagedArrayCollection *)this,GeometryGroup);
  if ((iVar5 != param_1->ArrayNum) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumGeometry == NewOrder.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollection.cpp"
                         ,0x353,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar9 = 0;
  local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.ArrayNum = 0;
  local_50.ArrayMax = 0;
  uVar6 = FManagedArrayCollection::NumElements((FManagedArrayCollection *)this,VerticesGroup);
  if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
  }
  if (local_50.ArrayMax < (int)uVar6) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar6,&local_50.AllocatorInstance,local_50.ArrayNum,&local_50.ArrayMax);
  }
  local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.ArrayNum = 0;
  local_60.ArrayMax = 0;
  uVar6 = FManagedArrayCollection::NumElements((FManagedArrayCollection *)this,FacesGroup);
  if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
  }
  if (local_60.ArrayMax < (int)uVar6) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar6,&local_60.AllocatorInstance,local_60.ArrayNum,&local_60.ArrayMax);
  }
  if (0 < iVar5) {
    local_res18 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar9 < param_1->ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar6 = *(uint *)((param_1->AllocatorInstance).Data + local_res18 * 4);
      lVar10 = (longlong)(int)uVar6;
      uVar8 = ~uVar6 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar6 < *(int *)&(this->VertexStart).field_0x18) {
        uVar7 = uVar8;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar1 = *(int *)(*(longlong *)&(this->VertexStart).field_0x10 + lVar10 * 4);
      uVar7 = 0;
      if ((int)uVar6 < *(int *)&(this->VertexCount).field_0x18) {
        uVar7 = uVar8;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar2 = *(int *)(*(longlong *)&(this->VertexCount).field_0x10 + lVar10 * 4);
      for (local_68 = iVar1; local_68 < iVar2 + iVar1; local_68 = local_68 + 1) {
        if (((local_50.AllocatorInstance.Data <= (FScriptContainerElement *)&local_68) &&
            ((FScriptContainerElement *)&local_68 <
             local_50.AllocatorInstance.Data + (longlong)local_50.ArrayMax * 4)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (local_50.ArrayNum == local_50.ArrayMax) {
          local_50.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_50.AllocatorInstance,&local_50.ArrayMax);
        }
        *(int *)(local_50.AllocatorInstance.Data + (longlong)local_50.ArrayNum * 4) = local_68;
        local_50.ArrayNum = local_50.ArrayNum + 1;
      }
      uVar7 = 0;
      if ((int)uVar6 < *(int *)&(this->FaceStart).field_0x18) {
        uVar7 = uVar8;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar1 = *(int *)(*(longlong *)&(this->FaceStart).field_0x10 + lVar10 * 4);
      uVar7 = 0;
      if ((int)uVar6 < *(int *)&(this->FaceCount).field_0x18) {
        uVar7 = uVar8;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar2 = *(int *)(*(longlong *)&(this->FaceCount).field_0x10 + lVar10 * 4);
      for (local_64 = iVar1; local_64 < iVar2 + iVar1; local_64 = local_64 + 1) {
        if (((local_60.AllocatorInstance.Data <= (FScriptContainerElement *)&local_64) &&
            ((FScriptContainerElement *)&local_64 <
             local_60.AllocatorInstance.Data + (longlong)local_60.ArrayMax * 4)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (local_60.ArrayNum == local_60.ArrayMax) {
          local_60.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_60.AllocatorInstance,&local_60.ArrayMax);
        }
        *(int *)(local_60.AllocatorInstance.Data + (longlong)local_60.ArrayNum * 4) = local_64;
        local_60.ArrayNum = local_60.ArrayNum + 1;
      }
      uVar9 = uVar9 + 1;
      local_res18 = local_res18 + 1;
    } while (local_res18 < iVar5);
  }
  FManagedArrayCollection::ReorderElements((FManagedArrayCollection *)this,VerticesGroup,&local_50);
  FManagedArrayCollection::ReorderElements((FManagedArrayCollection *)this,FacesGroup,&local_60);
  FManagedArrayCollection::ReorderElements((FManagedArrayCollection *)this,GeometryGroup,param_1);
  if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.AllocatorInstance.Data);
  }
  if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.AllocatorInstance.Data);
  }
  return;
}

// ReorderTransformElements @ 143ff8b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FGeometryCollection::ReorderTransformElements
          (FGeometryCollection *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  FTransformGeomPair *pFVar1;
  undefined4 uVar2;
  code *pcVar3;
  longlong *plVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  byte bVar11;
  longlong lVar12;
  ulonglong uVar13;
  int *piVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  uint *puVar21;
  uint uVar22;
  ulonglong uVar23;
  undefined1 auStackY_1c8 [32];
  undefined1 local_178;
  undefined1 local_177;
  FIdentityFunctor local_176 [6];
  ForAnyElementType local_170;
  uint local_168;
  uint uStack_164;
  TArray<int,TSizedDefaultAllocator<32>_> local_160;
  uint local_150 [2];
  ulonglong local_148;
  TArray<int,TSizedDefaultAllocator<32>_> *local_140;
  uint local_138;
  ulonglong local_130;
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  longlong *local_118;
  uint uStack_110;
  uint uStack_10c;
  TBitArray<FDefaultBitArrayAllocator> *local_108;
  undefined4 uStack_100;
  uint uStack_fc;
  uint local_f8;
  undefined4 uStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  longlong *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  undefined8 uStack_c0;
  undefined4 local_9c;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_140 = param_1;
  uVar6 = (**(code **)(*(longlong *)&this->TransformIndex + 0x60))();
  local_170.Data = (FScriptContainerElement *)0x0;
  local_168 = 0;
  uStack_164 = 0;
  if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
  }
  if (0 < (int)uVar6) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar6,&local_170,0,(int *)&uStack_164);
  }
  uVar15 = 0;
  if (0 < (int)uVar6) {
    lVar19 = 0;
    do {
      uVar22 = 0;
      if ((int)uVar15 < *(int *)&(this->TransformIndex).field_0x18) {
        uVar22 = ~uVar15 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(int *)(*(longlong *)&(this->TransformIndex).field_0x10 + lVar19 * 4) != -1) {
        uVar22 = 0;
        if ((int)uVar15 < *(int *)&(this->TransformIndex).field_0x18) {
          uVar22 = ~uVar15 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar22 = *(uint *)(*(longlong *)&(this->TransformIndex).field_0x10 + lVar19 * 4);
        uVar18 = 0;
        if ((int)uVar22 < param_1->ArrayNum) {
          uVar18 = ~uVar22 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar16 = (param_1->AllocatorInstance).Data;
        if (local_168 == uStack_164) {
          local_168 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x408,&local_170,(int *)&uStack_164);
        }
        lVar12 = (longlong)(int)local_168;
        local_168 = local_168 + 1;
        *(undefined4 *)&local_170.Data[lVar12 * 8].field_0x0 =
             *(undefined4 *)(pFVar16 + (longlong)(int)uVar22 * 4);
        *(uint *)(local_170.Data + lVar12 * 8 + 4) = uVar15;
      }
      uVar15 = uVar15 + 1;
      lVar19 = lVar19 + 1;
    } while (lVar19 < (int)uVar6);
  }
  AlgoImpl::
  IntroSortInternal<_FGeometryCollection::ReorderTransformElements_::__l2::FTransformGeomPair,int,FIdentityFunctor,TDereferenceWrapper<_FGeometryCollection::ReorderTransformElements_::__l2::FTransformGeomPair,TLess<void>_>_>
            ((FTransformGeomPair *)local_170.Data,local_168,local_176[0],(TLess<void> *)local_176);
  local_160.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_160.ArrayNum = 0;
  local_160.ArrayMax = 0;
  if (0 < (int)uVar6) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar6,&local_160.AllocatorInstance,0,&local_160.ArrayMax);
  }
  uVar6 = local_168;
  uVar13 = (ulonglong)(int)local_168;
  pFVar1 = (FTransformGeomPair *)(local_170.Data + uVar13 * 8);
  pFVar16 = local_170.Data + 4;
  while( true ) {
    if ((uint)uVar13 != uVar6) {
      local_178 = 0;
      `TCheckedPointerIterator<`FGeometryCollection::ReorderTransformElements'::__l2::FTransformGeomPair,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_178);
    }
    if ((FTransformGeomPair *)(pFVar16 + -4) == pFVar1) break;
    if (((local_160.AllocatorInstance.Data <= pFVar16) &&
        (pFVar16 < local_160.AllocatorInstance.Data + (longlong)local_160.ArrayMax * 4)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (local_160.ArrayNum == local_160.ArrayMax) {
      local_160.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x404,&local_160.AllocatorInstance,&local_160.ArrayMax);
    }
    lVar19 = (longlong)local_160.ArrayNum;
    local_160.ArrayNum = local_160.ArrayNum + 1;
    iVar7 = *(int *)pFVar16;
    pFVar16 = pFVar16 + 8;
    *(int *)(local_160.AllocatorInstance.Data + lVar19 * 4) = iVar7;
    uVar13 = (ulonglong)local_168;
  }
  ReorderGeometryElements(this,&local_160);
  uVar13 = 0;
  iVar7 = (**(code **)(this->_padding_ + 0x60))();
  if (0 < iVar7) {
    local_130 = 0;
    local_148 = 0;
    uVar20 = uVar13;
    uVar23 = uVar13;
    do {
      uVar18 = 0;
      uVar22 = (uint)uVar23;
      uVar15 = ~uVar22 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar22 < (int)this->_padding_) {
        uVar6 = uVar15;
      }
      local_138 = uVar15;
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar6 = 0;
      uVar10 = 0;
      if (*(int *)(this->_padding_ + uVar20 * 4) != -1) {
        uVar8 = uVar10;
        if ((int)uVar22 < (int)this->_padding_) {
          uVar8 = uVar15;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar8 = *(uint *)(this->_padding_ + uVar20 * 4);
        uVar9 = uVar10;
        if ((int)uVar8 < param_1->ArrayNum) {
          uVar9 = ~uVar8 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar2 = *(undefined4 *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar8 * 4);
        uVar8 = uVar6;
        if ((int)uVar22 < (int)this->_padding_) {
          uVar8 = uVar15;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(undefined4 *)(this->_padding_ + uVar20 * 4) = uVar2;
        uVar13 = local_148;
      }
      uVar8 = uVar6;
      if ((int)uVar22 < (int)this->_padding_) {
        uVar8 = uVar15;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_98._0_8_ = 0;
      local_98._8_8_ = 0;
      local_78 = (uint *)0x0;
      local_70 = 0;
      local_6c = 0x80;
      local_68 = 0xffffffff;
      local_64 = 0;
      local_58 = (ForElementType<FSetElementId>)0x0;
      local_50 = 0;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_98,
                 (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(this->_padding_ + uVar13)
                );
      uVar8 = uVar10;
      if ((int)uVar22 < (int)this->_padding_) {
        uVar8 = uVar15;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar17 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(uVar13 + this->_padding_);
      bVar5 = 1 < pTVar17->HashSize;
      if (!bVar5) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements(pTVar17);
      }
      *(undefined4 *)&(pTVar17->Elements).field_0x8 = 0;
      if (*(int *)&(pTVar17->Elements).field_0xc != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,(ForAnyElementType *)pTVar17,0,(int *)&(pTVar17->Elements).field_0xc);
      }
      *(undefined4 *)&(pTVar17->Elements).field_0x30 = 0xffffffff;
      *(undefined4 *)&(pTVar17->Elements).field_0x34 = 0;
      iVar7 = *(int *)&(pTVar17->Elements).field_0x2c;
      *(undefined4 *)&(pTVar17->Elements).field_0x28 = 0;
      if ((iVar7 < 0) || (0x80 < iVar7)) {
        *(undefined4 *)&(pTVar17->Elements).field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)&(pTVar17->Elements).field_0x10,0);
      }
      if (bVar5) {
        pTVar17->HashSize = 1;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(pTVar17);
      }
      uVar15 = local_70;
      uStack_10c = 1;
      uStack_fc = uVar10;
      uStack_110 = uVar18;
      if (local_70 != 0) {
        puVar21 = (uint *)(local_98 + 0x10);
        if (local_78 != (uint *)0x0) {
          puVar21 = local_78;
        }
        uVar10 = *puVar21;
        uVar6 = uVar18;
        while (uVar10 == 0) {
          lVar19 = (longlong)(int)uStack_110;
          uVar6 = uVar6 + 0x20;
          uStack_110 = uStack_110 + 1;
          uStack_fc = local_70;
          if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_110)
          goto LAB_143ff91b0;
          uVar10 = puVar21[lVar19 + 1];
        }
        uStack_10c = -uVar10 & uVar10;
        uVar13 = (ulonglong)uStack_10c * 2 + 1;
        lVar19 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        local_128 = (int)lVar19;
        uStack_fc = (uVar6 - 1) + local_128;
        if ((int)local_70 < (int)uStack_fc) {
          uStack_fc = local_70;
        }
      }
LAB_143ff91b0:
      local_118 = (longlong *)local_98;
      uStack_f4 = local_9c;
      local_108 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
      uVar18 = local_70 & 0xffffffe0;
      iStack_f0 = local_98._8_4_ - local_64;
      TStack_e0._padding_ = CONCAT44(uStack_10c,uStack_110);
      uStack_100 = 0xffffffff;
      TStack_e0.CurrentBitIndex = uStack_fc;
      TStack_e0.UnvisitedBitMask = 0xffffffff;
      iVar7 = (int)local_70 >> 5;
      TStack_e0._28_4_ = local_9c;
      TStack_e0.BaseBitIndex = uVar6;
      uStack_c0 = CONCAT44(uStack_ec,iStack_f0);
      bVar11 = (byte)local_70;
      local_f8 = uVar6;
      local_e8 = local_118;
      TStack_e0.Array = local_108;
      if (((int)local_70 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar20 = local_130;
      uVar6 = local_138;
      if (uVar15 != local_70) {
        puVar21 = (uint *)(local_98 + 0x10);
        if (local_78 != (uint *)0x0) {
          puVar21 = local_78;
        }
        uVar15 = -1 << (bVar11 & 0x1f) & puVar21[iVar7];
        while (uVar15 == 0) {
          lVar19 = (longlong)iVar7;
          uVar18 = uVar18 + 0x20;
          iVar7 = iVar7 + 1;
          uVar15 = local_70;
          if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar7)
          goto LAB_143ff92c0;
          uVar15 = puVar21[lVar19 + 1];
        }
        uVar13 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
        lVar19 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        local_124 = (int)lVar19;
        uVar15 = local_124 + -1 + uVar18;
        if ((int)local_70 < (int)uVar15) {
          uVar15 = local_70;
        }
      }
LAB_143ff92c0:
      while( true ) {
        plVar4 = local_e8;
        if ((int)local_e8[1] - *(int *)((longlong)local_e8 + 0x34) != (int)uStack_c0) {
          local_177 = 0;
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_177);
        }
        if (((TStack_e0.CurrentBitIndex == uVar15) &&
            (TStack_e0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
           (plVar4 == (longlong *)local_98)) break;
        uVar18 = *(uint *)(*plVar4 + (longlong)TStack_e0.CurrentBitIndex * 0xc);
        iVar7 = (int)this->_padding_;
        local_150[0] = uVar18;
        if ((int)uVar18 < 0) {
          uVar18 = 0;
          if ((int)uVar22 < iVar7) {
            uVar18 = uVar6;
          }
          if ((uVar18 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar16 = (FScriptContainerElement *)local_150;
          pTVar17 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                    (local_148 + this->_padding_);
          piVar14 = &local_11c;
        }
        else {
          uVar10 = 0;
          if ((int)uVar22 < iVar7) {
            uVar10 = uVar6;
          }
          if ((uVar10 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pTVar17 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                    (local_148 + this->_padding_);
          uVar10 = 0;
          if ((int)uVar18 < local_140->ArrayNum) {
            uVar10 = ~uVar18 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          piVar14 = &local_120;
          pFVar16 = (local_140->AllocatorInstance).Data + (longlong)(int)uVar18 * 4;
        }
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (pTVar17,piVar14,(bool *)pFVar16);
        TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
      }
      local_50 = 0;
      if (local_58 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_58);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_98);
      uVar20 = uVar20 + 1;
      uVar13 = local_148 + 0x50;
      uVar23 = (ulonglong)(uVar22 + 1);
      local_148 = uVar13;
      local_130 = uVar20;
      iVar7 = (**(code **)(this->_padding_ + 0x60))(&this->_padding_);
      param_1 = local_140;
    } while ((int)(uVar22 + 1) < iVar7);
  }
  FManagedArrayCollection::ReorderElements
            ((FManagedArrayCollection *)this,FTransformCollection::TransformGroup,param_1);
  if (local_160.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.AllocatorInstance.Data);
  }
  if ((FTransformGeomPair *)local_170.Data != (FTransformGeomPair *)0x0) {
    FMemory::Free(local_170.Data);
  }
  return;
}

// Reset @ 143ff9660

void __thiscall FGeometryCollection::Reset(FGeometryCollection *this)

{
  FTransformCollection::Reset((FTransformCollection *)this);
  Construct(this);
  return;
}

// SetDefaults @ 144001e80

void __thiscall
FGeometryCollection::SetDefaults(FGeometryCollection *this,FName param_1,uint param_2,uint param_3)

{
  float *pfVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  
  FManagedArrayCollection::SetDefaults((FManagedArrayCollection *)this,param_1,param_2,param_3);
  if (param_1 != FTransformCollection::TransformGroup) {
    if (param_1 == VerticesGroup) {
      uVar9 = param_2 + param_3;
      for (; param_2 < uVar9; param_2 = param_2 + 1) {
        fVar3 = (this->Defaults).DefaultVertexColor.field0_0x0._s_0.R;
        fVar4 = (this->Defaults).DefaultVertexColor.field0_0x0._s_0.G;
        fVar5 = (this->Defaults).DefaultVertexColor.field0_0x0._s_0.B;
        fVar6 = (this->Defaults).DefaultVertexColor.field0_0x0._s_0.A;
        uVar8 = 0;
        if ((int)param_2 < *(int *)&(this->Color).field_0x18) {
          uVar8 = ~param_2 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pfVar1 = (float *)(*(longlong *)&(this->Color).field_0x10 + (longlong)(int)param_2 * 0x10);
        *pfVar1 = fVar3;
        pfVar1[1] = fVar4;
        pfVar1[2] = fVar5;
        pfVar1[3] = fVar6;
      }
    }
    return;
  }
  uVar9 = param_2;
  while( true ) {
    if (param_2 + param_3 <= uVar9) {
      FGeometryCollectionConvexUtility::SetDefaults(this,param_1,param_2,param_3);
      return;
    }
    iVar10 = (int)FManagedArrayCollection::Invalid;
    uVar12 = ~uVar9 >> 0x1f;
    uVar8 = 0;
    if ((int)uVar9 < *(int *)&(this->TransformToGeometryIndex).field_0x18) {
      uVar8 = uVar12;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar11 = (longlong)(int)uVar9;
    *(int *)(*(longlong *)&(this->TransformToGeometryIndex).field_0x10 + lVar11 * 4) = iVar10;
    iVar10 = (int)FManagedArrayCollection::Invalid;
    uVar8 = 0;
    if ((int)uVar9 < (int)this->_padding_) {
      uVar8 = uVar12;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(int *)(this->_padding_ + lVar11 * 4) = iVar10;
    uVar8 = 0;
    if ((int)uVar9 < *(int *)&(this->SimulationType).field_0x18) {
      uVar8 = uVar12;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(undefined4 *)(*(longlong *)&(this->SimulationType).field_0x10 + lVar11 * 4) = 0;
    uVar8 = 0;
    if ((int)uVar9 < *(int *)&(this->StatusFlags).field_0x18) {
      uVar8 = uVar12;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) break;
    *(undefined4 *)(*(longlong *)&(this->StatusFlags).field_0x10 + lVar11 * 4) = 0;
    uVar8 = 0;
    if ((int)uVar9 < *(int *)&(this->InitialDynamicState).field_0x18) {
      uVar8 = uVar12;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(undefined4 *)(*(longlong *)&(this->InitialDynamicState).field_0x10 + lVar11 * 4) = 0;
    uVar8 = 0;
    if ((int)uVar9 < *(int *)&(this->ExemplarIndex).field_0x18) {
      uVar8 = uVar12;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar9 = uVar9 + 1;
    *(undefined4 *)(*(longlong *)&(this->ExemplarIndex).field_0x10 + lVar11 * 4) = 0xffffffff;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// SetNumUVLayers @ 144002320

bool __thiscall FGeometryCollection::SetNumUVLayers(FGeometryCollection *this,int param_1)

{
  FName FVar1;
  FName FVar2;
  bool bVar3;
  FName *pFVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined2 uStack_40;
  undefined2 uStack_3e;
  FConstructionParameters FStack_38;
  
  if (7 < param_1 - 1U) {
    return false;
  }
  if (0 < param_1) {
    lVar5 = 0;
    do {
      FVar2 = GeometryCollection::UV::VerticesGroupName;
      FVar1 = GeometryCollection::UV::UVLayerNames[lVar5];
      uStack_40._0_1_ = true;
      uStack_40._1_1_ = false;
      FStack_38.GroupIndexDependency.ComparisonIndex.Value = 0;
      FStack_38.GroupIndexDependency.Number = 0;
      FStack_38.Saved = true;
      FStack_38.bAllowCircularDependency = false;
      FStack_38._10_2_ = uStack_3e;
      bVar3 = FManagedArrayCollection::HasAttribute
                        ((FManagedArrayCollection *)this,FVar1,
                         GeometryCollection::UV::VerticesGroupName);
      if (!bVar3) {
        FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TVector2<float>_>
                  ((FManagedArrayCollection *)this,FVar1,FVar2,&FStack_38);
      }
      FManagedArrayCollection::ModifyAttribute<UE::Math::TVector2<float>_>
                ((FManagedArrayCollection *)this,FVar1,FVar2);
      lVar5 = lVar5 + 1;
    } while (lVar5 < param_1);
  }
  if (param_1 < 8) {
    pFVar4 = GeometryCollection::UV::UVLayerNames + param_1;
    uVar6 = (ulonglong)(8 - param_1);
    do {
      FManagedArrayCollection::RemoveAttribute
                ((FManagedArrayCollection *)this,*pFVar4,GeometryCollection::UV::VerticesGroupName);
      pFVar4 = pFVar4 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return true;
}

// TransformSelectionToGeometryIndices @ 144002c70

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
FGeometryCollection::TransformSelectionToGeometryIndices
          (FGeometryCollection *this,TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__
          ,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res10 [8];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar11 = (param_1->AllocatorInstance).Data;
  iVar3 = param_1->ArrayNum;
  pFVar1 = pFVar11 + (longlong)iVar3 * 4;
  while( true ) {
    if (param_1->ArrayNum != iVar3) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar11 == pFVar1) break;
    uVar4 = *(uint *)pFVar11;
    if ((-1 < (int)uVar4) && ((int)uVar4 < *(int *)&(this->TransformToGeometryIndex).field_0x18)) {
      if ((int)uVar4 < 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar10;
        }
      }
      if (*(int *)(*(longlong *)&(this->TransformToGeometryIndex).field_0x10 +
                  (longlong)(int)uVar4 * 4) != -1) {
        uVar4 = *(uint *)pFVar11;
        uVar8 = 0;
        if ((int)uVar4 < *(int *)&(this->TransformToGeometryIndex).field_0x18) {
          uVar8 = ~uVar4 >> 0x1f;
        }
        if (uVar8 == 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
            return pTVar10;
          }
        }
        pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
        pFVar2 = (FScriptContainerElement *)
                 (*(longlong *)&(this->TransformToGeometryIndex).field_0x10 +
                 (longlong)(int)uVar4 * 4);
        if ((pFVar5 <= pFVar2) && (pFVar2 < pFVar5 + (longlong)__return_storage_ptr__->ArrayMax * 4)
           ) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
            return pTVar10;
          }
        }
        iVar9 = __return_storage_ptr__->ArrayNum;
        if (iVar9 == __return_storage_ptr__->ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar9 + 1;
        *(undefined4 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar9 * 4) =
             *(undefined4 *)pFVar2;
      }
    }
    pFVar11 = pFVar11 + 4;
  }
  return __return_storage_ptr__;
}

// UpdateBoundingBox @ 144003050

void __thiscall FGeometryCollection::UpdateBoundingBox(FGeometryCollection *this)

{
  UpdateBoundingBox((FManagedArrayCollection *)this,true);
  return;
}

// UpdateBoundingBox @ 144003060

void __cdecl FGeometryCollection::UpdateBoundingBox(FManagedArrayCollection *param_1,bool param_2)

{
  undefined4 *puVar1;
  double *pdVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  FName FVar8;
  longlong lVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  FName FVar18;
  bool bVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  FName *pFVar23;
  TManagedArray<UE::Math::TBox<double>_> *pTVar24;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar25;
  TManagedArray<UE::Math::TVector<float>_> *pTVar26;
  TManagedArray<int> *pTVar27;
  TManagedArray<int> *pTVar28;
  longlong lVar29;
  uint uVar30;
  longlong lVar31;
  longlong lVar32;
  double dVar33;
  FName local_res20;
  FName local_b8;
  FName local_b0;
  FName local_a8;
  FName local_a0;
  FName local_98;
  FName local_90;
  FName local_88;
  FName local_80;
  FName local_78;
  
  FVar8 = GeometryGroup;
  if (!param_2) {
    pFVar23 = ::FName::FName(&local_res20,"BoundingBox");
    bVar19 = FManagedArrayCollection::HasAttribute(param_1,*pFVar23,FVar8);
    FVar8 = VerticesGroup;
    if (!bVar19) {
      return;
    }
    pFVar23 = ::FName::FName(&local_b8,"Vertex");
    bVar19 = FManagedArrayCollection::HasAttribute(param_1,*pFVar23,FVar8);
    FVar8 = VerticesGroup;
    if (!bVar19) {
      return;
    }
    pFVar23 = ::FName::FName(&local_b0,"BoneMap");
    bVar19 = FManagedArrayCollection::HasAttribute(param_1,*pFVar23,FVar8);
    FVar8 = FTransformCollection::TransformGroup;
    if (!bVar19) {
      return;
    }
    pFVar23 = ::FName::FName(&local_a8,"TransformToGeometryIndex");
    bVar19 = FManagedArrayCollection::HasAttribute(param_1,*pFVar23,FVar8);
    if (!bVar19) {
      return;
    }
  }
  FVar8 = GeometryGroup;
  pFVar23 = ::FName::FName(&local_a0,"BoundingBox");
  pTVar24 = FManagedArrayCollection::ModifyAttribute<UE::Math::TBox<double>_>
                      (param_1,*pFVar23,FVar8);
  FVar18 = VerticesGroup;
  pFVar23 = ::FName::FName(&local_98,"Vertex");
  FVar8 = *pFVar23;
  bVar19 = FManagedArrayCollection::HasAttribute(param_1,FVar8,FVar18);
  if ((!bVar19) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("HasAttribute(Name, Group)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                          ,0x185,L""), bVar19)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  local_78 = FVar18;
  local_80 = FVar8;
  pTVar25 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                    *)&param_1->Map,(TTuple<FName,FName> *)&local_80);
  if ((pTVar25 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Pair != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                          ,0x27b,L""), bVar19)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pTVar26 = FManagedArrayCollection::FValueType::GetTypedPtr<UE::Math::TVector<float>_>
                      ((FValueType *)&pTVar25->field_0x10);
  FVar8 = VerticesGroup;
  pFVar23 = ::FName::FName(&local_90,"BoneMap");
  pTVar27 = FManagedArrayCollection::GetAttribute<int>(param_1,*pFVar23,FVar8);
  FVar8 = FTransformCollection::TransformGroup;
  pFVar23 = ::FName::FName(&local_88,"TransformToGeometryIndex");
  pTVar28 = FManagedArrayCollection::GetAttribute<int>(param_1,*pFVar23,FVar8);
  iVar20 = (**(code **)(*(longlong *)pTVar24 + 0x60))(pTVar24);
  if (iVar20 != 0) {
    uVar30 = 0;
    iVar20 = (**(code **)(*(longlong *)pTVar24 + 0x60))(pTVar24);
    if (0 < iVar20) {
      lVar31 = 0;
      do {
        uVar21 = 0;
        if ((int)uVar30 < *(int *)&pTVar24->field_0x18) {
          uVar21 = ~uVar30 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        lVar32 = *(longlong *)&pTVar24->field_0x10;
        uVar30 = uVar30 + 1;
        pdVar2 = (double *)(lVar32 + 0x18 + lVar31);
        *pdVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        pdVar2[1] = (double)uVar5;
        *(double *)(lVar32 + 0x28 + lVar31) =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        puVar3 = (undefined4 *)(lVar32 + 0x18 + lVar31);
        uVar14 = puVar3[1];
        uVar15 = puVar3[2];
        uVar16 = puVar3[3];
        *(undefined1 *)(lVar32 + 0x30 + lVar31) = 0;
        uVar5 = *(undefined8 *)(lVar32 + 0x28 + lVar31);
        puVar1 = (undefined4 *)(lVar32 + lVar31);
        *puVar1 = *puVar3;
        puVar1[1] = uVar14;
        puVar1[2] = uVar15;
        puVar1[3] = uVar16;
        *(undefined8 *)(lVar32 + 0x10 + lVar31) = uVar5;
        lVar31 = lVar31 + 0x38;
        iVar20 = (**(code **)(*(longlong *)pTVar24 + 0x60))(pTVar24);
      } while ((int)uVar30 < iVar20);
    }
    uVar30 = 0;
    iVar20 = (**(code **)(*(longlong *)pTVar26 + 0x60))(pTVar26);
    if (0 < iVar20) {
      lVar31 = 0;
      lVar32 = 0;
      do {
        uVar21 = 0;
        if ((int)uVar30 < *(int *)&pTVar27->field_0x18) {
          uVar21 = ~uVar30 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        uVar21 = *(uint *)(lVar32 + *(longlong *)&pTVar27->field_0x10);
        if (uVar21 != 0xffffffff) {
          uVar22 = 0;
          if ((int)uVar21 < *(int *)&pTVar28->field_0x18) {
            uVar22 = ~uVar21 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          uVar21 = *(uint *)(*(longlong *)&pTVar28->field_0x10 + (longlong)(int)uVar21 * 4);
          if (uVar21 != 0xffffffff) {
            uVar22 = 0;
            if ((int)uVar30 < *(int *)&pTVar26->field_0x18) {
              uVar22 = ~uVar30 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            lVar9 = *(longlong *)&pTVar26->field_0x10;
            dVar11 = (double)*(float *)(lVar9 + lVar31);
            uVar22 = 0;
            if ((int)uVar21 < *(int *)&pTVar24->field_0x18) {
              uVar22 = ~uVar21 >> 0x1f;
            }
            dVar12 = (double)*(float *)(lVar9 + 4 + lVar31);
            dVar13 = (double)*(float *)(lVar9 + 8 + lVar31);
            if ((uVar22 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            lVar9 = *(longlong *)&pTVar24->field_0x10;
            lVar29 = (longlong)(int)uVar21 * 0x38;
            if (*(char *)(lVar29 + 0x30 + lVar9) == '\0') {
              *(double *)(lVar29 + 0x18 + lVar9) = dVar11;
              *(double *)(lVar29 + 0x20 + lVar9) = dVar12;
              *(double *)(lVar29 + 0x28 + lVar9) = dVar13;
              puVar4 = (undefined8 *)(lVar29 + 0x18 + lVar9);
              uVar17 = puVar4[1];
              *(undefined1 *)(lVar29 + 0x30 + lVar9) = 1;
              uVar5 = *(undefined8 *)(lVar29 + 0x28 + lVar9);
              *(undefined8 *)(lVar29 + lVar9) = *puVar4;
              ((undefined8 *)(lVar29 + lVar9))[1] = uVar17;
              *(undefined8 *)(lVar29 + 0x10 + lVar9) = uVar5;
            }
            else {
              dVar7 = dVar11;
              if (*(double *)(lVar29 + lVar9) <= dVar11) {
                dVar7 = *(double *)(lVar29 + lVar9);
              }
              dVar6 = *(double *)(lVar29 + 8 + lVar9);
              dVar33 = dVar12;
              if (dVar6 <= dVar12) {
                dVar33 = dVar6;
              }
              dVar6 = *(double *)(lVar29 + 0x18 + lVar9);
              if (dVar11 <= dVar6) {
                dVar11 = dVar6;
              }
              dVar6 = *(double *)(lVar29 + 0x20 + lVar9);
              if (dVar12 <= dVar6) {
                dVar12 = dVar6;
              }
              *(double *)(lVar29 + lVar9) = dVar7;
              dVar7 = *(double *)(lVar29 + 0x10 + lVar9);
              if (dVar13 <= dVar7) {
                dVar7 = dVar13;
              }
              *(double *)(lVar29 + 8 + lVar9) = dVar33;
              dVar6 = *(double *)(lVar29 + 0x28 + lVar9);
              if (dVar13 <= dVar6) {
                dVar13 = dVar6;
              }
              *(double *)(lVar29 + 0x18 + lVar9) = dVar11;
              *(double *)(lVar29 + 0x20 + lVar9) = dVar12;
              *(double *)(lVar29 + 0x10 + lVar9) = dVar7;
              *(double *)(lVar29 + 0x28 + lVar9) = dVar13;
            }
          }
        }
        uVar30 = uVar30 + 1;
        lVar32 = lVar32 + 4;
        lVar31 = lVar31 + 0xc;
        iVar20 = (**(code **)(*(longlong *)pTVar26 + 0x60))(pTVar26);
      } while ((int)uVar30 < iVar20);
    }
  }
  return;
}

// UpdateFaceGroupElements @ 144003600

void __thiscall FGeometryCollection::UpdateFaceGroupElements(FGeometryCollection *this)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  FName FVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  FName *pFVar12;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar13;
  TManagedArray<int> *pTVar14;
  FValueType *this_00;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  int iVar18;
  FName local_res10;
  FName local_48;
  FName local_40;
  
  FVar5 = FacesGroup;
  pFVar12 = ::FName::FName(&local_res10,"FaceToGeometryIndex");
  local_40 = FVar5;
  local_48 = *pFVar12;
  pTVar13 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                    *)&this->_padding_,(TTuple<FName,FName> *)&local_48);
  this_00 = (FValueType *)&pTVar13->field_0x10;
  if (pTVar13 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    this_00 = (FValueType *)0x0;
  }
  if ((this_00 == (FValueType *)0x0) ||
     (pTVar14 = FManagedArrayCollection::FValueType::ModifyTypedPtr<int>(this_00),
     pTVar14 == (TManagedArray<int> *)0x0)) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3315325426611520480>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollection.cpp"
                       ,0x3e0,"FaceGeometryMap");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    iVar7 = FManagedArrayCollection::NumElements((FManagedArrayCollection *)this,GeometryGroup);
    puVar1 = &(this->FaceStart).field_0x10;
    uVar15 = iVar7 - 1;
    if (-1 < (int)uVar15) {
      lVar17 = (longlong)(int)uVar15 * 4;
      do {
        uVar8 = 0;
        if ((int)uVar15 < *(int *)&(this->FaceStart).field_0x18) {
          uVar8 = ~uVar15 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(undefined4 *)(lVar17 + *(longlong *)puVar1) = 0x7fffffff;
        uVar8 = 0;
        if ((int)uVar15 < *(int *)&(this->FaceCount).field_0x18) {
          uVar8 = ~uVar15 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(undefined4 *)(lVar17 + *(longlong *)&(this->FaceCount).field_0x10) = 0;
        lVar17 = lVar17 + -4;
        uVar15 = uVar15 - 1;
      } while (-1 < (int)uVar15);
    }
    iVar9 = FManagedArrayCollection::NumElements((FManagedArrayCollection *)this,FacesGroup);
    uVar15 = iVar9 - 1;
    if (-1 < (int)uVar15) {
      lVar17 = (longlong)(int)uVar15 * 4;
      do {
        uVar16 = ~uVar15 >> 0x1f;
        uVar8 = 0;
        if ((int)uVar15 < *(int *)&pTVar14->field_0x18) {
          uVar8 = uVar16;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar8 = *(uint *)(lVar17 + *(longlong *)&pTVar14->field_0x10);
        uVar10 = 0;
        if ((int)uVar8 < *(int *)&(this->FaceStart).field_0x18) {
          uVar10 = ~uVar8 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar10 = uVar15;
        if (*(int *)(*(longlong *)puVar1 + (longlong)(int)uVar8 * 4) < (int)uVar15) {
          uVar10 = *(uint *)(*(longlong *)puVar1 + (longlong)(int)uVar8 * 4);
        }
        uVar8 = 0;
        if ((int)uVar15 < *(int *)&pTVar14->field_0x18) {
          uVar8 = uVar16;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar8 = *(uint *)(lVar17 + *(longlong *)&pTVar14->field_0x10);
        uVar11 = 0;
        if ((int)uVar8 < *(int *)&(this->FaceStart).field_0x18) {
          uVar11 = ~uVar8 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(uint *)(*(longlong *)puVar1 + (longlong)(int)uVar8 * 4) = uVar10;
        uVar8 = 0;
        if ((int)uVar15 < *(int *)&pTVar14->field_0x18) {
          uVar8 = uVar16;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar8 = *(uint *)(lVar17 + *(longlong *)&pTVar14->field_0x10);
        uVar16 = 0;
        if ((int)uVar8 < *(int *)&(this->FaceCount).field_0x18) {
          uVar16 = ~uVar8 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar17 = lVar17 + -4;
        piVar2 = (int *)(*(longlong *)&(this->FaceCount).field_0x10 + (longlong)(int)uVar8 * 4);
        *piVar2 = *piVar2 + 1;
        uVar15 = uVar15 - 1;
      } while (-1 < (int)uVar15);
    }
    iVar9 = 0;
    puVar1 = &(this->FaceStart).field_0x10;
    uVar15 = 0;
    if (0 < (longlong)iVar7) {
      lVar17 = 0;
      iVar18 = iVar9;
      do {
        uVar16 = ~uVar15 >> 0x1f;
        uVar8 = 0;
        if ((int)uVar15 < *(int *)&(this->FaceCount).field_0x18) {
          uVar8 = uVar16;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar3 = *(int *)&(this->FaceStart).field_0x18;
        if (*(int *)(*(longlong *)&(this->FaceCount).field_0x10 + lVar17 * 4) == 0) {
          uVar8 = 0;
          if ((int)uVar15 < iVar3) {
            uVar8 = uVar16;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          *(int *)(*(longlong *)puVar1 + lVar17 * 4) = iVar9 + iVar18;
        }
        else {
          uVar8 = 0;
          if ((int)uVar15 < iVar3) {
            uVar8 = uVar16;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar18 = *(int *)(*(longlong *)puVar1 + lVar17 * 4);
          uVar8 = 0;
          if ((int)uVar15 < *(int *)&(this->FaceCount).field_0x18) {
            uVar8 = uVar16;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar9 = *(int *)(*(longlong *)&(this->FaceCount).field_0x10 + lVar17 * 4);
        }
        uVar15 = uVar15 + 1;
        lVar17 = lVar17 + 1;
      } while (lVar17 < iVar7);
    }
  }
  bVar6 = HasContiguousVertices(this);
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3315325426611520513>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollection.cpp"
                         ,0x401,"HasContiguousVertices()"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  return;
}

// UpdateGeometryVisibility @ 144003bc0

void __thiscall
FGeometryCollection::UpdateGeometryVisibility
          (FGeometryCollection *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  uint *puVar2;
  int iVar3;
  undefined1 *puVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined1 *puVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  undefined1 local_res8 [8];
  longlong local_48;
  
  uVar12 = 0;
  iVar7 = (**(code **)(*(longlong *)&this->Visible + 0x60))();
  if (0 < iVar7) {
    local_48 = 0;
    do {
      pFVar11 = (param_1->AllocatorInstance).Data;
      iVar7 = param_1->ArrayNum;
      pFVar1 = pFVar11 + (longlong)iVar7 * 4;
      while( true ) {
        if (param_1->ArrayNum != iVar7) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (pFVar11 == pFVar1) break;
        iVar3 = *(int *)pFVar11;
        uVar9 = 0;
        if ((int)uVar12 < *(int *)&(this->Indices).field_0x18) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar9 = *(uint *)(local_48 + *(longlong *)&(this->Indices).field_0x10);
        uVar8 = 0;
        if ((int)uVar9 < *(int *)&(this->BoneMap).field_0x18) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (*(int *)(*(longlong *)&(this->BoneMap).field_0x10 + (longlong)(int)uVar9 * 4) == iVar3)
        {
          if ((((int)uVar12 < 0) || (*(int *)&(this->Visible).field_0x28 <= (int)uVar12)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          puVar4 = *(undefined1 **)&(this->Visible).field_0x20;
          puVar10 = &(this->Visible).field_0x10;
          if (puVar4 != (undefined1 *)0x0) {
            puVar10 = puVar4;
          }
          uVar9 = uVar12;
          if ((int)uVar12 < 0) {
            uVar9 = uVar12 + 0x1f;
          }
          puVar2 = (uint *)(puVar10 + (longlong)((int)uVar9 >> 5) * 4);
          uVar9 = 1 << ((byte)uVar12 & 0x1f);
          if (!param_2) {
            *puVar2 = ~uVar9 & *puVar2;
            goto LAB_144003d82;
          }
          *puVar2 = *puVar2 | uVar9;
          pFVar11 = pFVar11 + 4;
        }
        else {
LAB_144003d82:
          pFVar11 = pFVar11 + 4;
        }
      }
      local_48 = local_48 + 0xc;
      uVar12 = uVar12 + 1;
      iVar7 = (**(code **)(*(longlong *)&this->Visible + 0x60))(&this->Visible);
    } while ((int)uVar12 < iVar7);
  }
  return;
}

// UpdateOldAttributeNames @ 144003de0

void __thiscall FGeometryCollection::UpdateOldAttributeNames(FGeometryCollection *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  FName FVar4;
  FName FVar5;
  longlong lVar6;
  code *pcVar7;
  byte bVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  FName *pFVar18;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar19;
  TManagedArray<UE::Math::TIntVector3<int>_> *pTVar20;
  TManagedArray<bool> *pTVar21;
  TManagedArray<int> *pTVar22;
  TManagedArray<int> *pTVar23;
  TManagedArray<float> *pTVar24;
  TManagedArray<float> *pTVar25;
  TManagedArray<int> *pTVar26;
  TManagedArray<int> *pTVar27;
  TManagedArray<int> *pTVar28;
  uint uVar29;
  undefined1 *puVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  longlong lVar34;
  longlong lVar35;
  ulonglong uVar36;
  longlong lVar37;
  longlong local_res20;
  TArray<int,TSizedDefaultAllocator<32>_> local_210;
  FName local_200;
  TManagedArray<int> *local_1f8;
  FName local_1f0;
  FName local_1e8;
  FName local_1e0;
  FName local_1d8;
  FName local_1d0;
  FName local_1c8;
  FName local_1c0;
  FName local_1b8;
  FName local_1b0;
  FName local_1a8;
  FName local_1a0;
  FName local_198;
  FName local_190;
  FName local_188;
  FName local_180;
  FName local_178;
  FName local_170;
  FName local_168;
  FName local_160;
  FName local_158;
  FName local_150;
  FName local_148;
  FName local_140;
  FName local_138;
  FName local_130;
  FName local_128;
  FName local_120;
  FName local_118;
  FName local_110;
  FName local_108;
  FName local_100;
  FName local_f8;
  FName local_f0;
  FName local_e8;
  FName local_e0;
  FName local_d8;
  FName local_d0;
  FName local_c8;
  FName local_c0;
  FName local_b8;
  FName local_b0;
  TArray<FName,TSizedDefaultAllocator<32>_> local_a8;
  TArray<FName,TSizedDefaultAllocator<32>_> local_98 [5];
  
  pFVar18 = ::FName::FName(&local_c0,"Geometry");
  iVar16 = FManagedArrayCollection::NumElements((FManagedArrayCollection *)this,*pFVar18);
  iVar17 = FManagedArrayCollection::NumElements((FManagedArrayCollection *)this,FacesGroup);
  if ((iVar17 != 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("!this->NumElements(FGeometryCollection::FacesGroup)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollection.cpp"
                          ,0x876,L""), bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FManagedArrayCollection::AddElements((FManagedArrayCollection *)this,iVar16,FacesGroup);
  pFVar18 = ::FName::FName(&local_b8,"Geometry");
  FManagedArrayCollection::AttributeNames((FManagedArrayCollection *)this,local_98,*pFVar18);
  pFVar18 = ::FName::FName(&local_b0,"Geometry");
  FVar4 = *pFVar18;
  pFVar18 = ::FName::FName(&local_1d0,"Indices");
  FVar5 = *pFVar18;
  bVar15 = FManagedArrayCollection::HasAttribute((FManagedArrayCollection *)this,FVar5,FVar4);
  if ((!bVar15) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("HasAttribute(Name, Group)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                          ,0x185,L""), bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_1f0 = FVar5;
  local_1e8 = FVar4;
  pTVar19 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                    *)&this->_padding_,(TTuple<FName,FName> *)&local_1f0);
  if ((pTVar19 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Pair != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                          ,0x27b,L""), bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar20 = FManagedArrayCollection::FValueType::GetTypedPtr<UE::Math::TIntVector3<int>_>
                      ((FValueType *)&pTVar19->field_0x10);
  pFVar18 = ::FName::FName(&local_1c8,"Geometry");
  FVar4 = *pFVar18;
  pFVar18 = ::FName::FName(&local_1c0,"Visible");
  pTVar21 = FManagedArrayCollection::GetAttribute<bool>
                      ((FManagedArrayCollection *)this,*pFVar18,FVar4);
  pFVar18 = ::FName::FName(&local_1b8,"Geometry");
  FVar4 = *pFVar18;
  pFVar18 = ::FName::FName(&local_1b0,"MaterialIndex");
  pTVar22 = FManagedArrayCollection::GetAttribute<int>
                      ((FManagedArrayCollection *)this,*pFVar18,FVar4);
  pFVar18 = ::FName::FName(&local_1a8,"Geometry");
  FVar4 = *pFVar18;
  pFVar18 = ::FName::FName(&local_1a0,"MaterialID");
  pTVar23 = FManagedArrayCollection::GetAttribute<int>
                      ((FManagedArrayCollection *)this,*pFVar18,FVar4);
  uVar31 = iVar16 - 1;
  if (-1 < (int)uVar31) {
    bVar8 = (byte)uVar31 & 0x1f;
    uVar33 = 1 << bVar8 | 1U >> 0x20 - bVar8;
    lVar35 = (longlong)(int)uVar31 * 0xc;
    local_res20 = (longlong)(int)uVar31 * 4;
    do {
      uVar32 = ~uVar31 >> 0x1f;
      uVar29 = 0;
      if ((int)uVar31 < *(int *)&pTVar20->field_0x18) {
        uVar29 = uVar32;
      }
      if ((uVar29 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar2 = *(undefined8 *)(lVar35 + *(longlong *)&pTVar20->field_0x10);
      uVar3 = *(undefined4 *)(lVar35 + 8 + *(longlong *)&pTVar20->field_0x10);
      uVar29 = 0;
      if ((int)uVar31 < *(int *)&(this->Indices).field_0x18) {
        uVar29 = uVar32;
      }
      if ((uVar29 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar37 = *(longlong *)&(this->Indices).field_0x10;
      *(undefined8 *)(lVar35 + lVar37) = uVar2;
      *(undefined4 *)(lVar35 + 8 + lVar37) = uVar3;
      if ((((int)uVar31 < 0) || (*(int *)&pTVar21->field_0x28 <= (int)uVar31)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5c6,L""), bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      puVar30 = &pTVar21->field_0x10;
      if (*(undefined1 **)&pTVar21->field_0x20 != (undefined1 *)0x0) {
        puVar30 = *(undefined1 **)&pTVar21->field_0x20;
      }
      uVar36 = (ulonglong)(uVar31 >> 5);
      uVar29 = *(uint *)(puVar30 + uVar36 * 4);
      if ((((int)uVar31 < 0) || (*(int *)&(this->Visible).field_0x28 <= (int)uVar31)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      puVar30 = *(undefined1 **)&(this->Visible).field_0x20;
      if (puVar30 == (undefined1 *)0x0) {
        puVar30 = &(this->Visible).field_0x10;
      }
      if ((uVar29 & uVar33) == 0) {
        uVar29 = *(uint *)(puVar30 + uVar36 * 4) & ~uVar33;
      }
      else {
        uVar29 = *(uint *)(puVar30 + uVar36 * 4) | uVar33;
      }
      *(uint *)(puVar30 + uVar36 * 4) = uVar29;
      uVar29 = 0;
      if ((int)uVar31 < *(int *)&pTVar22->field_0x18) {
        uVar29 = uVar32;
      }
      if ((uVar29 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar3 = *(undefined4 *)(*(longlong *)&pTVar22->field_0x10 + local_res20);
      uVar29 = 0;
      if ((int)uVar31 < *(int *)&(this->MaterialIndex).field_0x18) {
        uVar29 = uVar32;
      }
      if ((uVar29 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(undefined4 *)(*(longlong *)&(this->MaterialIndex).field_0x10 + local_res20) = uVar3;
      uVar29 = 0;
      if ((int)uVar31 < *(int *)&pTVar23->field_0x18) {
        uVar29 = uVar32;
      }
      if ((uVar29 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar3 = *(undefined4 *)(*(longlong *)&pTVar23->field_0x10 + local_res20);
      uVar29 = 0;
      if ((int)uVar31 < *(int *)&(this->MaterialID).field_0x18) {
        uVar29 = uVar32;
      }
      if ((uVar29 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar33 = uVar33 >> 1 | (uint)((uVar33 & 1) != 0) << 0x1f;
      *(undefined4 *)(*(longlong *)&(this->MaterialID).field_0x10 + local_res20) = uVar3;
      local_res20 = local_res20 + -4;
      lVar35 = lVar35 + -0xc;
      uVar31 = uVar31 - 1;
    } while (-1 < (int)uVar31);
  }
  pFVar18 = ::FName::FName(&local_198,"Geometry");
  FVar4 = *pFVar18;
  pFVar18 = ::FName::FName(&local_190,"Indices");
  FManagedArrayCollection::RemoveAttribute((FManagedArrayCollection *)this,*pFVar18,FVar4);
  pFVar18 = ::FName::FName(&local_188,"Geometry");
  FVar4 = *pFVar18;
  pFVar18 = ::FName::FName(&local_180,"Visible");
  FManagedArrayCollection::RemoveAttribute((FManagedArrayCollection *)this,*pFVar18,FVar4);
  pFVar18 = ::FName::FName(&local_178,"Geometry");
  FVar4 = *pFVar18;
  pFVar18 = ::FName::FName(&local_170,"MaterialIndex");
  FManagedArrayCollection::RemoveAttribute((FManagedArrayCollection *)this,*pFVar18,FVar4);
  pFVar18 = ::FName::FName(&local_168,"Geometry");
  FVar4 = *pFVar18;
  pFVar18 = ::FName::FName(&local_160,"MaterialID");
  FManagedArrayCollection::RemoveAttribute((FManagedArrayCollection *)this,*pFVar18,FVar4);
  local_210.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_210.ArrayNum = 0;
  local_210.ArrayMax = 0;
  GeometryCollectionAlgo::ContiguousArray(&local_210,iVar16);
  ::FName::FName(&local_200,"Geometry");
  FTransformCollection::RemoveElements
            ((FTransformCollection *)this,&local_200,&local_210,(FProcessingParameters)0x0);
  pFVar18 = ::FName::FName(&local_158,"Structure");
  FManagedArrayCollection::AttributeNames((FManagedArrayCollection *)this,&local_a8,*pFVar18);
  pFVar18 = ::FName::FName(&local_150,"Structure");
  iVar16 = FManagedArrayCollection::NumElements((FManagedArrayCollection *)this,*pFVar18);
  iVar17 = FManagedArrayCollection::NumElements((FManagedArrayCollection *)this,GeometryGroup);
  if ((iVar17 != 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("!this->NumElements(FGeometryCollection::GeometryGroup)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollection.cpp"
                          ,0x898,L""), bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FManagedArrayCollection::AddElements((FManagedArrayCollection *)this,iVar16,GeometryGroup);
  pFVar18 = ::FName::FName(&local_148,"Structure");
  FVar4 = *pFVar18;
  pFVar18 = ::FName::FName(&local_140,"TransformIndex");
  pTVar22 = FManagedArrayCollection::GetAttribute<int>
                      ((FManagedArrayCollection *)this,*pFVar18,FVar4);
  local_1f8 = pTVar22;
  pFVar18 = ::FName::FName(&local_138,"Structure");
  FVar4 = *pFVar18;
  pFVar18 = ::FName::FName(&local_130,"BoundingBox");
  FVar5 = *pFVar18;
  bVar15 = FManagedArrayCollection::HasAttribute((FManagedArrayCollection *)this,FVar5,FVar4);
  if ((!bVar15) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("HasAttribute(Name, Group)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                          ,0x185,L""), bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_1e0 = FVar5;
  local_1d8 = FVar4;
  pTVar19 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                    *)&this->_padding_,(TTuple<FName,FName> *)&local_1e0);
  if ((pTVar19 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Pair != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                          ,0x27b,L""), bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((pTVar19->field_0x10 != '\r') &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsSameType<T>()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                          ,0x303,L""), bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar35 = *(longlong *)&pTVar19->field_0x30;
  if ((lVar35 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypedManagedArray != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                          ,0x306,L""), bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar18 = ::FName::FName(&local_128,"Structure");
  FVar4 = *pFVar18;
  pFVar18 = ::FName::FName(&local_120,"InnerRadius");
  pTVar24 = FManagedArrayCollection::GetAttribute<float>
                      ((FManagedArrayCollection *)this,*pFVar18,FVar4);
  pFVar18 = ::FName::FName(&local_118,"Structure");
  FVar4 = *pFVar18;
  pFVar18 = ::FName::FName(&local_110,"OuterRadius");
  pTVar25 = FManagedArrayCollection::GetAttribute<float>
                      ((FManagedArrayCollection *)this,*pFVar18,FVar4);
  pFVar18 = ::FName::FName(&local_108,"Structure");
  FVar4 = *pFVar18;
  pFVar18 = ::FName::FName(&local_100,"VertexStart");
  pTVar23 = FManagedArrayCollection::GetAttribute<int>
                      ((FManagedArrayCollection *)this,*pFVar18,FVar4);
  pFVar18 = ::FName::FName(&local_f8,"Structure");
  FVar4 = *pFVar18;
  pFVar18 = ::FName::FName(&local_f0,"VertexCount");
  pTVar26 = FManagedArrayCollection::GetAttribute<int>
                      ((FManagedArrayCollection *)this,*pFVar18,FVar4);
  pFVar18 = ::FName::FName(&local_e8,"Structure");
  FVar4 = *pFVar18;
  pFVar18 = ::FName::FName(&local_e0,"FaceStart");
  pTVar27 = FManagedArrayCollection::GetAttribute<int>
                      ((FManagedArrayCollection *)this,*pFVar18,FVar4);
  pFVar18 = ::FName::FName(&local_d8,"Structure");
  FVar4 = *pFVar18;
  pFVar18 = ::FName::FName(&local_d0,"FaceCount");
  pTVar28 = FManagedArrayCollection::GetAttribute<int>
                      ((FManagedArrayCollection *)this,*pFVar18,FVar4);
  uVar31 = iVar16 - 1;
  if (-1 < (int)uVar31) {
    lVar37 = (longlong)(int)uVar31 * 4;
    lVar34 = (longlong)(int)uVar31 * 0x38;
    do {
      uVar29 = ~uVar31 >> 0x1f;
      uVar33 = 0;
      if ((int)uVar31 < *(int *)&pTVar22->field_0x18) {
        uVar33 = uVar29;
      }
      if ((uVar33 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar3 = *(undefined4 *)(lVar37 + *(longlong *)&pTVar22->field_0x10);
      uVar33 = 0;
      if ((int)uVar31 < *(int *)&(this->TransformIndex).field_0x18) {
        uVar33 = uVar29;
      }
      if ((uVar33 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(undefined4 *)(lVar37 + *(longlong *)&(this->TransformIndex).field_0x10) = uVar3;
      uVar33 = 0;
      if ((int)uVar31 < *(int *)(lVar35 + 0x18)) {
        uVar33 = uVar29;
      }
      if ((uVar33 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar6 = *(longlong *)(lVar35 + 0x10);
      uVar9 = *(undefined8 *)(lVar34 + lVar6);
      uVar10 = ((undefined8 *)(lVar34 + lVar6))[1];
      puVar1 = (undefined8 *)(lVar34 + 0x10 + lVar6);
      uVar11 = *puVar1;
      uVar12 = puVar1[1];
      puVar1 = (undefined8 *)(lVar34 + 0x20 + lVar6);
      uVar13 = *puVar1;
      uVar14 = puVar1[1];
      uVar2 = *(undefined8 *)(lVar34 + 0x30 + lVar6);
      uVar33 = 0;
      if ((int)uVar31 < *(int *)&(this->BoundingBox).field_0x18) {
        uVar33 = uVar29;
      }
      if ((uVar33 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar6 = *(longlong *)&(this->BoundingBox).field_0x10;
      *(undefined8 *)(lVar6 + lVar34) = uVar9;
      ((undefined8 *)(lVar6 + lVar34))[1] = uVar10;
      puVar1 = (undefined8 *)(lVar6 + 0x10 + lVar34);
      *puVar1 = uVar11;
      puVar1[1] = uVar12;
      puVar1 = (undefined8 *)(lVar6 + 0x20 + lVar34);
      *puVar1 = uVar13;
      puVar1[1] = uVar14;
      *(undefined8 *)(lVar6 + 0x30 + lVar34) = uVar2;
      uVar33 = 0;
      if ((int)uVar31 < *(int *)&pTVar24->field_0x18) {
        uVar33 = uVar29;
      }
      if ((uVar33 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar3 = *(undefined4 *)(lVar37 + *(longlong *)&pTVar24->field_0x10);
      uVar33 = 0;
      if ((int)uVar31 < *(int *)&(this->InnerRadius).field_0x18) {
        uVar33 = uVar29;
      }
      if ((uVar33 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(undefined4 *)(lVar37 + *(longlong *)&(this->InnerRadius).field_0x10) = uVar3;
      uVar33 = 0;
      if ((int)uVar31 < *(int *)&pTVar25->field_0x18) {
        uVar33 = uVar29;
      }
      if ((uVar33 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar3 = *(undefined4 *)(lVar37 + *(longlong *)&pTVar25->field_0x10);
      uVar33 = 0;
      if ((int)uVar31 < *(int *)&(this->OuterRadius).field_0x18) {
        uVar33 = uVar29;
      }
      if ((uVar33 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(undefined4 *)(lVar37 + *(longlong *)&(this->OuterRadius).field_0x10) = uVar3;
      uVar33 = 0;
      if ((int)uVar31 < *(int *)&pTVar23->field_0x18) {
        uVar33 = uVar29;
      }
      if ((uVar33 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar3 = *(undefined4 *)(lVar37 + *(longlong *)&pTVar23->field_0x10);
      uVar33 = 0;
      if ((int)uVar31 < *(int *)&(this->VertexStart).field_0x18) {
        uVar33 = uVar29;
      }
      if ((uVar33 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(undefined4 *)(lVar37 + *(longlong *)&(this->VertexStart).field_0x10) = uVar3;
      uVar33 = 0;
      if ((int)uVar31 < *(int *)&pTVar26->field_0x18) {
        uVar33 = uVar29;
      }
      if ((uVar33 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar3 = *(undefined4 *)(lVar37 + *(longlong *)&pTVar26->field_0x10);
      uVar33 = 0;
      if ((int)uVar31 < *(int *)&(this->VertexCount).field_0x18) {
        uVar33 = uVar29;
      }
      if ((uVar33 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(undefined4 *)(lVar37 + *(longlong *)&(this->VertexCount).field_0x10) = uVar3;
      uVar33 = 0;
      if ((int)uVar31 < *(int *)&pTVar27->field_0x18) {
        uVar33 = uVar29;
      }
      if ((uVar33 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar3 = *(undefined4 *)(lVar37 + *(longlong *)&pTVar27->field_0x10);
      uVar33 = 0;
      if ((int)uVar31 < *(int *)&(this->FaceStart).field_0x18) {
        uVar33 = uVar29;
      }
      if ((uVar33 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(undefined4 *)(lVar37 + *(longlong *)&(this->FaceStart).field_0x10) = uVar3;
      uVar33 = 0;
      if ((int)uVar31 < *(int *)&pTVar28->field_0x18) {
        uVar33 = uVar29;
      }
      if ((uVar33 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar3 = *(undefined4 *)(lVar37 + *(longlong *)&pTVar28->field_0x10);
      uVar33 = 0;
      if ((int)uVar31 < *(int *)&(this->FaceCount).field_0x18) {
        uVar33 = uVar29;
      }
      if ((uVar33 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar34 = lVar34 + -0x38;
      *(undefined4 *)(lVar37 + *(longlong *)&(this->FaceCount).field_0x10) = uVar3;
      lVar37 = lVar37 + -4;
      uVar31 = uVar31 - 1;
      pTVar22 = local_1f8;
    } while (-1 < (int)uVar31);
  }
  pFVar18 = ::FName::FName(&local_c8,"Structure");
  FManagedArrayCollection::RemoveGroup((FManagedArrayCollection *)this,*pFVar18);
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  if (local_210.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_210.AllocatorInstance.Data);
  }
  if (local_98[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98[0].AllocatorInstance.Data);
  }
  return;
}

// UpdateVerticesGroupElements @ 144004d60

void __thiscall FGeometryCollection::UpdateVerticesGroupElements(FGeometryCollection *this)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  FName FVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  FName *pFVar12;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar13;
  TManagedArray<int> *pTVar14;
  FValueType *this_00;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  int iVar18;
  FName local_res10;
  FName local_48;
  FName local_40;
  
  FVar5 = VerticesGroup;
  pFVar12 = ::FName::FName(&local_res10,"VertexToGeometryIndex");
  local_40 = FVar5;
  local_48 = *pFVar12;
  pTVar13 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                    *)&this->_padding_,(TTuple<FName,FName> *)&local_48);
  this_00 = (FValueType *)&pTVar13->field_0x10;
  if (pTVar13 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    this_00 = (FValueType *)0x0;
  }
  if ((this_00 == (FValueType *)0x0) ||
     (pTVar14 = FManagedArrayCollection::FValueType::ModifyTypedPtr<int>(this_00),
     pTVar14 == (TManagedArray<int> *)0x0)) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3315325426611520411>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollection.cpp"
                       ,0x39b,"VertexGeometryMap");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    iVar7 = FManagedArrayCollection::NumElements((FManagedArrayCollection *)this,GeometryGroup);
    puVar1 = &(this->VertexStart).field_0x10;
    uVar15 = iVar7 - 1;
    if (-1 < (int)uVar15) {
      lVar17 = (longlong)(int)uVar15 * 4;
      do {
        uVar8 = 0;
        if ((int)uVar15 < *(int *)&(this->VertexStart).field_0x18) {
          uVar8 = ~uVar15 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(undefined4 *)(lVar17 + *(longlong *)puVar1) = 0x7fffffff;
        uVar8 = 0;
        if ((int)uVar15 < *(int *)&(this->VertexCount).field_0x18) {
          uVar8 = ~uVar15 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(undefined4 *)(lVar17 + *(longlong *)&(this->VertexCount).field_0x10) = 0;
        lVar17 = lVar17 + -4;
        uVar15 = uVar15 - 1;
      } while (-1 < (int)uVar15);
    }
    iVar9 = FManagedArrayCollection::NumElements((FManagedArrayCollection *)this,VerticesGroup);
    uVar15 = iVar9 - 1;
    if (-1 < (int)uVar15) {
      lVar17 = (longlong)(int)uVar15 * 4;
      do {
        uVar16 = ~uVar15 >> 0x1f;
        uVar8 = 0;
        if ((int)uVar15 < *(int *)&pTVar14->field_0x18) {
          uVar8 = uVar16;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar8 = *(uint *)(lVar17 + *(longlong *)&pTVar14->field_0x10);
        uVar10 = 0;
        if ((int)uVar8 < *(int *)&(this->VertexStart).field_0x18) {
          uVar10 = ~uVar8 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar10 = uVar15;
        if (*(int *)(*(longlong *)puVar1 + (longlong)(int)uVar8 * 4) < (int)uVar15) {
          uVar10 = *(uint *)(*(longlong *)puVar1 + (longlong)(int)uVar8 * 4);
        }
        uVar8 = 0;
        if ((int)uVar15 < *(int *)&pTVar14->field_0x18) {
          uVar8 = uVar16;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar8 = *(uint *)(lVar17 + *(longlong *)&pTVar14->field_0x10);
        uVar11 = 0;
        if ((int)uVar8 < *(int *)&(this->VertexStart).field_0x18) {
          uVar11 = ~uVar8 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(uint *)(*(longlong *)puVar1 + (longlong)(int)uVar8 * 4) = uVar10;
        uVar8 = 0;
        if ((int)uVar15 < *(int *)&pTVar14->field_0x18) {
          uVar8 = uVar16;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar8 = *(uint *)(lVar17 + *(longlong *)&pTVar14->field_0x10);
        uVar16 = 0;
        if ((int)uVar8 < *(int *)&(this->VertexCount).field_0x18) {
          uVar16 = ~uVar8 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar17 = lVar17 + -4;
        piVar2 = (int *)(*(longlong *)&(this->VertexCount).field_0x10 + (longlong)(int)uVar8 * 4);
        *piVar2 = *piVar2 + 1;
        uVar15 = uVar15 - 1;
      } while (-1 < (int)uVar15);
    }
    iVar9 = 0;
    puVar1 = &(this->VertexStart).field_0x10;
    uVar15 = 0;
    if (0 < (longlong)iVar7) {
      lVar17 = 0;
      iVar18 = iVar9;
      do {
        uVar16 = ~uVar15 >> 0x1f;
        uVar8 = 0;
        if ((int)uVar15 < *(int *)&(this->VertexCount).field_0x18) {
          uVar8 = uVar16;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar3 = *(int *)&(this->VertexStart).field_0x18;
        if (*(int *)(*(longlong *)&(this->VertexCount).field_0x10 + lVar17 * 4) == 0) {
          uVar8 = 0;
          if ((int)uVar15 < iVar3) {
            uVar8 = uVar16;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          *(int *)(*(longlong *)puVar1 + lVar17 * 4) = iVar9 + iVar18;
        }
        else {
          uVar8 = 0;
          if ((int)uVar15 < iVar3) {
            uVar8 = uVar16;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar18 = *(int *)(*(longlong *)puVar1 + lVar17 * 4);
          uVar8 = 0;
          if ((int)uVar15 < *(int *)&(this->VertexCount).field_0x18) {
            uVar8 = uVar16;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar9 = *(int *)(*(longlong *)&(this->VertexCount).field_0x10 + lVar17 * 4);
        }
        uVar15 = uVar15 + 1;
        lVar17 = lVar17 + 1;
      } while (lVar17 < iVar7);
    }
  }
  bVar6 = HasContiguousVertices(this);
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3315325426611520444>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollection.cpp"
                         ,0x3bc,"HasContiguousVertices()"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  return;
}

// WriteDataToHeaderFile @ 144005320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FGeometryCollection::WriteDataToHeaderFile
          (FGeometryCollection *this,FString *param_1,FString *param_2)

{
  float *pfVar1;
  FScriptContainerElement *_Src;
  char *_Str;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *pTVar10;
  size_t sVar11;
  basic_ostream<char,std::char_traits<char>_> *pbVar12;
  basic_filebuf<char,std::char_traits<char>_> *pbVar13;
  undefined8 uVar14;
  ForAnyElementType FVar15;
  ulong64 uVar16;
  wchar_t *pwVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  uint uVar21;
  longlong lVar22;
  longlong lVar23;
  wchar_t *pwVar24;
  ulonglong uVar25;
  bool bVar26;
  undefined1 auStackY_828 [32];
  longlong local_7e8;
  FString local_7e0;
  float local_7d0;
  float fStack_7cc;
  float local_7c8;
  float local_7c0;
  float fStack_7bc;
  float local_7b8;
  FString local_7b0;
  FString local_7a0;
  FString local_790;
  int iStack_77c;
  undefined1 local_778 [8];
  undefined1 local_770 [104];
  codecvt<char,char,_Mbstatet> *local_708;
  bool local_6ff;
  _Mbstatet local_6fc;
  bool local_6f4;
  _iobuf *local_6f0;
  basic_ios<char,std::char_traits<char>_> local_6d0;
  FString local_668;
  FString local_658;
  FString local_648;
  _Bxty local_638;
  undefined8 local_628;
  ulonglong uStack_620;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> local_618;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> local_578;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> local_4d8;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> local_438;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> local_398;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> local_2f8;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> local_258;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> local_1b8;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> local_118;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_828;
  uVar20 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FString::FString(&DataFilePath,"D:");
    atexit(`FGeometryCollection::WriteDataToHeaderFile'::__l2::
           _dynamic_atexit_destructor_for__DataFilePath__);
    _Init_thread_footer(&::_TSS0);
  }
  FVar15.Data = local_7b0.Data.AllocatorInstance.Data;
  uVar25 = uVar20;
  if (1 < (param_2->Data).ArrayNum) {
    ::FString::FString(&local_7b0,L"None");
    FVar15.Data = local_7b0.Data.AllocatorInstance.Data;
    iVar9 = (param_2->Data).ArrayNum;
    if (iVar9 == local_7b0.Data.ArrayNum) {
      if (iVar9 < 2) {
        uVar25 = 1;
        goto LAB_1440053e7;
      }
      iVar9 = wcscmp((wchar_t *)(param_2->Data).AllocatorInstance.Data,
                     (wchar_t *)local_7b0.Data.AllocatorInstance.Data);
      bVar26 = iVar9 == 0;
    }
    else {
      bVar26 = iVar9 + local_7b0.Data.ArrayNum == 1;
    }
    uVar25 = 1;
    if (!bVar26) goto LAB_1440053ee;
  }
LAB_1440053e7:
  param_2 = &DataFilePath;
LAB_1440053ee:
  local_7e0.Data.ArrayNum = (param_2->Data).ArrayNum;
  lVar22 = (longlong)local_7e0.Data.ArrayNum;
  _Src = (param_2->Data).AllocatorInstance.Data;
  local_7e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_7e0.Data.ArrayNum == 0) {
    local_7e0.Data.ArrayMax = 0;
    local_7b0.Data.AllocatorInstance.Data = FVar15.Data;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_7e0.Data.ArrayNum,0,(ForAnyElementType *)&local_7e0,local_7e0.Data.ArrayNum
               ,&local_7e0.Data.ArrayMax);
    memcpy(local_7e0.Data.AllocatorInstance.Data,_Src,lVar22 * 2);
  }
  if ((uVar25 != 0) && (local_7b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_7b0.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_7a0,"\\");
  iVar9 = local_7a0.Data.ArrayNum + -1;
  FVar15.Data = local_7a0.Data.AllocatorInstance.Data;
  if (local_7a0.Data.ArrayNum == 0) {
    iVar9 = 0;
    FVar15.Data = (FScriptContainerElement *)L"";
  }
  ::FString::RemoveFromEnd(&local_7e0,(wchar_t *)FVar15.Data,iVar9,IgnoreCase);
  if (local_7a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7a0.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_648,".h");
  ::FString::FString(&local_658,"\\");
  ::FString::ConcatFF(&local_668,&local_658,param_1);
  ::FString::ConcatFF(&local_790,&local_668,&local_648);
  iVar9 = local_790.Data.ArrayNum + -1;
  if (local_790.Data.ArrayNum == 0) {
    iVar9 = 0;
  }
  ::FString::AppendChars(&local_7e0,(wchar_t *)local_790.Data.AllocatorInstance.Data,iVar9);
  if (local_790.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_790.Data.AllocatorInstance.Data);
  }
  if (local_668.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_668.Data.AllocatorInstance.Data);
  }
  if (local_658.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_658.Data.AllocatorInstance.Data);
  }
  if (local_648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_648.Data.AllocatorInstance.Data);
  }
  local_778 = (undefined1  [8])&std::basic_ofstream<char,std::char_traits<char>_>::_vbtable_;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>(&local_6d0);
  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)local_778,
             (basic_streambuf<char,std::char_traits<char>_> *)local_770,false);
  *(undefined ***)(local_778 + *(int *)((longlong)local_778 + 4)) =
       std::basic_ofstream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)&iStack_77c + (longlong)*(int *)((longlong)local_778 + 4)) =
       *(int *)((longlong)local_778 + 4) + -0xa8;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)local_770);
  local_6f4 = false;
  local_770._0_8_ = std::basic_filebuf<char,std::char_traits<char>_>::vftable;
  local_6ff = false;
  std::basic_streambuf<char,std::char_traits<char>_>::_Init
            ((basic_streambuf<char,std::char_traits<char>_> *)local_770);
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_7e0.Data.ArrayNum != 0) {
    FVar15.Data = local_7e0.Data.AllocatorInstance.Data;
  }
  local_6f0 = (_iobuf *)0x0;
  local_6fc = `protected:_void___cdecl_std::basic_filebuf<char,std::char_traits<char>_>::_Init(_iobuf*___ptr64,std::basic_filebuf<char,struct_std::char_traits<char>_>::_Initfl)___ptr64'
              ::__l2::_Stinit;
  local_708 = (codecvt<char,char,_Mbstatet> *)0x0;
  pTVar10 = TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::
            TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128><wchar_t>
                      (&local_618,(wchar_t *)FVar15.Data);
  _Str = pTVar10->Ptr;
  local_638._Ptr = (char *)0x0;
  local_638._8_8_ = 0;
  local_628 = 0;
  uStack_620 = 0;
  sVar11 = strlen(_Str);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_638,_Str,
             sVar11);
  std::basic_ofstream<char,std::char_traits<char>_>::open
            ((basic_ofstream<char,std::char_traits<char>_> *)local_778,
             (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_638,2,0x40);
  if (0xf < uStack_620) {
    uVar16 = uStack_620 + 1;
    uVar14 = local_638._Ptr;
    if (0xfff < uVar16) {
      uVar14 = *(undefined8 *)(local_638._Ptr + -8);
      uVar16 = uStack_620 + 0x28;
      if ((char *)0x1f < local_638._Ptr + (-8 - uVar14)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)uVar14,uVar16);
  }
  local_638._Ptr = local_638._Ptr & 0xffffffffffffff00;
  local_628 = ___xmm_000000000000000f0000000000000000;
  uStack_620 = _UNK_15076add8;
  if ((void *)local_618._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_618._padding_);
  }
  pbVar12 = std::operator<<<std::char_traits<char>_>
                      ((basic_ostream<char,std::char_traits<char>_> *)local_778,
                       "// Copyright Epic Games, Inc. All Rights Reserved.");
  pbVar12 = (basic_ostream<char,std::char_traits<char>_> *)
            std::basic_ostream<char,std::char_traits<char>_>::operator<<
                      (pbVar12,std::endl<char,std::char_traits<char>_>);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            (pbVar12,std::endl<char,std::char_traits<char>_>);
  pbVar12 = std::operator<<<std::char_traits<char>_>
                      ((basic_ostream<char,std::char_traits<char>_> *)local_778,"#pragma once");
  pbVar12 = (basic_ostream<char,std::char_traits<char>_> *)
            std::basic_ostream<char,std::char_traits<char>_>::operator<<
                      (pbVar12,std::endl<char,std::char_traits<char>_>);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            (pbVar12,std::endl<char,std::char_traits<char>_>);
  pbVar12 = std::operator<<<std::char_traits<char>_>
                      ((basic_ostream<char,std::char_traits<char>_> *)local_778,"class ");
  if ((param_1->Data).ArrayNum == 0) {
    pwVar24 = L"";
  }
  else {
    pwVar24 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pTVar10 = TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::
            TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128><wchar_t>
                      (&local_578,pwVar24);
  pbVar12 = std::operator<<<std::char_traits<char>_>(pbVar12,pTVar10->Ptr);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            (pbVar12,std::endl<char,std::char_traits<char>_>);
  if ((void *)local_578._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_578._padding_);
  }
  pbVar12 = std::operator<<<std::char_traits<char>_>
                      ((basic_ostream<char,std::char_traits<char>_> *)local_778,"{");
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            (pbVar12,std::endl<char,std::char_traits<char>_>);
  pbVar12 = std::operator<<<std::char_traits<char>_>
                      ((basic_ostream<char,std::char_traits<char>_> *)local_778,"public:");
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            (pbVar12,std::endl<char,std::char_traits<char>_>);
  pbVar12 = std::operator<<<std::char_traits<char>_>
                      ((basic_ostream<char,std::char_traits<char>_> *)local_778,"    ");
  if ((param_1->Data).ArrayNum == 0) {
    pwVar24 = L"";
  }
  else {
    pwVar24 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pTVar10 = TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::
            TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128><wchar_t>
                      (&local_4d8,pwVar24);
  pbVar12 = std::operator<<<std::char_traits<char>_>(pbVar12,pTVar10->Ptr);
  pbVar12 = std::operator<<<std::char_traits<char>_>(pbVar12,"();");
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            (pbVar12,std::endl<char,std::char_traits<char>_>);
  if ((void *)local_4d8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_4d8._padding_);
  }
  pbVar12 = std::operator<<<std::char_traits<char>_>
                      ((basic_ostream<char,std::char_traits<char>_> *)local_778,"    ~");
  if ((param_1->Data).ArrayNum == 0) {
    pwVar24 = L"";
  }
  else {
    pwVar24 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pTVar10 = TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::
            TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128><wchar_t>
                      (&local_438,pwVar24);
  pbVar12 = std::operator<<<std::char_traits<char>_>(pbVar12,pTVar10->Ptr);
  pbVar12 = std::operator<<<std::char_traits<char>_>(pbVar12,"() {};");
  pbVar12 = (basic_ostream<char,std::char_traits<char>_> *)
            std::basic_ostream<char,std::char_traits<char>_>::operator<<
                      (pbVar12,std::endl<char,std::char_traits<char>_>);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            (pbVar12,std::endl<char,std::char_traits<char>_>);
  if ((void *)local_438._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_438._padding_);
  }
  pbVar12 = std::operator<<<std::char_traits<char>_>
                      ((basic_ostream<char,std::char_traits<char>_> *)local_778,
                       "    static const TArray<float>\tRawVertexArray;");
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            (pbVar12,std::endl<char,std::char_traits<char>_>);
  pbVar12 = std::operator<<<std::char_traits<char>_>
                      ((basic_ostream<char,std::char_traits<char>_> *)local_778,
                       "    static const TArray<int32>\tRawIndicesArray;");
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            (pbVar12,std::endl<char,std::char_traits<char>_>);
  pbVar12 = std::operator<<<std::char_traits<char>_>
                      ((basic_ostream<char,std::char_traits<char>_> *)local_778,
                       "    static const TArray<int32>\tRawBoneMapArray;");
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            (pbVar12,std::endl<char,std::char_traits<char>_>);
  pbVar12 = std::operator<<<std::char_traits<char>_>
                      ((basic_ostream<char,std::char_traits<char>_> *)local_778,
                       "    static const TArray<FTransform> RawTransformArray;");
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            (pbVar12,std::endl<char,std::char_traits<char>_>);
  pbVar12 = std::operator<<<std::char_traits<char>_>
                      ((basic_ostream<char,std::char_traits<char>_> *)local_778,
                       "    static const TArray<int32> RawParentArray;");
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            (pbVar12,std::endl<char,std::char_traits<char>_>);
  pbVar12 = std::operator<<<std::char_traits<char>_>
                      ((basic_ostream<char,std::char_traits<char>_> *)local_778,
                       "    static const TArray<TSet<int32>> RawChildrenArray;");
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            (pbVar12,std::endl<char,std::char_traits<char>_>);
  pbVar12 = std::operator<<<std::char_traits<char>_>
                      ((basic_ostream<char,std::char_traits<char>_> *)local_778,
                       "    static const TArray<int32> RawSimulationTypeArray;");
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            (pbVar12,std::endl<char,std::char_traits<char>_>);
  pbVar12 = std::operator<<<std::char_traits<char>_>
                      ((basic_ostream<char,std::char_traits<char>_> *)local_778,
                       "    static const TArray<int32> RawStatusFlagsArray;");
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            (pbVar12,std::endl<char,std::char_traits<char>_>);
  pbVar12 = std::operator<<<std::char_traits<char>_>
                      ((basic_ostream<char,std::char_traits<char>_> *)local_778,"};");
  pbVar12 = (basic_ostream<char,std::char_traits<char>_> *)
            std::basic_ostream<char,std::char_traits<char>_>::operator<<
                      (pbVar12,std::endl<char,std::char_traits<char>_>);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            (pbVar12,std::endl<char,std::char_traits<char>_>);
  pbVar12 = std::operator<<<std::char_traits<char>_>
                      ((basic_ostream<char,std::char_traits<char>_> *)local_778,
                       "const TArray<float> ");
  if ((param_1->Data).ArrayNum == 0) {
    pwVar24 = L"";
  }
  else {
    pwVar24 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pTVar10 = TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::
            TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128><wchar_t>
                      (&local_398,pwVar24);
  pbVar12 = std::operator<<<std::char_traits<char>_>(pbVar12,pTVar10->Ptr);
  pbVar12 = std::operator<<<std::char_traits<char>_>(pbVar12,"::RawVertexArray = {");
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            (pbVar12,std::endl<char,std::char_traits<char>_>);
  if ((void *)local_398._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_398._padding_);
  }
  iVar9 = FManagedArrayCollection::NumElements((FManagedArrayCollection *)this,VerticesGroup);
  lVar23 = (longlong)iVar9;
  lVar22 = lVar23;
  uVar25 = uVar20;
  if (0 < iVar9) {
    do {
      pbVar12 = std::operator<<<std::char_traits<char>_>
                          ((basic_ostream<char,std::char_traits<char>_> *)local_778,
                           "                                                    ");
      uVar19 = (uint)uVar20;
      uVar21 = ~uVar19 >> 0x1f;
      uVar18 = 0;
      if ((int)uVar19 < *(int *)&(this->Vertex).field_0x18) {
        uVar18 = uVar21;
      }
      if ((uVar18 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pbVar12 = (basic_ostream<char,std::char_traits<char>_> *)
                std::basic_ostream<char,std::char_traits<char>_>::operator<<
                          (pbVar12,*(float *)(*(longlong *)&(this->Vertex).field_0x10 + uVar25));
      pbVar12 = std::operator<<<std::char_traits<char>_>(pbVar12,", ");
      uVar18 = 0;
      if ((int)uVar19 < *(int *)&(this->Vertex).field_0x18) {
        uVar18 = uVar21;
      }
      if ((uVar18 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pbVar12 = (basic_ostream<char,std::char_traits<char>_> *)
                std::basic_ostream<char,std::char_traits<char>_>::operator<<
                          (pbVar12,*(float *)(*(longlong *)&(this->Vertex).field_0x10 + 4 + uVar25))
      ;
      pbVar12 = std::operator<<<std::char_traits<char>_>(pbVar12,", ");
      uVar18 = 0;
      if ((int)uVar19 < *(int *)&(this->Vertex).field_0x18) {
        uVar18 = uVar21;
      }
      if ((uVar18 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pbVar12 = (basic_ostream<char,std::char_traits<char>_> *)
                std::basic_ostream<char,std::char_traits<char>_>::operator<<
                          (pbVar12,*(float *)(*(longlong *)&(this->Vertex).field_0x10 + 8 + uVar25))
      ;
      pbVar12 = std::operator<<<std::char_traits<char>_>(pbVar12,", ");
      std::basic_ostream<char,std::char_traits<char>_>::operator<<
                (pbVar12,std::endl<char,std::char_traits<char>_>);
      uVar20 = (ulonglong)(uVar19 + 1);
      lVar22 = lVar22 + -1;
      uVar25 = uVar25 + 0xc;
    } while (lVar22 != 0);
  }
  uVar20 = 0;
  pwVar24 = L"";
  pbVar12 = std::operator<<<std::char_traits<char>_>
                      ((basic_ostream<char,std::char_traits<char>_> *)local_778,"};");
  pbVar12 = (basic_ostream<char,std::char_traits<char>_> *)
            std::basic_ostream<char,std::char_traits<char>_>::operator<<
                      (pbVar12,std::endl<char,std::char_traits<char>_>);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            (pbVar12,std::endl<char,std::char_traits<char>_>);
  pbVar12 = std::operator<<<std::char_traits<char>_>
                      ((basic_ostream<char,std::char_traits<char>_> *)local_778,
                       "const TArray<int32> ");
  if ((param_1->Data).ArrayNum != 0) {
    pwVar24 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pTVar10 = TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::
            TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128><wchar_t>
                      (&local_2f8,pwVar24);
  pbVar12 = std::operator<<<std::char_traits<char>_>(pbVar12,pTVar10->Ptr);
  pbVar12 = std::operator<<<std::char_traits<char>_>(pbVar12,"::RawIndicesArray = {");
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            (pbVar12,std::endl<char,std::char_traits<char>_>);
  if ((void *)local_2f8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_2f8._padding_);
  }
  iVar9 = FManagedArrayCollection::NumElements((FManagedArrayCollection *)this,FacesGroup);
  lVar22 = (longlong)iVar9;
  uVar25 = uVar20;
  if (0 < iVar9) {
    do {
      pbVar12 = std::operator<<<std::char_traits<char>_>
                          ((basic_ostream<char,std::char_traits<char>_> *)local_778,
                           "                                                    ");
      uVar19 = (uint)uVar20;
      uVar21 = ~uVar19 >> 0x1f;
      uVar18 = 0;
      if ((int)uVar19 < *(int *)&(this->Indices).field_0x18) {
        uVar18 = uVar21;
      }
      if ((uVar18 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pbVar12 = (basic_ostream<char,std::char_traits<char>_> *)
                std::basic_ostream<char,std::char_traits<char>_>::operator<<
                          (pbVar12,*(int *)(uVar25 + *(longlong *)&(this->Indices).field_0x10));
      pbVar12 = std::operator<<<std::char_traits<char>_>(pbVar12,", ");
      uVar18 = 0;
      if ((int)uVar19 < *(int *)&(this->Indices).field_0x18) {
        uVar18 = uVar21;
      }
      if ((uVar18 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pbVar12 = (basic_ostream<char,std::char_traits<char>_> *)
                std::basic_ostream<char,std::char_traits<char>_>::operator<<
                          (pbVar12,*(int *)(*(longlong *)&(this->Indices).field_0x10 + 4 + uVar25));
      pbVar12 = std::operator<<<std::char_traits<char>_>(pbVar12,", ");
      uVar18 = 0;
      if ((int)uVar19 < *(int *)&(this->Indices).field_0x18) {
        uVar18 = uVar21;
      }
      if ((uVar18 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pbVar12 = (basic_ostream<char,std::char_traits<char>_> *)
                std::basic_ostream<char,std::char_traits<char>_>::operator<<
                          (pbVar12,*(int *)(*(longlong *)&(this->Indices).field_0x10 + 8 + uVar25));
      pbVar12 = std::operator<<<std::char_traits<char>_>(pbVar12,", ");
      std::basic_ostream<char,std::char_traits<char>_>::operator<<
                (pbVar12,std::endl<char,std::char_traits<char>_>);
      uVar20 = (ulonglong)(uVar19 + 1);
      lVar22 = lVar22 + -1;
      uVar25 = uVar25 + 0xc;
    } while (lVar22 != 0);
  }
  lVar22 = 0;
  pbVar12 = std::operator<<<std::char_traits<char>_>
                      ((basic_ostream<char,std::char_traits<char>_> *)local_778,"};");
  pbVar12 = (basic_ostream<char,std::char_traits<char>_> *)
            std::basic_ostream<char,std::char_traits<char>_>::operator<<
                      (pbVar12,std::endl<char,std::char_traits<char>_>);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            (pbVar12,std::endl<char,std::char_traits<char>_>);
  pbVar12 = std::operator<<<std::char_traits<char>_>
                      ((basic_ostream<char,std::char_traits<char>_> *)local_778,
                       "const TArray<int32> ");
  pwVar24 = L"";
  if ((param_1->Data).ArrayNum == 0) {
    pwVar17 = L"";
  }
  else {
    pwVar17 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pTVar10 = TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::
            TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128><wchar_t>
                      (&local_258,pwVar17);
  pbVar12 = std::operator<<<std::char_traits<char>_>(pbVar12,pTVar10->Ptr);
  pbVar12 = std::operator<<<std::char_traits<char>_>(pbVar12,"::RawBoneMapArray = {");
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            (pbVar12,std::endl<char,std::char_traits<char>_>);
  if ((void *)local_258._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_258._padding_);
  }
  uVar18 = 0;
  if (0 < lVar23) {
    do {
      pbVar12 = std::operator<<<std::char_traits<char>_>
                          ((basic_ostream<char,std::char_traits<char>_> *)local_778,
                           "                                                    ");
      uVar19 = 0;
      if ((int)uVar18 < *(int *)&(this->BoneMap).field_0x18) {
        uVar19 = ~uVar18 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pbVar12 = (basic_ostream<char,std::char_traits<char>_> *)
                std::basic_ostream<char,std::char_traits<char>_>::operator<<
                          (pbVar12,*(int *)(*(longlong *)&(this->BoneMap).field_0x10 + lVar22 * 4));
      pbVar12 = std::operator<<<std::char_traits<char>_>(pbVar12,", ");
      std::basic_ostream<char,std::char_traits<char>_>::operator<<
                (pbVar12,std::endl<char,std::char_traits<char>_>);
      uVar18 = uVar18 + 1;
      lVar22 = lVar22 + 1;
    } while (lVar22 < lVar23);
  }
  uVar20 = 0;
  pbVar12 = std::operator<<<std::char_traits<char>_>
                      ((basic_ostream<char,std::char_traits<char>_> *)local_778,"};");
  pbVar12 = (basic_ostream<char,std::char_traits<char>_> *)
            std::basic_ostream<char,std::char_traits<char>_>::operator<<
                      (pbVar12,std::endl<char,std::char_traits<char>_>);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            (pbVar12,std::endl<char,std::char_traits<char>_>);
  pbVar12 = std::operator<<<std::char_traits<char>_>
                      ((basic_ostream<char,std::char_traits<char>_> *)local_778,
                       "const TArray<FTransform> ");
  if ((param_1->Data).ArrayNum == 0) {
    pwVar17 = L"";
  }
  else {
    pwVar17 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pTVar10 = TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::
            TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128><wchar_t>
                      (&local_1b8,pwVar17);
  pbVar12 = std::operator<<<std::char_traits<char>_>(pbVar12,pTVar10->Ptr);
  pbVar12 = std::operator<<<std::char_traits<char>_>(pbVar12,"::RawTransformArray = {");
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            (pbVar12,std::endl<char,std::char_traits<char>_>);
  if ((void *)local_1b8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_1b8._padding_);
  }
  iVar9 = FManagedArrayCollection::NumElements
                    ((FManagedArrayCollection *)this,FTransformCollection::TransformGroup);
  lVar22 = (longlong)iVar9;
  uVar25 = uVar20;
  local_7e8 = lVar22;
  if (0 < iVar9) {
    do {
      uVar21 = (uint)uVar20;
      uVar19 = ~uVar21 >> 0x1f;
      uVar18 = 0;
      if ((int)uVar21 < (int)this->_padding_) {
        uVar18 = uVar19;
      }
      if ((uVar18 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pfVar1 = (float *)(uVar25 + this->_padding_);
      fVar3 = *pfVar1;
      fVar4 = pfVar1[1];
      fVar5 = pfVar1[2];
      fVar6 = pfVar1[3];
      uVar18 = 0;
      if ((int)uVar21 < (int)this->_padding_) {
        uVar18 = uVar19;
      }
      if ((uVar18 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pfVar1 = (float *)(uVar25 + 0x10 + this->_padding_);
      local_7d0 = *pfVar1;
      fStack_7cc = pfVar1[1];
      fVar7 = pfVar1[2];
      uVar18 = 0;
      if ((int)uVar21 < (int)this->_padding_) {
        uVar18 = uVar19;
      }
      local_7c8 = fVar7;
      if ((uVar18 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pfVar1 = (float *)(uVar25 + 0x20 + this->_padding_);
      local_7c0 = *pfVar1;
      fStack_7bc = pfVar1[1];
      fVar8 = pfVar1[2];
      local_7b8 = fVar8;
      pbVar12 = std::operator<<<std::char_traits<char>_>
                          ((basic_ostream<char,std::char_traits<char>_> *)local_778,
                           "   FTransform(FQuat(");
      pbVar12 = (basic_ostream<char,std::char_traits<char>_> *)
                std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar12,fVar3);
      pbVar12 = std::operator<<<std::char_traits<char>_>(pbVar12,", ");
      pbVar12 = (basic_ostream<char,std::char_traits<char>_> *)
                std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar12,fVar4);
      pbVar12 = std::operator<<<std::char_traits<char>_>(pbVar12,", ");
      pbVar12 = (basic_ostream<char,std::char_traits<char>_> *)
                std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar12,fVar5);
      pbVar12 = std::operator<<<std::char_traits<char>_>(pbVar12,", ");
      pbVar12 = (basic_ostream<char,std::char_traits<char>_> *)
                std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar12,fVar6);
      pbVar12 = std::operator<<<std::char_traits<char>_>(pbVar12,"), ");
      pbVar12 = std::operator<<<std::char_traits<char>_>(pbVar12,"FVector(");
      pbVar12 = (basic_ostream<char,std::char_traits<char>_> *)
                std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar12,local_7d0);
      pbVar12 = std::operator<<<std::char_traits<char>_>(pbVar12,", ");
      pbVar12 = (basic_ostream<char,std::char_traits<char>_> *)
                std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar12,fStack_7cc);
      pbVar12 = std::operator<<<std::char_traits<char>_>(pbVar12,", ");
      pbVar12 = (basic_ostream<char,std::char_traits<char>_> *)
                std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar12,fVar7);
      pbVar12 = std::operator<<<std::char_traits<char>_>(pbVar12,"), ");
      pbVar12 = std::operator<<<std::char_traits<char>_>(pbVar12,"FVector(");
      pbVar12 = (basic_ostream<char,std::char_traits<char>_> *)
                std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar12,local_7c0);
      pbVar12 = std::operator<<<std::char_traits<char>_>(pbVar12,", ");
      pbVar12 = (basic_ostream<char,std::char_traits<char>_> *)
                std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar12,fStack_7bc);
      pbVar12 = std::operator<<<std::char_traits<char>_>(pbVar12,", ");
      pbVar12 = (basic_ostream<char,std::char_traits<char>_> *)
                std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar12,fVar8);
      pbVar12 = std::operator<<<std::char_traits<char>_>(pbVar12,")), ");
      std::basic_ostream<char,std::char_traits<char>_>::operator<<
                (pbVar12,std::endl<char,std::char_traits<char>_>);
      uVar20 = (ulonglong)(uVar21 + 1);
      local_7e8 = local_7e8 + -1;
      uVar25 = uVar25 + 0x30;
    } while (local_7e8 != 0);
  }
  uVar20 = 0;
  pbVar12 = std::operator<<<std::char_traits<char>_>
                      ((basic_ostream<char,std::char_traits<char>_> *)local_778,"};");
  pbVar12 = (basic_ostream<char,std::char_traits<char>_> *)
            std::basic_ostream<char,std::char_traits<char>_>::operator<<
                      (pbVar12,std::endl<char,std::char_traits<char>_>);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            (pbVar12,std::endl<char,std::char_traits<char>_>);
  pbVar12 = std::operator<<<std::char_traits<char>_>
                      ((basic_ostream<char,std::char_traits<char>_> *)local_778,
                       "const TArray<FGeometryCollectionBoneNode> ");
  if ((param_1->Data).ArrayNum != 0) {
    pwVar24 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pTVar10 = TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::
            TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128><wchar_t>
                      (&local_118,pwVar24);
  pbVar12 = std::operator<<<std::char_traits<char>_>(pbVar12,pTVar10->Ptr);
  pbVar12 = std::operator<<<std::char_traits<char>_>(pbVar12,"::RawBoneHierarchyArray = {");
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            (pbVar12,std::endl<char,std::char_traits<char>_>);
  if ((void *)local_118._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_118._padding_);
  }
  uVar25 = uVar20;
  if (0 < lVar22) {
    do {
      pbVar12 = std::operator<<<std::char_traits<char>_>
                          ((basic_ostream<char,std::char_traits<char>_> *)local_778,
                           "   FGeometryCollectionBoneNode(");
      uVar19 = (uint)uVar20;
      uVar21 = ~uVar19 >> 0x1f;
      uVar18 = 0;
      if ((int)uVar19 < (int)this->_padding_) {
        uVar18 = uVar21;
      }
      if ((uVar18 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pbVar12 = (basic_ostream<char,std::char_traits<char>_> *)
                std::basic_ostream<char,std::char_traits<char>_>::operator<<
                          (pbVar12,*(int *)(this->_padding_ + uVar25 * 4));
      pbVar12 = std::operator<<<std::char_traits<char>_>(pbVar12,", ");
      uVar18 = 0;
      if ((int)uVar19 < *(int *)&(this->SimulationType).field_0x18) {
        uVar18 = uVar21;
      }
      if ((uVar18 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pbVar12 = (basic_ostream<char,std::char_traits<char>_> *)
                std::basic_ostream<char,std::char_traits<char>_>::operator<<
                          (pbVar12,*(int *)(*(longlong *)&(this->SimulationType).field_0x10 +
                                           uVar25 * 4));
      pbVar12 = std::operator<<<std::char_traits<char>_>(pbVar12,"), ");
      uVar18 = 0;
      if ((int)uVar19 < *(int *)&(this->StatusFlags).field_0x18) {
        uVar18 = uVar21;
      }
      if ((uVar18 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pbVar12 = (basic_ostream<char,std::char_traits<char>_> *)
                std::basic_ostream<char,std::char_traits<char>_>::operator<<
                          (pbVar12,*(int *)(*(longlong *)&(this->StatusFlags).field_0x10 +
                                           uVar25 * 4));
      pbVar12 = std::operator<<<std::char_traits<char>_>(pbVar12,"), ");
      std::basic_ostream<char,std::char_traits<char>_>::operator<<
                (pbVar12,std::endl<char,std::char_traits<char>_>);
      uVar20 = (ulonglong)(uVar19 + 1);
      uVar25 = uVar25 + 1;
    } while ((longlong)uVar25 < lVar22);
  }
  pbVar12 = std::operator<<<std::char_traits<char>_>
                      ((basic_ostream<char,std::char_traits<char>_> *)local_778,"};");
  pbVar12 = (basic_ostream<char,std::char_traits<char>_> *)
            std::basic_ostream<char,std::char_traits<char>_>::operator<<
                      (pbVar12,std::endl<char,std::char_traits<char>_>);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            (pbVar12,std::endl<char,std::char_traits<char>_>);
  pbVar13 = std::basic_filebuf<char,std::char_traits<char>_>::close
                      ((basic_filebuf<char,std::char_traits<char>_> *)local_770);
  if (pbVar13 == (basic_filebuf<char,std::char_traits<char>_> *)0x0) {
    std::basic_ios<char,std::char_traits<char>_>::setstate
              ((basic_ios<char,std::char_traits<char>_> *)
               (local_778 + *(int *)((longlong)local_778 + 4)),2,false);
  }
  *(undefined ***)(local_778 + *(int *)((longlong)local_778 + 4)) =
       std::basic_ofstream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)&iStack_77c + (longlong)*(int *)((longlong)local_778 + 4)) =
       *(int *)((longlong)local_778 + 4) + -0xa8;
  std::basic_filebuf<char,std::char_traits<char>_>::~basic_filebuf<char,std::char_traits<char>_>
            ((basic_filebuf<char,std::char_traits<char>_> *)local_770);
  std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)(local_770 + 8));
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(&local_6d0)
  ;
  if (local_7e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7e0.Data.AllocatorInstance.Data);
  }
  return;
}

// WriteDataToOBJFile @ 1440066b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FGeometryCollection::WriteDataToOBJFile
          (FGeometryCollection *this,FString *param_1,FString *param_2,bool param_3,bool param_4)

{
  FScriptContainerElement *pFVar1;
  char *pcVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  FName FVar14;
  bool bVar15;
  int iVar16;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *pTVar17;
  size_t sVar18;
  basic_ostream<char,std::char_traits<char>_> *pbVar19;
  basic_filebuf<char,std::char_traits<char>_> *pbVar20;
  FName *pFVar21;
  TManagedArray<bool> *pTVar22;
  longlong lVar23;
  undefined8 uVar24;
  undefined1 *puVar25;
  ulong64 uVar26;
  ForAnyElementType FVar27;
  uint uVar28;
  ulonglong uVar29;
  uint uVar30;
  longlong lVar31;
  uint uVar32;
  uint uVar33;
  int iVar34;
  ulonglong uVar35;
  FString *pFVar36;
  ulonglong uVar37;
  bool bVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  double dVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar55;
  undefined1 auStackY_508 [32];
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_4c0;
  int local_4b0;
  FGeometryCollection *local_4a8;
  FString local_4a0;
  FString local_490;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_480;
  longlong local_470;
  FString *local_468;
  FString *local_460;
  FString local_458;
  FString local_448;
  FString local_438;
  FString local_428;
  FString local_418;
  FString local_408;
  FString local_3f8;
  FString local_3e8;
  FString local_3d8;
  FString local_3c8;
  FString local_3b8;
  FString local_3a8;
  undefined1 local_398 [8];
  undefined1 local_390 [104];
  codecvt<char,char,_Mbstatet> *local_328;
  bool local_31f;
  _Mbstatet local_31c;
  bool local_314;
  _iobuf *local_310;
  basic_ios<char,std::char_traits<char>_> local_2f0;
  FName local_288;
  FName local_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined1 local_260 [16];
  double local_250;
  _Bxty local_248;
  undefined1 local_238 [16];
  _Bxty local_228;
  undefined1 local_218 [16];
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> local_208;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> local_168;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_508;
  uVar29 = 0;
  local_4b0 = 0;
  local_4a8 = this;
  local_468 = param_2;
  local_460 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FString::FString(&DataFilePath,"D:");
    atexit(`FGeometryCollection::WriteDataToOBJFile'::__l2::
           _dynamic_atexit_destructor_for__DataFilePath__);
    _Init_thread_footer(&::_TSS0);
  }
  iVar16 = FManagedArrayCollection::NumElements((FManagedArrayCollection *)this,VerticesGroup);
  lVar31 = (longlong)iVar16;
  local_4b0 = FManagedArrayCollection::NumElements((FManagedArrayCollection *)this,FacesGroup);
  local_480.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_480.ArrayNum = 0;
  local_480.ArrayMax = 0;
  GeometryCollectionAlgo::GlobalMatrices<UE::Math::TTransform<double>,UE::Math::TTransform<float>_>
            ((TManagedArray<UE::Math::TTransform<float>_> *)&this->_padding_,
             (TManagedArray<int> *)&this->_padding_,&local_480);
  local_4c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4c0.ArrayNum = 0;
  local_4c0.ArrayMax = 0;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNum(&local_4c0,iVar16,Default);
  uVar35 = uVar29;
  uVar37 = uVar29;
  local_470 = lVar31;
  if (0 < iVar16) {
    do {
      uVar32 = (uint)uVar29;
      uVar30 = ~uVar32 >> 0x1f;
      uVar28 = 0;
      if ((int)uVar32 < *(int *)&(this->BoneMap).field_0x18) {
        uVar28 = uVar30;
      }
      if ((uVar28 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar28 = *(uint *)(*(longlong *)&(this->BoneMap).field_0x10 + uVar37 * 4);
      uVar33 = 0;
      if ((int)uVar28 < local_480.ArrayNum) {
        uVar33 = ~uVar28 >> 0x1f;
      }
      if ((uVar33 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar23 = (longlong)(int)uVar28 * 0x60;
      auVar39 = *(undefined1 (*) [16])(local_480.AllocatorInstance.Data + lVar23);
      auVar47 = *(undefined1 (*) [16])(local_480.AllocatorInstance.Data + lVar23 + 0x10);
      dVar4 = *(double *)(local_480.AllocatorInstance.Data + lVar23 + 0x20);
      dVar6 = *(double *)(local_480.AllocatorInstance.Data + lVar23 + 0x20 + 8);
      dVar13 = *(double *)(local_480.AllocatorInstance.Data + lVar23 + 0x30);
      dVar11 = *(double *)(local_480.AllocatorInstance.Data + lVar23 + 0x40);
      dVar12 = *(double *)(local_480.AllocatorInstance.Data + lVar23 + 0x40 + 8);
      dVar7 = *(double *)(local_480.AllocatorInstance.Data + lVar23 + 0x50);
      dVar8 = *(double *)(local_480.AllocatorInstance.Data + lVar23 + 0x50 + 8);
      uVar28 = 0;
      if ((int)uVar32 < *(int *)&(this->Vertex).field_0x18) {
        uVar28 = uVar30;
      }
      if ((uVar28 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar23 = *(longlong *)&(this->Vertex).field_0x10;
      dVar48 = auVar39._8_8_;
      dVar9 = auVar47._0_8_;
      dVar10 = auVar47._8_8_;
      local_278 = (double)*(float *)(lVar23 + uVar35);
      uVar28 = 0;
      if ((int)uVar32 < local_4c0.ArrayNum) {
        uVar28 = uVar30;
      }
      dStack_270 = (double)*(float *)(lVar23 + 4 + uVar35);
      local_268 = (double)*(float *)(lVar23 + 8 + uVar35);
      dVar7 = local_268 * dVar7;
      dVar8 = dVar8 * 0.0;
      dVar11 = dVar11 * local_278;
      dVar12 = dVar12 * dStack_270;
      uVar49 = (undefined4)((ulonglong)dVar12 >> 0x20);
      auVar52._8_4_ = SUB84(dVar12,0);
      auVar52._0_8_ = dVar11;
      auVar52._12_4_ = uVar49;
      auVar51._8_4_ = auVar47._0_4_;
      auVar51._0_8_ = dVar48;
      auVar51._12_4_ = auVar47._4_4_;
      auVar40._8_4_ = SUB84(dVar12,0);
      auVar40._0_8_ = dVar11;
      auVar40._12_4_ = uVar49;
      auVar41._8_4_ = SUB84(dVar8,0);
      auVar41._0_8_ = dVar7;
      auVar41._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      auVar41 = blendpd(auVar40,auVar41,2);
      auVar53._0_8_ = auVar52._8_8_ * auVar39._0_8_ - dVar48 * dVar11;
      auVar53._8_8_ = dVar7 * dVar48 - auVar51._8_8_ * dVar12;
      auVar51 = blendpd(auVar39,auVar47,2);
      auVar42._0_8_ = auVar41._0_8_ * dVar9 - auVar51._0_8_ * dVar7;
      auVar42._8_8_ = auVar41._8_8_ * dVar10 - auVar51._8_8_ * dVar8;
      dVar8 = auVar53._8_8_ + auVar53._8_8_;
      dVar5 = auVar42._0_8_ + auVar42._0_8_;
      uVar49 = SUB84(dVar5,0);
      uVar50 = (undefined4)((ulonglong)dVar5 >> 0x20);
      auVar41 = blendpd(auVar53,auVar42,2);
      auVar45._8_4_ = uVar49;
      auVar45._0_8_ = dVar8;
      auVar45._12_4_ = uVar50;
      auVar47._8_4_ = uVar49;
      auVar47._0_8_ = dVar8;
      auVar47._12_4_ = uVar50;
      auVar43._8_4_ = uVar49;
      auVar43._0_8_ = dVar8;
      auVar43._12_4_ = uVar50;
      auVar54._0_8_ = auVar41._0_8_ + auVar41._0_8_;
      auVar54._8_8_ = auVar41._8_8_ + auVar41._8_8_;
      auVar41 = blendpd(auVar43,auVar54,2);
      auVar46._0_8_ = auVar45._8_8_ * auVar39._0_8_ - dVar8 * dVar48;
      auVar46._8_8_ = auVar54._0_8_ * dVar48 - auVar47._8_8_ * dVar9;
      auVar44._0_8_ = auVar41._0_8_ * dVar9 - auVar51._0_8_ * auVar54._0_8_;
      auVar44._8_8_ = auVar41._8_8_ * dVar10 - auVar51._8_8_ * auVar54._8_8_;
      auVar39._8_4_ = SUB84(auVar46._8_8_,0);
      auVar39._0_8_ = auVar46._0_8_;
      auVar39._12_4_ = (int)((ulonglong)auVar46._8_8_ >> 0x20);
      auVar47 = blendpd(auVar46,auVar44,2);
      dVar4 = dVar8 * dVar10 + dVar11 + auVar39._8_8_ + dVar4;
      dVar6 = dVar5 * dVar10 + dVar12 + auVar44._0_8_ + dVar6;
      local_260._8_4_ = SUB84(dVar6,0);
      local_260._0_8_ = dVar4;
      local_260._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      local_250 = dVar10 * auVar54._0_8_ + dVar7 + auVar47._0_8_ + dVar13;
      fVar55 = (float)local_250;
      if ((uVar28 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar29 = (ulonglong)(uVar32 + 1);
      uVar37 = uVar37 + 1;
      *(float *)(local_4c0.AllocatorInstance.Data + uVar35) = (float)dVar4;
      *(float *)(local_4c0.AllocatorInstance.Data + uVar35 + 4) = (float)dVar6;
      *(float *)(local_4c0.AllocatorInstance.Data + uVar35 + 8) = fVar55;
      param_2 = local_468;
      uVar35 = uVar35 + 0xc;
    } while ((longlong)uVar37 < lVar31);
  }
  local_398 = (undefined1  [8])&std::basic_ofstream<char,std::char_traits<char>_>::_vbtable_;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>(&local_2f0);
  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)local_398,
             (basic_streambuf<char,std::char_traits<char>_> *)local_390,false);
  *(undefined ***)(local_398 + *(int *)((longlong)local_398 + 4)) =
       std::basic_ofstream<char,std::char_traits<char>_>::vftable;
  *(int *)(local_398 + (longlong)*(int *)((longlong)local_398 + 4) + -4) =
       *(int *)((longlong)local_398 + 4) + -0xa8;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)local_390);
  local_314 = false;
  local_390._0_8_ = std::basic_filebuf<char,std::char_traits<char>_>::vftable;
  local_31f = false;
  std::basic_streambuf<char,std::char_traits<char>_>::_Init
            ((basic_streambuf<char,std::char_traits<char>_> *)local_390);
  local_310 = (_iobuf *)0x0;
  local_328 = (codecvt<char,char,_Mbstatet> *)0x0;
  bVar15 = false;
  local_31c = `protected:_void___cdecl_std::basic_filebuf<char,std::char_traits<char>_>::_Init(_iobuf*___ptr64,std::basic_filebuf<char,struct_std::char_traits<char>_>::_Initfl)___ptr64'
              ::__l2::_Stinit;
  if (param_3) {
    FVar27.Data = local_458.Data.AllocatorInstance.Data;
    if ((param_2->Data).ArrayNum < 2) {
LAB_144006c08:
      param_2 = &DataFilePath;
    }
    else {
      ::FString::FString(&local_458,L"None");
      FVar27.Data = local_458.Data.AllocatorInstance.Data;
      iVar34 = (param_2->Data).ArrayNum;
      if (iVar34 == local_458.Data.ArrayNum) {
        if (iVar34 < 2) {
          bVar15 = true;
          goto LAB_144006c08;
        }
        iVar34 = wcscmp((wchar_t *)(param_2->Data).AllocatorInstance.Data,
                        (wchar_t *)local_458.Data.AllocatorInstance.Data);
        bVar38 = iVar34 == 0;
      }
      else {
        bVar38 = iVar34 + local_458.Data.ArrayNum == 1;
      }
      bVar15 = true;
      if (bVar38) goto LAB_144006c08;
    }
    local_4a0.Data.ArrayNum = (param_2->Data).ArrayNum;
    lVar23 = (longlong)local_4a0.Data.ArrayNum;
    pFVar1 = (param_2->Data).AllocatorInstance.Data;
    local_4a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_4a0.Data.ArrayNum == 0) {
      local_4a0.Data.ArrayMax = 0;
      local_458.Data.AllocatorInstance.Data = FVar27.Data;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_4a0.Data.ArrayNum,0,(ForAnyElementType *)&local_4a0,
                 local_4a0.Data.ArrayNum,&local_4a0.Data.ArrayMax);
      memcpy(local_4a0.Data.AllocatorInstance.Data,pFVar1,lVar23 * 2);
    }
    uVar29 = 0;
    if ((bVar15) && (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_458.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_438,"\\");
    FVar27.Data = (FScriptContainerElement *)L"";
    if (local_438.Data.ArrayNum != 0) {
      FVar27.Data = local_438.Data.AllocatorInstance.Data;
    }
    iVar34 = local_438.Data.ArrayNum + -1;
    if (local_438.Data.ArrayNum == 0) {
      iVar34 = 0;
    }
    ::FString::RemoveFromEnd(&local_4a0,(wchar_t *)FVar27.Data,iVar34,IgnoreCase);
    if (local_438.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_438.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_3d8,".obj");
    ::FString::FString(&local_3e8,"\\");
    ::FString::ConcatFF(&local_3f8,&local_3e8,local_460);
    ::FString::ConcatFF(&local_428,&local_3f8,&local_3d8);
    iVar34 = local_428.Data.ArrayNum + -1;
    if (local_428.Data.ArrayNum == 0) {
      iVar34 = 0;
    }
    ::FString::AppendChars(&local_4a0,(wchar_t *)local_428.Data.AllocatorInstance.Data,iVar34);
    if (local_428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_428.Data.AllocatorInstance.Data);
    }
    if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
    }
    if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
    }
    if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
    }
    FVar27.Data = (FScriptContainerElement *)L"";
    if (local_4a0.Data.ArrayNum != 0) {
      FVar27.Data = local_4a0.Data.AllocatorInstance.Data;
    }
    pTVar17 = TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::
              TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128><wchar_t>
                        (&local_208,(wchar_t *)FVar27.Data);
    local_238 = ZEXT816(0);
    pcVar2 = pTVar17->Ptr;
    local_248._Ptr = (char *)0x0;
    local_248._8_8_ = 0;
    sVar18 = strlen(pcVar2);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_248,pcVar2,
               sVar18);
    std::basic_ofstream<char,std::char_traits<char>_>::open
              ((basic_ofstream<char,std::char_traits<char>_> *)local_398,
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_248,2,0x40)
    ;
    if (0xf < (ulonglong)local_238._8_8_) {
      uVar26 = local_238._8_8_ + 1;
      uVar24 = local_248._Ptr;
      if (0xfff < uVar26) {
        uVar24 = *(undefined8 *)(local_248._Ptr + -8);
        uVar26 = local_238._8_8_ + 0x28;
        if ((char *)0x1f < local_248._Ptr + (-8 - uVar24)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar24,uVar26);
    }
    local_248._Ptr = local_248._Ptr & 0xffffffffffffff00;
    local_238._8_8_ = _UNK_15076add8;
    local_238._0_8_ = ___xmm_000000000000000f0000000000000000;
    if ((void *)local_208._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_208._padding_);
    }
    pbVar19 = std::operator<<<std::char_traits<char>_>
                        ((basic_ostream<char,std::char_traits<char>_> *)local_398,
                         "# File exported from Unreal Engine");
    std::basic_ostream<char,std::char_traits<char>_>::operator<<
              (pbVar19,std::endl<char,std::char_traits<char>_>);
    pbVar19 = std::operator<<<std::char_traits<char>_>
                        ((basic_ostream<char,std::char_traits<char>_> *)local_398,"# ");
    pbVar19 = (basic_ostream<char,std::char_traits<char>_> *)
              std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar19,iVar16);
    pbVar19 = std::operator<<<std::char_traits<char>_>(pbVar19," points");
    std::basic_ostream<char,std::char_traits<char>_>::operator<<
              (pbVar19,std::endl<char,std::char_traits<char>_>);
    pbVar19 = std::operator<<<std::char_traits<char>_>
                        ((basic_ostream<char,std::char_traits<char>_> *)local_398,"# ");
    pbVar19 = (basic_ostream<char,std::char_traits<char>_> *)
              std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar19,iVar16 * 3);
    pbVar19 = std::operator<<<std::char_traits<char>_>(pbVar19," vertices");
    std::basic_ostream<char,std::char_traits<char>_>::operator<<
              (pbVar19,std::endl<char,std::char_traits<char>_>);
    pbVar19 = std::operator<<<std::char_traits<char>_>
                        ((basic_ostream<char,std::char_traits<char>_> *)local_398,"# ");
    pbVar19 = (basic_ostream<char,std::char_traits<char>_> *)
              std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar19,local_4b0);
    pbVar19 = std::operator<<<std::char_traits<char>_>(pbVar19," primitives");
    std::basic_ostream<char,std::char_traits<char>_>::operator<<
              (pbVar19,std::endl<char,std::char_traits<char>_>);
    pbVar19 = std::operator<<<std::char_traits<char>_>
                        ((basic_ostream<char,std::char_traits<char>_> *)local_398,"g");
    std::basic_ostream<char,std::char_traits<char>_>::operator<<
              (pbVar19,std::endl<char,std::char_traits<char>_>);
    uVar35 = uVar29;
    if (0 < lVar31) {
      do {
        pbVar19 = std::operator<<<std::char_traits<char>_>
                            ((basic_ostream<char,std::char_traits<char>_> *)local_398,"v ");
        uVar32 = (uint)uVar29;
        uVar30 = ~uVar32 >> 0x1f;
        uVar28 = 0;
        if ((int)uVar32 < local_4c0.ArrayNum) {
          uVar28 = uVar30;
        }
        if ((uVar28 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pbVar19 = (basic_ostream<char,std::char_traits<char>_> *)
                  std::basic_ostream<char,std::char_traits<char>_>::operator<<
                            (pbVar19,*(float *)(local_4c0.AllocatorInstance.Data + uVar35));
        pbVar19 = std::operator<<<std::char_traits<char>_>(pbVar19," ");
        uVar28 = 0;
        if ((int)uVar32 < local_4c0.ArrayNum) {
          uVar28 = uVar30;
        }
        if ((uVar28 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pbVar19 = (basic_ostream<char,std::char_traits<char>_> *)
                  std::basic_ostream<char,std::char_traits<char>_>::operator<<
                            (pbVar19,*(float *)(local_4c0.AllocatorInstance.Data + uVar35 + 4));
        pbVar19 = std::operator<<<std::char_traits<char>_>(pbVar19," ");
        uVar28 = 0;
        if ((int)uVar32 < local_4c0.ArrayNum) {
          uVar28 = uVar30;
        }
        if ((uVar28 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pbVar19 = (basic_ostream<char,std::char_traits<char>_> *)
                  std::basic_ostream<char,std::char_traits<char>_>::operator<<
                            (pbVar19,*(float *)(local_4c0.AllocatorInstance.Data + uVar35 + 8));
        std::basic_ostream<char,std::char_traits<char>_>::operator<<
                  (pbVar19,std::endl<char,std::char_traits<char>_>);
        uVar29 = (ulonglong)(uVar32 + 1);
        lVar31 = lVar31 + -1;
        this = local_4a8;
        uVar35 = uVar35 + 0xc;
      } while (lVar31 != 0);
    }
    lVar23 = 0;
    pbVar19 = std::operator<<<std::char_traits<char>_>
                        ((basic_ostream<char,std::char_traits<char>_> *)local_398,"g");
    std::basic_ostream<char,std::char_traits<char>_>::operator<<
              (pbVar19,std::endl<char,std::char_traits<char>_>);
    lVar31 = (longlong)local_4b0;
    uVar28 = 0;
    if (0 < lVar31) {
      do {
        local_4a8 = (FGeometryCollection *)
                    std::operator<<<std::char_traits<char>_>
                              ((basic_ostream<char,std::char_traits<char>_> *)local_398,"f ");
        uVar30 = ~uVar28 >> 0x1f;
        uVar32 = 0;
        if ((int)uVar28 < *(int *)&(this->Indices).field_0x18) {
          uVar32 = uVar30;
        }
        if ((uVar32 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pbVar19 = (basic_ostream<char,std::char_traits<char>_> *)
                  std::basic_ostream<char,std::char_traits<char>_>::operator<<
                            ((basic_ostream<char,std::char_traits<char>_> *)local_4a8,
                             *(int *)(lVar23 + *(longlong *)&(this->Indices).field_0x10) + 1);
        local_4a8 = (FGeometryCollection *)std::operator<<<std::char_traits<char>_>(pbVar19," ");
        uVar32 = 0;
        if ((int)uVar28 < *(int *)&(this->Indices).field_0x18) {
          uVar32 = uVar30;
        }
        if ((uVar32 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pbVar19 = (basic_ostream<char,std::char_traits<char>_> *)
                  std::basic_ostream<char,std::char_traits<char>_>::operator<<
                            ((basic_ostream<char,std::char_traits<char>_> *)local_4a8,
                             *(int *)(lVar23 + 8 + *(longlong *)&(this->Indices).field_0x10) + 1);
        local_4a8 = (FGeometryCollection *)std::operator<<<std::char_traits<char>_>(pbVar19," ");
        uVar32 = 0;
        if ((int)uVar28 < *(int *)&(this->Indices).field_0x18) {
          uVar32 = uVar30;
        }
        if ((uVar32 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pbVar19 = (basic_ostream<char,std::char_traits<char>_> *)
                  std::basic_ostream<char,std::char_traits<char>_>::operator<<
                            ((basic_ostream<char,std::char_traits<char>_> *)local_4a8,
                             *(int *)(*(longlong *)&(this->Indices).field_0x10 + 4 + lVar23) + 1);
        std::basic_ostream<char,std::char_traits<char>_>::operator<<
                  (pbVar19,std::endl<char,std::char_traits<char>_>);
        uVar28 = uVar28 + 1;
        lVar23 = lVar23 + 0xc;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
    }
    std::basic_ostream<char,std::char_traits<char>_>::operator<<
              ((basic_ostream<char,std::char_traits<char>_> *)local_398,
               std::endl<char,std::char_traits<char>_>);
    pbVar20 = std::basic_filebuf<char,std::char_traits<char>_>::close
                        ((basic_filebuf<char,std::char_traits<char>_> *)local_390);
    if (pbVar20 == (basic_filebuf<char,std::char_traits<char>_> *)0x0) {
      std::basic_ios<char,std::char_traits<char>_>::setstate
                ((basic_ios<char,std::char_traits<char>_> *)
                 (local_398 + *(int *)((longlong)local_398 + 4)),2,false);
    }
    lVar31 = local_470;
    if (local_4a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4a0.Data.AllocatorInstance.Data);
      lVar31 = local_470;
    }
  }
  FVar14 = VerticesGroup;
  bVar15 = false;
  uVar28 = 1;
  if (!param_4) goto LAB_1440078ea;
  pFVar21 = ::FName::FName(&local_288,"VertexVisibility");
  bVar38 = FManagedArrayCollection::HasAttribute((FManagedArrayCollection *)this,*pFVar21,FVar14);
  pFVar36 = local_468;
  if (!bVar38) goto LAB_1440078ea;
  FVar27.Data = local_448.Data.AllocatorInstance.Data;
  if ((local_468->Data).ArrayNum < 2) {
LAB_14400737d:
    pFVar36 = &DataFilePath;
  }
  else {
    ::FString::FString(&local_448,L"None");
    FVar27.Data = local_448.Data.AllocatorInstance.Data;
    bVar15 = true;
    iVar34 = (pFVar36->Data).ArrayNum;
    if (iVar34 == local_448.Data.ArrayNum) {
      if (iVar34 < 2) goto LAB_14400737d;
      iVar34 = wcscmp((wchar_t *)(pFVar36->Data).AllocatorInstance.Data,
                      (wchar_t *)local_448.Data.AllocatorInstance.Data);
      bVar38 = iVar34 == 0;
    }
    else {
      bVar38 = iVar34 + local_448.Data.ArrayNum == 1;
    }
    if (bVar38) goto LAB_14400737d;
  }
  local_490.Data.ArrayNum = (pFVar36->Data).ArrayNum;
  lVar23 = (longlong)local_490.Data.ArrayNum;
  pFVar1 = (pFVar36->Data).AllocatorInstance.Data;
  local_490.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_490.Data.ArrayNum == 0) {
    local_490.Data.ArrayMax = 0;
    local_448.Data.AllocatorInstance.Data = FVar27.Data;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_490.Data.ArrayNum,0,(ForAnyElementType *)&local_490,local_490.Data.ArrayNum
               ,&local_490.Data.ArrayMax);
    memcpy(local_490.Data.AllocatorInstance.Data,pFVar1,lVar23 * 2);
  }
  if ((bVar15) && (local_448.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_448.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_418,"\\");
  lVar23 = 0;
  uVar32 = 1;
  iVar34 = local_418.Data.ArrayNum + -1;
  FVar27.Data = local_418.Data.AllocatorInstance.Data;
  if (local_418.Data.ArrayNum == 0) {
    iVar34 = 0;
    FVar27.Data = (FScriptContainerElement *)L"";
  }
  ::FString::RemoveFromEnd(&local_490,(wchar_t *)FVar27.Data,iVar34,IgnoreCase);
  if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_418.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_3a8,"_VertexVisibility.obj");
  ::FString::FString(&local_3b8,"\\");
  ::FString::ConcatFF(&local_3c8,&local_3b8,local_460);
  ::FString::ConcatFF(&local_408,&local_3c8,&local_3a8);
  iVar34 = local_408.Data.ArrayNum + -1;
  if (local_408.Data.ArrayNum == 0) {
    iVar34 = 0;
  }
  ::FString::AppendChars(&local_490,(wchar_t *)local_408.Data.AllocatorInstance.Data,iVar34);
  if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_408.Data.AllocatorInstance.Data);
  }
  if (local_3c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3c8.Data.AllocatorInstance.Data);
  }
  if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
  }
  if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
  }
  FVar27.Data = (FScriptContainerElement *)L"";
  if (local_490.Data.ArrayNum != 0) {
    FVar27.Data = local_490.Data.AllocatorInstance.Data;
  }
  pTVar17 = TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::
            TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128><wchar_t>
                      (&local_168,(wchar_t *)FVar27.Data);
  local_218 = ZEXT816(0);
  pcVar2 = pTVar17->Ptr;
  local_228._Ptr = (char *)0x0;
  local_228._8_8_ = 0;
  sVar18 = strlen(pcVar2);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_228,pcVar2,
             sVar18);
  std::basic_ofstream<char,std::char_traits<char>_>::open
            ((basic_ofstream<char,std::char_traits<char>_> *)local_398,
             (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_228,2,0x40);
  if (0xf < (ulonglong)local_218._8_8_) {
    uVar26 = local_218._8_8_ + 1;
    uVar24 = local_228._Ptr;
    if (0xfff < uVar26) {
      uVar24 = *(undefined8 *)(local_228._Ptr + -8);
      uVar26 = local_218._8_8_ + 0x28;
      if ((char *)0x1f < local_228._Ptr + (-8 - uVar24)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)uVar24,uVar26);
  }
  local_228._Ptr = local_228._Ptr & 0xffffffffffffff00;
  local_218._8_8_ = _UNK_15076add8;
  local_218._0_8_ = ___xmm_000000000000000f0000000000000000;
  if ((void *)local_168._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_168._padding_);
  }
  pbVar19 = std::operator<<<std::char_traits<char>_>
                      ((basic_ostream<char,std::char_traits<char>_> *)local_398,
                       "# Vertex Visibility - vertices whose visibility flag are true");
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            (pbVar19,std::endl<char,std::char_traits<char>_>);
  FVar14 = VerticesGroup;
  pFVar21 = ::FName::FName(&local_280,"VertexVisibility");
  pTVar22 = FManagedArrayCollection::ModifyAttribute<bool>
                      ((FManagedArrayCollection *)this,*pFVar21,FVar14);
  iVar34 = 0;
  uVar30 = 0;
  if (0 < iVar16) {
    do {
      if ((*(int *)&pTVar22->field_0x28 <= (int)uVar30) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5c6,L""), bVar15)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      puVar25 = &pTVar22->field_0x10;
      if (*(undefined1 **)&pTVar22->field_0x20 != (undefined1 *)0x0) {
        puVar25 = *(undefined1 **)&pTVar22->field_0x20;
      }
      if ((*(uint *)(puVar25 + (ulonglong)(uVar30 >> 5) * 4) & uVar32) != 0) {
        iVar34 = iVar34 + 1;
      }
      uVar30 = uVar30 + 1;
      uVar32 = uVar32 << 1 | (uint)((int)uVar32 < 0);
    } while ((int)uVar30 < iVar16);
  }
  pbVar19 = std::operator<<<std::char_traits<char>_>
                      ((basic_ostream<char,std::char_traits<char>_> *)local_398,"# ");
  pbVar19 = (basic_ostream<char,std::char_traits<char>_> *)
            std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar19,iVar34);
  pbVar19 = std::operator<<<std::char_traits<char>_>(pbVar19," Vertices");
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            (pbVar19,std::endl<char,std::char_traits<char>_>);
  pbVar19 = std::operator<<<std::char_traits<char>_>
                      ((basic_ostream<char,std::char_traits<char>_> *)local_398,"g");
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            (pbVar19,std::endl<char,std::char_traits<char>_>);
  uVar32 = 0;
  if (0 < lVar31) {
    do {
      if ((((int)uVar32 < 0) || (*(int *)&pTVar22->field_0x28 <= (int)uVar32)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5c6,L""), bVar15)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      puVar25 = &pTVar22->field_0x10;
      if (*(undefined1 **)&pTVar22->field_0x20 != (undefined1 *)0x0) {
        puVar25 = *(undefined1 **)&pTVar22->field_0x20;
      }
      uVar30 = uVar32;
      if ((int)uVar32 < 0) {
        uVar30 = uVar32 + 0x1f;
      }
      if ((*(uint *)(puVar25 + (longlong)((int)uVar30 >> 5) * 4) & uVar28) != 0) {
        pbVar19 = std::operator<<<std::char_traits<char>_>
                            ((basic_ostream<char,std::char_traits<char>_> *)local_398,"v ");
        uVar33 = ~uVar32 >> 0x1f;
        uVar30 = 0;
        if ((int)uVar32 < local_4c0.ArrayNum) {
          uVar30 = uVar33;
        }
        if ((uVar30 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pbVar19 = (basic_ostream<char,std::char_traits<char>_> *)
                  std::basic_ostream<char,std::char_traits<char>_>::operator<<
                            (pbVar19,*(float *)(local_4c0.AllocatorInstance.Data + lVar23));
        pbVar19 = std::operator<<<std::char_traits<char>_>(pbVar19," ");
        uVar30 = 0;
        if ((int)uVar32 < local_4c0.ArrayNum) {
          uVar30 = uVar33;
        }
        if ((uVar30 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pbVar19 = (basic_ostream<char,std::char_traits<char>_> *)
                  std::basic_ostream<char,std::char_traits<char>_>::operator<<
                            (pbVar19,*(float *)(local_4c0.AllocatorInstance.Data + lVar23 + 4));
        pbVar19 = std::operator<<<std::char_traits<char>_>(pbVar19," ");
        uVar30 = 0;
        if ((int)uVar32 < local_4c0.ArrayNum) {
          uVar30 = uVar33;
        }
        if ((uVar30 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pbVar19 = (basic_ostream<char,std::char_traits<char>_> *)
                  std::basic_ostream<char,std::char_traits<char>_>::operator<<
                            (pbVar19,*(float *)(local_4c0.AllocatorInstance.Data + lVar23 + 8));
        std::basic_ostream<char,std::char_traits<char>_>::operator<<
                  (pbVar19,std::endl<char,std::char_traits<char>_>);
      }
      uVar32 = uVar32 + 1;
      uVar28 = uVar28 << 1 | (uint)((int)uVar28 < 0);
      lVar23 = lVar23 + 0xc;
      lVar31 = lVar31 + -1;
    } while (lVar31 != 0);
  }
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)local_398,
             std::endl<char,std::char_traits<char>_>);
  pbVar20 = std::basic_filebuf<char,std::char_traits<char>_>::close
                      ((basic_filebuf<char,std::char_traits<char>_> *)local_390);
  if (pbVar20 == (basic_filebuf<char,std::char_traits<char>_> *)0x0) {
    std::basic_ios<char,std::char_traits<char>_>::setstate
              ((basic_ios<char,std::char_traits<char>_> *)
               (local_398 + *(int *)((longlong)local_398 + 4)),2,false);
  }
  if (local_490.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_490.Data.AllocatorInstance.Data);
  }
LAB_1440078ea:
  *(undefined ***)(local_398 + *(int *)((longlong)local_398 + 4)) =
       std::basic_ofstream<char,std::char_traits<char>_>::vftable;
  *(int *)(local_398 + (longlong)*(int *)((longlong)local_398 + 4) + -4) =
       *(int *)((longlong)local_398 + 4) + -0xa8;
  std::basic_filebuf<char,std::char_traits<char>_>::~basic_filebuf<char,std::char_traits<char>_>
            ((basic_filebuf<char,std::char_traits<char>_> *)local_390);
  std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)(local_390 + 8));
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(&local_2f0)
  ;
  if (local_4c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4c0.AllocatorInstance.Data);
  }
  if (local_480.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_480.AllocatorInstance.Data);
  }
  return;
}

