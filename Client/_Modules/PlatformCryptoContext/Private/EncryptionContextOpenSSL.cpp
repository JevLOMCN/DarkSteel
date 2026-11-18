// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PlatformCryptoContext
// Functions: 36

// `dynamic_initializer_for_'LogPlatformCryptoOpenSSL'' @ 141445190

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogPlatformCryptoOpenSSL__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogPlatformCryptoOpenSSL,L"LogPlatformCryptoOpenSSL",Warning,All);
  atexit(_dynamic_atexit_destructor_for__LogPlatformCryptoOpenSSL__);
  return;
}

// DeleterFunc<FSHA256HasherOpenSSL::FImplDetails> @ 14ea10830

void __cdecl
UE::Core::Private::PimplPtr::DeleterFunc<FSHA256HasherOpenSSL::FImplDetails>(void *param_1)

{
  ::operator_delete(param_1,0x90);
  return;
}

// FSHA256HasherOpenSSL @ 14ea10840

/* WARNING: Enum "Type": Some values do not have unique names */

FSHA256HasherOpenSSL * __thiscall
FSHA256HasherOpenSSL::FSHA256HasherOpenSSL(FSHA256HasherOpenSSL *this)

{
  EState EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  FSHA256HasherOpenSSL *pFVar5;
  
  puVar4 = ::operator_new(0x90);
  if (puVar4 == (undefined8 *)0x0) {
    (this->Inner).Ptr = (FImplDetails *)0x10;
  }
  else {
    *puVar4 = UE::Core::Private::PimplPtr::DeleterFunc<FSHA256HasherOpenSSL::FImplDetails>;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[0xe] = 0;
    puVar4[0xf] = 0;
    *(undefined4 *)(puVar4 + 0x10) = 0;
    (this->Inner).Ptr = (FImplDetails *)(puVar4 + 2);
    if ((FImplDetails *)(puVar4 + 2) == (FImplDetails *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Inner",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PlatformCrypto\\Source\\PlatformCryptoContext\\Private\\EncryptionContextOpenSSL.cpp"
                         ,0x21,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FSHA256HasherOpenSSL *)(*pcVar2)();
        return pFVar5;
      }
    }
  }
  EVar1 = ((this->Inner).Ptr)->State;
  if (EVar1 == ReadyNeedsFinalize) {
    if (2 < (byte)LogPlatformCryptoOpenSSL._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPlatformCryptoOpenSSL)
      ;
      return this;
    }
  }
  else if (EVar1 != Ready) {
    SHA256_Init();
    ((this->Inner).Ptr)->State = Ready;
  }
  return this;
}

// CalcSHA256 @ 14ea10920

/* WARNING: Removing unreachable block (ram,0x00014ea10b2c) */
/* WARNING: Removing unreachable block (ram,0x00014ea10b30) */
/* WARNING: Removing unreachable block (ram,0x00014ea10b4a) */
/* WARNING: Removing unreachable block (ram,0x00014ea10b4e) */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FEncryptionContextOpenSSL::CalcSHA256
          (FEncryptionContextOpenSSL *this,TArrayView<unsigned_char_const_,int> *param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  FStaticBasicLogRecord *pFVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  puVar7 = ::operator_new(0x90);
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
    puVar10 = (undefined8 *)&DAT_00000010;
  }
  else {
    puVar7[1] = 0;
    *puVar7 = UE::Core::Private::PimplPtr::DeleterFunc<FSHA256HasherOpenSSL::FImplDetails>;
    puVar10 = puVar7 + 2;
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar7[6] = 0;
    puVar7[7] = 0;
    puVar7[8] = 0;
    puVar7[9] = 0;
    puVar7[10] = 0;
    puVar7[0xb] = 0;
    puVar7[0xc] = 0;
    puVar7[0xd] = 0;
    puVar7[0xe] = 0;
    puVar7[0xf] = 0;
    *(undefined4 *)(puVar7 + 0x10) = 0;
    if ((puVar10 == (undefined8 *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Inner",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PlatformCrypto\\Source\\PlatformCryptoContext\\Private\\EncryptionContextOpenSSL.cpp"
                           ,0x21,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  iVar9 = *(int *)(puVar10 + 0xe);
  if (iVar9 == 2) {
    if (2 < (byte)LogPlatformCryptoOpenSSL._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPlatformCryptoOpenSSL)
      ;
      iVar9 = *(int *)(puVar10 + 0xe);
    }
LAB_14ea109f3:
    if (iVar9 != 2) {
      if (iVar9 != 1) goto LAB_14ea10a41;
      uVar11 = *(undefined4 *)&param_1->DataPtr;
      uVar12 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
      goto LAB_14ea10a59;
    }
    if (2 < (byte)LogPlatformCryptoOpenSSL._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPlatformCryptoOpenSSL)
      ;
    }
    if (5 < (byte)LogPlatformCryptoOpenSSL._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPlatformCryptoOpenSSL)
      ;
      bVar5 = false;
      goto LAB_14ea10bb6;
    }
  }
  else {
    if (iVar9 == 1) goto LAB_14ea109f3;
LAB_14ea10a41:
    SHA256_Init(puVar10);
    uVar11 = *(undefined4 *)&param_1->DataPtr;
    uVar12 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
    *(undefined4 *)(puVar10 + 0xe) = 1;
LAB_14ea10a59:
    SHA256_Update(puVar10,CONCAT44(uVar12,uVar11));
    *(undefined4 *)(puVar10 + 0xe) = 2;
    piVar1 = &param_2->ArrayMax;
    piVar2 = &param_2->ArrayNum;
    *piVar2 = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&param_2->AllocatorInstance,0,piVar1);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0x20,&param_2->AllocatorInstance,piVar2,piVar1);
    iVar9 = *piVar2;
    pFVar3 = (param_2->AllocatorInstance).Data;
    if ((iVar9 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    if (*(int *)(puVar10 + 0xe) == 0) {
      if (2 < (byte)LogPlatformCryptoOpenSSL._0_1_) {
        pFVar8 = &::LOG_Static;
LAB_14ea10b7a:
        UE::Logging::Private::BasicLog<3>(pFVar8,(FLogCategoryBase *)&LogPlatformCryptoOpenSSL);
      }
    }
    else {
      if (0x1f < iVar9) {
        SHA256_Final(pFVar3,puVar10);
        *(undefined4 *)(puVar10 + 0xe) = 0;
        bVar5 = true;
        goto LAB_14ea10bb6;
      }
      if (2 < (byte)LogPlatformCryptoOpenSSL._0_1_) {
        pFVar8 = &::LOG_Static;
        goto LAB_14ea10b7a;
      }
    }
    if (5 < (byte)LogPlatformCryptoOpenSSL._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPlatformCryptoOpenSSL)
      ;
    }
  }
  bVar5 = false;
LAB_14ea10bb6:
  (*(code *)*puVar7)(puVar7);
  return bVar5;
}

// CreateDecryptor_AES_256_CBC @ 14ea10be0

TUniquePtr<IPlatformCryptoDecryptor,TDefaultDelete<IPlatformCryptoDecryptor>_> __thiscall
FEncryptionContextOpenSSL::CreateDecryptor_AES_256_CBC
          (FEncryptionContextOpenSSL *this,TArrayView<unsigned_char_const_,int> *param_1,
          TArrayView<unsigned_char_const_,int> *param_2)

{
  TArrayView<unsigned_char_const_,int> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  FPlatformCryptoDecryptor_AES_256_CBC_OpenSSL::Create(param_1,&local_18);
  return (TUniquePtr<IPlatformCryptoDecryptor,TDefaultDelete<IPlatformCryptoDecryptor>_>)
         (IPlatformCryptoDecryptor *)param_1;
}

// CreateDecryptor_AES_256_ECB @ 14ea10c20

TUniquePtr<IPlatformCryptoDecryptor,TDefaultDelete<IPlatformCryptoDecryptor>_> __thiscall
FEncryptionContextOpenSSL::CreateDecryptor_AES_256_ECB
          (FEncryptionContextOpenSSL *this,TArrayView<unsigned_char_const_,int> *param_1)

{
  FPlatformCryptoDecryptor_AES_256_ECB_OpenSSL::Create(param_1);
  return (TUniquePtr<IPlatformCryptoDecryptor,TDefaultDelete<IPlatformCryptoDecryptor>_>)
         (IPlatformCryptoDecryptor *)param_1;
}

// CreateDecryptor_AES_256_GCM @ 14ea10c50

TUniquePtr<IPlatformCryptoDecryptor,TDefaultDelete<IPlatformCryptoDecryptor>_> __thiscall
FEncryptionContextOpenSSL::CreateDecryptor_AES_256_GCM
          (FEncryptionContextOpenSSL *this,TArrayView<unsigned_char_const_,int> *param_1,
          TArrayView<unsigned_char_const_,int> *param_2,
          TArrayView<unsigned_char_const_,int> *param_3)

{
  TArrayView<unsigned_char_const_,int> local_28;
  TArrayView<unsigned_char_const_,int> local_18;
  
  local_28.DataPtr = param_3->DataPtr;
  local_28.ArrayNum = param_3->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_3->field_0xc;
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  FPlatformCryptoDecryptor_AES_256_GCM_OpenSSL::Create(param_1,&local_18,&local_28);
  return (TUniquePtr<IPlatformCryptoDecryptor,TDefaultDelete<IPlatformCryptoDecryptor>_>)
         (IPlatformCryptoDecryptor *)param_1;
}

// CreateEncryptor_AES_256_CBC @ 14ea10cb0

TUniquePtr<IPlatformCryptoEncryptor,TDefaultDelete<IPlatformCryptoEncryptor>_> __thiscall
FEncryptionContextOpenSSL::CreateEncryptor_AES_256_CBC
          (FEncryptionContextOpenSSL *this,TArrayView<unsigned_char_const_,int> *param_1,
          TArrayView<unsigned_char_const_,int> *param_2)

{
  TArrayView<unsigned_char_const_,int> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  FPlatformCryptoEncryptor_AES_256_CBC_OpenSSL::Create(param_1,&local_18);
  return (TUniquePtr<IPlatformCryptoEncryptor,TDefaultDelete<IPlatformCryptoEncryptor>_>)
         (IPlatformCryptoEncryptor *)param_1;
}

// CreateEncryptor_AES_256_ECB @ 14ea10cf0

TUniquePtr<IPlatformCryptoEncryptor,TDefaultDelete<IPlatformCryptoEncryptor>_> __thiscall
FEncryptionContextOpenSSL::CreateEncryptor_AES_256_ECB
          (FEncryptionContextOpenSSL *this,TArrayView<unsigned_char_const_,int> *param_1)

{
  FPlatformCryptoEncryptor_AES_256_ECB_OpenSSL::Create(param_1);
  return (TUniquePtr<IPlatformCryptoEncryptor,TDefaultDelete<IPlatformCryptoEncryptor>_>)
         (IPlatformCryptoEncryptor *)param_1;
}

// CreateEncryptor_AES_256_GCM @ 14ea10d20

TUniquePtr<IPlatformCryptoEncryptor,TDefaultDelete<IPlatformCryptoEncryptor>_> __thiscall
FEncryptionContextOpenSSL::CreateEncryptor_AES_256_GCM
          (FEncryptionContextOpenSSL *this,TArrayView<unsigned_char_const_,int> *param_1,
          TArrayView<unsigned_char_const_,int> *param_2)

{
  TArrayView<unsigned_char_const_,int> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  FPlatformCryptoEncryptor_AES_256_GCM_OpenSSL::Create(param_1,&local_18);
  return (TUniquePtr<IPlatformCryptoEncryptor,TDefaultDelete<IPlatformCryptoEncryptor>_>)
         (IPlatformCryptoEncryptor *)param_1;
}

// CreateKey_RSA @ 14ea10d60

void * __thiscall
FEncryptionContextOpenSSL::CreateKey_RSA
          (FEncryptionContextOpenSSL *this,TArrayView<unsigned_char_const_,int> *param_1,
          TArrayView<unsigned_char_const_,int> *param_2,
          TArrayView<unsigned_char_const_,int> *param_3)

{
  int iVar1;
  void *pvVar2;
  bignum_st *pbVar3;
  bignum_st *pbVar4;
  bignum_st *pbVar5;
  
  pvVar2 = (void *)RSA_new();
  pbVar4 = (bignum_st *)0x0;
  pbVar3 = pbVar4;
  if (0 < param_1->ArrayNum) {
    pbVar3 = (bignum_st *)BN_new();
  }
  iVar1 = param_2->ArrayNum;
  if (0 < iVar1) {
    pbVar4 = (bignum_st *)BN_new();
  }
  pbVar5 = (bignum_st *)BN_new();
  if (param_1->ArrayNum != 0) {
    FPlatformCryptoUtilsOpenSSL::LoadBinaryIntoBigNum(param_1->DataPtr,param_1->ArrayNum,pbVar3);
  }
  if (iVar1 != 0) {
    FPlatformCryptoUtilsOpenSSL::LoadBinaryIntoBigNum(param_2->DataPtr,iVar1,pbVar4);
  }
  FPlatformCryptoUtilsOpenSSL::LoadBinaryIntoBigNum(param_3->DataPtr,param_3->ArrayNum,pbVar5);
  RSA_set0_key(pvVar2,pbVar5,pbVar3,pbVar4);
  return pvVar2;
}

// CreatePseudoRandomBytes @ 14ea10e30

EPlatformCryptoResult __thiscall
FEncryptionContextOpenSSL::CreatePseudoRandomBytes
          (FEncryptionContextOpenSSL *this,TArrayView<unsigned_char,int> *param_1)

{
  int iVar1;
  
  iVar1 = RAND_bytes(param_1->DataPtr,*(undefined8 *)&param_1->ArrayNum);
  return (EPlatformCryptoResult)(iVar1 != 1);
}

// CreateRandomBytes @ 14ea10e60

EPlatformCryptoResult __thiscall
FEncryptionContextOpenSSL::CreateRandomBytes
          (FEncryptionContextOpenSSL *this,TArrayView<unsigned_char,int> *param_1)

{
  int iVar1;
  
  iVar1 = RAND_bytes(param_1->DataPtr,param_1->ArrayNum);
  return (EPlatformCryptoResult)(iVar1 != 1);
}

// CreateSHA256Hasher @ 14ea10e90

/* WARNING: Enum "Type": Some values do not have unique names */

FSHA256HasherOpenSSL __thiscall
FEncryptionContextOpenSSL::CreateSHA256Hasher(FEncryptionContextOpenSSL *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  FSHA256HasherOpenSSL FVar5;
  TPimplPtr<FSHA256HasherOpenSSL::FImplDetails,0> in_RDX;
  
  puVar4 = ::operator_new(0x90);
  if (puVar4 == (undefined8 *)0x0) {
    ((in_RDX.Ptr)->Ctx).h[0] = 0x10;
    ((in_RDX.Ptr)->Ctx).h[1] = 0;
  }
  else {
    *puVar4 = UE::Core::Private::PimplPtr::DeleterFunc<FSHA256HasherOpenSSL::FImplDetails>;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[0xe] = 0;
    puVar4[0xf] = 0;
    *(undefined4 *)(puVar4 + 0x10) = 0;
    *(undefined8 **)((in_RDX.Ptr)->Ctx).h = puVar4 + 2;
    if (puVar4 + 2 == (undefined8 *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Inner",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PlatformCrypto\\Source\\PlatformCryptoContext\\Private\\EncryptionContextOpenSSL.cpp"
                         ,0x21,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        FVar5.Inner.Ptr = (TPimplPtr<FSHA256HasherOpenSSL::FImplDetails,0>)(*pcVar2)();
        return (FSHA256HasherOpenSSL)FVar5.Inner.Ptr;
      }
    }
  }
  iVar1 = *(int *)(*(longlong *)((in_RDX.Ptr)->Ctx).h + 0x70);
  if (iVar1 == 2) {
    if (2 < (byte)LogPlatformCryptoOpenSSL._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPlatformCryptoOpenSSL)
      ;
      return (FSHA256HasherOpenSSL)(TPimplPtr<FSHA256HasherOpenSSL::FImplDetails,0>)in_RDX.Ptr;
    }
  }
  else if (iVar1 != 1) {
    SHA256_Init();
    *(undefined4 *)(*(longlong *)((in_RDX.Ptr)->Ctx).h + 0x70) = 1;
  }
  return (FSHA256HasherOpenSSL)(TPimplPtr<FSHA256HasherOpenSSL::FImplDetails,0>)in_RDX.Ptr;
}

