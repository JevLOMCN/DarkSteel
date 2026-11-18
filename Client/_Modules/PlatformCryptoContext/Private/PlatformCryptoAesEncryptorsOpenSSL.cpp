// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PlatformCryptoContext
// Functions: 34

// ~FPlatformCryptoEncryptor_AES_256_CBC_OpenSSL @ 14ea15af0

void __thiscall
FPlatformCryptoEncryptor_AES_256_CBC_OpenSSL::~FPlatformCryptoEncryptor_AES_256_CBC_OpenSSL
          (FPlatformCryptoEncryptor_AES_256_CBC_OpenSSL *this)

{
  EVP_CIPHER_CTX_free(*(undefined8 *)&this->field_0x8);
  return;
}

// ~FPlatformCryptoEncryptor_AES_256_ECB_OpenSSL @ 14ea15b00

void __thiscall
FPlatformCryptoEncryptor_AES_256_ECB_OpenSSL::~FPlatformCryptoEncryptor_AES_256_ECB_OpenSSL
          (FPlatformCryptoEncryptor_AES_256_ECB_OpenSSL *this)

{
  EVP_CIPHER_CTX_free(*(undefined8 *)&this->field_0x8);
  return;
}

// ~FPlatformCryptoEncryptor_AES_256_GCM_OpenSSL @ 14ea15b10

void __thiscall
FPlatformCryptoEncryptor_AES_256_GCM_OpenSSL::~FPlatformCryptoEncryptor_AES_256_GCM_OpenSSL
          (FPlatformCryptoEncryptor_AES_256_GCM_OpenSSL *this)

{
  EVP_CIPHER_CTX_free(*(undefined8 *)&this->field_0x8);
  return;
}

// ~FPlatformCryptoEncryptor_AES_Base_OpenSSL @ 14ea15b20

void __thiscall
FPlatformCryptoEncryptor_AES_Base_OpenSSL::~FPlatformCryptoEncryptor_AES_Base_OpenSSL
          (FPlatformCryptoEncryptor_AES_Base_OpenSSL *this)

{
  EVP_CIPHER_CTX_free((this->EVPContext).Context);
  return;
}

// ~IPlatformCryptoEncryptor @ 14ea15b30

void __thiscall IPlatformCryptoEncryptor::~IPlatformCryptoEncryptor(IPlatformCryptoEncryptor *this)

{
  return;
}

// `scalar_deleting_destructor' @ 14ea15b40

void * __thiscall
FPlatformCryptoEncryptor_AES_256_CBC_OpenSSL::_scalar_deleting_destructor_
          (FPlatformCryptoEncryptor_AES_256_CBC_OpenSSL *this,uint param_1)

