// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 1

// TTupleBaseElement<FFormatArgumentValue,1,2><FText_const_&> @ 14d52a4c0

TTupleBaseElement<FFormatArgumentValue,1,2> * __thiscall
UE::Core::Private::Tuple::TTupleBaseElement<FFormatArgumentValue,1,2>::
TTupleBaseElement<FFormatArgumentValue,1,2><FText_const_&>
          (TTupleBaseElement<FFormatArgumentValue,1,2> *this,EForwardingConstructor param_1,
          FText *param_2)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  TTupleBaseElement<FFormatArgumentValue,1,2> *pTVar4;
  undefined1 local_res8 [8];
  
  (this->Value).Type = Text;
  (this->Value).TextValue.field0_0x0.TypedValue.TextData.Reference = (ITextData *)0x0;
  pIVar1 = (param_2->TextData).Reference;
  (this->Value).TextValue.field0_0x0.TypedValue.TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  (this->Value).TextValue.field0_0x0.TypedValue.Flags = param_2->Flags;
  if ((this->Value).TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TTupleBaseElement<FFormatArgumentValue,1,2> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return this;
}

