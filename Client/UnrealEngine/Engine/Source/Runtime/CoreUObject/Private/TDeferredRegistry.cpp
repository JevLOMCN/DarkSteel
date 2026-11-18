// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 8

// AddRegistration @ 14225f330

AddResult __thiscall
TDeferredRegistry<TRegistrationInfo<UClass,FClassReloadVersionInfo>_>::AddRegistration
          (TDeferredRegistry<TRegistrationInfo<UClass,FClassReloadVersionInfo>_> *this,
          _func___cdecl_UClass_ptr *param_1,_func___cdecl_UClass_ptr *param_2,wchar_t *param_3,
          wchar_t *param_4,TRegistrationInfo<UClass,FClassReloadVersionInfo> *param_5,
          FClassReloadVersionInfo *param_6)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined4 uVar4;
  TRegistrationInfo<UClass,FClassReloadVersionInfo> *pTVar5;
  FName FVar6;
  FName FVar7;
  char cVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  AddResult AVar12;
  int iVar13;
  IReload *pIVar14;
  undefined1 *puVar15;
  FName *pFVar16;
  longlong lVar17;
  FName *pFVar18;
  char cVar19;
  int iVar20;
  FName local_98;
  FName local_90;
  FName *local_88;
  TRegistrationInfo<UClass,FClassReloadVersionInfo> **local_80;
  _func___cdecl_UClass_ptr *local_78;
  _func___cdecl_UClass_ptr *p_Stack_70;
  wchar_t *local_68;
  wchar_t *pwStack_60;
  TRegistrationInfo<UClass,FClassReloadVersionInfo> *local_58;
  longlong lStack_50;
  char local_48;
  undefined7 uStack_47;
  
  ::FName::FName(&local_98,param_3);
  ::FName::FName(&local_90,param_4);
  FVar6 = local_98;
  uVar10 = ::GetTypeHash(local_98.ComparisonIndex.Value);
  FVar7 = local_90;
  uVar10 = FVar6.Number + uVar10;
  uVar11 = ::GetTypeHash(local_90.ComparisonIndex.Value);
  pTVar5 = param_5;
  if (*(int *)&(this->InfoMap).field_0x8 != *(int *)&(this->InfoMap).field_0x34) {
    puVar15 = *(undefined1 **)&(this->InfoMap).field_0x40;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = &(this->InfoMap).field_0x38;
    }
    uVar10 = *(uint *)(puVar15 +
                      (ulonglong)
                      (*(int *)&(this->InfoMap).field_0x48 - 1U &
                      (uVar10 * 0x40 + FVar7.Number + (uVar10 >> 2) + uVar11 + 0x9e3779b9 ^ uVar10))
                      * 4);
    if (uVar10 != 0xffffffff) {
      do {
        pFVar16 = (FName *)((longlong)(int)uVar10 * 0x20 + *(longlong *)&this->InfoMap);
        if ((*pFVar16 == local_98) && (pFVar16[1] == local_90)) {
          if (uVar10 != 0xffffffff) {
            pFVar18 = pFVar16 + 2;
            if (pFVar16 == (FName *)0x0) {
              pFVar18 = (FName *)0x0;
            }
            if (((pFVar18 == (FName *)0x0) ||
                (*(ulong64 *)((longlong)*pFVar18 + 0x10) != param_6->Size)) ||
               (*(uint *)((longlong)*pFVar18 + 0x18) != param_6->Hash)) goto LAB_14225f413;
            iVar20 = 0;
            goto LAB_14225f416;
          }
          break;
        }
        uVar10 = pFVar16[3].ComparisonIndex.Value;
      } while (uVar10 != 0xffffffff);
    }
  }
  pFVar18 = (FName *)0x0;
LAB_14225f413:
  iVar20 = 1;