{
  EVP_CIPHER_CTX_free(*(undefined8 *)&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea15b80

void * __thiscall
FPlatformCryptoEncryptor_AES_256_ECB_OpenSSL::_scalar_deleting_destructor_
          (FPlatformCryptoEncryptor_AES_256_ECB_OpenSSL *this,uint param_1)

{
  EVP_CIPHER_CTX_free(*(undefined8 *)&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea15bc0

void * __thiscall
FPlatformCryptoEncryptor_AES_256_GCM_OpenSSL::_scalar_deleting_destructor_
          (FPlatformCryptoEncryptor_AES_256_GCM_OpenSSL *this,uint param_1)

{
  EVP_CIPHER_CTX_free(*(undefined8 *)&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea15c00

void * __thiscall
FPlatformCryptoEncryptor_AES_Base_OpenSSL::_scalar_deleting_destructor_
          (FPlatformCryptoEncryptor_AES_Base_OpenSSL *this,uint param_1)

{
  EVP_CIPHER_CTX_free((this->EVPContext).Context);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea15c40

void * __thiscall
IPlatformCryptoEncryptor::_scalar_deleting_destructor_(IPlatformCryptoEncryptor *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Create @ 14ea15c70

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<IPlatformCryptoEncryptor,TDefaultDelete<IPlatformCryptoEncryptor>_> __cdecl
FPlatformCryptoEncryptor_AES_256_CBC_OpenSSL::Create
          (TArrayView<unsigned_char_const_,int> *param_1,
          TArrayView<unsigned_char_const_,int> *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  uchar *puVar7;
  undefined8 uVar8;
  TUniquePtr<IPlatformCryptoEncryptor,TDefaultDelete<IPlatformCryptoEncryptor>_> TVar9;
  undefined8 uVar10;
  FStaticBasicLogRecord *pFVar11;
  undefined8 *in_R8;
  
  uVar6 = EVP_aes_256_cbc();
  iVar5 = EVP_CIPHER_key_length(uVar6);
  if (param_2->ArrayNum == iVar5) {
    iVar5 = EVP_CIPHER_iv_length(uVar6);
    if (iVar5 <= *(int *)(in_R8 + 1)) {
      puVar7 = ::operator_new(0x18);
      if (puVar7 == (uchar *)0x0) {
        puVar7 = (uchar *)0x0;
      }
      else {
        puVar7[8] = '\0';
        puVar7[9] = '\0';
        puVar7[10] = '\0';
        puVar7[0xb] = '\0';
        puVar7[0xc] = '\0';
        puVar7[0xd] = '\0';
        puVar7[0xe] = '\0';
        puVar7[0xf] = '\0';
        puVar7[0x10] = '\0';
        puVar7[0x11] = '\0';
        puVar7[0x12] = '\0';
        puVar7[0x13] = '\0';
        puVar7[0x14] = '\0';
        puVar7[0x15] = '\0';
        puVar7[0x16] = '\0';
        puVar7[0x17] = '\0';
        *(undefined ***)puVar7 = &___7FPlatformCryptoEncryptor_AES_Base_OpenSSL__6B_;
        uVar8 = EVP_CIPHER_CTX_new();
        *(undefined8 *)(puVar7 + 8) = uVar8;
        *(undefined ***)puVar7 = &___7FPlatformCryptoEncryptor_AES_256_CBC_OpenSSL__6B_;
        puVar7[0x10] = '\0';
        puVar7[0x11] = '\0';
        puVar7[0x12] = '\0';
        puVar7[0x13] = '\0';
      }
      uVar3 = *in_R8;
      uVar8 = in_R8[1];
      if (((int)uVar8 == -1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        TVar9.Ptr = (IPlatformCryptoEncryptor *)(*pcVar2)();
        return (TUniquePtr<IPlatformCryptoEncryptor,TDefaultDelete<IPlatformCryptoEncryptor>_>)
               TVar9.Ptr;
      }
      if (*(EEncryptorState *)(puVar7 + 0x10) == Uninitialized) {
        uVar10 = 0;
        if ((int)uVar8 != -1) {
          uVar10 = uVar3;
        }
        iVar5 = EVP_EncryptInit_ex(*(undefined8 *)(puVar7 + 8),uVar6,0,param_2->DataPtr,uVar10);
        if (iVar5 == 1) {
          puVar7[0x10] = '\x01';
          puVar7[0x11] = '\0';
          puVar7[0x12] = '\0';
          puVar7[0x13] = '\0';
          param_1->DataPtr = puVar7;
          return (TUniquePtr<IPlatformCryptoEncryptor,TDefaultDelete<IPlatformCryptoEncryptor>_>)
                 (IPlatformCryptoEncryptor *)param_1;
        }
        if (2 < (byte)LogPlatformCryptoOpenSSL._0_1_) {
          UE::Logging::Private::BasicLog<3>
                    (&::LOG_Static,(FLogCategoryBase *)&LogPlatformCryptoOpenSSL);
        }
      }
      else if (2 < (byte)LogPlatformCryptoOpenSSL._0_1_) {
        ::LexToString(*(EEncryptorState *)(puVar7 + 0x10));
        UE::Logging::Private::BasicLog<3>
                  (&::LOG_Static,(FLogCategoryBase *)&LogPlatformCryptoOpenSSL);
      }
      puVar1 = *(undefined8 **)puVar7;
      param_1->DataPtr = (uchar *)0x0;
      (*(code *)*puVar1)(puVar7,1);
      return (TUniquePtr<IPlatformCryptoEncryptor,TDefaultDelete<IPlatformCryptoEncryptor>_>)
             (IPlatformCryptoEncryptor *)param_1;
    }
    if ((byte)LogPlatformCryptoOpenSSL._0_1_ < 3) goto LAB_14ea15ce9;
    pFVar11 = &::LOG_Static;
  }
  else {
    if ((byte)LogPlatformCryptoOpenSSL._0_1_ < 3) goto LAB_14ea15ce9;
    pFVar11 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar11,(FLogCategoryBase *)&LogPlatformCryptoOpenSSL);
LAB_14ea15ce9:
  param_1->DataPtr = (uchar *)0x0;
  return (TUniquePtr<IPlatformCryptoEncryptor,TDefaultDelete<IPlatformCryptoEncryptor>_>)
         (IPlatformCryptoEncryptor *)param_1;
}

// Create @ 14ea15e40

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<IPlatformCryptoEncryptor,TDefaultDelete<IPlatformCryptoEncryptor>_> __cdecl
FPlatformCryptoEncryptor_AES_256_ECB_OpenSSL::Create(TArrayView<unsigned_char_const_,int> *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  uchar *puVar4;
  undefined8 uVar5;
  undefined8 *in_RDX;
  uchar *puVar6;
  
  uVar3 = EVP_aes_256_ecb();
  iVar2 = EVP_CIPHER_key_length(uVar3);
  if (*(int *)(in_RDX + 1) == iVar2) {
    puVar4 = ::operator_new(0x18);
    puVar6 = (uchar *)0x0;
    if (puVar4 != (uchar *)0x0) {
      puVar4[8] = '\0';
      puVar4[9] = '\0';
      puVar4[10] = '\0';
      puVar4[0xb] = '\0';
      puVar4[0xc] = '\0';
      puVar4[0xd] = '\0';
      puVar4[0xe] = '\0';
      puVar4[0xf] = '\0';
      puVar4[0x10] = '\0';
      puVar4[0x11] = '\0';
      puVar4[0x12] = '\0';
      puVar4[0x13] = '\0';
      puVar4[0x14] = '\0';
      puVar4[0x15] = '\0';
      puVar4[0x16] = '\0';
      puVar4[0x17] = '\0';
      *(undefined ***)puVar4 = &___7FPlatformCryptoEncryptor_AES_Base_OpenSSL__6B_;
      uVar5 = EVP_CIPHER_CTX_new();
      *(undefined8 *)(puVar4 + 8) = uVar5;
      *(undefined ***)puVar4 = &___7FPlatformCryptoEncryptor_AES_256_ECB_OpenSSL__6B_;
      puVar4[0x10] = '\0';
      puVar4[0x11] = '\0';
      puVar4[0x12] = '\0';
      puVar4[0x13] = '\0';
      puVar6 = puVar4;
    }
    if (*(EEncryptorState *)(puVar6 + 0x10) == Uninitialized) {
      iVar2 = EVP_EncryptInit_ex(*(undefined8 *)(puVar6 + 8),uVar3,0,*in_RDX,0);
      if (iVar2 == 1) {
        puVar6[0x10] = '\x01';
        puVar6[0x11] = '\0';
        puVar6[0x12] = '\0';
        puVar6[0x13] = '\0';
        param_1->DataPtr = puVar6;
        return (TUniquePtr<IPlatformCryptoEncryptor,TDefaultDelete<IPlatformCryptoEncryptor>_>)
               (IPlatformCryptoEncryptor *)param_1;
      }
      if (2 < (byte)LogPlatformCryptoOpenSSL._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&::LOG_Static,(FLogCategoryBase *)&LogPlatformCryptoOpenSSL);
      }
    }
    else if (2 < (byte)LogPlatformCryptoOpenSSL._0_1_) {
      ::LexToString(*(EEncryptorState *)(puVar6 + 0x10));
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPlatformCryptoOpenSSL)
      ;
    }
    puVar1 = *(undefined8 **)puVar6;
    param_1->DataPtr = (uchar *)0x0;
    (*(code *)*puVar1)(puVar6,1);
  }
  else {
    if (2 < (byte)LogPlatformCryptoOpenSSL._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPlatformCryptoOpenSSL)
      ;
    }
    param_1->DataPtr = (uchar *)0x0;
  }
  return (TUniquePtr<IPlatformCryptoEncryptor,TDefaultDelete<IPlatformCryptoEncryptor>_>)
         (IPlatformCryptoEncryptor *)param_1;
}

// Create @ 14ea15fa0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<IPlatformCryptoEncryptor,TDefaultDelete<IPlatformCryptoEncryptor>_> __cdecl
FPlatformCryptoEncryptor_AES_256_GCM_OpenSSL::Create
          (TArrayView<unsigned_char_const_,int> *param_1,
          TArrayView<unsigned_char_const_,int> *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  uchar *puVar7;
  undefined8 uVar8;
  TUniquePtr<IPlatformCryptoEncryptor,TDefaultDelete<IPlatformCryptoEncryptor>_> TVar9;
  undefined8 uVar10;
  FStaticBasicLogRecord *pFVar11;
  undefined8 *in_R8;
  
  uVar6 = EVP_aes_256_gcm();
  iVar5 = EVP_CIPHER_key_length(uVar6);
  if (param_2->ArrayNum == iVar5) {
    iVar5 = EVP_CIPHER_iv_length(uVar6);
    if (iVar5 <= *(int *)(in_R8 + 1)) {
      puVar7 = ::operator_new(0x18);
      if (puVar7 == (uchar *)0x0) {
        puVar7 = (uchar *)0x0;
      }
      else {
        puVar7[8] = '\0';
        puVar7[9] = '\0';
        puVar7[10] = '\0';
        puVar7[0xb] = '\0';
        puVar7[0xc] = '\0';
        puVar7[0xd] = '\0';
        puVar7[0xe] = '\0';
        puVar7[0xf] = '\0';
        puVar7[0x10] = '\0';
        puVar7[0x11] = '\0';
        puVar7[0x12] = '\0';
        puVar7[0x13] = '\0';
        puVar7[0x14] = '\0';
        puVar7[0x15] = '\0';
        puVar7[0x16] = '\0';
        puVar7[0x17] = '\0';
        *(undefined ***)puVar7 = &___7FPlatformCryptoEncryptor_AES_Base_OpenSSL__6B_;
        uVar8 = EVP_CIPHER_CTX_new();
        *(undefined8 *)(puVar7 + 8) = uVar8;
        *(undefined ***)puVar7 = &___7FPlatformCryptoEncryptor_AES_256_GCM_OpenSSL__6B_;
        puVar7[0x10] = '\0';
        puVar7[0x11] = '\0';
        puVar7[0x12] = '\0';
        puVar7[0x13] = '\0';
      }
      uVar3 = *in_R8;
      uVar8 = in_R8[1];
      if (((int)uVar8 == -1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        TVar9.Ptr = (IPlatformCryptoEncryptor *)(*pcVar2)();
        return (TUniquePtr<IPlatformCryptoEncryptor,TDefaultDelete<IPlatformCryptoEncryptor>_>)
               TVar9.Ptr;
      }
      if (*(EEncryptorState *)(puVar7 + 0x10) == Uninitialized) {
        uVar10 = 0;
        if ((int)uVar8 != -1) {
          uVar10 = uVar3;
        }
        iVar5 = EVP_EncryptInit_ex(*(undefined8 *)(puVar7 + 8),uVar6,0,param_2->DataPtr,uVar10);
        if (iVar5 == 1) {
          puVar7[0x10] = '\x01';
          puVar7[0x11] = '\0';
          puVar7[0x12] = '\0';
          puVar7[0x13] = '\0';
          param_1->DataPtr = puVar7;
          return (TUniquePtr<IPlatformCryptoEncryptor,TDefaultDelete<IPlatformCryptoEncryptor>_>)
                 (IPlatformCryptoEncryptor *)param_1;
        }
        if (2 < (byte)LogPlatformCryptoOpenSSL._0_1_) {
          UE::Logging::Private::BasicLog<3>
                    (&::LOG_Static,(FLogCategoryBase *)&LogPlatformCryptoOpenSSL);
        }
      }
      else if (2 < (byte)LogPlatformCryptoOpenSSL._0_1_) {
        ::LexToString(*(EEncryptorState *)(puVar7 + 0x10));
        UE::Logging::Private::BasicLog<3>
                  (&::LOG_Static,(FLogCategoryBase *)&LogPlatformCryptoOpenSSL);
      }
      puVar1 = *(undefined8 **)puVar7;
      param_1->DataPtr = (uchar *)0x0;
      (*(code *)*puVar1)(puVar7,1);
      return (TUniquePtr<IPlatformCryptoEncryptor,TDefaultDelete<IPlatformCryptoEncryptor>_>)
             (IPlatformCryptoEncryptor *)param_1;
    }
    if ((byte)LogPlatformCryptoOpenSSL._0_1_ < 3) goto LAB_14ea16019;
    pFVar11 = &::LOG_Static;
  }
  else {
    if ((byte)LogPlatformCryptoOpenSSL._0_1_ < 3) goto LAB_14ea16019;
    pFVar11 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar11,(FLogCategoryBase *)&LogPlatformCryptoOpenSSL);
LAB_14ea16019:
  param_1->DataPtr = (uchar *)0x0;
  return (TUniquePtr<IPlatformCryptoEncryptor,TDefaultDelete<IPlatformCryptoEncryptor>_>)
         (IPlatformCryptoEncryptor *)param_1;
}

// Finalize @ 14ea16170

/* WARNING: Enum "Type": Some values do not have unique names */

EPlatformCryptoResult __thiscall
FPlatformCryptoEncryptor_AES_Base_OpenSSL::Finalize
          (FPlatformCryptoEncryptor_AES_Base_OpenSSL *this,TArrayView<unsigned_char,int> *param_1,
          int *param_2)

{
  int iVar1;
  
  *param_2 = 0;
  if (this->State == Initialized) {
    iVar1 = (**(code **)(this->_padding_ + 0x40))(this);
    if (iVar1 <= param_1->ArrayNum) {
      iVar1 = EVP_EncryptFinal_ex((this->EVPContext).Context,param_1->DataPtr,param_2);
      if (iVar1 == 1) {
        this->State = Finalized;
        return Success;
      }
      if (2 < (byte)LogPlatformCryptoOpenSSL._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&::LOG_Static,(FLogCategoryBase *)&LogPlatformCryptoOpenSSL);
      }
    }
  }
  else if (2 < (byte)LogPlatformCryptoOpenSSL._0_1_) {
    ::LexToString(this->State);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPlatformCryptoOpenSSL);
  }
  return Failure;
}

// GenerateAuthTag @ 14ea16240

/* WARNING: Enum "Type": Some values do not have unique names */

EPlatformCryptoResult __thiscall
FPlatformCryptoEncryptor_AES_Base_OpenSSL::GenerateAuthTag
          (FPlatformCryptoEncryptor_AES_Base_OpenSSL *this,TArrayView<unsigned_char,int> *param_1,
          int *param_2)

{
  int iVar1;
  int iVar2;
  
  *param_2 = 0;
  if (this->State == Finalized) {
    iVar1 = (**(code **)(this->_padding_ + 0x20))(this);
    if (param_1->ArrayNum < iVar1) {
      if (2 < (byte)LogPlatformCryptoOpenSSL._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&::LOG_Static,(FLogCategoryBase *)&LogPlatformCryptoOpenSSL);
        return Failure;
      }
    }
    else {
      iVar2 = EVP_CIPHER_CTX_ctrl((this->EVPContext).Context,0x10,param_1->ArrayNum,param_1->DataPtr
                                 );
      if (iVar2 == 1) {
        *param_2 = iVar1;
        return Success;
      }
      if (2 < (byte)LogPlatformCryptoOpenSSL._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&::LOG_Static,(FLogCategoryBase *)&LogPlatformCryptoOpenSSL);
      }
    }
  }
  else if (2 < (byte)LogPlatformCryptoOpenSSL._0_1_) {
    ::LexToString(this->State);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPlatformCryptoOpenSSL);
    return Failure;
  }
  return Failure;
}

// GetCipherAuthTagSizeBytes @ 14ea16340

int __thiscall
FPlatformCryptoEncryptor_AES_256_CBC_OpenSSL::GetCipherAuthTagSizeBytes
          (FPlatformCryptoEncryptor_AES_256_CBC_OpenSSL *this)

{
  return 0;
}

// GetCipherAuthTagSizeBytes @ 14ea16350

int __thiscall
FPlatformCryptoEncryptor_AES_256_ECB_OpenSSL::GetCipherAuthTagSizeBytes
          (FPlatformCryptoEncryptor_AES_256_ECB_OpenSSL *this)

{
  return 0;
}

// GetCipherAuthTagSizeBytes @ 14ea16360

int __thiscall
FPlatformCryptoEncryptor_AES_256_GCM_OpenSSL::GetCipherAuthTagSizeBytes
          (FPlatformCryptoEncryptor_AES_256_GCM_OpenSSL *this)

{
  return 0x10;
}

// GetCipherBlockSizeBytes @ 14ea16370

int __thiscall
FPlatformCryptoEncryptor_AES_Base_OpenSSL::GetCipherBlockSizeBytes
          (FPlatformCryptoEncryptor_AES_Base_OpenSSL *this)

{
  int iVar1;
  
  iVar1 = EVP_CIPHER_CTX_block_size((this->EVPContext).Context);
  return iVar1;
}

// GetCipherInitializationVectorSizeBytes @ 14ea16380

int __thiscall
FPlatformCryptoEncryptor_AES_Base_OpenSSL::GetCipherInitializationVectorSizeBytes
          (FPlatformCryptoEncryptor_AES_Base_OpenSSL *this)

{
  int iVar1;
  
  iVar1 = EVP_CIPHER_CTX_iv_length((this->EVPContext).Context);
  return iVar1;
}

// GetCipherName @ 14ea16390

FName __thiscall
FPlatformCryptoEncryptor_AES_256_CBC_OpenSSL::GetCipherName
          (FPlatformCryptoEncryptor_AES_256_CBC_OpenSSL *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,L"AES_256_CBC");
  return in_RDX;
}

// GetCipherName @ 14ea163c0

FName __thiscall
FPlatformCryptoEncryptor_AES_256_ECB_OpenSSL::GetCipherName
          (FPlatformCryptoEncryptor_AES_256_ECB_OpenSSL *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,L"AES_256_ECB");
  return in_RDX;
}

