// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 4

// operator() @ 14247b370

void __thiscall
`FSlateInvalidationWidgetList::FArrayNode::RemoveElementIndexBetweenOrEqualThan'::__l2::<lambda_1>::
operator()(void *this,TSlateElementSortedArray<unsigned_short,TLess<void>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  uVar5 = TSlateElementSortedArray<unsigned_short,TLess<void>_>::FindLowerBound
                    (param_1,*(ushort *)this);
  if ((int)uVar5 < 0) {
    return;
  }
  uVar2 = (param_1->Data).ArrayNum;
  if ((int)uVar2 <= (int)uVar5) {
    return;
  }
  iVar6 = 0;
  uVar7 = uVar2;
  if (0 < (int)uVar2) {
    do {
      uVar8 = uVar7 >> 1;
      if (*(ushort *)((param_1->Data).AllocatorInstance.Data + (longlong)(int)(uVar8 + iVar6) * 2)
          <= *(ushort *)((longlong)this + 2)) {
        iVar6 = uVar8 + iVar6 + (uVar7 & 1);
      }
      uVar7 = uVar8;
    } while (uVar8 != 0);
  }
  if ((iVar6 < 0) || ((int)uVar2 <= iVar6)) {
    uVar7 = uVar2 - uVar5;
    if ((int)(~uVar5 & ~uVar7) < 0) goto LAB_14247b464;
  }
  else {
    uVar7 = iVar6 - uVar5;
    uVar8 = 0;
    if (iVar6 <= (int)uVar2) {
      uVar8 = (~uVar7 & ~uVar5) >> 0x1f;
    }
    if (uVar8 != 0) goto LAB_14247b464;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                     ,0x458,
                     L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                    );
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14247b464:
  if (uVar7 != 0) {
    _Dst = (param_1->Data).AllocatorInstance.Data + (longlong)(int)uVar5 * 2;
    iVar6 = ((param_1->Data).ArrayNum - uVar7) - uVar5;
    if (iVar6 != 0) {
      memmove(_Dst,_Dst + (longlong)(int)uVar7 * 2,(longlong)iVar6 * 2);
    }
    piVar1 = &(param_1->Data).ArrayNum;
    *piVar1 = *piVar1 - uVar7;
  }
  return;
}

// operator() @ 14247b4b0

void __thiscall
`FSlateInvalidationWidgetList::FArrayNode::RemoveElementIndexBiggerOrEqualThan'::__l2::<lambda_1>::
operator()(void *this,TSlateElementSortedArray<unsigned_short,TLess<void>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar4 = TSlateElementSortedArray<unsigned_short,TLess<void>_>::FindLowerBound
                    (param_1,*(ushort *)this);
  if ((-1 < (int)uVar4) && (iVar5 = (param_1->Data).ArrayNum, (int)uVar4 < iVar5)) {
    uVar6 = iVar5 - uVar4;
    if (((int)(uVar6 | uVar4) < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar6 != 0) {
      _Dst = (param_1->Data).AllocatorInstance.Data + (longlong)(int)uVar4 * 2;
      iVar5 = ((param_1->Data).ArrayNum - uVar6) - uVar4;
      if (iVar5 != 0) {
        memmove(_Dst,_Dst + (longlong)(int)uVar6 * 2,(longlong)iVar5 * 2);
      }
      piVar1 = &(param_1->Data).ArrayNum;
      *piVar1 = *piVar1 - uVar6;
    }
  }
  return;
}

// RemoveElementIndexBetweenOrEqualThan @ 1424a5970

void __thiscall
FSlateInvalidationWidgetList::FArrayNode::RemoveElementIndexBetweenOrEqualThan
          (FArrayNode *this,ushort param_1,ushort param_2)

{
  ushort local_res10;
  ushort local_res12;
  
  local_res10 = param_1;
  local_res12 = param_2;
  `FSlateInvalidationWidgetList::FArrayNode::RemoveElementIndexBetweenOrEqualThan'::__l2::<lambda_1>
  ::operator()(&local_res10,&this->ElementIndexList_WidgetWithRegisteredSlateAttribute);
  `FSlateInvalidationWidgetList::FArrayNode::RemoveElementIndexBetweenOrEqualThan'::__l2::<lambda_1>
  ::operator()(&local_res10,&this->ElementIndexList_VolatileUpdateWidget);
  return;
}

// RemoveElementIndexBiggerOrEqualThan @ 1424a59b0

void __thiscall
FSlateInvalidationWidgetList::FArrayNode::RemoveElementIndexBiggerOrEqualThan
          (FArrayNode *this,ushort param_1)

{
  ushort local_res10 [12];
  
  local_res10[0] = param_1;
  `FSlateInvalidationWidgetList::FArrayNode::RemoveElementIndexBiggerOrEqualThan'::__l2::<lambda_1>
  ::operator()(local_res10,&this->ElementIndexList_WidgetWithRegisteredSlateAttribute);
  `FSlateInvalidationWidgetList::FArrayNode::RemoveElementIndexBiggerOrEqualThan'::__l2::<lambda_1>
  ::operator()(local_res10,&this->ElementIndexList_VolatileUpdateWidget);
  return;
}

