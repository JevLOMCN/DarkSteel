// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_CS
// Functions: 3

// FindChecked @ 14a6a8680

/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */

FWN_CS_ColliderContainer * __thiscall
TMapBase<enum_EWN_CS_CharacterSlotName,FWN_CS_ColliderContainer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EWN_CS_CharacterSlotName,FWN_CS_ColliderContainer,0>_>
::FindChecked(void *this,EWN_CS_CharacterSlotName param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  FWN_CS_ColliderContainer *pFVar4;
  EWN_CS_CharacterSlotName *pEVar5;
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
        pEVar5 = (EWN_CS_CharacterSlotName *)((longlong)(int)uVar3 * 0x20 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EWN_CS_CharacterSlotName *)0x0) {
            return (FWN_CS_ColliderContainer *)(pEVar5 + 8);
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
    return (FWN_CS_ColliderContainer *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FWN_CS_ColliderContainer *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14a6a8720

/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */

FWN_CS_HitSphereContainer * __thiscall
TMapBase<enum_EWN_CS_CharacterSlotName,FWN_CS_HitSphereContainer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EWN_CS_CharacterSlotName,FWN_CS_HitSphereContainer,0>_>
::FindChecked(void *this,EWN_CS_CharacterSlotName param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  FWN_CS_HitSphereContainer *pFVar4;
  EWN_CS_CharacterSlotName *pEVar5;
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
        pEVar5 = (EWN_CS_CharacterSlotName *)((longlong)(int)uVar3 * 0x20 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EWN_CS_CharacterSlotName *)0x0) {
            return (FWN_CS_HitSphereContainer *)(pEVar5 + 8);
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
    return (FWN_CS_HitSphereContainer *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FWN_CS_HitSphereContainer *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14a6a87c0

/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */

FWN_CS_ServerHitCapsuleContainer * __thiscall
TMapBase<enum_EWN_CS_CharacterSlotName,FWN_CS_ServerHitCapsuleContainer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EWN_CS_CharacterSlotName,FWN_CS_ServerHitCapsuleContainer,0>_>
::FindChecked(void *this,EWN_CS_CharacterSlotName param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  FWN_CS_ServerHitCapsuleContainer *pFVar4;
  EWN_CS_CharacterSlotName *pEVar5;
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
        pEVar5 = (EWN_CS_CharacterSlotName *)((longlong)(int)uVar3 * 0x20 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EWN_CS_CharacterSlotName *)0x0) {
            return (FWN_CS_ServerHitCapsuleContainer *)(pEVar5 + 8);
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
    return (FWN_CS_ServerHitCapsuleContainer *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FWN_CS_ServerHitCapsuleContainer *)(*pcVar1)();
  return pFVar4;
}