// DecryptPrivate_RSA @ 14ea10f70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
FEncryptionContextOpenSSL::DecryptPrivate_RSA
          (FEncryptionContextOpenSSL *this,TArrayView<unsigned_char_const_,int> *param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2,void *param_3)

{
  int iVar1;
  
  iVar1 = RSA_size(param_3);
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum(param_2,iVar1 + -0xb,Default);
  iVar1 = RSA_private_decrypt(param_1->ArrayNum,param_1->DataPtr,(param_2->AllocatorInstance).Data,
                              param_3,1);
  if (iVar1 == -1) {
    param_2->ArrayNum = 0;
    if (param_2->ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
      return -1;
    }
  }
  else {
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum(param_2,iVar1,Default);
  }
  return iVar1;
}

// DecryptPublic_RSA @ 14ea11020

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
FEncryptionContextOpenSSL::DecryptPublic_RSA
          (FEncryptionContextOpenSSL *this,TArrayView<unsigned_char_const_,int> *param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2,void *param_3)

{
  int iVar1;
  
  iVar1 = RSA_size(param_3);
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum(param_2,iVar1 + -0xb,Default);
  iVar1 = RSA_public_decrypt(param_1->ArrayNum,param_1->DataPtr,(param_2->AllocatorInstance).Data,
                             param_3,1);
  if (iVar1 == -1) {
    param_2->ArrayNum = 0;
    if (param_2->ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
      return -1;
    }
  }
  else {
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum(param_2,iVar1,Default);
  }
  return iVar1;
}

// Decrypt_AES_256_CBC @ 14ea110d0

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
FEncryptionContextOpenSSL::Decrypt_AES_256_CBC
          (FEncryptionContextOpenSSL *this,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArrayView<unsigned_char_const_,int> *param_1,
          TArrayView<unsigned_char_const_,int> *param_2,
          TArrayView<unsigned_char_const_,int> *param_3,EPlatformCryptoResult *param_4)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  EPlatformCryptoResult *pEVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uchar *puVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<_public:_class_TArray<unsigned_char,TSizedDefaultAllocator<32>_>___cdecl_FEncryptionContextOpenSSL::Decrypt_AES_256_CBC(TArrayView<unsigned_char_const_,int>,TArrayView<unsigned_char_const_,int>,TArrayView<unsigned_char_const_,int>,EPlatformCryptoResult_&)_::_2_::FStat_STAT_OpenSSL_AES256_CBC_Decrypt>
  FVar13;
  FThreadStats *this_00;
  FThreadStatsPool *pFVar14;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar15;
  FStatMessage *pFVar16;
  FNameEntryId FVar17;
  uint uVar18;
  FName FVar19;
  uint uVar20;
  uint uVar21;
  int local_res20 [2];
  ForAnyElementType local_158;
  undefined8 local_150;
  TArrayView<unsigned_char_const_,int> local_148;
  LARGE_INTEGER local_138;
  FColor_u_0 local_130 [2];
  FName local_128;
  FName local_120;
  LARGE_INTEGER local_110;
  FStatMessage local_108;
  FStatMessage local_f8;
  FStatMessage local_e8;
  FStatMessage local_d8;
  undefined8 local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  FName local_a8;
  FName local_a0;
  uchar *local_98;
  undefined8 uStack_90;
  TArrayView<unsigned_char_const_,int> local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_OpenSSL_AES256_CBC_Decrypt ==
          (FThreadSafeStaticStat<_public:_class_TArray<unsigned_char,TSizedDefaultAllocator<32>_>___cdecl_FEncryptionContextOpenSSL::Decrypt_AES_256_CBC(TArrayView<unsigned_char_const_,int>,TArrayView<unsigned_char_const_,int>,TArrayView<unsigned_char_const_,int>,EPlatformCryptoResult_&)_::_2_::FStat_STAT_OpenSSL_AES256_CBC_Decrypt>
           )0x0) {
        pFVar12 = ::FName::FName(&local_a8,"STAT_OpenSSL_AES256_CBC_Decrypt");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenSSL_AES256_CBC_Decrypt,*pFVar12,
                   L"OpenSSL AES256 CBC Decrypt","STATGROUP_PlatformCrypto","STATCAT_Advanced",
                   L"PlatformCrypto",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar13 = StatPtr_STAT_OpenSSL_AES256_CBC_Decrypt;
  if (StatPtr_STAT_OpenSSL_AES256_CBC_Decrypt ==
      (FThreadSafeStaticStat<_public:_class_TArray<unsigned_char,TSizedDefaultAllocator<32>_>___cdecl_FEncryptionContextOpenSSL::Decrypt_AES_256_CBC(TArrayView<unsigned_char_const_,int>,TArrayView<unsigned_char_const_,int>,TArrayView<unsigned_char_const_,int>,EPlatformCryptoResult_&)_::_2_::FStat_STAT_OpenSSL_AES256_CBC_Decrypt>
       )0x0) {
    pFVar12 = ::FName::FName(&local_a0,"STAT_OpenSSL_AES256_CBC_Decrypt");
    FVar13 = (FThreadSafeStaticStat<_public:_class_TArray<unsigned_char,TSizedDefaultAllocator<32>_>___cdecl_FEncryptionContextOpenSSL::Decrypt_AES_256_CBC(TArrayView<unsigned_char_const_,int>,TArrayView<unsigned_char_const_,int>,TArrayView<unsigned_char_const_,int>,EPlatformCryptoResult_&)_::_2_::FStat_STAT_OpenSSL_AES256_CBC_Decrypt>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenSSL_AES256_CBC_Decrypt,
                          *pFVar12,L"OpenSSL AES256 CBC Decrypt","STATGROUP_PlatformCrypto",
                          "STATCAT_Advanced",L"PlatformCrypto",true,true,ST_int64,true,false,
                          MCR_Invalid);
  }
  FVar19 = *(FName *)FVar13;
  bVar5 = false;
  bVar7 = false;
  local_120.ComparisonIndex.Value = 0;
  local_120.Number = 0;
  FVar17 = FVar19.ComparisonIndex.Value;
  uVar18 = FVar19.Number;
  if ((FVar17.Value == 0) && (uVar18 == 0)) {
LAB_14ea11235:
    bVar6 = false;
    FVar19 = local_120;
    pEVar4 = param_4;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_130[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_130[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_128.ComparisonIndex.Value = FVar17.Value;
        local_128.Number = uVar18;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_128,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PlatformCrypto\\Source\\PlatformCryptoContext\\Private\\EncryptionContextOpenSSL.cpp"
                   ,0xeb);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14ea11235;
    local_138.s.LowPart = FVar17.Value;
    local_138.s.HighPart = uVar18;
    FThreadStats::AddMessage(FVar19,CycleScopeStart);
    bVar6 = true;
    pEVar4 = param_4;
  }
  local_88.DataPtr = param_2->DataPtr;
  local_88.ArrayNum = param_2->ArrayNum;
  local_88._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_98 = param_3->DataPtr;
  uStack_90 = *(undefined8 *)&param_3->ArrayNum;
  *pEVar4 = Failure;
  param_4 = pEVar4;
  FPlatformCryptoDecryptor_AES_256_CBC_OpenSSL::Create(&local_148,&local_88);
  puVar8 = local_148.DataPtr;
  FVar17 = FVar19.ComparisonIndex.Value;
  uVar18 = FVar19.Number;
  if ((longlong *)local_148.DataPtr == (longlong *)0x0) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    if (bVar7) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar5) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (!bVar6) {
      return __return_storage_ptr__;
    }
    if (FVar19 == (FName)0x0) {
      return __return_storage_ptr__;
    }
    if (FThreadStats::bPrimaryDisableForever != false) {
      return __return_storage_ptr__;
    }
    if (FThreadStats::TlsSlot == 0xffffffff) {
      return __return_storage_ptr__;
    }
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      pFVar14 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(pFVar14);
    }
    if (this_00->ScopeCount <= this_00->bWaitForExplicitFlush) {
      return __return_storage_ptr__;
    }
    local_108.NameAndInfo.Number = uVar18 & 0xffff6fff | 0x6000;
    local_108.NameAndInfo.Index.Value = FVar17.Value;
    QueryPerformanceCounter((LARGE_INTEGER *)&param_4);
    local_108.StatData.Pad = (uchar  [8])((ulonglong)param_4 & 0xffffffff);
    pFVar16 = &local_108;
  }
  else {
    local_158.Data = (FScriptContainerElement *)0x0;
    local_150 = 0;
    lVar2 = *(longlong *)local_148.DataPtr;
    local_78 = *(undefined4 *)&param_1->DataPtr;
    uStack_74 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
    iStack_70 = param_1->ArrayNum;
    uStack_6c = *(undefined4 *)&param_1->field_0xc;
    iVar10 = (**(code **)(lVar2 + 0x30))(local_148.DataPtr,&local_78);
    iVar11 = (**(code **)(lVar2 + 0x40))(puVar8);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar10 + iVar11,&local_158,(int *)&local_150,(int *)((longlong)&local_150 + 4));
    puVar8 = local_148.DataPtr;
    iStack_c0 = (int)local_150;
    local_res20[0] = 0;
    pcVar3 = *(code **)(*(longlong *)local_148.DataPtr + 0x38);
    local_c8 = local_158.Data;
    if ((int)local_150 < 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar9) {
        pcVar3 = (code *)swi(3);
        pTVar15 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar15;
      }
    }
    local_68 = (undefined4)local_c8;
    uStack_64 = local_c8._4_4_;
    iStack_60 = iStack_c0;
    uStack_5c = uStack_bc;
    local_58 = *(undefined4 *)&param_1->DataPtr;
    uStack_54 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
    iStack_50 = param_1->ArrayNum;
    uStack_4c = *(undefined4 *)&param_1->field_0xc;
    iVar10 = (*pcVar3)(puVar8,&local_58,&local_68,local_res20);
    puVar8 = local_148.DataPtr;
    if (iVar10 != 0) {
      (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      __return_storage_ptr__->ArrayNum = 0;
      __return_storage_ptr__->ArrayMax = 0;
      if (local_158.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data);
      }
      if ((longlong *)local_148.DataPtr != (longlong *)0x0) {
        (*(code *)**(undefined8 **)local_148.DataPtr)(local_148.DataPtr,1);
      }
      if (bVar7) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar5) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (!bVar6) {
        return __return_storage_ptr__;
      }
      if (FVar19 == (FName)0x0) {
        return __return_storage_ptr__;
      }
      if (FThreadStats::bPrimaryDisableForever != false) {
        return __return_storage_ptr__;
      }
      if (FThreadStats::TlsSlot == 0xffffffff) {
        return __return_storage_ptr__;
      }
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        pFVar14 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(pFVar14);
      }
      if (this_00->ScopeCount <= this_00->bWaitForExplicitFlush) {
        return __return_storage_ptr__;
      }
      local_f8.NameAndInfo.Number = uVar18 & 0xffff6fff | 0x6000;
      local_f8.NameAndInfo.Index.Value = FVar17.Value;
      QueryPerformanceCounter((LARGE_INTEGER *)&param_3);
      local_f8.StatData.Pad = (uchar  [8])((ulonglong)param_3 & 0xffffffff);
      FThreadStats::AddStatMessage(this_00,&local_f8);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      iVar10 = *piVar1;
      goto joined_r0x00014ea114e1;
    }
    local_148.ArrayNum = 0;
    pcVar3 = *(code **)(*(longlong *)local_148.DataPtr + 0x48);
    local_b8 = local_158.Data + local_res20[0];
    iStack_b0 = (int)local_150 - local_res20[0];
    if (iStack_b0 < 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar9) {
        pcVar3 = (code *)swi(3);
        pTVar15 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar15;
      }
    }
    local_48 = (undefined4)local_b8;
    uStack_44 = local_b8._4_4_;
    iStack_40 = iStack_b0;
    uStack_3c = uStack_ac;
    iVar10 = (*pcVar3)(puVar8,&local_48);
    if (iVar10 == 0) {
      uVar21 = local_148.ArrayNum + local_res20[0];
      if ((int)local_150 < (int)uVar21) {
        iVar11 = uVar21 - (int)local_150;
        iVar10 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (1,1,iVar11,&local_158,(int *)&local_150,
                            (int *)((longlong)&local_150 + 4));
        memset(local_158.Data + iVar10,0,(longlong)iVar11);
LAB_14ea11736:
        iVar10 = (int)local_150;
      }
      else {
        if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
        }
        iVar10 = (int)local_150;
        if ((int)uVar21 < (int)local_150) {
          uVar20 = (int)local_150 - uVar21;
          if ((int)(uVar20 | uVar21) < 0) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              );
            if (bVar9) {
              pcVar3 = (code *)swi(3);
              pTVar15 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
              return pTVar15;
            }
            iVar10 = (int)local_150;
          }
          if (uVar20 != 0) {
            iVar11 = (iVar10 - uVar20) - uVar21;
            if (iVar11 != 0) {
              memmove(local_158.Data + (int)uVar21,local_158.Data + (int)uVar21 + (int)uVar20,
                      (longlong)iVar11);
              iVar10 = (int)local_150;
            }
            local_150 = CONCAT44(local_150._4_4_,iVar10 - uVar20);
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,&local_158,iVar10 - uVar20,(int *)((longlong)&local_150 + 4));
            goto LAB_14ea11736;
          }
        }
      }
      *pEVar4 = Success;
      (__return_storage_ptr__->AllocatorInstance).Data = local_158.Data;
      __return_storage_ptr__->ArrayNum = iVar10;
      local_158.Data = (FScriptContainerElement *)0x0;
      __return_storage_ptr__->ArrayMax = local_150._4_4_;
      local_150 = 0;
      if ((longlong *)local_148.DataPtr != (longlong *)0x0) {
        (*(code *)**(undefined8 **)local_148.DataPtr)(local_148.DataPtr,1);
      }
      if (bVar7) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar5) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (!bVar6) {
        return __return_storage_ptr__;
      }
      if (FVar19 == (FName)0x0) {
        return __return_storage_ptr__;
      }
      if (FThreadStats::bPrimaryDisableForever != false) {
        return __return_storage_ptr__;
      }
      if (FThreadStats::TlsSlot == 0xffffffff) {
        return __return_storage_ptr__;
      }
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        pFVar14 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(pFVar14);
      }
      if (this_00->ScopeCount <= this_00->bWaitForExplicitFlush) {
        return __return_storage_ptr__;
      }
      local_d8.NameAndInfo.Number = uVar18 & 0xffff6fff | 0x6000;
      local_d8.NameAndInfo.Index.Value = FVar17.Value;
      QueryPerformanceCounter(&local_110);
      local_d8.StatData.Pad[4] = '\0';
      local_d8.StatData.Pad[5] = '\0';
      local_d8.StatData.Pad[6] = '\0';
      local_d8.StatData.Pad[7] = '\0';
      local_d8.StatData.Pad[0] = local_110.s.LowPart._0_1_;
      local_d8.StatData.Pad[1] = local_110.s.LowPart._1_1_;
      local_d8.StatData.Pad[2] = local_110.s.LowPart._2_1_;
      local_d8.StatData.Pad[3] = local_110.s.LowPart._3_1_;
      pFVar16 = &local_d8;
    }
    else {
      (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      __return_storage_ptr__->ArrayNum = 0;
      __return_storage_ptr__->ArrayMax = 0;
      if (local_158.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data);
      }
      if ((longlong *)local_148.DataPtr != (longlong *)0x0) {
        (*(code *)**(undefined8 **)local_148.DataPtr)(local_148.DataPtr,1);
      }
      if (bVar7) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar5) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (!bVar6) {
        return __return_storage_ptr__;
      }
      if (FVar19 == (FName)0x0) {
        return __return_storage_ptr__;
      }
      if (FThreadStats::bPrimaryDisableForever != false) {
        return __return_storage_ptr__;
      }
      if (FThreadStats::TlsSlot == 0xffffffff) {
        return __return_storage_ptr__;
      }
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        pFVar14 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(pFVar14);
      }
      if (this_00->ScopeCount <= this_00->bWaitForExplicitFlush) {
        return __return_storage_ptr__;
      }
      local_e8.NameAndInfo.Number = uVar18 & 0xffff6fff | 0x6000;
      local_e8.NameAndInfo.Index.Value = FVar17.Value;
      QueryPerformanceCounter(&local_138);
      local_e8.StatData.Pad[4] = '\0';
      local_e8.StatData.Pad[5] = '\0';
      local_e8.StatData.Pad[6] = '\0';
      local_e8.StatData.Pad[7] = '\0';
      local_e8.StatData.Pad[0] = local_138.s.LowPart._0_1_;
      local_e8.StatData.Pad[1] = local_138.s.LowPart._1_1_;
      local_e8.StatData.Pad[2] = local_138.s.LowPart._2_1_;
      local_e8.StatData.Pad[3] = local_138.s.LowPart._3_1_;
      pFVar16 = &local_e8;
    }
  }
  FThreadStats::AddStatMessage(this_00,pFVar16);
  piVar1 = &this_00->ScopeCount;
  *piVar1 = *piVar1 + -1;
  iVar10 = *piVar1;
