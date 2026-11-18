// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Common
// Functions: 3

// FObjectFinder<UMaterial> @ 14948bd60

FObjectFinder<UMaterial> * __thiscall
ConstructorHelpers::FObjectFinder<UMaterial>::FObjectFinder<UMaterial>
          (FObjectFinder<UMaterial> *this,wchar_t *param_1,uint param_2)

{
  UMaterial *pUVar1;
  FString local_18;
  
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::RegisterGCObject((FGCObject *)this);
  this->_padding_ = (longlong)&___7__FObjectFinder_VUMaterial___ConstructorHelpers__6B_;
  (this->Object).field0_0x0.DebugPtr = (UMaterial *)0x0;
  CheckIfIsInConstructor(param_1);
  ::FString::FString(&local_18,param_1);
  StripObjectClass(&local_18,true);
  pUVar1 = ConstructorHelpersInternal::FindOrLoadObject<UMaterial>(&local_18,param_2);
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar1 == (UMaterial *)0x0)) {
    (this->Object).field0_0x0.DebugPtr = pUVar1;
    if (pUVar1 == (UMaterial *)0x0) {
      FailedToFind(param_1);
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
    (this->Object).field0_0x0.DebugPtr = pUVar1;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}

// AddReferencedObjects @ 149494da0

void __thiscall
ConstructorHelpers::FObjectFinder<UMaterial>::AddReferencedObjects
          (FObjectFinder<UMaterial> *this,FReferenceCollector *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000149494db3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->Object,0,0);
  return;
}

// GetReferencerName @ 1494a2660

FString * __thiscall
ConstructorHelpers::FObjectFinder<UMaterial>::GetReferencerName
          (FObjectFinder<UMaterial> *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FObjectFinder");
  return __return_storage_ptr__;
}

