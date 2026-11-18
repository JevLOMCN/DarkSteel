// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 4

// operator() @ 14da684f0

TQuat<float> * __thiscall
`FPVGravity::ApplyGravity'::__l2::<lambda_1>::operator()
          (void *this,TQuat<float> *__return_storage_ptr__,TVector<float> *param_1,int param_2,
          float param_3,FPVGravityParams *param_4,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_5)

{
  code *pcVar1;
  bool bVar2;
  TQuat<float> *pTVar3;
  TVector<float> *pTVar4;
  TVector<float>_u_0 *pTVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  TVector<float>_u_0 local_68;
  TVector<float>_u_0 local_58;
  undefined8 local_48;
  
  if (param_2 < param_5->ArrayNum) {
    if (param_2 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TQuat<float> *)(*pcVar1)();
        return pTVar3;
      }
    }
    pTVar4 = (TVector<float> *)((param_5->AllocatorInstance).Data + (longlong)param_2 * 0xc);
  }
  else {
    pTVar4 = &UE::Math::TVector<float>::UpVector;
  }
  pTVar5 = &local_58;
  local_58._s_0.Z = *(float *)((longlong)pTVar4 + 8);
  local_58._0_8_ = *(undefined8 *)pTVar4;
  if (param_4->Mode != Phototropic) {
    pTVar5 = &(param_4->Direction).field0_0x0;
  }
  local_48._0_4_ = *(float *)pTVar5;
  local_48._4_4_ = *(float *)((longlong)pTVar5 + 4);
  fVar7 = __real_3f800000 -
          (float)((uint)((param_1->field0_0x0)._s_0.Y * (float)local_48._4_4_ +
                         (param_1->field0_0x0)._s_0.X * (float)(undefined4)local_48 +
                        (param_1->field0_0x0)._s_0.Z * (pTVar5->_s_0).Z) &
                 __xmm_7fffffff7fffffff7fffffff7fffffff);
  fVar6 = __real_3f800000 - param_4->AngleCorrection;
  if (__real_3f800000 <= fVar7) {
    fVar7 = __real_3f800000;
  }
  if (fVar6 <= __real_3dcccccd) {
    fVar6 = __real_3dcccccd;
  }
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  fVar6 = (fVar7 * (__real_3f800000 - fVar6) + fVar6) * (__real_3f800000 - param_3) *
          param_4->Gravity * __real_3dcccccd;
  fVar7 = ((float)(undefined4)local_48 - (param_1->field0_0x0)._s_0.X) * fVar6 +
          (param_1->field0_0x0)._s_0.X;
  fVar9 = ((float)local_48._4_4_ - (param_1->field0_0x0)._s_0.Y) * fVar6 +
          (param_1->field0_0x0)._s_0.Y;
  fVar8 = ((pTVar5->_s_0).Z - (param_1->field0_0x0)._s_0.Z) * fVar6 + (param_1->field0_0x0)._s_0.Z;
  fVar6 = __real_3f800000 / SQRT(fVar9 * fVar9 + fVar7 * fVar7 + fVar8 * fVar8);
  local_68._s_0.X = fVar6 * fVar7;
  local_68._s_0.Y = fVar6 * fVar9;
  local_68._s_0.Z = fVar6 * fVar8;
  UE::Math::TQuat<float>::FindBetweenVectors
            (__return_storage_ptr__,param_1,(TVector<float> *)&local_68._s_0);
  return __return_storage_ptr__;
}

// ApplyGravity @ 14da6c2a0

void __cdecl
FPVGravity::ApplyGravity
          (int param_1,FPVGravityParams *param_2,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_3,
          FManagedArrayCollection *param_4,TQuat<float> *param_5,TVector<float> *param_6,
          TVector<float> *param_7)

{
  float fVar1;
  int *piVar2;
  uint *puVar3;
  longlong lVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  TManagedArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> *pTVar19;
  FScriptContainerElement *pFVar20;
  undefined8 uVar21;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar22;
  TManagedArray<float> *pTVar23;
  bool bVar24;
  int iVar25;
  undefined4 uVar26;
  uint uVar27;
  int iVar28;
  int iVar29;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar30;
  TArray<int,TSizedDefaultAllocator<32>_> *extraout_RAX;
  TArray<int,TSizedDefaultAllocator<32>_> *extraout_RAX_00;
  undefined7 extraout_var;
  TArray<int,TSizedDefaultAllocator<32>_> *extraout_RAX_01;
  undefined7 extraout_var_00;
  float *pfVar31;
  TVector<float> *pTVar32;
  TVector<float>_u_0 *pTVar33;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar34;
  longlong lVar35;
  ulonglong uVar36;
  uint *puVar37;
  uint uVar38;
  int *piVar39;
  ForAnyElementType FVar40;
  uint uVar41;
  TManagedArray<UE::Math::TVector<float>_> *pTVar42;
  FScriptContainerElement *pFVar43;
  longlong *plVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined1 local_d18;
  undefined1 local_d17;
  undefined1 local_d16 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_d14;
  uint uStack_d04;
  undefined1 local_d00 [4];
  float local_cfc;
  TVector<float>_u_0 local_cf8;
  TQuat<float> local_ce8;
  TManagedArray<UE::Math::TVector<float>_> *local_cd8;
  TManagedArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> *local_cd0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_cc8;
  FScriptContainerElement *local_cc0;
  ForAnyElementType local_cb8;
  int local_cb0;
  int local_cac [5];
  longlong local_c98;
  TVector<float>_u_0 local_c88;
  longlong local_c78;
  ulonglong local_c70;
  TVector<float>_u_0 local_c68;
  TVector<float>_u_0 local_c58;
  TVector<float>_u_0 local_c48;
  TVector<float>_u_0 local_c38;
  TVector<float>_u_0 local_c28;
  TQuat<float> local_c18;
  TVector<float>_u_0 local_c08;
  TVector<float>_u_0 local_bf8;
  TVector<float>_u_0 local_be8;
  TVector<float>_u_0 local_bd8;
  TVector<float>_u_0 local_bc8;
  TVector<float>_u_0 local_bb8;
  TVector<float>_u_0 local_ba8;
  TVector<float>_u_0 local_b98;
  TVector<float>_u_0 local_b88;
  TVector<float>_u_0 local_b78;
  TArray<int,TSizedDefaultAllocator<32>_> *local_b68;
  longlong local_b60;
  longlong *local_b58;
  longlong local_b50;
  TVector<float>_u_0 local_b48;
  FFoliageEntryData local_b38;
  undefined1 local_af8 [16];
  undefined8 local_ae8;
  TQuat<float> local_ad8;
  FBudVectorsFacade local_ac8;
  FBranchFacade local_a88;
  FPointFacade local_798;
  FFoliageFacade local_368;
  
  PV::Facades::FBranchFacade::FBranchFacade(&local_a88,param_4);
  PV::Facades::FPointFacade::FPointFacade(&local_798,param_4);
  PV::Facades::FBudVectorsFacade::FBudVectorsFacade(&local_ac8,param_4);
  PV::Facades::FFoliageFacade::FFoliageFacade(&local_368,param_4,0);
  local_cd8 = local_798.Positions.AttributeArray;
  if (((local_798.Positions.AttributeArray == (TManagedArray<UE::Math::TVector<float>_> *)0x0) ||
      (local_798.Positions.Collection == (FManagedArrayCollection *)0x0)) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("AttributeArray!=nullptr && !IsConst()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                          ,0x74,L""), bVar24)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  (local_798.Positions.AttributeArray)->field_0x8 = 1;
  local_cd0 = local_ac8.BudDirection.AttributeArray;
  if (((local_ac8.BudDirection.AttributeArray ==
        (TManagedArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> *)0x0) ||
      (local_ac8.BudDirection.Collection == (FManagedArrayCollection *)0x0)) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("AttributeArray!=nullptr && !IsConst()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                          ,0x74,L""), bVar24)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  (local_ac8.BudDirection.AttributeArray)->field_0x8 = 1;
  uVar36 = (ulonglong)_tls_index;
  if (((local_a88.BranchPoints.ConstAttributeArray ==
        (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) || (param_1 < 0)) ||
     (iVar25 = (**(code **)(*(longlong *)local_a88.BranchPoints.ConstAttributeArray + 0x60))(),
     iVar25 <= param_1)) {
    local_c98 = 0x9d4c;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar36 * 8) + 0x9d4c) <
         ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      atexit(`PV::Facades::FBranchFacade::GetPoints'::__l2::
             _dynamic_atexit_destructor_for__EmptyPoints__);
      _Init_thread_footer(&::_TSS0);
    }
    local_cc8 = &EmptyPoints;
  }
  else {
    local_cc8 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::operator[]
                          (&local_a88.BranchPoints,param_1);
    local_c98 = 0x9d4c;
  }
  if (((local_a88.Children.ConstAttributeArray ==
        (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) || (param_1 < 0)) ||
     (iVar25 = (**(code **)(*(longlong *)local_a88.Children.ConstAttributeArray + 0x60))(),
     iVar25 <= param_1)) {
    uVar38 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar36 * 8) + 0x9d4c);
    pTVar30 = (TArray<int,TSizedDefaultAllocator<32>_> *)(ulonglong)uVar38;
    if (((int)uVar38 < ::_TSS0) &&
       (_Init_thread_header(&::_TSS0), pTVar30 = extraout_RAX, ::_TSS0 == -1)) {
      atexit(`PV::Facades::FBranchFacade::GetChildren'::__l2::
             _dynamic_atexit_destructor_for__EmptyChildren__);
      _Init_thread_footer(&::_TSS0);
      pTVar30 = extraout_RAX_00;
    }
    pTVar34 = &EmptyChildren;
  }
  else {
    pTVar30 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::operator[]
                        (&local_a88.Children,param_1);
    pTVar34 = pTVar30;
  }
  if (local_a88.BranchNumbers.ConstAttributeArray == (TManagedArray<int> *)0x0) {
    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                        ,0x67,L"");
    pTVar30 = (TArray<int,TSizedDefaultAllocator<32>_> *)CONCAT71(extraout_var,bVar24);
    if (bVar24) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_d14._4_8_ = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  local_d14.ArrayMax = 0;
  uStack_d04 = 0;
  uVar38 = pTVar34->ArrayNum;
  if ((int)uVar38 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar38);
  }
  if (0 < (int)uVar38) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar38,(ForAnyElementType *)((longlong)&local_d14.AllocatorInstance.Data + 4),0,
               (int *)&uStack_d04);
    pTVar30 = extraout_RAX_01;
  }
  pFVar43 = (pTVar34->AllocatorInstance).Data;
  iVar25 = pTVar34->ArrayNum;
  local_cc0 = pFVar43 + (longlong)iVar25 * 4;
  do {
    pFVar20 = local_cc0;
    uVar26 = SUB84(pTVar30,0);
    if (pTVar34->ArrayNum != iVar25) {
      local_d18 = 0;
      bVar24 = `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                         (&local_d18);
      uVar26 = (undefined4)CONCAT71(extraout_var_00,bVar24);
    }
    pTVar30 = local_cc8;
    fVar45 = __real_3f800000;
    if (pFVar43 == pFVar20) {
      auVar12._4_4_ = -(uint)(param_5->Y != UE::Math::TQuat<float>::Identity.Y);
      auVar12._0_4_ = -(uint)(param_5->X != UE::Math::TQuat<float>::Identity.X);
      auVar12._8_4_ = -(uint)(param_5->Z != UE::Math::TQuat<float>::Identity.Z);
      auVar12._12_4_ = -(uint)(param_5->W != UE::Math::TQuat<float>::Identity.W);
      iVar25 = movmskps(uVar26,auVar12);
      if (iVar25 == 0) {
        if ((local_cc8->ArrayNum < 1) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pTVar42 = local_cd8;
        uVar38 = *(uint *)(pTVar30->AllocatorInstance).Data;
        uVar41 = 0;
        if ((int)uVar38 < *(int *)&local_cd8->field_0x18) {
          uVar41 = ~uVar38 >> 0x1f;
        }
        if ((uVar41 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar35 = *(longlong *)&pTVar42->field_0x10;
        fVar47 = *(float *)(lVar35 + 8 + (longlong)(int)uVar38 * 0xc);
        *(undefined8 *)&param_6->field0_0x0 = *(undefined8 *)(lVar35 + (longlong)(int)uVar38 * 0xc);
        (param_6->field0_0x0)._s_0.Z = fVar47;
      }
      else {
        if ((local_cc8->ArrayNum < 1) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pTVar42 = local_cd8;
        uVar38 = *(uint *)(pTVar30->AllocatorInstance).Data;
        lVar35 = (longlong)(int)uVar38;
        uVar41 = 0;
        if ((int)uVar38 < *(int *)&local_cd8->field_0x18) {
          uVar41 = ~uVar38 >> 0x1f;
        }
        if ((uVar41 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar4 = *(longlong *)&pTVar42->field_0x10;
        uVar41 = 0;
        if ((int)uVar38 < *(int *)&local_cd0->field_0x18) {
          uVar41 = ~uVar38 >> 0x1f;
        }
        if ((uVar41 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        plVar44 = (longlong *)(lVar35 * 0x10 + *(longlong *)&local_cd0->field_0x10);
        if (((local_798.PointScaleGradient.ConstAttributeArray == (TManagedArray<float> *)0x0) ||
            ((int)uVar38 < 0)) ||
           (iVar25 = (**(code **)(*(longlong *)local_798.PointScaleGradient.ConstAttributeArray +
                                 0x60))(), iVar25 <= (int)uVar38)) {
          pfVar31 = &DefaultPScale;
        }
        else {
          pfVar31 = TManagedArrayAccessor<float>::operator[](&local_798.PointScaleGradient,uVar38);
        }
        local_c28._s_0.X = *(float *)(lVar4 + lVar35 * 0xc) - (param_6->field0_0x0)._s_0.X;
        local_c28._s_0.Y = *(float *)(lVar4 + 4 + lVar35 * 0xc) - (param_6->field0_0x0)._s_0.Y;
        local_c28._s_0.Z = *(float *)(lVar4 + 8 + lVar35 * 0xc) - (param_6->field0_0x0)._s_0.Z;
        UE::Math::TQuat<float>::RotateVector
                  (param_5,(TVector<float> *)&local_c68._s_0,(TVector<float> *)&local_c28._s_0);
        fVar45 = __real_3f800000 /
                 SQRT(local_c68._s_0.X * local_c68._s_0.X + local_c68._s_0.Y * local_c68._s_0.Y +
                      local_c68._s_0.Z * local_c68._s_0.Z);
        local_c58._s_0.X = fVar45 * local_c68._s_0.X;
        local_c58._s_0.Y = fVar45 * local_c68._s_0.Y;
        local_c58._s_0.Z = fVar45 * local_c68._s_0.Z;
        `FPVGravity::ApplyGravity'::__l2::<lambda_1>::operator()
                  (local_d00,&local_c18,(TVector<float> *)&local_c58._s_0,uVar38,*pfVar31,param_2,
                   param_3);
        fVar13 = param_5->X;
        fVar14 = param_5->Y;
        fVar15 = param_5->Z;
        fVar16 = param_5->W;
        fVar47 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[0];
        fVar49 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[1];
        fVar6 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[2];
        fVar9 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[3];
        fVar46 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[0];
        fVar50 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[1];
        fVar7 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[2];
        fVar10 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[3];
        fVar48 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[0];
        fVar1 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[1];
        fVar8 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[2];
        fVar11 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[3];
        uVar38 = 0;
        fVar45 = *(float *)(lVar4 + 8 + lVar35 * 0xc);
        *(undefined8 *)&param_6->field0_0x0 = *(undefined8 *)(lVar4 + lVar35 * 0xc);
        (param_6->field0_0x0)._s_0.Z = fVar45;
        param_5->X = local_c18.W * fVar13 + local_c18.X * fVar16 * fVar47 +
                     fVar15 * local_c18.Y * fVar46 + fVar14 * local_c18.Z * fVar48;
        param_5->Y = local_c18.W * fVar14 + local_c18.X * fVar15 * fVar49 +
                     fVar16 * local_c18.Y * fVar50 + fVar13 * local_c18.Z * fVar1;
        param_5->Z = local_c18.W * fVar15 + local_c18.X * fVar14 * fVar6 +
                     fVar13 * local_c18.Y * fVar7 + fVar16 * local_c18.Z * fVar8;
        param_5->W = local_c18.W * fVar16 + local_c18.X * fVar13 * fVar9 +
                     fVar14 * local_c18.Y * fVar10 + fVar15 * local_c18.Z * fVar11;
        fVar49 = local_c18.X * local_c68._s_0.Y - local_c18.Y * local_c68._s_0.X;
        fVar48 = local_c18.Z * local_c68._s_0.X - local_c18.X * local_c68._s_0.Z;
        fVar49 = fVar49 + fVar49;
        fVar46 = local_c18.Y * local_c68._s_0.Z - local_c18.Z * local_c68._s_0.Y;
        fVar48 = fVar48 + fVar48;
        fVar46 = fVar46 + fVar46;
        fVar45 = (param_7->field0_0x0)._s_0.Z;
        fVar47 = (param_7->field0_0x0)._s_0.Y;
        *(float *)(lVar4 + lVar35 * 0xc) =
             (local_c18.Y * fVar49 - local_c18.Z * fVar48) + local_c18.W * fVar46 + local_c68._s_0.X
             + (param_7->field0_0x0)._s_0.X;
        *(float *)(lVar4 + 4 + lVar35 * 0xc) =
             (local_c18.Z * fVar46 - local_c18.X * fVar49) + local_c18.W * fVar48 + local_c68._s_0.Y
             + fVar47;
        *(float *)(lVar4 + 8 + lVar35 * 0xc) =
             (local_c18.X * fVar48 - local_c18.Y * fVar46) + local_c18.W * fVar49 + local_c68._s_0.Z
             + fVar45;
        iVar25 = (int)plVar44[1];
        pTVar42 = local_cd8;
        pTVar30 = local_cc8;
        fVar45 = __real_3f800000;
        if (0 < iVar25) {
          lVar35 = 0;
          do {
            if (1 < uVar38 - 2) {
              uVar41 = 0;
              if ((int)uVar38 < iVar25) {
                uVar41 = ~uVar38 >> 0x1f;
              }
              if ((uVar41 == 0) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar24)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              local_b48._0_8_ = *(undefined8 *)(lVar35 + *plVar44);
              local_b48._s_0.Z = *(float *)(lVar35 + 8 + *plVar44);
              UE::Math::TQuat<float>::RotateVector
                        (param_5,(TVector<float> *)&local_c08._s_0,(TVector<float> *)&local_b48._s_0
                        );
              uVar26 = local_c08._s_0.Z;
              uVar21 = local_c08._0_8_;
              uVar41 = 0;
              if ((int)uVar38 < (int)plVar44[1]) {
                uVar41 = ~uVar38 >> 0x1f;
              }
              if ((uVar41 == 0) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar24)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              lVar4 = *plVar44;
              *(undefined8 *)(lVar35 + lVar4) = uVar21;
              *(undefined4 *)(lVar35 + 8 + lVar4) = uVar26;
            }
            iVar25 = (int)plVar44[1];
            uVar38 = uVar38 + 1;
            lVar35 = lVar35 + 0xc;
            pTVar42 = local_cd8;
            pTVar30 = local_cc8;
            fVar45 = __real_3f800000;
          } while ((int)uVar38 < iVar25);
        }
      }
      local_c70 = 1;
      local_b50 = (longlong)(pTVar30->ArrayNum + -1);
      if (0 < local_b50) {
        local_af8 = ZEXT416((uint)fVar45);
        local_cc0 = (FScriptContainerElement *)&DAT_00000001;
        fVar47 = fVar45;
        do {
          pFVar43 = local_cc0;
          fVar46 = __real_3dcccccd;
          uVar41 = (uint)local_c70;
          uVar38 = 0;
          if ((int)uVar41 < pTVar30->ArrayNum) {
            uVar38 = ~uVar41 >> 0x1f;
          }
          if ((uVar38 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar38 = *(uint *)((pTVar30->AllocatorInstance).Data + (longlong)pFVar43 * 4);
          lVar35 = (longlong)(int)uVar38;
          uVar27 = 0;
          if ((int)(uVar41 - 1) < pTVar30->ArrayNum) {
            uVar27 = -uVar41 >> 0x1f;
          }
          if ((uVar27 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar41 = *(uint *)((pTVar30->AllocatorInstance).Data + (longlong)pFVar43 * 4 + -4);
          uVar27 = 0;
          if ((int)uVar38 < *(int *)&pTVar42->field_0x18) {
            uVar27 = ~uVar38 >> 0x1f;
          }
          if ((uVar27 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_c78 = *(longlong *)&pTVar42->field_0x10;
          local_b60 = lVar35 * 3;
          uVar27 = 0;
          if ((int)uVar41 < *(int *)&pTVar42->field_0x18) {
            uVar27 = ~uVar41 >> 0x1f;
          }
          if ((uVar27 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pTVar19 = local_cd0;
          fVar48 = *(float *)(*(longlong *)&pTVar42->field_0x10 + 8 + (longlong)(int)uVar41 * 0xc);
          iVar25 = *(int *)&local_cd0->field_0x18;
          *(undefined8 *)&param_7->field0_0x0 =
               *(undefined8 *)(*(longlong *)&pTVar42->field_0x10 + (longlong)(int)uVar41 * 0xc);
          (param_7->field0_0x0)._s_0.Z = fVar48;
          uVar27 = 0;
          if ((int)uVar38 < iVar25) {
            uVar27 = ~uVar38 >> 0x1f;
          }
          if ((uVar27 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pTVar23 = local_798.LengthFromRoot.ConstAttributeArray;
          local_b58 = (longlong *)(lVar35 * 0x10 + *(longlong *)&pTVar19->field_0x10);
          if (((local_798.LengthFromRoot.ConstAttributeArray == (TManagedArray<float> *)0x0) ||
              ((int)uVar38 < 0)) ||
             (iVar25 = (**(code **)(*(longlong *)local_798.LengthFromRoot.ConstAttributeArray + 0x60
                                   ))(local_798.LengthFromRoot.ConstAttributeArray),
             iVar25 <= (int)uVar38)) {
            pfVar31 = &DefaultLengthFromRoot;
          }
          else {
            pfVar31 = TManagedArrayAccessor<float>::operator[](&local_798.LengthFromRoot,uVar38);
          }
          local_cfc = *pfVar31;
          if (((pTVar23 == (TManagedArray<float> *)0x0) || ((int)uVar41 < 0)) ||
             (iVar25 = (**(code **)(*(longlong *)pTVar23 + 0x60))(pTVar23), iVar25 <= (int)uVar41))
          {
            pfVar31 = &DefaultLengthFromRoot;
          }
          else {
            pfVar31 = TManagedArrayAccessor<float>::operator[](&local_798.LengthFromRoot,uVar41);
          }
          fVar48 = *pfVar31;
          local_c48._s_0.X = *(float *)(local_c78 + lVar35 * 0xc) - (param_6->field0_0x0)._s_0.X;
          local_c48._s_0.Y = *(float *)(local_c78 + 4 + lVar35 * 0xc) - (param_6->field0_0x0)._s_0.Y
          ;
          local_c48._s_0.Z = *(float *)(local_c78 + 8 + lVar35 * 0xc) - (param_6->field0_0x0)._s_0.Z
          ;
          UE::Math::TQuat<float>::RotateVector
                    (param_5,(TVector<float> *)&local_cf8._s_0,(TVector<float> *)&local_c48._s_0);
          uVar18 = local_cf8._s_0.Z;
          uVar17 = local_cf8._s_0.Y;
          uVar26 = local_cf8._s_0.X;
          fVar45 = fVar45 / SQRT(local_cf8._s_0.X * local_cf8._s_0.X +
                                 local_cf8._s_0.Y * local_cf8._s_0.Y +
                                 local_cf8._s_0.Z * local_cf8._s_0.Z);
          fVar49 = fVar45 * local_cf8._s_0.X;
          fVar50 = fVar45 * local_cf8._s_0.Y;
          fVar45 = fVar45 * local_cf8._s_0.Z;
          if (((local_798.PointScaleGradient.ConstAttributeArray == (TManagedArray<float> *)0x0) ||
              ((int)uVar38 < 0)) ||
             (iVar25 = (**(code **)(*(longlong *)local_798.PointScaleGradient.ConstAttributeArray +
                                   0x60))(), iVar25 <= (int)uVar38)) {
            pfVar31 = &DefaultPScale;
          }
          else {
            pfVar31 = TManagedArrayAccessor<float>::operator[](&local_798.PointScaleGradient,uVar38)
            ;
          }
          fVar1 = *pfVar31;
          local_c88._0_8_ = CONCAT44(fVar50,fVar49);
          local_c88._s_0.Z = fVar45;
          if ((int)uVar38 < param_3->ArrayNum) {
            if (((int)uVar38 < 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pTVar32 = (TVector<float> *)((param_3->AllocatorInstance).Data + lVar35 * 0xc);
          }
          else {
            pTVar32 = &UE::Math::TVector<float>::UpVector;
          }
          local_bf8._s_0.Z = *(float *)((longlong)pTVar32 + 8);
          pTVar33 = &local_bf8;
          local_bf8._0_8_ = *(undefined8 *)pTVar32;
          if (param_2->Mode != Phototropic) {
            pTVar33 = &(param_2->Direction).field0_0x0;
          }
          local_ae8 = *(undefined8 *)&(pTVar33->_s_0).X;
          fVar45 = (float)((ulonglong)local_ae8 >> 0x20);
          fVar47 = fVar47 - param_2->AngleCorrection;
          if (fVar47 <= fVar46) {
            fVar47 = fVar46;
          }
          fVar46 = __real_3f800000 -
                   (float)((uint)(fVar45 * local_c88._s_0.Y + (float)local_ae8 * local_c88._s_0.X +
                                 (pTVar33->_s_0).Z * local_c88._s_0.Z) &
                          __xmm_7fffffff7fffffff7fffffff7fffffff);
          if (__real_3f800000 <= fVar46) {
            fVar46 = __real_3f800000;
          }
          if (fVar46 <= __real_00000000) {
            fVar46 = __real_00000000;
          }
          fVar47 = (fVar46 * (__real_3f800000 - fVar47) + fVar47) * (__real_3f800000 - fVar1) *
                   param_2->Gravity * __real_3dcccccd;
          fVar46 = ((float)local_ae8 - local_c88._s_0.X) * fVar47 + local_c88._s_0.X;
          fVar49 = (fVar45 - local_c88._s_0.Y) * fVar47 + local_c88._s_0.Y;
          fVar47 = ((pTVar33->_s_0).Z - local_c88._s_0.Z) * fVar47 + local_c88._s_0.Z;
          fVar45 = (float)local_af8._0_4_ /
                   SQRT(fVar46 * fVar46 + fVar49 * fVar49 + fVar47 * fVar47);
          local_c38._s_0.X = fVar46 * fVar45;
          local_c38._s_0.Y = fVar45 * fVar49;
          local_c38._s_0.Z = fVar45 * fVar47;
          UE::Math::TQuat<float>::FindBetweenVectors
                    (&local_ce8,(TVector<float> *)&local_c88._s_0,(TVector<float> *)&local_c38._s_0)
          ;
          fVar9 = param_5->X;
          fVar10 = param_5->Y;
          fVar11 = param_5->Z;
          fVar13 = param_5->W;
          fVar45 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[1];
          fVar49 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[2];
          fVar6 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[3];
          fVar47 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[1];
          fVar50 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[2];
          fVar7 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[3];
          fVar46 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[1];
          fVar1 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[2];
          fVar8 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[3];
          param_5->X = local_ce8.X * fVar13 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[0] +
                       fVar9 * local_ce8.W +
                       local_ce8.Y * fVar11 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[0] +
                       local_ce8.Z * fVar10 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[0];
          param_5->Y = local_ce8.X * fVar11 * fVar45 + fVar10 * local_ce8.W +
                       local_ce8.Y * fVar13 * fVar47 + local_ce8.Z * fVar9 * fVar46;
          param_5->Z = local_ce8.X * fVar10 * fVar49 + fVar11 * local_ce8.W +
                       local_ce8.Y * fVar9 * fVar50 + local_ce8.Z * fVar13 * fVar1;
          param_5->W = local_ce8.X * fVar9 * fVar6 + fVar13 * local_ce8.W +
                       local_ce8.Y * fVar10 * fVar7 + local_ce8.Z * fVar11 * fVar8;
          if (((local_368.FoliageIdsAttribute.ConstAttributeArray ==
                (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) || (param_1 < 0)) ||
             (iVar25 = (**(code **)(*(longlong *)local_368.FoliageIdsAttribute.ConstAttributeArray +
                                   0x60))(), iVar25 <= param_1)) {
            if ((*(int *)(local_c98 +
                         *(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)) <
                 ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
              atexit(`PV::Facades::FFoliageFacade::GetFoliageEntryIdsForBranch'::__l2::
                     _dynamic_atexit_destructor_for__EmptyArray__);
              _Init_thread_footer(&::_TSS0);
            }
            pTVar30 = &::EmptyArray;
          }
          else {
            pTVar30 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::operator[]
                                (&local_368.FoliageIdsAttribute,param_1);
          }
          local_cb8.Data = (FScriptContainerElement *)0x0;
          local_cb0 = pTVar30->ArrayNum;
          lVar35 = (longlong)local_cb0;
          pFVar43 = (pTVar30->AllocatorInstance).Data;
          if (local_cb0 == 0) {
            local_cac[0] = 0;
            iVar25 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,local_cb0,0,&local_cb8,local_cb0,local_cac);
            memcpy(local_cb8.Data,pFVar43,lVar35 << 2);
            iVar25 = local_cb0;
          }
          fVar45 = local_cfc;
          pFVar43 = local_cb8.Data + (longlong)iVar25 * 4;
          FVar40.Data = local_cb8.Data;
          iVar28 = iVar25;
          while( true ) {
            if (iVar28 != iVar25) {
              local_d17 = 0;
              `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (&local_d17);
            }
            pTVar23 = local_798.LengthFromRoot.ConstAttributeArray;
            pTVar22 = local_a88.BranchPoints.ConstAttributeArray;
            if (FVar40.Data == pFVar43) break;
            iVar28 = *(int *)FVar40.Data;
            PV::Facades::FFoliageFacade::GetFoliageEntry(&local_368,&local_b38,iVar28);
            if ((local_b38.LengthFromRoot <= fVar45) && (fVar48 < local_b38.LengthFromRoot)) {
              local_be8._s_0.Z = local_b38.UpVector.field0_0x0._s_0.Z;
              fVar49 = local_ce8.Y * (float)uVar18 - local_ce8.Z * (float)uVar17;
              fVar46 = local_ce8.Z * (float)uVar26 - local_ce8.X * (float)uVar18;
              fVar49 = fVar49 + fVar49;
              fVar47 = local_ce8.X * (float)uVar17 - local_ce8.Y * (float)uVar26;
              fVar46 = fVar46 + fVar46;
              fVar47 = fVar47 + fVar47;
              local_b38.PivotPoint.field0_0x0._s_0.X =
                   (local_ce8.Y * fVar47 - local_ce8.Z * fVar46) +
                   local_ce8.W * fVar49 + (float)uVar26 + (param_7->field0_0x0)._s_0.X;
              local_be8._0_8_ = local_b38.UpVector.field0_0x0._0_8_;
              local_b38.PivotPoint.field0_0x0._s_0.Y =
                   (local_ce8.Z * fVar49 - local_ce8.X * fVar47) +
                   local_ce8.W * fVar46 + (float)uVar17 + (param_7->field0_0x0)._s_0.Y;
              local_b38.PivotPoint.field0_0x0._s_0.Z =
                   (local_ce8.X * fVar46 - local_ce8.Y * fVar49) +
                   local_ce8.W * fVar47 + (float)uVar18 + (param_7->field0_0x0)._s_0.Z;
              UE::Math::TQuat<float>::RotateVector
                        (param_5,(TVector<float> *)&local_bd8._s_0,(TVector<float> *)&local_be8._s_0
                        );
              local_b38.UpVector.field0_0x0._0_8_ = local_bd8._0_8_;
              local_b38.UpVector.field0_0x0._s_0.Z = local_bd8._s_0.Z;
              local_bc8._0_8_ = local_b38.NormalVector.field0_0x0._0_8_;
              local_bc8._s_0.Z = local_b38.NormalVector.field0_0x0._s_0.Z;
              UE::Math::TQuat<float>::RotateVector
                        (param_5,(TVector<float> *)&local_bb8._s_0,(TVector<float> *)&local_bc8._s_0
                        );
              local_b38.NormalVector.field0_0x0._0_8_ = local_bb8._0_8_;
              local_b38.NormalVector.field0_0x0._s_0.Z = local_bb8._s_0.Z;
              PV::Facades::FFoliageFacade::SetFoliageEntry(&local_368,iVar28,&local_b38);
            }
            FVar40.Data = FVar40.Data + 4;
            iVar28 = local_cb0;
          }
          uVar36 = (ulonglong)local_d14.ArrayMax;
          local_b68 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                      ((longlong)&((ForAnyElementType *)local_d14._4_8_)->Data + uVar36 * 4);
          local_cfc = (float)local_d14.ArrayMax;
          pTVar30 = (TArray<int,TSizedDefaultAllocator<32>_> *)local_d14._4_8_;
          while( true ) {
            pTVar34 = local_b68;
            if (local_d14.ArrayMax != (uint)uVar36) {
              local_d16[0] = 0;
              `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_d16);
            }
            plVar44 = local_b58;
            if (pTVar30 == pTVar34) break;
            iVar25 = *(int *)&(pTVar30->AllocatorInstance).Data;
            if (((pTVar22 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) ||
                (iVar25 < 0)) ||
               (iVar28 = (**(code **)(*(longlong *)pTVar22 + 0x60))(pTVar22), iVar28 <= iVar25)) {
              if ((*(int *)(local_c98 +
                           *(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)) <
                   ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
                atexit(`PV::Facades::FBranchFacade::GetPoints'::__l2::
                       _dynamic_atexit_destructor_for__EmptyPoints__);
                _Init_thread_footer(&::_TSS0);
              }
              pTVar34 = &EmptyPoints;
            }
            else {
              pTVar34 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::operator[]
                                  (&local_a88.BranchPoints,iVar25);
            }
            if (pTVar34->ArrayNum != 0) {
              if ((pTVar34->ArrayNum < 1) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar24)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              iVar28 = *(int *)(pTVar34->AllocatorInstance).Data;
              if (((pTVar23 == (TManagedArray<float> *)0x0) || (iVar28 < 0)) ||
                 (iVar29 = (**(code **)(*(longlong *)pTVar23 + 0x60))(pTVar23), iVar29 <= iVar28)) {
                pfVar31 = &DefaultLengthFromRoot;
              }
              else {
                pfVar31 = TManagedArrayAccessor<float>::operator[](&local_798.LengthFromRoot,iVar28)
                ;
              }
              if ((*pfVar31 <= fVar45) && (fVar48 < *pfVar31)) {
                local_ba8._0_8_ = *(undefined8 *)&param_7->field0_0x0;
                local_ba8._s_0.Z = (param_7->field0_0x0)._s_0.Z;
                local_b98._0_8_ = *(undefined8 *)&param_6->field0_0x0;
                local_b98._s_0.Z = (param_6->field0_0x0)._s_0.Z;
                local_ad8.X = param_5->X;
                local_ad8.Y = param_5->Y;
                local_ad8.Z = param_5->Z;
                local_ad8.W = param_5->W;
                ApplyGravity(iVar25,param_2,param_3,param_4,&local_ad8,
                             (TVector<float> *)&local_b98._s_0,(TVector<float> *)&local_ba8._s_0);
              }
            }
            uVar36 = (ulonglong)(uint)local_cfc;
            pTVar30 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                      ((longlong)&(pTVar30->AllocatorInstance).Data + 4);
          }
          uVar38 = 0;
          fVar45 = *(float *)(local_c78 + 8 + local_b60 * 4);
          *(undefined8 *)&param_6->field0_0x0 = *(undefined8 *)(local_c78 + local_b60 * 4);
          (param_6->field0_0x0)._s_0.Z = fVar45;
          fVar49 = local_ce8.Y * local_cf8._s_0.Z - local_ce8.Z * local_cf8._s_0.Y;
          fVar49 = fVar49 + fVar49;
          fVar48 = local_ce8.Z * local_cf8._s_0.X - local_ce8.X * local_cf8._s_0.Z;
          fVar46 = local_ce8.X * local_cf8._s_0.Y - local_ce8.Y * local_cf8._s_0.X;
          fVar48 = fVar48 + fVar48;
          fVar46 = fVar46 + fVar46;
          fVar45 = (param_7->field0_0x0)._s_0.Y;
          fVar47 = (param_7->field0_0x0)._s_0.Z;
          *(float *)(local_c78 + local_b60 * 4) =
               (local_ce8.Y * fVar46 - local_ce8.Z * fVar48) +
               local_ce8.W * fVar49 + local_cf8._s_0.X + (param_7->field0_0x0)._s_0.X;
          *(float *)(local_c78 + 4 + local_b60 * 4) =
               (local_ce8.Z * fVar49 - local_ce8.X * fVar46) +
               local_ce8.W * fVar48 + local_cf8._s_0.Y + fVar45;
          *(float *)(local_c78 + 8 + local_b60 * 4) =
               (local_ce8.X * fVar48 - local_ce8.Y * fVar49) +
               local_ce8.W * fVar46 + local_cf8._s_0.Z + fVar47;
          iVar25 = (int)local_b58[1];
          if (0 < iVar25) {
            lVar35 = 0;
            do {
              if (1 < uVar38 - 2) {
                uVar41 = 0;
                if ((int)uVar38 < iVar25) {
                  uVar41 = ~uVar38 >> 0x1f;
                }
                if ((uVar41 == 0) &&
                   (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar24)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                local_b88._0_8_ = *(undefined8 *)(lVar35 + *plVar44);
                local_b88._s_0.Z = *(float *)(lVar35 + 8 + *plVar44);
                UE::Math::TQuat<float>::RotateVector
                          (param_5,(TVector<float> *)&local_b78._s_0,
                           (TVector<float> *)&local_b88._s_0);
                uVar26 = local_b78._s_0.Z;
                uVar21 = local_b78._0_8_;
                uVar41 = 0;
                if ((int)uVar38 < (int)plVar44[1]) {
                  uVar41 = ~uVar38 >> 0x1f;
                }
                if ((uVar41 == 0) &&
                   (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar24)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                lVar4 = *plVar44;
                *(undefined8 *)(lVar35 + lVar4) = uVar21;
                *(undefined4 *)(lVar35 + 8 + lVar4) = uVar26;
              }
              iVar25 = (int)plVar44[1];
              uVar38 = uVar38 + 1;
              lVar35 = lVar35 + 0xc;
            } while ((int)uVar38 < iVar25);
          }
          if (local_cb8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_cb8.Data);
          }
          local_c70 = (ulonglong)((int)local_c70 + 1);
          local_cc0 = local_cc0 + 1;
          pTVar42 = local_cd8;
          pTVar30 = local_cc8;
          fVar45 = (float)local_af8._0_4_;
          fVar47 = __real_3f800000;
        } while ((longlong)local_cc0 <= local_b50);
      }
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_d14._4_8_ !=
          (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free((void *)local_d14._4_8_);
      }
      return;
    }
    piVar2 = *(int **)&(local_a88.BranchNumbers.ConstAttributeArray)->field_0x10;
    pTVar30 = (TArray<int,TSizedDefaultAllocator<32>_> *)
              (longlong)*(int *)&(local_a88.BranchNumbers.ConstAttributeArray)->field_0x18;
    for (piVar39 = piVar2; piVar39 != piVar2 + (longlong)pTVar30; piVar39 = piVar39 + 1) {
      if (*piVar39 == *(int *)pFVar43) {
        iVar28 = (int)((longlong)piVar39 - (longlong)piVar2 >> 2);
        goto LAB_14da6c5ad;
      }
    }
    iVar28 = -1;
LAB_14da6c5ad:
    local_d14.AllocatorInstance.Data._0_4_ = iVar28;
    if (((local_a88.BranchParentNumbers.ConstAttributeArray != (TManagedArray<int> *)0x0) &&
        (-1 < iVar28)) &&
       (pTVar30 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                  (**(code **)(*(longlong *)local_a88.BranchParentNumbers.ConstAttributeArray + 0x60
                              ))(local_a88.BranchParentNumbers.ConstAttributeArray),
       iVar28 < (int)pTVar30)) {
      if ((local_a88.BranchNumbers.ConstAttributeArray == (TManagedArray<int> *)0x0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                              ,0x67,L""), bVar24)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar30 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                TManagedArrayAccessor<int>::operator[](&local_a88.BranchParentNumbers,iVar28);
      puVar3 = *(uint **)&(local_a88.BranchNumbers.ConstAttributeArray)->field_0x10;
      if (puVar3 != puVar3 + *(int *)&(local_a88.BranchNumbers.ConstAttributeArray)->field_0x18) {
        uVar38 = *(uint *)&(pTVar30->AllocatorInstance).Data;
        pTVar30 = (TArray<int,TSizedDefaultAllocator<32>_> *)(ulonglong)uVar38;
        puVar37 = puVar3;
        do {
          if (*puVar37 == uVar38) {
            iVar28 = (int)((longlong)puVar37 - (longlong)puVar3 >> 2);
            goto LAB_14da6c63e;
          }
          puVar37 = puVar37 + 1;
        } while (puVar37 !=
                 puVar3 + *(int *)&(local_a88.BranchNumbers.ConstAttributeArray)->field_0x18);
      }
    }
    iVar28 = -1;
LAB_14da6c63e:
    if (((int)local_d14.AllocatorInstance.Data != -1) && (iVar28 == param_1)) {
      if (((ulonglong)local_d14._4_8_ <= &local_d14) &&
         ((&local_d14 <
           (TArray<int,TSizedDefaultAllocator<32>_> *)
           ((longlong)&((ForAnyElementType *)local_d14._4_8_)->Data + (longlong)(int)uStack_d04 * 4)
          && (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar24)))) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (local_d14.ArrayMax == uStack_d04) {
        local_d14.ArrayMax =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,(ForAnyElementType *)((longlong)&local_d14.AllocatorInstance.Data + 4)
                        ,(int *)&uStack_d04);
      }
      lVar35 = (longlong)local_d14.ArrayMax;
      local_d14.ArrayMax = local_d14.ArrayMax + 1;
      *(int *)((longlong)&((ForAnyElementType *)local_d14._4_8_)->Data + lVar35 * 4) =
           (int)local_d14.AllocatorInstance.Data;
      pTVar30 = (TArray<int,TSizedDefaultAllocator<32>_> *)local_d14._4_8_;
    }
    pFVar43 = pFVar43 + 4;
  } while( true );
}

// ApplyGravity @ 14da6dad0

void __cdecl FPVGravity::ApplyGravity(FPVGravityParams *param_1,FManagedArrayCollection *param_2)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  int iVar3;
  ForAnyElementType FVar4;
  undefined1 local_res18 [8];
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_878;
  TArray<int,TSizedDefaultAllocator<32>_> local_868;
  TVector<float>_u_0 local_858;
  TVector<float>_u_0 local_848;
  TQuat<float> local_838;
  FPlantFacade local_828;
  FBranchFacade local_738;
  FPointFacade local_448;
  
  PV::Facades::FBranchFacade::FBranchFacade(&local_738,param_2);
  PV::Facades::FPointFacade::FPointFacade(&local_448,param_2);
  PV::Facades::FPlantFacade::FPlantFacade(&local_828,param_2);
  bVar2 = PV::Facades::FPointFacade::IsValid(&local_448);
  if (((((bVar2) &&
        (local_738.Parents.ConstAttributeArray !=
         (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0)) &&
       (local_738.Children.ConstAttributeArray !=
        (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0)) &&
      (((local_738.BranchPoints.ConstAttributeArray !=
         (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0 &&
        (local_738.BranchNumbers.ConstAttributeArray != (TManagedArray<int> *)0x0)) &&
       ((local_738.BranchSourceBudNumber.ConstAttributeArray != (TManagedArray<int> *)0x0 &&
        ((local_738.BranchHierarchyNumber.ConstAttributeArray != (TManagedArray<int> *)0x0 &&
         (local_738.BranchParentNumbers.ConstAttributeArray != (TManagedArray<int> *)0x0)))))))) &&
     ((local_738.PlantNumbers.ConstAttributeArray != (TManagedArray<int> *)0x0 &&
      ((((local_828.PlantNumbers.ConstAttributeArray != (TManagedArray<int> *)0x0 &&
         (local_828.BranchNumbers.ConstAttributeArray != (TManagedArray<int> *)0x0)) &&
        (local_828.BranchParentNumbers.ConstAttributeArray != (TManagedArray<int> *)0x0)) &&
       (local_828.BranchHierarchyNumbers.ConstAttributeArray != (TManagedArray<int> *)0x0)))))) {
    local_878.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_878.ArrayNum = 0;
    local_878.ArrayMax = 0;
    if (param_1->Mode == Phototropic) {
      GeneratePhototropicData(param_1,&local_738,&local_448,&local_878);
    }
    PV::Facades::FPlantFacade::GetTrunkIndices(&local_828,&local_868);
    iVar3 = local_868.ArrayNum;
    pFVar1 = local_868.AllocatorInstance.Data + (longlong)iVar3 * 4;
    FVar4.Data = local_868.AllocatorInstance.Data;
    while( true ) {
      if (local_868.ArrayNum != iVar3) {
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (FVar4.Data == pFVar1) break;
      local_858._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_848._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_858._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_848._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_838 = UE::Math::TQuat<float>::Identity;
      ApplyGravity(*(int *)FVar4.Data,param_1,&local_878,param_2,&local_838,
                   (TVector<float> *)&local_848._s_0,(TVector<float> *)&local_858._s_0);
      FVar4.Data = FVar4.Data + 4;
    }
    if (local_868.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_868.AllocatorInstance.Data);
    }
    if (local_878.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_878.AllocatorInstance.Data);
    }
  }
  return;
}

// GeneratePhototropicData @ 14da92410

void __cdecl
FPVGravity::GeneratePhototropicData
          (FPVGravityParams *param_1,FBranchFacade *param_2,FPointFacade *param_3,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  TManagedArray<UE::Math::TVector<float>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar4;
  code *pcVar5;
  float fVar6;
  double dVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar14;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar15;
  ulonglong uVar16;
  longlong lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 local_90;
  float local_88;
  
  pTVar2 = (param_3->Positions).ConstAttributeArray;
  local_90 = UE::Math::TVector<float>::UpVector.field0_0x0._0_8_;
  local_88 = UE::Math::TVector<float>::UpVector.field0_0x0._s_0.Z;
  if (pTVar2 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
    uVar9 = FManagedArrayCollection::NumElements
                      ((param_3->Positions).ConstCollection,(param_3->Positions).Group);
  }
  else {
    uVar9 = (**(code **)(*(longlong *)pTVar2 + 0x60))();
  }
  uVar16 = (ulonglong)uVar9;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  piVar1 = &param_4->ArrayMax;
  param_4->ArrayNum = 0;
  if (*piVar1 != uVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,uVar9,&param_4->AllocatorInstance,0,piVar1);
  }
  if (0 < (int)uVar9) {
    do {
      pFVar3 = (param_4->AllocatorInstance).Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_90) &&
          ((FScriptContainerElement *)&local_90 < pFVar3 + (longlong)*piVar1 * 0xc)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar10 = param_4->ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,&param_4->AllocatorInstance,piVar1);
      }
      param_4->ArrayNum = iVar10 + 1;
      pFVar3 = (param_4->AllocatorInstance).Data;
      *(undefined8 *)(pFVar3 + (longlong)iVar10 * 0xc) = local_90;
      *(float *)(pFVar3 + (longlong)iVar10 * 0xc + 8) = local_88;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  dVar7 = __real_3f50624dd2f1a9fc;
  fVar6 = __real_322bcc77;
  iVar10 = 0;
  do {
    pTVar4 = (param_2->Parents).ConstAttributeArray;
    if (pTVar4 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
      iVar11 = FManagedArrayCollection::NumElements
                         ((param_2->Parents).ConstCollection,(param_2->Parents).Group);
    }
    else {
      iVar11 = (**(code **)(*(longlong *)pTVar4 + 0x60))();
    }
    if (iVar11 <= iVar10) {
      return;
    }
    pTVar14 = PV::Facades::FBranchFacade::GetPoints(param_2,iVar10);
    uVar9 = pTVar14->ArrayNum - 1;
    if (0 < (int)uVar9) {
      lVar17 = (longlong)(int)uVar9 * 4;
      do {
        uVar12 = 0;
        if ((int)uVar9 < pTVar14->ArrayNum) {
          uVar12 = ~uVar9 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar11 = *(int *)((pTVar14->AllocatorInstance).Data + lVar17);
        if ((((param_3->BudDirections).ConstAttributeArray ==
              (TManagedArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> *)0x0)
            || (iVar11 < 0)) ||
           (iVar13 = (**(code **)(*(longlong *)(param_3->BudDirections).ConstAttributeArray + 0x60))
                               (), iVar13 <= iVar11)) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
            atexit(`PV::Facades::FPointFacade::GetBudDirection'::__l2::
                   _dynamic_atexit_destructor_for__EmptyArray__);
            _Init_thread_footer(&::_TSS0);
          }
          pTVar15 = &::EmptyArray;
        }
        else {
          pTVar15 = TManagedArrayAccessor<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
                    ::operator[](&param_3->BudDirections,iVar11);
        }
        if (3 < pTVar15->ArrayNum) {
          pFVar3 = (pTVar15->AllocatorInstance).Data;
          fVar18 = param_1->PhototropicBias;
          fVar19 = (*(float *)(pFVar3 + 0x24) - *(float *)(pFVar3 + 0x18)) * fVar18 +
                   *(float *)(pFVar3 + 0x18);
          fVar21 = (*(float *)(pFVar3 + 0x2c) - *(float *)(pFVar3 + 0x20)) * fVar18 +
                   *(float *)(pFVar3 + 0x20);
          fVar20 = (*(float *)(pFVar3 + 0x28) - *(float *)(pFVar3 + 0x1c)) * fVar18 +
                   *(float *)(pFVar3 + 0x1c);
          fVar18 = fVar20 * fVar20 + fVar19 * fVar19 + fVar21 * fVar21;
          if (fVar6 < fVar18) {
            fVar18 = __real_3f800000 / SQRT(fVar18);
            fVar19 = fVar19 * fVar18;
            fVar20 = fVar20 * fVar18;
            fVar21 = fVar21 * fVar18;
          }
          if (dVar7 <= (double)SQRT(fVar20 * fVar20 + fVar19 * fVar19 + fVar21 * fVar21)) {
            local_90 = CONCAT44(fVar20,fVar19);
            local_88 = fVar21;
          }
          else {
            fVar19 = (float)local_90;
            fVar20 = (float)((ulonglong)local_90 >> 0x20);
          }
          fVar18 = local_88;
          if (iVar11 < param_4->ArrayNum) {
            if ((iVar11 < 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar3 = (param_4->AllocatorInstance).Data;
            *(ulonglong *)(pFVar3 + (longlong)iVar11 * 0xc) = CONCAT44(fVar20,fVar19);
            *(float *)(pFVar3 + (longlong)iVar11 * 0xc + 8) = fVar18;
          }
        }
        uVar9 = uVar9 - 1;
        lVar17 = lVar17 + -4;
      } while (0 < (int)uVar9);
    }
    iVar10 = iVar10 + 1;
  } while( true );
}

