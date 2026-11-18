// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 16

// FCookProfilerProvider @ 14d420df0

FCookProfilerProvider * __thiscall
TraceServices::FCookProfilerProvider::FCookProfilerProvider
          (FCookProfilerProvider *this,IAnalysisSession *param_1)

{
  this->_padding_ = (longlong)&_vftable__for__TraceServices__ICookProfilerProvider__;
  this->_padding_ = (longlong)&_vftable__for__TraceServices__IEditableCookProfilerProvider__;
  (this->Lock).RWLock.Mutex.Mutex.Ptr = (void *)0x0;
  *(undefined8 *)&this->PackageIdToIndexMap = 0;
  *(undefined8 *)&(this->PackageIdToIndexMap).field_0x8 = 0;
  *(undefined8 *)&(this->PackageIdToIndexMap).field_0x20 = 0;
  this->Session = param_1;
  *(undefined4 *)&(this->PackageIdToIndexMap).field_0x28 = 0;
  *(undefined4 *)&(this->PackageIdToIndexMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->PackageIdToIndexMap).field_0x34 = 0;
  *(undefined4 *)&(this->PackageIdToIndexMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PackageIdToIndexMap).field_0x40 = 0;
  *(undefined4 *)&(this->PackageIdToIndexMap).field_0x48 = 0;
  (this->Packages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Packages).ArrayNum = 0;
  (this->Packages).ArrayMax = 0;
  *(undefined8 *)&this->ScopeEntries = 0;
  *(undefined8 *)&(this->ScopeEntries).field_0x8 = 0;
  *(undefined8 *)&(this->ScopeEntries).field_0x20 = 0;
  *(undefined4 *)&(this->ScopeEntries).field_0x28 = 0;
  *(undefined4 *)&(this->ScopeEntries).field_0x2c = 0x80;
  *(undefined4 *)&(this->ScopeEntries).field_0x34 = 0;
  *(undefined4 *)&(this->ScopeEntries).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ScopeEntries).field_0x40 = 0;
  *(undefined4 *)&(this->ScopeEntries).field_0x48 = 0;
  return this;
}

// PackageStackEntry @ 14d426e90

