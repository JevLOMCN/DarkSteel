// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 20

// FConfigSection @ 14161cfd0

FConfigSection * __thiscall
FConfigSection::FConfigSection(FConfigSection *this,FConfigSection *param_1)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  if (this != param_1) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&this->_padding_,(int *)&this->_padding_,
               (ForElementType<FSetElementId> *)&param_1->_padding_,(int)param_1->_padding_);
    TSparseArray<TSparseSetElement<TTuple<FName,FConfigValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FName,FConfigValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this,(TSparseArray<TSparseSetElement<TTuple<FName,FConfigValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_1);
  }
  *(undefined8 *)&(this->ArrayOfStructKeys).field_0x0 = 0;
  *(undefined8 *)&(this->ArrayOfStructKeys).field_0x8 = 0;
  *(undefined8 *)&(this->ArrayOfStructKeys).field_0x20 = 0;
  *(undefined4 *)&(this->ArrayOfStructKeys).field_0x28 = 0;
  *(undefined4 *)&(this->ArrayOfStructKeys).field_0x2c = 0x80;
  *(undefined4 *)&(this->ArrayOfStructKeys).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ArrayOfStructKeys).field_0x34 = 0;
  *(undefined8 *)&(this->ArrayOfStructKeys).field_0x40 = 0;
  *(undefined4 *)&(this->ArrayOfStructKeys).field_0x48 = 0;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
  operator=((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
             *)&this->ArrayOfStructKeys,
            (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
             *)&param_1->ArrayOfStructKeys);
  *(undefined8 *)&(this->EmptyInitializedKeys).Elements = 0;
  *(undefined8 *)&(this->EmptyInitializedKeys).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->EmptyInitializedKeys).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->EmptyInitializedKeys).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->EmptyInitializedKeys).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->EmptyInitializedKeys).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EmptyInitializedKeys).Elements.field_0x34 = 0;
  (this->EmptyInitializedKeys).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->EmptyInitializedKeys).HashSize = 0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
            (&this->EmptyInitializedKeys,&param_1->EmptyInitializedKeys);
  this->bCanSave = param_1->bCanSave;
  return this;
}

// FConfigSection @ 14161d0d0

FConfigSection * __thiscall FConfigSection::FConfigSection(FConfigSection *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined8 *)&this->ArrayOfStructKeys = 0;
  *(undefined8 *)&(this->ArrayOfStructKeys).field_0x8 = 0;
  *(undefined8 *)&(this->ArrayOfStructKeys).field_0x20 = 0;
  *(undefined4 *)&(this->ArrayOfStructKeys).field_0x28 = 0;
  *(undefined4 *)&(this->ArrayOfStructKeys).field_0x2c = 0x80;
  *(undefined4 *)&(this->ArrayOfStructKeys).field_0x34 = 0;
  *(undefined4 *)&(this->ArrayOfStructKeys).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ArrayOfStructKeys).field_0x40 = 0;
  *(undefined4 *)&(this->ArrayOfStructKeys).field_0x48 = 0;
  *(undefined8 *)&(this->EmptyInitializedKeys).Elements = 0;
  *(undefined8 *)&(this->EmptyInitializedKeys).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->EmptyInitializedKeys).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->EmptyInitializedKeys).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->EmptyInitializedKeys).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->EmptyInitializedKeys).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->EmptyInitializedKeys).Elements.field_0x30 = 0xffffffff;
  (this->EmptyInitializedKeys).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->EmptyInitializedKeys).HashSize = 0;
  this->bCanSave = true;
  return this;
}

// ~FConfigSection @ 141620720

void __thiscall FConfigSection::~FConfigSection(FConfigSection *this)

{
  ForElementType<FSetElementId> FVar1;
  void *pvVar2;
  
  (this->EmptyInitializedKeys).HashSize = 0;
  FVar1 = (this->EmptyInitializedKeys).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->EmptyInitializedKeys).Elements);
  *(undefined4 *)&(this->ArrayOfStructKeys).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ArrayOfStructKeys).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ArrayOfStructKeys);
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FConfigValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FConfigValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FConfigValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// MultiFind<TSizedDefaultAllocator<32>_> @ 14184fef0

/* WARNING: Removing unreachable block (ram,0x00014185015e) */

void __thiscall
FConfigSection::MultiFind<TSizedDefaultAllocator<32>_>
          (FConfigSection *this,FName param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2,
          bool param_3)

{
  int *piVar1;
  void *_Src;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  ForAnyElementType _Src_00;
  ForAnyElementType local_70;
  undefined8 local_68;
  ForAnyElementType local_60;
  int local_58;
  int local_54;
  FString local_50;
  TBaseKeyIterator<1> local_40;
  
  bVar7 = false;
  bVar6 = false;
  TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
  ::TBaseKeyIterator<1>::TBaseKeyIterator<1>
            (&local_40,
             (TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
              *)this,param_1);
  iVar10 = local_40.NextIndex;
  do {
    if (local_40.Index == -1) {
LAB_1418501b9:
      if (param_3) {
        pFVar12 = (param_2->AllocatorInstance).Data;
        iVar10 = param_2->ArrayNum / 2;
        lVar13 = (longlong)iVar10;
        if (0 < iVar10) {
          pFVar11 = pFVar12 + (longlong)(param_2->ArrayNum + -1) * 0x10;
          do {
            uVar3 = *(undefined8 *)(pFVar11 + 8);
            uVar4 = *(undefined8 *)pFVar12;
            uVar5 = *(undefined8 *)(pFVar12 + 8);
            *(undefined8 *)pFVar12 = *(undefined8 *)pFVar11;
            *(undefined8 *)(pFVar12 + 8) = uVar3;
            pFVar12 = pFVar12 + 0x10;
            *(undefined8 *)pFVar11 = uVar4;
            *(undefined8 *)(pFVar11 + 8) = uVar5;
            lVar13 = lVar13 + -1;
            pFVar11 = pFVar11 + -0x10;
          } while (lVar13 != 0);
        }
      }
      return;
    }
    lVar13 = *(longlong *)&(local_40.Set)->Elements + (longlong)local_40.Index * 0x28;
    local_40.NextIndex = iVar10;
    if (*(char *)(*(longlong *)&(local_40.Set)->Elements + 0x1d + (longlong)local_40.Index * 0x28)
        == '\0') {
      iVar9 = *(int *)(lVar13 + 0x10);
      _Src = *(void **)(lVar13 + 8);
      bVar6 = true;
      local_60.Data = (FScriptContainerElement *)0x0;
      local_58 = iVar9;
      if (iVar9 == 0) {
        local_54 = 0;
        _Src_00.Data = local_60.Data;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar9,0,&local_60,iVar9,&local_54);
        memcpy(local_60.Data,_Src,(longlong)iVar9 * 2);
        _Src_00.Data = local_60.Data;
        iVar9 = local_58;
      }
    }
    else {
      bVar7 = true;
      local_50.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_50.Data.ArrayNum = 0;
      local_50.Data.ArrayMax = 0;
      FConfigValue::ExpandValue((FString *)(lVar13 + 8),&local_50);
      _Src_00.Data = local_50.Data.AllocatorInstance.Data;
      iVar9 = local_50.Data.ArrayNum;
    }
    local_70.Data = (FScriptContainerElement *)0x0;
    local_68 = CONCAT44(local_68._4_4_,iVar9);
    if (iVar9 == 0) {
      local_68 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar9,0,&local_70,iVar9,(int *)((longlong)&local_68 + 4));
      memcpy(local_70.Data,_Src_00.Data,(longlong)iVar9 * 2);
    }
    if ((bVar6) && (bVar6 = false, local_60.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_60.Data);
    }
    if ((bVar7) &&
       (bVar7 = false, local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    pFVar12 = (param_2->AllocatorInstance).Data;
    piVar1 = &param_2->ArrayMax;
    if (((pFVar12 <= (FScriptContainerElement *)&local_70) &&
        ((FScriptContainerElement *)&local_70 < pFVar12 + (longlong)*piVar1 * 0x10)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar9 = param_2->ArrayNum;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_2->AllocatorInstance,piVar1);
    }
    param_2->ArrayNum = iVar9 + 1;
    pFVar12 = (param_2->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
    *(undefined8 *)pFVar12 = 0;
    *(FScriptContainerElement **)pFVar12 = local_70.Data;
    local_70.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)(pFVar12 + 8) = (undefined4)local_68;
    *(undefined4 *)(pFVar12 + 0xc) = local_68._4_4_;
    local_68 = 0;
    if (iVar10 == -1) goto LAB_1418501b9;
    local_40.Index = iVar10;
    do {
      iVar10 = *(int *)(*(longlong *)&(local_40.Set)->Elements + 0x20 +
                       (longlong)local_40.Index * 0x28);
      if (*(FName *)(*(longlong *)&(local_40.Set)->Elements + (longlong)local_40.Index * 0x28) ==
          local_40.Key) break;
      local_40.Index = iVar10;
    } while (iVar10 != -1);
  } while( true );
}

