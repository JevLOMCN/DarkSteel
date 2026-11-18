// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PlatformCryptoContext
// Functions: 35

// TOptional<TArrayView<unsigned_char_const_,int>_> @ 14ea14cd0

TOptional<TArrayView<unsigned_char_const_,int>_> * __thiscall
TOptional<TArrayView<unsigned_char_const_,int>_>::TOptional<TArrayView<unsigned_char_const_,int>_>
          (TOptional<TArrayView<unsigned_char_const_,int>_> *this,
          TArrayView<unsigned_char_const_,int> *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  TOptional<TArrayView<unsigned_char_const_,int>_> *pTVar4;
  
  uVar2 = *(undefined8 *)&param_1->ArrayNum;
  (this->field0_0x0).TypedValue.DataPtr = param_1->DataPtr;
  *(undefined8 *)((longlong)&this->field0_0x0 + 8) = uVar2;
  if ((this->field0_0x0).TypedValue.ArrayNum == -1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TOptional<TArrayView<unsigned_char_const_,int>_> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this;
}

// ~FPlatformCryptoDecryptor_AES_256_CBC_OpenSSL @ 14ea14d20

void __thiscall
FPlatformCryptoDecryptor_AES_256_CBC_OpenSSL::~FPlatformCryptoDecryptor_AES_256_CBC_OpenSSL
          (FPlatformCryptoDecryptor_AES_256_CBC_OpenSSL *this)

{
  EVP_CIPHER_CTX_free(*(undefined8 *)&this->field_0x8);
  return;
}

// ~FPlatformCryptoDecryptor_AES_256_ECB_OpenSSL @ 14ea14d30

void __thiscall
FPlatformCryptoDecryptor_AES_256_ECB_OpenSSL::~FPlatformCryptoDecryptor_AES_256_ECB_OpenSSL
          (FPlatformCryptoDecryptor_AES_256_ECB_OpenSSL *this)

{
  EVP_CIPHER_CTX_free(*(undefined8 *)&this->field_0x8);
  return;
}

// ~FPlatformCryptoDecryptor_AES_256_GCM_OpenSSL @ 14ea14d40

void __thiscall
FPlatformCryptoDecryptor_AES_256_GCM_OpenSSL::~FPlatformCryptoDecryptor_AES_256_GCM_OpenSSL
          (FPlatformCryptoDecryptor_AES_256_GCM_OpenSSL *this)

{
  EVP_CIPHER_CTX_free(*(undefined8 *)&this->field_0x8);
  return;
}

// ~FPlatformCryptoDecryptor_AES_Base_OpenSSL @ 14ea14d50

void __thiscall
FPlatformCryptoDecryptor_AES_Base_OpenSSL::~FPlatformCryptoDecryptor_AES_Base_OpenSSL
          (FPlatformCryptoDecryptor_AES_Base_OpenSSL *this)

{
  EVP_CIPHER_CTX_free((this->EVPContext).Context);
  return;
}

// ~IPlatformCryptoDecryptor @ 14ea14d60

void __thiscall IPlatformCryptoDecryptor::~IPlatformCryptoDecryptor(IPlatformCryptoDecryptor *this)

{
  return;
}

// `scalar_deleting_destructor' @ 14ea14d70

void * __thiscall
FPlatformCryptoDecryptor_AES_256_CBC_OpenSSL::_scalar_deleting_destructor_
          (FPlatformCryptoDecryptor_AES_256_CBC_OpenSSL *this,uint param_1)

{
  EVP_CIPHER_CTX_free(*(undefined8 *)&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea14db0

void * __thiscall
FPlatformCryptoDecryptor_AES_256_ECB_OpenSSL::_scalar_deleting_destructor_
          (FPlatformCryptoDecryptor_AES_256_ECB_OpenSSL *this,uint param_1)

{
  EVP_CIPHER_CTX_free(*(undefined8 *)&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea14df0

void * __thiscall
FPlatformCryptoDecryptor_AES_256_GCM_OpenSSL::_scalar_deleting_destructor_
          (FPlatformCryptoDecryptor_AES_256_GCM_OpenSSL *this,uint param_1)

{
  EVP_CIPHER_CTX_free(*(undefined8 *)&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea14e30

void * __thiscall
FPlatformCryptoDecryptor_AES_Base_OpenSSL::_scalar_deleting_destructor_
          (FPlatformCryptoDecryptor_AES_Base_OpenSSL *this,uint param_1)

{
  EVP_CIPHER_CTX_free((this->EVPContext).Context);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea14e70

void * __thiscall
IPlatformCryptoDecryptor::_scalar_deleting_destructor_(IPlatformCryptoDecryptor *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Create @ 14ea14ea0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<IPlatformCryptoDecryptor,TDefaultDelete<IPlatformCryptoDecryptor>_> __cdecl
FPlatformCryptoDecryptor_AES_256_CBC_OpenSSL::Create
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
  TUniquePtr<IPlatformCryptoDecryptor,TDefaultDelete<IPlatformCryptoDecryptor>_> TVar8;
  undefined8 uVar9;
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
        *(undefined ***)puVar7 = &___7FPlatformCryptoDecryptor_AES_Base_OpenSSL__6B_;
        uVar6 = EVP_CIPHER_CTX_new();
        *(undefined8 *)(puVar7 + 8) = uVar6;
        *(undefined ***)puVar7 = &___7FPlatformCryptoDecryptor_AES_256_CBC_OpenSSL__6B_;
        puVar7[0x10] = '\0';
        puVar7[0x11] = '\0';
        puVar7[0x12] = '\0';
        puVar7[0x13] = '\0';
      }
      uVar3 = *in_R8;
      uVar6 = in_R8[1];
      if (((int)uVar6 == -1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        TVar8.Ptr = (IPlatformCryptoDecryptor *)(*pcVar2)();
        return (TUniquePtr<IPlatformCryptoDecryptor,TDefaultDelete<IPlatformCryptoDecryptor>_>)
               TVar8.Ptr;
      }
      uVar9 = EVP_aes_256_cbc();
      if (*(EDecryptorState *)(puVar7 + 0x10) == Uninitialized) {
        uVar10 = 0;
        if ((int)uVar6 != -1) {
          uVar10 = uVar3;
        }
        iVar5 = EVP_DecryptInit_ex(*(undefined8 *)(puVar7 + 8),uVar9,0,param_2->DataPtr,uVar10);
        if (iVar5 == 1) {
          puVar7[0x10] = '\x01';
          puVar7[0x11] = '\0';
          puVar7[0x12] = '\0';
          puVar7[0x13] = '\0';
          param_1->DataPtr = puVar7;
          return (TUniquePtr<IPlatformCryptoDecryptor,TDefaultDelete<IPlatformCryptoDecryptor>_>)
                 (IPlatformCryptoDecryptor *)param_1;
        }
        if (2 < (byte)LogPlatformCryptoOpenSSL._0_1_) {
          UE::Logging::Private::BasicLog<3>
                    (&::LOG_Static,(FLogCategoryBase *)&LogPlatformCryptoOpenSSL);
        }
      }
      else if (2 < (byte)LogPlatformCryptoOpenSSL._0_1_) {
        ::LexToString(*(EDecryptorState *)(puVar7 + 0x10));
        UE::Logging::Private::BasicLog<3>
                  (&::LOG_Static,(FLogCategoryBase *)&LogPlatformCryptoOpenSSL);
      }
      puVar1 = *(undefined8 **)puVar7;
      param_1->DataPtr = (uchar *)0x0;
      (*(code *)*puVar1)(puVar7,1);
      return (TUniquePtr<IPlatformCryptoDecryptor,TDefaultDelete<IPlatformCryptoDecryptor>_>)
             (IPlatformCryptoDecryptor *)param_1;
    }
    if ((byte)LogPlatformCryptoOpenSSL._0_1_ < 3) goto LAB_14ea14f19;
    pFVar11 = &::LOG_Static;
  }
  else {
    if ((byte)LogPlatformCryptoOpenSSL._0_1_ < 3) goto LAB_14ea14f19;
    pFVar11 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar11,(FLogCategoryBase *)&LogPlatformCryptoOpenSSL);
LAB_14ea14f19:
  param_1->DataPtr = (uchar *)0x0;
  return (TUniquePtr<IPlatformCryptoDecryptor,TDefaultDelete<IPlatformCryptoDecryptor>_>)
         (IPlatformCryptoDecryptor *)param_1;
}

// Create @ 14ea15070

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<IPlatformCryptoDecryptor,TDefaultDelete<IPlatformCryptoDecryptor>_> __cdecl
FPlatformCryptoDecryptor_AES_256_ECB_OpenSSL::Create(TArrayView<unsigned_char_const_,int> *param_1)

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
      *(undefined ***)puVar4 = &___7FPlatformCryptoDecryptor_AES_Base_OpenSSL__6B_;
      uVar5 = EVP_CIPHER_CTX_new();
      *(undefined8 *)(puVar4 + 8) = uVar5;
      *(undefined ***)puVar4 = &___7FPlatformCryptoDecryptor_AES_256_ECB_OpenSSL__6B_;
      puVar4[0x10] = '\0';
      puVar4[0x11] = '\0';
      puVar4[0x12] = '\0';
      puVar4[0x13] = '\0';
      puVar6 = puVar4;
    }
    if (*(EDecryptorState *)(puVar6 + 0x10) == Uninitialized) {
      iVar2 = EVP_DecryptInit_ex(*(undefined8 *)(puVar6 + 8),uVar3,0,*in_RDX,0);
      if (iVar2 == 1) {
        puVar6[0x10] = '\x01';
        puVar6[0x11] = '\0';
        puVar6[0x12] = '\0';
        puVar6[0x13] = '\0';
        param_1->DataPtr = puVar6;
        return (TUniquePtr<IPlatformCryptoDecryptor,TDefaultDelete<IPlatformCryptoDecryptor>_>)
               (IPlatformCryptoDecryptor *)param_1;
      }
      if (2 < (byte)LogPlatformCryptoOpenSSL._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&::LOG_Static,(FLogCategoryBase *)&LogPlatformCryptoOpenSSL);
      }
    }
    else if (2 < (byte)LogPlatformCryptoOpenSSL._0_1_) {
      ::LexToString(*(EDecryptorState *)(puVar6 + 0x10));
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
  return (TUniquePtr<IPlatformCryptoDecryptor,TDefaultDelete<IPlatformCryptoDecryptor>_>)
         (IPlatformCryptoDecryptor *)param_1;
}

// Create @ 14ea151d0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<IPlatformCryptoDecryptor,TDefaultDelete<IPlatformCryptoDecryptor>_> __cdecl
FPlatformCryptoDecryptor_AES_256_GCM_OpenSSL::Create
          (TArrayView<unsigned_char_const_,int> *param_1,
          TArrayView<unsigned_char_const_,int> *param_2,
          TArrayView<unsigned_char_const_,int> *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  EPlatformCryptoResult EVar3;
  evp_cipher_st *peVar4;
  FPlatformCryptoDecryptor_AES_Base_OpenSSL *pFVar5;
  evp_cipher_ctx_st *peVar6;
  TOptional<TArrayView<unsigned_char_const_,int>_> *pTVar7;
  FPlatformCryptoDecryptor_AES_Base_OpenSSL *this;
  undefined8 *in_R9;
  TArrayView<unsigned_char_const_,int> local_38;
  TOptional<TArrayView<unsigned_char_const_,int>_> local_28;
  
  peVar4 = (evp_cipher_st *)EVP_aes_256_gcm();
  iVar2 = EVP_CIPHER_key_length(peVar4);
  if (param_2->ArrayNum == iVar2) {
    iVar2 = EVP_CIPHER_iv_length(peVar4);
    if (param_3->ArrayNum < iVar2) {
      if (2 < (byte)LogPlatformCryptoOpenSSL._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&::LOG_Static,(FLogCategoryBase *)&LogPlatformCryptoOpenSSL);
        param_1->DataPtr = (uchar *)0x0;
        return (TUniquePtr<IPlatformCryptoDecryptor,TDefaultDelete<IPlatformCryptoDecryptor>_>)
               (IPlatformCryptoDecryptor *)param_1;
      }
    }
    else if (0xf < *(int *)(in_R9 + 1)) {
      pFVar5 = ::operator_new(0x18);
      this = (FPlatformCryptoDecryptor_AES_Base_OpenSSL *)0x0;
      if (pFVar5 != (FPlatformCryptoDecryptor_AES_Base_OpenSSL *)0x0) {
        (pFVar5->EVPContext).Context = (evp_cipher_ctx_st *)0x0;
        *(undefined8 *)&pFVar5->State = 0;
        pFVar5->_padding_ = (longlong)&___7FPlatformCryptoDecryptor_AES_Base_OpenSSL__6B_;
        peVar6 = (evp_cipher_ctx_st *)EVP_CIPHER_CTX_new();
        (pFVar5->EVPContext).Context = peVar6;
        pFVar5->_padding_ = (longlong)&___7FPlatformCryptoDecryptor_AES_256_GCM_OpenSSL__6B_;
        pFVar5->State = Uninitialized;
        this = pFVar5;
      }
      pTVar7 = TOptional<TArrayView<unsigned_char_const_,int>_>::
               TOptional<TArrayView<unsigned_char_const_,int>_>(&local_28,param_3);
      local_38.DataPtr = param_2->DataPtr;
      local_38.ArrayNum = param_2->ArrayNum;
      local_38._12_4_ = *(undefined4 *)&param_2->field_0xc;
      EVar3 = FPlatformCryptoDecryptor_AES_Base_OpenSSL::Initialize(this,peVar4,&local_38,pTVar7);
      if (EVar3 != Success) {
        param_1->DataPtr = (uchar *)0x0;
        if (this == (FPlatformCryptoDecryptor_AES_Base_OpenSSL *)0x0) {
          return (TUniquePtr<IPlatformCryptoDecryptor,TDefaultDelete<IPlatformCryptoDecryptor>_>)
                 (IPlatformCryptoDecryptor *)param_1;
        }
        (**(code **)this->_padding_)(this,1);
        return (TUniquePtr<IPlatformCryptoDecryptor,TDefaultDelete<IPlatformCryptoDecryptor>_>)
               (IPlatformCryptoDecryptor *)param_1;
      }
      if (this->State == Initialized) {
        iVar2 = (**(code **)(this->_padding_ + 0x20))(this);
        if ((int)in_R9[1] == iVar2) {
          iVar2 = EVP_CIPHER_CTX_ctrl((this->EVPContext).Context,0x11,in_R9[1] & 0xffffffff,*in_R9);
          if (iVar2 == 1) {
            param_1->DataPtr = (uchar *)this;
            return (TUniquePtr<IPlatformCryptoDecryptor,TDefaultDelete<IPlatformCryptoDecryptor>_>)
                   (IPlatformCryptoDecryptor *)param_1;
          }
          if (2 < (byte)LogPlatformCryptoOpenSSL._0_1_) {
            UE::Logging::Private::BasicLog<3>
                      (&::LOG_Static,(FLogCategoryBase *)&LogPlatformCryptoOpenSSL);
          }
        }
        else if (2 < (byte)LogPlatformCryptoOpenSSL._0_1_) {
          (**(code **)(this->_padding_ + 0x20))(this);
          UE::Logging::Private::BasicLog<3>
                    (&::LOG_Static,(FLogCategoryBase *)&LogPlatformCryptoOpenSSL);
        }
      }
      else if (2 < (byte)LogPlatformCryptoOpenSSL._0_1_) {
        ::LexToString(this->State);
        UE::Logging::Private::BasicLog<3>
                  (&::LOG_Static,(FLogCategoryBase *)&LogPlatformCryptoOpenSSL);
      }
      puVar1 = (undefined8 *)this->_padding_;
      param_1->DataPtr = (uchar *)0x0;
      (*(code *)*puVar1)(this,1);
      return (TUniquePtr<IPlatformCryptoDecryptor,TDefaultDelete<IPlatformCryptoDecryptor>_>)
             (IPlatformCryptoDecryptor *)param_1;
    }
  }
  else if (2 < (byte)LogPlatformCryptoOpenSSL._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPlatformCryptoOpenSSL);
    param_1->DataPtr = (uchar *)0x0;
    return (TUniquePtr<IPlatformCryptoDecryptor,TDefaultDelete<IPlatformCryptoDecryptor>_>)
           (IPlatformCryptoDecryptor *)param_1;
  }
  param_1->DataPtr = (uchar *)0x0;
  return (TUniquePtr<IPlatformCryptoDecryptor,TDefaultDelete<IPlatformCryptoDecryptor>_>)
         (IPlatformCryptoDecryptor *)param_1;
}

// Finalize @ 14ea15400

/* WARNING: Enum "Type": Some values do not have unique names */

EPlatformCryptoResult __thiscall
FPlatformCryptoDecryptor_AES_Base_OpenSSL::Finalize
          (FPlatformCryptoDecryptor_AES_Base_OpenSSL *this,TArrayView<unsigned_char,int> *param_1,
          int *param_2)

{
  int iVar1;
  
  *param_2 = 0;
  if (this->State == Initialized) {
    iVar1 = (**(code **)(this->_padding_ + 0x40))(this);
    if (iVar1 <= param_1->ArrayNum) {
      iVar1 = EVP_DecryptFinal_ex((this->EVPContext).Context,param_1->DataPtr,param_2);
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
  }
  return Failure;
}

// GetCipherAuthTagSizeBytes @ 14ea154c0

int __thiscall
FPlatformCryptoDecryptor_AES_256_CBC_OpenSSL::GetCipherAuthTagSizeBytes
          (FPlatformCryptoDecryptor_AES_256_CBC_OpenSSL *this)

{
  return 0;
}

// GetCipherAuthTagSizeBytes @ 14ea154d0

int __thiscall
FPlatformCryptoDecryptor_AES_256_ECB_OpenSSL::GetCipherAuthTagSizeBytes
          (FPlatformCryptoDecryptor_AES_256_ECB_OpenSSL *this)

{
  return 0;
}

// GetCipherAuthTagSizeBytes @ 14ea154e0

int __thiscall
FPlatformCryptoDecryptor_AES_256_GCM_OpenSSL::GetCipherAuthTagSizeBytes
          (FPlatformCryptoDecryptor_AES_256_GCM_OpenSSL *this)

{
  return 0x10;
}

// GetCipherBlockSizeBytes @ 14ea154f0

int __thiscall
FPlatformCryptoDecryptor_AES_Base_OpenSSL::GetCipherBlockSizeBytes
          (FPlatformCryptoDecryptor_AES_Base_OpenSSL *this)

{
  int iVar1;
  
  iVar1 = EVP_CIPHER_CTX_block_size((this->EVPContext).Context);
  return iVar1;
}

// GetCipherInitializationVectorSizeBytes @ 14ea15500

int __thiscall
FPlatformCryptoDecryptor_AES_Base_OpenSSL::GetCipherInitializationVectorSizeBytes
          (FPlatformCryptoDecryptor_AES_Base_OpenSSL *this)

{
  int iVar1;
  
  iVar1 = EVP_CIPHER_CTX_iv_length((this->EVPContext).Context);
  return iVar1;
}

// GetCipherName @ 14ea15510

FName __thiscall
FPlatformCryptoDecryptor_AES_256_CBC_OpenSSL::GetCipherName
          (FPlatformCryptoDecryptor_AES_256_CBC_OpenSSL *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,L"AES_256_CBC");
  return in_RDX;
}

// GetCipherName @ 14ea15540

FName __thiscall
FPlatformCryptoDecryptor_AES_256_ECB_OpenSSL::GetCipherName
          (FPlatformCryptoDecryptor_AES_256_ECB_OpenSSL *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,L"AES_256_ECB");
  return in_RDX;
}

// GetCipherName @ 14ea15570

FName __thiscall
FPlatformCryptoDecryptor_AES_256_GCM_OpenSSL::GetCipherName
          (FPlatformCryptoDecryptor_AES_256_GCM_OpenSSL *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,L"AES_256_GCM");
  return in_RDX;
}

