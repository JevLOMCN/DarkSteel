// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// GetSystemGuid @ 141a81340

FGuid * __thiscall
FDevSystemGuidRegistry::GetSystemGuid
          (FDevSystemGuidRegistry *this,FGuid *__return_storage_ptr__,FGuid *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong64 uVar5;
  FRegisteredGuid *pFVar6;
  
  if (this != (FDevSystemGuidRegistry *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)this);
    uVar5 = CityHash64((char *)param_1,0x10);
    pFVar6 = TMapBase<FGuid,FDevSystemGuidRegistry::FRegisteredGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FDevSystemGuidRegistry::FRegisteredGuid,0>_>
             ::FindOrAddImpl<FGuid_const_&>
                       ((TMapBase<FGuid,FDevSystemGuidRegistry::FRegisteredGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FDevSystemGuidRegistry::FRegisteredGuid,0>_>
                         *)&this->RegisteredSystemGuids,(uint)uVar5,param_1);
    uVar1 = (pFVar6->Guid).A;
    uVar2 = (pFVar6->Guid).B;
    uVar3 = (pFVar6->Guid).C;
    uVar4 = (pFVar6->Guid).D;
    pFVar6->bHasBeenRead = true;
    __return_storage_ptr__->A = uVar1;
    __return_storage_ptr__->B = uVar2;
    __return_storage_ptr__->C = uVar3;
    __return_storage_ptr__->D = uVar4;
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// RegisterSystemGuid @ 141a8eb60

void __thiscall
FDevSystemGuidRegistry::RegisterSystemGuid
          (FDevSystemGuidRegistry *this,FGuid *param_1,FGuid *param_2)

{
  FScriptContainerElement *pFVar1;
  uint *puVar2;
  bool bVar3;
  ulong64 uVar4;
  FRegisteredGuid *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  TArray<FGuid,TSizedDefaultAllocator<32>_> local_38;
  FGuid *local_28;
  FGuid *local_20;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  TMultiMap<FGuid,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FGuid,1>_>::
  MultiFind<TSizedDefaultAllocator<32>_>(&GRegisteredSystemGuids,param_1,&local_38,false);
  if (local_38.AllocatorInstance.Data !=
      local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 0x10) {
    pFVar6 = local_38.AllocatorInstance.Data + 8;
    do {
      if (((param_2->D == *(uint *)(pFVar6 + 4) && param_2->B == *(uint *)(pFVar6 + -4)) &&
          param_2->A == *(uint *)(pFVar6 + -8)) && param_2->C == *(uint *)pFVar6) {
        bVar3 = `FDevSystemGuidRegistry::RegisterSystemGuid'::__l3::<lambda_1>::operator()
                          (local_res8);
        if (!bVar3) goto LAB_141a8ec32;
        break;
      }
      pFVar1 = pFVar6 + 8;
      pFVar6 = pFVar6 + 0x10;
    } while (pFVar1 != local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 0x10);
  }
  local_28 = param_1;
  local_20 = param_2;
  TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,1>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FGuid_const_&,FGuid_const_&>_>
            ((TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,1>,FDefaultSetAllocator>
              *)&GRegisteredSystemGuids,(TPairInitializer<FGuid_const_&,FGuid_const_&> *)local_res8,
             (bool *)&local_28);
LAB_141a8ec32:
  uVar4 = CityHash64((char *)param_1,0x10);
  pFVar5 = TMapBase<FGuid,FDevSystemGuidRegistry::FRegisteredGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FDevSystemGuidRegistry::FRegisteredGuid,0>_>
           ::FindOrAddImpl<FGuid_const_&>
                     ((TMapBase<FGuid,FDevSystemGuidRegistry::FRegisteredGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FDevSystemGuidRegistry::FRegisteredGuid,0>_>
                       *)&this->RegisteredSystemGuids,(uint)uVar4,param_1);
  if (pFVar5->bHasBeenRead != false) {
    `FDevSystemGuidRegistry::RegisterSystemGuid'::__l2::<lambda_2>::operator()(local_res8);
  }
  (pFVar5->Guid).A = (pFVar5->Guid).A ^ param_2->A;
  puVar2 = &(pFVar5->Guid).B;
  *puVar2 = *puVar2 ^ param_2->B;
  puVar2 = &(pFVar5->Guid).C;
  *puVar2 = *puVar2 ^ param_2->C;
  puVar2 = &(pFVar5->Guid).D;
  *puVar2 = *puVar2 ^ param_2->D;
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// RegisterSystemGuids @ 141a8eca0

void __thiscall
FDevSystemGuidRegistry::RegisterSystemGuids
          (FDevSystemGuidRegistry *this,
          TMap<FGuid,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>_>
          *param_1)

{
  FScriptContainerElement *pFVar1;
  int *piVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  code *pcVar7;
  TMap<FGuid,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>_> *pTVar8;
  bool bVar9;
  FScriptContainerElement *pFVar10;
  ulong64 uVar11;
  longlong lVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  undefined1 *puVar18;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined8 local_f8;
  undefined8 uStack_f0;
  FGuid local_e8;
  int local_d8 [2];
  TArray<FGuid,TSizedDefaultAllocator<32>_> local_d0;
  TMap<FGuid,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>_> *local_c0;
  int iStack_b8;
  uint uStack_b4;
  undefined1 *local_b0;
  undefined4 uStack_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  int local_90;
  int local_8c;
  TPairInitializer<FGuid_const_&,FGuid_const_&> local_88;
  TMap<FGuid,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>_> *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  FGuid *local_48;
  undefined8 *local_40;
  
  if (this == (FDevSystemGuidRegistry *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  iVar5 = *(int *)&param_1->field_0x28;
  puVar4 = &param_1->field_0x10;
  iStack_b8 = 0;
  local_a0 = 0;
  uStack_b4 = 1;
  iStack_a4 = 0;
  if (iVar5 != 0) {
    puVar15 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar15 = (uint *)puVar4;
    }
    uVar17 = *puVar15;
    while (uVar17 == 0) {
      lVar12 = (longlong)iStack_b8;
      local_a0 = local_a0 + 0x20;
      iStack_b8 = iStack_b8 + 1;
      iStack_a4 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b8) goto LAB_141a8ed5d;
      uVar17 = puVar15[lVar12 + 1];
    }
    uStack_b4 = -uVar17 & uVar17;
    uVar3 = (ulonglong)uStack_b4 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_90 = (int)lVar12;
    iStack_a4 = local_a0 + -1 + local_90;
    if (iVar5 < iStack_a4) {
      iStack_a4 = iVar5;
    }
  }
LAB_141a8ed5d:
  uVar17 = *(uint *)&param_1->field_0x28;
  uVar16 = uVar17 & 0xffffffe0;
  iStack_98 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uStack_a8 = 0xffffffff;
  TStack_70._padding_ = CONCAT44(uStack_b4,iStack_b8);
  TStack_70.CurrentBitIndex = iStack_a4;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar17 >> 5;
  TStack_70._28_4_ = iStack_a4;
  TStack_70.BaseBitIndex = local_a0;
  uStack_50 = CONCAT44(uStack_94,iStack_98);
  local_c0 = param_1;
  local_b0 = puVar4;
  iStack_9c = iStack_a4;
  local_78 = param_1;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar4;
  if ((((int)uVar17 < 0) || (iVar5 < (int)uVar17)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar6 = *(uint *)&param_1->field_0x28;
  if (uVar17 != uVar6) {
    puVar18 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar18 = puVar4;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar14 * 4);
    while (uVar17 == 0) {
      lVar12 = (longlong)iVar14;
      uVar16 = uVar16 + 0x20;
      iVar14 = iVar14 + 1;
      uVar17 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_141a8ee60;
      uVar17 = *(uint *)(puVar18 + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_8c = (int)lVar12;
    uVar17 = local_8c + -1 + uVar16;
    if ((int)uVar6 < (int)uVar17) {
      uVar17 = uVar6;
    }
  }
LAB_141a8ee60:
  do {
    pTVar8 = local_78;
    if (*(int *)&local_78->field_0x8 - *(int *)&local_78->field_0x34 != (int)uStack_50) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FGuid,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_70.CurrentBitIndex == uVar17) &&
        (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar4)) && (pTVar8 == param_1))
    {
                    /* WARNING: Could not recover jumptable at 0x000141a8f126. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)this);
      return;
    }
    lVar12 = *(longlong *)pTVar8;
    piVar2 = (int *)(lVar12 + (longlong)TStack_70.CurrentBitIndex * 0x28);
    if ((((*(int *)(lVar12 + 0xc + (longlong)TStack_70.CurrentBitIndex * 0x28) == 0 &&
          piVar2[2] == 0) && piVar2[1] == 0) && *piVar2 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("SystemGuid.Key.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\DevObjectVersion.cpp"
                           ,0x6e,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((((piVar2[7] == 0 && piVar2[6] == 0) && piVar2[5] == 0) && piVar2[4] == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("SystemGuid.Value.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\DevObjectVersion.cpp"
                           ,0x6f,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_f8 = *(undefined8 *)(piVar2 + 4);
    uStack_f0 = *(undefined8 *)(piVar2 + 6);
    local_e8.A = piVar2[0];
    local_e8.B = piVar2[1];
    local_e8.C = piVar2[2];
    local_e8.D = piVar2[3];
    local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d0.ArrayNum = 0;
    local_d0.ArrayMax = 0;
    TMultiMap<FGuid,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FGuid,1>_>::
    MultiFind<TSizedDefaultAllocator<32>_>(&GRegisteredSystemGuids,&local_e8,&local_d0,false);
    if (local_d0.AllocatorInstance.Data !=
        local_d0.AllocatorInstance.Data + (longlong)local_d0.ArrayNum * 0x10) {
      pFVar10 = local_d0.AllocatorInstance.Data + 8;
      do {
        if (((uStack_f0._4_4_ == *(int *)(pFVar10 + 4) && local_f8._4_4_ == *(int *)(pFVar10 + -4))
            && (uint)local_f8 == *(int *)(pFVar10 + -8)) && (uint)uStack_f0 == *(int *)pFVar10) {
          local_res18[0] = 0;
          bVar9 = `FDevSystemGuidRegistry::RegisterSystemGuid'::__l3::<lambda_1>::operator()
                            (local_res18);
          if (!bVar9) goto LAB_141a8efd7;
          break;
        }
        pFVar1 = pFVar10 + 8;
        pFVar10 = pFVar10 + 0x10;
      } while (pFVar1 != local_d0.AllocatorInstance.Data + (longlong)local_d0.ArrayNum * 0x10);
    }
    local_48 = &local_e8;
    local_40 = &local_f8;
    TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,1>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FGuid_const_&,FGuid_const_&>_>
              ((TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,1>,FDefaultSetAllocator>
                *)&GRegisteredSystemGuids,&local_88,(bool *)&local_48);
LAB_141a8efd7:
    uVar11 = CityHash64((char *)&local_e8,0x10);
    if (*(int *)&(this->RegisteredSystemGuids).field_0x8 !=
        *(int *)&(this->RegisteredSystemGuids).field_0x34) {
      puVar18 = *(undefined1 **)&(this->RegisteredSystemGuids).field_0x40;
      puVar13 = &(this->RegisteredSystemGuids).field_0x38;
      if (puVar18 != (undefined1 *)0x0) {
        puVar13 = puVar18;
      }
      uVar16 = *(uint *)(puVar13 +
                        ((ulonglong)(*(int *)&(this->RegisteredSystemGuids).field_0x48 - 1) &
                        uVar11 & 0xffffffff) * 4);
      if (uVar16 != 0xffffffff) {
        do {
          puVar15 = (uint *)((longlong)(int)uVar16 * 0x2c +
                            *(longlong *)&this->RegisteredSystemGuids);
          if (((local_e8.D == puVar15[3] && local_e8.C == puVar15[2]) && local_e8.B == puVar15[1])
              && local_e8.A == *puVar15) {
            if (puVar15 != (uint *)0x0) goto LAB_141a8f09b;
            break;
          }
          uVar16 = puVar15[9];
        } while (uVar16 != 0xffffffff);
      }
    }
    local_88.Value = &local_e8;
    TSet<TTuple<FGuid,FDevSystemGuidRegistry::FRegisteredGuid>,TDefaultMapHashableKeyFuncs<FGuid,FDevSystemGuidRegistry::FRegisteredGuid,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FGuid_const_&>_>
              ((TSet<TTuple<FGuid,FDevSystemGuidRegistry::FRegisteredGuid>,TDefaultMapHashableKeyFuncs<FGuid,FDevSystemGuidRegistry::FRegisteredGuid,0>,FDefaultSetAllocator>
                *)&this->RegisteredSystemGuids,(uint)local_d8,
               (TKeyInitializer<FGuid_const_&> *)(uVar11 & 0xffffffff),(bool *)&local_88.Value);
    puVar15 = (uint *)((longlong)local_d8[0] * 0x2c + *(longlong *)&this->RegisteredSystemGuids);
LAB_141a8f09b:
    if ((char)puVar15[8] != '\0') {
      local_res20[0] = 0;
      `FDevSystemGuidRegistry::RegisterSystemGuid'::__l2::<lambda_2>::operator()(local_res20);
    }
    puVar15[4] = puVar15[4] ^ (uint)local_f8;
    puVar15[5] = puVar15[5] ^ local_f8._4_4_;
    puVar15[6] = puVar15[6] ^ (uint)uStack_f0;
    puVar15[7] = puVar15[7] ^ uStack_f0._4_4_;
    if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.AllocatorInstance.Data);
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  } while( true );
}

// operator() @ 150480020

bool __thiscall
`FDevSystemGuidRegistry::RegisterSystemGuid'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7746949120157286312>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7746949120157286312>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504800a0

bool __thiscall
`FDevSystemGuidRegistry::RegisterSystemGuid'::__l2::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7746949120157286304>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7746949120157286304>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

