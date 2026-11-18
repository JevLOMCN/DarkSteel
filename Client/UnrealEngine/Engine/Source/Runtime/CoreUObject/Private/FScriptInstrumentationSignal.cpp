// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 5

// FScriptInstrumentationSignal @ 1421ff9f0

FScriptInstrumentationSignal * __thiscall
FScriptInstrumentationSignal::FScriptInstrumentationSignal
          (FScriptInstrumentationSignal *this,Type param_1,UObject *param_2,FFrame *param_3,
          FName param_4)

{
  this->EventType = param_1;
  this->ContextObject = param_2;
  this->Function = param_3->Node;
  this->EventName = param_4;
  this->StackFramePtr = param_3;
  this->LatentLinkId = -1;
  return this;
}

// GetClass @ 14220d2a0

UClass * __thiscall FScriptInstrumentationSignal::GetClass(FScriptInstrumentationSignal *this)

{
  if (this->ContextObject != (UObject *)0x0) {
    return *(UClass **)&this->ContextObject->field_0x10;
  }
  return (UClass *)0x0;
}

// GetFunctionClassScope @ 14220dae0

UClass * __thiscall
FScriptInstrumentationSignal::GetFunctionClassScope(FScriptInstrumentationSignal *this)

{
  int iVar1;
  UClass *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UClass *)this->Function->_padding_;
  if (pUVar2 != (UClass *)0x0) {
    pUVar3 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UClass *)0x0;
}

// GetFunctionName @ 14220db30

FName __thiscall FScriptInstrumentationSignal::GetFunctionName(FScriptInstrumentationSignal *this)

{
  FName in_RDX;
  
  if (this->EventName == (FName)0x0) {
    *(longlong *)in_RDX = this->Function->_padding_;
    return in_RDX;
  }
  *(FName *)in_RDX = this->EventName;
  return in_RDX;
}

// GetScriptCodeOffset @ 14220f1d0

int __thiscall FScriptInstrumentationSignal::GetScriptCodeOffset(FScriptInstrumentationSignal *this)

{
  FFrame *pFVar1;
  
  if (this->EventType == ResumeEvent) {
    return this->LatentLinkId;
  }
  pFVar1 = this->StackFramePtr;
  if (pFVar1 != (FFrame *)0x0) {
    return ~(uint)pFVar1->Node->_padding_ + *(int *)&pFVar1->Code;
  }
  return -1;
}