// FConfigSection @ 141855240

FConfigSection * __thiscall
FConfigSection::FConfigSection(FConfigSection *this,FConfigSection *param_1)

{
  undefined1 *_Dst;
  undefined1 *_Src;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar1;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar2;
  void *pvVar3;
  ForElementType<FSetElementId> FVar4;
  
  TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
            ((TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
              *)this,(TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
                      *)param_1);
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
              *)&this->ArrayOfStructKeys,
             (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
              *)&param_1->ArrayOfStructKeys);
  pTVar1 = &this->EmptyInitializedKeys;
  *(undefined8 *)&pTVar1->Elements = 0;
  pTVar2 = &param_1->EmptyInitializedKeys;
  *(undefined8 *)&(this->EmptyInitializedKeys).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->EmptyInitializedKeys).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->EmptyInitializedKeys).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->EmptyInitializedKeys).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->EmptyInitializedKeys).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EmptyInitializedKeys).Elements.field_0x34 = 0;
  (this->EmptyInitializedKeys).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->EmptyInitializedKeys).HashSize = 0;
  if (pTVar1 != pTVar2) {
    *(undefined8 *)&pTVar1->Elements = *(undefined8 *)&pTVar2->Elements;
    *(undefined8 *)&pTVar2->Elements = 0;
    _Dst = &(this->EmptyInitializedKeys).Elements.field_0x10;
    *(undefined4 *)&(this->EmptyInitializedKeys).Elements.field_0x8 =
         *(undefined4 *)&(param_1->EmptyInitializedKeys).Elements.field_0x8;
    _Src = &(param_1->EmptyInitializedKeys).Elements.field_0x10;
    *(undefined4 *)&(this->EmptyInitializedKeys).Elements.field_0xc =
         *(undefined4 *)&(param_1->EmptyInitializedKeys).Elements.field_0xc;
    *(undefined8 *)&(param_1->EmptyInitializedKeys).Elements.field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->EmptyInitializedKeys).Elements.field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar3 = *(void **)&(this->EmptyInitializedKeys).Elements.field_0x20;
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      *(undefined8 *)&(this->EmptyInitializedKeys).Elements.field_0x20 =
           *(undefined8 *)&(param_1->EmptyInitializedKeys).Elements.field_0x20;
      *(undefined8 *)&(param_1->EmptyInitializedKeys).Elements.field_0x20 = 0;
      *(undefined4 *)&(this->EmptyInitializedKeys).Elements.field_0x28 =
           *(undefined4 *)&(param_1->EmptyInitializedKeys).Elements.field_0x28;
      *(undefined4 *)&(this->EmptyInitializedKeys).Elements.field_0x2c =
           *(undefined4 *)&(param_1->EmptyInitializedKeys).Elements.field_0x2c;
      *(undefined8 *)&(param_1->EmptyInitializedKeys).Elements.field_0x28 = 0;
    }
    *(undefined4 *)&(this->EmptyInitializedKeys).Elements.field_0x30 =
         *(undefined4 *)&(param_1->EmptyInitializedKeys).Elements.field_0x30;
    *(undefined4 *)&(this->EmptyInitializedKeys).Elements.field_0x34 =
         *(undefined4 *)&(param_1->EmptyInitializedKeys).Elements.field_0x34;
    *(undefined4 *)&(param_1->EmptyInitializedKeys).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->EmptyInitializedKeys).Elements.field_0x34 = 0;
  }
  if ((param_1->EmptyInitializedKeys).Hash.SecondaryData == (ForElementType<FSetElementId>)0x0) {
    *(undefined4 *)(this->EmptyInitializedKeys).Hash.InlineData =
         *(undefined4 *)(param_1->EmptyInitializedKeys).Hash.InlineData;
  }
  FVar4 = (this->EmptyInitializedKeys).Hash.SecondaryData;
  if (FVar4 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  (this->EmptyInitializedKeys).Hash.SecondaryData =
       (param_1->EmptyInitializedKeys).Hash.SecondaryData;
  (param_1->EmptyInitializedKeys).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->EmptyInitializedKeys).HashSize = (param_1->EmptyInitializedKeys).HashSize;
  (param_1->EmptyInitializedKeys).HashSize = 0;
  this->bCanSave = param_1->bCanSave;
  return this;
}

// operator== @ 1418596f0