// GetFinalizeBufferSizeBytes @ 14ea155a0

int __thiscall
FPlatformCryptoDecryptor_AES_256_CBC_OpenSSL::GetFinalizeBufferSizeBytes
          (FPlatformCryptoDecryptor_AES_256_CBC_OpenSSL *this)

{
  int iVar1;
  
  iVar1 = EVP_CIPHER_CTX_block_size(*(undefined8 *)&this->field_0x8);
  return iVar1;
}

// GetFinalizeBufferSizeBytes @ 14ea155b0

int __thiscall
FPlatformCryptoDecryptor_AES_256_ECB_OpenSSL::GetFinalizeBufferSizeBytes
          (FPlatformCryptoDecryptor_AES_256_ECB_OpenSSL *this)

{
  int iVar1;
  
  iVar1 = EVP_CIPHER_CTX_block_size(*(undefined8 *)&this->field_0x8);
  return iVar1;
}

// GetFinalizeBufferSizeBytes @ 14ea155c0

int __thiscall
FPlatformCryptoDecryptor_AES_256_GCM_OpenSSL::GetFinalizeBufferSizeBytes
          (FPlatformCryptoDecryptor_AES_256_GCM_OpenSSL *this)

{
  return 0;
}

// GetUpdateBufferSizeBytes @ 14ea155d0

