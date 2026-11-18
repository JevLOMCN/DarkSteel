// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DeveloperSettings
// Functions: 2

// FindOrAddImpl<TSubclassOf<UPlatformSettings>_const_&> @ 14241b520

FPlatformSettingsInstances * __thiscall
TMapBase<TSubclassOf<UPlatformSettings>,FPlatformSettingsInstances,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<UPlatformSettings>,FPlatformSettingsInstances,0>_>
::FindOrAddImpl<TSubclassOf<UPlatformSettings>_const_&>
          (TMapBase<TSubclassOf<UPlatformSettings>,FPlatformSettingsInstances,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<UPlatformSettings>,FPlatformSettingsInstances,0>_>
           *this,uint param_1,TSubclassOf<UPlatformSettings> *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  TSubclassOf<UPlatformSettings> *local_res20;
  
  iVar1 = TSet<TTuple<TSubclassOf<UPlatformSettings>,FPlatformSettingsInstances>,TDefaultMapHashableKeyFuncs<TSubclassOf<UPlatformSettings>,FPlatformSettingsInstances,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TSubclassOf<UPlatformSettings>_>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x68 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (FPlatformSettingsInstances *)(lVar2 + 8);
  }
  local_res20 = param_2;
  TSet<TTuple<TSubclassOf<UPlatformSettings>,FPlatformSettingsInstances>,TDefaultMapHashableKeyFuncs<TSubclassOf<UPlatformSettings>,FPlatformSettingsInstances,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<TSubclassOf<UPlatformSettings>_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<TSubclassOf<UPlatformSettings>_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FPlatformSettingsInstances *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x68 + 8);
}

// FindOrAddImpl<FName_const_&> @ 14241b5b0

TObjectPtr<UPlatformSettings> * __thiscall
TMapBase<FName,TObjectPtr<UPlatformSettings>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UPlatformSettings>,0>_>
::FindOrAddImpl<FName_const_&>
          (TMapBase<FName,TObjectPtr<UPlatformSettings>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UPlatformSettings>,0>_>
           *this,uint param_1,FName *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [6];
  FName *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar3 = lVar1 + (longlong)iVar2 * 0x18;
        if (*(FName *)(lVar1 + (longlong)iVar2 * 0x18) == *param_2) {
          if (lVar3 != 0) goto LAB_14241b642;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x10);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,TObjectPtr<UPlatformSettings>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UPlatformSettings>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x18;
LAB_14241b642:
  return (TObjectPtr<UPlatformSettings> *)(lVar3 + 8);
}

