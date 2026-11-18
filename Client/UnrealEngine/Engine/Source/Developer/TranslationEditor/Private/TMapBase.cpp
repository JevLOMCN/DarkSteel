// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TranslationEditor
// Functions: 3

// Find @ 146baabc0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FTranslationPickerTextItem,1> * __thiscall
TMapBase<ITableRow_const_*,TSharedPtr<FTranslationPickerTextItem,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<FTranslationPickerTextItem,1>,0>_>
::Find(TMapBase<ITableRow_const_*,TSharedPtr<FTranslationPickerTextItem,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<FTranslationPickerTextItem,1>,0>_>
       *this,ITableRow *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  TSharedPtr<FTranslationPickerTextItem,1> *pTVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((ITableRow *)*plVar2 == param_1) {
          pTVar4 = (TSharedPtr<FTranslationPickerTextItem,1> *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pTVar4 = (TSharedPtr<FTranslationPickerTextItem,1> *)(plVar2 + 1);
          }
          return pTVar4;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (TSharedPtr<FTranslationPickerTextItem,1> *)0x0;
}

// Find @ 146baac60

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<ITableRow,1> * __thiscall
TMapBase<TSharedPtr<FTranslationPickerTextItem,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FTranslationPickerTextItem,1>,TSharedRef<ITableRow,1>,0>_>
::Find(TMapBase<TSharedPtr<FTranslationPickerTextItem,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FTranslationPickerTextItem,1>,TSharedRef<ITableRow,1>,0>_>
       *this,TSharedPtr<FTranslationPickerTextItem_const_,1> *param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<FTranslationPickerTextItem_const_,1> local_18;
  
  local_18.Object = param_1->Object;
  pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar3 = ((uint)((ulonglong)local_18.Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)local_18.Object >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  local_18.SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  iVar2 = TSet<TTuple<TSharedPtr<FTranslationPickerTextItem,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<FTranslationPickerTextItem,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TSharedPtr<FTranslationPickerTextItem_const_,1>_>
                    (&this->Pairs,uVar3 >> 0x10 ^ uVar3,&local_18);
  if (iVar2 == -1) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  }
  else {
    lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar2 * 0x28;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
    if (lVar1 != 0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return (TSharedRef<ITableRow,1> *)(lVar1 + 0x10);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TSharedRef<ITableRow,1> *)0x0;
}

// FindRef @ 146baae60

TSharedPtr<TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_>,1> * __thiscall
TMapBase<FString,TSharedPtr<TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_>,1>,0>_>
::FindRef(TMapBase<FString,TSharedPtr<TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_>,1>,0>_>
          *this,TSharedPtr<TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_>,1>
                *__return_storage_ptr__,FString *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TTuple<FString,TSharedPtr<TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_>,1>_> *pTVar2;
  
  pTVar2 = TSet<TTuple<FString,TSharedPtr<TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_>,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_>,1>,0>,FDefaultSetAllocator>
           ::Find(&this->Pairs,param_1);
  if (pTVar2 == (TTuple<FString,TSharedPtr<TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_>,1>_>
                 *)0x0) {
    __return_storage_ptr__->Object = (TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_> *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    __return_storage_ptr__->Object =
         *(TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_> **)&pTVar2->field_0x10;
    pTVar1 = *(TReferenceControllerBase<1> **)&pTVar2->field_0x18;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

