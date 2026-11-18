// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// TTupleBaseElement<FTextFormatString,0,2><FTextFormatString_const_&> @ 1417222b0

TTupleBaseElement<FTextFormatString,0,2> * __thiscall
UE::Core::Private::Tuple::TTupleBaseElement<FTextFormatString,0,2>::
TTupleBaseElement<FTextFormatString,0,2><FTextFormatString_const_&>
          (TTupleBaseElement<FTextFormatString,0,2> *this,EForwardingConstructor param_1,
          FTextFormatString *param_2)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  
  (this->Key).StringPtr = param_2->StringPtr;
  (this->Key).StringLen = param_2->StringLen;
  ::FString::FString(&(this->Key).InternalString,&param_2->InternalString);
  pwVar1 = L"";
  if ((param_2->InternalString).Data.ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_2->InternalString).Data.AllocatorInstance.Data;
  }
  if ((FScriptContainerElement *)param_2->StringPtr == (FScriptContainerElement *)pwVar2) {
    if ((this->Key).InternalString.Data.ArrayNum != 0) {
      pwVar1 = (wchar_t *)(this->Key).InternalString.Data.AllocatorInstance.Data;
    }
    (this->Key).StringPtr = pwVar1;
  }
  return this;
}

// TTupleBaseElement<FFormatArgumentValue,1,2><FText> @ 141bceb50

TTupleBaseElement<FFormatArgumentValue,1,2> * __thiscall
UE::Core::Private::Tuple::TTupleBaseElement<FFormatArgumentValue,1,2>::
TTupleBaseElement<FFormatArgumentValue,1,2><FText>
          (TTupleBaseElement<FFormatArgumentValue,1,2> *this,EForwardingConstructor param_1,
          FText *param_2)

{
  code *pcVar1;
  bool bVar2;
  TTupleBaseElement<FFormatArgumentValue,1,2> *pTVar3;
  
  (this->Value).Type = Text;
  FText::FText((FText *)&(this->Value).TextValue,param_2);
  if ((this->Value).TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TTupleBaseElement<FFormatArgumentValue,1,2> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

