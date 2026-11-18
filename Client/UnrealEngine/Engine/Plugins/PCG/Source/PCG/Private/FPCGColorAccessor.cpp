// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// FPCGColorAccessor @ 149e350d0

FPCGColorAccessor * __thiscall
FPCGColorAccessor::FPCGColorAccessor
          (FPCGColorAccessor *this,FStructProperty *param_1,
          TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *param_2)

{
  UScriptStruct *pUVar1;
  code *pcVar2;
  UScriptStruct *pUVar3;
  FPCGColorAccessor *pFVar4;
  bool bVar5;
  
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7__IPCGAttributeAccessorT_VFPCGColorAccessor____6B_;
  *(undefined2 *)((longlong)&this->_padding_ + 2) = 6;
  IPCGPropertyChain::IPCGPropertyChain
            ((IPCGPropertyChain *)&this->_padding_,(FProperty *)param_1,param_2);
  this->Property = param_1;
  this->_padding_ = (longlong)&_vftable__for__IPCGAttributeAccessorT<FPCGColorAccessor>__;
  this->_padding_ = (longlong)&_vftable__for__IPCGPropertyChain__;
  if ((param_1 != (FStructProperty *)0x0) &&
     ((param_1->Struct).field0_0x0.DebugPtr != (UScriptStruct *)0x0)) {
    pUVar3 = TBaseStructure<FColor>::Get();
    pUVar1 = (param_1->Struct).field0_0x0.DebugPtr;
    if (pUVar1 == (UScriptStruct *)0x0) {
      bVar5 = pUVar3 == (UScriptStruct *)0x0;
    }
    else {
      bVar5 = pUVar1 == pUVar3;
    }
    if (bVar5) {
      return this;
    }
  }
  bVar5 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_5221889764680007149>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGPropertyAccessor.h"
                     ,0x213,
                     "InProperty && InProperty->Struct && InProperty->Struct == TBaseStructure<FColor>::Get()"
                    );
  if (!bVar5) {
    return this;
  }
  pcVar2 = (code *)swi(3);
  pFVar4 = (FPCGColorAccessor *)(*pcVar2)();
  return pFVar4;
}

