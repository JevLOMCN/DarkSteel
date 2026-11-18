// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 10

// GetTyped @ 141f877c0

FField * __thiscall FFieldPath::GetTyped(FFieldPath *this,FFieldClass *param_1,UStruct *param_2)

{
  FFieldClass *pFVar1;
  code *pcVar2;
  bool bVar3;
  FField *pFVar4;
  
  if (this->ResolvedField == (FField *)0x0) {
    pFVar4 = (FField *)0x0;
  }
  else {
    bVar3 = FWeakObjectPtr::IsValid(&(this->ResolvedOwner).WeakPtr);
    pFVar4 = this->ResolvedField;
    if (bVar3) {
      return pFVar4;
    }
  }
  if ((this->Path).ArrayNum != 0) {
    pFVar4 = TryToResolvePath(this,param_2,UseStructIfOuterNotFound);
    if (pFVar4 != (FField *)0x0) {
      if ((param_1 == (FFieldClass *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("FieldType",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                             ,0x2dd,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FField *)(*pcVar2)();
        return pFVar4;
      }
      pFVar1 = pFVar4->ClassPrivate;
      if (param_1->Id == CASTCLASS_None) {
        for (; pFVar1 != (FFieldClass *)0x0; pFVar1 = pFVar1->SuperClass) {
          if (pFVar1 == param_1) {
            bVar3 = true;
            goto LAB_141f87880;
          }
        }
        bVar3 = false;
      }
      else {
        bVar3 = (pFVar1->CastFlags & param_1->Id) != CASTCLASS_None;
      }
LAB_141f87880:
      if (bVar3) {
        this->ResolvedField = pFVar4;
        return pFVar4;
      }
    }
    pFVar4 = (FField *)0x0;
    if (this->ResolvedField != (FField *)0x0) {
      (this->ResolvedOwner).WeakPtr = (FWeakObjectPtr)0x0;
      pFVar4 = (FField *)0x0;
      this->ResolvedField = (FField *)0x0;
    }
  }
  return pFVar4;
}

// ConvertFromFullPath @ 141fc7a40

/* WARNING: Enum "Type": Some values do not have unique names */

UStruct * __thiscall FFieldPath::ConvertFromFullPath(FFieldPath *this,FLinkerLoad *param_1)

{
  UStruct *pUVar1;
  FString local_18;
  
  pUVar1 = TryToResolveOwnerFromStruct(this,(UStruct *)0x0,UseStructIfOuterNotFound);
  if ((pUVar1 == (UStruct *)0x0) && (param_1 != (FLinkerLoad *)0x0)) {
    pUVar1 = TryToResolveOwnerFromLinker(this,param_1);
  }
  if (((5 < (byte)LogProperty._0_1_) && (pUVar1 == (UStruct *)0x0)) && ((this->Path).ArrayNum != 0))
  {
    PathToString(&local_18,&this->Path);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogProperty);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return pUVar1;
}

// Generate @ 141fccc90

void __thiscall FFieldPath::Generate(FFieldPath *this,FField *param_1)

{
  int *piVar1;
  FName *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  FFieldObjectUnion FVar9;
  UObject *local_res8 [2];
  FName local_48 [2];
  
  piVar1 = &(this->Path).ArrayMax;
  this->ResolvedField = (FField *)0x0;
  (this->ResolvedOwner).WeakPtr = (FWeakObjectPtr)0x0;
  (this->Path).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->Path).AllocatorInstance,0,piVar1);
  }
  if (param_1 != (FField *)0x0) {
    pUVar6 = FField::GetOwnerUObject(param_1);
    if (pUVar6 == (UObject *)0x0) goto LAB_141fccd1a;
    do {
      pUVar7 = Z_Construct_UClass_UStruct_NoRegister();
      iVar5 = (int)pUVar7->_padding_;
      if ((iVar5 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar5 * 8) ==
          &pUVar7->_padding_)) goto LAB_141fccd4c;
LAB_141fccd1a:
      pUVar6 = *(UObject **)&pUVar6->field_0x20;
    } while (pUVar6 != (UObject *)0x0);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Owner",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\FieldPath.cpp"
                       ,0x55,L"");
    pUVar6 = (UObject *)0x0;
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
LAB_141fccd4c:
    FVar9.Field = param_1;
    if ((((ulonglong)param_1 & 1) != 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsUObject()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                           ,0x180,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
joined_r0x000141fccd82:
    if ((FVar9.Unknown & 0xfffffffffffffffe) != 0) {
LAB_141fccd90:
      pUVar7 = Z_Construct_UClass_UStruct_NoRegister();
      if (((FVar9.Unknown & 1) == 0) ||
         (pUVar8 = (UObject *)(FVar9.Unknown & 0xfffffffffffffffe), pUVar8 == (UObject *)0x0)) {
LAB_141fccdc5:
        pUVar8 = (UObject *)0x0;
      }
      else {
        iVar5 = (int)pUVar7->_padding_;
        if ((*(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38) < iVar5) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar5 * 8) !=
            &pUVar7->_padding_)) goto LAB_141fccdc5;
      }
      if (pUVar8 == pUVar6) goto LAB_141fccf12;
      if ((FVar9.Unknown & 1) == 0) {
        bVar4 = IsThisNotNull(FVar9.Field,"FField::GetFName");
        if (bVar4) {
          local_48[0] = (FVar9.Field)->NamePrivate;
        }
        else {
          local_48[0].ComparisonIndex.Value = 0;
          local_48[0].Number = 0;
        }
      }
      else {
        local_48[0] = *(FName *)((FVar9.Unknown & 0xfffffffffffffffe) + 0x18);
      }
      pFVar2 = (FName *)(this->Path).AllocatorInstance.Data;
      if (((pFVar2 <= local_48) && (local_48 < pFVar2 + *piVar1)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = (this->Path).ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(this->Path).AllocatorInstance,piVar1);
      }
      (this->Path).ArrayNum = iVar5 + 1;
      *(FName *)((this->Path).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_48[0];
      if ((FVar9.Unknown & 1) == 0) {
        FVar9 = (FFieldObjectUnion)((FFieldObjectUnion *)(FVar9.Unknown + 0x10))->Unknown;
        if (((ulonglong)FVar9 & 1) == 0) goto joined_r0x000141fccd82;
      }
      else {
        FVar9.Unknown = *(ulonglong *)((FVar9.Unknown & 0xfffffffffffffffe) + 0x20) | 1;
      }
      if (((UObject *)(FVar9.Unknown & 0xfffffffffffffffe) != (UObject *)0x0) &&
         (UE::GC::GIsIncrementalReachabilityPending != false)) {
        UE::GC::MarkAsReachable((UObject *)(FVar9.Unknown & 0xfffffffffffffffe));
      }
      if (((FVar9.Unknown & 1) == 0) ||
         ((UObject *)(FVar9.Unknown & 0xfffffffffffffffe) == (UObject *)0x0))
      goto joined_r0x000141fccd82;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)(FVar9.Unknown & 0xfffffffffffffffe));
      }
      goto LAB_141fccd90;
    }