// GetCipherName @ 14ea163f0

FName __thiscall
FPlatformCryptoEncryptor_AES_256_GCM_OpenSSL::GetCipherName
          (FPlatformCryptoEncryptor_AES_256_GCM_OpenSSL *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,L"AES_256_GCM");
  return in_RDX;
}

// GetFinalizeBufferSizeBytes @ 14ea16420

int __thiscall
FPlatformCryptoEncryptor_AES_256_CBC_OpenSSL::GetFinalizeBufferSizeBytes
          (FPlatformCryptoEncryptor_AES_256_CBC_OpenSSL *this)

{
  int iVar1;
  
  iVar1 = EVP_CIPHER_CTX_block_size(*(undefined8 *)&this->field_0x8);
  return iVar1;
}

// GetFinalizeBufferSizeBytes @ 14ea16430

int __thiscall
FPlatformCryptoEncryptor_AES_256_ECB_OpenSSL::GetFinalizeBufferSizeBytes
          (FPlatformCryptoEncryptor_AES_256_ECB_OpenSSL *this)

{
  int iVar1;
  
  iVar1 = EVP_CIPHER_CTX_block_size(*(undefined8 *)&this->field_0x8);
  return iVar1;
}

// GetFinalizeBufferSizeBytes @ 14ea16440

