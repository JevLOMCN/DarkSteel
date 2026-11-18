// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 7

// StaticStruct @ 14a90cb20

UScriptStruct * __cdecl FPoseSearchQueryTrajectory::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPoseSearchQueryTrajectory.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PoseSearch();
    Z_Registration_Info_UScriptStruct_FPoseSearchQueryTrajectory.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchQueryTrajectory,(UObject *)pUVar1,
                         L"PoseSearchQueryTrajectory");
  }
  return Z_Registration_Info_UScriptStruct_FPoseSearchQueryTrajectory.OuterSingleton;
}

// FPoseSearchQueryTrajectory @ 14a919200

FPoseSearchQueryTrajectory * __thiscall
FPoseSearchQueryTrajectory::FPoseSearchQueryTrajectory
          (FPoseSearchQueryTrajectory *this,FTransformTrajectory *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  FPoseSearchQueryTrajectory *pFVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  
  piVar1 = &(this->Samples).ArrayNum;
  (this->Samples).ArrayMax = 0;
  *piVar1 = 0;
  (this->Samples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar14 = (param_1->Samples).ArrayNum;
  if ((int)uVar14 < 1) {
    if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
    }
  }
  else {
    iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x40,0x10,uVar14,(ForAnyElementType *)this,piVar1,&(this->Samples).ArrayMax)
    ;
    DefaultConstructItems<FPoseSearchQueryTrajectorySample,int>
              ((this->Samples).AllocatorInstance.Data + (longlong)iVar11 * 0x40,uVar14);
  }
  iVar11 = (param_1->Samples).ArrayNum;
  uVar14 = 0;
  if (0 < iVar11) {
    lVar15 = 0;
    do {
      uVar16 = ~uVar14 >> 0x1f;
      uVar12 = 0;
      if ((int)uVar14 < iVar11) {
        uVar12 = uVar16;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        pFVar13 = (FPoseSearchQueryTrajectory *)(*pcVar6)();
        return pFVar13;
      }
      pFVar5 = (param_1->Samples).AllocatorInstance.Data;
      pFVar2 = pFVar5 + lVar15 + 0x20;
      uVar7 = *(undefined8 *)pFVar2;
      uVar8 = *(undefined8 *)(pFVar2 + 8);
      uVar4 = *(undefined8 *)(pFVar5 + lVar15 + 0x30);
      uVar12 = 0;
      if ((int)uVar14 < *piVar1) {
        uVar12 = uVar16;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        pFVar13 = (FPoseSearchQueryTrajectory *)(*pcVar6)();
        return pFVar13;
      }
      pFVar5 = (this->Samples).AllocatorInstance.Data;
      pFVar2 = pFVar5 + lVar15 + 0x20;
      *(undefined8 *)pFVar2 = uVar7;
      *(undefined8 *)(pFVar2 + 8) = uVar8;
      *(undefined8 *)(pFVar5 + lVar15 + 0x30) = uVar4;
      uVar12 = 0;
      if ((int)uVar14 < (param_1->Samples).ArrayNum) {
        uVar12 = uVar16;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        pFVar13 = (FPoseSearchQueryTrajectory *)(*pcVar6)();
        return pFVar13;
      }
      pFVar5 = (param_1->Samples).AllocatorInstance.Data;
      pFVar2 = pFVar5 + lVar15;
      uVar4 = *(undefined8 *)pFVar2;
      uVar7 = *(undefined8 *)(pFVar2 + 8);
      pFVar5 = pFVar5 + lVar15 + 0x10;
      uVar8 = *(undefined8 *)pFVar5;
      uVar9 = *(undefined8 *)(pFVar5 + 8);
      uVar12 = 0;
      if ((int)uVar14 < *piVar1) {
        uVar12 = uVar16;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        pFVar13 = (FPoseSearchQueryTrajectory *)(*pcVar6)();
        return pFVar13;
      }
      pFVar5 = (this->Samples).AllocatorInstance.Data;
      pFVar2 = pFVar5 + lVar15;
      *(undefined8 *)pFVar2 = uVar4;
      *(undefined8 *)(pFVar2 + 8) = uVar7;
      pFVar5 = pFVar5 + lVar15 + 0x10;
      *(undefined8 *)pFVar5 = uVar8;
      *(undefined8 *)(pFVar5 + 8) = uVar9;
      uVar12 = 0;
      if ((int)uVar14 < (param_1->Samples).ArrayNum) {
        uVar12 = uVar16;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        pFVar13 = (FPoseSearchQueryTrajectory *)(*pcVar6)();
        return pFVar13;
      }
      uVar3 = *(undefined4 *)((param_1->Samples).AllocatorInstance.Data + lVar15 + 0x38);
      uVar12 = 0;
      if ((int)uVar14 < *piVar1) {
        uVar12 = uVar16;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        pFVar13 = (FPoseSearchQueryTrajectory *)(*pcVar6)();
        return pFVar13;
      }
      uVar14 = uVar14 + 1;
      *(undefined4 *)((this->Samples).AllocatorInstance.Data + lVar15 + 0x38) = uVar3;
      lVar15 = lVar15 + 0x40;
      iVar11 = (param_1->Samples).ArrayNum;
    } while ((int)uVar14 < iVar11);
  }
  return this;
}