joined_r0x00014ea114e1:
  if (iVar10 == 0) {
    FThreadStats::Flush(this_00,false,false);
  }
  else if (FThreadStats::bIsRawStatsActive != false) {
    FThreadStats::FlushRawStats(this_00,false,false);
  }
  return __return_storage_ptr__;
}

// Decrypt_AES_256_ECB @ 14ea11900

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
FEncryptionContextOpenSSL::Decrypt_AES_256_ECB
          (FEncryptionContextOpenSSL *this,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArrayView<unsigned_char_const_,int> *param_1,
          TArrayView<unsigned_char_const_,int> *param_2,EPlatformCryptoResult *param_3)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  EPlatformCryptoResult *pEVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uchar *puVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<_public:_class_TArray<unsigned_char,TSizedDefaultAllocator<32>_>___cdecl_FEncryptionContextOpenSSL::Decrypt_AES_256_ECB(TArrayView<unsigned_char_const_,int>,TArrayView<unsigned_char_const_,int>,EPlatformCryptoResult_&)_::_2_::FStat_STAT_OpenSSL_AES256_ECB_Decrypt>
  FVar13;
  FThreadStats *this_00;
  FThreadStatsPool *pFVar14;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar15;
  FStatMessage *pFVar16;
  FNameEntryId FVar17;
  uint uVar18;
  FName FVar19;
  uint uVar20;
  uint uVar21;
  int local_res20 [2];
  ForAnyElementType local_158;
  undefined8 local_150;
  TArrayView<unsigned_char_const_,int> local_148;
  LARGE_INTEGER local_138;
  FColor_u_0 local_130 [2];
  FName local_128;
  FName local_120;
  LARGE_INTEGER local_110;
  LARGE_INTEGER local_108;
  FStatMessage local_100;
  FStatMessage local_f0;
  FStatMessage local_e0;
  FStatMessage local_d0;
  undefined8 local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  FName local_98;
  FName local_90;
  uchar *local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_OpenSSL_AES256_ECB_Decrypt ==
          (FThreadSafeStaticStat<_public:_class_TArray<unsigned_char,TSizedDefaultAllocator<32>_>___cdecl_FEncryptionContextOpenSSL::Decrypt_AES_256_ECB(TArrayView<unsigned_char_const_,int>,TArrayView<unsigned_char_const_,int>,EPlatformCryptoResult_&)_::_2_::FStat_STAT_OpenSSL_AES256_ECB_Decrypt>
           )0x0) {
        pFVar12 = ::FName::FName(&local_98,"STAT_OpenSSL_AES256_ECB_Decrypt");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenSSL_AES256_ECB_Decrypt,*pFVar12,
                   L"OpenSSL AES256 ECB Decrypt","STATGROUP_PlatformCrypto","STATCAT_Advanced",
                   L"PlatformCrypto",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar13 = StatPtr_STAT_OpenSSL_AES256_ECB_Decrypt;
  if (StatPtr_STAT_OpenSSL_AES256_ECB_Decrypt ==
      (FThreadSafeStaticStat<_public:_class_TArray<unsigned_char,TSizedDefaultAllocator<32>_>___cdecl_FEncryptionContextOpenSSL::Decrypt_AES_256_ECB(TArrayView<unsigned_char_const_,int>,TArrayView<unsigned_char_const_,int>,EPlatformCryptoResult_&)_::_2_::FStat_STAT_OpenSSL_AES256_ECB_Decrypt>
       )0x0) {
    pFVar12 = ::FName::FName(&local_90,"STAT_OpenSSL_AES256_ECB_Decrypt");
    FVar13 = (FThreadSafeStaticStat<_public:_class_TArray<unsigned_char,TSizedDefaultAllocator<32>_>___cdecl_FEncryptionContextOpenSSL::Decrypt_AES_256_ECB(TArrayView<unsigned_char_const_,int>,TArrayView<unsigned_char_const_,int>,EPlatformCryptoResult_&)_::_2_::FStat_STAT_OpenSSL_AES256_ECB_Decrypt>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenSSL_AES256_ECB_Decrypt,
                          *pFVar12,L"OpenSSL AES256 ECB Decrypt","STATGROUP_PlatformCrypto",
                          "STATCAT_Advanced",L"PlatformCrypto",true,true,ST_int64,true,false,
                          MCR_Invalid);
  }
  FVar19 = *(FName *)FVar13;
  bVar5 = false;
  bVar7 = false;
  local_120.ComparisonIndex.Value = 0;
  local_120.Number = 0;
  FVar17 = FVar19.ComparisonIndex.Value;
  uVar18 = FVar19.Number;
  if ((FVar17.Value == 0) && (uVar18 == 0)) {
LAB_14ea11a65:
    bVar6 = false;
    FVar19 = local_120;
    pEVar4 = param_3;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_130[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_130[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_128.ComparisonIndex.Value = FVar17.Value;
        local_128.Number = uVar18;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_128,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PlatformCrypto\\Source\\PlatformCryptoContext\\Private\\EncryptionContextOpenSSL.cpp"
                   ,0xc9);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14ea11a65;
    local_138.s.LowPart = FVar17.Value;
    local_138.s.HighPart = uVar18;
    FThreadStats::AddMessage(FVar19,CycleScopeStart);
    bVar6 = true;
    pEVar4 = param_3;
  }
  local_88 = param_2->DataPtr;
  uStack_80 = *(undefined8 *)&param_2->ArrayNum;
  *pEVar4 = Failure;
  param_3 = pEVar4;
  FPlatformCryptoDecryptor_AES_256_ECB_OpenSSL::Create(&local_148);
  puVar8 = local_148.DataPtr;
  FVar17 = FVar19.ComparisonIndex.Value;
  uVar18 = FVar19.Number;
  if ((longlong *)local_148.DataPtr == (longlong *)0x0) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    if (bVar7) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar5) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (!bVar6) {
      return __return_storage_ptr__;
    }
    if (FVar19 == (FName)0x0) {
      return __return_storage_ptr__;
    }
    if (FThreadStats::bPrimaryDisableForever != false) {
      return __return_storage_ptr__;
    }
    if (FThreadStats::TlsSlot == 0xffffffff) {
      return __return_storage_ptr__;
    }
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      pFVar14 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(pFVar14);
    }
    if (this_00->ScopeCount <= this_00->bWaitForExplicitFlush) {
      return __return_storage_ptr__;
    }
    local_100.NameAndInfo.Number = uVar18 & 0xffff6fff | 0x6000;
    local_100.NameAndInfo.Index.Value = FVar17.Value;
    QueryPerformanceCounter((LARGE_INTEGER *)&param_3);
    local_100.StatData.Pad = (uchar  [8])((ulonglong)param_3 & 0xffffffff);
    pFVar16 = &local_100;
  }
  else {
    local_158.Data = (FScriptContainerElement *)0x0;
    local_150 = 0;
    lVar2 = *(longlong *)local_148.DataPtr;
    local_78 = *(undefined4 *)&param_1->DataPtr;
    uStack_74 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
    iStack_70 = param_1->ArrayNum;
    uStack_6c = *(undefined4 *)&param_1->field_0xc;
    iVar10 = (**(code **)(lVar2 + 0x30))(local_148.DataPtr,&local_78);
    iVar11 = (**(code **)(lVar2 + 0x40))(puVar8);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar10 + iVar11,&local_158,(int *)&local_150,(int *)((longlong)&local_150 + 4));
    puVar8 = local_148.DataPtr;
    iStack_b0 = (int)local_150;
    local_res20[0] = 0;
    pcVar3 = *(code **)(*(longlong *)local_148.DataPtr + 0x38);
    local_b8 = local_158.Data;
    if ((int)local_150 < 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar9) {
        pcVar3 = (code *)swi(3);
        pTVar15 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar15;
      }
    }
    local_68 = (undefined4)local_b8;
    uStack_64 = local_b8._4_4_;
    iStack_60 = iStack_b0;
    uStack_5c = uStack_ac;
    local_58 = *(undefined4 *)&param_1->DataPtr;
    uStack_54 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
    iStack_50 = param_1->ArrayNum;
    uStack_4c = *(undefined4 *)&param_1->field_0xc;
    iVar10 = (*pcVar3)(puVar8,&local_58,&local_68,local_res20);
    puVar8 = local_148.DataPtr;
    if (iVar10 != 0) {
      (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      __return_storage_ptr__->ArrayNum = 0;
      __return_storage_ptr__->ArrayMax = 0;
      if (local_158.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data);
      }
      if ((longlong *)local_148.DataPtr != (longlong *)0x0) {
        (*(code *)**(undefined8 **)local_148.DataPtr)(local_148.DataPtr,1);
      }
      if (bVar7) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar5) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (!bVar6) {
        return __return_storage_ptr__;
      }
      if (FVar19 == (FName)0x0) {
        return __return_storage_ptr__;
      }
      if (FThreadStats::bPrimaryDisableForever != false) {
        return __return_storage_ptr__;
      }
      if (FThreadStats::TlsSlot == 0xffffffff) {
        return __return_storage_ptr__;
      }
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        pFVar14 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(pFVar14);
      }
      if (this_00->ScopeCount <= this_00->bWaitForExplicitFlush) {
        return __return_storage_ptr__;
      }
      local_f0.NameAndInfo.Number = uVar18 & 0xffff6fff | 0x6000;
      local_f0.NameAndInfo.Index.Value = FVar17.Value;
      QueryPerformanceCounter(&local_138);
      local_f0.StatData.Pad[4] = '\0';
      local_f0.StatData.Pad[5] = '\0';
      local_f0.StatData.Pad[6] = '\0';
      local_f0.StatData.Pad[7] = '\0';
      local_f0.StatData.Pad[0] = local_138.s.LowPart._0_1_;
      local_f0.StatData.Pad[1] = local_138.s.LowPart._1_1_;
      local_f0.StatData.Pad[2] = local_138.s.LowPart._2_1_;
      local_f0.StatData.Pad[3] = local_138.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_f0);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      iVar10 = *piVar1;
      goto joined_r0x00014ea11cf9;
    }
    local_148.ArrayNum = 0;
    pcVar3 = *(code **)(*(longlong *)local_148.DataPtr + 0x48);
    local_a8 = local_158.Data + local_res20[0];
    iStack_a0 = (int)local_150 - local_res20[0];
    if (iStack_a0 < 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar9) {
        pcVar3 = (code *)swi(3);
        pTVar15 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar15;
      }
    }
    local_48 = (undefined4)local_a8;
    uStack_44 = local_a8._4_4_;
    iStack_40 = iStack_a0;
    uStack_3c = uStack_9c;
    iVar10 = (*pcVar3)(puVar8,&local_48);
    if (iVar10 == 0) {
      uVar21 = local_148.ArrayNum + local_res20[0];
      if ((int)local_150 < (int)uVar21) {
        iVar11 = uVar21 - (int)local_150;
        iVar10 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (1,1,iVar11,&local_158,(int *)&local_150,
                            (int *)((longlong)&local_150 + 4));
        memset(local_158.Data + iVar10,0,(longlong)iVar11);
LAB_14ea11f4e:
        iVar10 = (int)local_150;
      }
      else {
        if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
        }
        iVar10 = (int)local_150;
        if ((int)uVar21 < (int)local_150) {
          uVar20 = (int)local_150 - uVar21;
          if ((int)(uVar20 | uVar21) < 0) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              );
            if (bVar9) {
              pcVar3 = (code *)swi(3);
              pTVar15 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
              return pTVar15;
            }
            iVar10 = (int)local_150;
          }
          if (uVar20 != 0) {
            iVar11 = (iVar10 - uVar20) - uVar21;
            if (iVar11 != 0) {
              memmove(local_158.Data + (int)uVar21,local_158.Data + (int)uVar21 + (int)uVar20,
                      (longlong)iVar11);
              iVar10 = (int)local_150;
            }
            local_150 = CONCAT44(local_150._4_4_,iVar10 - uVar20);
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,&local_158,iVar10 - uVar20,(int *)((longlong)&local_150 + 4));
            goto LAB_14ea11f4e;
          }
        }
      }
      *pEVar4 = Success;
      (__return_storage_ptr__->AllocatorInstance).Data = local_158.Data;
      __return_storage_ptr__->ArrayNum = iVar10;
      local_158.Data = (FScriptContainerElement *)0x0;
      __return_storage_ptr__->ArrayMax = local_150._4_4_;
      local_150 = 0;
      if ((longlong *)local_148.DataPtr != (longlong *)0x0) {
        (*(code *)**(undefined8 **)local_148.DataPtr)(local_148.DataPtr,1);
      }
      if (bVar7) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar5) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (!bVar6) {
        return __return_storage_ptr__;
      }
      if (FVar19 == (FName)0x0) {
        return __return_storage_ptr__;
      }
      if (FThreadStats::bPrimaryDisableForever != false) {
        return __return_storage_ptr__;
      }
      if (FThreadStats::TlsSlot == 0xffffffff) {
        return __return_storage_ptr__;
      }
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        pFVar14 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(pFVar14);
      }
      if (this_00->ScopeCount <= this_00->bWaitForExplicitFlush) {
        return __return_storage_ptr__;
      }
      local_d0.NameAndInfo.Number = uVar18 & 0xffff6fff | 0x6000;
      local_d0.NameAndInfo.Index.Value = FVar17.Value;
      QueryPerformanceCounter(&local_108);
      local_d0.StatData.Pad[4] = '\0';
      local_d0.StatData.Pad[5] = '\0';
      local_d0.StatData.Pad[6] = '\0';
      local_d0.StatData.Pad[7] = '\0';
      local_d0.StatData.Pad[0] = local_108.s.LowPart._0_1_;
      local_d0.StatData.Pad[1] = local_108.s.LowPart._1_1_;
      local_d0.StatData.Pad[2] = local_108.s.LowPart._2_1_;
      local_d0.StatData.Pad[3] = local_108.s.LowPart._3_1_;
      pFVar16 = &local_d0;
    }
    else {
      (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      __return_storage_ptr__->ArrayNum = 0;
      __return_storage_ptr__->ArrayMax = 0;
      if (local_158.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data);
      }
      if ((longlong *)local_148.DataPtr != (longlong *)0x0) {
        (*(code *)**(undefined8 **)local_148.DataPtr)(local_148.DataPtr,1);
      }
      if (bVar7) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar5) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (!bVar6) {
        return __return_storage_ptr__;
      }
      if (FVar19 == (FName)0x0) {
        return __return_storage_ptr__;
      }
      if (FThreadStats::bPrimaryDisableForever != false) {
        return __return_storage_ptr__;
      }
      if (FThreadStats::TlsSlot == 0xffffffff) {
        return __return_storage_ptr__;
      }
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        pFVar14 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(pFVar14);
      }
      if (this_00->ScopeCount <= this_00->bWaitForExplicitFlush) {
        return __return_storage_ptr__;
      }
      local_e0.NameAndInfo.Number = uVar18 & 0xffff6fff | 0x6000;
      local_e0.NameAndInfo.Index.Value = FVar17.Value;
      QueryPerformanceCounter(&local_110);
      local_e0.StatData.Pad[4] = '\0';
      local_e0.StatData.Pad[5] = '\0';
      local_e0.StatData.Pad[6] = '\0';
      local_e0.StatData.Pad[7] = '\0';
      local_e0.StatData.Pad[0] = local_110.s.LowPart._0_1_;
      local_e0.StatData.Pad[1] = local_110.s.LowPart._1_1_;
      local_e0.StatData.Pad[2] = local_110.s.LowPart._2_1_;
      local_e0.StatData.Pad[3] = local_110.s.LowPart._3_1_;
      pFVar16 = &local_e0;
    }
  }
  FThreadStats::AddStatMessage(this_00,pFVar16);
  piVar1 = &this_00->ScopeCount;
  *piVar1 = *piVar1 + -1;
  iVar10 = *piVar1;