bool __thiscall FConfigSection::operator==(FConfigSection *this,FConfigSection *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  void *pvVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  FConfigSection *pFVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  FString *pFVar15;
  longlong lVar16;
  ForAnyElementType _Str1;
  ForAnyElementType FVar17;
  wchar_t *pwVar18;
  longlong lVar19;
  int iVar20;
  longlong *plVar21;
  FString local_128;
  FString local_118;
  ForAnyElementType local_108;
  int local_100;
  int local_fc;
  ForAnyElementType local_f8;
  int local_f0;
  int local_ec;
  FString local_e8;
  FString local_d8;
  FConfigSection *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  FString local_98;
  longlong *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  FConfigSection *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  FString local_40;
  
  bVar8 = false;
  bVar7 = false;
  bVar5 = false;
  bVar11 = false;
  if ((int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4) ==
      (int)param_1->_padding_ - *(int *)((longlong)&param_1->_padding_ + 4)) {
    iVar14 = (int)this->_padding_;
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&this->_padding_;
    iVar20 = 0;
    TStack_60.BaseBitIndex = 0;
    uVar12 = 1;
    iVar13 = 0;
    if (iVar14 != 0) {
      plVar21 = (longlong *)this->_padding_;
      if ((longlong *)this->_padding_ == (longlong *)0x0) {
        plVar21 = (longlong *)TStack_60.Array;
      }
      uVar3 = (uint)*plVar21;
      while (uVar3 == 0) {
        lVar16 = (longlong)iVar20;
        TStack_60.BaseBitIndex = TStack_60.BaseBitIndex + 0x20;
        iVar20 = iVar20 + 1;
        iVar13 = iVar14;
        if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar20) goto LAB_1418597ac;
        uVar3 = *(uint *)((longlong)plVar21 + lVar16 * 4 + 4);
      }
      uVar12 = -uVar3 & uVar3;
      uVar2 = (ulonglong)uVar12 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      iVar13 = TStack_60.BaseBitIndex + -1 + (int)lVar16;
      if (iVar14 < iVar13) {
        iVar13 = iVar14;
      }
    }
LAB_1418597ac:
    TStack_c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)&param_1->_padding_;
    iVar14 = (int)param_1->_padding_;
    local_98.Data.ArrayNum = 0;
    TStack_c0._padding_ = CONCAT44(uVar12,iVar20);
    local_98.Data.ArrayMax = 1;
    local_78 = 0;
    TStack_60._padding_ = TStack_c0._padding_;
    TStack_60._28_4_ = iStack_7c;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    TStack_60.CurrentBitIndex = iVar13;
    iStack_7c = 0;
    if (iVar14 != 0) {
      plVar21 = (longlong *)param_1->_padding_;
      if ((longlong *)param_1->_padding_ == (longlong *)0x0) {
        plVar21 = (longlong *)TStack_c0.Array;
      }
      uVar12 = (uint)*plVar21;
      while (uVar12 == 0) {
        lVar16 = (longlong)local_98.Data.ArrayNum;
        local_78 = local_78 + 0x20;
        local_98.Data.ArrayNum = local_98.Data.ArrayNum + 1;
        iStack_7c = iVar14;
        if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < local_98.Data.ArrayNum)
        goto LAB_14185986c;
        uVar12 = *(uint *)((longlong)plVar21 + lVar16 * 4 + 4);
      }
      local_98.Data.ArrayMax = -uVar12 & uVar12;
      uVar2 = (ulonglong)(uint)local_98.Data.ArrayMax * 2 + 1;
      lVar16 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      iStack_7c = local_78 + -1 + (int)lVar16;
      if (iVar14 < iStack_7c) {
        iStack_7c = iVar14;
      }
    }
LAB_14185986c:
    TStack_c0._padding_ = CONCAT44(local_98.Data.ArrayMax,local_98.Data.ArrayNum);
    uStack_80 = 0xffffffff;
    TStack_c0.UnvisitedBitMask = 0xffffffff;
    TStack_c0._28_4_ = iStack_7c;
    TStack_c0.BaseBitIndex = local_78;
    local_c8 = param_1;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_1;
    local_88 = (longlong *)TStack_c0.Array;
    iStack_74 = iStack_7c;
    local_68 = this;
    TStack_c0.CurrentBitIndex = iStack_7c;
    if (iVar13 < (int)this->_padding_) {
      do {
        pFVar9 = local_c8;
        lVar16 = (longlong)TStack_c0.CurrentBitIndex;
        if ((int)*(longlong *)&(TStack_c0.Array)->NumBits <= TStack_c0.CurrentBitIndex) break;
        lVar19 = local_68->_padding_;
        if (*(longlong *)(lVar19 + (longlong)iVar13 * 0x28) !=
            *(longlong *)(lVar16 * 0x28 + local_c8->_padding_)) goto LAB_141859ce4;
        lVar1 = lVar19 + (longlong)iVar13 * 0x28;
        if (*(char *)(lVar19 + 0x1d + (longlong)iVar13 * 0x28) == '\0') {
          iVar14 = *(int *)(lVar1 + 0x10);
          bVar11 = true;
          pvVar4 = *(void **)(lVar1 + 8);
          local_108.Data = (FScriptContainerElement *)0x0;
          local_100 = iVar14;
          if (iVar14 == 0) {
            local_fc = 0;
            FVar17.Data = local_108.Data;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar14,0,&local_108,iVar14,&local_fc);
            memcpy(local_108.Data,pvVar4,(longlong)iVar14 * 2);
            FVar17.Data = local_108.Data;
            iVar14 = local_100;
          }
        }
        else {
          bVar5 = true;
          local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_e8.Data.ArrayNum = 0;
          local_e8.Data.ArrayMax = 0;
          FConfigValue::ExpandValue((FString *)(lVar1 + 8),&local_e8);
          FVar17.Data = local_e8.Data.AllocatorInstance.Data;
          iVar14 = local_e8.Data.ArrayNum;
        }
        local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_118.Data.ArrayNum = iVar14;
        if (iVar14 == 0) {
          local_118.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar14,0,(ForAnyElementType *)&local_118,iVar14,&local_118.Data.ArrayMax);
          memcpy(local_118.Data.AllocatorInstance.Data,FVar17.Data,(longlong)iVar14 * 2);
        }
        if ((bVar11) && (bVar11 = false, local_108.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_108.Data);
        }
        if ((bVar5) &&
           (bVar5 = false, local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
        }
        lVar16 = pFVar9->_padding_ + lVar16 * 0x28;
        if (*(char *)(lVar16 + 0x1d) == '\0') {
          local_f0 = *(int *)(lVar16 + 0x10);
          lVar19 = (longlong)local_f0;
          pvVar4 = *(void **)(lVar16 + 8);
          local_f8.Data = (FScriptContainerElement *)0x0;
          if (local_f0 == 0) {
            local_ec = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_f0,0,&local_f8,local_f0,&local_ec);
            memcpy(local_f8.Data,pvVar4,lVar19 * 2);
          }
          bVar6 = false;
          bVar10 = true;
          FVar17.Data = local_f8.Data;
          iVar14 = local_f0;
        }
        else {
          local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_d8.Data.ArrayNum = 0;
          local_d8.Data.ArrayMax = 0;
          FConfigValue::ExpandValue((FString *)(lVar16 + 8),&local_d8);
          bVar6 = true;
          bVar10 = false;
          FVar17.Data = local_d8.Data.AllocatorInstance.Data;
          iVar14 = local_d8.Data.ArrayNum;
        }
        local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_128.Data.ArrayNum = iVar14;
        if (iVar14 == 0) {
          local_128.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar14,0,(ForAnyElementType *)&local_128,iVar14,&local_128.Data.ArrayMax);
          memcpy(local_128.Data.AllocatorInstance.Data,FVar17.Data,(longlong)iVar14 * 2);
        }
        if ((bVar10) && (local_f8.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_f8.Data);
        }
        if ((bVar6) && (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
        FVar17.Data = (FScriptContainerElement *)L"";
        if (local_128.Data.ArrayNum != 0) {
          FVar17.Data = local_128.Data.AllocatorInstance.Data;
        }
        _Str1.Data = (FScriptContainerElement *)L"";
        if (local_118.Data.ArrayNum != 0) {
          _Str1.Data = local_118.Data.AllocatorInstance.Data;
        }
        iVar14 = wcscmp((wchar_t *)_Str1.Data,(wchar_t *)FVar17.Data);
        if (iVar14 == 0) {
LAB_141859c39:
          bVar10 = false;
        }
        else {
          bVar10 = HasQuotes(&local_118);
          if (bVar10) {
            bVar8 = true;
            iVar14 = local_118.Data.ArrayNum + -3;
            if (local_118.Data.ArrayNum == 0) {
              iVar14 = -2;
            }
            pFVar15 = ::FString::Mid(&local_118,&local_98,1,iVar14);
            if ((pFVar15->Data).ArrayNum == 0) {
              pwVar18 = L"";
            }
            else {
              pwVar18 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
            }
            FVar17.Data = (FScriptContainerElement *)L"";
            if (local_128.Data.ArrayNum != 0) {
              FVar17.Data = local_128.Data.AllocatorInstance.Data;
            }
            iVar14 = wcscmp((wchar_t *)FVar17.Data,pwVar18);
            if (iVar14 == 0) goto LAB_141859c39;
          }
          bVar10 = HasQuotes(&local_128);
          if (bVar10) {
            bVar7 = true;
            iVar14 = local_128.Data.ArrayNum + -3;
            if (local_128.Data.ArrayNum == 0) {
              iVar14 = -2;
            }
            pFVar15 = ::FString::Mid(&local_128,&local_40,1,iVar14);
            if ((pFVar15->Data).ArrayNum == 0) {
              pwVar18 = L"";
            }
            else {
              pwVar18 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
            }
            FVar17.Data = (FScriptContainerElement *)L"";
            if (local_118.Data.ArrayNum != 0) {
              FVar17.Data = local_118.Data.AllocatorInstance.Data;
            }
            iVar14 = wcscmp((wchar_t *)FVar17.Data,pwVar18);
            if (iVar14 == 0) goto LAB_141859c39;
          }
          bVar10 = true;
        }
        if ((bVar7) &&
           (bVar7 = false, local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_40.Data.AllocatorInstance.Data);
        }
        if ((bVar8) &&
           (bVar8 = false,
           (FConfigSection *)local_98.Data.AllocatorInstance.Data != (FConfigSection *)0x0)) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        if (bVar10) {
          if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_128.Data.AllocatorInstance.Data);
          }
          if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_118.Data.AllocatorInstance.Data);
          }
          goto LAB_141859ce4;
        }
        TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
        TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
        if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.Data.AllocatorInstance.Data);
        }
        if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.Data.AllocatorInstance.Data);
        }
        iVar13 = TStack_60.CurrentBitIndex;
      } while (TStack_60.CurrentBitIndex < (int)*(longlong *)&(TStack_60.Array)->NumBits);
    }
    bVar11 = true;
  }
  else {
LAB_141859ce4:
    bVar11 = false;
  }
  return bVar11;
}

