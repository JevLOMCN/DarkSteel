// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 3

// ComputeClusters<UE::Math::TVector<float>,1> @ 14dfe6910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
UE::Geometry::FClusterKMeans::ComputeClusters<UE::Math::TVector<float>,1>
          (FClusterKMeans *this,TArrayView<UE::Math::TVector<float>_const_,int> *param_1,int param_2
          ,TArrayView<UE::Math::TVector<float>_const_,int> *param_3,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_4)

{
  TArray<int,TSizedDefaultAllocator<32>_> *this_00;
  undefined4 uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  TStaticArray<TArray<std::atomic<float>,TSizedDefaultAllocator<32>_>,3,4294967295> *pTVar4;
  float fVar5;
  <lambda_1> <Var6;
  ForAnyElementType FVar7;
  TArrayView<UE::Math::TVector<float>_const_,int> *pTVar8;
  undefined8 uVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  TArray<std::atomic<int>,TSizedDefaultAllocator<32>_> *pTVar20;
  uint uVar21;
  ulonglong uVar22;
  TClusterCenterArray<UE::Math::TVector<float>,1> *pTVar23;
  ulonglong uVar24;
  FScriptContainerElement *pFVar25;
  int *piVar26;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  FClusterKMeans *pFVar30;
  uint uVar31;
  longlong lVar32;
  undefined1 auStackY_1e8 [32];
  char local_197;
  <lambda_1> local_196 [6];
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *local_190;
  uint local_188;
  ForAnyElementType local_180;
  undefined8 local_178;
  FClusterKMeans *local_170;
  TArray<int,TSizedDefaultAllocator<32>_> local_168;
  int *local_158;
  TArray<std::atomic<int>,TSizedDefaultAllocator<32>_> *local_150;
  TArrayView<UE::Math::TVector<float>_const_,int> *local_148;
  int local_140;
  int local_13c;
  longlong local_138;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_130;
  undefined8 local_120;
  undefined4 local_118;
  TArrayView<std::nullptr_t,int> local_110;
  code *local_100;
  FClusterKMeans **local_f8;
  FClusterKMeans *local_f0;
  int local_e8;
  TArrayView<UE::Math::TVector<float>_const_,int> *local_e0;
  TClusterCenterArray<UE::Math::TVector<float>,1> *local_d8;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> **local_d0;
  char *local_c8;
  TClusterCenterArray<UE::Math::TVector<float>,1> local_b8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  if (param_1->ArrayNum == 0) {
    uVar14 = 0;
  }
  else {
    local_190 = &local_130;
    uVar18 = 0;
    local_130.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_130.ArrayNum = 0;
    local_130.ArrayMax = 0;
    local_170 = this;
    local_148 = param_1;
    if (param_4 != (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)0x0) {
      local_190 = param_4;
      param_4->ArrayNum = 0;
      if (param_4->ArrayMax < 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,&param_4->AllocatorInstance,0,&param_4->ArrayMax);
      }
    }
    pTVar27 = local_190;
    fVar5 = __real_3f800000;
    iVar12 = param_3->ArrayNum;
    if (iVar12 == 0) {
      iVar12 = param_1->ArrayNum;
      uVar28 = (ulonglong)iVar12;
      local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_168.ArrayNum = 0;
      local_168.ArrayMax = 0;
      TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_168,iVar12,Default);
      uVar29 = uVar18;
      uVar22 = uVar18;
      if (0 < iVar12) {
        do {
          uVar17 = (uint)uVar29;
          uVar14 = 0;
          if ((int)uVar17 < local_168.ArrayNum) {
            uVar14 = ~uVar17 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar3 = (code *)swi(3);
            iVar12 = (*pcVar3)();
            return iVar12;
          }
          *(uint *)(local_168.AllocatorInstance.Data + uVar22 * 4) = uVar17;
          uVar22 = uVar22 + 1;
          uVar29 = (ulonglong)(uVar17 + 1);
          this = local_170;
        } while ((longlong)uVar22 < (longlong)uVar28);
      }
      if (param_1->ArrayNum < param_2) {
        param_2 = param_1->ArrayNum;
      }
      if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
      }
      if (local_190->ArrayMax < param_2) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,param_2,&local_190->AllocatorInstance,local_190->ArrayNum,
                   &local_190->ArrayMax);
      }
      local_188 = this->RandomSeed;
      if (0 < param_2) {
        lVar32 = 0;
        do {
          iVar12 = (int)uVar28;
          if (iVar12 < 1) {
            iVar13 = 0;
          }
          else {
            local_188 = local_188 * 0xbb38435 + 0x3619636b;
            iVar13 = (int)(((float)(local_188 >> 9 | 0x3f800000) - fVar5) * (float)iVar12);
          }
          uVar14 = (uint)uVar18;
          uVar16 = iVar13 + uVar14;
          uVar17 = 0;
          if ((int)uVar16 < local_168.ArrayNum) {
            uVar17 = ~uVar16 >> 0x1f;
          }
          if (uVar17 == 0) {
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar10) {
              pcVar3 = (code *)swi(3);
              iVar12 = (*pcVar3)();
              return iVar12;
            }
          }
          FVar7.Data = local_168.AllocatorInstance.Data;
          uVar17 = 0;
          if ((int)uVar14 < local_168.ArrayNum) {
            uVar17 = ~uVar14 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar3 = (code *)swi(3);
            iVar12 = (*pcVar3)();
            return iVar12;
          }
          uVar1 = *(undefined4 *)(local_168.AllocatorInstance.Data + lVar32 * 4);
          *(undefined4 *)(local_168.AllocatorInstance.Data + lVar32 * 4) =
               *(undefined4 *)(FVar7.Data + (longlong)(int)uVar16 * 4);
          *(undefined4 *)(FVar7.Data + (longlong)(int)uVar16 * 4) = uVar1;
          uVar17 = 0;
          if ((int)uVar14 < local_168.ArrayNum) {
            uVar17 = ~uVar14 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar3 = (code *)swi(3);
            iVar12 = (*pcVar3)();
            return iVar12;
          }
          pTVar8 = local_148;
          uVar17 = *(uint *)(local_168.AllocatorInstance.Data + lVar32 * 4);
          uVar16 = 0;
          if ((int)uVar17 < local_148->ArrayNum) {
            uVar16 = ~uVar17 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar10)) {
            pcVar3 = (code *)swi(3);
            iVar12 = (*pcVar3)();
            return iVar12;
          }
          pTVar27 = local_190;
          pFVar2 = (FScriptContainerElement *)(pTVar8->DataPtr + (int)uVar17);
          pFVar25 = (local_190->AllocatorInstance).Data;
          if (((pFVar25 <= pFVar2) && (pFVar2 < pFVar25 + (longlong)local_190->ArrayMax * 0xc)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar3 = (code *)swi(3);
            iVar12 = (*pcVar3)();
            return iVar12;
          }
          iVar13 = pTVar27->ArrayNum;
          if (iVar13 == pTVar27->ArrayMax) {
            iVar13 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x40c,&pTVar27->AllocatorInstance,&pTVar27->ArrayMax);
          }
          pTVar27->ArrayNum = iVar13 + 1;
          uVar18 = (ulonglong)(uVar14 + 1);
          pFVar25 = (pTVar27->AllocatorInstance).Data;
          uVar28 = (ulonglong)(iVar12 - 1);
          lVar32 = lVar32 + 1;
          *(undefined8 *)(pFVar25 + (longlong)iVar13 * 0xc) = *(undefined8 *)pFVar2;
          *(undefined4 *)(pFVar25 + (longlong)iVar13 * 0xc + 8) = *(undefined4 *)(pFVar2 + 8);
          param_1 = local_148;
        } while (lVar32 < param_2);
      }
      if (local_168.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.AllocatorInstance.Data);
      }
    }
    else {
      if ((iVar12 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x9a9,L"Invalid range size: %lld"), bVar10)) {
        pcVar3 = (code *)swi(3);
        iVar12 = (*pcVar3)();
        return iVar12;
      }
      iVar13 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0xc,4,iVar12,&pTVar27->AllocatorInstance,&pTVar27->ArrayNum,
                          &pTVar27->ArrayMax);
      memcpy((pTVar27->AllocatorInstance).Data + (longlong)iVar13 * 0xc,param_3->DataPtr,
             (longlong)iVar12 * 0xc);
    }
    pFVar30 = local_170;
    uVar18 = 0;
    local_140 = -1;
    uVar14 = local_190->ArrayNum;
    this_00 = &local_170->ClusterIDs;
    TArray<int,TSizedDefaultAllocator<32>_>::Init(this_00,&local_140,param_1->ArrayNum);
    pTVar20 = &pFVar30->ClusterSizes;
    iVar12 = (pFVar30->ClusterSizes).ArrayNum;
    piVar26 = &(pFVar30->ClusterSizes).ArrayNum;
    local_158 = piVar26;
    local_150 = pTVar20;
    if (iVar12 < (int)uVar14) {
      iVar13 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (4,4,uVar14 - iVar12,&pTVar20->AllocatorInstance,piVar26,
                          &(pFVar30->ClusterSizes).ArrayMax);
      memset((pTVar20->AllocatorInstance).Data + (longlong)iVar13 * 4,0,
             (longlong)(int)(uVar14 - iVar12) << 2);
    }
    else {
      if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
      }
      if ((int)uVar14 < iVar12) {
        uVar17 = iVar12 - uVar14;
        if (((int)(uVar14 | uVar17) < 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar3 = (code *)swi(3);
          iVar12 = (*pcVar3)();
          return iVar12;
        }
        if (uVar17 != 0) {
          pFVar2 = (pTVar20->AllocatorInstance).Data + (longlong)(int)uVar14 * 4;
          iVar12 = (*piVar26 - uVar14) - uVar17;
          if (iVar12 != 0) {
            memmove(pFVar2,pFVar2 + (longlong)(int)uVar17 * 4,(longlong)iVar12 << 2);
          }
          *piVar26 = *piVar26 - uVar17;
          Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,&pTVar20->AllocatorInstance,*piVar26,&(pFVar30->ClusterSizes).ArrayMax);
        }
      }
    }
    if (uVar14 != 0) {
      if (uVar14 == 1) {
        iVar12 = param_1->ArrayNum;
        uVar29 = uVar18;
        if (0 < iVar12) {
          do {
            uVar16 = (uint)uVar18;
            uVar17 = 0;
            if ((int)uVar16 < (pFVar30->ClusterIDs).ArrayNum) {
              uVar17 = ~uVar16 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar3 = (code *)swi(3);
              iVar12 = (*pcVar3)();
              return iVar12;
            }
            uVar18 = (ulonglong)(uVar16 + 1);
            *(undefined4 *)((this_00->AllocatorInstance).Data + uVar29) = 0;
            iVar12 = param_1->ArrayNum;
            pTVar20 = local_150;
            uVar29 = uVar29 + 4;
          } while ((int)(uVar16 + 1) < iVar12);
        }
        if ((pTVar20->ArrayNum < 1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar3 = (code *)swi(3);
          iVar12 = (*pcVar3)();
          return iVar12;
        }
        LOCK();
        *(int *)(pTVar20->AllocatorInstance).Data = iVar12;
        UNLOCK();
      }
      else {
        local_b8.AtomicValues.Elements[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_b8.AtomicValues.Elements[0].ArrayNum = 0;
        local_b8.AtomicValues.Elements[0].ArrayMax = 0;
        local_b8.AtomicValues.Elements[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_b8.AtomicValues.Elements[1].ArrayNum = 0;
        local_b8.AtomicValues.Elements[1].ArrayMax = 0;
        local_b8.AtomicValues.Elements[2].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_b8.AtomicValues.Elements[2].ArrayNum = 0;
        local_b8.AtomicValues.Elements[2].ArrayMax = 0;
        local_b8.Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_b8.Values.ArrayNum = 0;
        local_b8.Values.ArrayMax = 0;
        TClusterCenterArray<UE::Math::TVector<float>,1>::SetNumZeroed(&local_b8,uVar14);
        <Var6 = local_196[0];
        local_180.Data = (FScriptContainerElement *)0x0;
        local_178 = 0;
        uVar14 = 0;
        local_188 = 0;
        local_13c = local_170->MaxIterations;
        if (local_13c < 1) {
          local_13c = 1;
        }
        uVar29 = uVar18;
        pFVar30 = local_170;
        if (0 < local_13c) {
          do {
            pFVar30 = local_170;
            local_e8 = (int)uVar29;
            local_197 = local_e8 == 0;
            local_d8 = &local_b8;
            local_f0 = local_170;
            local_d0 = &local_190;
            local_100 = Core::Private::Function::
                        TFunctionRefCaller<`UE::Geometry::FClusterKMeans::ComputeClusters<UE::Math::TVector<float>,1>'::__l31::<lambda_1>,void,int>
                        ::Call;
            local_c8 = &local_197;
            local_f8 = &local_f0;
            local_110.DataPtr = (void **)0x0;
            local_110.ArrayNum = 0;
            local_e0 = param_1;
            ParallelForImpl::
            ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                      (L"ParallelFor Task",param_1->ArrayNum,1,
                       (TFunctionRef<void___cdecl(int)> *)&local_100,<Var6,None,&local_110);
            if (local_197 == '\0') break;
            bVar10 = false;
            if (0 < local_190->ArrayNum) {
              local_138 = 0;
              uVar29 = uVar18;
              uVar22 = uVar18;
              do {
                uVar16 = (uint)uVar22;
                uVar31 = ~uVar16 >> 0x1f;
                uVar17 = uVar14;
                if ((int)uVar16 < *piVar26) {
                  uVar17 = uVar31;
                }
                if ((uVar17 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar3 = (code *)swi(3);
                  iVar12 = (*pcVar3)();
                  return iVar12;
                }
                uVar15 = 0;
                uVar17 = 0;
                if (*(int *)((pTVar20->AllocatorInstance).Data + uVar29 * 4) < 1) {
                  iVar12 = (int)local_178;
                  if (!bVar10) {
                    uVar22 = (ulonglong)(int)local_178;
                    uVar19 = local_190->ArrayNum;
                    if ((int)local_178 < (int)uVar19) {
                      Core::Private::
                      ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (4,4,uVar19 - (int)local_178,&local_180,(int *)&local_178,
                                 (int *)((longlong)&local_178 + 4));
                      uVar22 = local_178 & 0xffffffff;
                    }
                    else {
                      if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
                        Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
                      }
                      if ((int)uVar19 < (int)local_178) {
                        uVar21 = (int)local_178 - uVar19;
                        if ((int)(uVar21 | uVar19) < 0) {
                          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)"
                                              ,
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x458,
                                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                             );
                          if (bVar10) {
                            pcVar3 = (code *)swi(3);
                            iVar12 = (*pcVar3)();
                            return iVar12;
                          }
                          uVar22 = local_178 & 0xffffffff;
                        }
                        if (uVar21 != 0) {
                          iVar13 = ((int)uVar22 - uVar21) - uVar19;
                          iVar12 = (int)uVar22;
                          if (iVar13 != 0) {
                            memmove(local_180.Data + (longlong)(int)uVar19 * 4,
                                    local_180.Data + (longlong)(int)uVar19 * 4 +
                                    (longlong)(int)uVar21 * 4,(longlong)iVar13 << 2);
                            iVar12 = (int)local_178;
                          }
                          uVar22 = (ulonglong)(iVar12 - uVar21);
                          local_178 = CONCAT44(local_178._4_4_,iVar12 - uVar21);
                        }
                      }
                    }
                    uVar28 = uVar18;
                    uVar24 = uVar18;
                    iVar12 = (int)uVar22;
                    if (0 < local_190->ArrayNum) {
                      do {
                        uVar21 = (uint)uVar24;
                        uVar19 = uVar15;
                        if ((int)uVar21 < (int)uVar22) {
                          uVar19 = ~uVar21 >> 0x1f;
                        }
                        if ((uVar19 == 0) &&
                           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar10)) {
                          pcVar3 = (code *)swi(3);
                          iVar12 = (*pcVar3)();
                          return iVar12;
                        }
                        *(uint *)(local_180.Data + uVar28) = uVar21;
                        uVar22 = local_178 & 0xffffffff;
                        uVar28 = uVar28 + 4;
                        uVar24 = (ulonglong)(uVar21 + 1);
                        iVar12 = (int)local_178;
                      } while ((int)(uVar21 + 1) < local_190->ArrayNum);
                    }
                  }
                  pFVar30 = local_170;
                  bVar10 = true;
                  uVar21 = (local_170->ClusterSizes).ArrayNum - 1;
                  uVar19 = uVar15;
                  if ((int)uVar21 < iVar12) {
                    uVar19 = ~uVar21 >> 0x1f;
                  }
                  if ((uVar19 == 0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar11)) {
                    pcVar3 = (code *)swi(3);
                    iVar12 = (*pcVar3)();
                    return iVar12;
                  }
                  piVar26 = local_158;
                  *(uint *)(local_180.Data + (longlong)(int)uVar21 * 4) = uVar16;
                  uVar19 = uVar17;
                  if ((int)uVar16 < *local_158) {
                    uVar19 = uVar31;
                  }
                  if ((uVar19 == 0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar11)) {
                    pcVar3 = (code *)swi(3);
                    iVar12 = (*pcVar3)();
                    return iVar12;
                  }
                  pFVar2 = (pFVar30->ClusterSizes).AllocatorInstance.Data;
                  iVar12 = *piVar26 + ~uVar16;
                  if (1 < iVar12) {
                    iVar12 = 1;
                  }
                  if (iVar12 != 0) {
                    memmove(pFVar2 + (longlong)(int)uVar16 * 4,
                            pFVar2 + (longlong)(*piVar26 - iVar12) * 4,(longlong)iVar12 << 2);
                  }
                  pTVar27 = local_190;
                  *piVar26 = *piVar26 + -1;
                  uVar19 = uVar17;
                  if ((int)uVar16 < local_190->ArrayNum) {
                    uVar19 = uVar31;
                  }
                  if ((uVar19 == 0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar11)) {
                    pcVar3 = (code *)swi(3);
                    iVar12 = (*pcVar3)();
                    return iVar12;
                  }
                  pFVar2 = (pTVar27->AllocatorInstance).Data;
                  iVar12 = ~uVar16 + pTVar27->ArrayNum;
                  if (1 < iVar12) {
                    iVar12 = 1;
                  }
                  if (iVar12 != 0) {
                    memmove(pFVar2 + (longlong)(int)uVar16 * 0xc,
                            pFVar2 + (longlong)(pTVar27->ArrayNum - iVar12) * 0xc,
                            (longlong)iVar12 * 0xc);
                  }
                  pTVar27->ArrayNum = pTVar27->ArrayNum + -1;
                  uVar31 = uVar17;
                  if ((int)uVar16 < local_b8.AtomicValues.Elements[0].ArrayNum) {
                    uVar31 = ~uVar16 >> 0x1f;
                  }
                  if (uVar31 == 0) {
                    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       );
                    if (bVar11) {
                      pcVar3 = (code *)swi(3);
                      iVar12 = (*pcVar3)();
                      return iVar12;
                    }
                  }
                  iVar12 = ~uVar16 + local_b8.AtomicValues.Elements[0].ArrayNum;
                  if (1 < iVar12) {
                    iVar12 = 1;
                  }
                  iVar13 = local_b8.AtomicValues.Elements[0].ArrayNum;
                  if (iVar12 != 0) {
                    memmove(local_b8.AtomicValues.Elements[0].AllocatorInstance.Data +
                            (longlong)(int)uVar16 * 4,
                            local_b8.AtomicValues.Elements[0].AllocatorInstance.Data +
                            (longlong)(local_b8.AtomicValues.Elements[0].ArrayNum - iVar12) * 4,
                            (longlong)iVar12 << 2);
                    iVar13 = local_b8.AtomicValues.Elements[0].ArrayNum;
                  }
                  local_b8.AtomicValues.Elements[0].ArrayNum = iVar13 + -1;
                  if ((int)uVar16 < local_b8.AtomicValues.Elements[1].ArrayNum) {
                    uVar17 = ~uVar16 >> 0x1f;
                  }
                  if (uVar17 == 0) {
                    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       );
                    if (bVar11) {
                      pcVar3 = (code *)swi(3);
                      iVar12 = (*pcVar3)();
                      return iVar12;
                    }
                  }
                  iVar12 = ~uVar16 + local_b8.AtomicValues.Elements[1].ArrayNum;
                  if (1 < iVar12) {
                    iVar12 = 1;
                  }
                  iVar13 = local_b8.AtomicValues.Elements[1].ArrayNum;
                  if (iVar12 != 0) {
                    memmove(local_b8.AtomicValues.Elements[1].AllocatorInstance.Data +
                            (longlong)(int)uVar16 * 4,
                            local_b8.AtomicValues.Elements[1].AllocatorInstance.Data +
                            (longlong)(local_b8.AtomicValues.Elements[1].ArrayNum - iVar12) * 4,
                            (longlong)iVar12 << 2);
                    iVar13 = local_b8.AtomicValues.Elements[1].ArrayNum;
                  }
                  local_b8.AtomicValues.Elements[1].ArrayNum = iVar13 + -1;
                  uVar17 = uVar15;
                  if ((int)uVar16 < local_b8.AtomicValues.Elements[2].ArrayNum) {
                    uVar17 = ~uVar16 >> 0x1f;
                  }
                  if (uVar17 == 0) {
                    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       );
                    if (bVar11) {
                      pcVar3 = (code *)swi(3);
                      iVar12 = (*pcVar3)();
                      return iVar12;
                    }
                  }
                  iVar12 = ~uVar16 + local_b8.AtomicValues.Elements[2].ArrayNum;
                  if (1 < iVar12) {
                    iVar12 = 1;
                  }
                  iVar13 = local_b8.AtomicValues.Elements[2].ArrayNum;
                  if (iVar12 != 0) {
                    memmove(local_b8.AtomicValues.Elements[2].AllocatorInstance.Data +
                            (longlong)(int)uVar16 * 4,
                            local_b8.AtomicValues.Elements[2].AllocatorInstance.Data +
                            (longlong)(local_b8.AtomicValues.Elements[2].ArrayNum - iVar12) * 4,
                            (longlong)iVar12 << 2);
                    iVar13 = local_b8.AtomicValues.Elements[2].ArrayNum;
                  }
                  local_b8.AtomicValues.Elements[2].ArrayNum = iVar13 + -1;
                }
                else {
                  uVar19 = uVar14;
                  if ((int)uVar16 < *piVar26) {
                    uVar19 = uVar31;
                  }
                  if ((uVar19 == 0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar11)) {
                    pcVar3 = (code *)swi(3);
                    iVar12 = (*pcVar3)();
                    return iVar12;
                  }
                  pTVar23 = &local_b8;
                  iVar12 = *(int *)((pTVar20->AllocatorInstance).Data + uVar29 * 4);
                  uVar22 = uVar18;
                  do {
                    uVar19 = uVar14;
                    if ((int)uVar16 < (pTVar23->AtomicValues).Elements[0].ArrayNum) {
                      uVar19 = uVar31;
                    }
                    if ((uVar19 == 0) &&
                       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar11)) {
                      pcVar3 = (code *)swi(3);
                      iVar12 = (*pcVar3)();
                      return iVar12;
                    }
                    pTVar27 = local_190;
                    pTVar4 = &pTVar23->AtomicValues;
                    pTVar23 = (TClusterCenterArray<UE::Math::TVector<float>,1> *)
                              ((pTVar23->AtomicValues).Elements + 1);
                    iVar13 = (int)uVar22;
                    uVar19 = iVar13 + 1;
                    uVar22 = (ulonglong)uVar19;
                    *(float *)((longlong)&local_120 + (longlong)iVar13 * 4) =
                         (fVar5 / (float)iVar12) *
                         *(float *)(pTVar4->Elements[0].AllocatorInstance.Data + uVar29 * 4);
                    uVar1 = local_118;
                    uVar9 = local_120;
                  } while (uVar19 < 3);
                  uVar19 = uVar17;
                  if ((int)uVar16 < local_190->ArrayNum) {
                    uVar19 = uVar31;
                  }
                  if ((uVar19 == 0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar11)) {
                    pcVar3 = (code *)swi(3);
                    iVar12 = (*pcVar3)();
                    return iVar12;
                  }
                  pFVar2 = (pTVar27->AllocatorInstance).Data;
                  *(undefined8 *)(pFVar2 + local_138) = uVar9;
                  *(undefined4 *)(pFVar2 + local_138 + 8) = uVar1;
                  uVar1 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
                  uVar19 = uVar17;
                  if ((int)uVar16 < local_b8.AtomicValues.Elements[0].ArrayNum) {
                    uVar19 = uVar31;
                  }
                  if ((uVar19 == 0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar11)) {
                    pcVar3 = (code *)swi(3);
                    iVar12 = (*pcVar3)();
                    return iVar12;
                  }
                  lVar32 = (longlong)(int)uVar16;
                  LOCK();
                  *(undefined4 *)
                   (local_b8.AtomicValues.Elements[0].AllocatorInstance.Data + lVar32 * 4) = uVar1;
                  uVar1 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
                  UNLOCK();
                  uVar19 = uVar17;
                  if ((int)uVar16 < local_b8.AtomicValues.Elements[1].ArrayNum) {
                    uVar19 = uVar31;
                  }
                  if ((uVar19 == 0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar11)) {
                    pcVar3 = (code *)swi(3);
                    iVar12 = (*pcVar3)();
                    return iVar12;
                  }
                  LOCK();
                  *(undefined4 *)
                   (local_b8.AtomicValues.Elements[1].AllocatorInstance.Data + lVar32 * 4) = uVar1;
                  uVar1 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
                  UNLOCK();
                  if ((int)uVar16 < local_b8.AtomicValues.Elements[2].ArrayNum) {
                    uVar17 = uVar31;
                  }
                  if ((uVar17 == 0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar11)) {
                    pcVar3 = (code *)swi(3);
                    iVar12 = (*pcVar3)();
                    return iVar12;
                  }
                  LOCK();
                  *(undefined4 *)
                   (local_b8.AtomicValues.Elements[2].AllocatorInstance.Data + lVar32 * 4) = uVar1;
                  UNLOCK();
                }
                pFVar30 = local_170;
                uVar22 = (ulonglong)(uVar16 + 1);
                local_138 = local_138 + 0xc;
                uVar29 = uVar29 + 1;
                pTVar20 = local_150;
                piVar26 = local_158;
              } while ((int)(uVar16 + 1) < local_190->ArrayNum);
              param_1 = local_148;
              if (bVar10) {
                pFVar25 = (local_170->ClusterIDs).AllocatorInstance.Data;
                iVar12 = (local_170->ClusterIDs).ArrayNum;
                pFVar2 = pFVar25 + (longlong)iVar12 * 4;
                while( true ) {
                  if ((pFVar30->ClusterIDs).ArrayNum != iVar12) {
                    local_196[0] = (<lambda_1>)0x0;
                    `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                              (local_196);
                  }
                  pTVar20 = local_150;
                  piVar26 = local_158;
                  param_1 = local_148;
                  if (pFVar25 == pFVar2) break;
                  uVar17 = *(uint *)pFVar25;
                  uVar16 = uVar15;
                  if ((int)uVar17 < (int)local_178) {
                    uVar16 = ~uVar17 >> 0x1f;
                  }
                  if ((uVar16 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar3 = (code *)swi(3);
                    iVar12 = (*pcVar3)();
                    return iVar12;
                  }
                  *(uint *)pFVar25 = *(uint *)(local_180.Data + (longlong)(int)uVar17 * 4);
                  pFVar25 = pFVar25 + 4;
                }
              }
            }
            local_188 = local_188 + 1;
            uVar29 = (ulonglong)local_188;
            pFVar30 = local_170;
          } while ((int)local_188 < local_13c);
        }
        uVar14 = (pFVar30->ClusterSizes).ArrayNum;
        if (local_180.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_180.Data);
        }
        if (local_b8.Values.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Values.AllocatorInstance.Data);
        }
        pTVar27 = &local_b8.Values;
        lVar32 = 3;
        do {
          pFVar2 = (((TArray<std::atomic<float>,TSizedDefaultAllocator<32>_> *)(pTVar27 + -1))->
                   AllocatorInstance).Data;
          pTVar27 = pTVar27 + -1;
          lVar32 = lVar32 + -1;
          if (pFVar2 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar2);
          }
        } while (lVar32 != 0);
      }
    }
    if (local_130.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.AllocatorInstance.Data);
    }
  }
  return uVar14;
}

