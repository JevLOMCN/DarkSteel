// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 3

// Find @ 14315e5e0

FString * __thiscall
TMapBase<FName_const_,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName_const_,FString,0>_>
::Find(TMapBase<FName_const_,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName_const_,FString,0>_>
       *this,FName *param_1)

{
  FName FVar1;
  uint uVar2;
  FName *pFVar3;
  ForElementType<FSetElementId> FVar4;
  FName *pFVar5;
  
  FVar1 = *param_1;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar2 = *(uint *)((longlong)FVar4 +
                     (ulonglong)((this->Pairs).HashSize - 1U & FVar1.Number + uVar2) * 4);
    if (uVar2 != 0xffffffff) {
      do {
        pFVar5 = (FName *)((longlong)(int)uVar2 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar5 == *param_1) {
          pFVar3 = (FName *)0x0;
          if (pFVar5 != (FName *)0x0) {
            pFVar3 = pFVar5 + 1;
          }
          return (FString *)pFVar3;
        }
        uVar2 = pFVar5[3].ComparisonIndex.Value;
      } while (uVar2 != 0xffffffff);
    }
  }
  return (FString *)0x0;
}

// Find @ 14315e690

FHttpRequestCommon ** __thiscall
TMapBase<void_*,FHttpRequestCommon_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,FHttpRequestCommon_*,0>_>
::Find(TMapBase<void_*,FHttpRequestCommon_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,FHttpRequestCommon_*,0>_>
       *this,void *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  FHttpRequestCommon **ppFVar5;
  uint uVar6;
  
  uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(void **)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          ppFVar5 = (FHttpRequestCommon **)0x0;
          if (lVar1 != 0) {
            ppFVar5 = (FHttpRequestCommon **)(lVar1 + 8);
          }
          return ppFVar5;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (FHttpRequestCommon **)0x0;
}

// FindChecked @ 14315e740

FHttpFlushTimeLimit * __thiscall
TMapBase<enum_EHttpFlushReason,FHttpManager::FHttpFlushTimeLimit,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EHttpFlushReason,FHttpManager::FHttpFlushTimeLimit,0>_>
::FindChecked(void *this,EHttpFlushReason param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  FHttpFlushTimeLimit *pFVar4;
  EHttpFlushReason *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    uVar3 = *(int *)(lVar6 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pEVar5 = (EHttpFlushReason *)((longlong)(int)uVar3 * 0x20 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EHttpFlushReason *)0x0) {
            return (FHttpFlushTimeLimit *)(pEVar5 + 8);
          }
          break;
        }
        uVar3 = *(undefined4 *)(pEVar5 + 0x18);
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FHttpFlushTimeLimit *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FHttpFlushTimeLimit *)(*pcVar1)();
  return pFVar4;
}