int __thiscall
FPlatformCryptoDecryptor_AES_256_CBC_OpenSSL::GetUpdateBufferSizeBytes
          (FPlatformCryptoDecryptor_AES_256_CBC_OpenSSL *this,
          TArrayView<unsigned_char_const_,int> *param_1)

{
  int iVar1;
  
  iVar1 = EVP_CIPHER_CTX_block_size(*(undefined8 *)&this->field_0x8);
  return iVar1 + param_1->ArrayNum;
}

// GetUpdateBufferSizeBytes @ 14ea15600

int __thiscall
FPlatformCryptoDecryptor_AES_256_ECB_OpenSSL::GetUpdateBufferSizeBytes
          (FPlatformCryptoDecryptor_AES_256_ECB_OpenSSL *this,
          TArrayView<unsigned_char_const_,int> *param_1)

{
  int iVar1;
  
  iVar1 = EVP_CIPHER_CTX_block_size(*(undefined8 *)&this->field_0x8);
  return iVar1 + param_1->ArrayNum;
}

// GetUpdateBufferSizeBytes @ 14ea15630

int __thiscall
FPlatformCryptoDecryptor_AES_256_GCM_OpenSSL::GetUpdateBufferSizeBytes
          (FPlatformCryptoDecryptor_AES_256_GCM_OpenSSL *this,
          TArrayView<unsigned_char_const_,int> *param_1)

