// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 12

// FCustomVersionContainer @ 141986510

FCustomVersionContainer * __thiscall
FCustomVersionContainer::FCustomVersionContainer
          (FCustomVersionContainer *this,FCustomVersionContainer *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  (this->Versions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Versions).ArrayMax;
  iVar2 = (param_1->Versions).ArrayNum;
  _Src = (param_1->Versions).AllocatorInstance.Data;
  (this->Versions).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x28,8,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
  memcpy((this->Versions).AllocatorInstance.Data,_Src,(longlong)iVar2 * 0x28);
  return this;
}

// operator= @ 141988660

FCustomVersionContainer * __thiscall
FCustomVersionContainer::operator=(FCustomVersionContainer *this,FCustomVersionContainer *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    iVar2 = (this->Versions).ArrayMax;
    piVar1 = &(this->Versions).ArrayMax;
    _Src = (param_1->Versions).AllocatorInstance.Data;
    iVar3 = (param_1->Versions).ArrayNum;
    (this->Versions).ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar2 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,iVar3,iVar2,(ForAnyElementType *)this,iVar3,piVar1);
    if (iVar3 != 0) {
      memcpy((this->Versions).AllocatorInstance.Data,_Src,(longlong)iVar3 * 0x28);
    }
  }
  return this;
}

// Empty @ 1419f39f0

void __thiscall FCustomVersionContainer::Empty(FCustomVersionContainer *this)

{
  int *piVar1;
  
  piVar1 = &(this->Versions).ArrayMax;
  (this->Versions).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  return;
}

// GetFriendlyName @ 1419fe490

FName __thiscall
FCustomVersionContainer::GetFriendlyName(FCustomVersionContainer *this,FGuid *param_1)

{
  uint uVar1;
  FCustomVersion *pFVar2;
  undefined8 *in_R8;
  FGuid local_18;
  
  local_18._0_8_ = *in_R8;
  local_18._8_8_ = in_R8[1];
  param_1->A = 0;
  param_1->B = 0;
  pFVar2 = GetVersion(this,&local_18);
  if (pFVar2 != (FCustomVersion *)0x0) {
    uVar1 = (pFVar2->FriendlyName).Number;
    param_1->A = (pFVar2->FriendlyName).ComparisonIndex.Value;
    param_1->B = uVar1;
  }
  return (FName)param_1;
}

// GetRegistered @ 141a034e0

FCustomVersionContainer * __cdecl FCustomVersionContainer::GetRegistered(void)

{
  code *pcVar1;
  bool bVar2;
  FStaticCustomVersionRegistry *this;
  FCustomVersionContainer *pFVar3;
  
  this = FStaticCustomVersionRegistry::Get();
  if (this == (FStaticCustomVersionRegistry *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x43,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FCustomVersionContainer *)(*pcVar1)();
      return pFVar3;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)this);
  FStaticCustomVersionRegistry::RegisterQueue(this);
  if (this != (FStaticCustomVersionRegistry *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)this);
  }
  return &this->Registered;
}

// GetVersion @ 141a04970

FCustomVersion * __thiscall
FCustomVersionContainer::GetVersion(FCustomVersionContainer *this,FGuid *param_1)

