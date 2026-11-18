// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 8

// FCookedScriptObjectsDebug @ 142308870

FCookedScriptObjectsDebug * __thiscall
FCookedScriptObjectsDebug::FCookedScriptObjectsDebug(FCookedScriptObjectsDebug *this)

{
  *(undefined8 *)&this->Objects = 0;
  *(undefined8 *)&(this->Objects).field_0x8 = 0;
  *(undefined8 *)&(this->Objects).field_0x20 = 0;
  *(undefined4 *)&(this->Objects).field_0x28 = 0;
  *(undefined4 *)&(this->Objects).field_0x2c = 0x80;
  *(undefined4 *)&(this->Objects).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Objects).field_0x34 = 0;
  *(undefined8 *)&(this->Objects).field_0x40 = 0;
  *(undefined4 *)&(this->Objects).field_0x48 = 0;
  TMulticastDelegateRegistration<void___cdecl(FName,enum_ECompiledInUObjectsRegisteredStatus),FDefaultDelegateUserPolicy>
  ::AddRaw<FCookedScriptObjectsDebug>
            (&FCoreUObjectDelegates::CompiledInUObjectsRegisteredDelegate,
             (FCookedScriptObjectsDebug *)&stack0x00000008,(pmf_d0eaee6b)this);
  return this;
}

// ~FCookedScriptObjectsDebug @ 14230a710

void __thiscall
FCookedScriptObjectsDebug::~FCookedScriptObjectsDebug(FCookedScriptObjectsDebug *this)

{
  void *pvVar1;
  
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FCoreUObjectDelegates::CompiledInUObjectsRegisteredDelegate,this);
  *(undefined4 *)&(this->Objects).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Objects).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FPackageObjectIndex,TTuple<FMinimalName,FPackageObjectIndex>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FPackageObjectIndex,TTuple<FMinimalName,FPackageObjectIndex>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FPackageObjectIndex,TTuple<FMinimalName,FPackageObjectIndex>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// operator() @ 14230e190

