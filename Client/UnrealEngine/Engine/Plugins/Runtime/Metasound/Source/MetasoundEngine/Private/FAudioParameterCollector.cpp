// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 1

// CollectPresetOverrides @ 14b368d90

void __thiscall
UMetaSoundSource::FAudioParameterCollector::CollectPresetOverrides
          (FAudioParameterCollector *this,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_1,
          TSortedMap<FName,UMetaSoundSource::FRuntimeInput,TSizedDefaultAllocator<32>,FNameFastLess>
          *param_2)

{
  uint uVar1;
  TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *pTVar2;
  FName FVar3;
  ForElementType<FSetElementId> FVar4;
  FAudioParameter *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  ForElementType<FSetElementId> FVar12;
  FScriptContainerElement *pFVar13;
  FAudioParameter *pFVar14;
  FName *pFVar15;
  longlong lVar16;
  FName *pFVar17;
  FProjection local_res18;
  undefined1 local_res20 [8];
  
  pFVar17 = (FName *)(param_2->Pairs).AllocatorInstance.Data;
  uVar1 = (param_2->Pairs).ArrayNum;
  uVar11 = (ulonglong)(int)uVar1;
  local_res18 = SUB81(param_2,0);
  pFVar14 = (FAudioParameter *)(pFVar17 + 4);
  pFVar15 = pFVar17 + uVar11 * 0x19;
  do {
    if ((param_2->Pairs).ArrayNum != (int)uVar11) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<TTuple<FName,UMetaSoundSource::FRuntimeInput>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (pFVar17 == pFVar15) {
      return;
    }
    iVar8 = AlgoImpl::
            LowerBoundInternal<FAudioParameter_const_,int,FName,UMetaSoundSource::FAudioParameterCollector::FProjection,UMetaSoundSource::FAudioParameterCollector::FSortPredicate>
                      ((FAudioParameter *)(this->Parameters->AllocatorInstance).Data,
                       this->Parameters->ArrayNum,pFVar17,local_res18,(FSortPredicate)local_res18);
    pTVar2 = this->Parameters;
    if (iVar8 < pTVar2->ArrayNum) {
      if (iVar8 < 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if (*pFVar17 != *(FName *)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0xa0))
      goto LAB_14b368e81;
    }
    else {
LAB_14b368e81:
      FVar3 = *pFVar17;
      uVar9 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
      if (*(int *)&(param_1->Elements).field_0x8 != *(int *)&(param_1->Elements).field_0x34) {
        FVar4 = (param_1->Hash).SecondaryData;
        FVar12 = (ForElementType<FSetElementId>)&param_1->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar12 = FVar4;
        }
        iVar10 = *(int *)((longlong)FVar12 +
                         (ulonglong)(param_1->HashSize - 1U & FVar3.Number + uVar9) * 4);
        if (iVar10 != -1) {
          do {
            if (*(FName *)(*(longlong *)&param_1->Elements + (longlong)iVar10 * 0x10) == FVar3)
            goto LAB_14b368fad;
            iVar10 = *(int *)(*(longlong *)&param_1->Elements + 8 + (longlong)iVar10 * 0x10);
          } while (iVar10 != -1);
        }
      }
      pTVar2 = this->Parameters;
      pFVar5 = (FAudioParameter *)(pTVar2->AllocatorInstance).Data;
      if ((pFVar5 <= pFVar14) && (pFVar14 < pFVar5 + pTVar2->ArrayMax)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar10 = pTVar2->ArrayNum;
      if (iVar10 == pTVar2->ArrayMax) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x8a0,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
      }
      pFVar13 = (pTVar2->AllocatorInstance).Data;
      pTVar2->ArrayNum = iVar10 + 1;
      lVar16 = (longlong)iVar8 * 0xa0;
      pFVar13 = pFVar13 + lVar16;
      memmove(pFVar13 + 0xa0,pFVar13,(longlong)(iVar10 - iVar8) * 0xa0);
      FAudioParameter::FAudioParameter
                ((FAudioParameter *)((pTVar2->AllocatorInstance).Data + lVar16),pFVar14);
    }
LAB_14b368fad:
    pFVar17 = pFVar17 + 0x19;
    pFVar14 = (FAudioParameter *)&pFVar14[1].StringParam.Data.ArrayNum;
    uVar11 = (ulonglong)uVar1;
  } while( true );
}

