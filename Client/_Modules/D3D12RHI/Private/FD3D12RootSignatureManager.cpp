// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 5

// ~FD3D12RootSignatureManager @ 1459aca80

void __thiscall
FD3D12RootSignatureManager::~FD3D12RootSignatureManager(FD3D12RootSignatureManager *this)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  
  if (*(int *)&(this->RootSignatureMap).field_0x8 != *(int *)&(this->RootSignatureMap).field_0x34) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("RootSignatureMap.Num() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.h"
                       ,499,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(undefined4 *)&(this->RootSignatureMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->RootSignatureMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FD3D12QuantizedBoundShaderState,FD3D12RootSignature_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FD3D12QuantizedBoundShaderState,FD3D12RootSignature_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FD3D12QuantizedBoundShaderState,FD3D12RootSignature_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RootSignatureMap);
                    /* WARNING: Could not recover jumptable at 0x0001459acae7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CS);
  return;
}

// CreateRootSignature @ 145a5e710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */

FD3D12RootSignature * __thiscall
FD3D12RootSignatureManager::CreateRootSignature
          (FD3D12RootSignatureManager *this,FD3D12QuantizedBoundShaderState *param_1)

{
  code *pcVar1;
  bool bVar2;
  FD3D12RootSignature *pFVar3;
  ShaderStage *pSVar4;
  longlong lVar5;
  undefined1 auStack_798 [32];
  FD3D12RootSignature *local_778;
  TPairInitializer<FD3D12QuantizedBoundShaderState_const_&,FD3D12RootSignature_*_const_&> local_770;
  FD3D12RootSignature **local_760;
  FD3D12RootSignatureDesc local_758;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_798;
  pFVar3 = ::operator_new(0xc0);
  if (pFVar3 == (FD3D12RootSignature *)0x0) {
    local_778 = (FD3D12RootSignature *)0x0;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("pNewRootSignature",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.cpp"
                       ,0x35d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FD3D12RootSignature *)(*pcVar1)();
      return pFVar3;
    }
  }
  else {
    if (this->_padding_ == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentAdapter != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x41,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FD3D12RootSignature *)(*pcVar1)();
        return pFVar3;
      }
    }
    pFVar3->_padding_ = this->_padding_;
    lVar5 = 0xc;
    (pFVar3->RootSignature).Reference = (ID3D12RootSignature *)0x0;
    pSVar4 = pFVar3->Stage;
    do {
      pSVar4->MaxCBVCount = '\0';
      pSVar4->MaxSRVCount = '\0';
      pSVar4->MaxSamplerCount = '\0';
      pSVar4->MaxUAVCount = '\0';
      pSVar4->CBVRegisterMask = 0;
      pSVar4->bVisible = false;
      pSVar4 = pSVar4 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    (pFVar3->RootSignatureBlob).Reference = (ID3D10Blob *)0x0;
    pFVar3->BindSlotOffsetsInDWORDs[0] = '\0';
    pFVar3->BindSlotOffsetsInDWORDs[1] = '\0';
    pFVar3->BindSlotOffsetsInDWORDs[2] = '\0';
    pFVar3->BindSlotOffsetsInDWORDs[3] = '\0';
    pFVar3->BindSlotOffsetsInDWORDs[4] = '\0';
    pFVar3->BindSlotOffsetsInDWORDs[5] = '\0';
    pFVar3->BindSlotOffsetsInDWORDs[6] = '\0';
    pFVar3->BindSlotOffsetsInDWORDs[7] = '\0';
    pFVar3->BindSlotOffsetsInDWORDs[8] = '\0';
    pFVar3->BindSlotOffsetsInDWORDs[9] = '\0';
    pFVar3->BindSlotOffsetsInDWORDs[10] = '\0';
    pFVar3->BindSlotOffsetsInDWORDs[0xb] = '\0';
    pFVar3->BindSlotOffsetsInDWORDs[0xc] = '\0';
    pFVar3->BindSlotOffsetsInDWORDs[0xd] = '\0';
    pFVar3->BindSlotOffsetsInDWORDs[0xe] = '\0';
    pFVar3->BindSlotOffsetsInDWORDs[0xf] = '\0';
    pFVar3->BindSlotOffsetsInDWORDs[0x10] = '\0';
    pFVar3->BindSlotOffsetsInDWORDs[0x11] = '\0';
    pFVar3->BindSlotOffsetsInDWORDs[0x12] = '\0';
    pFVar3->BindSlotOffsetsInDWORDs[0x13] = '\0';
    pFVar3->BindSlotOffsetsInDWORDs[0x14] = '\0';
    pFVar3->BindSlotOffsetsInDWORDs[0x15] = '\0';
    pFVar3->BindSlotOffsetsInDWORDs[0x16] = '\0';
    pFVar3->BindSlotOffsetsInDWORDs[0x17] = '\0';
    pFVar3->BindSlotOffsetsInDWORDs[0x18] = '\0';
    pFVar3->BindSlotOffsetsInDWORDs[0x19] = '\0';
    pFVar3->BindSlotOffsetsInDWORDs[0x1a] = '\0';
    pFVar3->BindSlotOffsetsInDWORDs[0x1b] = '\0';
    pFVar3->BindSlotOffsetsInDWORDs[0x1c] = '\0';
    pFVar3->BindSlotOffsetsInDWORDs[0x1d] = '\0';
    pFVar3->BindSlotOffsetsInDWORDs[0x1e] = '\0';
    pFVar3->BindSlotOffsetsInDWORDs[0x1f] = '\0';
    pFVar3->TotalRootSignatureSizeInDWORDs = '\0';
    pFVar3->RootConstantsSlot = -1;
    pFVar3->DiagnosticBufferSlot = -1;
    pFVar3->StaticShaderBindingSlot = -1;
    pFVar3->StaticShaderBindingCount = -1;
    if (pFVar3->_padding_ == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentAdapter != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x41,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FD3D12RootSignature *)(*pcVar1)();
        return pFVar3;
      }
    }
    FD3D12RootSignatureDesc::FD3D12RootSignatureDesc
              (&local_758,param_1,*(D3D12_RESOURCE_BINDING_TIER *)(pFVar3->_padding_ + 0x214));
    pFVar3->RootConstantsSlot = local_758.RootConstantsSlot;
    pFVar3->StaticShaderBindingSlot = local_758.StaticShaderBindingSlot;
    pFVar3->StaticShaderBindingCount = local_758.StaticShaderBindingCount;
    pFVar3->DiagnosticBufferSlot = local_758.DiagnosticBufferSlot;
    FD3D12RootSignature::Init
              (pFVar3,(D3D12_VERSIONED_ROOT_SIGNATURE_DESC *)&local_758.RootDesc,
               param_1->RootSignatureType);
    local_778 = pFVar3;
  }
  local_760 = &local_778;
  local_770.Value = (FD3D12RootSignature **)param_1;
  TSet<TTuple<FD3D12QuantizedBoundShaderState,FD3D12RootSignature_*>,TDefaultMapHashableKeyFuncs<FD3D12QuantizedBoundShaderState,FD3D12RootSignature_*,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FD3D12QuantizedBoundShaderState_const_&,FD3D12RootSignature_*_const_&>_>
            ((TSet<TTuple<FD3D12QuantizedBoundShaderState,FD3D12RootSignature_*>,TDefaultMapHashableKeyFuncs<FD3D12QuantizedBoundShaderState,FD3D12RootSignature_*,0>,FDefaultSetAllocator>
              *)&this->RootSignatureMap,&local_770,(bool *)&local_770.Value);
  return local_778;
}

