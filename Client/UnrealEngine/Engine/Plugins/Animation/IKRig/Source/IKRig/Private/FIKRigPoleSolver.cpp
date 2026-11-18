// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 18

// StaticStruct @ 14df068d0

UScriptStruct * __cdecl FIKRigPoleSolver::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRigPoleSolver.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRigPoleSolver.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRigPoleSolver,(UObject *)pUVar1,
                         L"IKRigPoleSolver");
  }
  return Z_Registration_Info_UScriptStruct_FIKRigPoleSolver.OuterSingleton;
}

// Initialize @ 14df06910

void __thiscall FIKRigPoleSolver::Initialize(FIKRigPoleSolver *this,FIKRigSkeleton *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar13;
  ForAnyElementType FVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res18 [8];
  uint local_res20;
  int local_78;
  int local_74;
  TArray<int,TSizedDefaultAllocator<32>_> *local_70;
  ulonglong local_68;
  TArray<int,TSizedDefaultAllocator<32>_> local_60 [2];
  
  pTVar13 = &this->Chain;
  uVar12 = 0;
  piVar1 = &(this->Chain).ArrayMax;
  (this->Chain).ArrayNum = 0;
  local_70 = pTVar13;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar13->AllocatorInstance,0,piVar1);
  }
  local_78 = FIKRigSkeleton::GetBoneIndexFromName(param_1,(this->Settings).EndBone);
  iVar6 = FIKRigSkeleton::GetBoneIndexFromName(param_1,(this->Settings).StartBone);
  if ((local_78 != -1) && (iVar6 != -1)) {
    pFVar3 = (pTVar13->AllocatorInstance).Data;
    if ((pFVar3 <= (FScriptContainerElement *)&local_78) &&
       (((FScriptContainerElement *)&local_78 < pFVar3 + (longlong)*piVar1 * 4 &&
        (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar5)))) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = (this->Chain).ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&pTVar13->AllocatorInstance,piVar1);
    }
    (this->Chain).ArrayNum = iVar7 + 1;
    *(int *)((pTVar13->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_78;
    for (local_78 = FIKRigSkeleton::GetParentIndex(param_1,local_78);
        (local_78 != -1 && (iVar6 <= local_78));
        local_78 = FIKRigSkeleton::GetParentIndex(param_1,local_78)) {
      pFVar3 = (pTVar13->AllocatorInstance).Data;
      if ((pFVar3 <= (FScriptContainerElement *)&local_78) &&
         (((FScriptContainerElement *)&local_78 < pFVar3 + (longlong)*piVar1 * 4 &&
          (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar5)))) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = (this->Chain).ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&pTVar13->AllocatorInstance,piVar1);
      }
      (this->Chain).ArrayNum = iVar7 + 1;
      *(int *)((pTVar13->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_78;
    }
    iVar6 = (this->Chain).ArrayNum;
    if (iVar6 < 3) {
      (this->Chain).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&pTVar13->AllocatorInstance,0,piVar1);
      }
    }
    else {
      pFVar3 = (pTVar13->AllocatorInstance).Data;
      if (0 < iVar6 / 2) {
        uVar10 = uVar12;
        pFVar15 = pFVar3 + (longlong)(iVar6 + -1) * 4;
        do {
          uVar2 = *(undefined4 *)(pFVar3 + uVar10 * 4);
          *(undefined4 *)(pFVar3 + uVar10 * 4) = *(undefined4 *)pFVar15;
          uVar10 = uVar10 + 1;
          *(undefined4 *)pFVar15 = uVar2;
          pFVar15 = pFVar15 + -4;
        } while ((longlong)uVar10 < (longlong)(iVar6 / 2));
      }
      local_60[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_60[0].ArrayNum = 0;
      local_60[0].ArrayMax = 0;
      uVar10 = uVar12;
      if (0 < (this->Chain).ArrayNum + -1) {
        do {
          uVar11 = (uint)uVar12;
          uVar8 = 0;
          if ((int)uVar11 < pTVar13->ArrayNum) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if ((uVar8 == 0) &&
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
          FIKRigSkeleton::GetChildIndices
                    (param_1,*(int *)((pTVar13->AllocatorInstance).Data + uVar10),local_60);
          local_res20 = uVar11 + 1;
          uVar8 = 0;
          if ((int)local_res20 < pTVar13->ArrayNum) {
            uVar8 = ~local_res20 >> 0x1f;
          }
          if ((uVar8 == 0) &&
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
          local_68 = uVar10 + 4;
          iVar7 = local_60[0].ArrayNum;
          iVar6 = *(int *)((pTVar13->AllocatorInstance).Data + local_68);
          pFVar3 = local_60[0].AllocatorInstance.Data + (longlong)local_60[0].ArrayNum * 4;
          FVar14.Data = local_60[0].AllocatorInstance.Data;
          while( true ) {
            if (local_60[0].ArrayNum != iVar7) {
              local_res18[0] = 0;
              `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_res18);
            }
            if (FVar14.Data == pFVar3) break;
            local_74 = *(int *)FVar14.Data;
            if (local_74 != iVar6) {
              pFVar15 = (this->ChildrenToUpdate).AllocatorInstance.Data;
              if (((pFVar15 <= (FScriptContainerElement *)&local_74) &&
                  ((FScriptContainerElement *)&local_74 <
                   pFVar15 + (longlong)(this->ChildrenToUpdate).ArrayMax * 4)) &&
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
              iVar9 = (this->ChildrenToUpdate).ArrayNum;
              piVar1 = &(this->ChildrenToUpdate).ArrayMax;
              if (iVar9 == *piVar1) {
                iVar9 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&(this->ChildrenToUpdate).AllocatorInstance,piVar1);
              }
              (this->ChildrenToUpdate).ArrayNum = iVar9 + 1;
              *(int *)((this->ChildrenToUpdate).AllocatorInstance.Data + (longlong)iVar9 * 4) =
                   local_74;
              GatherChildren(local_74,param_1,&this->ChildrenToUpdate);
            }
            FVar14.Data = FVar14.Data + 4;
          }
          uVar12 = (ulonglong)local_res20;
          pTVar13 = local_70;
          uVar10 = local_68;
        } while ((int)local_res20 < (this->Chain).ArrayNum + -1);
      }
      if (local_60[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60[0].AllocatorInstance.Data);
      }
    }
  }
  return;
}

// Solve @ 14df06da0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FIKRigPoleSolver::Solve(FIKRigPoleSolver *this,FIKRigSkeleton *param_1,FIKRigGoalContainer *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  ulonglong uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  bool bVar15;
  TQuat<double> *pTVar16;
  TQuat<double> *pTVar17;
  int iVar18;
  FName *pFVar19;
  uint uVar20;
  FName *pFVar21;
  FScriptContainerElement *pFVar22;
  longlong lVar23;
  ulonglong uVar24;
  longlong lVar25;
  ulonglong uVar26;
  double dVar27;
  undefined1 auVar28 [16];
  double dVar32;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  uint uVar33;
  uint uVar34;
  double dVar35;
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  uint uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined1 local_res8 [8];
  TQuat<double> local_2c8;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  TVector<double>_u_0 local_290;
  TVector<double>_u_0 local_278;
  TVector<double>_u_0 local_260;
  TVector<double>_u_0 local_248;
  TVector<double>_u_0 local_230;
  TVector<double>_u_0 local_218;
  TVector<double>_u_0 local_200;
  TVector<double>_u_0 local_1e8;
  TVector<double>_u_0 local_1d0;
  TVector<double>_u_0 local_1b8;
  double local_1a0;
  undefined8 local_198;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  TQuat<double> local_158;
  double local_138;
  double dStack_130;
  double local_128;
  TQuat<double> local_e8 [6];
  double dVar36;
  
  if (2 < (this->Chain).ArrayNum) {
    pFVar21 = (FName *)(param_2->Goals).AllocatorInstance.Data;
    pFVar19 = pFVar21 + (longlong)(param_2->Goals).ArrayNum * 0x16;
    for (; pFVar21 != pFVar19; pFVar21 = pFVar21 + 0x16) {
      if (*pFVar21 == (this->Settings).AimAtGoal) {
        if ((this->Settings).Alpha <= __real_38d1b717) {
          return;
        }
        uVar33 = *(uint *)(this->Chain).AllocatorInstance.Data;
        if (((this->Chain).ArrayNum < 2) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar18 = (this->Chain).ArrayNum;
        uVar20 = iVar18 - 1;
        uVar34 = *(uint *)((this->Chain).AllocatorInstance.Data + 4);
        uVar43 = 0;
        if ((int)uVar20 < iVar18) {
          uVar43 = ~uVar20 >> 0x1f;
        }
        if ((uVar43 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar43 = *(uint *)((this->Chain).AllocatorInstance.Data +
                          (longlong)(this->Chain).ArrayNum * 4 + -4);
        uVar20 = 0;
        if ((int)uVar33 < (param_1->CurrentPoseGlobal).ArrayNum) {
          uVar20 = ~uVar33 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar22 = (param_1->CurrentPoseGlobal).AllocatorInstance.Data;
        pFVar1 = pFVar22 + (longlong)(int)uVar33 * 0x60 + 0x20;
        dVar13 = *(double *)pFVar1;
        dVar14 = *(double *)(pFVar1 + 8);
        dVar12 = *(double *)(pFVar22 + (longlong)(int)uVar33 * 0x60 + 0x30);
        uVar33 = 0;
        if ((int)uVar34 < (param_1->CurrentPoseGlobal).ArrayNum) {
          uVar33 = ~uVar34 >> 0x1f;
        }
        if ((uVar33 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar22 = (param_1->CurrentPoseGlobal).AllocatorInstance.Data;
        pFVar1 = pFVar22 + (longlong)(int)uVar34 * 0x60 + 0x20;
        local_2a8 = *(double *)pFVar1;
        dStack_2a0 = *(double *)(pFVar1 + 8);
        local_298 = *(double *)(pFVar22 + (longlong)(int)uVar34 * 0x60 + 0x30);
        uVar33 = 0;
        if ((int)uVar43 < (param_1->CurrentPoseGlobal).ArrayNum) {
          uVar33 = ~uVar43 >> 0x1f;
        }
        if ((uVar33 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        dVar37 = __real_3e45798ee0000000;
        pFVar22 = (param_1->CurrentPoseGlobal).AllocatorInstance.Data;
        uVar44 = SUB84(__real_3e45798ee0000000,0);
        uVar45 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
        pFVar1 = pFVar22 + (longlong)(int)uVar43 * 0x60 + 0x20;
        local_138 = *(double *)pFVar1;
        dStack_130 = *(double *)(pFVar1 + 8);
        local_128 = *(double *)(pFVar22 + (longlong)(int)uVar43 * 0x60 + 0x30);
        local_260._s_0.X = local_138 - dVar13;
        local_260._s_0.Z = local_128 - dVar12;
        local_260._s_0.Y = dStack_130 - dVar14;
        UE::Math::TVector<double>::GetSafeNormal
                  ((TVector<double> *)&local_260._s_0,(TVector<double> *)&local_230._s_0,
                   __real_3e45798ee0000000,&UE::Math::TVector<double>::ZeroVector);
        local_248._s_0.X = local_2a8 - dVar13;
        local_248._s_0.Y = dStack_2a0 - dVar14;
        local_248._s_0.Z = local_298 - dVar12;
        UE::Math::TVector<double>::GetSafeNormal
                  ((TVector<double> *)&local_248._s_0,(TVector<double> *)&local_218._s_0,dVar37,
                   &UE::Math::TVector<double>::ZeroVector);
        if (((local_230._s_0.X == 0.0) && (local_230._s_0.Y == 0.0)) && (local_230._s_0.Z == 0.0)) {
          return;
        }
        if (((local_218._s_0.X == 0.0) && (local_218._s_0.Y == 0.0)) && (local_218._s_0.Z == 0.0)) {
          return;
        }
        local_200._s_0.Y = local_218._s_0.X * local_230._s_0.Z - local_218._s_0.Z * local_230._s_0.X
        ;
        local_200._s_0.X = local_218._s_0.Z * local_230._s_0.Y - local_218._s_0.Y * local_230._s_0.Z
        ;
        local_200._s_0.Z = local_218._s_0.Y * local_230._s_0.X - local_218._s_0.X * local_230._s_0.Y
        ;
        UE::Math::TVector<double>::GetSafeNormal
                  ((TVector<double> *)&local_200._s_0,(TVector<double> *)&local_278._s_0,dVar37,
                   &UE::Math::TVector<double>::ZeroVector);
        local_1e8._s_0.X = (double)pFVar21[0xd] - dVar13;
        local_1e8._s_0.Y = (double)pFVar21[0xe] - dVar14;
        local_1e8._s_0.Z = (double)pFVar21[0xf] - dVar12;
        UE::Math::TVector<double>::GetSafeNormal
                  ((TVector<double> *)&local_1e8._s_0,(TVector<double> *)&local_1d0._s_0,dVar37,
                   &UE::Math::TVector<double>::ZeroVector);
        if (((local_1d0._s_0.X == 0.0) && (local_1d0._s_0.Y == 0.0)) && (local_1d0._s_0.Z == 0.0)) {
          return;
        }
        local_1b8._s_0.Y = local_1d0._s_0.X * local_230._s_0.Z - local_1d0._s_0.Z * local_230._s_0.X
        ;
        local_1b8._s_0.X = local_1d0._s_0.Z * local_230._s_0.Y - local_1d0._s_0.Y * local_230._s_0.Z
        ;
        local_1b8._s_0.Z = local_1d0._s_0.Y * local_230._s_0.X - local_1d0._s_0.X * local_230._s_0.Y
        ;
        UE::Math::TVector<double>::GetSafeNormal
                  ((TVector<double> *)&local_1b8._s_0,(TVector<double> *)&local_290._s_0,dVar37,
                   &UE::Math::TVector<double>::ZeroVector);
        if (((local_278._s_0.X == 0.0) && (local_278._s_0.Y == 0.0)) && (local_278._s_0.Z == 0.0)) {
          return;
        }
        uVar33 = SUB84(local_278._s_0.X - local_290._s_0.X,0) &
                 (uint)__xmm_7fffffffffffffff7fffffffffffffff;
        uVar34 = (uint)((ulonglong)(local_278._s_0.X - local_290._s_0.X) >> 0x20) &
                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        if ((((double)CONCAT44(uVar34,uVar33) < __real_3f1a36e2e0000000 ||
              (double)CONCAT44(uVar34,uVar33) == __real_3f1a36e2e0000000) &&
            ((double)CONCAT44((uint)((ulonglong)(local_278._s_0.Y - local_290._s_0.Y) >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(local_278._s_0.Y - local_290._s_0.Y,0) &
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
             __real_3f1a36e2e0000000)) &&
           (uVar33 = SUB84(local_278._s_0.Z - local_290._s_0.Z,0) &
                     (uint)__xmm_7fffffffffffffff7fffffffffffffff,
           uVar34 = (uint)((ulonglong)(local_278._s_0.Z - local_290._s_0.Z) >> 0x20) &
                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
           (double)CONCAT44(uVar34,uVar33) < __real_3f1a36e2e0000000 ||
           (double)CONCAT44(uVar34,uVar33) == __real_3f1a36e2e0000000)) {
          return;
        }
        pTVar17 = &local_2c8;
        pTVar16 = UE::Math::TQuat<double>::FindBetweenNormals
                            (pTVar17,(TVector<double> *)&local_278._s_0,
                             (TVector<double> *)&local_290._s_0);
        local_1a0 = dVar37;
        auVar41._0_8_ =
             (double)CONCAT44((uint)((ulonglong)(local_2c8.X + UE::Math::TQuat<double>::Identity.X)
                                    >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(local_2c8.X + UE::Math::TQuat<double>::Identity.X,0) &
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff);
        auVar41._8_4_ = SUB84(local_2c8.Y + UE::Math::TQuat<double>::Identity.Y,0) & _UNK_15061cc88;
        auVar41._12_4_ =
             (uint)((ulonglong)(local_2c8.Y + UE::Math::TQuat<double>::Identity.Y) >> 0x20) &
             _UNK_15061cc8c;
        lVar25 = -(ulonglong)
                  (dVar37 < (double)CONCAT44((uint)((ulonglong)
                                                    (local_2c8.W -
                                                    UE::Math::TQuat<double>::Identity.W) >> 0x20) &
                                             _UNK_15061cc8c,
                                             SUB84(local_2c8.W - UE::Math::TQuat<double>::Identity.W
                                                   ,0) & _UNK_15061cc88));
        auVar29._8_4_ = (int)lVar25;
        auVar29._0_8_ =
             -(ulonglong)
              (dVar37 < (double)CONCAT44((uint)((ulonglong)
                                                (local_2c8.Z - UE::Math::TQuat<double>::Identity.Z)
                                               >> 0x20) &
                                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                         SUB84(local_2c8.Z - UE::Math::TQuat<double>::Identity.Z,0)
                                         & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
        auVar29._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
        iVar18 = movmskpd((int)pTVar17,auVar29);
        lVar25 = -(ulonglong)
                  (dVar37 < (double)CONCAT44((uint)((ulonglong)
                                                    (local_2c8.Y -
                                                    UE::Math::TQuat<double>::Identity.Y) >> 0x20) &
                                             _UNK_15061cc8c,
                                             SUB84(local_2c8.Y - UE::Math::TQuat<double>::Identity.Y
                                                   ,0) & _UNK_15061cc88));
        auVar40._8_4_ = (int)lVar25;
        auVar40._0_8_ =
             -(ulonglong)
              (dVar37 < (double)CONCAT44((uint)((ulonglong)
                                                (local_2c8.X - UE::Math::TQuat<double>::Identity.X)
                                               >> 0x20) &
                                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                         SUB84(local_2c8.X - UE::Math::TQuat<double>::Identity.X,0)
                                         & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
        auVar40._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
        uVar33 = movmskpd((int)pTVar16,auVar40);
        uVar34 = iVar18 << 2 | uVar33;
        if (uVar34 == 0) {
          return;
        }
        lVar25 = -(ulonglong)
                  (dVar37 < (double)CONCAT44((uint)((ulonglong)
                                                    (UE::Math::TQuat<double>::Identity.W +
                                                    local_2c8.W) >> 0x20) & _UNK_15061cc8c,
                                             SUB84(UE::Math::TQuat<double>::Identity.W + local_2c8.W
                                                   ,0) & _UNK_15061cc88));
        auVar3._8_4_ = (int)lVar25;
        auVar3._0_8_ = -(ulonglong)
                        (dVar37 < (double)CONCAT44((uint)((ulonglong)
                                                          (UE::Math::TQuat<double>::Identity.Z +
                                                          local_2c8.Z) >> 0x20) &
                                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                                   SUB84(UE::Math::TQuat<double>::Identity.Z +
                                                         local_2c8.Z,0) &
                                                   (uint)__xmm_7fffffffffffffff7fffffffffffffff));
        auVar3._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
        uVar34 = movmskpd(uVar34,auVar3);
        auVar38._8_8_ = -(ulonglong)(dVar37 < auVar41._8_8_);
        auVar38._0_8_ = -(ulonglong)(dVar37 < auVar41._0_8_);
        iVar18 = movmskpd(uVar33,auVar38);
        if ((uVar34 & 0x3fffffff) == 0 && iVar18 == 0) {
          return;
        }
        uVar33 = 0;
        if (0 < (this->Chain).ArrayNum + -1) {
          lVar25 = 0;
          do {
            uVar34 = 0;
            if ((int)uVar33 < (this->Chain).ArrayNum) {
              uVar34 = ~uVar33 >> 0x1f;
            }
            if ((uVar34 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            uVar34 = *(uint *)((this->Chain).AllocatorInstance.Data + lVar25);
            uVar43 = 0;
            if ((int)uVar34 < (param_1->CurrentPoseGlobal).ArrayNum) {
              uVar43 = ~uVar34 >> 0x1f;
            }
            if ((uVar43 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pFVar1 = (param_1->CurrentPoseGlobal).AllocatorInstance.Data;
            lVar23 = (longlong)(int)uVar34 * 0x60;
            auVar28._8_4_ = SUB84(local_2c8.Y,0);
            auVar28._0_8_ = local_2c8.Y;
            auVar28._12_4_ = (int)((ulonglong)local_2c8.Y >> 0x20);
            local_158.Z = *(double *)(pFVar1 + lVar23 + 0x10);
            local_158.W = *(double *)(pFVar1 + lVar23 + 0x10 + 8);
            local_158.X = *(double *)(pFVar1 + lVar23);
            local_158.Y = *(double *)(pFVar1 + lVar23 + 8);
            dVar37 = local_2c8.X * local_158.Z *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                     local_2c8.W * local_158.Y +
                     auVar28._8_8_ * local_158.W *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                     local_2c8.Z * local_158.X *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
            dVar27 = local_2c8.X * local_158.X *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                     local_2c8.W * local_158.W +
                     local_2c8.Y * local_158.Y *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                     local_2c8.Z * local_158.Z *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
            auVar39._0_8_ = (double)(this->Settings).Alpha;
            auVar39._8_8_ = 0;
            local_178._8_4_ = SUB84(dVar37,0);
            local_178._0_8_ =
                 local_2c8.X * local_158.W *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                 local_2c8.W * local_158.X +
                 local_2c8.Y * local_158.Z *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                 local_2c8.Z * local_158.Y *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
            local_178._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
            local_168._8_4_ = SUB84(dVar27,0);
            local_168._0_8_ =
                 local_2c8.X * local_158.Y *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                 local_2c8.W * local_158.Z +
                 local_2c8.Y * local_158.X *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                 local_2c8.Z * local_158.W *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
            local_168._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
            pTVar17 = UE::Math::TQuat<double>::Slerp_NotNormalized
                                (local_e8,&local_158,(TQuat<double> *)local_178,auVar39._0_8_);
            local_198 = CONCAT44(uVar45,uVar44);
            dVar6 = pTVar17->X;
            dVar8 = pTVar17->Y;
            dVar9 = pTVar17->Z;
            dVar10 = pTVar17->W;
            dVar27 = dVar9 * dVar9 + dVar6 * dVar6;
            dVar32 = dVar10 * dVar10 + dVar8 * dVar8;
            dVar37 = dVar32 + dVar27;
            dVar27 = dVar27 + dVar32;
            auVar4._8_4_ = SUB84(dVar27,0);
            auVar4._0_8_ = dVar37;
            auVar4._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
            auVar40 = sqrtpd(auVar39,auVar4);
            uVar24 = -(ulonglong)((double)CONCAT44(uVar45,uVar44) <= dVar37);
            uVar26 = -(ulonglong)((double)CONCAT44(uVar45,uVar44) <= dVar27);
            uVar34 = (uint)(uVar24 >> 0x20);
            uVar43 = (uint)(uVar26 >> 0x20);
            auVar29 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar40)
            ;
            auVar30._0_8_ = uVar24 & (ulonglong)(auVar29._0_8_ * dVar9);
            uVar11 = uVar26 & (ulonglong)(auVar29._8_8_ * dVar10);
            auVar30._8_4_ = (undefined4)uVar11;
            auVar30._12_4_ = (undefined4)(uVar11 >> 0x20);
            auVar42._0_4_ =
                 ~(uint)uVar24 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
            auVar42._4_4_ =
                 ~uVar34 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >>
                                 0x20);
            auVar42._8_4_ =
                 ~(uint)uVar26 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
            auVar42._12_4_ =
                 ~uVar43 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >>
                                 0x20);
            auVar29 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar40)
            ;
            auVar31._0_8_ = (ulonglong)(auVar29._0_8_ * dVar6) & uVar24;
            uVar11 = (ulonglong)(auVar29._8_8_ * dVar8) & uVar26;
            auVar31._8_4_ = (undefined4)uVar11;
            auVar31._12_4_ = (undefined4)(uVar11 >> 0x20);
            auVar5._4_4_ = ~uVar34 & (uint)((ulonglong)
                                            (double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                                           0x20);
            auVar5._0_4_ = ~(uint)uVar24 &
                           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
            auVar5._8_4_ = ~(uint)uVar26 &
                           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
            auVar5._12_4_ =
                 ~uVar43 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >>
                                 0x20);
            *(undefined1 (*) [16])(pFVar1 + lVar23) = auVar31 | auVar5;
            *(undefined1 (*) [16])(pFVar1 + lVar23 + 0x10) = auVar42 | auVar30;
            auVar29 = *(undefined1 (*) [16])(pFVar1 + lVar23 + 0x20);
            dVar32 = *(double *)(pFVar1 + lVar23 + 0x30) - dVar12;
            dVar36 = auVar29._0_8_;
            dVar35 = dVar36 - dVar13;
            dVar37 = auVar29._8_8_;
            local_188._8_4_ = auVar29._8_4_;
            local_188._0_8_ = dVar37;
            local_188._12_4_ = auVar29._12_4_;
            dVar8 = dVar37 - dVar14;
            dVar27 = (double)(this->Settings).Alpha;
            dVar9 = dVar32 * local_2c8.Y - dVar8 * local_2c8.Z;
            dVar9 = dVar9 + dVar9;
            dVar10 = dVar35 * local_2c8.Z - dVar32 * local_2c8.X;
            dVar10 = dVar10 + dVar10;
            dVar6 = dVar8 * local_2c8.X - dVar35 * local_2c8.Y;
            dVar6 = dVar6 + dVar6;
            dVar37 = (((dVar9 * local_2c8.Z - dVar6 * local_2c8.X) + dVar10 * local_2c8.W + dVar8 +
                      dVar14) - dVar37) * dVar27 + dVar37;
            uVar33 = uVar33 + 1;
            auVar7._8_4_ = SUB84(dVar37,0);
            auVar7._0_8_ = (((dVar6 * local_2c8.Y - dVar10 * local_2c8.Z) +
                             dVar9 * local_2c8.W + dVar35 + dVar13) - dVar36) * dVar27 + dVar36;
            auVar7._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
            *(undefined1 (*) [16])(pFVar1 + lVar23 + 0x20) = auVar7;
            lVar25 = lVar25 + 4;
            *(double *)(pFVar1 + lVar23 + 0x30) =
                 (((dVar10 * local_2c8.X - dVar9 * local_2c8.Y) + dVar6 * local_2c8.W + dVar32 +
                  dVar12) - *(double *)(pFVar1 + lVar23 + 0x30)) * dVar27 +
                 *(double *)(pFVar1 + lVar23 + 0x30);
            *(double *)(pFVar1 + lVar23 + 0x30 + 8) = 0.0;
            uVar44 = SUB84(__real_3e45798ee0000000,0);
            uVar45 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
          } while ((int)uVar33 < (this->Chain).ArrayNum + -1);
        }
        pFVar22 = (this->ChildrenToUpdate).AllocatorInstance.Data;
        iVar18 = (this->ChildrenToUpdate).ArrayNum;
        pFVar1 = pFVar22 + (longlong)iVar18 * 4;
        while( true ) {
          if ((this->ChildrenToUpdate).ArrayNum != iVar18) {
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res8);
          }
          if (pFVar22 == pFVar1) break;
          FIKRigSkeleton::UpdateGlobalTransformFromLocal(param_1,*(int *)pFVar22);
          pFVar22 = pFVar22 + 4;
        }
        return;
      }
    }
  }
  return;
}

// GetRequiredBones @ 14df07830

void __thiscall
FIKRigPoleSolver::GetRequiredBones
          (FIKRigPoleSolver *this,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_1
          )

{
  FName local_res8;
  
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
            (param_1,&local_res8,(bool *)&(this->Settings).StartBone);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
            (param_1,&local_res8,(bool *)&(this->Settings).EndBone);
  return;
}

// GetRequiredGoals @ 14df07880

void __thiscall
FIKRigPoleSolver::GetRequiredGoals
          (FIKRigPoleSolver *this,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_1
          )

{
  FName local_res8 [4];
  
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
            (param_1,local_res8,(bool *)&(this->Settings).AimAtGoal);
  return;
}

// GetSolverSettings @ 14df078b0

FIKRigSolverSettingsBase * __thiscall FIKRigPoleSolver::GetSolverSettings(FIKRigPoleSolver *this)

{
  return (FIKRigSolverSettingsBase *)&this->Settings;
}

// GetSolverSettingsType @ 14df078c0

UScriptStruct * __thiscall FIKRigPoleSolver::GetSolverSettingsType(FIKRigPoleSolver *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRigPoleSolverSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRigPoleSolverSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRigPoleSolverSettings,(UObject *)pUVar1,
                         L"IKRigPoleSolverSettings");
  }
  return Z_Registration_Info_UScriptStruct_FIKRigPoleSolverSettings.OuterSingleton;
}

// AddGoal @ 14df07900

void __thiscall FIKRigPoleSolver::AddGoal(FIKRigPoleSolver *this,UIKRigEffectorGoal *param_1)

{
  (this->Settings).AimAtGoal = param_1->GoalName;
  return;
}

// OnGoalRenamed @ 14df07910

void __thiscall
FIKRigPoleSolver::OnGoalRenamed(FIKRigPoleSolver *this,FName *param_1,FName *param_2)

{
  if ((this->Settings).AimAtGoal == *param_1) {
    (this->Settings).AimAtGoal = *param_2;
  }
  return;
}

// OnGoalRemoved @ 14df07970

void __thiscall FIKRigPoleSolver::OnGoalRemoved(FIKRigPoleSolver *this,FName *param_1)

{
  if ((this->Settings).AimAtGoal == *param_1) {
    (this->Settings).AimAtGoal.ComparisonIndex = 0;
    (this->Settings).AimAtGoal.Number = 0;
  }
  return;
}

// OnGoalMovedToDifferentBone @ 14df07990

void __thiscall
FIKRigPoleSolver::OnGoalMovedToDifferentBone(FIKRigPoleSolver *this,FName *param_1,FName *param_2)

{
  if ((this->Settings).AimAtGoal == *param_1) {
    (this->Settings).EndBone = *param_2;
  }
  return;
}

// UsesStartBone @ 14df079b0

bool __thiscall FIKRigPoleSolver::UsesStartBone(FIKRigPoleSolver *this)

{
  return true;
}

// SetStartBone @ 14df079c0

void __thiscall FIKRigPoleSolver::SetStartBone(FIKRigPoleSolver *this,FName *param_1)

{
  (this->Settings).StartBone = *param_1;
  return;
}

// GetStartBone @ 14df079d0

FName __thiscall FIKRigPoleSolver::GetStartBone(FIKRigPoleSolver *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = (this->Settings).StartBone;
  return in_RDX;
}

// UsesEndBone @ 14df079f0

bool __thiscall FIKRigPoleSolver::UsesEndBone(FIKRigPoleSolver *this)

{
  return true;
}

// SetEndBone @ 14df07a00

void __thiscall FIKRigPoleSolver::SetEndBone(FIKRigPoleSolver *this,FName *param_1)

{
  (this->Settings).EndBone = *param_1;
  return;
}

// GetEndBone @ 14df07a10

FName __thiscall FIKRigPoleSolver::GetEndBone(FIKRigPoleSolver *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = (this->Settings).EndBone;
  return in_RDX;
}

// GatherChildren @ 14df33eb0

void __cdecl
FIKRigPoleSolver::GatherChildren
          (int param_1,FIKRigSkeleton *param_2,TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  ForAnyElementType FVar8;
  undefined1 local_res20 [8];
  int local_38 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_30;
  
  local_30.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.ArrayNum = 0;
  local_30.ArrayMax = 0;
  FIKRigSkeleton::GetChildIndices(param_2,param_1,&local_30);
  iVar4 = local_30.ArrayNum;
  uVar7 = (ulonglong)local_30.ArrayNum;
  pFVar1 = local_30.AllocatorInstance.Data + uVar7 * 4;
  FVar8.Data = local_30.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar7 != iVar4) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (FVar8.Data == pFVar1) break;
    local_38[0] = *(int *)FVar8.Data;
    pFVar2 = (param_3->AllocatorInstance).Data;
    if ((pFVar2 <= (FScriptContainerElement *)local_38) &&
       ((FScriptContainerElement *)local_38 < pFVar2 + (longlong)param_3->ArrayMax * 4)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar6 = param_3->ArrayNum;
    if (iVar6 == param_3->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&param_3->AllocatorInstance,&param_3->ArrayMax);
      param_3->ArrayNum = iVar6;
    }
    param_3->ArrayNum = iVar6 + 1;
    *(int *)((param_3->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_38[0];
    GatherChildren(local_38[0],param_2,param_3);
    uVar7 = local_30._8_8_ & 0xffffffff;
    FVar8.Data = FVar8.Data + 4;
  }
  if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.AllocatorInstance.Data);
  }
  return;
}