joined_r0x00014ea11cf9:
  if (iVar10 == 0) {
    FThreadStats::Flush(this_00,false,false);
  }
  else if (FThreadStats::bIsRawStatsActive != false) {
    FThreadStats::FlushRawStats(this_00,false,false);
  }
  return __return_storage_ptr__;
}

// Decrypt_AES_256_GCM @ 14ea12110

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
FEncryptionContextOpenSSL::Decrypt_AES_256_GCM
          (FEncryptionContextOpenSSL *this,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArrayView<unsigned_char_const_,int> *param_1,
          TArrayView<unsigned_char_const_,int> *param_2,
          TArrayView<unsigned_char_const_,int> *param_3,
          TArrayView<unsigned_char_const_,int> *param_4,EPlatformCryptoResult *param_5)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  EPlatformCryptoResult *pEVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uchar *puVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<_public:_class_TArray<unsigned_char,TSizedDefaultAllocator<32>_>___cdecl_FEncryptionContextOpenSSL::Decrypt_AES_256_GCM(TArrayView<unsigned_char_const_,int>,TArrayView<unsigned_char_const_,int>,TArrayView<unsigned_char_const_,int>,TArrayView<unsigned_char_const_,int>,EPlatformCryptoResult_&)_::_2_::FStat_STAT_OpenSSL_AES256_GCM_Decrypt>
  FVar13;
  FThreadStats *this_00;
  FThreadStatsPool *pFVar14;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar15;
  FStatMessage *pFVar16;
  FNameEntryId FVar17;
  uint uVar18;
  FName FVar19;
  uint uVar20;
  uint uVar21;
  int local_res20 [2];
  ForAnyElementType local_168;
  undefined8 local_160;
  TArrayView<unsigned_char_const_,int> local_158;
  LARGE_INTEGER local_148;
  FColor_u_0 local_140 [2];
  FName local_138;
  FName local_130;
  FStatMessage local_120;
  FStatMessage local_110;
  FStatMessage local_100;
  FStatMessage local_f0;
  undefined8 local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  FName local_b8;
  FName local_b0;
  uchar *local_a8;
  undefined8 uStack_a0;
  TArrayView<unsigned_char_const_,int> local_98;
  TArrayView<unsigned_char_const_,int> local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_OpenSSL_AES256_GCM_Decrypt ==
          (FThreadSafeStaticStat<_public:_class_TArray<unsigned_char,TSizedDefaultAllocator<32>_>___cdecl_FEncryptionContextOpenSSL::Decrypt_AES_256_GCM(TArrayView<unsigned_char_const_,int>,TArrayView<unsigned_char_const_,int>,TArrayView<unsigned_char_const_,int>,TArrayView<unsigned_char_const_,int>,EPlatformCryptoResult_&)_::_2_::FStat_STAT_OpenSSL_AES256_GCM_Decrypt>
           )0x0) {
        pFVar12 = ::FName::FName(&local_b8,"STAT_OpenSSL_AES256_GCM_Decrypt");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenSSL_AES256_GCM_Decrypt,*pFVar12,
                   L"OpenSSL AES256 GCM Decrypt","STATGROUP_PlatformCrypto","STATCAT_Advanced",
                   L"PlatformCrypto",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar13 = StatPtr_STAT_OpenSSL_AES256_GCM_Decrypt;
  if (StatPtr_STAT_OpenSSL_AES256_GCM_Decrypt ==
      (FThreadSafeStaticStat<_public:_class_TArray<unsigned_char,TSizedDefaultAllocator<32>_>___cdecl_FEncryptionContextOpenSSL::Decrypt_AES_256_GCM(TArrayView<unsigned_char_const_,int>,TArrayView<unsigned_char_const_,int>,TArrayView<unsigned_char_const_,int>,TArrayView<unsigned_char_const_,int>,EPlatformCryptoResult_&)_::_2_::FStat_STAT_OpenSSL_AES256_GCM_Decrypt>
       )0x0) {
    pFVar12 = ::FName::FName(&local_b0,"STAT_OpenSSL_AES256_GCM_Decrypt");
    FVar13 = (FThreadSafeStaticStat<_public:_class_TArray<unsigned_char,TSizedDefaultAllocator<32>_>___cdecl_FEncryptionContextOpenSSL::Decrypt_AES_256_GCM(TArrayView<unsigned_char_const_,int>,TArrayView<unsigned_char_const_,int>,TArrayView<unsigned_char_const_,int>,TArrayView<unsigned_char_const_,int>,EPlatformCryptoResult_&)_::_2_::FStat_STAT_OpenSSL_AES256_GCM_Decrypt>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenSSL_AES256_GCM_Decrypt,
                          *pFVar12,L"OpenSSL AES256 GCM Decrypt","STATGROUP_PlatformCrypto",
                          "STATCAT_Advanced",L"PlatformCrypto",true,true,ST_int64,true,false,
                          MCR_Invalid);
  }
  FVar19 = *(FName *)FVar13;
  bVar5 = false;
  bVar7 = false;
  local_130.ComparisonIndex.Value = 0;
  local_130.Number = 0;
  FVar17 = FVar19.ComparisonIndex.Value;
  uVar18 = FVar19.Number;
  if ((FVar17.Value == 0) && (uVar18 == 0)) {
LAB_14ea12278:
    bVar6 = false;
    FVar19 = local_130;
    pEVar4 = param_5;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_140[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_140[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_138.ComparisonIndex.Value = FVar17.Value;
        local_138.Number = uVar18;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_138,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PlatformCrypto\\Source\\PlatformCryptoContext\\Private\\EncryptionContextOpenSSL.cpp"
                   ,0x10d);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14ea12278;
    local_148.s.LowPart = FVar17.Value;
    local_148.s.HighPart = uVar18;
    FThreadStats::AddMessage(FVar19,CycleScopeStart);
    bVar6 = true;
    pEVar4 = param_5;
  }
  local_a8 = param_4->DataPtr;
  uStack_a0 = *(undefined8 *)&param_4->ArrayNum;
  *pEVar4 = Failure;
  local_88.DataPtr = param_2->DataPtr;
  local_88.ArrayNum = param_2->ArrayNum;
  local_88._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_98.DataPtr = param_3->DataPtr;
  local_98.ArrayNum = param_3->ArrayNum;
  local_98._12_4_ = *(undefined4 *)&param_3->field_0xc;
  param_5 = pEVar4;
  FPlatformCryptoDecryptor_AES_256_GCM_OpenSSL::Create(&local_158,&local_88,&local_98);
  puVar8 = local_158.DataPtr;
  FVar17 = FVar19.ComparisonIndex.Value;
  uVar18 = FVar19.Number;
  if ((longlong *)local_158.DataPtr == (longlong *)0x0) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    if (bVar7) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar5) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (!bVar6) {
      return __return_storage_ptr__;
    }
    if (FVar19 == (FName)0x0) {
      return __return_storage_ptr__;
    }
    if (FThreadStats::bPrimaryDisableForever != false) {
      return __return_storage_ptr__;
    }
    if (FThreadStats::TlsSlot == 0xffffffff) {
      return __return_storage_ptr__;
    }
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      pFVar14 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(pFVar14);
    }
    if (this_00->ScopeCount <= this_00->bWaitForExplicitFlush) {
      return __return_storage_ptr__;
    }
    local_120.NameAndInfo.Number = uVar18 & 0xffff6fff | 0x6000;
    local_120.NameAndInfo.Index.Value = FVar17.Value;
    QueryPerformanceCounter((LARGE_INTEGER *)&param_5);
    local_120.StatData.Pad = (uchar  [8])((ulonglong)param_5 & 0xffffffff);
    pFVar16 = &local_120;
  }
  else {
    local_168.Data = (FScriptContainerElement *)0x0;
    local_160 = 0;
    lVar2 = *(longlong *)local_158.DataPtr;
    local_78 = *(undefined4 *)&param_1->DataPtr;
    uStack_74 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
    iStack_70 = param_1->ArrayNum;
    uStack_6c = *(undefined4 *)&param_1->field_0xc;
    iVar10 = (**(code **)(lVar2 + 0x30))(local_158.DataPtr,&local_78);
    iVar11 = (**(code **)(lVar2 + 0x40))(puVar8);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar10 + iVar11,&local_168,(int *)&local_160,(int *)((longlong)&local_160 + 4));
    puVar8 = local_158.DataPtr;
    iStack_d0 = (int)local_160;
    local_res20[0] = 0;
    pcVar3 = *(code **)(*(longlong *)local_158.DataPtr + 0x38);
    local_d8 = local_168.Data;
    if ((int)local_160 < 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar9) {
        pcVar3 = (code *)swi(3);
        pTVar15 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar15;
      }
    }
    local_68 = (undefined4)local_d8;
    uStack_64 = local_d8._4_4_;
    iStack_60 = iStack_d0;
    uStack_5c = uStack_cc;
    local_58 = *(undefined4 *)&param_1->DataPtr;
    uStack_54 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
    iStack_50 = param_1->ArrayNum;
    uStack_4c = *(undefined4 *)&param_1->field_0xc;
    iVar10 = (*pcVar3)(puVar8,&local_58,&local_68,local_res20);
    puVar8 = local_158.DataPtr;
    if (iVar10 != 0) {
      (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      __return_storage_ptr__->ArrayNum = 0;
      __return_storage_ptr__->ArrayMax = 0;
      if (local_168.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data);
      }
      if ((longlong *)local_158.DataPtr != (longlong *)0x0) {
        (*(code *)**(undefined8 **)local_158.DataPtr)(local_158.DataPtr,1);
      }
      if (bVar7) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar5) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (!bVar6) {
        return __return_storage_ptr__;
      }
      if (FVar19 == (FName)0x0) {
        return __return_storage_ptr__;
      }
      if (FThreadStats::bPrimaryDisableForever != false) {
        return __return_storage_ptr__;
      }
      if (FThreadStats::TlsSlot == 0xffffffff) {
        return __return_storage_ptr__;
      }
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        pFVar14 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(pFVar14);
      }
      if (this_00->ScopeCount <= this_00->bWaitForExplicitFlush) {
        return __return_storage_ptr__;
      }
      local_110.NameAndInfo.Number = uVar18 & 0xffff6fff | 0x6000;
      local_110.NameAndInfo.Index.Value = FVar17.Value;
      QueryPerformanceCounter((LARGE_INTEGER *)&param_4);
      local_110.StatData.Pad = (uchar  [8])((ulonglong)param_4 & 0xffffffff);
      FThreadStats::AddStatMessage(this_00,&local_110);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      iVar10 = *piVar1;
      goto joined_r0x00014ea12536;
    }
    local_158.ArrayNum = 0;
    pcVar3 = *(code **)(*(longlong *)local_158.DataPtr + 0x48);
    local_c8 = local_168.Data + local_res20[0];
    iStack_c0 = (int)local_160 - local_res20[0];
    if (iStack_c0 < 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar9) {
        pcVar3 = (code *)swi(3);
        pTVar15 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar15;
      }
    }
    local_48 = (undefined4)local_c8;
    uStack_44 = local_c8._4_4_;
    iStack_40 = iStack_c0;
    uStack_3c = uStack_bc;
    iVar10 = (*pcVar3)(puVar8,&local_48);
    if (iVar10 == 0) {
      uVar21 = local_158.ArrayNum + local_res20[0];
      if ((int)local_160 < (int)uVar21) {
        iVar11 = uVar21 - (int)local_160;
        iVar10 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (1,1,iVar11,&local_168,(int *)&local_160,
                            (int *)((longlong)&local_160 + 4));
        memset(local_168.Data + iVar10,0,(longlong)iVar11);
LAB_14ea12797:
        iVar10 = (int)local_160;
      }
      else {
        if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
        }
        iVar10 = (int)local_160;
        if ((int)uVar21 < (int)local_160) {
          uVar20 = (int)local_160 - uVar21;
          if ((int)(uVar20 | uVar21) < 0) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              );
            if (bVar9) {
              pcVar3 = (code *)swi(3);
              pTVar15 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
              return pTVar15;
            }
            iVar10 = (int)local_160;
          }
          if (uVar20 != 0) {
            iVar11 = (iVar10 - uVar20) - uVar21;
            if (iVar11 != 0) {
              memmove(local_168.Data + (int)uVar21,local_168.Data + (int)uVar21 + (int)uVar20,
                      (longlong)iVar11);
              iVar10 = (int)local_160;
            }
            local_160 = CONCAT44(local_160._4_4_,iVar10 - uVar20);
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,&local_168,iVar10 - uVar20,(int *)((longlong)&local_160 + 4));
            goto LAB_14ea12797;
          }
        }
      }
      *pEVar4 = Success;
      (__return_storage_ptr__->AllocatorInstance).Data = local_168.Data;
      __return_storage_ptr__->ArrayNum = iVar10;
      local_168.Data = (FScriptContainerElement *)0x0;
      __return_storage_ptr__->ArrayMax = local_160._4_4_;
      local_160 = 0;
      if ((longlong *)local_158.DataPtr != (longlong *)0x0) {
        (*(code *)**(undefined8 **)local_158.DataPtr)(local_158.DataPtr,1);
      }
      if (bVar7) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar5) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (!bVar6) {
        return __return_storage_ptr__;
      }
      if (FVar19 == (FName)0x0) {
        return __return_storage_ptr__;
      }
      if (FThreadStats::bPrimaryDisableForever != false) {
        return __return_storage_ptr__;
      }
      if (FThreadStats::TlsSlot == 0xffffffff) {
        return __return_storage_ptr__;
      }
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        pFVar14 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(pFVar14);
      }
      if (this_00->ScopeCount <= this_00->bWaitForExplicitFlush) {
        return __return_storage_ptr__;
      }
      local_f0.NameAndInfo.Number = uVar18 & 0xffff6fff | 0x6000;
      local_f0.NameAndInfo.Index.Value = FVar17.Value;
      QueryPerformanceCounter(&local_148);
      local_f0.StatData.Pad[4] = '\0';
      local_f0.StatData.Pad[5] = '\0';
      local_f0.StatData.Pad[6] = '\0';
      local_f0.StatData.Pad[7] = '\0';
      local_f0.StatData.Pad[0] = local_148.s.LowPart._0_1_;
      local_f0.StatData.Pad[1] = local_148.s.LowPart._1_1_;
      local_f0.StatData.Pad[2] = local_148.s.LowPart._2_1_;
      local_f0.StatData.Pad[3] = local_148.s.LowPart._3_1_;
      pFVar16 = &local_f0;
    }
    else {
      (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      __return_storage_ptr__->ArrayNum = 0;
      __return_storage_ptr__->ArrayMax = 0;
      if (local_168.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data);
      }
      if ((longlong *)local_158.DataPtr != (longlong *)0x0) {
        (*(code *)**(undefined8 **)local_158.DataPtr)(local_158.DataPtr,1);
      }
      if (bVar7) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar5) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (!bVar6) {
        return __return_storage_ptr__;
      }
      if (FVar19 == (FName)0x0) {
        return __return_storage_ptr__;
      }
      if (FThreadStats::bPrimaryDisableForever != false) {
        return __return_storage_ptr__;
      }
      if (FThreadStats::TlsSlot == 0xffffffff) {
        return __return_storage_ptr__;
      }
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        pFVar14 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(pFVar14);
      }
      if (this_00->ScopeCount <= this_00->bWaitForExplicitFlush) {
        return __return_storage_ptr__;
      }
      local_100.NameAndInfo.Number = uVar18 & 0xffff6fff | 0x6000;
      local_100.NameAndInfo.Index.Value = FVar17.Value;
      QueryPerformanceCounter((LARGE_INTEGER *)&param_3);
      local_100.StatData.Pad = (uchar  [8])((ulonglong)param_3 & 0xffffffff);
      pFVar16 = &local_100;
    }
  }
  FThreadStats::AddStatMessage(this_00,pFVar16);
  piVar1 = &this_00->ScopeCount;
  *piVar1 = *piVar1 + -1;
  iVar10 = *piVar1;