// GetUniformSpacedInitialCenters<UE::Math::TVector<float>_> @ 14dfebe00

void __thiscall
UE::Geometry::FClusterKMeans::GetUniformSpacedInitialCenters<UE::Math::TVector<float>_>
          (FClusterKMeans *this,TArrayView<UE::Math::TVector<float>_const_,int> *param_1,int param_2
          ,TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uStack_6c;
  TArrayView<float_const_,int> local_68;
  TArrayView<UE::Math::TVector<float>_const_,int> local_58;
  FPriorityOrderPoints local_48;
  
  local_58.DataPtr = param_1->DataPtr;
  local_58.ArrayNum = param_1->ArrayNum;
  local_58._12_4_ = *(undefined4 *)&param_1->field_0xc;
  uVar10 = 0;
  local_48.SpatialLevels = 10;
  local_68._8_8_ = (ulonglong)uStack_6c << 0x20;
  local_68.DataPtr = (float *)0x0;
  local_48.Order.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Order.ArrayNum = 0;
  local_48.Order.ArrayMax = 0;
  FPriorityOrderPoints::ComputeUniformSpaced(&local_48,&local_58,&local_68,param_2,4);
  uVar11 = local_48.Order.ArrayNum;
  if (param_2 < local_48.Order.ArrayNum) {
    uVar11 = param_2;
  }
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  piVar1 = &param_3->ArrayMax;
  param_3->ArrayNum = 0;
  if (param_3->ArrayMax < (int)uVar11) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,uVar11,&param_3->AllocatorInstance,0,piVar1);
  }
  uVar12 = uVar10;
  if (0 < (int)uVar11) {
    do {
      uVar9 = (uint)uVar10;
      uVar6 = 0;
      if ((int)uVar9 < local_48.Order.ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar6 = *(uint *)(local_48.Order.AllocatorInstance.Data + uVar12 * 4);
      uVar7 = 0;
      if ((int)uVar6 < param_1->ArrayNum) {
        uVar7 = ~uVar6 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (param_3->AllocatorInstance).Data;
      pFVar2 = (FScriptContainerElement *)(param_1->DataPtr + (int)uVar6);
      if (((pFVar3 <= pFVar2) && (pFVar2 < pFVar3 + (longlong)*piVar1 * 0xc)) &&
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
      iVar8 = param_3->ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40c,&param_3->AllocatorInstance,piVar1);
      }
      uVar10 = (ulonglong)(uVar9 + 1);
      param_3->ArrayNum = iVar8 + 1;
      uVar12 = uVar12 + 1;
      pFVar3 = (param_3->AllocatorInstance).Data;
      *(undefined8 *)(pFVar3 + (longlong)iVar8 * 0xc) = *(undefined8 *)pFVar2;
      *(undefined4 *)(pFVar3 + (longlong)iVar8 * 0xc + 8) = *(undefined4 *)(pFVar2 + 8);
    } while ((longlong)uVar12 < (longlong)(int)uVar11);
  }
  if (local_48.Order.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Order.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14dff5ac0

void __thiscall
`UE::Geometry::FClusterKMeans::ComputeClusters<UE::Math::TVector<float>,1>'::__l31::<lambda_1>::
operator()(void *this,uint param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  float *pfVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  TVector<float> *pTVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  longlong *plVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  longlong local_res18;
  
  lVar13 = (longlong)(int)param_1;
  pTVar11 = TArrayView<UE::Math::TVector<float>_const_,int>::operator[]
                      (*(TArrayView<UE::Math::TVector<float>_const_,int> **)((longlong)this + 0x10),
                       param_1);
  uVar8 = 0;
  puVar2 = (undefined8 *)**(undefined8 **)((longlong)this + 0x20);
  if ((*(int *)(puVar2 + 1) < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pfVar3 = (float *)*puVar2;
  uVar12 = 1;
  uVar14 = ~param_1;
  fVar18 = pfVar3[1] - (pTVar11->field0_0x0)._s_0.Y;
  fVar17 = *pfVar3 - (pTVar11->field0_0x0)._s_0.X;
  fVar16 = pfVar3[2] - (pTVar11->field0_0x0)._s_0.Z;
  plVar15 = (longlong *)**(longlong **)((longlong)this + 0x20);
  fVar16 = fVar18 * fVar18 + fVar17 * fVar17 + fVar16 * fVar16;
  if (1 < (int)plVar15[1]) {
    local_res18 = 0xc;
    uVar9 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar12 < (int)plVar15[1]) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar4 = *plVar15;
      plVar15 = *(longlong **)((longlong)this + 0x10);
      uVar8 = 0;
      if ((int)param_1 < (int)plVar15[1]) {
        uVar8 = uVar14 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar5 = *plVar15;
      fVar18 = *(float *)(local_res18 + lVar4) - *(float *)(lVar5 + lVar13 * 0xc);
      fVar19 = *(float *)(local_res18 + 4 + lVar4) - *(float *)(lVar5 + 4 + lVar13 * 0xc);
      fVar17 = *(float *)(local_res18 + 8 + lVar4) - *(float *)(lVar5 + 8 + lVar13 * 0xc);
      fVar17 = fVar19 * fVar19 + fVar18 * fVar18 + fVar17 * fVar17;
      uVar8 = uVar12;
      if (fVar16 <= fVar17) {
        uVar8 = uVar9;
        fVar17 = fVar16;
      }
      fVar16 = fVar17;
      uVar12 = uVar12 + 1;
      local_res18 = local_res18 + 0xc;
      plVar15 = (longlong *)**(undefined8 **)((longlong)this + 0x20);
      uVar9 = uVar8;
    } while ((int)uVar12 < (int)plVar15[1]);
  }
  lVar4 = *(longlong *)this;
  uVar9 = 0;
  uVar12 = uVar9;
  if ((int)uVar8 < *(int *)(lVar4 + 0x20)) {
    uVar12 = ~uVar8 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  LOCK();
  piVar1 = (int *)(*(longlong *)(lVar4 + 0x18) + (longlong)(int)uVar8 * 4);
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if (0 < *(int *)((longlong)this + 8)) {
    lVar4 = *(longlong *)this;
    uVar12 = uVar9;
    if ((int)param_1 < *(int *)(lVar4 + 0x10)) {
      uVar12 = uVar14 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar5 = *(longlong *)this;
    uVar12 = *(uint *)(*(longlong *)(lVar4 + 8) + lVar13 * 4);
    uVar10 = uVar9;
    if ((int)uVar12 < *(int *)(lVar5 + 0x20)) {
      uVar10 = ~uVar12 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    LOCK();
    piVar1 = (int *)(*(longlong *)(lVar5 + 0x18) + (longlong)(int)uVar12 * 4);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (uVar12 != uVar8) {
      **(undefined1 **)((longlong)this + 0x28) = 1;
    }
  }
  lVar4 = *(longlong *)this;
  if ((int)param_1 < *(int *)(lVar4 + 0x10)) {
    uVar9 = uVar14 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  *(uint *)(*(longlong *)(lVar4 + 8) + lVar13 * 4) = uVar8;
  UE::Geometry::TClusterCenterArray<UE::Math::TVector<float>,1>::Accumulate
            (*(TClusterCenterArray<UE::Math::TVector<float>,1> **)((longlong)this + 0x18),uVar8,
             pTVar11);
  return;
}

