// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 1

// operator() @ 1425c4140

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
`SWidget::SWidgetConstruct'::__l15::<lambda_1>::operator()
          (void *this,FAccessibleWidgetData *param_1)

{
  byte bVar1;
  TReferenceControllerBase<1> *pTVar2;
  FSlateAccessibleMessageHandler *pFVar3;
  SWidget *pSVar4;
  FSlateApplicationBase *pFVar5;
  TAttribute<FText> *this_00;
  EAccessibleBehavior EVar6;
  uint uVar7;
  SWidget *local_res8;
  
  bVar1 = *(byte *)(*(longlong *)this + 0x32);
  if (((bVar1 >> 2 ^ ((undefined1 *)param_1)->bCanChildrenBeAccessible) & 1) != 0) {
    *(byte *)(*(longlong *)this + 0x32) = (*(undefined1 *)param_1 << 2 ^ bVar1) & 4 ^ bVar1;
    pFVar5 = FSlateApplicationBase::Get();
    pTVar2 = (pFVar5->AccessibleMessageHandler).SharedReferenceCount.ReferenceController;
    pFVar3 = (pFVar5->AccessibleMessageHandler).Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar3->bDirty = true;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  EVar6 = Custom;
  if ((param_1->AccessibleText).bIsSet == false) {
    EVar6 = param_1->AccessibleBehavior;
  }
  SWidget::SetAccessibleBehavior(*(SWidget **)this,EVar6,&param_1->AccessibleText,Main);
  pSVar4 = *(SWidget **)this;
  if ((param_1->AccessibleSummaryText).bIsSet == false) {
    EVar6 = param_1->AccessibleSummaryBehavior;
    if (EVar6 != Custom) {
      if (pSVar4->AccessibleSummaryBehavior == Custom) {
        TWidgetSparseAnnotation<TAttribute<FText>_>::Remove(&AccessibleSummaryText,pSVar4);
      }
      goto LAB_1425c4267;
    }
  }
  else {
    EVar6 = Custom;
  }
  local_res8 = pSVar4;
  AcquireSRWLockExclusive((PSRWLOCK)&AccessibleSummaryText.RWLock);
  uVar7 = ((uint)((ulonglong)local_res8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res8 >> 4)) *
          -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  this_00 = TMapBase<SWidget_const_*,TAttribute<FText>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<SWidget_const_*,TAttribute<FText>,0>_>
            ::FindOrAddImpl<SWidget_const_*_const_&>
                      ((TMapBase<SWidget_const_*,TAttribute<FText>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<SWidget_const_*,TAttribute<FText>,0>_>
                        *)&AccessibleSummaryText,uVar7 >> 0x10 ^ uVar7,&local_res8);
  ReleaseSRWLockExclusive((PSRWLOCK)&AccessibleSummaryText.RWLock);
  TAttribute<FText>::operator=(this_00,&param_1->AccessibleSummaryText);
LAB_1425c4267:
  if (pSVar4->AccessibleSummaryBehavior != EVar6) {
    pSVar4->AccessibleSummaryBehavior = EVar6;
  }
  return;
}

