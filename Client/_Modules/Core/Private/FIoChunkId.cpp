// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// FromHex @ 14175a390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FIoChunkId * __cdecl
FIoChunkId::FromHex(FIoChunkId *__return_storage_ptr__,TStringView<wchar_t> *param_1)

{
  undefined1 auStack_58 [32];
  TStringView<wchar_t> local_38;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  if (param_1->Size == 0x18) {
    local_38.DataPtr = param_1->DataPtr;
    local_38.Size = param_1->Size;
    local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
    UE::String::HexToBytes(&local_38,(uchar *)&local_28);
    *(undefined8 *)__return_storage_ptr__->Id = local_28;
    *(undefined4 *)(__return_storage_ptr__->Id + 8) = local_20;
  }
  else {
    *(undefined8 *)__return_storage_ptr__->Id = InvalidChunkId.Id._0_8_;
    *(undefined4 *)(__return_storage_ptr__->Id + 8) = InvalidChunkId.Id._8_4_;
  }
  return __return_storage_ptr__;
}

// ToString @ 14177f7b0

void __thiscall FIoChunkId::ToString(FIoChunkId *this,FString *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uStack_1c;
  TArrayView<unsigned_char_const_,int> local_18;
  
  ::FString::Reset(param_1,0);
  piVar1 = &(param_1->Data).ArrayNum;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x19,(ForAnyElementType *)param_1,piVar1,&(param_1->Data).ArrayMax);
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = 0xc;
  local_18.DataPtr = this->Id;
  UE::String::BytesToHexLower(&local_18,(wchar_t *)(param_1->Data).AllocatorInstance.Data);
  uVar5 = *piVar1 - 1;
  uVar4 = 0;
  if ((int)uVar5 < *piVar1) {
    uVar4 = ~uVar5 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(undefined2 *)((param_1->Data).AllocatorInstance.Data + (longlong)*piVar1 * 2 + -2) = 0;
  return;
}

