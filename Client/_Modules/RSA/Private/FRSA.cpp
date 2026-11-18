// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RSA
// Functions: 8

// CreateKey @ 142a3a2b0

void * __cdecl
FRSA::CreateKey(TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,
               TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2,
               TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  IEngineCrypto *pIVar2;
  TArrayView<unsigned_char_const_,int> *pTVar3;
  void *pvVar4;
  uchar *local_68;
  undefined8 uStack_60;
  uchar *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TArrayView<unsigned_char_const_,int> local_38;
  TArrayView<unsigned_char_const_,int> local_28;
  TArrayView<unsigned_char_const_,int> local_18;
  
  pIVar2 = GetEngineCrypto();
  pvVar4 = (void *)0x0;
  if (pIVar2 != (IEngineCrypto *)0x0) {
    pcVar1 = *(code **)((longlong)*pIVar2 + 8);
    pTVar3 = TArrayView<unsigned_char_const_,int>::
             TArrayView<unsigned_char_const_,int><TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
                       (&local_38,param_3);
    local_68 = pTVar3->DataPtr;
    uStack_60 = *(undefined8 *)&pTVar3->ArrayNum;
    pTVar3 = TArrayView<unsigned_char_const_,int>::
             TArrayView<unsigned_char_const_,int><TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
                       (&local_28,param_2);
    local_58 = pTVar3->DataPtr;
    uStack_50 = *(undefined8 *)&pTVar3->ArrayNum;
    pTVar3 = TArrayView<unsigned_char_const_,int>::
             TArrayView<unsigned_char_const_,int><TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
                       (&local_18,param_1);
    local_48 = *(undefined4 *)&pTVar3->DataPtr;
    uStack_44 = *(undefined4 *)((longlong)&pTVar3->DataPtr + 4);
    iStack_40 = pTVar3->ArrayNum;
    uStack_3c = *(undefined4 *)&pTVar3->field_0xc;
    pvVar4 = (void *)(*pcVar1)(pIVar2,&local_48,&local_58,&local_68);
  }
  return pvVar4;
}

// DecryptPrivate @ 142a3a380

int __cdecl
FRSA::DecryptPrivate
          (TArrayView<unsigned_char_const_,int> *param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2,void *param_3)

{
  int iVar1;
  IEngineCrypto *pIVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  pIVar2 = GetEngineCrypto();
  if (pIVar2 != (IEngineCrypto *)0x0) {
    local_18 = *(undefined4 *)&param_1->DataPtr;
    uStack_14 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
    iStack_10 = param_1->ArrayNum;
    uStack_c = *(undefined4 *)&param_1->field_0xc;
    iVar1 = (**(code **)((longlong)*pIVar2 + 0x40))(pIVar2,&local_18,param_2,param_3);
    return iVar1;
  }
  return -1;
}

// DecryptPublic @ 142a3a3f0

int __cdecl
FRSA::DecryptPublic(TArrayView<unsigned_char_const_,int> *param_1,
                   TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2,void *param_3)

{
  int iVar1;
  IEngineCrypto *pIVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  pIVar2 = GetEngineCrypto();
  if (pIVar2 != (IEngineCrypto *)0x0) {
    local_18 = *(undefined4 *)&param_1->DataPtr;
    uStack_14 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
    iStack_10 = param_1->ArrayNum;
    uStack_c = *(undefined4 *)&param_1->field_0xc;
    iVar1 = (**(code **)((longlong)*pIVar2 + 0x38))(pIVar2,&local_18,param_2,param_3);
    return iVar1;
  }
  return -1;
}

// DestroyKey @ 142a3a460

void __cdecl FRSA::DestroyKey(void *param_1)

{
  IEngineCrypto *pIVar1;
  
  pIVar1 = GetEngineCrypto();
  if (pIVar1 != (IEngineCrypto *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142a3a485. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1,param_1,*(code **)((longlong)*pIVar1 + 0x10));
    return;
  }
  return;
}

// EncryptPrivate @ 142a3a4a0

int __cdecl
FRSA::EncryptPrivate
          (TArrayView<unsigned_char_const_,int> *param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2,void *param_3)

{
  int iVar1;
  IEngineCrypto *pIVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  pIVar2 = GetEngineCrypto();
  if (pIVar2 != (IEngineCrypto *)0x0) {
    local_18 = *(undefined4 *)&param_1->DataPtr;
    uStack_14 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
    iStack_10 = param_1->ArrayNum;
    uStack_c = *(undefined4 *)&param_1->field_0xc;
    iVar1 = (**(code **)((longlong)*pIVar2 + 0x30))(pIVar2,&local_18,param_2,param_3);
    return iVar1;
  }
  return -1;
}

// EncryptPublic @ 142a3a510

int __cdecl
FRSA::EncryptPublic(TArrayView<unsigned_char_const_,int> *param_1,
                   TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2,void *param_3)

{
  int iVar1;
  IEngineCrypto *pIVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  pIVar2 = GetEngineCrypto();
  if (pIVar2 != (IEngineCrypto *)0x0) {
    local_18 = *(undefined4 *)&param_1->DataPtr;
    uStack_14 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
    iStack_10 = param_1->ArrayNum;
    uStack_c = *(undefined4 *)&param_1->field_0xc;
    iVar1 = (**(code **)((longlong)*pIVar2 + 0x28))(pIVar2,&local_18,param_2,param_3);
    return iVar1;
  }
  return -1;
}

// GetKeySize @ 142a3a810

int __cdecl FRSA::GetKeySize(void *param_1)

{
  int iVar1;
  IEngineCrypto *pIVar2;
  
  pIVar2 = GetEngineCrypto();
  if (pIVar2 != (IEngineCrypto *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142a3a835. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)((longlong)*pIVar2 + 0x18))
                      (pIVar2,param_1,*(code **)((longlong)*pIVar2 + 0x18));
    return iVar1;
  }
  return 0;
}

// GetMaxDataSize @ 142a3a850

int __cdecl FRSA::GetMaxDataSize(void *param_1)

{
  int iVar1;
  IEngineCrypto *pIVar2;
  
  pIVar2 = GetEngineCrypto();
  if (pIVar2 != (IEngineCrypto *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142a3a875. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)((longlong)*pIVar2 + 0x20))
                      (pIVar2,param_1,*(code **)((longlong)*pIVar2 + 0x20));
    return iVar1;
  }
  return 0;
}

