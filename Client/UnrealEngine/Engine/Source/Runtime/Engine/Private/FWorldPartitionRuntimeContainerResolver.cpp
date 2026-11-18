// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 148aaa600

UScriptStruct * __cdecl FWorldPartitionRuntimeContainerResolver::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWorldPartitionRuntimeContainerResolver.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FWorldPartitionRuntimeContainerResolver.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainerResolver,
                         (UObject *)pUVar1,L"WorldPartitionRuntimeContainerResolver");
  }
  return Z_Registration_Info_UScriptStruct_FWorldPartitionRuntimeContainerResolver.OuterSingleton;
}

// GetAllocatedSize @ 148acafb0

ulong64 __thiscall
FWorldPartitionRuntimeContainerResolver::GetAllocatedSize
          (FWorldPartitionRuntimeContainerResolver *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  undefined1 *puVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  uint *puVar15;
  ulong64 uVar16;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  uVar6 = *(uint *)&(this->Containers).field_0x48;
  if (uVar6 < 2) {
    lVar9 = 0;
  }
  else {
    lVar9 = (longlong)(int)uVar6 << 2;
  }
  puVar1 = &(this->Containers).field_0x10;
  iVar3 = *(int *)&(this->Containers).field_0x28;
  iVar12 = 0;
  iVar14 = 0;
  uVar6 = 1;
  uVar16 = (longlong)*(int *)&(this->Containers).field_0xc * 0x60 +
           lVar9 + (ulonglong)((*(int *)&(this->Containers).field_0x2c + 0x1fU >> 5) << 2);
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->Containers).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar7 = iVar3;
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iVar12) goto LAB_148acb07d;
      uVar11 = puVar15[lVar9 + 1];
    }
    uVar6 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iVar7 = local_res10 + -1 + iVar14;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_148acb07d:
  uVar11 = *(uint *)&(this->Containers).field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar12);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Containers).field_0x8 -
                       *(int *)&(this->Containers).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar16 = (*pcVar4)();
    return uVar16;
  }
  uVar6 = *(uint *)&(this->Containers).field_0x28;
  if (uVar11 != uVar6) {
    puVar8 = *(undefined1 **)&(this->Containers).field_0x20;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar8 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar6;
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar12) goto LAB_148acb180;
      uVar11 = *(uint *)(puVar8 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar6 < (int)uVar11) {
      uVar11 = uVar6;
    }
  }