LAB_14225f416:
  lVar17 = 0;
  uVar10 = param_6->Hash;
  uVar4 = *(undefined4 *)&param_6->field_0xc;
  (param_5->ReloadVersionInfo).Size = param_6->Size;
  (param_5->ReloadVersionInfo).Hash = uVar10;
  *(undefined4 *)&(param_5->ReloadVersionInfo).field_0xc = uVar4;
  cVar19 = (char)iVar20;
  if (pFVar18 == (FName *)0x0) {
    local_88 = &local_98;
    local_80 = &param_5;
    TSet<TTuple<TTuple<FName,FName>,TRegistrationInfo<UClass,FClassReloadVersionInfo>_*>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TRegistrationInfo<UClass,FClassReloadVersionInfo>_*,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<TTuple<FName,FName>_const_&,TRegistrationInfo<UClass,FClassReloadVersionInfo>_*_&&>_>
              ((TSet<TTuple<TTuple<FName,FName>,TRegistrationInfo<UClass,FClassReloadVersionInfo>_*>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TRegistrationInfo<UClass,FClassReloadVersionInfo>_*,0>,FDefaultSetAllocator>
                *)&this->InfoMap,
               (TPairInitializer<TTuple<FName,FName>_const_&,TRegistrationInfo<UClass,FClassReloadVersionInfo>_*_&&>
                *)&param_6,(bool *)&local_88);
  }
  else {
    lVar17 = *(longlong *)*pFVar18;
    if (lVar17 == 0) {
      lVar17 = *(longlong *)((longlong)*pFVar18 + 8);
    }
    pIVar14 = GetActiveReloadInterface();
    if ((pIVar14 != (IReload *)0x0) &&
       (cVar8 = (**(code **)((longlong)*pIVar14 + 0x18))(pIVar14,iVar20), cVar8 == '\0'))
    goto LAB_14225f5c8;
    if (cVar19 == '\0') {
      pTVar5->InnerSingleton = (UClass *)0x0;
      pTVar5->OuterSingleton = (UClass *)0x0;
    }
    *pFVar18 = (FName)pTVar5;
  }
  pFVar2 = (this->Registrations).AllocatorInstance.Data;
  pwStack_60 = param_4;
  local_58 = pTVar5;
  local_78 = param_1;
  p_Stack_70 = param_2;
  local_68 = param_3;
  lStack_50 = lVar17;
  local_48 = cVar19;
  if (((pFVar2 <= (FScriptContainerElement *)&local_78) &&
      ((FScriptContainerElement *)&local_78 <
       pFVar2 + (longlong)(this->Registrations).ArrayMax * 0x38)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar3 = (code *)swi(3);
    AVar12 = (*pcVar3)();
    return AVar12;
  }
  iVar13 = (this->Registrations).ArrayNum;
  piVar1 = &(this->Registrations).ArrayMax;
  if (iVar13 == *piVar1) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x838,(ForAnyElementType *)this,piVar1);
  }
  lVar17 = (longlong)iVar13 * 0x38;
  (this->Registrations).ArrayNum = iVar13 + 1;
  pFVar2 = (this->Registrations).AllocatorInstance.Data;
  *(_func___cdecl_UClass_ptr **)(pFVar2 + lVar17) = local_78;
  *(_func___cdecl_UClass_ptr **)(pFVar2 + lVar17 + 8) = p_Stack_70;
  *(wchar_t **)(pFVar2 + lVar17 + 0x10) = local_68;
  *(wchar_t **)(pFVar2 + lVar17 + 0x10 + 8) = pwStack_60;
  *(TRegistrationInfo<UClass,FClassReloadVersionInfo> **)(pFVar2 + lVar17 + 0x20) = local_58;
  *(longlong *)(pFVar2 + lVar17 + 0x20 + 8) = lStack_50;
  *(ulonglong *)(pFVar2 + lVar17 + 0x30) = CONCAT71(uStack_47,local_48);
  if (pFVar18 == (FName *)0x0) {
    return New;
  }
LAB_14225f5c8:
  return iVar20 + ExistingNoChange;
}

// AddRegistration @ 14225f5f0

AddResult __thiscall
TDeferredRegistry<TRegistrationInfo<UEnum,FEnumReloadVersionInfo>_>::AddRegistration
          (TDeferredRegistry<TRegistrationInfo<UEnum,FEnumReloadVersionInfo>_> *this,
          _func___cdecl_UEnum_ptr *param_1,_func___cdecl_UEnum_ptr *param_2,wchar_t *param_3,
          wchar_t *param_4,TRegistrationInfo<UEnum,FEnumReloadVersionInfo> *param_5,
          FEnumReloadVersionInfo *param_6)