int __thiscall
FPlatformCryptoEncryptor_AES_256_GCM_OpenSSL::GetFinalizeBufferSizeBytes
          (FPlatformCryptoEncryptor_AES_256_GCM_OpenSSL *this)

{
  return 0;
}

// GetUpdateBufferSizeBytes @ 14ea16450

int __thiscall
FPlatformCryptoEncryptor_AES_256_CBC_OpenSSL::GetUpdateBufferSizeBytes
          (FPlatformCryptoEncryptor_AES_256_CBC_OpenSSL *this,
          TArrayView<unsigned_char_const_,int> *param_1)

{
  int iVar1;
  
  iVar1 = EVP_CIPHER_CTX_block_size(*(undefined8 *)&this->field_0x8);
  return iVar1 + param_1->ArrayNum + -1;
}

// GetUpdateBufferSizeBytes @ 14ea16480

int __thiscall
FPlatformCryptoEncryptor_AES_256_ECB_OpenSSL::GetUpdateBufferSizeBytes
          (FPlatformCryptoEncryptor_AES_256_ECB_OpenSSL *this,
          TArrayView<unsigned_char_const_,int> *param_1)

{
  int iVar1;
  
  iVar1 = EVP_CIPHER_CTX_block_size(*(undefined8 *)&this->field_0x8);
  return iVar1 + param_1->ArrayNum + -1;
}

