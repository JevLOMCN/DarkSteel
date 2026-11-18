// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AdvancedWidgets
// Functions: 3

// TOptional<UE::PropertyViewer::FFieldColorSettings_const_> @ 14d831560

TOptional<UE::PropertyViewer::FFieldColorSettings_const_> * __thiscall
TOptional<UE::PropertyViewer::FFieldColorSettings_const_>::
TOptional<UE::PropertyViewer::FFieldColorSettings_const_>
          (TOptional<UE::PropertyViewer::FFieldColorSettings_const_> *this,
          TOptional<UE::PropertyViewer::FFieldColorSettings_const_> *param_1)

{
  bool bVar1;
  
  this->bIsSet = false;
  bVar1 = param_1->bIsSet;
  this->bIsSet = bVar1;
  if (bVar1 != false) {
    UE::PropertyViewer::FFieldColorSettings::FFieldColorSettings
              (&this->TypedValue,&param_1->TypedValue);
  }
  return this;
}

// operator= @ 14d83c6a0

TOptional<UE::PropertyViewer::FFieldColorSettings_const_> * __thiscall
TOptional<UE::PropertyViewer::FFieldColorSettings_const_>::operator=
          (TOptional<UE::PropertyViewer::FFieldColorSettings_const_> *this,
          TOptional<UE::PropertyViewer::FFieldColorSettings_const_> *param_1)

{
  void *pvVar1;
  
  if (param_1 != this) {
    if (param_1->bIsSet != false) {
      if (this->bIsSet != false) {
        *(undefined4 *)&(this->TypedValue).StructColors.field_0x48 = 0;
        pvVar1 = *(void **)&(this->TypedValue).StructColors.field_0x40;
        if (pvVar1 != (void *)0x0) {
          FMemory::Free(pvVar1);
        }
        TSparseArray<TSparseSetElement<TTuple<FString,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FString,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FString,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)&(this->TypedValue).StructColors);
      }
      UE::PropertyViewer::FFieldColorSettings::FFieldColorSettings
                (&this->TypedValue,&param_1->TypedValue);
      this->bIsSet = true;
      return this;
    }
    if (this->bIsSet != false) {
      *(undefined4 *)&(this->TypedValue).StructColors.field_0x48 = 0;
      pvVar1 = *(void **)&(this->TypedValue).StructColors.field_0x40;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&(this->TypedValue).StructColors);
      this->bIsSet = false;
    }
  }
  return this;
}

// operator= @ 14d83c770

TOptional<FText> * __thiscall
TOptional<FText>::operator=(TOptional<FText> *this,TOptional<FText> *param_1)

{
  longlong *plVar1;
  ITextData *pIVar2;
  code *pcVar3;
  bool bVar4;
  TOptional<FText> *pTVar5;
  undefined1 local_res8 [8];
  
  if (param_1 != this) {
    plVar1 = *(longlong **)&this->field0_0x0;
    if ((param_1->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0) {
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))();
        (this->field0_0x0).TypedValue.TextData.Reference = (ITextData *)0x0;
        (this->field0_0x0).TypedValue.Flags = 0;
      }
    }
    else {
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))();
      }
      (this->field0_0x0).TypedValue.TextData.Reference = (ITextData *)0x0;
      pIVar2 = *(ITextData **)&param_1->field0_0x0;
      (this->field0_0x0).TypedValue.TextData.Reference = pIVar2;
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
      }
      (this->field0_0x0).TypedValue.Flags = (param_1->field0_0x0).TypedValue.Flags;
      if ((this->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x171,
                           L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar5 = (TOptional<FText> *)(*pcVar3)();
          return pTVar5;
        }
      }
    }
  }
  return this;
}

