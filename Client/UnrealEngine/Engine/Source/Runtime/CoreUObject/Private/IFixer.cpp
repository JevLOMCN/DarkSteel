// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// CreateToken @ 141e94ba0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TSharedRef<FFixToken,1> * __thiscall
UE::DataValidation::IFixer::CreateToken
          (IFixer *this,TSharedRef<FFixToken,1> *__return_storage_ptr__,FText *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  IFixer *pIVar4;
  TSharedRef<FFixToken,1> *pTVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  IFixer *pIVar8;
  IFixer *pIVar9;
  IFixer *pIVar10;
  bool bVar11;
  undefined1 local_res8 [8];
  TSharedRef<UE::DataValidation::IFixer,1> local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  pIVar4 = *(IFixer **)&this->field_0x10;
  pIVar8 = (IFixer *)0x0;
  pIVar9 = pIVar4;
  pIVar10 = pIVar8;
  if (pIVar4 != (IFixer *)0x0) {
    iVar2 = *(int *)&pIVar4->field_0x8;
    do {
      pIVar9 = pIVar8;
      pIVar10 = (IFixer *)0x0;
      if (iVar2 == 0) goto LAB_141e94be4;
      LOCK();
      iVar3 = *(int *)&pIVar4->field_0x8;
      bVar11 = iVar2 == iVar3;
      if (bVar11) {
        *(int *)&pIVar4->field_0x8 = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar11);
    pIVar9 = pIVar4;
    pIVar10 = *(IFixer **)&this->field_0x8;
  }
LAB_141e94be4:
  pIVar4 = (IFixer *)&pIVar10->field_0x8;
  if (pIVar10 == (IFixer *)0x0) {
    pIVar4 = pIVar8;
  }
  if ((pIVar4 != (IFixer *)&this->field_0x8) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("SharedThis.Get() == this",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x67f,L""), bVar11)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FFixToken,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pIVar10 == (IFixer *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar11)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FFixToken,1> *)(*pcVar1)();
    return pTVar5;
  }
  local_58.Object = pIVar10;
  local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pIVar9;
  if ((pIVar10 == (IFixer *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar11)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FFixToken,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  local_48.TextData.Reference = (param_1->TextData).Reference;
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 8))
              (local_48.TextData.Reference,local_res8);
  }
  local_48.Flags = param_1->Flags;
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     (&local_28,L"DataValidationFixers",L"SingleFix",L"Fix: {0}");
  pFVar7 = FTextFormat::FTextFormat(&local_18,pFVar6,Default);
  pFVar6 = FText::Format<FText>(&local_38,pFVar7,&local_48);
  FFixToken::Create(__return_storage_ptr__,pFVar6,&local_58,0);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

