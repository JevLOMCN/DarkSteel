// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BackChannel
// Functions: 5

// FBackChannelDispatchMap @ 14e7f2db0

FBackChannelDispatchMap * __thiscall
FBackChannelDispatchMap::FBackChannelDispatchMap(FBackChannelDispatchMap *this)

{
  this->_padding_ = (longlong)&___7FBackChannelDispatchMap__6B_;
  *(undefined8 *)&this->DispatchMap = 0;
  *(undefined8 *)&(this->DispatchMap).field_0x8 = 0;
  *(undefined8 *)&(this->DispatchMap).field_0x20 = 0;
  *(undefined4 *)&(this->DispatchMap).field_0x28 = 0;
  *(undefined4 *)&(this->DispatchMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->DispatchMap).field_0x34 = 0;
  *(undefined4 *)&(this->DispatchMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DispatchMap).field_0x40 = 0;
  *(undefined4 *)&(this->DispatchMap).field_0x48 = 0;
  return this;
}

// ~FBackChannelDispatchMap @ 14e7f34c0

void __thiscall FBackChannelDispatchMap::~FBackChannelDispatchMap(FBackChannelDispatchMap *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->DispatchMap).field_0x48 = 0;
  this->_padding_ = (longlong)&___7FBackChannelDispatchMap__6B_;
  pvVar1 = *(void **)&(this->DispatchMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TMulticastDelegate<void___cdecl(IBackChannelPacket_&),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TMulticastDelegate<void___cdecl(IBackChannelPacket_&),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TMulticastDelegate<void___cdecl(IBackChannelPacket_&),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DispatchMap);
  return;
}

// AddRoute @ 14e7f4500