{
  return param_1->ArrayNum;
}

// Initialize @ 14ea15640

/* WARNING: Enum "Type": Some values do not have unique names */

EPlatformCryptoResult __thiscall
FPlatformCryptoDecryptor_AES_Base_OpenSSL::Initialize
          (FPlatformCryptoDecryptor_AES_Base_OpenSSL *this,evp_cipher_st *param_1,
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
    iVar1 = EVP_DecryptInit_ex((this->EVPContext).Context,param_1,0,param_2->DataPtr,puVar2);
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

// LexToString @ 14ea156f0

wchar_t * __cdecl LexToString(EDecryptorState param_1)

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
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PlatformCrypto\\Source\\PlatformCryptoContext\\Private\\PlatformCryptoAesDecryptorsOpenSSL.cpp"
                     ,0x1b,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pwVar3 = (wchar_t *)(*pcVar1)();
    return pwVar3;
  }
  return L"";
}

// Reset @ 14ea15760

/* WARNING: Enum "Type": Some values do not have unique names */

EPlatformCryptoResult __thiscall
FPlatformCryptoDecryptor_AES_Base_OpenSSL::Reset(FPlatformCryptoDecryptor_AES_Base_OpenSSL *this)

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

// Reset @ 14ea157c0

/* WARNING: Enum "Type": Some values do not have unique names */