// GetUpdateBufferSizeBytes @ 14ea164b0

int __thiscall
FPlatformCryptoEncryptor_AES_256_GCM_OpenSSL::GetUpdateBufferSizeBytes
          (FPlatformCryptoEncryptor_AES_256_GCM_OpenSSL *this,
          TArrayView<unsigned_char_const_,int> *param_1)

{
  return param_1->ArrayNum;
}

// Initialize @ 14ea164c0

/* WARNING: Enum "Type": Some values do not have unique names */

EPlatformCryptoResult __thiscall
FPlatformCryptoEncryptor_AES_Base_OpenSSL::Initialize
          (FPlatformCryptoEncryptor_AES_Base_OpenSSL *this,evp_cipher_st *param_1,
          TArrayView<unsigned_char_const_,int> *param_2,
          TOptional<TArrayView<unsigned_char_const_,int>_> *param_3)

{
  int iVar1;
  uchar *puVar2;
  
  if (this->State == Uninitialized) {
    if ((param_3->field0_0x0).TypedValue.ArrayNum == -1) {
      puVar2 = (uchar *)0x0;
    }
    else {
      puVar2 = (param_3->field0_0x0).TypedValue.DataPtr;
    }
    iVar1 = EVP_EncryptInit_ex((this->EVPContext).Context,param_1,0,param_2->DataPtr,puVar2);
    if (iVar1 == 1) {
      this->State = Initialized;
      return Success;
    }
    if (2 < (byte)LogPlatformCryptoOpenSSL._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPlatformCryptoOpenSSL)
      ;
    }
  }
  else if (2 < (byte)LogPlatformCryptoOpenSSL._0_1_) {
    ::LexToString(this->State);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPlatformCryptoOpenSSL);
    return Failure;
  }
  return Failure;
}

