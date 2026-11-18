// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 9

// FArrayRandomGet @ 14ad97120

FArrayRandomGet * __thiscall
Metasound::FArrayRandomGet::FArrayRandomGet
          (FArrayRandomGet *this,int param_1,int param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3,int param_4)

{
  this->NoRepeatOrder = -1;
  (this->PreviousIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreviousIndices).ArrayNum = 0;
  (this->PreviousIndices).ArrayMax = 0;
  (this->PreviousIndicesQueue).Ptr = (TCircularQueue<int> *)0x0;
  this->MaxIndex = 0;
  (this->RandomWeights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RandomWeights).ArrayNum = 0;
  (this->RandomWeights).ArrayMax = 0;
  (this->RandomStream).InitialSeed = 0;
  (this->RandomStream).Seed = 0;
  this->bRandomStreamInitialized = false;
  this->Seed = -1;
  UpdateState(this,param_1,param_2,param_3,param_4);
  return this;
}

// ComputeTotalWeight @ 14ada7fb0

float __thiscall Metasound::FArrayRandomGet::ComputeTotalWeight(FArrayRandomGet *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  int iVar8;
  float fVar9;
  
  fVar9 = 0.0;
  if ((this->RandomWeights).ArrayNum < 1) {
    return 0.0;
  }
  iVar8 = 0;
  if (this->MaxIndex < 1) {
    return 0.0;
  }
  do {
    pFVar6 = (this->PreviousIndices).AllocatorInstance.Data;
    pFVar1 = pFVar6 + (longlong)(this->PreviousIndices).ArrayNum * 4;
    for (; pFVar6 != pFVar1; pFVar6 = pFVar6 + 4) {
      if (*(int *)pFVar6 == iVar8) goto LAB_14ada8056;
    }
    iVar2 = (this->RandomWeights).ArrayNum;
    uVar7 = iVar8 % iVar2;
    uVar5 = 0;
    if ((int)uVar7 < iVar2) {
      uVar5 = ~uVar7 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      fVar9 = (float)(*pcVar3)();
      return fVar9;
    }
    fVar9 = fVar9 + *(float *)((this->RandomWeights).AllocatorInstance.Data +
                              (longlong)(int)uVar7 * 4);
LAB_14ada8056:
    iVar8 = iVar8 + 1;
    if (this->MaxIndex <= iVar8) {
      return fVar9;
    }
  } while( true );
}

// Init @ 14adc4d30

void __thiscall
Metasound::FArrayRandomGet::Init
          (FArrayRandomGet *this,int param_1,int param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3,int param_4)

