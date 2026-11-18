// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// operator() @ 14743b8a0

bool __thiscall
`UE::Anim::FCurveUtils::
BuildUnsorted<`FRawCurveTracks::EvaluateCurveData'::__l2::<lambda_1>,`FRawCurveTracks::EvaluateCurveData'::__l2::<lambda_2>,TMemStackAllocator<0>,UE::Anim::FCurveElement>'
::__l5::<lambda_1>::operator()(void *this,int param_1,int param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  
  plVar1 = (longlong *)**(longlong **)this;
  uVar7 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  uVar2 = *(undefined8 *)(*plVar1 + (longlong)param_1 * 0x90);
  plVar1 = (longlong *)**(longlong **)this;
  uVar7 = 0;
  if (param_2 < (int)plVar1[1]) {
    uVar7 = (uint)~param_2 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  uVar3 = *(undefined8 *)(*plVar1 + (longlong)param_2 * 0x90);
  iVar8 = (int)uVar2 - (int)uVar3;
  if (iVar8 == 0) {
    iVar8 = (int)((ulonglong)uVar2 >> 0x20) - (int)((ulonglong)uVar3 >> 0x20);
  }
  return SUB41((uint)iVar8 >> 0x1f,0);
}

// operator() @ 14743c110

float __thiscall
`UE::Anim::FCurveUtils::
BuildUnsorted<`FRawCurveTracks::EvaluateCurveData'::__l2::<lambda_1>,`FRawCurveTracks::EvaluateCurveData'::__l2::<lambda_2>,TMemStackAllocator<0>,UE::Anim::FCurveElement>'
::__l5::<lambda_3>::operator()(void *this,int param_1)

{
  longlong *plVar1;
  void *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  float fVar5;
  
  plVar1 = *(longlong **)this;
  this_00 = *(void **)((longlong)this + 8);
  uVar4 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar5 = (float)(*pcVar2)();
      return fVar5;
    }
  }
  fVar5 = `FRawCurveTracks::EvaluateCurveData'::__l2::<lambda_2>::operator()
                    (this_00,*(int *)(*plVar1 + (longlong)param_1 * 4));
  return fVar5;
}

// Filter<TSizedDefaultAllocator<32>,FInertializationCurveDiffElement> @ 1474a5cc0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Anim::FCurveUtils::Filter<TSizedDefaultAllocator<32>,FInertializationCurveDiffElement>
          (TBaseBlendedCurve<TSizedDefaultAllocator<32>,FInertializationCurveDiffElement> *param_1,
          FCurveFilter *param_2)

{
  ECurveFilterMode EVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  FIdentityFunctor local_res10;
  
  EVar1 = param_2->FilterMode;
  if (EVar1 != None) {
    if ((EVar1 != DisallowAll) && ((EVar1 != AllowOnlyFiltered || ((int)param_2->_padding_ != 0))))
    {
      if ((char)param_1->_padding_ == '\0') {
        AlgoImpl::
        IntroSortInternal<FInertializationCurveDiffElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedDefaultAllocator<32>,FInertializationCurveDiffElement>::FElementSortPredicate>
                  ((FInertializationCurveDiffElement *)param_1->_padding_,(int)param_1->_padding_,
                   local_res10,(FElementSortPredicate)local_res10);
        *(undefined1 *)&param_1->_padding_ = 1;
      }
      if ((char)param_2->_padding_ == '\0') {
        AlgoImpl::
        IntroSortInternal<UE::Anim::FCurveFilterElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveFilterElement>::FElementSortPredicate>
                  ((FCurveFilterElement *)param_2->_padding_,(int)param_2->_padding_,local_res10,
                   (FElementSortPredicate)local_res10);
        *(undefined1 *)&param_2->_padding_ = 1;
      }
      lVar8 = (longlong)(int)param_2->_padding_;
      uVar10 = 0;
      uVar11 = (uint)param_1->_padding_;
      uVar12 = 0;
      lVar13 = 0;
      lVar14 = 0;
      lVar15 = 0;
      do {
        while( true ) {
          while( true ) {
            if ((uVar10 == uVar11) && (lVar13 < lVar8)) {
              return;
            }
            if ((lVar13 == lVar8) && ((int)uVar10 < (int)uVar11)) {
              do {
                EVar1 = param_2->FilterMode;
                if ((EVar1 == None) ||
                   (((EVar1 != DisallowAll && (EVar1 != AllowOnlyFiltered)) &&
                    (EVar1 == DisallowFiltered)))) {
                  uVar10 = uVar10 + 1;
                }
                else {
                  TArray<FInertializationCurveDiffElement,TSizedDefaultAllocator<32>_>::RemoveAt
                            ((TArray<FInertializationCurveDiffElement,TSizedDefaultAllocator<32>_> *
                             )param_1,uVar10,No);
                  uVar11 = (uint)param_1->_padding_;
                }
              } while ((int)uVar10 < (int)uVar11);
              return;
            }
            if ((uVar10 == uVar11) && (lVar13 == lVar8)) {
              return;
            }
            uVar6 = 0;
            if ((int)uVar10 < (int)param_1->_padding_) {
              uVar6 = ~uVar10 >> 0x1f;
            }
            if ((uVar6 == 0) &&
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
            lVar2 = param_1->_padding_;
            uVar6 = 0;
            if ((int)uVar12 < (int)param_2->_padding_) {
              uVar6 = ~uVar12 >> 0x1f;
            }
            if ((uVar6 == 0) &&
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
            lVar2 = *(longlong *)(lVar2 + lVar15);
            lVar3 = *(longlong *)(param_2->_padding_ + lVar14);
            if (lVar2 == lVar3) break;
            iVar7 = (int)lVar2 - (int)lVar3;
            if (iVar7 == 0) {
              iVar7 = (int)((ulonglong)lVar2 >> 0x20) - (int)((ulonglong)lVar3 >> 0x20);
            }
            if (iVar7 < 0) {
              EVar1 = param_2->FilterMode;
              if ((EVar1 == None) ||
                 (((EVar1 != DisallowAll && (EVar1 != AllowOnlyFiltered)) &&
                  (EVar1 == DisallowFiltered)))) {
                uVar10 = uVar10 + 1;
                lVar15 = lVar15 + 0x18;
              }
              else {
                TArray<FInertializationCurveDiffElement,TSizedDefaultAllocator<32>_>::RemoveAt
                          ((TArray<FInertializationCurveDiffElement,TSizedDefaultAllocator<32>_> *)
                           param_1,uVar10,No);
                uVar11 = (uint)param_1->_padding_;
              }
            }
            else {
              uVar12 = uVar12 + 1;
              lVar13 = lVar13 + 1;
              lVar14 = lVar14 + 0xc;
            }
          }
          bVar9 = *(byte *)(param_2->_padding_ + 8 + lVar14);
          if ((bVar9 & 1) == 0) break;
LAB_1474a5edb:
          uVar12 = uVar12 + 1;
          lVar13 = lVar13 + 1;
          TArray<FInertializationCurveDiffElement,TSizedDefaultAllocator<32>_>::RemoveAt
                    ((TArray<FInertializationCurveDiffElement,TSizedDefaultAllocator<32>_> *)param_1
                     ,uVar10,No);
          uVar11 = (uint)param_1->_padding_;
          lVar14 = lVar14 + 0xc;
        }
        EVar1 = param_2->FilterMode;
        if (EVar1 != None) {
          if (EVar1 != DisallowAll) {
            if (EVar1 == AllowOnlyFiltered) {
              bVar9 = bVar9 >> 1;
            }
            else {
              if (EVar1 != DisallowFiltered) goto LAB_1474a5edb;
              bVar9 = ~(bVar9 >> 1);
            }
            if ((bVar9 & 1) != 0) goto LAB_1474a5f07;
          }
          goto LAB_1474a5edb;
        }
LAB_1474a5f07:
        uVar12 = uVar12 + 1;
        lVar13 = lVar13 + 1;
        uVar10 = uVar10 + 1;
        lVar15 = lVar15 + 0x18;
        lVar14 = lVar14 + 0xc;
      } while( true );
    }
    iVar7 = *(int *)((longlong)&param_1->_padding_ + 4);
    *(undefined4 *)&param_1->_padding_ = 0;
    if (iVar7 < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,0,(ForAnyElementType *)param_1,0,(int *)((longlong)&param_1->_padding_ + 4))
      ;
      return;
    }
  }
  return;
}

// Filter<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement> @ 1474a5ff0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Anim::FCurveUtils::
Filter<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement>
          (TBaseBlendedCurve<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement>
           *param_1,FCurveFilter *param_2)

{
  int *piVar1;
  ECurveFilterMode EVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  byte bVar10;
  TBaseBlendedCurve<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement>
  *pTVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  FIdentityFunctor local_res10;
  
  EVar2 = param_2->FilterMode;
  if (EVar2 != None) {
    if ((EVar2 != DisallowAll) && ((EVar2 != AllowOnlyFiltered || ((int)param_2->_padding_ != 0))))
    {
      if ((char)param_1->_padding_ == '\0') {
        pTVar11 = param_1;
        if ((TBaseBlendedCurve<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement>
             *)param_1->_padding_ !=
            (TBaseBlendedCurve<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement>
             *)0x0) {
          pTVar11 = (TBaseBlendedCurve<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement>
                     *)param_1->_padding_;
        }
        AlgoImpl::
        IntroSortInternal<FAnimNode_DeadBlending::FDeadBlendingCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement>::FElementSortPredicate>
                  ((FDeadBlendingCurveElement *)pTVar11,(int)param_1->_padding_,local_res10,
                   (FElementSortPredicate)local_res10);
        *(undefined1 *)&param_1->_padding_ = 1;
      }
      if ((char)param_2->_padding_ == '\0') {
        AlgoImpl::
        IntroSortInternal<UE::Anim::FCurveFilterElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveFilterElement>::FElementSortPredicate>
                  ((FCurveFilterElement *)param_2->_padding_,(int)param_2->_padding_,local_res10,
                   (FElementSortPredicate)local_res10);
        *(undefined1 *)&param_2->_padding_ = 1;
      }
      lVar9 = (longlong)(int)param_2->_padding_;
      uVar12 = 0;
      uVar13 = 0;
      lVar14 = 0;
      lVar16 = 0;
      lVar15 = 0;
LAB_1474a60ee:
      uVar17 = (uint)param_1->_padding_;
LAB_1474a60f5:
      do {
        while( true ) {
          if ((uVar12 == uVar17) && (lVar14 < lVar9)) {
            return;
          }
          if ((lVar14 == lVar9) && ((int)uVar12 < (int)uVar17)) {
            do {
              EVar2 = param_2->FilterMode;
              if ((EVar2 == None) ||
                 (((EVar2 != DisallowAll && (EVar2 != AllowOnlyFiltered)) &&
                  (EVar2 == DisallowFiltered)))) {
                uVar12 = uVar12 + 1;
              }
              else {
                TArray<FAnimNode_DeadBlending::FDeadBlendingCurveElement,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                ::RemoveAt((TArray<FAnimNode_DeadBlending::FDeadBlendingCurveElement,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                            *)param_1,uVar12,No);
                uVar17 = (uint)param_1->_padding_;
              }
            } while ((int)uVar12 < (int)uVar17);
            return;
          }
          if ((uVar12 == uVar17) && (lVar14 == lVar9)) {
            return;
          }
          uVar7 = 0;
          if ((int)uVar12 < (int)param_1->_padding_) {
            uVar7 = ~uVar12 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pTVar11 = param_1;
          if ((TBaseBlendedCurve<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement>
               *)param_1->_padding_ !=
              (TBaseBlendedCurve<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement>
               *)0x0) {
            pTVar11 = (TBaseBlendedCurve<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement>
                       *)param_1->_padding_;
          }
          uVar7 = 0;
          if ((int)uVar13 < (int)param_2->_padding_) {
            uVar7 = ~uVar13 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar3 = *(longlong *)(param_2->_padding_ + lVar16);
          lVar4 = *(longlong *)((longlong)&pTVar11->_padding_ + lVar15);
          if (lVar4 == lVar3) break;
          iVar8 = (int)lVar4 - (int)lVar3;
          if (iVar8 == 0) {
            iVar8 = (int)((ulonglong)lVar4 >> 0x20) - (int)((ulonglong)lVar3 >> 0x20);
          }
          if (iVar8 < 0) {
            EVar2 = param_2->FilterMode;
            if ((EVar2 != None) &&
               (((EVar2 == DisallowAll || (EVar2 == AllowOnlyFiltered)) ||
                (EVar2 != DisallowFiltered)))) goto LAB_1474a6296;
            uVar12 = uVar12 + 1;
            lVar15 = lVar15 + 0x18;
          }
          else {
            uVar13 = uVar13 + 1;
            lVar14 = lVar14 + 1;
            lVar16 = lVar16 + 0xc;
          }
        }
        bVar10 = *(byte *)(param_2->_padding_ + 8 + lVar16);
        if ((bVar10 & 1) == 0) {
          EVar2 = param_2->FilterMode;
          if (EVar2 == None) {
LAB_1474a625b:
            uVar13 = uVar13 + 1;
            lVar14 = lVar14 + 1;
            uVar12 = uVar12 + 1;
            lVar15 = lVar15 + 0x18;
            lVar16 = lVar16 + 0xc;
            goto LAB_1474a60f5;
          }
          if (EVar2 != DisallowAll) {
            if (EVar2 == AllowOnlyFiltered) {
              bVar10 = bVar10 >> 1;
            }
            else {
              if (EVar2 != DisallowFiltered) goto LAB_1474a6234;
              bVar10 = ~(bVar10 >> 1);
            }
            if ((bVar10 & 1) != 0) goto LAB_1474a625b;
          }
        }
LAB_1474a6234:
        uVar13 = uVar13 + 1;
        lVar14 = lVar14 + 1;
        TArray<FAnimNode_DeadBlending::FDeadBlendingCurveElement,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
        ::RemoveAt((TArray<FAnimNode_DeadBlending::FDeadBlendingCurveElement,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                    *)param_1,uVar12,No);
        lVar16 = lVar16 + 0xc;
        uVar17 = (uint)param_1->_padding_;
      } while( true );
    }
    piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
    iVar8 = *piVar1;
    *(undefined4 *)&param_1->_padding_ = 0;
    if (iVar8 < 0) {
      Core::Private::
      ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>_>
                (0x18,4,0,(ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement> *)
                          param_1,0,piVar1);
      return;
    }
  }
  return;
LAB_1474a6296:
  TArray<FAnimNode_DeadBlending::FDeadBlendingCurveElement,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  ::RemoveAt((TArray<FAnimNode_DeadBlending::FDeadBlendingCurveElement,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
              *)param_1,uVar12,No);
  goto LAB_1474a60ee;
}

