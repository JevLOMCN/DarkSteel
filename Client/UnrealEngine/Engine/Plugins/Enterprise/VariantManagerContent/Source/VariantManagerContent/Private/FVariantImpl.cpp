// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VariantManagerContent
// Functions: 1

// IsValidDependencyRecursive @ 14e2e1210

bool __cdecl
FVariantImpl::IsValidDependencyRecursive
          (UVariant *param_1,UVariant *param_2,
          TSet<UVariant_const_*,DefaultKeyFuncs<UVariant_const_*,0>,FDefaultSetAllocator> *param_3)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  UVariant *pUVar5;
  UClass *pUVar6;
  ForElementType<FSetElementId> FVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  UVariant *local_res10;
  UVariant *local_res20;
  
  if ((param_2 == (UVariant *)0x0) || (param_2 == param_1)) {
    return false;
  }
  uVar3 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
          -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  if (*(int *)&(param_3->Elements).field_0x8 != *(int *)&(param_3->Elements).field_0x34) {
    FVar7 = (param_3->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&param_3->Hash;
    }
    iVar4 = *(int *)((longlong)FVar7 +
                    (ulonglong)(param_3->HashSize - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
    if (iVar4 != -1) {
      do {
        if (*(UVariant **)(*(longlong *)&param_3->Elements + (longlong)iVar4 * 0x10) == param_2) {
          return false;
        }
        iVar4 = *(int *)(*(longlong *)&param_3->Elements + 8 + (longlong)iVar4 * 0x10);
      } while (iVar4 != -1);
    }
  }
  local_res10 = param_2;
  TSet<UVariant_const_*,DefaultKeyFuncs<UVariant_const_*,0>,FDefaultSetAllocator>::
  Emplace<UVariant_const_*_const_&>(param_3,&local_res20,(bool *)&local_res10);
  iVar4 = (param_2->Dependencies).ArrayNum;
  pFVar8 = (param_2->Dependencies).AllocatorInstance.Data;
  pFVar9 = pFVar8 + (longlong)iVar4 * 0x58;
  while( true ) {
    if ((param_2->Dependencies).ArrayNum != iVar4) {
      `TCheckedPointerIterator<FVariantDependency_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res10);
    }
    if (pFVar8 == pFVar9) break;
    pUVar5 = (UVariant *)
             TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)(pFVar8 + 0x28));
    if (pUVar5 != (UVariant *)0x0) {
      pUVar6 = UVariant::StaticClass();
      iVar1 = (int)pUVar6->_padding_;
      if (((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
           &pUVar6->_padding_)) &&
         (bVar2 = IsValidDependencyRecursive(param_1,pUVar5,param_3), !bVar2)) {
        return false;
      }
    }
    pFVar8 = pFVar8 + 0x58;
  }
  TSet<UVariant_const_*,DefaultKeyFuncs<UVariant_const_*,0>,FDefaultSetAllocator>::Remove
            (param_3,param_2);
  return true;
}