{
  TCircularQueue<int> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  LARGE_INTEGER LStackX_8;
  
  if ((this->bRandomStreamInitialized == false) || (param_1 != this->Seed)) {
    this->Seed = param_1;
    if (param_1 == -1) {
      QueryPerformanceCounter(&LStackX_8);
      param_1 = LStackX_8.s.LowPart;
    }
    (this->RandomStream).InitialSeed = param_1;
    (this->RandomStream).Seed = param_1;
    this->bRandomStreamInitialized = true;
  }
  this->MaxIndex = param_2;
  SetNoRepeatOrder(this,param_4);
  if (((param_4 != 0) &&
      (pTVar1 = (this->PreviousIndicesQueue).Ptr,
      (TAtomic<unsigned_int>)((int)pTVar1->Tail + 1U & (pTVar1->Buffer).IndexMask) == pTVar1->Head))
     && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("!InNoRepeatOrder || !PreviousIndicesQueue->IsFull()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundArrayRandomNode.cpp"
                            ,0x34,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_3->ArrayNum;
  if (iVar4 == (this->RandomWeights).ArrayNum) {
    if (iVar4 == 0) {
      return;
    }
    iVar4 = memcmp((param_3->AllocatorInstance).Data,(this->RandomWeights).AllocatorInstance.Data,
                   (longlong)iVar4 << 2);
    if (iVar4 == 0) {
      return;
    }
  }
  TArray<float,TSizedDefaultAllocator<32>_>::operator=(&this->RandomWeights,param_3);
  return;
}

// NextValue @ 14adc90a0

int __thiscall Metasound::FArrayRandomGet::NextValue(FArrayRandomGet *this)

{
  int *piVar1;
  TCircularQueue<int> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  TAtomic<unsigned_int> TVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int local_78;
  int local_74 [19];
  
  fVar18 = 0.0;
  fVar20 = 0.0;
  iVar8 = (this->RandomWeights).ArrayNum;
  bVar7 = 0 < iVar8;
  if (0 < iVar8) {
    fVar18 = ComputeTotalWeight(this);
    if ((fVar18 == 0.0) && (0 < (this->PreviousIndices).ArrayNum)) {
      (this->PreviousIndices).ArrayNum = 0;
      if ((this->PreviousIndices).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,(ForAnyElementType *)this,0,&(this->PreviousIndices).ArrayMax);
      }
      pTVar2 = (this->PreviousIndicesQueue).Ptr;
      LOCK();
      pTVar2->Head = pTVar2->Tail;
      UNLOCK();
      fVar18 = ComputeTotalWeight(this);
    }
    bVar7 = 0.0 < fVar18;
  }
  piVar1 = &(this->PreviousIndices).ArrayNum;
  if (!bVar7) {
    iVar10 = this->MaxIndex - *piVar1;
    iVar8 = 1;
    if (1 < iVar10) {
      iVar8 = iVar10;
    }
    fVar18 = (float)iVar8;
  }
  if ((fVar18 <= 0.0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TotalWeight > 0.0f",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundArrayRandomNode.cpp"
                         ,0xa4,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    iVar8 = (*pcVar4)();
    return iVar8;
  }
  fVar5 = __real_3f800000;
  iVar8 = 0;
  local_78 = -1;
  uVar9 = (this->RandomStream).Seed * 0xbb38435 + 0x3619636b;
  (this->RandomStream).Seed = uVar9;
  fVar18 = ((float)(uVar9 >> 9 | 0x3f800000) - fVar5) * fVar18;
  if (0 < this->MaxIndex) {
    do {
      pFVar11 = (this->PreviousIndices).AllocatorInstance.Data;
      pFVar3 = pFVar11 + (longlong)*piVar1 * 4;
      for (; pFVar11 != pFVar3; pFVar11 = pFVar11 + 4) {
        fVar19 = fVar20;
        if (*(int *)pFVar11 == iVar8) goto LAB_14adc92bc;
      }
      fVar19 = fVar5;
      if (bVar7) {
        if (((this->RandomWeights).ArrayNum < 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("RandomWeights.Num() > 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundArrayRandomNode.cpp"
                               ,0xb6,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          iVar8 = (*pcVar4)();
          return iVar8;
        }
        iVar10 = (this->RandomWeights).ArrayNum;
        uVar12 = iVar8 % iVar10;
        uVar9 = 0;
        if ((int)uVar12 < iVar10) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          iVar8 = (*pcVar4)();
          return iVar8;
        }
        fVar19 = *(float *)((this->RandomWeights).AllocatorInstance.Data + (longlong)(int)uVar12 * 4
                           );
      }
      fVar19 = fVar20 + fVar19;
      if ((fVar20 <= fVar18) && (iVar10 = iVar8, fVar18 < fVar19)) break;
LAB_14adc92bc:
      iVar8 = iVar8 + 1;
      fVar20 = fVar19;
      iVar10 = local_78;
    } while (iVar8 < this->MaxIndex);
    local_78 = iVar10;
    if (local_78 != -1) goto LAB_14adc92fa;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("ChosenIndex != INDEX_NONE",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundArrayRandomNode.cpp"
                     ,0xc5,L"");
  if (bVar7) {
    pcVar4 = (code *)swi(3);
    iVar8 = (*pcVar4)();
    return iVar8;
  }
LAB_14adc92fa:
  if (0 < this->NoRepeatOrder) {
    if ((this->PreviousIndices).ArrayNum == this->NoRepeatOrder) {
      pTVar2 = (this->PreviousIndicesQueue).Ptr;
      iVar8 = (int)pTVar2->Tail - (int)pTVar2->Head;
      if (iVar8 < 0) {
        iVar8 = iVar8 + (pTVar2->Buffer).Elements.ArrayNum;
      }
      if ((iVar8 != (this->PreviousIndices).ArrayNum) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("PreviousIndicesQueue->Count() == PreviousIndices.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundArrayRandomNode.cpp"
                             ,0xcc,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        iVar8 = (*pcVar4)();
        return iVar8;
      }
      pTVar2 = (this->PreviousIndicesQueue).Ptr;
      TVar15 = pTVar2->Head;
      if (TVar15 != pTVar2->Tail) {
        uVar12 = (uint)TVar15 & (pTVar2->Buffer).IndexMask;
        uVar9 = 0;
        if ((int)uVar12 < (pTVar2->Buffer).Elements.ArrayNum) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          iVar8 = (*pcVar4)();
          return iVar8;
        }
        local_74[0] = *(int *)((pTVar2->Buffer).Elements.AllocatorInstance.Data +
                              (longlong)(int)uVar12 * 4);
        LOCK();
        pTVar2->Head = (TAtomic<unsigned_int>)((int)TVar15 + 1U & (pTVar2->Buffer).IndexMask);
        UNLOCK();
      }
      pFVar3 = (this->PreviousIndices).AllocatorInstance.Data;
      if (((pFVar3 <= (FScriptContainerElement *)local_74) &&
          ((FScriptContainerElement *)local_74 <
           pFVar3 + (longlong)(this->PreviousIndices).ArrayMax * 4)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        iVar8 = (*pcVar4)();
        return iVar8;
      }
      iVar8 = (this->PreviousIndices).ArrayNum;
      iVar10 = 0;
      if (iVar8 != 0) {
        pFVar3 = (this->PreviousIndices).AllocatorInstance.Data;
        iVar10 = 0;
        bVar7 = *(int *)pFVar3 != local_74[0];
        lVar14 = 0;
        iVar13 = local_74[0];
        iVar16 = 0;
        do {
          iVar17 = iVar16;
          do {
            lVar14 = lVar14 + 1;
            iVar17 = iVar17 + 1;
            if (iVar8 <= lVar14) break;
          } while (bVar7 == (*(int *)(pFVar3 + lVar14 * 4) != iVar13));
          if (bVar7 != false) {
            if (iVar10 != iVar16) {
              memmove(pFVar3 + (longlong)iVar10 * 4,pFVar3 + (longlong)iVar16 * 4,
                      (longlong)(iVar17 - iVar16) << 2);
              iVar13 = local_74[0];
            }
            iVar10 = iVar10 + (iVar17 - iVar16);
          }
          bVar7 = (bool)(bVar7 ^ 1);
          iVar16 = iVar17;
        } while (lVar14 < iVar8);
        (this->PreviousIndices).ArrayNum = iVar10;
      }
      if ((iVar10 != this->NoRepeatOrder + -1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("PreviousIndices.Num() == NoRepeatOrder - 1",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundArrayRandomNode.cpp"
                             ,0xd0,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        iVar8 = (*pcVar4)();
        return iVar8;
      }
    }
    if ((this->NoRepeatOrder <= (this->PreviousIndices).ArrayNum) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("PreviousIndices.Num() < NoRepeatOrder",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundArrayRandomNode.cpp"
                           ,0xd3,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      iVar8 = (*pcVar4)();
      return iVar8;
    }
    pTVar2 = (this->PreviousIndicesQueue).Ptr;
    if (((TAtomic<unsigned_int>)((int)pTVar2->Tail + 1U & (pTVar2->Buffer).IndexMask) ==
         pTVar2->Head) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!PreviousIndicesQueue->IsFull()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundArrayRandomNode.cpp"
                           ,0xd4,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      iVar8 = (*pcVar4)();
      return iVar8;
    }
    iVar8 = local_78;
    pTVar2 = (this->PreviousIndicesQueue).Ptr;
    TVar15 = (TAtomic<unsigned_int>)((int)pTVar2->Tail + 1U & (pTVar2->Buffer).IndexMask);
    if (TVar15 == pTVar2->Head) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("bSuccess",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundArrayRandomNode.cpp"
                         ,0xd7,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        iVar8 = (*pcVar4)();
        return iVar8;
      }
    }
    else {
      uVar12 = (uint)pTVar2->Tail & (pTVar2->Buffer).IndexMask;
      uVar9 = 0;
      if ((int)uVar12 < (pTVar2->Buffer).Elements.ArrayNum) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        iVar8 = (*pcVar4)();
        return iVar8;
      }
      *(int *)((pTVar2->Buffer).Elements.AllocatorInstance.Data + (longlong)(int)uVar12 * 4) = iVar8
      ;
      LOCK();
      pTVar2->Tail = TVar15;
      UNLOCK();
    }
    pFVar11 = (this->PreviousIndices).AllocatorInstance.Data;
    pFVar3 = pFVar11 + (longlong)(this->PreviousIndices).ArrayNum * 4;
    for (; pFVar11 != pFVar3; pFVar11 = pFVar11 + 4) {
      if (*(int *)pFVar11 == local_78) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!PreviousIndices.Contains(ChosenIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundArrayRandomNode.cpp"
                           ,0xd8,L"");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          iVar8 = (*pcVar4)();
          return iVar8;
        }
        break;
      }
    }
    pFVar3 = (this->PreviousIndices).AllocatorInstance.Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_78) &&
        ((FScriptContainerElement *)&local_78 <
         pFVar3 + (longlong)(this->PreviousIndices).ArrayMax * 4)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar4 = (code *)swi(3);
      iVar8 = (*pcVar4)();
      return iVar8;
    }
    iVar8 = (this->PreviousIndices).ArrayNum;
    piVar1 = &(this->PreviousIndices).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,(ForAnyElementType *)this,piVar1);
    }
    (this->PreviousIndices).ArrayNum = iVar8 + 1;
    *(int *)((this->PreviousIndices).AllocatorInstance.Data + (longlong)iVar8 * 4) = local_78;
    pTVar2 = (this->PreviousIndicesQueue).Ptr;
    iVar8 = (int)pTVar2->Tail - (int)pTVar2->Head;
    if (iVar8 < 0) {
      iVar8 = iVar8 + (pTVar2->Buffer).Elements.ArrayNum;
    }
    if ((iVar8 != (this->PreviousIndices).ArrayNum) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("PreviousIndicesQueue->Count() == PreviousIndices.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundArrayRandomNode.cpp"
                           ,0xda,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      iVar8 = (*pcVar4)();
      return iVar8;
    }
  }
  return local_78;
}

// ResetSeed @ 14adcfc30

void __thiscall Metasound::FArrayRandomGet::ResetSeed(FArrayRandomGet *this)

{
  (this->RandomStream).Seed = (this->RandomStream).InitialSeed;
  return;
}

// SetNoRepeatOrder @ 14add0a10

void __thiscall Metasound::FArrayRandomGet::SetNoRepeatOrder(FArrayRandomGet *this,int param_1)

{
  TUniquePtr<TCircularQueue<int>,TDefaultDelete<TCircularQueue<int>_>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  TCircularQueue<int> *pTVar5;
  TCircularQueue<int> *pTVar6;
  longlong local_18 [2];
  
  if (this->MaxIndex < 3) {
    iVar4 = 0;
  }
  else {
    iVar4 = this->MaxIndex / 2;
    if (param_1 != -1) {
      iVar3 = iVar4;
      if (param_1 < iVar4) {
        iVar3 = param_1;
      }
      iVar4 = 0;
      if (0 < iVar3) {
        iVar4 = iVar3;
      }
    }
  }
  if (iVar4 == this->NoRepeatOrder) {
    return;
  }
  pTVar5 = ::operator_new(0x20);
  if (pTVar5 == (TCircularQueue<int> *)0x0) {
    pTVar5 = (TCircularQueue<int> *)0x0;
  }
  else {
    pTVar5 = TCircularQueue<int>::TCircularQueue<int>(pTVar5,iVar4 + 2);
  }
  pTVar1 = &this->PreviousIndicesQueue;
  if (pTVar1 == (TUniquePtr<TCircularQueue<int>,TDefaultDelete<TCircularQueue<int>_>_> *)local_18) {
    if (pTVar5 == (TCircularQueue<int> *)0x0) goto LAB_14add0ac9;
    pFVar2 = (pTVar5->Buffer).Elements.AllocatorInstance.Data;
    pTVar6 = pTVar5;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
  }
  else {
    pTVar6 = pTVar1->Ptr;
    pTVar1->Ptr = pTVar5;
    if (pTVar6 == (TCircularQueue<int> *)0x0) goto LAB_14add0ac9;
    pFVar2 = (pTVar6->Buffer).Elements.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
  }
  ::operator_delete(pTVar6,0x20);
LAB_14add0ac9:
  (this->PreviousIndices).ArrayNum = 0;
  if ((this->PreviousIndices).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)this,0,&(this->PreviousIndices).ArrayMax);
  }
  this->NoRepeatOrder = iVar4;
  return;
}

