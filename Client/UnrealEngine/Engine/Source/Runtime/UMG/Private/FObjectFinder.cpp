// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 6

// FObjectFinder<UFont> @ 146981660

FObjectFinder<UFont> * __thiscall
ConstructorHelpers::FObjectFinder<UFont>::FObjectFinder<UFont>
          (FObjectFinder<UFont> *this,wchar_t *param_1,uint param_2)

{
  UFont *pUVar1;
  FString local_18;
  
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::RegisterGCObject((FGCObject *)this);
  this->_padding_ = (longlong)&___7__FObjectFinder_VUFont___ConstructorHelpers__6B_;
  (this->Object).field0_0x0.DebugPtr = (UFont *)0x0;
  CheckIfIsInConstructor(param_1);
  ::FString::FString(&local_18,param_1);
  StripObjectClass(&local_18,true);
  pUVar1 = ConstructorHelpersInternal::FindOrLoadObject<UFont>(&local_18,param_2);
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar1 == (UFont *)0x0)) {
    (this->Object).field0_0x0.DebugPtr = pUVar1;
    if (pUVar1 == (UFont *)0x0) {
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

// AddReferencedObjects @ 1469a27a0

void __thiscall
ConstructorHelpers::FObjectFinder<UFont>::AddReferencedObjects
          (FObjectFinder<UFont> *this,FReferenceCollector *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001469a27b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->Object,0,0);
  return;
}

// GetReferencerName @ 1469d6ba0

FString * __thiscall
ConstructorHelpers::FObjectFinder<UFont>::GetReferencerName
          (FObjectFinder<UFont> *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FObjectFinder");
  return __return_storage_ptr__;
}

// FObjectFinder<UMaterialInterface> @ 146a55070

FObjectFinder<UMaterialInterface> * __thiscall
ConstructorHelpers::FObjectFinder<UMaterialInterface>::FObjectFinder<UMaterialInterface>
          (FObjectFinder<UMaterialInterface> *this,wchar_t *param_1,uint param_2)

{
  UMaterialInterface *pUVar1;
  FString local_18;
  
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::RegisterGCObject((FGCObject *)this);
  this->_padding_ = (longlong)&___7__FObjectFinder_VUMaterialInterface___ConstructorHelpers__6B_;
  (this->Object).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  CheckIfIsInConstructor(param_1);
  ::FString::FString(&local_18,param_1);
  StripObjectClass(&local_18,true);
  pUVar1 = ConstructorHelpersInternal::FindOrLoadObject<UMaterialInterface>(&local_18,param_2);
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar1 == (UMaterialInterface *)0x0))
  {
    (this->Object).field0_0x0.DebugPtr = pUVar1;
    if (pUVar1 == (UMaterialInterface *)0x0) {
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

// AddReferencedObjects @ 146a5d450

void __thiscall
ConstructorHelpers::FObjectFinder<UMaterialInterface>::AddReferencedObjects
          (FObjectFinder<UMaterialInterface> *this,FReferenceCollector *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000146a5d463. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->Object,0,0);
  return;
}

// GetReferencerName @ 146a78c60

FString * __thiscall
ConstructorHelpers::FObjectFinder<UMaterialInterface>::GetReferencerName
          (FObjectFinder<UMaterialInterface> *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FObjectFinder");
  return __return_storage_ptr__;
}

