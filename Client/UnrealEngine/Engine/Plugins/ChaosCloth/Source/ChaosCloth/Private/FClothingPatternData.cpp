// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 3

// FClothingPatternData @ 14db8f050

FClothingPatternData * __thiscall
Chaos::FClothingPatternData::FClothingPatternData
          (FClothingPatternData *this,int param_1,TArrayView<unsigned_int_const_,int> *param_2,
          TArrayView<UE::Math::TVector2<float>_const_,int> *param_3,
          TArrayView<unsigned_int_const_,int> *param_4,TArrayView<unsigned_int_const_,int> *param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  FTriangleMesh::FTriangleMesh(&this->PatternTriangleMesh);
  iVar1 = param_3->ArrayNum;
  uVar2 = *(undefined4 *)&param_3->field_0xc;
  (this->PatternPositions).DataPtr = param_3->DataPtr;
  (this->PatternPositions).ArrayNum = iVar1;
  *(undefined4 *)&(this->PatternPositions).field_0xc = uVar2;
  iVar1 = param_5->ArrayNum;
  uVar2 = *(undefined4 *)&param_5->field_0xc;
  (this->PatternToWeldedIndices).DataPtr = param_5->DataPtr;
  (this->PatternToWeldedIndices).ArrayNum = iVar1;
  *(undefined4 *)&(this->PatternToWeldedIndices).field_0xc = uVar2;
  (this->WeldedFaceVertexPatternPositions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WeldedFaceVertexPatternPositions).ArrayNum = 0;
  (this->WeldedFaceVertexPatternPositions).ArrayMax = 0;
  GenerateDerivedPatternData(this,param_1,param_2,param_4);
  return this;
}

// GenerateDerivedPatternData @ 14dbf3570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FClothingPatternData::GenerateDerivedPatternData
          (FClothingPatternData *this,int param_1,TArrayView<unsigned_int_const_,int> *param_2,
          TArrayView<unsigned_int_const_,int> *param_3)

