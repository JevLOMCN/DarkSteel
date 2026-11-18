// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Sockets
// Functions: 6

// ~FServerTOC @ 14310b710

void __thiscall FServerTOC::~FServerTOC(FServerTOC *this)

{
  undefined1 *puVar1;
  TSparseArray<TSparseSetElement<TTuple<FString,FDateTime>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this_00;
  void *pvVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  TSet<TTuple<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*,0>,FDefaultSetAllocator>
              *)this);
  local_10 = 0;
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar6 = local_78._24_8_ >> 0x20;
  local_18 = (TSet<TTuple<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*,0>,FDefaultSetAllocator>
              *)this;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      this_00 = *(TSparseArray<TSparseSetElement<TTuple<FString,FDateTime>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  **)((longlong)(int)uVar6 * 0x20 + 0x10 + *local_48);
      if (this_00 !=
          (TSparseArray<TSparseSetElement<TTuple<FString,FDateTime>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *)0x0) {
        *(undefined4 *)&this_00[1].field_0x10 = 0;
        if (*(void **)&this_00[1].field_0x8 != (void *)0x0) {
          FMemory::Free(*(void **)&this_00[1].field_0x8);
        }
        TSparseArray<TSparseSetElement<TTuple<FString,FDateTime>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FString,FDateTime>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (this_00);
        ::operator_delete(this_00,0x50);
      }
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar6 = (ulonglong)uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
      uVar7 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar7 < 4) {
        iVar5 = 1;
      }
      else {
        uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
        lVar4 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        iVar5 = 1 << ((byte)lVar4 & 0x1f);
      }
      if (((0 < (int)uVar7) && (local_18->HashSize < iVar5)) || (iVar5 < local_18->HashSize)) {
        local_18->HashSize = iVar5;
        TSet<TTuple<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  bVar3 = 1 < *(int *)&(this->Directories).field_0x48;
  if (!bVar3) {
    TSet<TTuple<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*,0>,FDefaultSetAllocator>
                      *)this);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this,0,*(int *)&(this->Directories).field_0x8);
  puVar1 = &(this->Directories).field_0xc;
  *(undefined4 *)&(this->Directories).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->Directories).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Directories).field_0x34 = 0;
  iVar5 = *(int *)&(this->Directories).field_0x2c;
  *(undefined4 *)&(this->Directories).field_0x28 = 0;
  if ((iVar5 < 0) || (0x80 < iVar5)) {
    *(undefined4 *)&(this->Directories).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Directories).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->Directories).field_0x48 = 1;
    TSet<TTuple<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*,0>,FDefaultSetAllocator>
              *)this);
  }
  *(undefined4 *)&(this->Directories).field_0x48 = 0;
  pvVar2 = *(void **)&(this->Directories).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// AddFileOrDirectory @ 14310ca70

void __thiscall FServerTOC::AddFileOrDirectory(FServerTOC *this,FString *param_1,FDateTime *param_2)

