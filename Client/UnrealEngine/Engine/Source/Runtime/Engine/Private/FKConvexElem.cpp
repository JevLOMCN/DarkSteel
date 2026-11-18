// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 27

// StaticStruct @ 147268f40

UScriptStruct * __cdecl FKConvexElem::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FKConvexElem.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FKConvexElem.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FKConvexElem,(UObject *)pUVar1,L"KConvexElem");
  }
  return Z_Registration_Info_UScriptStruct_FKConvexElem.OuterSingleton;
}

// BakeTransformToVerts @ 1476f02e0

void __thiscall FKConvexElem::BakeTransformToVerts(FKConvexElem *this)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined4 uVar29;
  
  uVar15 = 0;
  if (0 < (this->VertexData).ArrayNum) {
    lVar16 = 0;
    do {
      uVar14 = 0;
      if ((int)uVar15 < (this->VertexData).ArrayNum) {
        uVar14 = ~uVar15 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      auVar25 = *(undefined1 (*) [16])(this->Transform).Rotation.ZW.m128d_f64;
      pFVar3 = (this->VertexData).AllocatorInstance.Data;
      auVar21 = *(undefined1 (*) [16])(this->Transform).Rotation.XY.m128d_f64;
      dVar12 = (this->Transform).Rotation.ZW.m128d_f64[1];
      pFVar1 = pFVar3 + lVar16;
      dVar7 = *(double *)(pFVar3 + lVar16 + 0x10) * (this->Transform).Scale3D.ZW.m128d_f64[0];
      dVar8 = (this->Transform).Scale3D.ZW.m128d_f64[1] * 0.0;
      uVar14 = 0;
      if ((int)uVar15 < (this->VertexData).ArrayNum) {
        uVar14 = ~uVar15 >> 0x1f;
      }
      dVar5 = (this->Transform).Scale3D.XY.m128d_f64[0] * *(double *)pFVar1;
      dVar6 = (this->Transform).Scale3D.XY.m128d_f64[1] * *(double *)(pFVar1 + 8);
      uVar29 = (undefined4)((ulonglong)dVar6 >> 0x20);
      auVar17 = *(undefined1 (*) [16])(this->Transform).Rotation.XY.m128d_f64;
      auVar26._8_4_ = SUB84(dVar6,0);
      auVar26._0_8_ = dVar5;
      auVar26._12_4_ = uVar29;
      dVar2 = auVar25._0_8_;
      auVar19 = blendpd(auVar17,auVar25,2);
      auVar27._0_8_ = auVar26._8_8_ * auVar17._0_8_ - auVar17._8_8_ * dVar5;
      auVar27._8_8_ = dVar7 * auVar17._8_8_ - dVar2 * dVar6;
      auVar22._8_4_ = SUB84(dVar6,0);
      auVar22._0_8_ = dVar5;
      auVar22._12_4_ = uVar29;
      auVar17._8_4_ = SUB84(dVar8,0);
      auVar17._0_8_ = dVar7;
      auVar17._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      auVar17 = blendpd(auVar22,auVar17,2);
      auVar18._0_8_ = auVar17._0_8_ * dVar2 - auVar19._0_8_ * dVar7;
      auVar18._8_8_ = auVar17._8_8_ * auVar25._8_8_ - auVar19._8_8_ * dVar8;
      auVar17 = blendpd(auVar27,auVar18,2);
      dVar10 = auVar27._8_8_ + auVar27._8_8_;
      dVar11 = auVar18._0_8_ + auVar18._0_8_;
      uVar29 = (undefined4)((ulonglong)dVar11 >> 0x20);
      auVar28._0_8_ = auVar17._0_8_ + auVar17._0_8_;
      auVar28._8_8_ = auVar17._8_8_ + auVar17._8_8_;
      auVar23._8_4_ = SUB84(dVar11,0);
      auVar23._0_8_ = dVar10;
      auVar23._12_4_ = uVar29;
      auVar20._8_4_ = SUB84(dVar11,0);
      auVar20._0_8_ = dVar10;
      auVar20._12_4_ = uVar29;
      auVar17 = blendpd(auVar20,auVar28,2);
      auVar24._0_8_ = auVar23._8_8_ * auVar21._0_8_ - auVar21._8_8_ * dVar10;
      auVar24._8_8_ = auVar28._0_8_ * auVar21._8_8_ - dVar2 * dVar11;
      auVar19._8_4_ = SUB84(auVar24._8_8_,0);
      auVar19._0_8_ = auVar24._0_8_;
      auVar19._12_4_ = (int)((ulonglong)auVar24._8_8_ >> 0x20);
      auVar22 = blendpd(auVar21,auVar25,2);
      auVar21._0_8_ = auVar17._0_8_ * dVar2 - auVar22._0_8_ * auVar28._0_8_;
      auVar21._8_8_ = auVar17._8_8_ * auVar25._8_8_ - auVar22._8_8_ * auVar28._8_8_;
      auVar25 = blendpd(auVar24,auVar21,2);
      dVar8 = (this->Transform).Translation.XY.m128d_f64[0];
      dVar6 = dVar11 * dVar12 + dVar6 + auVar21._0_8_ +
              (this->Transform).Translation.XY.m128d_f64[1];
      dVar2 = (this->Transform).Translation.ZW.m128d_f64[0];
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar1 = (this->VertexData).AllocatorInstance.Data;
      uVar15 = uVar15 + 1;
      auVar9._8_4_ = SUB84(dVar6,0);
      auVar9._0_8_ = dVar10 * dVar12 + dVar5 + auVar19._8_8_ + dVar8;
      auVar9._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      *(undefined1 (*) [16])(pFVar1 + lVar16) = auVar9;
      *(double *)(pFVar1 + lVar16 + 0x10) = auVar28._0_8_ * dVar12 + dVar7 + auVar25._0_8_ + dVar2;
      lVar16 = lVar16 + 0x18;
    } while ((int)uVar15 < (this->VertexData).ArrayNum);
  }
  *&(this->Transform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Transform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Transform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Transform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Transform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Transform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  UpdateElemBox(this);
  return;
}

// CalcAABB @ 1476f2bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TBox<double> * __thiscall
FKConvexElem::CalcAABB
          (FKConvexElem *this,TBox<double> *__return_storage_ptr__,TTransform<double> *param_1,
          TVector<double> *param_2)

{
  TMatrix<double> *pTVar1;
  undefined1 auStack_188 [32];
  undefined1 local_168 [48];
  __m128d local_138;
  __m128d local_128;
  __m128d local_118;
  TTransform<double> local_108;
  TMatrix<double> local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_188;
  local_128.m128d_f64 = *(double (*) [2])&param_2->field0_0x0;
  local_168._24_8_ = UE::Math::TQuat<double>::Identity.W;
  local_168._16_8_ = UE::Math::TQuat<double>::Identity.Z;
  local_168._8_8_ = UE::Math::TQuat<double>::Identity.Y;
  local_168._0_8_ = UE::Math::TQuat<double>::Identity.X;
  local_168._40_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_168._32_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_108.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_108.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_108.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_138.m128d_f64[1] = 0.0;
  local_138.m128d_f64[0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_118.m128d_f64[1] = 0.0;
  local_118.m128d_f64[0] = (param_2->field0_0x0)._s_0.Z;
  local_108.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_108.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_108.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_108.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_108.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_108.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_108.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_108.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_108.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_108.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_108.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_108.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_108.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_108.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_108.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply(&local_108,(TTransform<double> *)local_168,param_1);
  local_168._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_168._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_168._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_168._24_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_168._16_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_168._28_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_168._40_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_168._32_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_168._44_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_138.m128d_f64[1]._0_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_138.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_138.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_128.m128d_f64[1]._0_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_128.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_128.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_118.m128d_f64[1]._0_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_118.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_118.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply
            ((TTransform<double> *)local_168,&this->Transform,&local_108);
  pTVar1 = UE::Math::TTransform<double>::ToMatrixWithScale
                     ((TTransform<double> *)local_168,&local_a8);
  UE::Math::TBox<double>::TransformBy(&this->ElemBox,__return_storage_ptr__,pTVar1);
  return __return_storage_ptr__;
}

// ConvexFromBoxElem @ 1476f9780

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FKConvexElem::ConvexFromBoxElem(FKConvexElem *this,FKBoxElem *param_1)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  TQuat<double> *pTVar15;
  float *pfVar16;
  float *pfVar17;
  longlong local_res10;
  longlong local_res18;
  int local_158 [2];
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  double local_138;
  double dStack_130;
  double local_128;
  double local_120;
  double dStack_118;
  double local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double local_f0;
  double dStack_e8;
  double local_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  TQuat<double> local_88 [2];
  
  Reset(this);
  local_150 = param_1->X * __real_3f000000;
  local_14c = param_1->Y * __real_3f000000;
  local_148 = param_1->Z * __real_3f000000;
  local_144 = (float)((uint)local_150 ^ __xmm_80000000800000008000000080000000);
  local_140 = (float)((uint)local_14c ^ __xmm_80000000800000008000000080000000);
  local_13c = (float)((uint)local_148 ^ __xmm_80000000800000008000000080000000);
  pTVar15 = UE::Math::TRotator<double>::Quaternion(&param_1->Rotation,local_88);
  dVar5 = (param_1->Center).field0_0x0._s_0.Z;
  pTVar1 = &this->VertexData;
  dVar9 = (param_1->Center).field0_0x0._s_0.X;
  dVar10 = (param_1->Center).field0_0x0._s_0.Y;
  pTVar2 = &this->IndexData;
  local_res18 = 2;
  local_98 = pTVar15->Z;
  dStack_90 = pTVar15->W;
  pfVar17 = &local_14c;
  dStack_a0 = pTVar15->Y;
  local_a8 = pTVar15->X;
  (this->Transform).Rotation.XY.m128d_f64[0] = pTVar15->X;
  (this->Transform).Rotation.XY.m128d_f64[1] = dStack_a0;
  (this->Transform).Rotation.ZW.m128d_f64[0] = local_98;
  (this->Transform).Rotation.ZW.m128d_f64[1] = dStack_90;
  (this->Transform).Translation.XY.m128d_f64[0] = dVar9;
  (this->Transform).Translation.XY.m128d_f64[1] = dVar10;
  (this->Transform).Translation.ZW.m128d_f64[0] = dVar5;
  (this->Transform).Translation.ZW.m128d_f64[1] = 0.0;
  dVar5 = _UNK_150689688;
  (this->Transform).Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  (this->Transform).Scale3D.XY.m128d_f64[1] = dVar5;
  dVar5 = _UNK_150689518;
  (this->Transform).Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  (this->Transform).Scale3D.ZW.m128d_f64[1] = dVar5;
  do {
    pfVar16 = &local_148;
    local_res10 = 2;
    do {
      pFVar6 = (pTVar2->AllocatorInstance).Data;
      iVar14 = (this->VertexData).ArrayNum;
      local_158[0] = iVar14;
      if ((pFVar6 <= (FScriptContainerElement *)local_158) &&
         ((FScriptContainerElement *)local_158 < pFVar6 + (longlong)(this->IndexData).ArrayMax * 4))
      {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar12) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      iVar13 = (this->IndexData).ArrayNum;
      if (iVar13 == (this->IndexData).ArrayMax) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar2->AllocatorInstance,&(this->IndexData).ArrayMax);
      }
      (this->IndexData).ArrayNum = iVar13 + 1;
      *(int *)((pTVar2->AllocatorInstance).Data + (longlong)iVar13 * 4) = local_158[0];
      local_158[0] = iVar14 + 1;
      pFVar6 = (pTVar2->AllocatorInstance).Data;
      if ((pFVar6 <= (FScriptContainerElement *)local_158) &&
         ((FScriptContainerElement *)local_158 < pFVar6 + (longlong)(this->IndexData).ArrayMax * 4))
      {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar12) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      iVar13 = (this->IndexData).ArrayNum;
      if (iVar13 == (this->IndexData).ArrayMax) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar2->AllocatorInstance,&(this->IndexData).ArrayMax);
      }
      (this->IndexData).ArrayNum = iVar13 + 1;
      *(int *)((pTVar2->AllocatorInstance).Data + (longlong)iVar13 * 4) = local_158[0];
      local_158[0] = iVar14 + 2;
      pFVar6 = (pTVar2->AllocatorInstance).Data;
      if ((pFVar6 <= (FScriptContainerElement *)local_158) &&
         ((FScriptContainerElement *)local_158 < pFVar6 + (longlong)(this->IndexData).ArrayMax * 4))
      {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar12) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      iVar13 = (this->IndexData).ArrayNum;
      if (iVar13 == (this->IndexData).ArrayMax) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar2->AllocatorInstance,&(this->IndexData).ArrayMax);
      }
      (this->IndexData).ArrayNum = iVar13 + 1;
      *(int *)((pTVar2->AllocatorInstance).Data + (longlong)iVar13 * 4) = local_158[0];
      local_158[0] = iVar14 + 3;
      pFVar6 = (pTVar2->AllocatorInstance).Data;
      if ((pFVar6 <= (FScriptContainerElement *)local_158) &&
         ((FScriptContainerElement *)local_158 < pFVar6 + (longlong)(this->IndexData).ArrayMax * 4))
      {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar12) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      iVar13 = (this->IndexData).ArrayNum;
      if (iVar13 == (this->IndexData).ArrayMax) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar2->AllocatorInstance,&(this->IndexData).ArrayMax);
      }
      (this->IndexData).ArrayNum = iVar13 + 1;
      *(int *)((pTVar2->AllocatorInstance).Data + (longlong)iVar13 * 4) = local_158[0];
      local_158[0] = iVar14 + 4;
      pFVar6 = (pTVar2->AllocatorInstance).Data;
      if ((pFVar6 <= (FScriptContainerElement *)local_158) &&
         ((FScriptContainerElement *)local_158 < pFVar6 + (longlong)(this->IndexData).ArrayMax * 4))
      {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar12) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      iVar13 = (this->IndexData).ArrayNum;
      if (iVar13 == (this->IndexData).ArrayMax) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar2->AllocatorInstance,&(this->IndexData).ArrayMax);
      }
      (this->IndexData).ArrayNum = iVar13 + 1;
      *(int *)((pTVar2->AllocatorInstance).Data + (longlong)iVar13 * 4) = local_158[0];
      local_158[0] = iVar14 + 5;
      pFVar6 = (pTVar2->AllocatorInstance).Data;
      if ((pFVar6 <= (FScriptContainerElement *)local_158) &&
         ((FScriptContainerElement *)local_158 < pFVar6 + (longlong)(this->IndexData).ArrayMax * 4))
      {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar12) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      iVar14 = (this->IndexData).ArrayNum;
      if (iVar14 == (this->IndexData).ArrayMax) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar2->AllocatorInstance,&(this->IndexData).ArrayMax);
      }
      fVar11 = local_13c;
      fVar3 = pfVar17[-1];
      fVar4 = pfVar16[-1];
      (this->IndexData).ArrayNum = iVar14 + 1;
      *(int *)((pTVar2->AllocatorInstance).Data + (longlong)iVar14 * 4) = local_158[0];
      pFVar6 = (pTVar1->AllocatorInstance).Data;
      local_138 = (double)fVar3;
      dStack_130 = (double)fVar4;
      local_128 = (double)local_148;
      if ((pFVar6 <= (FScriptContainerElement *)&local_138) &&
         ((FScriptContainerElement *)&local_138 <
          pFVar6 + (longlong)(this->VertexData).ArrayMax * 0x18)) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar12) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      iVar14 = (this->VertexData).ArrayNum;
      if (iVar14 == (this->VertexData).ArrayMax) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&pTVar1->AllocatorInstance,&(this->VertexData).ArrayMax);
      }
      local_120 = (double)fVar3;
      (this->VertexData).ArrayNum = iVar14 + 1;
      dStack_118 = (double)fVar4;
      pFVar7 = (pTVar1->AllocatorInstance).Data;
      pFVar6 = pFVar7 + (longlong)iVar14 * 0x18;
      *(double *)pFVar6 = local_138;
      *(double *)(pFVar6 + 8) = dStack_130;
      *(double *)(pFVar7 + (longlong)iVar14 * 0x18 + 0x10) = local_128;
      pFVar6 = (pTVar1->AllocatorInstance).Data;
      local_110 = (double)fVar11;
      if ((pFVar6 <= (FScriptContainerElement *)&local_120) &&
         ((FScriptContainerElement *)&local_120 <
          pFVar6 + (longlong)(this->VertexData).ArrayMax * 0x18)) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar12) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      iVar14 = (this->VertexData).ArrayNum;
      if (iVar14 == (this->VertexData).ArrayMax) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&pTVar1->AllocatorInstance,&(this->VertexData).ArrayMax);
      }
      fVar11 = local_144;
      fVar3 = *pfVar17;
      fVar4 = *pfVar16;
      (this->VertexData).ArrayNum = iVar14 + 1;
      pFVar7 = (pTVar1->AllocatorInstance).Data;
      pFVar6 = pFVar7 + (longlong)iVar14 * 0x18;
      *(double *)pFVar6 = local_120;
      *(double *)(pFVar6 + 8) = dStack_118;
      *(double *)(pFVar7 + (longlong)iVar14 * 0x18 + 0x10) = local_110;
      pFVar6 = (pTVar1->AllocatorInstance).Data;
      dStack_100 = (double)fVar3;
      local_108 = (double)local_150;
      local_f8 = (double)fVar4;
      if ((pFVar6 <= (FScriptContainerElement *)&local_108) &&
         ((FScriptContainerElement *)&local_108 <
          pFVar6 + (longlong)(this->VertexData).ArrayMax * 0x18)) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar12) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      iVar14 = (this->VertexData).ArrayNum;
      if (iVar14 == (this->VertexData).ArrayMax) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&pTVar1->AllocatorInstance,&(this->VertexData).ArrayMax);
      }
      dStack_e8 = (double)fVar3;
      (this->VertexData).ArrayNum = iVar14 + 1;
      local_e0 = (double)fVar4;
      pFVar7 = (pTVar1->AllocatorInstance).Data;
      pFVar6 = pFVar7 + (longlong)iVar14 * 0x18;
      *(double *)pFVar6 = local_108;
      *(double *)(pFVar6 + 8) = dStack_100;
      *(double *)(pFVar7 + (longlong)iVar14 * 0x18 + 0x10) = local_f8;
      pFVar6 = (pTVar1->AllocatorInstance).Data;
      local_f0 = (double)fVar11;
      if ((pFVar6 <= (FScriptContainerElement *)&local_f0) &&
         ((FScriptContainerElement *)&local_f0 <
          pFVar6 + (longlong)(this->VertexData).ArrayMax * 0x18)) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar12) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      iVar14 = (this->VertexData).ArrayNum;
      if (iVar14 == (this->VertexData).ArrayMax) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&pTVar1->AllocatorInstance,&(this->VertexData).ArrayMax);
      }
      fVar11 = local_140;
      fVar3 = pfVar16[-2];
      fVar4 = pfVar17[1];
      (this->VertexData).ArrayNum = iVar14 + 1;
      pFVar7 = (pTVar1->AllocatorInstance).Data;
      pFVar6 = pFVar7 + (longlong)iVar14 * 0x18;
      *(double *)pFVar6 = local_f0;
      *(double *)(pFVar6 + 8) = dStack_e8;
      *(double *)(pFVar7 + (longlong)iVar14 * 0x18 + 0x10) = local_e0;
      pFVar6 = (pTVar1->AllocatorInstance).Data;
      local_d8 = (double)fVar3;
      dStack_d0 = (double)local_14c;
      local_c8 = (double)fVar4;
      if ((pFVar6 <= (FScriptContainerElement *)&local_d8) &&
         ((FScriptContainerElement *)&local_d8 <
          pFVar6 + (longlong)(this->VertexData).ArrayMax * 0x18)) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar12) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      iVar14 = (this->VertexData).ArrayNum;
      if (iVar14 == (this->VertexData).ArrayMax) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&pTVar1->AllocatorInstance,&(this->VertexData).ArrayMax);
      }
      local_c0 = (double)fVar3;
      (this->VertexData).ArrayNum = iVar14 + 1;
      local_b0 = (double)fVar4;
      pFVar7 = (pTVar1->AllocatorInstance).Data;
      pFVar6 = pFVar7 + (longlong)iVar14 * 0x18;
      *(double *)pFVar6 = local_d8;
      *(double *)(pFVar6 + 8) = dStack_d0;
      *(double *)(pFVar7 + (longlong)iVar14 * 0x18 + 0x10) = local_c8;
      pFVar6 = (pTVar1->AllocatorInstance).Data;
      dStack_b8 = (double)fVar11;
      if ((pFVar6 <= (FScriptContainerElement *)&local_c0) &&
         ((FScriptContainerElement *)&local_c0 <
          pFVar6 + (longlong)(this->VertexData).ArrayMax * 0x18)) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar12) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      iVar14 = (this->VertexData).ArrayNum;
      if (iVar14 == (this->VertexData).ArrayMax) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&pTVar1->AllocatorInstance,&(this->VertexData).ArrayMax);
      }
      (this->VertexData).ArrayNum = iVar14 + 1;
      pfVar16 = pfVar16 + 3;
      local_res10 = local_res10 + -1;
      pFVar7 = (pTVar1->AllocatorInstance).Data;
      pFVar6 = pFVar7 + (longlong)iVar14 * 0x18;
      *(double *)pFVar6 = local_c0;
      *(double *)(pFVar6 + 8) = dStack_b8;
      *(double *)(pFVar7 + (longlong)iVar14 * 0x18 + 0x10) = local_b0;
    } while (local_res10 != 0);
    pfVar17 = pfVar17 + 3;
    local_res18 = local_res18 + -1;
  } while (local_res18 != 0);
  UpdateElemBox(this);
  return;
}

