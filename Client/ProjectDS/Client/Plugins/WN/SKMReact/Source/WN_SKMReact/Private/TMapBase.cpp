// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_SKMReact
// Functions: 3

// FindChecked @ 14acd6aa0

USoundBase ** __thiscall
TMapBase<int,USoundBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,USoundBase_*,0>_>::
FindChecked(TMapBase<int,USoundBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,USoundBase_*,0>_>
            *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  USoundBase **ppUVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x18;
        if (*(int *)(lVar2 + (longlong)iVar5 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return (USoundBase **)(lVar1 + 8);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (USoundBase **)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  ppUVar6 = (USoundBase **)(*pcVar3)();
  return ppUVar6;
}

// FindChecked @ 14acd6b40

FWN_SKMReact_BoneTraceInfo * __thiscall
TMapBase<FName,FWN_SKMReact_BoneTraceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FWN_SKMReact_BoneTraceInfo,0>_>
::FindChecked(TMapBase<FName,FWN_SKMReact_BoneTraceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FWN_SKMReact_BoneTraceInfo,0>_>
              *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FWN_SKMReact_BoneTraceInfo *pFVar4;
  ForElementType<FSetElementId> FVar5;
  FName *pFVar6;
  
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar3 = *(uint *)((longlong)FVar5 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar3) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pFVar6 = (FName *)((longlong)(int)uVar3 * 0x68 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar6 == param_1) {
          if (pFVar6 != (FName *)0x0) {
            return (FWN_SKMReact_BoneTraceInfo *)(pFVar6 + 1);
          }
          break;
        }
        uVar3 = pFVar6[0xc].ComparisonIndex.Value;
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FWN_SKMReact_BoneTraceInfo *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FWN_SKMReact_BoneTraceInfo *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14acd6c00

FWN_SKMReactInfo * __thiscall
TMapBase<FString,FWN_SKMReactInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FWN_SKMReactInfo,0>_>
::FindChecked(TMapBase<FString,FWN_SKMReactInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FWN_SKMReactInfo,0>_>
              *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FWN_SKMReactInfo *pFVar5;
  int iVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  
  iVar4 = (param_1->Data).ArrayNum;
  if (iVar4 == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  lVar8 = 0;
  iVar6 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar6 = 0;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar7);
  iVar4 = TSet<TTuple<FString,FWN_SKMReactInfo>,TDefaultMapHashableKeyFuncs<FString,FWN_SKMReactInfo,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar3,param_1);
  if ((iVar4 == -1) ||
     (lVar8 = (longlong)iVar4 * 0x50 + *(longlong *)&(this->Pairs).Elements, lVar8 == 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FWN_SKMReactInfo *)(*pcVar1)();
      return pFVar5;
    }
  }
  return (FWN_SKMReactInfo *)(lVar8 + 0x10);
}

