// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 2

// FIndexFIFO @ 14c6def50

FIndexFIFO * __thiscall
_anon_D86B23C6::FIndexFIFO::FIndexFIFO
          (FIndexFIFO *this,IndexEnumerable param_1,TFunctionRef<bool___cdecl(int)> *param_2)

{
  uint *puVar1;
  ForElementType<unsigned_int> FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TNode *pTVar6;
  TNode *pTVar7;
  FIndexFIFO *pFVar8;
  TNode *pTVar9;
  ForElementType<unsigned_int> FVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  <lambda_1> local_res8;
  ForAnyElementType local_58;
  int local_50 [2];
  ForAnyElementType *local_48;
  TFunctionRef<bool___cdecl(int)> *local_40;
  TArrayView<std::nullptr_t,int> local_38;
  code *local_28;
  ForAnyElementType **local_20;
  
  pTVar9 = (TNode *)0x0;
  iVar14 = ((param_1.Vector)->RefCounts).CurBlock * 0x200 +
           ((param_1.Vector)->RefCounts).CurBlockUsed;
  (this->IsEnqueued).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->IsEnqueued).MaxBits = 0x80;
  (this->IsEnqueued).NumBits = iVar14;
  uVar5 = iVar14 + 0x1f;
  uVar13 = uVar5 >> 5;
  if (uVar5 >> 5 != 0) {
    if (4 < uVar13) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation((ForElementType<unsigned_int> *)this,0,uVar13,4);
      (this->IsEnqueued).MaxBits = uVar13 << 5;
    }
    FVar2 = (this->IsEnqueued).AllocatorInstance.SecondaryData;
    FVar10 = (ForElementType<unsigned_int>)this;
    if (FVar2 != (ForElementType<unsigned_int>)0x0) {
      FVar10 = FVar2;
    }
    memset((void *)FVar10,0,(ulonglong)uVar13 << 2);
    iVar14 = (this->IsEnqueued).NumBits;
    uVar13 = iVar14 >> 0x1f & 0x1f;
    uVar5 = iVar14 + uVar13;
    iVar14 = (uVar5 & 0x1f) - uVar13;
    if (iVar14 != 0) {
      FVar2 = (this->IsEnqueued).AllocatorInstance.SecondaryData;
      FVar10 = (ForElementType<unsigned_int>)this;
      if (FVar2 != (ForElementType<unsigned_int>)0x0) {
        FVar10 = FVar2;
      }
      puVar1 = (uint *)((longlong)FVar10 + (longlong)((int)uVar5 >> 5) * 4);
      *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar14 & 0x1f);
    }
  }
  pTVar6 = ::operator_new(0x10);
  pTVar7 = pTVar9;
  if (pTVar6 != (TNode *)0x0) {
    pTVar6->NextNode = (TNode *)0x0;
    *(undefined8 *)&pTVar6->Item = 0;
    pTVar6->NextNode = (TNode *)0x0;
    pTVar7 = pTVar6;
  }
  (this->IDs).Tail = pTVar7;
  (this->IDs).Head = pTVar7;
  iVar11 = ((param_1.Vector)->RefCounts).CurBlockUsed +
           ((param_1.Vector)->RefCounts).CurBlock * 0x200;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50[0] = 0;
  local_50[1] = 0;
  iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (4,4,iVar11,&local_58,local_50,local_50 + 1);
  lVar15 = (longlong)iVar11;
  memset(local_58.Data + (longlong)iVar14 * 4,0,lVar15 * 4);
  local_48 = &local_58;
  local_38.DataPtr = (void **)0x0;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<``anonymous_namespace'::FIndexFIFO::FIndexFIFO'::__l2::<lambda_1>,void,int>
             ::Call;
  local_20 = &local_48;
  local_38.ArrayNum = 0;
  uVar5 = 1;
  local_40 = param_2;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",iVar11,1,(TFunctionRef<void___cdecl(int)> *)&local_28,local_res8,
             None,&local_38);
  pTVar7 = pTVar9;
  if (0 < lVar15) {
    do {
      uVar12 = (uint)pTVar9;
      uVar13 = 0;
      if ((int)uVar12 < local_50[0]) {
        uVar13 = ~uVar12 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FIndexFIFO *)(*pcVar3)();
        return pFVar8;
      }
      if (*(int *)(local_58.Data + (longlong)pTVar7 * 4) == 1) {
        if ((((int)uVar12 < 0) || ((this->IsEnqueued).NumBits <= (int)uVar12)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar8 = (FIndexFIFO *)(*pcVar3)();
          return pFVar8;
        }
        FVar2 = (this->IsEnqueued).AllocatorInstance.SecondaryData;
        FVar10 = (ForElementType<unsigned_int>)this;
        if (FVar2 != (ForElementType<unsigned_int>)0x0) {
          FVar10 = FVar2;
        }
        uVar13 = uVar12;
        if ((int)uVar12 < 0) {
          uVar13 = uVar12 + 0x1f;
        }
        if ((*(uint *)((longlong)FVar10 + (longlong)((int)uVar13 >> 5) * 4) & uVar5) == 0) {
          pTVar9 = ::operator_new(0x10);
          if (pTVar9 != (TNode *)0x0) {
            pTVar9->NextNode = (TNode *)0x0;
            pTVar9->Item = uVar12;
            pTVar6 = (this->IDs).Head;
            (this->IDs).Head = pTVar9;
            pTVar6->NextNode = pTVar9;
          }
          if ((((int)uVar12 < 0) || ((this->IsEnqueued).NumBits <= (int)uVar12)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            pFVar8 = (FIndexFIFO *)(*pcVar3)();
            return pFVar8;
          }
          FVar2 = (this->IsEnqueued).AllocatorInstance.SecondaryData;
          FVar10 = (ForElementType<unsigned_int>)this;
          if (FVar2 != (ForElementType<unsigned_int>)0x0) {
            FVar10 = FVar2;
          }
          uVar13 = uVar12;
          if ((int)uVar12 < 0) {
            uVar13 = uVar12 + 0x1f;
          }
          puVar1 = (uint *)((longlong)FVar10 + (longlong)((int)uVar13 >> 5) * 4);
          *puVar1 = *puVar1 | uVar5;
        }
      }
      pTVar9 = (TNode *)(ulonglong)(uVar12 + 1);
      uVar5 = uVar5 << 1 | (uint)((int)uVar5 < 0);
      pTVar7 = (TNode *)((longlong)&pTVar7->NextNode + 1);
    } while ((longlong)pTVar7 < lVar15);
  }
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  return this;
}

// operator() @ 14c6e5670

void __thiscall
``anonymous_namespace'::FIndexFIFO::FIndexFIFO'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  int local_res10 [6];
  
  local_res10[0] = param_1;
  cVar3 = (*(code *)**(undefined8 **)((longlong)this + 8))
                    ((*(undefined8 **)((longlong)this + 8))[1],local_res10);
  if (cVar3 != '\0') {
    plVar1 = *(longlong **)this;
    uVar5 = 0;
    if (param_1 < (int)plVar1[1]) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(undefined4 *)(*plVar1 + (longlong)param_1 * 4) = 1;
  }
  return;
}