// operator_FTransformTrajectory @ 14a91c0c0

FTransformTrajectory * __thiscall
FPoseSearchQueryTrajectory::operator_FTransformTrajectory
          (FPoseSearchQueryTrajectory *this,FTransformTrajectory *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FTransformTrajectory *pFVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  (__return_storage_ptr__->Samples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Samples).ArrayNum = 0;
  (__return_storage_ptr__->Samples).ArrayMax = 0;
  iVar1 = (this->Samples).ArrayNum;
  pFVar9 = (this->Samples).AllocatorInstance.Data;
  pFVar8 = pFVar9 + (longlong)iVar1 * 0x40;
  while( true ) {
    if ((this->Samples).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FPoseSearchQueryTrajectorySample_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar8) break;
    local_58 = *(undefined8 *)pFVar9;
    uStack_50 = *(undefined8 *)(pFVar9 + 8);
    pFVar2 = (__return_storage_ptr__->Samples).AllocatorInstance.Data;
    local_48 = *(undefined8 *)(pFVar9 + 0x10);
    uStack_40 = *(undefined8 *)(pFVar9 + 0x18);
    local_28 = *(undefined8 *)(pFVar9 + 0x30);
    local_38 = *(undefined8 *)(pFVar9 + 0x20);
    uStack_30 = *(undefined8 *)(pFVar9 + 0x28);
    uStack_20 = *(undefined4 *)(pFVar9 + 0x38);
    if ((pFVar2 <= (FScriptContainerElement *)&local_58) &&
       ((FScriptContainerElement *)&local_58 <
        pFVar2 + (longlong)(__return_storage_ptr__->Samples).ArrayMax * 0x40)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FTransformTrajectory *)(*pcVar3)();
        return pFVar6;
      }
    }
    iVar5 = (__return_storage_ptr__->Samples).ArrayNum;
    if (iVar5 == (__return_storage_ptr__->Samples).ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1040,(ForAnyElementType *)__return_storage_ptr__,
                         &(__return_storage_ptr__->Samples).ArrayMax);
    }
    (__return_storage_ptr__->Samples).ArrayNum = iVar5 + 1;
    pFVar2 = (__return_storage_ptr__->Samples).AllocatorInstance.Data;
    lVar7 = (longlong)iVar5 * 0x40;
    pFVar9 = pFVar9 + 0x40;
    *(undefined8 *)(pFVar2 + lVar7) = local_58;
    *(undefined8 *)(pFVar2 + lVar7 + 8) = uStack_50;
    *(undefined8 *)(pFVar2 + lVar7 + 0x10) = local_48;
    *(undefined8 *)(pFVar2 + lVar7 + 0x10 + 8) = uStack_40;
    *(undefined8 *)(pFVar2 + lVar7 + 0x20) = local_38;
    *(undefined8 *)(pFVar2 + lVar7 + 0x20 + 8) = uStack_30;
    *(undefined8 *)(pFVar2 + lVar7 + 0x30) = local_28;
    *(ulonglong *)(pFVar2 + lVar7 + 0x30 + 8) = CONCAT44(uStack_1c,uStack_20);
  }
  return __return_storage_ptr__;
}

