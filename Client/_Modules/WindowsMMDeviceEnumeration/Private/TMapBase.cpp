// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WindowsMMDeviceEnumeration
// Functions: 1

// Find @ 148d33140

FCacheEntry * __thiscall
TMapBase<FName,Audio::FWindowsMMDeviceCache::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Audio::FWindowsMMDeviceCache::FCacheEntry,0>_>
::Find(TMapBase<FName,Audio::FWindowsMMDeviceCache::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Audio::FWindowsMMDeviceCache::FCacheEntry,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  FCacheEntry *pFVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x80 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == param_1) {
          pFVar4 = (FCacheEntry *)0x0;
          if (pFVar2 != (FName *)0x0) {
            pFVar4 = (FCacheEntry *)(pFVar2 + 1);
          }
          return pFVar4;
        }
        uVar1 = pFVar2[0xf].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FCacheEntry *)0x0;
}

