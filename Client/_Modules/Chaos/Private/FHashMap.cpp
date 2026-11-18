// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 6

// ConcurrentAddElement @ 143a60d00

int __thiscall
Chaos::TSpatialHashGridBase<int>::FHashMap::ConcurrentAddElement
          (FHashMap *this,TVector<int,3> *param_1,int param_2,FPayloadAndBounds *param_3)

{
  atomic<int> *paVar1;
  FPayloadAndBounds *pFVar2;
  atomic<int> aVar3;
  FPayloadAndBounds FVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  FPayloadAndBounds FVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  atomic<int> aVar11;
  atomic<int> aVar12;
  uint uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  int iStack_3c;
  
  LOCK();
  paVar1 = &this->ConcurrentElementAddIdx;
  aVar3 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  iVar10 = (this->Hash).ArrayNum;
  auVar15._12_4_ = param_2;
  auVar15._8_4_ = (param_1->field0_0x0)._s_0.Z;
  auVar15._0_8_ = *(undefined8 *)&param_1->field0_0x0;
  auVar14 = pmulld(auVar15,(undefined1  [16])
                           `public:_unsigned_int___cdecl_Chaos::TSpatialHashGridBase<int>::FHashIndex::GetTypeHash(void)const___ptr64'
                           ::__l2::Multiplier);
  uVar13 = (auVar14._0_4_ ^ auVar14._4_4_ ^ auVar14._8_4_ ^ auVar14._12_4_) & iVar10 - 1U;
  uVar9 = 0;
  if ((int)uVar13 < iVar10) {
    uVar9 = ~uVar13 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    iVar10 = (*pcVar6)();
    return iVar10;
  }
  aVar12 = *(atomic<int> *)((this->Hash).AllocatorInstance.Data + (longlong)(int)uVar13 * 4);
  do {
    aVar11 = aVar12;
    uVar9 = 0;
    if ((int)uVar13 < (this->Hash).ArrayNum) {
      uVar9 = ~uVar13 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      iVar10 = (*pcVar6)();
      return iVar10;
    }
    paVar1 = (atomic<int> *)((this->Hash).AllocatorInstance.Data + (longlong)(int)uVar13 * 4);
    LOCK();
    aVar12 = *paVar1;
    bVar8 = aVar11 == aVar12;
    if (bVar8) {
      *paVar1 = aVar3;
      aVar12 = aVar11;
    }
    UNLOCK();
  } while (!bVar8);
  FVar4 = *param_3;
  if (((int)aVar3 < 0 || (this->Elements).ArrayNum <= (int)aVar3) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    iVar10 = (*pcVar6)();
    return iVar10;
  }
  pFVar5 = (this->Elements).AllocatorInstance.Data;
  FVar7.BoundsLookupIdx = iStack_3c;
  FVar7.Payload = (int)aVar11;
  *(undefined1 (*) [16])(pFVar5 + (longlong)(int)aVar3 * 0x20) = auVar15;
  pFVar2 = (FPayloadAndBounds *)(pFVar5 + (longlong)(int)aVar3 * 0x20 + 0x10);
  *pFVar2 = FVar4;
  pFVar2[1] = FVar7;
  return (int)aVar3;
}

// GetValue @ 143a706e0

FPayloadAndBounds * __thiscall
Chaos::TSpatialHashGridBase<int>::FHashMap::GetValue(FHashMap *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPayloadAndBounds *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Elements).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPayloadAndBounds *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FPayloadAndBounds *)
         ((this->Elements).AllocatorInstance.Data + (longlong)param_1 * 0x20 + 0x10);
}

// Next @ 143a87460

int __thiscall Chaos::TSpatialHashGridBase<int>::FHashMap::Next(FHashMap *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Elements).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  return *(int *)((this->Elements).AllocatorInstance.Data + (longlong)param_1 * 0x20 + 0x18);
}

// PreallocateElementsForConcurrentAdd @ 143a886f0

void __thiscall
Chaos::TSpatialHashGridBase<int>::FHashMap::PreallocateElementsForConcurrentAdd
          (FHashMap *this,int param_1,int param_2)

{
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  undefined1 local_res18 [16];
  
  iVar6 = 1;
  if (param_2 != 0) {
    iVar6 = param_2;
  }
  piVar1 = &(this->Hash).ArrayNum;
  uVar2 = (ulonglong)(iVar6 - 1) * 2 + 1;
  lVar3 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  uVar8 = 1 << ((byte)lVar3 & 0x1f);
  iVar6 = *piVar1;
  if (iVar6 < (int)uVar8) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar8 - iVar6,(ForAnyElementType *)this,piVar1,&(this->Hash).ArrayMax);
  }
  else {
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    if ((int)uVar8 < iVar6) {
      uVar10 = iVar6 - uVar8;
      if ((int)(uVar10 | uVar8) < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (uVar10 != 0) {
        pFVar7 = (this->Hash).AllocatorInstance.Data + (longlong)(int)uVar8 * 4;
        iVar6 = (*piVar1 - uVar10) - uVar8;
        if (iVar6 != 0) {
          memmove(pFVar7,pFVar7 + (longlong)(int)uVar10 * 4,(longlong)iVar6 << 2);
        }
        *piVar1 = *piVar1 - uVar10;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(ForAnyElementType *)this,*piVar1,&(this->Hash).ArrayMax);
      }
    }
  }
  pFVar9 = (this->Hash).AllocatorInstance.Data;
  iVar6 = *piVar1;
  pFVar7 = pFVar9 + (longlong)iVar6 * 4;
  while( true ) {
    if (*piVar1 != iVar6) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<std::atomic<int>,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar9 == pFVar7) break;
    *(undefined4 *)pFVar9 = 0xffffffff;
    pFVar9 = pFVar9 + 4;
  }
  iVar6 = (this->Elements).ArrayNum;
  piVar1 = &(this->Elements).ArrayNum;
  if (iVar6 < param_1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,0x10,param_1 - iVar6,&(this->Elements).AllocatorInstance,piVar1,
               &(this->Elements).ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar6) {
      uVar8 = iVar6 - param_1;
      if ((int)(uVar8 | param_1) < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (uVar8 != 0) {
        pFVar7 = (this->Elements).AllocatorInstance.Data + (longlong)param_1 * 0x20;
        iVar6 = (*piVar1 - uVar8) - param_1;
        if (iVar6 != 0) {
          memmove(pFVar7,pFVar7 + (longlong)(int)uVar8 * 0x20,(longlong)iVar6 << 5);
        }
        *piVar1 = *piVar1 - uVar8;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,0x10,&(this->Elements).AllocatorInstance,*piVar1,&(this->Elements).ArrayMax)
        ;
      }
    }
  }
  LOCK();
  this->ConcurrentElementAddIdx = (atomic<int>)0x0;
  UNLOCK();
  return;
}

// ConcurrentAddElementRange @ 143e17cb0

void __thiscall
Chaos::TSpatialHashGridBase<int>::FHashMap::ConcurrentAddElementRange
          (FHashMap *this,TVector<int,3> *param_1,TVector<int,3> *param_2,int param_3,
          FPayloadAndBounds *param_4)

{
  atomic<int> *paVar1;
  FPayloadAndBounds *pFVar2;
  int iVar3;
  FPayloadAndBounds FVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  FPayloadAndBounds FVar7;
  bool bVar8;
  uint uVar9;
  atomic<int> aVar10;
  atomic<int> aVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  atomic<int> aVar15;
  int iVar16;
  uint uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  longlong local_80;
  longlong local_78;
  int iStack_4c;
  
  iVar14 = (((param_2->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z) + 1) *
           (((param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y) + 1) *
           (((param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X) + 1);
  if (iVar14 < 9) {
    LOCK();
    paVar1 = &this->ConcurrentElementAddIdx;
    aVar15 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + iVar14);
    UNLOCK();
    iVar14 = (param_1->field0_0x0)._s_0.X;
    if (iVar14 <= (param_2->field0_0x0)._s_0.X) {
      lVar12 = (longlong)(int)aVar15;
      local_80 = lVar12;
      do {
        iVar13 = (param_1->field0_0x0)._s_0.Y;
        if (iVar13 <= (param_2->field0_0x0)._s_0.Y) {
          do {
            iVar16 = (param_1->field0_0x0)._s_0.Z;
            if (iVar16 <= (param_2->field0_0x0)._s_0.Z) {
              local_78 = lVar12 << 5;
              do {
                iVar3 = (this->Hash).ArrayNum;
                auVar19._12_4_ = param_3;
                auVar19._8_4_ = iVar16;
                auVar19._4_4_ = iVar13;
                auVar19._0_4_ = iVar14;
                auVar18 = pmulld(auVar19,(undefined1  [16])
                                         `public:_unsigned_int___cdecl_Chaos::TSpatialHashGridBase<int>::FHashIndex::GetTypeHash(void)const___ptr64'
                                         ::__l2::Multiplier);
                uVar17 = (auVar18._0_4_ ^ auVar18._4_4_ ^ auVar18._8_4_ ^ auVar18._12_4_) &
                         iVar3 - 1U;
                uVar9 = 0;
                if ((int)uVar17 < iVar3) {
                  uVar9 = ~uVar17 >> 0x1f;
                }
                if ((uVar9 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                aVar11 = *(atomic<int> *)
                          ((this->Hash).AllocatorInstance.Data + (longlong)(int)uVar17 * 4);
                do {
                  aVar10 = aVar11;
                  uVar9 = 0;
                  if ((int)uVar17 < (this->Hash).ArrayNum) {
                    uVar9 = ~uVar17 >> 0x1f;
                  }
                  if ((uVar9 == 0) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar8)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  paVar1 = (atomic<int> *)
                           ((this->Hash).AllocatorInstance.Data + (longlong)(int)uVar17 * 4);
                  LOCK();
                  aVar11 = *paVar1;
                  bVar8 = aVar10 == aVar11;
                  if (bVar8) {
                    *paVar1 = aVar15;
                    aVar11 = aVar10;
                  }
                  UNLOCK();
                } while (!bVar8);
                FVar4 = *param_4;
                uVar9 = 0;
                if ((int)aVar15 < (this->Elements).ArrayNum) {
                  uVar9 = ~(uint)aVar15 >> 0x1f;
                }
                if ((uVar9 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                aVar15 = (atomic<int>)((int)aVar15 + 1);
                pFVar5 = (this->Elements).AllocatorInstance.Data;
                iVar16 = iVar16 + 1;
                FVar7.BoundsLookupIdx = iStack_4c;
                FVar7.Payload = (int)aVar10;
                *(undefined1 (*) [16])(pFVar5 + local_78) = auVar19;
                pFVar2 = (FPayloadAndBounds *)(pFVar5 + local_78 + 0x10);
                *pFVar2 = FVar4;
                pFVar2[1] = FVar7;
                local_78 = local_78 + 0x20;
                lVar12 = local_80 + 1;
                local_80 = lVar12;
              } while (iVar16 <= (param_2->field0_0x0)._s_0.Z);
            }
            iVar13 = iVar13 + 1;
          } while (iVar13 <= (param_2->field0_0x0)._s_0.Y);
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 <= (param_2->field0_0x0)._s_0.X);
    }
  }
  else {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3865756710006161319>,true,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\HierarchicalSpatialHash.h"
                       ,0x59,"NumElementsToAdd <= 8");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  return;
}