// operator!= @ 141859d30

bool __thiscall FConfigSection::operator!=(FConfigSection *this,FConfigSection *param_1)

{
  bool bVar1;
  
  bVar1 = operator==(this,param_1);
  return !bVar1;
}

// AreSectionsEqualForWriting @ 1418639a0

bool __cdecl
FConfigSection::AreSectionsEqualForWriting(FConfigSection *param_1,FConfigSection *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  void *pvVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  FConfigSection *pFVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  FString *pFVar15;
  longlong lVar16;
  ForAnyElementType _Str1;
  ForAnyElementType FVar17;
  wchar_t *pwVar18;
  longlong lVar19;
  int iVar20;
  longlong *plVar21;
  FString local_128;
  FString local_118;
  ForAnyElementType local_108;
  int local_100;
  int local_fc;
  ForAnyElementType local_f8;
  int local_f0;
  int local_ec;
  FString local_e8;
  FString local_d8;
  FConfigSection *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  FString local_98;
  longlong *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  FConfigSection *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  FString local_40;
  
  bVar8 = false;
  bVar7 = false;
  bVar5 = false;
  bVar11 = false;
  if ((int)param_1->_padding_ - *(int *)((longlong)&param_1->_padding_ + 4) ==
      (int)param_2->_padding_ - *(int *)((longlong)&param_2->_padding_ + 4)) {
    iVar14 = (int)param_1->_padding_;
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&param_1->_padding_;
    iVar20 = 0;
    TStack_60.BaseBitIndex = 0;
    uVar12 = 1;
    iVar13 = 0;
    if (iVar14 != 0) {
      plVar21 = (longlong *)param_1->_padding_;
      if ((longlong *)param_1->_padding_ == (longlong *)0x0) {
        plVar21 = (longlong *)TStack_60.Array;
      }
      uVar3 = (uint)*plVar21;
      while (uVar3 == 0) {
        lVar16 = (longlong)iVar20;
        TStack_60.BaseBitIndex = TStack_60.BaseBitIndex + 0x20;
        iVar20 = iVar20 + 1;
        iVar13 = iVar14;
        if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar20) goto LAB_141863a5c;
        uVar3 = *(uint *)((longlong)plVar21 + lVar16 * 4 + 4);
      }
      uVar12 = -uVar3 & uVar3;
      uVar2 = (ulonglong)uVar12 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      iVar13 = TStack_60.BaseBitIndex + -1 + (int)lVar16;
      if (iVar14 < iVar13) {
        iVar13 = iVar14;
      }
    }
LAB_141863a5c:
    TStack_c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)&param_2->_padding_;
    iVar14 = (int)param_2->_padding_;
    local_98.Data.ArrayNum = 0;
    TStack_c0._padding_ = CONCAT44(uVar12,iVar20);
    local_98.Data.ArrayMax = 1;
    local_78 = 0;
    TStack_60._padding_ = TStack_c0._padding_;
    TStack_60._28_4_ = iStack_7c;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    TStack_60.CurrentBitIndex = iVar13;
    iStack_7c = 0;
    if (iVar14 != 0) {
      plVar21 = (longlong *)param_2->_padding_;
      if ((longlong *)param_2->_padding_ == (longlong *)0x0) {
        plVar21 = (longlong *)TStack_c0.Array;
      }
      uVar12 = (uint)*plVar21;
      while (uVar12 == 0) {
        lVar16 = (longlong)local_98.Data.ArrayNum;
        local_78 = local_78 + 0x20;
        local_98.Data.ArrayNum = local_98.Data.ArrayNum + 1;
        iStack_7c = iVar14;
        if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < local_98.Data.ArrayNum)
        goto LAB_141863b1c;
        uVar12 = *(uint *)((longlong)plVar21 + lVar16 * 4 + 4);
      }
      local_98.Data.ArrayMax = -uVar12 & uVar12;
      uVar2 = (ulonglong)(uint)local_98.Data.ArrayMax * 2 + 1;
      lVar16 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      iStack_7c = local_78 + -1 + (int)lVar16;
      if (iVar14 < iStack_7c) {
        iStack_7c = iVar14;
      }
    }
