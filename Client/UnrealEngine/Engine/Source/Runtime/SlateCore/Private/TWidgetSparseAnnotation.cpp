// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 2

// Find @ 1425dbc70

TAttribute<FText> * __thiscall
TWidgetSparseAnnotation<TAttribute<FText>_>::Find
          (TWidgetSparseAnnotation<TAttribute<FText>_> *this,SWidget *param_1)

{
  TAttribute<FText> *pTVar1;
  undefined1 *puVar2;
  TAttribute<FText> *pTVar3;
  uint uVar4;
  TAttribute<FText> *pTVar5;
  
  AcquireSRWLockShared((PSRWLOCK)&this->RWLock);
  pTVar5 = (TAttribute<FText> *)0x0;
  uVar4 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  pTVar1 = pTVar5;
  if (*(int *)&(this->AnnotationMap).field_0x8 != *(int *)&(this->AnnotationMap).field_0x34) {
    puVar2 = *(undefined1 **)&(this->AnnotationMap).field_0x40;
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &(this->AnnotationMap).field_0x38;
    }
    uVar4 = *(uint *)(puVar2 + (ulonglong)
                               (*(int *)&(this->AnnotationMap).field_0x48 - 1U &
                               (uVar4 >> 0x10 ^ uVar4)) * 4);
    if (uVar4 != 0xffffffff) {
      do {
        pTVar1 = (TAttribute<FText> *)
                 ((longlong)(int)uVar4 * 0x40 + *(longlong *)&this->AnnotationMap);
        if ((SWidget *)(pTVar1->Value).TextData.Reference == param_1) break;
        uVar4 = pTVar1[1].Value.Flags;
        pTVar1 = pTVar5;
      } while (uVar4 != 0xffffffff);
    }
  }
  pTVar3 = (TAttribute<FText> *)&(pTVar1->Value).Flags;
  if (pTVar1 == (TAttribute<FText> *)0x0) {
    pTVar3 = pTVar5;
  }
  ReleaseSRWLockShared((PSRWLOCK)&this->RWLock);
  return pTVar3;
}

// Remove @ 1425f7d90

void __thiscall
TWidgetSparseAnnotation<TAttribute<FText>_>::Remove
          (TWidgetSparseAnnotation<TAttribute<FText>_> *this,SWidget *param_1)

{
  uint uVar1;
  SWidget *local_res8;
  
  AcquireSRWLockExclusive((PSRWLOCK)&this->RWLock);
  local_res8 = param_1;
  if (*(int *)&(this->AnnotationMap).field_0x8 != *(int *)&(this->AnnotationMap).field_0x34) {
    uVar1 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    TSet<TTuple<SWidget_const_*,TAttribute<FText>_>,TDefaultMapHashableKeyFuncs<SWidget_const_*,TAttribute<FText>,0>,FDefaultSetAllocator>
    ::RemoveImpl<SWidget_const_*>
              ((TSet<TTuple<SWidget_const_*,TAttribute<FText>_>,TDefaultMapHashableKeyFuncs<SWidget_const_*,TAttribute<FText>,0>,FDefaultSetAllocator>
                *)this,uVar1 >> 0x10 ^ uVar1,&local_res8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001425f7e04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&this->RWLock);
  return;
}

