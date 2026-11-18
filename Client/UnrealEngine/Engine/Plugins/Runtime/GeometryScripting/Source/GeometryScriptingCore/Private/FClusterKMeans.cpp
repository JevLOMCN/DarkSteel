// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 3

// ComputeClusters<UE::Math::TVector<double>,0> @ 14ceab060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
UE::Geometry::FClusterKMeans::ComputeClusters<UE::Math::TVector<double>,0>
          (FClusterKMeans *this,TArrayView<UE::Math::TVector<double>_const_,int> *param_1,
          int param_2,TArrayView<UE::Math::TVector<double>_const_,int> *param_3,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  TArray<std::atomic<int>,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined4 uVar3;
  FScriptContainerElement *pFVar4;
  TVector<double> *pTVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  TArrayView<UE::Math::TVector<double>_const_,int> *pTVar14;
  ForAnyElementType FVar15;
  bool bVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  FScriptContainerElement *pFVar25;
  TArrayView<UE::Math::TVector<double>_const_,int> *pTVar26;
  longlong lVar27;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar28;
  ulonglong uVar29;
  longlong lVar30;
  uint uVar31;
  longlong lVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 auStackY_1b8 [32];
  undefined1 local_160 [4];
  uint local_15c;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_158;
  ForAnyElementType local_150;
  undefined8 local_148;
  uint local_140;
  longlong local_138;
  TArrayView<UE::Math::TVector<double>_const_,int> *local_130;
  TArray<int,TSizedDefaultAllocator<32>_> local_128;
  longlong local_118;
  longlong local_110;
  int local_108;
  int local_104;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_100;
  TVector<double> *local_f0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  FScriptContainerElement *local_b8 [2];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_a8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  iVar18 = param_1->ArrayNum;
  uVar29 = (ulonglong)iVar18;
  if (iVar18 == 0) {
    uVar21 = 0;
  }
  else {
    uVar21 = 0;
    local_158 = &local_100;
    local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_100.ArrayNum = 0;
    local_100.ArrayMax = 0;
    pTVar28 = local_158;
    local_130 = param_1;
    if (param_4 != (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
      local_158 = param_4;
      param_4->ArrayNum = 0;
      pTVar28 = param_4;
      if (param_4->ArrayMax < 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,&param_4->AllocatorInstance,0,&param_4->ArrayMax);
      }
    }
    iVar19 = param_3->ArrayNum;
    if (iVar19 == 0) {
      local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_128.ArrayNum = 0;
      local_128.ArrayMax = 0;
      TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_128,iVar18,Default);
      if (0 < iVar18) {
        lVar27 = 0;
        do {
          uVar23 = 0;
          if ((int)uVar21 < local_128.ArrayNum) {
            uVar23 = ~uVar21 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar7 = (code *)swi(3);
            iVar18 = (*pcVar7)();
            return iVar18;
          }
          *(uint *)(local_128.AllocatorInstance.Data + lVar27 * 4) = uVar21;
          uVar21 = uVar21 + 1;
          lVar27 = lVar27 + 1;
        } while (lVar27 < (longlong)uVar29);
      }
      if (param_1->ArrayNum < param_2) {
        param_2 = param_1->ArrayNum;
      }
      if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
      }
      piVar1 = &pTVar28->ArrayMax;
      if (pTVar28->ArrayMax < param_2) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,param_2,&pTVar28->AllocatorInstance,pTVar28->ArrayNum,piVar1);
      }
      fVar11 = __real_3f800000;
      uVar21 = 0;
      local_110 = (longlong)param_2;
      local_15c = this->RandomSeed;
      if (0 < param_2) {
        lVar27 = 0;
        do {
          iVar18 = (int)uVar29;
          if (iVar18 < 1) {
            iVar19 = 0;
          }
          else {
            local_15c = local_15c * 0xbb38435 + 0x3619636b;
            iVar19 = (int)(((float)(local_15c >> 9 | 0x3f800000) - fVar11) * (float)iVar18);
          }
          uVar23 = iVar19 + uVar21;
          uVar31 = 0;
          if ((int)uVar23 < local_128.ArrayNum) {
            uVar31 = ~uVar23 >> 0x1f;
          }
          if (uVar31 == 0) {
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar16) {
              pcVar7 = (code *)swi(3);
              iVar18 = (*pcVar7)();
              return iVar18;
            }
          }
          FVar15.Data = local_128.AllocatorInstance.Data;
          uVar31 = 0;
          if ((int)uVar21 < local_128.ArrayNum) {
            uVar31 = ~uVar21 >> 0x1f;
          }
          if ((uVar31 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar7 = (code *)swi(3);
            iVar18 = (*pcVar7)();
            return iVar18;
          }
          uVar3 = *(undefined4 *)(local_128.AllocatorInstance.Data + lVar27 * 4);
          *(undefined4 *)(local_128.AllocatorInstance.Data + lVar27 * 4) =
               *(undefined4 *)(FVar15.Data + (longlong)(int)uVar23 * 4);
          *(undefined4 *)(FVar15.Data + (longlong)(int)uVar23 * 4) = uVar3;
          uVar23 = 0;
          if ((int)uVar21 < local_128.ArrayNum) {
            uVar23 = ~uVar21 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar7 = (code *)swi(3);
            iVar18 = (*pcVar7)();
            return iVar18;
          }
          pTVar26 = local_130;
          uVar23 = *(uint *)(local_128.AllocatorInstance.Data + lVar27 * 4);
          uVar31 = 0;
          if ((int)uVar23 < local_130->ArrayNum) {
            uVar31 = ~uVar23 >> 0x1f;
          }
          if ((uVar31 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar16)) {
            pcVar7 = (code *)swi(3);
            iVar18 = (*pcVar7)();
            return iVar18;
          }
          pTVar28 = local_158;
          pFVar6 = (FScriptContainerElement *)(pTVar26->DataPtr + (int)uVar23);
          pFVar25 = (local_158->AllocatorInstance).Data;
          if (((pFVar25 <= pFVar6) && (pFVar6 < pFVar25 + (longlong)*piVar1 * 0x18)) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar16)) {
            pcVar7 = (code *)swi(3);
            iVar18 = (*pcVar7)();
            return iVar18;
          }
          iVar19 = pTVar28->ArrayNum;
          if (iVar19 == *piVar1) {
            iVar19 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x818,&pTVar28->AllocatorInstance,piVar1);
          }
          pTVar28->ArrayNum = iVar19 + 1;
          uVar21 = uVar21 + 1;
          uVar9 = *(undefined8 *)(pFVar6 + 8);
          uVar29 = (ulonglong)(iVar18 - 1);
          lVar27 = lVar27 + 1;
          pFVar4 = (pTVar28->AllocatorInstance).Data;
          pFVar25 = pFVar4 + (longlong)iVar19 * 0x18;
          *(undefined8 *)pFVar25 = *(undefined8 *)pFVar6;
          *(undefined8 *)(pFVar25 + 8) = uVar9;
          *(undefined8 *)(pFVar4 + (longlong)iVar19 * 0x18 + 0x10) = *(undefined8 *)(pFVar6 + 0x10);
        } while (lVar27 < local_110);
      }
      pTVar28 = local_158;
      if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.AllocatorInstance.Data);
        pTVar28 = local_158;
      }
    }
    else {
      if ((iVar19 < 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x9a9,L"Invalid range size: %lld"), bVar16)) {
        pcVar7 = (code *)swi(3);
        iVar18 = (*pcVar7)();
        return iVar18;
      }
      pTVar28 = local_158;
      iVar18 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x18,8,iVar19,&local_158->AllocatorInstance,&local_158->ArrayNum,
                          &local_158->ArrayMax);
      memcpy((pTVar28->AllocatorInstance).Data + (longlong)iVar18 * 0x18,param_3->DataPtr,
             (longlong)iVar19 * 0x18);
    }
    pTVar26 = local_130;
    uVar21 = pTVar28->ArrayNum;
    local_108 = -1;
    TArray<int,TSizedDefaultAllocator<32>_>::Init(&this->ClusterIDs,&local_108,local_130->ArrayNum);
    pTVar2 = &this->ClusterSizes;
    iVar18 = (this->ClusterSizes).ArrayNum;
    if (iVar18 < (int)uVar21) {
      iVar19 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (4,4,uVar21 - iVar18,&pTVar2->AllocatorInstance,
                          &(this->ClusterSizes).ArrayNum,&(this->ClusterSizes).ArrayMax);
      memset((pTVar2->AllocatorInstance).Data + (longlong)iVar19 * 4,0,
             (longlong)(int)(uVar21 - iVar18) << 2);
    }
    else {
      if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
      }
      if ((int)uVar21 < iVar18) {
        uVar23 = iVar18 - uVar21;
        if (((int)(uVar21 | uVar23) < 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar7 = (code *)swi(3);
          iVar18 = (*pcVar7)();
          return iVar18;
        }
        if (uVar23 != 0) {
          pFVar6 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar21 * 4;
          iVar18 = ((this->ClusterSizes).ArrayNum - uVar21) - uVar23;
          if (iVar18 != 0) {
            memmove(pFVar6,pFVar6 + (longlong)(int)uVar23 * 4,(longlong)iVar18 << 2);
          }
          iVar18 = (this->ClusterSizes).ArrayNum - uVar23;
          (this->ClusterSizes).ArrayNum = iVar18;
          Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,&pTVar2->AllocatorInstance,iVar18,&(this->ClusterSizes).ArrayMax);
        }
      }
    }
    pTVar14 = local_130;
    if (uVar21 != 0) {
      if (uVar21 == 1) {
        iVar18 = pTVar26->ArrayNum;
        uVar24 = 0;
        uVar29 = uVar24;
        if (0 < iVar18) {
          do {
            uVar31 = (uint)uVar24;
            uVar23 = 0;
            if ((int)uVar31 < (this->ClusterIDs).ArrayNum) {
              uVar23 = ~uVar31 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar7 = (code *)swi(3);
              iVar18 = (*pcVar7)();
              return iVar18;
            }
            uVar24 = (ulonglong)(uVar31 + 1);
            iVar18 = pTVar14->ArrayNum;
            *(undefined4 *)((this->ClusterIDs).AllocatorInstance.Data + uVar29) = 0;
            uVar29 = uVar29 + 4;
          } while ((int)(uVar31 + 1) < iVar18);
        }
        if (((this->ClusterSizes).ArrayNum < 1) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar7 = (code *)swi(3);
          iVar18 = (*pcVar7)();
          return iVar18;
        }
        LOCK();
        *(int *)(this->ClusterSizes).AllocatorInstance.Data = iVar18;
        UNLOCK();
      }
      else {
        local_d8 = 0;
        local_d0 = 0;
        local_c8 = 0;
        local_c0 = 0;
        local_b8[0] = (FScriptContainerElement *)0x0;
        local_b8[1] = (FScriptContainerElement *)0x0;
        local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_a8.ArrayNum = 0;
        local_a8.ArrayMax = 0;
        TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumZeroed
                  (&local_a8,uVar21,Default);
        dVar10 = __real_3ff0000000000000;
        local_150.Data = (FScriptContainerElement *)0x0;
        local_148 = 0;
        local_104 = this->MaxIterations;
        if (this->MaxIterations < 1) {
          local_104 = 1;
        }
        uVar29 = 0;
        local_15c = 0;
        if (0 < local_104) {
          do {
            iVar18 = pTVar26->ArrayNum;
            uVar29 = CONCAT71((int7)(uVar29 >> 8),(int)uVar29 == 0);
            uVar21 = 0;
            local_140 = (uint)uVar29;
            local_118 = 0;
            if (0 < iVar18) {
              local_138 = 0;
              do {
                uVar31 = ~uVar21 >> 0x1f;
                uVar23 = 0;
                if ((int)uVar21 < iVar18) {
                  uVar23 = uVar31;
                }
                if ((uVar23 == 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar16)) {
                  pcVar7 = (code *)swi(3);
                  iVar18 = (*pcVar7)();
                  return iVar18;
                }
                pTVar5 = pTVar26->DataPtr;
                local_f0 = pTVar5;
                if ((pTVar28->ArrayNum < 1) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar16)) {
                  pcVar7 = (code *)swi(3);
                  iVar18 = (*pcVar7)();
                  return iVar18;
                }
                pFVar6 = (pTVar28->AllocatorInstance).Data;
                uVar23 = 0;
                lVar27 = 1;
                local_110 = 0;
                dVar34 = *(double *)pFVar6 - *(double *)((longlong)&pTVar5->field0_0x0 + local_138);
                dVar8 = *(double *)(pFVar6 + 8) -
                        *(double *)((longlong)&pTVar5->field0_0x0 + local_138 + 8);
                dVar33 = *(double *)(pFVar6 + 0x10) -
                         *(double *)((longlong)&pTVar5->field0_0x0 + local_138 + 0x10);
                iVar18 = local_158->ArrayNum;
                uVar22 = 1;
                dVar8 = dVar8 * dVar8 + dVar34 * dVar34 + dVar33 * dVar33;
                if (1 < iVar18) {
                  lVar30 = 0x18;
                  lVar32 = local_138;
                  uVar23 = 0;
                  do {
                    uVar20 = 0;
                    if ((int)uVar22 < iVar18) {
                      uVar20 = ~uVar22 >> 0x1f;
                    }
                    if ((uVar20 == 0) &&
                       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), lVar32 = local_138, bVar16)) {
                      pcVar7 = (code *)swi(3);
                      iVar18 = (*pcVar7)();
                      return iVar18;
                    }
                    pFVar6 = (local_158->AllocatorInstance).Data;
                    uVar20 = 0;
                    if ((int)uVar21 < local_130->ArrayNum) {
                      uVar20 = uVar31;
                    }
                    if ((uVar20 == 0) &&
                       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                            ,0x14f,
                                            L"Array index out of bounds: %lld from an array of size %lld"
                                           ), lVar32 = local_138, bVar16)) {
                      pcVar7 = (code *)swi(3);
                      iVar18 = (*pcVar7)();
                      return iVar18;
                    }
                    pTVar5 = local_130->DataPtr;
                    dVar35 = *(double *)(pFVar6 + lVar30 + 8) -
                             *(double *)((longlong)&pTVar5->field0_0x0 + lVar32 + 8);
                    dVar34 = *(double *)(pFVar6 + lVar30) -
                             *(double *)((longlong)&pTVar5->field0_0x0 + lVar32);
                    dVar33 = *(double *)(pFVar6 + lVar30 + 0x10) -
                             *(double *)((longlong)&pTVar5->field0_0x0 + lVar32 + 0x10);
                    dVar33 = dVar35 * dVar35 + dVar34 * dVar34 + dVar33 * dVar33;
                    if (dVar33 < dVar8) {
                      dVar8 = dVar33;
                      local_110 = lVar27;
                      uVar23 = uVar22;
                    }
                    iVar18 = local_158->ArrayNum;
                    uVar22 = uVar22 + 1;
                    lVar27 = lVar27 + 1;
                    lVar30 = lVar30 + 0x18;
                  } while ((int)uVar22 < iVar18);
                }
                lVar27 = local_110;
                uVar22 = 0;
                if ((int)uVar23 < (this->ClusterSizes).ArrayNum) {
                  uVar22 = ~uVar23 >> 0x1f;
                }
                if ((uVar22 == 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar16)) {
                  pcVar7 = (code *)swi(3);
                  iVar18 = (*pcVar7)();
                  return iVar18;
                }
                lVar32 = local_118;
                LOCK();
                pFVar6 = (this->ClusterSizes).AllocatorInstance.Data + lVar27 * 4;
                *(int *)pFVar6 = *(int *)pFVar6 + 1;
                UNLOCK();
                if (0 < (int)local_15c) {
                  uVar22 = 0;
                  if ((int)uVar21 < (this->ClusterIDs).ArrayNum) {
                    uVar22 = uVar31;
                  }
                  if ((uVar22 == 0) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar16)) {
                    pcVar7 = (code *)swi(3);
                    iVar18 = (*pcVar7)();
                    return iVar18;
                  }
                  uVar22 = *(uint *)((this->ClusterIDs).AllocatorInstance.Data + lVar32 * 4);
                  uVar20 = 0;
                  if ((int)uVar22 < (this->ClusterSizes).ArrayNum) {
                    uVar20 = ~uVar22 >> 0x1f;
                  }
                  if ((uVar20 == 0) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar16)) {
                    pcVar7 = (code *)swi(3);
                    iVar18 = (*pcVar7)();
                    return iVar18;
                  }
                  LOCK();
                  pFVar6 = (this->ClusterSizes).AllocatorInstance.Data + (longlong)(int)uVar22 * 4;
                  *(int *)pFVar6 = *(int *)pFVar6 + -1;
                  UNLOCK();
                  local_140 = local_140 & 0xff;
                  if (uVar22 != uVar23) {
                    local_140 = 1;
                  }
                }
                uVar22 = 0;
                if ((int)uVar21 < (this->ClusterIDs).ArrayNum) {
                  uVar22 = uVar31;
                }
                if ((uVar22 == 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar16)) {
                  pcVar7 = (code *)swi(3);
                  iVar18 = (*pcVar7)();
                  return iVar18;
                }
                *(uint *)((this->ClusterIDs).AllocatorInstance.Data + lVar32 * 4) = uVar23;
                uVar31 = 0;
                if ((int)uVar23 < local_a8.ArrayNum) {
                  uVar31 = ~uVar23 >> 0x1f;
                }
                if ((uVar31 == 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar16)) {
                  pcVar7 = (code *)swi(3);
                  iVar18 = (*pcVar7)();
                  return iVar18;
                }
                local_118 = lVar32 + 1;
                uVar21 = uVar21 + 1;
                *(double *)(local_a8.AllocatorInstance.Data + lVar27 * 0x18) =
                     *(double *)(local_a8.AllocatorInstance.Data + lVar27 * 0x18) +
                     *(double *)((longlong)&local_f0->field0_0x0 + local_138);
                *(double *)(local_a8.AllocatorInstance.Data + lVar27 * 0x18 + 8) =
                     *(double *)((longlong)&local_f0->field0_0x0 + local_138 + 8) +
                     *(double *)(local_a8.AllocatorInstance.Data + lVar27 * 0x18 + 8);
                lVar32 = local_138 + 0x10;
                local_138 = local_138 + 0x18;
                *(double *)(local_a8.AllocatorInstance.Data + lVar27 * 0x18 + 0x10) =
                     *(double *)((longlong)&local_f0->field0_0x0 + lVar32) +
                     *(double *)(local_a8.AllocatorInstance.Data + lVar27 * 0x18 + 0x10);
                iVar18 = local_130->ArrayNum;
                pTVar26 = local_130;
                pTVar28 = local_158;
              } while ((int)uVar21 < iVar18);
              uVar29 = (ulonglong)local_140;
            }
            if ((char)uVar29 == '\0') break;
            bVar16 = false;
            uVar21 = 0;
            lVar27 = 0;
            if (0 < pTVar28->ArrayNum) {
              lVar32 = 0;
              do {
                uVar31 = ~uVar21 >> 0x1f;
                uVar23 = 0;
                if ((int)uVar21 < (this->ClusterSizes).ArrayNum) {
                  uVar23 = uVar31;
                }
                if ((uVar23 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar7 = (code *)swi(3);
                  iVar18 = (*pcVar7)();
                  return iVar18;
                }
                if (*(int *)((this->ClusterSizes).AllocatorInstance.Data + lVar27 * 4) < 1) {
                  iVar18 = (int)local_148;
                  if (!bVar16) {
                    uVar23 = pTVar28->ArrayNum;
                    uVar29 = (ulonglong)(int)local_148;
                    if ((int)local_148 < (int)uVar23) {
                      Core::Private::
                      ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (4,4,uVar23 - (int)local_148,&local_150,(int *)&local_148,
                                 (int *)((longlong)&local_148 + 4));
                      uVar29 = local_148 & 0xffffffff;
                    }
                    else {
                      if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
                        Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
                      }
                      if ((int)uVar23 < (int)local_148) {
                        uVar22 = (int)local_148 - uVar23;
                        if ((int)(uVar22 | uVar23) < 0) {
                          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)"
                                              ,
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x458,
                                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                             );
                          if (bVar16) {
                            pcVar7 = (code *)swi(3);
                            iVar18 = (*pcVar7)();
                            return iVar18;
                          }
                          uVar29 = local_148 & 0xffffffff;
                        }
                        if (uVar22 != 0) {
                          iVar19 = ((int)uVar29 - uVar22) - uVar23;
                          iVar18 = (int)uVar29;
                          if (iVar19 != 0) {
                            memmove(local_150.Data + (longlong)(int)uVar23 * 4,
                                    local_150.Data + (longlong)(int)uVar23 * 4 +
                                    (longlong)(int)uVar22 * 4,(longlong)iVar19 << 2);
                            iVar18 = (int)local_148;
                          }
                          uVar29 = (ulonglong)(iVar18 - uVar22);
                          local_148 = CONCAT44(local_148._4_4_,iVar18 - uVar22);
                        }
                      }
                    }
                    uVar23 = 0;
                    iVar18 = (int)uVar29;
                    if (0 < pTVar28->ArrayNum) {
                      lVar30 = 0;
                      do {
                        uVar22 = 0;
                        if ((int)uVar23 < (int)uVar29) {
                          uVar22 = ~uVar23 >> 0x1f;
                        }
                        if ((uVar22 == 0) &&
                           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar16)) {
                          pcVar7 = (code *)swi(3);
                          iVar18 = (*pcVar7)();
                          return iVar18;
                        }
                        *(uint *)(local_150.Data + lVar30) = uVar23;
                        uVar23 = uVar23 + 1;
                        uVar29 = local_148 & 0xffffffff;
                        lVar30 = lVar30 + 4;
                        iVar18 = (int)local_148;
                      } while ((int)uVar23 < pTVar28->ArrayNum);
                    }
                  }
                  uVar22 = (this->ClusterSizes).ArrayNum - 1;
                  bVar16 = true;
                  uVar23 = 0;
                  if ((int)uVar22 < iVar18) {
                    uVar23 = ~uVar22 >> 0x1f;
                  }
                  if ((uVar23 == 0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar17)) {
                    pcVar7 = (code *)swi(3);
                    iVar18 = (*pcVar7)();
                    return iVar18;
                  }
                  *(uint *)(local_150.Data + (longlong)(int)uVar22 * 4) = uVar21;
                  uVar23 = 0;
                  if ((int)uVar21 < (this->ClusterSizes).ArrayNum) {
                    uVar23 = uVar31;
                  }
                  if ((uVar23 == 0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar17)) {
                    pcVar7 = (code *)swi(3);
                    iVar18 = (*pcVar7)();
                    return iVar18;
                  }
                  iVar19 = (this->ClusterSizes).ArrayNum;
                  pFVar6 = (this->ClusterSizes).AllocatorInstance.Data;
                  iVar18 = iVar19 + ~uVar21;
                  if (1 < iVar18) {
                    iVar18 = 1;
                  }
                  if (iVar18 != 0) {
                    memmove(pFVar6 + (longlong)(int)uVar21 * 4,
                            pFVar6 + (longlong)(iVar19 - iVar18) * 4,(longlong)iVar18 << 2);
                  }
                  piVar1 = &(this->ClusterSizes).ArrayNum;
                  *piVar1 = *piVar1 + -1;
                  uVar23 = 0;
                  if ((int)uVar21 < pTVar28->ArrayNum) {
                    uVar23 = uVar31;
                  }
                  if ((uVar23 == 0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar17)) {
                    pcVar7 = (code *)swi(3);
                    iVar18 = (*pcVar7)();
                    return iVar18;
                  }
                  pFVar6 = (pTVar28->AllocatorInstance).Data;
                  iVar18 = ~uVar21 + pTVar28->ArrayNum;
                  if (1 < iVar18) {
                    iVar18 = 1;
                  }
                  if (iVar18 != 0) {
                    memmove(pFVar6 + (longlong)(int)uVar21 * 0x18,
                            pFVar6 + (longlong)(pTVar28->ArrayNum - iVar18) * 0x18,
                            (longlong)iVar18 * 0x18);
                  }
                  pTVar28->ArrayNum = pTVar28->ArrayNum + -1;
                  uVar23 = 0;
                  if ((int)uVar21 < local_a8.ArrayNum) {
                    uVar23 = ~uVar21 >> 0x1f;
                  }
                  if (uVar23 == 0) {
                    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       );
                    if (bVar17) {
                      pcVar7 = (code *)swi(3);
                      iVar18 = (*pcVar7)();
                      return iVar18;
                    }
                  }
                  iVar18 = ~uVar21 + local_a8.ArrayNum;
                  if (1 < iVar18) {
                    iVar18 = 1;
                  }
                  iVar19 = local_a8.ArrayNum;
                  if (iVar18 != 0) {
                    memmove(local_a8.AllocatorInstance.Data + (longlong)(int)uVar21 * 0x18,
                            local_a8.AllocatorInstance.Data +
                            (longlong)(local_a8.ArrayNum - iVar18) * 0x18,(longlong)iVar18 * 0x18);
                    iVar19 = local_a8.ArrayNum;
                  }
                  local_a8.ArrayNum = iVar19 + -1;
                }
                else {
                  uVar23 = 0;
                  if ((int)uVar21 < (this->ClusterSizes).ArrayNum) {
                    uVar23 = uVar31;
                  }
                  if ((uVar23 == 0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar17)) {
                    pcVar7 = (code *)swi(3);
                    iVar18 = (*pcVar7)();
                    return iVar18;
                  }
                  iVar18 = *(int *)((this->ClusterSizes).AllocatorInstance.Data + lVar27 * 4);
                  uVar23 = 0;
                  if ((int)uVar21 < local_a8.ArrayNum) {
                    uVar23 = uVar31;
                  }
                  if ((uVar23 == 0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar17)) {
                    pcVar7 = (code *)swi(3);
                    iVar18 = (*pcVar7)();
                    return iVar18;
                  }
                  dVar35 = dVar10 / (double)iVar18;
                  dVar8 = *(double *)(local_a8.AllocatorInstance.Data + lVar32);
                  dVar33 = *(double *)(local_a8.AllocatorInstance.Data + lVar32 + 8);
                  dVar34 = *(double *)(local_a8.AllocatorInstance.Data + lVar32 + 0x10);
                  uVar23 = 0;
                  if ((int)uVar21 < pTVar28->ArrayNum) {
                    uVar23 = uVar31;
                  }
                  if ((uVar23 == 0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar17)) {
                    pcVar7 = (code *)swi(3);
                    iVar18 = (*pcVar7)();
                    return iVar18;
                  }
                  pFVar6 = (pTVar28->AllocatorInstance).Data;
                  *(double *)(pFVar6 + lVar32) = dVar35 * dVar8;
                  *(double *)(pFVar6 + lVar32 + 8) = dVar35 * dVar33;
                  *(double *)(pFVar6 + lVar32 + 0x10) = dVar35 * dVar34;
                  uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                  uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
                  uVar23 = 0;
                  if ((int)uVar21 < local_a8.ArrayNum) {
                    uVar23 = uVar31;
                  }
                  if ((uVar23 == 0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar17)) {
                    pcVar7 = (code *)swi(3);
                    iVar18 = (*pcVar7)();
                    return iVar18;
                  }
                  *(undefined8 *)(local_a8.AllocatorInstance.Data + lVar32) = uVar9;
                  *(undefined8 *)(local_a8.AllocatorInstance.Data + lVar32 + 8) = uVar12;
                  *(undefined8 *)(local_a8.AllocatorInstance.Data + lVar32 + 0x10) = uVar13;
                }
                uVar21 = uVar21 + 1;
                lVar27 = lVar27 + 1;
                lVar32 = lVar32 + 0x18;
              } while ((int)uVar21 < pTVar28->ArrayNum);
              if (bVar16) {
                pFVar25 = (this->ClusterIDs).AllocatorInstance.Data;
                iVar18 = (this->ClusterIDs).ArrayNum;
                pFVar6 = pFVar25 + (longlong)iVar18 * 4;
                while( true ) {
                  if ((this->ClusterIDs).ArrayNum != iVar18) {
                    local_160[0] = 0;
                    `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                              (local_160);
                  }
                  pTVar28 = local_158;
                  if (pFVar25 == pFVar6) break;
                  uVar21 = *(uint *)pFVar25;
                  uVar23 = 0;
                  if ((int)uVar21 < (int)local_148) {
                    uVar23 = ~uVar21 >> 0x1f;
                  }
                  if ((uVar23 == 0) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar16)) {
                    pcVar7 = (code *)swi(3);
                    iVar18 = (*pcVar7)();
                    return iVar18;
                  }
                  *(uint *)pFVar25 = *(uint *)(local_150.Data + (longlong)(int)uVar21 * 4);
                  pFVar25 = pFVar25 + 4;
                }
              }
            }
            local_15c = local_15c + 1;
            uVar29 = (ulonglong)local_15c;
            pTVar26 = local_130;
          } while ((int)local_15c < local_104);
        }
        uVar21 = (this->ClusterSizes).ArrayNum;
        if (local_150.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_150.Data);
        }
        if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.AllocatorInstance.Data);
        }
        pTVar28 = &local_a8;
        lVar27 = 3;
        do {
          pFVar6 = pTVar28[-1].AllocatorInstance.Data;
          pTVar28 = pTVar28 + -1;
          lVar27 = lVar27 + -1;
          if (pFVar6 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar6);
          }
        } while (lVar27 != 0);
      }
    }
    if (local_100.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.AllocatorInstance.Data);
    }
  }
  return uVar21;
}

// GetUniformSpacedInitialCenters<UE::Math::TVector<double>_> @ 14ceac4d0

void __thiscall
UE::Geometry::FClusterKMeans::GetUniformSpacedInitialCenters<UE::Math::TVector<double>_>
          (FClusterKMeans *this,TArrayView<UE::Math::TVector<double>_const_,int> *param_1,
          int param_2,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uStack_6c;
  TArrayView<float_const_,int> local_68;
  TArrayView<UE::Math::TVector<double>_const_,int> local_58;
  FPriorityOrderPoints local_48;
  
  local_58.DataPtr = param_1->DataPtr;
  local_58.ArrayNum = param_1->ArrayNum;
  local_58._12_4_ = *(undefined4 *)&param_1->field_0xc;
  uVar12 = 0;
  local_48.SpatialLevels = 10;
  local_68._8_8_ = (ulonglong)uStack_6c << 0x20;
  local_68.DataPtr = (float *)0x0;
  local_48.Order.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Order.ArrayNum = 0;
  local_48.Order.ArrayMax = 0;
  FPriorityOrderPoints::ComputeUniformSpaced(&local_48,&local_58,&local_68,param_2,4);
  uVar13 = local_48.Order.ArrayNum;
  if (param_2 < local_48.Order.ArrayNum) {
    uVar13 = param_2;
  }
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  piVar1 = &param_3->ArrayMax;
  param_3->ArrayNum = 0;
  if (param_3->ArrayMax < (int)uVar13) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar13,&param_3->AllocatorInstance,0,piVar1);
  }
  uVar14 = uVar12;
  if (0 < (int)uVar13) {
    do {
      uVar11 = (uint)uVar12;
      uVar8 = 0;
      if ((int)uVar11 < local_48.Order.ArrayNum) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar8 = *(uint *)(local_48.Order.AllocatorInstance.Data + uVar14 * 4);
      uVar9 = 0;
      if ((int)uVar8 < param_1->ArrayNum) {
        uVar9 = ~uVar8 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar3 = (param_3->AllocatorInstance).Data;
      pFVar2 = (FScriptContainerElement *)(param_1->DataPtr + (int)uVar8);
      if (((pFVar3 <= pFVar2) && (pFVar2 < pFVar3 + (longlong)*piVar1 * 0x18)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar10 = param_3->ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&param_3->AllocatorInstance,piVar1);
      }
      uVar12 = (ulonglong)(uVar11 + 1);
      param_3->ArrayNum = iVar10 + 1;
      uVar14 = uVar14 + 1;
      uVar6 = *(undefined8 *)(pFVar2 + 8);
      pFVar4 = (param_3->AllocatorInstance).Data;
      pFVar3 = pFVar4 + (longlong)iVar10 * 0x18;
      *(undefined8 *)pFVar3 = *(undefined8 *)pFVar2;
      *(undefined8 *)(pFVar3 + 8) = uVar6;
      *(undefined8 *)(pFVar4 + (longlong)iVar10 * 0x18 + 0x10) = *(undefined8 *)(pFVar2 + 0x10);
    } while ((longlong)uVar14 < (longlong)(int)uVar13);
  }
  if (local_48.Order.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Order.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14ceb3070

void __thiscall
`UE::Geometry::FClusterKMeans::ComputeClusters<UE::Math::TVector<double>,0>'::__l31::<lambda_1>::
operator()(void *this,uint param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  double *pdVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  TVector<double> *pTVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  longlong *plVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  longlong local_res18;
  
  lVar14 = (longlong)(int)param_1;
  pTVar12 = TArrayView<UE::Math::TVector<double>_const_,int>::operator[]
                      (*(TArrayView<UE::Math::TVector<double>_const_,int> **)((longlong)this + 0x10)
                       ,param_1);
  uVar9 = 0;
  puVar2 = (undefined8 *)**(undefined8 **)((longlong)this + 0x20);
  if ((*(int *)(puVar2 + 1) < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pdVar3 = (double *)*puVar2;
  uVar13 = 1;
  uVar15 = ~param_1;
  dVar7 = pdVar3[1] - (pTVar12->field0_0x0)._s_0.Y;
  dVar18 = *pdVar3 - (pTVar12->field0_0x0)._s_0.X;
  dVar17 = pdVar3[2] - (pTVar12->field0_0x0)._s_0.Z;
  plVar16 = (longlong *)**(longlong **)((longlong)this + 0x20);
  dVar7 = dVar7 * dVar7 + dVar18 * dVar18 + dVar17 * dVar17;
  if (1 < (int)plVar16[1]) {
    local_res18 = 0x18;
    uVar10 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar13 < (int)plVar16[1]) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar4 = *plVar16;
      plVar16 = *(longlong **)((longlong)this + 0x10);
      uVar9 = 0;
      if ((int)param_1 < (int)plVar16[1]) {
        uVar9 = uVar15 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar5 = *plVar16;
      dVar19 = *(double *)(local_res18 + 8 + lVar4) - *(double *)(lVar5 + 8 + lVar14 * 0x18);
      dVar18 = *(double *)(local_res18 + lVar4) - *(double *)(lVar5 + lVar14 * 0x18);
      dVar17 = *(double *)(local_res18 + 0x10 + lVar4) - *(double *)(lVar5 + 0x10 + lVar14 * 0x18);
      dVar17 = dVar19 * dVar19 + dVar18 * dVar18 + dVar17 * dVar17;
      uVar9 = uVar13;
      if (dVar7 <= dVar17) {
        uVar9 = uVar10;
        dVar17 = dVar7;
      }
      dVar7 = dVar17;
      uVar13 = uVar13 + 1;
      local_res18 = local_res18 + 0x18;
      plVar16 = (longlong *)**(undefined8 **)((longlong)this + 0x20);
      uVar10 = uVar9;
    } while ((int)uVar13 < (int)plVar16[1]);
  }
  lVar4 = *(longlong *)this;
  uVar10 = 0;
  uVar13 = uVar10;
  if ((int)uVar9 < *(int *)(lVar4 + 0x20)) {
    uVar13 = ~uVar9 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  LOCK();
  piVar1 = (int *)(*(longlong *)(lVar4 + 0x18) + (longlong)(int)uVar9 * 4);
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if (0 < *(int *)((longlong)this + 8)) {
    lVar4 = *(longlong *)this;
    uVar13 = uVar10;
    if ((int)param_1 < *(int *)(lVar4 + 0x10)) {
      uVar13 = uVar15 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar5 = *(longlong *)this;
    uVar13 = *(uint *)(*(longlong *)(lVar4 + 8) + lVar14 * 4);
    uVar11 = uVar10;
    if ((int)uVar13 < *(int *)(lVar5 + 0x20)) {
      uVar11 = ~uVar13 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    LOCK();
    piVar1 = (int *)(*(longlong *)(lVar5 + 0x18) + (longlong)(int)uVar13 * 4);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (uVar13 != uVar9) {
      **(undefined1 **)((longlong)this + 0x28) = 1;
    }
  }
  lVar4 = *(longlong *)this;
  if ((int)param_1 < *(int *)(lVar4 + 0x10)) {
    uVar10 = uVar15 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  *(uint *)(*(longlong *)(lVar4 + 8) + lVar14 * 4) = uVar9;
  UE::Geometry::TClusterCenterArray<UE::Math::TVector<double>,0>::Accumulate
            (*(TClusterCenterArray<UE::Math::TVector<double>,0> **)((longlong)this + 0x18),uVar9,
             pTVar12);
  return;
}

