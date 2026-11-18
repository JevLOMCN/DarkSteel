// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SkeletalMeshDescription
// Functions: 6

// operator[]<FTriangleID,0> @ 14438c560

TArrayView<FVertexID_const_,int> * __thiscall
TMeshAttributesRef<FTriangleID,TArrayView<FVertexID_const_,int>_>::operator[]<FTriangleID,0>
          (TMeshAttributesRef<FTriangleID,TArrayView<FVertexID_const_,int>_> *this,
          TArrayView<FVertexID_const_,int> *__return_storage_ptr__,FTriangleID param_1)

{
  FMeshAttributeArraySetBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FVertexID_const_,int> *pTVar4;
  FVertexID *pFVar5;
  uint uVar6;
  uint uVar7;
  longlong *plVar8;
  FMeshAttributeArraySetBase *pFVar9;
  
  pFVar1 = this->ArrayPtr;
  if (this->Extent == 0) {
    if ((int)pFVar1[2].Type < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TArrayView<FVertexID_const_,int> *)(*pcVar2)();
        return pTVar4;
      }
    }
    pFVar9 = (FMeshAttributeArraySetBase *)pFVar1[2]._padding_;
    if ((FMeshAttributeArraySetBase *)pFVar1[2]._padding_ == (FMeshAttributeArraySetBase *)0x0) {
      pFVar9 = pFVar1 + 1;
    }
    uVar6 = (int)param_1 >> 8;
    uVar7 = 0;
    if ((int)uVar6 < (int)pFVar9->Type) {
      uVar7 = ~uVar6 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TArrayView<FVertexID_const_,int> *)(*pcVar2)();
        return pTVar4;
      }
    }
    plVar8 = (longlong *)((longlong)(int)uVar6 * 0xc18 + pFVar9->_padding_);
    pFVar5 = (FVertexID *)
             (*plVar8 +
             (longlong)*(int *)((longlong)plVar8 + ((ulonglong)(uint)param_1 & 0xff) * 4 + 0x10) * 4
             );
    uVar7 = *(uint *)((longlong)plVar8 + ((ulonglong)(uint)param_1 & 0xff) * 4 + 0x410);
  }
  else {
    if ((int)pFVar1[2].Type < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TArrayView<FVertexID_const_,int> *)(*pcVar2)();
        return pTVar4;
      }
    }
    pFVar9 = (FMeshAttributeArraySetBase *)pFVar1[2]._padding_;
    if ((FMeshAttributeArraySetBase *)pFVar1[2]._padding_ == (FMeshAttributeArraySetBase *)0x0) {
      pFVar9 = pFVar1 + 1;
    }
    uVar6 = (int)param_1 * pFVar9->NumElements;
    uVar7 = 0;
    if ((int)uVar6 < (int)pFVar9->Type) {
      uVar7 = ~uVar6 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TArrayView<FVertexID_const_,int> *)(*pcVar2)();
        return pTVar4;
      }
    }
    pFVar5 = (FVertexID *)(pFVar9->_padding_ + (longlong)(int)uVar6 * 4);
    uVar7 = this->Extent;
  }
  __return_storage_ptr__->ArrayNum = uVar7;
  __return_storage_ptr__->DataPtr = pFVar5;
  if ((int)uVar7 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<FVertexID_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// Get<FSourceGeometryPartID,0> @ 14438e580

TArrayView<int,int> * __thiscall
TMeshAttributesRef<FSourceGeometryPartID,TArrayView<int,int>_>::Get<FSourceGeometryPartID,0>
          (TMeshAttributesRef<FSourceGeometryPartID,TArrayView<int,int>_> *this,
          TArrayView<int,int> *__return_storage_ptr__,FSourceGeometryPartID param_1,int param_2)

{
  TMeshUnboundedAttributeArraySet<int> *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TArrayView<int,int> *pTVar4;
  int *piVar5;
  TAttributeArrayContainer<int> *this_01;
  ForElementType<TAttributeArrayContainer<int>_> FVar6;
  
  this_00 = (TMeshUnboundedAttributeArraySet<int> *)this->ArrayPtr;
  if (this->Extent == 0) {
    this_01 = TMeshUnboundedAttributeArraySet<int>::GetArrayForChannel(this_00,param_2);
    TAttributeArrayContainer<int>::Get(this_01,__return_storage_ptr__,(int)param_1);
  }
  else {
    uVar3 = 0;
    if (param_2 < (this_00->ArrayForChannels).ArrayNum) {
      uVar3 = (uint)~param_2 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TArrayView<int,int> *)(*pcVar1)();
        return pTVar4;
      }
    }
    FVar6 = (this_00->ArrayForChannels).AllocatorInstance.SecondaryData;
    if (FVar6 == (ForElementType<TAttributeArrayContainer<int>_>)0x0) {
      FVar6 = (ForElementType<TAttributeArrayContainer<int>_>)&this_00->ArrayForChannels;
    }
    piVar5 = TMeshAttributeArrayBase<int>::GetElementBase
                       ((TMeshAttributeArrayBase<int> *)((longlong)FVar6 + (longlong)param_2 * 0x18)
                        ,(int)param_1);
    uVar3 = this->Extent;
    __return_storage_ptr__->DataPtr = piVar5;
    __return_storage_ptr__->ArrayNum = uVar3;
    if ((int)uVar3 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TArrayView<int,int> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// Get @ 1443a38e0

int __thiscall
TMeshAttributesRef<FBoneID,int_const_>::Get
          (TMeshAttributesRef<FBoneID,int_const_> *this,int param_1,int param_2)

{
  FMeshAttributeArraySetBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  FMeshAttributeArraySetBase *pFVar6;
  uint uVar7;
  
  pFVar1 = this->ArrayPtr;
  uVar5 = 0;
  if (param_2 < (int)pFVar1[2].Type) {
    uVar5 = (uint)~param_2 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  pFVar6 = (FMeshAttributeArraySetBase *)pFVar1[2]._padding_;
  if ((FMeshAttributeArraySetBase *)pFVar1[2]._padding_ == (FMeshAttributeArraySetBase *)0x0) {
    pFVar6 = pFVar1 + 1;
  }
  uVar7 = param_1 * pFVar6[param_2].NumElements;
  uVar5 = 0;
  if ((int)uVar7 < (int)pFVar6[param_2].Type) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  return *(int *)(pFVar6[param_2]._padding_ + (longlong)(int)uVar7 * 4);
}

// Get @ 1443a39e0

TTransform<double> * __thiscall
TMeshAttributesRef<FBoneID,UE::Math::TTransform<double>_const_>::Get
          (TMeshAttributesRef<FBoneID,UE::Math::TTransform<double>_const_> *this,
          TTransform<double> *__return_storage_ptr__,int param_1,int param_2)

{
  double *pdVar1;
  FMeshAttributeArraySetBase *pFVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  TTransform<double> *pTVar10;
  uint uVar11;
  longlong lVar12;
  FMeshAttributeArraySetBase *pFVar13;
  uint uVar14;
  
  pFVar2 = this->ArrayPtr;
  uVar11 = 0;
  if (param_2 < (int)pFVar2[2].Type) {
    uVar11 = (uint)~param_2 >> 0x1f;
  }
  if (uVar11 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TTransform<double> *)(*pcVar4)();
      return pTVar10;
    }
  }
  pFVar13 = (FMeshAttributeArraySetBase *)pFVar2[2]._padding_;
  if ((FMeshAttributeArraySetBase *)pFVar2[2]._padding_ == (FMeshAttributeArraySetBase *)0x0) {
    pFVar13 = pFVar2 + 1;
  }
  uVar14 = param_1 * pFVar13[param_2].NumElements;
  uVar11 = 0;
  if ((int)uVar14 < (int)pFVar13[param_2].Type) {
    uVar11 = ~uVar14 >> 0x1f;
  }
  if (uVar11 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TTransform<double> *)(*pcVar4)();
      return pTVar10;
    }
  }
  lVar3 = pFVar13[param_2]._padding_;
  lVar12 = (longlong)(int)uVar14 * 0x60;
  dVar5 = ((double *)(lVar12 + lVar3))[1];
  pdVar1 = (double *)(lVar12 + 0x10 + lVar3);
  dVar6 = *pdVar1;
  dVar7 = pdVar1[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = *(double *)(lVar12 + lVar3);
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar5;
  pdVar1 = (double *)(lVar12 + 0x20 + lVar3);
  dVar5 = *pdVar1;
  dVar8 = pdVar1[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar6;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar7;
  pdVar1 = (double *)(lVar12 + 0x30 + lVar3);
  dVar6 = *pdVar1;
  dVar7 = pdVar1[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar5;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar8;
  pdVar1 = (double *)(lVar12 + 0x40 + lVar3);
  dVar5 = *pdVar1;
  dVar8 = pdVar1[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar6;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar7;
  pdVar1 = (double *)(lVar12 + 0x50 + lVar3);
  dVar6 = *pdVar1;
  dVar7 = pdVar1[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar5;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar8;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar6;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar7;
  return __return_storage_ptr__;
}

// Get @ 1443a3b20

FName __thiscall
TMeshAttributesRef<FBoneID,FName_const_>::Get
          (TMeshAttributesRef<FBoneID,FName_const_> *this,int param_1,int param_2)

{
  FMeshAttributeArraySetBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  FName FVar4;
  uint uVar5;
  uint in_register_00000014;
  FMeshAttributeArraySetBase *pFVar6;
  uint uVar7;
  uint in_R9D;
  
  FVar4.Number = in_register_00000014;
  FVar4.ComparisonIndex.Value = param_1;
  pFVar1 = this->ArrayPtr;
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
      FVar4 = (FName)(*pcVar2)();
      return FVar4;
    }
  }
  pFVar6 = (FMeshAttributeArraySetBase *)pFVar1[2]._padding_;
  if ((FMeshAttributeArraySetBase *)pFVar1[2]._padding_ == (FMeshAttributeArraySetBase *)0x0) {
    pFVar6 = pFVar1 + 1;
  }
  uVar7 = param_2 * pFVar6[(int)in_R9D].NumElements;
  uVar5 = 0;
  if ((int)uVar7 < (int)pFVar6[(int)in_R9D].Type) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar4 = (FName)(*pcVar2)();
      return FVar4;
    }
  }
  *(undefined8 *)FVar4 = *(undefined8 *)(pFVar6[(int)in_R9D]._padding_ + (longlong)(int)uVar7 * 8);
  return FVar4;
}