{
  FCustomVersion *pFVar1;
  FName *pFVar2;
  FName local_res10 [3];
  
  if (((param_1->D == 0xf99d40c1 && param_1->C == 0) && param_1->B == 0) && param_1->A == 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < `GetUnusedCustomVersion'::`2'::_TSS0) {
      _Init_thread_header(&`GetUnusedCustomVersion'::`2'::_TSS0);
      if (`GetUnusedCustomVersion'::`2'::_TSS0 == -1) {
        pFVar2 = ::FName::FName(local_res10,L"Unused custom version");
        `GetUnusedCustomVersion'::`2'::UnusedCustomVersion.FriendlyName = *pFVar2;
        `GetUnusedCustomVersion'::`2'::UnusedCustomVersion.Key.A = 0;
        `GetUnusedCustomVersion'::`2'::UnusedCustomVersion.Key.B = 0;
        `GetUnusedCustomVersion'::`2'::UnusedCustomVersion.Key.C = 0;
        `GetUnusedCustomVersion'::`2'::UnusedCustomVersion.Version = 0;
        `GetUnusedCustomVersion'::`2'::UnusedCustomVersion.Validator =
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0;
        `GetUnusedCustomVersion'::`2'::UnusedCustomVersion.Key.D = 0xf99d40c1;
        `GetUnusedCustomVersion'::`2'::UnusedCustomVersion.ReferenceCount = 1;
        _Init_thread_footer(&`GetUnusedCustomVersion'::`2'::_TSS0);
      }
    }
    return &`GetUnusedCustomVersion'::`2'::UnusedCustomVersion;
  }
  pFVar1 = TArray<FCustomVersion,TSizedDefaultAllocator<32>_>::FindByKey<FGuid>
                     (&this->Versions,param_1);
  return pFVar1;
}

// Serialize @ 141a1e0a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ECustomVersionSerializationFormat": Some values do not have unique names */

void __thiscall
FCustomVersionContainer::Serialize
          (FCustomVersionContainer *this,FArchive *param_1,ECustomVersionSerializationFormat param_2
          )

{
  undefined1 auStack_1c8 [32];
  undefined **local_1a8;
  FArchive *local_1a0;
  undefined ***local_198;
  undefined8 **local_190;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  local_1a8 = &___7FBinaryArchiveFormatter__6B_;
  local_198 = &local_1a8;
  local_190 = &local_198;
  local_1a0 = param_1;
  Serialize(this,(FStructuredArchiveSlot)&local_198,param_2);
  return;
}

// Serialize @ 141a1e110

/* WARNING: Enum "ECustomVersionSerializationFormat": Some values do not have unique names */

void __thiscall
FCustomVersionContainer::Serialize
          (FCustomVersionContainer *this,FStructuredArchiveSlot param_1,
          ECustomVersionSerializationFormat param_2)

{
  int *piVar1;
  FGuidCustomVersion_DEPRECATED *pFVar2;
  FGuidCustomVersion_DEPRECATED *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  FName *pFVar10;
  longlong lVar11;
  ForAnyElementType FVar12;
  ulonglong uVar13;
  ForAnyElementType FVar14;
  wchar_t *pwVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  undefined1 local_res18 [8];
  FName local_res20;
  TArray<_anonymous_namespace_::FGuidCustomVersion_DEPRECATED,TSizedDefaultAllocator<32>_> local_c8;
  TArray<_anonymous_namespace_::FEnumCustomVersion_DEPRECATED,TSizedDefaultAllocator<32>_> local_b8;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  FName local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  int local_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  FName local_60;
  FString local_58;
  FName local_48 [2];
  
  if (param_2 == Guids) {
    if (((*(byte *)(*(longlong *)(*(longlong *)param_1 + 8) + 0x28) & 1) == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Slot.GetUnderlyingArchive().IsLoading()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\CustomVersion.cpp"
                           ,0x159,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.ArrayNum = 0;
    local_c8.ArrayMax = 0;
    operator<<<`anonymous_namespace'::FGuidCustomVersion_DEPRECATED>(param_1,&local_c8);
    uVar13 = local_c8._8_8_ & 0xffffffff;
    if (local_c8.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar13);
    }
    piVar1 = &(this->Versions).ArrayMax;
    (this->Versions).ArrayNum = 0;
    if (*piVar1 != local_c8.ArrayNum) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,local_c8.ArrayNum,(ForAnyElementType *)this,0,piVar1);
      uVar13 = local_c8._8_8_ & 0xffffffff;
    }
    iVar8 = (int)uVar13;
    pFVar16 = local_c8.AllocatorInstance.Data + 0x18;
    pFVar3 = (FGuidCustomVersion_DEPRECATED *)
             (local_c8.AllocatorInstance.Data + (longlong)iVar8 * 0x28);
    while( true ) {
      iVar9 = (int)uVar13;
      if ((int)uVar13 != iVar8) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<`anonymous_namespace'::FGuidCustomVersion_DEPRECATED,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res18);
        iVar9 = local_c8.ArrayNum;
      }
      pFVar2 = (FGuidCustomVersion_DEPRECATED *)(pFVar16 + -0x18);
      if (pFVar2 == pFVar3) break;
      if (*(int *)(pFVar16 + 8) == 0) {
        pwVar15 = L"";
      }
      else {
        pwVar15 = *(wchar_t **)pFVar16;
      }
      pFVar10 = ::FName::FName(local_48,pwVar15);
      local_80._0_4_ = (pFVar2->Key).A;
      local_80._4_4_ = (pFVar2->Key).B;
      uStack_78 = *(undefined8 *)(pFVar16 + -0x10);
      pFVar4 = (this->Versions).AllocatorInstance.Data;
      local_60 = *pFVar10;
      local_70 = *(int *)(pFVar16 + -8);
      uStack_6c = 1;
      uStack_68 = 0;
      if (((pFVar4 <= (FScriptContainerElement *)&local_80) &&
          ((FScriptContainerElement *)&local_80 < pFVar4 + (longlong)*piVar1 * 0x28)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar9 = (this->Versions).ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x828,(ForAnyElementType *)this,piVar1);
      }
      pFVar16 = pFVar16 + 0x28;
      (this->Versions).ArrayNum = iVar9 + 1;
      lVar11 = (longlong)iVar9;
      pFVar4 = (this->Versions).AllocatorInstance.Data;
      *(undefined8 *)(pFVar4 + lVar11 * 0x28) = local_80;
      *(undefined8 *)(pFVar4 + lVar11 * 0x28 + 8) = uStack_78;
      *(ulonglong *)(pFVar4 + lVar11 * 0x28 + 0x10) = CONCAT44(uStack_6c,local_70);
      *(undefined8 *)(pFVar4 + lVar11 * 0x28 + 0x10 + 8) = uStack_68;
      *(FName *)(pFVar4 + lVar11 * 0x28 + 0x20) = local_60;
      uVar13 = local_c8._8_8_ & 0xffffffff;
    }
    DestructItems<_anonymous_namespace_::FGuidCustomVersion_DEPRECATED,int>
              ((FGuidCustomVersion_DEPRECATED *)local_c8.AllocatorInstance.Data,iVar9);
    FVar12.Data = local_c8.AllocatorInstance.Data;
  }
  else {
    if (param_2 != Enums) {
      if (param_2 == Latest) {
        operator<<<FCustomVersion>(param_1,&this->Versions);
        return;
      }
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\CustomVersion.cpp"
                         ,0x144,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (((*(byte *)(*(longlong *)(*(longlong *)param_1 + 8) + 0x28) & 1) == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Slot.GetUnderlyingArchive().IsLoading()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\CustomVersion.cpp"
                           ,0x149,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar17 = 0;
    local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.ArrayNum = 0;
    local_b8.ArrayMax = 0;
    operator<<<`anonymous_namespace'::FEnumCustomVersion_DEPRECATED>(param_1,&local_b8);
    uVar13 = local_b8._8_8_ & 0xffffffff;
    if (local_b8.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar13);
    }
    piVar1 = &(this->Versions).ArrayMax;
    (this->Versions).ArrayNum = 0;
    if (*piVar1 != local_b8.ArrayNum) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,local_b8.ArrayNum,(ForAnyElementType *)this,0,piVar1);
      uVar13 = local_b8._8_8_ & 0xffffffff;
    }
    for (; (FVar12.Data = local_b8.AllocatorInstance.Data, -1 < (int)uVar17 &&
           ((int)uVar17 < (int)uVar13)); uVar17 = uVar17 + 1) {
      uVar7 = 0;
      if ((int)uVar17 < (int)uVar13) {
        uVar7 = ~uVar17 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar12.Data = local_b8.AllocatorInstance.Data;
      ::FString::PrintfImpl(&local_58,L"EnumTag%u");
      FVar14.Data = (FScriptContainerElement *)L"";
      if (local_58.Data.ArrayNum != 0) {
        FVar14.Data = local_58.Data.AllocatorInstance.Data;
      }
      pFVar10 = ::FName::FName(&local_res20,(wchar_t *)FVar14.Data);
      local_98 = *(undefined4 *)(FVar12.Data + (longlong)(int)uVar17 * 8 + 4);
      local_88 = *pFVar10;
      uStack_9c = *(undefined4 *)(FVar12.Data + (longlong)(int)uVar17 * 8);
      local_a8 = 0;
      uStack_a0 = 0;
      uStack_94 = 1;
      uStack_90 = 0;
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      pFVar16 = (this->Versions).AllocatorInstance.Data;
      if (((pFVar16 <= (FScriptContainerElement *)&local_a8) &&
          ((FScriptContainerElement *)&local_a8 < pFVar16 + (longlong)*piVar1 * 0x28)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = (this->Versions).ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x828,(ForAnyElementType *)this,piVar1);
      }
      (this->Versions).ArrayNum = iVar8 + 1;
      lVar11 = (longlong)iVar8;
      pFVar16 = (this->Versions).AllocatorInstance.Data;
      *(undefined8 *)(pFVar16 + lVar11 * 0x28) = local_a8;
      *(ulonglong *)(pFVar16 + lVar11 * 0x28 + 8) = CONCAT44(uStack_9c,uStack_a0);
      *(ulonglong *)(pFVar16 + lVar11 * 0x28 + 0x10) = CONCAT44(uStack_94,local_98);
      *(undefined8 *)(pFVar16 + lVar11 * 0x28 + 0x10 + 8) = uStack_90;
      *(FName *)(pFVar16 + lVar11 * 0x28 + 0x20) = local_88;
      uVar13 = local_b8._8_8_ & 0xffffffff;
    }
  }
  if ((FGuidCustomVersion_DEPRECATED *)FVar12.Data != (FGuidCustomVersion_DEPRECATED *)0x0) {
    FMemory::Free(FVar12.Data);
  }
  return;
}

// SetVersion @ 141a211a0

void __thiscall
FCustomVersionContainer::SetVersion
          (FCustomVersionContainer *this,FGuid *param_1,int param_2,FName param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FCustomVersion *pFVar6;
  longlong lVar7;
  undefined8 local_38;
  undefined8 uStack_30;
  int local_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  FName local_18;
  
  if (((param_1->D != 0xf99d40c1 || param_1->C != 0) || param_1->B != 0) || param_1->A != 0) {
    pFVar6 = TArray<FCustomVersion,TSizedDefaultAllocator<32>_>::FindByKey<FGuid>
                       (&this->Versions,param_1);
    if (pFVar6 == (FCustomVersion *)0x0) {
      local_38._0_4_ = param_1->A;
      local_38._4_4_ = param_1->B;
      uStack_30._0_4_ = param_1->C;
      uStack_30._4_4_ = param_1->D;
      pFVar2 = (this->Versions).AllocatorInstance.Data;
      uStack_24 = 1;
      uStack_20 = 0;
      local_28 = param_2;
      local_18 = param_3;
      if ((pFVar2 <= (FScriptContainerElement *)&local_38) &&
         ((FScriptContainerElement *)&local_38 < pFVar2 + (longlong)(this->Versions).ArrayMax * 0x28
         )) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar5 = (this->Versions).ArrayNum;
      piVar1 = &(this->Versions).ArrayMax;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x828,(ForAnyElementType *)this,piVar1);
      }
      lVar7 = (longlong)iVar5;
      (this->Versions).ArrayNum = iVar5 + 1;
      pFVar2 = (this->Versions).AllocatorInstance.Data;
      *(undefined8 *)(pFVar2 + lVar7 * 0x28) = local_38;
      *(undefined8 *)(pFVar2 + lVar7 * 0x28 + 8) = uStack_30;
      *(ulonglong *)(pFVar2 + lVar7 * 0x28 + 0x10) = CONCAT44(uStack_24,local_28);
      *(undefined8 *)(pFVar2 + lVar7 * 0x28 + 0x10 + 8) = uStack_20;
      *(FName *)(pFVar2 + lVar7 * 0x28 + 0x20) = local_18;
    }
    else {
      pFVar6->Version = param_2;
      pFVar6->FriendlyName = param_3;
    }
  }
  return;
}

// SetVersionUsingRegistry @ 141a212f0

void __thiscall
FCustomVersionContainer::SetVersionUsingRegistry
          (FCustomVersionContainer *this,FGuid *param_1,ESetCustomVersionFlags param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FCustomVersion *pFVar7;
  TOptional<FCustomVersion> *pTVar8;
  longlong lVar9;
  TOptional<FCustomVersion> local_108;
  int local_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  FName local_b8;
  uint local_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  TOptional<FCustomVersion> local_a0;
  TOptional<FCustomVersion> local_70;
  TOptional<FCustomVersion> local_40;
  
  if (((param_1->D != 0xf99d40c1 || param_1->C != 0) || param_1->B != 0) || param_1->A != 0) {
    pFVar7 = TArray<FCustomVersion,TSizedDefaultAllocator<32>_>::FindByKey<FGuid>
                       (&this->Versions,param_1);
    if (pFVar7 == (FCustomVersion *)0x0) {
      pTVar8 = FCurrentCustomVersions::Get(&local_40,param_1);
      if ((pTVar8 == &local_a0) || (pTVar8->bIsSet == false)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("RegisteredVersion",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\CustomVersion.cpp"
                           ,0x1b4,L"Attempted to set a version that is not registered");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else {
        local_a0.TypedValue.Version = (pTVar8->TypedValue).Version;
        local_a0.TypedValue.ReferenceCount = (pTVar8->TypedValue).ReferenceCount;
        local_a0.TypedValue.Validator = (pTVar8->TypedValue).Validator;
        local_a0.TypedValue.FriendlyName = (pTVar8->TypedValue).FriendlyName;
      }
      piVar1 = &(this->Versions).ArrayMax;
      local_b0 = param_1->A;
      uStack_ac = param_1->B;
      uStack_a8 = param_1->C;
      uStack_a4 = param_1->D;
      local_c8 = local_a0.TypedValue.Version;
      local_b8 = local_a0.TypedValue.FriendlyName;
      iVar6 = (this->Versions).ArrayNum;
      uStack_c4 = 1;
      uStack_c0 = 0;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x828,(ForAnyElementType *)this,piVar1);
      }
      (this->Versions).ArrayNum = iVar6 + 1;
      lVar9 = (longlong)iVar6;
      pFVar3 = (this->Versions).AllocatorInstance.Data;
      pFVar2 = pFVar3 + lVar9 * 0x28;
      *(uint *)pFVar2 = local_b0;
      *(uint *)(pFVar2 + 4) = uStack_ac;
      *(uint *)(pFVar2 + 8) = uStack_a8;
      *(uint *)(pFVar2 + 0xc) = uStack_a4;
      *(ulonglong *)(pFVar3 + lVar9 * 0x28 + 0x10) = CONCAT44(uStack_c4,local_c8);
      *(undefined8 *)(pFVar3 + lVar9 * 0x28 + 0x10 + 8) = uStack_c0;
      *(FName *)(pFVar3 + lVar9 * 0x28 + 0x20) = local_b8;
    }
    else if ((param_2 & SkipUpdateExistingVersion) == None) {
      local_108.bIsSet = false;
      pTVar8 = FCurrentCustomVersions::Get(&local_70,param_1);
      if ((pTVar8 == &local_108) || (pTVar8->bIsSet == false)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("RegisteredVersion",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\CustomVersion.cpp"
                           ,0x1a8,L"Attempted to set a version that is not registered");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else {
        local_108.TypedValue.Key.A = (pTVar8->TypedValue).Key.A;
        local_108.TypedValue.Key.B = (pTVar8->TypedValue).Key.B;
        local_108.TypedValue.Key.C = (pTVar8->TypedValue).Key.C;
        local_108.TypedValue.Key.D = (pTVar8->TypedValue).Key.D;
        local_108.bIsSet = true;
        local_108.TypedValue.Version = (pTVar8->TypedValue).Version;
        local_108.TypedValue.ReferenceCount = (pTVar8->TypedValue).ReferenceCount;
        local_108.TypedValue.Validator = (pTVar8->TypedValue).Validator;
        local_108.TypedValue.FriendlyName = (pTVar8->TypedValue).FriendlyName;
      }
      pFVar7->Version = local_108.TypedValue.Version;
      if ((local_108.bIsSet == false) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar7->FriendlyName = local_108.TypedValue.FriendlyName;
    }
  }
  return;
}

// SortByKey @ 141a21570

void __thiscall FCustomVersionContainer::SortByKey(FCustomVersionContainer *this)

{
  TLess<void> local_res8;
  
  AlgoImpl::
  IntroSortInternal<FCustomVersion,int,UE::Core::Private::TProjectionMemberData<FGuid_FCustomVersion::*>,TLess<void>_>
            ((FCustomVersion *)(this->Versions).AllocatorInstance.Data,(this->Versions).ArrayNum,
             (TProjectionMemberData<FGuid_FCustomVersion::*>)0x0,local_res8);
  return;
}

// ToString @ 141a25360

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FCustomVersionContainer::ToString
          (FCustomVersionContainer *this,FString *__return_storage_ptr__,FString *param_1)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  undefined8 uVar5;
  FGuid *pFVar6;
  FString *pFVar7;
  void *pvVar8;
  TStringBuilderBase<wchar_t> *pTVar9;
  FName FVar10;
  FString *pFVar11;
  ulong64 uVar12;
  FGuid *this_00;
  int iVar13;
  undefined1 auStack_10d8 [32];
  undefined1 local_10b8 [4];
  FName local_10b4;
  FGuid *local_10a8;
  FString *local_10a0;
  FString local_1098;
  TOptional<FCustomVersion> local_1088;
  TStringBuilderBase<wchar_t> local_1058;
  wchar_t local_1038 [2048];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_10d8;
  iVar1 = (this->Versions).ArrayNum;
  local_1058.Base = local_1038;
  this_00 = (FGuid *)(this->Versions).AllocatorInstance.Data;
  local_1058.CurPos = local_1038;
  local_10a8 = (FGuid *)((longlong)this_00 + (longlong)iVar1 * 0x28);
  local_1058.End = (wchar_t *)local_38;
  local_1058.bIsDynamic = false;
  local_1058.bIsExternal = false;
  local_10a0 = __return_storage_ptr__;
  while( true ) {
    pFVar6 = local_10a8;
    if ((this->Versions).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FCustomVersion_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_10b8);
    }
    pFVar7 = local_10a0;
    if (this_00 == pFVar6) break;
    iVar2 = (param_1->Data).ArrayNum;
    pFVar3 = (param_1->Data).AllocatorInstance.Data;
    iVar13 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar13 = 0;
    }
    uVar12 = (ulong64)iVar13;
    if (local_1058.End < local_1058.CurPos + uVar12) {
      TStringBuilderBase<wchar_t>::Extend(&local_1058,uVar12);
    }
    if (iVar13 != 0) {
      pvVar8 = FGenericPlatformString::Memcpy(local_1058.CurPos,pFVar3,uVar12 * 2);
      local_1058.CurPos = (wchar_t *)((longlong)pvVar8 + uVar12 * 2);
    }
    pTVar9 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_1058,L"Key=",4);
    FGuid::AppendString(this_00,pTVar9,DigitsWithHyphensLower);
    pTVar9 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar9,L" Version = ",0xb);
    pTVar9 = TStringBuilderBase<wchar_t>::AppendfImpl(pTVar9,L"%d");
    pTVar9 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar9,L" Friendly Name = ",0x11);
    lVar4._0_4_ = this_00[2].A;
    lVar4._4_4_ = this_00[2].B;
    if (lVar4 == 0) {
      FCurrentCustomVersions::Get(&local_1088,this_00);
      if (local_1088.bIsSet != false) {
        FVar10 = FCustomVersion::GetFriendlyName(&local_1088.TypedValue);
        uVar5 = *(undefined8 *)FVar10;
        this_00[2].A = (int)uVar5;
        this_00[2].B = (int)((ulonglong)uVar5 >> 0x20);
      }
    }
    local_10b4.ComparisonIndex.Value = this_00[2].A;
    local_10b4.Number = this_00[2].B;
    ::FName::AppendString(&local_10b4,pTVar9);
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar9,L"\n",1);
    this_00 = (FGuid *)&this_00[2].C;
  }
  (local_10a0->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (local_10a0->Data).ArrayNum = 0;
  (local_10a0->Data).ArrayMax = 0;
  pFVar11 = ::FString::ConstructFromPtrSize
                      (&local_1098,local_1058.Base,
                       (int)((longlong)local_1058.CurPos - (longlong)local_1058.Base >> 1));
  if (pFVar7 != pFVar11) {
    pFVar3 = (pFVar7->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar7->Data).AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
    (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->Data).ArrayNum = (pFVar11->Data).ArrayNum;
    (pFVar7->Data).ArrayMax = (pFVar11->Data).ArrayMax;
    (pFVar11->Data).ArrayNum = 0;
    (pFVar11->Data).ArrayMax = 0;
  }
  if (local_1098.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1098.Data.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1058);
  return pFVar7;
}

