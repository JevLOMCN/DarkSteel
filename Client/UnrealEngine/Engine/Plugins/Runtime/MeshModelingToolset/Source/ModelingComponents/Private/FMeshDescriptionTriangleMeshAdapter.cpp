// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 3

// GetNormal @ 14cb11430

TVector<float> * __thiscall
FMeshDescriptionTriangleMeshAdapter::GetNormal
          (FMeshDescriptionTriangleMeshAdapter *this,TVector<float> *__return_storage_ptr__,
          int param_1)

{
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *this_00;
  TVector<float> *pTVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 local_18;
  float local_10;
  
  this_00 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                      ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                       (this->VertexInstanceNormals).ArrayPtr,0);
  pTVar1 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(this_00,param_1);
  if (this->bScaleNormals == false) {
    local_18 = *(undefined8 *)&pTVar1->field0_0x0;
    local_10 = (pTVar1->field0_0x0)._s_0.Z;
  }
  else {
    fVar3 = (float)((double)(pTVar1->field0_0x0)._s_0.X / (this->BuildScale).field0_0x0._s_0.X);
    fVar4 = (float)((double)(pTVar1->field0_0x0)._s_0.Y / (this->BuildScale).field0_0x0._s_0.Y);
    local_10 = (float)((double)(pTVar1->field0_0x0)._s_0.Z / (this->BuildScale).field0_0x0._s_0.Z);
    fVar2 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + local_10 * local_10);
    if (fVar2 <= 0.0) {
      local_18 = 0;
      local_10 = 0.0;
    }
    else {
      fVar2 = __real_3f800000 / fVar2;
      local_10 = fVar2 * local_10;
      local_18 = CONCAT44(fVar2 * fVar4,fVar2 * fVar3);
    }
  }
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = local_18;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_10;
  return __return_storage_ptr__;
}

// GetUV @ 14cb15290

TVector2<float> __thiscall
FMeshDescriptionTriangleMeshAdapter::GetUV
          (FMeshDescriptionTriangleMeshAdapter *this,int param_1,int param_2)

{
  FMeshAttributeArraySetBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  TVector2<float> TVar4;
  uint uVar5;
  undefined4 in_register_00000014;
  TVector2<float>_u_0 TVar6;
  FMeshAttributeArraySetBase *pFVar7;
  uint uVar8;
  uint in_R9D;
  
  TVar6._s_0.Y = (float)in_register_00000014;
  TVar6._s_0.X = (float)param_1;
  pFVar1 = (this->VertexInstanceUVs).ArrayPtr;
  uVar5 = 0;
  if ((int)in_R9D < (int)pFVar1[2].Type) {
    uVar5 = ~in_R9D >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar4.field0_0x0 = (TVector2<float>_u_0)(*pcVar2)();
      return (TVector2<float>)TVar4.field0_0x0;
    }
  }
  pFVar7 = (FMeshAttributeArraySetBase *)pFVar1[2]._padding_;
  if ((FMeshAttributeArraySetBase *)pFVar1[2]._padding_ == (FMeshAttributeArraySetBase *)0x0) {
    pFVar7 = pFVar1 + 1;
  }
  uVar8 = param_2 * pFVar7[(int)in_R9D].NumElements;
  uVar5 = 0;
  if ((int)uVar8 < (int)pFVar7[(int)in_R9D].Type) {
    uVar5 = ~uVar8 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar4.field0_0x0 = (TVector2<float>_u_0)(*pcVar2)();
      return (TVector2<float>)TVar4.field0_0x0;
    }
  }
  *(undefined8 *)TVar6 = *(undefined8 *)(pFVar7[(int)in_R9D]._padding_ + (longlong)(int)uVar8 * 8);
  return (TVector2<float>)TVar6;
}

// GetVertex @ 14cb15510

TVector<double> * __thiscall
FMeshDescriptionTriangleMeshAdapter::GetVertex
          (FMeshDescriptionTriangleMeshAdapter *this,TVector<double> *__return_storage_ptr__,
          int param_1)

{
  float fVar1;
  float fVar2;
  double dVar3;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *this_00;
  TVector<float> *pTVar4;
  
  this_00 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                      ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                       (this->VertexPositions).ArrayPtr,0);
  pTVar4 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(this_00,param_1);
  fVar1 = (pTVar4->field0_0x0)._s_0.Y;
  dVar3 = (this->BuildScale).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (double)(pTVar4->field0_0x0)._s_0.X * (this->BuildScale).field0_0x0._s_0.X;
  fVar2 = (pTVar4->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar1 * dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)fVar2 * (this->BuildScale).field0_0x0._s_0.Z
  ;
  return __return_storage_ptr__;
}