{
  int *piVar1;
  FName FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  TRegistrationInfo<UEnum,FEnumReloadVersionInfo> *pTVar5;
  FEnumReloadVersionInfo *pFVar6;
  FName FVar7;
  char cVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  AddResult AVar12;
  int iVar13;
  IReload *pIVar14;
  undefined1 *puVar15;
  FName *pFVar16;
  longlong lVar17;
  FName *pFVar18;
  int iVar19;
  FName local_98;
  FName local_90;
  FName *local_88;
  TRegistrationInfo<UEnum,FEnumReloadVersionInfo> **local_80;
  _func___cdecl_UEnum_ptr *local_78;
  _func___cdecl_UEnum_ptr *p_Stack_70;
  wchar_t *local_68;
  wchar_t *pwStack_60;
  TRegistrationInfo<UEnum,FEnumReloadVersionInfo> *local_58;
  longlong lStack_50;
  undefined1 local_48;
  undefined7 uStack_47;
  
  pFVar6 = param_6;
  pTVar5 = param_5;
  ::FName::FName(&local_98,param_3);
  ::FName::FName(&local_90,param_4);
  FVar2 = local_98;
  uVar10 = ::GetTypeHash(local_98.ComparisonIndex.Value);
  FVar7 = local_90;
  uVar10 = FVar2.Number + uVar10;
  uVar11 = ::GetTypeHash(local_90.ComparisonIndex.Value);
  if (*(int *)&(this->InfoMap).field_0x8 != *(int *)&(this->InfoMap).field_0x34) {
    puVar15 = *(undefined1 **)&(this->InfoMap).field_0x40;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = &(this->InfoMap).field_0x38;
    }
    uVar10 = *(uint *)(puVar15 +
                      (ulonglong)
                      (*(int *)&(this->InfoMap).field_0x48 - 1U &
                      (uVar10 * 0x40 + FVar7.Number + (uVar10 >> 2) + uVar11 + 0x9e3779b9 ^ uVar10))
                      * 4);
    if (uVar10 != 0xffffffff) {
      do {
        pFVar16 = (FName *)((longlong)(int)uVar10 * 0x20 + *(longlong *)&this->InfoMap);
        if ((*pFVar16 == local_98) && (pFVar16[1] == local_90)) {
          if (uVar10 != 0xffffffff) {
            pFVar18 = pFVar16 + 2;
            if (pFVar16 == (FName *)0x0) {
              pFVar18 = (FName *)0x0;
            }
            if ((pFVar18 == (FName *)0x0) ||
               (uVar10 = pFVar6->Hash, *(uint *)((longlong)*pFVar18 + 0x10) != uVar10))
            goto LAB_14225f6e5;
            (pTVar5->ReloadVersionInfo).Hash = uVar10;
            iVar13 = 0;
            goto LAB_14225f6f5;
          }
          break;
        }
        uVar10 = pFVar16[3].ComparisonIndex.Value;
      } while (uVar10 != 0xffffffff);
    }
  }
  pFVar18 = (FName *)0x0;
LAB_14225f6e5:
  lVar17 = 0;
  iVar19 = 1;
  (pTVar5->ReloadVersionInfo).Hash = pFVar6->Hash;
  iVar13 = 1;
  if (pFVar18 == (FName *)0x0) {
    local_88 = &local_98;
    local_80 = &param_5;
    param_5 = pTVar5;
    TSet<TTuple<TTuple<FName,FName>,TRegistrationInfo<UEnum,FEnumReloadVersionInfo>_*>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TRegistrationInfo<UEnum,FEnumReloadVersionInfo>_*,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<TTuple<FName,FName>_const_&,TRegistrationInfo<UEnum,FEnumReloadVersionInfo>_*_&&>_>
              ((TSet<TTuple<TTuple<FName,FName>,TRegistrationInfo<UEnum,FEnumReloadVersionInfo>_*>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TRegistrationInfo<UEnum,FEnumReloadVersionInfo>_*,0>,FDefaultSetAllocator>
                *)&this->InfoMap,
               (TPairInitializer<TTuple<FName,FName>_const_&,TRegistrationInfo<UEnum,FEnumReloadVersionInfo>_*_&&>
                *)&param_6,(bool *)&local_88);
  }
  else {
LAB_14225f6f5:
    iVar19 = iVar13;
    lVar17 = *(longlong *)*pFVar18;
    if (lVar17 == 0) {
      lVar17 = *(longlong *)((longlong)*pFVar18 + 8);
    }
    pIVar14 = GetActiveReloadInterface();
    if ((pIVar14 != (IReload *)0x0) &&
       (cVar8 = (**(code **)((longlong)*pIVar14 + 0x18))(pIVar14,iVar19), cVar8 == '\0'))
    goto LAB_14225f889;
    if ((char)iVar19 == '\0') {
      FVar2 = *pFVar18;
      pTVar5->InnerSingleton = *(UEnum **)FVar2;
      pTVar5->OuterSingleton = *(UEnum **)((longlong)FVar2 + 8);
    }
    *pFVar18 = (FName)pTVar5;
  }
  pFVar3 = (this->Registrations).AllocatorInstance.Data;
  pwStack_60 = param_4;
  local_58 = pTVar5;
  local_48 = (undefined1)iVar19;
  local_78 = param_1;
  p_Stack_70 = param_2;
  local_68 = param_3;
  lStack_50 = lVar17;
  if (((pFVar3 <= (FScriptContainerElement *)&local_78) &&
      ((FScriptContainerElement *)&local_78 <
       pFVar3 + (longlong)(this->Registrations).ArrayMax * 0x38)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar4 = (code *)swi(3);
    AVar12 = (*pcVar4)();
    return AVar12;
  }
  iVar13 = (this->Registrations).ArrayNum;
  piVar1 = &(this->Registrations).ArrayMax;
  if (iVar13 == *piVar1) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x838,(ForAnyElementType *)this,piVar1);
  }
  lVar17 = (longlong)iVar13 * 0x38;
  (this->Registrations).ArrayNum = iVar13 + 1;
  pFVar3 = (this->Registrations).AllocatorInstance.Data;
  *(_func___cdecl_UEnum_ptr **)(pFVar3 + lVar17) = local_78;
  *(_func___cdecl_UEnum_ptr **)(pFVar3 + lVar17 + 8) = p_Stack_70;
  *(wchar_t **)(pFVar3 + lVar17 + 0x10) = local_68;
  *(wchar_t **)(pFVar3 + lVar17 + 0x10 + 8) = pwStack_60;
  *(TRegistrationInfo<UEnum,FEnumReloadVersionInfo> **)(pFVar3 + lVar17 + 0x20) = local_58;
  *(longlong *)(pFVar3 + lVar17 + 0x20 + 8) = lStack_50;
  *(ulonglong *)(pFVar3 + lVar17 + 0x30) = CONCAT71(uStack_47,local_48);
  if (pFVar18 == (FName *)0x0) {
    return New;
  }
