// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 3

// FScopedBaseNodeContainer @ 14e4d7a30

FScopedBaseNodeContainer * __thiscall
UE::Interchange::FScopedBaseNodeContainer::FScopedBaseNodeContainer(FScopedBaseNodeContainer *this)

{
  UObject *pUVar1;
  UPackage *pUVar2;
  UInterchangeBaseNodeContainer *this_00;
  UInterchangeBaseNodeContainer *pUVar3;
  FScopedBaseNodeContainer local_18 [2];
  
  (this->ScopedBaseNodeContainerPtr).Object = (UObject *)0x0;
  pUVar2 = GetTransientPackage();
  this_00 = NewObject<UInterchangeBaseNodeContainer>((UObject *)pUVar2);
  pUVar3 = (UInterchangeBaseNodeContainer *)0x0;
  if (this_00 != (UInterchangeBaseNodeContainer *)0x0) {
    UObjectBase::AddRef((UObjectBase *)this_00);
    pUVar3 = this_00;
  }
  if (this != local_18) {
    pUVar1 = (this->ScopedBaseNodeContainerPtr).Object;
    if (pUVar1 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(pUVar1);
    }
    (this->ScopedBaseNodeContainerPtr).Object = (UObject *)pUVar3;
    return this;
  }
  if (pUVar3 != (UInterchangeBaseNodeContainer *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar3);
  }
  return this;
}

// ~FScopedBaseNodeContainer @ 14e4daa60

void __thiscall
UE::Interchange::FScopedBaseNodeContainer::~FScopedBaseNodeContainer(FScopedBaseNodeContainer *this)

{
  UObject *pUVar1;
  
  pUVar1 = (this->ScopedBaseNodeContainerPtr).Object;
  if (pUVar1 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar1);
    (this->ScopedBaseNodeContainerPtr).Object = (UObject *)0x0;
  }
  return;
}

// GetBaseNodeContainer @ 14e4f5b70

UInterchangeBaseNodeContainer * __thiscall
UE::Interchange::FScopedBaseNodeContainer::GetBaseNodeContainer(FScopedBaseNodeContainer *this)

{
  return (UInterchangeBaseNodeContainer *)(this->ScopedBaseNodeContainerPtr).Object;
}

