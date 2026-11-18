// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 1

// OnMouseButtonDown @ 14296a5a0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SComboRow<TSharedPtr<FString,1>_>::OnMouseButtonDown
          (SComboRow<TSharedPtr<FString,1>_> *this,FReply *__return_storage_ptr__,FGeometry *param_1
          ,FPointerEvent *param_2)

{
  FName FVar1;
  code *pcVar2;
  atomic<int> aVar3;
  char cVar4;
  atomic<int> aVar5;
  FReply *pFVar6;
  undefined8 uVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  
  FVar1 = (param_2->EffectingButton).KeyName;
  pTVar10 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar11 = FVar1 != EKeys::LeftMouseButton.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  if (bVar11) goto LAB_14296a705;
  pTVar10 = *(TReferenceControllerBase<1> **)&this->field_0x2e8;
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  pTVar9 = pTVar10;
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
LAB_14296a625:
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    pTVar10 = pTVar9;
    if (bVar11) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FReply *)(*pcVar2)();
      return pFVar6;
    }
  }
  else {
    aVar3 = pTVar10->SharedReferenceCount;
    do {
      pTVar9 = pTVar8;
      if (aVar3 == (atomic<int>)0x0) goto LAB_14296a625;
      LOCK();
      aVar5 = pTVar10->SharedReferenceCount;
      bVar11 = aVar3 == aVar5;
      if (bVar11) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar5 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar5;
    } while (!bVar11);
    pTVar8 = *(TReferenceControllerBase<1> **)&this->field_0x2e0;
    pTVar9 = pTVar10;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) goto LAB_14296a625;
  }
  uVar7 = (**(code **)(pTVar8->_padding_ + 0x48))(pTVar8,&this[-1].field_0x3f0);
  if ((pTVar8 == (TReferenceControllerBase<1> *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FReply *)(*pcVar2)();
    return pFVar6;
  }
  cVar4 = (**(code **)(pTVar8->_padding_ + 0x10))(pTVar8,uVar7);
  if (cVar4 != '\0') {
    if ((pTVar8 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FReply *)(*pcVar2)();
      return pFVar6;
    }
    (**(code **)(pTVar8->_padding_ + 0x40))(pTVar8,2);
    FReply::FReply(__return_storage_ptr__,true);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
    return __return_storage_ptr__;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
LAB_14296a705:
  STableRow<TSharedPtr<FString,1>_>::OnMouseButtonDown
            ((STableRow<TSharedPtr<FString,1>_> *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