LAB_14225f889:
  return iVar19 + ExistingNoChange;
}

// AddRegistration @ 14225f8b0

AddResult __thiscall
TDeferredRegistry<TRegistrationInfo<UPackage,FPackageReloadVersionInfo>_>::AddRegistration
          (TDeferredRegistry<TRegistrationInfo<UPackage,FPackageReloadVersionInfo>_> *this,
          _func___cdecl_UPackage_ptr *param_1,_func___cdecl_UPackage_ptr *param_2,wchar_t *param_3,
          wchar_t *param_4,TRegistrationInfo<UPackage,FPackageReloadVersionInfo> *param_5,
          FPackageReloadVersionInfo *param_6)

{
  int *piVar1;
  FName FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  TRegistrationInfo<UPackage,FPackageReloadVersionInfo> *pTVar5;
  FPackageReloadVersionInfo *pFVar6;
  FName FVar7;
  char cVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  AddResult AVar12;
  int iVar13;
  IReload *pIVar14;
  undefined1 *puVar15;
  FName *pFVar16;
  longlong lVar17;
  FName *pFVar18;
  int iVar19;
  FName local_98;
  FName local_90;
  FName *local_88;
  TRegistrationInfo<UPackage,FPackageReloadVersionInfo> **local_80;
  _func___cdecl_UPackage_ptr *local_78;
  _func___cdecl_UPackage_ptr *p_Stack_70;
  wchar_t *local_68;
  wchar_t *pwStack_60;
  TRegistrationInfo<UPackage,FPackageReloadVersionInfo> *local_58;
  longlong lStack_50;
  undefined1 local_48;
  undefined7 uStack_47;
  
  pFVar6 = param_6;
  pTVar5 = param_5;
  ::FName::FName(&local_98,param_3);
  ::FName::FName(&local_90,param_4);
  FVar2 = local_98;
  uVar10 = ::GetTypeHash(local_98.ComparisonIndex.Value);
  FVar7 = local_90;
  uVar10 = FVar2.Number + uVar10;
  uVar11 = ::GetTypeHash(local_90.ComparisonIndex.Value);
  if (*(int *)&(this->InfoMap).field_0x8 != *(int *)&(this->InfoMap).field_0x34) {
    puVar15 = *(undefined1 **)&(this->InfoMap).field_0x40;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = &(this->InfoMap).field_0x38;
    }
    uVar10 = *(uint *)(puVar15 +
                      (ulonglong)
                      (*(int *)&(this->InfoMap).field_0x48 - 1U &
                      (uVar10 * 0x40 + FVar7.Number + (uVar10 >> 2) + uVar11 + 0x9e3779b9 ^ uVar10))
                      * 4);
    if (uVar10 != 0xffffffff) {
      do {
        pFVar16 = (FName *)((longlong)(int)uVar10 * 0x20 + *(longlong *)&this->InfoMap);
        if ((*pFVar16 == local_98) && (pFVar16[1] == local_90)) {
          if (uVar10 != 0xffffffff) {
            pFVar18 = pFVar16 + 2;
            if (pFVar16 == (FName *)0x0) {
              pFVar18 = (FName *)0x0;
            }
            if (((pFVar18 == (FName *)0x0) ||
                (*(uint *)((longlong)*pFVar18 + 0x10) != pFVar6->BodyHash)) ||
               (*(uint *)((longlong)*pFVar18 + 0x14) != pFVar6->DeclarationsHash))
            goto LAB_14225f9a5;
            pTVar5->ReloadVersionInfo = *pFVar6;
            iVar13 = 0;
            goto LAB_14225f9b9;
          }
          break;
        }
        uVar10 = pFVar16[3].ComparisonIndex.Value;
      } while (uVar10 != 0xffffffff);
    }
  }
  pFVar18 = (FName *)0x0;