FDelegateHandle __thiscall
FBackChannelDispatchMap::AddRoute
          (FBackChannelDispatchMap *this,TStringView<wchar_t> *param_1,
          TDelegate<void___cdecl(IBackChannelPacket_&),FDefaultDelegateUserPolicy> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FString *this_00;
  FDelegateHandle FVar5;
  ForAnyElementType FVar6;
  longlong lVar7;
  TMap<FString,TMulticastDelegate<void___cdecl(IBackChannelPacket_&),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMulticastDelegate<void___cdecl(IBackChannelPacket_&),FDefaultDelegateUserPolicy>,0>_>
  *this_01;
  TDelegateBase<FNotThreadSafeDelegateMode> *in_R9;
  TKeyInitializer<FString_const_&> local_res8;
  FString *local_res10;
  FString local_38;
  FString local_28;
  
  this_00 = ::FString::ConstructFromPtrSize
                      (&local_28,*(wchar_t **)param_2,*(int *)&param_2->field_0x8);
  ::FString::ToLower(this_00,&local_38);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  this_01 = &this->DispatchMap;
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar6.Data = local_38.Data.AllocatorInstance.Data;
  }
  lVar7 = 0;
  iVar4 = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,(wchar_t *)FVar6.Data);
  iVar4 = TSet<TTuple<FString,TMulticastDelegate<void___cdecl(IBackChannelPacket_&),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TMulticastDelegate<void___cdecl(IBackChannelPacket_&),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TMulticastDelegate<void___cdecl(IBackChannelPacket_&),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TMulticastDelegate<void___cdecl(IBackChannelPacket_&),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
                      *)this_01,uVar3,&local_38);
  if (iVar4 == -1) {
    local_res10 = &local_38;
    TSet<TTuple<FString,TMulticastDelegate<void___cdecl(IBackChannelPacket_&),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TMulticastDelegate<void___cdecl(IBackChannelPacket_&),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
    ::Emplace<TKeyInitializer<FString_const_&>_>
              ((TSet<TTuple<FString,TMulticastDelegate<void___cdecl(IBackChannelPacket_&),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TMulticastDelegate<void___cdecl(IBackChannelPacket_&),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
                *)this_01,&local_res8,(bool *)&local_res10);
  }
  iVar4 = local_38.Data.ArrayNum + -1;
  FVar6.Data = local_38.Data.AllocatorInstance.Data;
  if (local_38.Data.ArrayNum == 0) {
    iVar4 = 0;
    FVar6.Data = (FScriptContainerElement *)L"";
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,(wchar_t *)FVar6.Data);
  iVar4 = TSet<TTuple<FString,TMulticastDelegate<void___cdecl(IBackChannelPacket_&),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TMulticastDelegate<void___cdecl(IBackChannelPacket_&),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TMulticastDelegate<void___cdecl(IBackChannelPacket_&),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TMulticastDelegate<void___cdecl(IBackChannelPacket_&),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
                      *)this_01,uVar3,&local_38);
  if (((iVar4 == -1) ||
      (lVar7 = (longlong)iVar4 * 0x38 + *(longlong *)&this_01->field_0x0, lVar7 == 0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    FVar5.ID = (*pcVar1)();
    return (FDelegateHandle)FVar5.ID;
  }
  TMulticastDelegateRegistration<void___cdecl(IBackChannelPacket_&),FDefaultDelegateUserPolicy>::Add
            ((TMulticastDelegateRegistration<void___cdecl(IBackChannelPacket_&),FDefaultDelegateUserPolicy>
              *)(lVar7 + 0x10),
             (TDelegate<void___cdecl(IBackChannelPacket_&),FDefaultDelegateUserPolicy> *)param_1);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(in_R9);
  return (FDelegateHandle)(ulong64)param_1;
}

// DispatchMessage @ 14e7f5910

bool __thiscall
FBackChannelDispatchMap::DispatchMessage(FBackChannelDispatchMap *this,IBackChannelPacket *param_1)

{
  undefined1 *puVar1;
  TMap<FString,TMulticastDelegate<void___cdecl(IBackChannelPacket_&),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMulticastDelegate<void___cdecl(IBackChannelPacket_&),FDefaultDelegateUserPolicy>,0>_>
  *pTVar2;
  int *piVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  ForAnyElementType FVar8;
  TMap<FString,TMulticastDelegate<void___cdecl(IBackChannelPacket_&),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMulticastDelegate<void___cdecl(IBackChannelPacket_&),FDefaultDelegateUserPolicy>,0>_>
  *pTVar9;
  bool bVar10;
  undefined1 uVar11;
  bool bVar12;
  char cVar13;
  uint uVar14;
  int iVar15;
  FString *pFVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  undefined1 *puVar22;
  int iVar23;
  uint *puVar24;
  undefined1 local_res8 [8];
  uint local_res10;
  int local_res18;
  int local_res20;
  undefined4 uStack_d4;
  FString local_c8;
  TMap<FString,TMulticastDelegate<void___cdecl(IBackChannelPacket_&),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMulticastDelegate<void___cdecl(IBackChannelPacket_&),FDefaultDelegateUserPolicy>,0>_>
  *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  FString local_88;
  FDestructionSentinel local_78;
  void *local_60 [4];
  
  pFVar16 = (FString *)(**(code **)((longlong)*param_1 + 0x68))(param_1,local_60);
  ::FString::ToLower(pFVar16,&local_88);
  if (local_60[0] != (void *)0x0) {
    FMemory::Free(local_60[0]);
  }
  iVar21 = *(int *)&(this->DispatchMap).field_0x28;
  puVar1 = &(this->DispatchMap).field_0x10;
  pTVar2 = &this->DispatchMap;
  iVar20 = 0;
  uVar14 = 1;
  iVar23 = 0;
  iVar15 = 0;
  if (iVar21 != 0) {
    puVar24 = *(uint **)&(this->DispatchMap).field_0x20;
    if (puVar24 == (uint *)0x0) {
      puVar24 = (uint *)puVar1;
    }
    uVar19 = *puVar24;
    iVar23 = 0;
    while (uVar19 == 0) {
      lVar17 = (longlong)iVar20;
      iVar23 = iVar23 + 0x20;
      iVar20 = iVar20 + 1;
      iVar15 = iVar21;
      if ((int)(iVar21 + -1 + (iVar21 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar20) goto LAB_14e7f59df;
      uVar19 = puVar24[lVar17 + 1];
    }
    uVar14 = -uVar19 & uVar19;
    uVar4 = (ulonglong)uVar14 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_res18 = (int)lVar17;
    iVar15 = iVar23 + -1 + local_res18;
    if (iVar21 < iVar15) {
      iVar15 = iVar21;
    }
  }
LAB_14e7f59df:
  uVar19 = *(uint *)&(this->DispatchMap).field_0x28;
  uVar18 = uVar19 & 0xffffffe0;
  TStack_b0._padding_ = CONCAT44(uVar14,iVar20);
  TStack_b0.CurrentBitIndex = iVar15;
  TStack_b0.UnvisitedBitMask = 0xffffffff;
  iVar20 = (int)uVar19 >> 5;
  TStack_b0._28_4_ = iVar15;
  TStack_b0.BaseBitIndex = iVar23;
  uStack_90 = CONCAT44(uStack_d4,
                       *(int *)&(this->DispatchMap).field_0x8 -
                       *(int *)&(this->DispatchMap).field_0x34);
  local_res10 = uVar19;
  local_b8 = pTVar2;
  TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar19 < 0) || (iVar21 < (int)uVar19)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    uVar11 = (*pcVar7)();
    return (bool)uVar11;
  }
  uVar14 = *(uint *)&(this->DispatchMap).field_0x28;
  if (uVar19 != uVar14) {
    puVar22 = *(undefined1 **)&(this->DispatchMap).field_0x20;
    if (puVar22 == (undefined1 *)0x0) {
      puVar22 = puVar1;
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar20 * 4);
    while (uVar19 == 0) {
      lVar17 = (longlong)iVar20;
      uVar18 = uVar18 + 0x20;
      iVar20 = iVar20 + 1;
      uVar19 = uVar14;
      local_res10 = uVar14;
      if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
      goto LAB_14e7f5b00;
      uVar19 = *(uint *)(puVar22 + lVar17 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar17 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_res20 = (int)lVar17;
    uVar19 = local_res20 + -1 + uVar18;
    local_res10 = uVar19;
    if ((int)uVar14 < (int)uVar19) {
      uVar19 = uVar14;
      local_res10 = uVar14;
    }
  }
LAB_14e7f5b00:
  do {
    pTVar9 = local_b8;
    if (*(int *)&local_b8->field_0x8 - *(int *)&local_b8->field_0x34 != (int)uStack_90) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,TMulticastDelegate<void___cdecl(IBackChannelPacket_&),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_b0.CurrentBitIndex == uVar19) &&
        (TStack_b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar9 == pTVar2))
    {
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      return true;
    }
    pFVar16 = (FString *)((longlong)TStack_b0.CurrentBitIndex * 0x38 + *(longlong *)pTVar9);
    ::FString::ToLower(pFVar16,&local_c8);
    iVar21 = local_c8.Data.ArrayNum + -1;
    FVar8.Data = local_c8.Data.AllocatorInstance.Data;
    if (local_c8.Data.ArrayNum == 0) {
      iVar21 = 0;
      FVar8.Data = (FScriptContainerElement *)L"";
    }
    bVar10 = ::FString::StartsWith(&local_88,(wchar_t *)FVar8.Data,iVar21,IgnoreCase);
    if (bVar10) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pFVar16 + 1),
                 (FWriteAccessScope *)&local_78);
      piVar3 = &pFVar16[2].Data.ArrayMax;
      *piVar3 = *piVar3 + 1;
      bVar10 = false;
      uVar14 = *(int *)&pFVar16[2].Data.AllocatorInstance.Data - 1;
      if (-1 < (int)uVar14) {
        lVar17 = (longlong)(int)uVar14 << 4;
        bVar10 = false;
        do {
          uVar19 = 0;
          if ((int)uVar14 < *(int *)&pFVar16[2].Data.AllocatorInstance.Data) {
            uVar19 = ~uVar14 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar7 = (code *)swi(3);
            uVar11 = (*pcVar7)();
            return (bool)uVar11;
          }
          lVar5 = *(longlong *)&pFVar16[1].Data.ArrayNum;
          if (((*(int *)(lVar17 + 8 + lVar5) == 0) ||
              (plVar6 = *(longlong **)(lVar17 + lVar5), plVar6 == (longlong *)0x0)) ||
             (cVar13 = (**(code **)(*plVar6 + 0x68))(), cVar13 == '\0')) {
            bVar10 = true;
          }
          lVar17 = lVar17 + -0x10;
          uVar14 = uVar14 - 1;
          uVar19 = local_res10;
        } while (-1 < (int)uVar14);
      }
      piVar3 = &pFVar16[2].Data.ArrayMax;
      *piVar3 = *piVar3 + -1;
      if (bVar10) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pFVar16 + 1),false);
      }
      if (local_78.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
      }
    }
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
  } while( true );
}