// GetPlanes @ 147709960

void __thiscall
FKConvexElem::GetPlanes
          (FKConvexElem *this,TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  FConvex *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  undefined4 uVar12;
  double dVar13;
  undefined1 local_68 [16];
  double local_58;
  double dStack_50;
  undefined1 local_30 [16];
  double local_20;
  
  pFVar1 = (this->ChaosConvex).Reference;
  if (pFVar1 != (FConvex *)0x0) {
    uVar10 = 0;
    lVar11 = (longlong)(pFVar1->Planes).ArrayNum;
    if (0 < lVar11) {
      lVar9 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar10 < (pFVar1->Planes).ArrayNum) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar2 = (pFVar1->Planes).AllocatorInstance.Data;
        pFVar3 = (param_1->AllocatorInstance).Data;
        dVar5 = (double)*(float *)(pFVar2 + lVar9 + 0x10);
        uVar12 = (undefined4)((ulonglong)dVar5 >> 0x20);
        local_58 = (double)*(float *)(pFVar2 + lVar9 + 0x14);
        dVar13 = (double)*(float *)(pFVar2 + lVar9 + 0xc);
        local_30._8_4_ = SUB84(dVar5,0);
        local_30._0_8_ = dVar13;
        local_30._12_4_ = uVar12;
        local_68._8_4_ = SUB84(dVar5,0);
        local_68._0_8_ = dVar13;
        local_68._12_4_ = uVar12;
        dStack_50 = (double)*(float *)(pFVar2 + lVar9 + 4) * dVar5 +
                    (double)*(float *)(pFVar2 + lVar9) * dVar13 +
                    (double)*(float *)(pFVar2 + lVar9 + 8) * local_58;
        local_20 = local_58;
        if (((pFVar3 <= (FScriptContainerElement *)local_68) &&
            ((FScriptContainerElement *)local_68 < pFVar3 + (longlong)param_1->ArrayMax * 0x20)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar8 = param_1->ArrayNum;
        if (iVar8 == param_1->ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x1020,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar8 + 1;
        uVar10 = uVar10 + 1;
        lVar9 = lVar9 + 0x18;
        pFVar3 = (param_1->AllocatorInstance).Data;
        pFVar2 = pFVar3 + (longlong)iVar8 * 0x20;
        *(undefined8 *)pFVar2 = local_68._0_8_;
        *(undefined8 *)(pFVar2 + 8) = local_68._8_8_;
        pFVar3 = pFVar3 + (longlong)iVar8 * 0x20 + 0x10;
        *(double *)pFVar3 = local_58;
        *(double *)(pFVar3 + 8) = dStack_50;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
  }
  return;
}

// HullFromPlanes @ 147712e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FKConvexElem::HullFromPlanes
          (FKConvexElem *this,TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2,float param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_> *pTVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  FKConvexElem *pFVar20;
  bool bVar21;
  undefined1 uVar22;
  bool bVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  ForElementType<UE::Math::TVector<float>_> FVar27;
  longlong lVar28;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar29;
  longlong lVar30;
  longlong lVar31;
  uint uVar32;
  FScriptContainerElement *pFVar33;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar34;
  uint uVar35;
  uint uVar36;
  TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_> *pTVar37;
  TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_> *pTVar38;
  float fVar39;
  double dVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auStackY_398 [32];
  undefined4 local_348 [2];
  TVector<float>_u_0 local_340;
  TVector<float>_u_0 local_330;
  ForAnyElementType local_320;
  int local_318 [2];
  float local_310;
  uint local_30c;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_308;
  TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_> *local_300;
  FKConvexElem *local_2f8;
  longlong local_2f0;
  longlong local_2e8;
  float local_2e0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_2d8;
  longlong local_2d0;
  TVector<float>_u_0 local_2c8;
  TVector<float>_u_0 local_2bc;
  TVector<double>_u_0 local_2b0;
  double local_298;
  double local_290;
  double local_288;
  TVector<double>_u_0 local_280;
  double local_258;
  FPoly local_248;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_398;
  local_308 = param_2;
  local_300 = param_1;
  local_2f8 = this;
  local_2e0 = param_3;
  Reset(this);
  local_310 = 0.0;
  local_30c = 0;
  if (0 < param_1->ArrayNum) {
    local_2e8 = 0;
    fVar39 = __real_49800000;
    do {
      lVar28 = local_2e8;
      uVar25 = local_30c;
      FPoly::FPoly(&local_248);
      uVar32 = ~uVar25 >> 0x1f;
      uVar24 = 0;
      if ((int)uVar25 < param_1->ArrayNum) {
        uVar24 = uVar32;
      }
      if ((uVar24 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar6 = (code *)swi(3);
        uVar22 = (*pcVar6)();
        return (bool)uVar22;
      }
      pFVar5 = (param_1->AllocatorInstance).Data;
      lVar28 = lVar28 * 0x20;
      local_248.Normal.field0_0x0._s_0.Y = (float)*(double *)(pFVar5 + lVar28 + 8);
      local_248.Normal.field0_0x0._s_0.Z = (float)*(double *)(pFVar5 + lVar28 + 0x10);
      local_248.Normal.field0_0x0._s_0.X = (float)*(double *)(pFVar5 + lVar28);
      UE::Math::TVector<float>::FindBestAxisVectors
                (&local_248.Normal,(TVector<float> *)&local_330._s_0,
                 (TVector<float> *)&local_340._s_0);
      uVar24 = 0;
      if ((int)uVar25 < param_1->ArrayNum) {
        uVar24 = uVar32;
      }
      if ((uVar24 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar6 = (code *)swi(3);
        uVar22 = (*pcVar6)();
        return (bool)uVar22;
      }
      pFVar5 = (param_1->AllocatorInstance).Data;
      uVar25 = 0;
      if ((int)local_30c < param_1->ArrayNum) {
        uVar25 = uVar32;
      }
      if ((uVar25 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar6 = (code *)swi(3);
        uVar22 = (*pcVar6)();
        return (bool)uVar22;
      }
      dVar4 = *(double *)((param_1->AllocatorInstance).Data + lVar28 + 0x18);
      fVar41 = (float)(dVar4 * *(double *)(pFVar5 + lVar28));
      fVar42 = (float)(dVar4 * *(double *)(pFVar5 + lVar28 + 8));
      fVar43 = (float)(dVar4 * *(double *)(pFVar5 + lVar28 + 0x10));
      uVar25 = local_248.Vertices.ArrayNum;
      if (local_248.Vertices.ArrayNum == local_248.Vertices.ArrayMax) {
        uVar25 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<float>_>_>
                           (0x40c,&local_248.Vertices.AllocatorInstance,&local_248.Vertices.ArrayMax
                           );
      }
      local_248.Vertices.ArrayNum = uVar25 + 1;
      uVar24 = 0;
      if ((int)uVar25 < local_248.Vertices.ArrayNum) {
        uVar24 = ~uVar25 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar6 = (code *)swi(3);
        uVar22 = (*pcVar6)();
        return (bool)uVar22;
      }
      uVar19 = local_330._s_0.Z;
      uVar18 = local_330._s_0.Y;
      uVar17 = local_330._s_0.X;
      uVar16 = local_340._s_0.Z;
      uVar15 = local_340._s_0.Y;
      uVar14 = local_340._s_0.X;
      FVar27 = (ForElementType<UE::Math::TVector<float>_>)&local_248.Vertices;
      if (local_248.Vertices.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::Math::TVector<float>_>)0x0) {
        FVar27 = local_248.Vertices.AllocatorInstance.SecondaryData;
      }
      pfVar1 = (float *)((longlong)FVar27 + (longlong)(int)uVar25 * 0xc);
      if (pfVar1 != (float *)0x0) {
        *pfVar1 = local_330._s_0.X * fVar39 + fVar41 + local_340._s_0.X * fVar39;
        pfVar1[1] = local_330._s_0.Y * fVar39 + fVar42 + local_340._s_0.Y * fVar39;
        pfVar1[2] = local_330._s_0.Z * fVar39 + fVar43 + local_340._s_0.Z * fVar39;
      }
      uVar25 = local_248.Vertices.ArrayNum;
      if (local_248.Vertices.ArrayNum == local_248.Vertices.ArrayMax) {
        uVar25 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<float>_>_>
                           (0x40c,&local_248.Vertices.AllocatorInstance,&local_248.Vertices.ArrayMax
                           );
      }
      local_248.Vertices.ArrayNum = uVar25 + 1;
      uVar24 = 0;
      if ((int)uVar25 < local_248.Vertices.ArrayNum) {
        uVar24 = ~uVar25 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar6 = (code *)swi(3);
        uVar22 = (*pcVar6)();
        return (bool)uVar22;
      }
      FVar27 = (ForElementType<UE::Math::TVector<float>_>)&local_248.Vertices;
      if (local_248.Vertices.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::Math::TVector<float>_>)0x0) {
        FVar27 = local_248.Vertices.AllocatorInstance.SecondaryData;
      }
      pfVar1 = (float *)((longlong)FVar27 + (longlong)(int)uVar25 * 0xc);
      if (pfVar1 != (float *)0x0) {
        *pfVar1 = (fVar41 - (float)uVar17 * fVar39) + (float)uVar14 * fVar39;
        pfVar1[1] = (fVar42 - (float)uVar18 * fVar39) + (float)uVar15 * fVar39;
        pfVar1[2] = (fVar43 - (float)uVar19 * fVar39) + (float)uVar16 * fVar39;
      }
      uVar25 = local_248.Vertices.ArrayNum;
      if (local_248.Vertices.ArrayNum == local_248.Vertices.ArrayMax) {
        uVar25 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<float>_>_>
                           (0x40c,&local_248.Vertices.AllocatorInstance,&local_248.Vertices.ArrayMax
                           );
      }
      local_248.Vertices.ArrayNum = uVar25 + 1;
      uVar24 = 0;
      if ((int)uVar25 < local_248.Vertices.ArrayNum) {
        uVar24 = ~uVar25 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar6 = (code *)swi(3);
        uVar22 = (*pcVar6)();
        return (bool)uVar22;
      }
      FVar27 = (ForElementType<UE::Math::TVector<float>_>)&local_248.Vertices;
      if (local_248.Vertices.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::Math::TVector<float>_>)0x0) {
        FVar27 = local_248.Vertices.AllocatorInstance.SecondaryData;
      }
      pfVar1 = (float *)((longlong)FVar27 + (longlong)(int)uVar25 * 0xc);
      if (pfVar1 != (float *)0x0) {
        *pfVar1 = (fVar41 - (float)uVar17 * fVar39) - (float)uVar14 * fVar39;
        pfVar1[1] = (fVar42 - (float)uVar18 * fVar39) - (float)uVar15 * fVar39;
        pfVar1[2] = (fVar43 - (float)uVar19 * fVar39) - (float)uVar16 * fVar39;
      }
      uVar25 = local_248.Vertices.ArrayNum;
      if (local_248.Vertices.ArrayNum == local_248.Vertices.ArrayMax) {
        uVar25 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<float>_>_>
                           (0x40c,&local_248.Vertices.AllocatorInstance,&local_248.Vertices.ArrayMax
                           );
      }
      local_248.Vertices.ArrayNum = uVar25 + 1;
      uVar24 = 0;
      if ((int)uVar25 < local_248.Vertices.ArrayNum) {
        uVar24 = ~uVar25 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar6 = (code *)swi(3);
        uVar22 = (*pcVar6)();
        return (bool)uVar22;
      }
      FVar27 = (ForElementType<UE::Math::TVector<float>_>)&local_248.Vertices;
      if (local_248.Vertices.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::Math::TVector<float>_>)0x0) {
        FVar27 = local_248.Vertices.AllocatorInstance.SecondaryData;
      }
      pfVar1 = (float *)((longlong)FVar27 + (longlong)(int)uVar25 * 0xc);
      if (pfVar1 != (float *)0x0) {
        *pfVar1 = ((float)uVar17 * fVar39 + fVar41) - (float)uVar14 * fVar39;
        pfVar1[1] = ((float)uVar18 * fVar39 + fVar42) - (float)uVar15 * fVar39;
        pfVar1[2] = ((float)uVar19 * fVar39 + fVar43) - (float)uVar16 * fVar39;
      }
      iVar26 = param_1->ArrayNum;
      uVar25 = 0;
      lVar28 = 0;
      if (0 < iVar26) {
        lVar30 = 0;
        lVar31 = local_2e8;
        do {
          if (lVar31 != lVar28) {
            uVar32 = ~uVar25 >> 0x1f;
            uVar24 = 0;
            if ((int)uVar25 < iVar26) {
              uVar24 = uVar32;
            }
            if ((uVar24 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar6 = (code *)swi(3);
              uVar22 = (*pcVar6)();
              return (bool)uVar22;
            }
            pFVar5 = (param_1->AllocatorInstance).Data;
            uVar24 = 0;
            if ((int)uVar25 < param_1->ArrayNum) {
              uVar24 = uVar32;
            }
            if ((uVar24 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar6 = (code *)swi(3);
              uVar22 = (*pcVar6)();
              return (bool)uVar22;
            }
            dVar4 = *(double *)((param_1->AllocatorInstance).Data + lVar30 + 0x18);
            uVar24 = 0;
            if ((int)uVar25 < param_1->ArrayNum) {
              uVar24 = uVar32;
            }
            local_2c8._s_0.X = (float)(dVar4 * *(double *)(pFVar5 + lVar30));
            local_2c8._s_0.Y = (float)(dVar4 * *(double *)(pFVar5 + lVar30 + 8));
            local_2c8._s_0.Z = (float)(dVar4 * *(double *)(pFVar5 + lVar30 + 0x10));
            if ((uVar24 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar6 = (code *)swi(3);
              uVar22 = (*pcVar6)();
              return (bool)uVar22;
            }
            pFVar5 = (param_1->AllocatorInstance).Data;
            local_2bc._s_0.Y =
                 (float)((uint)(float)*(double *)(pFVar5 + lVar30 + 8) ^
                        __xmm_80000000800000008000000080000000);
            local_2bc._s_0.Z =
                 (float)((uint)(float)*(double *)(pFVar5 + lVar30 + 0x10) ^
                        __xmm_80000000800000008000000080000000);
            local_2bc._s_0.X =
                 (float)((uint)(float)*(double *)(pFVar5 + lVar30) ^
                        __xmm_80000000800000008000000080000000);
            iVar26 = FPoly::Split(&local_248,(TVector<float> *)&local_2bc._s_0,
                                  (TVector<float> *)&local_2c8._s_0);
            lVar31 = local_2e8;
            if (iVar26 == 0) {
              local_248.Vertices.ArrayNum = 0;
              this = local_2f8;
              if (local_248.Vertices.ArrayMax != 0) {
                UE::Core::Private::
                ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<float>_>_>
                          (0xc,4,0,&local_248.Vertices.AllocatorInstance,0,
                           &local_248.Vertices.ArrayMax);
                this = local_2f8;
              }
              break;
            }
          }
          iVar26 = param_1->ArrayNum;
          uVar25 = uVar25 + 1;
          lVar28 = lVar28 + 1;
          lVar30 = lVar30 + 0x20;
          this = local_2f8;
        } while ((int)uVar25 < iVar26);
      }
      fVar41 = local_310;
      if (0 < local_248.Vertices.ArrayNum) {
        local_320.Data = (FScriptContainerElement *)0x0;
        local_318[0] = 0;
        local_318[1] = 0;
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_248.Vertices.ArrayNum,&local_320,local_318,local_318 + 1);
        fVar41 = FPoly::Area(&local_248);
        fVar42 = local_2e0;
        fVar41 = local_310 + fVar41;
        local_2f0 = 0;
        uVar25 = 0;
        local_310 = fVar41;
        if (0 < local_248.Vertices.ArrayNum) {
          pTVar34 = &this->VertexData;
          lVar28 = 0;
          local_2d8 = pTVar34;
          do {
            uVar32 = 0;
            lVar31 = 0;
            local_2d0 = -1;
            uVar24 = 0xffffffff;
            if (param_2->ArrayNum < 1) {
LAB_1477139e2:
              uVar24 = 0;
              if ((int)uVar25 < local_248.Vertices.ArrayNum) {
                uVar24 = ~uVar25 >> 0x1f;
              }
              if ((uVar24 == 0) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar21)) {
                pcVar6 = (code *)swi(3);
                uVar22 = (*pcVar6)();
                return (bool)uVar22;
              }
              FVar27 = (ForElementType<UE::Math::TVector<float>_>)&local_248.Vertices;
              if (local_248.Vertices.AllocatorInstance.SecondaryData !=
                  (ForElementType<UE::Math::TVector<float>_>)0x0) {
                FVar27 = local_248.Vertices.AllocatorInstance.SecondaryData;
              }
              local_2b0._s_0.Z = (double)*(float *)((uchar *)((longlong)FVar27 + 8) + lVar28);
              local_2b0._s_0.Y = (double)*(float *)((uchar *)((longlong)FVar27 + 4) + lVar28);
              local_2b0._s_0.X = (double)*(float *)((longlong)FVar27 + lVar28);
              iVar26 = AddVertexIfNotPresent(pTVar34,(TVector<double> *)&local_2b0._s_0);
              uVar24 = 0;
              if ((int)uVar25 < local_318[0]) {
                uVar24 = ~uVar25 >> 0x1f;
              }
              if ((uVar24 == 0) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar21)) {
                pcVar6 = (code *)swi(3);
                uVar22 = (*pcVar6)();
                return (bool)uVar22;
              }
              *(int *)(local_320.Data + local_2f0 * 4) = iVar26;
            }
            else {
              lVar30 = 0;
              fVar39 = __real_7f7fc99e;
              do {
                uVar35 = 0;
                if ((int)uVar25 < local_248.Vertices.ArrayNum) {
                  uVar35 = ~uVar25 >> 0x1f;
                }
                if ((uVar35 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar21)) {
                  pcVar6 = (code *)swi(3);
                  uVar22 = (*pcVar6)();
                  return (bool)uVar22;
                }
                FVar27 = (ForElementType<UE::Math::TVector<float>_>)&local_248.Vertices;
                if (local_248.Vertices.AllocatorInstance.SecondaryData !=
                    (ForElementType<UE::Math::TVector<float>_>)0x0) {
                  FVar27 = local_248.Vertices.AllocatorInstance.SecondaryData;
                }
                fVar43 = *(float *)((longlong)FVar27 + lVar28);
                fVar2 = *(float *)((uchar *)((longlong)FVar27 + 4) + lVar28);
                fVar3 = *(float *)((uchar *)((longlong)FVar27 + 8) + lVar28);
                uVar35 = 0;
                if ((int)uVar32 < local_308->ArrayNum) {
                  uVar35 = ~uVar32 >> 0x1f;
                }
                if ((uVar35 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar21)) {
                  pcVar6 = (code *)swi(3);
                  uVar22 = (*pcVar6)();
                  return (bool)uVar22;
                }
                pFVar33 = (local_308->AllocatorInstance).Data;
                pFVar5 = pFVar33 + lVar30;
                local_258 = *(double *)(pFVar33 + lVar30 + 0x10);
                dVar9 = (double)fVar43 - *(double *)pFVar5;
                dVar11 = (double)fVar3 - local_258;
                dVar4 = (double)fVar2 - *(double *)(pFVar5 + 8);
                fVar43 = (float)(dVar4 * dVar4 + dVar9 * dVar9 + dVar11 * dVar11);
                if (fVar43 < fVar39) {
                  fVar39 = fVar43;
                  local_2d0 = lVar31;
                  uVar24 = uVar32;
                }
                uVar32 = uVar32 + 1;
                lVar31 = lVar31 + 1;
                lVar30 = lVar30 + 0x18;
              } while ((int)uVar32 < local_308->ArrayNum);
              param_2 = local_308;
              pTVar34 = local_2d8;
              if ((uVar24 == 0xffffffff) || (fVar42 <= fVar39)) goto LAB_1477139e2;
              uVar32 = 0;
              if ((int)uVar24 < local_308->ArrayNum) {
                uVar32 = ~uVar24 >> 0x1f;
              }
              if ((uVar32 == 0) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar21)) {
                pcVar6 = (code *)swi(3);
                uVar22 = (*pcVar6)();
                return (bool)uVar22;
              }
              pTVar34 = local_2d8;
              param_2 = local_308;
              pFVar33 = (local_308->AllocatorInstance).Data;
              pFVar5 = pFVar33 + local_2d0 * 0x18;
              local_280._s_0.X = (double)*(undefined8 *)pFVar5;
              local_280._s_0.Y = (double)*(undefined8 *)(pFVar5 + 8);
              local_280._s_0.Z = (double)*(undefined8 *)(pFVar33 + local_2d0 * 0x18 + 0x10);
              iVar26 = AddVertexIfNotPresent(local_2d8,(TVector<double> *)&local_280._s_0);
              uVar24 = 0;
              if ((int)uVar25 < local_318[0]) {
                uVar24 = ~uVar25 >> 0x1f;
              }
              if ((uVar24 == 0) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar21)) {
                pcVar6 = (code *)swi(3);
                uVar22 = (*pcVar6)();
                return (bool)uVar22;
              }
              *(int *)(local_320.Data + local_2f0 * 4) = iVar26;
            }
            local_2f0 = local_2f0 + 1;
            uVar25 = uVar25 + 1;
            lVar28 = lVar28 + 0xc;
            param_1 = local_300;
            fVar39 = __real_49800000;
          } while ((int)uVar25 < local_248.Vertices.ArrayNum);
        }
        iVar26 = local_248.Vertices.ArrayNum - 2;
        if ((local_318[0] < 1) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar6 = (code *)swi(3);
          uVar22 = (*pcVar6)();
          return (bool)uVar22;
        }
        pFVar20 = local_2f8;
        lVar28 = (longlong)iVar26;
        local_348[0] = *(undefined4 *)local_320.Data;
        if (0 < iVar26) {
          uVar25 = 2;
          pTVar29 = &local_2f8->IndexData;
          lVar31 = 8;
          do {
            pFVar5 = (pTVar29->AllocatorInstance).Data;
            if (((pFVar5 <= (FScriptContainerElement *)local_348) &&
                ((FScriptContainerElement *)local_348 <
                 pFVar5 + (longlong)(pFVar20->IndexData).ArrayMax * 4)) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar21)) {
              pcVar6 = (code *)swi(3);
              uVar22 = (*pcVar6)();
              return (bool)uVar22;
            }
            iVar26 = (pFVar20->IndexData).ArrayNum;
            if (iVar26 == (pFVar20->IndexData).ArrayMax) {
              iVar26 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&pTVar29->AllocatorInstance,&(pFVar20->IndexData).ArrayMax);
            }
            (pFVar20->IndexData).ArrayNum = iVar26 + 1;
            *(undefined4 *)((pTVar29->AllocatorInstance).Data + (longlong)iVar26 * 4) = local_348[0]
            ;
            uVar24 = 0;
            if ((int)(uVar25 - 1) < local_318[0]) {
              uVar24 = ~(uVar25 - 1) >> 0x1f;
            }
            if ((uVar24 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar6 = (code *)swi(3);
              uVar22 = (*pcVar6)();
              return (bool)uVar22;
            }
            pFVar5 = (pTVar29->AllocatorInstance).Data;
            pFVar33 = local_320.Data + lVar31 + -4;
            if (((pFVar5 <= pFVar33) &&
                (pFVar33 < pFVar5 + (longlong)(pFVar20->IndexData).ArrayMax * 4)) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar21)) {
              pcVar6 = (code *)swi(3);
              uVar22 = (*pcVar6)();
              return (bool)uVar22;
            }
            iVar26 = (pFVar20->IndexData).ArrayNum;
            if (iVar26 == (pFVar20->IndexData).ArrayMax) {
              iVar26 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&pTVar29->AllocatorInstance,&(pFVar20->IndexData).ArrayMax);
            }
            (pFVar20->IndexData).ArrayNum = iVar26 + 1;
            *(undefined4 *)((pTVar29->AllocatorInstance).Data + (longlong)iVar26 * 4) =
                 *(undefined4 *)pFVar33;
            uVar24 = 0;
            if ((int)uVar25 < local_318[0]) {
              uVar24 = ~uVar25 >> 0x1f;
            }
            if ((uVar24 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar6 = (code *)swi(3);
              uVar22 = (*pcVar6)();
              return (bool)uVar22;
            }
            pFVar5 = (pTVar29->AllocatorInstance).Data;
            pFVar33 = local_320.Data + lVar31;
            if (((pFVar5 <= pFVar33) &&
                (pFVar33 < pFVar5 + (longlong)(pFVar20->IndexData).ArrayMax * 4)) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar21)) {
              pcVar6 = (code *)swi(3);
              uVar22 = (*pcVar6)();
              return (bool)uVar22;
            }
            iVar26 = (pFVar20->IndexData).ArrayNum;
            if (iVar26 == (pFVar20->IndexData).ArrayMax) {
              iVar26 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&pTVar29->AllocatorInstance,&(pFVar20->IndexData).ArrayMax);
            }
            (pFVar20->IndexData).ArrayNum = iVar26 + 1;
            uVar25 = uVar25 + 1;
            lVar31 = lVar31 + 4;
            *(undefined4 *)((pTVar29->AllocatorInstance).Data + (longlong)iVar26 * 4) =
                 *(undefined4 *)pFVar33;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
        }
        param_2 = local_308;
        if (local_320.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_320.Data);
          param_2 = local_308;
        }
      }
      if (local_248.Vertices.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::Math::TVector<float>_>)0x0) {
        FMemory::Free((void *)local_248.Vertices.AllocatorInstance.SecondaryData);
      }
      pFVar20 = local_2f8;
      local_30c = local_30c + 1;
      local_2e8 = local_2e8 + 1;
      this = local_2f8;
    } while ((int)local_30c < param_1->ArrayNum);
    if (__real_3a83126f <= fVar41) {
      if ((local_2f8->VertexData).ArrayNum < 4) {
        return false;
      }
      bVar21 = false;
      pFVar5 = (local_2f8->VertexData).AllocatorInstance.Data;
      if (((local_2f8->VertexData).ArrayNum < 1) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar6 = (code *)swi(3);
        uVar22 = (*pcVar6)();
        return (bool)uVar22;
      }
      dVar10 = __real_3feffffffaa19c48;
      dVar13 = __real_3e45798ee0000000;
      dVar12 = __real_3ff0000000000000;
      pFVar33 = (pFVar20->VertexData).AllocatorInstance.Data;
      dVar9 = *(double *)(pFVar5 + 0x18) - *(double *)pFVar33;
      dVar40 = *(double *)(pFVar5 + 0x20) - *(double *)(pFVar33 + 8);
      dVar11 = *(double *)(pFVar5 + 0x28) - *(double *)(pFVar33 + 0x10);
      dVar4 = dVar40 * dVar40 + dVar9 * dVar9 + dVar11 * dVar11;
      if (__real_3e45798ee0000000 < dVar4) {
        local_298 = __real_3ff0000000000000 / SQRT(dVar4);
        dVar9 = dVar9 * local_298;
        dVar40 = dVar40 * local_298;
        dVar11 = dVar11 * local_298;
      }
      iVar26 = (pFVar20->VertexData).ArrayNum;
      uVar25 = 2;
      if (iVar26 < 3) {
        return false;
      }
      lVar28 = 0x30;
      lVar31 = 0x30;
      pTVar37 = local_300;
      pTVar38 = local_300;
      pTVar8 = local_300;
      do {
        if (bVar21) goto LAB_147714082;
        uVar24 = 0;
        if ((int)uVar25 < (pFVar20->VertexData).ArrayNum) {
          uVar24 = ~uVar25 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar6 = (code *)swi(3);
          uVar22 = (*pcVar6)();
          return (bool)uVar22;
        }
        pFVar5 = (pFVar20->VertexData).AllocatorInstance.Data;
        if (((pFVar20->VertexData).ArrayNum < 1) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar6 = (code *)swi(3);
          uVar22 = (*pcVar6)();
          return (bool)uVar22;
        }
        pFVar33 = (pFVar20->VertexData).AllocatorInstance.Data;
        pTVar37 = (TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_> *)
                  (*(double *)(pFVar5 + lVar31) - *(double *)pFVar33);
        pTVar8 = (TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_> *)
                 (*(double *)(pFVar5 + lVar31 + 8) - *(double *)(pFVar33 + 8));
        pTVar38 = (TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_> *)
                  (*(double *)(pFVar5 + lVar31 + 0x10) - *(double *)(pFVar33 + 0x10));
        dVar4 = (double)pTVar8 * (double)pTVar8 + (double)pTVar37 * (double)pTVar37 +
                (double)pTVar38 * (double)pTVar38;
        if (dVar13 < dVar4) {
          local_290 = dVar12 / SQRT(dVar4);
          pTVar38 = (TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_> *)
                    ((double)pTVar38 * local_290);
          pTVar8 = (TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_> *)
                   (local_290 * (double)pTVar8);
          pTVar37 = (TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_> *)
                    (local_290 * (double)pTVar37);
        }
        iVar26 = (pFVar20->VertexData).ArrayNum;
        if (dVar9 * (double)pTVar37 + dVar40 * (double)pTVar8 + dVar11 * (double)pTVar38 < dVar10) {
          bVar21 = true;
        }
        uVar25 = uVar25 + 1;
        lVar31 = lVar31 + 0x18;
      } while ((int)uVar25 < iVar26);
      if (!bVar21) {
        return false;
      }
LAB_147714082:
      dVar10 = (double)pTVar38 * dVar40 - (double)pTVar8 * dVar11;
      dVar11 = (double)pTVar37 * dVar11 - (double)pTVar38 * dVar9;
      dVar9 = (double)pTVar8 * dVar9 - (double)pTVar37 * dVar40;
      dVar4 = dVar11 * dVar11 + dVar10 * dVar10 + dVar9 * dVar9;
      if (dVar13 < dVar4) {
        local_288 = dVar12 / SQRT(dVar4);
        dVar10 = dVar10 * local_288;
        dVar11 = dVar11 * local_288;
        dVar9 = dVar9 * local_288;
      }
      if ((iVar26 < 1) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar6 = (code *)swi(3);
        uVar22 = (*pcVar6)();
        return (bool)uVar22;
      }
      uVar24 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar25 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      pFVar5 = (pFVar20->VertexData).AllocatorInstance.Data;
      dVar12 = *(double *)pFVar5;
      dVar40 = *(double *)(pFVar5 + 8);
      local_258 = *(double *)(pFVar5 + 0x10);
      dVar4 = dVar9 * local_258;
      if ((pFVar20->VertexData).ArrayNum < 3) {
        return false;
      }
      uVar32 = 2;
      do {
        uVar35 = 0;
        if ((int)uVar32 < (pFVar20->VertexData).ArrayNum) {
          uVar35 = ~uVar32 >> 0x1f;
        }
        if ((uVar35 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar6 = (code *)swi(3);
          uVar22 = (*pcVar6)();
          return (bool)uVar22;
        }
        pFVar5 = (pFVar20->VertexData).AllocatorInstance.Data;
        dVar7 = (dVar11 * *(double *)(pFVar5 + lVar28 + 8) + dVar10 * *(double *)(pFVar5 + lVar28) +
                dVar9 * *(double *)(pFVar5 + lVar28 + 0x10)) -
                (dVar11 * dVar40 + dVar10 * dVar12 + dVar4);
        uVar35 = SUB84(dVar7,0) & uVar25;
        uVar36 = (uint)((ulonglong)dVar7 >> 0x20) & uVar24;
        if (dVar13 <= (double)CONCAT44(uVar36,uVar35) && (double)CONCAT44(uVar36,uVar35) != dVar13)
        {
          UpdateElemBox(pFVar20);
          return true;
        }
        uVar32 = uVar32 + 1;
        lVar28 = lVar28 + 0x18;
      } while ((int)uVar32 < (pFVar20->VertexData).ArrayNum);
      return false;
    }
  }
  if (4 < (byte)LogPhysics._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPhysics);
  }
  return false;
}