joined_r0x00014ea12536:
  if (iVar10 == 0) {
    FThreadStats::Flush(this_00,false,false);
  }
  else if (FThreadStats::bIsRawStatsActive != false) {
    FThreadStats::FlushRawStats(this_00,false,false);
  }
  return __return_storage_ptr__;
}

// DestroyKey_RSA @ 14ea12960

void __thiscall
FEncryptionContextOpenSSL::DestroyKey_RSA(FEncryptionContextOpenSSL *this,void *param_1)

{
  RSA_free(param_1);
  return;
}

// DigestSign_RS256 @ 14ea12970

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FEncryptionContextOpenSSL::DigestSign_RS256
          (FEncryptionContextOpenSSL *this,TArrayView<unsigned_char_const_,int> *param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2,void *param_3)

{
  int iVar1;
  undefined4 local_res10 [2];
  
  iVar1 = RSA_size(param_3);
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum(param_2,iVar1,Default);
  local_res10[0] = 0;
  iVar1 = RSA_sign(0x2a0,param_1->DataPtr,param_1->ArrayNum,(param_2->AllocatorInstance).Data,
                   local_res10,param_3);
  return iVar1 == 1;
}

// DigestVerify_PS256 @ 14ea129f0

bool __thiscall
FEncryptionContextOpenSSL::DigestVerify_PS256
          (FEncryptionContextOpenSSL *this,TArrayView<char_const_,int> *param_1,
          TArrayView<unsigned_char_const_,int> *param_2,
          TArrayView<unsigned_char_const_,int> *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined8 local_18;
  uchar *local_10;
  
  lVar2 = EVP_MD_CTX_new();
  if (lVar2 == 0) {
    bVar5 = false;
  }
  else {
    local_10 = param_3->DataPtr;
    uVar3 = d2i_RSAPublicKey(0,&local_10,param_3->ArrayNum);
    uVar4 = EVP_PKEY_new();
    EVP_PKEY_assign(uVar4,6,uVar3);
    local_18 = 0;
    uVar3 = EVP_sha256();
    EVP_DigestVerifyInit(lVar2,&local_18,uVar3,0,uVar4);
    RSA_pkey_ctx_ctrl(local_18,0xffffffff,0x1001,6,0);
    EVP_DigestUpdate(lVar2,param_1->DataPtr,(longlong)param_1->ArrayNum);
    iVar1 = EVP_DigestVerifyFinal(lVar2,param_2->DataPtr,(longlong)param_2->ArrayNum);
    bVar5 = iVar1 == 1;
  }
  EVP_MD_CTX_free(lVar2);
  return bVar5;
}

// DigestVerify_RS256 @ 14ea12b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FEncryptionContextOpenSSL::DigestVerify_RS256
          (FEncryptionContextOpenSSL *this,TArrayView<unsigned_char_const_,int> *param_1,
          TArrayView<unsigned_char_const_,int> *param_2,void *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uchar *_Str;
  size_t sVar4;
  uint uVar5;
  undefined1 auStack_178 [32];
  int local_158;
  void *local_150;
  FScriptContainerElement local_148 [256];
  ForAnyElementType local_48;
  FScriptContainerElement *local_40;
  int local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_178;
  local_158 = param_2->ArrayNum;
  local_150 = param_3;
  iVar2 = RSA_verify(0x2a0,param_1->DataPtr,param_1->ArrayNum,param_2->DataPtr);
  if ((iVar2 == 1) || ((byte)LogPlatformCryptoOpenSSL._0_1_ < 2)) goto LAB_14ea12c6f;
  uVar3 = ERR_get_error();
  _Str = (uchar *)ERR_error_string(uVar3,0);
  local_48.Data = (FScriptContainerElement *)0x0;
  if (_Str == (uchar *)0x0) {
    local_40 = (FScriptContainerElement *)0x0;
    local_38 = 0;
  }
  else {
    sVar4 = strlen((char *)_Str);
    local_38 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,_Str,(int)sVar4);
    uVar1 = local_38 + 1;
    uVar5 = uVar1;
    if (uVar1 < 0x81) {
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        uVar5 = 0;
        goto LAB_14ea12bcf;
      }
    }
    else {
LAB_14ea12bcf:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar5,2);
    }
    local_40 = local_148;
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      local_40 = local_48.Data;
    }
    UE::Core::Private::Convert((wchar_t *)local_40,uVar1,_Str,(int)sVar4 + 1);
  }
  ERR_get_error();
  UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPlatformCryptoOpenSSL);
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
LAB_14ea12c6f:
  return iVar2 == 1;
}

// EncryptPrivate_RSA @ 14ea12ca0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
FEncryptionContextOpenSSL::EncryptPrivate_RSA
          (FEncryptionContextOpenSSL *this,TArrayView<unsigned_char_const_,int> *param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2,void *param_3)

{
  int iVar1;
  
  iVar1 = RSA_size(param_3);
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum(param_2,iVar1,Default);
  iVar1 = RSA_private_encrypt(param_1->ArrayNum,param_1->DataPtr,(param_2->AllocatorInstance).Data,
                              param_3,1);
  if (iVar1 == -1) {
    param_2->ArrayNum = 0;
    if (param_2->ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
    }
  }
  return iVar1;
}

// EncryptPublic_RSA @ 14ea12d30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
FEncryptionContextOpenSSL::EncryptPublic_RSA
          (FEncryptionContextOpenSSL *this,TArrayView<unsigned_char_const_,int> *param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2,void *param_3)

{
  int iVar1;
  
  iVar1 = RSA_size(param_3);
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum(param_2,iVar1,Default);
  iVar1 = RSA_public_encrypt(param_1->ArrayNum,param_1->DataPtr,(param_2->AllocatorInstance).Data,
                             param_3,1);
  if (iVar1 == -1) {
    param_2->ArrayNum = 0;
    if (param_2->ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
    }
  }
  return iVar1;
}

// Encrypt_AES_256_CBC @ 14ea12dc0

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
FEncryptionContextOpenSSL::Encrypt_AES_256_CBC
          (FEncryptionContextOpenSSL *this,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArrayView<unsigned_char_const_,int> *param_1,
          TArrayView<unsigned_char_const_,int> *param_2,
          TArrayView<unsigned_char_const_,int> *param_3,EPlatformCryptoResult *param_4)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  EPlatformCryptoResult *pEVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uchar *puVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<_public:_class_TArray<unsigned_char,TSizedDefaultAllocator<32>_>___cdecl_FEncryptionContextOpenSSL::Encrypt_AES_256_CBC(TArrayView<unsigned_char_const_,int>,TArrayView<unsigned_char_const_,int>,TArrayView<unsigned_char_const_,int>,EPlatformCryptoResult_&)_::_2_::FStat_STAT_OpenSSL_AES256_CBC_Encrypt>
  FVar13;
  FThreadStats *this_00;
  FThreadStatsPool *pFVar14;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar15;
  FStatMessage *pFVar16;
  FNameEntryId FVar17;
  uint uVar18;
  FName FVar19;
  uint uVar20;
  uint uVar21;
  int local_res20 [2];
  ForAnyElementType local_158;
  undefined8 local_150;
  TArrayView<unsigned_char_const_,int> local_148;
  LARGE_INTEGER local_138;
  FColor_u_0 local_130 [2];
  FName local_128;
  FName local_120;
  LARGE_INTEGER local_110;
  FStatMessage local_108;
  FStatMessage local_f8;
  FStatMessage local_e8;
  FStatMessage local_d8;
  undefined8 local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  FName local_a8;
  FName local_a0;
  uchar *local_98;
  undefined8 uStack_90;
  TArrayView<unsigned_char_const_,int> local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_OpenSSL_AES256_CBC_Encrypt ==
          (FThreadSafeStaticStat<_public:_class_TArray<unsigned_char,TSizedDefaultAllocator<32>_>___cdecl_FEncryptionContextOpenSSL::Encrypt_AES_256_CBC(TArrayView<unsigned_char_const_,int>,TArrayView<unsigned_char_const_,int>,TArrayView<unsigned_char_const_,int>,EPlatformCryptoResult_&)_::_2_::FStat_STAT_OpenSSL_AES256_CBC_Encrypt>
           )0x0) {
        pFVar12 = ::FName::FName(&local_a8,"STAT_OpenSSL_AES256_CBC_Encrypt");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenSSL_AES256_CBC_Encrypt,*pFVar12,
                   L"OpenSSL AES256 CBC Encrypt","STATGROUP_PlatformCrypto","STATCAT_Advanced",
                   L"PlatformCrypto",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar13 = StatPtr_STAT_OpenSSL_AES256_CBC_Encrypt;
  if (StatPtr_STAT_OpenSSL_AES256_CBC_Encrypt ==
      (FThreadSafeStaticStat<_public:_class_TArray<unsigned_char,TSizedDefaultAllocator<32>_>___cdecl_FEncryptionContextOpenSSL::Encrypt_AES_256_CBC(TArrayView<unsigned_char_const_,int>,TArrayView<unsigned_char_const_,int>,TArrayView<unsigned_char_const_,int>,EPlatformCryptoResult_&)_::_2_::FStat_STAT_OpenSSL_AES256_CBC_Encrypt>
       )0x0) {
    pFVar12 = ::FName::FName(&local_a0,"STAT_OpenSSL_AES256_CBC_Encrypt");
    FVar13 = (FThreadSafeStaticStat<_public:_class_TArray<unsigned_char,TSizedDefaultAllocator<32>_>___cdecl_FEncryptionContextOpenSSL::Encrypt_AES_256_CBC(TArrayView<unsigned_char_const_,int>,TArrayView<unsigned_char_const_,int>,TArrayView<unsigned_char_const_,int>,EPlatformCryptoResult_&)_::_2_::FStat_STAT_OpenSSL_AES256_CBC_Encrypt>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenSSL_AES256_CBC_Encrypt,
                          *pFVar12,L"OpenSSL AES256 CBC Encrypt","STATGROUP_PlatformCrypto",
                          "STATCAT_Advanced",L"PlatformCrypto",true,true,ST_int64,true,false,
                          MCR_Invalid);
  }
  FVar19 = *(FName *)FVar13;
  bVar5 = false;
  bVar7 = false;
  local_120.ComparisonIndex.Value = 0;
  local_120.Number = 0;
  FVar17 = FVar19.ComparisonIndex.Value;
  uVar18 = FVar19.Number;
  if ((FVar17.Value == 0) && (uVar18 == 0)) {
LAB_14ea12f25:
    bVar6 = false;
    FVar19 = local_120;
    pEVar4 = param_4;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_130[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_130[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_128.ComparisonIndex.Value = FVar17.Value;
        local_128.Number = uVar18;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_128,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PlatformCrypto\\Source\\PlatformCryptoContext\\Private\\EncryptionContextOpenSSL.cpp"
                   ,0x79);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14ea12f25;
    local_138.s.LowPart = FVar17.Value;
    local_138.s.HighPart = uVar18;
    FThreadStats::AddMessage(FVar19,CycleScopeStart);
    bVar6 = true;
    pEVar4 = param_4;
  }
  local_88.DataPtr = param_2->DataPtr;
  local_88.ArrayNum = param_2->ArrayNum;
  local_88._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_98 = param_3->DataPtr;
  uStack_90 = *(undefined8 *)&param_3->ArrayNum;
  *pEVar4 = Failure;
  param_4 = pEVar4;
  FPlatformCryptoEncryptor_AES_256_CBC_OpenSSL::Create(&local_148,&local_88);
  puVar8 = local_148.DataPtr;
  FVar17 = FVar19.ComparisonIndex.Value;
  uVar18 = FVar19.Number;
  if ((longlong *)local_148.DataPtr == (longlong *)0x0) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    if (bVar7) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar5) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (!bVar6) {
      return __return_storage_ptr__;
    }
    if (FVar19 == (FName)0x0) {
      return __return_storage_ptr__;
    }
    if (FThreadStats::bPrimaryDisableForever != false) {
      return __return_storage_ptr__;
    }
    if (FThreadStats::TlsSlot == 0xffffffff) {
      return __return_storage_ptr__;
    }
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      pFVar14 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(pFVar14);
    }
    if (this_00->ScopeCount <= this_00->bWaitForExplicitFlush) {
      return __return_storage_ptr__;
    }
    local_108.NameAndInfo.Number = uVar18 & 0xffff6fff | 0x6000;
    local_108.NameAndInfo.Index.Value = FVar17.Value;
    QueryPerformanceCounter((LARGE_INTEGER *)&param_4);
    local_108.StatData.Pad = (uchar  [8])((ulonglong)param_4 & 0xffffffff);
    pFVar16 = &local_108;
  }
  else {
    local_158.Data = (FScriptContainerElement *)0x0;
    local_150 = 0;
    lVar2 = *(longlong *)local_148.DataPtr;
    local_78 = *(undefined4 *)&param_1->DataPtr;
    uStack_74 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
    iStack_70 = param_1->ArrayNum;
    uStack_6c = *(undefined4 *)&param_1->field_0xc;
    iVar10 = (**(code **)(lVar2 + 0x30))(local_148.DataPtr,&local_78);
    iVar11 = (**(code **)(lVar2 + 0x40))(puVar8);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar10 + iVar11,&local_158,(int *)&local_150,(int *)((longlong)&local_150 + 4));
    puVar8 = local_148.DataPtr;
    iStack_c0 = (int)local_150;
    local_res20[0] = 0;
    pcVar3 = *(code **)(*(longlong *)local_148.DataPtr + 0x38);
    local_c8 = local_158.Data;
    if ((int)local_150 < 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar9) {
        pcVar3 = (code *)swi(3);
        pTVar15 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar15;
      }
    }
    local_68 = (undefined4)local_c8;
    uStack_64 = local_c8._4_4_;
    iStack_60 = iStack_c0;
    uStack_5c = uStack_bc;
    local_58 = *(undefined4 *)&param_1->DataPtr;
    uStack_54 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
    iStack_50 = param_1->ArrayNum;
    uStack_4c = *(undefined4 *)&param_1->field_0xc;
    iVar10 = (*pcVar3)(puVar8,&local_58,&local_68,local_res20);
    puVar8 = local_148.DataPtr;
    if (iVar10 != 0) {
      (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      __return_storage_ptr__->ArrayNum = 0;
      __return_storage_ptr__->ArrayMax = 0;
      if (local_158.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data);
      }
      if ((longlong *)local_148.DataPtr != (longlong *)0x0) {
        (*(code *)**(undefined8 **)local_148.DataPtr)(local_148.DataPtr,1);
      }
      if (bVar7) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar5) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (!bVar6) {
        return __return_storage_ptr__;
      }
      if (FVar19 == (FName)0x0) {
        return __return_storage_ptr__;
      }
      if (FThreadStats::bPrimaryDisableForever != false) {
        return __return_storage_ptr__;
      }
      if (FThreadStats::TlsSlot == 0xffffffff) {
        return __return_storage_ptr__;
      }
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        pFVar14 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(pFVar14);
      }
      if (this_00->ScopeCount <= this_00->bWaitForExplicitFlush) {
        return __return_storage_ptr__;
      }
      local_f8.NameAndInfo.Number = uVar18 & 0xffff6fff | 0x6000;
      local_f8.NameAndInfo.Index.Value = FVar17.Value;
      QueryPerformanceCounter((LARGE_INTEGER *)&param_3);
      local_f8.StatData.Pad = (uchar  [8])((ulonglong)param_3 & 0xffffffff);
      FThreadStats::AddStatMessage(this_00,&local_f8);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      iVar10 = *piVar1;
      goto joined_r0x00014ea131d1;
    }
    local_148.ArrayNum = 0;
    pcVar3 = *(code **)(*(longlong *)local_148.DataPtr + 0x48);
    local_b8 = local_158.Data + local_res20[0];
    iStack_b0 = (int)local_150 - local_res20[0];
    if (iStack_b0 < 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar9) {
        pcVar3 = (code *)swi(3);
        pTVar15 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar15;
      }
    }
    local_48 = (undefined4)local_b8;
    uStack_44 = local_b8._4_4_;
    iStack_40 = iStack_b0;
    uStack_3c = uStack_ac;
    iVar10 = (*pcVar3)(puVar8,&local_48);
    if (iVar10 == 0) {
      uVar21 = local_148.ArrayNum + local_res20[0];
      if ((int)local_150 < (int)uVar21) {
        iVar11 = uVar21 - (int)local_150;
        iVar10 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (1,1,iVar11,&local_158,(int *)&local_150,
                            (int *)((longlong)&local_150 + 4));
        memset(local_158.Data + iVar10,0,(longlong)iVar11);
LAB_14ea13426:
        iVar10 = (int)local_150;
      }
      else {
        if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
        }
        iVar10 = (int)local_150;
        if ((int)uVar21 < (int)local_150) {
          uVar20 = (int)local_150 - uVar21;
          if ((int)(uVar20 | uVar21) < 0) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              );
            if (bVar9) {
              pcVar3 = (code *)swi(3);
              pTVar15 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
              return pTVar15;
            }
            iVar10 = (int)local_150;
          }
          if (uVar20 != 0) {
            iVar11 = (iVar10 - uVar20) - uVar21;
            if (iVar11 != 0) {
              memmove(local_158.Data + (int)uVar21,local_158.Data + (int)uVar21 + (int)uVar20,
                      (longlong)iVar11);
              iVar10 = (int)local_150;
            }
            local_150 = CONCAT44(local_150._4_4_,iVar10 - uVar20);
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,&local_158,iVar10 - uVar20,(int *)((longlong)&local_150 + 4));
            goto LAB_14ea13426;
          }
        }
      }
      *pEVar4 = Success;
      (__return_storage_ptr__->AllocatorInstance).Data = local_158.Data;
      __return_storage_ptr__->ArrayNum = iVar10;
      local_158.Data = (FScriptContainerElement *)0x0;
      __return_storage_ptr__->ArrayMax = local_150._4_4_;
      local_150 = 0;
      if ((longlong *)local_148.DataPtr != (longlong *)0x0) {
        (*(code *)**(undefined8 **)local_148.DataPtr)(local_148.DataPtr,1);
      }
      if (bVar7) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar5) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (!bVar6) {
        return __return_storage_ptr__;
      }
      if (FVar19 == (FName)0x0) {
        return __return_storage_ptr__;
      }
      if (FThreadStats::bPrimaryDisableForever != false) {
        return __return_storage_ptr__;
      }
      if (FThreadStats::TlsSlot == 0xffffffff) {
        return __return_storage_ptr__;
      }
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        pFVar14 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(pFVar14);
      }
      if (this_00->ScopeCount <= this_00->bWaitForExplicitFlush) {
        return __return_storage_ptr__;
      }
      local_d8.NameAndInfo.Number = uVar18 & 0xffff6fff | 0x6000;
      local_d8.NameAndInfo.Index.Value = FVar17.Value;
      QueryPerformanceCounter(&local_110);
      local_d8.StatData.Pad[4] = '\0';
      local_d8.StatData.Pad[5] = '\0';
      local_d8.StatData.Pad[6] = '\0';
      local_d8.StatData.Pad[7] = '\0';
      local_d8.StatData.Pad[0] = local_110.s.LowPart._0_1_;
      local_d8.StatData.Pad[1] = local_110.s.LowPart._1_1_;
      local_d8.StatData.Pad[2] = local_110.s.LowPart._2_1_;
      local_d8.StatData.Pad[3] = local_110.s.LowPart._3_1_;
      pFVar16 = &local_d8;
    }
    else {
      (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      __return_storage_ptr__->ArrayNum = 0;
      __return_storage_ptr__->ArrayMax = 0;
      if (local_158.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data);
      }
      if ((longlong *)local_148.DataPtr != (longlong *)0x0) {
        (*(code *)**(undefined8 **)local_148.DataPtr)(local_148.DataPtr,1);
      }
      if (bVar7) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar5) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (!bVar6) {
        return __return_storage_ptr__;
      }
      if (FVar19 == (FName)0x0) {
        return __return_storage_ptr__;
      }
      if (FThreadStats::bPrimaryDisableForever != false) {
        return __return_storage_ptr__;
      }
      if (FThreadStats::TlsSlot == 0xffffffff) {
        return __return_storage_ptr__;
      }
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        pFVar14 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(pFVar14);
      }
      if (this_00->ScopeCount <= this_00->bWaitForExplicitFlush) {
        return __return_storage_ptr__;
      }
      local_e8.NameAndInfo.Number = uVar18 & 0xffff6fff | 0x6000;
      local_e8.NameAndInfo.Index.Value = FVar17.Value;
      QueryPerformanceCounter(&local_138);
      local_e8.StatData.Pad[4] = '\0';
      local_e8.StatData.Pad[5] = '\0';
      local_e8.StatData.Pad[6] = '\0';
      local_e8.StatData.Pad[7] = '\0';
      local_e8.StatData.Pad[0] = local_138.s.LowPart._0_1_;
      local_e8.StatData.Pad[1] = local_138.s.LowPart._1_1_;
      local_e8.StatData.Pad[2] = local_138.s.LowPart._2_1_;
      local_e8.StatData.Pad[3] = local_138.s.LowPart._3_1_;
      pFVar16 = &local_e8;
    }
  }
  FThreadStats::AddStatMessage(this_00,pFVar16);
  piVar1 = &this_00->ScopeCount;
  *piVar1 = *piVar1 + -1;
  iVar10 = *piVar1;
