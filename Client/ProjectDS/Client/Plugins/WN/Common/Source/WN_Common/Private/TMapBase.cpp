// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Common
// Functions: 5

// FindOrAddImpl<enum_EWN_VolumeObserverMode_const_&> @ 149486e00

TObjectPtr<UWN_VolumeContext> * __thiscall
TMapBase<enum_EWN_VolumeObserverMode,TObjectPtr<UWN_VolumeContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EWN_VolumeObserverMode,TObjectPtr<UWN_VolumeContext>,0>_>
::FindOrAddImpl<enum_EWN_VolumeObserverMode_const_&>
          (void *this,uint param_1,EWN_VolumeObserverMode *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [6];
  EWN_VolumeObserverMode *local_res20;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar2 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar2 = (longlong)this + 0x38;
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = *(longlong *)this + (longlong)iVar1 * 0x18;
        if (*(EWN_VolumeObserverMode *)(*(longlong *)this + (longlong)iVar1 * 0x18) == *param_2) {
          if (lVar2 != 0) goto LAB_149486e92;
          break;
        }
        iVar1 = *(int *)(lVar2 + 0x10);
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<enum_EWN_VolumeObserverMode,TObjectPtr<UWN_VolumeContext>_>,TDefaultMapHashableKeyFuncs<enum_EWN_VolumeObserverMode,TObjectPtr<UWN_VolumeContext>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<enum_EWN_VolumeObserverMode_const_&>_>
            (this,(uint)local_res8,
             (TKeyInitializer<EWN_VolumeObserverMode_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  lVar2 = *(longlong *)this + (longlong)local_res8[0] * 0x18;
LAB_149486e92:
  return (TObjectPtr<UWN_VolumeContext> *)(lVar2 + 8);
}

// FindOrAddImpl<enum_EWN_VolumeObserverMode_const_&> @ 149486eb0

FWN_VolumeObserverInfo * __thiscall
TMapBase<enum_EWN_VolumeObserverMode,FWN_VolumeObserverInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EWN_VolumeObserverMode,FWN_VolumeObserverInfo,0>_>
::FindOrAddImpl<enum_EWN_VolumeObserverMode_const_&>
          (void *this,uint param_1,EWN_VolumeObserverMode *param_2)

{
  undefined4 uVar1;
  EWN_VolumeObserverMode *pEVar2;
  longlong lVar3;
  int local_res8 [6];
  EWN_VolumeObserverMode *local_res20;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar3 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar3 = (longlong)this + 0x38;
    }
    uVar1 = *(int *)(lVar3 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pEVar2 = (EWN_VolumeObserverMode *)((longlong)(int)uVar1 * 0x30 + *(longlong *)this);
        if (*pEVar2 == *param_2) {
          if (pEVar2 != (EWN_VolumeObserverMode *)0x0) {
            return (FWN_VolumeObserverInfo *)(pEVar2 + 8);
          }
          break;
        }
        uVar1 = *(undefined4 *)(pEVar2 + 0x28);
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<enum_EWN_VolumeObserverMode,FWN_VolumeObserverInfo>,TDefaultMapHashableKeyFuncs<enum_EWN_VolumeObserverMode,FWN_VolumeObserverInfo,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<enum_EWN_VolumeObserverMode_const_&>_>
            (this,(uint)local_res8,
             (TKeyInitializer<EWN_VolumeObserverMode_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FWN_VolumeObserverInfo *)(*(longlong *)this + 8 + (longlong)local_res8[0] * 0x30);
}

// Find @ 14949f300

TObjectPtr<UWN_VolumeContext> * __thiscall
TMapBase<UClass_*,TObjectPtr<UWN_VolumeContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TObjectPtr<UWN_VolumeContext>,0>_>
::Find(TMapBase<UClass_*,TObjectPtr<UWN_VolumeContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TObjectPtr<UWN_VolumeContext>,0>_>
       *this,UClass *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  TObjectPtr<UWN_VolumeContext> *pTVar5;
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
        if (*(UClass **)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          pTVar5 = (TObjectPtr<UWN_VolumeContext> *)0x0;
          if (lVar1 != 0) {
            pTVar5 = (TObjectPtr<UWN_VolumeContext> *)(lVar1 + 8);
          }
          return pTVar5;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (TObjectPtr<UWN_VolumeContext> *)0x0;
}

// Find @ 14949f3b0

TObjectPtr<UWN_VolumeContext> * __thiscall
TMapBase<enum_EWN_VolumeObserverMode,TObjectPtr<UWN_VolumeContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EWN_VolumeObserverMode,TObjectPtr<UWN_VolumeContext>,0>_>
::Find(void *this,EWN_VolumeObserverMode param_1)

{
  int iVar1;
  TObjectPtr<UWN_VolumeContext> *pTVar2;
  longlong lVar3;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar3 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar3 = (longlong)this + 0x38;
    }
    iVar1 = *(int *)(lVar3 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *(longlong *)this + (longlong)iVar1 * 0x18;
        if (*(EWN_VolumeObserverMode *)(*(longlong *)this + (longlong)iVar1 * 0x18) == param_1) {
          pTVar2 = (TObjectPtr<UWN_VolumeContext> *)0x0;
          if (lVar3 != 0) {
            pTVar2 = (TObjectPtr<UWN_VolumeContext> *)(lVar3 + 8);
          }
          return pTVar2;
        }
        iVar1 = *(int *)(lVar3 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return (TObjectPtr<UWN_VolumeContext> *)0x0;
}

// Find @ 14949f420

FWN_VolumeObserverInfo * __thiscall
TMapBase<enum_EWN_VolumeObserverMode,FWN_VolumeObserverInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EWN_VolumeObserverMode,FWN_VolumeObserverInfo,0>_>
::Find(void *this,EWN_VolumeObserverMode param_1)

{
  undefined4 uVar1;
  FWN_VolumeObserverInfo *pFVar2;
  EWN_VolumeObserverMode *pEVar3;
  longlong lVar4;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar4 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar4 = (longlong)this + 0x38;
    }
    uVar1 = *(int *)(lVar4 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pEVar3 = (EWN_VolumeObserverMode *)((longlong)(int)uVar1 * 0x30 + *(longlong *)this);
        if (*pEVar3 == param_1) {
          pFVar2 = (FWN_VolumeObserverInfo *)0x0;
          if (pEVar3 != (EWN_VolumeObserverMode *)0x0) {
            pFVar2 = (FWN_VolumeObserverInfo *)(pEVar3 + 8);
          }
          return pFVar2;
        }
        uVar1 = *(undefined4 *)(pEVar3 + 0x28);
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FWN_VolumeObserverInfo *)0x0;
}