// DebugDrawTrajectory @ 14a9266f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FPoseSearchQueryTrajectory::DebugDrawTrajectory
          (FPoseSearchQueryTrajectory *this,FAnimInstanceProxy *param_1,float param_2,float param_3,
          int param_4,int param_5)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  double dVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  FColor *pFVar18;
  longlong lVar19;
  int iVar20;
  uint uVar21;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qa_00;
  double extraout_XMM0_Qb;
  double dVar22;
  double dVar23;
  uint uVar24;
  float fVar25;
  undefined1 auStackY_208 [32];
  TVector<double>_u_0 local_1b0;
  longlong local_198;
  TVector<double>_u_0 local_190;
  TVector<double>_u_0 local_178;
  TVector<double>_u_0 local_160;
  TVector<double>_u_0 local_148;
  TRotator<double> local_128;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_208;
  iVar20 = 0;
  dVar6 = (double)param_3;
  dVar7 = dVar6 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
  dVar8 = dVar6 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
  dVar6 = dVar6 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
  if ((param_4 != -1) || (param_5 != -1)) {
    iVar13 = (this->Samples).ArrayNum;
    uVar16 = 0;
    if (0 < iVar13) {
      lVar17 = 0;
      do {
        uVar12 = 0;
        if ((int)uVar16 < iVar13) {
          uVar12 = ~uVar16 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (0.0 < *(float *)((this->Samples).AllocatorInstance.Data + lVar17 + 0x38)) break;
        iVar13 = (this->Samples).ArrayNum;
        iVar20 = iVar20 + 1;
        uVar16 = uVar16 + 1;
        lVar17 = lVar17 + 0x40;
      } while ((int)uVar16 < iVar13);
    }
  }
  dVar10 = __real_4028000000000000;
  iVar14 = (this->Samples).ArrayNum;
  iVar13 = iVar14 + -1;
  if (param_4 < 0) {
    uVar16 = 0;
  }
  else {
    uVar16 = 0;
    if (0 < iVar20 - param_4) {
      uVar16 = iVar20 - param_4;
    }
  }
  iVar15 = iVar13;
  if (-1 < param_5) {
    if (iVar20 + param_5 + -1 < iVar13) {
      iVar14 = iVar20 + param_5;
    }
    iVar15 = iVar14 + -1;
  }
  if ((-1 < iVar13) && ((int)uVar16 <= iVar15)) {
    lVar19 = (longlong)(int)uVar16;
    local_198 = (longlong)iVar15;
    lVar17 = lVar19 << 6;
    fVar25 = __real_bf800000;
    while( true ) {
      fVar9 = __real_3f800000;
      uVar21 = ~uVar16 >> 0x1f;
      uVar12 = 0;
      if ((int)uVar16 < (this->Samples).ArrayNum) {
        uVar12 = uVar21;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->Samples).AllocatorInstance.Data;
      local_1b0._s_0.Z = dVar6 + *(double *)(pFVar1 + lVar17 + 0x30);
      local_1b0._s_0.Y = dVar8 + *(double *)(pFVar1 + lVar17 + 0x28);
      local_1b0._s_0.X = dVar7 + *(double *)(pFVar1 + lVar17 + 0x20);
      uVar12 = 0;
      if ((int)uVar16 < (this->Samples).ArrayNum) {
        uVar12 = uVar21;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->Samples).AllocatorInstance.Data;
      local_190._s_0.Z = dVar6 + *(double *)(pFVar1 + lVar17 + 0x30);
      local_190._s_0.Y = dVar8 + *(double *)(pFVar1 + lVar17 + 0x28);
      local_190._s_0.X = dVar7 + *(double *)(pFVar1 + lVar17 + 0x20);
      FAnimInstanceProxy::AnimDrawDebugSphere
                (param_1,(TVector<double> *)&local_190._s_0,fVar9,4,&FColor::Black,false,fVar25,
                 param_2,SDPG_Foreground);
      uVar12 = 0;
      if ((int)uVar16 < (this->Samples).ArrayNum) {
        uVar12 = uVar21;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      UE::Math::TRotator<double>::TRotator<double>
                (&local_128,(TQuat<double> *)((this->Samples).AllocatorInstance.Data + lVar17));
      dVar22 = (double)GlobalVectorConstants::DEG_TO_RAD.m128_f32[0];
      dVar23 = (double)GlobalVectorConstants::DEG_TO_RAD.m128_f32[1];
      __vdecl_sincos2();
      local_108._8_4_ = SUB84(dVar23,0);
      local_108._0_8_ = dVar22;
      local_108._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
      __vdecl_sincos2();
      local_f8._8_4_ = SUB84(dVar23,0);
      local_f8._0_8_ = dVar22;
      local_f8._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
      dVar23 = dVar22 * (double)local_108._8_8_;
      uVar12 = 0;
      if ((int)uVar16 < (this->Samples).ArrayNum) {
        uVar12 = uVar21;
      }
      dVar4 = (double)local_108._8_8_ * (double)local_108._0_8_;
      dVar3 = extraout_XMM0_Qa_00 * extraout_XMM0_Qa * (double)local_108._8_8_;
      dVar5 = (double)local_108._0_8_ * extraout_XMM0_Qb;
      uVar21 = SUB84((double)local_108._0_8_ * extraout_XMM0_Qa_00,0) ^
               (uint)__xmm_80000000000000008000000000000000;
      uVar24 = (uint)((ulonglong)((double)local_108._0_8_ * extraout_XMM0_Qa_00) >> 0x20) ^
               __xmm_80000000000000008000000000000000._4_4_;
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      fVar25 = __real_bf800000;
      pFVar18 = &FColor::Blue;
      bVar11 = *(float *)((this->Samples).AllocatorInstance.Data + lVar17 + 0x38) <= 0.0;
      local_178._s_0.X = dVar4 * dVar10 + local_1b0._s_0.X;
      local_178._s_0.Z = extraout_XMM0_Qa * dVar10 + local_1b0._s_0.Z;
      if (bVar11) {
        pFVar18 = &FColor::Red;
      }
      local_178._s_0.Y = dVar5 * dVar10 + local_1b0._s_0.Y;
      FAnimInstanceProxy::AnimDrawDebugLine
                (param_1,(TVector<double> *)&local_1b0._s_0,(TVector<double> *)&local_178._s_0,
                 pFVar18,false,__real_bf800000,param_2,SDPG_Foreground);
      pFVar18 = &FColor::Turquoise;
      if (bVar11) {
        pFVar18 = &FColor::Orange;
      }
      local_160._s_0.X = (dVar3 - dVar22 * extraout_XMM0_Qb) * dVar10 + local_1b0._s_0.X;
      local_160._s_0.Y =
           (extraout_XMM0_Qa_00 * extraout_XMM0_Qa * extraout_XMM0_Qb + dVar23) * dVar10 +
           local_1b0._s_0.Y;
      local_160._s_0.Z = (double)CONCAT44(uVar24,uVar21) * dVar10 + local_1b0._s_0.Z;
      FAnimInstanceProxy::AnimDrawDebugLine
                (param_1,(TVector<double> *)&local_1b0._s_0,(TVector<double> *)&local_160._s_0,
                 pFVar18,false,fVar25,param_2,SDPG_Foreground);
      if (lVar19 == local_198) break;
      uVar16 = uVar16 + 1;
      uVar12 = 0;
      if ((int)uVar16 < (this->Samples).ArrayNum) {
        uVar12 = ~uVar16 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->Samples).AllocatorInstance.Data;
      local_148._s_0.Z = dVar6 + *(double *)(pFVar1 + lVar17 + 0x70);
      local_148._s_0.Y = dVar8 + *(double *)(pFVar1 + lVar17 + 0x68);
      local_148._s_0.X = dVar7 + *(double *)(pFVar1 + lVar17 + 0x60);
      FAnimInstanceProxy::AnimDrawDebugLine
                (param_1,(TVector<double> *)&local_1b0._s_0,(TVector<double> *)&local_148._s_0,
                 &FColor::Black,false,fVar25,param_2,SDPG_Foreground);
      lVar19 = lVar19 + 1;
      lVar17 = lVar17 + 0x40;
    }
  }
  return;
}

// DebugDrawTrajectory @ 14a926d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FPoseSearchQueryTrajectory::DebugDrawTrajectory
          (FPoseSearchQueryTrajectory *this,UObject *param_1,FLogCategoryBase *param_2,Type param_3,
          float param_4,float param_5)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  double dVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  FColor *pFVar14;
  FName *pFVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qa_00;
  double extraout_XMM0_Qb;
  double dVar20;
  double dVar21;
  uint uVar22;
  undefined1 auStackY_238 [32];
  FVisualLogEntry *local_1f8;
  TVector<double>_u_0 local_1f0;
  UWorld *local_1d8;
  FName *local_1d0;
  longlong local_1c8;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  TVector<double>_u_0 local_180;
  TVector<double>_u_0 local_168;
  TVector<double>_u_0 local_150;
  TRotator<double> local_130;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_238;
  pFVar15 = &param_2->CategoryName;
  local_1d8 = (UWorld *)0x0;
  local_1f8 = (FVisualLogEntry *)0x0;
  local_1d0 = pFVar15;
  bVar11 = FVisualLogger::CheckVisualLogInputInternal(param_1,pFVar15,param_3,&local_1d8,&local_1f8)
  ;
  dVar10 = __real_4028000000000000;
  if (bVar11) {
    iVar12 = (this->Samples).ArrayNum + -1;
    dVar6 = (double)param_5;
    dVar7 = dVar6 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
    dVar8 = dVar6 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
    dVar6 = dVar6 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
    if (-1 < iVar12) {
      lVar16 = 0;
      uVar19 = 0;
      local_1c8 = (longlong)iVar12;
      lVar18 = 0;
      while( true ) {
        fVar9 = __real_3f800000;
        uVar17 = ~uVar19 >> 0x1f;
        uVar13 = 0;
        if ((int)uVar19 < (this->Samples).ArrayNum) {
          uVar13 = uVar17;
        }
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (this->Samples).AllocatorInstance.Data;
        local_1f0._s_0.Z = dVar6 + *(double *)(pFVar1 + lVar18 + 0x30);
        local_1f0._s_0.Y = dVar8 + *(double *)(pFVar1 + lVar18 + 0x28);
        local_1f0._s_0.X = dVar7 + *(double *)(pFVar1 + lVar18 + 0x20);
        ::FString::FString(&local_1c0,L"");
        FVisualLogEntry::AddSphere
                  (local_1f8,(TVector<double> *)&local_1f0._s_0,fVar9,pFVar15,param_3,&FColor::Black
                   ,&local_1c0,true);
        if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
        }
        uVar13 = 0;
        if ((int)uVar19 < (this->Samples).ArrayNum) {
          uVar13 = uVar17;
        }
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        UE::Math::TRotator<double>::TRotator<double>
                  (&local_130,(TQuat<double> *)((this->Samples).AllocatorInstance.Data + lVar18));
        dVar20 = (double)GlobalVectorConstants::DEG_TO_RAD.m128_f32[0];
        dVar21 = (double)GlobalVectorConstants::DEG_TO_RAD.m128_f32[1];
        __vdecl_sincos2();
        local_118._8_4_ = SUB84(dVar21,0);
        local_118._0_8_ = dVar20;
        local_118._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
        __vdecl_sincos2();
        local_108._8_4_ = SUB84(dVar21,0);
        local_108._0_8_ = dVar20;
        local_108._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
        dVar21 = dVar20 * (double)local_118._8_8_;
        uVar13 = 0;
        if ((int)uVar19 < (this->Samples).ArrayNum) {
          uVar13 = uVar17;
        }
        dVar4 = (double)local_118._8_8_ * (double)local_118._0_8_;
        dVar5 = (double)local_118._0_8_ * extraout_XMM0_Qb;
        dVar3 = (double)local_118._8_8_ * extraout_XMM0_Qa_00 * extraout_XMM0_Qa;
        uVar17 = SUB84((double)local_118._0_8_ * extraout_XMM0_Qa_00,0) ^
                 (uint)__xmm_80000000000000008000000000000000;
        uVar22 = (uint)((ulonglong)((double)local_118._0_8_ * extraout_XMM0_Qa_00) >> 0x20) ^
                 __xmm_80000000000000008000000000000000._4_4_;
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        bVar11 = *(float *)((this->Samples).AllocatorInstance.Data + lVar18 + 0x38) <= 0.0;
        ::FString::FString(&local_1b0,L"");
        pFVar15 = local_1d0;
        pFVar14 = &FColor::Blue;
        if (bVar11) {
          pFVar14 = &FColor::Red;
        }
        local_180._s_0.X = dVar4 * dVar10 + local_1f0._s_0.X;
        local_180._s_0.Y = dVar5 * dVar10 + local_1f0._s_0.Y;
        local_180._s_0.Z = extraout_XMM0_Qa * dVar10 + local_1f0._s_0.Z;
        FVisualLogEntry::AddSegment
                  (local_1f8,(TVector<double> *)&local_1f0._s_0,(TVector<double> *)&local_180._s_0,
                   local_1d0,param_3,pFVar14,&local_1b0,(ushort)(int)param_4);
        if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
        }
        ::FString::FString(&local_1a0,L"");
        pFVar14 = &FColor::Turquoise;
        if (bVar11) {
          pFVar14 = &FColor::Orange;
        }
        local_168._s_0.X = (dVar3 - dVar20 * extraout_XMM0_Qb) * dVar10 + local_1f0._s_0.X;
        local_168._s_0.Y =
             (dVar21 + extraout_XMM0_Qb * extraout_XMM0_Qa_00 * extraout_XMM0_Qa) * dVar10 +
             local_1f0._s_0.Y;
        local_168._s_0.Z = (double)CONCAT44(uVar22,uVar17) * dVar10 + local_1f0._s_0.Z;
        FVisualLogEntry::AddSegment
                  (local_1f8,(TVector<double> *)&local_1f0._s_0,(TVector<double> *)&local_168._s_0,
                   pFVar15,param_3,pFVar14,&local_1a0,(ushort)(int)param_4);
        if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
        }
        if (lVar16 == local_1c8) break;
        uVar19 = uVar19 + 1;
        uVar13 = 0;
        if ((int)uVar19 < (this->Samples).ArrayNum) {
          uVar13 = ~uVar19 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (this->Samples).AllocatorInstance.Data;
        local_150._s_0.Z = dVar6 + *(double *)(pFVar1 + lVar18 + 0x70);
        local_150._s_0.Y = dVar8 + *(double *)(pFVar1 + lVar18 + 0x68);
        local_150._s_0.X = dVar7 + *(double *)(pFVar1 + lVar18 + 0x60);
        ::FString::FString(&local_190,L"");
        FVisualLogEntry::AddSegment
                  (local_1f8,(TVector<double> *)&local_1f0._s_0,(TVector<double> *)&local_150._s_0,
                   pFVar15,param_3,&FColor::Black,&local_190,(ushort)(int)param_4);
        if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_190.Data.AllocatorInstance.Data);
        }
        lVar16 = lVar16 + 1;
        lVar18 = lVar18 + 0x40;
      }
    }
  }
  return;
}