joined_r0x00014ea131d1:
  if (iVar10 == 0) {
    FThreadStats::Flush(this_00,false,false);
  }
  else if (FThreadStats::bIsRawStatsActive != false) {
    FThreadStats::FlushRawStats(this_00,false,false);
  }
  return __return_storage_ptr__;
}

// Encrypt_AES_256_ECB @ 14ea135f0

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
FEncryptionContextOpenSSL::Encrypt_AES_256_ECB
          (FEncryptionContextOpenSSL *this,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArrayView<unsigned_char_const_,int> *param_1,
          TArrayView<unsigned_char_const_,int> *param_2,EPlatformCryptoResult *param_3)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  EPlatformCryptoResult *pEVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uchar *puVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<_public:_class_TArray<unsigned_char,TSizedDefaultAllocator<32>_>___cdecl_FEncryptionContextOpenSSL::Encrypt_AES_256_ECB(TArrayView<unsigned_char_const_,int>,TArrayView<unsigned_char_const_,int>,EPlatformCryptoResult_&)_::_2_::FStat_STAT_OpenSSL_AES256_ECB_Encrypt>
  FVar13;
  FThreadStats *this_00;
  FThreadStatsPool *pFVar14;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar15;
  FStatMessage *pFVar16;
  FNameEntryId FVar17;
  uint uVar18;
  FName FVar19;
  uint uVar20;
  uint uVar21;
  int local_res20 [2];
  ForAnyElementType local_158;
  undefined8 local_150;
  TArrayView<unsigned_char_const_,int> local_148;
  LARGE_INTEGER local_138;
  FColor_u_0 local_130 [2];
  FName local_128;
  FName local_120;
  LARGE_INTEGER local_110;
  LARGE_INTEGER local_108;
  FStatMessage local_100;
  FStatMessage local_f0;
  FStatMessage local_e0;
  FStatMessage local_d0;
  undefined8 local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  FName local_98;
  FName local_90;
  uchar *local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_OpenSSL_AES256_ECB_Encrypt ==
          (FThreadSafeStaticStat<_public:_class_TArray<unsigned_char,TSizedDefaultAllocator<32>_>___cdecl_FEncryptionContextOpenSSL::Encrypt_AES_256_ECB(TArrayView<unsigned_char_const_,int>,TArrayView<unsigned_char_const_,int>,EPlatformCryptoResult_&)_::_2_::FStat_STAT_OpenSSL_AES256_ECB_Encrypt>
           )0x0) {
        pFVar12 = ::FName::FName(&local_98,"STAT_OpenSSL_AES256_ECB_Encrypt");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenSSL_AES256_ECB_Encrypt,*pFVar12,
                   L"OpenSSL AES256 ECB Encrypt","STATGROUP_PlatformCrypto","STATCAT_Advanced",
                   L"PlatformCrypto",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar13 = StatPtr_STAT_OpenSSL_AES256_ECB_Encrypt;
  if (StatPtr_STAT_OpenSSL_AES256_ECB_Encrypt ==
      (FThreadSafeStaticStat<_public:_class_TArray<unsigned_char,TSizedDefaultAllocator<32>_>___cdecl_FEncryptionContextOpenSSL::Encrypt_AES_256_ECB(TArrayView<unsigned_char_const_,int>,TArrayView<unsigned_char_const_,int>,EPlatformCryptoResult_&)_::_2_::FStat_STAT_OpenSSL_AES256_ECB_Encrypt>
       )0x0) {
    pFVar12 = ::FName::FName(&local_90,"STAT_OpenSSL_AES256_ECB_Encrypt");
    FVar13 = (FThreadSafeStaticStat<_public:_class_TArray<unsigned_char,TSizedDefaultAllocator<32>_>___cdecl_FEncryptionContextOpenSSL::Encrypt_AES_256_ECB(TArrayView<unsigned_char_const_,int>,TArrayView<unsigned_char_const_,int>,EPlatformCryptoResult_&)_::_2_::FStat_STAT_OpenSSL_AES256_ECB_Encrypt>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenSSL_AES256_ECB_Encrypt,
                          *pFVar12,L"OpenSSL AES256 ECB Encrypt","STATGROUP_PlatformCrypto",
                          "STATCAT_Advanced",L"PlatformCrypto",true,true,ST_int64,true,false,
                          MCR_Invalid);
  }
  FVar19 = *(FName *)FVar13;
  bVar5 = false;
  bVar7 = false;
  local_120.ComparisonIndex.Value = 0;
  local_120.Number = 0;
  FVar17 = FVar19.ComparisonIndex.Value;
  uVar18 = FVar19.Number;
  if ((FVar17.Value == 0) && (uVar18 == 0)) {
LAB_14ea13755:
    bVar6 = false;
    FVar19 = local_120;
    pEVar4 = param_3;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_130[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_130[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_128.ComparisonIndex.Value = FVar17.Value;
        local_128.Number = uVar18;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_128,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PlatformCrypto\\Source\\PlatformCryptoContext\\Private\\EncryptionContextOpenSSL.cpp"
                   ,0x57);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14ea13755;
    local_138.s.LowPart = FVar17.Value;
    local_138.s.HighPart = uVar18;
    FThreadStats::AddMessage(FVar19,CycleScopeStart);
    bVar6 = true;
    pEVar4 = param_3;
  }
  local_88 = param_2->DataPtr;
  uStack_80 = *(undefined8 *)&param_2->ArrayNum;
  *pEVar4 = Failure;
  param_3 = pEVar4;
  FPlatformCryptoEncryptor_AES_256_ECB_OpenSSL::Create(&local_148);
  puVar8 = local_148.DataPtr;
  FVar17 = FVar19.ComparisonIndex.Value;
  uVar18 = FVar19.Number;
  if ((longlong *)local_148.DataPtr == (longlong *)0x0) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    if (bVar7) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar5) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (!bVar6) {
      return __return_storage_ptr__;
    }
    if (FVar19 == (FName)0x0) {
      return __return_storage_ptr__;
    }
    if (FThreadStats::bPrimaryDisableForever != false) {
      return __return_storage_ptr__;
    }
    if (FThreadStats::TlsSlot == 0xffffffff) {
      return __return_storage_ptr__;
    }
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      pFVar14 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(pFVar14);
    }
    if (this_00->ScopeCount <= this_00->bWaitForExplicitFlush) {
      return __return_storage_ptr__;
    }
    local_100.NameAndInfo.Number = uVar18 & 0xffff6fff | 0x6000;
    local_100.NameAndInfo.Index.Value = FVar17.Value;
    QueryPerformanceCounter((LARGE_INTEGER *)&param_3);
    local_100.StatData.Pad = (uchar  [8])((ulonglong)param_3 & 0xffffffff);
    pFVar16 = &local_100;
  }
  else {
    local_158.Data = (FScriptContainerElement *)0x0;
    local_150 = 0;
    lVar2 = *(longlong *)local_148.DataPtr;
    local_78 = *(undefined4 *)&param_1->DataPtr;
    uStack_74 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
    iStack_70 = param_1->ArrayNum;
    uStack_6c = *(undefined4 *)&param_1->field_0xc;
    iVar10 = (**(code **)(lVar2 + 0x30))(local_148.DataPtr,&local_78);
    iVar11 = (**(code **)(lVar2 + 0x40))(puVar8);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar10 + iVar11,&local_158,(int *)&local_150,(int *)((longlong)&local_150 + 4));
    puVar8 = local_148.DataPtr;
    iStack_b0 = (int)local_150;
    local_res20[0] = 0;
    pcVar3 = *(code **)(*(longlong *)local_148.DataPtr + 0x38);
    local_b8 = local_158.Data;
    if ((int)local_150 < 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar9) {
        pcVar3 = (code *)swi(3);
        pTVar15 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar15;
      }
    }
    local_68 = (undefined4)local_b8;
    uStack_64 = local_b8._4_4_;
    iStack_60 = iStack_b0;
    uStack_5c = uStack_ac;
    local_58 = *(undefined4 *)&param_1->DataPtr;
    uStack_54 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
    iStack_50 = param_1->ArrayNum;
    uStack_4c = *(undefined4 *)&param_1->field_0xc;
    iVar10 = (*pcVar3)(puVar8,&local_58,&local_68,local_res20);
    puVar8 = local_148.DataPtr;
    if (iVar10 != 0) {
      (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      __return_storage_ptr__->ArrayNum = 0;
      __return_storage_ptr__->ArrayMax = 0;
      if (local_158.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data);
      }
      if ((longlong *)local_148.DataPtr != (longlong *)0x0) {
        (*(code *)**(undefined8 **)local_148.DataPtr)(local_148.DataPtr,1);
      }
      if (bVar7) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar5) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (!bVar6) {
        return __return_storage_ptr__;
      }
      if (FVar19 == (FName)0x0) {
        return __return_storage_ptr__;
      }
      if (FThreadStats::bPrimaryDisableForever != false) {
        return __return_storage_ptr__;
      }
      if (FThreadStats::TlsSlot == 0xffffffff) {
        return __return_storage_ptr__;
      }
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        pFVar14 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(pFVar14);
      }
      if (this_00->ScopeCount <= this_00->bWaitForExplicitFlush) {
        return __return_storage_ptr__;
      }
      local_f0.NameAndInfo.Number = uVar18 & 0xffff6fff | 0x6000;
      local_f0.NameAndInfo.Index.Value = FVar17.Value;
      QueryPerformanceCounter(&local_138);
      local_f0.StatData.Pad[4] = '\0';
      local_f0.StatData.Pad[5] = '\0';
      local_f0.StatData.Pad[6] = '\0';
      local_f0.StatData.Pad[7] = '\0';
      local_f0.StatData.Pad[0] = local_138.s.LowPart._0_1_;
      local_f0.StatData.Pad[1] = local_138.s.LowPart._1_1_;
      local_f0.StatData.Pad[2] = local_138.s.LowPart._2_1_;
      local_f0.StatData.Pad[3] = local_138.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_f0);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      iVar10 = *piVar1;
      goto joined_r0x00014ea139e9;
    }
    local_148.ArrayNum = 0;
    pcVar3 = *(code **)(*(longlong *)local_148.DataPtr + 0x48);
    local_a8 = local_158.Data + local_res20[0];
    iStack_a0 = (int)local_150 - local_res20[0];
    if (iStack_a0 < 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar9) {
        pcVar3 = (code *)swi(3);
        pTVar15 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar15;
      }
    }
    local_48 = (undefined4)local_a8;
    uStack_44 = local_a8._4_4_;
    iStack_40 = iStack_a0;
    uStack_3c = uStack_9c;
    iVar10 = (*pcVar3)(puVar8,&local_48);
    if (iVar10 == 0) {
      uVar21 = local_148.ArrayNum + local_res20[0];
      if ((int)local_150 < (int)uVar21) {
        iVar11 = uVar21 - (int)local_150;
        iVar10 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (1,1,iVar11,&local_158,(int *)&local_150,
                            (int *)((longlong)&local_150 + 4));
        memset(local_158.Data + iVar10,0,(longlong)iVar11);
LAB_14ea13c3e:
        iVar10 = (int)local_150;
      }
      else {
        if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
        }
        iVar10 = (int)local_150;
        if ((int)uVar21 < (int)local_150) {
          uVar20 = (int)local_150 - uVar21;
          if ((int)(uVar20 | uVar21) < 0) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              );
            if (bVar9) {
              pcVar3 = (code *)swi(3);
              pTVar15 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
              return pTVar15;
            }
            iVar10 = (int)local_150;
          }
          if (uVar20 != 0) {
            iVar11 = (iVar10 - uVar20) - uVar21;
            if (iVar11 != 0) {
              memmove(local_158.Data + (int)uVar21,local_158.Data + (int)uVar21 + (int)uVar20,
                      (longlong)iVar11);
              iVar10 = (int)local_150;
            }
            local_150 = CONCAT44(local_150._4_4_,iVar10 - uVar20);
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,&local_158,iVar10 - uVar20,(int *)((longlong)&local_150 + 4));
            goto LAB_14ea13c3e;
          }
        }
      }
      *pEVar4 = Success;
      (__return_storage_ptr__->AllocatorInstance).Data = local_158.Data;
      __return_storage_ptr__->ArrayNum = iVar10;
      local_158.Data = (FScriptContainerElement *)0x0;
      __return_storage_ptr__->ArrayMax = local_150._4_4_;
      local_150 = 0;
      if ((longlong *)local_148.DataPtr != (longlong *)0x0) {
        (*(code *)**(undefined8 **)local_148.DataPtr)(local_148.DataPtr,1);
      }
      if (bVar7) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar5) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (!bVar6) {
        return __return_storage_ptr__;
      }
      if (FVar19 == (FName)0x0) {
        return __return_storage_ptr__;
      }
      if (FThreadStats::bPrimaryDisableForever != false) {
        return __return_storage_ptr__;
      }
      if (FThreadStats::TlsSlot == 0xffffffff) {
        return __return_storage_ptr__;
      }
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        pFVar14 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(pFVar14);
      }
      if (this_00->ScopeCount <= this_00->bWaitForExplicitFlush) {
        return __return_storage_ptr__;
      }
      local_d0.NameAndInfo.Number = uVar18 & 0xffff6fff | 0x6000;
      local_d0.NameAndInfo.Index.Value = FVar17.Value;
      QueryPerformanceCounter(&local_108);
      local_d0.StatData.Pad[4] = '\0';
      local_d0.StatData.Pad[5] = '\0';
      local_d0.StatData.Pad[6] = '\0';
      local_d0.StatData.Pad[7] = '\0';
      local_d0.StatData.Pad[0] = local_108.s.LowPart._0_1_;
      local_d0.StatData.Pad[1] = local_108.s.LowPart._1_1_;
      local_d0.StatData.Pad[2] = local_108.s.LowPart._2_1_;
      local_d0.StatData.Pad[3] = local_108.s.LowPart._3_1_;
      pFVar16 = &local_d0;
    }
    else {
      (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      __return_storage_ptr__->ArrayNum = 0;
      __return_storage_ptr__->ArrayMax = 0;
      if (local_158.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data);
      }
      if ((longlong *)local_148.DataPtr != (longlong *)0x0) {
        (*(code *)**(undefined8 **)local_148.DataPtr)(local_148.DataPtr,1);
      }
      if (bVar7) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar5) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (!bVar6) {
        return __return_storage_ptr__;
      }
      if (FVar19 == (FName)0x0) {
        return __return_storage_ptr__;
      }
      if (FThreadStats::bPrimaryDisableForever != false) {
        return __return_storage_ptr__;
      }
      if (FThreadStats::TlsSlot == 0xffffffff) {
        return __return_storage_ptr__;
      }
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        pFVar14 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(pFVar14);
      }
      if (this_00->ScopeCount <= this_00->bWaitForExplicitFlush) {
        return __return_storage_ptr__;
      }
      local_e0.NameAndInfo.Number = uVar18 & 0xffff6fff | 0x6000;
      local_e0.NameAndInfo.Index.Value = FVar17.Value;
      QueryPerformanceCounter(&local_110);
      local_e0.StatData.Pad[4] = '\0';
      local_e0.StatData.Pad[5] = '\0';
      local_e0.StatData.Pad[6] = '\0';
      local_e0.StatData.Pad[7] = '\0';
      local_e0.StatData.Pad[0] = local_110.s.LowPart._0_1_;
      local_e0.StatData.Pad[1] = local_110.s.LowPart._1_1_;
      local_e0.StatData.Pad[2] = local_110.s.LowPart._2_1_;
      local_e0.StatData.Pad[3] = local_110.s.LowPart._3_1_;
      pFVar16 = &local_e0;
    }
  }
  FThreadStats::AddStatMessage(this_00,pFVar16);
  piVar1 = &this_00->ScopeCount;
  *piVar1 = *piVar1 + -1;
  iVar10 = *piVar1;