{
  uint uVar1;
  int iVar2;
  TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
  *pTVar3;
  TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>
  **ppTVar4;
  TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
  *pTVar5;
  longlong lVar6;
  ForAnyElementType FVar7;
  TPairInitializer<FString_const_&,FDateTime_const_&> local_res8;
  TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
  *local_res18 [2];
  FString local_48;
  FString *local_38;
  FDateTime **local_30;
  
  FPaths::GetPath(&local_48,param_1);
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar7.Data = local_48.Data.AllocatorInstance.Data;
  }
  pTVar5 = (TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
            *)0x0;
  iVar2 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar2,(wchar_t *)FVar7.Data);
  iVar2 = TSet<TTuple<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*,0>,FDefaultSetAllocator>
                      *)this,uVar1,&local_48);
  if (iVar2 != -1) {
    lVar6 = (longlong)iVar2 * 0x20 + *(longlong *)&this->Directories;
    pTVar3 = (TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
              *)(lVar6 + 0x10);
    if (lVar6 == 0) {
      pTVar3 = pTVar5;
    }
    if ((pTVar3 != (TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
                    *)0x0) &&
       (local_res8.Value = *(FDateTime **)&pTVar3->Elements,
       (TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
        *)local_res8.Value !=
       (TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
        *)0x0)) goto LAB_14310cb59;
  }
  pTVar3 = ::operator_new(0x50);
  local_res8.Value = (FDateTime *)pTVar5;
  if (pTVar3 != (TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
                 *)0x0) {
    *(undefined8 *)&(pTVar3->Elements).field_0x10 = 0;
    *(undefined8 *)&(pTVar3->Elements).field_0x18 = 0;
    (pTVar3->Hash).InlineData[0] = '\0';
    (pTVar3->Hash).InlineData[1] = '\0';
    (pTVar3->Hash).InlineData[2] = '\0';
    (pTVar3->Hash).InlineData[3] = '\0';
    (pTVar3->Hash)._padding_ = 0;
    *(undefined8 *)&pTVar3->HashSize = 0;
    *(undefined8 *)&pTVar3->Elements = 0;
    *(undefined8 *)&(pTVar3->Elements).field_0x8 = 0;
    *(undefined8 *)&(pTVar3->Elements).field_0x20 = 0;
    *(undefined4 *)&(pTVar3->Elements).field_0x28 = 0;
    *(undefined4 *)&(pTVar3->Elements).field_0x2c = 0x80;
    *(undefined4 *)&(pTVar3->Elements).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pTVar3->Elements).field_0x34 = 0;
    (pTVar3->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_res8.Value = (FDateTime *)pTVar3;
  }
  local_38 = &local_48;
  local_30 = &local_res8.Value;
  TSet<TTuple<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FString_const_&,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*_const_&>_>
            ((TSet<TTuple<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FString_const_&,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*_const_&>
                      *)&local_res8,(bool *)&local_38);