// DebugDrawTrajectory @ 14a927380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FPoseSearchQueryTrajectory::DebugDrawTrajectory
          (FPoseSearchQueryTrajectory *this,UWorld *param_1,float param_2,float param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  FColor *pFVar15;
  longlong lVar16;
  uint uVar17;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qa_00;
  double extraout_XMM0_Qb;
  double dVar18;
  double dVar19;
  uint uVar20;
  undefined1 auStackY_1f8 [32];
  TVector<double>_u_0 local_1a8;
  longlong local_190;
  double local_188;
  double local_180;
  TVector<double>_u_0 local_178;
  TVector<double>_u_0 local_160;
  TVector<double>_u_0 local_148;
  TRotator<double> local_128;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  ulonglong local_e8;
  
  dVar9 = __real_4028000000000000;
  fVar8 = __real_bf800000;
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  iVar11 = (this->Samples).ArrayNum + -1;
  dVar6 = (double)param_3;
  dVar18 = dVar6 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
  dVar19 = dVar6 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
  dVar6 = dVar6 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
  if (-1 < iVar11) {
    lVar16 = 0;
    uVar17 = 0;
    local_190 = (longlong)iVar11;
    lVar14 = 0;
    local_188 = dVar19;
    local_180 = dVar18;
    while( true ) {
      fVar7 = __real_3f800000;
      uVar13 = ~uVar17 >> 0x1f;
      uVar12 = 0;
      if ((int)uVar17 < (this->Samples).ArrayNum) {
        uVar12 = uVar13;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->Samples).AllocatorInstance.Data;
      local_1a8._s_0.Z = dVar6 + *(double *)(pFVar1 + lVar14 + 0x30);
      local_1a8._s_0.Y = dVar19 + *(double *)(pFVar1 + lVar14 + 0x28);
      local_1a8._s_0.X = dVar18 + *(double *)(pFVar1 + lVar14 + 0x20);
      DrawDebugSphere(param_1,(TVector<double> *)&local_1a8._s_0,fVar7,4,&FColor::Black,false,fVar8,
                      '\x01',param_2);
      uVar12 = 0;
      if ((int)uVar17 < (this->Samples).ArrayNum) {
        uVar12 = uVar13;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      UE::Math::TRotator<double>::TRotator<double>
                (&local_128,(TQuat<double> *)((this->Samples).AllocatorInstance.Data + lVar14));
      dVar18 = (double)GlobalVectorConstants::DEG_TO_RAD.m128_f32[0];
      dVar19 = (double)GlobalVectorConstants::DEG_TO_RAD.m128_f32[1];
      __vdecl_sincos2();
      local_108._8_4_ = SUB84(dVar19,0);
      local_108._0_8_ = dVar18;
      local_108._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
      __vdecl_sincos2();
      local_f8._8_4_ = SUB84(dVar19,0);
      local_f8._0_8_ = dVar18;
      local_f8._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
      dVar19 = dVar18 * (double)local_108._8_8_;
      uVar12 = 0;
      if ((int)uVar17 < (this->Samples).ArrayNum) {
        uVar12 = uVar13;
      }
      dVar4 = (double)local_108._8_8_ * (double)local_108._0_8_;
      dVar5 = (double)local_108._0_8_ * extraout_XMM0_Qb;
      dVar3 = (double)local_108._8_8_ * extraout_XMM0_Qa_00 * extraout_XMM0_Qa;
      uVar13 = SUB84((double)local_108._0_8_ * extraout_XMM0_Qa_00,0) ^
               (uint)__xmm_80000000000000008000000000000000;
      uVar20 = (uint)((ulonglong)((double)local_108._0_8_ * extraout_XMM0_Qa_00) >> 0x20) ^
               __xmm_80000000000000008000000000000000._4_4_;
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar15 = &FColor::Blue;
      bVar10 = *(float *)((this->Samples).AllocatorInstance.Data + lVar14 + 0x38) <= 0.0;
      local_178._s_0.X = dVar4 * dVar9 + local_1a8._s_0.X;
      local_178._s_0.Y = dVar5 * dVar9 + local_1a8._s_0.Y;
      if (bVar10) {
        pFVar15 = &FColor::Red;
      }
      local_178._s_0.Z = extraout_XMM0_Qa * dVar9 + local_1a8._s_0.Z;
      DrawDebugLine(param_1,(TVector<double> *)&local_1a8._s_0,(TVector<double> *)&local_178._s_0,
                    pFVar15,false,fVar8,'\x01',param_2);
      pFVar15 = &FColor::Turquoise;
      if (bVar10) {
        pFVar15 = &FColor::Orange;
      }
      local_160._s_0.X = (dVar3 - dVar18 * extraout_XMM0_Qb) * dVar9 + local_1a8._s_0.X;
      local_160._s_0.Y =
           (dVar19 + extraout_XMM0_Qb * extraout_XMM0_Qa_00 * extraout_XMM0_Qa) * dVar9 +
           local_1a8._s_0.Y;
      local_160._s_0.Z = (double)CONCAT44(uVar20,uVar13) * dVar9 + local_1a8._s_0.Z;
      DrawDebugLine(param_1,(TVector<double> *)&local_1a8._s_0,(TVector<double> *)&local_160._s_0,
                    pFVar15,false,fVar8,'\x01',param_2);
      if (lVar16 == local_190) break;
      uVar17 = uVar17 + 1;
      uVar12 = 0;
      if ((int)uVar17 < (this->Samples).ArrayNum) {
        uVar12 = ~uVar17 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      dVar18 = local_180;
      dVar19 = local_188;
      pFVar1 = (this->Samples).AllocatorInstance.Data;
      local_148._s_0.Z = dVar6 + *(double *)(pFVar1 + lVar14 + 0x70);
      local_148._s_0.Y = local_188 + *(double *)(pFVar1 + lVar14 + 0x68);
      local_148._s_0.X = local_180 + *(double *)(pFVar1 + lVar14 + 0x60);
      DrawDebugLine(param_1,(TVector<double> *)&local_1a8._s_0,(TVector<double> *)&local_148._s_0,
                    &FColor::Black,false,fVar8,'\x01',param_2);
      lVar16 = lVar16 + 1;
      lVar14 = lVar14 + 0x40;
    }
  }
  return;
}

// GetSampleAtTime @ 14a92c5f0

FPoseSearchQueryTrajectorySample * __thiscall
FPoseSearchQueryTrajectory::GetSampleAtTime
          (FPoseSearchQueryTrajectory *this,FPoseSearchQueryTrajectorySample *__return_storage_ptr__
          ,float param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  double dVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  FPoseSearchQueryTrajectorySample *pFVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  float fVar14;
  
  uVar8 = (this->Samples).ArrayNum;
  if ((int)uVar8 < 2) {
    if ((int)uVar8 < 1) {
      (__return_storage_ptr__->Facing).X = 0.0;
      (__return_storage_ptr__->Facing).Y = 0.0;
      (__return_storage_ptr__->Facing).Z = 0.0;
      (__return_storage_ptr__->Facing).W = 0.0;
      (__return_storage_ptr__->Position).field0_0x0._s_0.X = 0.0;
      (__return_storage_ptr__->Position).field0_0x0._s_0.Y = 0.0;
      (__return_storage_ptr__->Position).field0_0x0._s_0.Z = 0.0;
      *(undefined8 *)&__return_storage_ptr__->AccumulatedSeconds = 0;
      dVar4 = UE::Math::TQuat<double>::Identity.Y;
      (__return_storage_ptr__->Facing).X = UE::Math::TQuat<double>::Identity.X;
      (__return_storage_ptr__->Facing).Y = dVar4;
      dVar4 = UE::Math::TQuat<double>::Identity.W;
      (__return_storage_ptr__->Facing).Z = UE::Math::TQuat<double>::Identity.Z;
      (__return_storage_ptr__->Facing).W = dVar4;
      uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      (__return_storage_ptr__->Position).field0_0x0._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      (__return_storage_ptr__->Position).field0_0x0._s_0.Y = (double)uVar5;
      (__return_storage_ptr__->Position).field0_0x0._s_0.Z =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      __return_storage_ptr__->AccumulatedSeconds = 0.0;
    }
    else {
      pFVar1 = (this->Samples).AllocatorInstance.Data;
      dVar4 = *(double *)(pFVar1 + 8);
      (__return_storage_ptr__->Facing).X = *(double *)pFVar1;
      (__return_storage_ptr__->Facing).Y = dVar4;
      dVar4 = *(double *)(pFVar1 + 0x18);
      (__return_storage_ptr__->Facing).Z = *(double *)(pFVar1 + 0x10);
      (__return_storage_ptr__->Facing).W = dVar4;
      dVar4 = *(double *)(pFVar1 + 0x28);
      (__return_storage_ptr__->Position).field0_0x0._s_0.X = *(double *)(pFVar1 + 0x20);
      (__return_storage_ptr__->Position).field0_0x0._s_0.Y = dVar4;
      uVar5 = *(undefined8 *)(pFVar1 + 0x38);
      (__return_storage_ptr__->Position).field0_0x0._s_0.Z = *(double *)(pFVar1 + 0x30);
      *(undefined8 *)&__return_storage_ptr__->AccumulatedSeconds = uVar5;
    }
  }
  else {
    uVar11 = 0;
    uVar10 = uVar8;
    do {
      iVar2 = (uVar10 >> 1) + uVar11;
      pFVar1 = (this->Samples).AllocatorInstance.Data + (longlong)iVar2 * 0x40 + 0x38;
      if (*(float *)pFVar1 <= param_1 && param_1 != *(float *)pFVar1) {
        uVar11 = iVar2 + (uVar10 & 1);
      }
      uVar7 = uVar10 >> 1;
      uVar10 = uVar10 >> 1;
    } while (uVar7 != 0);
    uVar10 = uVar8 - 1;
    if ((int)uVar11 < (int)(uVar8 - 1)) {
      uVar10 = uVar11;
    }
    uVar11 = 1;
    if (1 < (int)uVar10) {
      uVar11 = uVar10;
    }
    uVar10 = uVar11 - 1;
    uVar13 = ~uVar10 >> 0x1f;
    uVar7 = 0;
    if ((int)uVar10 < (int)uVar8) {
      uVar7 = uVar13;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FPoseSearchQueryTrajectorySample *)(*pcVar3)();
      return pFVar9;
    }
    pFVar1 = (this->Samples).AllocatorInstance.Data;
    lVar12 = (longlong)(int)uVar10 * 0x40;
    uVar8 = 0;
    if ((int)uVar11 < (this->Samples).ArrayNum) {
      uVar8 = ~uVar11 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FPoseSearchQueryTrajectorySample *)(*pcVar3)();
      return pFVar9;
    }
    iVar2 = (this->Samples).ArrayNum;
    fVar14 = *(float *)((this->Samples).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x40 + 0x38
                       ) - *(float *)(pFVar1 + lVar12 + 0x38);
    if ((float)((uint)fVar14 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) {
      uVar8 = 0;
      if ((int)uVar10 < iVar2) {
        uVar8 = uVar13;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FPoseSearchQueryTrajectorySample *)(*pcVar3)();
        return pFVar9;
      }
      pFVar1 = (this->Samples).AllocatorInstance.Data;
      dVar4 = *(double *)(pFVar1 + lVar12 + 8);
      (__return_storage_ptr__->Facing).X = *(double *)(pFVar1 + lVar12);
      (__return_storage_ptr__->Facing).Y = dVar4;
      dVar4 = *(double *)(pFVar1 + lVar12 + 0x10 + 8);
      (__return_storage_ptr__->Facing).Z = *(double *)(pFVar1 + lVar12 + 0x10);
      (__return_storage_ptr__->Facing).W = dVar4;
      dVar4 = *(double *)(pFVar1 + lVar12 + 0x20 + 8);
      (__return_storage_ptr__->Position).field0_0x0._s_0.X = *(double *)(pFVar1 + lVar12 + 0x20);
      (__return_storage_ptr__->Position).field0_0x0._s_0.Y = dVar4;
      uVar5 = *(undefined8 *)(pFVar1 + lVar12 + 0x30 + 8);
      (__return_storage_ptr__->Position).field0_0x0._s_0.Z = *(double *)(pFVar1 + lVar12 + 0x30);
      *(undefined8 *)&__return_storage_ptr__->AccumulatedSeconds = uVar5;
    }
    else {
      uVar8 = 0;
      if ((int)uVar10 < iVar2) {
        uVar8 = uVar13;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FPoseSearchQueryTrajectorySample *)(*pcVar3)();
        return pFVar9;
      }
      fVar14 = (param_1 - *(float *)((this->Samples).AllocatorInstance.Data + lVar12 + 0x38)) /
               fVar14;
      if (!param_2) {
        if (__real_3f800000 <= fVar14) {
          fVar14 = __real_3f800000;
        }
        if (fVar14 <= 0.0) {
          fVar14 = 0.0;
        }
      }
      uVar8 = 0;
      if ((int)uVar10 < (this->Samples).ArrayNum) {
        uVar8 = uVar13;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FPoseSearchQueryTrajectorySample *)(*pcVar3)();
        return pFVar9;
      }
      pFVar1 = (this->Samples).AllocatorInstance.Data;
      uVar8 = 0;
      if ((int)uVar11 < (this->Samples).ArrayNum) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FPoseSearchQueryTrajectorySample *)(*pcVar3)();
        return pFVar9;
      }
      FPoseSearchQueryTrajectorySample::Lerp
                ((FPoseSearchQueryTrajectorySample *)(pFVar1 + lVar12),__return_storage_ptr__,
                 (FPoseSearchQueryTrajectorySample *)
                 ((this->Samples).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x40),fVar14);
    }
  }
  return __return_storage_ptr__;
}

