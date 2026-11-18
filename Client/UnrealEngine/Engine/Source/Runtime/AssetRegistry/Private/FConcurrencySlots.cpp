// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 1

// FConcurrencySlots @ 142ad5df0

FConcurrencySlots * __thiscall
UE::Tasks::TaskConcurrencyLimiter_Private::FConcurrencySlots::FConcurrencySlots
          (FConcurrencySlots *this,uint param_1)

{
  atomic<unsigned_int> *paVar1;
  uint uVar2;
  void *pvVar3;
  atomic<unsigned_int> *paVar4;
  ulong64 uVar5;
  uint uVar6;
  atomic<unsigned_int> aVar7;
  bool bVar8;
  
  *(undefined4 *)&this->FreeSlots = 0;
  *(undefined4 *)&(this->FreeSlots).field_0x40 = 0;
  uVar6 = param_1 - 1 >> 1 | param_1 - 1;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = (uVar6 >> 0x10 | uVar6) + 1;
  if (uVar6 < 0x100) {
    uVar6 = 0x100;
  }
  paVar4 = (atomic<unsigned_int> *)0x0;
  (this->FreeSlots).size_ = uVar6;
  uVar5 = (ulonglong)uVar6 * 4;
  if ((ulonglong)uVar6 != 0) {
    if (uVar5 < 0x1000) {
      paVar4 = ::operator_new(uVar5);
    }
    else {
      if (uVar5 + 0x27 <= uVar5) {
                    /* WARNING: Subroutine does not return */
        std::_Throw_bad_array_new_length();
      }
      pvVar3 = ::operator_new(uVar5 + 0x27);
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      paVar4 = (atomic<unsigned_int> *)((longlong)pvVar3 + 0x27U & 0xffffffffffffffe0);
      *(void **)(paVar4 + -2) = pvVar3;
    }
  }
  (this->FreeSlots).elements_ = paVar4;
  paVar1 = paVar4 + (this->FreeSlots).size_;
  for (; paVar4 < paVar1; paVar4 = paVar4 + 1) {
    *paVar4 = (atomic<unsigned_int>)0x0;
  }
  aVar7 = (atomic<unsigned_int>)0x1;
  if (1 < param_1 + 1) {
    do {
      LOCK();
      uVar6 = *(uint *)&this->FreeSlots;
      *(int *)&this->FreeSlots = *(int *)&this->FreeSlots + 1;
      UNLOCK();
      uVar6 = (this->FreeSlots).size_ - 1 & uVar6;
      uVar2 = (uVar6 >> 4 ^ uVar6) & 0xf;
      paVar4 = (this->FreeSlots).elements_;
      uVar6 = uVar2 << 4 ^ uVar2 ^ uVar6;
      while( true ) {
        paVar1 = paVar4 + uVar6;
        LOCK();
        bVar8 = *paVar1 == (atomic<unsigned_int>)0x0;
        if (bVar8) {
          *paVar1 = aVar7;
        }
        UNLOCK();
        if (bVar8) break;
        do {
        } while (paVar4[uVar6] != (atomic<unsigned_int>)0x0);
      }
      aVar7 = (atomic<unsigned_int>)((int)aVar7 + 1);
    } while ((uint)aVar7 < param_1 + 1);
  }
  return this;
}

