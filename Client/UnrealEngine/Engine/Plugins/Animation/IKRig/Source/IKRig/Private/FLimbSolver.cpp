// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 11

// StaticStruct @ 14deff130

UScriptStruct * __cdecl FLimbSolver::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLimbSolver.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FLimbSolver.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLimbSolver,(UObject *)pUVar1,L"LimbSolver");
  }
  return Z_Registration_Info_UScriptStruct_FLimbSolver.OuterSingleton;
}

// operator= @ 14df1e9e0

FLimbSolver * __thiscall FLimbSolver::operator=(FLimbSolver *this,FLimbSolver *param_1)

{
  TArray<FLimbLink,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  
  pTVar1 = &this->Links;
  this->Length = param_1->Length;
  if (pTVar1 != &param_1->Links) {
    iVar3 = (this->Links).ArrayMax;
    piVar2 = &(this->Links).ArrayMax;
    _Src = (param_1->Links).AllocatorInstance.Data;
    iVar4 = (param_1->Links).ArrayNum;
    (this->Links).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x68,8,iVar4,iVar3,&pTVar1->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar4 * 0x68);
      }
    }
  }
  return this;
}

// AddLink @ 14df23310

int __thiscall FLimbSolver::AddLink(FLimbSolver *this,TVector<double> *param_1,int param_2)

{
  int *piVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  
  iVar5 = (this->Links).ArrayNum;
  piVar1 = &(this->Links).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x868,&(this->Links).AllocatorInstance,piVar1);
  }
  (this->Links).ArrayNum = iVar5 + 1;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  lVar6 = (longlong)iVar5 * 0x68;
  pFVar3 = (this->Links).AllocatorInstance.Data;
  *(double *)(pFVar3 + lVar6) = (param_1->field0_0x0)._s_0.X;
  *(double *)(pFVar3 + lVar6 + 8) = dVar2;
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  *(int *)(pFVar3 + lVar6 + 0x1c) = param_2;
  *(double *)(pFVar3 + lVar6 + 0x10) = dVar2;
  *(undefined4 *)(pFVar3 + lVar6 + 0x18) = 0;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)(pFVar3 + lVar6 + 0x20) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)(pFVar3 + lVar6 + 0x20 + 8) = uVar4;
  *(double *)(pFVar3 + lVar6 + 0x30) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)(pFVar3 + lVar6 + 0x38) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)(pFVar3 + lVar6 + 0x38 + 8) = uVar4;
  *(double *)(pFVar3 + lVar6 + 0x48) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)(pFVar3 + lVar6 + 0x50) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)(pFVar3 + lVar6 + 0x50 + 8) = uVar4;
  *(double *)(pFVar3 + lVar6 + 0x60) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return iVar5;
}

// AdjustKneeTwist @ 14df23ba0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FLimbSolver::AdjustKneeTwist
          (FLimbSolver *this,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1,
          TTransform<double> *param_2,Type param_3)

