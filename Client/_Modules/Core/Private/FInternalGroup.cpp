// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// FInternalGroup @ 1419cdf70

FInternalGroup * __thiscall
FInternalGroup::FInternalGroup(FInternalGroup *this,FInternalGroup *param_1)

{
  *(undefined8 *)&(this->EnabledItems).Elements = 0;
  *(undefined8 *)&(this->EnabledItems).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->EnabledItems).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->EnabledItems).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->EnabledItems).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->EnabledItems).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EnabledItems).Elements.field_0x34 = 0;
  (this->EnabledItems).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->EnabledItems).HashSize = 0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
  Move<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>
            (&this->EnabledItems,&param_1->EnabledItems);
  this->GroupName = param_1->GroupName;
  this->GroupCategory = param_1->GroupCategory;
  (this->GroupDescription).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroupDescription).Data.AllocatorInstance.Data =
       (param_1->GroupDescription).Data.AllocatorInstance.Data;
  (param_1->GroupDescription).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroupDescription).Data.ArrayNum = (param_1->GroupDescription).Data.ArrayNum;
  (this->GroupDescription).Data.ArrayMax = (param_1->GroupDescription).Data.ArrayMax;
  (param_1->GroupDescription).Data.ArrayNum = 0;
  (param_1->GroupDescription).Data.ArrayMax = 0;
  *(undefined8 *)&(this->ThreadBudgetMap).field_0x0 = 0;
  *(undefined8 *)&(this->ThreadBudgetMap).field_0x8 = 0;
  *(undefined8 *)&(this->ThreadBudgetMap).field_0x20 = 0;
  *(undefined4 *)&(this->ThreadBudgetMap).field_0x28 = 0;
  *(undefined4 *)&(this->ThreadBudgetMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ThreadBudgetMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ThreadBudgetMap).field_0x34 = 0;
  *(undefined8 *)&(this->ThreadBudgetMap).field_0x40 = 0;
  *(undefined4 *)&(this->ThreadBudgetMap).field_0x48 = 0;
  TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
  Move<TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
              *)&this->ThreadBudgetMap,
             (TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
              *)&param_1->ThreadBudgetMap);
  *(undefined8 *)&(this->BudgetIgnoreStats).Elements = 0;
  *(undefined8 *)&(this->BudgetIgnoreStats).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->BudgetIgnoreStats).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->BudgetIgnoreStats).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->BudgetIgnoreStats).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->BudgetIgnoreStats).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BudgetIgnoreStats).Elements.field_0x34 = 0;
  (this->BudgetIgnoreStats).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->BudgetIgnoreStats).HashSize = 0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
  Move<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>
            (&this->BudgetIgnoreStats,&param_1->BudgetIgnoreStats);
  this->DisplayMode = param_1->DisplayMode;
  this->bCompareByName = param_1->bCompareByName;
  this->SortOrder = param_1->SortOrder;
  return this;
}

// FInternalGroup @ 1419ce090