// RemoveRoute @ 14e7f86f0

void __thiscall
FBackChannelDispatchMap::RemoveRoute
          (FBackChannelDispatchMap *this,TStringView<wchar_t> *param_1,FDelegateHandle param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FString *this_00;
  ulong64 *puVar5;
  wchar_t *pwVar6;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *pTVar7;
  longlong lVar8;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_01;
  uint uVar9;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *pTVar10;
  FScriptContainerElement *this_02;
  FString local_58;
  FString local_48;
  FDestructionSentinel local_38;
  
  this_00 = ::FString::ConstructFromPtrSize(&local_48,param_1->DataPtr,param_1->Size);
  ::FString::ToLower(this_00,&local_58);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pTVar7 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0;
  if (local_58.Data.ArrayNum == 0) {
    pwVar6 = L"";
    uVar3 = 0;
  }
  else {
    pwVar6 = (wchar_t *)local_58.Data.AllocatorInstance.Data;
    uVar3 = local_58.Data.ArrayNum - 1;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar3,pwVar6);
  iVar4 = TSet<TTuple<FString,TMulticastDelegate<void___cdecl(IBackChannelPacket_&),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TMulticastDelegate<void___cdecl(IBackChannelPacket_&),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TMulticastDelegate<void___cdecl(IBackChannelPacket_&),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TMulticastDelegate<void___cdecl(IBackChannelPacket_&),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
                      *)&this->DispatchMap,uVar3,&local_58);
  if (iVar4 != -1) {
    lVar8 = (longlong)iVar4 * 0x38 + *(longlong *)&this->DispatchMap;
    this_01 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(lVar8 + 0x10);
    if (lVar8 == 0) {
      this_01 = pTVar7;
    }
    if ((this_01 != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) && (param_2.ID != 0))
    {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_01,
                 (FWriteAccessScope *)&local_38);
      pTVar10 = pTVar7;
      if (0 < (this_01->InvocationList).ArrayNum) {
        do {
          uVar9 = (uint)pTVar10;
          uVar3 = 0;
          if ((int)uVar9 < (this_01->InvocationList).ArrayNum) {
            uVar3 = ~uVar9 >> 0x1f;
          }
          if ((uVar3 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          this_02 = (FScriptContainerElement *)
                    ((longlong)&pTVar7->_padding_ +
                    (longlong)(this_01->InvocationList).AllocatorInstance.Data);
          if (((*(int *)&this_02[8].field_0x0 != 0) &&
              (*(longlong **)&this_02->field_0x0 != (longlong *)0x0)) &&
             (puVar5 = (ulong64 *)(**(code **)(**(longlong **)&this_02->field_0x0 + 0x40))(),
             *puVar5 == param_2.ID)) {
            if ((*(int *)&this_02[8].field_0x0 != 0) &&
               (*(undefined8 **)&this_02->field_0x0 != (undefined8 *)0x0)) {
              (**(code **)**(undefined8 **)&this_02->field_0x0)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        ((ForAnyElementType *)this_02,0,0,0x10);
              *(undefined4 *)&this_02[8].field_0x0 = 0;
            }
            TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this_01,false)
            ;
            break;
          }
          pTVar7 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &(pTVar7->InvocationList).ArrayNum;
          pTVar10 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(ulonglong)(uVar9 + 1);
        } while ((int)(uVar9 + 1) < (this_01->InvocationList).ArrayNum);
      }
      if (local_38.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
      }
    }
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

