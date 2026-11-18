// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 3

// GetAlias @ 148fb11d0

TArrayView<int_const_,int> * __thiscall
FWeightedRandomSampler::GetAlias
          (FWeightedRandomSampler *this,TArrayView<int_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ForAnyElementType FVar4;
  TArrayView<int_const_,int> *pTVar5;
  
  FVar4 = (this->Alias).AllocatorInstance;
  if (((ulonglong)FVar4 & 1) != 0) {
    FVar4 = (ForAnyElementType)
            ((longlong)&(this->Alias).AllocatorInstance.field_0x0 + ((longlong)FVar4 >> 0x18));
  }
  iVar1 = (this->Alias).ArrayNum;
  __return_storage_ptr__->DataPtr = (int *)FVar4;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArrayView<int_const_,int> *)(*pcVar2)();
      return pTVar5;
    }
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetEntryIndex @ 148fb35d0

int __thiscall
FWeightedRandomSampler::GetEntryIndex(FWeightedRandomSampler *this,float param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  ForAnyElementType FVar5;
  uint uVar6;
  
  iVar4 = (this->Prob).ArrayNum;
  uVar6 = (uint)((float)iVar4 * param_1);
  uVar3 = 0;
  if ((int)uVar6 < iVar4) {
    uVar3 = ~uVar6 >> 0x1f;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar4 = (*pcVar1)();
    return iVar4;
  }
  FVar5 = (this->Prob).AllocatorInstance;
  if (((ulonglong)FVar5 & 1) != 0) {
    FVar5 = (ForAnyElementType)
            ((longlong)&(this->Prob).AllocatorInstance.field_0x0 + ((longlong)FVar5 >> 0x18));
  }
  if (*(float *)((longlong)FVar5 + (longlong)(int)uVar6 * 4) <= param_2) {
    uVar3 = 0;
    if ((int)uVar6 < (this->Alias).ArrayNum) {
      uVar3 = ~uVar6 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
    FVar5 = (this->Alias).AllocatorInstance;
    if (((ulonglong)FVar5 & 1) != 0) {
      FVar5 = (ForAnyElementType)
              ((longlong)&(this->Alias).AllocatorInstance.field_0x0 + ((longlong)FVar5 >> 0x18));
    }
    uVar6 = *(uint *)((longlong)FVar5 + (longlong)(int)uVar6 * 4);
  }
  return uVar6;
}

// GetProb @ 148fb6cc0

TArrayView<float_const_,int> * __thiscall
FWeightedRandomSampler::GetProb
          (FWeightedRandomSampler *this,TArrayView<float_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ForAnyElementType FVar4;
  TArrayView<float_const_,int> *pTVar5;
  
  FVar4 = (this->Prob).AllocatorInstance;
  if (((ulonglong)FVar4 & 1) != 0) {
    FVar4 = (ForAnyElementType)
            ((longlong)&(this->Prob).AllocatorInstance.field_0x0 + ((longlong)FVar4 >> 0x18));
  }
  iVar1 = (this->Prob).ArrayNum;
  __return_storage_ptr__->DataPtr = (float *)FVar4;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArrayView<float_const_,int> *)(*pcVar2)();
      return pTVar5;
    }
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

