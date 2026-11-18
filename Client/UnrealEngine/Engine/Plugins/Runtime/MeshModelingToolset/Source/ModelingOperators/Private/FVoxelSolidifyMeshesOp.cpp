// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 3

// operator() @ 14c953860

TVector<double> * __thiscall
`UE::Geometry::FVoxelSolidifyMeshesOp::CalculateResult'::__l10::<lambda_1>::operator()
          (void *this,TVector<double> *__return_storage_ptr__,int param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  TVector<double> *pTVar6;
  TVector<double>_u_0 local_38;
  TVector<double> local_20;
  
  local_38._s_0.X = (param_2->field0_0x0)._s_0.X * *(double *)((longlong)this + 0x38);
  local_38._s_0.Y = *(double *)((longlong)this + 0x40) * (param_2->field0_0x0)._s_0.Y;
  local_38._s_0.Z = *(double *)((longlong)this + 0x48) * (param_2->field0_0x0)._s_0.Z;
  pTVar6 = UE::Geometry::operator*<double>(&local_20,this,(TVector<double> *)&local_38._s_0);
  dVar1 = *(double *)((longlong)this + 0x28);
  dVar2 = (pTVar6->field0_0x0)._s_0.Y;
  dVar3 = *(double *)((longlong)this + 0x58);
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (*(double *)((longlong)this + 0x20) + (pTVar6->field0_0x0)._s_0.X) -
       *(double *)((longlong)this + 0x50);
  dVar4 = *(double *)((longlong)this + 0x30);
  dVar5 = (pTVar6->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (dVar1 + dVar2) - dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (dVar4 + dVar5) - *(double *)((longlong)this + 0x60)
  ;
  return __return_storage_ptr__;
}

// CalculateResult @ 14c970dd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Geometry::FVoxelSolidifyMeshesOp::CalculateResult
          (FVoxelSolidifyMeshesOp *this,FProgressCancel *param_1)

{
  double dVar1;
  short sVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  FDynamicMesh3 *this_00;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  bool bVar25;
  bool bVar26;
  int iVar27;
  TArrayView<UE::Geometry::TTransformSRT3<double>_const_,int> *pTVar28;
  TAxisAlignedBox3<double> *pTVar29;
  ulonglong uVar30;
  FMeshShapeGenerator *pFVar31;
  longlong *plVar32;
  undefined ***pppuVar33;
  uint uVar34;
  uint uVar35;
  TArray<UE::Geometry::TTransformSRT3<double>,TSizedDefaultAllocator<32>_> *pTVar36;
  ulonglong uVar37;
  uint uVar38;
  ulonglong uVar39;
  double dVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined8 uVar44;
  undefined1 extraout_XMM0 [16];
  undefined1 auVar43 [16];
  undefined1 extraout_XMM0_00 [16];
  double dVar45;
  undefined8 uVar48;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  double dVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined1 auStackY_cc8 [32];
  FProgressCancel *local_c98;
  FDynamicMeshEditor local_c90;
  FVoxelSolidifyMeshesOp *local_c88;
  TVector<double>_u_0 local_c80;
  TFastWindingTree<UE::Geometry::FDynamicMesh3> local_c68;
  TArrayView<UE::Geometry::TTransformSRT3<double>_const_,int> local_c28;
  code *local_c18 [5];
  undefined8 *local_bf0;
  undefined8 local_be8;
  undefined8 uStack_be0;
  longlong local_bd8;
  longlong lStack_bd0;
  double local_bc8;
  double dStack_bc0;
  undefined1 auStack_bb8 [16];
  undefined1 auStack_ba8 [16];
  undefined8 local_b98;
  undefined8 uStack_b90;
  undefined8 local_b88;
  undefined8 uStack_b80;
  undefined8 local_b78;
  undefined8 uStack_b70;
  undefined1 local_b68 [16];
  undefined1 local_b58 [16];
  double local_b48;
  double dStack_b40;
  double local_b38;
  TArrayView<UE::Geometry::TTransformSRT3<double>_const_,int> local_b30;
  TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)> local_b18;
  undefined8 local_ae8;
  undefined8 uStack_ae0;
  undefined8 local_ad8;
  undefined8 uStack_ad0;
  undefined8 local_ac8;
  undefined8 uStack_ac0;
  undefined1 local_ab8 [16];
  undefined1 local_aa8 [16];
  TAxisAlignedBox3<double> local_a98;
  FDynamicMesh3 local_a68;
  code *local_838;
  undefined8 uStack_830;
  undefined **local_828;
  code *pcStack_820;
  undefined8 local_818;
  undefined ***pppuStack_810;
  undefined1 local_808 [64];
  void *local_7c8;
  undefined4 local_7c0;
  undefined1 local_7b8 [64];
  void *local_778;
  undefined4 local_770;
  undefined2 local_768;
  undefined1 local_760 [64];
  void *local_720;
  undefined4 local_718;
  undefined1 local_710 [64];
  void *local_6d0;
  undefined4 local_6c8;
  undefined2 local_6c0;
  undefined1 local_6b8 [64];
  void *local_678;
  undefined4 local_670;
  undefined1 local_668 [64];
  void *local_628;
  undefined4 local_620;
  undefined2 local_618;
  undefined1 local_610 [64];
  void *local_5d0;
  undefined4 local_5c8;
  undefined1 local_5c0 [64];
  void *local_580;
  undefined4 local_578;
  undefined2 local_570;
  ForAnyElementType local_568;
  undefined8 local_560;
  ForAnyElementType local_558;
  undefined8 local_550;
  undefined1 local_548 [64];
  double local_508;
  undefined2 local_500;
  ForAnyElementType local_4f8;
  int local_4f0;
  undefined1 local_4e8 [128];
  undefined **local_468;
  FProgressCancel **ppFStack_460;
  undefined8 local_458;
  undefined ***pppuStack_450;
  FMarchingCubes local_448;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> local_198;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_cc8;
  local_c98 = param_1;
  local_c88 = this;
  if ((param_1 == (FProgressCancel *)0x0) || (bVar25 = FProgressCancel::Cancelled(param_1), !bVar25)
     ) {
    if ((this->Transforms).ArrayNum == (this->Meshes).ArrayNum) {
      FDynamicMesh3::FDynamicMesh3(&local_a68);
      pTVar36 = &this->Transforms;
      pTVar28 = TArrayView<UE::Geometry::TTransformSRT3<double>_const_,int>::
                TArrayView<UE::Geometry::TTransformSRT3<double>_const_,int><TArray<UE::Geometry::TTransformSRT3<double>,TSizedDefaultAllocator<32>_>_&,TArray<UE::Geometry::TTransformSRT3<double>,TSizedDefaultAllocator<32>_>_>
                          (&local_b30,pTVar36);
      local_c28.DataPtr = pTVar28->DataPtr;
      local_c28.ArrayNum = pTVar28->ArrayNum;
      local_c28._12_4_ = *(undefined4 *)&pTVar28->field_0xc;
      FVoxelBaseOp::GetAverageTranslation<UE::Geometry::TTransformSRT3<double>_>
                ((TVector<double> *)&local_c80._s_0,&local_c28);
      uVar44 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
      uVar20 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
      lStack_bd0 = _UNK_15061cbc8;
      local_bd8 = ___xmm_3ff00000000000000000000000000000;
      local_c90.Mesh = &local_a68;
      uVar37 = 0;
      auStack_bb8._8_4_ = SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0);
      auStack_bb8._12_4_ =
           (undefined4)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >> 0x20);
      auVar11._4_8_ = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
      auVar11._0_4_ = auStack_bb8._4_4_;
      auVar41._0_8_ = auVar11._0_8_ << 0x20;
      auVar41._8_4_ = auStack_bb8._8_4_;
      auVar41._12_4_ = auStack_bb8._12_4_;
      this->_padding_ = 0;
      this->_padding_ = 0;
      auVar42._8_8_ = auVar41._8_8_;
      auVar42._0_8_ = local_c80._s_0.Z;
      this->_padding_ = local_bd8;
      this->_padding_ = lStack_bd0;
      auVar47._8_8_ = uVar44;
      auVar47._0_8_ = (double)uVar20;
      this->_padding_ = (longlong)local_c80._s_0.X;
      this->_padding_ = (longlong)local_c80._s_0.Y;
      this->_padding_ = local_c80._16_8_;
      this->_padding_ = auVar42._8_8_;
      this->_padding_ = uVar20;
      uVar21 = _UNK_150631d98;
      uVar20 = ___xmm_00000000ffffffff0000008000000000;
      this->_padding_ = uVar44;
      local_be8 = 0;
      uStack_be0 = 0;
      local_bc8 = local_c80._s_0.X;
      dStack_bc0 = local_c80._s_0.Y;
      uVar30 = uVar37;
      uVar39 = uVar37;
      auStack_bb8 = auVar42;
      auStack_ba8 = auVar47;
      if (0 < (this->Meshes).ArrayNum) {
        do {
          uVar44 = auVar42._8_8_;
          uVar48 = auVar47._8_8_;
          uVar38 = (uint)uVar39;
          uVar34 = ~uVar38 >> 0x1f;
          uVar35 = 0;
          if ((int)uVar38 < (this->Transforms).ArrayNum) {
            uVar35 = uVar34;
          }
          if (uVar35 == 0) {
            bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            uVar44 = extraout_XMM0._8_8_;
            uVar48 = auVar47._8_8_;
            if (bVar25) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          uVar24 = local_c80._s_0.Z;
          uVar23 = local_c80._s_0.Y;
          uVar22 = local_c80._s_0.X;
          pFVar3 = (pTVar36->AllocatorInstance).Data;
          auVar42 = *(undefined1 (*) [16])(pFVar3 + uVar30 + 0x40);
          auVar41 = *(undefined1 (*) [16])(pFVar3 + uVar30 + 0x30);
          uVar14 = *(undefined8 *)(pFVar3 + uVar30);
          uVar15 = *(undefined8 *)(pFVar3 + uVar30 + 8);
          uVar16 = *(undefined8 *)(pFVar3 + uVar30 + 0x10);
          uVar17 = *(undefined8 *)(pFVar3 + uVar30 + 0x10 + 8);
          uVar18 = *(undefined8 *)(pFVar3 + uVar30 + 0x20);
          uVar19 = *(undefined8 *)(pFVar3 + uVar30 + 0x20 + 8);
          local_808._0_8_ = 0;
          auVar12._4_8_ = uVar48;
          auVar12._0_4_ = auVar41._4_4_;
          auVar46._0_8_ = auVar12._0_8_ << 0x20;
          auVar46._8_4_ = auVar41._8_4_;
          auVar46._12_4_ = auVar41._12_4_;
          auVar13._4_8_ = uVar44;
          auVar13._0_4_ = auVar42._4_4_;
          auVar43._0_8_ = auVar13._0_8_ << 0x20;
          auVar43._8_4_ = auVar42._8_4_;
          auVar43._12_4_ = auVar42._12_4_;
          local_808._8_8_ = 0;
          auVar47._0_8_ = auVar46._8_8_ * auVar42._0_8_ * auVar43._8_8_;
          auVar47._8_8_ = auVar41._8_8_;
          local_808._32_8_ = 0;
          local_808._40_4_ = 0;
          bVar25 = auVar47._0_8_ < 0.0;
          local_808._44_4_ = 0x80;
          local_808._48_4_ = 0xffffffff;
          local_808._52_4_ = 0;
          local_7c8 = (void *)0x0;
          local_7c0 = 0;
          local_7b8._0_8_ = 0;
          local_7b8._8_8_ = 0;
          local_7b8._32_8_ = 0;
          local_7b8._40_4_ = 0;
          local_7b8._44_4_ = 0x80;
          local_7b8._48_4_ = 0xffffffff;
          local_7b8._52_4_ = 0;
          local_778 = (void *)0x0;
          local_770 = 0;
          local_768._0_1_ = true;
          local_768._1_1_ = true;
          local_760._0_8_ = 0;
          local_760._8_8_ = 0;
          local_760._32_8_ = 0;
          local_760._40_8_ = uVar20;
          local_760._48_8_ = uVar21;
          local_720 = (void *)0x0;
          local_718 = 0;
          local_710._0_8_ = 0;
          local_710._8_8_ = 0;
          local_710._32_8_ = 0;
          local_710._40_8_ = uVar20;
          local_710._48_8_ = uVar21;
          local_6d0 = (void *)0x0;
          local_6c8 = 0;
          local_6c0._0_1_ = true;
          local_6c0._1_1_ = true;
          local_6b8._0_8_ = 0;
          local_6b8._8_8_ = 0;
          local_6b8._32_8_ = 0;
          local_6b8._40_4_ = 0;
          local_6b8._44_4_ = 0x80;
          local_6b8._48_4_ = 0xffffffff;
          local_6b8._52_4_ = 0;
          local_678 = (void *)0x0;
          local_670 = 0;
          local_668._0_8_ = 0;
          local_668._8_8_ = 0;
          local_668._32_8_ = 0;
          local_668._40_4_ = 0;
          local_668._44_4_ = 0x80;
          local_668._48_4_ = 0xffffffff;
          local_668._52_4_ = 0;
          local_628 = (void *)0x0;
          local_620 = 0;
          local_618._0_1_ = true;
          local_618._1_1_ = true;
          local_610._0_8_ = 0;
          local_610._8_8_ = 0;
          local_610._32_8_ = 0;
          local_610._40_8_ = uVar20;
          local_610._48_8_ = uVar21;
          local_5d0 = (void *)0x0;
          local_5c8 = 0;
          local_5c0._0_8_ = 0;
          local_5c0._8_8_ = 0;
          local_5c0._32_8_ = 0;
          local_5c0._40_8_ = uVar20;
          local_5c0._48_8_ = uVar21;
          local_580 = (void *)0x0;
          local_b48 = local_c80._s_0.X;
          dStack_b40 = local_c80._s_0.Y;
          local_578 = 0;
          local_570._0_1_ = true;
          local_570._1_1_ = true;
          local_568.Data = (FScriptContainerElement *)0x0;
          local_560._0_4_ = 0;
          local_560._4_4_ = 0;
          local_558.Data = (FScriptContainerElement *)0x0;
          local_550._0_4_ = 0;
          local_550._4_4_ = 0;
          local_b18._0_8_ = 0;
          local_b18._40_8_ = 0;
          local_c18[0] = (code *)0x0;
          local_bf0 = (undefined8 *)0x0;
          local_b38 = local_c80._s_0.Z;
          local_b98 = uVar14;
          uStack_b90 = uVar15;
          local_b88 = uVar16;
          uStack_b80 = uVar17;
          local_b78 = uVar18;
          uStack_b70 = uVar19;
          local_b68 = auVar41;
          local_b58 = auVar42;
          local_ae8 = uVar14;
          uStack_ae0 = uVar15;
          local_ad8 = uVar16;
          uStack_ad0 = uVar17;
          local_ac8 = uVar18;
          uStack_ac0 = uVar19;
          local_ab8 = auVar41;
          local_aa8 = auVar42;
          local_bf0 = FMemory::Malloc(0x70,8);
          local_bf0[1] = uVar14;
          local_bf0[2] = uVar15;
          local_bf0[3] = uVar16;
          local_bf0[4] = uVar17;
          *local_bf0 = &Core::Private::Function::
                        TFunction_OwnedObject<`UE::Geometry::FVoxelSolidifyMeshesOp::CalculateResult'::`10'::<lambda_1>,0,1>
                        ::_vftable_;
          local_bf0[5] = uVar18;
          local_bf0[6] = uVar19;
          *(undefined1 (*) [16])(local_bf0 + 7) = auVar41;
          *(undefined1 (*) [16])(local_bf0 + 9) = auVar42;
          local_bf0[0xb] = uVar22;
          local_bf0[0xc] = uVar23;
          local_bf0[0xd] = uVar24;
          if (local_bf0 != (undefined8 *)&DAT_fffffffffffffff8) {
            local_c18[0] = Core::Private::Function::
                           TFunctionRefCaller<`UE::Geometry::FVoxelSolidifyMeshesOp::CalculateResult'::__l10::<lambda_1>,UE::Math::TVector<double>,int,UE::Math::TVector<double>_const_&>
                           ::Call;
          }
          uVar35 = 0;
          if ((int)uVar38 < (this->Meshes).ArrayNum) {
            uVar35 = uVar34;
          }
          if ((uVar35 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          FDynamicMeshEditor::AppendMesh
                    (&local_c90,*(FDynamicMesh3 **)((this->Meshes).AllocatorInstance.Data + uVar37),
                     (FMeshIndexMappings *)local_808,
                     (TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)>
                      *)local_c18,&local_b18,false);
          if (bVar25) {
            uVar35 = 0;
            if ((int)uVar38 < (this->Meshes).ArrayNum) {
              uVar35 = uVar34;
            }
            if ((uVar35 == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar3 = (this->Meshes).AllocatorInstance.Data;
            if ((*(longlong *)(pFVar3 + uVar37) == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar25)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            lVar4 = *(longlong *)(pFVar3 + uVar37);
            uVar35 = 0;
            uVar34 = *(int *)(lVar4 + 0x144) + *(int *)(lVar4 + 0x140) * 0x200;
            if ((uVar34 == 0) ||
               ((ushort)(*(short *)**(undefined8 **)(lVar4 + 0x148) - 1U) < 0xfffe)) {
LAB_14c97149c:
              bVar25 = uVar35 == uVar34;
            }
            else {
              uVar35 = 1;
              bVar25 = uVar34 == 1;
              if (1 < (int)uVar34) {
                do {
                  sVar2 = *(short *)((*(undefined8 **)(lVar4 + 0x148))[uVar35 >> 9] +
                                    (ulonglong)(uVar35 & 0x1ff) * 2);
                  this = local_c88;
                  if ((sVar2 != 0) && (sVar2 != -1)) break;
                  uVar35 = uVar35 + 1;
                } while ((int)uVar35 < (int)uVar34);
                goto LAB_14c97149c;
              }
            }
            if (!bVar25) {
LAB_14c9714a0:
              do {
                iVar27 = TIndexMap<int>::GetTo((TIndexMap<int> *)local_760,uVar35);
                FDynamicMesh3::ReverseTriOrientation(&local_a68,iVar27);
                uVar35 = uVar35 + 1;
                if ((int)uVar35 < (int)uVar34) {
                  do {
                    lVar5 = *(longlong *)
                             (*(longlong *)(lVar4 + 0x148) + (ulonglong)(uVar35 >> 9) * 8);
                    if ((*(short *)(lVar5 + (ulonglong)(uVar35 & 0x1ff) * 2) != 0) &&
                       (*(short *)(lVar5 + (ulonglong)(uVar35 & 0x1ff) * 2) != -1))
                    goto LAB_14c9714a0;
                    uVar35 = uVar35 + 1;
                  } while ((int)uVar35 < (int)uVar34);
                }
              } while (uVar35 != uVar34);
            }
          }
          DestructItems<UE::Geometry::TIndexMap<int>,int>
                    ((TIndexMap<int> *)local_558.Data,(int)local_550);
          if ((TIndexMap<int> *)local_558.Data != (TIndexMap<int> *)0x0) {
            FMemory::Free(local_558.Data);
          }
          DestructItems<UE::Geometry::TIndexMap<int>,int>
                    ((TIndexMap<int> *)local_568.Data,(int)local_560);
          if ((TIndexMap<int> *)local_568.Data != (TIndexMap<int> *)0x0) {
            FMemory::Free(local_568.Data);
          }
          local_578 = 0;
          if (local_580 != (void *)0x0) {
            FMemory::Free(local_580);
          }
          TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_5c0);
          local_5c8 = 0;
          if (local_5d0 != (void *)0x0) {
            FMemory::Free(local_5d0);
          }
          TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_610);
          local_620 = 0;
          if (local_628 != (void *)0x0) {
            FMemory::Free(local_628);
          }
          TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_668);
          local_670 = 0;
          if (local_678 != (void *)0x0) {
            FMemory::Free(local_678);
          }
          TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_6b8);
          local_6c8 = 0;
          if (local_6d0 != (void *)0x0) {
            FMemory::Free(local_6d0);
          }
          TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_710);
          local_718 = 0;
          if (local_720 != (void *)0x0) {
            FMemory::Free(local_720);
          }
          TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_760);
          local_770 = 0;
          if (local_778 != (void *)0x0) {
            FMemory::Free(local_778);
          }
          TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_7b8);
          local_7c0 = 0;
          if (local_7c8 != (void *)0x0) {
            FMemory::Free(local_7c8);
          }
          TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_808);
          pTVar36 = &this->Transforms;
          uVar37 = uVar37 + 0x10;
          uVar30 = uVar30 + 0x50;
          uVar39 = (ulonglong)(uVar38 + 1);
          auVar42 = extraout_XMM0_00;
        } while ((int)(uVar38 + 1) < (this->Meshes).ArrayNum);
      }
      if (local_a68.TriangleRefCounts.UsedCount != 0) {
        if (this->bApplyThickenShells != false) {
          pTVar29 = FDynamicMesh3::GetBounds(&local_a68,&local_a98,true);
          dVar40 = (pTVar29->Max).field0_0x0._s_0.Y - (pTVar29->Min).field0_0x0._s_0.Y;
          dVar10 = (pTVar29->Max).field0_0x0._s_0.Z - (pTVar29->Min).field0_0x0._s_0.Z;
          dVar45 = (pTVar29->Max).field0_0x0._s_0.X - (pTVar29->Min).field0_0x0._s_0.X;
          if (dVar40 <= 0.0) {
            dVar40 = 0.0;
          }
          if (dVar10 <= 0.0) {
            dVar10 = 0.0;
          }
          if (dVar45 <= 0.0) {
            dVar45 = 0.0;
          }
          if (dVar10 <= dVar40) {
            dVar10 = dVar40;
          }
          if (dVar10 <= dVar45) {
            dVar10 = dVar45;
          }
          dVar10 = (dVar10 + dVar10) / (double)*(int *)((longlong)&this->_padding_ + 4);
          if (dVar10 <= this->ThickenShells) {
            dVar10 = this->ThickenShells;
          }
          FMeshNormals::QuickComputeVertexNormals(&local_a68,false);
          FExtrudeMesh::FExtrudeMesh((FExtrudeMesh *)local_548,&local_a68);
          local_508 = (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) ^
                                       __xmm_80000000000000008000000000000000._4_4_,
                                       SUB84(dVar10,0) ^
                                       (uint)__xmm_80000000000000008000000000000000);
          local_500._0_1_ = false;
          local_500._1_1_ = true;
          FExtrudeMesh::Apply((FExtrudeMesh *)local_548);
          local_548._0_8_ = &___7FExtrudeMesh_Geometry_UE__6B_;
          DestructItems<UE::Geometry::FExtrudeMesh::FExtrusionInfo,int>
                    ((FExtrusionInfo *)local_4f8.Data,local_4f0);
          if ((FExtrusionInfo *)local_4f8.Data != (FExtrusionInfo *)0x0) {
            FMemory::Free(local_4f8.Data);
          }
          if (local_548._16_8_ != 0) {
            plVar32 = (longlong *)(local_548 + 0x20);
            if ((longlong *)local_548._56_8_ != (longlong *)0x0) {
              plVar32 = (longlong *)local_548._56_8_;
            }
            (**(code **)(*plVar32 + 0x10))();
          }
        }
        TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>
                  (&local_198,&local_a68,true);
        local_c68.Tree = &local_198;
        local_c68.FWNBeta = __real_4000000000000000;
        local_c68.FastWindingCache.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_c68.FastWindingCache.ArrayNum = 0;
        local_c68.FastWindingCache.ArrayMax = 0;
        local_c68.FastWindingCacheOffset = 0;
        local_c68.FastWindingCacheMeshChangeStamp = 0;
        local_c68.FWNApproxOrder = 2;
        TFastWindingTree<UE::Geometry::FDynamicMesh3>::Build(&local_c68,true);
        dVar10 = __real_7fefffffffffffff;
        local_4e8._0_8_ = &local_a68;
        local_4e8._8_8_ = &local_198;
        local_4e8._16_8_ = &local_c68;
        local_4e8._24_8_ = __real_3fe0000000000000;
        local_468 = &___7__TFunction_OwnedObject_P6A_NXZ_0A__0A__Function_Private_Core_UE__6B_;
        local_4e8._48_8_ = ___xmm_7fefffffffffffff7fefffffffffffff;
        local_4e8._56_8_ = _UNK_150a9e648;
        ppFStack_460 = (FProgressCancel **)
                       TImplicitSolidify<UE::Geometry::FDynamicMesh3>::<lambda_41_>::
                       <lambda_invoker_cdecl>;
        local_4e8._80_8_ = ___xmm_3ff0000000000000ffefffffffffffff;
        local_4e8._88_8_ = _UNK_1528d8ae8;
        local_4e8._112_8_ =
             Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(void),bool>::Call;
        local_4e8._40_8_ = __real_7fefffffffffffff;
        local_4e8._104_8_ = __real_3ff0000000000000;
        local_4e8[0x20] = false;
        local_4e8._64_8_ = ___xmm_ffefffffffffffffffefffffffffffff;
        local_4e8._72_8_ = _UNK_1508ffb58;
        local_4e8[0x60] = true;
        local_4e8._100_4_ = 4;
        pppuStack_450 = (undefined ***)0x0;
        FMarchingCubes::FMarchingCubes(&local_448);
        lVar4 = this->_padding_;
        dVar40 = this->ExtendBounds;
        uVar50 = SUB84(dVar40,0);
        uVar51 = (undefined4)((ulonglong)dVar40 >> 0x20);
        if (local_198.RootIndex < 0) {
          bVar25 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<2828200105734045879>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\MeshAABBTree3.h"
                              ,0xb7,"RootIndex >= 0");
          if (bVar25) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          dVar40 = this->ExtendBounds;
          dVar8 = __real_ffefffffffffffff;
          dVar9 = __real_ffefffffffffffff;
          dVar1 = dVar10;
          dVar45 = dVar10;
          dVar49 = __real_ffefffffffffffff;
        }
        else {
          uVar30 = (ulonglong)(local_198.RootIndex & 0x1ff);
          lVar5 = *(longlong *)
                   (local_198.BoxCenters.Blocks.AllocatorInstance.Data +
                   (ulonglong)((uint)local_198.RootIndex >> 9) * 8);
          dVar45 = *(double *)(lVar5 + uVar30 * 0x18);
          lVar6 = *(longlong *)
                   (local_198.BoxExtents.Blocks.AllocatorInstance.Data +
                   (ulonglong)((uint)local_198.RootIndex >> 9) * 8);
          dVar1 = *(double *)(lVar5 + 8 + uVar30 * 0x18);
          dVar10 = *(double *)(lVar5 + 0x10 + uVar30 * 0x18);
          dVar8 = dVar10 + *(double *)(lVar6 + 0x10 + uVar30 * 0x18);
          dVar49 = dVar1 + *(double *)(lVar6 + 8 + uVar30 * 0x18);
          dVar9 = dVar45 + *(double *)(lVar6 + uVar30 * 0x18);
          dVar10 = dVar10 - *(double *)(lVar6 + 0x10 + uVar30 * 0x18);
          dVar1 = dVar1 - *(double *)(lVar6 + 8 + uVar30 * 0x18);
          dVar45 = dVar45 - *(double *)(lVar6 + uVar30 * 0x18);
        }
        pppuStack_810 = pppuStack_450;
        uVar21 = local_458;
        pcStack_820 = (code *)ppFStack_460;
        local_828 = local_468;
        uVar20 = local_4e8._120_8_;
        local_838 = (code *)local_4e8._112_8_;
        if (local_4e8[0x20] != false) {
          uVar50 = 0;
          uVar51 = 0;
        }
        dVar8 = dVar8 - dVar10;
        dVar49 = dVar49 - dVar1;
        local_4e8._100_4_ = this->SurfaceSearchSteps;
        dVar9 = dVar9 - dVar45;
        local_4e8[0x60] = this->bSolidAtBoundaries;
        if (dVar8 <= 0.0) {
          dVar8 = 0.0;
        }
        if (dVar49 <= 0.0) {
          dVar49 = 0.0;
        }
        if (dVar9 <= 0.0) {
          dVar9 = 0.0;
        }
        local_4e8._88_8_ = dVar40;
        if (dVar8 <= dVar49) {
          dVar8 = dVar49;
        }
        local_468 = &Core::Private::Function::
                     TFunction_OwnedObject<`UE::Geometry::FVoxelSolidifyMeshesOp::CalculateResult'::`2'::<lambda_2>,0,0>
                     ::_vftable_;
        ppFStack_460 = &local_c98;
        if (dVar8 <= dVar9) {
          dVar8 = dVar9;
        }
        local_4e8._24_8_ = this->WindingThreshold;
        local_4e8._104_8_ =
             (dVar8 + (double)CONCAT44(uVar51,uVar50) + (double)CONCAT44(uVar51,uVar50)) /
             (double)(int)lVar4;
        local_4e8._112_8_ =
             Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FVoxelSolidifyMeshesOp::CalculateResult'::__l2::<lambda_2>,bool>
             ::Call;
        local_4e8._120_8_ = uStack_830;
        local_458 = local_818;
        pppuStack_450 = (undefined ***)0x0;
        uStack_830 = uVar20;
        local_818 = uVar21;
        if (local_838 != (code *)0x0) {
          pppuVar33 = &local_828;
          if (pppuStack_810 != (undefined ***)0x0) {
            pppuVar33 = pppuStack_810;
          }
          (*(code *)(*pppuVar33)[2])();
        }
        if ((local_c98 == (FProgressCancel *)0x0) ||
           (bVar25 = FProgressCancel::Cancelled(local_c98), !bVar25)) {
          this_00 = (FDynamicMesh3 *)this->_padding_;
          pFVar31 = TImplicitSolidify<UE::Geometry::FDynamicMesh3>::Generate
                              ((TImplicitSolidify<UE::Geometry::FDynamicMesh3> *)local_4e8);
          FDynamicMesh3::Copy(this_00,pFVar31);
          (**(code **)(this->_padding_ + 0x20))(this,local_c98,(int)local_4e8._104_8_);
        }
        FMarchingCubes::~FMarchingCubes(&local_448);
        if ((code *)local_4e8._112_8_ != (code *)0x0) {
          pppuVar33 = &local_468;
          if (pppuStack_450 != (undefined ***)0x0) {
            pppuVar33 = pppuStack_450;
          }
          (*(code *)(*pppuVar33)[2])();
        }
        if (local_c68.FastWindingCache.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c68.FastWindingCache.AllocatorInstance.Data);
        }
        TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::~TMeshAABBTree3<UE::Geometry::FDynamicMesh3>
                  (&local_198);
      }
      FDynamicMesh3::~FDynamicMesh3(&local_a68);
    }
    else {
      bVar25 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_6121446557175775204>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingOperators\\Private\\CompositionOps\\VoxelSolidifyMeshesOp.cpp"
                          ,0x1c,"Transforms.Num() == Meshes.Num()");
      if (bVar25) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
  }
  return;
}