// Destroy @ 145a633a0

void __thiscall FD3D12RootSignatureManager::Destroy(FD3D12RootSignatureManager *this)

{
  TMap<FD3D12QuantizedBoundShaderState,FD3D12RootSignature_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FD3D12QuantizedBoundShaderState,FD3D12RootSignature_*,0>_>
  *this_00;
  void *pvVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<FD3D12QuantizedBoundShaderState,FD3D12RootSignature_*>,TDefaultMapHashableKeyFuncs<FD3D12QuantizedBoundShaderState,FD3D12RootSignature_*,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<FD3D12QuantizedBoundShaderState,FD3D12RootSignature_*>,TDefaultMapHashableKeyFuncs<FD3D12QuantizedBoundShaderState,FD3D12RootSignature_*,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<FD3D12QuantizedBoundShaderState,FD3D12RootSignature_*>,TDefaultMapHashableKeyFuncs<FD3D12QuantizedBoundShaderState,FD3D12RootSignature_*,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  this_00 = &this->RootSignatureMap;
  TSet<TTuple<FD3D12QuantizedBoundShaderState,FD3D12RootSignature_*>,TDefaultMapHashableKeyFuncs<FD3D12QuantizedBoundShaderState,FD3D12RootSignature_*,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<FD3D12QuantizedBoundShaderState,FD3D12RootSignature_*>,TDefaultMapHashableKeyFuncs<FD3D12QuantizedBoundShaderState,FD3D12RootSignature_*,0>,FDefaultSetAllocator>
              *)this_00);
  local_10 = 0;
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar4 = local_78._24_8_ >> 0x20;
  local_18 = (TSet<TTuple<FD3D12QuantizedBoundShaderState,FD3D12RootSignature_*>,TDefaultMapHashableKeyFuncs<FD3D12QuantizedBoundShaderState,FD3D12RootSignature_*,0>,FDefaultSetAllocator>
              *)this_00;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      pvVar1 = *(void **)((longlong)(int)uVar4 * 0x100 + 0xf0 + *local_48);
      if (pvVar1 != (void *)0x0) {
        if (*(longlong **)((longlong)pvVar1 + 0x90) != (longlong *)0x0) {
          (**(code **)(**(longlong **)((longlong)pvVar1 + 0x90) + 0x10))();
        }
        if (*(longlong **)((longlong)pvVar1 + 8) != (longlong *)0x0) {
          (**(code **)(**(longlong **)((longlong)pvVar1 + 8) + 0x10))();
        }
        ::operator_delete(pvVar1,0xc0);
      }
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar4 = (ulonglong)uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
      uVar5 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar5 < 4) {
        iVar3 = 1;
      }
      else {
        uVar4 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
        lVar2 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar3 = 1 << ((byte)lVar2 & 0x1f);
      }
      if (((0 < (int)uVar5) && (local_18->HashSize < iVar3)) || (iVar3 < local_18->HashSize)) {
        local_18->HashSize = iVar3;
        TSet<TTuple<FD3D12QuantizedBoundShaderState,FD3D12RootSignature_*>,TDefaultMapHashableKeyFuncs<FD3D12QuantizedBoundShaderState,FD3D12RootSignature_*,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  TSet<TTuple<FD3D12QuantizedBoundShaderState,FD3D12RootSignature_*>,TDefaultMapHashableKeyFuncs<FD3D12QuantizedBoundShaderState,FD3D12RootSignature_*,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FD3D12QuantizedBoundShaderState,FD3D12RootSignature_*>,TDefaultMapHashableKeyFuncs<FD3D12QuantizedBoundShaderState,FD3D12RootSignature_*,0>,FDefaultSetAllocator>
           *)this_00);
  return;
}