// SetRandomWeights @ 14add0be0

void __thiscall
Metasound::FArrayRandomGet::SetRandomWeights
          (FArrayRandomGet *this,TArray<float,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  
  iVar1 = param_1->ArrayNum;
  if (iVar1 == (this->RandomWeights).ArrayNum) {
    if (iVar1 == 0) {
      return;
    }
    iVar1 = memcmp((param_1->AllocatorInstance).Data,(this->RandomWeights).AllocatorInstance.Data,
                   (longlong)iVar1 << 2);
    if (iVar1 == 0) {
      return;
    }
  }
  TArray<float,TSizedDefaultAllocator<32>_>::operator=(&this->RandomWeights,param_1);
  return;
}

// SetSeed @ 14add0d40

void __thiscall Metasound::FArrayRandomGet::SetSeed(FArrayRandomGet *this,int param_1)

{
  LARGE_INTEGER local_res8 [4];
  
  if ((this->bRandomStreamInitialized == false) || (param_1 != this->Seed)) {
    this->Seed = param_1;
    if (param_1 == -1) {
      QueryPerformanceCounter(local_res8);
      param_1 = local_res8[0].s.LowPart;
    }
    (this->RandomStream).InitialSeed = param_1;
    (this->RandomStream).Seed = param_1;
    this->bRandomStreamInitialized = true;
  }
  return;
}

