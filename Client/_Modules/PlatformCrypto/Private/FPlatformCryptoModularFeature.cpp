// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PlatformCrypto
// Functions: 11

// Shutdown @ 14ea16c10

void __thiscall FPlatformCryptoModularFeature::Shutdown(FPlatformCryptoModularFeature *this)

{
  FEncryptionContextOpenSSL *pFVar1;
  
  pFVar1 = (this->Context).Ptr;
  if (pFVar1 != (FEncryptionContextOpenSSL *)0x0) {
    (this->Context).Ptr = (FEncryptionContextOpenSSL *)0x0;
    ::operator_delete(pFVar1,1);
    return;
  }
  return;
}

// CreateRSAKey @ 14ea16c40

void * __thiscall
FPlatformCryptoModularFeature::CreateRSAKey
          (FPlatformCryptoModularFeature *this,TArrayView<unsigned_char_const_,int> *param_1,
          TArrayView<unsigned_char_const_,int> *param_2,
          TArrayView<unsigned_char_const_,int> *param_3)

{
  TUniquePtr<FEncryptionContextOpenSSL,TDefaultDelete<FEncryptionContextOpenSSL>_> *pTVar1;
  void *pvVar2;
  TArrayView<unsigned_char_const_,int> local_38;
  TArrayView<unsigned_char_const_,int> local_28;
  TArrayView<unsigned_char_const_,int> local_18;
  
  pTVar1 = GetContext(this);
  local_38.DataPtr = param_3->DataPtr;
  local_38.ArrayNum = param_3->ArrayNum;
  local_38._12_4_ = *(undefined4 *)&param_3->field_0xc;
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pvVar2 = FEncryptionContextOpenSSL::CreateKey_RSA(pTVar1->Ptr,&local_18,&local_28,&local_38);
  return pvVar2;
}

// DestroyRSAKey @ 14ea16cb0

void __thiscall
FPlatformCryptoModularFeature::DestroyRSAKey(FPlatformCryptoModularFeature *this,void *param_1)

{
  TUniquePtr<FEncryptionContextOpenSSL,TDefaultDelete<FEncryptionContextOpenSSL>_> *pTVar1;
  
  pTVar1 = GetContext(this);
  FEncryptionContextOpenSSL::DestroyKey_RSA(pTVar1->Ptr,param_1);
  return;
}

// GetKeySize @ 14ea16ce0

int __thiscall
FPlatformCryptoModularFeature::GetKeySize(FPlatformCryptoModularFeature *this,void *param_1)

{
  int iVar1;
  TUniquePtr<FEncryptionContextOpenSSL,TDefaultDelete<FEncryptionContextOpenSSL>_> *pTVar2;
  
  pTVar2 = GetContext(this);
  iVar1 = FEncryptionContextOpenSSL::GetKeySize_RSA(pTVar2->Ptr,param_1);
  return iVar1;
}

// GetMaxDataSize @ 14ea16d10

int __thiscall
FPlatformCryptoModularFeature::GetMaxDataSize(FPlatformCryptoModularFeature *this,void *param_1)

{
  int iVar1;
  TUniquePtr<FEncryptionContextOpenSSL,TDefaultDelete<FEncryptionContextOpenSSL>_> *pTVar2;
  
  pTVar2 = GetContext(this);
  iVar1 = FEncryptionContextOpenSSL::GetMaxDataSize_RSA(pTVar2->Ptr,param_1);
  return iVar1;
}

// EncryptPublic @ 14ea16d40

int __thiscall
FPlatformCryptoModularFeature::EncryptPublic
          (FPlatformCryptoModularFeature *this,TArrayView<unsigned_char_const_,int> *param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2,void *param_3)

{
  int iVar1;
  TUniquePtr<FEncryptionContextOpenSSL,TDefaultDelete<FEncryptionContextOpenSSL>_> *pTVar2;
  TArrayView<unsigned_char_const_,int> local_18;
  
  pTVar2 = GetContext(this);
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  iVar1 = FEncryptionContextOpenSSL::EncryptPublic_RSA(pTVar2->Ptr,&local_18,param_2,param_3);
  return iVar1;
}

// EncryptPrivate @ 14ea16d90

int __thiscall
FPlatformCryptoModularFeature::EncryptPrivate
          (FPlatformCryptoModularFeature *this,TArrayView<unsigned_char_const_,int> *param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2,void *param_3)