LAB_141863b1c:
    TStack_c0._padding_ = CONCAT44(local_98.Data.ArrayMax,local_98.Data.ArrayNum);
    uStack_80 = 0xffffffff;
    TStack_c0.UnvisitedBitMask = 0xffffffff;
    TStack_c0._28_4_ = iStack_7c;
    TStack_c0.BaseBitIndex = local_78;
    local_c8 = param_2;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_2;
    local_88 = (longlong *)TStack_c0.Array;
    iStack_74 = iStack_7c;
    local_68 = param_1;
    TStack_c0.CurrentBitIndex = iStack_7c;
    if (iVar13 < (int)param_1->_padding_) {
      do {
        pFVar9 = local_c8;
        lVar16 = (longlong)TStack_c0.CurrentBitIndex;
        if ((int)*(longlong *)&(TStack_c0.Array)->NumBits <= TStack_c0.CurrentBitIndex) break;
        lVar19 = local_68->_padding_;
        if (*(longlong *)(lVar19 + (longlong)iVar13 * 0x28) !=
            *(longlong *)(lVar16 * 0x28 + local_c8->_padding_)) goto LAB_141863f94;
        lVar1 = lVar19 + (longlong)iVar13 * 0x28;
        if (*(char *)(lVar19 + 0x1d + (longlong)iVar13 * 0x28) == '\0') {
          iVar14 = *(int *)(lVar1 + 0x10);
          bVar11 = true;
          pvVar4 = *(void **)(lVar1 + 8);
          local_108.Data = (FScriptContainerElement *)0x0;
          local_100 = iVar14;
          if (iVar14 == 0) {
            local_fc = 0;
            FVar17.Data = local_108.Data;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar14,0,&local_108,iVar14,&local_fc);
            memcpy(local_108.Data,pvVar4,(longlong)iVar14 * 2);
            FVar17.Data = local_108.Data;
            iVar14 = local_100;
          }
        }
        else {
          bVar5 = true;
          local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_e8.Data.ArrayNum = 0;
          local_e8.Data.ArrayMax = 0;
          FConfigValue::ExpandValue((FString *)(lVar1 + 8),&local_e8);
          FVar17.Data = local_e8.Data.AllocatorInstance.Data;
          iVar14 = local_e8.Data.ArrayNum;
        }
        local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_118.Data.ArrayNum = iVar14;
        if (iVar14 == 0) {
          local_118.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar14,0,(ForAnyElementType *)&local_118,iVar14,&local_118.Data.ArrayMax);
          memcpy(local_118.Data.AllocatorInstance.Data,FVar17.Data,(longlong)iVar14 * 2);
        }
        if ((bVar11) && (bVar11 = false, local_108.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_108.Data);
        }
        if ((bVar5) &&
           (bVar5 = false, local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
        }
        lVar16 = pFVar9->_padding_ + lVar16 * 0x28;
        if (*(char *)(lVar16 + 0x1d) == '\0') {
          local_f0 = *(int *)(lVar16 + 0x10);
          lVar19 = (longlong)local_f0;
          pvVar4 = *(void **)(lVar16 + 8);
          local_f8.Data = (FScriptContainerElement *)0x0;
          if (local_f0 == 0) {
            local_ec = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_f0,0,&local_f8,local_f0,&local_ec);
            memcpy(local_f8.Data,pvVar4,lVar19 * 2);
          }
          bVar6 = false;
          bVar10 = true;
          FVar17.Data = local_f8.Data;
          iVar14 = local_f0;
        }
        else {
          local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_d8.Data.ArrayNum = 0;
          local_d8.Data.ArrayMax = 0;
          FConfigValue::ExpandValue((FString *)(lVar16 + 8),&local_d8);
          bVar6 = true;
          bVar10 = false;
          FVar17.Data = local_d8.Data.AllocatorInstance.Data;
          iVar14 = local_d8.Data.ArrayNum;
        }
        local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_128.Data.ArrayNum = iVar14;
        if (iVar14 == 0) {
          local_128.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar14,0,(ForAnyElementType *)&local_128,iVar14,&local_128.Data.ArrayMax);
          memcpy(local_128.Data.AllocatorInstance.Data,FVar17.Data,(longlong)iVar14 * 2);
        }
        if ((bVar10) && (local_f8.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_f8.Data);
        }
        if ((bVar6) && (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
        FVar17.Data = (FScriptContainerElement *)L"";
        if (local_128.Data.ArrayNum != 0) {
          FVar17.Data = local_128.Data.AllocatorInstance.Data;
        }
        _Str1.Data = (FScriptContainerElement *)L"";
        if (local_118.Data.ArrayNum != 0) {
          _Str1.Data = local_118.Data.AllocatorInstance.Data;
        }
        iVar14 = wcscmp((wchar_t *)_Str1.Data,(wchar_t *)FVar17.Data);
        if (iVar14 == 0) {
LAB_141863ee9:
          bVar10 = false;
        }
        else {
          bVar10 = HasQuotes(&local_118);
          if (bVar10) {
            bVar8 = true;
            iVar14 = local_118.Data.ArrayNum + -3;
            if (local_118.Data.ArrayNum == 0) {
              iVar14 = -2;
            }
            pFVar15 = ::FString::Mid(&local_118,&local_98,1,iVar14);
            if ((pFVar15->Data).ArrayNum == 0) {
              pwVar18 = L"";
            }
            else {
              pwVar18 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
            }
            FVar17.Data = (FScriptContainerElement *)L"";
            if (local_128.Data.ArrayNum != 0) {
              FVar17.Data = local_128.Data.AllocatorInstance.Data;
            }
            iVar14 = wcscmp((wchar_t *)FVar17.Data,pwVar18);
            if (iVar14 == 0) goto LAB_141863ee9;
          }
          bVar10 = HasQuotes(&local_128);
          if (bVar10) {
            bVar7 = true;
            iVar14 = local_128.Data.ArrayNum + -3;
            if (local_128.Data.ArrayNum == 0) {
              iVar14 = -2;
            }
            pFVar15 = ::FString::Mid(&local_128,&local_40,1,iVar14);
            if ((pFVar15->Data).ArrayNum == 0) {
              pwVar18 = L"";
            }
            else {
              pwVar18 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
            }
            FVar17.Data = (FScriptContainerElement *)L"";
            if (local_118.Data.ArrayNum != 0) {
              FVar17.Data = local_118.Data.AllocatorInstance.Data;
            }
            iVar14 = wcscmp((wchar_t *)FVar17.Data,pwVar18);
            if (iVar14 == 0) goto LAB_141863ee9;
          }
          bVar10 = true;
        }
        if ((bVar7) &&
           (bVar7 = false, local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_40.Data.AllocatorInstance.Data);
        }
        if ((bVar8) &&
           (bVar8 = false,
           (FConfigSection *)local_98.Data.AllocatorInstance.Data != (FConfigSection *)0x0)) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        if (bVar10) {
          if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_128.Data.AllocatorInstance.Data);
          }
          if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_118.Data.AllocatorInstance.Data);
          }
          goto LAB_141863f94;
        }
        TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
        TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
        if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.Data.AllocatorInstance.Data);
        }
        if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.Data.AllocatorInstance.Data);
        }
        iVar13 = TStack_60.CurrentBitIndex;
      } while (TStack_60.CurrentBitIndex < (int)*(longlong *)&(TStack_60.Array)->NumBits);
    }
    bVar11 = true;
  }
  else {
LAB_141863f94:
    bVar11 = false;
  }
  return bVar11;
}

// GetArray @ 1418728b0

int __thiscall
FConfigSection::GetArray
          (FConfigSection *this,wchar_t *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  longlong lVar1;
  uint uVar2;
  ForElementType<FSetElementId> FVar3;
  int iVar4;
  FName local_res18 [2];
  
  ::FName::FName(local_res18,param_1);
  DestructItems<FString,int>((FString *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
  }
  MultiFind<TSizedDefaultAllocator<32>_>(this,local_res18[0],param_2,true);
  if (param_2->ArrayNum != 0) {
    return 1;
  }
  uVar2 = ::GetTypeHash(local_res18[0].ComparisonIndex.Value);
  if (*(int *)&(this->EmptyInitializedKeys).Elements.field_0x8 !=
      *(int *)&(this->EmptyInitializedKeys).Elements.field_0x34) {
    FVar3 = (this->EmptyInitializedKeys).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->EmptyInitializedKeys).Hash;
    }
    iVar4 = *(int *)((longlong)FVar3 +
                    (ulonglong)
                    ((this->EmptyInitializedKeys).HashSize - 1U & local_res18[0].Number + uVar2) * 4
                    );
    if (iVar4 != -1) {
      lVar1 = *(longlong *)&(this->EmptyInitializedKeys).Elements;
      do {
        if (*(FName *)(lVar1 + (longlong)iVar4 * 0x10) == local_res18[0]) {
          return 1;
        }
        iVar4 = *(int *)(lVar1 + 8 + (longlong)iVar4 * 0x10);
      } while (iVar4 != -1);
    }
  }
  return 0;
}