PackageStackEntry * __thiscall
`TraceServices::FCookProfilerProvider::CreateAggregation'::__l2::PackageStackEntry::
PackageStackEntry(void *this)

{
  *(undefined8 *)((longlong)this + 0x18) = 0;
  return this;
}

// ~FCookProfilerProvider @ 14d42b300

void __thiscall
TraceServices::FCookProfilerProvider::~FCookProfilerProvider(FCookProfilerProvider *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  BOOLEAN BVar4;
  bool bVar5;
  
  this->_padding_ = (longlong)&_vftable__for__TraceServices__ICookProfilerProvider__;
  this->_padding_ = (longlong)&_vftable__for__TraceServices__IEditableCookProfilerProvider__;
  *(undefined4 *)&(this->ScopeEntries).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ScopeEntries).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::TPagedArray<TraceServices::FPackageScope,TraceServices::TPagedArrayPage<TraceServices::FPackageScope>_>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::TPagedArray<TraceServices::FPackageScope,TraceServices::TPagedArrayPage<TraceServices::FPackageScope>_>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::TPagedArray<TraceServices::FPackageScope,TraceServices::TPagedArrayPage<TraceServices::FPackageScope>_>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ScopeEntries);
  pFVar2 = (this->Packages).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->PackageIdToIndexMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PackageIdToIndexMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PackageIdToIndexMap);
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->Lock);
  if (BVar4 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014d42b391. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&this->Lock);
    return;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("!IsLocked()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                     ,0x48,L"Destroying a lock that is still held!");
  if (bVar5) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  return;
}

// AddScopeEntry @ 14d43c860

void __thiscall
TraceServices::FCookProfilerProvider::AddScopeEntry
          (FCookProfilerProvider *this,uint param_1,ulong64 param_2,double param_3,
          EPackageEventStatType param_4,bool param_5)

{
  long64 *this_00;
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  longlong *plVar8;
  void *pvVar9;
  TPairInitializer<unsigned_int_const_&,TraceServices::TPagedArray<TraceServices::FPackageScope,TraceServices::TPagedArrayPage<TraceServices::FPackageScope>_>_*_&&>
  local_res8;
  longlong *local_res18 [2];
  TPagedArray<TraceServices::FPackageScope,TraceServices::TPagedArrayPage<TraceServices::FPackageScope>_>
  ***local_48;
  longlong **local_40;
  
  (**(code **)(this->_padding_ + 0x18))();
  local_res8.Value._0_4_ = param_1;
  (**(code **)(this->_padding_ + 0x18))(this);
  this_00 = &(this->Packages).ArrayMax;
  plVar8 = (longlong *)0x0;
  if (*(int *)&this->ScopeEntries != *(int *)&(this->ScopeEntries).field_0x2c) {
    puVar7 = *(undefined1 **)&(this->ScopeEntries).field_0x38;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->ScopeEntries).field_0x30;
    }
    iVar3 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->ScopeEntries).field_0x40 - 1U &
                              (uint)local_res8.Value) * 4);
    if (iVar3 != -1) {
      do {
        lVar5 = *this_00 + (longlong)iVar3 * 0x18;
        if (*(uint *)(*this_00 + (longlong)iVar3 * 0x18) == (uint)local_res8.Value) {
          plVar4 = (longlong *)(lVar5 + 8);
          if (lVar5 == 0) {
            plVar4 = plVar8;
          }
          if (plVar4 != (longlong *)0x0) goto LAB_14d43c989;
          break;
        }
        iVar3 = *(int *)(lVar5 + 0x10);
      } while (iVar3 != -1);
    }
  }
  plVar4 = ::operator_new(0x38);
  if (plVar4 != (longlong *)0x0) {
    lVar5 = (**(code **)(*(longlong *)(this->Lock).RWLock.Mutex.Mutex.Ptr + 0xb8))();
    *plVar4 = lVar5;
    plVar4[1] = 0;
    plVar4[2] = 0;
    plVar4[3] = 0;
    plVar4[4] = 0;
    plVar4[5] = 0x1000;
    plVar4[6] = 0;
    plVar8 = plVar4;
  }
  local_48 = &local_res8.Value;
  local_40 = local_res18;
  local_res18[0] = plVar8;
  TSet<TTuple<unsigned_int,TraceServices::TPagedArray<TraceServices::FPackageScope,TraceServices::TPagedArrayPage<TraceServices::FPackageScope>_>_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::TPagedArray<TraceServices::FPackageScope,TraceServices::TPagedArrayPage<TraceServices::FPackageScope>_>_*,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<unsigned_int_const_&,TraceServices::TPagedArray<TraceServices::FPackageScope,TraceServices::TPagedArrayPage<TraceServices::FPackageScope>_>_*_&&>_>
            ((TSet<TTuple<unsigned_int,TraceServices::TPagedArray<TraceServices::FPackageScope,TraceServices::TPagedArrayPage<TraceServices::FPackageScope>_>_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::TPagedArray<TraceServices::FPackageScope,TraceServices::TPagedArrayPage<TraceServices::FPackageScope>_>_*,0>,FDefaultSetAllocator>
              *)this_00,&local_res8,(bool *)&local_48);
  plVar4 = (longlong *)(*this_00 + ((longlong)(int)local_res8.Key * 3 + 1) * 8);
LAB_14d43c989:
  puVar1 = (undefined8 *)*plVar4;
  if ((puVar1[4] == 0) || (*(longlong *)(puVar1[4] + 8) == puVar1[5])) {
    iVar3 = *(int *)(puVar1 + 2);
    if (iVar3 == *(int *)((longlong)puVar1 + 0x14)) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)(puVar1 + 1),(int *)((longlong)puVar1 + 0x14));
    }
    *(int *)(puVar1 + 2) = iVar3 + 1;
    pvVar9 = (void *)((longlong)iVar3 * 0x10 + puVar1[1]);
    DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FPackageScope>,int>
              (pvVar9,1);
    puVar1[3] = puVar1[1];
    puVar1[4] = pvVar9;
    uVar6 = (**(code **)(*(longlong *)*puVar1 + 8))((longlong *)*puVar1,puVar1[5] * 0x18);
    *(undefined8 *)puVar1[4] = uVar6;
  }
  puVar1[6] = puVar1[6] + 1;
  lVar5 = ((longlong *)puVar1[4])[1];
  lVar2 = *(longlong *)puVar1[4];
  *(EPackageEventStatType *)(lVar2 + 0x10 + lVar5 * 0x18) = param_4;
  *(double *)(lVar2 + 8 + lVar5 * 0x18) = param_3;
  *(bool *)(lVar2 + 0x11 + lVar5 * 0x18) = param_5;
  *(ulong64 *)(lVar2 + lVar5 * 0x18) = param_2;
  *(longlong *)(puVar1[4] + 8) = *(longlong *)(puVar1[4] + 8) + 1;
  return;
}

// BeginEdit @ 14d4419d0

void __thiscall TraceServices::FCookProfilerProvider::BeginEdit(FCookProfilerProvider *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  FProviderLock::BeginWrite((FProviderLock *)&this->_padding_,(FThreadLocalState *)(lVar1 + 0x9bc0))
  ;
  return;
}

// BeginRead @ 14d441fe0

void __thiscall TraceServices::FCookProfilerProvider::BeginRead(FCookProfilerProvider *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  FProviderLock::BeginRead(&this->Lock,(FThreadLocalState *)(lVar1 + 0x9bc0));
  return;
}

// CreateAggregation @ 14d445a50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TraceServices::FCookProfilerProvider::CreateAggregation
          (FCookProfilerProvider *this,
          TArray<TraceServices::FPackageData,TSizedDefaultAllocator<64>_> *param_1)

{
  long64 *plVar1;
  EPackageEventStatType EVar2;
  FScriptContainerElement *pFVar3;
  TPagedArray<TraceServices::FPackageScope,TraceServices::TPagedArrayPage<TraceServices::FPackageScope>_>
  *pTVar4;
  ulong64 uVar5;
  code *pcVar6;
  double dVar7;
  FPackageScope *pFVar8;
  TMap<unsigned_int,TraceServices::TPagedArray<TraceServices::FPackageScope,TraceServices::TPagedArrayPage<TraceServices::FPackageScope>_>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::TPagedArray<TraceServices::FPackageScope,TraceServices::TPagedArrayPage<TraceServices::FPackageScope>_>_*,0>_>
  *pTVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  uint *puVar15;
  int iVar16;
  double *pdVar17;
  uint uVar18;
  ulonglong uVar19;
  double *pdVar20;
  uint uVar21;
  double *pdVar22;
  undefined1 *puVar23;
  uint uVar24;
  ulonglong uVar26;
  TMap<unsigned_int,TraceServices::TPagedArray<TraceServices::FPackageScope,TraceServices::TPagedArrayPage<TraceServices::FPackageScope>_>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::TPagedArray<TraceServices::FPackageScope,TraceServices::TPagedArrayPage<TraceServices::FPackageScope>_>_*,0>_>
  *pTVar27;
  EPackageEventStatType *pEVar28;
  ulong64 *puVar29;
  TBitArray<FDefaultBitArrayAllocator> *pTVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined1 auStackY_11c8 [32];
  undefined1 local_1188 [4];
  uint local_1184;
  TPagedArrayIterator<TraceServices::FPackageScope,TraceServices::TPagedArrayPage<TraceServices::FPackageScope>_>
  local_1180;
  double *local_1150;
  TArray<TraceServices::FPackageData,TSizedDefaultAllocator<64>_> *local_1148;
  int local_1140;
  int local_113c;
  FCookProfilerProvider *local_1138;
  TPagedArray<TraceServices::FPackageScope,TraceServices::TPagedArrayPage<TraceServices::FPackageScope>_>
  *local_1130;
  TBitArray<FDefaultBitArrayAllocator> *local_1128;
  TMap<unsigned_int,TraceServices::TPagedArray<TraceServices::FPackageScope,TraceServices::TPagedArrayPage<TraceServices::FPackageScope>_>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::TPagedArray<TraceServices::FPackageScope,TraceServices::TPagedArrayPage<TraceServices::FPackageScope>_>_*,0>_>
  *local_1120;
  TMap<unsigned_int,TraceServices::TPagedArray<TraceServices::FPackageScope,TraceServices::TPagedArrayPage<TraceServices::FPackageScope>_>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::TPagedArray<TraceServices::FPackageScope,TraceServices::TPagedArrayPage<TraceServices::FPackageScope>_>_*,0>_>
  *local_1118;
  undefined1 auStack_1110 [20];
  uint uStack_10fc;
  ulong64 local_10f8;
  FPackageScope *pFStack_10f0;
  undefined8 local_10e8;
  undefined8 uStack_10e0;
  undefined8 uStack_10d8;
  undefined8 uStack_10d0;
  TPagedArrayIterator<TraceServices::FPackageScope,TraceServices::TPagedArrayPage<TraceServices::FPackageScope>_>
  local_10c8;
  undefined8 local_1080;
  double local_1078;
  EPackageEventStatType aEStack_1070 [8];
  ulong64 local_1068;
  double adStack_1060 [509];
  ulonglong local_78;
  ulonglong uVar25;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_11c8;
  lVar14 = 0x80;
  pdVar22 = adStack_1060;
  uVar26 = 0;
  uVar21 = 0;
  do {
    *pdVar22 = 0.0;
    pdVar22 = pdVar22 + 4;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  uVar31 = 0;
  uVar32 = 0;
  local_1148 = param_1;
  local_1138 = this;
  if (param_1 != &this->Packages) {
    lVar14 = (this->Packages).ArrayNum;
    plVar1 = &param_1->ArrayMax;
    pFVar3 = (this->Packages).AllocatorInstance.Data;
    param_1->ArrayNum = lVar14;
    if ((lVar14 == 0) && (*plVar1 == 0)) {
      *plVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                (0x58,8,lVar14,*plVar1,&param_1->AllocatorInstance,lVar14,plVar1);
      if (lVar14 != 0) {
        memcpy((param_1->AllocatorInstance).Data,pFVar3,lVar14 * 0x58);
      }
    }
  }
  pTVar30 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->ScopeEntries).field_0x10;
  uVar18 = *(uint *)&(this->ScopeEntries).field_0x28;
  pTVar27 = &this->ScopeEntries;
  uVar11 = 1;
  uVar24 = 0;
  uVar12 = uVar24;
  if (uVar18 != 0) {
    puVar15 = *(uint **)&(this->ScopeEntries).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)pTVar30;
    }
    uVar12 = *puVar15;
    uVar19 = uVar26;
    uVar25 = uVar26;
    uVar24 = 0;
    uVar21 = 0;
    while (uVar12 == 0) {
      iVar16 = (int)uVar19;
      uVar24 = (int)uVar25 + 0x20;
      uVar25 = (ulonglong)uVar24;
      uVar21 = iVar16 + 1;
      uVar19 = (ulonglong)uVar21;
      uVar12 = uVar18;
      if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar21)
      goto LAB_14d445bcd;
      uVar12 = puVar15[(longlong)iVar16 + 1];
    }
    uVar11 = -uVar12 & uVar12;
    uVar19 = (ulonglong)uVar11 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_1140 = (int)lVar14;
    uVar12 = (uVar24 - 1) + local_1140;
    if ((int)uVar18 < (int)uVar12) {
      uVar12 = uVar18;
    }
  }
LAB_14d445bcd:
  uVar13 = *(uint *)&(this->ScopeEntries).field_0x28;
  local_1180.CurrentPageLastItem = (FPackageScope *)CONCAT44(uVar12,0xffffffff);
  uVar12 = uVar13 & 0xffffffe0;
  local_1180.CurrentPageIndex = CONCAT44(uVar11,uVar21);
  local_1180.CurrentItem =
       (FPackageScope *)
       CONCAT44(local_1180.CurrentItem._4_4_,
                *(int *)&(this->ScopeEntries).field_0x8 - *(int *)&(this->ScopeEntries).field_0x34);
  local_1180.CurrentItemIndex = CONCAT44(local_1080._4_4_,uVar24);
  auStack_1110._0_8_ = local_1180.CurrentPageIndex;
  iVar16 = (int)uVar13 >> 5;
  local_10f8 = local_1180.CurrentItemIndex;
  pFStack_10f0 = local_1180.CurrentItem;
  stack0xffffffffffffef00 = local_1180.CurrentPageLastItem;
  local_1184 = uVar13;
  local_1180.Outer =
       (TPagedArray<TraceServices::FPackageScope,TraceServices::TPagedArrayPage<TraceServices::FPackageScope>_>
        *)pTVar27;
  local_1180.CurrentPageFirstItem = (FPackageScope *)pTVar30;
  local_1128 = pTVar30;
  local_1120 = pTVar27;
  local_1118 = pTVar27;
  auStack_1110._8_8_ = pTVar30;
  if ((((int)uVar13 < 0) || ((int)uVar18 < (int)uVar13)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar21 = *(uint *)&(this->ScopeEntries).field_0x28;
  if (uVar13 != uVar21) {
    puVar23 = *(undefined1 **)&(this->ScopeEntries).field_0x20;
    if (puVar23 == (undefined1 *)0x0) {
      puVar23 = (undefined1 *)pTVar30;
    }
    uVar18 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar23 + (longlong)iVar16 * 4);
    while (uVar18 == 0) {
      lVar14 = (longlong)iVar16;
      uVar12 = uVar12 + 0x20;
      iVar16 = iVar16 + 1;
      uVar13 = uVar21;
      local_1184 = uVar21;
      if ((int)((uVar21 - 1) + ((int)(uVar21 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
      goto LAB_14d445cf1;
      uVar18 = *(uint *)(puVar23 + lVar14 * 4 + 4);
    }
    uVar19 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_113c = (int)lVar14;
    uVar13 = local_113c + -1 + uVar12;
    local_1184 = uVar13;
    if ((int)uVar21 < (int)uVar13) {
      uVar13 = uVar21;
      local_1184 = uVar21;
    }
  }
LAB_14d445cf1:
  do {
    pTVar9 = local_1118;
    if (*(int *)&local_1118->field_0x8 - *(int *)(&local_1118->field_0x30 + 4) != (int)pFStack_10f0)
    {
      local_1188[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::TPagedArray<TraceServices::FPackageScope,TraceServices::TPagedArrayPage<TraceServices::FPackageScope>_>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_1188);
    }
    if (((uStack_10fc == uVar13) &&
        ((TBitArray<FDefaultBitArrayAllocator> *)auStack_1110._8_8_ == pTVar30)) &&
       (pTVar9 == pTVar27)) {
      return;
    }
    pTVar4 = *(TPagedArray<TraceServices::FPackageScope,TraceServices::TPagedArrayPage<TraceServices::FPackageScope>_>
               **)(*(longlong *)&pTVar9->field_0x0 + 8 + (longlong)(int)uStack_10fc * 0x18);
    local_1130 = pTVar4;
    TPagedArrayIterator<TraceServices::FPackageScope,TraceServices::TPagedArrayPage<TraceServices::FPackageScope>_>
    ::
    TPagedArrayIterator<TraceServices::FPackageScope,TraceServices::TPagedArrayPage<TraceServices::FPackageScope>_>
              (&local_1180,pTVar4,0);
    TPagedArrayIterator<TraceServices::FPackageScope,TraceServices::TPagedArrayPage<TraceServices::FPackageScope>_>
    ::
    TPagedArrayIterator<TraceServices::FPackageScope,TraceServices::TPagedArrayPage<TraceServices::FPackageScope>_>
              (&local_10c8,pTVar4,pTVar4->TotalItemCount);
    if (local_1180.CurrentItemIndex != local_10c8.CurrentItemIndex) {
      pdVar17 = adStack_1060 + uVar26 * 4;
      pEVar28 = aEStack_1070 + uVar26 * 0x20;
      puVar29 = &local_1068 + uVar26 * 4;
      pdVar20 = &local_1078 + uVar26 * 4;
      pdVar22 = (double *)(&local_1080 + uVar26 * 4);
      do {
        pFVar8 = local_1180.CurrentItem;
        if ((local_1180.CurrentItem)->bIsEnterScope == false) {
          pdVar20 = pdVar20 + -4;
          pdVar22 = pdVar22 + -4;
          puVar29 = puVar29 + -4;
          pEVar28 = pEVar28 + -0x20;
          pdVar17 = pdVar17 + -4;
          uVar26 = uVar26 - 1;
          local_1150 = pdVar20;
          if (((longlong)uVar26 < 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("--Depth >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\CookProfilerProvider.cpp"
                                  ,0x87,L""), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if ((*puVar29 != pFVar8->PackageId) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Stack[Depth].InPackageId == CurrentScope.PackageId",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\CookProfilerProvider.cpp"
                                  ,0x88,L""), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if ((*pEVar28 != pFVar8->Type) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Stack[Depth].Type == CurrentScope.Type",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\CookProfilerProvider.cpp"
                                  ,0x89,L""), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar5 = *puVar29;
          *pdVar17 = (pFVar8->Timestamp - (double)CONCAT44(uVar32,uVar31)) + *pdVar17;
          dVar7 = pFVar8->Timestamp - *pdVar20;
          puVar15 = TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
                    ::Find((TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
                            *)&local_1138->PackageIdToIndexMap,uVar5);
          if (puVar15 != (uint *)0x0) {
            uVar19 = (ulonglong)*puVar15;
            if ((local_1148->ArrayNum <= (longlong)uVar19) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            EVar2 = *pEVar28;
            pFVar3 = (local_1148->AllocatorInstance).Data;
            pdVar20 = local_1150;
            if (EVar2 == LoadPackage) {
              *(double *)(pFVar3 + uVar19 * 0x58 + 0x10) =
                   dVar7 + *(double *)(pFVar3 + uVar19 * 0x58 + 0x10);
              *(double *)(pFVar3 + uVar19 * 0x58 + 0x18) =
                   *(double *)(pFVar3 + uVar19 * 0x58 + 0x18) + *pdVar17;
            }
            else if (EVar2 == SavePackage) {
              *(double *)(pFVar3 + uVar19 * 0x58 + 0x20) =
                   dVar7 + *(double *)(pFVar3 + uVar19 * 0x58 + 0x20);
              *(double *)(pFVar3 + uVar19 * 0x58 + 0x28) =
                   *(double *)(pFVar3 + uVar19 * 0x58 + 0x28) + *pdVar17;
            }
            else if (EVar2 == BeginCacheForCookedPlatformData) {
              *(double *)(pFVar3 + uVar19 * 0x58 + 0x30) =
                   dVar7 + *(double *)(pFVar3 + uVar19 * 0x58 + 0x30);
              *(double *)(pFVar3 + uVar19 * 0x58 + 0x38) =
                   *(double *)(pFVar3 + uVar19 * 0x58 + 0x38) + *pdVar17;
            }
            else if (EVar2 == IsCachedCookedPlatformDataLoaded) {
              *(double *)(pFVar3 + uVar19 * 0x58 + 0x40) =
                   dVar7 + *(double *)(pFVar3 + uVar19 * 0x58 + 0x40);
              *(double *)(pFVar3 + uVar19 * 0x58 + 0x48) =
                   *(double *)(pFVar3 + uVar19 * 0x58 + 0x48) + *pdVar17;
            }
            goto LAB_14d445fe8;
          }
        }
        else {
          local_10e8 = 0;
          uStack_10e0 = 0;
          *pdVar20 = 0.0;
          pdVar20[1] = 0.0;
          pdVar20[2] = 0.0;
          pdVar20[3] = 0.0;
          *puVar29 = (local_1180.CurrentItem)->PackageId;
          *pEVar28 = (local_1180.CurrentItem)->Type;
          *pdVar20 = (local_1180.CurrentItem)->Timestamp;
          uStack_10d8 = 0;
          uStack_10d0 = 0;
          if (0 < (longlong)uVar26) {
            *pdVar22 = ((local_1180.CurrentItem)->Timestamp - (double)CONCAT44(uVar32,uVar31)) +
                       *pdVar22;
          }
          uVar26 = uVar26 + 1;
          pdVar22 = pdVar22 + 4;
          pdVar20 = pdVar20 + 4;
          puVar29 = puVar29 + 4;
          pEVar28 = pEVar28 + 0x20;
          pdVar17 = pdVar17 + 4;
          if ((0x7f < (longlong)uVar26) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("++Depth < MaxStackSize",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\CookProfilerProvider.cpp"
                                  ,0x83,L""), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
LAB_14d445fe8:
          uVar31 = SUB84(pFVar8->Timestamp,0);
          uVar32 = (undefined4)((ulonglong)pFVar8->Timestamp >> 0x20);
        }
        if (local_1180.CurrentItem == local_1180.CurrentPageLastItem) {
          if (local_1180.CurrentPageIndex ==
              (longlong)(((local_1180.Outer)->PagesArray).ArrayNum + -1)) {
            local_1180.CurrentItemIndex = (local_1180.Outer)->TotalItemCount;
            local_1180.CurrentPageFirstItem = (FPackageScope *)0x0;
            local_1180.CurrentItem = (FPackageScope *)0x0;
            local_1180.CurrentPageLastItem = (FPackageScope *)0x0;
          }
          else {
            local_1180.CurrentPageIndex = local_1180.CurrentPageIndex + 1;
            local_1180.CurrentPageFirstItem =
                 (local_1180.Outer)->FirstPage[local_1180.CurrentPageIndex].Items;
            if (local_1180.CurrentPageFirstItem == (FPackageScope *)0x0) {
              local_1180.CurrentPageLastItem = (FPackageScope *)0x0;
            }
            else {
              local_1180.CurrentPageLastItem =
                   local_1180.CurrentPageFirstItem +
                   ((local_1180.Outer)->FirstPage[local_1180.CurrentPageIndex].Count - 1);
            }
            local_1180.CurrentItemIndex = local_1180.CurrentPageIndex * (local_1180.Outer)->PageSize
            ;
            local_1180.CurrentItem = local_1180.CurrentPageFirstItem;
          }
        }
        else {
          local_1180.CurrentItemIndex = local_1180.CurrentItemIndex + 1;
          local_1180.CurrentItem = local_1180.CurrentItem + 1;
        }
        TPagedArrayIterator<TraceServices::FPackageScope,TraceServices::TPagedArrayPage<TraceServices::FPackageScope>_>
        ::
        TPagedArrayIterator<TraceServices::FPackageScope,TraceServices::TPagedArrayPage<TraceServices::FPackageScope>_>
                  (&local_10c8,local_1130,local_1130->TotalItemCount);
        pTVar27 = local_1120;
        pTVar30 = local_1128;
        uVar13 = local_1184;
      } while (local_1180.CurrentItemIndex != local_10c8.CurrentItemIndex);
    }
    stack0xffffffffffffef00 =
         (FPackageScope *)CONCAT44(uStack_10fc,auStack_1110._16_4_ & ~auStack_1110._4_4_);
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
              ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_1110);
  } while( true );
}

// EditAccessCheck @ 14d44ff80

void __thiscall TraceServices::FCookProfilerProvider::EditAccessCheck(FCookProfilerProvider *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  FProviderLock::WriteAccessCheck
            ((FProviderLock *)&this->_padding_,(FThreadLocalState *)(lVar1 + 0x9bc0));
  return;
}

// EditPackage @ 14d450ae0

FPackageData * __thiscall
TraceServices::FCookProfilerProvider::EditPackage(FCookProfilerProvider *this,ulong64 param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint *puVar6;
  FScriptContainerElement *pFVar7;
  FPackageData *pFVar8;
  longlong lVar9;
  undefined4 local_res8 [2];
  TPairInitializer<unsigned___int64_const_&,unsigned_int_&&> local_res10;
  uint **local_18;
  undefined4 *local_10;
  
  (**(code **)(this->_padding_ + 0x18))();
  local_res10.Value = (uint *)param_1;
  (**(code **)(this->_padding_ + 0x18))(this);
  puVar6 = TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
           ::Find((TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
                   *)&this->Session,(ulong64)local_res10.Value);
  if (puVar6 == (uint *)0x0) {
    local_res8[0] = *(undefined4 *)&(this->Packages).AllocatorInstance.Data;
    local_18 = &local_res10.Value;
    local_10 = local_res8;
    TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned___int64_const_&,unsigned_int_&&>_>
              ((TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
                *)&this->Session,&local_res10,(bool *)&local_18);
    pFVar7 = (this->Packages).AllocatorInstance.Data;
    puVar1 = &(this->PackageIdToIndexMap).field_0x48;
    if (pFVar7 == (FScriptContainerElement *)(this->Packages).ArrayNum) {
      pFVar7 = (FScriptContainerElement *)
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                         (0x858,(ForAnyElementType *)puVar1,&(this->Packages).ArrayNum);
    }
    lVar9 = (longlong)pFVar7 * 0x58;
    (this->Packages).AllocatorInstance.Data = pFVar7 + 1;
    lVar2 = *(longlong *)puVar1;
    *(uint **)(lVar2 + lVar9) = local_res10.Value;
    *(wchar_t **)(lVar2 + lVar9 + 8) = GUnknownPackage;
    *(undefined8 *)(lVar2 + lVar9 + 0x10) = 0;
    *(undefined8 *)(lVar2 + lVar9 + 0x18) = 0;
    *(undefined8 *)(lVar2 + lVar9 + 0x20) = 0;
    *(undefined8 *)(lVar2 + lVar9 + 0x28) = 0;
    *(undefined8 *)(lVar2 + lVar9 + 0x30) = 0;
    *(undefined8 *)(lVar2 + lVar9 + 0x38) = 0;
    *(undefined8 *)(lVar2 + lVar9 + 0x40) = 0;
    *(undefined8 *)(lVar2 + lVar9 + 0x48) = 0;
    *(wchar_t **)(lVar2 + lVar9 + 0x50) = GUnknownClass;
    uVar5 = *(int *)&(this->Packages).AllocatorInstance.Data - 1;
  }
  else {
    uVar5 = *puVar6;
  }
  if ((longlong)(this->Packages).AllocatorInstance.Data <= (longlong)(ulonglong)uVar5) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FPackageData *)(*pcVar3)();
      return pFVar8;
    }
  }
  return (FPackageData *)
         ((ulonglong)uVar5 * 0x58 + *(longlong *)&(this->PackageIdToIndexMap).field_0x48);
}

// EndEdit @ 14d4514b0

void __thiscall TraceServices::FCookProfilerProvider::EndEdit(FCookProfilerProvider *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  FProviderLock::EndWrite((FProviderLock *)&this->_padding_,(FThreadLocalState *)(lVar1 + 0x9bc0));
  return;
}

// EndRead @ 14d451930

void __thiscall TraceServices::FCookProfilerProvider::EndRead(FCookProfilerProvider *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  FProviderLock::EndRead(&this->Lock,(FThreadLocalState *)(lVar1 + 0x9bc0));
  return;
}

// EnumeratePackages @ 14d45b1b0

void __thiscall
TraceServices::FCookProfilerProvider::EnumeratePackages
          (FCookProfilerProvider *this,double param_1,double param_2,
          TFunctionRef<bool___cdecl(TraceServices::FPackageData_const_&)> *param_3)

{
  longlong lVar1;
  char cVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  (**(code **)(this->_padding_ + 0x18))();
  lVar1 = (this->Packages).ArrayNum;
  pFVar3 = (this->Packages).AllocatorInstance.Data;
  pFVar4 = pFVar3 + lVar1 * 0x58;
  while( true ) {
    if ((this->Packages).ArrayNum != lVar1) {
      `TCheckedPointerIterator<TraceServices::FPackageData_const_,__int64,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    cVar2 = (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,pFVar3);
    if (cVar2 == '\0') {
      return;
    }
    pFVar3 = pFVar3 + 0x58;
  }
  return;
}