EPlatformCryptoResult __thiscall
FPlatformCryptoDecryptor_AES_Base_OpenSSL::Reset
          (FPlatformCryptoDecryptor_AES_Base_OpenSSL *this,
          TArrayView<unsigned_char_const_,int> *param_1)

{
  EDecryptorState EVar1;
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
      iVar2 = EVP_DecryptInit_ex((this->EVPContext).Context,0,0,0,puVar3);
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

// SetAuthTag @ 14ea158d0

/* WARNING: Enum "Type": Some values do not have unique names */

EPlatformCryptoResult __thiscall
FPlatformCryptoDecryptor_AES_Base_OpenSSL::SetAuthTag
          (FPlatformCryptoDecryptor_AES_Base_OpenSSL *this,
          TArrayView<unsigned_char_const_,int> *param_1)

{
  int iVar1;
  int iVar2;
  
  if (this->State == Initialized) {
    iVar2 = param_1->ArrayNum;
    iVar1 = (**(code **)(this->_padding_ + 0x20))(this);
    if (iVar2 == iVar1) {
      iVar2 = EVP_CIPHER_CTX_ctrl((this->EVPContext).Context,0x11,iVar2,param_1->DataPtr);
      if (iVar2 == 1) {
        return Success;
      }
      if (2 < (byte)LogPlatformCryptoOpenSSL._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&::LOG_Static,(FLogCategoryBase *)&LogPlatformCryptoOpenSSL);
      }
    }
    else if (2 < (byte)LogPlatformCryptoOpenSSL._0_1_) {
      (**(code **)(this->_padding_ + 0x20))(this);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPlatformCryptoOpenSSL)
      ;
      return Failure;
    }
  }
  else if (2 < (byte)LogPlatformCryptoOpenSSL._0_1_) {
    ::LexToString(this->State);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPlatformCryptoOpenSSL);
    return Failure;
  }
  return Failure;
}

// Update @ 14ea159e0

/* WARNING: Enum "Type": Some values do not have unique names */

EPlatformCryptoResult __thiscall
FPlatformCryptoDecryptor_AES_Base_OpenSSL::Update
          (FPlatformCryptoDecryptor_AES_Base_OpenSSL *this,
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
      iVar1 = EVP_DecryptUpdate((this->EVPContext).Context,param_2->DataPtr,param_3,param_1->DataPtr
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