LAB_14225f9a5:
  lVar17 = 0;
  iVar19 = 1;
  pTVar5->ReloadVersionInfo = *pFVar6;
  iVar13 = 1;
  if (pFVar18 == (FName *)0x0) {
    local_88 = &local_98;
    local_80 = &param_5;
    param_5 = pTVar5;
    TSet<TTuple<TTuple<FName,FName>,TRegistrationInfo<UPackage,FPackageReloadVersionInfo>_*>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TRegistrationInfo<UPackage,FPackageReloadVersionInfo>_*,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<TTuple<FName,FName>_const_&,TRegistrationInfo<UPackage,FPackageReloadVersionInfo>_*_&&>_>
              ((TSet<TTuple<TTuple<FName,FName>,TRegistrationInfo<UPackage,FPackageReloadVersionInfo>_*>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TRegistrationInfo<UPackage,FPackageReloadVersionInfo>_*,0>,FDefaultSetAllocator>
                *)&this->InfoMap,
               (TPairInitializer<TTuple<FName,FName>_const_&,TRegistrationInfo<UPackage,FPackageReloadVersionInfo>_*_&&>
                *)&param_6,(bool *)&local_88);
  }
  else {
LAB_14225f9b9:
    iVar19 = iVar13;
    lVar17 = *(longlong *)*pFVar18;
    if (lVar17 == 0) {
      lVar17 = *(longlong *)((longlong)*pFVar18 + 8);
    }
    pIVar14 = GetActiveReloadInterface();
    if ((pIVar14 != (IReload *)0x0) &&
       (cVar8 = (**(code **)((longlong)*pIVar14 + 0x18))(pIVar14,iVar19), cVar8 == '\0'))
    goto LAB_14225fb62;
    if ((char)iVar19 == '\0') {
      FVar2 = *pFVar18;
      pTVar5->InnerSingleton = *(UPackage **)FVar2;
      pTVar5->OuterSingleton = *(UPackage **)((longlong)FVar2 + 8);
    }
    *pFVar18 = (FName)pTVar5;
  }
  pFVar3 = (this->Registrations).AllocatorInstance.Data;
  pwStack_60 = param_4;
  local_58 = pTVar5;
  local_48 = (undefined1)iVar19;
  local_78 = param_1;
  p_Stack_70 = param_2;
  local_68 = param_3;
  lStack_50 = lVar17;
  if (((pFVar3 <= (FScriptContainerElement *)&local_78) &&
      ((FScriptContainerElement *)&local_78 <
       pFVar3 + (longlong)(this->Registrations).ArrayMax * 0x38)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar4 = (code *)swi(3);
    AVar12 = (*pcVar4)();
    return AVar12;
  }
  iVar13 = (this->Registrations).ArrayNum;
  piVar1 = &(this->Registrations).ArrayMax;
  if (iVar13 == *piVar1) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x838,(ForAnyElementType *)this,piVar1);
  }
  lVar17 = (longlong)iVar13 * 0x38;
  (this->Registrations).ArrayNum = iVar13 + 1;
  pFVar3 = (this->Registrations).AllocatorInstance.Data;
  *(_func___cdecl_UPackage_ptr **)(pFVar3 + lVar17) = local_78;
  *(_func___cdecl_UPackage_ptr **)(pFVar3 + lVar17 + 8) = p_Stack_70;
  *(wchar_t **)(pFVar3 + lVar17 + 0x10) = local_68;
  *(wchar_t **)(pFVar3 + lVar17 + 0x10 + 8) = pwStack_60;
  *(TRegistrationInfo<UPackage,FPackageReloadVersionInfo> **)(pFVar3 + lVar17 + 0x20) = local_58;
  *(longlong *)(pFVar3 + lVar17 + 0x20 + 8) = lStack_50;
  *(ulonglong *)(pFVar3 + lVar17 + 0x30) = CONCAT71(uStack_47,local_48);
  if (pFVar18 == (FName *)0x0) {
    return New;
  }
LAB_14225fb62:
  return iVar19 + ExistingNoChange;
}

// AddRegistration @ 14225fb90

AddResult __thiscall
TDeferredRegistry<TRegistrationInfo<UScriptStruct,FStructReloadVersionInfo>_>::AddRegistration
          (TDeferredRegistry<TRegistrationInfo<UScriptStruct,FStructReloadVersionInfo>_> *this,
          _func___cdecl_UScriptStruct_ptr *param_1,_func___cdecl_UScriptStruct_ptr *param_2,
          wchar_t *param_3,wchar_t *param_4,
          TRegistrationInfo<UScriptStruct,FStructReloadVersionInfo> *param_5,
          FStructReloadVersionInfo *param_6)