// FindOrAddPackage @ 14d460a80

uint __thiscall
TraceServices::FCookProfilerProvider::FindOrAddPackage(FCookProfilerProvider *this,ulong64 param_1)

{
  long64 *plVar1;
  FScriptContainerElement *pFVar2;
  uint *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_res8 [2];
  ulong64 local_res10 [2];
  ulong64 *local_18;
  undefined4 *local_10;
  
  local_res10[0] = param_1;
  (**(code **)(this->_padding_ + 0x18))(&this->_padding_);
  puVar3 = TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
           ::Find((TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
                   *)&this->PackageIdToIndexMap,local_res10[0]);
  if (puVar3 != (uint *)0x0) {
    return *puVar3;
  }
  local_res8[0] = (undefined4)(this->Packages).ArrayNum;
  local_18 = local_res10;
  local_10 = local_res8;
  TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned___int64_const_&,unsigned_int_&&>_>
            ((TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
              *)&this->PackageIdToIndexMap,
             (TPairInitializer<unsigned___int64_const_&,unsigned_int_&&> *)(local_res10 + 1),
             (bool *)&local_18);
  lVar4 = (this->Packages).ArrayNum;
  plVar1 = &(this->Packages).ArrayMax;
  if (lVar4 == *plVar1) {
    lVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                      (0x858,&(this->Packages).AllocatorInstance,plVar1);
  }
  lVar5 = lVar4 * 0x58;
  (this->Packages).ArrayNum = lVar4 + 1;
  pFVar2 = (this->Packages).AllocatorInstance.Data;
  *(ulong64 *)(pFVar2 + lVar5) = local_res10[0];
  *(wchar_t **)(pFVar2 + lVar5 + 8) = GUnknownPackage;
  *(undefined8 *)(pFVar2 + lVar5 + 0x10) = 0;
  *(undefined8 *)(pFVar2 + lVar5 + 0x18) = 0;
  *(undefined8 *)(pFVar2 + lVar5 + 0x20) = 0;
  *(undefined8 *)(pFVar2 + lVar5 + 0x28) = 0;
  *(undefined8 *)(pFVar2 + lVar5 + 0x30) = 0;
  *(undefined8 *)(pFVar2 + lVar5 + 0x38) = 0;
  *(undefined8 *)(pFVar2 + lVar5 + 0x40) = 0;
  *(undefined8 *)(pFVar2 + lVar5 + 0x48) = 0;
  *(wchar_t **)(pFVar2 + lVar5 + 0x50) = GUnknownClass;
  return (int)(this->Packages).ArrayNum - 1;
}

