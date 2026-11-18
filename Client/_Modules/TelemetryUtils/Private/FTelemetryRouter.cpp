// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TelemetryUtils
// Functions: 9

// FTelemetryRouter @ 142a38b10

FTelemetryRouter * __thiscall FTelemetryRouter::FTelemetryRouter(FTelemetryRouter *this)

{
  (this->SinkLock).Mutex.Mutex.Ptr = (void *)0x0;
  *(undefined8 *)&this->KeyToSinks = 0;
  *(undefined8 *)&(this->KeyToSinks).field_0x8 = 0;
  *(undefined8 *)&(this->KeyToSinks).field_0x20 = 0;
  *(undefined4 *)&(this->KeyToSinks).field_0x28 = 0;
  *(undefined4 *)&(this->KeyToSinks).field_0x2c = 0x80;
  *(undefined4 *)&(this->KeyToSinks).field_0x34 = 0;
  *(undefined4 *)&(this->KeyToSinks).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->KeyToSinks).field_0x40 = 0;
  *(undefined4 *)&(this->KeyToSinks).field_0x48 = 0;
  return this;
}

// ~FTelemetryRouter @ 142a38dc0

void __thiscall FTelemetryRouter::~FTelemetryRouter(FTelemetryRouter *this)

{
  void *pvVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  
  *(undefined4 *)&(this->KeyToSinks).field_0x48 = 0;
  pvVar1 = *(void **)&(this->KeyToSinks).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FTelemetryRouter::FSinkSet>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FTelemetryRouter::FSinkSet>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,FTelemetryRouter::FSinkSet>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->KeyToSinks);
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)this);
  if (BVar3 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000142a38e05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)this);
    return;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("!IsLocked()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                     ,0x48,L"Destroying a lock that is still held!");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// CheckNotReentrant @ 142a38fa0

void __thiscall FTelemetryRouter::CheckNotReentrant(FTelemetryRouter *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0xe0c) != '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TelemetryRouterReentrancyGuard == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\TelemetryUtils\\Private\\TelemetryRouter.cpp"
                       ,0xe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Get @ 142a39200

FTelemetryRouter * __cdecl FTelemetryRouter::Get(void)

{
  FName FVar1;
  FName *pFVar2;
  FModuleManager *this;
  IModuleInterface *pIVar3;
  FName local_res8 [4];
  
  pFVar2 = ::FName::FName(local_res8,"TelemetryUtils");
  FVar1 = *pFVar2;
  this = FModuleManager::Get();
  pIVar3 = FModuleManager::LoadModuleChecked(this,FVar1);
  return (FTelemetryRouter *)pIVar3[1];
}

// ProvideTelemetryInternal @ 142a39280

void __thiscall
FTelemetryRouter::ProvideTelemetryInternal
          (FTelemetryRouter *this,FGuid *param_1,TMemoryView<void_const_> *param_2)

{
  undefined1 uVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  ulong64 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  TSet<TTuple<FDelegateHandle,TFunction<bool___cdecl(TMemoryView<void_const_>)>_>,TDefaultMapHashableKeyFuncs<FDelegateHandle,TFunction<bool___cdecl(TMemoryView<void_const_>)>,0>,FDefaultSetAllocator>
  *pTVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined1 *puVar13;
  ulong64 *local_res8;
  undefined1 auStack_c0 [16];
  uint uStack_b0;
  uint uStack_ac;
  longlong local_a8;
  TSet<TTuple<FDelegateHandle,TFunction<bool___cdecl(TMemoryView<void_const_>)>_>,TDefaultMapHashableKeyFuncs<FDelegateHandle,TFunction<bool___cdecl(TMemoryView<void_const_>)>,0>,FDefaultSetAllocator>
  *pTStack_a0;
  TSet<TTuple<FDelegateHandle,TFunction<bool___cdecl(TMemoryView<void_const_>)>_>,TDefaultMapHashableKeyFuncs<FDelegateHandle,TFunction<bool___cdecl(TMemoryView<void_const_>)>,0>,FDefaultSetAllocator>
  *local_98;
  undefined2 local_90;
  FGuid *local_88;
  ulong64 **local_80;
  TMemoryView<void_const_> *local_78;
  void *local_68;
  ulong64 uStack_60;
  undefined1 local_58 [32];
  longlong local_38;
  TSet<TTuple<FDelegateHandle,TFunction<bool___cdecl(TMemoryView<void_const_>)>_>,TDefaultMapHashableKeyFuncs<FDelegateHandle,TFunction<bool___cdecl(TMemoryView<void_const_>)>,0>,FDefaultSetAllocator>
  *pTStack_30;
  
  uVar11 = (ulonglong)_tls_index;
  if ((*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar11 * 8) + 0xe0c) != '\0')
     && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("TelemetryRouterReentrancyGuard == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\TelemetryUtils\\Private\\TelemetryRouter.cpp"
                            ,0xe,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  AcquireSRWLockShared((PSRWLOCK)this);
  puVar13 = (undefined1 *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar11 * 8) + 0xe0c);
  uVar1 = *puVar13;
  *puVar13 = 1;
  uVar6 = CityHash64((char *)param_1,0x10);
  iVar5 = TSet<TTuple<FGuid,FTelemetryRouter::FSinkSet>,TDefaultMapHashableKeyFuncs<FGuid,FTelemetryRouter::FSinkSet,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,FTelemetryRouter::FSinkSet>,TDefaultMapHashableKeyFuncs<FGuid,FTelemetryRouter::FSinkSet,0>,FDefaultSetAllocator>
                      *)&this->KeyToSinks,(uint)uVar6,param_1);
  if (iVar5 == -1) {
    local_res8 = (ulong64 *)0x0;
  }
  else {
    lVar9 = (longlong)iVar5 * 0x70 + *(longlong *)&this->KeyToSinks;
    local_res8 = (ulong64 *)(lVar9 + 0x10);
    if (lVar9 == 0) {
      local_res8 = (ulong64 *)0x0;
    }
    if (local_res8 != (ulong64 *)0x0) {
      if (*local_res8 != param_2->Size) {
        local_80 = &local_res8;
        local_88 = param_1;
        local_78 = param_2;
        bVar3 = `FTelemetryRouter::ProvideTelemetryInternal'::__l6::<lambda_1>::operator()
                          (&local_88);
        if (!bVar3) goto LAB_142a394c7;
      }
      pTVar10 = (TSet<TTuple<FDelegateHandle,TFunction<bool___cdecl(TMemoryView<void_const_>)>_>,TDefaultMapHashableKeyFuncs<FDelegateHandle,TFunction<bool___cdecl(TMemoryView<void_const_>)>,0>,FDefaultSetAllocator>
                 *)(local_res8 + 1);
      TSet<TTuple<FDelegateHandle,TFunction<bool___cdecl(TMemoryView<void_const_>)>_>,TDefaultMapHashableKeyFuncs<FDelegateHandle,TFunction<bool___cdecl(TMemoryView<void_const_>)>,0>,FDefaultSetAllocator>
      ::TIterator::TIterator((TIterator *)local_58,pTVar10);
      local_90 = 0;
      stack0xffffffffffffff48 = local_58._16_16_;
      auStack_c0._0_8_ = local_58._8_8_;
      local_a8 = local_38;
      pTStack_a0 = pTStack_30;
      uVar11 = local_58._24_8_ >> 0x20;
      local_98 = pTVar10;
      if (local_58._28_4_ < *(int *)(local_58._16_8_ + 0x18)) {
        do {
          local_68 = param_2->Data;
          uStack_60 = param_2->Size;
          lVar9 = (longlong)(int)uVar11 * 0x50 + *(longlong *)local_58._0_8_;
          UE::Core::Private::Function::CheckCallable(*(void **)(lVar9 + 0x10));
          pcVar2 = *(code **)(lVar9 + 0x10);
          plVar8 = (longlong *)(lVar9 + 0x20);
          if (*(longlong **)(lVar9 + 0x38) != (longlong *)0x0) {
            plVar8 = *(longlong **)(lVar9 + 0x38);
          }
          uVar7 = (**(code **)(*plVar8 + 8))();
          cVar4 = (*pcVar2)(uVar7,&local_68);
          if (cVar4 == '\0') {
            TSet<TTuple<FDelegateHandle,TFunction<bool___cdecl(TMemoryView<void_const_>)>_>,TDefaultMapHashableKeyFuncs<FDelegateHandle,TFunction<bool___cdecl(TMemoryView<void_const_>)>,0>,FDefaultSetAllocator>
            ::RemoveByIndex(pTStack_a0,(int)uVar11);
            local_90 = CONCAT11(local_90._1_1_,1);
          }
          uStack_b0 = uStack_b0 & ~auStack_c0._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_c0);
          uVar11 = (ulonglong)uStack_ac;
        } while ((int)uStack_ac < *(int *)(auStack_c0._8_8_ + 0x18));
        if (((char)local_90 != '\0') && (local_90._1_1_ != '\0')) {
          uVar12 = *(int *)&(local_98->Elements).field_0x8 -
                   *(int *)&(local_98->Elements).field_0x34;
          if (uVar12 < 4) {
            iVar5 = 1;
          }
          else {
            uVar11 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
            lVar9 = 0x3f;
            if (uVar11 != 0) {
              for (; uVar11 >> lVar9 == 0; lVar9 = lVar9 + -1) {
              }
            }
            iVar5 = 1 << ((byte)lVar9 & 0x1f);
          }
          if (((0 < (int)uVar12) && (local_98->HashSize < iVar5)) || (iVar5 < local_98->HashSize)) {
            local_98->HashSize = iVar5;
            TSet<TTuple<FDelegateHandle,TFunction<bool___cdecl(TMemoryView<void_const_>)>_>,TDefaultMapHashableKeyFuncs<FDelegateHandle,TFunction<bool___cdecl(TMemoryView<void_const_>)>,0>,FDefaultSetAllocator>
            ::Rehash(local_98);
          }
        }
      }
    }
  }
LAB_142a394c7:
  *puVar13 = uVar1;
  ReleaseSRWLockShared((PSRWLOCK)this);
  return;
}

// RegisterTelemetrySinkInternal @ 142a39500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FTelemetryRouter::RegisterTelemetrySinkInternal
          (FTelemetryRouter *this,FGuid *param_1,ulong64 param_2,FDelegateHandle param_3,
          TFunction<bool___cdecl(TMemoryView<void_const_>)> *param_4)

{
  undefined1 uVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  ulong64 uVar6;
  ulong64 *puVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  ulong64 local_res18;
  ulong64 local_res20;
  undefined1 auStackY_138 [32];
  ulong64 *local_108;
  undefined1 local_100 [8];
  FSinkSet *local_f8;
  ulong64 *local_f0;
  ulong64 *local_e8;
  TFunction<bool___cdecl(TMemoryView<void_const_>)> *local_e0;
  FGuid *local_d8;
  ulong64 **local_d0;
  ulong64 *local_c8;
  ulong64 local_b8;
  undefined1 local_b0 [32];
  void *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  void *local_70;
  undefined4 local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_138;
  uVar9 = (ulonglong)_tls_index;
  local_res18 = param_2;
  local_res20 = param_3.ID;
  if ((*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar9 * 8) + 0xe0c) != '\0') &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TelemetryRouterReentrancyGuard == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\TelemetryUtils\\Private\\TelemetryRouter.cpp"
                         ,0xe,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)this);
  puVar10 = (undefined1 *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar9 * 8) + 0xe0c);
  uVar1 = *puVar10;
  *puVar10 = 1;
  uVar6 = CityHash64((char *)param_1,0x10);
  iVar5 = TSet<TTuple<FGuid,FTelemetryRouter::FSinkSet>,TDefaultMapHashableKeyFuncs<FGuid,FTelemetryRouter::FSinkSet,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,FTelemetryRouter::FSinkSet>,TDefaultMapHashableKeyFuncs<FGuid,FTelemetryRouter::FSinkSet,0>,FDefaultSetAllocator>
                      *)&this->KeyToSinks,(uint)uVar6,param_1);
  puVar7 = (ulong64 *)0x0;
  if (iVar5 != -1) {
    puVar7 = (ulong64 *)((longlong)iVar5 * 0x70 + *(longlong *)&this->KeyToSinks);
  }
  local_108 = puVar7 + 2;
  if (puVar7 == (ulong64 *)0x0) {
    local_108 = (ulong64 *)0x0;
  }
  if (local_108 == (ulong64 *)0x0) {
    local_b8 = local_res18;
    local_f0 = &local_b8;
    local_b0._0_8_ = (FScriptContainerElement *)0x0;
    local_b0._8_8_ = 0;
    local_90 = (void *)0x0;
    local_88 = ___xmm_00000000ffffffff0000008000000000;
    uStack_80 = _UNK_150631d98;
    local_70 = (void *)0x0;
    local_68 = 0;
    local_f8 = (FSinkSet *)param_1;
    TSet<TTuple<FGuid,FTelemetryRouter::FSinkSet>,TDefaultMapHashableKeyFuncs<FGuid,FTelemetryRouter::FSinkSet,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGuid_const_&,FTelemetryRouter::FSinkSet_&&>_>
              ((TSet<TTuple<FGuid,FTelemetryRouter::FSinkSet>,TDefaultMapHashableKeyFuncs<FGuid,FTelemetryRouter::FSinkSet,0>,FDefaultSetAllocator>
                *)&this->KeyToSinks,
               (TPairInitializer<FGuid_const_&,FTelemetryRouter::FSinkSet_&&> *)local_100,
               (bool *)&local_f8);
    local_68 = 0;
    local_108 = (ulong64 *)
                ((longlong)(int)local_100._0_4_ * 0x70 + 0x10 + *(longlong *)&this->KeyToSinks);
    if (local_70 != (void *)0x0) {
      FMemory::Free(local_70);
    }
    TSparseArray<TSparseSetElement<TTuple<FDelegateHandle,TFunction<bool___cdecl(TMemoryView<void_const_>)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FDelegateHandle,TFunction<bool___cdecl(TMemoryView<void_const_>)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_b0,0,local_b0._8_4_);
    iVar5 = SUB84(local_b0._8_8_,4);
    local_b0._8_8_ = local_b0._8_8_ & 0xffffffff00000000;
    if (iVar5 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,0x10,0,(ForAnyElementType *)local_b0,0,(int *)(local_b0 + 0xc));
    }
    uVar3 = local_88._4_4_;
    uStack_80 = 0xffffffff;
    local_88 = (ulonglong)local_88._4_4_ << 0x20;
    if (0x80 < uVar3) {
      local_88 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_b0 + 0x10),0);
    }
    if (local_90 != (void *)0x0) {
      FMemory::Free(local_90);
    }
    if ((FScriptContainerElement *)local_b0._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_b0._0_8_);
    }
  }
  if (*local_108 != local_res18) {
    local_d0 = &local_108;
    local_c8 = &local_res18;
    local_d8 = param_1;
    bVar4 = `FTelemetryRouter::RegisterTelemetrySinkInternal'::__l6::<lambda_1>::operator()
                      (&local_d8);
    if (!bVar4) goto LAB_142a39744;
  }
  local_e8 = &local_res20;
  local_e0 = param_4;
  TSet<TTuple<FDelegateHandle,TFunction<bool___cdecl(TMemoryView<void_const_>)>_>,TDefaultMapHashableKeyFuncs<FDelegateHandle,TFunction<bool___cdecl(TMemoryView<void_const_>)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FDelegateHandle_const_&,TFunction<bool___cdecl(TMemoryView<void_const_>)>_&&>_>
            ((TSet<TTuple<FDelegateHandle,TFunction<bool___cdecl(TMemoryView<void_const_>)>_>,TDefaultMapHashableKeyFuncs<FDelegateHandle,TFunction<bool___cdecl(TMemoryView<void_const_>)>,0>,FDefaultSetAllocator>
              *)(local_108 + 1),
             (TPairInitializer<FDelegateHandle_const_&,TFunction<bool___cdecl(TMemoryView<void_const_>)>_&&>
              *)(local_100 + 4),(bool *)&local_e8);
LAB_142a39744:
  *puVar10 = uVar1;
  ReleaseSRWLockExclusive((PSRWLOCK)this);
  if (*(longlong *)param_4 != 0) {
    plVar8 = (longlong *)&param_4->field_0x10;
    if (*(longlong **)&param_4->field_0x28 != (longlong *)0x0) {
      plVar8 = *(longlong **)&param_4->field_0x28;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  return;
}

// UnregisterTelemetrySinkInternal @ 142a3a0d0

void __thiscall
FTelemetryRouter::UnregisterTelemetrySinkInternal
          (FTelemetryRouter *this,FGuid *param_1,FDelegateHandle param_2)

{
  undefined1 uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ulong64 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 *puVar9;
  
  uVar6 = (ulonglong)_tls_index;
  if ((*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar6 * 8) + 0xe0c) != '\0') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TelemetryRouterReentrancyGuard == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\TelemetryUtils\\Private\\TelemetryRouter.cpp"
                         ,0xe,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)this);
  puVar9 = (undefined1 *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar6 * 8) + 0xe0c);
  uVar1 = *puVar9;
  *puVar9 = 1;
  uVar5 = CityHash64((char *)param_1,0x10);
  iVar4 = TSet<TTuple<FGuid,FTelemetryRouter::FSinkSet>,TDefaultMapHashableKeyFuncs<FGuid,FTelemetryRouter::FSinkSet,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,FTelemetryRouter::FSinkSet>,TDefaultMapHashableKeyFuncs<FGuid,FTelemetryRouter::FSinkSet,0>,FDefaultSetAllocator>
                      *)&this->KeyToSinks,(uint)uVar5,param_1);
  if (iVar4 != -1) {
    lVar7 = (longlong)iVar4 * 0x70 + *(longlong *)&this->KeyToSinks;
    lVar8 = lVar7 + 0x10;
    if (lVar7 == 0) {
      lVar8 = 0;
    }
    if ((lVar8 != 0) && (*(int *)(lVar8 + 0x10) != *(int *)(lVar8 + 0x3c))) {
      lVar7 = *(longlong *)(lVar8 + 0x48);
      if (*(longlong *)(lVar8 + 0x48) == 0) {
        lVar7 = lVar8 + 0x40;
      }
      iVar4 = *(int *)(lVar7 + ((longlong)((int)(param_2.ID >> 0x20) * 0x17 + (int)param_2.ID) &
                               (longlong)*(int *)(lVar8 + 0x50) - 1U) * 4);
      if (iVar4 != -1) {
        do {
          if (*(ulong64 *)(*(longlong *)(lVar8 + 8) + (longlong)iVar4 * 0x50) == param_2.ID) {
            TSet<TTuple<FDelegateHandle,TFunction<bool___cdecl(TMemoryView<void_const_>)>_>,TDefaultMapHashableKeyFuncs<FDelegateHandle,TFunction<bool___cdecl(TMemoryView<void_const_>)>,0>,FDefaultSetAllocator>
            ::RemoveByIndex((TSet<TTuple<FDelegateHandle,TFunction<bool___cdecl(TMemoryView<void_const_>)>_>,TDefaultMapHashableKeyFuncs<FDelegateHandle,TFunction<bool___cdecl(TMemoryView<void_const_>)>,0>,FDefaultSetAllocator>
                             *)(lVar8 + 8),iVar4);
            break;
          }
          iVar4 = *(int *)(*(longlong *)(lVar8 + 8) + 0x40 + (longlong)iVar4 * 0x50);
        } while (iVar4 != -1);
      }
    }
  }
  *puVar9 = uVar1;
  ReleaseSRWLockExclusive((PSRWLOCK)this);
  return;
}

// operator() @ 150495590

bool __thiscall
`FTelemetryRouter::ProvideTelemetryInternal'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5986095279932178474>);
  if (bVar2) {
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    FGuid::AppendString(*(FGuid **)this,&local_18,Digits);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5986095279932178474>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150495631;
    }
  }
  bVar2 = false;
LAB_150495631:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150495670

bool __thiscall
`FTelemetryRouter::RegisterTelemetrySinkInternal'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5986095279932178503>);
  if (bVar2) {
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    FGuid::AppendString(*(FGuid **)this,&local_18,Digits);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5986095279932178503>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150495710;
    }
  }
  bVar2 = false;
LAB_150495710:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

