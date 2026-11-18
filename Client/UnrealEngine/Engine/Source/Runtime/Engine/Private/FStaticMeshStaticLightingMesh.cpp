// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// IsInstancedMesh @ 1479da540

bool __thiscall FStaticMeshStaticLightingMesh::IsInstancedMesh(FStaticMeshStaticLightingMesh *this)

{
  return false;
}

// FStaticMeshStaticLightingMesh @ 14877b3c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FStaticMeshStaticLightingMesh * __thiscall
FStaticMeshStaticLightingMesh::FStaticMeshStaticLightingMesh
          (FStaticMeshStaticLightingMesh *this,UStaticMeshComponent *param_1,int param_2,
          TArray<ULightComponent_*,TSizedDefaultAllocator<32>_> *param_3)

{
  TMatrix<double> *this_00;
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  byte bVar5;
  FScriptContainerElement *pFVar6;
  UStaticMesh *pUVar7;
  code *pcVar8;
  undefined1 auVar9 [12];
  undefined4 uVar10;
  undefined3 uVar11;
  double dVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  FStaticMeshStaticLightingMesh *pFVar18;
  FStaticMeshRenderData *pFVar19;
  FIndexArrayView *pFVar20;
  double *pdVar21;
  uint uVar22;
  longlong lVar23;
  uint uVar24;
  uint uVar25;
  undefined1 auVar26 [16];
  undefined8 uVar28;
  undefined1 auVar27 [16];
  int in_stack_00000028;
  undefined1 auStackY_268 [32];
  wchar_t *local_1d8;
  wchar_t **local_1d0;
  wchar_t *local_1c8;
  wchar_t **local_1c0;
  FIndexArrayView local_1b8;
  TVector<double>_u_0 local_1a8;
  double local_190;
  double local_188;
  double local_180;
  undefined1 local_178;
  TMatrix<double> local_168;
  undefined1 local_e8 [128];
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_268;
  lVar23 = (longlong)param_2;
  uVar24 = 0;
  if (in_stack_00000028 != 0) {
    *(undefined **)&this->field_0x8 = &_vbtable_;
    *(undefined ***)&this->field_0x238 = &___7FRefCountedObject__6B_;
    *(undefined4 *)&this->field_0x240 = 0;
  }
  uVar22 = (uint)~param_2 >> 0x1f;
  uVar25 = uVar24;
  if (param_2 < (param_1->LODData).ArrayNum) {
    uVar25 = uVar22;
  }
  if (uVar25 == 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pFVar18 = (FStaticMeshStaticLightingMesh *)(*pcVar8)();
      return pFVar18;
    }
  }
  pFVar6 = (param_1->LODData).AllocatorInstance.Data;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar7 = (param_1->StaticMesh).field0_0x0.DebugPtr, pUVar7 != (UStaticMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  local_1a8._s_0.X = (double)param_1->_padding_ - (double)param_1->_padding_;
  local_190 = (double)param_1->_padding_ + (double)param_1->_padding_;
  bVar4 = *(byte *)((longlong)&param_1->_padding_ + 7);
  auVar26._0_8_ = (double)param_1->_padding_ - (double)param_1->_padding_;
  auVar26._8_8_ = 0;
  pUVar7 = (param_1->StaticMesh).field0_0x0.DebugPtr;
  local_188 = (double)param_1->_padding_ + (double)param_1->_padding_;
  bVar5 = *(byte *)((longlong)&param_1->_padding_ + 6);
  local_178 = 1;
  local_1a8._s_0.Z = (double)param_1->_padding_ - (double)param_1->_padding_;
  local_180 = (double)param_1->_padding_ + (double)param_1->_padding_;
  local_1a8._s_0.Y = auVar26._0_8_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UStaticMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  pFVar19 = UStaticMesh::GetRenderData(pUVar7);
  uVar25 = uVar24;
  if (param_2 < (pFVar19->LODResources).Array.ArrayNum) {
    uVar25 = uVar22;
  }
  if (uVar25 == 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pFVar18 = (FStaticMeshStaticLightingMesh *)(*pcVar8)();
      return pFVar18;
    }
  }
  iVar14 = FStaticMeshLODResources::GetNumVertices
                     (*(FStaticMeshLODResources **)
                       ((pFVar19->LODResources).Array.AllocatorInstance.Data + lVar23 * 8));
  pUVar7 = (param_1->StaticMesh).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UStaticMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  pFVar19 = UStaticMesh::GetRenderData(pUVar7);
  uVar25 = uVar24;
  if (param_2 < (pFVar19->LODResources).Array.ArrayNum) {
    uVar25 = uVar22;
  }
  if (uVar25 == 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pFVar18 = (FStaticMeshStaticLightingMesh *)(*pcVar8)();
      return pFVar18;
    }
  }
  iVar15 = FStaticMeshLODResources::GetNumVertices
                     (*(FStaticMeshLODResources **)
                       ((pFVar19->LODResources).Array.AllocatorInstance.Data + lVar23 * 8));
  pUVar7 = (param_1->StaticMesh).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UStaticMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  pFVar19 = UStaticMesh::GetRenderData(pUVar7);
  if (param_2 < (pFVar19->LODResources).Array.ArrayNum) {
    uVar24 = uVar22;
  }
  if (uVar24 == 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pFVar18 = (FStaticMeshStaticLightingMesh *)(*pcVar8)();
      return pFVar18;
    }
  }
  iVar16 = FStaticMeshLODResources::GetNumTriangles
                     (*(FStaticMeshLODResources **)
                       ((pFVar19->LODResources).Array.AllocatorInstance.Data + lVar23 * 8));
  pUVar7 = (param_1->StaticMesh).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UStaticMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  pFVar19 = UStaticMesh::GetRenderData(pUVar7);
  uVar24 = 0;
  if (param_2 < (pFVar19->LODResources).Array.ArrayNum) {
    uVar24 = uVar22;
  }
  if (uVar24 == 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pFVar18 = (FStaticMeshStaticLightingMesh *)(*pcVar8)();
      return pFVar18;
    }
  }
  iVar17 = FStaticMeshLODResources::GetNumTriangles
                     (*(FStaticMeshLODResources **)
                       ((pFVar19->LODResources).Array.AllocatorInstance.Data + lVar23 * 8));
  FStaticLightingMesh::FStaticLightingMesh
            ((FStaticLightingMesh *)this,iVar17,iVar16,iVar15,iVar14,0,
             (bool)((bVar4 >> 5 | bVar5) & 1),false,param_3,(UPrimitiveComponent *)param_1,
             (TBox<double> *)&local_1a8._s_0,
             &`public:_struct_FGuid_const&___ptr64___cdecl_UStaticMesh::GetLightingGuid(void)const___ptr64'
              ::__l2::NullGuid,(FGuid *)(pFVar6 + lVar23 * 0x50 + 0x10));
  *(undefined ***)this = &_vftable__for__FStaticLightingMesh__;
  *(undefined ***)(&this->field_0x8 + *(int *)(*(longlong *)&this->field_0x8 + 4)) =
       &_vftable__for__FRefCountedObject__;
  (this->OtherLODs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OtherLODs).ArrayNum = 0;
  (this->OtherLODs).ArrayMax = 0;
  this->LODIndex = param_2;
  pUVar7 = (param_1->StaticMesh).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UStaticMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  this->StaticMesh = pUVar7;
  this->Primitive = param_1;
  pUVar7 = (param_1->StaticMesh).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UStaticMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  pFVar19 = UStaticMesh::GetRenderData(pUVar7);
  uVar28 = auVar26._8_8_;
  uVar24 = 0;
  if (param_2 < (pFVar19->LODResources).Array.ArrayNum) {
    uVar24 = uVar22;
  }
  if (uVar24 == 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    uVar28 = auVar26._8_8_;
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      pFVar18 = (FStaticMeshStaticLightingMesh *)(*pcVar8)();
      return pFVar18;
    }
  }
  this->LODRenderData =
       *(FStaticMeshLODResources **)
        ((pFVar19->LODResources).Array.AllocatorInstance.Data + lVar23 * 8);
  (this->LODIndexBuffer).UntypedIndexData = (void *)0x0;
  (this->LODIndexBuffer).NumIndices = 0;
  (this->LODIndexBuffer).b32Bit = false;
  uVar2 = param_1->_padding_;
  uVar3 = param_1->_padding_;
  dVar1 = (double)param_1->_padding_;
  auVar9._4_8_ = uVar28;
  auVar9._0_4_ = (int)((ulonglong)uVar2 >> 0x20);
  auVar27._0_8_ = auVar9._0_8_ << 0x20;
  auVar27._8_4_ = (int)uVar3;
  auVar27._12_4_ = (int)((ulonglong)uVar3 >> 0x20);
  this->bReverseWinding = 0;
  *(uint *)&this->field_0x234 =
       *(uint *)&this->field_0x234 | (uint)(auVar27._8_8_ * (double)uVar2 * dVar1 < 0.0);
  pFVar20 = FRawStaticIndexBuffer::GetArrayView(&this->LODRenderData->IndexBuffer,&local_1b8);
  uVar10 = *(undefined4 *)((longlong)&pFVar20->UntypedIndexData + 4);
  iVar14 = pFVar20->NumIndices;
  bVar13 = pFVar20->b32Bit;
  uVar11 = *(undefined3 *)&pFVar20->field_0xd;
  *(undefined4 *)&(this->LODIndexBuffer).UntypedIndexData =
       *(undefined4 *)&pFVar20->UntypedIndexData;
  *(undefined4 *)((longlong)&(this->LODIndexBuffer).UntypedIndexData + 4) = uVar10;
  (this->LODIndexBuffer).NumIndices = iVar14;
  (this->LODIndexBuffer).b32Bit = bVar13;
  *(undefined3 *)&(this->LODIndexBuffer).field_0xd = uVar11;
  pdVar21 = (double *)(**(code **)(param_1->_padding_ + 0x808))(param_1,local_e8);
  dVar12 = __real_3e45798ee0000000;
  this_00 = &this->LocalToWorld;
  dVar1 = pdVar21[1];
  this_00->M[0][0] = *pdVar21;
  (this->LocalToWorld).M[0][1] = dVar1;
  dVar1 = pdVar21[3];
  (this->LocalToWorld).M[0][2] = pdVar21[2];
  (this->LocalToWorld).M[0][3] = dVar1;
  dVar1 = pdVar21[5];
  (this->LocalToWorld).M[1][0] = pdVar21[4];
  (this->LocalToWorld).M[1][1] = dVar1;
  dVar1 = pdVar21[7];
  (this->LocalToWorld).M[1][2] = pdVar21[6];
  (this->LocalToWorld).M[1][3] = dVar1;
  dVar1 = pdVar21[9];
  (this->LocalToWorld).M[2][0] = pdVar21[8];
  (this->LocalToWorld).M[2][1] = dVar1;
  dVar1 = pdVar21[0xb];
  (this->LocalToWorld).M[2][2] = pdVar21[10];
  (this->LocalToWorld).M[2][3] = dVar1;
  dVar1 = pdVar21[0xd];
  (this->LocalToWorld).M[3][0] = pdVar21[0xc];
  (this->LocalToWorld).M[3][1] = dVar1;
  dVar1 = pdVar21[0xf];
  (this->LocalToWorld).M[3][2] = pdVar21[0xe];
  (this->LocalToWorld).M[3][3] = dVar1;
  dVar1 = this_00->M[0][0];
  uVar24 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar25 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (((((((double)CONCAT44(uVar25,uVar24) < dVar12 || (double)CONCAT44(uVar25,uVar24) == dVar12) &&
         (dVar1 = (this->LocalToWorld).M[0][1],
         uVar24 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
         uVar25 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
         (double)CONCAT44(uVar25,uVar24) < dVar12 || (double)CONCAT44(uVar25,uVar24) == dVar12)) &&
        (dVar1 = (this->LocalToWorld).M[0][2],
        uVar24 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar25 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        (double)CONCAT44(uVar25,uVar24) < dVar12 || (double)CONCAT44(uVar25,uVar24) == dVar12)) &&
       ((dVar1 = (this->LocalToWorld).M[1][0],
        uVar24 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar25 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        (double)CONCAT44(uVar25,uVar24) < dVar12 || (double)CONCAT44(uVar25,uVar24) == dVar12 &&
        (dVar1 = (this->LocalToWorld).M[1][1],
        uVar24 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar25 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        (double)CONCAT44(uVar25,uVar24) < dVar12 || (double)CONCAT44(uVar25,uVar24) == dVar12)))) &&
      ((dVar1 = (this->LocalToWorld).M[1][2],
       uVar24 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar25 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       (double)CONCAT44(uVar25,uVar24) < dVar12 || (double)CONCAT44(uVar25,uVar24) == dVar12 &&
       ((dVar1 = (this->LocalToWorld).M[2][0],
        uVar24 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar25 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        (double)CONCAT44(uVar25,uVar24) < dVar12 || (double)CONCAT44(uVar25,uVar24) == dVar12 &&
        (dVar1 = (this->LocalToWorld).M[2][1],
        uVar24 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar25 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        (double)CONCAT44(uVar25,uVar24) < dVar12 || (double)CONCAT44(uVar25,uVar24) == dVar12))))))
     && (dVar1 = (this->LocalToWorld).M[2][2],
        uVar24 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar25 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        (double)CONCAT44(uVar25,uVar24) < dVar12 || (double)CONCAT44(uVar25,uVar24) == dVar12)) {
    local_1d8 = 
    L"TMatrix<T>::InverseFast(), trying to invert a NIL matrix, this results in NaNs! Use Inverse() instead."
    ;
    if (1 < (byte)LogUnrealMath._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`private:_static_void___cdecl_UE::Math::TMatrix<double>::ErrorEnsure(wchar_t_const*___ptr64)'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogUnrealMath);
    }
    local_1d0 = &local_1d8;
    `UE::Math::TMatrix<double>::ErrorEnsure'::__l2::<lambda_1>::operator()(&local_1d0);
  }
  bVar13 = FMath::MatrixInverse(&local_168,this_00);
  if (!bVar13) {
    local_1c8 = 
    L"TMatrix<T>::InverseFast(), trying to invert a non-invertible matrix, this results in NaNs! Use Inverse() instead."
    ;
    if (1 < (byte)LogUnrealMath._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`private:_static_void___cdecl_UE::Math::TMatrix<double>::ErrorEnsure(wchar_t_const*___ptr64)'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogUnrealMath);
    }
    local_1c0 = &local_1c8;
    `UE::Math::TMatrix<double>::ErrorEnsure'::__l2::<lambda_1>::operator()(&local_1c0);
  }
  *(undefined4 *)(this->LocalToWorldInverseTranspose).M[0] = local_168.M[0][0]._0_4_;
  *(undefined4 *)((longlong)(this->LocalToWorldInverseTranspose).M[0] + 4) = local_168.M[0][0]._4_4_
  ;
  *(int *)((this->LocalToWorldInverseTranspose).M[0] + 1) = SUB84(local_168.M[1][0],0);
  *(int *)((longlong)(this->LocalToWorldInverseTranspose).M[0] + 0xc) =
       (int)((ulonglong)local_168.M[1][0] >> 0x20);
  (this->LocalToWorldInverseTranspose).M[0][2] = local_168.M[2][0];
  (this->LocalToWorldInverseTranspose).M[0][3] = local_168.M[3][0];
  *(undefined4 *)(this->LocalToWorldInverseTranspose).M[1] = local_168.M[0][1]._0_4_;
  *(undefined4 *)((longlong)(this->LocalToWorldInverseTranspose).M[1] + 4) = local_168.M[0][1]._4_4_
  ;
  *(int *)((this->LocalToWorldInverseTranspose).M[1] + 1) = SUB84(local_168.M[1][1],0);
  *(int *)((longlong)(this->LocalToWorldInverseTranspose).M[1] + 0xc) =
       (int)((ulonglong)local_168.M[1][1] >> 0x20);
  (this->LocalToWorldInverseTranspose).M[1][2] = local_168.M[2][1];
  (this->LocalToWorldInverseTranspose).M[1][3] = local_168.M[3][1];
  *(undefined4 *)(this->LocalToWorldInverseTranspose).M[2] = local_168.M[0][2]._0_4_;
  *(undefined4 *)((longlong)(this->LocalToWorldInverseTranspose).M[2] + 4) = local_168.M[0][2]._4_4_
  ;
  *(int *)((this->LocalToWorldInverseTranspose).M[2] + 1) = SUB84(local_168.M[1][2],0);
  *(int *)((longlong)(this->LocalToWorldInverseTranspose).M[2] + 0xc) =
       (int)((ulonglong)local_168.M[1][2] >> 0x20);
  (this->LocalToWorldInverseTranspose).M[2][2] = local_168.M[2][2];
  (this->LocalToWorldInverseTranspose).M[2][3] = local_168.M[3][2];
  *(undefined4 *)(this->LocalToWorldInverseTranspose).M[3] = local_168.M[0][3]._0_4_;
  *(undefined4 *)((longlong)(this->LocalToWorldInverseTranspose).M[3] + 4) = local_168.M[0][3]._4_4_
  ;
  *(int *)((this->LocalToWorldInverseTranspose).M[3] + 1) = SUB84(local_168.M[1][3],0);
  *(int *)((longlong)(this->LocalToWorldInverseTranspose).M[3] + 0xc) =
       (int)((ulonglong)local_168.M[1][3] >> 0x20);
  (this->LocalToWorldInverseTranspose).M[3][2] = local_168.M[2][3];
  (this->LocalToWorldInverseTranspose).M[3][3] = local_168.M[3][3];
  dVar1 = UE::Math::TMatrix<double>::Determinant(this_00);
  this->LocalToWorldDeterminant = (float)dVar1;
  return this;
}

// FStaticMeshStaticLightingMesh @ 14877bb20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FStaticMeshStaticLightingMesh * __thiscall
FStaticMeshStaticLightingMesh::FStaticMeshStaticLightingMesh(FStaticMeshStaticLightingMesh *this)

{
  int in_EDX;
  
  if (in_EDX != 0) {
    *(undefined4 *)&this->field_0x240 = 0;
    *(undefined **)&this->field_0x8 = &_vbtable_;
    *(undefined ***)&this->field_0x238 = &___7FRefCountedObject__6B_;
  }
  FStaticLightingMesh::FStaticLightingMesh((FStaticLightingMesh *)this);
  *(undefined ***)this = &_vftable__for__FStaticLightingMesh__;
  *(undefined ***)(&this->field_0x8 + *(int *)(*(longlong *)&this->field_0x8 + 4)) =
       &_vftable__for__FRefCountedObject__;
  this->bReverseWinding = 0;
  (this->OtherLODs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OtherLODs).ArrayNum = 0;
  (this->OtherLODs).ArrayMax = 0;
  this->LODIndex = 0;
  this->StaticMesh = (UStaticMesh *)0x0;
  this->Primitive = (UStaticMeshComponent *)0x0;
  this->LODRenderData = (FStaticMeshLODResources *)0x0;
  (this->LODIndexBuffer).UntypedIndexData = (void *)0x0;
  (this->LODIndexBuffer).NumIndices = 0;
  (this->LODIndexBuffer).b32Bit = false;
  return this;
}

// GetTriangle @ 1487a64f0

void __thiscall
FStaticMeshStaticLightingMesh::GetTriangle
          (FStaticMeshStaticLightingMesh *this,int param_1,FStaticLightingVertex *param_2,
          FStaticLightingVertex *param_3,FStaticLightingVertex *param_4)

{
  TMatrix<double> *pTVar1;
  void *pvVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  pvVar2 = (this->LODIndexBuffer).UntypedIndexData;
  iVar4 = param_1 * 3;
  uVar6 = this->bReverseWinding;
  if ((this->LODIndexBuffer).b32Bit == false) {
    uVar8 = (uint)*(ushort *)((longlong)pvVar2 + (longlong)iVar4 * 2);
    uVar7 = (uint)*(ushort *)((longlong)pvVar2 + (longlong)(int)(iVar4 + uVar6) * 2 + 2);
    uVar6 = (uint)*(ushort *)((longlong)pvVar2 + (longlong)(int)(iVar4 + (uVar6 ^ 1)) * 2 + 2);
  }
  else {
    uVar8 = *(uint *)((longlong)pvVar2 + (longlong)iVar4 * 4);
    uVar7 = *(uint *)((longlong)pvVar2 + (longlong)(int)(iVar4 + uVar6) * 4 + 4);
    uVar6 = *(uint *)((longlong)pvVar2 + (longlong)(int)(iVar4 + (uVar6 ^ 1)) * 4 + 4);
  }
  if (this->LODRenderData == (FStaticMeshLODResources *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("LODRenderData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMeshLight.cpp"
                       ,0x70,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar1 = &this->LocalToWorldInverseTranspose;
  GetStaticLightingVertex
            (&(this->LODRenderData->VertexBuffers).PositionVertexBuffer,
             &(this->LODRenderData->VertexBuffers).StaticMeshVertexBuffer,uVar8,&this->LocalToWorld,
             pTVar1,param_2);
  GetStaticLightingVertex
            (&(this->LODRenderData->VertexBuffers).PositionVertexBuffer,
             &(this->LODRenderData->VertexBuffers).StaticMeshVertexBuffer,uVar7,&this->LocalToWorld,
             pTVar1,param_3);
  GetStaticLightingVertex
            (&(this->LODRenderData->VertexBuffers).PositionVertexBuffer,
             &(this->LODRenderData->VertexBuffers).StaticMeshVertexBuffer,uVar6,&this->LocalToWorld,
             pTVar1,param_4);
  return;
}

// GetTriangleIndices @ 1487a6670

void __thiscall
FStaticMeshStaticLightingMesh::GetTriangleIndices
          (FStaticMeshStaticLightingMesh *this,int param_1,int *param_2,int *param_3,int *param_4)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  
  iVar2 = param_1 * 3;
  pvVar1 = (this->LODIndexBuffer).UntypedIndexData;
  if ((this->LODIndexBuffer).b32Bit == false) {
    uVar3 = (uint)*(ushort *)((longlong)pvVar1 + (longlong)iVar2 * 2);
  }
  else {
    uVar3 = *(uint *)((longlong)pvVar1 + (longlong)iVar2 * 4);
  }
  *param_2 = uVar3;
  pvVar1 = (this->LODIndexBuffer).UntypedIndexData;
  lVar4 = (longlong)(int)(this->bReverseWinding + iVar2);
  if ((this->LODIndexBuffer).b32Bit == false) {
    uVar3 = (uint)*(ushort *)((longlong)pvVar1 + lVar4 * 2 + 2);
  }
  else {
    uVar3 = *(uint *)((longlong)pvVar1 + lVar4 * 4 + 4);
  }
  *param_3 = uVar3;
  pvVar1 = (this->LODIndexBuffer).UntypedIndexData;
  lVar4 = (longlong)(int)((~this->bReverseWinding & 1) + iVar2);
  if ((this->LODIndexBuffer).b32Bit != false) {
    *param_4 = *(int *)((longlong)pvVar1 + lVar4 * 4 + 4);
    return;
  }
  *param_4 = (uint)*(ushort *)((longlong)pvVar1 + lVar4 * 2 + 2);
  return;
}

// IntersectLightRay @ 1487ae700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FLightRayIntersection * __thiscall
FStaticMeshStaticLightingMesh::IntersectLightRay
          (FStaticMeshStaticLightingMesh *this,FLightRayIntersection *__return_storage_ptr__,
          TVector<double> *param_1,TVector<double> *param_2,bool param_3)

{
  longlong lVar1;
  byte bVar2;
  FName *pFVar3;
  undefined1 auStackY_378 [32];
  double local_318;
  double dStack_310;
  double local_308;
  undefined4 uStack_300;
  undefined1 uStack_2fc;
  undefined2 uStack_2fb;
  undefined1 uStack_2f9;
  TStatId local_2f8;
  FName local_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  double dStack_288;
  double local_280;
  double dStack_278;
  double local_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  undefined1 local_1e8 [4];
  undefined4 local_1e4;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined4 local_144;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  FCollisionQueryParams local_e8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_378;
  memset(local_1e8,0,0x100);
  uStack_2fb = 0;
  uStack_2f9 = 0;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_308 = 0.0;
  uStack_300 = 0xffffffff;
  uStack_2fc = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_144 = 0xffffffff;
  uStack_118 = 0xffffffff;
  local_1e4 = 0x3f800000;
  local_120 = 0;
  if ((*(int *)(lVar1 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_FStaticMeshStaticLightingMesh_IntersectLightRay =
         (FThreadSafeStaticStat<_public:___cdecl__public:_virtual_class_FLightRayIntersection___cdecl_FStaticMeshStaticLightingMesh::IntersectLightRay(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,bool)const_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_FStaticMeshStaticLightingMesh_IntersectLightRay>
          )0x0;
    pFVar3 = ::FName::FName(&local_2f0,"FStaticMeshStaticLightingMesh_IntersectLightRay");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_FStaticMeshStaticLightingMesh_IntersectLightRay
               ,*pFVar3,L"FStaticMeshStaticLightingMesh_IntersectLightRay","STATGROUP_CollisionTags"
               ,"STATCAT_Advanced",L"CollisionTags",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  local_2f8.StatIdPtr = (TStatIdData *)StatPtr_FStaticMeshStaticLightingMesh_IntersectLightRay;
  if (StatPtr_FStaticMeshStaticLightingMesh_IntersectLightRay ==
      (FThreadSafeStaticStat<_public:___cdecl__public:_virtual_class_FLightRayIntersection___cdecl_FStaticMeshStaticLightingMesh::IntersectLightRay(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,bool)const_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_FStaticMeshStaticLightingMesh_IntersectLightRay>
       )0x0) {
    pFVar3 = ::FName::FName(&local_2f0,"FStaticMeshStaticLightingMesh_IntersectLightRay");
    local_2f8.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)
                    &StatPtr_FStaticMeshStaticLightingMesh_IntersectLightRay,*pFVar3,
                    L"FStaticMeshStaticLightingMesh_IntersectLightRay","STATGROUP_CollisionTags",
                    "STATCAT_Advanced",L"CollisionTags",true,true,ST_int64,true,false,MCR_Invalid);
  }
  if ((*(int *)(lVar1 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&::StaticName,"FStaticMeshStaticLightingMesh_IntersectLightRay");
    _Init_thread_footer(&::_TSS0);
  }
  FCollisionQueryParams::FCollisionQueryParams(&local_e8,::StaticName,&local_2f8,true,(AActor *)0x0)
  ;
  local_2e8 = (param_2->field0_0x0)._s_0.X;
  dStack_2e0 = (param_2->field0_0x0)._s_0.Y;
  local_2d8 = (param_2->field0_0x0)._s_0.Z;
  local_318 = (param_1->field0_0x0)._s_0.X;
  dStack_310 = (param_1->field0_0x0)._s_0.Y;
  local_308 = (param_1->field0_0x0)._s_0.Z;
  bVar2 = (**(code **)(this->Primitive->_padding_ + 0xa30))
                    (this->Primitive,local_1e8,&local_318,&local_2e8);
  if (bVar2 == 0) {
    local_2c8 = 0.0;
    dStack_2c0 = 0.0;
    dStack_278 = ___xmm_3ff00000000000000000000000000000;
    local_270 = _UNK_15061cbc8;
    local_2b8 = 0.0;
    local_280 = 0.0;
  }
  else {
    local_2c8 = local_1d8;
    dStack_2c0 = dStack_1d0;
    local_2b8 = local_1c8;
    local_280 = local_1a8;
    dStack_278 = dStack_1a0;
    local_270 = local_198;
  }
  *(uint *)__return_storage_ptr__ =
       *(uint *)__return_storage_ptr__ ^ ((uint)bVar2 ^ __return_storage_ptr__->bIntersects) & 1;
  (__return_storage_ptr__->IntersectionVertex).WorldPosition.field0_0x0._s_0.X = local_2c8;
  (__return_storage_ptr__->IntersectionVertex).WorldPosition.field0_0x0._s_0.Y = dStack_2c0;
  (__return_storage_ptr__->IntersectionVertex).WorldPosition.field0_0x0._s_0.Z = local_2b8;
  (__return_storage_ptr__->IntersectionVertex).WorldTangentX.field0_0x0._s_0.X = dStack_2b0;
  (__return_storage_ptr__->IntersectionVertex).WorldTangentX.field0_0x0._s_0.Y = local_2a8;
  (__return_storage_ptr__->IntersectionVertex).WorldTangentX.field0_0x0._s_0.Z = dStack_2a0;
  (__return_storage_ptr__->IntersectionVertex).WorldTangentY.field0_0x0._s_0.X = local_298;
  (__return_storage_ptr__->IntersectionVertex).WorldTangentY.field0_0x0._s_0.Y = dStack_290;
  (__return_storage_ptr__->IntersectionVertex).WorldTangentY.field0_0x0._s_0.Z = dStack_288;
  (__return_storage_ptr__->IntersectionVertex).WorldTangentZ.field0_0x0._s_0.X = local_280;
  (__return_storage_ptr__->IntersectionVertex).WorldTangentZ.field0_0x0._s_0.Y = dStack_278;
  (__return_storage_ptr__->IntersectionVertex).WorldTangentZ.field0_0x0._s_0.Z = local_270;
  (__return_storage_ptr__->IntersectionVertex).TextureCoordinates[0].field0_0x0._s_0.X = local_268;
  (__return_storage_ptr__->IntersectionVertex).TextureCoordinates[0].field0_0x0._s_0.Y = dStack_260;
  (__return_storage_ptr__->IntersectionVertex).TextureCoordinates[1].field0_0x0._s_0.X = local_258;
  (__return_storage_ptr__->IntersectionVertex).TextureCoordinates[1].field0_0x0._s_0.Y = dStack_250;
  (__return_storage_ptr__->IntersectionVertex).TextureCoordinates[2].field0_0x0._s_0.X = local_248;
  (__return_storage_ptr__->IntersectionVertex).TextureCoordinates[2].field0_0x0._s_0.Y = dStack_240;
  (__return_storage_ptr__->IntersectionVertex).TextureCoordinates[3].field0_0x0._s_0.X = local_238;
  (__return_storage_ptr__->IntersectionVertex).TextureCoordinates[3].field0_0x0._s_0.Y = dStack_230;
  (__return_storage_ptr__->IntersectionVertex).TextureCoordinates[4].field0_0x0._s_0.X = local_228;
  (__return_storage_ptr__->IntersectionVertex).TextureCoordinates[4].field0_0x0._s_0.Y = dStack_220;
  (__return_storage_ptr__->IntersectionVertex).TextureCoordinates[5].field0_0x0._s_0.X = local_218;
  (__return_storage_ptr__->IntersectionVertex).TextureCoordinates[5].field0_0x0._s_0.Y = dStack_210;
  (__return_storage_ptr__->IntersectionVertex).TextureCoordinates[6].field0_0x0._s_0.X = local_208;
  (__return_storage_ptr__->IntersectionVertex).TextureCoordinates[6].field0_0x0._s_0.Y = dStack_200;
  (__return_storage_ptr__->IntersectionVertex).TextureCoordinates[7].field0_0x0._s_0.X = local_1f8;
  (__return_storage_ptr__->IntersectionVertex).TextureCoordinates[7].field0_0x0._s_0.Y = dStack_1f0;
  if (local_e8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_e8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
  }
  if (local_e8.IgnoreComponents.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
     ) {
    FMemory::Free((void *)local_e8.IgnoreComponents.AllocatorInstance.SecondaryData);
  }
  return __return_storage_ptr__;
}

// IsControllingShadowPerElement @ 1487aed30

bool __thiscall
FStaticMeshStaticLightingMesh::IsControllingShadowPerElement(FStaticMeshStaticLightingMesh *this)

{
  FStaticMeshSectionArray *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  FStaticMeshLODResources *pFVar6;
  uint uVar7;
  longlong lVar8;
  FStaticMeshSectionArray *pFVar9;
  
  if ((this->LODRenderData == (FStaticMeshLODResources *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("LODRenderData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMeshLight.cpp"
                         ,0xa0,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pFVar6 = this->LODRenderData;
  uVar7 = 0;
  if (0 < *(int *)&(pFVar6->Sections).field_0x28) {
    lVar8 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar7 < *(int *)&(pFVar6->Sections).field_0x28) {
        uVar5 = ~uVar7 >> 0x1f;
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
      pFVar1 = *(FStaticMeshSectionArray **)&(pFVar6->Sections).field_0x20;
      pFVar9 = &pFVar6->Sections;
      if (pFVar1 != (FStaticMeshSectionArray *)0x0) {
        pFVar9 = pFVar1;
      }
      if ((&pFVar9->field_0x15)[lVar8] == '\0') {
        return true;
      }
      pFVar6 = this->LODRenderData;
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x1c;
    } while ((int)uVar7 < *(int *)&(pFVar6->Sections).field_0x28);
  }
  return false;
}

// IsTriangleCastingShadow @ 1487af650

bool __thiscall
FStaticMeshStaticLightingMesh::IsTriangleCastingShadow
          (FStaticMeshStaticLightingMesh *this,uint param_1)

{
  FStaticMeshSectionArray *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  FStaticMeshLODResources *pFVar6;
  uint uVar7;
  FStaticMeshSectionArray *pFVar8;
  longlong lVar9;
  
  if ((this->LODRenderData == (FStaticMeshLODResources *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("LODRenderData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMeshLight.cpp"
                         ,0x8e,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pFVar6 = this->LODRenderData;
  uVar7 = 0;
  if (0 < *(int *)&(pFVar6->Sections).field_0x28) {
    lVar9 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar7 < *(int *)&(pFVar6->Sections).field_0x28) {
        uVar5 = ~uVar7 >> 0x1f;
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
      pFVar1 = *(FStaticMeshSectionArray **)&(pFVar6->Sections).field_0x20;
      pFVar8 = &pFVar6->Sections;
      if (pFVar1 != (FStaticMeshSectionArray *)0x0) {
        pFVar8 = pFVar1;
      }
      uVar5 = *(uint *)(&pFVar8->field_0x4 + lVar9) / 3;
      if ((uVar5 <= param_1) && (param_1 < *(int *)(&pFVar8->field_0x8 + lVar9) + uVar5)) {
        return (bool)(&pFVar8->field_0x15)[lVar9];
      }
      pFVar6 = this->LODRenderData;
      uVar7 = uVar7 + 1;
      lVar9 = lVar9 + 0x1c;
    } while ((int)uVar7 < *(int *)&(pFVar6->Sections).field_0x28);
  }
  return true;
}

// IsUniformShadowCaster @ 1487af780

bool __thiscall
FStaticMeshStaticLightingMesh::IsUniformShadowCaster(FStaticMeshStaticLightingMesh *this)

{
  if (((this->OtherLODs).ArrayNum == 0) && ((this->field_0x38 & 1) != 0)) {
    return true;
  }
  return false;
}

// SetLocalToWorld @ 1487c28f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FStaticMeshStaticLightingMesh::SetLocalToWorld
          (FStaticMeshStaticLightingMesh *this,TMatrix<double> *param_1)

{
  TMatrix<double> *this_00;
  double dVar1;
  double dVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_c8 [32];
  wchar_t *****local_a8;
  wchar_t *****local_a0;
  TMatrix<double> local_98;
  ulonglong local_18;
  
  dVar2 = __real_3e45798ee0000000;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  dVar1 = param_1->M[0][1];
  this_00 = &this->LocalToWorld;
  this_00->M[0][0] = param_1->M[0][0];
  (this->LocalToWorld).M[0][1] = dVar1;
  dVar1 = param_1->M[0][3];
  (this->LocalToWorld).M[0][2] = param_1->M[0][2];
  (this->LocalToWorld).M[0][3] = dVar1;
  dVar1 = param_1->M[1][1];
  (this->LocalToWorld).M[1][0] = param_1->M[1][0];
  (this->LocalToWorld).M[1][1] = dVar1;
  dVar1 = param_1->M[1][3];
  (this->LocalToWorld).M[1][2] = param_1->M[1][2];
  (this->LocalToWorld).M[1][3] = dVar1;
  dVar1 = param_1->M[2][1];
  (this->LocalToWorld).M[2][0] = param_1->M[2][0];
  (this->LocalToWorld).M[2][1] = dVar1;
  dVar1 = param_1->M[2][3];
  (this->LocalToWorld).M[2][2] = param_1->M[2][2];
  (this->LocalToWorld).M[2][3] = dVar1;
  dVar1 = param_1->M[3][1];
  (this->LocalToWorld).M[3][0] = param_1->M[3][0];
  (this->LocalToWorld).M[3][1] = dVar1;
  dVar1 = param_1->M[3][3];
  (this->LocalToWorld).M[3][2] = param_1->M[3][2];
  (this->LocalToWorld).M[3][3] = dVar1;
  dVar1 = this_00->M[0][0];
  uVar4 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar5 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (((((((double)CONCAT44(uVar5,uVar4) < dVar2 || (double)CONCAT44(uVar5,uVar4) == dVar2) &&
         (dVar1 = (this->LocalToWorld).M[0][1],
         uVar4 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
         uVar5 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
         (double)CONCAT44(uVar5,uVar4) < dVar2 || (double)CONCAT44(uVar5,uVar4) == dVar2)) &&
        (dVar1 = (this->LocalToWorld).M[0][2],
        uVar4 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar5 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        (double)CONCAT44(uVar5,uVar4) < dVar2 || (double)CONCAT44(uVar5,uVar4) == dVar2)) &&
       ((dVar1 = (this->LocalToWorld).M[1][0],
        uVar4 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar5 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        (double)CONCAT44(uVar5,uVar4) < dVar2 || (double)CONCAT44(uVar5,uVar4) == dVar2 &&
        (dVar1 = (this->LocalToWorld).M[1][1],
        uVar4 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar5 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        (double)CONCAT44(uVar5,uVar4) < dVar2 || (double)CONCAT44(uVar5,uVar4) == dVar2)))) &&
      ((dVar1 = (this->LocalToWorld).M[1][2],
       uVar4 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar5 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       (double)CONCAT44(uVar5,uVar4) < dVar2 || (double)CONCAT44(uVar5,uVar4) == dVar2 &&
       ((dVar1 = (this->LocalToWorld).M[2][0],
        uVar4 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar5 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        (double)CONCAT44(uVar5,uVar4) < dVar2 || (double)CONCAT44(uVar5,uVar4) == dVar2 &&
        (dVar1 = (this->LocalToWorld).M[2][1],
        uVar4 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar5 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        (double)CONCAT44(uVar5,uVar4) < dVar2 || (double)CONCAT44(uVar5,uVar4) == dVar2)))))) &&
     (dVar1 = (this->LocalToWorld).M[2][2],
     uVar4 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar5 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     (double)CONCAT44(uVar5,uVar4) < dVar2 || (double)CONCAT44(uVar5,uVar4) == dVar2)) {
    local_a8 = (wchar_t *****)0x150687b30;
    if (1 < (byte)LogUnrealMath._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`private:_static_void___cdecl_UE::Math::TMatrix<double>::ErrorEnsure(wchar_t_const*___ptr64)'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogUnrealMath);
    }
    local_a0 = (wchar_t *****)&local_a8;
    `UE::Math::TMatrix<double>::ErrorEnsure'::__l2::<lambda_1>::operator()(&local_a0);
  }
  bVar3 = FMath::MatrixInverse(&local_98,this_00);
  if (!bVar3) {
    local_a0 = (wchar_t *****)0x150687c00;
    if (1 < (byte)LogUnrealMath._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`private:_static_void___cdecl_UE::Math::TMatrix<double>::ErrorEnsure(wchar_t_const*___ptr64)'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogUnrealMath);
    }
    local_a8 = (wchar_t *****)&local_a0;
    `UE::Math::TMatrix<double>::ErrorEnsure'::__l2::<lambda_1>::operator()(&local_a8);
  }
  *(undefined4 *)(this->LocalToWorldInverseTranspose).M[0] = local_98.M[0][0]._0_4_;
  *(undefined4 *)((longlong)(this->LocalToWorldInverseTranspose).M[0] + 4) = local_98.M[0][0]._4_4_;
  *(int *)((this->LocalToWorldInverseTranspose).M[0] + 1) = SUB84(local_98.M[1][0],0);
  *(int *)((longlong)(this->LocalToWorldInverseTranspose).M[0] + 0xc) =
       (int)((ulonglong)local_98.M[1][0] >> 0x20);
  (this->LocalToWorldInverseTranspose).M[0][2] = local_98.M[2][0];
  (this->LocalToWorldInverseTranspose).M[0][3] = local_98.M[3][0];
  *(undefined4 *)(this->LocalToWorldInverseTranspose).M[1] = local_98.M[0][1]._0_4_;
  *(undefined4 *)((longlong)(this->LocalToWorldInverseTranspose).M[1] + 4) = local_98.M[0][1]._4_4_;
  *(int *)((this->LocalToWorldInverseTranspose).M[1] + 1) = SUB84(local_98.M[1][1],0);
  *(int *)((longlong)(this->LocalToWorldInverseTranspose).M[1] + 0xc) =
       (int)((ulonglong)local_98.M[1][1] >> 0x20);
  (this->LocalToWorldInverseTranspose).M[1][2] = local_98.M[2][1];
  (this->LocalToWorldInverseTranspose).M[1][3] = local_98.M[3][1];
  *(undefined4 *)(this->LocalToWorldInverseTranspose).M[2] = local_98.M[0][2]._0_4_;
  *(undefined4 *)((longlong)(this->LocalToWorldInverseTranspose).M[2] + 4) = local_98.M[0][2]._4_4_;
  *(int *)((this->LocalToWorldInverseTranspose).M[2] + 1) = SUB84(local_98.M[1][2],0);
  *(int *)((longlong)(this->LocalToWorldInverseTranspose).M[2] + 0xc) =
       (int)((ulonglong)local_98.M[1][2] >> 0x20);
  (this->LocalToWorldInverseTranspose).M[2][2] = local_98.M[2][2];
  (this->LocalToWorldInverseTranspose).M[2][3] = local_98.M[3][2];
  *(undefined4 *)(this->LocalToWorldInverseTranspose).M[3] = local_98.M[0][3]._0_4_;
  *(undefined4 *)((longlong)(this->LocalToWorldInverseTranspose).M[3] + 4) = local_98.M[0][3]._4_4_;
  *(int *)((this->LocalToWorldInverseTranspose).M[3] + 1) = SUB84(local_98.M[1][3],0);
  *(int *)((longlong)(this->LocalToWorldInverseTranspose).M[3] + 0xc) =
       (int)((ulonglong)local_98.M[1][3] >> 0x20);
  (this->LocalToWorldInverseTranspose).M[3][2] = local_98.M[2][3];
  (this->LocalToWorldInverseTranspose).M[3][3] = local_98.M[3][3];
  dVar1 = UE::Math::TMatrix<double>::Determinant(this_00);
  this->LocalToWorldDeterminant = (float)dVar1;
  return;
}

// ShouldCastShadow @ 1487c3960

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
FStaticMeshStaticLightingMesh::ShouldCastShadow
          (FStaticMeshStaticLightingMesh *this,ULightComponent *param_1,
          FStaticLightingMapping *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar2 = (this->OtherLODs).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)(this->OtherLODs).ArrayNum * 8;
  if (pFVar2 != pFVar1) {
    do {
      if (*(FStaticLightingMesh **)pFVar2 == param_2->Mesh) {
        return false;
      }
      pFVar2 = pFVar2 + 8;
    } while (pFVar2 != pFVar1);
  }
  return (bool)(this->field_0x38 & 1);
}