LAB_14310cb59:
  if ((param_2->Ticks == 0) &&
     ((ppTVar4 = TMapBase<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*,0>_>
                 ::Find((TMapBase<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*,0>_>
                         *)this,param_1),
      ppTVar4 ==
      (TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>
       **)0x0 ||
      (*ppTVar4 ==
       (TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>
        *)0x0)))) {
    pTVar3 = ::operator_new(0x50);
    if (pTVar3 != (TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
                   *)0x0) {
      *(undefined8 *)&(pTVar3->Elements).field_0x10 = 0;
      *(undefined8 *)&(pTVar3->Elements).field_0x18 = 0;
      (pTVar3->Hash).InlineData[0] = '\0';
      (pTVar3->Hash).InlineData[1] = '\0';
      (pTVar3->Hash).InlineData[2] = '\0';
      (pTVar3->Hash).InlineData[3] = '\0';
      (pTVar3->Hash)._padding_ = 0;
      *(undefined8 *)&pTVar3->HashSize = 0;
      *(undefined8 *)&pTVar3->Elements = 0;
      *(undefined8 *)&(pTVar3->Elements).field_0x8 = 0;
      *(undefined8 *)&(pTVar3->Elements).field_0x20 = 0;
      *(undefined4 *)&(pTVar3->Elements).field_0x28 = 0;
      *(undefined4 *)&(pTVar3->Elements).field_0x2c = 0x80;
      *(undefined4 *)&(pTVar3->Elements).field_0x30 = 0xffffffff;
      *(undefined4 *)&(pTVar3->Elements).field_0x34 = 0;
      (pTVar3->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
      pTVar5 = pTVar3;
    }
    local_30 = (FDateTime **)local_res18;
    local_res18[0] = pTVar5;
    local_38 = param_1;
    TSet<TTuple<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FString_const_&,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*_&&>_>
              ((TSet<TTuple<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*,0>,FDefaultSetAllocator>
                *)this,(TPairInitializer<FString_const_&,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*_&&>
                        *)&local_res8,(bool *)&local_38);
  }
  local_38 = param_1;
  local_30 = (FDateTime **)param_2;
  TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_const_&,FDateTime_const_&>_>
            ((TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
              *)local_res8.Value,&local_res8,(bool *)&local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// FindDirectory @ 14310f1f0

TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_> *
__thiscall FServerTOC::FindDirectory(FServerTOC *this,FString *param_1)

{
  TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>
  **ppTVar1;
  
  ppTVar1 = TMapBase<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*,0>_>
            ::Find((TMapBase<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*,0>_>
                    *)this,param_1);
  if (ppTVar1 !=
      (TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>
       **)0x0) {
    return *ppTVar1;
  }
  return (TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>
          *)0x0;
}

// FindDirectory @ 14310f220

TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_> *
__thiscall FServerTOC::FindDirectory(FServerTOC *this,FString *param_1)

{
  TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>
  **ppTVar1;
  
  ppTVar1 = TMapBase<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*,0>_>
            ::Find((TMapBase<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*,0>_>
                    *)this,param_1);
  if (ppTVar1 !=
      (TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>
       **)0x0) {
    return *ppTVar1;
  }
  return (TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>
          *)0x0;
}

// FindFile @ 14310f250

FDateTime * __thiscall FServerTOC::FindFile(FServerTOC *this,FString *param_1)

{
  ForAnyElementType FVar1;
  uint uVar2;
  int iVar3;
  FDateTime *pFVar4;
  longlong lVar5;
  FDateTime *pFVar6;
  FString local_18;
  
  pFVar4 = (FDateTime *)0x0;
  FPaths::GetPath(&local_18,param_1);
  iVar3 = local_18.Data.ArrayNum + -1;
  FVar1.Data = local_18.Data.AllocatorInstance.Data;
  if (local_18.Data.ArrayNum == 0) {
    iVar3 = 0;
    FVar1.Data = (FScriptContainerElement *)L"";
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,(wchar_t *)FVar1.Data);
  iVar3 = TSet<TTuple<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*,0>,FDefaultSetAllocator>
                      *)this,uVar2,&local_18);
  if (iVar3 != -1) {
    lVar5 = (longlong)iVar3 * 0x20 + *(longlong *)&this->Directories;
    pFVar6 = (FDateTime *)(lVar5 + 0x10);
    if (lVar5 == 0) {
      pFVar6 = pFVar4;
    }
    if (pFVar6 != (FDateTime *)0x0) {
      pFVar4 = TMapBase<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>
               ::Find((TMapBase<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>
                       *)pFVar6->Ticks,param_1);
    }
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return pFVar4;
}

// RemoveFileOrDirectory @ 1431157e0

int __thiscall FServerTOC::RemoveFileOrDirectory(FServerTOC *this,FString *param_1)

{
  TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
  *this_00;
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  ForAnyElementType FVar5;
  undefined8 *puVar6;
  wchar_t *pwVar7;
  undefined8 *puVar8;
  FString local_18;
  
  FPaths::GetPath(&local_18,param_1);
  pwVar7 = L"";
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar5.Data = local_18.Data.AllocatorInstance.Data;
  }
  puVar6 = (undefined8 *)0x0;
  iVar4 = 0;
  iVar2 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar2 = iVar4;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar2,(wchar_t *)FVar5.Data);
  iVar2 = TSet<TTuple<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*,0>,FDefaultSetAllocator>
                      *)this,uVar1,&local_18);
  if (iVar2 != -1) {
    lVar3 = (longlong)iVar2 * 0x20 + *(longlong *)&this->Directories;
    puVar8 = (undefined8 *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      puVar8 = puVar6;
    }
    if (((puVar8 != (undefined8 *)0x0) &&
        (this_00 = (TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
                    *)*puVar8,
        this_00 !=
        (TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
         *)0x0)) &&
       (puVar6 = (undefined8 *)0x0,
       *(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34)) {
      iVar2 = (param_1->Data).ArrayNum;
      if (iVar2 != 0) {
        pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
        iVar4 = iVar2 + -1;
      }
      uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar7);
      uVar1 = TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
              ::RemoveImpl<FString>(this_00,uVar1,param_1);
      puVar6 = (undefined8 *)(ulonglong)uVar1;
    }
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return (int)puVar6;
}

