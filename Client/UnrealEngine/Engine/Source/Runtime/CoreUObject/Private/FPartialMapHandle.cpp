// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// FromInt @ 141e9ed50

FPartialMapHandle __cdecl FixedTagPrivate::FPartialMapHandle::FromInt(ulong64 param_1)

{
  FPartialMapHandle FVar1;
  undefined1 uStackX_9;
  
  FVar1._1_1_ = uStackX_9;
  FVar1.bHasNumberlessKeys = (bool)(byte)(param_1 >> 0x3f);
  FVar1.Num = (short)(param_1 >> 0x20);
  FVar1.PairBegin = (uint)param_1;
  return FVar1;
}

// MakeFullHandle @ 141eace20

FMapHandle __thiscall
FixedTagPrivate::FPartialMapHandle::MakeFullHandle(FPartialMapHandle *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  FMapHandle FVar3;
  uint in_register_00000014;
  uint in_R8D;
  
  FVar3.PairBegin = in_register_00000014;
  FVar3._0_4_ = param_1;
  if (0x3fff < in_R8D) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("StoreIndex < FStoreManager::Capacity",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                       ,0x2e4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3 = (FMapHandle)(*pcVar1)();
      return FVar3;
    }
  }
  bVar2 = this->bHasNumberlessKeys;
  *(ushort *)((longlong)FVar3 + 2) = this->Num;
  *(uint *)((longlong)FVar3 + 4) = this->PairBegin;
  *(ushort *)FVar3 = ((ushort)(bVar2 & 1) | (short)in_R8D * 2) * 2 | 1;
  return FVar3;
}

// ToInt @ 141ebe420

ulong64 __thiscall FixedTagPrivate::FPartialMapHandle::ToInt(FPartialMapHandle *this)

{
  return ((ulonglong)this->bHasNumberlessKeys << 0x1f | (ulonglong)this->Num) << 0x20 |
         (ulonglong)this->PairBegin;
}