// Reset @ 147724710

void __thiscall FKConvexElem::Reset(FKConvexElem *this)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  
  piVar1 = &(this->VertexData).ArrayMax;
  (this->VertexData).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->VertexData).AllocatorInstance,0,piVar1);
  }
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ElemBox).Max.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ElemBox).Max.field0_0x0._s_0.Y = (double)uVar5;
  (this->ElemBox).Max.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar3 = (this->ElemBox).Max.field0_0x0._s_0.X;
  dVar4 = (this->ElemBox).Max.field0_0x0._s_0.Y;
  (this->ElemBox).IsValid = '\0';
  dVar2 = (this->ElemBox).Max.field0_0x0._s_0.Z;
  (this->ElemBox).Min.field0_0x0._s_0.X = dVar3;
  (this->ElemBox).Min.field0_0x0._s_0.Y = dVar4;
  (this->ElemBox).Min.field0_0x0._s_0.Z = dVar2;
  return;
}

// UpdateElemBox @ 147732270

void __thiscall FKConvexElem::UpdateElemBox(FKConvexElem *this)

{
  double dVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  double dVar11;
  double dVar12;
  
  (this->IndexData).ArrayNum = 0;
  if ((this->IndexData).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->IndexData).AllocatorInstance,0,&(this->IndexData).ArrayMax);
  }
  ComputeChaosConvexIndices(this,false);
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar8 = 0;
  (this->ElemBox).Max.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ElemBox).Max.field0_0x0._s_0.Y = (double)uVar4;
  (this->ElemBox).Max.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar12 = (this->ElemBox).Max.field0_0x0._s_0.X;
  dVar1 = (this->ElemBox).Max.field0_0x0._s_0.Y;
  (this->ElemBox).IsValid = '\0';
  dVar11 = (this->ElemBox).Max.field0_0x0._s_0.Z;
  (this->ElemBox).Min.field0_0x0._s_0.X = dVar12;
  (this->ElemBox).Min.field0_0x0._s_0.Y = dVar1;
  (this->ElemBox).Min.field0_0x0._s_0.Z = dVar11;
  if (0 < (this->VertexData).ArrayNum) {
    lVar7 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar8 < (this->VertexData).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
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
      pFVar2 = (this->VertexData).AllocatorInstance.Data;
      if ((this->ElemBox).IsValid == '\0') {
        dVar11 = *(double *)(pFVar2 + lVar7 + 8);
        (this->ElemBox).Max.field0_0x0._s_0.X = *(double *)(pFVar2 + lVar7);
        (this->ElemBox).Max.field0_0x0._s_0.Y = dVar11;
        dVar11 = *(double *)(pFVar2 + lVar7 + 0x10);
        (this->ElemBox).Max.field0_0x0._s_0.Z = dVar11;
        dVar12 = (this->ElemBox).Max.field0_0x0._s_0.X;
        dVar1 = (this->ElemBox).Max.field0_0x0._s_0.Y;
        (this->ElemBox).IsValid = '\x01';
        (this->ElemBox).Min.field0_0x0._s_0.X = dVar12;
        (this->ElemBox).Min.field0_0x0._s_0.Y = dVar1;
        (this->ElemBox).Min.field0_0x0._s_0.Z = dVar11;
      }
      else {
        dVar11 = *(double *)(pFVar2 + lVar7);
        uVar9 = SUB84(dVar11,0);
        uVar10 = (undefined4)((ulonglong)dVar11 >> 0x20);
        dVar12 = *(double *)&(this->ElemBox).Min.field0_0x0;
        if (dVar12 <= dVar11) {
          uVar9 = SUB84(dVar12,0);
          uVar10 = (undefined4)((ulonglong)dVar12 >> 0x20);
        }
        dVar11 = (this->ElemBox).Max.field0_0x0._s_0.X;
        (this->ElemBox).Min.field0_0x0._s_0.X = (double)CONCAT44(uVar10,uVar9);
        dVar12 = *(double *)(pFVar2 + lVar7 + 8);
        uVar9 = SUB84(dVar12,0);
        uVar10 = (undefined4)((ulonglong)dVar12 >> 0x20);
        dVar1 = *(double *)((longlong)&(this->ElemBox).Min.field0_0x0 + 8);
        if (dVar1 <= dVar12) {
          uVar9 = SUB84(dVar1,0);
          uVar10 = (undefined4)((ulonglong)dVar1 >> 0x20);
        }
        (this->ElemBox).Min.field0_0x0._s_0.Y = (double)CONCAT44(uVar10,uVar9);
        dVar12 = *(double *)(pFVar2 + lVar7 + 0x10);
        uVar9 = SUB84(dVar12,0);
        uVar10 = (undefined4)((ulonglong)dVar12 >> 0x20);
        dVar1 = *(double *)((longlong)&(this->ElemBox).Min.field0_0x0 + 0x10);
        if (dVar1 <= dVar12) {
          uVar9 = SUB84(dVar1,0);
          uVar10 = (undefined4)((ulonglong)dVar1 >> 0x20);
        }
        (this->ElemBox).Min.field0_0x0._s_0.Z = (double)CONCAT44(uVar10,uVar9);
        if (dVar11 <= *(double *)(pFVar2 + lVar7)) {
          dVar11 = *(double *)(pFVar2 + lVar7);
        }
        dVar12 = *(double *)((longlong)&(this->ElemBox).Max.field0_0x0 + 8);
        uVar9 = SUB84(dVar12,0);
        uVar10 = (undefined4)((ulonglong)dVar12 >> 0x20);
        (this->ElemBox).Max.field0_0x0._s_0.X = dVar11;
        dVar11 = *(double *)(pFVar2 + lVar7 + 8);
        if (dVar12 <= dVar11) {
          uVar9 = SUB84(dVar11,0);
          uVar10 = (undefined4)((ulonglong)dVar11 >> 0x20);
        }
        (this->ElemBox).Max.field0_0x0._s_0.Y = (double)CONCAT44(uVar10,uVar9);
        dVar11 = (this->ElemBox).Max.field0_0x0._s_0.Z;
        dVar12 = *(double *)(pFVar2 + lVar7 + 0x10);
        if (*(double *)(pFVar2 + lVar7 + 0x10) <= dVar11) {
          dVar12 = dVar11;
        }
        (this->ElemBox).Max.field0_0x0._s_0.Z = dVar12;
      }
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 0x18;
    } while ((int)uVar8 < (this->VertexData).ArrayNum);
  }
  return;
}

// FKConvexElem @ 14824f170

FKConvexElem * __thiscall FKConvexElem::FKConvexElem(FKConvexElem *this,FKConvexElem *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  this->field_0x18 = this->field_0x18 | 1;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined4 *)&this->field_0x10 = 0;
  (this->VertexData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexData).ArrayNum = 0;
  (this->VertexData).ArrayMax = 0;
  (this->IndexData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IndexData).ArrayNum = 0;
  (this->IndexData).ArrayMax = 0;
  (this->ElemBox).IsValid = '\0';
  *(undefined4 *)&this->field_0x14 = 9;
  this->field_0x19 = 3;
  *(undefined4 *)&this->field_0x20 = 6;
  *(FKConvexElem **)&this->field_0x28 = this;
  *(undefined ***)this = &___7FKConvexElem__6B_;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->Transform).Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->Transform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->Transform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->Transform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->Transform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->Transform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->Transform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->Transform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->Transform).Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->Transform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->Transform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->Transform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  (this->ChaosConvex).Reference = (FConvex *)0x0;
  CloneElem(this,param_1);
  return this;
}

// FKConvexElem @ 14824f240

FKConvexElem * __thiscall FKConvexElem::FKConvexElem(FKConvexElem *this)