LAB_148acb180:
  while( true ) {
    if (*(int *)&(this->Containers).field_0x8 - *(int *)&(this->Containers).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FWorldPartitionRuntimeContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar9 = (longlong)TStack_60.CurrentBitIndex * 0x60 + *(longlong *)&this->Containers;
    if (*(uint *)(lVar9 + 0x50) < 2) {
      lVar13 = 0;
    }
    else {
      lVar13 = (longlong)(int)*(uint *)(lVar9 + 0x50) << 2;
    }
    uVar16 = uVar16 + lVar13 + (ulonglong)((*(int *)(lVar9 + 0x34) + 0x1fU >> 5) << 2) +
                      (longlong)*(int *)(lVar9 + 0x14) * 0x28;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return uVar16;
}

// ResolveContainerPath @ 148ad9f50

bool __thiscall
FWorldPartitionRuntimeContainerResolver::ResolveContainerPath
          (FWorldPartitionRuntimeContainerResolver *this,FString *param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TTuple<FName,FWorldPartitionRuntimeContainer> *pTVar5;
  FName *pFVar6;
  FWorldPartitionRuntimeContainerInstance *pFVar7;
  FString *pFVar8;
  ForAnyElementType FVar9;
  longlong lVar10;
  int iVar11;
  FName local_res8;
  FName local_res20;
  FString local_f8;
  FString local_e8;
  FGuid local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FName local_58 [2];
  FGuid local_48;
  FString local_38;
  
  if (this->MainContainerPackage == (FName)0x0) {
    return false;
  }
  local_f8.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar10 = (longlong)local_f8.Data.ArrayNum;
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.Data.ArrayNum = 0;
  local_e8.Data.ArrayMax = 0;
  local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_f8.Data.ArrayNum == 0) {
    local_f8.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_f8.Data.ArrayNum,0,(ForAnyElementType *)&local_f8,local_f8.Data.ArrayNum,
               &local_f8.Data.ArrayMax);
    memcpy(local_f8.Data.AllocatorInstance.Data,pFVar1,lVar10 * 2);
  }
  ::FString::FString(&local_98,L".");
  ::FString::Split(param_1,&local_98,&local_f8,&local_e8);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  pTVar5 = TSet<TTuple<FName,FWorldPartitionRuntimeContainer>,TDefaultMapHashableKeyFuncs<FName,FWorldPartitionRuntimeContainer,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FWorldPartitionRuntimeContainer>,TDefaultMapHashableKeyFuncs<FName,FWorldPartitionRuntimeContainer,0>,FDefaultSetAllocator>
                   *)this,this->MainContainerPackage);
  if ((pTVar5 == (TTuple<FName,FWorldPartitionRuntimeContainer> *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x27b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  local_d8.A = 0;
  local_d8.B = 0;
  local_d8.C = 0;
  local_d8.D = 0;
  do {
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_f8.Data.ArrayNum != 0) {
      FVar9.Data = local_f8.Data.AllocatorInstance.Data;
    }
    pFVar6 = ::FName::FName(&local_res20,(wchar_t *)FVar9.Data);
    pFVar7 = TMapBase<FName,FWorldPartitionRuntimeContainerInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FWorldPartitionRuntimeContainerInstance,0>_>
             ::Find((TMapBase<FName,FWorldPartitionRuntimeContainerInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FWorldPartitionRuntimeContainerInstance,0>_>
                     *)&pTVar5->field_0x8,*pFVar6);
    if (pFVar7 == (FWorldPartitionRuntimeContainerInstance *)0x0) goto LAB_148ada1be;
    pTVar5 = TSet<TTuple<FName,FWorldPartitionRuntimeContainer>,TDefaultMapHashableKeyFuncs<FName,FWorldPartitionRuntimeContainer,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,FWorldPartitionRuntimeContainer>,TDefaultMapHashableKeyFuncs<FName,FWorldPartitionRuntimeContainer,0>,FDefaultSetAllocator>
                     *)this,pFVar7->ContainerPackage);
    if ((pTVar5 == (TTuple<FName,FWorldPartitionRuntimeContainer> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x27b,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    FGuid::Combine(&local_48,&local_d8,&pFVar7->ActorGuid);
    local_d8.A = local_48.A;
    local_d8.B = local_48.B;
    local_d8.C = local_48.C;
    local_d8.D = local_48.D;
    iVar11 = local_e8.Data.ArrayNum + -1;
    if (local_e8.Data.ArrayNum == 0) {
      iVar11 = 0;
    }
    ::FString::AssignRange(&local_f8,(wchar_t *)local_e8.Data.AllocatorInstance.Data,iVar11);
    ::FString::FString(&local_88,L".");
    bVar3 = ::FString::Split(&local_e8,&local_88,&local_f8,&local_e8);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  } while (bVar3);
  if (local_f8.Data.ArrayNum == local_e8.Data.ArrayNum) {
    if (local_f8.Data.ArrayNum < 2) goto LAB_148ada1b4;
    iVar11 = FGenericPlatformStricmp::Stricmp
                       ((wchar_t *)local_f8.Data.AllocatorInstance.Data,
                        (wchar_t *)local_e8.Data.AllocatorInstance.Data);
    bVar3 = iVar11 == 0;
  }
  else {
    bVar3 = local_f8.Data.ArrayNum + local_e8.Data.ArrayNum == 1;
  }
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SubObjectContext == SubObjectString",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionRuntimeContainerResolving.cpp"
                         ,0x20,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
LAB_148ada1b4:
  ::FString::Empty(&local_e8);
LAB_148ada1be:
  if (((local_d8.D == 0 && local_d8.C == 0) && local_d8.B == 0) && local_d8.A == 0) {
    bVar3 = false;
  }
  else {
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_f8.Data.ArrayNum != 0) {
      FVar9.Data = local_f8.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res8,(wchar_t *)FVar9.Data);
    CityHash64((char *)&local_d8,0x10);
    ::FString::PrintfImpl(&local_68,L"%016llx");
    pFVar8 = ::FName::GetPlainNameString(&local_res8,&local_38);
    ::FString::ConcatFC(&local_78,pFVar8,L"_");
    ::FString::ConcatFF(&local_b8,&local_78,&local_68);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_b8.Data.ArrayNum != 0) {
      FVar9.Data = local_b8.Data.AllocatorInstance.Data;
    }
    pFVar6 = ::FName::FName(local_58,(wchar_t *)FVar9.Data,local_res8.Number);
    ::FName::ToString(pFVar6,&local_c8);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    if (param_2 != &local_c8) {
      pFVar1 = (param_2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (param_2->Data).AllocatorInstance.Data = local_c8.Data.AllocatorInstance.Data;
      (param_2->Data).ArrayNum = local_c8.Data.ArrayNum;
      (param_2->Data).ArrayMax = local_c8.Data.ArrayMax;
      local_c8.Data.ArrayNum = 0;
      local_c8.Data.ArrayMax = 0;
      local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    if (1 < local_e8.Data.ArrayNum) {
      ::FString::ConcatCF(&local_a8,L".",&local_e8);
      iVar11 = local_a8.Data.ArrayNum + -1;
      if (local_a8.Data.ArrayNum == 0) {
        iVar11 = 0;
      }
      ::FString::AppendChars(param_2,(wchar_t *)local_a8.Data.AllocatorInstance.Data,iVar11);
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
    }
    bVar3 = true;
  }
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

