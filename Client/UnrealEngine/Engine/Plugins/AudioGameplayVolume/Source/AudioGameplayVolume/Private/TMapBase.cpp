// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioGameplayVolume
// Functions: 4

// FindOrAddImpl<unsigned_int_const_&> @ 14d99a700

FAudioGameplayVolumeProxyInfo * __thiscall
TMapBase<unsigned_int,FAudioGameplayVolumeProxyInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioGameplayVolumeProxyInfo,0>_>
::FindOrAddImpl<unsigned_int_const_&>
          (TMapBase<unsigned_int,FAudioGameplayVolumeProxyInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioGameplayVolumeProxyInfo,0>_>
           *this,uint param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  uint *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar2 = (uint *)((longlong)(int)uVar1 * 0xc0 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == *param_2) {
          if (puVar2 != (uint *)0x0) {
            return (FAudioGameplayVolumeProxyInfo *)(puVar2 + 2);
          }
          break;
        }
        uVar1 = puVar2[0x2e];
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<unsigned_int,FAudioGameplayVolumeProxyInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioGameplayVolumeProxyInfo,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<unsigned_int_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (FAudioGameplayVolumeProxyInfo *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0xc0);
}

// FindOrAddImpl<unsigned_int> @ 14d99a7c0

FAudioGameplayActiveSoundInfo * __thiscall
TMapBase<unsigned_int,FAudioGameplayActiveSoundInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioGameplayActiveSoundInfo,0>_>
::FindOrAddImpl<unsigned_int>
          (TMapBase<unsigned_int,FAudioGameplayActiveSoundInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioGameplayActiveSoundInfo,0>_>
           *this,uint param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  uint *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar2 = (uint *)((longlong)(int)uVar1 * 0x98 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == *param_2) {
          if (puVar2 != (uint *)0x0) {
            return (FAudioGameplayActiveSoundInfo *)(puVar2 + 2);
          }
          break;
        }
        uVar1 = puVar2[0x24];
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<unsigned_int,FAudioGameplayActiveSoundInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioGameplayActiveSoundInfo,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned_int_&&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<unsigned_int_&&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FAudioGameplayActiveSoundInfo *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x98 + 8);
}

// FindChecked @ 14d9a5b30

TObjectPtr<UAudioGameplayVolumeComponent_const_> * __thiscall
TMapBase<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>,0>_>
::FindChecked(TMapBase<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>,0>_>
              *this,uint param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TObjectPtr<UAudioGameplayVolumeComponent_const_> *pTVar6;
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
        if (*(uint *)(lVar2 + (longlong)iVar5 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return (TObjectPtr<UAudioGameplayVolumeComponent_const_> *)(lVar1 + 8);
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
    return (TObjectPtr<UAudioGameplayVolumeComponent_const_> *)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  pTVar6 = (TObjectPtr<UAudioGameplayVolumeComponent_const_> *)(*pcVar3)();
  return pTVar6;
}

// FindChecked @ 14d9a5bd0

TObjectPtr<UAudioGameplayVolumeComponent_const_> * __thiscall
TMapBase<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>,0>_>
::FindChecked(TMapBase<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>,0>_>
              *this,uint param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TObjectPtr<UAudioGameplayVolumeComponent_const_> *pTVar6;
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
        if (*(uint *)(lVar2 + (longlong)iVar5 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return (TObjectPtr<UAudioGameplayVolumeComponent_const_> *)(lVar1 + 8);
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
                     ,0x27b,L"");
  if (!bVar4) {
    return (TObjectPtr<UAudioGameplayVolumeComponent_const_> *)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  pTVar6 = (TObjectPtr<UAudioGameplayVolumeComponent_const_> *)(*pcVar3)();
  return pTVar6;
}

