// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 5

// FPackageIdMap @ 142a52150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FPackageIdMap * __thiscall
UE::FilePackageStorePrivate::FPackageIdMap::FPackageIdMap
          (FPackageIdMap *this,
          TArray<TTuple<FPackageId,UE::FilePackageStorePrivate::FEntryHandle>,TSizedDefaultAllocator<32>_>
          *param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  ushort *puVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  ushort *puVar7;
  FPackageIdMap *pFVar8;
  uint *_Dst;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  uint local_68;
  ushort *local_60;
  ushort *local_58;
  undefined4 local_50;
  uint local_4c;
  longlong local_48;
  ulonglong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_98;
  uVar10 = 0;
  uVar11 = param_1->ArrayNum + 1U & 0xfffffffe;
  this->MaxValues = uVar11;
  uVar6 = param_1->ArrayNum;
  uVar5 = 0;
  if (uVar6 != 0) {
    uVar5 = 1;
    if (uVar6 >> 2 != 0) {
      uVar5 = uVar6 >> 2;
    }
    uVar1 = (ulonglong)(uVar5 - 1) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar6 = 1 << ((byte)lVar9 & 0x1f);
    local_50 = (undefined4)lVar9;
    if (uVar6 < 0x20000) {
      uVar6 = 0x20000;
    }
    local_4c = 0;
    if (uVar6 != 0) {
      for (; (uVar6 >> local_4c & 1) == 0; local_4c = local_4c + 1) {
      }
    }
    uVar5 = 0x20;
    if (uVar6 != 0) {
      uVar5 = local_4c;
    }
  }
  this->SlotBits = uVar5;
  this->Slots = (uint *)0x0;
  puVar7 = FMemory::Malloc((ulonglong)(uVar11 * 10),0);
  this->Values = puVar7;
  if (((this->SlotBits != 0) && (0xf < this->SlotBits - 0x11)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SlotBits == 0 || SlotBits >= MinSlotBits && SlotBits <= MaxSlotBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\FilePackageStore.cpp"
                         ,0x6a,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar8 = (FPackageIdMap *)(*pcVar2)();
    return pFVar8;
  }
  uVar6 = 1 << ((byte)this->SlotBits & 0x1f);
  if (this->SlotBits == 0) {
    uVar6 = 0;
  }
  _Dst = FMemory::Malloc((ulonglong)uVar6 << 2,0);
  this->Slots = _Dst;
  uVar6 = 1 << ((byte)this->SlotBits & 0x1f);
  if (this->SlotBits == 0) {
    uVar6 = 0;
  }
  memset(_Dst,0xff,(ulonglong)uVar6 << 2);
  SortBySlotIndex(param_1);
  local_60 = this->Values;
  local_58 = local_60 + (ulonglong)this->MaxValues * 3;
  local_68 = param_1->ArrayNum;
  if (local_68 != 0) {
    local_38 = (longlong)local_60 + ((ulonglong)this->MaxValues * 2 - (longlong)local_58);
    do {
      uVar6 = this->SlotBits;
      uVar5 = 0;
      if ((int)uVar10 < param_1->ArrayNum) {
        uVar5 = ~uVar10 >> 0x1f;
      }
      if (uVar5 == 0) {
        local_78 = (longlong)(int)uVar10;
        local_70 = (longlong)param_1->ArrayNum;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pFVar8 = (FPackageIdMap *)(*pcVar2)();
          return pFVar8;
        }
      }
      lVar9 = (longlong)(int)uVar10 * 0x10;
      uVar1 = *(ulonglong *)((param_1->AllocatorInstance).Data + lVar9);
      local_48 = lVar9;
      if ((uVar1 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PID.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\FilePackageStore.cpp"
                             ,0x30,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        pFVar8 = (FPackageIdMap *)(*pcVar2)();
        return pFVar8;
      }
      if ((0xf < uVar6 - 0x11) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("SlotBits >= MinSlotBits && SlotBits <= MaxSlotBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\FilePackageStore.cpp"
                             ,0x31,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        pFVar8 = (FPackageIdMap *)(*pcVar2)();
        return pFVar8;
      }
      local_40 = uVar1 >> 0xf;
      uVar12 = uVar1 >> (0x40U - (char)uVar6 & 0x3f);
      uVar13 = uVar12 & 0xffffffff;
      if (this->Slots[uVar13] == 0xffffffff) {
        this->Slots[uVar13] = uVar10;
      }
      else {
        if (((uVar10 == 0) || (-1 < (short)this->Values[uVar10 - 1])) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Idx > 0 && IsSlotEnd(Values[Idx - 1])",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\FilePackageStore.cpp"
                               ,0x80,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          pFVar8 = (FPackageIdMap *)(*pcVar2)();
          return pFVar8;
        }
        uVar6 = this->SlotBits;
        uVar5 = 0;
        if ((int)(uVar10 - 1) < param_1->ArrayNum) {
          uVar5 = -uVar10 >> 0x1f;
        }
        if (uVar5 == 0) {
          local_78 = (longlong)(int)uVar10 + -1;
          local_70 = (longlong)param_1->ArrayNum;
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            pFVar8 = (FPackageIdMap *)(*pcVar2)();
            return pFVar8;
          }
        }
        uVar13 = *(ulonglong *)
                  ((param_1->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x10 + -0x10);
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("PID.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\FilePackageStore.cpp"
                               ,0x30,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          pFVar8 = (FPackageIdMap *)(*pcVar2)();
          return pFVar8;
        }
        if ((0xf < uVar6 - 0x11) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("SlotBits >= MinSlotBits && SlotBits <= MaxSlotBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\FilePackageStore.cpp"
                               ,0x31,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          pFVar8 = (FPackageIdMap *)(*pcVar2)();
          return pFVar8;
        }
        if (((int)(uVar13 >> (0x40U - (char)uVar6 & 0x3f)) != (int)uVar12) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Split(Pairs[Idx - 1].Key, SlotBits).SlotIndex == Key.SlotIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\FilePackageStore.cpp"
                               ,0x81,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          pFVar8 = (FPackageIdMap *)(*pcVar2)();
          return pFVar8;
        }
        this->Values[uVar10 - 1] = this->Values[uVar10 - 1] & 0x7fff;
        lVar9 = local_48;
      }
      puVar3 = local_58;
      puVar7 = local_60;
      *local_60 = (ushort)uVar1 & 0x7fff | 0x8000;
      *(int *)((longlong)local_58 + local_38) = (int)local_40;
      uVar6 = 0;
      if ((int)uVar10 < param_1->ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if (uVar6 == 0) {
        local_78 = (longlong)(int)uVar10;
        local_70 = (longlong)param_1->ArrayNum;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pFVar8 = (FPackageIdMap *)(*pcVar2)();
          return pFVar8;
        }
      }
      local_60 = puVar7 + 1;
      uVar10 = uVar10 + 1;
      *(undefined4 *)puVar3 = *(undefined4 *)((param_1->AllocatorInstance).Data + lVar9 + 8);
      local_58 = puVar3 + 2;
    } while (uVar10 < local_68);
  }
  return this;
}

// operator= @ 142a580e0

FPackageIdMap * __thiscall
UE::FilePackageStorePrivate::FPackageIdMap::operator=(FPackageIdMap *this,FPackageIdMap *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  if (this != param_1) {
    FMemory::Free(this->Slots);
    FMemory::Free(this->Values);
    this->MaxValues = 0;
    this->SlotBits = 0;
    this->Slots = (uint *)0x0;
    this->Values = (ushort *)0x0;
    uVar2 = param_1->SlotBits;
    puVar1 = param_1->Slots;
    this->MaxValues = param_1->MaxValues;
    this->SlotBits = uVar2;
    this->Slots = puVar1;
    this->Values = param_1->Values;
    param_1->MaxValues = 0;
    param_1->SlotBits = 0;
    param_1->Slots = (uint *)0x0;
    param_1->Values = (ushort *)0x0;
  }
  return this;
}

// Empty @ 142a6b1a0

void __thiscall UE::FilePackageStorePrivate::FPackageIdMap::Empty(FPackageIdMap *this)

{
  FMemory::Free(this->Slots);
  FMemory::Free(this->Values);
  this->MaxValues = 0;
  this->SlotBits = 0;
  this->Slots = (uint *)0x0;
  this->Values = (ushort *)0x0;
  return;
}

// Find @ 142a6dcd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FEntryHandle * __thiscall
UE::FilePackageStorePrivate::FPackageIdMap::Find(FPackageIdMap *this,FPackageId param_1)

{
  ulonglong uVar1;
  uint uVar2;
  ushort *puVar3;
  code *pcVar4;
  ushort uVar5;
  bool bVar6;
  FPackageIdKey *pFVar7;
  FEntryHandle *pFVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  FPackageIdKey local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_68;
  if (this->MaxValues != 0) {
    pFVar7 = FilePackageStorePrivate::Split(&local_38,param_1,this->SlotBits);
    puVar3 = this->Values;
    uVar1._0_4_ = pFVar7->SlotIndex;
    uVar1._4_4_ = pFVar7->Half;
    local_40 = *(undefined4 *)&pFVar7->Quarter;
    uVar9 = this->Slots[uVar1 & 0xffffffff];
    uVar2 = this->MaxValues;
    if (uVar9 != 0xffffffff) {
      uVar5 = (ushort)local_40;
      local_48 = uVar1;
      while ((uVar10 = (ulonglong)uVar9, uVar9 < this->MaxValues ||
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Idx < MaxValues",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\FilePackageStore.cpp"
                                 ,0xb4,L""), !bVar6))) {
        if (uVar5 == (this->Values[uVar10] & 0x7fff)) {
          if (uVar1._4_4_ == *(int *)(puVar3 + (ulonglong)uVar2 + uVar10 * 2)) {
            return (FEntryHandle *)(puVar3 + (ulonglong)uVar2 * 3 + uVar10 * 2);
          }
        }
        else if ((short)this->Values[uVar10] < 0) {
          return (FEntryHandle *)0x0;
        }
        uVar9 = uVar9 + 1;
      }
      pcVar4 = (code *)swi(3);
      pFVar8 = (FEntryHandle *)(*pcVar4)();
      return pFVar8;
    }
  }
  return (FEntryHandle *)0x0;
}

// GetAllocatedSize @ 142a72350

ulong64 __thiscall UE::FilePackageStorePrivate::FPackageIdMap::GetAllocatedSize(FPackageIdMap *this)

{
  uint uVar1;
  
  uVar1 = 1 << ((byte)this->SlotBits & 0x1f);
  if (this->SlotBits == 0) {
    uVar1 = 0;
  }
  return (ulonglong)(this->MaxValues * 10) + (ulonglong)uVar1 * 4;
}