{
  int *piVar1;
  FName FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined4 uVar5;
  TRegistrationInfo<UScriptStruct,FStructReloadVersionInfo> *pTVar6;
  FName FVar7;
  char cVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  AddResult AVar12;
  int iVar13;
  IReload *pIVar14;
  undefined1 *puVar15;
  FName *pFVar16;
  longlong lVar17;
  FName *pFVar18;
  char cVar19;
  int iVar20;
  FName local_98;
  FName local_90;
  FName *local_88;
  TRegistrationInfo<UScriptStruct,FStructReloadVersionInfo> **local_80;
  _func___cdecl_UScriptStruct_ptr *local_78;
  _func___cdecl_UScriptStruct_ptr *p_Stack_70;
  wchar_t *local_68;
  wchar_t *pwStack_60;
  TRegistrationInfo<UScriptStruct,FStructReloadVersionInfo> *local_58;
  longlong lStack_50;
  char local_48;
  undefined7 uStack_47;
  
  ::FName::FName(&local_98,param_3);
  ::FName::FName(&local_90,param_4);
  FVar2 = local_98;
  uVar10 = ::GetTypeHash(local_98.ComparisonIndex.Value);
  FVar7 = local_90;
  uVar10 = FVar2.Number + uVar10;
  uVar11 = ::GetTypeHash(local_90.ComparisonIndex.Value);
  pTVar6 = param_5;
  if (*(int *)&(this->InfoMap).field_0x8 != *(int *)&(this->InfoMap).field_0x34) {
    puVar15 = *(undefined1 **)&(this->InfoMap).field_0x40;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = &(this->InfoMap).field_0x38;
    }
    uVar10 = *(uint *)(puVar15 +
                      (ulonglong)
                      (*(int *)&(this->InfoMap).field_0x48 - 1U &
                      (uVar10 * 0x40 + FVar7.Number + (uVar10 >> 2) + uVar11 + 0x9e3779b9 ^ uVar10))
                      * 4);
    if (uVar10 != 0xffffffff) {
      do {
        pFVar16 = (FName *)((longlong)(int)uVar10 * 0x20 + *(longlong *)&this->InfoMap);
        if ((*pFVar16 == local_98) && (pFVar16[1] == local_90)) {
          if (uVar10 != 0xffffffff) {
            pFVar18 = pFVar16 + 2;
            if (pFVar16 == (FName *)0x0) {
              pFVar18 = (FName *)0x0;
            }
            if (((pFVar18 == (FName *)0x0) ||
                (*(ulong64 *)((longlong)*pFVar18 + 0x10) != param_6->Size)) ||
               (*(uint *)((longlong)*pFVar18 + 0x18) != param_6->Hash)) goto LAB_14225fc75;
            iVar20 = 0;
            goto LAB_14225fc78;
          }
          break;
        }
        uVar10 = pFVar16[3].ComparisonIndex.Value;
      } while (uVar10 != 0xffffffff);
    }
  }
  pFVar18 = (FName *)0x0;
LAB_14225fc75:
  iVar20 = 1;
LAB_14225fc78:
  lVar17 = 0;
  uVar10 = param_6->Hash;
  uVar5 = *(undefined4 *)&param_6->field_0xc;
  (param_5->ReloadVersionInfo).Size = param_6->Size;
  (param_5->ReloadVersionInfo).Hash = uVar10;
  *(undefined4 *)&(param_5->ReloadVersionInfo).field_0xc = uVar5;
  cVar19 = (char)iVar20;
  if (pFVar18 == (FName *)0x0) {
    local_88 = &local_98;
    local_80 = &param_5;
    TSet<TTuple<TTuple<FName,FName>,TRegistrationInfo<UScriptStruct,FStructReloadVersionInfo>_*>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TRegistrationInfo<UScriptStruct,FStructReloadVersionInfo>_*,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<TTuple<FName,FName>_const_&,TRegistrationInfo<UScriptStruct,FStructReloadVersionInfo>_*_&&>_>
              ((TSet<TTuple<TTuple<FName,FName>,TRegistrationInfo<UScriptStruct,FStructReloadVersionInfo>_*>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TRegistrationInfo<UScriptStruct,FStructReloadVersionInfo>_*,0>,FDefaultSetAllocator>
                *)&this->InfoMap,
               (TPairInitializer<TTuple<FName,FName>_const_&,TRegistrationInfo<UScriptStruct,FStructReloadVersionInfo>_*_&&>
                *)&param_6,(bool *)&local_88);
  }
  else {
    lVar17 = *(longlong *)*pFVar18;
    if (lVar17 == 0) {
      lVar17 = *(longlong *)((longlong)*pFVar18 + 8);
    }
    pIVar14 = GetActiveReloadInterface();
    if ((pIVar14 != (IReload *)0x0) &&
       (cVar8 = (**(code **)((longlong)*pIVar14 + 0x18))(pIVar14,iVar20), cVar8 == '\0'))
    goto LAB_14225fe39;
    if (cVar19 == '\0') {
      FVar2 = *pFVar18;
      pTVar6->InnerSingleton = *(UScriptStruct **)FVar2;
      pTVar6->OuterSingleton = *(UScriptStruct **)((longlong)FVar2 + 8);
    }
    *pFVar18 = (FName)pTVar6;
  }
  pFVar3 = (this->Registrations).AllocatorInstance.Data;
  pwStack_60 = param_4;
  local_58 = pTVar6;
  local_78 = param_1;
  p_Stack_70 = param_2;
  local_68 = param_3;
  lStack_50 = lVar17;
  local_48 = cVar19;
  if (((pFVar3 <= (FScriptContainerElement *)&local_78) &&
      ((FScriptContainerElement *)&local_78 <
       pFVar3 + (longlong)(this->Registrations).ArrayMax * 0x38)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar4 = (code *)swi(3);
    AVar12 = (*pcVar4)();
    return AVar12;
  }
  iVar13 = (this->Registrations).ArrayNum;
  piVar1 = &(this->Registrations).ArrayMax;
  if (iVar13 == *piVar1) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x838,(ForAnyElementType *)this,piVar1);
  }
  lVar17 = (longlong)iVar13 * 0x38;
  (this->Registrations).ArrayNum = iVar13 + 1;
  pFVar3 = (this->Registrations).AllocatorInstance.Data;
  *(_func___cdecl_UScriptStruct_ptr **)(pFVar3 + lVar17) = local_78;
  *(_func___cdecl_UScriptStruct_ptr **)(pFVar3 + lVar17 + 8) = p_Stack_70;
  *(wchar_t **)(pFVar3 + lVar17 + 0x10) = local_68;
  *(wchar_t **)(pFVar3 + lVar17 + 0x10 + 8) = pwStack_60;
  *(TRegistrationInfo<UScriptStruct,FStructReloadVersionInfo> **)(pFVar3 + lVar17 + 0x20) = local_58
  ;
  *(longlong *)(pFVar3 + lVar17 + 0x20 + 8) = lStack_50;
  *(ulonglong *)(pFVar3 + lVar17 + 0x30) = CONCAT71(uStack_47,local_48);
  if (pFVar18 == (FName *)0x0) {
    return New;
  }