joined_r0x00014ea139e9:
  if (iVar10 == 0) {
    FThreadStats::Flush(this_00,false,false);
  }
  else if (FThreadStats::bIsRawStatsActive != false) {
    FThreadStats::FlushRawStats(this_00,false,false);
  }
  return __return_storage_ptr__;
}

// Encrypt_AES_256_GCM @ 14ea13e00

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
FEncryptionContextOpenSSL::Encrypt_AES_256_GCM
          (FEncryptionContextOpenSSL *this,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArrayView<unsigned_char_const_,int> *param_1,
          TArrayView<unsigned_char_const_,int> *param_2,
          TArrayView<unsigned_char_const_,int> *param_3,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_4,EPlatformCryptoResult *param_5)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uchar *puVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<_public:_class_TArray<unsigned_char,TSizedDefaultAllocator<32>_>___cdecl_FEncryptionContextOpenSSL::Encrypt_AES_256_GCM(TArrayView<unsigned_char_const_,int>,TArrayView<unsigned_char_const_,int>,TArrayView<unsigned_char_const_,int>,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&,EPlatformCryptoResult_&)_::_2_::FStat_STAT_OpenSSL_AES256_GCM_Encrypt>
  FVar12;
  FThreadStats *this_00;
  FThreadStatsPool *pFVar13;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar14;
  FScriptContainerElement *_Dst;
  FStatMessage *pFVar15;
  FNameEntryId FVar16;
  uint uVar17;
  FName FVar18;
  uint uVar19;
  uint uVar20;
  int local_res20 [2];
  ForAnyElementType local_1a8;
  undefined8 local_1a0;
  TArrayView<unsigned_char_const_,int> local_198;
  LARGE_INTEGER local_188;
  FColor_u_0 local_180 [2];
  FName local_178;
  FName local_170;
  LARGE_INTEGER local_160;
  LARGE_INTEGER local_158;
  LARGE_INTEGER local_150;
  LARGE_INTEGER local_148;
  FStatMessage local_140;
  FStatMessage local_130;
  FStatMessage local_120;
  FStatMessage local_110;
  FStatMessage local_100;
  undefined8 local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  FName local_b8;
  FName local_b0;
  uchar *local_a8;
  undefined8 uStack_a0;
  TArrayView<unsigned_char_const_,int> local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_OpenSSL_AES256_GCM_Encrypt ==
        (FThreadSafeStaticStat<_public:_class_TArray<unsigned_char,TSizedDefaultAllocator<32>_>___cdecl_FEncryptionContextOpenSSL::Encrypt_AES_256_GCM(TArrayView<unsigned_char_const_,int>,TArrayView<unsigned_char_const_,int>,TArrayView<unsigned_char_const_,int>,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&,EPlatformCryptoResult_&)_::_2_::FStat_STAT_OpenSSL_AES256_GCM_Encrypt>
         )0x0) {
      pFVar11 = ::FName::FName(&local_b8,"STAT_OpenSSL_AES256_GCM_Encrypt");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenSSL_AES256_GCM_Encrypt,*pFVar11,
                 L"OpenSSL AES256 GCM Encrypt","STATGROUP_PlatformCrypto","STATCAT_Advanced",
                 L"PlatformCrypto",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar12 = StatPtr_STAT_OpenSSL_AES256_GCM_Encrypt;
  if (StatPtr_STAT_OpenSSL_AES256_GCM_Encrypt ==
      (FThreadSafeStaticStat<_public:_class_TArray<unsigned_char,TSizedDefaultAllocator<32>_>___cdecl_FEncryptionContextOpenSSL::Encrypt_AES_256_GCM(TArrayView<unsigned_char_const_,int>,TArrayView<unsigned_char_const_,int>,TArrayView<unsigned_char_const_,int>,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&,EPlatformCryptoResult_&)_::_2_::FStat_STAT_OpenSSL_AES256_GCM_Encrypt>
       )0x0) {
    pFVar11 = ::FName::FName(&local_b0,"STAT_OpenSSL_AES256_GCM_Encrypt");
    FVar12 = (FThreadSafeStaticStat<_public:_class_TArray<unsigned_char,TSizedDefaultAllocator<32>_>___cdecl_FEncryptionContextOpenSSL::Encrypt_AES_256_GCM(TArrayView<unsigned_char_const_,int>,TArrayView<unsigned_char_const_,int>,TArrayView<unsigned_char_const_,int>,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&,EPlatformCryptoResult_&)_::_2_::FStat_STAT_OpenSSL_AES256_GCM_Encrypt>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenSSL_AES256_GCM_Encrypt,
                          *pFVar11,L"OpenSSL AES256 GCM Encrypt","STATGROUP_PlatformCrypto",
                          "STATCAT_Advanced",L"PlatformCrypto",true,true,ST_int64,true,false,
                          MCR_Invalid);
  }
  FVar18 = *(FName *)FVar12;
  bVar4 = false;
  bVar6 = false;
  local_170.ComparisonIndex.Value = 0;
  local_170.Number = 0;
  FVar16 = FVar18.ComparisonIndex.Value;
  uVar17 = FVar18.Number;
  if ((FVar16.Value == 0) && (uVar17 == 0)) {
LAB_14ea13f68:
    bVar5 = false;
    FVar18 = local_170;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_180[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_180[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_178.ComparisonIndex.Value = FVar16.Value;
        local_178.Number = uVar17;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_178,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PlatformCrypto\\Source\\PlatformCryptoContext\\Private\\EncryptionContextOpenSSL.cpp"
                   ,0x9b);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14ea13f68;
    local_188.s.LowPart = FVar16.Value;
    local_188.s.HighPart = uVar17;
    FThreadStats::AddMessage(FVar18,CycleScopeStart);
    bVar5 = true;
  }
  param_4->ArrayNum = 0;
  if (param_4->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&param_4->AllocatorInstance,0,&param_4->ArrayMax);
  }
  local_98.DataPtr = param_2->DataPtr;
  local_98.ArrayNum = param_2->ArrayNum;
  local_98._12_4_ = *(undefined4 *)&param_2->field_0xc;
  *param_5 = Failure;
  local_a8 = param_3->DataPtr;
  uStack_a0 = *(undefined8 *)&param_3->ArrayNum;
  FPlatformCryptoEncryptor_AES_256_GCM_OpenSSL::Create(&local_198,&local_98);
  puVar7 = local_198.DataPtr;
  FVar16 = FVar18.ComparisonIndex.Value;
  uVar17 = FVar18.Number;
  if ((longlong *)local_198.DataPtr == (longlong *)0x0) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    if (bVar6) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (!bVar5) {
      return __return_storage_ptr__;
    }
    if (FVar18 == (FName)0x0) {
      return __return_storage_ptr__;
    }
    if (FThreadStats::bPrimaryDisableForever != false) {
      return __return_storage_ptr__;
    }
    if (FThreadStats::TlsSlot == 0xffffffff) {
      return __return_storage_ptr__;
    }
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      pFVar13 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(pFVar13);
    }
    if (this_00->ScopeCount <= this_00->bWaitForExplicitFlush) {
      return __return_storage_ptr__;
    }
    local_140.NameAndInfo.Number = uVar17 & 0xffff6fff | 0x6000;
    local_140.NameAndInfo.Index.Value = FVar16.Value;
    QueryPerformanceCounter(&local_188);
    local_140.StatData.Pad[4] = '\0';
    local_140.StatData.Pad[5] = '\0';
    local_140.StatData.Pad[6] = '\0';
    local_140.StatData.Pad[7] = '\0';
    local_140.StatData.Pad[0] = local_188.s.LowPart._0_1_;
    local_140.StatData.Pad[1] = local_188.s.LowPart._1_1_;
    local_140.StatData.Pad[2] = local_188.s.LowPart._2_1_;
    local_140.StatData.Pad[3] = local_188.s.LowPart._3_1_;
    FThreadStats::AddStatMessage(this_00,&local_140);
    piVar1 = &this_00->ScopeCount;
    *piVar1 = *piVar1 + -1;
    iVar9 = *piVar1;
  }
  else {
    local_1a8.Data = (FScriptContainerElement *)0x0;
    local_1a0 = 0;
    lVar2 = *(longlong *)local_198.DataPtr;
    local_88 = *(undefined4 *)&param_1->DataPtr;
    uStack_84 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
    iStack_80 = param_1->ArrayNum;
    uStack_7c = *(undefined4 *)&param_1->field_0xc;
    iVar9 = (**(code **)(lVar2 + 0x30))(local_198.DataPtr,&local_88);
    iVar10 = (**(code **)(lVar2 + 0x40))(puVar7);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar9 + iVar10,&local_1a8,(int *)&local_1a0,(int *)((longlong)&local_1a0 + 4));
    puVar7 = local_198.DataPtr;
    iStack_e0 = (int)local_1a0;
    local_res20[0] = 0;
    pcVar3 = *(code **)(*(longlong *)local_198.DataPtr + 0x38);
    local_e8 = local_1a8.Data;
    if (((int)local_1a0 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      pTVar14 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar14;
    }
    local_78 = (undefined4)local_e8;
    uStack_74 = local_e8._4_4_;
    iStack_70 = iStack_e0;
    uStack_6c = uStack_dc;
    local_68 = *(undefined4 *)&param_1->DataPtr;
    uStack_64 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
    iStack_60 = param_1->ArrayNum;
    uStack_5c = *(undefined4 *)&param_1->field_0xc;
    iVar9 = (*pcVar3)(puVar7,&local_68,&local_78,local_res20);
    puVar7 = local_198.DataPtr;
    if (iVar9 == 0) {
      local_198.ArrayNum = 0;
      pcVar3 = *(code **)(*(longlong *)local_198.DataPtr + 0x48);
      local_d8 = local_1a8.Data + local_res20[0];
      iStack_d0 = (int)local_1a0 - local_res20[0];
      if ((iStack_d0 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        pTVar14 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar14;
      }
      local_58 = (undefined4)local_d8;
      uStack_54 = local_d8._4_4_;
      iStack_50 = iStack_d0;
      uStack_4c = uStack_cc;
      iVar9 = (*pcVar3)(puVar7,&local_58);
      if (iVar9 != 0) {
        (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        __return_storage_ptr__->ArrayNum = 0;
        __return_storage_ptr__->ArrayMax = 0;
        if (local_1a8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.Data);
        }
        if ((longlong *)local_198.DataPtr != (longlong *)0x0) {
          (*(code *)**(undefined8 **)local_198.DataPtr)(local_198.DataPtr,1);
        }
        if (bVar6) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if (bVar4) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if (!bVar5) {
          return __return_storage_ptr__;
        }
        if (FVar18 == (FName)0x0) {
          return __return_storage_ptr__;
        }
        if (FThreadStats::bPrimaryDisableForever != false) {
          return __return_storage_ptr__;
        }
        if (FThreadStats::TlsSlot == 0xffffffff) {
          return __return_storage_ptr__;
        }
        this_00 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_00 == (FThreadStats *)0x0) {
          pFVar13 = FThreadStatsPool::Get();
          this_00 = FThreadStatsPool::GetFromPool(pFVar13);
        }
        if (this_00->ScopeCount <= this_00->bWaitForExplicitFlush) {
          return __return_storage_ptr__;
        }
        local_120.NameAndInfo.Number = uVar17 & 0xffff6fff | 0x6000;
        local_120.NameAndInfo.Index.Value = FVar16.Value;
        QueryPerformanceCounter(&local_158);
        local_120.StatData.Pad[4] = '\0';
        local_120.StatData.Pad[5] = '\0';
        local_120.StatData.Pad[6] = '\0';
        local_120.StatData.Pad[7] = '\0';
        local_120.StatData.Pad[0] = local_158.s.LowPart._0_1_;
        local_120.StatData.Pad[1] = local_158.s.LowPart._1_1_;
        local_120.StatData.Pad[2] = local_158.s.LowPart._2_1_;
        local_120.StatData.Pad[3] = local_158.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_00,&local_120);
        piVar1 = &this_00->ScopeCount;
        *piVar1 = *piVar1 + -1;
        iVar9 = *piVar1;
        goto joined_r0x00014ea143ac;
      }
      uVar20 = local_198.ArrayNum + local_res20[0];
      if ((int)local_1a0 < (int)uVar20) {
        iVar10 = uVar20 - (int)local_1a0;
        iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,iVar10,&local_1a8,(int *)&local_1a0,(int *)((longlong)&local_1a0 + 4)
                          );
        memset(local_1a8.Data + iVar9,0,(longlong)iVar10);
      }
      else {
        if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
        }
        if ((int)uVar20 < (int)local_1a0) {
          uVar19 = (int)local_1a0 - uVar20;
          if ((int)(uVar20 | uVar19) < 0) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              );
            if (bVar8) {
              pcVar3 = (code *)swi(3);
              pTVar14 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
              return pTVar14;
            }
          }
          if (uVar19 != 0) {
            iVar10 = ((int)local_1a0 - uVar19) - uVar20;
            iVar9 = (int)local_1a0;
            if (iVar10 != 0) {
              memmove(local_1a8.Data + (int)uVar20,local_1a8.Data + (int)uVar20 + (int)uVar19,
                      (longlong)iVar10);
              iVar9 = (int)local_1a0;
            }
            local_1a0 = CONCAT44(local_1a0._4_4_,iVar9 - uVar19);
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,&local_1a8,iVar9 - uVar19,(int *)((longlong)&local_1a0 + 4));
          }
        }
      }
      uVar20 = (**(code **)(*(longlong *)local_198.DataPtr + 0x20))();
      iVar9 = param_4->ArrayNum;
      piVar1 = &param_4->ArrayNum;
      if (iVar9 < (int)uVar20) {
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,uVar20 - iVar9,&param_4->AllocatorInstance,piVar1,&param_4->ArrayMax);
      }
      else {
        if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
        }
        if ((int)uVar20 < iVar9) {
          uVar19 = iVar9 - uVar20;
          if (((int)(uVar19 | uVar20) < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar8)) {
            pcVar3 = (code *)swi(3);
            pTVar14 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar14;
          }
          if (uVar19 != 0) {
            _Dst = (param_4->AllocatorInstance).Data + (int)uVar20;
            iVar9 = (*piVar1 - uVar19) - uVar20;
            if (iVar9 != 0) {
              memmove(_Dst,_Dst + (int)uVar19,(longlong)iVar9);
            }
            *piVar1 = *piVar1 - uVar19;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,&param_4->AllocatorInstance,*piVar1,&param_4->ArrayMax);
          }
        }
      }
      puVar7 = local_198.DataPtr;
      local_198._12_4_ = 0;
      pcVar3 = *(code **)(*(longlong *)local_198.DataPtr + 0x28);
      local_c8 = (param_4->AllocatorInstance).Data;
      iVar9 = *piVar1;
      if ((iVar9 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        pTVar14 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar14;
      }
      local_48 = (undefined4)local_c8;
      uStack_44 = local_c8._4_4_;
      uStack_3c = uStack_bc;
      iStack_c0 = iVar9;
      iStack_40 = iVar9;
      iVar9 = (*pcVar3)(puVar7,&local_48);
      if (iVar9 == 0) {
        TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum(param_4,local_198._12_4_,Default);
        *param_5 = Success;
        (__return_storage_ptr__->AllocatorInstance).Data = local_1a8.Data;
        __return_storage_ptr__->ArrayNum = (int)local_1a0;
        iVar9 = local_1a0._4_4_;
        local_1a0 = 0;
        local_1a8.Data = (FScriptContainerElement *)0x0;
        __return_storage_ptr__->ArrayMax = iVar9;
        if ((longlong *)local_198.DataPtr != (longlong *)0x0) {
          (*(code *)**(undefined8 **)local_198.DataPtr)(local_198.DataPtr,1);
        }
        if (bVar6) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if (bVar4) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if (!bVar5) {
          return __return_storage_ptr__;
        }
        if (FVar18 == (FName)0x0) {
          return __return_storage_ptr__;
        }
        if (FThreadStats::bPrimaryDisableForever != false) {
          return __return_storage_ptr__;
        }
        if (FThreadStats::TlsSlot == 0xffffffff) {
          return __return_storage_ptr__;
        }
        this_00 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_00 == (FThreadStats *)0x0) {
          pFVar13 = FThreadStatsPool::Get();
          this_00 = FThreadStatsPool::GetFromPool(pFVar13);
        }
        if (this_00->ScopeCount <= this_00->bWaitForExplicitFlush) {
          return __return_storage_ptr__;
        }
        local_100.NameAndInfo.Number = uVar17 & 0xffff6fff | 0x6000;
        local_100.NameAndInfo.Index.Value = FVar16.Value;
        QueryPerformanceCounter(&local_148);
        local_100.StatData.Pad[4] = '\0';
        local_100.StatData.Pad[5] = '\0';
        local_100.StatData.Pad[6] = '\0';
        local_100.StatData.Pad[7] = '\0';
        local_100.StatData.Pad[0] = local_148.s.LowPart._0_1_;
        local_100.StatData.Pad[1] = local_148.s.LowPart._1_1_;
        local_100.StatData.Pad[2] = local_148.s.LowPart._2_1_;
        local_100.StatData.Pad[3] = local_148.s.LowPart._3_1_;
        pFVar15 = &local_100;
      }
      else {
        *piVar1 = 0;
        if (param_4->ArrayMax < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,0,&param_4->AllocatorInstance,0,&param_4->ArrayMax);
        }
        (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        __return_storage_ptr__->ArrayNum = 0;
        __return_storage_ptr__->ArrayMax = 0;
        if (local_1a8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.Data);
        }
        if ((longlong *)local_198.DataPtr != (longlong *)0x0) {
          (*(code *)**(undefined8 **)local_198.DataPtr)(local_198.DataPtr,1);
        }
        if (bVar6) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if (bVar4) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if (!bVar5) {
          return __return_storage_ptr__;
        }
        if (FVar18 == (FName)0x0) {
          return __return_storage_ptr__;
        }
        if (FThreadStats::bPrimaryDisableForever != false) {
          return __return_storage_ptr__;
        }
        if (FThreadStats::TlsSlot == 0xffffffff) {
          return __return_storage_ptr__;
        }
        this_00 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_00 == (FThreadStats *)0x0) {
          pFVar13 = FThreadStatsPool::Get();
          this_00 = FThreadStatsPool::GetFromPool(pFVar13);
        }
        if (this_00->ScopeCount <= this_00->bWaitForExplicitFlush) {
          return __return_storage_ptr__;
        }
        local_110.NameAndInfo.Number = uVar17 & 0xffff6fff | 0x6000;
        local_110.NameAndInfo.Index.Value = FVar16.Value;
        QueryPerformanceCounter(&local_150);
        local_110.StatData.Pad[4] = '\0';
        local_110.StatData.Pad[5] = '\0';
        local_110.StatData.Pad[6] = '\0';
        local_110.StatData.Pad[7] = '\0';
        local_110.StatData.Pad[0] = local_150.s.LowPart._0_1_;
        local_110.StatData.Pad[1] = local_150.s.LowPart._1_1_;
        local_110.StatData.Pad[2] = local_150.s.LowPart._2_1_;
        local_110.StatData.Pad[3] = local_150.s.LowPart._3_1_;
        pFVar15 = &local_110;
      }
    }
    else {
      (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      __return_storage_ptr__->ArrayNum = 0;
      __return_storage_ptr__->ArrayMax = 0;
      if (local_1a8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.Data);
      }
      if ((longlong *)local_198.DataPtr != (longlong *)0x0) {
        (*(code *)**(undefined8 **)local_198.DataPtr)(local_198.DataPtr,1);
      }
      if (bVar6) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar4) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (!bVar5) {
        return __return_storage_ptr__;
      }
      if (FVar18 == (FName)0x0) {
        return __return_storage_ptr__;
      }
      if (FThreadStats::bPrimaryDisableForever != false) {
        return __return_storage_ptr__;
      }
      if (FThreadStats::TlsSlot == 0xffffffff) {
        return __return_storage_ptr__;
      }
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        pFVar13 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(pFVar13);
      }
      if (this_00->ScopeCount <= this_00->bWaitForExplicitFlush) {
        return __return_storage_ptr__;
      }
      local_130.NameAndInfo.Number = uVar17 & 0xffff6fff | 0x6000;
      local_130.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_160);
      local_130.StatData.Pad[4] = '\0';
      local_130.StatData.Pad[5] = '\0';
      local_130.StatData.Pad[6] = '\0';
      local_130.StatData.Pad[7] = '\0';
      local_130.StatData.Pad[0] = local_160.s.LowPart._0_1_;
      local_130.StatData.Pad[1] = local_160.s.LowPart._1_1_;
      local_130.StatData.Pad[2] = local_160.s.LowPart._2_1_;
      local_130.StatData.Pad[3] = local_160.s.LowPart._3_1_;
      pFVar15 = &local_130;
    }
    FThreadStats::AddStatMessage(this_00,pFVar15);
    piVar1 = &this_00->ScopeCount;
    *piVar1 = *piVar1 + -1;
    iVar9 = *piVar1;
  }