// GetQuantizedBoundShaderState @ 145a69a80

FD3D12QuantizedBoundShaderState * __thiscall
FD3D12RootSignatureManager::GetQuantizedBoundShaderState
          (FD3D12RootSignatureManager *this,FD3D12QuantizedBoundShaderState *__return_storage_ptr__,
          FD3D12RootSignature *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  FD3D12QuantizedBoundShaderState *pFVar7;
  int iVar8;
  uint *puVar9;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  lpCriticalSection = &this->CS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  TStack_50._padding_._0_4_ = 0;
  iVar2 = *(int *)&(this->RootSignatureMap).field_0x28;
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->RootSignatureMap).field_0x10;
  iVar8 = 0;
  TStack_50._padding_._4_4_ = 1;
  TStack_50.CurrentBitIndex = 0;
  if (iVar2 != 0) {
    puVar9 = *(uint **)&(this->RootSignatureMap).field_0x20;
    if (puVar9 == (uint *)0x0) {
      puVar9 = (uint *)TStack_50.Array;
    }
    uVar3 = *puVar9;
    while (uVar3 == 0) {
      lVar6 = (longlong)(int)TStack_50._padding_;
      iVar8 = iVar8 + 0x20;
      TStack_50._padding_._0_4_ = (int)TStack_50._padding_ + 1;
      TStack_50.CurrentBitIndex = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)TStack_50._padding_)
      goto LAB_145a69b44;
      uVar3 = puVar9[lVar6 + 1];
    }
    TStack_50._padding_._4_4_ = -uVar3 & uVar3;
    uVar1 = (ulonglong)TStack_50._padding_._4_4_ * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    TStack_50.CurrentBitIndex = iVar8 + -1 + (int)lVar6;
    if (iVar2 < TStack_50.CurrentBitIndex) {
      TStack_50.CurrentBitIndex = iVar2;
    }
  }