{
  this->field_0x18 = this->field_0x18 | 1;
  this->field_0x19 = 3;
  *(undefined4 *)&this->field_0x10 = 0;
  (this->VertexData).ArrayNum = 0;
  (this->VertexData).ArrayMax = 0;
  (this->IndexData).ArrayNum = 0;
  (this->IndexData).ArrayMax = 0;
  *(undefined4 *)&this->field_0x20 = 6;
  *(FKConvexElem **)&this->field_0x28 = this;
  *(undefined ***)this = &___7FKConvexElem__6B_;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined4 *)&this->field_0x14 = 3;
  (this->ElemBox).Min.field0_0x0._s_0.X = 0.0;
  (this->ElemBox).Min.field0_0x0._s_0.Y = 0.0;
  (this->ElemBox).Min.field0_0x0._s_0.Z = 0.0;
  (this->VertexData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IndexData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ElemBox).Max.field0_0x0._s_0.X = 0.0;
  (this->ElemBox).Max.field0_0x0._s_0.Y = 0.0;
  (this->ElemBox).Max.field0_0x0._s_0.Z = 0.0;
  (this->ElemBox).IsValid = '\0';
  (this->ElemBox).Pad[0] = '\0';
  (this->ElemBox).Pad[1] = '\0';
  (this->ElemBox).Pad[2] = '\0';
  (this->ElemBox).Pad[3] = '\0';
  (this->ElemBox).Pad[4] = '\0';
  (this->ElemBox).Pad[5] = '\0';
  (this->ElemBox).Pad[6] = '\0';
  *&(this->Transform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Transform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Transform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Transform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Transform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Transform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  (this->ChaosConvex).Reference = (FConvex *)0x0;
  return this;
}

// ~FKConvexElem @ 148252af0

void __thiscall FKConvexElem::~FKConvexElem(FKConvexElem *this)