{
  int iVar1;
  TUniquePtr<FEncryptionContextOpenSSL,TDefaultDelete<FEncryptionContextOpenSSL>_> *pTVar2;
  TArrayView<unsigned_char_const_,int> local_18;
  
  pTVar2 = GetContext(this);
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  iVar1 = FEncryptionContextOpenSSL::EncryptPrivate_RSA(pTVar2->Ptr,&local_18,param_2,param_3);
  return iVar1;
}

// DecryptPublic @ 14ea16de0

int __thiscall
FPlatformCryptoModularFeature::DecryptPublic
          (FPlatformCryptoModularFeature *this,TArrayView<unsigned_char_const_,int> *param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2,void *param_3)

{
  int iVar1;
  TUniquePtr<FEncryptionContextOpenSSL,TDefaultDelete<FEncryptionContextOpenSSL>_> *pTVar2;
  TArrayView<unsigned_char_const_,int> local_18;
  
  pTVar2 = GetContext(this);
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  iVar1 = FEncryptionContextOpenSSL::DecryptPublic_RSA(pTVar2->Ptr,&local_18,param_2,param_3);
  return iVar1;
}

// DecryptPrivate @ 14ea16e30

int __thiscall
FPlatformCryptoModularFeature::DecryptPrivate
          (FPlatformCryptoModularFeature *this,TArrayView<unsigned_char_const_,int> *param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2,void *param_3)

{
  int iVar1;
  TUniquePtr<FEncryptionContextOpenSSL,TDefaultDelete<FEncryptionContextOpenSSL>_> *pTVar2;
  TArrayView<unsigned_char_const_,int> local_18;
  
  pTVar2 = GetContext(this);
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  iVar1 = FEncryptionContextOpenSSL::DecryptPrivate_RSA(pTVar2->Ptr,&local_18,param_2,param_3);
  return iVar1;
}

// ~FPlatformCryptoModularFeature @ 14ea16ef0

void __thiscall
FPlatformCryptoModularFeature::~FPlatformCryptoModularFeature(FPlatformCryptoModularFeature *this)

{
  FEncryptionContextOpenSSL *pFVar1;
  
  this->_padding_ = (longlong)&___7FPlatformCryptoModularFeature__6B_;
  pFVar1 = (this->Context).Ptr;
  if (pFVar1 != (FEncryptionContextOpenSSL *)0x0) {
    (this->Context).Ptr = (FEncryptionContextOpenSSL *)0x0;
    ::operator_delete(pFVar1,1);
  }
  ::operator_delete((this->Context).Ptr,1);
  return;
}

// GetContext @ 14ea16f70

TUniquePtr<FEncryptionContextOpenSSL,TDefaultDelete<FEncryptionContextOpenSSL>_> * __thiscall
FPlatformCryptoModularFeature::GetContext(FPlatformCryptoModularFeature *this)

{
  TUniquePtr<FEncryptionContextOpenSSL,TDefaultDelete<FEncryptionContextOpenSSL>_> *pTVar1;
  FName FVar2;
  FEncryptionContextOpenSSL *pFVar3;
  FName *pFVar4;
  IModuleInterface *pIVar5;
  FModuleManager *this_00;
  FEncryptionContextOpenSSL *pFVar6;
  FName local_res8;
  TUniquePtr<FEncryptionContextOpenSSL,TDefaultDelete<FEncryptionContextOpenSSL>_> local_18 [2];
  
  pTVar1 = &this->Context;
  if ((this->Context).Ptr == (FEncryptionContextOpenSSL *)0x0) {
    pFVar4 = ::FName::FName(&local_res8,"PlatformCrypto");
    pIVar5 = FModuleManager::GetModulePtr_Internal(*pFVar4);
    if (pIVar5 == (IModuleInterface *)0x0) {
      pFVar4 = ::FName::FName(&local_res8,"PlatformCrypto");
      FVar2 = *pFVar4;
      this_00 = FModuleManager::Get();
      FModuleManager::LoadModuleChecked(this_00,FVar2);
    }
    pFVar6 = ::operator_new(1);
    if (pTVar1 != local_18) {
      pFVar3 = pTVar1->Ptr;
      pTVar1->Ptr = pFVar6;
      pFVar6 = (FEncryptionContextOpenSSL *)0x0;
      ::operator_delete(pFVar3,1);
    }
    ::operator_delete(pFVar6,1);
  }
  return pTVar1;
}

