// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// operator[] @ 145df33a0

TStaticBitReference<unsigned___int64> * __thiscall
TStaticBitArray<155>::operator[]
          (TStaticBitArray<155> *this,TStaticBitReference<unsigned___int64> *__return_storage_ptr__,
          int param_1)

{
  code *pcVar1;
  bool bVar2;
  TStaticBitReference<unsigned___int64> *pTVar3;
  
  if ((param_1 < 0) || (0x9a < (uint)param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StaticBitArray.h"
                       ,0xaf,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TStaticBitReference<unsigned___int64> *)(*pcVar1)();
      return pTVar3;
    }
  }
  __return_storage_ptr__->Data = this->Words + ((uint)param_1 >> 6);
  __return_storage_ptr__->Mask = 1L << ((byte)param_1 & 0x3f);
  return __return_storage_ptr__;
}

