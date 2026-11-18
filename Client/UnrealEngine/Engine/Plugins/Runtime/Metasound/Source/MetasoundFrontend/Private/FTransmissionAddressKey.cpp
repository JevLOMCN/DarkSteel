// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 11

// FTransmissionAddressKey @ 14af3d5e0

FTransmissionAddressKey * __thiscall
Metasound::FAddressRouter::FTransmissionAddressKey::FTransmissionAddressKey
          (FTransmissionAddressKey *this,
          TUniquePtr<Metasound::FTransmissionAddress,TDefaultDelete<Metasound::FTransmissionAddress>_>
          *param_1)

{
  this->_padding_ = (longlong)&___7FTransmissionAddressKey_FAddressRouter_Metasound__6B_;
  (this->PImpl).Ptr = param_1->Ptr;
  param_1->Ptr = (FTransmissionAddress *)0x0;
  return this;
}

// FTransmissionAddressKey @ 14af3d610

FTransmissionAddressKey * __thiscall
Metasound::FAddressRouter::FTransmissionAddressKey::FTransmissionAddressKey
          (FTransmissionAddressKey *this,FTransmissionAddressKey *param_1)

{
  FTransmissionAddress *pFVar1;
  
  this->_padding_ = (longlong)&___7FTransmissionAddressKey_FAddressRouter_Metasound__6B_;
  pFVar1 = (param_1->PImpl).Ptr;
  (**(code **)((longlong)*pFVar1 + 0x18))(pFVar1,&this->PImpl);
  return this;
}

// FTransmissionAddressKey @ 14af3d640

FTransmissionAddressKey * __thiscall
Metasound::FAddressRouter::FTransmissionAddressKey::FTransmissionAddressKey
          (FTransmissionAddressKey *this,FTransmissionAddress *param_1)

{
  this->_padding_ = (longlong)&___7FTransmissionAddressKey_FAddressRouter_Metasound__6B_;
  (**(code **)((longlong)*param_1 + 0x18))(param_1,&this->PImpl);
  return this;
}

// ~FTransmissionAddressKey @ 14af42db0

void __thiscall
Metasound::FAddressRouter::FTransmissionAddressKey::~FTransmissionAddressKey
          (FTransmissionAddressKey *this)

{
  FTransmissionAddress *pFVar1;
  
  pFVar1 = (this->PImpl).Ptr;
  if (pFVar1 != (FTransmissionAddress *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014af42dc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*pFVar1)(pFVar1,1);
    return;
  }
  return;
}

// operator= @ 14af43420

FTransmissionAddressKey * __thiscall
Metasound::FAddressRouter::FTransmissionAddressKey::operator=
          (FTransmissionAddressKey *this,FTransmissionAddress *param_1)

{
  TUniquePtr<Metasound::FTransmissionAddress,TDefaultDelete<Metasound::FTransmissionAddress>_>
  *pTVar1;
  FTransmissionAddress *pFVar2;
  undefined8 *puVar3;
  undefined8 *local_res8 [4];
  
  puVar3 = (undefined8 *)(**(code **)((longlong)*param_1 + 0x18))(param_1,local_res8);
  pTVar1 = &this->PImpl;
  if (pTVar1 != (TUniquePtr<Metasound::FTransmissionAddress,TDefaultDelete<Metasound::FTransmissionAddress>_>
                 *)puVar3) {
    pFVar2 = pTVar1->Ptr;
    pTVar1->Ptr = (FTransmissionAddress *)*puVar3;
    *puVar3 = 0;
    if (pFVar2 != (FTransmissionAddress *)0x0) {
      (**(code **)*pFVar2)(pFVar2,1);
    }
  }
  if (local_res8[0] != (undefined8 *)0x0) {
    (**(code **)*local_res8[0])(local_res8[0],1);
  }
  return this;
}

// Clone @ 14af51830

TUniquePtr<Metasound::FTransmissionAddress,TDefaultDelete<Metasound::FTransmissionAddress>_>
__thiscall Metasound::FAddressRouter::FTransmissionAddressKey::Clone(FTransmissionAddressKey *this)

{
  FTransmissionAddress *in_RDX;
  
  (**(code **)((longlong)*(this->PImpl).Ptr + 0x18))();
  return (TUniquePtr<Metasound::FTransmissionAddress,TDefaultDelete<Metasound::FTransmissionAddress>_>
          )in_RDX;
}

// GetAddressType @ 14af94a20

FName __thiscall
Metasound::FAddressRouter::FTransmissionAddressKey::GetAddressType(FTransmissionAddressKey *this)

{
  FName in_RDX;
  
  (**(code **)((longlong)*(this->PImpl).Ptr + 8))();
  return in_RDX;
}

// GetDataType @ 14af951c0

FName __thiscall
Metasound::FAddressRouter::FTransmissionAddressKey::GetDataType(FTransmissionAddressKey *this)

{
  FName in_RDX;
  
  (**(code **)((longlong)*(this->PImpl).Ptr + 0x10))();
  return in_RDX;
}

// GetHash @ 14af9abf0

uint __thiscall
Metasound::FAddressRouter::FTransmissionAddressKey::GetHash(FTransmissionAddressKey *this)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014af9abf7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*(this->PImpl).Ptr + 0x28))();
  return uVar1;
}

// IsEqual @ 14afaf830

bool __thiscall
Metasound::FAddressRouter::FTransmissionAddressKey::IsEqual
          (FTransmissionAddressKey *this,FTransmissionAddress *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014afaf83d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*param_1 + 0x30))(param_1,(this->PImpl).Ptr);
  return (bool)uVar1;
}

// ToString @ 14afbfb80

FString * __thiscall
Metasound::FAddressRouter::FTransmissionAddressKey::ToString
          (FTransmissionAddressKey *this,FString *__return_storage_ptr__)

{
  (**(code **)((longlong)*(this->PImpl).Ptr + 0x20))();
  return __return_storage_ptr__;
}