{
  longlong *plVar1;
  FConvex *pFVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  
  *(undefined ***)this = &___7FKConvexElem__6B_;
  pFVar2 = (this->ChaosConvex).Reference;
  if (pFVar2 != (FConvex *)0x0) {
    LOCK();
    plVar1 = &pFVar2->_padding_;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (*(int *)((longlong)&pFVar2->_padding_ + 4) == 0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  pFVar3 = (this->IndexData).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->VertexData).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  FKShapeElem::~FKShapeElem((FKShapeElem *)this);
  return;
}

// operator= @ 148254450

FKConvexElem * __thiscall FKConvexElem::operator=(FKConvexElem *this,FKConvexElem *param_1)

{
  longlong *plVar1;
  FConvex *pFVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  
  if ((this->ChaosConvex).Reference != (FConvex *)0x0) {
    `FKConvexElem::operator='::__l2::<lambda_1>::operator()(local_res8);
  }
  pFVar2 = (this->ChaosConvex).Reference;
  if (pFVar2 != (FConvex *)0x0) {
    (this->ChaosConvex).Reference = (FConvex *)0x0;
    LOCK();
    plVar1 = &pFVar2->_padding_;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (*(int *)((longlong)&pFVar2->_padding_ + 4) == 0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  CloneElem(this,param_1);
  return this;
}

// CloneElem @ 14826df30

void __thiscall FKConvexElem::CloneElem(FKConvexElem *this,FKConvexElem *param_1)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  double dVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  
  *(undefined4 *)&this->field_0x8 = *(undefined4 *)&param_1->field_0x8;
  *(undefined4 *)&this->field_0x14 = *(undefined4 *)&param_1->field_0x14;
  pTVar1 = &this->VertexData;
  *(undefined8 *)&this->field_0xc = *(undefined8 *)&param_1->field_0xc;
  this->field_0x18 = this->field_0x18 ^ (this->field_0x18 ^ param_1->field_0x18) & 1;
  this->field_0x19 = param_1->field_0x19;
  if (pTVar1 != &param_1->VertexData) {
    iVar3 = (this->VertexData).ArrayMax;
    piVar2 = &(this->VertexData).ArrayMax;
    _Src = (param_1->VertexData).AllocatorInstance.Data;
    iVar4 = (param_1->VertexData).ArrayNum;
    (this->VertexData).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar4,iVar3,&pTVar1->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar4 * 0x18);
      }
    }
  }
  TArray<int,TSizedDefaultAllocator<32>_>::operator=(&this->IndexData,&param_1->IndexData);
  dVar5 = (param_1->ElemBox).Min.field0_0x0._s_0.Y;
  (this->ElemBox).Min.field0_0x0._s_0.X = (param_1->ElemBox).Min.field0_0x0._s_0.X;
  (this->ElemBox).Min.field0_0x0._s_0.Y = dVar5;
  dVar5 = (param_1->ElemBox).Max.field0_0x0._s_0.X;
  (this->ElemBox).Min.field0_0x0._s_0.Z = (param_1->ElemBox).Min.field0_0x0._s_0.Z;
  (this->ElemBox).Max.field0_0x0._s_0.X = dVar5;
  dVar5 = (param_1->ElemBox).Max.field0_0x0._s_0.Z;
  (this->ElemBox).Max.field0_0x0._s_0.Y = (param_1->ElemBox).Max.field0_0x0._s_0.Y;
  (this->ElemBox).Max.field0_0x0._s_0.Z = dVar5;
  uVar6 = (param_1->ElemBox).Pad[0];
  uVar7 = (param_1->ElemBox).Pad[1];
  uVar8 = (param_1->ElemBox).Pad[2];
  uVar9 = (param_1->ElemBox).Pad[3];
  uVar10 = (param_1->ElemBox).Pad[4];
  uVar11 = (param_1->ElemBox).Pad[5];
  uVar12 = (param_1->ElemBox).Pad[6];
  (this->ElemBox).IsValid = (param_1->ElemBox).IsValid;
  (this->ElemBox).Pad[0] = uVar6;
  (this->ElemBox).Pad[1] = uVar7;
  (this->ElemBox).Pad[2] = uVar8;
  (this->ElemBox).Pad[3] = uVar9;
  (this->ElemBox).Pad[4] = uVar10;
  (this->ElemBox).Pad[5] = uVar11;
  (this->ElemBox).Pad[6] = uVar12;
  dVar5 = (param_1->Transform).Rotation.XY.m128d_f64[1];
  (this->Transform).Rotation.XY.m128d_f64[0] = (param_1->Transform).Rotation.XY.m128d_f64[0];
  (this->Transform).Rotation.XY.m128d_f64[1] = dVar5;
  dVar5 = (param_1->Transform).Rotation.ZW.m128d_f64[1];
  (this->Transform).Rotation.ZW.m128d_f64[0] = (param_1->Transform).Rotation.ZW.m128d_f64[0];
  (this->Transform).Rotation.ZW.m128d_f64[1] = dVar5;
  dVar5 = (param_1->Transform).Translation.XY.m128d_f64[1];
  (this->Transform).Translation.XY.m128d_f64[0] = (param_1->Transform).Translation.XY.m128d_f64[0];
  (this->Transform).Translation.XY.m128d_f64[1] = dVar5;
  dVar5 = (param_1->Transform).Translation.ZW.m128d_f64[1];
  (this->Transform).Translation.ZW.m128d_f64[0] = (param_1->Transform).Translation.ZW.m128d_f64[0];
  (this->Transform).Translation.ZW.m128d_f64[1] = dVar5;
  dVar5 = (param_1->Transform).Scale3D.XY.m128d_f64[1];
  (this->Transform).Scale3D.XY.m128d_f64[0] = (param_1->Transform).Scale3D.XY.m128d_f64[0];
  (this->Transform).Scale3D.XY.m128d_f64[1] = dVar5;
  dVar5 = (param_1->Transform).Scale3D.ZW.m128d_f64[1];
  (this->Transform).Scale3D.ZW.m128d_f64[0] = (param_1->Transform).Scale3D.ZW.m128d_f64[0];
  (this->Transform).Scale3D.ZW.m128d_f64[1] = dVar5;
  return;
}

// ComputeChaosConvexIndices @ 14826f660

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FKConvexElem::ComputeChaosConvexIndices(FKConvexElem *this,bool param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  TArray<int,TSizedDefaultAllocator<32>_> local_78;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> local_68 [4];
  
  if ((param_1) || ((this->IndexData).ArrayNum == 0)) {
    iVar5 = (this->VertexData).ArrayNum;
    uVar10 = 0;
    local_78.ArrayNum = 0;
    local_78.ArrayMax = 0;
    local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (0 < iVar5) {
      local_68[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68[0].ArrayNum = 0;
      local_68[0].ArrayMax = 0;
      TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNum(local_68,iVar5,Default);
      uVar11 = uVar10;
      uVar13 = uVar10;
      uVar14 = uVar10;
      if (0 < iVar5) {
        do {
          uVar12 = (uint)uVar13;
          uVar9 = 0;
          if ((int)uVar12 < (this->VertexData).ArrayNum) {
            uVar9 = ~uVar12 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar6 = (this->VertexData).AllocatorInstance.Data;
          dVar2 = *(double *)(pFVar6 + uVar10);
          dVar3 = *(double *)(pFVar6 + uVar10 + 8);
          dVar4 = *(double *)(pFVar6 + uVar10 + 0x10);
          uVar9 = 0;
          if ((int)uVar12 < local_68[0].ArrayNum) {
            uVar9 = ~uVar12 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar14 = uVar14 + 1;
          uVar10 = uVar10 + 0x18;
          *(float *)(local_68[0].AllocatorInstance.Data + uVar11) = (float)dVar2;
          *(float *)(local_68[0].AllocatorInstance.Data + uVar11 + 4) = (float)dVar3;
          *(float *)(local_68[0].AllocatorInstance.Data + uVar11 + 8) = (float)dVar4;
          uVar11 = uVar11 + 0xc;
          uVar13 = (ulonglong)(uVar12 + 1);
        } while ((longlong)uVar14 < (longlong)iVar5);
      }
      Chaos::FConvexBuilder::BuildIndices(local_68,&local_78,Default);
      if (local_68[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68[0].AllocatorInstance.Data);
      }
    }
    pTVar1 = &this->IndexData;
    if (pTVar1 != &local_78) {
      pFVar6 = (pTVar1->AllocatorInstance).Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      (pTVar1->AllocatorInstance).Data = local_78.AllocatorInstance.Data;
      (this->IndexData).ArrayNum = local_78.ArrayNum;
      local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->IndexData).ArrayMax = local_78.ArrayMax;
      local_78.ArrayNum = 0;
      local_78.ArrayMax = 0;
    }
    if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
  }
  return;
}

// GetChaosConvexIndices @ 148285230

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
FKConvexElem::GetChaosConvexIndices
          (FKConvexElem *this,TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> local_68 [4];
  
  uVar10 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar4 = (this->VertexData).ArrayNum;
  if (0 < iVar4) {
    local_68[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68[0].ArrayNum = 0;
    local_68[0].ArrayMax = 0;
    TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNum(local_68,iVar4,Default);
    uVar11 = uVar10;
    uVar13 = uVar10;
    uVar14 = uVar10;
    if (0 < iVar4) {
      do {
        uVar12 = (uint)uVar13;
        uVar8 = 0;
        if ((int)uVar12 < (this->VertexData).ArrayNum) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar9;
        }
        pFVar5 = (this->VertexData).AllocatorInstance.Data;
        dVar1 = *(double *)(pFVar5 + uVar10);
        dVar2 = *(double *)(pFVar5 + uVar10 + 8);
        dVar3 = *(double *)(pFVar5 + uVar10 + 0x10);
        uVar8 = 0;
        if ((int)uVar12 < local_68[0].ArrayNum) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar9;
        }
        uVar14 = uVar14 + 1;
        uVar10 = uVar10 + 0x18;
        *(float *)(local_68[0].AllocatorInstance.Data + uVar11) = (float)dVar1;
        *(float *)(local_68[0].AllocatorInstance.Data + uVar11 + 4) = (float)dVar2;
        *(float *)(local_68[0].AllocatorInstance.Data + uVar11 + 8) = (float)dVar3;
        uVar11 = uVar11 + 0xc;
        uVar13 = (ulonglong)(uVar12 + 1);
      } while ((longlong)uVar14 < (longlong)iVar4);
    }
    Chaos::FConvexBuilder::BuildIndices(local_68,__return_storage_ptr__,Default);
    if (local_68[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68[0].AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// GetClosestPointAndNormal @ 148285ad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float __thiscall
FKConvexElem::GetClosestPointAndNormal
          (FKConvexElem *this,TVector<double> *param_1,TTransform<double> *param_2,
          TVector<double> *param_3,TVector<double> *param_4)

{
  FConvex *this_00;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  float fVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  undefined1 auVar22 [16];
  double dVar23;
  double dVar25;
  undefined1 auVar24 [16];
  undefined4 uVar26;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  double dVar34;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  uint uVar35;
  undefined4 uVar36;
  uint uVar37;
  undefined4 uVar38;
  uint uVar39;
  uint uVar40;
  undefined1 auStack_1f8 [32];
  undefined1 local_1d8 [16];
  double local_1c8;
  TVector<double,3> local_1c0;
  undefined1 local_1a8 [16];
  double local_198;
  TTransform<double> local_188;
  TTransform<double> local_128;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  local_1c8 = (this->Transform).Scale3D.ZW.m128d_f64[0];
  dVar4 = (param_2->Scale3D).XY.m128d_f64[0] * (this->Transform).Scale3D.XY.m128d_f64[0];
  dVar3 = (param_2->Scale3D).XY.m128d_f64[1] * (this->Transform).Scale3D.XY.m128d_f64[1];
  dVar21 = (param_2->Scale3D).ZW.m128d_f64[0] * local_1c8;
  uVar6 = SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar8 = (uint)((ulonglong)dVar4 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((((double)CONCAT44(uVar8,uVar6) < __real_3f1a36e2e0000000 ||
        (double)CONCAT44(uVar8,uVar6) == __real_3f1a36e2e0000000) &&
      (uVar6 = SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar8 = (uint)((ulonglong)dVar3 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      (double)CONCAT44(uVar8,uVar6) < __real_3f1a36e2e0000000 ||
      (double)CONCAT44(uVar8,uVar6) == __real_3f1a36e2e0000000)) &&
     (uVar6 = SUB84(dVar21,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar8 = (uint)((ulonglong)dVar21 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     (double)CONCAT44(uVar8,uVar6) < __real_3f1a36e2e0000000 ||
     (double)CONCAT44(uVar8,uVar6) == __real_3f1a36e2e0000000)) {
    dVar4 = __real_3fb99999a0000000;
    dVar3 = __real_3fb99999a0000000;
    dVar21 = __real_3fb99999a0000000;
  }
  local_128.Rotation.XY.m128d_f64[0] = (this->Transform).Rotation.XY.m128d_f64[0];
  local_128.Rotation.XY.m128d_f64[1] = (this->Transform).Rotation.XY.m128d_f64[1];
  uVar35 = SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar37 = (uint)((ulonglong)dVar4 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar6 = SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar8 = (uint)((ulonglong)dVar3 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar39 = SUB84(dVar21,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar40 = (uint)((ulonglong)dVar21 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  local_128.Translation.XY.m128d_f64[0] = (this->Transform).Translation.XY.m128d_f64[0];
  local_128.Translation.XY.m128d_f64[1] = (this->Transform).Translation.XY.m128d_f64[1];
  local_128.Rotation.ZW.m128d_f64[0] = (this->Transform).Rotation.ZW.m128d_f64[0];
  local_128.Rotation.ZW.m128d_f64[1] = (this->Transform).Rotation.ZW.m128d_f64[1];
  local_128.Scale3D.XY.m128d_f64[0] = (this->Transform).Scale3D.XY.m128d_f64[0];
  local_128.Scale3D.XY.m128d_f64[1] = (this->Transform).Scale3D.XY.m128d_f64[1];
  local_128.Translation.ZW.m128d_f64[0] = (this->Transform).Translation.ZW.m128d_f64[0];
  local_128.Translation.ZW.m128d_f64[1] = (this->Transform).Translation.ZW.m128d_f64[1];
  local_188.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_188.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_188.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_128.Scale3D.ZW.m128d_f64[0] = (this->Transform).Scale3D.ZW.m128d_f64[0];
  local_128.Scale3D.ZW.m128d_f64[1] = (this->Transform).Scale3D.ZW.m128d_f64[1];
  local_188.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_188.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_188.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_188.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_188.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_188.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_188.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_188.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_188.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_188.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_188.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_188.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_188.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply(&local_188,&local_128,param_2);
  dVar23 = local_188.Rotation.XY.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar25 = local_188.Rotation.XY.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar4 = local_188.Rotation.ZW.m128d_f64[0] *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar21 = local_188.Rotation.ZW.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar3 = (param_1->field0_0x0)._s_0.Z - local_188.Translation.ZW.m128d_f64[0];
  dVar31 = (param_1->field0_0x0)._s_0.X - local_188.Translation.XY.m128d_f64[0];
  dVar34 = (param_1->field0_0x0)._s_0.Y - local_188.Translation.XY.m128d_f64[1];
  auVar28._8_4_ = SUB84(dVar34,0);
  auVar28._0_8_ = dVar31;
  uVar36 = (undefined4)((ulonglong)dVar34 >> 0x20);
  auVar28._12_4_ = uVar36;
  auVar22._8_4_ = SUB84(dVar25,0);
  auVar22._0_8_ = dVar23;
  auVar22._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
  auVar10._8_4_ = SUB84(dVar21,0);
  auVar10._0_8_ = dVar4;
  auVar10._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
  auVar22 = blendpd(auVar22,auVar10,2);
  auVar29._0_8_ = auVar28._8_8_ * dVar23 - dVar25 * dVar31;
  auVar29._8_8_ = dVar3 * dVar25 - dVar4 * dVar34;
  auVar9._8_4_ = SUB84(dVar34,0);
  auVar9._0_8_ = dVar31;
  auVar9._12_4_ = uVar36;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = dVar3;
  auVar10 = blendpd(auVar9,auVar24,2);
  auVar11._0_8_ = auVar10._0_8_ * dVar4 - auVar22._0_8_ * dVar3;
  auVar11._8_8_ = auVar10._8_8_ * dVar21 - auVar22._8_8_ * 0.0;
  auVar10 = blendpd(auVar29,auVar11,2);
  dVar27 = auVar29._8_8_ + auVar29._8_8_;
  dVar5 = auVar11._0_8_ + auVar11._0_8_;
  uVar36 = (undefined4)((ulonglong)dVar5 >> 0x20);
  auVar30._0_8_ = auVar10._0_8_ + auVar10._0_8_;
  auVar30._8_8_ = auVar10._8_8_ + auVar10._8_8_;
  auVar17._8_4_ = SUB84(dVar5,0);
  auVar17._0_8_ = dVar27;
  auVar17._12_4_ = uVar36;
  auVar12._8_4_ = SUB84(dVar5,0);
  auVar12._0_8_ = dVar27;
  auVar12._12_4_ = uVar36;
  auVar10 = blendpd(auVar12,auVar30,2);
  auVar18._0_8_ = auVar17._8_8_ * dVar23 - dVar27 * dVar25;
  auVar18._8_8_ = auVar30._0_8_ * dVar25 - dVar5 * dVar4;
  auVar13._0_8_ = auVar10._0_8_ * dVar4 - auVar30._0_8_ * auVar22._0_8_;
  auVar13._8_8_ = auVar10._8_8_ * dVar21 - auVar30._8_8_ * auVar22._8_8_;
  this_00 = (this->ChaosConvex).Reference;
  auVar10 = blendpd(auVar18,auVar13,2);
  dVar4 = dVar5 * dVar21 + dVar34 + auVar13._0_8_;
  local_198 = auVar30._0_8_ * dVar21 + dVar3 + auVar10._0_8_;
  if (this_00 == (FConvex *)0x0) {
    fVar7 = 0.0;
  }
  else {
    local_1c0._4_4_ = uVar37;
    local_1c0._0_4_ = uVar35;
    local_1c0._12_4_ = uVar8;
    local_1c0._8_4_ = uVar6;
    local_1c0._20_4_ = uVar40;
    local_1c0._16_4_ = uVar39;
    local_1a8._8_4_ = SUB84(dVar4,0);
    local_1a8._0_8_ = dVar27 * dVar21 + dVar31 + auVar18._8_8_;
    local_1a8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    dVar5 = Chaos::FConvex::PhiWithNormalScaledInternal
                      (this_00,(TVector<double,3> *)local_1a8,&local_1c0,
                       (TVector<double,3> *)local_1d8);
    uVar36 = SUB84(dVar5,0);
    uVar38 = (undefined4)((ulonglong)dVar5 >> 0x20);
    dVar21 = local_188.Rotation.XY.m128d_f64[1];
    dVar27 = local_188.Rotation.ZW.m128d_f64[0];
    dVar23 = local_188.Rotation.ZW.m128d_f64[1];
    auVar24 = blendpd((undefined1  [16])local_188.Rotation.XY.m128d_f64,
                      (undefined1  [16])local_188.Rotation.ZW.m128d_f64,2);
    dVar25 = local_1d8._8_8_;
    auVar32._0_8_ = dVar25 * local_188.Rotation.XY.m128d_f64[0] - local_1d8._0_8_ * dVar21;
    auVar32._8_8_ = local_1c8 * dVar21 - dVar25 * dVar27;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_1c8;
    auVar10 = blendpd(local_1d8,auVar2,2);
    auVar14._0_8_ = auVar10._0_8_ * dVar27 - local_1c8 * auVar24._0_8_;
    auVar14._8_8_ = auVar10._8_8_ * dVar23 - auVar24._8_8_ * 0.0;
    auVar10 = blendpd(auVar32,auVar14,2);
    dVar3 = auVar32._8_8_ + auVar32._8_8_;
    dVar4 = auVar14._0_8_ + auVar14._0_8_;
    uVar26 = (undefined4)((ulonglong)dVar4 >> 0x20);
    auVar33._0_8_ = auVar10._0_8_ + auVar10._0_8_;
    auVar33._8_8_ = auVar10._8_8_ + auVar10._8_8_;
    auVar19._8_4_ = SUB84(dVar4,0);
    auVar19._0_8_ = dVar3;
    auVar19._12_4_ = uVar26;
    auVar15._8_4_ = SUB84(dVar4,0);
    auVar15._0_8_ = dVar3;
    auVar15._12_4_ = uVar26;
    auVar10 = blendpd(auVar15,auVar33,2);
    auVar20._0_8_ = auVar19._8_8_ * local_188.Rotation.XY.m128d_f64[0] - dVar3 * dVar21;
    auVar20._8_8_ = auVar33._0_8_ * dVar21 - dVar4 * dVar27;
    auVar16._0_8_ = auVar10._0_8_ * dVar27 - auVar33._0_8_ * auVar24._0_8_;
    auVar16._8_8_ = auVar10._8_8_ * dVar23 - auVar33._8_8_ * auVar24._8_8_;
    auVar10 = blendpd(auVar20,auVar16,2);
    dVar4 = dVar4 * dVar23 + dVar25 + auVar16._0_8_;
    auVar1._8_4_ = SUB84(dVar4,0);
    auVar1._0_8_ = dVar3 * dVar23 + local_1d8._0_8_ + auVar20._8_8_;
    auVar1._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    *(undefined1 (*) [16])&param_4->field0_0x0 = auVar1;
    (param_4->field0_0x0)._s_0.Z = auVar33._0_8_ * dVar23 + local_1c8 + auVar10._0_8_;
    dVar3 = (param_4->field0_0x0)._s_0.Y;
    dVar4 = (param_4->field0_0x0)._s_0.Z;
    dVar21 = (param_1->field0_0x0)._s_0.Y;
    dVar27 = (param_1->field0_0x0)._s_0.Z;
    (param_3->field0_0x0)._s_0.X =
         (param_1->field0_0x0)._s_0.X - dVar5 * (param_4->field0_0x0)._s_0.X;
    (param_3->field0_0x0)._s_0.Y = dVar21 - dVar5 * dVar3;
    (param_3->field0_0x0)._s_0.Z = dVar27 - dVar5 * dVar4;
    if (dVar5 <= __real_3e45798ee0000000) {
      uVar36 = 0;
      uVar38 = 0;
    }
    fVar7 = (float)(double)CONCAT44(uVar38,uVar36);
  }
  return fVar7;
}

// GetScaledVolume @ 14828d550

double __thiscall FKConvexElem::GetScaledVolume(FKConvexElem *this,TVector<double> *param_1)

{
  FConvex *pFVar1;
  float fVar2;
  double dVar3;
  
  pFVar1 = (this->ChaosConvex).Reference;
  fVar2 = 0.0;
  if (pFVar1 != (FConvex *)0x0) {
    dVar3 = (param_1->field0_0x0)._s_0.Y * (param_1->field0_0x0)._s_0.X *
            (param_1->field0_0x0)._s_0.Z;
    fVar2 = (float)((double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                   * (double)pFVar1->Volume);
  }
  return (double)fVar2;
}

// GetShortestDistanceToPoint @ 14828d940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float __thiscall
FKConvexElem::GetShortestDistanceToPoint
          (FKConvexElem *this,TVector<double> *param_1,TTransform<double> *param_2)

{
  FConvex *this_00;
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  undefined4 uVar10;
  float fVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8 [16];
  double local_1a8;
  TVector<double,3> local_1a0;
  TVector<double,3> local_188;
  TTransform<double> local_168;
  TTransform<double> local_108;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  local_1a8 = (this->Transform).Scale3D.ZW.m128d_f64[0];
  dVar5 = (param_2->Scale3D).XY.m128d_f64[0] * (this->Transform).Scale3D.XY.m128d_f64[0];
  dVar4 = (param_2->Scale3D).XY.m128d_f64[1] * (this->Transform).Scale3D.XY.m128d_f64[1];
  dVar6 = (param_2->Scale3D).ZW.m128d_f64[0] * local_1a8;
  uVar9 = SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar12 = (uint)((ulonglong)dVar5 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((((double)CONCAT44(uVar12,uVar9) < __real_3f1a36e2e0000000 ||
        (double)CONCAT44(uVar12,uVar9) == __real_3f1a36e2e0000000) &&
      (uVar9 = SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar12 = (uint)((ulonglong)dVar4 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      (double)CONCAT44(uVar12,uVar9) < __real_3f1a36e2e0000000 ||
      (double)CONCAT44(uVar12,uVar9) == __real_3f1a36e2e0000000)) &&
     (uVar9 = SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar12 = (uint)((ulonglong)dVar6 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     (double)CONCAT44(uVar12,uVar9) < __real_3f1a36e2e0000000 ||
     (double)CONCAT44(uVar12,uVar9) == __real_3f1a36e2e0000000)) {
    dVar5 = __real_3fb99999a0000000;
    dVar4 = __real_3fb99999a0000000;
    dVar6 = __real_3fb99999a0000000;
  }
  local_108.Rotation.XY.m128d_f64[0] = (this->Transform).Rotation.XY.m128d_f64[0];
  local_108.Rotation.XY.m128d_f64[1] = (this->Transform).Rotation.XY.m128d_f64[1];
  uVar27 = SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar28 = (uint)((ulonglong)dVar5 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar9 = SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar12 = (uint)((ulonglong)dVar4 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar29 = SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar30 = (uint)((ulonglong)dVar6 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  local_108.Translation.XY.m128d_f64[0] = (this->Transform).Translation.XY.m128d_f64[0];
  local_108.Translation.XY.m128d_f64[1] = (this->Transform).Translation.XY.m128d_f64[1];
  local_108.Rotation.ZW.m128d_f64[0] = (this->Transform).Rotation.ZW.m128d_f64[0];
  local_108.Rotation.ZW.m128d_f64[1] = (this->Transform).Rotation.ZW.m128d_f64[1];
  local_108.Scale3D.XY.m128d_f64[0] = (this->Transform).Scale3D.XY.m128d_f64[0];
  local_108.Scale3D.XY.m128d_f64[1] = (this->Transform).Scale3D.XY.m128d_f64[1];
  local_108.Translation.ZW.m128d_f64[0] = (this->Transform).Translation.ZW.m128d_f64[0];
  local_108.Translation.ZW.m128d_f64[1] = (this->Transform).Translation.ZW.m128d_f64[1];
  local_168.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_168.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_168.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_108.Scale3D.ZW.m128d_f64[0] = (this->Transform).Scale3D.ZW.m128d_f64[0];
  local_108.Scale3D.ZW.m128d_f64[1] = (this->Transform).Scale3D.ZW.m128d_f64[1];
  local_168.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_168.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_168.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_168.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_168.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_168.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_168.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_168.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_168.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_168.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_168.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_168.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_168.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply(&local_168,&local_108,param_2);
  dVar22 = local_168.Rotation.XY.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar23 = local_168.Rotation.XY.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar5 = local_168.Rotation.ZW.m128d_f64[0] *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar6 = local_168.Rotation.ZW.m128d_f64[1] *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar4 = (param_1->field0_0x0)._s_0.Z - local_168.Translation.ZW.m128d_f64[0];
  dVar1 = (param_1->field0_0x0)._s_0.X - local_168.Translation.XY.m128d_f64[0];
  dVar2 = (param_1->field0_0x0)._s_0.Y - local_168.Translation.XY.m128d_f64[1];
  uVar10 = (undefined4)((ulonglong)dVar2 >> 0x20);
  auVar24._8_4_ = SUB84(dVar2,0);
  auVar24._0_8_ = dVar1;
  auVar24._12_4_ = uVar10;
  auVar21._8_4_ = SUB84(dVar23,0);
  auVar21._0_8_ = dVar22;
  auVar21._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
  auVar15._8_4_ = SUB84(dVar6,0);
  auVar15._0_8_ = dVar5;
  auVar15._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  auVar21 = blendpd(auVar21,auVar15,2);
  auVar25._0_8_ = auVar24._8_8_ * dVar22 - dVar23 * dVar1;
  auVar25._8_8_ = dVar4 * dVar23 - dVar5 * dVar2;
  auVar14._8_4_ = SUB84(dVar2,0);
  auVar14._0_8_ = dVar1;
  auVar14._12_4_ = uVar10;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = dVar4;
  auVar15 = blendpd(auVar14,auVar3,2);
  auVar16._0_8_ = auVar15._0_8_ * dVar5 - auVar21._0_8_ * dVar4;
  auVar16._8_8_ = auVar15._8_8_ * dVar6 - auVar21._8_8_ * 0.0;
  auVar15 = blendpd(auVar25,auVar16,2);
  dVar7 = auVar25._8_8_ + auVar25._8_8_;
  dVar8 = auVar16._0_8_ + auVar16._0_8_;
  uVar10 = (undefined4)((ulonglong)dVar8 >> 0x20);
  auVar26._0_8_ = auVar15._0_8_ + auVar15._0_8_;
  auVar26._8_8_ = auVar15._8_8_ + auVar15._8_8_;
  auVar19._8_4_ = SUB84(dVar8,0);
  auVar19._0_8_ = dVar7;
  auVar19._12_4_ = uVar10;
  auVar17._8_4_ = SUB84(dVar8,0);
  auVar17._0_8_ = dVar7;
  auVar17._12_4_ = uVar10;
  auVar15 = blendpd(auVar17,auVar26,2);
  auVar20._0_8_ = auVar19._8_8_ * dVar22 - dVar7 * dVar23;
  auVar20._8_8_ = auVar26._0_8_ * dVar23 - dVar8 * dVar5;
  auVar18._0_8_ = auVar15._0_8_ * dVar5 - auVar26._0_8_ * auVar21._0_8_;
  auVar18._8_8_ = auVar15._8_8_ * dVar6 - auVar26._8_8_ * auVar21._8_8_;
  this_00 = (this->ChaosConvex).Reference;
  auVar15 = blendpd(auVar20,auVar18,2);
  dVar5 = dVar8 * dVar6 + dVar2 + auVar18._0_8_;
  local_1a8 = auVar26._0_8_ * dVar6 + dVar4 + auVar15._0_8_;
  if (this_00 == (FConvex *)0x0) {
    fVar11 = 0.0;
  }
  else {
    local_1a0._4_4_ = uVar28;
    local_1a0._0_4_ = uVar27;
    local_1a0._12_4_ = uVar12;
    local_1a0._8_4_ = uVar9;
    local_1a0._20_4_ = uVar30;
    local_1a0._16_4_ = uVar29;
    local_1b8._8_4_ = SUB84(dVar5,0);
    local_1b8._0_8_ = dVar7 * dVar6 + dVar1 + auVar20._8_8_;
    local_1b8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    dVar4 = Chaos::FConvex::PhiWithNormalScaledInternal
                      (this_00,(TVector<double,3> *)local_1b8,&local_1a0,&local_188);
    uVar10 = SUB84(dVar4,0);
    uVar13 = (undefined4)((ulonglong)dVar4 >> 0x20);
    if (dVar4 <= __real_3e45798ee0000000) {
      uVar10 = 0;
      uVar13 = 0;
    }
    fVar11 = (float)(double)CONCAT44(uVar13,uVar10);
  }
  return fVar11;
}

// GetVolume @ 14828ed50

double __thiscall FKConvexElem::GetVolume(FKConvexElem *this,TVector<double> *param_1)

{
  FConvex *pFVar1;
  float fVar2;
  double dVar3;
  
  pFVar1 = (this->ChaosConvex).Reference;
  fVar2 = 0.0;
  if (pFVar1 != (FConvex *)0x0) {
    dVar3 = (param_1->field0_0x0)._s_0.Y * (param_1->field0_0x0)._s_0.X *
            (param_1->field0_0x0)._s_0.Z;
    fVar2 = (float)((double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                   * (double)pFVar1->Volume);
  }
  return (double)fVar2;
}

// ResetChaosConvexMesh @ 1482a6c60

void __thiscall FKConvexElem::ResetChaosConvexMesh(FKConvexElem *this)

{
  longlong *plVar1;
  FConvex *pFVar2;
  longlong lVar3;
  
  pFVar2 = (this->ChaosConvex).Reference;
  if (pFVar2 != (FConvex *)0x0) {
    (this->ChaosConvex).Reference = (FConvex *)0x0;
    LOCK();
    plVar1 = &pFVar2->_padding_;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (*(int *)((longlong)&pFVar2->_padding_ + 4) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001482a6c99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)pFVar2->_padding_)(pFVar2,1);
      return;
    }
  }
  return;
}

// ScaleElem @ 1482a81c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FKConvexElem::ScaleElem(FKConvexElem *this,TVector<double> *param_1,float param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  bool bVar22;
  undefined4 in_EAX;
  int iVar23;
  uint uVar24;
  longlong lVar25;
  longlong lVar26;
  uint uVar27;
  double dVar28;
  uint uVar33;
  double dVar29;
  double dVar30;
  uint uVar34;
  uint uVar36;
  double dVar35;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  uint uVar37;
  uint uVar38;
  
  dVar13 = (this->Transform).Scale3D.XY.m128d_f64[0] + (param_1->field0_0x0)._s_0.X;
  uVar14 = *(uint *)(this->Transform).Translation.XY.m128d_f64;
  uVar15 = *(uint *)((longlong)(this->Transform).Translation.XY.m128d_f64 + 4);
  uVar16 = *(uint *)((this->Transform).Translation.XY.m128d_f64 + 1);
  uVar17 = *(uint *)((longlong)(this->Transform).Translation.XY.m128d_f64 + 0xc);
  dVar12 = (this->Transform).Scale3D.ZW.m128d_f64[0] + (param_1->field0_0x0)._s_0.Z;
  uVar18 = *(uint *)(this->Transform).Translation.ZW.m128d_f64;
  uVar19 = *(uint *)((longlong)(this->Transform).Translation.ZW.m128d_f64 + 4);
  uVar20 = *(uint *)((this->Transform).Translation.ZW.m128d_f64 + 1);
  uVar21 = *(uint *)((longlong)(this->Transform).Translation.ZW.m128d_f64 + 0xc);
  dVar28 = (this->Transform).Scale3D.XY.m128d_f64[1] + (param_1->field0_0x0)._s_0.Y;
  auVar1 = *(undefined1 (*) [16])(this->Transform).Rotation.XY.m128d_f64;
  auVar2 = *(undefined1 (*) [16])(this->Transform).Rotation.ZW.m128d_f64;
  uVar37 = SUB84(dVar28,0);
  uVar38 = (uint)((ulonglong)dVar28 >> 0x20);
  uVar27 = (uint)__xmm_7ff00000000000007ff0000000000000;
  uVar33 = __xmm_7ff00000000000007ff0000000000000._4_4_;
  uVar34 = __xmm_7ff00000000000007ff0000000000000._8_4_;
  uVar36 = __xmm_7ff00000000000007ff0000000000000._12_4_;
  dVar28 = (double)__xmm_7ff00000000000007ff0000000000000;
  dVar29 = __xmm_7ff00000000000007ff0000000000000._8_8_;
  lVar25 = -(ulonglong)((double)CONCAT44(uVar36 & auVar2._12_4_,uVar34 & auVar2._8_4_) == dVar29);
  auVar4._8_4_ = (int)lVar25;
  auVar4._0_8_ = -(ulonglong)
                  ((double)CONCAT44(uVar33 & auVar2._4_4_,uVar27 & auVar2._0_4_) == dVar28);
  auVar4._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
  uVar24 = movmskpd((int)this,auVar4);
  lVar25 = -(ulonglong)((double)CONCAT44(uVar36 & auVar1._12_4_,uVar34 & auVar1._8_4_) == dVar29);
  auVar8._8_4_ = (int)lVar25;
  auVar8._0_8_ = -(ulonglong)
                  ((double)CONCAT44(uVar33 & auVar1._4_4_,uVar27 & auVar1._0_4_) == dVar28);
  auVar8._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
  iVar23 = movmskpd(in_EAX,auVar8);
  if ((uVar24 & 0x3fffffff) == 0 && iVar23 == 0) {
    lVar25 = -(ulonglong)((double)CONCAT44(uVar36 & uVar21,uVar34 & uVar20) == dVar29);
    auVar5._8_4_ = (int)lVar25;
    auVar5._0_8_ = -(ulonglong)((double)CONCAT44(uVar33 & uVar19,uVar27 & uVar18) == dVar28);
    auVar5._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
    uVar24 = movmskpd(0,auVar5);
    lVar25 = -(ulonglong)((double)CONCAT44(uVar36 & uVar17,uVar34 & uVar16) == dVar29);
    auVar9._8_4_ = (int)lVar25;
    auVar9._0_8_ = -(ulonglong)((double)CONCAT44(uVar33 & uVar15,uVar27 & uVar14) == dVar28);
    auVar9._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
    iVar23 = movmskpd(iVar23,auVar9);
    if ((uVar24 & 0x3fffffff) == 0 && iVar23 == 0) {
      auVar6._8_4_ = (int)-(ulonglong)(dVar29 == 0.0);
      auVar6._0_8_ = -(ulonglong)
                      ((double)CONCAT44(uVar33 & (uint)((ulonglong)dVar12 >> 0x20),
                                        uVar27 & SUB84(dVar12,0)) == dVar28);
      auVar6._12_4_ = (int)(-(ulonglong)(dVar29 == 0.0) >> 0x20);
      uVar24 = movmskpd(0,auVar6);
      lVar25 = -(ulonglong)((double)CONCAT44(uVar36 & uVar38,uVar34 & uVar37) == dVar29);
      auVar10._8_4_ = (int)lVar25;
      auVar10._0_8_ =
           -(ulonglong)
            ((double)CONCAT44(uVar33 & (uint)((ulonglong)dVar13 >> 0x20),uVar27 & SUB84(dVar13,0))
            == dVar28);
      auVar10._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
      iVar23 = movmskpd(iVar23,auVar10);
      if ((uVar24 & 0x3fffffff) == 0 && iVar23 == 0) {
        dVar28 = auVar2._0_8_ * auVar2._0_8_ + auVar1._0_8_ * auVar1._0_8_;
        dVar29 = auVar2._8_8_ * auVar2._8_8_ + auVar1._8_8_ * auVar1._8_8_;
        dVar30 = dVar29 + dVar28;
        dVar28 = dVar28 + dVar29;
        dVar29 = (double)GlobalVectorConstants::FloatOne.m128_f32[2] - dVar30;
        dVar35 = (double)GlobalVectorConstants::FloatOne.m128_f32[3] - dVar28;
        auVar31._0_8_ =
             (double)CONCAT44((uint)((ulonglong)dVar29 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar29,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
        auVar31._8_4_ = SUB84(dVar35,0) & _UNK_15061cc88;
        auVar31._12_4_ = (uint)((ulonglong)dVar35 >> 0x20) & _UNK_15061cc8c;
        lVar25 = -(ulonglong)
                  ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[3] < auVar31._8_8_);
        dVar30 = (double)GlobalVectorConstants::FloatOne.m128_f32[0] - dVar30;
        dVar28 = (double)GlobalVectorConstants::FloatOne.m128_f32[1] - dVar28;
        auVar32._0_8_ =
             (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar30,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
        auVar32._8_4_ = SUB84(dVar28,0) & _UNK_15061cc88;
        auVar32._12_4_ = (uint)((ulonglong)dVar28 >> 0x20) & _UNK_15061cc8c;
        lVar26 = -(ulonglong)
                  ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[1] < auVar32._8_8_);
        auVar11._8_4_ = (int)lVar25;
        auVar11._0_8_ =
             -(ulonglong)
              ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[2] < auVar31._0_8_);
        auVar11._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
        uVar24 = movmskpd(0,auVar11);
        auVar7._8_4_ = (int)lVar26;
        auVar7._0_8_ = -(ulonglong)
                        ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[0] <
                        auVar32._0_8_);
        auVar7._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
        iVar23 = movmskpd(iVar23,auVar7);
        if ((uVar24 & 0x3fffffff) == 0 && iVar23 == 0) goto LAB_1482a8388;
      }
    }
  }
  bVar22 = UE::Assert::Private::ExecCheckImplInternal
                     (&bGEnsureHasExecuted<5523523784574763146>,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\PhysicsEngine\\ConvexElem.h"
                      ,0x8a,"InTransform.IsValid()");
  if (bVar22) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_1482a8388:
  *(undefined1 (*) [16])(this->Transform).Rotation.XY.m128d_f64 = auVar1;
  *(undefined1 (*) [16])(this->Transform).Rotation.ZW.m128d_f64 = auVar2;
  *(uint *)(this->Transform).Translation.XY.m128d_f64 = uVar14;
  *(uint *)((longlong)(this->Transform).Translation.XY.m128d_f64 + 4) = uVar15;
  *(uint *)((this->Transform).Translation.XY.m128d_f64 + 1) = uVar16;
  *(uint *)((longlong)(this->Transform).Translation.XY.m128d_f64 + 0xc) = uVar17;
  *(uint *)(this->Transform).Translation.ZW.m128d_f64 = uVar18;
  *(uint *)((longlong)(this->Transform).Translation.ZW.m128d_f64 + 4) = uVar19;
  *(uint *)((this->Transform).Translation.ZW.m128d_f64 + 1) = uVar20;
  *(uint *)((longlong)(this->Transform).Translation.ZW.m128d_f64 + 0xc) = uVar21;
  auVar1._8_4_ = uVar37;
  auVar1._0_8_ = dVar13;
  auVar1._12_4_ = uVar38;
  *(undefined1 (*) [16])(this->Transform).Scale3D.XY.m128d_f64 = auVar1;
  (this->Transform).Scale3D.ZW.m128d_f64[0] = dVar12;
  (this->Transform).Scale3D.ZW.m128d_f64[1] = 0.0;
  return;
}

// SetConvexMeshObject @ 1482aa480

void __thiscall
FKConvexElem::SetConvexMeshObject
          (FKConvexElem *this,TRefCountPtr<Chaos::FConvex> *param_1,EConvexDataUpdateMethod param_2)

{
  longlong *plVar1;
  TRefCountPtr<Chaos::FConvex> *pTVar2;
  FConvex *pFVar3;
  longlong lVar4;
  
  pTVar2 = &this->ChaosConvex;
  if (pTVar2 != param_1) {
    pFVar3 = pTVar2->Reference;
    pTVar2->Reference = param_1->Reference;
    param_1->Reference = (FConvex *)0x0;
    if (pFVar3 != (FConvex *)0x0) {
      LOCK();
      plVar1 = &pFVar3->_padding_;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar4 == 1) && (*(int *)((longlong)&pFVar3->_padding_ + 4) == 0)) {
        (**(code **)pFVar3->_padding_)(pFVar3,1);
      }
    }
  }
  ComputeChaosConvexIndices(this,param_2 == AlwaysUpdateConvexData);
  return;
}

// SetTransform @ 1482aed00

void __thiscall FKConvexElem::SetTransform(FKConvexElem *this,TTransform<double> *param_1)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  
  bVar3 = UE::Math::TTransform<double>::IsValid(param_1);
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5523523784574763146>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\PhysicsEngine\\ConvexElem.h"
                       ,0x8a,"InTransform.IsValid()");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  dVar2 = (param_1->Rotation).XY.m128d_f64[1];
  (this->Transform).Rotation.XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
  (this->Transform).Rotation.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Rotation).ZW.m128d_f64[1];
  (this->Transform).Rotation.ZW.m128d_f64[0] = (param_1->Rotation).ZW.m128d_f64[0];
  (this->Transform).Rotation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Translation).XY.m128d_f64[1];
  (this->Transform).Translation.XY.m128d_f64[0] = (param_1->Translation).XY.m128d_f64[0];
  (this->Transform).Translation.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Translation).ZW.m128d_f64[1];
  (this->Transform).Translation.ZW.m128d_f64[0] = (param_1->Translation).ZW.m128d_f64[0];
  (this->Transform).Translation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Scale3D).XY.m128d_f64[1];
  (this->Transform).Scale3D.XY.m128d_f64[0] = (param_1->Scale3D).XY.m128d_f64[0];
  (this->Transform).Scale3D.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Scale3D).ZW.m128d_f64[1];
  (this->Transform).Scale3D.ZW.m128d_f64[0] = (param_1->Scale3D).ZW.m128d_f64[0];
  (this->Transform).Scale3D.ZW.m128d_f64[1] = dVar2;
  return;
}

// AddCachedSolidConvexGeom @ 1482e4f90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FKConvexElem::AddCachedSolidConvexGeom
          (FKConvexElem *this,TArray<FDynamicMeshVertex,TSizedDefaultAllocator<32>_> *param_1,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_2,FColor param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  float fVar13;
  double dVar14;
  float fVar15;
  FKConvexElem *pFVar16;
  bool bVar17;
  undefined1 uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  longlong lVar29;
  longlong lVar30;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar39;
  double dVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar44;
  undefined1 auVar45 [16];
  double dVar46;
  undefined8 uVar50;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined4 uVar51;
  double dVar52;
  double dVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  uint uVar57;
  uint uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  undefined1 auStackY_328 [32];
  int local_2d8;
  uint local_2d4;
  uint local_2d0 [4];
  float local_2c0;
  float local_2bc;
  float local_2b8;
  float local_2b4;
  float local_2b0;
  float local_2ac;
  longlong local_2a8;
  longlong local_2a0;
  TVector<float>_u_0 local_298;
  TVector<float>_u_0 local_28c;
  undefined8 local_280;
  float local_278;
  undefined8 local_274;
  float local_26c;
  undefined8 local_268;
  float local_260;
  undefined4 local_258;
  undefined4 uStack_254;
  double dStack_250;
  double local_248;
  FKConvexElem *local_240;
  undefined8 local_238;
  double local_228;
  double dStack_220;
  double local_218;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  double local_1f8;
  float local_1e8;
  float fStack_1e4;
  undefined8 uStack_1e0;
  double local_1d8;
  undefined1 local_1c8 [16];
  double local_1b8;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  undefined1 local_168 [16];
  float local_148;
  float fStack_144;
  float fStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 uStack_100;
  <unnamed_type_Vector> <Stack_fc;
  <unnamed_type_Vector> <Stack_f8;
  FColor_u_0 FStack_f4;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_328;
  iVar27 = (this->IndexData).ArrayNum;
  local_240 = this;
  if (0 < iVar27) {
    iVar28 = iVar27 / 3 + (iVar27 >> 0x1f) +
             (int)(((longlong)iVar27 / 3 + ((longlong)iVar27 >> 0x3f) & 0xffffffffU) >> 0x1f);
    if (iVar27 == iVar28 * 3) {
      local_2a0 = (longlong)iVar28;
      if (iVar28 < 1) {
        return;
      }
      uVar51 = SUB84(__real_3e45798ee0000000,0);
      uVar59 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
      uVar65 = (undefined4)__real_3ff0000000000000;
      uVar66 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
      local_2d4 = 1;
      local_2a8 = 4;
      while( true ) {
        lVar30 = local_2a8;
        uVar57 = local_2d4;
        uVar19 = 0;
        uVar58 = uVar19;
        if ((int)(local_2d4 - 1) < (this->IndexData).ArrayNum) {
          uVar58 = ~(local_2d4 - 1) >> 0x1f;
        }
        if ((uVar58 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_2d0[0] = *(uint *)((this->IndexData).AllocatorInstance.Data + lVar30 + -4);
        uVar58 = uVar19;
        if ((int)(uVar57 + 1) < (this->IndexData).ArrayNum) {
          uVar58 = ~(uVar57 + 1) >> 0x1f;
        }
        if ((uVar58 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_2d0[1] = *(uint *)((this->IndexData).AllocatorInstance.Data + lVar30 + 4);
        uVar58 = uVar19;
        if ((int)uVar57 < (this->IndexData).ArrayNum) {
          uVar58 = ~uVar57 >> 0x1f;
        }
        if ((uVar58 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar29 = (longlong)(int)local_2d0[1];
        local_2d0[2] = *(uint *)((this->IndexData).AllocatorInstance.Data + lVar30);
        if ((int)local_2d0[1] < (this->VertexData).ArrayNum) {
          uVar19 = ~local_2d0[1] >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar30 = (longlong)(int)local_2d0[0];
        pFVar2 = (this->VertexData).AllocatorInstance.Data;
        uVar57 = 0;
        if ((int)local_2d0[0] < (this->VertexData).ArrayNum) {
          uVar57 = ~local_2d0[0] >> 0x1f;
        }
        if ((uVar57 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) break;
        pFVar3 = (this->VertexData).AllocatorInstance.Data;
        dVar8 = *(double *)(pFVar2 + lVar29 * 0x18) - *(double *)(pFVar3 + lVar30 * 0x18);
        dVar6 = *(double *)(pFVar2 + lVar29 * 0x18 + 8) - *(double *)(pFVar3 + lVar30 * 0x18 + 8);
        uVar7 = *(double *)(pFVar2 + lVar29 * 0x18 + 0x10) -
                *(double *)(pFVar3 + lVar30 * 0x18 + 0x10);
        uVar60 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
        uVar61 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
        auVar37._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
        auVar37._0_8_ =
             CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                      UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
        auVar37._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
        dVar39 = dVar6 * dVar6 + dVar8 * dVar8 + (double)uVar7 * (double)uVar7;
        if (dVar39 != (double)CONCAT44(uVar66,uVar65)) {
          if ((double)CONCAT44(uVar59,uVar51) <= dVar39) {
            local_1a8 = (double)CONCAT44(uVar66,uVar65) / SQRT(dVar39);
            dVar8 = dVar8 * local_1a8;
            dVar6 = dVar6 * local_1a8;
            uVar7 = (double)uVar7 * local_1a8;
          }
          else {
            local_248 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            dVar8 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                     UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
            dVar6 = auVar37._8_8_;
            uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          }
        }
        lVar30 = (longlong)(int)local_2d0[2];
        uVar57 = 0;
        if ((int)local_2d0[2] < (this->VertexData).ArrayNum) {
          uVar57 = ~local_2d0[2] >> 0x1f;
        }
        if (uVar57 == 0) {
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar17) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar60 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
          uVar61 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
        }
        pFVar2 = (this->VertexData).AllocatorInstance.Data;
        lVar29 = (longlong)(int)local_2d0[1];
        local_1f8 = *(double *)(pFVar2 + lVar30 * 0x18 + 0x10);
        auVar37 = *(undefined1 (*) [16])(pFVar2 + lVar30 * 0x18);
        uVar57 = 0;
        if ((int)local_2d0[1] < (this->VertexData).ArrayNum) {
          uVar57 = ~local_2d0[1] >> 0x1f;
        }
        if (uVar57 == 0) {
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar17) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar60 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
          uVar61 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
        }
        pFVar2 = (this->VertexData).AllocatorInstance.Data;
        lVar30 = (longlong)(int)local_2d0[0];
        local_1d8 = *(double *)(pFVar2 + lVar29 * 0x18 + 0x10);
        uVar50 = 0;
        pFVar2 = pFVar2 + lVar29 * 0x18;
        dVar39 = *(double *)pFVar2;
        dVar40 = *(double *)(pFVar2 + 8);
        uVar57 = 0;
        if ((int)local_2d0[0] < (this->VertexData).ArrayNum) {
          uVar57 = ~local_2d0[0] >> 0x1f;
        }
        if (uVar57 == 0) {
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar17) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar60 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
          uVar61 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
          uVar50 = extraout_XMM0_Qb;
        }
        pFVar16 = local_240;
        fVar15 = __real_bf800000;
        pFVar2 = (this->VertexData).AllocatorInstance.Data;
        auVar45 = *(undefined1 (*) [16])(pFVar2 + lVar30 * 0x18);
        local_1b8 = *(double *)(pFVar2 + lVar30 * 0x18 + 0x10);
        dVar44 = auVar37._0_8_ - auVar45._0_8_;
        auVar9._4_8_ = uVar50;
        auVar9._0_4_ = auVar45._4_4_;
        auVar32._0_8_ = auVar9._0_8_ << 0x20;
        auVar32._8_4_ = auVar45._8_4_;
        auVar32._12_4_ = auVar45._12_4_;
        dVar39 = dVar39 - auVar45._0_8_;
        dVar52 = auVar37._8_8_ - auVar32._8_8_;
        dVar40 = dVar40 - auVar32._8_8_;
        auVar45._8_4_ = auVar37._8_4_;
        auVar45._0_8_ = dVar44;
        auVar45._12_4_ = auVar37._12_4_;
        uVar50 = auVar45._8_8_;
        dVar46 = dVar44 * (local_1d8 - local_1b8) - (local_1f8 - local_1b8) * dVar39;
        local_228 = (local_1f8 - local_1b8) * dVar40 - dVar52 * (local_1d8 - local_1b8);
        local_218 = dVar52 * dVar39 - dVar44 * dVar40;
        dVar39 = dVar46 * dVar46 + local_228 * local_228 + local_218 * local_218;
        dStack_220 = dVar46;
        if (dVar39 != (double)CONCAT44(uVar66,uVar65)) {
          if ((double)CONCAT44(uVar59,uVar51) <= dVar39) {
            local_1a0 = (double)CONCAT44(uVar66,uVar65) / SQRT(dVar39);
            local_228 = local_228 * local_1a0;
            dVar46 = dVar46 * local_1a0;
            local_218 = local_218 * local_1a0;
            dStack_220 = dVar46;
          }
          else {
            local_218 = (double)CONCAT44(uVar61,uVar60);
            local_228 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                         UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
            dStack_220 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                          UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
            auVar10._4_8_ = uVar50;
            auVar10._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
            auVar41._0_8_ = auVar10._0_8_ << 0x20;
            auVar41._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
            auVar41._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
            dVar46 = auVar41._8_8_;
            uVar50 = CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                              UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
          }
        }
        dVar40 = dVar46 * dVar46 + local_228 * local_228 + local_218 * local_218;
        dVar39 = local_228;
        dStack_250 = dVar46;
        local_248 = local_218;
        if (dVar40 != (double)CONCAT44(uVar66,uVar65)) {
          if ((double)CONCAT44(uVar59,uVar51) <= dVar40) {
            local_198 = (double)CONCAT44(uVar66,uVar65) / SQRT(dVar40);
            dVar46 = dVar46 * local_198;
            local_248 = local_218 * local_198;
            dVar39 = local_228 * local_198;
            dStack_250 = dVar46;
          }
          else {
            local_248 = (double)CONCAT44(uVar61,uVar60);
            auVar11._4_8_ = uVar50;
            auVar11._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
            auVar47._0_8_ = auVar11._0_8_ << 0x20;
            auVar47._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
            auVar47._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
            dVar46 = auVar47._8_8_;
            dStack_250 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                          UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
            dVar39 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                      UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
            local_258 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
            uStack_254 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
          }
        }
        uVar57 = (uint)__xmm_80000000000000008000000000000000;
        uVar58 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
        dVar52 = (double)CONCAT44((uint)((ulonglong)dVar46 >> 0x20) ^ uVar58,
                                  SUB84(dVar46,0) ^ uVar57);
        dVar53 = (double)CONCAT44((uint)((ulonglong)local_248 >> 0x20) ^ uVar58,
                                  SUB84(local_248,0) ^ uVar57);
        uVar57 = SUB84(dVar39,0) ^ uVar57;
        uVar58 = (uint)((ulonglong)dVar39 >> 0x20) ^ uVar58;
        dVar44 = dVar52 * (double)uVar7 - dVar53 * dVar6;
        dVar39 = dVar53 * dVar8 - (double)CONCAT44(uVar58,uVar57) * (double)uVar7;
        dVar40 = (double)CONCAT44(uVar58,uVar57) * dVar6 - dVar52 * dVar8;
        dVar46 = dVar39 * dVar39 + dVar44 * dVar44 + dVar40 * dVar40;
        if (dVar46 != (double)CONCAT44(uVar66,uVar65)) {
          if (__real_3e45798ee0000000 <= dVar46) {
            local_190 = (double)CONCAT44(uVar66,uVar65) / SQRT(dVar46);
            dVar44 = dVar44 * local_190;
            dVar39 = dVar39 * local_190;
            dVar40 = dVar40 * local_190;
          }
          else {
            local_1b8 = (double)CONCAT44(uVar61,uVar60);
            dVar40 = (double)CONCAT44(uVar61,uVar60);
            dVar44 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                      UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
            dVar39 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                      UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
          }
        }
        local_2bc = (float)dVar52;
        local_238 = 0;
        local_2c0 = (float)(double)CONCAT44(uVar58,uVar57);
        local_2b8 = (float)dVar53;
        local_2b4 = (float)dVar8;
        local_2b0 = (float)dVar6;
        uVar58 = (int)ROUND(local_2c0 * __real_437e0000 + __real_3f000000) >> 1;
        local_2ac = (float)(double)uVar7;
        uVar57 = 0x7f;
        if ((int)uVar58 < 0x7f) {
          uVar57 = uVar58;
        }
        uVar19 = (int)ROUND(local_2bc * __real_437e0000 + __real_3f000000) >> 1;
        uVar58 = 0x7f;
        if ((int)uVar19 < 0x7f) {
          uVar58 = uVar19;
        }
        uVar20 = (int)ROUND(local_2b8 * __real_437e0000 + __real_3f000000) >> 1;
        uVar19 = 0x7f;
        if ((int)uVar20 < 0x7f) {
          uVar19 = uVar20;
        }
        uVar21 = (int)ROUND((float)dVar44 * __real_437e0000 + __real_3f000000) >> 1;
        uVar20 = 0x7f;
        if ((int)uVar21 < 0x7f) {
          uVar20 = uVar21;
        }
        uVar22 = (int)ROUND((float)dVar39 * __real_437e0000 + __real_3f000000) >> 1;
        uVar21 = 0x7f;
        if ((int)uVar22 < 0x7f) {
          uVar21 = uVar22;
        }
        uVar23 = (int)ROUND((float)dVar40 * __real_437e0000 + __real_3f000000) >> 1;
        uVar22 = 0x7f;
        if ((int)uVar23 < 0x7f) {
          uVar22 = uVar23;
        }
        uVar24 = (int)ROUND(local_2b4 * __real_437e0000 + __real_3f000000) >> 1;
        uVar23 = 0x7f;
        if ((int)uVar24 < 0x7f) {
          uVar23 = uVar24;
        }
        uVar25 = (int)ROUND(local_2b0 * __real_437e0000 + __real_3f000000) >> 1;
        uVar24 = 0x7f;
        if ((int)uVar25 < 0x7f) {
          uVar24 = uVar25;
        }
        fVar35 = local_2ac * __real_437e0000 + __real_3f000000;
        uVar26 = (int)ROUND(fVar35) >> 1;
        uVar25 = 0x7f;
        if ((int)uVar26 < 0x7f) {
          uVar25 = uVar26;
        }
        uVar26 = 0x80;
        if (-0x80 < (int)uVar19) {
          uVar26 = uVar19 & 0xff;
        }
        uVar19 = 0x80;
        if (-0x80 < (int)uVar58) {
          uVar19 = uVar58 & 0xff;
        }
        uVar58 = 0x80;
        if (-0x80 < (int)uVar57) {
          uVar58 = uVar57 & 0xff;
        }
        uVar57 = 0x80;
        if (-0x80 < (int)uVar22) {
          uVar57 = uVar22 & 0xff;
        }
        auVar37 = pmovsxbd(ZEXT416((uint)fVar35),
                           ZEXT416(((uVar26 | 0x7f00) << 8 | uVar19) << 8 | uVar58));
        uVar58 = 0x80;
        if (-0x80 < (int)uVar21) {
          uVar58 = uVar21 & 0xff;
        }
        fVar35 = (float)auVar37._0_4_ * ___xmm_3c0102043c0102043c0102043c010204;
        fVar62 = (float)auVar37._4_4_ * _UNK_151040074;
        local_188 = (float)auVar37._8_4_ * _UNK_151040078;
        fStack_184 = (float)auVar37._12_4_ * _UNK_15104007c;
        uVar19 = 0x80;
        if (-0x80 < (int)uVar20) {
          uVar19 = uVar20 & 0xff;
        }
        uVar20 = 0x80;
        if (-0x80 < (int)uVar25) {
          uVar20 = uVar25 & 0xff;
        }
        dVar6 = (double)local_188;
        auVar37 = pmovsxbd(auVar37,ZEXT416(((uVar57 | 0x7f00) << 8 | uVar58) << 8 | uVar19));
        fVar63 = (float)auVar37._0_4_ * ___xmm_3c0102043c0102043c0102043c010204;
        fVar64 = (float)auVar37._4_4_ * _UNK_151040074;
        local_178 = (float)auVar37._8_4_ * _UNK_151040078;
        fStack_174 = (float)auVar37._12_4_ * _UNK_15104007c;
        dVar8 = (double)local_178;
        lVar30 = 0;
        uVar57 = 0x80;
        if (-0x80 < (int)uVar24) {
          uVar57 = uVar24 & 0xff;
        }
        uVar58 = 0x80;
        if (-0x80 < (int)uVar23) {
          uVar58 = uVar23 & 0xff;
        }
        auVar37 = pmovsxbd(auVar37,ZEXT416(((uVar20 | 0x7f00) << 8 | uVar57) << 8 | uVar58));
        local_208 = (float)auVar37._0_4_ * ___xmm_3c0102043c0102043c0102043c010204;
        fStack_204 = (float)auVar37._4_4_ * _UNK_151040074;
        fStack_200 = (float)auVar37._8_4_ * _UNK_151040078;
        fStack_1fc = (float)auVar37._12_4_ * _UNK_15104007c;
        auVar12._4_8_ = auVar37._8_8_;
        auVar12._0_4_ = fStack_204;
        auVar38._0_8_ = auVar12._0_8_ << 0x20;
        auVar38._8_4_ = fStack_200;
        auVar38._12_4_ = fStack_1fc;
        uStack_1e0 = auVar38._8_8_;
        dVar39 = (double)fStack_200;
        local_1e8 = fStack_200;
        fStack_1e4 = fStack_1fc;
        fStack_180 = local_188;
        fStack_17c = fStack_184;
        fStack_170 = local_178;
        fStack_16c = fStack_174;
        do {
          uVar57 = local_2d0[lVar30];
          <Stack_fc.Packed = 0;
          <Stack_f8.Packed = 0;
          uVar58 = 0;
          if ((int)uVar57 < (pFVar16->VertexData).ArrayNum) {
            uVar58 = ~uVar57 >> 0x1f;
          }
          if ((uVar58 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          auVar37 = *(undefined1 (*) [16])(pFVar16->Transform).Rotation.ZW.m128d_f64;
          dVar36 = auVar37._0_8_;
          local_168 = *(undefined1 (*) [16])(pFVar16->Transform).Rotation.XY.m128d_f64;
          pFVar3 = (pFVar16->VertexData).AllocatorInstance.Data;
          auVar45 = *(undefined1 (*) [16])(pFVar16->Transform).Rotation.XY.m128d_f64;
          dVar14 = (pFVar16->Transform).Rotation.ZW.m128d_f64[1];
          pFVar2 = pFVar3 + (longlong)(int)uVar57 * 0x18;
          dVar46 = *(double *)pFVar2 * (pFVar16->Transform).Scale3D.XY.m128d_f64[0];
          dVar52 = *(double *)(pFVar2 + 8) * (pFVar16->Transform).Scale3D.XY.m128d_f64[1];
          uVar51 = (undefined4)((ulonglong)dVar52 >> 0x20);
          dVar53 = *(double *)(pFVar3 + (longlong)(int)uVar57 * 0x18 + 0x10) *
                   (pFVar16->Transform).Scale3D.ZW.m128d_f64[0];
          dVar40 = (pFVar16->Transform).Scale3D.ZW.m128d_f64[1] * 0.0;
          auVar41 = blendpd(local_168,auVar37,2);
          auVar54._8_4_ = SUB84(dVar52,0);
          auVar54._0_8_ = dVar46;
          auVar54._12_4_ = uVar51;
          auVar55._0_8_ = auVar54._8_8_ * local_168._0_8_ - local_168._8_8_ * dVar46;
          auVar55._8_8_ = dVar53 * local_168._8_8_ - dVar36 * dVar52;
          auVar31._8_4_ = SUB84(dVar52,0);
          auVar31._0_8_ = dVar46;
          auVar31._12_4_ = uVar51;
          auVar5._8_4_ = SUB84(dVar40,0);
          auVar5._0_8_ = dVar53;
          auVar5._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
          auVar32 = blendpd(auVar31,auVar5,2);
          auVar33._0_8_ = auVar32._0_8_ * dVar36 - auVar41._0_8_ * dVar53;
          auVar33._8_8_ = auVar32._8_8_ * auVar37._8_8_ - auVar41._8_8_ * dVar40;
          auVar32 = blendpd(auVar55,auVar33,2);
          dVar40 = auVar55._8_8_ + auVar55._8_8_;
          dVar44 = auVar33._0_8_ + auVar33._0_8_;
          uVar51 = (undefined4)((ulonglong)dVar44 >> 0x20);
          auVar56._0_8_ = auVar32._0_8_ + auVar32._0_8_;
          auVar56._8_8_ = auVar32._8_8_ + auVar32._8_8_;
          auVar48._8_4_ = SUB84(dVar44,0);
          auVar48._0_8_ = dVar40;
          auVar48._12_4_ = uVar51;
          auVar42._8_4_ = SUB84(dVar44,0);
          auVar42._0_8_ = dVar40;
          auVar42._12_4_ = uVar51;
          auVar32 = blendpd(auVar42,auVar56,2);
          auVar49._0_8_ = auVar48._8_8_ * auVar45._0_8_ - auVar45._8_8_ * dVar40;
          auVar49._8_8_ = auVar56._0_8_ * auVar45._8_8_ - dVar36 * dVar44;
          auVar34._8_4_ = SUB84(auVar49._8_8_,0);
          auVar34._0_8_ = auVar49._0_8_;
          auVar34._12_4_ = (int)((ulonglong)auVar49._8_8_ >> 0x20);
          auVar45 = blendpd(auVar45,auVar37,2);
          auVar43._0_8_ = auVar32._0_8_ * dVar36 - auVar45._0_8_ * auVar56._0_8_;
          auVar43._8_8_ = auVar32._8_8_ * auVar37._8_8_ - auVar45._8_8_ * auVar56._8_8_;
          dVar40 = dVar40 * dVar14 + dVar46 + auVar34._8_8_ +
                   (pFVar16->Transform).Translation.XY.m128d_f64[0];
          dVar44 = dVar44 * dVar14 + dVar52 + auVar43._0_8_ +
                   (pFVar16->Transform).Translation.XY.m128d_f64[1];
          auVar37 = blendpd(auVar49,auVar43,2);
          local_148 = (float)dVar40;
          local_1b8 = auVar56._0_8_ * dVar14 + dVar53 + auVar37._0_8_ +
                      (pFVar16->Transform).Translation.ZW.m128d_f64[0];
          local_1c8._8_4_ = SUB84(dVar44,0);
          local_1c8._0_8_ = dVar40;
          local_1c8._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
          fStack_144 = (float)dVar44;
          fStack_140 = (float)local_1b8;
          local_28c._s_0.X = local_2c0;
          local_28c._s_0.Y = local_2bc;
          local_28c._s_0.Z = local_2b8;
          local_298._s_0.X = local_2b4;
          local_298._s_0.Y = local_2b0;
          local_298._s_0.Z = local_2ac;
          FStack_f4 = param_3.field0_0x0;
          FPackedNormal::operator=
                    ((FPackedNormal *)&<Stack_fc._s_0,(TVector<float> *)&local_298._s_0);
          FPackedNormal::operator=
                    ((FPackedNormal *)&<Stack_f8._s_0,(TVector<float> *)&local_28c._s_0);
          local_260 = local_188;
          local_26c = local_178;
          local_280 = CONCAT44(fStack_204,local_208);
          local_278 = local_1e8;
          local_268 = CONCAT44(fVar62,fVar35);
          local_274 = CONCAT44(fVar64,fVar63);
          dVar40 = (double)fVar62;
          dVar44 = (double)fVar64;
          fVar13 = __real_3f800000;
          if (((dVar44 * dVar6 - dVar40 * dVar8) * (double)local_208 -
              ((double)fStack_204 * dVar6 - dVar40 * dVar39) * (double)fVar63) +
              ((double)fStack_204 * dVar8 - dVar44 * dVar39) * (double)fVar35 <
              __real_0000000000000000) {
            fVar13 = fVar15;
          }
          piVar1 = &param_1->ArrayMax;
          uVar18 = 0x7f;
          if (fVar13 < __real_00000000) {
            uVar18 = 0x81;
          }
          pFVar2 = (param_1->AllocatorInstance).Data;
          <Stack_f8._s_0.W = uVar18;
          if (((pFVar2 <= (FScriptContainerElement *)&local_148) &&
              ((FScriptContainerElement *)&local_148 < pFVar2 + (longlong)*piVar1 * 0x58)) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar17)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar27 = param_1->ArrayNum;
          if (iVar27 == *piVar1) {
            iVar27 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x458,&param_1->AllocatorInstance,piVar1);
          }
          param_1->ArrayNum = iVar27 + 1;
          piVar1 = &param_2->ArrayMax;
          lVar29 = (longlong)iVar27 * 0x58;
          pFVar2 = (param_1->AllocatorInstance).Data;
          *(ulonglong *)(pFVar2 + lVar29) = CONCAT44(fStack_144,local_148);
          *(ulonglong *)(pFVar2 + lVar29 + 8) = CONCAT44(uStack_13c,fStack_140);
          *(undefined8 *)(pFVar2 + lVar29 + 0x10) = local_138;
          *(undefined8 *)(pFVar2 + lVar29 + 0x10 + 8) = uStack_130;
          *(undefined8 *)(pFVar2 + lVar29 + 0x20) = local_128;
          *(undefined8 *)(pFVar2 + lVar29 + 0x20 + 8) = uStack_120;
          *(undefined8 *)(pFVar2 + lVar29 + 0x30) = local_118;
          *(undefined8 *)(pFVar2 + lVar29 + 0x30 + 8) = uStack_110;
          *(undefined8 *)(pFVar2 + lVar29 + 0x40) = local_108;
          *(ulonglong *)(pFVar2 + lVar29 + 0x40 + 8) = CONCAT44(<Stack_fc.Packed,uStack_100);
          *(ulonglong *)(pFVar2 + lVar29 + 0x50) = CONCAT44(FStack_f4.Bits,<Stack_f8.Packed);
          pFVar2 = (param_2->AllocatorInstance).Data;
          local_2d8 = param_1->ArrayNum + -1;
          if (((pFVar2 <= (FScriptContainerElement *)&local_2d8) &&
              ((FScriptContainerElement *)&local_2d8 < pFVar2 + (longlong)*piVar1 * 4)) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar17)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar27 = param_2->ArrayNum;
          if (iVar27 == *piVar1) {
            iVar27 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&param_2->AllocatorInstance,piVar1);
          }
          lVar30 = lVar30 + 1;
          param_2->ArrayNum = iVar27 + 1;
          *(int *)((param_2->AllocatorInstance).Data + (longlong)iVar27 * 4) = local_2d8;
        } while (lVar30 < 3);
        local_2d4 = local_2d4 + 3;
        uVar65 = (undefined4)__real_3ff0000000000000;
        uVar66 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
        local_2a8 = local_2a8 + 0xc;
        local_2a0 = local_2a0 + -1;
        uVar51 = SUB84(__real_3e45798ee0000000,0);
        uVar59 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
        this = pFVar16;
        if (local_2a0 == 0) {
          return;
        }
      }
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar17 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<2953230507845878551>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysDrawing.cpp"
                        ,0x317,"NumIndices % 3 == 0");
    if (bVar17) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (4 < (byte)LogPhysics._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPhysics);
  }
  return;
}

// DrawElemSolid @ 1482f7280

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FKConvexElem::DrawElemSolid
          (FKConvexElem *this,FPrimitiveDrawInterface *param_1,TTransform<double> *param_2,
          float param_3,FMaterialRenderProxy *param_4)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar29;
  double dVar30;
  undefined4 uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 local_res8 [8];
  FPrimitiveDrawInterface *local_res10;
  int local_138;
  TVector2<float>_u_0 local_128;
  TVector<float>_u_0 local_120;
  TVector<float>_u_0 local_110;
  TVector<float>_u_0 local_100;
  TVector<float>_u_0 local_f0;
  FDynamicMeshBuilder local_e0;
  undefined1 local_b8 [16];
  double local_a8;
  undefined1 local_98 [16];
  
  iVar2 = (this->IndexData).ArrayNum;
  local_res10 = param_1;
  if (0 < iVar2) {
    if (iVar2 == (iVar2 / 3 + (iVar2 >> 0x1f) +
                 (int)(((longlong)iVar2 / 3 + ((longlong)iVar2 >> 0x3f) & 0xffffffffU) >> 0x1f)) * 3
       ) {
      FDynamicMeshBuilder::FDynamicMeshBuilder
                (&local_e0,param_1->View->FeatureLevel,1,0,false,(FDynamicMeshBufferAllocator *)0x0)
      ;
      uVar3 = (this->VertexData).ArrayNum;
      uVar19 = (ulonglong)(int)uVar3;
      pFVar14 = (this->VertexData).AllocatorInstance.Data;
      pFVar1 = pFVar14 + uVar19 * 0x18;
      local_100._0_8_ = 0x3f800000;
      local_100._s_0.Z = 0.0;
      local_110._s_0.X = 0.0;
      local_110._4_8_ = 0x3f800000;
      local_120._0_8_ = 0;
      local_120._s_0.Z = 1.0;
      while( true ) {
        if ((this->VertexData).ArrayNum != uVar3) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<UE::Math::TVector<double>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (pFVar14 == pFVar1) break;
        auVar28 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
        auVar22 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
        dVar9 = *(double *)(pFVar14 + 0x10) * (param_2->Scale3D).ZW.m128d_f64[0];
        dVar29 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
        local_128 = (TVector2<float>_u_0)0x0;
        dVar10 = (param_2->Rotation).ZW.m128d_f64[1];
        dVar7 = (param_2->Scale3D).XY.m128d_f64[0] * *(double *)pFVar14;
        dVar8 = (param_2->Scale3D).XY.m128d_f64[1] * *(double *)(pFVar14 + 8);
        uVar31 = (undefined4)((ulonglong)dVar8 >> 0x20);
        local_98 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
        auVar23 = blendpd(local_98,auVar28,2);
        auVar32._8_4_ = SUB84(dVar8,0);
        auVar32._0_8_ = dVar7;
        auVar32._12_4_ = uVar31;
        dVar6 = auVar28._0_8_;
        auVar33._0_8_ = auVar32._8_8_ * local_98._0_8_ - local_98._8_8_ * dVar7;
        auVar33._8_8_ = dVar9 * local_98._8_8_ - dVar6 * dVar8;
        auVar25._8_4_ = SUB84(dVar8,0);
        auVar25._0_8_ = dVar7;
        auVar25._12_4_ = uVar31;
        auVar20._8_4_ = SUB84(dVar29,0);
        auVar20._0_8_ = dVar9;
        auVar20._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
        auVar20 = blendpd(auVar25,auVar20,2);
        auVar21._0_8_ = auVar20._0_8_ * dVar6 - auVar23._0_8_ * dVar9;
        auVar21._8_8_ = auVar20._8_8_ * auVar28._8_8_ - auVar23._8_8_ * dVar29;
        auVar20 = blendpd(auVar33,auVar21,2);
        dVar29 = auVar33._8_8_ + auVar33._8_8_;
        dVar30 = auVar21._0_8_ + auVar21._0_8_;
        auVar34._0_8_ = auVar20._0_8_ + auVar20._0_8_;
        auVar34._8_8_ = auVar20._8_8_ + auVar20._8_8_;
        auVar26._8_4_ = SUB84(dVar30,0);
        auVar26._0_8_ = dVar29;
        uVar31 = (undefined4)((ulonglong)dVar30 >> 0x20);
        auVar26._12_4_ = uVar31;
        auVar23._8_4_ = SUB84(dVar30,0);
        auVar23._0_8_ = dVar29;
        auVar23._12_4_ = uVar31;
        auVar25 = blendpd(auVar22,auVar28,2);
        auVar27._0_8_ = auVar26._8_8_ * auVar22._0_8_ - auVar22._8_8_ * dVar29;
        auVar27._8_8_ = auVar34._0_8_ * auVar22._8_8_ - dVar6 * dVar30;
        auVar20 = blendpd(auVar23,auVar34,2);
        auVar22._8_4_ = SUB84(auVar27._8_8_,0);
        auVar22._0_8_ = auVar27._0_8_;
        auVar22._12_4_ = (int)((ulonglong)auVar27._8_8_ >> 0x20);
        auVar24._0_8_ = auVar20._0_8_ * dVar6 - auVar25._0_8_ * auVar34._0_8_;
        auVar24._8_8_ = auVar20._8_8_ * auVar28._8_8_ - auVar25._8_8_ * auVar34._8_8_;
        dVar6 = dVar10 * dVar29 + dVar7 + auVar22._8_8_ + (param_2->Translation).XY.m128d_f64[0];
        dVar7 = dVar10 * dVar30 + dVar8 + auVar24._0_8_ + (param_2->Translation).XY.m128d_f64[1];
        auVar28 = blendpd(auVar27,auVar24,2);
        local_f0._s_0.X = (float)dVar6;
        local_a8 = dVar10 * auVar34._0_8_ + dVar9 + auVar28._0_8_ +
                   (param_2->Translation).ZW.m128d_f64[0];
        local_b8._8_4_ = SUB84(dVar7,0);
        local_b8._0_8_ = dVar6;
        local_b8._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
        local_f0._s_0.Y = (float)dVar7;
        local_f0._s_0.Z = (float)local_a8;
        FDynamicMeshBuilder::AddVertex
                  (&local_e0,(TVector<float> *)&local_f0._s_0,(TVector2<float> *)&local_128._s_0,
                   (TVector<float> *)&local_100._s_0,(TVector<float> *)&local_110._s_0,
                   (TVector<float> *)&local_120._s_0,&FColor::White);
        pFVar14 = pFVar14 + 0x18;
      }
      uVar16 = 1;
      if (0 < iVar2) {
        lVar15 = 4;
        lVar17 = ((longlong)iVar2 - 1U) / 3 + 1;
        local_138 = 0;
        do {
          uVar18 = ~(uVar16 - 1) >> 0x1f;
          uVar12 = 0;
          if (local_138 < (this->IndexData).ArrayNum) {
            uVar12 = uVar18;
          }
          if ((uVar12 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (*(int *)((this->IndexData).AllocatorInstance.Data + lVar15 + -4) < (int)uVar19) {
            uVar12 = 0;
            if ((int)uVar16 < (this->IndexData).ArrayNum) {
              uVar12 = ~uVar16 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if (*(int *)((this->IndexData).AllocatorInstance.Data + lVar15) < (int)uVar19) {
              uVar12 = uVar16 + 1;
              uVar13 = 0;
              if ((int)uVar12 < (this->IndexData).ArrayNum) {
                uVar13 = ~uVar12 >> 0x1f;
              }
              if ((uVar13 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if (*(int *)((this->IndexData).AllocatorInstance.Data + lVar15 + 4) < (int)uVar3) {
                uVar13 = 0;
                if ((int)uVar12 < (this->IndexData).ArrayNum) {
                  uVar13 = ~uVar12 >> 0x1f;
                }
                if ((uVar13 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                iVar2 = *(int *)((this->IndexData).AllocatorInstance.Data + lVar15 + 4);
                uVar12 = 0;
                if ((int)uVar16 < (this->IndexData).ArrayNum) {
                  uVar12 = ~uVar16 >> 0x1f;
                }
                if ((uVar12 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                iVar4 = *(int *)((this->IndexData).AllocatorInstance.Data + lVar15);
                uVar12 = 0;
                if ((int)(uVar16 - 1) < (this->IndexData).ArrayNum) {
                  uVar12 = uVar18;
                }
                if ((uVar12 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                FDynamicMeshBuilder::AddTriangle
                          (&local_e0,
                           *(int *)((this->IndexData).AllocatorInstance.Data + lVar15 + -4),iVar4,
                           iVar2);
                uVar19 = (ulonglong)uVar3;
              }
              else {
                uVar19 = (ulonglong)uVar3;
              }
            }
          }
          uVar16 = uVar16 + 3;
          local_138 = local_138 + 3;
          lVar15 = lVar15 + 0xc;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
      }
      FDynamicMeshBuilder::Draw
                (&local_e0,local_res10,&UE::Math::TMatrix<double>::Identity,param_4,'\0',false,true,
                 (FHitProxyId)0xffffffff);
      FDynamicMeshBuilder::~FDynamicMeshBuilder(&local_e0);
      return;
    }
    bVar11 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<2953230507845878514>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysDrawing.cpp"
                        ,0x2f2,"NumIndices % 3 == 0");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (4 < (byte)LogPhysics._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPhysics);
  }
  return;
}

// DrawElemWire @ 1482f9930

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FKConvexElem::DrawElemWire
          (FKConvexElem *this,FPrimitiveDrawInterface *param_1,TTransform<double> *param_2,
          float param_3,FColor param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  FPrimitiveDrawInterface *pFVar10;
  TTransform<double> *pTVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  undefined1 *puVar21;
  ulonglong uVar22;
  uint uVar23;
  uint uVar24;
  longlong lVar25;
  uint uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar36;
  double dVar37;
  undefined4 uVar38;
  float fVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 local_res8 [8];
  FPrimitiveDrawInterface *local_res10;
  TTransform<double> *local_res18;
  undefined1 *in_stack_fffffffffffffea8;
  ForAnyElementType in_stack_fffffffffffffeb0;
  ulonglong uVar43;
  ulonglong in_stack_fffffffffffffeb8;
  ulonglong uVar44;
  ulonglong in_stack_fffffffffffffec0;
  ulonglong uVar45;
  int local_124;
  ForAnyElementType local_120;
  int local_118;
  int iStack_114;
  uint local_110;
  longlong local_108;
  uint local_100;
  FScriptContainerElement *local_f8;
  FScriptContainerElement *local_f0;
  ulonglong local_e8;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  undefined1 local_b0 [16];
  double local_a0;
  undefined1 local_98 [16];
  
  iVar1 = (this->IndexData).ArrayNum;
  local_res10 = param_1;
  local_res18 = param_2;
  if (0 < iVar1) {
    if (iVar1 == (iVar1 / 3 + (iVar1 >> 0x1f) +
                 (int)(((longlong)iVar1 / 3 + ((longlong)iVar1 >> 0x3f) & 0xffffffffU) >> 0x1f)) * 3
       ) {
      local_110 = (this->VertexData).ArrayNum;
      local_120.Data = (FScriptContainerElement *)0x0;
      local_118 = 0;
      iStack_114 = 0;
      if ((int)local_110 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)local_110);
      }
      lVar25 = 8;
      if (0 < (int)local_110) {
        in_stack_fffffffffffffeb0.Data = (FScriptContainerElement *)&iStack_114;
        in_stack_fffffffffffffea8 =
             (undefined1 *)((ulonglong)in_stack_fffffffffffffea8 & 0xffffffff00000000);
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,local_110,&local_120,0,(int *)in_stack_fffffffffffffeb0.Data);
      }
      pTVar11 = local_res18;
      iVar2 = (this->VertexData).ArrayNum;
      pFVar19 = (this->VertexData).AllocatorInstance.Data;
      pFVar16 = pFVar19 + (longlong)iVar2 * 0x18;
      while( true ) {
        if ((this->VertexData).ArrayNum != iVar2) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<UE::Math::TVector<double>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        fVar9 = __real_3b808081;
        if (pFVar19 == pFVar16) break;
        auVar35 = *(undefined1 (*) [16])(pTVar11->Rotation).ZW.m128d_f64;
        auVar29 = *(undefined1 (*) [16])(pTVar11->Rotation).XY.m128d_f64;
        dVar8 = (pTVar11->Rotation).ZW.m128d_f64[1];
        dVar7 = *(double *)(pFVar19 + 0x10) * (pTVar11->Scale3D).ZW.m128d_f64[0];
        dVar36 = (pTVar11->Scale3D).ZW.m128d_f64[1] * 0.0;
        dVar5 = (pTVar11->Scale3D).XY.m128d_f64[0] * *(double *)pFVar19;
        dVar6 = (pTVar11->Scale3D).XY.m128d_f64[1] * *(double *)(pFVar19 + 8);
        uVar38 = (undefined4)((ulonglong)dVar6 >> 0x20);
        local_98 = *(undefined1 (*) [16])(pTVar11->Rotation).XY.m128d_f64;
        auVar40._8_4_ = SUB84(dVar6,0);
        auVar40._0_8_ = dVar5;
        auVar40._12_4_ = uVar38;
        dVar4 = auVar35._0_8_;
        auVar30 = blendpd(local_98,auVar35,2);
        auVar41._0_8_ = auVar40._8_8_ * local_98._0_8_ - local_98._8_8_ * dVar5;
        auVar41._8_8_ = dVar7 * local_98._8_8_ - dVar4 * dVar6;
        auVar32._8_4_ = SUB84(dVar6,0);
        auVar32._0_8_ = dVar5;
        auVar32._12_4_ = uVar38;
        auVar27._8_4_ = SUB84(dVar36,0);
        auVar27._0_8_ = dVar7;
        auVar27._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
        auVar27 = blendpd(auVar32,auVar27,2);
        auVar28._0_8_ = auVar27._0_8_ * dVar4 - auVar30._0_8_ * dVar7;
        auVar28._8_8_ = auVar27._8_8_ * auVar35._8_8_ - auVar30._8_8_ * dVar36;
        auVar27 = blendpd(auVar41,auVar28,2);
        dVar36 = auVar41._8_8_ + auVar41._8_8_;
        dVar37 = auVar28._0_8_ + auVar28._0_8_;
        auVar42._0_8_ = auVar27._0_8_ + auVar27._0_8_;
        auVar42._8_8_ = auVar27._8_8_ + auVar27._8_8_;
        auVar33._8_4_ = SUB84(dVar37,0);
        auVar33._0_8_ = dVar36;
        uVar38 = (undefined4)((ulonglong)dVar37 >> 0x20);
        auVar33._12_4_ = uVar38;
        auVar30._8_4_ = SUB84(dVar37,0);
        auVar30._0_8_ = dVar36;
        auVar30._12_4_ = uVar38;
        auVar32 = blendpd(auVar29,auVar35,2);
        auVar27 = blendpd(auVar30,auVar42,2);
        auVar34._0_8_ = auVar33._8_8_ * auVar29._0_8_ - auVar29._8_8_ * dVar36;
        auVar34._8_8_ = auVar42._0_8_ * auVar29._8_8_ - dVar4 * dVar37;
        auVar29._8_4_ = SUB84(auVar34._8_8_,0);
        auVar29._0_8_ = auVar34._0_8_;
        auVar29._12_4_ = (int)((ulonglong)auVar34._8_8_ >> 0x20);
        auVar31._0_8_ = auVar27._0_8_ * dVar4 - auVar32._0_8_ * auVar42._0_8_;
        auVar31._8_8_ = auVar27._8_8_ * auVar35._8_8_ - auVar32._8_8_ * auVar42._8_8_;
        auVar35 = blendpd(auVar34,auVar31,2);
        dVar4 = dVar8 * dVar37 + dVar6 + auVar31._0_8_ + (pTVar11->Translation).XY.m128d_f64[1];
        local_a0 = dVar8 * auVar42._0_8_ + dVar7 + auVar35._0_8_ +
                   (pTVar11->Translation).ZW.m128d_f64[0];
        local_b0._8_4_ = SUB84(dVar4,0);
        local_b0._0_8_ =
             dVar8 * dVar36 + dVar5 + auVar29._8_8_ + (pTVar11->Translation).XY.m128d_f64[0];
        local_b0._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
        if ((local_120.Data <= (FScriptContainerElement *)local_b0) &&
           (uVar18 = (ulonglong)iStack_114,
           (FScriptContainerElement *)local_b0 < local_120.Data + uVar18 * 0x18)) {
          in_stack_fffffffffffffec0 = (ulonglong)local_118;
          in_stack_fffffffffffffea8 = local_b0;
          in_stack_fffffffffffffeb0.Data = local_120.Data;
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          in_stack_fffffffffffffeb8 = uVar18;
          if (bVar12) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        if (local_118 == iStack_114) {
          local_118 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x818,&local_120,&iStack_114);
        }
        lVar15 = (longlong)local_118;
        pFVar19 = pFVar19 + 0x18;
        local_118 = local_118 + 1;
        *(undefined8 *)(local_120.Data + lVar15 * 0x18) = local_b0._0_8_;
        *(undefined8 *)(local_120.Data + lVar15 * 0x18 + 8) = local_b0._8_8_;
        *(double *)(local_120.Data + lVar15 * 0x18 + 0x10) = local_a0;
      }
      uVar20 = 0;
      if (0 < iVar1) {
        local_108 = ((longlong)iVar1 - 1U) / 3 + 1;
        local_124 = 2;
        uVar26 = local_110;
        do {
          iVar1 = (this->IndexData).ArrayNum;
          pFVar16 = (FScriptContainerElement *)(longlong)iVar1;
          uVar24 = ~uVar20 >> 0x1f;
          uVar13 = 0;
          if ((int)uVar20 < iVar1) {
            uVar13 = uVar24;
          }
          if (uVar13 == 0) {
            in_stack_fffffffffffffea8 = (undefined1 *)(longlong)(int)uVar20;
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            in_stack_fffffffffffffeb0.Data = pFVar16;
            if (bVar12) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          if (*(int *)((this->IndexData).AllocatorInstance.Data + lVar25 + -8) < (int)uVar26) {
            iVar1 = (this->IndexData).ArrayNum;
            pFVar16 = (FScriptContainerElement *)(longlong)iVar1;
            uVar13 = uVar20 + 2;
            uVar23 = ~(uVar20 + 1) >> 0x1f;
            uVar26 = 0;
            if (local_124 + -1 < iVar1) {
              uVar26 = uVar23;
            }
            if (uVar26 == 0) {
              in_stack_fffffffffffffea8 = (undefined1 *)(longlong)(int)(uVar20 + 1);
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              in_stack_fffffffffffffeb0.Data = pFVar16;
              if (bVar12) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            uVar26 = local_110;
            if (*(int *)((this->IndexData).AllocatorInstance.Data + lVar25 + -4) < (int)local_110) {
              iVar1 = (this->IndexData).ArrayNum;
              pFVar16 = (FScriptContainerElement *)(longlong)iVar1;
              local_100 = ~uVar13 >> 0x1f;
              uVar26 = 0;
              if ((int)uVar13 < iVar1) {
                uVar26 = local_100;
              }
              if (uVar26 == 0) {
                in_stack_fffffffffffffea8 = (undefined1 *)(longlong)(int)uVar13;
                bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                in_stack_fffffffffffffeb0.Data = pFVar16;
                if (bVar12) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
              }
              uVar26 = local_110;
              if (*(int *)((this->IndexData).AllocatorInstance.Data + lVar25) < (int)local_110) {
                local_f8 = *(FScriptContainerElement **)(local_res10->_padding_ + 0x30);
                local_e0 = FLinearColor::sRGBToLinearTable[param_4.field0_0x0._s_0.R];
                local_dc = FLinearColor::sRGBToLinearTable[param_4.field0_0x0._s_0.G];
                local_e8 = (ulonglong)((uint)param_4.field0_0x0 & 0xff);
                local_d8 = FLinearColor::sRGBToLinearTable[local_e8];
                iVar1 = (this->IndexData).ArrayNum;
                pFVar16 = (FScriptContainerElement *)(longlong)iVar1;
                uVar26 = 0;
                if ((int)(uVar20 + 1) < iVar1) {
                  uVar26 = uVar23;
                }
                fVar39 = (float)((uint)param_4.field0_0x0 >> 0x18) * fVar9;
                local_d4 = fVar39;
                if (uVar26 == 0) {
                  in_stack_fffffffffffffea8 = (undefined1 *)((longlong)(int)uVar20 + 1);
                  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  in_stack_fffffffffffffeb0.Data = pFVar16;
                  if (bVar12) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                }
                pFVar16 = (FScriptContainerElement *)(longlong)local_118;
                uVar26 = *(uint *)((this->IndexData).AllocatorInstance.Data + lVar25 + -4);
                puVar21 = (undefined1 *)(longlong)(int)uVar26;
                uVar14 = 0;
                if ((int)uVar26 < local_118) {
                  uVar14 = ~uVar26 >> 0x1f;
                }
                if ((uVar14 == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), in_stack_fffffffffffffea8 = puVar21,
                   in_stack_fffffffffffffeb0.Data = pFVar16, bVar12)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                local_f0 = local_120.Data + (longlong)(int)uVar26 * 0x18;
                iVar1 = (this->IndexData).ArrayNum;
                pFVar16 = (FScriptContainerElement *)(longlong)iVar1;
                uVar26 = 0;
                if ((int)uVar20 < iVar1) {
                  uVar26 = uVar24;
                }
                if (uVar26 == 0) {
                  in_stack_fffffffffffffea8 = (undefined1 *)(longlong)(int)uVar20;
                  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  in_stack_fffffffffffffeb0.Data = pFVar16;
                  if (bVar12) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                }
                pFVar16 = (FScriptContainerElement *)(longlong)local_118;
                uVar26 = *(uint *)((this->IndexData).AllocatorInstance.Data + lVar25 + -8);
                puVar21 = (undefined1 *)(longlong)(int)uVar26;
                uVar14 = 0;
                if ((int)uVar26 < local_118) {
                  uVar14 = ~uVar26 >> 0x1f;
                }
                if ((uVar14 == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), in_stack_fffffffffffffea8 = puVar21,
                   in_stack_fffffffffffffeb0.Data = pFVar16, bVar12)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                uVar45 = in_stack_fffffffffffffec0 & 0xffffffffffffff00;
                uVar44 = in_stack_fffffffffffffeb8 & 0xffffffff00000000;
                uVar43 = (ulonglong)in_stack_fffffffffffffeb0.Data & 0xffffffff00000000;
                uVar18 = (ulonglong)in_stack_fffffffffffffea8 & 0xffffffffffffff00;
                (*(code *)local_f8)(local_res10,local_120.Data + (longlong)(int)uVar26 * 0x18,
                                    local_f0,&local_e0,uVar18,uVar43,uVar44,uVar45);
                local_f0 = *(FScriptContainerElement **)(local_res10->_padding_ + 0x30);
                local_d0 = FLinearColor::sRGBToLinearTable[param_4.field0_0x0._s_0.R];
                local_cc = FLinearColor::sRGBToLinearTable[param_4.field0_0x0._s_0.G];
                local_c8 = FLinearColor::sRGBToLinearTable[local_e8];
                iVar1 = (this->IndexData).ArrayNum;
                uVar17 = (ulonglong)iVar1;
                uVar26 = 0;
                if ((int)uVar13 < iVar1) {
                  uVar26 = local_100;
                }
                local_c4 = fVar39;
                if (uVar26 == 0) {
                  uVar18 = (longlong)(int)uVar20 + 2;
                  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  uVar43 = uVar17;
                  if (bVar12) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                }
                uVar17 = (ulonglong)local_118;
                uVar26 = *(uint *)((this->IndexData).AllocatorInstance.Data + lVar25);
                uVar22 = (ulonglong)(int)uVar26;
                uVar14 = 0;
                if ((int)uVar26 < local_118) {
                  uVar14 = ~uVar26 >> 0x1f;
                }
                if ((uVar14 == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), uVar18 = uVar22, uVar43 = uVar17, bVar12)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                local_f8 = local_120.Data + (longlong)(int)uVar26 * 0x18;
                iVar1 = (this->IndexData).ArrayNum;
                uVar17 = (ulonglong)iVar1;
                uVar26 = 0;
                if ((int)(uVar20 + 1) < iVar1) {
                  uVar26 = uVar23;
                }
                if (uVar26 == 0) {
                  uVar18 = (longlong)(int)uVar20 + 1;
                  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  uVar43 = uVar17;
                  if (bVar12) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                }
                uVar17 = (ulonglong)local_118;
                uVar26 = *(uint *)((this->IndexData).AllocatorInstance.Data + lVar25 + -4);
                uVar23 = 0;
                if ((int)uVar26 < local_118) {
                  uVar23 = ~uVar26 >> 0x1f;
                }
                if ((uVar23 == 0) &&
                   (uVar18 = (longlong)(int)uVar26,
                   bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), uVar43 = uVar17, bVar12)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                pFVar10 = local_res10;
                uVar45 = uVar45 & 0xffffffffffffff00;
                uVar44 = uVar44 & 0xffffffff00000000;
                uVar43 = uVar43 & 0xffffffff00000000;
                uVar18 = uVar18 & 0xffffffffffffff00;
                (*(code *)local_f0)(local_res10,local_120.Data + (longlong)(int)uVar26 * 0x18,
                                    local_f8,&local_d0,uVar18,uVar43,uVar44,uVar45);
                local_f8 = *(FScriptContainerElement **)(pFVar10->_padding_ + 0x30);
                local_c0 = FLinearColor::sRGBToLinearTable[param_4.field0_0x0._s_0.R];
                local_bc = FLinearColor::sRGBToLinearTable[param_4.field0_0x0._s_0.G];
                local_b8 = FLinearColor::sRGBToLinearTable[local_e8];
                iVar1 = (this->IndexData).ArrayNum;
                uVar17 = (ulonglong)iVar1;
                uVar26 = 0;
                if ((int)uVar20 < iVar1) {
                  uVar26 = uVar24;
                }
                local_b4 = fVar39;
                if (uVar26 == 0) {
                  uVar18 = (ulonglong)(int)uVar20;
                  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  uVar43 = uVar17;
                  if (bVar12) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                }
                uVar17 = (ulonglong)local_118;
                uVar26 = *(uint *)((this->IndexData).AllocatorInstance.Data + lVar25 + -8);
                uVar24 = 0;
                if ((int)uVar26 < local_118) {
                  uVar24 = ~uVar26 >> 0x1f;
                }
                if ((uVar24 == 0) &&
                   (uVar18 = (longlong)(int)uVar26,
                   bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), uVar43 = uVar17, bVar12)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                pFVar16 = local_120.Data + (longlong)(int)uVar26 * 0x18;
                iVar1 = (this->IndexData).ArrayNum;
                uVar17 = (ulonglong)iVar1;
                uVar26 = 0;
                if ((int)uVar13 < iVar1) {
                  uVar26 = local_100;
                }
                if (uVar26 == 0) {
                  uVar18 = (longlong)(int)uVar20 + 2;
                  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  uVar43 = uVar17;
                  if (bVar12) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                }
                uVar17 = (ulonglong)local_118;
                uVar26 = *(uint *)((this->IndexData).AllocatorInstance.Data + lVar25);
                uVar13 = 0;
                if ((int)uVar26 < local_118) {
                  uVar13 = ~uVar26 >> 0x1f;
                }
                if ((uVar13 == 0) &&
                   (uVar18 = (longlong)(int)uVar26,
                   bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), uVar43 = uVar17, bVar12)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                in_stack_fffffffffffffec0 = uVar45 & 0xffffffffffffff00;
                in_stack_fffffffffffffeb8 = uVar44 & 0xffffffff00000000;
                in_stack_fffffffffffffeb0.Data =
                     (FScriptContainerElement *)(uVar43 & 0xffffffff00000000);
                in_stack_fffffffffffffea8 = (undefined1 *)(uVar18 & 0xffffffffffffff00);
                (*(code *)local_f8)(local_res10,local_120.Data + (longlong)(int)uVar26 * 0x18,
                                    pFVar16,&local_c0,in_stack_fffffffffffffea8,
                                    in_stack_fffffffffffffeb0.Data,in_stack_fffffffffffffeb8,
                                    in_stack_fffffffffffffec0);
                uVar26 = local_110;
              }
            }
          }
          uVar20 = uVar20 + 3;
          local_124 = local_124 + 3;
          lVar25 = lVar25 + 0xc;
          local_108 = local_108 + -1;
        } while (local_108 != 0);
      }
      if (local_120.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_120.Data);
      return;
    }
    bVar12 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<2953230507845878480>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysDrawing.cpp"
                        ,0x2d0,"NumIndices % 3 == 0");
    if (bVar12) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((byte)LogPhysics._0_1_ < 5) {
    return;
  }
  UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPhysics);
  return;
}

// operator() @ 1505284d0

bool __thiscall `FKConvexElem::operator='::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_60691740478142717>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_60691740478142717>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