LAB_145a69b44:
  TStack_50.UnvisitedBitMask = 0xffffffff;
  TStack_50._28_4_ = TStack_50.CurrentBitIndex;
  TStack_50.BaseBitIndex = iVar8;
  if (TStack_50.CurrentBitIndex < *(int *)&(this->RootSignatureMap).field_0x28) {
    do {
      pFVar7 = (FD3D12QuantizedBoundShaderState *)
               ((longlong)TStack_50.CurrentBitIndex * 0x100 + *(longlong *)&this->RootSignatureMap);
      if (*(FD3D12RootSignature **)&pFVar7[1].ShaderBindingLayout == param_1) {
        if (pFVar7 != (FD3D12QuantizedBoundShaderState *)0x0) goto LAB_145a69c14;
        goto LAB_145a69bee;
      }
      TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
    } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
  }
  pFVar7 = (FD3D12QuantizedBoundShaderState *)0x0;
LAB_145a69bee:
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("QBSS",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.cpp"
                     ,0x36a,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FD3D12QuantizedBoundShaderState *)(*pcVar4)();
    return pFVar7;
  }
LAB_145a69c14:
  FD3D12QuantizedBoundShaderState::FD3D12QuantizedBoundShaderState(__return_storage_ptr__,pFVar7);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return __return_storage_ptr__;
}

// GetRootSignature @ 145a6a8b0

FD3D12RootSignature * __thiscall
FD3D12RootSignatureManager::GetRootSignature
          (FD3D12RootSignatureManager *this,FD3D12QuantizedBoundShaderState *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FD3D12RootSignature *pFVar5;
  longlong lVar6;
  longlong *plVar7;
  
  lpCriticalSection = &this->CS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar3 = ::GetTypeHash(param_1);
  iVar4 = TSet<TTuple<FD3D12QuantizedBoundShaderState,FD3D12RootSignature_*>,TDefaultMapHashableKeyFuncs<FD3D12QuantizedBoundShaderState,FD3D12RootSignature_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FD3D12QuantizedBoundShaderState>
                    ((TSet<TTuple<FD3D12QuantizedBoundShaderState,FD3D12RootSignature_*>,TDefaultMapHashableKeyFuncs<FD3D12QuantizedBoundShaderState,FD3D12RootSignature_*,0>,FDefaultSetAllocator>
                      *)&this->RootSignatureMap,uVar3,param_1);
  if (iVar4 != -1) {
    lVar6 = (longlong)iVar4 * 0x100 + *(longlong *)&this->RootSignatureMap;
    plVar7 = (longlong *)(lVar6 + 0xf0);
    if (lVar6 == 0) {
      plVar7 = (longlong *)0x0;
    }
    if (plVar7 != (longlong *)0x0) {
      if (*plVar7 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("*ppRootSignature",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.cpp"
                           ,0x355,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar5 = (FD3D12RootSignature *)(*pcVar1)();
          return pFVar5;
        }
      }
      pFVar5 = (FD3D12RootSignature *)*plVar7;
      goto LAB_145a6a956;
    }
  }
  pFVar5 = CreateRootSignature(this,param_1);
LAB_145a6a956:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return pFVar5;
}