// GetBool @ 141872a30

bool __thiscall FConfigSection::GetBool(FConfigSection *this,wchar_t *param_1,bool *param_2)

{
  bool bVar1;
  FName *pFVar2;
  FConfigValue *this_00;
  FString *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  FName local_res20;
  FString local_28;
  FString local_18;
  
  pFVar5 = (FScriptContainerElement *)0x0;
  iVar6 = 0;
  pFVar2 = ::FName::FName(&local_res20,param_1);
  this_00 = TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
            ::Find((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                    *)this,*pFVar2);
  if (this_00 == (FConfigValue *)0x0) {
    bVar1 = false;
  }
  else {
    pFVar3 = FConfigValue::GetValue(this_00,&local_28);
    if (&local_18 != pFVar3) {
      pFVar5 = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar6 = (pFVar3->Data).ArrayNum;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar4 = (FScriptContainerElement *)L"";
    if (iVar6 != 0) {
      pFVar4 = pFVar5;
    }
    bVar1 = FToBoolHelper::FromCStringWide((wchar_t *)pFVar4);
    *param_2 = bVar1;
    bVar1 = true;
  }
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  return bVar1;
}

// GetDouble @ 1418732e0

bool __thiscall FConfigSection::GetDouble(FConfigSection *this,wchar_t *param_1,double *param_2)

{
  FName *pFVar1;
  FConfigValue *this_00;
  FString *pFVar2;
  FScriptContainerElement *_Str;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  double dVar6;
  FName local_res20;
  FString local_28;
  FString local_18;
  
  pFVar4 = (FScriptContainerElement *)0x0;
  iVar5 = 0;
  pFVar1 = ::FName::FName(&local_res20,param_1);
  this_00 = TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
            ::Find((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                    *)this,*pFVar1);
  if (this_00 == (FConfigValue *)0x0) {
    bVar3 = false;
  }
  else {
    pFVar2 = FConfigValue::GetValue(this_00,&local_28);
    if (&local_18 != pFVar2) {
      pFVar4 = (pFVar2->Data).AllocatorInstance.Data;
      (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar5 = (pFVar2->Data).ArrayNum;
      (pFVar2->Data).ArrayNum = 0;
      (pFVar2->Data).ArrayMax = 0;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    _Str = (FScriptContainerElement *)L"";
    if (iVar5 != 0) {
      _Str = pFVar4;
    }
    dVar6 = _wtof((wchar_t *)_Str);
    bVar3 = true;
    *param_2 = (double)(float)dVar6;
  }
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return bVar3;
}

// GetFloat @ 1418737d0

bool __thiscall FConfigSection::GetFloat(FConfigSection *this,wchar_t *param_1,float *param_2)

{
  FName *pFVar1;
  FConfigValue *this_00;
  FString *pFVar2;
  FScriptContainerElement *_Str;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  double dVar6;
  FName local_res20;
  FString local_28;
  FString local_18;
  
  pFVar4 = (FScriptContainerElement *)0x0;
  iVar5 = 0;
  pFVar1 = ::FName::FName(&local_res20,param_1);
  this_00 = TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
            ::Find((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                    *)this,*pFVar1);
  if (this_00 == (FConfigValue *)0x0) {
    bVar3 = false;
  }
  else {
    pFVar2 = FConfigValue::GetValue(this_00,&local_28);
    if (&local_18 != pFVar2) {
      pFVar4 = (pFVar2->Data).AllocatorInstance.Data;
      (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar5 = (pFVar2->Data).ArrayNum;
      (pFVar2->Data).ArrayNum = 0;
      (pFVar2->Data).ArrayMax = 0;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    _Str = (FScriptContainerElement *)L"";
    if (iVar5 != 0) {
      _Str = pFVar4;
    }
    dVar6 = _wtof((wchar_t *)_Str);
    bVar3 = true;
    *param_2 = (float)dVar6;
  }
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return bVar3;
}

// GetInt64 @ 141873c00

bool __thiscall FConfigSection::GetInt64(FConfigSection *this,wchar_t *param_1,long64 *param_2)

{
  FName *pFVar1;
  FConfigValue *this_00;
  FString *pFVar2;
  longlong lVar3;
  FScriptContainerElement *_Str;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  FName local_res20;
  FString local_28;
  FString local_18;
  
  pFVar5 = (FScriptContainerElement *)0x0;
  iVar6 = 0;
  pFVar1 = ::FName::FName(&local_res20,param_1);
  this_00 = TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
            ::Find((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                    *)this,*pFVar1);
  if (this_00 == (FConfigValue *)0x0) {
    bVar4 = false;
  }
  else {
    pFVar2 = FConfigValue::GetValue(this_00,&local_28);
    if (&local_18 != pFVar2) {
      pFVar5 = (pFVar2->Data).AllocatorInstance.Data;
      (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar6 = (pFVar2->Data).ArrayNum;
      (pFVar2->Data).ArrayNum = 0;
      (pFVar2->Data).ArrayMax = 0;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    _Str = (FScriptContainerElement *)L"";
    if (iVar6 != 0) {
      _Str = pFVar5;
    }
    lVar3 = _wtoi64((wchar_t *)_Str);
    *param_2 = lVar3;
    bVar4 = true;
  }
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  return bVar4;
}

// GetInt @ 141873d30

bool __thiscall FConfigSection::GetInt(FConfigSection *this,wchar_t *param_1,int *param_2)

{
  int iVar1;
  FName *pFVar2;
  FConfigValue *this_00;
  FString *pFVar3;
  FScriptContainerElement *_Str;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  FName local_res20;
  FString local_28;
  FString local_18;
  
  pFVar5 = (FScriptContainerElement *)0x0;
  iVar1 = 0;
  pFVar2 = ::FName::FName(&local_res20,param_1);
  this_00 = TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
            ::Find((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                    *)this,*pFVar2);
  if (this_00 == (FConfigValue *)0x0) {
    bVar4 = false;
  }
  else {
    pFVar3 = FConfigValue::GetValue(this_00,&local_28);
    if (&local_18 != pFVar3) {
      pFVar5 = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar1 = (pFVar3->Data).ArrayNum;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    _Str = (FScriptContainerElement *)L"";
    if (iVar1 != 0) {
      _Str = pFVar5;
    }
    iVar1 = _wtoi((wchar_t *)_Str);
    *param_2 = iVar1;
    bVar4 = true;
  }
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  return bVar4;
}

// GetString @ 141876f00

bool __thiscall FConfigSection::GetString(FConfigSection *this,wchar_t *param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  FName *pFVar2;
  FConfigValue *this_00;
  FString *pFVar3;
  FName local_res20;
  FString local_18;
  
  pFVar2 = ::FName::FName(&local_res20,param_1);
  this_00 = TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
            ::Find((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                    *)this,*pFVar2);
  if (this_00 != (FConfigValue *)0x0) {
    pFVar3 = FConfigValue::GetValue(this_00,&local_18);
    if (param_2 != pFVar3) {
      pFVar1 = (param_2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (param_2->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_2->Data).ArrayNum = (pFVar3->Data).ArrayNum;
      (param_2->Data).ArrayMax = (pFVar3->Data).ArrayMax;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return true;
  }
  return false;
}

// GetText @ 1418771a0

bool __thiscall
FConfigSection::GetText(FConfigSection *this,wchar_t *param_1,wchar_t *param_2,FText *param_3)

{
  FName *pFVar1;
  FConfigValue *this_00;
  FString *pFVar2;
  wchar_t *pwVar3;
  FName local_28;
  FString local_20;
  
  pFVar1 = ::FName::FName(&local_28,param_2);
  this_00 = TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
            ::Find((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                    *)this,*pFVar1);
  if (this_00 != (FConfigValue *)0x0) {
    pFVar2 = FConfigValue::GetValue(this_00,&local_20);
    if ((pFVar2->Data).ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
    }
    pwVar3 = FTextStringHelper::ReadFromBuffer(pwVar3,param_3,param_1,(wchar_t *)0x0,false);
    if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data.AllocatorInstance.Data);
    }
    return pwVar3 != (wchar_t *)0x0;
  }
  return false;
}

// GetUInt @ 141877450

bool __thiscall FConfigSection::GetUInt(FConfigSection *this,wchar_t *param_1,uint *param_2)

{
  uint uVar1;
  FName *pFVar2;
  FConfigValue *this_00;
  FString *pFVar3;
  FScriptContainerElement *_Str;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  FName local_res20;
  FString local_28;
  FString local_18;
  
  pFVar5 = (FScriptContainerElement *)0x0;
  iVar6 = 0;
  pFVar2 = ::FName::FName(&local_res20,param_1);
  this_00 = TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
            ::Find((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                    *)this,*pFVar2);
  if (this_00 == (FConfigValue *)0x0) {
    bVar4 = false;
  }
  else {
    pFVar3 = FConfigValue::GetValue(this_00,&local_28);
    if (&local_18 != pFVar3) {
      pFVar5 = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar6 = (pFVar3->Data).ArrayNum;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    _Str = (FScriptContainerElement *)L"";
    if (iVar6 != 0) {
      _Str = pFVar5;
    }
    uVar1 = _wtoi((wchar_t *)_Str);
    *param_2 = uVar1;
    bVar4 = true;
  }
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  return bVar4;
}

// HandleAddCommand @ 141877850

void __thiscall
FConfigSection::HandleAddCommand(FConfigSection *this,FName param_1,FString *param_2,bool param_3)

{
  bool bVar1;
  FConfigExpansion *pFVar2;
  FConfigValue *pFVar3;
  wchar_t *pwVar4;
  FName local_res10;
  wchar_t *local_38;
  FConfigValue local_30;
  
  local_res10 = param_1;
  bVar1 = HandleArrayOfKeyedStructsCommand(this,param_1,param_2);
  if (bVar1) {
    return;
  }
  local_30.SavedValue.Data.AllocatorInstance.Data = (param_2->Data).AllocatorInstance.Data;
  (param_2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.SavedValue.Data.ArrayNum = (param_2->Data).ArrayNum;
  local_30.SavedValue.Data.ArrayMax = (param_2->Data).ArrayMax;
  (param_2->Data).ArrayNum = 0;
  (param_2->Data).ArrayMax = 0;
  local_30.ValueType = ArrayCombined;
  if (param_3) {
    pwVar4 = (wchar_t *)local_30.SavedValue.Data.AllocatorInstance.Data;
    if (local_30.SavedValue.Data.ArrayNum == 0) {
      pwVar4 = L"";
    }
    local_30.SavedValueHash = FCrc::StrCrc32<wchar_t>(pwVar4,0);
    pFVar2 = FindNextExpansion(pwVar4,&local_38);
    local_30.bExpandOnDemand = pFVar2 != (FConfigExpansion *)0x0;
  }
  else {
    pwVar4 = (wchar_t *)local_30.SavedValue.Data.AllocatorInstance.Data;
    if (local_30.SavedValue.Data.ArrayNum == 0) {
      pwVar4 = L"";
    }
    local_30.SavedValueHash = FCrc::StrCrc32<wchar_t>(pwVar4,0);
    pFVar2 = FindNextExpansion(pwVar4,&local_38);
    local_30.bExpandOnDemand = pFVar2 != (FConfigExpansion *)0x0;
    pFVar3 = TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
             ::FindPair((TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                         *)this,local_res10,&local_30);
    if (pFVar3 != (FConfigValue *)0x0) goto LAB_14187791f;
  }
  TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
  ::Emplace<FName_const_&,FConfigValue>
            ((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
              *)this,&local_res10,&local_30);
LAB_14187791f:
  if (local_30.SavedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.SavedValue.Data.AllocatorInstance.Data);
  }
  return;
}

// HandleArrayOfKeyedStructsCommand @ 141877950

bool __thiscall
FConfigSection::HandleArrayOfKeyedStructsCommand
          (FConfigSection *this,FName param_1,FString *param_2)

{
  longlong lVar1;
  void *_Src;
  FScriptContainerElement *_Src_00;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  FName *pFVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  longlong lVar8;
  FName *pFVar9;
  uint uVar10;
  FName *pFVar11;
  ForAnyElementType _Src_01;
  bool bVar12;
  FString local_f8;
  ForAnyElementType local_e8;
  int local_e0;
  int local_dc;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  longlong *local_a8;
  undefined1 auStack_a0 [16];
  uint uStack_90;
  uint uStack_8c;
  longlong local_88;
  TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
  *pTStack_80;
  FConfigSection *local_78;
  undefined2 local_70;
  FString local_68;
  undefined1 local_58 [32];
  longlong local_38;
  TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
  *pTStack_30;
  
  pFVar9 = (FName *)0x0;
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->ArrayOfStructKeys).field_0x8 != *(int *)&(this->ArrayOfStructKeys).field_0x34)
  {
    puVar7 = *(undefined1 **)&(this->ArrayOfStructKeys).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->ArrayOfStructKeys).field_0x38;
    }
    uVar3 = *(uint *)(puVar7 + (ulonglong)
                               (*(int *)&(this->ArrayOfStructKeys).field_0x48 - 1U &
                               param_1.Number + uVar3) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pFVar5 = (FName *)((longlong)(int)uVar3 * 0x20 + *(longlong *)&this->ArrayOfStructKeys);
        if (*pFVar5 == param_1) {
          pFVar11 = pFVar5 + 1;
          if (pFVar5 == (FName *)0x0) {
            pFVar11 = pFVar9;
          }
          if (pFVar11 == (FName *)0x0) goto LAB_141877db5;
          ::FString::FString(&local_d8,"=");
          ::FString::ConcatFF(&local_68,(FString *)pFVar11,&local_d8);
          if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.Data.AllocatorInstance.Data);
          }
          local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_c8.Data.ArrayNum = 0;
          local_c8.Data.ArrayMax = 0;
          ExtractPropertyValue(param_2,&local_68,&local_c8);
          iVar4 = local_c8.Data.ArrayNum + -1;
          if (local_c8.Data.ArrayNum == 0) {
            iVar4 = 0;
          }
          if (iVar4 < 1) goto LAB_141877d98;
          local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_d8.Data.ArrayNum = 0;
          local_d8.Data.ArrayMax = 0;
          TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
          ::TIterator::TIterator
                    ((TIterator *)local_58,
                     (TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
                      *)this);
          local_70 = 0;
          stack0xffffffffffffff68 = local_58._16_16_;
          local_a8 = (longlong *)local_58._0_8_;
          auStack_a0._0_8_ = local_58._8_8_;
          local_88 = local_38;
          pTStack_80 = pTStack_30;
          uVar6 = local_58._24_8_ >> 0x20;
          uVar3 = local_58._28_4_;
          pFVar5 = pFVar9;
          local_78 = this;
          if (*(int *)(local_58._16_8_ + 0x18) <= (int)uVar3) goto LAB_141877d89;
          goto LAB_141877ad0;
        }
        uVar3 = pFVar5[3].ComparisonIndex.Value;
      } while (uVar3 != 0xffffffff);
    }
  }
  return false;
LAB_141877ad0:
  plVar2 = local_a8;
  lVar1 = *local_a8;
  if (*(FName *)(lVar1 + (longlong)(int)uVar6 * 0x28) == param_1) {
    lVar8 = lVar1 + (longlong)(int)uVar3 * 0x28;
    if (*(char *)(lVar1 + 0x1d + (longlong)(int)uVar3 * 0x28) == '\0') {
      iVar4 = *(int *)(lVar8 + 0x10);
      _Src = *(void **)(lVar8 + 8);
      uVar10 = (uint)pFVar5 | 2;
      local_e8.Data = (FScriptContainerElement *)0x0;
      local_e0 = iVar4;
      if (iVar4 == 0) {
        local_dc = 0;
        _Src_01.Data = local_e8.Data;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar4,0,&local_e8,iVar4,&local_dc);
        memcpy(local_e8.Data,_Src,(longlong)iVar4 * 2);
        _Src_01.Data = local_e8.Data;
        iVar4 = local_e0;
      }
    }
    else {
      uVar10 = (uint)pFVar5 | 1;
      local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.Data.ArrayNum = 0;
      local_b8.Data.ArrayMax = 0;
      FConfigValue::ExpandValue((FString *)(lVar8 + 8),&local_b8);
      _Src_01.Data = local_b8.Data.AllocatorInstance.Data;
      iVar4 = local_b8.Data.ArrayNum;
    }
    pFVar5 = (FName *)(ulonglong)uVar10;
    local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.Data.ArrayNum = iVar4;
    if (iVar4 == 0) {
      local_f8.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar4,0,(ForAnyElementType *)&local_f8,iVar4,&local_f8.Data.ArrayMax);
      memcpy(local_f8.Data.AllocatorInstance.Data,_Src_01.Data,(longlong)iVar4 * 2);
    }
    if (((uVar10 & 2) != 0) &&
       (pFVar5 = (FName *)(ulonglong)(uVar10 & 0xfffffffd),
       local_e8.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_e8.Data);
    }
    if ((((ulonglong)pFVar5 & 1) != 0) &&
       (pFVar5 = (FName *)(ulonglong)((uint)pFVar5 & 0xfffffffe),
       local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    ExtractPropertyValue(&local_f8,&local_68,&local_d8);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    if (local_d8.Data.ArrayNum == local_c8.Data.ArrayNum) {
      if (1 < local_d8.Data.ArrayNum) {
        iVar4 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)local_d8.Data.AllocatorInstance.Data,
                           (wchar_t *)local_c8.Data.AllocatorInstance.Data);
        bVar12 = iVar4 == 0;
        goto LAB_141877c67;
      }
    }
    else {
      bVar12 = local_d8.Data.ArrayNum + local_c8.Data.ArrayNum == 1;
LAB_141877c67:
      if (!bVar12) goto LAB_141877c71;
    }
    local_f8.Data.ArrayNum = (param_2->Data).ArrayNum;
    lVar8 = (longlong)local_f8.Data.ArrayNum;
    lVar1 = *plVar2;
    _Src_00 = (param_2->Data).AllocatorInstance.Data;
    local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_f8.Data.ArrayNum == 0) {
      local_f8.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_f8.Data.ArrayNum,0,(ForAnyElementType *)&local_f8,local_f8.Data.ArrayNum,
                 &local_f8.Data.ArrayMax);
      memcpy(local_f8.Data.AllocatorInstance.Data,_Src_00,lVar8 * 2);
    }
    FConfigValue::operator=((FConfigValue *)(lVar1 + ((longlong)(int)uVar3 * 5 + 1) * 8),&local_f8);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    pFVar9 = (FName *)&DAT_00000001;