// FindOrAddScopeEntries @ 14d460b80

TPagedArray<TraceServices::FPackageScope,TraceServices::TPagedArrayPage<TraceServices::FPackageScope>_>
* __thiscall
TraceServices::FCookProfilerProvider::FindOrAddScopeEntries
          (FCookProfilerProvider *this,uint param_1)

{
  TMap<unsigned_int,TraceServices::TPagedArray<TraceServices::FPackageScope,TraceServices::TPagedArrayPage<TraceServices::FPackageScope>_>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::TPagedArray<TraceServices::FPackageScope,TraceServices::TPagedArrayPage<TraceServices::FPackageScope>_>_*,0>_>
  *this_00;
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  TPairInitializer<unsigned_int_const_&,TraceServices::TPagedArray<TraceServices::FPackageScope,TraceServices::TPagedArrayPage<TraceServices::FPackageScope>_>_*_&&>
  local_res8;
  undefined8 *local_res18;
  TPagedArray<TraceServices::FPackageScope,TraceServices::TPagedArrayPage<TraceServices::FPackageScope>_>
  ***local_28;
  undefined8 **local_20;
  
  local_res8.Value._0_4_ = param_1;
  (**(code **)(this->_padding_ + 0x18))(&this->_padding_);
  this_00 = &this->ScopeEntries;
  local_res18 = (undefined8 *)0x0;
  if (*(int *)&(this->ScopeEntries).field_0x8 != *(int *)&(this->ScopeEntries).field_0x34) {
    puVar5 = *(undefined1 **)&(this->ScopeEntries).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->ScopeEntries).field_0x38;
    }
    iVar2 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->ScopeEntries).field_0x48 - 1U &
                              (uint)local_res8.Value) * 4);
    if (iVar2 != -1) {
      do {
        lVar1 = *(longlong *)&this_00->field_0x0 + (longlong)iVar2 * 0x18;
        if (*(uint *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar2 * 0x18) ==
            (uint)local_res8.Value) {
          puVar3 = (undefined8 *)(lVar1 + 8);
          if (lVar1 == 0) {
            puVar3 = local_res18;
          }
          if (puVar3 != (undefined8 *)0x0) {
            return (TPagedArray<TraceServices::FPackageScope,TraceServices::TPagedArrayPage<TraceServices::FPackageScope>_>
                    *)*puVar3;
          }
          break;
        }
        iVar2 = *(int *)(lVar1 + 0x10);
      } while (iVar2 != -1);
    }
  }
  puVar3 = ::operator_new(0x38);
  if (puVar3 != (undefined8 *)0x0) {
    uVar4 = (**(code **)((longlong)*this->Session + 0xb8))();
    *puVar3 = uVar4;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0x1000;
    puVar3[6] = 0;
    local_res18 = puVar3;
  }
  local_28 = &local_res8.Value;
  local_20 = &local_res18;
  TSet<TTuple<unsigned_int,TraceServices::TPagedArray<TraceServices::FPackageScope,TraceServices::TPagedArrayPage<TraceServices::FPackageScope>_>_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::TPagedArray<TraceServices::FPackageScope,TraceServices::TPagedArrayPage<TraceServices::FPackageScope>_>_*,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<unsigned_int_const_&,TraceServices::TPagedArray<TraceServices::FPackageScope,TraceServices::TPagedArrayPage<TraceServices::FPackageScope>_>_*_&&>_>
            ((TSet<TTuple<unsigned_int,TraceServices::TPagedArray<TraceServices::FPackageScope,TraceServices::TPagedArrayPage<TraceServices::FPackageScope>_>_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::TPagedArray<TraceServices::FPackageScope,TraceServices::TPagedArrayPage<TraceServices::FPackageScope>_>_*,0>,FDefaultSetAllocator>
              *)this_00,&local_res8,(bool *)&local_28);
  return *(TPagedArray<TraceServices::FPackageScope,TraceServices::TPagedArrayPage<TraceServices::FPackageScope>_>
           **)(*(longlong *)&this_00->field_0x0 + 8 + (longlong)(int)local_res8.Key * 0x18);
}

// GetNumPackages @ 14d46a780

uint __thiscall TraceServices::FCookProfilerProvider::GetNumPackages(FCookProfilerProvider *this)

{
  (**(code **)(this->_padding_ + 0x18))();
  return (uint)(this->Packages).ArrayNum;
}

// ReadAccessCheck @ 14d4810c0

void __thiscall TraceServices::FCookProfilerProvider::ReadAccessCheck(FCookProfilerProvider *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  FProviderLock::ReadAccessCheck(&this->Lock,(FThreadLocalState *)(lVar1 + 0x9bc0));
  return;
}