{
  int *piVar1;
  TArray<Chaos::TVector<Chaos::TVector<float,2>,3>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  FClothingPatternData *pFVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  FScriptContainerElement *pFVar19;
  longlong lVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  ulonglong uVar25;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar26;
  uint uVar27;
  ulonglong uVar28;
  int iVar29;
  undefined1 auStackY_2b8 [32];
  undefined1 local_268 [8];
  FClothingPatternData *local_260;
  ForAnyElementType local_258;
  int local_250;
  int local_24c;
  longlong local_248;
  longlong local_240;
  uint local_238;
  uint local_234;
  uint local_230;
  longlong local_228;
  ForAnyElementType local_220;
  int local_218 [3];
  undefined8 local_20c;
  undefined4 local_204;
  uint local_200;
  uint local_1fc;
  FScriptContainerElement *local_1f8;
  FScriptContainerElement *local_1f0;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> local_1e8;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  uint uStack_1cc;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  uint uStack_1bc;
  TArrayView<unsigned_int_const_,int> local_1b8;
  FTriangleMesh local_1a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  local_260 = this;
  if (param_2->ArrayNum == param_3->ArrayNum) {
    iVar17 = (this->PatternPositions).ArrayNum;
    InitializeTriangleMesh(&this->PatternTriangleMesh,param_3,iVar17);
    if (iVar17 == 0) {
      (this->WeldedFaceVertexPatternPositions).ArrayNum = 0;
      if ((this->WeldedFaceVertexPatternPositions).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,4,0,&(this->WeldedFaceVertexPatternPositions).AllocatorInstance,0,
                   &(this->WeldedFaceVertexPatternPositions).ArrayMax);
      }
    }
    else {
      FTriangleMesh::FTriangleMesh(&local_1a8);
      InitializeTriangleMesh(&local_1a8,param_2,param_1);
      uVar28 = 0;
      local_220.Data = (FScriptContainerElement *)0x0;
      local_218[0] = 0;
      local_218[1] = 0;
      if (local_1a8.MElements.ArrayNum < 1) {
        if (local_1a8.MElements.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)local_1a8.MElements.ArrayNum);
        }
      }
      else {
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,local_1a8.MElements.ArrayNum,&local_220,local_218,local_218 + 1);
      }
      uVar24 = 0;
      if (0 < local_1a8.MElements.ArrayNum) {
        local_248 = 0;
        uVar18 = uVar28;
        uVar25 = uVar28;
        do {
          uVar22 = (uint)uVar18;
          uVar10 = uVar24;
          if ((int)uVar22 < local_1a8.MElements.ArrayNum) {
            uVar10 = ~uVar22 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar17 = *(int *)(local_1a8.MElements.AllocatorInstance.Data + uVar25 + 4);
          iVar16 = *(int *)(local_1a8.MElements.AllocatorInstance.Data + uVar25);
          iVar3 = *(int *)(local_1a8.MElements.AllocatorInstance.Data + uVar25 + 8);
          iVar29 = iVar17;
          if (iVar17 < iVar16) {
            iVar29 = iVar16;
          }
          iVar5 = iVar3;
          if (iVar3 < iVar29) {
            iVar5 = iVar29;
          }
          iVar29 = iVar16;
          if (((iVar16 != iVar17) && (iVar16 < iVar3 != iVar17 < iVar16)) &&
             (iVar29 = iVar17, iVar17 < iVar3 != iVar16 < iVar17)) {
            iVar29 = iVar3;
          }
          if (iVar16 < iVar17) {
            iVar17 = iVar16;
          }
          if (iVar17 < iVar3) {
            iVar3 = iVar17;
          }
          uVar10 = uVar24;
          if ((int)uVar22 < local_218[0]) {
            uVar10 = ~uVar22 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_248 = local_248 + 1;
          uVar18 = (ulonglong)(uVar22 + 1);
          *(int *)(local_220.Data + uVar25) = iVar3;
          *(int *)(local_220.Data + uVar25 + 4) = iVar29;
          *(int *)(local_220.Data + uVar25 + 8) = iVar5;
          uVar25 = uVar25 + 0xc;
          this = local_260;
        } while ((int)(uVar22 + 1) < local_1a8.MElements.ArrayNum);
      }
      FTriangleMesh::GetPointToTriangleMap(&local_1a8,&local_1e8);
      iVar17 = local_1a8.MElements.ArrayNum;
      uVar18 = (ulonglong)(uint)local_1a8.MElements.ArrayNum;
      local_258.Data = (FScriptContainerElement *)0x0;
      local_24c = 0;
      local_20c = 0xffffffffffffffff;
      local_204 = 0xffffffff;
      if (local_1a8.MElements.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar18);
      }
      local_250 = 0;
      if ((local_1a8.MElements.ArrayNum != 0) &&
         (UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,local_1a8.MElements.ArrayNum,&local_258,0,&local_24c), 0 < iVar17)) {
        do {
          if ((local_258.Data <= (FScriptContainerElement *)&local_20c) &&
             (((FScriptContainerElement *)&local_20c < local_258.Data + (longlong)local_24c * 0xc &&
              (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar9)))) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (local_250 == local_24c) {
            local_250 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x40c,&local_258,&local_24c);
          }
          iVar17 = local_250 + 1;
          *(undefined8 *)(local_258.Data + (longlong)local_250 * 0xc) = local_20c;
          *(undefined4 *)(local_258.Data + (longlong)local_250 * 0xc + 8) = local_204;
          uVar18 = uVar18 - 1;
          local_250 = iVar17;
        } while (uVar18 != 0);
      }
      iVar17 = (this->PatternTriangleMesh).MElements.ArrayNum;
      local_230 = 0;
      uVar22 = 0;
      uVar10 = 0;
      if (0 < iVar17) {
        local_228 = 0;
        local_240 = 0;
        uVar18 = uVar28;
LAB_14dbf38f0:
        lVar20 = local_240;
        uVar23 = ~(uint)uVar18 >> 0x1f;
        uVar27 = uVar24;
        if ((int)(uint)uVar18 < iVar17) {
          uVar27 = uVar23;
        }
        if ((uVar27 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar21 = (this->PatternTriangleMesh).MElements.AllocatorInstance.Data + lVar20;
        uVar27 = *(uint *)(pFVar21 + 8);
        uVar11 = uVar10;
        if ((int)uVar27 < (this->PatternToWeldedIndices).ArrayNum) {
          uVar11 = ~uVar27 >> 0x1f;
        }
        local_1f0 = pFVar21;
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar27 = (this->PatternToWeldedIndices).DataPtr[(int)uVar27];
        uVar11 = *(uint *)(pFVar21 + 4);
        uVar12 = uVar10;
        if ((int)uVar11 < (this->PatternToWeldedIndices).ArrayNum) {
          uVar12 = ~uVar11 >> 0x1f;
        }
        local_234 = uVar27;
        if ((uVar12 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar11 = (this->PatternToWeldedIndices).DataPtr[(int)uVar11];
        uVar12 = *(uint *)pFVar21;
        local_248 = CONCAT44(local_248._4_4_,uVar11);
        uVar13 = uVar10;
        if ((int)uVar12 < (this->PatternToWeldedIndices).ArrayNum) {
          uVar13 = ~uVar12 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar13 = local_230;
        uVar12 = (this->PatternToWeldedIndices).DataPtr[(int)uVar12];
        uVar14 = uVar11;
        if ((int)uVar11 < (int)uVar12) {
          uVar14 = uVar12;
        }
        local_238 = uVar27;
        if ((int)uVar27 < (int)uVar14) {
          local_238 = uVar14;
        }
        uVar14 = uVar12;
        if (((uVar12 != uVar11) && ((int)uVar12 < (int)uVar27 != (int)uVar11 <= (int)uVar12)) &&
           (uVar14 = uVar27, (int)uVar11 < (int)uVar27 == (int)uVar12 < (int)uVar11)) {
          uVar14 = uVar11;
        }
        uVar15 = uVar11;
        if ((int)uVar12 < (int)uVar11) {
          uVar15 = uVar12;
        }
        if ((int)uVar15 < (int)uVar27) {
          uVar27 = uVar15;
        }
        uVar15 = uVar10;
        if ((int)local_230 < local_218[0]) {
          uVar15 = uVar23;
        }
        local_218[2] = uVar14;
        local_200 = uVar27;
        local_1fc = uVar12;
        if ((uVar15 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar20 = local_240;
        if (((uVar27 != *(uint *)(local_220.Data + local_240)) ||
            (uVar14 != *(uint *)(local_220.Data + local_240 + 4))) ||
           (local_238 != *(uint *)(local_220.Data + local_240 + 8))) {
LAB_14dbf3b98:
          uVar27 = uVar10;
          if ((int)uVar12 < local_1e8.ArrayNum) {
            uVar27 = ~uVar12 >> 0x1f;
          }
          if ((uVar27 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pTVar26 = local_1e8.DataPtr + (int)uVar12;
          pFVar21 = (pTVar26->AllocatorInstance).Data;
          iVar17 = pTVar26->ArrayNum;
          local_1f8 = pFVar21 + (longlong)iVar17 * 4;
          do {
            pFVar19 = local_1f8;
            if (pTVar26->ArrayNum != iVar17) {
              local_268[0] = 0;
              `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_268);
            }
            if (pFVar21 == pFVar19) goto LAB_14dbf3f5b;
            uVar13 = *(uint *)pFVar21;
            uVar27 = uVar10;
            if ((int)uVar13 < local_218[0]) {
              uVar27 = ~uVar13 >> 0x1f;
            }
            if ((uVar27 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            lVar20 = (longlong)(int)uVar13 * 0xc;
            if (((*(uint *)(local_220.Data + lVar20) == local_200) &&
                (*(uint *)(local_220.Data + lVar20 + 4) == local_218[2])) &&
               (*(uint *)(local_220.Data + lVar20 + 8) == local_238)) {
              uVar27 = uVar22;
              if ((int)uVar13 < local_250) {
                uVar27 = ~uVar13 >> 0x1f;
              }
              if ((uVar27 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if (((*(int *)(local_258.Data + lVar20) == -1) &&
                  (*(int *)(local_258.Data + lVar20 + 4) == -1)) &&
                 (*(int *)(local_258.Data + lVar20 + 8) == -1)) goto LAB_14dbf3cfa;
            }
            pFVar21 = pFVar21 + 4;
          } while( true );
        }
        uVar27 = uVar10;
        if ((int)uVar13 < local_250) {
          uVar27 = uVar23;
        }
        if ((uVar27 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (((*(int *)(local_258.Data + lVar20) != -1) ||
            (*(int *)(local_258.Data + lVar20 + 4) != -1)) ||
           (*(int *)(local_258.Data + lVar20 + 8) != -1)) goto LAB_14dbf3b98;
        goto LAB_14dbf3d03;
      }
LAB_14dbf3f15:
      iVar16 = local_1a8.MElements.ArrayNum;
      lVar20 = (longlong)local_1a8.MElements.ArrayNum;
      pTVar2 = &this->WeldedFaceVertexPatternPositions;
      iVar17 = (this->WeldedFaceVertexPatternPositions).ArrayNum;
      piVar1 = &(this->WeldedFaceVertexPatternPositions).ArrayNum;
      if (iVar17 < local_1a8.MElements.ArrayNum) {
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,4,local_1a8.MElements.ArrayNum - iVar17,&pTVar2->AllocatorInstance,piVar1,
                   &(this->WeldedFaceVertexPatternPositions).ArrayMax);
      }
      else {
        if (local_1a8.MElements.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)local_1a8.MElements.ArrayNum);
        }
        if (local_1a8.MElements.ArrayNum < iVar17) {
          uVar24 = iVar17 - local_1a8.MElements.ArrayNum;
          if (((int)(uVar24 | local_1a8.MElements.ArrayNum) < 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (uVar24 != 0) {
            pFVar21 = (pTVar2->AllocatorInstance).Data + lVar20 * 0x18;
            iVar16 = (*piVar1 - uVar24) - iVar16;
            if (iVar16 != 0) {
              memmove(pFVar21,pFVar21 + (longlong)(int)uVar24 * 0x18,(longlong)iVar16 * 0x18);
            }
            *piVar1 = *piVar1 - uVar24;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,4,&pTVar2->AllocatorInstance,*piVar1,
                       &(this->WeldedFaceVertexPatternPositions).ArrayMax);
          }
        }
      }
      if (0 < local_1a8.MElements.ArrayNum) {
        local_240 = 0;
        local_228 = 0;
        local_248 = 0;
        do {
          lVar20 = local_228;
          uVar27 = (uint)uVar28;
          uVar23 = ~uVar27 >> 0x1f;
          uVar24 = uVar22;
          if ((int)uVar27 < local_250) {
            uVar24 = uVar23;
          }
          if ((uVar24 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar21 = local_258.Data + lVar20;
          uVar24 = uVar10;
          if ((int)uVar27 < local_1a8.MElements.ArrayNum) {
            uVar24 = uVar23;
          }
          if ((uVar24 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar19 = local_1a8.MElements.AllocatorInstance.Data + lVar20;
          if ((((*(uint *)pFVar21 == 0xffffffff) && (*(uint *)(pFVar21 + 4) == 0xffffffff)) &&
              (*(uint *)(pFVar21 + 8) == 0xffffffff)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("!(FaceVertex == TVec3<int32>(INDEX_NONE))",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingPatternData.cpp"
                                 ,0x96,L""), bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar24 = *(uint *)pFVar21;
          uVar11 = *(uint *)pFVar19;
          uVar12 = uVar10;
          if ((int)uVar24 < (local_260->PatternToWeldedIndices).ArrayNum) {
            uVar12 = ~uVar24 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (((local_260->PatternToWeldedIndices).DataPtr[(int)uVar24] != uVar11) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("PatternToWeldedIndices[FaceVertex[0]] == WeldedElement[0]",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingPatternData.cpp"
                                 ,0x97,L""), bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar24 = *(uint *)(pFVar21 + 4);
          uVar11 = *(uint *)(pFVar19 + 4);
          uVar12 = uVar10;
          if ((int)uVar24 < (local_260->PatternToWeldedIndices).ArrayNum) {
            uVar12 = ~uVar24 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (((local_260->PatternToWeldedIndices).DataPtr[(int)uVar24] != uVar11) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("PatternToWeldedIndices[FaceVertex[1]] == WeldedElement[1]",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingPatternData.cpp"
                                 ,0x98,L""), bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar24 = *(uint *)(pFVar21 + 8);
          uVar11 = *(uint *)(pFVar19 + 8);
          uVar12 = uVar10;
          if ((int)uVar24 < (local_260->PatternToWeldedIndices).ArrayNum) {
            uVar12 = ~uVar24 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar6 = local_260;
          if (((local_260->PatternToWeldedIndices).DataPtr[(int)uVar24] != uVar11) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("PatternToWeldedIndices[FaceVertex[2]] == WeldedElement[2]",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingPatternData.cpp"
                                 ,0x99,L""), bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar20 = local_240;
          uVar24 = uVar22;
          if ((int)uVar27 < (pFVar6->WeldedFaceVertexPatternPositions).ArrayNum) {
            uVar24 = uVar23;
          }
          if ((uVar24 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar7 = local_248;
          pFVar19 = (pFVar6->WeldedFaceVertexPatternPositions).AllocatorInstance.Data;
          uVar24 = *(uint *)pFVar21;
          uVar23 = uVar22;
          if ((int)uVar24 < (local_260->PatternPositions).ArrayNum) {
            uVar23 = ~uVar24 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          *(TVector2<float>_u_0 *)(pFVar19 + lVar7) =
               (local_260->PatternPositions).DataPtr[(int)uVar24].field0_0x0;
          uVar24 = *(uint *)(pFVar21 + 4);
          uVar23 = uVar22;
          if ((int)uVar24 < (local_260->PatternPositions).ArrayNum) {
            uVar23 = ~uVar24 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          *(TVector2<float>_u_0 *)(pFVar19 + lVar7 + 8) =
               (local_260->PatternPositions).DataPtr[(int)uVar24].field0_0x0;
          uVar24 = *(uint *)(pFVar21 + 8);
          uVar23 = uVar22;
          if ((int)uVar24 < (local_260->PatternPositions).ArrayNum) {
            uVar23 = ~uVar24 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_240 = lVar20 + 1;
          uVar28 = (ulonglong)(uVar27 + 1);
          *(TVector2<float>_u_0 *)(pFVar19 + lVar7 + 0x10) =
               (local_260->PatternPositions).DataPtr[(int)uVar24].field0_0x0;
          local_228 = local_228 + 0xc;
          local_248 = lVar7 + 0x18;
        } while ((int)(uVar27 + 1) < local_1a8.MElements.ArrayNum);
      }
LAB_14dbf44f8:
      if (local_258.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_258.Data);
      }
      if (local_220.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_220.Data);
      }
      FTriangleMesh::~FTriangleMesh(&local_1a8);
    }
  }
  else {
    Reset(this);
  }
  return;
LAB_14dbf3cfa:
  uVar11 = (uint)local_248;
  uVar12 = local_1fc;
LAB_14dbf3d03:
  if (uVar13 == 0xffffffff) {
LAB_14dbf3f5b:
    if (2 < (byte)LogChaosCloth._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaosCloth);
    }
    pFVar6 = local_260;
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_1c8 = 0;
    uStack_1c0 = 0;
    (local_260->PatternPositions).DataPtr = (TVector2<float> *)0x0;
    *(ulonglong *)&(local_260->PatternPositions).ArrayNum = (ulonglong)uStack_1cc << 0x20;
    local_1b8.DataPtr = (uint *)0x0;
    local_1b8.ArrayNum = 0;
    (local_260->PatternToWeldedIndices).DataPtr = (uint *)0x0;
    *(ulonglong *)&(local_260->PatternToWeldedIndices).ArrayNum = (ulonglong)uStack_1bc << 0x20;
    InitializeTriangleMesh(&local_260->PatternTriangleMesh,&local_1b8,0);
    (pFVar6->WeldedFaceVertexPatternPositions).ArrayNum = 0;
    if ((pFVar6->WeldedFaceVertexPatternPositions).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,0,&(pFVar6->WeldedFaceVertexPatternPositions).AllocatorInstance,0,
                 &(pFVar6->WeldedFaceVertexPatternPositions).ArrayMax);
    }
    goto LAB_14dbf44f8;
  }
  uVar27 = uVar22;
  if ((int)uVar13 < local_1a8.MElements.ArrayNum) {
    uVar27 = ~uVar13 >> 0x1f;
  }
  if ((uVar27 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar21 = local_1a8.MElements.AllocatorInstance.Data + (longlong)(int)uVar13 * 0xc;
  uVar27 = uVar22;
  if ((int)uVar13 < local_250) {
    uVar27 = ~uVar13 >> 0x1f;
  }
  if ((uVar27 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar19 = local_258.Data + (longlong)(int)uVar13 * 0xc;
  if ((((*(int *)pFVar19 != -1) || (*(int *)(pFVar19 + 4) != -1)) || (*(int *)(pFVar19 + 8) != -1))
     && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                           ("FaceVertex == TVec3<int32>(INDEX_NONE)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingPatternData.cpp"
                            ,0x8a,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar23 = local_234;
  uVar27 = *(uint *)pFVar21;
  if (((uVar12 != uVar27) && (uVar11 != uVar27)) &&
     ((local_234 != uVar27 &&
      (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                         ("WeldedPatternElement[0] == WeldedElement[WeldedIndex] || WeldedPatternElement[1] == WeldedElement[WeldedIndex] || WeldedPatternElement[2] == WeldedElement[WeldedIndex]"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingPatternData.cpp"
                          ,0x85,L""), bVar9)))) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar8 = local_1f0;
  uVar18 = uVar28;
  if (uVar12 != *(uint *)pFVar21) {
    uVar18 = (ulonglong)(uVar11 != *(uint *)pFVar21) + 1;
  }
  *(int *)pFVar19 = *(int *)(local_1f0 + uVar18 * 4);
  uVar27 = *(uint *)(pFVar21 + 4);
  if (((uVar12 != uVar27) && (uVar11 != uVar27)) &&
     ((uVar23 != uVar27 &&
      (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                         ("WeldedPatternElement[0] == WeldedElement[WeldedIndex] || WeldedPatternElement[1] == WeldedElement[WeldedIndex] || WeldedPatternElement[2] == WeldedElement[WeldedIndex]"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingPatternData.cpp"
                          ,0x85,L""), bVar9)))) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar18 = uVar28;
  if (uVar12 != *(uint *)(pFVar21 + 4)) {
    uVar18 = (ulonglong)(uVar11 != *(uint *)(pFVar21 + 4)) + 1;
  }
  *(int *)(pFVar19 + 4) = *(int *)(pFVar8 + uVar18 * 4);
  uVar27 = *(uint *)(pFVar21 + 8);
  if ((((uVar12 != uVar27) && (uVar11 != uVar27)) && (uVar23 != uVar27)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("WeldedPatternElement[0] == WeldedElement[WeldedIndex] || WeldedPatternElement[1] == WeldedElement[WeldedIndex] || WeldedPatternElement[2] == WeldedElement[WeldedIndex]"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingPatternData.cpp"
                         ,0x85,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar25 = uVar28;
  if (uVar12 != *(uint *)(pFVar21 + 8)) {
    uVar25 = (ulonglong)(uVar11 != *(uint *)(pFVar21 + 8)) + 1;
  }
  local_230 = local_230 + 1;
  uVar18 = (ulonglong)local_230;
  local_228 = local_228 + 1;
  *(int *)(pFVar19 + 8) = *(int *)(pFVar8 + uVar25 * 4);
  iVar17 = (local_260->PatternTriangleMesh).MElements.ArrayNum;
  local_240 = local_240 + 0xc;
  this = local_260;
  if (iVar17 <= (int)local_230) goto LAB_14dbf3f15;
  goto LAB_14dbf38f0;
}

// Reset @ 14dc0e950

void __thiscall Chaos::FClothingPatternData::Reset(FClothingPatternData *this)

{
  TArrayView<unsigned_int_const_,int> local_18;
  
  (this->PatternPositions).DataPtr = (TVector2<float> *)0x0;
  *(ulonglong *)&(this->PatternPositions).ArrayNum = (ulonglong)(uint)local_18._12_4_ << 0x20;
  local_18.DataPtr = (uint *)0x0;
  local_18.ArrayNum = 0;
  (this->PatternToWeldedIndices).DataPtr = (uint *)0x0;
  *(ulonglong *)&(this->PatternToWeldedIndices).ArrayNum = (ulonglong)(uint)local_18._12_4_ << 0x20;
  InitializeTriangleMesh(&this->PatternTriangleMesh,&local_18,0);
  (this->WeldedFaceVertexPatternPositions).ArrayNum = 0;
  if ((this->WeldedFaceVertexPatternPositions).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,&(this->WeldedFaceVertexPatternPositions).AllocatorInstance,0,
               &(this->WeldedFaceVertexPatternPositions).ArrayMax);
  }
  return;
}

