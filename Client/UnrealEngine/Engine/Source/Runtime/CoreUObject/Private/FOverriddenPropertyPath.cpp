// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 9

// StaticStruct @ 1420e20f0

UScriptStruct * __cdecl FOverriddenPropertyPath::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOverriddenPropertyPath.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UScriptStruct_FOverriddenPropertyPath.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOverriddenPropertyPath,(UObject *)pUVar1,
                         L"OverriddenPropertyPath");
  }
  return Z_Registration_Info_UScriptStruct_FOverriddenPropertyPath.OuterSingleton;
}

// FOverriddenPropertyPath @ 1420ea330

FOverriddenPropertyPath * __thiscall
FOverriddenPropertyPath::FOverriddenPropertyPath
          (FOverriddenPropertyPath *this,FOverriddenPropertyPath *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  (this->Path).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Path).ArrayMax;
  iVar2 = (param_1->Path).ArrayNum;
  _Src = (param_1->Path).AllocatorInstance.Data;
  (this->Path).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
    memcpy((this->Path).AllocatorInstance.Data,_Src,(longlong)iVar2 << 3);
  }
  this->CachedHash = param_1->CachedHash;
  return this;
}

// FOverriddenPropertyPath @ 1420ea3c0

FOverriddenPropertyPath * __thiscall
FOverriddenPropertyPath::FOverriddenPropertyPath(FOverriddenPropertyPath *this,FName param_1)

{
  uint uVar1;
  
  (this->Path).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Path).ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,1,0,(ForAnyElementType *)this,1,&(this->Path).ArrayMax);
  *(FName *)(this->Path).AllocatorInstance.Data = param_1;
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  this->CachedHash = uVar1 + param_1.Number;
  return this;
}

// operator= @ 1420ec910

FOverriddenPropertyPath * __thiscall
FOverriddenPropertyPath::operator=(FOverriddenPropertyPath *this,FName param_1)

{
  uint uVar1;
  FName local_res8;
  
  local_res8 = param_1;
  TArray<FName,TSizedDefaultAllocator<32>_>::CopyToEmpty<FName,int>
            (&this->Path,&local_res8,1,(this->Path).ArrayMax);
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  this->CachedHash = uVar1 + param_1.Number;
  return this;
}

// operator+ @ 1420eea70

FOverriddenPropertyPath * __thiscall
FOverriddenPropertyPath::operator+
          (FOverriddenPropertyPath *this,FOverriddenPropertyPath *__return_storage_ptr__,
          FOverriddenPropertyPath *param_1)

{
  int *piVar1;
  FName *pFVar2;
  int iVar3;
  FName *pFVar4;
  uint uVar5;
  undefined1 local_res10 [8];
  
  FOverriddenPropertyPath(__return_storage_ptr__,this);
  iVar3 = (__return_storage_ptr__->Path).ArrayNum;
  uVar5 = (param_1->Path).ArrayNum + iVar3;
  if (-1 < (int)uVar5) {
    piVar1 = &(__return_storage_ptr__->Path).ArrayMax;
    if (*piVar1 < (int)uVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar5,(ForAnyElementType *)__return_storage_ptr__,iVar3,piVar1);
    }
    pFVar4 = (FName *)(param_1->Path).AllocatorInstance.Data;
    iVar3 = (param_1->Path).ArrayNum;
    pFVar2 = pFVar4 + iVar3;
    while( true ) {
      if ((param_1->Path).ArrayNum != iVar3) {
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar4 == pFVar2) break;
      operator+=(__return_storage_ptr__,*pFVar4);
      pFVar4 = pFVar4 + 1;
    }
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
}

// operator+ @ 1420eeb20

FOverriddenPropertyPath * __thiscall
FOverriddenPropertyPath::operator+
          (FOverriddenPropertyPath *this,FOverriddenPropertyPath *__return_storage_ptr__,
          FName param_1)

{
  FOverriddenPropertyPath(__return_storage_ptr__,this);
  operator+=(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// operator+= @ 1420f01f0

void __thiscall
FOverriddenPropertyPath::operator+=
          (FOverriddenPropertyPath *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FName *pFVar2;
  int iVar3;
  FName *pFVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  
  iVar3 = (this->Path).ArrayNum;
  uVar5 = param_1->ArrayNum + iVar3;
  if (-1 < (int)uVar5) {
    piVar1 = &(this->Path).ArrayMax;
    if (*piVar1 < (int)uVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar5,(ForAnyElementType *)this,iVar3,piVar1);
    }
    pFVar4 = (FName *)(param_1->AllocatorInstance).Data;
    iVar3 = param_1->ArrayNum;
    pFVar2 = pFVar4 + iVar3;
    while( true ) {
      if (param_1->ArrayNum != iVar3) {
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar4 == pFVar2) break;
      operator+=(this,*pFVar4);
      pFVar4 = pFVar4 + 1;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
}

// operator+= @ 1420f02a0

void __thiscall FOverriddenPropertyPath::operator+=(FOverriddenPropertyPath *this,FName param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  iVar2 = (this->Path).ArrayNum;
  piVar1 = &(this->Path).ArrayMax;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,(ForAnyElementType *)this,piVar1);
  }
  (this->Path).ArrayNum = iVar2 + 1;
  *(FName *)((this->Path).AllocatorInstance.Data + (longlong)iVar2 * 8) = param_1;
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  uVar3 = uVar3 + param_1.Number;
  uVar5 = this->CachedHash - uVar3 ^ uVar3 >> 0xd;
  uVar4 = (-0x61c88647 - uVar5) - uVar3 ^ uVar5 << 8;
  uVar6 = (uVar3 - uVar4) - uVar5 ^ uVar4 >> 0xd;
  uVar5 = (uVar5 - uVar6) - uVar4 ^ uVar6 >> 0xc;
  uVar3 = (uVar4 - uVar5) - uVar6 ^ uVar5 << 0x10;
  uVar6 = (uVar6 - uVar3) - uVar5 ^ uVar3 >> 5;
  uVar4 = (uVar5 - uVar6) - uVar3 ^ uVar6 >> 3;
  uVar3 = (uVar3 - uVar4) - uVar6 ^ uVar4 << 10;
  this->CachedHash = (uVar6 - uVar3) - uVar4 ^ uVar3 >> 0xf;
  return;
}

// ToString @ 1421170c0

FString * __thiscall
FOverriddenPropertyPath::ToString(FOverriddenPropertyPath *this,FString *__return_storage_ptr__)

{
  FName *pFVar1;
  int iVar2;
  bool bVar3;
  FName *pFVar4;
  int iVar5;
  FName local_res8;
  FString local_38;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  bVar3 = true;
  pFVar4 = (FName *)(this->Path).AllocatorInstance.Data;
  iVar2 = (this->Path).ArrayNum;
  pFVar1 = pFVar4 + iVar2;
  while( true ) {
    if ((this->Path).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (pFVar4 == pFVar1) break;
    if (bVar3) {
      bVar3 = false;
    }
    else {
      ::FString::AppendChars(__return_storage_ptr__,L".",1);
    }
    local_res8 = *pFVar4;
    ::FName::ToString(&local_res8,&local_38);
    iVar5 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar5);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar4 = pFVar4 + 1;
  }
  return __return_storage_ptr__;
}