// Set @ 1443ace40

void __thiscall
TMeshAttributesRef<FBoneID,UE::Math::TTransform<double>_>::Set
          (TMeshAttributesRef<FBoneID,UE::Math::TTransform<double>_> *this,int param_1,
          TTransform<double> *param_2)

{
  FMeshAttributeArraySetBase *pFVar1;
  code *pcVar2;
  double dVar3;
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
  bool bVar15;
  TTransform<double> *pTVar16;
  FMeshAttributeArraySetBase *this_00;
  
  dVar3 = (param_2->Rotation).XY.m128d_f64[0];
  dVar4 = (param_2->Rotation).XY.m128d_f64[1];
  dVar5 = (param_2->Rotation).ZW.m128d_f64[0];
  dVar6 = (param_2->Rotation).ZW.m128d_f64[1];
  dVar7 = (param_2->Translation).XY.m128d_f64[0];
  dVar8 = (param_2->Translation).XY.m128d_f64[1];
  dVar9 = (param_2->Translation).ZW.m128d_f64[0];
  dVar10 = (param_2->Translation).ZW.m128d_f64[1];
  dVar11 = (param_2->Scale3D).XY.m128d_f64[0];
  dVar12 = (param_2->Scale3D).XY.m128d_f64[1];
  dVar13 = (param_2->Scale3D).ZW.m128d_f64[0];
  dVar14 = (param_2->Scale3D).ZW.m128d_f64[1];
  pFVar1 = this->ArrayPtr;
  if ((int)pFVar1[2].Type < 1) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar15) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this_00 = (FMeshAttributeArraySetBase *)pFVar1[2]._padding_;
  if ((FMeshAttributeArraySetBase *)pFVar1[2]._padding_ == (FMeshAttributeArraySetBase *)0x0) {
    this_00 = pFVar1 + 1;
  }
  pTVar16 = TMeshAttributeArrayBase<UE::Math::TTransform<double>_>::GetElementBase
                      ((TMeshAttributeArrayBase<UE::Math::TTransform<double>_> *)this_00,param_1);
  (pTVar16->Rotation).XY.m128d_f64[0] = dVar3;
  (pTVar16->Rotation).XY.m128d_f64[1] = dVar4;
  (pTVar16->Rotation).ZW.m128d_f64[0] = dVar5;
  (pTVar16->Rotation).ZW.m128d_f64[1] = dVar6;
  (pTVar16->Translation).XY.m128d_f64[0] = dVar7;
  (pTVar16->Translation).XY.m128d_f64[1] = dVar8;
  (pTVar16->Translation).ZW.m128d_f64[0] = dVar9;
  (pTVar16->Translation).ZW.m128d_f64[1] = dVar10;
  (pTVar16->Scale3D).XY.m128d_f64[0] = dVar11;
  (pTVar16->Scale3D).XY.m128d_f64[1] = dVar12;
  (pTVar16->Scale3D).ZW.m128d_f64[0] = dVar13;
  (pTVar16->Scale3D).ZW.m128d_f64[1] = dVar14;
  return;
}

