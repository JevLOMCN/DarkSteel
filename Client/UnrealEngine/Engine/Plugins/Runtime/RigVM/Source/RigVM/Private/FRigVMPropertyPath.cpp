// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 4

// FRigVMPropertyPath @ 14a0be790

FRigVMPropertyPath * __thiscall
FRigVMPropertyPath::FRigVMPropertyPath(FRigVMPropertyPath *this,FProperty *param_1,FString *param_2)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  UStruct *this_00;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FRigVMPropertyPath *pFVar6;
  FString *pFVar7;
  FName *pFVar8;
  FProperty *pFVar9;
  ForAnyElementType FVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined1 local_res8 [8];
  FName local_res10;
  FName local_res18;
  FString local_138;
  FString local_128;
  undefined4 local_118;
  FNameEntryId FStack_114;
  uint uStack_110;
  int iStack_10c;
  FProperty *local_108;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  (this->Path).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Path).Data.ArrayNum = 0;
  (this->Path).Data.ArrayMax = 0;
  (this->Segments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Segments).ArrayNum = 0;
  (this->Segments).ArrayMax = 0;
  if ((param_1 == (FProperty *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InProperty",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMPropertyPath.cpp"
                         ,0x13,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FRigVMPropertyPath *)(*pcVar3)();
    return pFVar6;
  }
  if (((param_2->Data).ArrayNum < 2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InSegmentPath.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMPropertyPath.cpp"
                         ,0x14,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FRigVMPropertyPath *)(*pcVar3)();
    return pFVar6;
  }
  local_138.Data.ArrayNum = (param_2->Data).ArrayNum;
  lVar11 = (longlong)local_138.Data.ArrayNum;
  pFVar2 = (param_2->Data).AllocatorInstance.Data;
  local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_138.Data.ArrayNum == 0) {
    local_138.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_138.Data.ArrayNum,0,(ForAnyElementType *)&local_138,local_138.Data.ArrayNum
               ,&local_138.Data.ArrayMax);
    memcpy(local_138.Data.AllocatorInstance.Data,pFVar2,lVar11 * 2);
  }
  pFVar7 = ::FString::Replace(&local_138,&local_90,L"[",L".",IgnoreCase);
  if (&local_138 != pFVar7) {
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
    local_138.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
    (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_138.Data.ArrayNum = (pFVar7->Data).ArrayNum;
    local_138.Data.ArrayMax = (pFVar7->Data).ArrayMax;
    (pFVar7->Data).ArrayNum = 0;
    (pFVar7->Data).ArrayMax = 0;
  }
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  pFVar7 = ::FString::Replace(&local_138,&local_80,L"]",L".",IgnoreCase);
  if (&local_138 != pFVar7) {
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
    local_138.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
    (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_138.Data.ArrayNum = (pFVar7->Data).ArrayNum;
    local_138.Data.ArrayMax = (pFVar7->Data).ArrayMax;
    (pFVar7->Data).ArrayNum = 0;
    (pFVar7->Data).ArrayMax = 0;
  }
  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  pFVar7 = ::FString::Replace(&local_138,&local_70,L"..",L".",IgnoreCase);
  if (&local_138 != pFVar7) {
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
    local_138.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
    (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_138.Data.ArrayNum = (pFVar7->Data).ArrayNum;
    local_138.Data.ArrayMax = (pFVar7->Data).ArrayMax;
    (pFVar7->Data).ArrayNum = 0;
    (pFVar7->Data).ArrayMax = 0;
  }
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  ::FString::TrimCharInline(&local_138,L'.',(bool *)0x0);
  while (1 < local_138.Data.ArrayNum) {
    local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_128.Data.ArrayNum = 0;
    local_128.Data.ArrayMax = 0;
    local_100.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_100.Data.ArrayNum = 0;
    local_100.Data.ArrayMax = 0;
    ::FString::FString(&local_c0,L".");
    bVar4 = ::FString::Split(&local_138,&local_c0,&local_128,&local_100);
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
    if (!bVar4) {
      iVar5 = local_138.Data.ArrayNum + -1;
      if (local_138.Data.ArrayNum == 0) {
        iVar5 = 0;
      }
      ::FString::AssignRange(&local_128,(wchar_t *)local_138.Data.AllocatorInstance.Data,iVar5);
      ::FString::Empty(&local_100);
    }
    FStack_114.Value = 0;
    uStack_110 = 0;
    if (param_1 == (FProperty *)0x0) {
LAB_14a0bed39:
      (this->Segments).ArrayNum = 0;
      if ((this->Segments).ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,&(this->Segments).AllocatorInstance,0,&(this->Segments).ArrayMax);
      }
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      goto LAB_14a0bed84;
    }
    uVar1 = *(uint *)(param_1->_padding_ + 0x18);
    if ((uVar1 >> 0x14 & 1) == 0) {
      if ((uVar1 >> 0x15 & 1) == 0) {
        if ((*(ulonglong *)(param_1->_padding_ + 0x18) & 0x400000000000) == 0) goto LAB_14a0bed39;
        local_118 = 2;
        FVar10.Data = (FScriptContainerElement *)L"";
        if (local_128.Data.ArrayNum != 0) {
          FVar10.Data = local_128.Data.AllocatorInstance.Data;
        }
        pFVar9 = (FProperty *)param_1[1]._padding_;
        ::FName::FName(&local_res10,(wchar_t *)FVar10.Data);
        FStack_114 = local_res10.ComparisonIndex.Value;
        uStack_110 = local_res10.Number;
        iStack_10c = -1;
        local_108 = param_1;
      }
      else {
        local_118 = 1;
        pFVar9 = (FProperty *)param_1[1]._padding_;
        bVar4 = IsThisNotNull(pFVar9,"FField::GetFName");
        lVar11 = 0;
        if (bVar4) {
          lVar11 = pFVar9->_padding_;
        }
        FStack_114.Value = (uint)lVar11;
        uStack_110 = (uint)((ulonglong)lVar11 >> 0x20);
        FVar10.Data = (FScriptContainerElement *)L"";
        if (local_128.Data.ArrayNum != 0) {
          FVar10.Data = local_128.Data.AllocatorInstance.Data;
        }
        iStack_10c = _wtoi((wchar_t *)FVar10.Data);
        local_108 = param_1;
      }
    }
    else {
      local_118 = 0;
      FVar10.Data = (FScriptContainerElement *)L"";
      if (local_128.Data.ArrayNum != 0) {
        FVar10.Data = local_128.Data.AllocatorInstance.Data;
      }
      this_00 = (UStruct *)param_1[1]._padding_;
      pFVar8 = ::FName::FName(&local_res18,(wchar_t *)FVar10.Data);
      pFVar9 = UStruct::FindPropertyByName(this_00,*pFVar8);
      if (pFVar9 == (FProperty *)0x0) goto LAB_14a0bed39;
      bVar4 = IsThisNotNull(pFVar9,"FField::GetFName");
      lVar11 = 0;
      if (bVar4) {
        lVar11 = pFVar9->_padding_;
      }
      FStack_114.Value = (uint)lVar11;
      uStack_110 = (uint)((ulonglong)lVar11 >> 0x20);
      iStack_10c = pFVar9->Offset_Internal;
      local_108 = pFVar9;
    }
    pFVar2 = (this->Segments).AllocatorInstance.Data;
    if (((pFVar2 <= (FScriptContainerElement *)&local_118) &&
        ((FScriptContainerElement *)&local_118 < pFVar2 + (longlong)(this->Segments).ArrayMax * 0x18
        )) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FRigVMPropertyPath *)(*pcVar3)();
      return pFVar6;
    }
    iVar5 = (this->Segments).ArrayNum;
    if (iVar5 == (this->Segments).ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&(this->Segments).AllocatorInstance,&(this->Segments).ArrayMax);
    }
    (this->Segments).ArrayNum = iVar5 + 1;
    pFVar12 = (this->Segments).AllocatorInstance.Data;
    pFVar2 = pFVar12 + (longlong)iVar5 * 0x18;
    *(ulonglong *)pFVar2 = CONCAT44(FStack_114.Value,local_118);
    *(ulonglong *)(pFVar2 + 8) = CONCAT44(iStack_10c,uStack_110);
    *(FProperty **)(pFVar12 + (longlong)iVar5 * 0x18 + 0x10) = local_108;
    iVar5 = local_100.Data.ArrayNum + -1;
    if (local_100.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    ::FString::AssignRange(&local_138,(wchar_t *)local_100.Data.AllocatorInstance.Data,iVar5);
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
    param_1 = pFVar9;
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  ::FString::Empty(&this->Path);
  pFVar12 = (this->Segments).AllocatorInstance.Data;
  iVar5 = (this->Segments).ArrayNum;
  pFVar8 = (FName *)(pFVar12 + 4);
  pFVar2 = pFVar12 + (longlong)iVar5 * 0x18;
  do {
    if ((this->Segments).ArrayNum != iVar5) {
      `TCheckedPointerIterator<FRigVMPropertyPathSegment,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar12 == pFVar2) {
LAB_14a0bed84:
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
      return this;
    }
    iVar14 = *(int *)pFVar12;
    iVar13 = 0;
    if (iVar14 == 0) {
      if (1 < (this->Path).Data.ArrayNum) {
        ::FString::AppendChars(&this->Path,L".",1);
      }
      pFVar7 = ::FName::ToString(pFVar8,&local_50);
      iVar14 = (pFVar7->Data).ArrayNum;
      iVar15 = iVar14 + -1;
      if (iVar14 == 0) {
        iVar15 = iVar13;
      }
      ::FString::AppendChars(&this->Path,(wchar_t *)(pFVar7->Data).AllocatorInstance.Data,iVar15);
      FVar10.Data = local_50.Data.AllocatorInstance.Data;
LAB_14a0bee7b:
      if (FVar10.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar10.Data);
      }
    }
    else {
      if (iVar14 == 1) {
        local_f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_f0.Data.ArrayNum = 0;
        local_f0.Data.ArrayMax = 0;
        ::FString::AppendInt(&local_f0,pFVar8[1].ComparisonIndex.Value);
        ::FString::ConcatCF(&local_a0,L"[",&local_f0);
        ::FString::ConcatFC(&local_d0,&local_a0,L"]");
        iVar14 = local_d0.Data.ArrayNum + -1;
        if (local_d0.Data.ArrayNum == 0) {
          iVar14 = iVar13;
        }
        ::FString::AppendChars(&this->Path,(wchar_t *)local_d0.Data.AllocatorInstance.Data,iVar14);
        if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d0.Data.AllocatorInstance.Data);
        }
        FVar10.Data = local_f0.Data.AllocatorInstance.Data;
        if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data.AllocatorInstance.Data);
          FVar10.Data = local_f0.Data.AllocatorInstance.Data;
        }
        goto LAB_14a0bee7b;
      }
      if (iVar14 == 2) {
        pFVar7 = ::FName::ToString(pFVar8,&local_60);
        ::FString::ConcatCF(&local_b0,L"[",pFVar7);
        ::FString::ConcatFC(&local_e0,&local_b0,L"]");
        iVar14 = local_e0.Data.ArrayNum + -1;
        if (local_e0.Data.ArrayNum == 0) {
          iVar14 = iVar13;
        }
        ::FString::AppendChars(&this->Path,(wchar_t *)local_e0.Data.AllocatorInstance.Data,iVar14);
        if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e0.Data.AllocatorInstance.Data);
        }
        FVar10.Data = local_60.Data.AllocatorInstance.Data;
        if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
          FVar10.Data = local_60.Data.AllocatorInstance.Data;
        }
        goto LAB_14a0bee7b;
      }
    }
    pFVar12 = pFVar12 + 0x18;
    pFVar8 = pFVar8 + 3;
  } while( true );
}

// FRigVMPropertyPath @ 14a0beea0

FRigVMPropertyPath * __thiscall FRigVMPropertyPath::FRigVMPropertyPath(FRigVMPropertyPath *this)

{
  (this->Path).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Path).Data.ArrayNum = 0;
  (this->Path).Data.ArrayMax = 0;
  (this->Segments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Segments).ArrayNum = 0;
  (this->Segments).ArrayMax = 0;
  return this;
}

// GetData_Internal @ 14a0e3340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uchar * __thiscall
FRigVMPropertyPath::GetData_Internal(FRigVMPropertyPath *this,uchar *param_1,FProperty *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>
  *pTVar4;
  code *pcVar5;
  TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>
  *pTVar6;
  bool bVar7;
  uint uVar8;
  uchar *puVar9;
  ulonglong uVar10;
  int iVar11;
  TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>
  *pTVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  void *pvVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined1 local_a8 [4];
  uint local_a4;
  FScriptContainerElement *local_a0;
  FProperty *local_98;
  TFunctionRefBase<UE::Core::Private::Function::FFunctionRefStoragePolicy,bool___cdecl(void_const_*,void_const_*)>
  local_90;
  FProperty **local_80;
  FScriptContainerElement *local_78;
  FProperty *local_70;
  FProperty *local_68;
  longlong local_60;
  TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>
  *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pFVar16 = (this->Segments).AllocatorInstance.Data;
  local_a4 = (this->Segments).ArrayNum;
  uVar10 = (ulonglong)(int)local_a4;
  pFVar17 = pFVar16 + 4;
  local_a0 = pFVar16 + uVar10 * 0x18;
  pFVar13 = local_a0;
LAB_14a0e339b:
  do {
    while( true ) {
      if ((this->Segments).ArrayNum != (int)uVar10) {
        local_a8[0] = 0;
        `TCheckedPointerIterator<FRigVMPropertyPathSegment_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_a8);
      }
      if (pFVar16 == pFVar13) {
        return (uchar *)(TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>
                         *)param_1;
      }
      iVar11 = *(int *)pFVar16;
      if (iVar11 != 0) break;
      param_1 = (uchar *)((longlong)
                          &(((TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>
                              *)param_1)->Pairs).Elements.Data._padding_ +
                         (longlong)*(int *)(*(longlong *)(pFVar17 + 0xc) + 0x44));
LAB_14a0e3706:
      uVar10 = (ulonglong)local_a4;
      pFVar16 = pFVar16 + 0x18;
      pFVar17 = pFVar17 + 0x18;
    }
    if (iVar11 == 1) {
      lVar14 = *(longlong *)(pFVar17 + 0xc);
      if ((lVar14 == 0) || ((*(uint *)(*(longlong *)(lVar14 + 8) + 0x18) >> 0x15 & 1) == 0)) {
        local_b8 = lVar14;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("CastResult",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                           ,0x480,L"CastFieldChecked failed with 0x%016llx");
        lVar14 = 0;
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          puVar9 = (uchar *)(*pcVar5)();
          return puVar9;
        }
      }
      bVar1 = *(byte *)(lVar14 + 0x70);
      (**(code **)(**(longlong **)(lVar14 + 0x78) + 0x168))();
      lVar14 = *(longlong *)(lVar14 + 0x78);
      iVar11 = *(int *)(lVar14 + 0x34);
      if ((iVar11 < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ElementSize > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x1177,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        puVar9 = (uchar *)(*pcVar5)();
        return puVar9;
      }
      if ((lVar14 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InnerProperty",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x1178,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        puVar9 = (uchar *)(*pcVar5)();
        return puVar9;
      }
      iVar2 = *(int *)(pFVar17 + 8);
      if ((iVar2 < 0) ||
         (iVar3 = (((TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>
                     *)param_1)->Pairs).Elements.Data.ArrayNum, iVar3 <= iVar2)) {
        return (uchar *)0x0;
      }
      pFVar13 = local_a0;
      if (iVar3 == 0) {
        uVar10 = (ulonglong)local_a4;
        param_1 = (uchar *)0x0;
        pFVar16 = pFVar16 + 0x18;
        pFVar17 = pFVar17 + 0x18;
      }
      else {
        puVar9 = (uchar *)(((TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>
                             *)param_1)->Pairs).Elements.Data._padding_;
        if (((bVar1 & 1) != 0) && (((ulonglong)puVar9 & 1) != 0)) {
          puVar9 = (uchar *)((longlong)
                             &(((TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>
                                 *)param_1)->Pairs).Elements.Data._padding_ +
                            ((longlong)puVar9 >> 0x18));
        }
        pFVar16 = pFVar16 + 0x18;
        param_1 = puVar9 + (longlong)iVar2 * (longlong)iVar11;
        uVar10 = (ulonglong)local_a4;
        pFVar17 = pFVar17 + 0x18;
      }
      goto LAB_14a0e339b;
    }
    if (iVar11 != 2) goto LAB_14a0e3706;
    lVar14 = *(longlong *)(pFVar17 + 0xc);
    if ((lVar14 == 0) || ((*(ulonglong *)(*(longlong *)(lVar14 + 8) + 0x18) & 0x400000000000) == 0))
    {
      local_b8 = lVar14;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("CastResult",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x480,L"CastFieldChecked failed with 0x%016llx");
      lVar14 = 0;
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        puVar9 = (uchar *)(*pcVar5)();
        return puVar9;
      }
    }
    local_68 = *(FProperty **)(lVar14 + 0x70);
    local_60 = *(longlong *)(lVar14 + 0x78);
    local_38 = *(byte *)(lVar14 + 0x98);
    local_50 = *(undefined8 *)(lVar14 + 0x80);
    uStack_48 = *(undefined8 *)(lVar14 + 0x88);
    local_40 = *(undefined8 *)(lVar14 + 0x90);
    if (((local_68 == (FProperty *)0x0) || (local_60 == 0)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InKeyProp && InValueProp",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1558,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      puVar9 = (uchar *)(*pcVar5)();
      return puVar9;
    }
    local_58 = (TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>
                *)param_1;
    if (((local_68 == (FProperty *)0x0) || (local_60 == 0)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("KeyProp && ValueProp",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1564,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      puVar9 = (uchar *)(*pcVar5)();
      return puVar9;
    }
    pTVar6 = local_58;
    local_80 = &local_68;
    local_78 = pFVar17;
    local_70 = local_68;
    if ((local_38 & 1) == 0) {
      local_98 = local_68;
      if ((local_58->Pairs).Elements.Data.ArrayNum != *(int *)&(local_58->Pairs).field_0x34) {
        local_90.Storage.Ptr = &local_98;
        local_90.Callable =
             UE::Core::Private::Function::
             TFunctionRefCaller<``FScriptMapHelper::FindValueFromHash'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_2>,bool,void_const_*,void_const_*>
             ::Call;
        uVar8 = FProperty::GetValueTypeHash(local_68,pFVar17);
        iVar11 = *(int *)&pTVar6[1].Pairs.Elements.AllocationFlags.AllocatorInstance;
        pTVar4 = *(TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>
                   **)&pTVar6[1].Pairs.Elements.Data.ArrayNum;
        pTVar12 = pTVar6 + 1;
        if (pTVar4 != (TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>
                       *)0x0) {
          pTVar12 = pTVar4;
        }
        iVar11 = *(int *)((longlong)&(pTVar12->Pairs).Elements.Data._padding_ +
                         ((longlong)iVar11 - 1U & (longlong)(int)(iVar11 - 1U & uVar8)) * 4);
        while (iVar11 != -1) {
          local_40._4_4_ = (int)((ulonglong)local_40 >> 0x20);
          pvVar15 = (void *)((longlong)(local_40._4_4_ * iVar11) +
                            (pTVar6->Pairs).Elements.Data._padding_);
          bVar7 = UE::Core::Private::Function::
                  TFunctionRefBase<UE::Core::Private::Function::FFunctionRefStoragePolicy,bool___cdecl(void_const_*,void_const_*)>
                  ::operator()(&local_90,pFVar17,pvVar15);
          if (bVar7) goto LAB_14a0e3590;
          iVar11 = *(int *)((longlong)local_50._4_4_ + (longlong)pvVar15);
        }
        iVar11 = -1;
LAB_14a0e3590:
        if (iVar11 != -1) {
          pFVar16 = pFVar16 + 0x18;
          uVar10 = (ulonglong)local_a4;
          param_1 = (uchar *)((longlong)(local_40._4_4_ * iVar11) + (longlong)(int)local_50 +
                             (pTVar6->Pairs).Elements.Data._padding_);
          pFVar17 = pFVar17 + 0x18;
          pFVar13 = local_a0;
          goto LAB_14a0e339b;
        }
      }
      param_1 = (uchar *)0x0;
      uVar10 = (ulonglong)local_a4;
      pFVar16 = pFVar16 + 0x18;
      pFVar17 = pFVar17 + 0x18;
      pFVar13 = local_a0;
      goto LAB_14a0e339b;
    }
    param_1 = `FScriptMapHelper::FindValueFromHash'::__l2::<lambda_1>::
              operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>
                        (&local_80,local_58);
    pFVar16 = pFVar16 + 0x18;
    uVar10 = (ulonglong)local_a4;
    pFVar17 = pFVar17 + 0x18;
    pFVar13 = local_a0;
  } while( true );
}

// GetTailProperty @ 14a0eca60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FProperty * __thiscall FRigVMPropertyPath::GetTailProperty(FRigVMPropertyPath *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FProperty *pFVar6;
  longlong lVar7;
  uint uVar8;
  
  iVar1 = (this->Segments).ArrayNum;
  if (iVar1 == 0) {
    return (FProperty *)0x0;
  }
  uVar8 = iVar1 - 1;
  uVar5 = 0;
  if ((int)uVar8 < iVar1) {
    uVar5 = ~uVar8 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FProperty *)(*pcVar3)();
      return pFVar6;
    }
  }
  lVar7 = (longlong)(int)uVar8;
  pFVar2 = (this->Segments).AllocatorInstance.Data;
  iVar1 = *(int *)(pFVar2 + lVar7 * 0x18);
  if (iVar1 == 0) {
    return *(FProperty **)(pFVar2 + lVar7 * 0x18 + 0x10);
  }
  if (iVar1 == 1) {
    lVar7 = *(longlong *)(pFVar2 + lVar7 * 0x18 + 0x10);
    if ((lVar7 != 0) && ((*(uint *)(*(longlong *)(lVar7 + 8) + 0x18) >> 0x15 & 1) != 0)) {
      return *(FProperty **)(lVar7 + 0x78);
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x480,L"CastFieldChecked failed with 0x%016llx");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FProperty *)(*pcVar3)();
      return pFVar6;
    }
  }
  else {
    if (iVar1 != 2) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMPropertyPath.cpp"
                         ,0x99,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FProperty *)(*pcVar3)();
        return pFVar6;
      }
      return (FProperty *)0x0;
    }
    lVar7 = *(longlong *)(pFVar2 + lVar7 * 0x18 + 0x10);
    if ((lVar7 != 0) && ((*(ulonglong *)(*(longlong *)(lVar7 + 8) + 0x18) & 0x400000000000) != 0)) {
      return *(FProperty **)(lVar7 + 0x78);
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x480,L"CastFieldChecked failed with 0x%016llx");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FProperty *)(*pcVar3)();
      return pFVar6;
    }
  }
  return _DAT_00000078;
}