void __thiscall
`FCookedScriptObjectsDebug::TrimDebugData'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint uVar11;
  int local_res10 [2];
  
  lVar2 = *(longlong *)((longlong)this + 0x18);
  if (((param_1 < 0) || (*(int *)(lVar2 + 0x18) <= param_1)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar11 = 1 << ((byte)param_1 & 0x1f);
  lVar1 = (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5) * 4;
  lVar7 = *(longlong *)(lVar2 + 0x10);
  if (*(longlong *)(lVar2 + 0x10) == 0) {
    lVar7 = lVar2;
  }
  if ((*(uint *)(lVar7 + lVar1) & uVar11) == 0) {
    lVar2 = *(longlong *)((longlong)this + 0x18);
    if (((param_1 < 0) || (*(int *)(lVar2 + 0x18) <= param_1)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar7 = *(longlong *)(lVar2 + 0x10);
    if (*(longlong *)(lVar2 + 0x10) == 0) {
      lVar7 = lVar2;
    }
    *(uint *)(lVar7 + lVar1) = *(uint *)(lVar7 + lVar1) | uVar11;
    lVar2 = *(longlong *)((longlong)this + 0x10);
    if (((param_1 < 0) || (*(int *)(lVar2 + 0x18) <= param_1)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar7 = *(longlong *)(lVar2 + 0x10);
    if (*(longlong *)(lVar2 + 0x10) == 0) {
      lVar7 = lVar2;
    }
    if ((*(uint *)(lVar7 + lVar1) & uVar11) != 0) {
      **(int **)((longlong)this + 0x20) = **(int **)((longlong)this + 0x20) + 1;
      lVar2 = *(longlong *)((longlong)this + 0x10);
      if (((param_1 < 0) || (*(int *)(lVar2 + 0x18) <= param_1)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar7 = *(longlong *)(lVar2 + 0x10);
      if (*(longlong *)(lVar2 + 0x10) == 0) {
        lVar7 = lVar2;
      }
      *(uint *)(lVar7 + lVar1) = *(uint *)(lVar7 + lVar1) & ~uVar11;
    }
    plVar9 = *(longlong **)this;
    lVar2 = *plVar9;
    uVar3 = *(ulonglong *)((longlong)param_1 * 0x20 + 0x10 + lVar2);
    if (uVar3 != 0xffffffffffffffff) {
      if ((int)plVar9[1] != *(int *)((longlong)plVar9 + 0x34)) {
        plVar10 = (longlong *)plVar9[8];
        if ((longlong *)plVar9[8] == (longlong *)0x0) {
          plVar10 = plVar9 + 7;
        }
        for (local_res10[0] =
                  *(int *)((longlong)plVar10 +
                          ((ulonglong)((int)plVar9[9] - 1) & uVar3 & 0xffffffff) * 4);
            local_res10[0] != -1;
            local_res10[0] = *(int *)((longlong)local_res10[0] * 0x20 + 0x18 + lVar2)) {
          if (*(ulonglong *)((longlong)local_res10[0] * 0x20 + lVar2) == uVar3) goto LAB_14230e33d;
        }
      }
      local_res10[0] = -1;
LAB_14230e33d:
      puVar4 = *(undefined8 **)((longlong)this + 8);
      UE::Core::Private::Function::CheckCallable((void *)*puVar4);
      pcVar5 = (code *)*puVar4;
      plVar9 = puVar4 + 2;
      if ((longlong *)puVar4[5] != (longlong *)0x0) {
        plVar9 = (longlong *)puVar4[5];
      }
      uVar8 = (**(code **)(*plVar9 + 8))();
      (*pcVar5)(uVar8,local_res10);
    }
  }
  return;
}

// GetPathName @ 142327100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FCookedScriptObjectsDebug::GetPathName
          (FCookedScriptObjectsDebug *this,FString *__return_storage_ptr__,
          FPackageObjectIndex param_1)

{
  int iVar1;
  TTuple<FMinimalName,FPackageObjectIndex> *pTVar2;
  ulong64 *puVar3;
  undefined1 *puVar4;
  ulong64 *puVar5;
  ulong64 *puVar6;
  undefined1 auStack_278 [32];
  int local_258;
  FName local_254;
  TStringBuilderBase<wchar_t> local_248;
  wchar_t local_228 [256];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_278;
  puVar6 = (ulong64 *)0x0;
  puVar3 = puVar6;
  if (*(int *)&(this->Objects).field_0x8 != *(int *)&(this->Objects).field_0x34) {
    puVar4 = *(undefined1 **)&(this->Objects).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->Objects).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + ((ulonglong)(*(int *)&(this->Objects).field_0x48 - 1) &
                              param_1.TypeAndId & 0xffffffff) * 4);
    if (iVar1 != -1) {
      do {
        puVar3 = (ulong64 *)((longlong)iVar1 * 0x20 + *(longlong *)&this->Objects);
        if (*puVar3 == param_1.TypeAndId) break;
        iVar1 = (int)puVar3[3];
        puVar3 = puVar6;
      } while (iVar1 != -1);
    }
  }
  puVar5 = puVar3 + 1;
  if (puVar3 == (ulong64 *)0x0) {
    puVar5 = puVar6;
  }
  if (puVar5 == (ulong64 *)0x0) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  local_248.Base = local_228;
  local_248.bIsDynamic = false;
  local_248.bIsExternal = false;
  local_248.CurPos = local_228;
  local_258 = 0;
  local_248.End = (wchar_t *)local_28;
  pTVar2 = TMapBase<FPackageObjectIndex,TTuple<FMinimalName,FPackageObjectIndex>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageObjectIndex,TTuple<FMinimalName,FPackageObjectIndex>,0>_>
           ::Find((TMapBase<FPackageObjectIndex,TTuple<FMinimalName,FPackageObjectIndex>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageObjectIndex,TTuple<FMinimalName,FPackageObjectIndex>,0>_>
                   *)this,(FPackageObjectIndex *)(puVar5 + 1));
  if (pTVar2 != (TTuple<FMinimalName,FPackageObjectIndex> *)0x0) {
    GetPathNameInternal(this,pTVar2,&local_248,&local_258);
    if (local_258 == 1) {
      if (local_248.End < local_248.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_248,1);
      }
      *local_248.CurPos = L'.';
    }
    else if (local_258 == 2) {
      if (local_248.End < local_248.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_248,1);
      }
      *local_248.CurPos = L':';
    }
    else {
      if (local_258 < 3) goto LAB_142327288;
      if (local_248.End < local_248.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_248,1);
      }
      *local_248.CurPos = L'?';
    }
    local_248.CurPos = local_248.CurPos + 1;
  }
LAB_142327288:
  local_254.ComparisonIndex.Value = (uint)*puVar5;
  local_254.Number = (uint)(*puVar5 >> 0x20);
  ::FName::AppendString(&local_254,&local_248);
  local_258 = local_258 + 1;
  if (local_248.End < local_248.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_248,1);
  }
  *local_248.CurPos = L'\0';
  ::FString::FString(__return_storage_ptr__,local_248.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_248);
  return __return_storage_ptr__;
}

// GetPathNameInternal @ 142327330

void __thiscall
FCookedScriptObjectsDebug::GetPathNameInternal
          (FCookedScriptObjectsDebug *this,TTuple<FMinimalName,FPackageObjectIndex> *param_1,
          TStringBuilderBase<wchar_t> *param_2,int *param_3)

{
  int iVar1;
  TTuple<FMinimalName,FPackageObjectIndex> *pTVar2;
  FName local_res8;
  
  pTVar2 = TMapBase<FPackageObjectIndex,TTuple<FMinimalName,FPackageObjectIndex>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageObjectIndex,TTuple<FMinimalName,FPackageObjectIndex>,0>_>
           ::Find((TMapBase<FPackageObjectIndex,TTuple<FMinimalName,FPackageObjectIndex>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageObjectIndex,TTuple<FMinimalName,FPackageObjectIndex>,0>_>
                   *)this,(FPackageObjectIndex *)&param_1->field_0x8);
  if (pTVar2 != (TTuple<FMinimalName,FPackageObjectIndex> *)0x0) {
    GetPathNameInternal(this,pTVar2,param_2,param_3);
    iVar1 = *param_3;
    if (iVar1 == 1) {
      if (param_2->End < param_2->CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(param_2,1);
      }
      *param_2->CurPos = L'.';
      param_2->CurPos = param_2->CurPos + 1;
    }
    else if (iVar1 == 2) {
      if (param_2->End < param_2->CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(param_2,1);
      }
      *param_2->CurPos = L':';
      param_2->CurPos = param_2->CurPos + 1;
    }
    else if (2 < iVar1) {
      TStringBuilderBase<wchar_t>::AppendChar<char,0>(param_2,'?');
    }
  }
  local_res8.ComparisonIndex.Value = (uint)*(undefined8 *)param_1;
  local_res8.Number = (uint)((ulonglong)*(undefined8 *)param_1 >> 0x20);
  ::FName::AppendString(&local_res8,param_2);
  *param_3 = *param_3 + 1;
  return;
}

// LoadDebugData @ 14232b340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FCookedScriptObjectsDebug::LoadDebugData(FCookedScriptObjectsDebug *this)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  BufCore *pBVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FIoDispatcher *this_00;
  FIoBuffer *pFVar9;
  uint *puVar10;
  uint *puVar11;
  bool bVar12;
  undefined1 auStackY_1f8 [32];
  uint local_1c8 [2];
  FEventRef local_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1a8;
  FIoChunkId local_1a0;
  undefined1 local_194 [20];
  TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_> local_180;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  uint *local_150;
  undefined1 *local_148;
  FIoBatch local_140;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  FLargeMemoryReader local_108;
  FIoReadOptions local_48;
  
  local_48.TargetVa = (void *)(__security_cookie.value ^ (ulonglong)auStackY_1f8);
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId6358,"FCookedScriptObjectsDebug::LoadDebugData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
               ,0x18d6);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6358);
  }
  this_00 = FIoDispatcher::Get();
  local_1b0 = 0x5000000;
  local_48.RequestedSize._0_4_ = 0x5000000;
  local_1b8 = 0;
  local_48.RequestedOffset = 0;
  bVar7 = FIoDispatcher::DoesChunkExist(this_00,(FIoChunkId *)&local_48);
  if (bVar7) {
    FIoDispatcher::NewBatch(this_00,&local_140);
    uStack_158 = 0;
    local_170 = 0;
    uStack_168 = 0xffffffffffffffff;
    local_160 = 0;
    local_128 = 0;
    uStack_120 = 0xffffffffffffffff;
    local_118 = 0;
    uStack_110 = 0;
    FIoBatch::Read(&local_140,&local_1a0,&local_48,(int)&local_128);
    FEventRef::FEventRef(&local_1c0,AutoReset);
    FIoBatch::IssueAndTriggerEvent(&local_140,local_1c0.Event);
    (**(code **)((local_1c0.Event)->_padding_ + 0x20))(local_1c0.Event,0xffffffff,0);
    pFVar9 = FIoRequest::GetResult((FIoRequest *)&local_1a0);
    if (pFVar9 != (FIoBuffer *)0x0) {
      pBVar4 = (pFVar9->CorePtr).Reference;
      local_1a8 = 0;
      FLargeMemoryReader::FLargeMemoryReader
                (&local_108,pBVar4->DataPtr,
                 (ulonglong)CONCAT14(pBVar4->DataSizeHigh,pBVar4->DataSizeLow),None,(FName)0x0);
      LoadNameBatch(&local_180,(FArchive *)&local_108,None);
      local_1c8[0] = 0;
      if (*(uint **)(local_108._padding_ + 8) < *(uint **)local_108._padding_ + 1) {
        if ((local_108._padding_._2_1_ & 1) == 0) {
          (**(code **)(local_108._padding_ + 0x188))(&local_108,local_1c8,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)&local_108,local_1c8);
        }
      }
      else {
        local_1c8[0] = **(uint **)local_108._padding_;
        *(longlong *)local_108._padding_ = *(longlong *)local_108._padding_ + 4;
      }
      uVar3 = local_1c8[0];
      if ((uint)(*(int *)&(this->Objects).field_0x8 - *(int *)&(this->Objects).field_0x34) <
          local_1c8[0]) {
        if ((int)local_1c8[0] < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidSetNum((longlong)(int)local_1c8[0]);
        }
        TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Reserve((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,local_1c8[0]);
        if (uVar3 < 4) {
          iVar8 = 1;
        }
        else {
          uVar1 = (ulonglong)((uVar3 >> 1) + 7) * 2 + 1;
          lVar5 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
            }
          }
          local_1a0.Id._8_4_ = SUB84(lVar5,0);
          iVar8 = 1 << ((byte)lVar5 & 0x1f);
        }
        iVar2 = *(int *)&(this->Objects).field_0x48;
        if ((iVar2 == 0) || (iVar2 < iVar8)) {
          *(int *)&(this->Objects).field_0x48 = iVar8;
          TSet<TTuple<FPackageObjectIndex,TTuple<FMinimalName,FPackageObjectIndex>_>,TDefaultMapHashableKeyFuncs<FPackageObjectIndex,TTuple<FMinimalName,FPackageObjectIndex>,0>,FDefaultSetAllocator>
          ::Rehash((TSet<TTuple<FPackageObjectIndex,TTuple<FMinimalName,FPackageObjectIndex>_>,TDefaultMapHashableKeyFuncs<FPackageObjectIndex,TTuple<FMinimalName,FPackageObjectIndex>,0>,FDefaultSetAllocator>
                    *)this);
        }
      }
      uVar3 = local_1c8[0];
      puVar10 = (uint *)(((pFVar9->CorePtr).Reference)->DataPtr + local_108._padding_);
      if (((int)local_1c8[0] < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      puVar11 = puVar10 + (longlong)(int)uVar3 * 8;
      for (; puVar10 != puVar11; puVar10 = puVar10 + 8) {
        uVar3 = *puVar10;
        if ((local_180.ArrayNum <= (int)(uVar3 & 0x3fffffff)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_194._4_4_ =
             *(undefined4 *)(local_180.AllocatorInstance.Data + (ulonglong)(uVar3 & 0x3fffffff) * 4)
        ;
        local_194._8_4_ = puVar10[1];
        local_194._12_8_ = *(undefined8 *)(puVar10 + 4);
        local_150 = puVar10 + 2;
        local_148 = local_194 + 4;
        TSet<TTuple<FPackageObjectIndex,TTuple<FMinimalName,FPackageObjectIndex>_>,TDefaultMapHashableKeyFuncs<FPackageObjectIndex,TTuple<FMinimalName,FPackageObjectIndex>,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<FPackageObjectIndex_const_&,TTuple<FMinimalName,FPackageObjectIndex>_&&>_>
                  ((TSet<TTuple<FPackageObjectIndex,TTuple<FMinimalName,FPackageObjectIndex>_>,TDefaultMapHashableKeyFuncs<FPackageObjectIndex,TTuple<FMinimalName,FPackageObjectIndex>,0>,FDefaultSetAllocator>
                    *)this,(TPairInitializer<FPackageObjectIndex_const_&,TTuple<FMinimalName,FPackageObjectIndex>_&&>
                            *)local_194,(bool *)&local_150);
      }
      if (4 < (byte)LogStreaming._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
      }
      if (local_180.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_180.AllocatorInstance.Data);
      }
      FLargeMemoryReader::~FLargeMemoryReader(&local_108);
    }
    FEventRef::~FEventRef(&local_1c0);
    FIoRequest::~FIoRequest((FIoRequest *)&local_1a0);
    FIoBatch::~FIoBatch(&local_140);
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// OnCompiledInUObjectsRegistered @ 14232d8f0

void __thiscall
FCookedScriptObjectsDebug::OnCompiledInUObjectsRegistered
          (FCookedScriptObjectsDebug *this,FName param_1,ECompiledInUObjectsRegisteredStatus param_2
          )

{
  if (param_2 == PreCDO) {
    if (GEnableScriptImportsDebugging) {
      LoadDebugData(this);
    }
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FCoreUObjectDelegates::CompiledInUObjectsRegisteredDelegate,this);
  }
  return;
}

// TrimDebugData @ 14233f320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCookedScriptObjectsDebug::TrimDebugData
          (FCookedScriptObjectsDebug *this,
          TMap<FPackageObjectIndex,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageObjectIndex,UObject_*,0>_>
          *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  TMap<FPackageObjectIndex,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageObjectIndex,UObject_*,0>_>
  *pTVar9;
  TMap<FPackageObjectIndex,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageObjectIndex,UObject_*,0>_>
  *pTVar10;
  bool bVar11;
  int iVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  byte bVar15;
  longlong lVar16;
  longlong *plVar17;
  ForElementType<FSetElementId> FVar18;
  ForElementType<unsigned_int> FVar19;
  undefined1 *puVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  ForElementType<unsigned_int> FVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  uint *puVar30;
  longlong lVar31;
  ulonglong uVar32;
  bool bVar33;
  undefined1 auStack_258 [32];
  double local_238;
  uint local_228;
  undefined1 local_224 [4];
  uint local_220;
  uint local_21c;
  int local_218 [2];
  TMap<FPackageObjectIndex,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageObjectIndex,UObject_*,0>_>
  *local_210;
  uint local_208;
  uint uStack_204;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_200;
  undefined4 local_1f8;
  uint uStack_1f4;
  uint uStack_1f0;
  undefined4 uStack_1ec;
  ForElementType<unsigned_int> local_1e8;
  int local_1e0;
  int local_1dc;
  undefined4 local_1d8;
  int local_1d4;
  TPairInitializer<FPackageObjectIndex_const_&,TTuple<FMinimalName,FPackageObjectIndex>_const_&>
  local_1d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1c0;
  TMap<FPackageObjectIndex,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageObjectIndex,UObject_*,0>_>
  *local_1a0;
  int iStack_198;
  uint uStack_194;
  undefined1 *local_190;
  undefined4 uStack_188;
  int iStack_184;
  int local_180;
  undefined4 uStack_17c;
  int iStack_178;
  undefined4 uStack_174;
  TMap<FPackageObjectIndex,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageObjectIndex,UObject_*,0>_>
  *local_170;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_168;
  undefined8 uStack_148;
  longlong local_140;
  longlong local_138;
  undefined4 local_114;
  ForElementType<unsigned_int> local_110;
  uint local_f8;
  int local_f4;
  undefined1 local_e8 [24];
  uchar auStack_d0 [8];
  ForElementType<unsigned_int> local_c8;
  ulonglong uStack_c0;
  undefined8 local_b8;
  ForElementType<FSetElementId> FStack_b0;
  ulonglong uStack_a0;
  ForElementType<unsigned_int> local_98;
  uint local_80;
  int local_7c;
  code *local_78 [2];
  longlong local_68 [3];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_258;
  if (*(int *)&(this->Objects).field_0x8 - *(int *)&(this->Objects).field_0x34 < 1) {
    return;
  }
  bVar33 = -1 < CpuChannel->Enabled;
  local_210 = param_1;
  if (bVar33) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId6400,"FCookedScriptObjectsDebug::TrimDebugData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
               ,0x1900);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6400);
  }
  local_21c = *(int *)&(this->Objects).field_0x8 - *(int *)&(this->Objects).field_0x34;
  local_110.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_f4 = 0x80;
  uVar26 = local_21c + 0x1f;
  uVar22 = uVar26 >> 5;
  local_f8 = local_21c;
  local_80 = local_21c;
  if (uVar26 >> 5 == 0) {
LAB_14233f49e:
    local_98.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_7c = 0x80;
    if (uVar26 >> 5 != 0) goto LAB_14233f4c5;
  }
  else {
    if (4 < uVar22) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&local_110,0,uVar22,4);
      local_f4 = uVar22 << 5;
    }
    FVar19 = (ForElementType<unsigned_int>)&local_110;
    if (local_110.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar19 = local_110.SecondaryData;
    }
    memset((void *)FVar19,0,(ulonglong)uVar22 << 2);
    uVar25 = local_f8 & 0x8000001f;
    if ((int)uVar25 < 0) {
      uVar25 = (uVar25 - 1 | 0xffffffe0) + 1;
    }
    if (uVar25 == 0) goto LAB_14233f49e;
    FVar19 = (ForElementType<unsigned_int>)&local_110;
    if (local_110.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar19 = local_110.SecondaryData;
    }
    puVar30 = (uint *)((longlong)FVar19 +
                      (longlong)((int)(local_f8 + ((int)local_f8 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar30 = *puVar30 & 0xffffffffU >> (-(char)uVar25 & 0x1fU);
LAB_14233f4c5:
    local_7c = 0x80;
    local_98.SecondaryData = (ForElementType<unsigned_int>)0x0;
    if (4 < uVar22) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&local_98,0,uVar22,4);
      local_7c = uVar22 << 5;
    }
    FVar19 = (ForElementType<unsigned_int>)&local_98;
    if (local_98.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar19 = local_98.SecondaryData;
    }
    memset((void *)FVar19,0,(ulonglong)uVar22 << 2);
    uVar26 = local_80 & 0x8000001f;
    if ((int)uVar26 < 0) {
      uVar26 = (uVar26 - 1 | 0xffffffe0) + 1;
    }
    if (uVar26 != 0) {
      FVar19 = (ForElementType<unsigned_int>)&local_98;
      if (local_98.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar19 = local_98.SecondaryData;
      }
      puVar30 = (uint *)((longlong)FVar19 +
                        (longlong)((int)(local_80 + ((int)local_80 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar30 = *puVar30 & 0xffffffffU >> (0x20U - (char)uVar26 & 0x1f);
    }
  }
  local_228 = local_21c;
  local_78[0] = (code *)0x0;
  local_50 = FMemory::Malloc(0x30,8);
  uVar22 = 1;
  *local_50 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`FCookedScriptObjectsDebug::TrimDebugData'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  uVar26 = 1;
  local_180 = 0;
  local_50[1] = (longlong)this;
  local_50[2] = (longlong)local_78;
  local_50[3] = (longlong)&local_110;
  local_50[4] = (longlong)&local_98;
  local_50[5] = (longlong)&local_228;
  if (local_50 + 1 != (longlong *)0x0) {
    local_78[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FCookedScriptObjectsDebug::TrimDebugData'::__l2::<lambda_1>,void,int>
                  ::Call;
  }
  local_1e8 = (ForElementType<unsigned_int>)&local_210->field_0x10;
  iVar23 = *(int *)&local_210->field_0x28;
  uStack_194 = 1;
  iStack_184 = local_180;
  iStack_198 = 0;
  if (iVar23 != 0) {
    puVar30 = *(uint **)&local_210->field_0x20;
    if (*(uint **)&local_210->field_0x20 == (uint *)0x0) {
      puVar30 = (uint *)local_1e8;
    }
    uStack_194 = *puVar30;
    local_180 = 0;
    while (uStack_194 == 0) {
      lVar16 = (longlong)iStack_198;
      local_180 = local_180 + 0x20;
      iStack_198 = iStack_198 + 1;
      uStack_194 = 1;
      iStack_184 = iVar23;
      if ((int)(iVar23 + -1 + (iVar23 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_198) goto LAB_14233f67f;
      uStack_194 = (puVar30 + 1)[lVar16];
    }
    uStack_194 = -uStack_194 & uStack_194;
    uVar28 = (ulonglong)uStack_194 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar28 != 0) {
      for (; uVar28 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_1e0 = (int)lVar16;
    iStack_184 = local_180 + -1 + local_1e0;
    if (iVar23 < iStack_184) {
      iStack_184 = iVar23;
    }
  }
LAB_14233f67f:
  uStack_17c = local_114;
  local_220 = *(uint *)&local_210->field_0x28;
  iStack_178 = *(int *)&local_210->field_0x8 - *(int *)&local_210->field_0x34;
  uVar25 = local_220 & 0xffffffe0;
  local_1a0 = local_210;
  TStack_168._padding_ = CONCAT44(uStack_194,iStack_198);
  uStack_188 = 0xffffffff;
  TStack_168.CurrentBitIndex = iStack_184;
  TStack_168.UnvisitedBitMask = 0xffffffff;
  local_170 = local_210;
  iVar23 = (int)local_220 >> 5;
  TStack_168._28_4_ = local_114;
  TStack_168.BaseBitIndex = local_180;
  uStack_148 = CONCAT44(uStack_174,iStack_178);
  bVar15 = (byte)local_220;
  local_190 = (undefined1 *)local_1e8;
  TStack_168.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_1e8;
  if (((int)local_220 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FVar19 = local_1e8;
  pTVar9 = local_210;
  uVar24 = *(int *)((longlong)local_1e8 + 0x18);
  uVar21 = local_220;
  if (local_220 != uVar24) {
    FVar27 = *(ForElementType<unsigned_int> *)((longlong)local_1e8 + 0x10);
    if (*(ForElementType<unsigned_int> *)((longlong)local_1e8 + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar27 = local_1e8;
    }
    uVar21 = -1 << (bVar15 & 0x1f) & *(uint *)((longlong)FVar27 + (longlong)iVar23 * 4);
    while (uVar21 == 0) {
      lVar16 = (longlong)iVar23;
      uVar25 = uVar25 + 0x20;
      iVar23 = iVar23 + 1;
      local_220 = uVar24;
      uVar21 = uVar24;
      if ((int)((uVar24 - 1) + ((int)(uVar24 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar23)
      goto LAB_14233f7a0;
      uVar21 = *(uint *)((undefined1 *)((longlong)FVar27 + 4) + lVar16 * 4);
    }
    uVar28 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar28 != 0) {
      for (; uVar28 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_1dc = (int)lVar16;
    local_220 = (uVar25 - 1) + local_1dc;
    uVar21 = local_220;
    if ((int)uVar24 < (int)local_220) {
      local_220 = uVar24;
      uVar21 = uVar24;
    }
  }
LAB_14233f7a0:
  while( true ) {
    pTVar10 = local_170;
    if (*(int *)&local_170->field_0x8 - *(int *)&local_170->field_0x34 != (int)uStack_148) {
      local_224[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FPackageObjectIndex,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_224);
    }
    if (((TStack_168.CurrentBitIndex == uVar21) &&
        ((ForElementType<unsigned_int>)TStack_168.Array == FVar19)) && (pTVar10 == pTVar9)) break;
    lVar16 = *(longlong *)pTVar10;
    if (*(int *)&(this->Objects).field_0x8 != *(int *)&(this->Objects).field_0x34) {
      puVar1 = *(undefined1 **)&(this->Objects).field_0x40;
      puVar20 = &(this->Objects).field_0x38;
      if (puVar1 != (undefined1 *)0x0) {
        puVar20 = puVar1;
      }
      iVar23 = *(int *)(puVar20 +
                       (ulonglong)
                       (*(int *)&(this->Objects).field_0x48 - 1U &
                       *(uint *)(lVar16 + (longlong)TStack_168.CurrentBitIndex * 0x18)) * 4);
      if (iVar23 != -1) {
        do {
          if (*(longlong *)((longlong)iVar23 * 0x20 + *(longlong *)&this->Objects) ==
              *(longlong *)(lVar16 + (longlong)TStack_168.CurrentBitIndex * 0x18)) {
            if (((iVar23 < 0) || ((int)local_f8 <= iVar23)) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5be,L""), bVar11)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            FVar27 = (ForElementType<unsigned_int>)&local_110;
            if (local_110.SecondaryData != (ForElementType<unsigned_int>)0x0) {
              FVar27 = local_110.SecondaryData;
            }
            iVar12 = iVar23;
            if (iVar23 < 0) {
              iVar12 = iVar23 + 0x1f;
            }
            puVar30 = (uint *)((longlong)FVar27 + (longlong)(iVar12 >> 5) * 4);
            *puVar30 = *puVar30 | 1 << ((byte)iVar23 & 0x1f);
            local_228 = local_228 - 1;
            break;
          }
          iVar23 = *(int *)((longlong)iVar23 * 0x20 + 0x18 + *(longlong *)&this->Objects);
        } while (iVar23 != -1);
      }
    }
    TStack_168.UnvisitedBitMask = TStack_168.UnvisitedBitMask & ~TStack_168._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_168);
  }
  uVar32 = 0;
  uVar28 = uVar32;
  if (0 < (int)local_21c) {
    do {
      iVar23 = (int)uVar28;
      if (((int)local_f8 <= iVar23) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar11)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar19 = (ForElementType<unsigned_int>)&local_110;
      if (local_110.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar19 = local_110.SecondaryData;
      }
      if ((*(uint *)((longlong)FVar19 + (uVar28 >> 5) * 4) & uVar26) == 0) {
        local_218[0] = iVar23;
        UE::Core::Private::Function::CheckCallable(local_78[0]);
        pcVar2 = local_78[0];
        plVar17 = local_68;
        if (local_50 != (longlong *)0x0) {
          plVar17 = local_50;
        }
        uVar13 = (**(code **)(*plVar17 + 8))();
        (*pcVar2)(uVar13,local_218);
      }
      uVar26 = uVar26 << 1 | (uint)((int)uVar26 < 0);
      uVar28 = (ulonglong)(iVar23 + 1U);
    } while ((int)(iVar23 + 1U) < (int)local_21c);
  }
  uVar25 = local_21c;
  uVar26 = local_228;
  if (local_228 == local_21c) goto LAB_14233fd5e;
  local_e8._0_8_ = (FScriptContainerElement *)0x0;
  local_e8._8_8_ = 0;
  local_c8 = (ForElementType<unsigned_int>)0x0;
  uStack_c0 = 0x8000000000;
  local_b8._0_4_ = -1;
  local_b8._4_4_ = 0;
  FStack_b0.SecondaryData = (ForElementType<FSetElementId>)0x0;
  uStack_a0 = uStack_a0 & 0xffffffff00000000;
  if (local_228 != 0) {
    if ((int)local_228 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)local_228);
    }
    TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_e8,local_228);
    uVar24 = 1;
    if (3 < uVar26) {
      uVar28 = (ulonglong)((uVar26 >> 1) + 7) * 2 + 1;
      lVar16 = 0x3f;
      if (uVar28 != 0) {
        for (; uVar28 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      local_1d8 = (undefined4)lVar16;
      uVar24 = 1 << ((byte)lVar16 & 0x1f);
    }
    if (((int)uStack_a0 == 0) || ((int)uStack_a0 < (int)uVar24)) {
      uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar24);
      if (FStack_b0.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&FStack_b0.SecondaryData,0,0,4);
      }
      if (uVar24 != 0) {
        uVar26 = uVar24;
        if (uVar24 < 2) {
          if (FStack_b0.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            uVar26 = 0;
            goto LAB_14233fa38;
          }
        }
        else {
LAB_14233fa38:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&FStack_b0.SecondaryData,0,uVar26,4);
        }
        if (0 < (int)uVar24) {
          uVar29 = (ulonglong)uVar24;
          uVar28 = uVar32;
          do {
            FVar18 = (ForElementType<FSetElementId>)&FStack_b0;
            if (FStack_b0.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar18 = FStack_b0.SecondaryData;
            }
            uVar14 = uVar28 & (longlong)(int)uVar24 - 1U;
            uVar28 = uVar28 + 1;
            *(undefined4 *)((longlong)FVar18 + uVar14 * 4) = 0xffffffff;
            uVar29 = uVar29 - 1;
          } while (uVar29 != 0);
        }
      }
      if ((int)uStack_a0 != 0) {
        pTStack_200 = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
        local_208 = 0;
        uStack_204 = 1;
        uStack_1f4 = 0;
        uStack_1f0 = 0;
        uVar28 = uVar32;
        if ((uint)uStack_c0 != 0) {
          FVar19 = (ForElementType<unsigned_int>)((longlong)local_e8 + 0x10);
          if (local_c8 != (ForElementType<unsigned_int>)0x0) {
            FVar19 = local_c8;
          }
          uVar26 = *(uint *)FVar19;
          uVar29 = uVar32;
          while (uVar26 == 0) {
            uStack_1f0 = (int)uVar29 + 0x20;
            uVar29 = (ulonglong)uStack_1f0;
            iVar23 = (int)uVar28;
            local_208 = iVar23 + 1;
            uVar28 = (ulonglong)local_208;
            if ((int)(((uint)uStack_c0 - 1) + ((int)((uint)uStack_c0 - 1) >> 0x1f & 0x1fU)) >> 5 <
                (int)local_208) goto LAB_14233fb52;
            uVar26 = ((uint *)((longlong)FVar19 + 4))[iVar23];
          }
          uStack_204 = -uVar26 & uVar26;
          uVar28 = (ulonglong)uStack_204 * 2 + 1;
          lVar16 = 0x3f;
          if (uVar28 != 0) {
            for (; uVar28 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          local_1d4 = (int)lVar16;
          uStack_1f4 = (uStack_1f0 - 1) + local_1d4;
          uVar28 = (ulonglong)uStack_1f4;
          if ((int)(uint)uStack_c0 < (int)uStack_1f4) {
LAB_14233fb52:
            uVar28 = uStack_c0 & 0xffffffff;
            uStack_1f4 = (uint)uStack_c0;
          }
        }
        local_1f8 = 0xffffffff;
        local_1d0.Value = (TTuple<FMinimalName,FPackageObjectIndex> *)local_e8;
        local_1c0._padding_ = CONCAT44(uStack_204,local_208);
        local_1c0.CurrentBitIndex = uStack_1f4;
        local_1c0.UnvisitedBitMask = 0xffffffff;
        local_1c0._28_4_ = uStack_1ec;
        local_1c0.BaseBitIndex = uStack_1f0;
        local_1c0.Array = pTStack_200;
        if ((int)uVar28 < (int)(uint)uStack_c0) {
          do {
            lVar16 = *(longlong *)local_1d0.Value;
            lVar31 = (longlong)(int)uVar28 * 0x20;
            uVar26 = (int)uStack_a0 - 1U & *(uint *)(lVar31 + lVar16);
            *(uint *)(lVar31 + 0x1c + lVar16) = uVar26;
            FVar18 = (ForElementType<FSetElementId>)&FStack_b0;
            if (FStack_b0.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar18 = FStack_b0.SecondaryData;
            }
            uVar29 = (longlong)(int)uStack_a0 - 1U & (longlong)(int)uVar26;
            *(undefined4 *)(lVar31 + 0x18 + lVar16) = *(undefined4 *)((longlong)FVar18 + uVar29 * 4)
            ;
            *(int *)((longlong)FVar18 + uVar29 * 4) = (int)uVar28;
            local_1c0.UnvisitedBitMask = local_1c0.UnvisitedBitMask & ~local_1c0._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1c0);
            uVar28 = (ulonglong)(uint)local_1c0.CurrentBitIndex;
          } while (local_1c0.CurrentBitIndex < (local_1c0.Array)->NumBits);
        }
      }
    }
  }
  uVar28 = uVar32;
  uVar29 = uVar32;
  if (0 < (int)uVar25) {
    do {
      if (((int)local_f8 <= (int)uVar29) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar11)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar19 = (ForElementType<unsigned_int>)&local_110;
      if (local_110.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar19 = local_110.SecondaryData;
      }
      if ((*(uint *)((longlong)FVar19 + (uVar29 >> 5) * 4) & uVar22) == 0) {
        local_140 = *(longlong *)&this->Objects + uVar28;
        local_138 = local_140 + 8;
        TSet<TTuple<FPackageObjectIndex,TTuple<FMinimalName,FPackageObjectIndex>_>,TDefaultMapHashableKeyFuncs<FPackageObjectIndex,TTuple<FMinimalName,FPackageObjectIndex>,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<FPackageObjectIndex_const_&,TTuple<FMinimalName,FPackageObjectIndex>_const_&>_>
                  ((TSet<TTuple<FPackageObjectIndex,TTuple<FMinimalName,FPackageObjectIndex>_>,TDefaultMapHashableKeyFuncs<FPackageObjectIndex,TTuple<FMinimalName,FPackageObjectIndex>,0>,FDefaultSetAllocator>
                    *)local_e8,&local_1d0,(bool *)&local_140);
      }
      uVar26 = (int)uVar29 + 1;
      uVar22 = uVar22 << 1 | (uint)((int)uVar22 < 0);
      uVar28 = uVar28 + 0x20;
      uVar29 = (ulonglong)uVar26;
    } while ((int)uVar26 < (int)uVar25);
  }
  if ((local_e8._8_4_ - local_b8._4_4_ != local_228) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("RemainingObjects.Num() == NumRemaining",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                          ,0x193b,L""), bVar11)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar28 = uStack_a0;
  pFVar3 = *(FScriptContainerElement **)&this->Objects;
  uVar13 = *(undefined8 *)&(this->Objects).field_0x8;
  uVar4._0_1_ = (this->Objects).field_0x10;
  uVar4._1_1_ = (this->Objects).field_0x11;
  uVar4._2_1_ = (this->Objects).field_0x12;
  uVar4._3_1_ = (this->Objects).field_0x13;
  uVar4._4_1_ = (this->Objects).field_0x14;
  uVar4._5_1_ = (this->Objects).field_0x15;
  uVar4._6_1_ = (this->Objects).field_0x16;
  uVar4._7_1_ = (this->Objects).field_0x17;
  uVar5._0_1_ = (this->Objects).field_0x18;
  uVar5._1_1_ = (this->Objects).field_0x19;
  uVar5._2_1_ = (this->Objects).field_0x1a;
  uVar5._3_1_ = (this->Objects).field_0x1b;
  uVar5._4_1_ = (this->Objects).field_0x1c;
  uVar5._5_1_ = (this->Objects).field_0x1d;
  uVar5._6_1_ = (this->Objects).field_0x1e;
  uVar5._7_1_ = (this->Objects).field_0x1f;
  FVar19 = *(ForElementType<unsigned_int> *)&(this->Objects).field_0x20;
  uVar6._0_4_ = *(int *)&(this->Objects).field_0x28;
  uVar6._4_4_ = *(int *)&(this->Objects).field_0x2c;
  uVar7._0_4_ = *(int *)&(this->Objects).field_0x30;
  uVar7._4_4_ = *(int *)&(this->Objects).field_0x34;
  uVar8._0_1_ = (this->Objects).field_0x38;
  uVar8._1_1_ = (this->Objects).field_0x39;
  uVar8._2_1_ = (this->Objects).field_0x3a;
  uVar8._3_1_ = (this->Objects).field_0x3b;
  uVar8._4_4_ = *(int *)&(this->Objects).field_0x3c;
  FVar18 = *(ForElementType<FSetElementId> *)&(this->Objects).field_0x40;
  uStack_a0 = *(ulonglong *)&(this->Objects).field_0x48;
  *(undefined8 *)&this->Objects = local_e8._0_8_;
  *(undefined8 *)&(this->Objects).field_0x8 = local_e8._8_8_;
  *(undefined8 *)&(this->Objects).field_0x10 = local_e8._16_8_;
  (this->Objects).field_0x18 = auStack_d0[0];
  (this->Objects).field_0x19 = auStack_d0[1];
  (this->Objects).field_0x1a = auStack_d0[2];
  (this->Objects).field_0x1b = auStack_d0[3];
  (this->Objects).field_0x1c = auStack_d0[4];
  (this->Objects).field_0x1d = auStack_d0[5];
  (this->Objects).field_0x1e = auStack_d0[6];
  (this->Objects).field_0x1f = auStack_d0[7];
  uStack_a0 = uStack_a0 & 0xffffffff00000000;
  *(ForElementType<unsigned_int> *)&(this->Objects).field_0x20 = local_c8;
  *(ulonglong *)&(this->Objects).field_0x28 = uStack_c0;
  *(int *)&(this->Objects).field_0x30 = (int)local_b8;
  *(int *)&(this->Objects).field_0x34 = local_b8._4_4_;
  (this->Objects).field_0x38 = FStack_b0.InlineData[0];
  (this->Objects).field_0x39 = FStack_b0.InlineData[1];
  (this->Objects).field_0x3a = FStack_b0.InlineData[2];
  (this->Objects).field_0x3b = FStack_b0.InlineData[3];
  *(int *)&(this->Objects).field_0x3c = FStack_b0._padding_;
  *(ForElementType<FSetElementId> *)&(this->Objects).field_0x40 = FStack_b0.SecondaryData;
  *(ulonglong *)&(this->Objects).field_0x48 = uVar28;
  local_e8._0_8_ = pFVar3;
  local_e8._8_8_ = uVar13;
  local_e8._16_8_ = uVar4;
  auStack_d0 = (uchar  [8])uVar5;
  local_c8 = FVar19;
  uStack_c0 = uVar6;
  local_b8 = uVar7;
  FStack_b0._0_8_ = uVar8;
  FStack_b0.SecondaryData = FVar18;
  if (FVar18 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar18);
  }
  TSparseArray<TSparseSetElement<TTuple<FPackageObjectIndex,TTuple<FMinimalName,FPackageObjectIndex>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FPackageObjectIndex,TTuple<FMinimalName,FPackageObjectIndex>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FPackageObjectIndex,TTuple<FMinimalName,FPackageObjectIndex>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_e8);
LAB_14233fd5e:
  if (4 < (byte)LogStreaming._0_1_) {
    uVar26 = *(uint *)&(this->Objects).field_0x48;
    if (1 < uVar26) {
      uVar32 = (longlong)(int)uVar26 << 2;
    }
    local_238 = (double)((float)((longlong)*(int *)&(this->Objects).field_0xc * 0x20 +
                                ((*(int *)&(this->Objects).field_0x2c + 0x1fU >> 5) << 2) + uVar32)
                        * __real_3a800000);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
  }
  if (local_78[0] != (code *)0x0) {
    plVar17 = local_68;
    if (local_50 != (longlong *)0x0) {
      plVar17 = local_50;
    }
    (**(code **)(*plVar17 + 0x10))();
  }
  if (local_98.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_98.SecondaryData);
  }
  if (local_110.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_110.SecondaryData);
  }
  if (bVar33) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