LAB_141fccf12:
    local_res8[0] = pUVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    FWeakObjectPtr::operator=(&(this->ResolvedOwner).WeakPtr,(FObjectPtr)local_res8);
    this->ResolvedField = param_1;
  }
  return;
}

// Generate @ 141fccf60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FFieldPath::Generate(FFieldPath *this,wchar_t *param_1)

{
  int *piVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  wchar_t wVar3;
  int iVar4;
  undefined8 uVar5;
  FFieldClass *pFVar6;
  code *pcVar7;
  bool bVar8;
  FFieldClass *pFVar9;
  UStruct *pUVar10;
  FField *pFVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  FScriptContainerElement *pFVar17;
  undefined1 auStackY_8a8 [32];
  ForAnyElementType local_858;
  uint local_850;
  uint uStack_84c;
  FName local_848 [2];
  wchar_t local_838 [1024];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_8a8;
  if ((param_1 == (wchar_t *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InFieldPathString",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\FieldPath.cpp"
                         ,0x6e,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar14 = 0;
  pTVar2 = &this->Path;
  this->ResolvedField = (FField *)0x0;
  piVar1 = &(this->Path).ArrayMax;
  (this->ResolvedOwner).WeakPtr = (FWeakObjectPtr)0x0;
  (this->Path).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  local_858.Data = (FScriptContainerElement *)0x0;
  local_850 = 0;
  uStack_84c = 0;
  uVar13 = uVar14;
  uVar16 = uVar14;
  while( true ) {
    for (; ((wVar3 = *param_1, wVar3 != L'.' && (wVar3 != L':')) && (wVar3 != L'\0'));
        param_1 = param_1 + 1) {
      local_838[uVar13] = wVar3;
      uVar13 = uVar13 + 1;
    }
    if (0x7ff < uVar13 * 2) {
                    /* WARNING: Subroutine does not return */
      __report_rangecheckfailure();
    }
    local_838[uVar13] = L'\0';
    if (0 < (longlong)uVar13) {
      ::FName::FName(local_848,local_838);
      if (((local_858.Data <= local_848) &&
          (local_848 < (FName *)(local_858.Data + (longlong)(int)uStack_84c * 8))) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (local_850 == uStack_84c) {
        local_850 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&local_858,(int *)&uStack_84c);
      }
      *(FName *)(local_858.Data + (longlong)(int)local_850 * 8) = local_848[0];
      uVar16 = (ulonglong)(local_850 + 1);
      uVar13 = uVar14;
      local_850 = local_850 + 1;
    }
    uVar15 = (uint)uVar16;
    if (*param_1 == L'\0') break;
    param_1 = param_1 + 1;
  }
  uVar12 = uVar15;
  if ((int)uVar15 < 2) {
    if (((uVar15 == 1) && (*(FName *)local_858.Data == (FName)0x0)) &&
       (local_850 = 0, uVar12 = 0, uStack_84c != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&local_858,0,(int *)&uStack_84c);
      uVar12 = local_850;
    }
  }
  else if (0 < (int)uVar15 / 2) {
    pFVar17 = local_858.Data + (longlong)(int)(uVar15 - 1) * 8;
    do {
      uVar5 = *(undefined8 *)(local_858.Data + uVar14 * 8);
      *(undefined8 *)(local_858.Data + uVar14 * 8) = *(undefined8 *)pFVar17;
      uVar14 = uVar14 + 1;
      *(undefined8 *)pFVar17 = uVar5;
      pFVar17 = pFVar17 + -8;
      uVar12 = local_850;
    } while ((longlong)uVar14 < (longlong)((int)uVar15 / 2));
  }
  if (pTVar2 != (TArray<FName,TSizedDefaultAllocator<32>_> *)&local_858) {
    pFVar17 = (pTVar2->AllocatorInstance).Data;
    if (pFVar17 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar17);
      uVar12 = local_850;
    }
    (pTVar2->AllocatorInstance).Data = local_858.Data;
    *piVar1 = uStack_84c;
    local_850 = 0;
    uStack_84c = 0;
    local_858.Data = (FScriptContainerElement *)0x0;
    (this->Path).ArrayNum = uVar12;
  }
  pFVar9 = FField::StaticClass();
  pUVar10 = (UStruct *)FWeakObjectPtr::Get(&(this->ResolvedOwner).WeakPtr);
  if (((pUVar10 != (UStruct *)0x0) ||
      (pUVar10 = TryToResolveOwnerFromStruct(this,(UStruct *)0x0,UseStructIfOuterNotFound),
      pUVar10 != (UStruct *)0x0)) && (iVar4 = (this->Path).ArrayNum, 0 < iVar4)) {
    uVar15 = iVar4 - 1;
    uVar12 = 0;
    if ((int)uVar15 < iVar4) {
      uVar12 = ~uVar15 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    for (pFVar11 = FindFProperty<FField>
                             (pUVar10,*(FName *)((pTVar2->AllocatorInstance).Data +
                                                (longlong)(int)uVar15 * 8),Default);
        pFVar11 != (FField *)0x0;
        pFVar11 = (FField *)
                  (*pcVar7)(pFVar11,(pTVar2->AllocatorInstance).Data + (longlong)(int)uVar15 * 8)) {
      uVar15 = uVar15 - 1;
      if ((int)uVar15 < 0) {
        if ((pFVar9 == (FFieldClass *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("FieldType",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                               ,0x2dd,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar6 = pFVar11->ClassPrivate;
        if (pFVar9->Id == CASTCLASS_None) goto joined_r0x000141fcd3a9;
        bVar8 = (pFVar6->CastFlags & pFVar9->Id) != CASTCLASS_None;
        goto LAB_141fcd3c1;
      }
      pcVar7 = *(code **)(pFVar11->_padding_ + 0x50);
      uVar12 = 0;
      if ((int)uVar15 < (this->Path).ArrayNum) {
        uVar12 = ~uVar15 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
  }
  goto LAB_141fcd313;
joined_r0x000141fcd3a9:
  if (pFVar6 == (FFieldClass *)0x0) goto LAB_141fcd3be;
  if (pFVar6 == pFVar9) {
    bVar8 = true;
    goto LAB_141fcd3c1;
  }
  pFVar6 = pFVar6->SuperClass;
  goto joined_r0x000141fcd3a9;
LAB_141fcd3be:
  bVar8 = false;
LAB_141fcd3c1:
  if (bVar8) {
    this->ResolvedField = pFVar11;
    goto LAB_141fcd322;
  }
LAB_141fcd313:
  if (this->ResolvedField != (FField *)0x0) {
    (this->ResolvedOwner).WeakPtr = (FWeakObjectPtr)0x0;
    this->ResolvedField = (FField *)0x0;
  }
LAB_141fcd322:
  if ((FName *)local_858.Data != (FName *)0x0) {
    FMemory::Free(local_858.Data);
  }
  return;
}

// ResolveField @ 141fe2fa0

void __thiscall
FFieldPath::ResolveField
          (FFieldPath *this,FFieldClass *param_1,UStruct *param_2,EPathResolveType param_3)

{
  int iVar1;
  FFieldClass *pFVar2;
  code *pcVar3;
  bool bVar4;
  UStruct *pUVar5;
  FField *pFVar6;
  uint uVar7;
  uint uVar8;
  
  pUVar5 = (UStruct *)FWeakObjectPtr::Get(&(this->ResolvedOwner).WeakPtr);
  if (((pUVar5 != (UStruct *)0x0) ||
      (pUVar5 = TryToResolveOwnerFromStruct(this,param_2,param_3), pUVar5 != (UStruct *)0x0)) &&
     (iVar1 = (this->Path).ArrayNum, 0 < iVar1)) {
    uVar8 = iVar1 - 1;
    uVar7 = 0;
    if ((int)uVar8 < iVar1) {
      uVar7 = ~uVar8 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    for (pFVar6 = FindFProperty<FField>
                            (pUVar5,*(FName *)((this->Path).AllocatorInstance.Data +
                                              (longlong)(int)uVar8 * 8),Default);
        pFVar6 != (FField *)0x0;
        pFVar6 = (FField *)
                 (*pcVar3)(pFVar6,(this->Path).AllocatorInstance.Data + (longlong)(int)uVar8 * 8)) {
      uVar8 = uVar8 - 1;
      if ((int)uVar8 < 0) {
        if ((param_1 == (FFieldClass *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("FieldType",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                               ,0x2dd,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = pFVar6->ClassPrivate;
        if (param_1->Id == CASTCLASS_None) goto joined_r0x000141fe3148;
        bVar4 = (pFVar2->CastFlags & param_1->Id) != CASTCLASS_None;
        goto LAB_141fe3160;
      }
      pcVar3 = *(code **)(pFVar6->_padding_ + 0x50);
      uVar7 = 0;
      if ((int)uVar8 < (this->Path).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  goto LAB_141fe30d6;
joined_r0x000141fe3148:
  if (pFVar2 == (FFieldClass *)0x0) goto LAB_141fe315e;
  if (pFVar2 == param_1) {
    bVar4 = true;
    goto LAB_141fe3160;
  }
  pFVar2 = pFVar2->SuperClass;
  goto joined_r0x000141fe3148;
LAB_141fe315e:
  bVar4 = false;
LAB_141fe3160:
  if (bVar4) {
    this->ResolvedField = pFVar6;
    return;
  }
LAB_141fe30d6:
  if (this->ResolvedField != (FField *)0x0) {
    (this->ResolvedOwner).WeakPtr = (FWeakObjectPtr)0x0;
    this->ResolvedField = (FField *)0x0;
  }
  return;
}

// ToString @ 141fe9d50

FString * __thiscall FFieldPath::ToString(FFieldPath *this,FString *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  UObject *this_00;
  FFieldClass *pFVar4;
  FString *pFVar5;
  int iVar6;
  FString local_28;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  this_00 = FWeakObjectPtr::Get(&(this->ResolvedOwner).WeakPtr);
  if (this_00 == (UObject *)0x0) {
    pFVar5 = PathToString(&local_28,&this->Path);
  }
  else {
    pFVar4 = FField::StaticClass();
    if (this->ResolvedField == (FField *)0x0) {
LAB_141fe9da7:
      if ((this->Path).ArrayNum != 0) {
        ResolveField(this,pFVar4,(UStruct *)0x0,UseStructIfOuterNotFound);
      }
    }
    else {
      bVar3 = FWeakObjectPtr::IsValid(&(this->ResolvedOwner).WeakPtr);
      if (!bVar3) goto LAB_141fe9da7;
    }
    if (this->ResolvedField == (FField *)0x0) {
      pFVar5 = UObjectBaseUtility::GetPathName
                         ((UObjectBaseUtility *)this_00,&local_28,(UObject *)0x0);
      if (__return_storage_ptr__ != pFVar5) {
        pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (__return_storage_ptr__->Data).AllocatorInstance.Data =
             (pFVar5->Data).AllocatorInstance.Data;
        (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (__return_storage_ptr__->Data).ArrayNum = (pFVar5->Data).ArrayNum;
        (__return_storage_ptr__->Data).ArrayMax = (pFVar5->Data).ArrayMax;
        (pFVar5->Data).ArrayNum = 0;
        (pFVar5->Data).ArrayMax = 0;
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      ::FString::AppendChar(__return_storage_ptr__,L':');
      pFVar5 = PathToString(&local_28,&this->Path);
      iVar1 = (pFVar5->Data).ArrayNum;
      iVar6 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar6 = 0;
      }
      ::FString::AppendChars
                (__return_storage_ptr__,(wchar_t *)(pFVar5->Data).AllocatorInstance.Data,iVar6);
      goto LAB_141fe9e93;
    }
    pFVar5 = FField::GetPathName(this->ResolvedField,&local_28,(UObject *)0x0);
  }
  if (__return_storage_ptr__ != pFVar5) {
    pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar5->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
  }
LAB_141fe9e93:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// TryToResolveOwnerFromLinker @ 141fea7e0

UStruct * __thiscall FFieldPath::TryToResolveOwnerFromLinker(FFieldPath *this,FLinkerLoad *param_1)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FTlsAutoCleanup FVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  UStruct *pUVar10;
  uint *puVar11;
  FTlsAutoCleanup *pFVar12;
  UClass *pUVar13;
  FString *pFVar14;
  int iVar15;
  wchar_t *pwVar16;
  uint uVar17;
  uint uVar18;
  wchar_t *pwVar19;
  UStruct *pUVar20;
  UStruct *pUVar21;
  uint uVar22;
  undefined1 local_res10 [8];
  FTlsAutoCleanup local_res18;
  UStruct *local_res20;
  undefined8 local_a8 [2];
  ForAnyElementType local_98;
  uint local_90;
  uint uStack_8c;
  code *local_88;
  undefined1 *local_80;
  FString local_78;
  FString local_68;
  FString local_58;
  
  pUVar10 = (UStruct *)0x0;
  pwVar19 = L"";
  pUVar20 = (UStruct *)0x0;
  if ((param_1 == (FLinkerLoad *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InLinker",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\FieldPath.cpp"
                         ,0xc2,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pUVar10 = (UStruct *)(*pcVar6)();
    return pUVar10;
  }
  puVar11 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_80 = local_res10;
  local_88 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar12 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_88,puVar11);
  FVar3 = pFVar12[0x2f];
  pUVar21 = pUVar10;
  if ((FVar3 != (FTlsAutoCleanup)0x0) &&
     (lVar4 = *(longlong *)((longlong)FVar3 + 0x30), pUVar21 = pUVar20, lVar4 != 0)) {
    local_res18 = FVar3;
    pUVar13 = Z_Construct_UClass_UStruct_NoRegister();
    lVar4 = *(longlong *)(lVar4 + 0x10);
    iVar9 = (int)pUVar13->_padding_;
    if ((iVar9 <= *(int *)(lVar4 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar9 * 8) ==
        &pUVar13->_padding_)) {
      lVar4 = *(longlong *)((longlong)FVar3 + 0x30);
      local_98.Data = (FScriptContainerElement *)0x0;
      local_90 = 0;
      uStack_8c = 0;
      pUVar20 = pUVar10;
      for (; uVar8 = (uint)pUVar20, lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x20)) {
        local_a8[0] = *(undefined8 *)(lVar4 + 0x18);
        if (((local_98.Data <= (FScriptContainerElement *)local_a8) &&
            ((FScriptContainerElement *)local_a8 < local_98.Data + (longlong)(int)uStack_8c * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), uVar8 = local_90, bVar7)) {
          pcVar6 = (code *)swi(3);
          pUVar10 = (UStruct *)(*pcVar6)();
          return pUVar10;
        }
        if (uVar8 == uStack_8c) {
          uVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&local_98,(int *)&uStack_8c);
        }
        local_90 = uVar8 + 1;
        *(undefined8 *)(local_98.Data + (longlong)(int)uVar8 * 8) = local_a8[0];
        pUVar20 = (UStruct *)(ulonglong)local_90;
      }
      if ((int)uVar8 < (this->Path).ArrayNum) {
        uVar22 = (this->Path).ArrayNum;
        pTVar1 = &this->Path;
        if ((int)uVar8 < (int)uVar22) {
          uVar22 = uVar8;
        }
        if (0 < (int)uVar22) {
          do {
            iVar9 = (this->Path).ArrayNum;
            iVar15 = (int)pUVar10;
            uVar17 = (iVar9 - iVar15) - 1;
            uVar8 = 0;
            if ((int)uVar17 < iVar9) {
              uVar8 = ~uVar17 >> 0x1f;
            }
            if (uVar8 == 0) {
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar7) {
                pcVar6 = (code *)swi(3);
                pUVar10 = (UStruct *)(*pcVar6)();
                return pUVar10;
              }
              pUVar20 = (UStruct *)(ulonglong)local_90;
            }
            pFVar5 = (pTVar1->AllocatorInstance).Data;
            uVar18 = ((int)pUVar20 - iVar15) - 1;
            uVar8 = 0;
            if ((int)uVar18 < (int)pUVar20) {
              uVar8 = ~uVar18 >> 0x1f;
            }
            if (uVar8 == 0) {
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar7) {
                pcVar6 = (code *)swi(3);
                pUVar10 = (UStruct *)(*pcVar6)();
                return pUVar10;
              }
              pUVar20 = (UStruct *)(ulonglong)local_90;
            }
            uVar8 = (uint)pUVar20;
            if (*(longlong *)(local_98.Data + (longlong)(int)uVar18 * 8) !=
                *(longlong *)(pFVar5 + (longlong)(int)uVar17 * 8)) {
              pUVar10 = (UStruct *)0x0;
              goto LAB_141feaba1;
            }
            pUVar10 = (UStruct *)(ulonglong)(iVar15 + 1U);
          } while ((int)(iVar15 + 1U) < (int)uVar22);
        }
        uVar8 = (this->Path).ArrayNum - uVar8;
        pUVar10 = *(UStruct **)((longlong)local_res18 + 0x30);
        if (pUVar10 == (UStruct *)0x0) {
          pFVar14 = GetTypeName<UStruct>(&local_78);
          if ((pFVar14->Data).ArrayNum != 0) {
            pwVar19 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(L"nullptr",pwVar19);
        }
        pUVar13 = Z_Construct_UClass_UStruct_NoRegister();
        iVar9 = (int)pUVar13->_padding_;
        if ((*(int *)(pUVar10->_padding_ + 0x38) < iVar9) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar9 * 8) !=
            &pUVar13->_padding_)) {
          pFVar14 = GetTypeName<UStruct>(&local_68);
          if ((pFVar14->Data).ArrayNum == 0) {
            pwVar16 = L"";
          }
          else {
            pwVar16 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
          }
          pFVar14 = GetFullNameForCastLogError<UObject>(&local_58,(UObject *)pUVar10);
          if ((pFVar14->Data).ArrayNum != 0) {
            pwVar19 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(pwVar19,pwVar16);
        }
        local_res20 = pUVar10;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar10);
        }
        FWeakObjectPtr::operator=(&(this->ResolvedOwner).WeakPtr,(FObjectPtr)&local_res20);
        uVar17 = (this->Path).ArrayNum - uVar8;
        uVar22 = 0;
        if ((this->Path).ArrayNum <= (this->Path).ArrayNum) {
          uVar22 = (~uVar17 & ~uVar8) >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          pUVar10 = (UStruct *)(*pcVar6)();
          return pUVar10;
        }
        if (uVar17 != 0) {
          pFVar5 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar8 * 8;
          iVar9 = ((this->Path).ArrayNum - uVar17) - uVar8;
          if (iVar9 != 0) {
            memmove(pFVar5,pFVar5 + (longlong)(int)uVar17 * 8,(longlong)iVar9 << 3);
          }
          piVar2 = &(this->Path).ArrayNum;
          *piVar2 = *piVar2 - uVar17;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,&pTVar1->AllocatorInstance,(this->Path).ArrayNum,&(this->Path).ArrayMax);
        }
      }
LAB_141feaba1:
      pUVar21 = pUVar10;
      if (local_98.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data);
      }
    }
  }
  return pUVar21;
}

// TryToResolveOwnerFromStruct @ 141feac40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UStruct * __thiscall
FFieldPath::TryToResolveOwnerFromStruct(FFieldPath *this,UStruct *param_1,EPathResolveType param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UStruct *pUVar6;
  UClass *pUVar7;
  UStruct *pUVar8;
  UStruct *pUVar9;
  uint uVar10;
  uint uVar11;
  UStruct *pUVar12;
  uint uVar13;
  longlong lVar14;
  UStruct *local_res20;
  
  pUVar12 = (UStruct *)0x0;
  uVar13 = (this->Path).ArrayNum - 1;
  uVar11 = 0xffffffff;
  pUVar6 = pUVar12;
  if (0 < (int)uVar13) {
    lVar14 = (longlong)(int)uVar13 * 8;
    uVar11 = 0xffffffff;
    do {
      uVar10 = uVar13;
      if (((this->Path).ArrayNum <= (int)uVar10) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pUVar6 = (UStruct *)(*pcVar3)();
        return pUVar6;
      }
      FVar2 = *(FName *)((this->Path).AllocatorInstance.Data + lVar14);
      pUVar7 = Z_Construct_UClass_UObject_NoRegister();
      pUVar8 = (UStruct *)
               StaticFindObjectFastSafe(pUVar7,(UObject *)pUVar6,FVar2,None,RF_NoFlags,Borrowed);
      if ((param_1 == (UStruct *)0x0) || (uVar10 != (this->Path).ArrayNum - 1U)) {
LAB_141fead37:
        if (pUVar8 == (UStruct *)0x0) break;
      }
      else {
        pUVar9 = (UStruct *)UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_1);
        if (param_2 != UseStructIfOuterNotFound) {
          if ((param_2 == UseStructAlways) && (pUVar9 != pUVar8)) goto LAB_141fead34;
          goto LAB_141fead37;
        }
        if (pUVar8 == (UStruct *)0x0) {
LAB_141fead34:
          pUVar8 = pUVar9;
          goto LAB_141fead37;
        }
      }
      lVar14 = lVar14 + -8;
      pUVar6 = pUVar8;
      uVar13 = uVar10 - 1;
      uVar11 = uVar10;
    } while (0 < (int)(uVar10 - 1));
    if (pUVar6 != (UStruct *)0x0) {
      pUVar7 = Z_Construct_UClass_UStruct_NoRegister();
      iVar5 = (int)pUVar7->_padding_;
      if ((iVar5 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
          &pUVar7->_padding_)) goto LAB_141feae17;
    }
  }
  pUVar8 = pUVar12;
  if (pUVar6 == (UStruct *)0x0) {
    return (UStruct *)0x0;
  }
LAB_141feadb0:
  if (pUVar6 != (UStruct *)0x0) {
    pUVar7 = UObjectRedirector::GetPrivateStaticClass();
    iVar5 = (int)pUVar7->_padding_;
    if ((iVar5 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar5 * 8)
        == &pUVar7->_padding_)) {
      pUVar6 = (UStruct *)pUVar6->_padding_;
      if (pUVar6 != (UStruct *)0x0) goto code_r0x000141feade1;
      goto LAB_141feae09;
    }
  }
  pUVar6 = pUVar8;
  if (pUVar8 == (UStruct *)0x0) {
    return (UStruct *)0x0;
  }
LAB_141feae17:
  local_res20 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  FWeakObjectPtr::operator=(&(this->ResolvedOwner).WeakPtr,(FObjectPtr)&local_res20);
  uVar10 = (this->Path).ArrayNum - uVar11;
  uVar13 = 0;
  if ((this->Path).ArrayNum <= (this->Path).ArrayNum) {
    uVar13 = (~uVar10 & ~uVar11) >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pUVar6 = (UStruct *)(*pcVar3)();
    return pUVar6;
  }
  if (uVar10 != 0) {
    _Dst = (this->Path).AllocatorInstance.Data + (longlong)(int)uVar11 * 8;
    iVar5 = ((this->Path).ArrayNum - uVar10) - uVar11;
    if (iVar5 != 0) {
      memmove(_Dst,_Dst + (longlong)(int)uVar10 * 8,(longlong)iVar5 << 3);
    }
    piVar1 = &(this->Path).ArrayNum;
    *piVar1 = *piVar1 - uVar10;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,&(this->Path).AllocatorInstance,(this->Path).ArrayNum,&(this->Path).ArrayMax);
  }
  return pUVar6;
code_r0x000141feade1:
  pUVar7 = Z_Construct_UClass_UStruct_NoRegister();
  iVar5 = (int)pUVar7->_padding_;
  if ((*(int *)(pUVar6->_padding_ + 0x38) < iVar5) ||
     (pUVar8 = pUVar6,
     (longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar5 * 8) !=
     &pUVar7->_padding_)) {
LAB_141feae09:
    pUVar8 = pUVar12;
  }
  goto LAB_141feadb0;
}

// TryToResolvePath @ 141feaf10

FField * __thiscall
FFieldPath::TryToResolvePath(FFieldPath *this,UStruct *param_1,EPathResolveType param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UStruct *pUVar4;
  FField *pFVar5;
  uint uVar6;
  uint uVar7;
  
  pUVar4 = (UStruct *)FWeakObjectPtr::Get(&(this->ResolvedOwner).WeakPtr);
  if (((pUVar4 == (UStruct *)0x0) &&
      (pUVar4 = TryToResolveOwnerFromStruct(this,param_1,param_2), pUVar4 == (UStruct *)0x0)) ||
     (iVar1 = (this->Path).ArrayNum, iVar1 < 1)) {
    pFVar5 = (FField *)0x0;
  }
  else {
    uVar7 = iVar1 - 1;
    uVar6 = 0;
    if ((int)uVar7 < iVar1) {
      uVar6 = ~uVar7 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FField *)(*pcVar2)();
      return pFVar5;
    }
    pFVar5 = FindFProperty<FField>
                       (pUVar4,*(FName *)((this->Path).AllocatorInstance.Data +
                                         (longlong)(int)uVar7 * 8),Default);
    while ((pFVar5 != (FField *)0x0 && (uVar7 = uVar7 - 1, -1 < (int)uVar7))) {
      pcVar2 = *(code **)(pFVar5->_padding_ + 0x50);
      uVar6 = 0;
      if ((int)uVar7 < (this->Path).ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FField *)(*pcVar2)();
        return pFVar5;
      }
      pFVar5 = (FField *)
               (*pcVar2)(pFVar5,(this->Path).AllocatorInstance.Data + (longlong)(int)uVar7 * 8);
    }
  }
  return pFVar5;
}

// operator= @ 1422b98a0

FFieldPath * __thiscall FFieldPath::operator=(FFieldPath *this,FFieldPath *param_1)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  
  pTVar1 = &this->Path;
  this->ResolvedField = param_1->ResolvedField;
  (this->ResolvedOwner).WeakPtr = (param_1->ResolvedOwner).WeakPtr;
  if (pTVar1 != &param_1->Path) {
    iVar3 = (this->Path).ArrayMax;
    piVar2 = &(this->Path).ArrayMax;
    _Src = (param_1->Path).AllocatorInstance.Data;
    iVar4 = (param_1->Path).ArrayNum;
    (this->Path).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar4,iVar3,&pTVar1->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar4 << 3);
      }
    }
  }
  return this;
}