LAB_141877d27:
    if (((char)local_70 != '\0') && (local_70._1_1_ != '\0')) {
      uVar3 = (int)local_78->_padding_ - *(int *)((longlong)&local_78->_padding_ + 4);
      if (uVar3 < 4) {
        iVar4 = 1;
      }
      else {
        uVar6 = (ulonglong)((uVar3 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar4 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar3) && ((int)local_78->_padding_ < iVar4)) ||
         (iVar4 < (int)local_78->_padding_)) {
        *(int *)&local_78->_padding_ = iVar4;
        TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
                  *)local_78);
      }
    }
LAB_141877d89:
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
LAB_141877d98:
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
LAB_141877db5:
    return (bool)(char)pFVar9;
  }
LAB_141877c71:
  pFVar9 = (FName *)0x0;
  uStack_90 = uStack_90 & ~auStack_a0._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
            ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_a0);
  if (*(int *)(auStack_a0._8_8_ + 0x18) <= (int)uStack_8c) goto LAB_141877d27;
  uVar6 = (ulonglong)uStack_8c;
  uVar3 = uStack_8c;
  goto LAB_141877ad0;
}

// HasQuotes @ 141877f50

bool __cdecl FConfigSection::HasQuotes(FString *param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  ForAnyElementType FVar4;
  wchar_t *pwVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  FString local_28;
  FString local_18;
  
  iVar7 = (param_1->Data).ArrayNum;
  iVar3 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar3 = 0;
  }
  if (iVar3 < 2) {
    return false;
  }
  if (iVar7 == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar1 = false;
  ::FString::ConstructFromPtrSize(&local_18,pwVar5,1);
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar4.Data = local_18.Data.AllocatorInstance.Data;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar4.Data,L"\"");
  if (iVar3 == 0) {
    iVar7 = (param_1->Data).ArrayNum;
    iVar3 = iVar7 + -1;
    if (iVar7 == 0) {
      iVar3 = 0;
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    lVar8 = (longlong)iVar3;
    if (1 < iVar3) {
      iVar3 = 1;
    }
    iVar7 = 0;
    if (0 < iVar3) {
      iVar7 = iVar3;
    }
    ::FString::FString(&local_28,(wchar_t *)((longlong)pwVar5 + (lVar8 - iVar7) * 2));
    bVar1 = true;
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar4.Data = local_28.Data.AllocatorInstance.Data;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar4.Data,L"\"");
    if (iVar3 != 0) goto LAB_14187802b;
    bVar2 = true;
  }
  else {
LAB_14187802b:
    bVar6 = false;
    bVar2 = false;
    if (!bVar1) goto LAB_141878042;
  }
  bVar6 = bVar2;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
LAB_141878042:
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar6;
}