joined_r0x00014ea143ac:
  if (iVar9 == 0) {
    FThreadStats::Flush(this_00,false,false);
  }
  else if (FThreadStats::bIsRawStatsActive != false) {
    FThreadStats::FlushRawStats(this_00,false,false);
  }
  return __return_storage_ptr__;
}

// Finalize @ 14ea148f0

/* WARNING: Enum "Type": Some values do not have unique names */

EPlatformCryptoResult __thiscall
FSHA256HasherOpenSSL::Finalize(FSHA256HasherOpenSSL *this,TArrayView<unsigned_char,int> *param_1)

{
  FStaticBasicLogRecord *pFVar1;
  
  if (((this->Inner).Ptr)->State == NeedsInit) {
    if ((byte)LogPlatformCryptoOpenSSL._0_1_ < 3) {
      return Failure;
    }
    pFVar1 = &::LOG_Static;
  }
  else {
    if (0x1f < param_1->ArrayNum) {
      SHA256_Final(param_1->DataPtr);
      ((this->Inner).Ptr)->State = NeedsInit;
      return Success;
    }
    if ((byte)LogPlatformCryptoOpenSSL._0_1_ < 3) {
      return Failure;
    }
    pFVar1 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar1,(FLogCategoryBase *)&LogPlatformCryptoOpenSSL);
  return Failure;
}

// GenerateKey_RSA @ 14ea14970

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FEncryptionContextOpenSSL::GenerateKey_RSA
          (FEncryptionContextOpenSSL *this,int param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_3,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bignum_st *pbVar4;
  bignum_st *pbVar5;
  bignum_st *pbVar6;
  
  uVar1 = param_1 & 0x80000007;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffff8) + 1;
  }
  if (uVar1 != 0) {
    if (2 < (byte)LogPlatformCryptoOpenSSL._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPlatformCryptoOpenSSL)
      ;
    }
    return false;
  }
  uVar2 = RSA_new();
  uVar3 = BN_new();
  BN_set_word(uVar3,0x10001);
  RSA_generate_key_ex(uVar2,param_1,uVar3,0);
  pbVar4 = (bignum_st *)RSA_get0_n(uVar2);
  pbVar5 = (bignum_st *)RSA_get0_e(uVar2);
  pbVar6 = (bignum_st *)RSA_get0_d(uVar2);
  FPlatformCryptoUtilsOpenSSL::BigNumToArray(pbVar4,param_4);
  FPlatformCryptoUtilsOpenSSL::BigNumToArray(pbVar5,param_2);
  FPlatformCryptoUtilsOpenSSL::BigNumToArray(pbVar6,param_3);
  RSA_free(uVar2);
  return true;
}

// GetKeySize_RSA @ 14ea14a70

int __thiscall
FEncryptionContextOpenSSL::GetKeySize_RSA(FEncryptionContextOpenSSL *this,void *param_1)

{
  int iVar1;
  
  iVar1 = RSA_size(param_1);
  return iVar1;
}

// GetMaxDataSize_RSA @ 14ea14a80

int __thiscall
FEncryptionContextOpenSSL::GetMaxDataSize_RSA(FEncryptionContextOpenSSL *this,void *param_1)

{
  int iVar1;
  
  iVar1 = RSA_size(param_1);
  return iVar1 + -0xb;
}

// GetPublicKey_RSA @ 14ea14aa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __thiscall
FEncryptionContextOpenSSL::GetPublicKey_RSA
          (FEncryptionContextOpenSSL *this,TStringView<wchar_t> *param_1)

{
  uint uVar1;
  wchar_t *_Str;
  code *pcVar2;
  bool bVar3;
  size_t sVar4;
  uchar *puVar5;
  void *pvVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined1 auStack_d8 [32];
  FScriptContainerElement local_b8 [128];
  ForAnyElementType local_38;
  FScriptContainerElement *local_30;
  int local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  _Str = param_1->DataPtr;
  local_38.Data = (FScriptContainerElement *)0x0;
  if (_Str == (wchar_t *)0x0) {
    local_30 = (FScriptContainerElement *)0x0;
    local_28 = 0;
    goto LAB_14ea14b99;
  }
  sVar4 = wcslen(_Str);
  local_28 = UE::Core::Private::GetConvertedLength((uchar *)0x0,_Str,(int)sVar4);
  uVar1 = local_28 + 1;
  uVar8 = uVar1;
  if (uVar1 < 0x81) {
    if (local_38.Data != (FScriptContainerElement *)0x0) {
      uVar8 = 0;
      goto LAB_14ea14b16;
    }
  }
  else {
LAB_14ea14b16:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_38,0,uVar8,1);
  }
  local_30 = local_b8;
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    local_30 = local_38.Data;
  }
  puVar5 = UE::Core::Private::Convert((uchar *)local_30,uVar1,_Str,(int)sVar4 + 1);
  if ((puVar5 == (uchar *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                         ,0x25,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pvVar6 = (void *)(*pcVar2)();
    return pvVar6;
  }
LAB_14ea14b99:
  uVar7 = BIO_new_mem_buf(local_30,local_28);
  pvVar6 = (void *)PEM_read_bio_RSA_PUBKEY(uVar7,0,0,0);
  BIO_free(uVar7);
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return pvVar6;
}

// Init @ 14ea14c10

/* WARNING: Enum "Type": Some values do not have unique names */

EPlatformCryptoResult __thiscall FSHA256HasherOpenSSL::Init(FSHA256HasherOpenSSL *this)

{
  EState EVar1;
  
  EVar1 = ((this->Inner).Ptr)->State;
  if (EVar1 == ReadyNeedsFinalize) {
    if (2 < (byte)LogPlatformCryptoOpenSSL._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPlatformCryptoOpenSSL)
      ;
    }
    return Failure;
  }
  if (EVar1 != Ready) {
    SHA256_Init();
    ((this->Inner).Ptr)->State = Ready;
  }
  return Success;
}

// Update @ 14ea14c70

/* WARNING: Enum "Type": Some values do not have unique names */

EPlatformCryptoResult __thiscall
FSHA256HasherOpenSSL::Update
          (FSHA256HasherOpenSSL *this,TArrayView<unsigned_char_const_,int> *param_1)

{
  FImplDetails *pFVar1;
  
  pFVar1 = (this->Inner).Ptr;
  if (pFVar1->State == NeedsInit) {
    if (2 < (byte)LogPlatformCryptoOpenSSL._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPlatformCryptoOpenSSL)
      ;
    }
    return Failure;
  }
  SHA256_Update(pFVar1,param_1->DataPtr,(longlong)param_1->ArrayNum);
  ((this->Inner).Ptr)->State = ReadyNeedsFinalize;
  return Success;
}

// `dynamic_atexit_destructor_for_'LogPlatformCryptoOpenSSL'' @ 15046d8d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogPlatformCryptoOpenSSL__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogPlatformCryptoOpenSSL);
  return;
}