// ShrinkElementsAfterConcurrentAdd @ 143e4ee30

void __thiscall
Chaos::TSpatialHashGridBase<int>::FHashMap::ShrinkElementsAfterConcurrentAdd(FHashMap *this)

{
  int *piVar1;
  atomic<int> aVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *_Dst;
  uint uVar6;
  
  aVar2 = this->ConcurrentElementAddIdx;
  piVar1 = &(this->Elements).ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < (int)aVar2) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,0x10,(int)aVar2 - iVar5,&(this->Elements).AllocatorInstance,piVar1,
               &(this->Elements).ArrayMax);
    return;
  }
  if ((int)aVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)aVar2);
  }
  if ((int)aVar2 < iVar5) {
    uVar6 = iVar5 - (int)aVar2;
    if (((int)(uVar6 | (uint)aVar2) < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar6 != 0) {
      _Dst = (this->Elements).AllocatorInstance.Data + (longlong)(int)aVar2 * 0x20;
      iVar5 = (*piVar1 - uVar6) - (int)aVar2;
      if (iVar5 != 0) {
        memmove(_Dst,_Dst + (longlong)(int)uVar6 * 0x20,(longlong)iVar5 << 5);
      }
      *piVar1 = *piVar1 - uVar6;
    }
  }
  return;
}