// LexToString @ 14ea16570

wchar_t * __cdecl LexToString(EEncryptorState param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if (param_1 == Uninitialized) {
    return L"Uninitialized";
  }
  if (param_1 == Initialized) {
    return L"Initialized";
  }
  if (param_1 == Finalized) {
    return L"Finalized";
  }
  bVar2 = FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PlatformCrypto\\Source\\PlatformCryptoContext\\Private\\PlatformCryptoAesEncryptorsOpenSSL.cpp"
                     ,0x1b,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pwVar3 = (wchar_t *)(*pcVar1)();
    return pwVar3;
  }
  return L"";
}

// Reset @ 14ea165e0

/* WARNING: Enum "Type": Some values do not have unique names */

EPlatformCryptoResult __thiscall
FPlatformCryptoEncryptor_AES_Base_OpenSSL::Reset(FPlatformCryptoEncryptor_AES_Base_OpenSSL *this)

{
  int iVar1;
  
  iVar1 = EVP_CIPHER_CTX_reset((this->EVPContext).Context);
  if (iVar1 != 1) {
    if (2 < (byte)LogPlatformCryptoOpenSSL._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPlatformCryptoOpenSSL)
      ;
    }
    return Failure;
  }
  this->State = Uninitialized;
  return Success;
}

// Reset @ 14ea16640