// SetTransform @ 14c985ae0

void __thiscall
UE::Geometry::FVoxelSolidifyMeshesOp::SetTransform
          (FVoxelSolidifyMeshesOp *this,TTransformSRT3<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->Rotation).field0_0x0._s_0.Y;
  this->_padding_ = (longlong)(param_1->Rotation).field0_0x0._s_0.X;
  this->_padding_ = (longlong)dVar1;
  dVar1 = (param_1->Rotation).field0_0x0._s_0.W;
  this->_padding_ = (longlong)(param_1->Rotation).field0_0x0._s_0.Z;
  this->_padding_ = (longlong)dVar1;
  dVar1 = (param_1->Translation).field0_0x0._s_0.Y;
  this->_padding_ = (longlong)(param_1->Translation).field0_0x0._s_0.X;
  this->_padding_ = (longlong)dVar1;
  dVar1 = (param_1->Scale3D).field0_0x0._s_0.X;
  this->_padding_ = (longlong)(param_1->Translation).field0_0x0._s_0.Z;
  this->_padding_ = (longlong)dVar1;
  dVar1 = (param_1->Scale3D).field0_0x0._s_0.Z;
  this->_padding_ = (longlong)(param_1->Scale3D).field0_0x0._s_0.Y;
  this->_padding_ = (longlong)dVar1;
  return;
}

