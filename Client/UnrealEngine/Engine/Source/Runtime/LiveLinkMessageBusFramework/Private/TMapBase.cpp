// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkMessageBusFramework
// Functions: 1

// FindOrAddImpl<FName_const_&> @ 14cfe8e50

FTrackedSubject * __thiscall
TMapBase<FName,FTrackedSubject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTrackedSubject,0>_>
::FindOrAddImpl<FName_const_&>
          (TMapBase<FName,FTrackedSubject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTrackedSubject,0>_>
           *this,uint param_1,FName *param_2)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FName *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0xb8 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == *param_2) {
          if (pFVar2 != (FName *)0x0) {
            return (FTrackedSubject *)(pFVar2 + 1);
          }
          break;
        }
        uVar1 = pFVar2[0x16].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,FTrackedSubject>,TDefaultMapHashableKeyFuncs<FName,FTrackedSubject,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FTrackedSubject *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0xb8 + 8);
}