/* WARNING: Enum "Type": Some values do not have unique names */

EPlatformCryptoResult __thiscall
FPlatformCryptoEncryptor_AES_Base_OpenSSL::Reset
          (FPlatformCryptoEncryptor_AES_Base_OpenSSL *this,
          TArrayView<unsigned_char_const_,int> *param_1)

{
  EEncryptorState EVar1;
  int iVar2;
  uchar *puVar3;
  
  EVar1 = this->State;
  if ((EVar1 == Initialized) || (EVar1 == Finalized)) {
    iVar2 = EVP_CIPHER_CTX_iv_length((this->EVPContext).Context);
    if (param_1->ArrayNum < iVar2) {
      if (2 < (byte)LogPlatformCryptoOpenSSL._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&::LOG_Static,(FLogCategoryBase *)&LogPlatformCryptoOpenSSL);
        return Failure;
      }
    }
    else {
      if (param_1->ArrayNum == 0) {
        puVar3 = (uchar *)0x0;
      }
      else {
        puVar3 = param_1->DataPtr;
      }
      iVar2 = EVP_EncryptInit_ex((this->EVPContext).Context,0,0,0,puVar3);
      if (iVar2 == 1) {
        this->State = Initialized;
        return Success;
      }
      if (2 < (byte)LogPlatformCryptoOpenSSL._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&::LOG_Static,(FLogCategoryBase *)&LogPlatformCryptoOpenSSL);
      }
    }
  }
  else if (2 < (byte)LogPlatformCryptoOpenSSL._0_1_) {
    ::LexToString(EVar1);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPlatformCryptoOpenSSL);
    return Failure;
  }
  return Failure;
}

