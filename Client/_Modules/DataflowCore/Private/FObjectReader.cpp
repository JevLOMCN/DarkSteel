// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 2

// Serialize @ 144460680

void __thiscall FObjectReader::Serialize(FObjectReader *this,void *param_1,long64 param_2)

{
  longlong lVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  
  if ((param_2 != 0) && ((this->_padding_ & 0x200) == 0)) {
    lVar6 = (**(code **)(this->_padding_ + 0x30))();
    lVar1 = this->_padding_;
    if (lVar1 + param_2 <= lVar6) {
      uVar7 = (uint)lVar1;
      pTVar2 = this->Bytes;
      if ((lVar1 != (int)uVar7) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IntFitsIn<OutType>(In)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                             ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar4
         )) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar5 = 0;
      if ((int)uVar7 < pTVar2->ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      memcpy(param_1,(pTVar2->AllocatorInstance).Data + (int)uVar7,param_2);
      this->_padding_ = this->_padding_ + param_2;
      return;
    }
    FArchiveState::SetError((FArchiveState *)this);
  }
  return;
}

// TotalSize @ 144467140

long64 __thiscall FObjectReader::TotalSize(FObjectReader *this)

{
  return (longlong)this->Bytes->ArrayNum;
}

