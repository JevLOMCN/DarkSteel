// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetCore
// Functions: 5

// ClearBit @ 1441d7870

void __thiscall UE::Net::FNetBitArray::ClearBit(FNetBitArray *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  pFVar1 = (this->Storage).AllocatorInstance.Data;
  if (this->BitCount <= param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2b7,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(uint *)(pFVar1 + (ulonglong)(param_1 >> 5) * 4) =
       *(uint *)(pFVar1 + (ulonglong)(param_1 >> 5) * 4) & ~(1 << (param_1 & 0x1f));
  return;
}

// GetBit @ 1441dc2b0

bool __thiscall UE::Net::FNetBitArray::GetBit(FNetBitArray *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  pFVar1 = (this->Storage).AllocatorInstance.Data;
  if (this->BitCount <= param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2c1,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return (*(uint *)(pFVar1 + (ulonglong)(param_1 >> 5) * 4) >> (param_1 & 0x1f) & 1) != 0;
}

// SetBit @ 1441ea7d0

void __thiscall UE::Net::FNetBitArray::SetBit(FNetBitArray *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  pFVar1 = (this->Storage).AllocatorInstance.Data;
  if (this->BitCount <= param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2a2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(uint *)(pFVar1 + (ulonglong)(param_1 >> 5) * 4) =
       *(uint *)(pFVar1 + (ulonglong)(param_1 >> 5) * 4) | 1 << (param_1 & 0x1f);
  return;
}

// SetNumBits @ 1441ebb10

void __thiscall UE::Net::FNetBitArray::SetNumBits(FNetBitArray *this,uint param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  this->BitCount = param_1;
  iVar6 = (this->Storage).ArrayNum;
  uVar7 = param_1 + 0x1f >> 5;
  if (iVar6 < (int)uVar7) {
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::AddZeroed(&this->Storage,uVar7 - iVar6);
  }
  else if ((int)uVar7 < iVar6) {
    iVar6 = iVar6 - uVar7;
    if (iVar6 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else if (iVar6 == 0) goto LAB_1441ebbb2;
    pFVar2 = (this->Storage).AllocatorInstance.Data + (ulonglong)uVar7 * 4;
    iVar5 = ((this->Storage).ArrayNum - iVar6) - uVar7;
    if (iVar5 != 0) {
      memmove(pFVar2,pFVar2 + (longlong)iVar6 * 4,(longlong)iVar5 << 2);
    }
    piVar1 = &(this->Storage).ArrayNum;
    *piVar1 = *piVar1 - iVar6;
  }
LAB_1441ebbb2:
  if (this->BitCount != 0) {
    pFVar2 = (this->Storage).AllocatorInstance.Data + (longlong)(this->Storage).ArrayNum * 4 + -4;
    *(uint *)pFVar2 = *(uint *)pFVar2 & 0xffffffffU >> (-(char)this->BitCount & 0x1fU);
  }
  return;
}

// ToString @ 1441ecad0

FString * __thiscall
UE::Net::FNetBitArray::ToString(FNetBitArray *this,FString *__return_storage_ptr__)

{
  FNetBitArrayHelper::CountSetBits
            ((uint *)(this->Storage).AllocatorInstance.Data,this->BitCount,0,0xffffffff);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%u bits set");
  return __return_storage_ptr__;
}