// Update @ 14ea16750

/* WARNING: Enum "Type": Some values do not have unique names */

EPlatformCryptoResult __thiscall
FPlatformCryptoEncryptor_AES_Base_OpenSSL::Update
          (FPlatformCryptoEncryptor_AES_Base_OpenSSL *this,
          TArrayView<unsigned_char_const_,int> *param_1,TArrayView<unsigned_char,int> *param_2,
          int *param_3)

{
  int iVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  *param_3 = 0;
  if (this->State == Initialized) {
    local_18 = *(undefined4 *)&param_1->DataPtr;
    uStack_14 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
    iStack_10 = param_1->ArrayNum;
    uStack_c = *(undefined4 *)&param_1->field_0xc;
    iVar1 = (**(code **)(this->_padding_ + 0x30))(this,&local_18);
    if (param_2->ArrayNum < iVar1) {
      if (2 < (byte)LogPlatformCryptoOpenSSL._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&::LOG_Static,(FLogCategoryBase *)&LogPlatformCryptoOpenSSL);
        return Failure;
      }
    }
    else {
      iVar1 = EVP_EncryptUpdate((this->EVPContext).Context,param_2->DataPtr,param_3,param_1->DataPtr
                                ,param_1->ArrayNum);
      if (iVar1 == 1) {
        return Success;
      }
      if (2 < (byte)LogPlatformCryptoOpenSSL._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&::LOG_Static,(FLogCategoryBase *)&LogPlatformCryptoOpenSSL);
      }
    }
  }
  else if (2 < (byte)LogPlatformCryptoOpenSSL._0_1_) {
    ::LexToString(this->State);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPlatformCryptoOpenSSL);
    return Failure;
  }
  return Failure;
}

