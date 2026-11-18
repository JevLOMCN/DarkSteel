// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 4

// ~FTestCapabilityDerived @ 14629b8e0

void __thiscall
UE::MovieScene::Tests::FTestCapabilityDerived::~FTestCapabilityDerived(FTestCapabilityDerived *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FTestCapabilityDerived_Tests_MovieScene_UE__6B_;
  TimesDestroyedDerived = TimesDestroyedDerived + 1;
  pFVar1 = (this->StringValue).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FTestCapabilityBase_Tests_MovieScene_UE__6B_;
  FTestCapabilityBase::TimesDestroyedBase = FTestCapabilityBase::TimesDestroyedBase + 1;
  return;
}

// DoSomething @ 1462ac140

void __thiscall
UE::MovieScene::Tests::FTestCapabilityDerived::DoSomething(FTestCapabilityDerived *this)

{
  this->IntValue = this->IntValue + 1;
  return;
}

// GetIntValue @ 1462af2a0

int __thiscall
UE::MovieScene::Tests::FTestCapabilityDerived::GetIntValue(FTestCapabilityDerived *this)

{
  return this->IntValue;
}

// GetStringValue @ 1462b0980

FString * __thiscall
UE::MovieScene::Tests::FTestCapabilityDerived::GetStringValue
          (FTestCapabilityDerived *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->StringValue);
  return __return_storage_ptr__;
}

