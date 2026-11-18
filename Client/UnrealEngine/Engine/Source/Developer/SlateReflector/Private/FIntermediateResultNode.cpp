// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 1

// GetWidgetTypeAndShortName @ 142eabb80

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
WidgetHittestGridInternal::FIntermediateResultNode::GetWidgetTypeAndShortName
          (FIntermediateResultNode *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  SWidget *this_00;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  FText *pFVar5;
  FString *pFVar6;
  FText *pFVar7;
  FTextFormat *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  FText local_a8;
  TSharedPtr<FReflectionMetaData,1> local_98;
  FText local_88;
  FText local_78;
  FString local_68;
  FText local_58;
  FText local_48;
  FTextFormat local_38;
  
  pTVar10 = (this->Widget).WeakReferenceCount.ReferenceController;
  pTVar9 = pTVar10;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar10->SharedReferenceCount;
    do {
      pTVar9 = (TReferenceControllerBase<1> *)0x0;
      if (aVar3 == (atomic<int>)0x0) goto LAB_142eabbc1;
      LOCK();
      aVar4 = pTVar10->SharedReferenceCount;
      bVar11 = aVar3 == aVar4;
      if (bVar11) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar11);
    this_00 = (this->Widget).Object;
    pTVar9 = pTVar10;
    if (this_00 != (SWidget *)0x0) {
      pFVar6 = SWidget::GetTypeAsString(this_00,&local_68);
      pFVar5 = FText::FromString(&local_78,pFVar6);
      local_a8.TextData.Reference = (pFVar5->TextData).Reference;
      if (local_a8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_a8.TextData.Reference + 8))
                  (local_a8.TextData.Reference,local_res8);
      }
      local_a8.Flags = pFVar5->Flags;
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      SWidget::GetMetaData<FReflectionMetaData>(this_00,&local_98);
      if (local_98.Object == (FReflectionMetaData *)0x0) {
LAB_142eabd5d:
        FText::FText(__return_storage_ptr__,&local_a8);
      }
      else {
        if ((local_98.Object == (FReflectionMetaData *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FText *)(*pcVar2)();
          return pFVar5;
        }
        if ((local_98.Object)->Name == (FName)0x0) goto LAB_142eabd5d;
        pFVar5 = FText::FromName(&local_48,&(local_98.Object)->Name);
        local_88.TextData.Reference = local_a8.TextData.Reference;
        if (local_a8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_a8.TextData.Reference + 8))
                    (local_a8.TextData.Reference,local_res10);
        }
        local_88.Flags = local_a8.Flags;
        pFVar7 = FText::AsLocalizable_Advanced_LocText
                           (&local_58,L"WidgetReflectorNode",L"WidgetTypeAndName",L"{0} ({1})");
        pFVar8 = FTextFormat::FTextFormat(&local_38,pFVar7,Default);
        FText::Format<FText,FText>(__return_storage_ptr__,pFVar8,&local_88,pFVar5);
        if (local_58.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_98.SharedReferenceCount.ReferenceController);
      if (local_a8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
      }
      goto LAB_142eabbeb;
    }
  }
LAB_142eabbc1:
  pFVar5 = FText::GetEmpty();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar5->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res18);
  }
  __return_storage_ptr__->Flags = pFVar5->Flags;
  pTVar10 = pTVar9;
LAB_142eabbeb:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return __return_storage_ptr__;
}