// UpdateState @ 14add4870

void __thiscall
Metasound::FArrayRandomGet::UpdateState
          (FArrayRandomGet *this,int param_1,int param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3,int param_4)

{
  TCircularQueue<int> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  LARGE_INTEGER local_res8;
  
  if ((this->bRandomStreamInitialized == false) || (param_1 != this->Seed)) {
    this->Seed = param_1;
    if (param_1 == -1) {
      QueryPerformanceCounter(&local_res8);
      param_1 = local_res8.s.LowPart;
    }
    (this->RandomStream).InitialSeed = param_1;
    (this->RandomStream).Seed = param_1;
    this->bRandomStreamInitialized = true;
  }
  this->MaxIndex = param_2;
  SetNoRepeatOrder(this,param_4);
  if (((param_4 != 0) &&
      (pTVar1 = (this->PreviousIndicesQueue).Ptr,
      (TAtomic<unsigned_int>)((int)pTVar1->Tail + 1U & (pTVar1->Buffer).IndexMask) == pTVar1->Head))
     && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("!InNoRepeatOrder || !PreviousIndicesQueue->IsFull()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundArrayRandomNode.cpp"
                            ,0x34,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_3->ArrayNum;
  if (iVar4 == (this->RandomWeights).ArrayNum) {
    if (iVar4 == 0) {
      return;
    }
    iVar4 = memcmp((param_3->AllocatorInstance).Data,(this->RandomWeights).AllocatorInstance.Data,
                   (longlong)iVar4 << 2);
    if (iVar4 == 0) {
      return;
    }
  }
  TArray<float,TSizedDefaultAllocator<32>_>::operator=(&this->RandomWeights,param_3);
  return;
}