{
  undefined1 auVar1 [16];
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [12];
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  bool bVar13;
  undefined1 uVar14;
  uint uVar15;
  TQuat<double> *pTVar16;
  int iVar17;
  TQuat<double> *__return_storage_ptr__;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  longlong lVar20;
  FScriptContainerElement *pFVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar30;
  undefined1 auVar29 [16];
  double dVar31;
  undefined1 auVar32 [16];
  double dVar34;
  undefined1 auVar33 [16];
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  uint uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined1 local_res8 [8];
  double local_res10;
  TTransform<double> *local_res18;
  Type local_res20;
  TQuat<double> local_1a8;
  TVector<double>_u_0 local_188;
  TVector<double>_u_0 local_170;
  double local_158;
  double dStack_150;
  double local_148;
  double local_140;
  double dStack_138;
  double local_130;
  double local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double local_e0;
  
  iVar17 = (this->Links).ArrayNum;
  uVar18 = iVar17 - 1;
  uVar39 = 0;
  if ((int)uVar18 < iVar17) {
    uVar39 = ~uVar18 >> 0x1f;
  }
  local_res18 = param_2;
  local_res20 = param_3;
  if ((uVar39 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar3 = (code *)swi(3);
    uVar14 = (*pcVar3)();
    return (bool)uVar14;
  }
  uVar39 = *(uint *)((this->Links).AllocatorInstance.Data +
                    (longlong)(this->Links).ArrayNum * 0x68 + -0x4c);
  uVar18 = 0;
  if ((int)uVar39 < param_1->ArrayNum) {
    uVar18 = ~uVar39 >> 0x1f;
  }
  if ((uVar18 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar3 = (code *)swi(3);
    uVar14 = (*pcVar3)();
    return (bool)uVar14;
  }
  pFVar21 = (param_1->AllocatorInstance).Data;
  lVar20 = (longlong)(int)uVar39 * 0x60;
  pFVar19 = pFVar21 + lVar20 + 0x20;
  local_120 = *(undefined8 *)pFVar19;
  uStack_118 = *(undefined8 *)(pFVar19 + 8);
  local_110 = *(undefined8 *)(pFVar21 + lVar20 + 0x30);
  local_148 = (param_2->Translation).ZW.m128d_f64[0];
  local_158 = (param_2->Translation).XY.m128d_f64[0];
  dStack_150 = (param_2->Translation).XY.m128d_f64[1];
  if (((this->Links).ArrayNum < 1) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar3 = (code *)swi(3);
    uVar14 = (*pcVar3)();
    return (bool)uVar14;
  }
  uVar18 = *(uint *)((this->Links).AllocatorInstance.Data + 0x1c);
  uVar15 = 0;
  if ((int)uVar18 < param_1->ArrayNum) {
    uVar15 = ~uVar18 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar3 = (code *)swi(3);
    uVar14 = (*pcVar3)();
    return (bool)uVar14;
  }
  dVar5 = __real_3e45798ee0000000;
  pFVar21 = (param_1->AllocatorInstance).Data;
  pFVar19 = pFVar21 + (longlong)(int)uVar18 * 0x60 + 0x20;
  local_140 = *(double *)pFVar19;
  dStack_138 = *(double *)(pFVar19 + 8);
  local_130 = *(double *)(pFVar21 + (longlong)(int)uVar18 * 0x60 + 0x30);
  dVar6 = local_158 - local_140;
  dVar37 = local_148 - local_130;
  dVar35 = dStack_150 - dStack_138;
  dVar31 = dVar35 * dVar35 + dVar6 * dVar6 + dVar37 * dVar37;
  uVar9 = dVar6;
  uVar10 = dVar37;
  uVar11 = dVar35;
  if ((dVar31 != __real_3ff0000000000000) &&
     (uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
     uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
     uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
     __real_3e45798ee0000000 <= dVar31)) {
    local_res10 = __real_3ff0000000000000 / SQRT(dVar31);
    uVar9 = dVar6 * local_res10;
    uVar10 = dVar37 * local_res10;
    uVar11 = dVar35 * local_res10;
  }
  uVar18 = 0;
  if ((int)uVar39 < param_1->ArrayNum) {
    uVar18 = ~uVar39 >> 0x1f;
  }
  if ((uVar18 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar3 = (code *)swi(3);
    uVar14 = (*pcVar3)();
    return (bool)uVar14;
  }
  UE::Math::TTransform<double>::GetUnitAxis
            ((TTransform<double> *)((param_1->AllocatorInstance).Data + lVar20),
             (TVector<double> *)&local_170._s_0,local_res20);
  UE::Math::TTransform<double>::GetUnitAxis
            (local_res18,(TVector<double> *)&local_188._s_0,local_res20);
  dVar6 = local_170._s_0.X * (double)uVar10 - local_170._s_0.Z * (double)uVar9;
  dVar37 = local_170._s_0.Z * (double)uVar11 - local_170._s_0.Y * (double)uVar10;
  dVar35 = local_170._s_0.Y * (double)uVar9 - local_170._s_0.X * (double)uVar11;
  local_170._s_0.X = dVar6 * (double)uVar10 - dVar35 * (double)uVar11;
  local_170._s_0.Y = dVar35 * (double)uVar9 - dVar37 * (double)uVar10;
  local_170._s_0.Z = dVar37 * (double)uVar11 - dVar6 * (double)uVar9;
  dVar37 = local_188._s_0.Z * (double)uVar11 - local_188._s_0.Y * (double)uVar10;
  dVar35 = local_188._s_0.Y * (double)uVar9 - local_188._s_0.X * (double)uVar11;
  dVar6 = local_188._s_0.X * (double)uVar10 - local_188._s_0.Z * (double)uVar9;
  local_188._s_0.X = dVar6 * (double)uVar10 - dVar35 * (double)uVar11;
  local_188._s_0.Y = dVar35 * (double)uVar9 - dVar37 * (double)uVar10;
  local_188._s_0.Z = dVar37 * (double)uVar11 - dVar6 * (double)uVar9;
  if ((((local_170._s_0.X != 0.0) || (local_170._s_0.Y != 0.0)) || (local_170._s_0.Z != 0.0)) &&
     (((uVar39 = SUB84(local_170._s_0.X - local_188._s_0.X,0) &
                 (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar18 = (uint)((ulonglong)(local_170._s_0.X - local_188._s_0.X) >> 0x20) &
                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar18,uVar39) &&
       (double)CONCAT44(uVar18,uVar39) != __real_3f1a36e2e0000000 ||
       (__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)(local_170._s_0.Y - local_188._s_0.Y) >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(local_170._s_0.Y - local_188._s_0.Y,0) &
                         (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
      (__real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)(local_170._s_0.Z - local_188._s_0.Z) >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(local_170._s_0.Z - local_188._s_0.Z,0) &
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff))))) {
    __return_storage_ptr__ = &local_1a8;
    pTVar16 = UE::Math::TQuat<double>::FindBetweenNormals
                        (__return_storage_ptr__,(TVector<double> *)&local_170._s_0,
                         (TVector<double> *)&local_188._s_0);
    dVar37 = (double)CONCAT44(local_1a8.Z._4_4_,local_1a8.Z._0_4_);
    auVar12._8_4_ = local_1a8.W._0_4_;
    auVar12._0_8_ = dVar37;
    auVar12._12_4_ = local_1a8.W._4_4_;
    dVar35 = (double)CONCAT44(local_1a8.X._4_4_,local_1a8.X._0_4_);
    auVar1._8_4_ = local_1a8.Y._0_4_;
    auVar1._0_8_ = dVar35;
    auVar1._12_4_ = local_1a8.Y._4_4_;
    dVar6 = auVar12._8_8_ - UE::Math::TQuat<double>::Identity.W;
    local_128 = dVar5;
    dVar31 = auVar1._8_8_ + UE::Math::TQuat<double>::Identity.Y;
    uVar40 = SUB84(dVar5,0);
    uVar41 = (undefined4)((ulonglong)dVar5 >> 0x20);
    auVar23._8_4_ = uVar40;
    auVar23._0_8_ = dVar5;
    auVar23._12_4_ = uVar41;
    dVar38 = auVar12._8_8_ + UE::Math::TQuat<double>::Identity.W;
    auVar24._8_8_ =
         -(ulonglong)
          (auVar23._8_8_ <
          (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) & _UNK_15061cc8c,
                           SUB84(dVar6,0) & _UNK_15061cc88));
    auVar24._0_8_ =
         -(ulonglong)
          (dVar5 < (double)CONCAT44((uint)((ulonglong)(dVar37 - UE::Math::TQuat<double>::Identity.Z)
                                          >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(dVar37 - UE::Math::TQuat<double>::Identity.Z,0) &
                                    (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    iVar17 = movmskpd((int)__return_storage_ptr__,auVar24);
    dVar6 = auVar1._8_8_ - UE::Math::TQuat<double>::Identity.Y;
    auVar25._8_4_ = uVar40;
    auVar25._0_8_ = dVar5;
    auVar25._12_4_ = uVar41;
    auVar26._8_8_ =
         -(ulonglong)
          (auVar25._8_8_ <
          (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) & _UNK_15061cc8c,
                           SUB84(dVar6,0) & _UNK_15061cc88));
    auVar26._0_8_ =
         -(ulonglong)
          (dVar5 < (double)CONCAT44((uint)((ulonglong)(dVar35 - UE::Math::TQuat<double>::Identity.X)
                                          >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(dVar35 - UE::Math::TQuat<double>::Identity.X,0) &
                                    (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    uVar39 = movmskpd((int)pTVar16,auVar26);
    uVar18 = iVar17 << 2 | uVar39;
    if (uVar18 != 0) {
      auVar27._8_4_ = uVar40;
      auVar27._0_8_ = dVar5;
      auVar27._12_4_ = uVar41;
      auVar28._8_8_ =
           -(ulonglong)
            (auVar27._8_8_ <
            (double)CONCAT44((uint)((ulonglong)dVar38 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar38,0) & _UNK_15061cc88));
      auVar28._0_8_ =
           -(ulonglong)
            (dVar5 < (double)CONCAT44((uint)((ulonglong)
                                             (dVar37 + UE::Math::TQuat<double>::Identity.Z) >> 0x20)
                                      & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                      SUB84(dVar37 + UE::Math::TQuat<double>::Identity.Z,0) &
                                      (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      uVar18 = movmskpd(uVar18,auVar28);
      lVar20 = -(ulonglong)
                (dVar5 < (double)CONCAT44((uint)((ulonglong)dVar31 >> 0x20) & _UNK_15061cc8c,
                                          SUB84(dVar31,0) & _UNK_15061cc88));
      auVar7._8_4_ = (int)lVar20;
      auVar7._0_8_ = -(ulonglong)
                      (dVar5 < (double)CONCAT44((uint)((ulonglong)
                                                       (dVar35 + UE::Math::TQuat<double>::Identity.X
                                                       ) >> 0x20) &
                                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                                SUB84(dVar35 + UE::Math::TQuat<double>::Identity.X,0
                                                     ) & (uint)
                                                  __xmm_7fffffffffffffff7fffffffffffffff));
      auVar7._12_4_ = (int)((ulonglong)lVar20 >> 0x20);
      iVar17 = movmskpd(uVar39,auVar7);
      if ((uVar18 & 0x3fffffff) != 0 || iVar17 != 0) {
        iVar17 = (this->Links).ArrayNum;
        pFVar19 = (this->Links).AllocatorInstance.Data;
        pFVar21 = pFVar19 + (longlong)iVar17 * 0x68;
        while( true ) {
          if ((this->Links).ArrayNum != iVar17) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<FLimbLink,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res8);
          }
          if (pFVar19 == pFVar21) {
            return true;
          }
          uVar39 = *(uint *)(pFVar19 + 0x1c);
          uVar18 = 0;
          if ((int)uVar39 < param_1->ArrayNum) {
            uVar18 = ~uVar39 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) break;
          pFVar2 = (param_1->AllocatorInstance).Data;
          lVar20 = (longlong)(int)uVar39 * 0x60;
          dVar36 = (double)CONCAT44(local_1a8.X._4_4_,local_1a8.X._0_4_);
          auVar32._8_4_ = local_1a8.X._0_4_;
          auVar32._0_8_ = dVar36;
          auVar32._12_4_ = local_1a8.X._4_4_;
          dVar31 = *(double *)(pFVar2 + lVar20);
          dVar38 = *(double *)(pFVar2 + lVar20 + 8);
          auVar1 = *(undefined1 (*) [16])(pFVar2 + lVar20 + 0x10);
          dVar6 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
          dVar22 = auVar1._0_8_;
          dVar30 = auVar1._8_8_;
          auVar29._8_4_ = auVar1._0_4_;
          auVar29._0_8_ = dVar30;
          auVar29._12_4_ = auVar1._4_4_;
          dVar35 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
          dVar37 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
          dVar34 = auVar32._8_8_ * dVar31 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                   dVar30 * (double)CONCAT44(local_1a8.W._4_4_,local_1a8.W._0_4_) +
                   dVar38 * (double)CONCAT44(local_1a8.Y._4_4_,local_1a8.Y._0_4_) *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                   auVar29._8_8_ * (double)CONCAT44(local_1a8.Z._4_4_,local_1a8.Z._0_4_) *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
          dVar5 = dVar22 * (double)CONCAT44(local_1a8.X._4_4_,local_1a8.X._0_4_) *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                  dVar38 * (double)CONCAT44(local_1a8.W._4_4_,local_1a8.W._0_4_) +
                  dVar30 * (double)CONCAT44(local_1a8.Y._4_4_,local_1a8.Y._0_4_) *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                  (double)CONCAT44(local_1a8.Z._4_4_,local_1a8.Z._0_4_) * dVar31 *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
          auVar4._8_4_ = SUB84(dVar5,0);
          auVar4._0_8_ = dVar30 * dVar36 *
                         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                         dVar31 * (double)CONCAT44(local_1a8.W._4_4_,local_1a8.W._0_4_) +
                         dVar22 * (double)CONCAT44(local_1a8.Y._4_4_,local_1a8.Y._0_4_) *
                         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                         (double)CONCAT44(local_1a8.Z._4_4_,local_1a8.Z._0_4_) * dVar38 *
                         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
          auVar4._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
          *(undefined1 (*) [16])(pFVar2 + lVar20) = auVar4;
          *(double *)(pFVar2 + lVar20 + 0x10) =
               dVar36 * dVar38 * dVar6 +
               dVar22 * (double)CONCAT44(local_1a8.W._4_4_,local_1a8.W._0_4_) +
               dVar31 * (double)CONCAT44(local_1a8.Y._4_4_,local_1a8.Y._0_4_) * dVar37 +
               dVar30 * (double)CONCAT44(local_1a8.Z._4_4_,local_1a8.Z._0_4_) * dVar35;
          *(double *)(pFVar2 + lVar20 + 0x10 + 8) = dVar34;
          dVar30 = (double)CONCAT44(local_1a8.Z._4_4_,local_1a8.Z._0_4_);
          dVar22 = (double)CONCAT44(local_1a8.Y._4_4_,local_1a8.Y._0_4_);
          local_e0 = *(double *)(pFVar2 + lVar20 + 0x30);
          dVar6 = *(double *)(pFVar2 + lVar20 + 0x20) - local_140;
          dVar38 = (double)CONCAT44(local_1a8.X._4_4_,local_1a8.X._0_4_);
          dVar5 = *(double *)(pFVar2 + lVar20 + 0x20 + 8) - dStack_138;
          dVar31 = local_e0 - local_130;
          auVar8._4_8_ = dVar34;
          auVar8._0_4_ = local_1a8.Z._4_4_;
          auVar33._0_8_ = auVar8._0_8_ << 0x20;
          auVar33._8_4_ = local_1a8.W._0_4_;
          auVar33._12_4_ = local_1a8.W._4_4_;
          dVar34 = auVar33._8_8_;
          dVar37 = dVar22 * dVar31 - dVar30 * dVar5;
          dVar37 = dVar37 + dVar37;
          dVar36 = dVar30 * dVar6 - dVar38 * dVar31;
          dVar36 = dVar36 + dVar36;
          dVar35 = dVar38 * dVar5 - dVar22 * dVar6;
          dVar35 = dVar35 + dVar35;
          local_108 = (dVar22 * dVar35 - dVar30 * dVar36) + dVar34 * dVar37 + dVar6 + local_140;
          pFVar19 = pFVar19 + 0x68;
          dStack_100 = (dVar30 * dVar37 - dVar38 * dVar35) + dVar34 * dVar36 + dVar5 + dStack_138;
          local_f8 = (dVar38 * dVar36 - dVar22 * dVar37) + dVar34 * dVar35 + dVar31 + local_130;
          *(double *)(pFVar2 + lVar20 + 0x20) = local_108;
          *(double *)(pFVar2 + lVar20 + 0x20 + 8) = dStack_100;
          *(double *)(pFVar2 + lVar20 + 0x30) = local_f8;
          *(double *)(pFVar2 + lVar20 + 0x30 + 8) = 0.0;
        }
        pcVar3 = (code *)swi(3);
        uVar14 = (*pcVar3)();
        return (bool)uVar14;
      }
    }
  }
  return false;
}

// GetBoneIndex @ 14df35270

int __thiscall FLimbSolver::GetBoneIndex(FLimbSolver *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  if ((param_1 < -1) || ((this->Links).ArrayNum <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= INDEX_NONE && Index < Links.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Rig\\Solvers\\LimbSolver.cpp"
                       ,0x60,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  uVar4 = 0;
  if (param_1 < (this->Links).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return *(int *)((this->Links).AllocatorInstance.Data + (longlong)param_1 * 0x68 + 0x1c);
}

// Initialize @ 14df44cc0

bool __thiscall FLimbSolver::Initialize(FLimbSolver *this)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  iVar7 = (this->Links).ArrayNum;
  uVar8 = 1;
  this->Length = 0.0;
  if (1 < iVar7) {
    lVar9 = 0x68;
    do {
      uVar6 = 0;
      if ((int)uVar8 < (this->Links).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar1 = (this->Links).AllocatorInstance.Data;
      uVar6 = 0;
      if ((int)(uVar8 - 1) < (this->Links).ArrayNum) {
        uVar6 = -uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar2 = (this->Links).AllocatorInstance.Data;
      uVar8 = uVar8 + 1;
      auVar10._0_8_ =
           (*(double *)(pFVar2 + lVar9 + -0x58) - *(double *)(pFVar1 + lVar9 + 0x10)) *
           (*(double *)(pFVar2 + lVar9 + -0x58) - *(double *)(pFVar1 + lVar9 + 0x10));
      auVar10._8_8_ = 0;
      auVar11._8_8_ = 0;
      auVar11._0_8_ =
           (*(double *)(pFVar2 + lVar9 + -0x60) - *(double *)(pFVar1 + lVar9 + 8)) *
           (*(double *)(pFVar2 + lVar9 + -0x60) - *(double *)(pFVar1 + lVar9 + 8)) +
           (*(double *)(pFVar2 + lVar9 + -0x68) - *(double *)(pFVar1 + lVar9)) *
           (*(double *)(pFVar2 + lVar9 + -0x68) - *(double *)(pFVar1 + lVar9)) + auVar10._0_8_;
      auVar11 = sqrtpd(auVar10,auVar11);
      *(float *)(pFVar1 + lVar9 + 0x18) = (float)auVar11._0_8_;
      lVar9 = lVar9 + 0x68;
      this->Length = (float)auVar11._0_8_ + this->Length;
      iVar7 = (this->Links).ArrayNum;
    } while ((int)uVar8 < iVar7);
  }
  return 2 < iVar7;
}

// NumLinks @ 14df4b770

int __thiscall FLimbSolver::NumLinks(FLimbSolver *this)

{
  return (this->Links).ArrayNum;
}

// OrientTransformsTowardsGoal @ 14df4bc50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FLimbSolver::OrientTransformsTowardsGoal
          (FLimbSolver *this,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1,
          TVector<double> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 auVar11 [12];
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  bool bVar17;
  undefined1 uVar18;
  TQuat<double> *pTVar19;
  int iVar20;
  TQuat<double> *__return_storage_ptr__;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  FScriptContainerElement *pFVar23;
  longlong lVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  double dVar34;
  undefined1 auVar35 [16];
  double dVar36;
  uint uVar37;
  uint uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined1 local_res8 [8];
  double local_res10;
  double local_res18;
  double local_res20;
  TQuat<double> local_188;
  TVector<double>_u_0 local_168;
  TVector<double>_u_0 local_150;
  double local_138;
  double dStack_130;
  double local_128;
  double local_120;
  double dStack_118;
  double local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double local_e0;
  
  if (((this->Links).ArrayNum < 1) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar2 = (code *)swi(3);
    uVar18 = (*pcVar2)();
    return (bool)uVar18;
  }
  iVar20 = (this->Links).ArrayNum;
  uVar21 = iVar20 - 1;
  uVar37 = *(uint *)((this->Links).AllocatorInstance.Data + 0x1c);
  uVar38 = 0;
  if ((int)uVar21 < iVar20) {
    uVar38 = ~uVar21 >> 0x1f;
  }
  if ((uVar38 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar2 = (code *)swi(3);
    uVar18 = (*pcVar2)();
    return (bool)uVar18;
  }
  uVar38 = *(uint *)((this->Links).AllocatorInstance.Data +
                    (longlong)(this->Links).ArrayNum * 0x68 + -0x4c);
  uVar21 = 0;
  if ((int)uVar37 < param_1->ArrayNum) {
    uVar21 = ~uVar37 >> 0x1f;
  }
  if ((uVar21 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar2 = (code *)swi(3);
    uVar18 = (*pcVar2)();
    return (bool)uVar18;
  }
  pFVar23 = (param_1->AllocatorInstance).Data;
  pFVar22 = pFVar23 + (longlong)(int)uVar37 * 0x60 + 0x20;
  local_138 = *(double *)pFVar22;
  dStack_130 = *(double *)(pFVar22 + 8);
  local_128 = *(double *)(pFVar23 + (longlong)(int)uVar37 * 0x60 + 0x30);
  uVar37 = 0;
  if ((int)uVar38 < param_1->ArrayNum) {
    uVar37 = ~uVar38 >> 0x1f;
  }
  if ((uVar37 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar2 = (code *)swi(3);
    uVar18 = (*pcVar2)();
    return (bool)uVar18;
  }
  dVar4 = __real_3e45798ee0000000;
  pFVar23 = (param_1->AllocatorInstance).Data;
  pFVar22 = pFVar23 + (longlong)(int)uVar38 * 0x60 + 0x20;
  local_120 = *(double *)pFVar22;
  dStack_118 = *(double *)(pFVar22 + 8);
  local_110 = *(double *)(pFVar23 + (longlong)(int)uVar38 * 0x60 + 0x30);
  local_150._s_0.X = local_120 - local_138;
  local_150._s_0.Y = dStack_118 - dStack_130;
  local_150._s_0.Z = local_110 - local_128;
  dVar33 = local_150._s_0.Y * local_150._s_0.Y + local_150._s_0.X * local_150._s_0.X +
           local_150._s_0.Z * local_150._s_0.Z;
  if (dVar33 != __real_3ff0000000000000) {
    if (__real_3e45798ee0000000 <= dVar33) {
      local_res10 = __real_3ff0000000000000 / SQRT(dVar33);
      local_150._s_0.X = local_150._s_0.X * local_res10;
      local_150._s_0.Y = local_150._s_0.Y * local_res10;
      local_150._s_0.Z = local_res10 * local_150._s_0.Z;
    }
    else {
      local_150._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_150._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_150._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    }
  }
  dVar6 = (param_2->field0_0x0)._s_0.X - local_138;
  dVar33 = (param_2->field0_0x0)._s_0.Y - dStack_130;
  dVar7 = (param_2->field0_0x0)._s_0.Z - local_128;
  dVar34 = dVar33 * dVar33 + dVar6 * dVar6 + dVar7 * dVar7;
  local_168._s_0.Y = dVar33;
  local_168._s_0.X = dVar6;
  local_168._s_0.Z = dVar7;
  if ((dVar34 != __real_3ff0000000000000) &&
     (local_168._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
     local_168._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
     local_168._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
     __real_3e45798ee0000000 <= dVar34)) {
    local_res18 = __real_3ff0000000000000 / SQRT(dVar34);
    local_168._s_0.Y = dVar33 * local_res18;
    local_168._s_0.X = dVar6 * local_res18;
    local_168._s_0.Z = dVar7 * local_res18;
  }
  if ((((local_150._s_0.X != 0.0) || (local_150._s_0.Y != 0.0)) || (local_150._s_0.Z != 0.0)) &&
     (((uVar37 = SUB84(local_150._s_0.X - local_168._s_0.X,0) &
                 (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar38 = (uint)((ulonglong)(local_150._s_0.X - local_168._s_0.X) >> 0x20) &
                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar38,uVar37) &&
       (double)CONCAT44(uVar38,uVar37) != __real_3f1a36e2e0000000 ||
       (uVar37 = SUB84(local_150._s_0.Y - local_168._s_0.Y,0) &
                 (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar38 = (uint)((ulonglong)(local_150._s_0.Y - local_168._s_0.Y) >> 0x20) &
                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar38,uVar37) &&
       (double)CONCAT44(uVar38,uVar37) != __real_3f1a36e2e0000000)) ||
      (uVar37 = SUB84(local_150._s_0.Z - local_168._s_0.Z,0) &
                (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar38 = (uint)((ulonglong)(local_150._s_0.Z - local_168._s_0.Z) >> 0x20) &
               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar38,uVar37) &&
      (double)CONCAT44(uVar38,uVar37) != __real_3f1a36e2e0000000)))) {
    __return_storage_ptr__ = &local_188;
    pTVar19 = UE::Math::TQuat<double>::FindBetweenNormals
                        (__return_storage_ptr__,(TVector<double> *)&local_150._s_0,
                         (TVector<double> *)&local_168._s_0);
    dVar34 = (double)CONCAT44(local_188.Z._4_4_,local_188.Z._0_4_);
    auVar16._8_4_ = local_188.W._0_4_;
    auVar16._0_8_ = dVar34;
    auVar16._12_4_ = local_188.W._4_4_;
    dVar7 = (double)CONCAT44(local_188.X._4_4_,local_188.X._0_4_);
    auVar15._8_4_ = local_188.Y._0_4_;
    auVar15._0_8_ = dVar7;
    auVar15._12_4_ = local_188.Y._4_4_;
    dVar33 = auVar16._8_8_ - UE::Math::TQuat<double>::Identity.W;
    dVar6 = auVar16._8_8_ + UE::Math::TQuat<double>::Identity.W;
    local_res20 = dVar4;
    uVar39 = SUB84(dVar4,0);
    uVar40 = (undefined4)((ulonglong)dVar4 >> 0x20);
    auVar25._8_4_ = uVar39;
    auVar25._0_8_ = dVar4;
    auVar25._12_4_ = uVar40;
    auVar26._8_8_ =
         -(ulonglong)
          (auVar25._8_8_ <
          (double)CONCAT44((uint)((ulonglong)dVar33 >> 0x20) & _UNK_15061cc8c,
                           SUB84(dVar33,0) & _UNK_15061cc88));
    auVar26._0_8_ =
         -(ulonglong)
          (dVar4 < (double)CONCAT44((uint)((ulonglong)(dVar34 - UE::Math::TQuat<double>::Identity.Z)
                                          >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(dVar34 - UE::Math::TQuat<double>::Identity.Z,0) &
                                    (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    iVar20 = movmskpd((int)__return_storage_ptr__,auVar26);
    dVar33 = auVar15._8_8_ - UE::Math::TQuat<double>::Identity.Y;
    auVar27._8_4_ = uVar39;
    auVar27._0_8_ = dVar4;
    auVar27._12_4_ = uVar40;
    auVar28._8_8_ =
         -(ulonglong)
          (auVar27._8_8_ <
          (double)CONCAT44((uint)((ulonglong)dVar33 >> 0x20) & _UNK_15061cc8c,
                           SUB84(dVar33,0) & _UNK_15061cc88));
    auVar28._0_8_ =
         -(ulonglong)
          (dVar4 < (double)CONCAT44((uint)((ulonglong)(dVar7 - UE::Math::TQuat<double>::Identity.X)
                                          >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(dVar7 - UE::Math::TQuat<double>::Identity.X,0) &
                                    (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    dVar33 = UE::Math::TQuat<double>::Identity.Y + auVar15._8_8_;
    uVar37 = movmskpd((int)pTVar19,auVar28);
    uVar38 = iVar20 << 2 | uVar37;
    if (uVar38 != 0) {
      auVar29._8_4_ = uVar39;
      auVar29._0_8_ = dVar4;
      auVar29._12_4_ = uVar40;
      auVar30._8_8_ =
           -(ulonglong)
            (auVar29._8_8_ <
            (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar6,0) & _UNK_15061cc88));
      auVar30._0_8_ =
           -(ulonglong)
            (dVar4 < (double)CONCAT44((uint)((ulonglong)
                                             (dVar34 + UE::Math::TQuat<double>::Identity.Z) >> 0x20)
                                      & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                      SUB84(dVar34 + UE::Math::TQuat<double>::Identity.Z,0) &
                                      (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      uVar38 = movmskpd(uVar38,auVar30);
      lVar24 = -(ulonglong)
                (dVar4 < (double)CONCAT44((uint)((ulonglong)dVar33 >> 0x20) & _UNK_15061cc8c,
                                          SUB84(dVar33,0) & _UNK_15061cc88));
      auVar9._8_4_ = (int)lVar24;
      auVar9._0_8_ = -(ulonglong)
                      (dVar4 < (double)CONCAT44((uint)((ulonglong)
                                                       (UE::Math::TQuat<double>::Identity.X + dVar7)
                                                      >> 0x20) &
                                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                                SUB84(UE::Math::TQuat<double>::Identity.X + dVar7,0)
                                                & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar9._12_4_ = (int)((ulonglong)lVar24 >> 0x20);
      iVar20 = movmskpd(uVar37,auVar9);
      if ((uVar38 & 0x3fffffff) != 0 || iVar20 != 0) {
        pFVar22 = (this->Links).AllocatorInstance.Data;
        iVar20 = (this->Links).ArrayNum;
        pFVar23 = pFVar22 + (longlong)iVar20 * 0x68;
        while( true ) {
          if ((this->Links).ArrayNum != iVar20) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<FLimbLink_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res8);
          }
          if (pFVar22 == pFVar23) {
            return true;
          }
          uVar37 = *(uint *)(pFVar22 + 0x1c);
          uVar38 = 0;
          if ((int)uVar37 < param_1->ArrayNum) {
            uVar38 = ~uVar37 >> 0x1f;
          }
          if ((uVar38 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) break;
          pFVar1 = (param_1->AllocatorInstance).Data;
          lVar24 = (longlong)(int)uVar37 * 0x60;
          dVar10 = (double)CONCAT44(local_188.W._4_4_,local_188.W._0_4_);
          auVar31._8_4_ = local_188.W._0_4_;
          auVar31._0_8_ = dVar10;
          auVar31._12_4_ = local_188.W._4_4_;
          dVar8 = (double)CONCAT44(local_188.Z._4_4_,local_188.Z._0_4_);
          dVar12 = *(double *)(pFVar1 + lVar24);
          dVar13 = *(double *)(pFVar1 + lVar24 + 8);
          dVar36 = *(double *)(pFVar1 + lVar24 + 0x10);
          dVar14 = *(double *)(pFVar1 + lVar24 + 0x10 + 8);
          dVar4 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
          auVar32._8_4_ = local_188.Z._0_4_;
          auVar32._0_8_ = dVar8;
          auVar32._12_4_ = local_188.Z._4_4_;
          dVar33 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
          dVar6 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
          dVar7 = (double)CONCAT44(local_188.X._4_4_,local_188.X._0_4_) * dVar12 *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                  auVar31._8_8_ * dVar14 +
                  (double)CONCAT44(local_188.Y._4_4_,local_188.Y._0_4_) * dVar13 *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                  auVar32._8_8_ * dVar36 *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
          dVar34 = (double)CONCAT44(local_188.X._4_4_,local_188.X._0_4_) * dVar36 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                   (double)CONCAT44(local_188.W._4_4_,local_188.W._0_4_) * dVar13 +
                   (double)CONCAT44(local_188.Y._4_4_,local_188.Y._0_4_) * dVar14 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                   (double)CONCAT44(local_188.Z._4_4_,local_188.Z._0_4_) * dVar12 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
          auVar5._8_4_ = SUB84(dVar34,0);
          auVar5._0_8_ = (double)CONCAT44(local_188.X._4_4_,local_188.X._0_4_) * dVar14 *
                         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                         dVar10 * dVar12 +
                         (double)CONCAT44(local_188.Y._4_4_,local_188.Y._0_4_) * dVar36 *
                         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                         dVar8 * dVar13 *
                         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
          auVar5._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
          *(undefined1 (*) [16])(pFVar1 + lVar24) = auVar5;
          auVar3._8_4_ = SUB84(dVar7,0);
          auVar3._0_8_ = (double)CONCAT44(local_188.X._4_4_,local_188.X._0_4_) * dVar13 * dVar4 +
                         dVar10 * dVar36 +
                         (double)CONCAT44(local_188.Y._4_4_,local_188.Y._0_4_) * dVar12 * dVar6 +
                         dVar8 * dVar14 * dVar33;
          auVar3._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
          *(undefined1 (*) [16])(pFVar1 + lVar24 + 0x10) = auVar3;
          dVar13 = (double)CONCAT44(local_188.Z._4_4_,local_188.Z._0_4_);
          dVar12 = (double)CONCAT44(local_188.Y._4_4_,local_188.Y._0_4_);
          local_e0 = *(double *)(pFVar1 + lVar24 + 0x30);
          dVar4 = *(double *)(pFVar1 + lVar24 + 0x20) - local_138;
          dVar8 = (double)CONCAT44(local_188.X._4_4_,local_188.X._0_4_);
          dVar34 = *(double *)(pFVar1 + lVar24 + 0x20 + 8) - dStack_130;
          auVar11._4_8_ = dVar36;
          auVar11._0_4_ = local_188.Z._4_4_;
          auVar35._0_8_ = auVar11._0_8_ << 0x20;
          auVar35._8_4_ = local_188.W._0_4_;
          auVar35._12_4_ = local_188.W._4_4_;
          dVar10 = local_e0 - local_128;
          dVar36 = auVar35._8_8_;
          dVar6 = dVar12 * dVar10 - dVar13 * dVar34;
          dVar6 = dVar6 + dVar6;
          dVar7 = dVar13 * dVar4 - dVar8 * dVar10;
          dVar7 = dVar7 + dVar7;
          dVar33 = dVar8 * dVar34 - dVar12 * dVar4;
          dVar33 = dVar33 + dVar33;
          local_108 = (dVar33 * dVar12 - dVar7 * dVar13) + dVar6 * dVar36 + dVar4 + local_138;
          pFVar22 = pFVar22 + 0x68;
          dStack_100 = (dVar6 * dVar13 - dVar33 * dVar8) + dVar7 * dVar36 + dVar34 + dStack_130;
          local_f8 = (dVar7 * dVar8 - dVar6 * dVar12) + dVar33 * dVar36 + dVar10 + local_128;
          *(double *)(pFVar1 + lVar24 + 0x20) = local_108;
          *(double *)(pFVar1 + lVar24 + 0x20 + 8) = dStack_100;
          *(double *)(pFVar1 + lVar24 + 0x30) = local_f8;
          *(double *)(pFVar1 + lVar24 + 0x30 + 8) = 0.0;
        }
        pcVar2 = (code *)swi(3);
        uVar18 = (*pcVar2)();
        return (bool)uVar18;
      }
    }
  }
  return false;
}

// Reset @ 14df4edb0

void __thiscall FLimbSolver::Reset(FLimbSolver *this)

{
  int *piVar1;
  
  this->Length = 0.0;
  piVar1 = &(this->Links).ArrayMax;
  (this->Links).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,0,&(this->Links).AllocatorInstance,0,piVar1);
  }
  return;
}

// Solve @ 14df56340

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FLimbSolver::Solve(FLimbSolver *this,
                  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1,
                  TVector<double> *param_2,TQuat<double> *param_3,FLimbSolverSettings *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  bool bVar14;
  bool bVar15;
  undefined1 uVar16;
  bool bVar17;
  bool bVar18;
  uint uVar19;
  uint uVar20;
  TVector<double> *pTVar21;
  undefined7 extraout_var;
  int iVar22;
  uint uVar23;
  uint uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  FScriptContainerElement *pFVar27;
  longlong lVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  TTransform<double> local_e8;
  TVector<double> local_88 [3];
  
  bVar14 = OrientTransformsTowardsGoal(this,param_1,param_2);
  uVar25 = 0;
  uVar20 = 0;
  uVar26 = uVar25;
  if (0 < (this->Links).ArrayNum) {
    do {
      uVar24 = (uint)uVar25;
      uVar23 = uVar20;
      if ((int)uVar24 < (this->Links).ArrayNum) {
        uVar23 = ~uVar24 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar6 = (code *)swi(3);
        uVar16 = (*pcVar6)();
        return (bool)uVar16;
      }
      uVar23 = *(uint *)((this->Links).AllocatorInstance.Data + uVar26 + 0x1c);
      uVar19 = uVar20;
      if ((int)uVar23 < param_1->ArrayNum) {
        uVar19 = ~uVar23 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar6 = (code *)swi(3);
        uVar16 = (*pcVar6)();
        return (bool)uVar16;
      }
      pFVar27 = (param_1->AllocatorInstance).Data;
      uVar4 = *(undefined8 *)(pFVar27 + (longlong)(int)uVar23 * 0x60 + 0x30);
      pFVar27 = pFVar27 + (longlong)(int)uVar23 * 0x60 + 0x20;
      uVar12 = *(undefined8 *)pFVar27;
      uVar13 = *(undefined8 *)(pFVar27 + 8);
      uVar23 = uVar20;
      if ((int)uVar24 < (this->Links).ArrayNum) {
        uVar23 = ~uVar24 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar6 = (code *)swi(3);
        uVar16 = (*pcVar6)();
        return (bool)uVar16;
      }
      pFVar5 = (this->Links).AllocatorInstance.Data;
      uVar25 = (ulonglong)(uVar24 + 1);
      pFVar27 = pFVar5 + uVar26;
      *(undefined8 *)pFVar27 = uVar12;
      *(undefined8 *)(pFVar27 + 8) = uVar13;
      *(undefined8 *)(pFVar5 + uVar26 + 0x10) = uVar4;
      uVar26 = uVar26 + 0x68;
    } while ((int)(uVar24 + 1) < (this->Links).ArrayNum);
  }
  fVar1 = param_4->PullDistribution;
  bVar15 = param_4->bAveragePull;
  fVar2 = param_4->ReachStepAlpha;
  fVar3 = param_4->MinRotationAngle;
  bVar18 = param_4->bEnableLimit;
  if (((this->Links).ArrayNum < 1) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar6 = (code *)swi(3);
    uVar16 = (*pcVar6)();
    return (bool)uVar16;
  }
  uVar20 = *(uint *)((this->Links).AllocatorInstance.Data + 0x1c);
  uVar24 = 0;
  uVar23 = uVar24;
  if ((int)uVar20 < param_1->ArrayNum) {
    uVar23 = ~uVar20 >> 0x1f;
  }
  if ((uVar23 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar6 = (code *)swi(3);
    uVar16 = (*pcVar6)();
    return (bool)uVar16;
  }
  pTVar21 = UE::Math::TTransform<double>::GetUnitAxis
                      ((TTransform<double> *)
                       ((param_1->AllocatorInstance).Data + (longlong)(int)uVar20 * 0x60),local_88,
                       (uint)(param_4->HingeRotationAxis).Value);
  bVar15 = AnimationCore::SolveLimb
                     (&this->Links,this->Length,param_2,param_4->ReachPrecision,
                      param_4->MaxIterations,pTVar21,bVar18,fVar3,fVar2,bVar15,fVar1);
  if (param_4->bEnableTwistCorrection == false) {
    bVar18 = false;
  }
  else {
    local_e8.Rotation.ZW.m128d_f64[0] = param_3->Z;
    local_e8.Rotation.ZW.m128d_f64[1] = param_3->W;
    local_e8.Rotation.XY.m128d_f64[0] = param_3->X;
    local_e8.Rotation.XY.m128d_f64[1] = param_3->Y;
    local_e8.Translation.XY.m128d_f64[0] = (param_2->field0_0x0)._s_0.X;
    local_e8.Translation.XY.m128d_f64[1] = (param_2->field0_0x0)._s_0.Y;
    local_e8.Translation.ZW.m128d_f64[0] = (param_2->field0_0x0)._s_0.Z;
    local_e8.Translation.ZW.m128d_f64[1] = 0.0;
    local_e8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
    local_e8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
    local_e8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
    local_e8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
    bVar18 = AdjustKneeTwist(this,param_1,&local_e8,(uint)(param_4->EndBoneForwardAxis).Value);
  }
  if (((bVar14) || (bVar15)) || (bVar14 = false, bVar18 != false)) {
    bVar14 = true;
  }
  iVar22 = (this->Links).ArrayNum;
  uVar23 = iVar22 - 1;
  uVar20 = uVar24;
  if ((int)uVar23 < iVar22) {
    uVar20 = ~uVar23 >> 0x1f;
  }
  if (uVar20 == 0) {
    uVar23 = 0x506109c0;
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar15) {
      pcVar6 = (code *)swi(3);
      uVar16 = (*pcVar6)();
      return (bool)uVar16;
    }
  }
  uVar20 = *(uint *)((this->Links).AllocatorInstance.Data +
                    (longlong)(this->Links).ArrayNum * 0x68 + -0x4c);
  iVar22 = param_1->ArrayNum;
  uVar19 = ~uVar20 >> 0x1f;
  if ((int)uVar20 < iVar22) {
    uVar24 = uVar19;
  }
  if (uVar24 == 0) {
    iVar22 = 0x506106c8;
    uVar23 = 0x506109c0;
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    uVar19 = (uint)CONCAT71(extraout_var,bVar15);
    if (bVar15) {
      pcVar6 = (code *)swi(3);
      uVar16 = (*pcVar6)();
      return (bool)uVar16;
    }
  }
  pFVar27 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar20 * 0x60;
  if (bVar14) {
LAB_14df567a5:
    dVar8 = param_3->Y;
    dVar9 = param_3->Z;
    dVar10 = param_3->W;
    *(double *)pFVar27 = param_3->X;
    *(double *)(pFVar27 + 8) = dVar8;
    *(double *)(pFVar27 + 0x10) = dVar9;
    *(double *)(pFVar27 + 0x18) = dVar10;
    UpdateTransforms(this,param_1);
    bVar14 = true;
  }
  else {
    dVar35 = *(double *)(pFVar27 + 0x10) - param_3->Z;
    dVar36 = *(double *)(pFVar27 + 0x18) - param_3->W;
    dVar37 = *(double *)pFVar27 - param_3->X;
    dVar38 = *(double *)(pFVar27 + 8) - param_3->Y;
    dVar8 = *(double *)pFVar27 + param_3->X;
    dVar9 = *(double *)(pFVar27 + 8) + param_3->Y;
    dVar10 = *(double *)(pFVar27 + 0x10) + param_3->Z;
    dVar11 = *(double *)(pFVar27 + 0x18) + param_3->W;
    uVar39 = SUB84(__real_3f1a36e2e0000000,0);
    uVar40 = (undefined4)((ulonglong)__real_3f1a36e2e0000000 >> 0x20);
    auVar29._8_4_ = uVar39;
    auVar29._0_8_ = __real_3f1a36e2e0000000;
    auVar29._12_4_ = uVar40;
    auVar30._8_8_ =
         -(ulonglong)
          (auVar29._8_8_ <
          (double)CONCAT44((uint)((ulonglong)dVar36 >> 0x20) & _UNK_15061cc8c,
                           SUB84(dVar36,0) & _UNK_15061cc88));
    auVar30._0_8_ =
         -(ulonglong)
          (__real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)dVar35 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar35,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    iVar22 = movmskpd(iVar22,auVar30);
    auVar31._8_4_ = uVar39;
    auVar31._0_8_ = __real_3f1a36e2e0000000;
    auVar31._12_4_ = uVar40;
    auVar32._8_8_ =
         -(ulonglong)
          (auVar31._8_8_ <
          (double)CONCAT44((uint)((ulonglong)dVar38 >> 0x20) & _UNK_15061cc8c,
                           SUB84(dVar38,0) & _UNK_15061cc88));
    auVar32._0_8_ =
         -(ulonglong)
          (__real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)dVar37 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar37,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    uVar20 = movmskpd(uVar19,auVar32);
    uVar20 = iVar22 << 2 | uVar20;
    if (uVar20 != 0) {
      auVar33._8_4_ = uVar39;
      auVar33._0_8_ = __real_3f1a36e2e0000000;
      auVar33._12_4_ = uVar40;
      auVar34._8_8_ =
           -(ulonglong)
            (auVar33._8_8_ <
            (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar11,0) & _UNK_15061cc88));
      auVar34._0_8_ =
           -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar10,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      uVar23 = movmskpd(uVar23,auVar34);
      lVar28 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar9,0) & _UNK_15061cc88));
      auVar7._8_4_ = (int)lVar28;
      auVar7._0_8_ = -(ulonglong)
                      (__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff
                                      ));
      auVar7._12_4_ = (int)((ulonglong)lVar28 >> 0x20);
      iVar22 = movmskpd(uVar20,auVar7);
      if ((uVar23 & 0x3fffffff) != 0 || iVar22 != 0) goto LAB_14df567a5;
    }
    bVar14 = false;
  }
  return bVar14;
}

// UpdateTransforms @ 14df5f320

void __thiscall
FLimbSolver::UpdateTransforms
          (FLimbSolver *this,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined8 uVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined8 uVar17;
  double dVar18;
  double dVar19;
  bool bVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  FScriptContainerElement *pFVar24;
  uint uVar25;
  longlong lVar26;
  TVector<double>_u_0 local_138;
  TVector<double>_u_0 local_120;
  TQuat<double> local_108;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  
  dVar19 = __real_3e45798ee0000000;
  dVar18 = __real_3ff0000000000000;
  uVar25 = 1;
  if (1 < (this->Links).ArrayNum) {
    lVar26 = 0x68;
    do {
      uVar21 = 0;
      if ((int)uVar25 < (this->Links).ArrayNum) {
        uVar21 = ~uVar25 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar21 = *(uint *)((this->Links).AllocatorInstance.Data + lVar26 + 0x1c);
      uVar22 = 0;
      if ((int)uVar21 < param_1->ArrayNum) {
        uVar22 = ~uVar21 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar3 = (param_1->AllocatorInstance).Data;
      uVar22 = 0;
      if ((int)uVar25 < (this->Links).ArrayNum) {
        uVar22 = ~uVar25 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (this->Links).AllocatorInstance.Data;
      uVar22 = 0;
      if ((int)(uVar25 - 1) < (this->Links).ArrayNum) {
        uVar22 = -uVar25 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar22 = *(uint *)((this->Links).AllocatorInstance.Data + lVar26 + -0x4c);
      uVar23 = 0;
      if ((int)uVar22 < param_1->ArrayNum) {
        uVar23 = ~uVar22 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar24 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar22 * 0x60;
      uVar22 = 0;
      if ((int)(uVar25 - 1) < (this->Links).ArrayNum) {
        uVar22 = -uVar25 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_e8 = *(double *)(pFVar3 + (longlong)(int)uVar21 * 0x60 + 0x20);
      dStack_e0 = *(double *)(pFVar3 + (longlong)(int)uVar21 * 0x60 + 0x28);
      local_d0 = *(double *)&pFVar24[0x20].field_0x0;
      dStack_c8 = *(double *)(pFVar24 + 0x28);
      local_d8 = *(double *)(pFVar3 + (longlong)(int)uVar21 * 0x60 + 0x30);
      local_120._s_0.X = local_e8 - local_d0;
      local_c0 = *(double *)&pFVar24[0x30].field_0x0;
      pFVar3 = (this->Links).AllocatorInstance.Data;
      local_120._s_0.Y = dStack_e0 - dStack_c8;
      local_120._s_0.Z = local_d8 - local_c0;
      dVar9 = local_120._s_0.Y * local_120._s_0.Y + local_120._s_0.X * local_120._s_0.X +
              local_120._s_0.Z * local_120._s_0.Z;
      if (dVar9 != dVar18) {
        if (dVar19 <= dVar9) {
          dVar9 = dVar18 / SQRT(dVar9);
          local_120._s_0.X = local_120._s_0.X * dVar9;
          local_120._s_0.Y = local_120._s_0.Y * dVar9;
          local_120._s_0.Z = local_120._s_0.Z * dVar9;
        }
        else {
          local_120._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          local_120._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_120._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        }
      }
      local_138._s_0.X = *(double *)(pFVar4 + lVar26) - *(double *)(pFVar3 + lVar26 + -0x68);
      local_138._s_0.Y = *(double *)(pFVar4 + lVar26 + 8) - *(double *)(pFVar3 + lVar26 + -0x60);
      local_138._s_0.Z = *(double *)(pFVar4 + lVar26 + 0x10) - *(double *)(pFVar3 + lVar26 + -0x58);
      dVar9 = local_138._s_0.Y * local_138._s_0.Y + local_138._s_0.X * local_138._s_0.X +
              local_138._s_0.Z * local_138._s_0.Z;
      if (dVar9 != dVar18) {
        if (dVar19 <= dVar9) {
          dVar9 = dVar18 / SQRT(dVar9);
          local_138._s_0.X = local_138._s_0.X * dVar9;
          local_138._s_0.Y = local_138._s_0.Y * dVar9;
          local_138._s_0.Z = local_138._s_0.Z * dVar9;
        }
        else {
          local_138._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          local_138._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_138._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        }
      }
      UE::Math::TQuat<double>::FindBetweenNormals
                (&local_108,(TVector<double> *)&local_120._s_0,(TVector<double> *)&local_138._s_0);
      dVar13 = *(double *)&pFVar24->field_0x0;
      dVar14 = *(double *)(pFVar24 + 8);
      uVar25 = uVar25 + 1;
      dVar15 = *(double *)&pFVar24[0x10].field_0x0;
      dVar16 = *(double *)(pFVar24 + 0x18);
      lVar26 = lVar26 + 0x68;
      dVar9 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
      dVar6 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      dVar7 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
      dVar12 = dVar15 * local_108.X *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
               dVar14 * local_108.W +
               dVar16 * local_108.Y *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
               local_108.Z * dVar13 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      dVar10 = local_108.X * dVar13 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
               dVar16 * local_108.W +
               dVar14 * local_108.Y *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
               dVar15 * local_108.Z *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      auVar11._8_4_ = SUB84(dVar12,0);
      auVar11._0_8_ =
           dVar16 * local_108.X * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           dVar13 * local_108.W +
           dVar15 * local_108.Y * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           local_108.Z * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      auVar11._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
      *(undefined1 (*) [16])pFVar24 = auVar11;
      auVar8._8_4_ = SUB84(dVar10,0);
      auVar8._0_8_ = local_108.X * dVar14 * dVar9 + dVar15 * local_108.W +
                     dVar13 * local_108.Y * dVar7 + dVar16 * local_108.Z * dVar6;
      auVar8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      *(undefined1 (*) [16])(pFVar24 + 0x10) = auVar8;
      iVar2 = (this->Links).ArrayNum;
    } while ((int)uVar25 < iVar2);
    uVar25 = 1;
    if (1 < iVar2) {
      lVar26 = 0x68;
      do {
        uVar21 = 0;
        if ((int)uVar25 < (this->Links).ArrayNum) {
          uVar21 = ~uVar25 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar21 = *(uint *)((this->Links).AllocatorInstance.Data + lVar26 + 0x1c);
        uVar22 = 0;
        if ((int)uVar21 < param_1->ArrayNum) {
          uVar22 = ~uVar21 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar3 = (param_1->AllocatorInstance).Data;
        uVar22 = 0;
        if ((int)uVar25 < (this->Links).ArrayNum) {
          uVar22 = ~uVar25 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar24 = (this->Links).AllocatorInstance.Data;
        uVar25 = uVar25 + 1;
        pFVar4 = pFVar24 + lVar26;
        uVar17 = *(undefined8 *)(pFVar4 + 8);
        uVar1 = *(undefined8 *)(pFVar24 + lVar26 + 0x10);
        lVar26 = lVar26 + 0x68;
        *(undefined8 *)(pFVar3 + (longlong)(int)uVar21 * 0x60 + 0x20) = *(undefined8 *)pFVar4;
        *(undefined8 *)(pFVar3 + (longlong)(int)uVar21 * 0x60 + 0x28) = uVar17;
        *(undefined8 *)(pFVar3 + (longlong)(int)uVar21 * 0x60 + 0x30) = uVar1;
        *(undefined8 *)(pFVar3 + (longlong)(int)uVar21 * 0x60 + 0x38) = 0;
      } while ((int)uVar25 < (this->Links).ArrayNum);
    }
  }
  return;
}