FInternalGroup * __thiscall
FInternalGroup::FInternalGroup
          (FInternalGroup *this,FName param_1,FName param_2,Type param_3,bool param_4,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_5,FString *param_6,
          TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
          *param_7,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ForElementType<FSetElementId> FVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uchar uVar13;
  uchar uVar14;
  uchar uVar15;
  uchar uVar16;
  int iVar17;
  undefined4 uVar18;
  uchar uVar19;
  uchar uVar20;
  uchar uVar21;
  uchar uVar22;
  int iVar23;
  int iVar24;
  undefined4 uVar25;
  ulong64 uVar26;
  
  *(undefined8 *)&(this->EnabledItems).Elements = 0;
  *(undefined8 *)&(this->EnabledItems).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->EnabledItems).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->EnabledItems).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->EnabledItems).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->EnabledItems).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EnabledItems).Elements.field_0x34 = 0;
  (this->EnabledItems).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->EnabledItems).HashSize = 0;
  this->GroupName = param_1;
  this->GroupCategory = param_2;
  ::FString::FString(&this->GroupDescription,param_6);
  *(undefined8 *)&this->ThreadBudgetMap = 0;
  *(undefined8 *)&(this->ThreadBudgetMap).field_0x8 = 0;
  *(undefined8 *)&(this->ThreadBudgetMap).field_0x20 = 0;
  *(undefined4 *)&(this->ThreadBudgetMap).field_0x28 = 0;
  *(undefined4 *)&(this->ThreadBudgetMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ThreadBudgetMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ThreadBudgetMap).field_0x34 = 0;
  *(undefined8 *)&(this->ThreadBudgetMap).field_0x40 = 0;
  *(undefined4 *)&(this->ThreadBudgetMap).field_0x48 = 0;
  *(undefined8 *)&(this->BudgetIgnoreStats).Elements = 0;
  *(undefined8 *)&(this->BudgetIgnoreStats).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->BudgetIgnoreStats).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->BudgetIgnoreStats).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->BudgetIgnoreStats).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->BudgetIgnoreStats).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BudgetIgnoreStats).Elements.field_0x34 = 0;
  (this->BudgetIgnoreStats).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->BudgetIgnoreStats).HashSize = 0;
  this->bCompareByName = param_4;
  this->DisplayMode = param_3;
  uVar26 = NextCounter + 1;
  this->SortOrder = NextCounter;
  NextCounter = uVar26;
  uVar1 = *(undefined8 *)&(this->EnabledItems).Elements;
  uVar2 = *(undefined8 *)&(this->EnabledItems).Elements.field_0x8;
  uVar3 = *(undefined8 *)&(param_5->Elements).field_0x8;
  uVar4 = *(undefined8 *)&(this->EnabledItems).Elements.field_0x10;
  uVar5 = *(undefined8 *)&(this->EnabledItems).Elements.field_0x18;
  uVar6 = *(undefined8 *)&(this->EnabledItems).Elements.field_0x20;
  uVar7 = *(undefined8 *)&(this->EnabledItems).Elements.field_0x28;
  uVar8 = *(undefined8 *)&(this->EnabledItems).Elements.field_0x30;
  uVar19 = (this->EnabledItems).Hash.InlineData[0];
  uVar20 = (this->EnabledItems).Hash.InlineData[1];
  uVar21 = (this->EnabledItems).Hash.InlineData[2];
  uVar22 = (this->EnabledItems).Hash.InlineData[3];
  iVar23 = (this->EnabledItems).Hash._padding_;
  FVar9 = (this->EnabledItems).Hash.SecondaryData;
  iVar24 = (this->EnabledItems).HashSize;
  uVar25 = *(undefined4 *)&(this->EnabledItems).field_0x4c;
  *(undefined8 *)&(this->EnabledItems).Elements = *(undefined8 *)&param_5->Elements;
  *(undefined8 *)&(this->EnabledItems).Elements.field_0x8 = uVar3;
  uVar3 = *(undefined8 *)&(param_5->Elements).field_0x18;
  *(undefined8 *)&(this->EnabledItems).Elements.field_0x10 =
       *(undefined8 *)&(param_5->Elements).field_0x10;
  *(undefined8 *)&(this->EnabledItems).Elements.field_0x18 = uVar3;
  uVar3 = *(undefined8 *)&(param_5->Elements).field_0x28;
  *(undefined8 *)&(this->EnabledItems).Elements.field_0x20 =
       *(undefined8 *)&(param_5->Elements).field_0x20;
  *(undefined8 *)&(this->EnabledItems).Elements.field_0x28 = uVar3;
  uVar13 = (param_5->Hash).InlineData[0];
  uVar14 = (param_5->Hash).InlineData[1];
  uVar15 = (param_5->Hash).InlineData[2];
  uVar16 = (param_5->Hash).InlineData[3];
  iVar17 = (param_5->Hash)._padding_;
  *(undefined8 *)&(this->EnabledItems).Elements.field_0x30 =
       *(undefined8 *)&(param_5->Elements).field_0x30;
  (this->EnabledItems).Hash.InlineData[0] = uVar13;
  (this->EnabledItems).Hash.InlineData[1] = uVar14;
  (this->EnabledItems).Hash.InlineData[2] = uVar15;
  (this->EnabledItems).Hash.InlineData[3] = uVar16;
  (this->EnabledItems).Hash._padding_ = iVar17;
  iVar17 = param_5->HashSize;
  uVar18 = *(undefined4 *)&param_5->field_0x4c;
  (this->EnabledItems).Hash.SecondaryData = (param_5->Hash).SecondaryData;
  (this->EnabledItems).HashSize = iVar17;
  *(undefined4 *)&(this->EnabledItems).field_0x4c = uVar18;
  *(undefined8 *)&param_5->Elements = uVar1;
  *(undefined8 *)&(param_5->Elements).field_0x8 = uVar2;
  *(undefined8 *)&(param_5->Elements).field_0x10 = uVar4;
  *(undefined8 *)&(param_5->Elements).field_0x18 = uVar5;
  *(undefined8 *)&(param_5->Elements).field_0x20 = uVar6;
  *(undefined8 *)&(param_5->Elements).field_0x28 = uVar7;
  *(undefined8 *)&(param_5->Elements).field_0x30 = uVar8;
  (param_5->Hash).InlineData[0] = uVar19;
  (param_5->Hash).InlineData[1] = uVar20;
  (param_5->Hash).InlineData[2] = uVar21;
  (param_5->Hash).InlineData[3] = uVar22;
  (param_5->Hash)._padding_ = iVar23;
  (param_5->Hash).SecondaryData = FVar9;
  param_5->HashSize = iVar24;
  *(undefined4 *)&param_5->field_0x4c = uVar25;
  if (param_7 !=
      (TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *)0x0) {
    uVar1 = *(undefined8 *)&param_7->field_0x8;
    uVar2 = *(undefined8 *)&this->ThreadBudgetMap;
    uVar3 = *(undefined8 *)&(this->ThreadBudgetMap).field_0x8;
    uVar4 = *(undefined8 *)&(this->ThreadBudgetMap).field_0x10;
    uVar5 = *(undefined8 *)&(this->ThreadBudgetMap).field_0x18;
    uVar6 = *(undefined8 *)&(this->ThreadBudgetMap).field_0x20;
    uVar7 = *(undefined8 *)&(this->ThreadBudgetMap).field_0x28;
    uVar8 = *(undefined8 *)&(this->ThreadBudgetMap).field_0x30;
    uVar10 = *(undefined8 *)&(this->ThreadBudgetMap).field_0x38;
    uVar11 = *(undefined8 *)&(this->ThreadBudgetMap).field_0x40;
    uVar12 = *(undefined8 *)&(this->ThreadBudgetMap).field_0x48;
    *(undefined8 *)&this->ThreadBudgetMap = *(undefined8 *)param_7;
    *(undefined8 *)&(this->ThreadBudgetMap).field_0x8 = uVar1;
    uVar1 = *(undefined8 *)&param_7->field_0x18;
    *(undefined8 *)&(this->ThreadBudgetMap).field_0x10 = *(undefined8 *)&param_7->field_0x10;
    *(undefined8 *)&(this->ThreadBudgetMap).field_0x18 = uVar1;
    uVar1 = *(undefined8 *)&param_7->field_0x28;
    *(undefined8 *)&(this->ThreadBudgetMap).field_0x20 = *(undefined8 *)&param_7->field_0x20;
    *(undefined8 *)&(this->ThreadBudgetMap).field_0x28 = uVar1;
    uVar1 = *(undefined8 *)&param_7->field_0x38;
    *(undefined8 *)&(this->ThreadBudgetMap).field_0x30 = *(undefined8 *)&param_7->field_0x30;
    *(undefined8 *)&(this->ThreadBudgetMap).field_0x38 = uVar1;
    uVar1 = *(undefined8 *)&param_7->field_0x48;
    *(undefined8 *)&(this->ThreadBudgetMap).field_0x40 = *(undefined8 *)&param_7->field_0x40;
    *(undefined8 *)&(this->ThreadBudgetMap).field_0x48 = uVar1;
    *(undefined8 *)param_7 = uVar2;
    *(undefined8 *)&param_7->field_0x8 = uVar3;
    *(undefined8 *)&param_7->field_0x10 = uVar4;
    *(undefined8 *)&param_7->field_0x18 = uVar5;
    *(undefined8 *)&param_7->field_0x20 = uVar6;
    *(undefined8 *)&param_7->field_0x28 = uVar7;
    *(undefined8 *)&param_7->field_0x30 = uVar8;
    *(undefined8 *)&param_7->field_0x38 = uVar10;
    *(undefined8 *)&param_7->field_0x40 = uVar11;
    *(undefined8 *)&param_7->field_0x48 = uVar12;
  }
  if (param_8 != (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)0x0) {
    uVar1 = *(undefined8 *)&(param_8->Elements).field_0x8;
    uVar2 = *(undefined8 *)&(this->BudgetIgnoreStats).Elements;
    uVar3 = *(undefined8 *)&(this->BudgetIgnoreStats).Elements.field_0x8;
    uVar4 = *(undefined8 *)&(this->BudgetIgnoreStats).Elements.field_0x10;
    uVar5 = *(undefined8 *)&(this->BudgetIgnoreStats).Elements.field_0x18;
    uVar6 = *(undefined8 *)&(this->BudgetIgnoreStats).Elements.field_0x20;
    uVar7 = *(undefined8 *)&(this->BudgetIgnoreStats).Elements.field_0x28;
    uVar8 = *(undefined8 *)&(this->BudgetIgnoreStats).Elements.field_0x30;
    uVar19 = (this->BudgetIgnoreStats).Hash.InlineData[0];
    uVar20 = (this->BudgetIgnoreStats).Hash.InlineData[1];
    uVar21 = (this->BudgetIgnoreStats).Hash.InlineData[2];
    uVar22 = (this->BudgetIgnoreStats).Hash.InlineData[3];
    iVar23 = (this->BudgetIgnoreStats).Hash._padding_;
    FVar9 = (this->BudgetIgnoreStats).Hash.SecondaryData;
    iVar24 = (this->BudgetIgnoreStats).HashSize;
    uVar25 = *(undefined4 *)&(this->BudgetIgnoreStats).field_0x4c;
    *(undefined8 *)&(this->BudgetIgnoreStats).Elements = *(undefined8 *)&param_8->Elements;
    *(undefined8 *)&(this->BudgetIgnoreStats).Elements.field_0x8 = uVar1;
    uVar1 = *(undefined8 *)&(param_8->Elements).field_0x18;
    *(undefined8 *)&(this->BudgetIgnoreStats).Elements.field_0x10 =
         *(undefined8 *)&(param_8->Elements).field_0x10;
    *(undefined8 *)&(this->BudgetIgnoreStats).Elements.field_0x18 = uVar1;
    uVar1 = *(undefined8 *)&(param_8->Elements).field_0x28;
    *(undefined8 *)&(this->BudgetIgnoreStats).Elements.field_0x20 =
         *(undefined8 *)&(param_8->Elements).field_0x20;
    *(undefined8 *)&(this->BudgetIgnoreStats).Elements.field_0x28 = uVar1;
    uVar13 = (param_8->Hash).InlineData[0];
    uVar14 = (param_8->Hash).InlineData[1];
    uVar15 = (param_8->Hash).InlineData[2];
    uVar16 = (param_8->Hash).InlineData[3];
    iVar17 = (param_8->Hash)._padding_;
    *(undefined8 *)&(this->BudgetIgnoreStats).Elements.field_0x30 =
         *(undefined8 *)&(param_8->Elements).field_0x30;
    (this->BudgetIgnoreStats).Hash.InlineData[0] = uVar13;
    (this->BudgetIgnoreStats).Hash.InlineData[1] = uVar14;
    (this->BudgetIgnoreStats).Hash.InlineData[2] = uVar15;
    (this->BudgetIgnoreStats).Hash.InlineData[3] = uVar16;
    (this->BudgetIgnoreStats).Hash._padding_ = iVar17;
    iVar17 = param_8->HashSize;
    uVar18 = *(undefined4 *)&param_8->field_0x4c;
    (this->BudgetIgnoreStats).Hash.SecondaryData = (param_8->Hash).SecondaryData;
    (this->BudgetIgnoreStats).HashSize = iVar17;
    *(undefined4 *)&(this->BudgetIgnoreStats).field_0x4c = uVar18;
    *(undefined8 *)&param_8->Elements = uVar2;
    *(undefined8 *)&(param_8->Elements).field_0x8 = uVar3;
    *(undefined8 *)&(param_8->Elements).field_0x10 = uVar4;
    *(undefined8 *)&(param_8->Elements).field_0x18 = uVar5;
    *(undefined8 *)&(param_8->Elements).field_0x20 = uVar6;
    *(undefined8 *)&(param_8->Elements).field_0x28 = uVar7;
    *(undefined8 *)&(param_8->Elements).field_0x30 = uVar8;
    (param_8->Hash).InlineData[0] = uVar19;
    (param_8->Hash).InlineData[1] = uVar20;
    (param_8->Hash).InlineData[2] = uVar21;
    (param_8->Hash).InlineData[3] = uVar22;
    (param_8->Hash)._padding_ = iVar23;
    (param_8->Hash).SecondaryData = FVar9;
    param_8->HashSize = iVar24;
    *(undefined4 *)&param_8->field_0x4c = uVar25;
  }
  return this;
}

// ~FInternalGroup @ 1419d2a00

void __thiscall FInternalGroup::~FInternalGroup(FInternalGroup *this)

{
  ForElementType<FSetElementId> FVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  
  (this->BudgetIgnoreStats).HashSize = 0;
  FVar1 = (this->BudgetIgnoreStats).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->BudgetIgnoreStats).Elements);
  *(undefined4 *)&(this->ThreadBudgetMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ThreadBudgetMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ThreadBudgetMap);
  pFVar3 = (this->GroupDescription).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  (this->EnabledItems).HashSize = 0;
  FVar1 = (this->EnabledItems).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