LAB_14225fe39:
  return iVar20 + ExistingNoChange;
}

// Get @ 14226db60

TDeferredRegistry<TRegistrationInfo<UClass,FClassReloadVersionInfo>_> * __cdecl
TDeferredRegistry<TRegistrationInfo<UClass,FClassReloadVersionInfo>_>::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_TDeferredRegistry<struct_TRegistrationInfo<class_UClass,struct_FClassReloadVersionInfo>_>&___ptr64___cdecl_TDeferredRegistry<TRegistrationInfo<UClass,FClassReloadVersionInfo>_>::Get(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_TDeferredRegistry<struct_TRegistrationInfo<class_UClass,struct_FClassReloadVersionInfo>_>&___ptr64___cdecl_TDeferredRegistry<TRegistrationInfo<UClass,FClassReloadVersionInfo>_>::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_TDeferredRegistry<struct_TRegistrationInfo<class_UClass,struct_FClassReloadVersionInfo>_>&___ptr64___cdecl_TDeferredRegistry<TRegistrationInfo<UClass,FClassReloadVersionInfo>_>::Get(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`TDeferredRegistry<TRegistrationInfo<UClass,FClassReloadVersionInfo>_>::Get'::__l2::
             _dynamic_atexit_destructor_for__Registry__);
      _Init_thread_footer(&`public:_static_class_TDeferredRegistry<struct_TRegistrationInfo<class_UClass,struct_FClassReloadVersionInfo>_>&___ptr64___cdecl_TDeferredRegistry<TRegistrationInfo<UClass,FClassReloadVersionInfo>_>::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return (TDeferredRegistry<TRegistrationInfo<UClass,FClassReloadVersionInfo>_> *)
         &`public:_static_class_TDeferredRegistry<struct_TRegistrationInfo<class_UClass,struct_FClassReloadVersionInfo>_>&___ptr64___cdecl_TDeferredRegistry<TRegistrationInfo<UClass,FClassReloadVersionInfo>_>::Get(void)'
          ::__l2::Registry;
}

// Get @ 14226dbd0

TDeferredRegistry<TRegistrationInfo<UEnum,FEnumReloadVersionInfo>_> * __cdecl
TDeferredRegistry<TRegistrationInfo<UEnum,FEnumReloadVersionInfo>_>::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_TDeferredRegistry<struct_TRegistrationInfo<class_UEnum,struct_FEnumReloadVersionInfo>_>&___ptr64___cdecl_TDeferredRegistry<TRegistrationInfo<UEnum,FEnumReloadVersionInfo>_>::Get(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_TDeferredRegistry<struct_TRegistrationInfo<class_UEnum,struct_FEnumReloadVersionInfo>_>&___ptr64___cdecl_TDeferredRegistry<TRegistrationInfo<UEnum,FEnumReloadVersionInfo>_>::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_TDeferredRegistry<struct_TRegistrationInfo<class_UEnum,struct_FEnumReloadVersionInfo>_>&___ptr64___cdecl_TDeferredRegistry<TRegistrationInfo<UEnum,FEnumReloadVersionInfo>_>::Get(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`TDeferredRegistry<TRegistrationInfo<UEnum,FEnumReloadVersionInfo>_>::Get'::__l2::
             _dynamic_atexit_destructor_for__Registry__);
      _Init_thread_footer(&`public:_static_class_TDeferredRegistry<struct_TRegistrationInfo<class_UEnum,struct_FEnumReloadVersionInfo>_>&___ptr64___cdecl_TDeferredRegistry<TRegistrationInfo<UEnum,FEnumReloadVersionInfo>_>::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return (TDeferredRegistry<TRegistrationInfo<UEnum,FEnumReloadVersionInfo>_> *)
         &`public:_static_class_TDeferredRegistry<struct_TRegistrationInfo<class_UEnum,struct_FEnumReloadVersionInfo>_>&___ptr64___cdecl_TDeferredRegistry<TRegistrationInfo<UEnum,FEnumReloadVersionInfo>_>::Get(void)'
          ::__l2::Registry;
}

// Get @ 14226dc40

TDeferredRegistry<TRegistrationInfo<UPackage,FPackageReloadVersionInfo>_> * __cdecl
TDeferredRegistry<TRegistrationInfo<UPackage,FPackageReloadVersionInfo>_>::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_TDeferredRegistry<struct_TRegistrationInfo<class_UPackage,struct_FPackageReloadVersionInfo>_>&___ptr64___cdecl_TDeferredRegistry<TRegistrationInfo<UPackage,FPackageReloadVersionInfo>_>::Get(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_TDeferredRegistry<struct_TRegistrationInfo<class_UPackage,struct_FPackageReloadVersionInfo>_>&___ptr64___cdecl_TDeferredRegistry<TRegistrationInfo<UPackage,FPackageReloadVersionInfo>_>::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_TDeferredRegistry<struct_TRegistrationInfo<class_UPackage,struct_FPackageReloadVersionInfo>_>&___ptr64___cdecl_TDeferredRegistry<TRegistrationInfo<UPackage,FPackageReloadVersionInfo>_>::Get(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`TDeferredRegistry<TRegistrationInfo<UPackage,FPackageReloadVersionInfo>_>::Get'::__l2
             ::_dynamic_atexit_destructor_for__Registry__);
      _Init_thread_footer(&`public:_static_class_TDeferredRegistry<struct_TRegistrationInfo<class_UPackage,struct_FPackageReloadVersionInfo>_>&___ptr64___cdecl_TDeferredRegistry<TRegistrationInfo<UPackage,FPackageReloadVersionInfo>_>::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return (TDeferredRegistry<TRegistrationInfo<UPackage,FPackageReloadVersionInfo>_> *)
         &`public:_static_class_TDeferredRegistry<struct_TRegistrationInfo<class_UPackage,struct_FPackageReloadVersionInfo>_>&___ptr64___cdecl_TDeferredRegistry<TRegistrationInfo<UPackage,FPackageReloadVersionInfo>_>::Get(void)'
          ::__l2::Registry;
}

// Get @ 14226dcb0

TDeferredRegistry<TRegistrationInfo<UScriptStruct,FStructReloadVersionInfo>_> * __cdecl
TDeferredRegistry<TRegistrationInfo<UScriptStruct,FStructReloadVersionInfo>_>::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_TDeferredRegistry<struct_TRegistrationInfo<class_UScriptStruct,struct_FStructReloadVersionInfo>_>&___ptr64___cdecl_TDeferredRegistry<TRegistrationInfo<UScriptStruct,FStructReloadVersionInfo>_>::Get(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_TDeferredRegistry<struct_TRegistrationInfo<class_UScriptStruct,struct_FStructReloadVersionInfo>_>&___ptr64___cdecl_TDeferredRegistry<TRegistrationInfo<UScriptStruct,FStructReloadVersionInfo>_>::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_TDeferredRegistry<struct_TRegistrationInfo<class_UScriptStruct,struct_FStructReloadVersionInfo>_>&___ptr64___cdecl_TDeferredRegistry<TRegistrationInfo<UScriptStruct,FStructReloadVersionInfo>_>::Get(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`TDeferredRegistry<TRegistrationInfo<UScriptStruct,FStructReloadVersionInfo>_>::Get'::
             __l2::_dynamic_atexit_destructor_for__Registry__);
      _Init_thread_footer(&`public:_static_class_TDeferredRegistry<struct_TRegistrationInfo<class_UScriptStruct,struct_FStructReloadVersionInfo>_>&___ptr64___cdecl_TDeferredRegistry<TRegistrationInfo<UScriptStruct,FStructReloadVersionInfo>_>::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return (TDeferredRegistry<TRegistrationInfo<UScriptStruct,FStructReloadVersionInfo>_> *)
         &`public:_static_class_TDeferredRegistry<struct_TRegistrationInfo<class_UScriptStruct,struct_FStructReloadVersionInfo>_>&___ptr64___cdecl_TDeferredRegistry<TRegistrationInfo<UScriptStruct,FStructReloadVersionInfo>_>::Get(void)'
          ::__l2::Registry;
}

