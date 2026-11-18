// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// AddReferencedObjects @ 147ac4de0

void __thiscall
ConstructorHelpers::FObjectFinder<UStaticMesh>::AddReferencedObjects
          (FObjectFinder<UStaticMesh> *this,FReferenceCollector *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000147ac4df3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->Object,0,0);
  return;
}

// GetReferencerName @ 147aecc90

FString * __thiscall
ConstructorHelpers::FObjectFinder<UStaticMesh>::GetReferencerName
          (FObjectFinder<UStaticMesh> *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FObjectFinder");
  return __return_storage_ptr__;
}

// FObjectFinder<UPackage> @ 148903f60

FObjectFinder<UPackage> * __thiscall
ConstructorHelpers::FObjectFinder<UPackage>::FObjectFinder<UPackage>
          (FObjectFinder<UPackage> *this,wchar_t *param_1,uint param_2)

{
  UPackage *pUVar1;
  FString local_18;
  
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::RegisterGCObject((FGCObject *)this);
  this->_padding_ = (longlong)&___7__FObjectFinder_VUPackage___ConstructorHelpers__6B_;
  (this->Object).field0_0x0.DebugPtr = (UPackage *)0x0;
  CheckIfIsInConstructor(param_1);
  ::FString::FString(&local_18,param_1);
  StripObjectClass(&local_18,true);
  pUVar1 = ConstructorHelpersInternal::FindOrLoadObject<UPackage>(&local_18,param_2);
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar1 == (UPackage *)0x0)) {
    (this->Object).field0_0x0.DebugPtr = pUVar1;
    if (pUVar1 == (UPackage *)0x0) {
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

// FObjectFinder<UTexture2D> @ 148904030

FObjectFinder<UTexture2D> * __thiscall
ConstructorHelpers::FObjectFinder<UTexture2D>::FObjectFinder<UTexture2D>
          (FObjectFinder<UTexture2D> *this,wchar_t *param_1,uint param_2)

{
  UTexture2D *pUVar1;
  FString local_18;
  
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::RegisterGCObject((FGCObject *)this);
  this->_padding_ = (longlong)&___7__FObjectFinder_VUTexture2D___ConstructorHelpers__6B_;
  (this->Object).field0_0x0.DebugPtr = (UTexture2D *)0x0;
  CheckIfIsInConstructor(param_1);
  ::FString::FString(&local_18,param_1);
  StripObjectClass(&local_18,true);
  pUVar1 = ConstructorHelpersInternal::FindOrLoadObject<UTexture2D>(&local_18,param_2);
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar1 == (UTexture2D *)0x0)) {
    (this->Object).field0_0x0.DebugPtr = pUVar1;
    if (pUVar1 == (UTexture2D *)0x0) {
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

// AddReferencedObjects @ 1489178f0

void __thiscall
ConstructorHelpers::FObjectFinder<UPackage>::AddReferencedObjects
          (FObjectFinder<UPackage> *this,FReferenceCollector *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000148917903. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->Object,0,0);
  return;
}

// AddReferencedObjects @ 148917910

void __thiscall
ConstructorHelpers::FObjectFinder<UTexture2D>::AddReferencedObjects
          (FObjectFinder<UTexture2D> *this,FReferenceCollector *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000148917923. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->Object,0,0);
  return;
}

// GetReferencerName @ 14895c150

FString * __thiscall
ConstructorHelpers::FObjectFinder<UPackage>::GetReferencerName
          (FObjectFinder<UPackage> *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FObjectFinder");
  return __return_storage_ptr__;
}

// GetReferencerName @ 14895c180

FString * __thiscall
ConstructorHelpers::FObjectFinder<UTexture2D>::GetReferencerName
          (FObjectFinder<UTexture2D> *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FObjectFinder");
  return __return_storage_ptr__;
}

// AddReferencedObjects @ 148aec380

void __thiscall
ConstructorHelpers::FObjectFinder<UClass>::AddReferencedObjects
          (FObjectFinder<UClass> *this,FReferenceCollector *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000148aec393. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->Object,0,0);
  return;
}

// GetReferencerName @ 148af1300

FString * __thiscall
ConstructorHelpers::FObjectFinder<UClass>::GetReferencerName
          (FObjectFinder<UClass> *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FObjectFinder");
  return __return_storage_ptr__;
}

