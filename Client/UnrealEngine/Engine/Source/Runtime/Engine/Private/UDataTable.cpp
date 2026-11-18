// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 40

// ForeachRow<FMirrorTableRow> @ 147599040

void __thiscall
UDataTable::ForeachRow<FMirrorTableRow>
          (UDataTable *this,wchar_t *param_1,
          TFunctionRef<void___cdecl(FName_const_&,FMirrorTableRow_const_&)> *param_2)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  UPackage *pUVar5;
  longlong *plVar6;
  longlong lVar7;
  TBitArray<FDefaultBitArrayAllocator> *pTVar8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  longlong *local_40;
  int iStack_38;
  uint uStack_34;
  TBitArray<FDefaultBitArrayAllocator> *local_30;
  undefined4 uStack_28;
  int iStack_24;
  int local_20;
  int iStack_1c;
  
  if (Z_Registration_Info_UScriptStruct_FMirrorTableRow.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FMirrorTableRow.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMirrorTableRow,(UObject *)pUVar5,
                         L"MirrorTableRow");
  }
  bVar4 = CommonTypeCheck(this,Z_Registration_Info_UScriptStruct_FMirrorTableRow.OuterSingleton,
                          L"UDataTable::ForeachRow",param_1);
  if (bVar4) {
    plVar6 = (longlong *)(**(code **)(this->_padding_ + 0x2d0))(this);
    iVar2 = (int)plVar6[5];
    iStack_38 = 0;
    uStack_34 = 1;
    local_20 = 0;
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)(plVar6 + 2);
    iStack_24 = 0;
    if (iVar2 != 0) {
      pTVar8 = (TBitArray<FDefaultBitArrayAllocator> *)plVar6[4];
      if ((TBitArray<FDefaultBitArrayAllocator> *)plVar6[4] ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar8 = TStack_60.Array;
      }
      uVar3 = *(uint *)(pTVar8->AllocatorInstance).InlineData;
      while (uVar3 == 0) {
        lVar7 = (longlong)iStack_38;
        local_20 = local_20 + 0x20;
        iStack_38 = iStack_38 + 1;
        iStack_24 = iVar2;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_38) goto LAB_14759913a;
        uVar3 = *(uint *)((pTVar8->AllocatorInstance).InlineData + lVar7 * 4 + 4);
      }
      uStack_34 = -uVar3 & uVar3;
      uVar1 = (ulonglong)uStack_34 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iStack_24 = local_20 + -1 + (int)lVar7;
      if (iVar2 < iStack_24) {
        iStack_24 = iVar2;
      }
    }
LAB_14759913a:
    uStack_28 = 0xffffffff;
    iStack_1c = TStack_60.CurrentBitIndex;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    TStack_60._28_4_ = TStack_60.CurrentBitIndex;
    TStack_60.BaseBitIndex = local_20;
    local_40 = plVar6;
    local_30 = TStack_60.Array;
    TStack_60._padding_._0_4_ = iStack_38;
    TStack_60._padding_._4_4_ = uStack_34;
    TStack_60.CurrentBitIndex = iStack_24;
    if (iStack_24 < iVar2) {
      do {
        (**(code **)param_2)
                  (*(undefined8 *)&param_2->field_0x8,
                   *plVar6 + (longlong)TStack_60.CurrentBitIndex * 0x18,
                   *(undefined8 *)(*plVar6 + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18));
        TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
      } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
    }
  }
  return;
}

// AllowDuplicateRowsOnImport @ 1475b2ff0

bool __thiscall UDataTable::AllowDuplicateRowsOnImport(UDataTable *this)

{
  return false;
}

// GetNonConstRowMap @ 1475d60d0

TMap<FName,unsigned_char_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>_>
* __thiscall UDataTable::GetNonConstRowMap(UDataTable *this)

{
  return &this->RowMap;
}

// GetRowMap @ 1475dd730

TMap<FName,unsigned_char_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>_>
* __thiscall UDataTable::GetRowMap(UDataTable *this)

{
  return &this->RowMap;
}

// GetRowMap @ 1475dd740

TMap<FName,unsigned_char_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>_>
* __thiscall UDataTable::GetRowMap(UDataTable *this)

{
  return &this->RowMap;
}

// NeedsLoadForClient @ 1475e64a0

bool __thiscall UDataTable::NeedsLoadForClient(UDataTable *this)

{
  bool bVar1;
  
  if (this->bStripFromClientBuilds != 0) {
    return false;
  }
  bVar1 = UObject::NeedsLoadForClient((UObject *)this);
  return bVar1;
}

// NeedsLoadForEditorGame @ 1475e64c0

bool __thiscall UDataTable::NeedsLoadForEditorGame(UDataTable *this)

{
  return false;
}

// StaticClass @ 1475feb60

UClass * __cdecl UDataTable::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UDataTable.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DataTable",&Z_Registration_Info_UClass_UDataTable.InnerSingleton,
               StaticRegisterNativesUDataTable,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDataTable>,InternalVTableHelperCtorCaller<UDataTable>,aFStackX_8
               ,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataTable.InnerSingleton;
}

// UDataTable @ 147abc980

UDataTable * __thiscall UDataTable::UDataTable(UDataTable *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDataTable__6B_;
  (this->RowStruct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  *(undefined8 *)&this->RowMap = 0;
  *(undefined8 *)&(this->RowMap).field_0x8 = 0;
  *(undefined8 *)&(this->RowMap).field_0x20 = 0;
  *(undefined4 *)&(this->RowMap).field_0x28 = 0;
  *(undefined4 *)&(this->RowMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->RowMap).field_0x34 = 0;
  *(undefined4 *)&(this->RowMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->RowMap).field_0x40 = 0;
  *(undefined4 *)&(this->RowMap).field_0x48 = 0;
  (this->ImportKeyField).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ImportKeyField).Data.ArrayNum = 0;
  (this->ImportKeyField).Data.ArrayMax = 0;
  *(undefined8 *)&this->OnDataTableChangedDelegate = 0;
  *(undefined8 *)&(this->OnDataTableChangedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnDataTableChangedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnDataTableChangedDelegate).field_0x18 = 2;
  return this;
}

// UDataTable @ 147abca10

UDataTable * __thiscall UDataTable::UDataTable(UDataTable *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDataTable__6B_;
  (this->RowStruct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  *(undefined8 *)&this->RowMap = 0;
  *(undefined8 *)&(this->RowMap).field_0x8 = 0;
  *(undefined8 *)&(this->RowMap).field_0x20 = 0;
  *(undefined4 *)&(this->RowMap).field_0x28 = 0;
  *(undefined4 *)&(this->RowMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->RowMap).field_0x34 = 0;
  *(undefined4 *)&(this->RowMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->RowMap).field_0x40 = 0;
  *(undefined4 *)&(this->RowMap).field_0x48 = 0;
  this->bStripFromClientBuilds = '\0';
  this->bPreserveExistingValues = '\0';
  this->bIgnoreMissingFields = '\0';
  this->bIgnoreExtraFields = '\0';
  (this->ImportKeyField).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ImportKeyField).Data.ArrayNum = 0;
  (this->ImportKeyField).Data.ArrayMax = 0;
  *(undefined8 *)&this->OnDataTableChangedDelegate = 0;
  *(undefined8 *)&(this->OnDataTableChangedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnDataTableChangedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnDataTableChangedDelegate).field_0x18 = 2;
  return this;
}

// ~UDataTable @ 147abf580

void __thiscall UDataTable::~UDataTable(UDataTable *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UDataTable__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnDataTableChangedDelegate).field_0x8,
             *(int *)&(this->OnDataTableChangedDelegate).field_0x10);
  pvVar1 = *(void **)&(this->OnDataTableChangedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDataTableChangedDelegate);
  pFVar2 = (this->ImportKeyField).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->RowMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->RowMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RowMap);
  UObject::~UObject((UObject *)this);
  return;
}

// AddReferencedObjects @ 147ac4e00

void __cdecl UDataTable::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  ulonglong uVar1;
  void *pvVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  UClass *pUVar8;
  FString *pFVar9;
  int iVar10;
  int iVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  int iVar14;
  ForElementType<unsigned_int> FVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  FReferenceCollector *this;
  uint uVar19;
  undefined1 local_res8 [8];
  FReferenceCollector *local_res10;
  int local_res18;
  ForElementType<unsigned_int> local_res20;
  undefined4 uStack_ac;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  undefined8 uStack_80;
  FString local_78;
  FString local_68;
  FString local_58;
  
  local_res10 = param_2;
  if (param_1 == (UObject *)0x0) {
    pFVar9 = GetTypeName<UDataTable>(&local_78);
    if ((pFVar9->Data).ArrayNum == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar13);
  }
  pUVar8 = StaticClass();
  iVar11 = (int)pUVar8->_padding_;
  if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar11) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar11 * 8) !=
      &pUVar8->_padding_)) {
    pFVar9 = GetTypeName<UDataTable>(&local_68);
    pwVar13 = L"";
    if ((pFVar9->Data).ArrayNum == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
    pFVar9 = GetFullNameForCastLogError<UObject>(&local_58,param_1);
    if ((pFVar9->Data).ArrayNum != 0) {
      pwVar13 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar13,pwVar12);
  }
  this = local_res10;
  if ((*(longlong *)(param_1 + 1) != 0) && (*(longlong *)(*(longlong *)(param_1 + 1) + 0x78) != 0))
  {
    iVar14 = 0;
    iVar11 = *(int *)&param_1[2].field_0x8;
    local_res20 = (ForElementType<unsigned_int>)&param_1[1].field_0x18;
    uVar6 = 1;
    iVar7 = 0;
    iVar16 = 0;
    iVar10 = 0;
    if (iVar11 != 0) {
      puVar17 = *(uint **)(param_1 + 2);
      if (*(uint **)(param_1 + 2) == (uint *)0x0) {
        puVar17 = (uint *)local_res20;
      }
      uVar18 = *puVar17;
      while (uVar18 == 0) {
        iVar14 = iVar14 + 1;
        iVar16 = iVar16 + 0x20;
        iVar7 = iVar11;
        if ((int)((iVar11 + -1 >> 0x1f & 0x1fU) + iVar11 + -1) >> 5 < iVar14) goto LAB_147ac4f0c;
        uVar18 = puVar17[iVar14];
      }
      uVar6 = -uVar18 & uVar18;
      uVar1 = (ulonglong)uVar6 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      local_res18 = (int)lVar3;
      iVar7 = local_res18 + -1 + iVar16;
      if (iVar11 < iVar7) {
        iVar7 = iVar11;
      }
LAB_147ac4f0c:
      iVar10 = *(int *)&param_1[2].field_0x8;
    }
    uVar18 = *(uint *)&param_1[2].field_0x8;
    uVar19 = uVar18 & 0xffffffe0;
    TStack_a0._padding_ = CONCAT44(uVar6,iVar14);
    TStack_a0.CurrentBitIndex = iVar7;
    TStack_a0.UnvisitedBitMask = 0xffffffff;
    iVar11 = (int)uVar18 >> 5;
    TStack_a0._28_4_ = iVar7;
    TStack_a0.BaseBitIndex = iVar16;
    uStack_80 = CONCAT44(uStack_ac,*(int *)&param_1[1].field_0x10 - *(int *)&param_1[2].field_0x14);
    TStack_a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_res20;
    if ((((int)uVar18 < 0) || (iVar10 < (int)uVar18)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    this = local_res10;
    uVar6 = *(int *)((longlong)local_res20 + 0x18);
    if (uVar18 != uVar6) {
      FVar15 = local_res20;
      if (*(ForElementType<unsigned_int> *)((longlong)local_res20 + 0x10) !=
          (ForElementType<unsigned_int>)0x0) {
        FVar15 = *(ForElementType<unsigned_int> *)((longlong)local_res20 + 0x10);
      }
      uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)((longlong)FVar15 + (longlong)iVar11 * 4);
      while (uVar18 == 0) {
        iVar11 = iVar11 + 1;
        uVar19 = uVar19 + 0x20;
        uVar18 = uVar6;
        if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar11)
        goto LAB_147ac5020;
        uVar18 = *(uint *)((longlong)FVar15 + (longlong)iVar11 * 4);
      }
      uVar1 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uVar18 = (int)lVar3 + -1 + uVar19;
      if ((int)uVar6 < (int)uVar18) {
        uVar18 = uVar6;
      }
    }
LAB_147ac5020:
    while( true ) {
      if (*(int *)&param_1[1].field_0x10 - *(int *)&param_1[2].field_0x14 != (int)uStack_80) {
        `TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TStack_a0.CurrentBitIndex == uVar18) &&
         ((ForElementType<unsigned_int>)TStack_a0.Array == local_res20)) break;
      pvVar2 = *(void **)(*(longlong *)&param_1[1].field_0x8 + 8 +
                         (longlong)TStack_a0.CurrentBitIndex * 0x18);
      if (pvVar2 != (void *)0x0) {
        FReferenceCollector::AddPropertyReferencesWithStructARO
                  (this,*(UScriptStruct **)(param_1 + 1),pvVar2,param_1);
      }
      TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
    }
  }
  UObject::AddReferencedObjects(param_1,this);
  return;
}

// AddRow @ 147ac57a0

void __thiscall UDataTable::AddRow(UDataTable *this,FName param_1,FTableRowBase *param_2)

{
  int *piVar1;
  UScriptStruct *this_00;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  FScopedDataTableChange local_18;
  
  local_18.RowName.ComparisonIndex.Value = 0;
  local_18.RowName.Number = 0;
  local_18.Table = this;
  EnterCriticalSection((LPCRITICAL_SECTION)&FScopedDataTableChange::CriticalSection);
  uVar3 = ((uint)((ulonglong)local_18.Table >> 0x14) & 0xffff ^
          (uint)((ulonglong)local_18.Table >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  piVar1 = TMapBase<UDataTable_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UDataTable_*,int,0>_>
           ::FindOrAddImpl<UDataTable_*_const_&>
                     ((TMapBase<UDataTable_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UDataTable_*,int,0>_>
                       *)&FScopedDataTableChange::ScopeCount,uVar3 >> 0x10 ^ uVar3,&local_18.Table);
  *piVar1 = *piVar1 + 1;
  local_18.RowName = param_1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&FScopedDataTableChange::CriticalSection);
  this_00 = GetEmptyUsingStruct(this);
  (**(code **)(this->_padding_ + 0x2c0))(this,param_1);
  iVar4 = (int)*(short *)((longlong)&this_00->_padding_ + 4);
  pvVar2 = FMemory::Malloc((longlong)((int)this_00->_padding_ + -1 + iVar4 & -iVar4),0);
  (**(code **)(this_00->_padding_ + 0x2f8))(this_00,pvVar2,1);
  UScriptStruct::CopyScriptStruct(this_00,pvVar2,param_2,1);
  (**(code **)(this->_padding_ + 0x2b8))(this,param_1,pvVar2);
  FScopedDataTableChange::~FScopedDataTableChange(&local_18);
  return;
}

// AddRow @ 147ac58e0

void __thiscall
UDataTable::AddRow(UDataTable *this,FName param_1,uchar *param_2,UScriptStruct *param_3)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  UScriptStruct *this_00;
  void *pvVar4;
  uint uVar5;
  int iVar6;
  FScopedDataTableChange local_48;
  FString local_38;
  FString local_28;
  
  local_48.RowName.ComparisonIndex.Value = 0;
  local_48.RowName.Number = 0;
  local_48.Table = this;
  EnterCriticalSection((LPCRITICAL_SECTION)&FScopedDataTableChange::CriticalSection);
  uVar5 = ((uint)((ulonglong)local_48.Table >> 0x14) & 0xffff ^
          (uint)((ulonglong)local_48.Table >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  piVar3 = TMapBase<UDataTable_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UDataTable_*,int,0>_>
           ::FindOrAddImpl<UDataTable_*_const_&>
                     ((TMapBase<UDataTable_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UDataTable_*,int,0>_>
                       *)&FScopedDataTableChange::ScopeCount,uVar5 >> 0x10 ^ uVar5,&local_48.Table);
  *piVar3 = *piVar3 + 1;
  local_48.RowName = param_1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&FScopedDataTableChange::CriticalSection);
  this_00 = GetEmptyUsingStruct(this);
  if (param_3 != this_00) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_28,(UObject *)0x0);
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_3,&local_38,(UObject *)0x0);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("RowType == &EmptyUsingStruct",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataTable.cpp"
                       ,0x226,
                       L"AddRow called with an incompatible row type! Got \'%s\', but expected \'%s\'"
                      );
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (**(code **)(this->_padding_ + 0x2c0))(this,param_1);
  iVar6 = (int)*(short *)((longlong)&this_00->_padding_ + 4);
  pvVar4 = FMemory::Malloc((longlong)((int)this_00->_padding_ + -1 + iVar6 & -iVar6),0);
  (**(code **)(this_00->_padding_ + 0x2f8))(this_00,pvVar4,1);
  UScriptStruct::CopyScriptStruct(this_00,pvVar4,param_2,1);
  (**(code **)(this->_padding_ + 0x2b8))(this,param_1,pvVar4);
  FScopedDataTableChange::~FScopedDataTableChange(&local_48);
  return;
}

// AddRowInternal @ 147ac5ad0

void __thiscall UDataTable::AddRowInternal(UDataTable *this,FName param_1,uchar *param_2)

{
  TPairInitializer<FName_const_&,unsigned_char_*_const_&> local_res8;
  uchar *local_res18 [2];
  uchar ***local_18;
  uchar **local_10;
  
  local_18 = &local_res8.Value;
  local_10 = local_res18;
  local_res8.Value = (uchar **)param_1;
  local_res18[0] = param_2;
  TSet<TTuple<FName,unsigned_char_*>,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,unsigned_char_*_const_&>_>
            ((TSet<TTuple<FName,unsigned_char_*>,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>,FDefaultSetAllocator>
              *)&this->RowMap,&local_res8,(bool *)&local_18);
  return;
}

// CommonTypeCheck @ 147acaf80

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDataTable::CommonTypeCheck
          (UDataTable *this,UScriptStruct *param_1,wchar_t *param_2,wchar_t *param_3)

{
  int iVar1;
  UScriptStruct *pUVar2;
  bool bVar3;
  FString *pFVar4;
  FStaticBasicLogRecord *pFVar5;
  FString local_18;
  
  pUVar2 = (this->RowStruct).field0_0x0.DebugPtr;
  if (pUVar2 == (UScriptStruct *)0x0) {
    if ((byte)LogDataTable._0_1_ < 2) {
      return false;
    }
    pFVar4 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
    if ((pFVar4->Data).ArrayNum == 0) {
      pFVar5 = &::LOG_Static;
    }
    else {
      pFVar5 = &::LOG_Static;
    }
  }
  else {
    if (param_1 != (UScriptStruct *)0x0) {
      iVar1 = (int)param_1->_padding_;
      if (((int)pUVar2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
          &param_1->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        return true;
      }
    }
    if ((byte)LogDataTable._0_1_ < 2) {
      return false;
    }
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
    pFVar5 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<2>(pFVar5,(FLogCategoryBase *)&LogDataTable);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return false;
}

// CreateTableFromCSVString @ 147acebe0

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UDataTable::CreateTableFromCSVString
          (UDataTable *this,TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FString *param_1)

{
  FScriptContainerElement *pFVar1;
  int *piVar2;
  FString *pFVar3;
  uint uVar4;
  FScopedDataTableChange local_48;
  FString local_38;
  FDataTableImporterCSV local_28;
  
  local_48.RowName.ComparisonIndex.Value = 0;
  local_48.RowName.Number = 0;
  local_48.Table = this;
  EnterCriticalSection((LPCRITICAL_SECTION)&FScopedDataTableChange::CriticalSection);
  uVar4 = ((uint)((ulonglong)local_48.Table >> 0x14) & 0xffff ^
          (uint)((ulonglong)local_48.Table >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  piVar2 = TMapBase<UDataTable_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UDataTable_*,int,0>_>
           ::FindOrAddImpl<UDataTable_*_const_&>
                     ((TMapBase<UDataTable_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UDataTable_*,int,0>_>
                       *)&FScopedDataTableChange::ScopeCount,uVar4 >> 0x10 ^ uVar4,&local_48.Table);
  local_48.RowName.ComparisonIndex.Value = 0;
  local_48.RowName.Number = 0;
  *piVar2 = *piVar2 + 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&FScopedDataTableChange::CriticalSection);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar3 = ::FString::FString(&local_38,param_1);
  local_28.CSVData.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
  (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.CSVData.Data.ArrayNum = (pFVar3->Data).ArrayNum;
  local_28.CSVData.Data.ArrayMax = (pFVar3->Data).ArrayMax;
  (pFVar3->Data).ArrayNum = 0;
  (pFVar3->Data).ArrayMax = 0;
  pFVar1 = (pFVar3->Data).AllocatorInstance.Data;
  local_28.DataTable = this;
  local_28.ImportProblems = __return_storage_ptr__;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FDataTableImporterCSV::ReadTable(&local_28);
  if (local_28.CSVData.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.CSVData.Data.AllocatorInstance.Data);
  }
  OnPostDataImported(this,__return_storage_ptr__);
  FScopedDataTableChange::~FScopedDataTableChange(&local_48);
  return __return_storage_ptr__;
}

// CreateTableFromJSONString @ 147aced10

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UDataTable::CreateTableFromJSONString
          (UDataTable *this,TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FString *param_1)

{
  int *piVar1;
  uint uVar2;
  FScopedDataTableChange local_38;
  FDataTableImporterJSON local_28;
  
  local_38.RowName.ComparisonIndex.Value = 0;
  local_38.RowName.Number = 0;
  local_38.Table = this;
  EnterCriticalSection((LPCRITICAL_SECTION)&FScopedDataTableChange::CriticalSection);
  uVar2 = ((uint)((ulonglong)local_38.Table >> 0x14) & 0xffff ^
          (uint)((ulonglong)local_38.Table >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  piVar1 = TMapBase<UDataTable_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UDataTable_*,int,0>_>
           ::FindOrAddImpl<UDataTable_*_const_&>
                     ((TMapBase<UDataTable_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UDataTable_*,int,0>_>
                       *)&FScopedDataTableChange::ScopeCount,uVar2 >> 0x10 ^ uVar2,&local_38.Table);
  local_38.RowName.ComparisonIndex.Value = 0;
  local_38.RowName.Number = 0;
  *piVar1 = *piVar1 + 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&FScopedDataTableChange::CriticalSection);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_28.DataTable = this;
  local_28.JSONData = param_1;
  local_28.ImportProblems = __return_storage_ptr__;
  FDataTableImporterJSON::ReadTable(&local_28);
  OnPostDataImported(this,__return_storage_ptr__);
  FScopedDataTableChange::~FScopedDataTableChange(&local_38);
  return __return_storage_ptr__;
}

// CreateTableFromOtherTable @ 147acee00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000147acef91) */

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UDataTable::CreateTableFromOtherTable
          (UDataTable *this,TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UDataTable *param_1)

{
  ulonglong uVar1;
  TBitArray<FDefaultBitArrayAllocator> *pTVar2;
  code *pcVar3;
  longlong *plVar4;
  bool bVar5;
  int iVar6;
  int *piVar7;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar8;
  TSet<TTuple<FName,unsigned_char_*>,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>,FDefaultSetAllocator>
  *pTVar9;
  UScriptStruct *pUVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  TBitArray<FDefaultBitArrayAllocator> *pTVar15;
  undefined1 auStack_188 [32];
  FString *local_168;
  FScriptContainerElement *local_160;
  longlong local_158;
  longlong local_150;
  undefined8 local_148;
  FString local_138;
  undefined1 local_128 [16];
  undefined8 local_118;
  undefined8 local_110;
  void *local_108;
  longlong *local_100;
  int iStack_f8;
  uint uStack_f4;
  TBitArray<FDefaultBitArrayAllocator> *local_f0;
  undefined4 uStack_e8;
  int iStack_e4;
  int local_e0;
  int iStack_dc;
  longlong *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  longlong local_a8;
  void **local_a0;
  undefined1 local_98 [32];
  TBitArray<FDefaultBitArrayAllocator> *local_78;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  pTVar2 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  local_48 = __security_cookie.value ^ (ulonglong)auStack_188;
  iVar13 = 0;
  local_118 = 0;
  local_128._8_8_ = this;
  EnterCriticalSection((LPCRITICAL_SECTION)&FScopedDataTableChange::CriticalSection);
  uVar11 = ((uint)((ulonglong)local_128._8_8_ >> 0x14) & 0xffff ^
           (uint)((ulonglong)local_128._8_8_ >> 4)) * -0x7a143595;
  uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
  piVar7 = TMapBase<UDataTable_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UDataTable_*,int,0>_>
           ::FindOrAddImpl<UDataTable_*_const_&>
                     ((TMapBase<UDataTable_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UDataTable_*,int,0>_>
                       *)&FScopedDataTableChange::ScopeCount,uVar11 >> 0x10 ^ uVar11,
                      (UDataTable **)(local_128 + 8));
  local_110 = 0;
  iVar6 = 0;
  local_118 = 0;
  *piVar7 = *piVar7 + 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&FScopedDataTableChange::CriticalSection);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (param_1 == (UDataTable *)0x0) {
    ::FString::FString(&local_138,L"No input table provided");
    pFVar14 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar14 <= (FScriptContainerElement *)&local_138) &&
       ((FScriptContainerElement *)&local_138 <
        pFVar14 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
      local_150 = (longlong)__return_storage_ptr__->ArrayNum;
      local_148 = 0x10;
      local_168 = &local_138;
      local_160 = pFVar14;
      local_158 = (longlong)__return_storage_ptr__->ArrayMax;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar8;
      }
    }
    iVar6 = __return_storage_ptr__->ArrayNum;
    if (iVar6 == __return_storage_ptr__->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar6 + 1;
    pFVar14 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
    *(undefined8 *)pFVar14 = 0;
    *(FScriptContainerElement **)pFVar14 = local_138.Data.AllocatorInstance.Data;
    local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar14 + 8) = local_138.Data.ArrayNum;
    *(int *)(pFVar14 + 0xc) = local_138.Data.ArrayMax;
    local_138.Data.ArrayNum = 0;
    local_138.Data.ArrayMax = 0;
  }
  else {
    if (((this->RowStruct).field0_0x0.DebugPtr != (UScriptStruct *)0x0) &&
       (0 < *(int *)&(this->RowMap).field_0x8 - *(int *)&(this->RowMap).field_0x34)) {
      (**(code **)(this->_padding_ + 0x2e0))(this);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar10 = (param_1->RowStruct).field0_0x0.DebugPtr, pUVar10 != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar10);
    }
    (this->RowStruct).field0_0x0 = (param_1->RowStruct).field0_0x0;
    pTVar9 = (TSet<TTuple<FName,unsigned_char_*>,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>,FDefaultSetAllocator>
              *)(**(code **)(param_1->_padding_ + 0x2d0))(param_1);
    local_98._0_8_ = 0;
    local_98._8_8_ = 0;
    local_78 = (TBitArray<FDefaultBitArrayAllocator> *)0x0;
    local_70 = 0;
    local_6c = 0x80;
    local_68 = 0xffffffff;
    local_64 = 0;
    local_58 = (ForElementType<FSetElementId>)0x0;
    local_50 = 0;
    TSet<TTuple<FName,unsigned_char_*>,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<FName,unsigned_char_*>,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>,FDefaultSetAllocator>
                 *)local_98,pTVar9);
    pUVar10 = GetEmptyUsingStruct(this);
    uStack_f4 = 1;
    local_e0 = 0;
    iStack_e4 = iVar13;
    if (local_70 != 0) {
      pTVar15 = pTVar2;
      if (local_78 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar15 = local_78;
      }
      uVar11 = *(uint *)(pTVar15->AllocatorInstance).InlineData;
      local_e0 = iVar13;
      iVar6 = iVar13;
      while (uVar11 == 0) {
        lVar12 = (longlong)iVar6;
        local_e0 = local_e0 + 0x20;
        iVar6 = iVar6 + 1;
        iStack_e4 = local_70;
        if ((int)(local_70 + -1 + (local_70 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar6) goto LAB_147acf0ae;
        uVar11 = *(uint *)((pTVar15->AllocatorInstance).InlineData + lVar12 * 4 + 4);
      }
      uStack_f4 = -uVar11 & uVar11;
      uVar1 = (ulonglong)uStack_f4 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iStack_e4 = local_e0 + -1 + (int)lVar12;
      if (local_70 < iStack_e4) {
        iStack_e4 = local_70;
      }
    }
LAB_147acf0ae:
    local_100 = (longlong *)local_98;
    uStack_e8 = 0xffffffff;
    TStack_c8._padding_ = CONCAT44(uStack_f4,iVar6);
    TStack_c8.CurrentBitIndex = iStack_e4;
    TStack_c8.UnvisitedBitMask = 0xffffffff;
    TStack_c8._28_4_ = iStack_e4;
    TStack_c8.BaseBitIndex = local_e0;
    iStack_f8 = iVar6;
    local_f0 = pTVar2;
    iStack_dc = iStack_e4;
    local_d0 = local_100;
    TStack_c8.Array = pTVar2;
    if (iStack_e4 < local_70) {
      local_a0 = &local_108;
      iVar6 = iStack_e4;
      do {
        iVar13 = (int)*(short *)((longlong)&pUVar10->_padding_ + 4);
        local_108 = FMemory::Malloc((longlong)((int)pUVar10->_padding_ + -1 + iVar13 & -iVar13),0);
        (**(code **)(pUVar10->_padding_ + 0x2f8))(pUVar10,local_108,1);
        plVar4 = local_d0;
        UScriptStruct::CopyScriptStruct
                  (pUVar10,local_108,*(void **)((longlong)iVar6 * 0x18 + 8 + *local_d0),1);
        local_a8 = *plVar4 + (longlong)iVar6 * 0x18;
        TSet<TTuple<FName,unsigned_char_*>,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FName_const_&,unsigned_char_*_const_&>_>
                  ((TSet<TTuple<FName,unsigned_char_*>,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>,FDefaultSetAllocator>
                    *)&this->RowMap,
                   (TPairInitializer<FName_const_&,unsigned_char_*_const_&> *)local_128,
                   (bool *)&local_a8);
        TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
        iVar6 = TStack_c8.CurrentBitIndex;
      } while (TStack_c8.CurrentBitIndex < (TStack_c8.Array)->NumBits);
    }
    local_50 = 0;
    if (local_58 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_58);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_98);
  }
  FScopedDataTableChange::~FScopedDataTableChange((FScopedDataTableChange *)(local_128 + 8));
  return __return_storage_ptr__;
}

// CreateTableFromRawData @ 147acf220

/* WARNING: Removing unreachable block (ram,0x000147acf393) */

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UDataTable::CreateTableFromRawData
          (UDataTable *this,TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TMap<FName,unsigned_char_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char_const_*,0>_>
          *param_1,UScriptStruct *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  TMap<FName,unsigned_char_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char_const_*,0>_>
  *pTVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar7;
  UScriptStruct *this_00;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  uint *puVar12;
  TPairInitializer<FName_const_&,unsigned_char_*_const_&> local_res8;
  void *local_res20;
  FString local_c8;
  FScopedDataTableChange local_b8;
  TMap<FName,unsigned_char_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char_const_*,0>_>
  *local_a8;
  int iStack_a0;
  uint uStack_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  TMap<FName,unsigned_char_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char_const_*,0>_>
  *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  longlong local_50;
  void **local_48;
  
  local_b8.RowName.ComparisonIndex.Value = 0;
  local_b8.RowName.Number = 0;
  local_b8.Table = this;
  EnterCriticalSection((LPCRITICAL_SECTION)&FScopedDataTableChange::CriticalSection);
  uVar8 = ((uint)((ulonglong)local_b8.Table >> 0x14) & 0xffff ^
          (uint)((ulonglong)local_b8.Table >> 4)) * -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  piVar6 = TMapBase<UDataTable_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UDataTable_*,int,0>_>
           ::FindOrAddImpl<UDataTable_*_const_&>
                     ((TMapBase<UDataTable_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UDataTable_*,int,0>_>
                       *)&FScopedDataTableChange::ScopeCount,uVar8 >> 0x10 ^ uVar8,&local_b8.Table);
  local_b8.RowName.ComparisonIndex.Value = 0;
  local_b8.RowName.Number = 0;
  iVar5 = 0;
  local_res8.Value = (uchar **)0x0;
  *piVar6 = *piVar6 + 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&FScopedDataTableChange::CriticalSection);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (param_2 == (UScriptStruct *)0x0) {
    ::FString::FString(&local_c8,L"No input struct provided");
    pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar11 <= (FScriptContainerElement *)&local_c8) &&
        ((FScriptContainerElement *)&local_c8 <
         pFVar11 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar7;
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == __return_storage_ptr__->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    *(undefined8 *)pFVar11 = 0;
    *(FScriptContainerElement **)pFVar11 = local_c8.Data.AllocatorInstance.Data;
    local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar11 + 8) = local_c8.Data.ArrayNum;
    *(int *)(pFVar11 + 0xc) = local_c8.Data.ArrayMax;
    local_c8.Data.ArrayNum = 0;
    local_c8.Data.ArrayMax = 0;
  }
  else {
    if (((this->RowStruct).field0_0x0.DebugPtr != (UScriptStruct *)0x0) &&
       (0 < *(int *)&(this->RowMap).field_0x8 - *(int *)&(this->RowMap).field_0x34)) {
      (**(code **)(this->_padding_ + 0x2e0))(this);
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    (this->RowStruct).field0_0x0.DebugPtr = param_2;
    this_00 = GetEmptyUsingStruct(this);
    iVar10 = *(int *)&param_1->field_0x28;
    local_98 = &param_1->field_0x10;
    uStack_9c = 1;
    local_88 = iVar5;
    iStack_8c = 0;
    if (iVar10 != 0) {
      puVar12 = *(uint **)&param_1->field_0x20;
      if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
        puVar12 = (uint *)local_98;
      }
      uVar8 = *puVar12;
      local_88 = 0;
      iVar5 = 0;
      while (uVar8 == 0) {
        lVar9 = (longlong)iVar5;
        local_88 = local_88 + 0x20;
        iVar5 = iVar5 + 1;
        iStack_8c = iVar10;
        if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar5) goto LAB_147acf45b;
        uVar8 = puVar12[lVar9 + 1];
      }
      uStack_9c = -uVar8 & uVar8;
      uVar1 = (ulonglong)uStack_9c * 2 + 1;
      lVar9 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iStack_8c = local_88 + -1 + (int)lVar9;
      if (iVar10 < iStack_8c) {
        iStack_8c = iVar10;
      }
    }
LAB_147acf45b:
    uStack_90 = 0xffffffff;
    TStack_70._padding_ = CONCAT44(uStack_9c,iVar5);
    TStack_70.CurrentBitIndex = iStack_8c;
    TStack_70.UnvisitedBitMask = 0xffffffff;
    TStack_70._28_4_ = iStack_8c;
    TStack_70.BaseBitIndex = local_88;
    local_a8 = param_1;
    iStack_a0 = iVar5;
    iStack_84 = iStack_8c;
    local_78 = param_1;
    TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_98;
    if (iStack_8c < iVar10) {
      local_48 = &local_res20;
      iVar5 = iStack_8c;
      do {
        iVar10 = (int)*(short *)((longlong)&this_00->_padding_ + 4);
        local_res20 = FMemory::Malloc((longlong)((int)this_00->_padding_ + -1 + iVar10 & -iVar10),0)
        ;
        (**(code **)(this_00->_padding_ + 0x2f8))(this_00,local_res20,1);
        pTVar3 = local_78;
        UScriptStruct::CopyScriptStruct
                  (this_00,local_res20,
                   *(void **)(*(longlong *)local_78 + 8 + (longlong)iVar5 * 0x18),1);
        local_50 = *(longlong *)pTVar3 + (longlong)iVar5 * 0x18;
        TSet<TTuple<FName,unsigned_char_*>,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FName_const_&,unsigned_char_*_const_&>_>
                  ((TSet<TTuple<FName,unsigned_char_*>,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>,FDefaultSetAllocator>
                    *)&this->RowMap,&local_res8,(bool *)&local_50);
        TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
        iVar5 = TStack_70.CurrentBitIndex;
      } while (TStack_70.CurrentBitIndex < (TStack_70.Array)->NumBits);
    }
  }
  FScopedDataTableChange::~FScopedDataTableChange(&local_b8);
  return __return_storage_ptr__;
}

// EmptyTable @ 147ad62e0

void __thiscall UDataTable::EmptyTable(UDataTable *this)

{
  TMap<FName,unsigned_char_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>_>
  *this_00;
  undefined1 *puVar1;
  void *pvVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  int *piVar6;
  UScriptStruct *pUVar7;
  uint uVar8;
  ulonglong uVar9;
  FScopedDataTableChange local_98;
  undefined1 local_88 [32];
  longlong local_68;
  TSet<TTuple<FName,unsigned_char_*>,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>,FDefaultSetAllocator>
  *pTStack_60;
  longlong *local_58;
  undefined1 auStack_50 [16];
  uint uStack_40;
  uint uStack_3c;
  longlong local_38;
  TSet<TTuple<FName,unsigned_char_*>,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>,FDefaultSetAllocator>
  *pTStack_30;
  TSet<TTuple<FName,unsigned_char_*>,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>,FDefaultSetAllocator>
  *local_28;
  undefined2 local_20;
  
  local_98.RowName.ComparisonIndex.Value = 0;
  local_98.RowName.Number = 0;
  local_98.Table = this;
  EnterCriticalSection((LPCRITICAL_SECTION)&FScopedDataTableChange::CriticalSection);
  uVar8 = ((uint)((ulonglong)local_98.Table >> 0x14) & 0xffff ^
          (uint)((ulonglong)local_98.Table >> 4)) * -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  piVar6 = TMapBase<UDataTable_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UDataTable_*,int,0>_>
           ::FindOrAddImpl<UDataTable_*_const_&>
                     ((TMapBase<UDataTable_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UDataTable_*,int,0>_>
                       *)&FScopedDataTableChange::ScopeCount,uVar8 >> 0x10 ^ uVar8,&local_98.Table);
  local_98.RowName.ComparisonIndex.Value = 0;
  local_98.RowName.Number = 0;
  *piVar6 = *piVar6 + 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&FScopedDataTableChange::CriticalSection);
  pUVar7 = GetEmptyUsingStruct(this);
  this_00 = &this->RowMap;
  TSet<TTuple<FName,unsigned_char_*>,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_88,
             (TSet<TTuple<FName,unsigned_char_*>,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>,FDefaultSetAllocator>
              *)this_00);
  local_20 = 0;
  stack0xffffffffffffffb8 = local_88._16_16_;
  local_58 = (longlong *)local_88._0_8_;
  auStack_50._0_8_ = local_88._8_8_;
  local_38 = local_68;
  pTStack_30 = pTStack_60;
  uVar9 = local_88._24_8_ >> 0x20;
  local_28 = (TSet<TTuple<FName,unsigned_char_*>,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>,FDefaultSetAllocator>
              *)this_00;
  if (local_88._28_4_ < *(int *)(local_88._16_8_ + 0x18)) {
    do {
      pvVar2 = *(void **)(*local_58 + 8 + (longlong)(int)uVar9 * 0x18);
      (**(code **)(pUVar7->_padding_ + 0x300))(pUVar7);
      FMemory::Free(pvVar2);
      uStack_40 = uStack_40 & ~auStack_50._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_50);
      uVar9 = (ulonglong)uStack_3c;
    } while ((int)uStack_3c < *(int *)(auStack_50._8_8_ + 0x18));
    if (((char)local_20 != '\0') && (local_20._1_1_ != '\0')) {
      uVar8 = *(int *)&(local_28->Elements).field_0x8 - *(int *)&(local_28->Elements).field_0x34;
      if (uVar8 < 4) {
        iVar5 = 1;
      }
      else {
        uVar9 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
        lVar4 = 0x3f;
        if (uVar9 != 0) {
          for (; uVar9 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        iVar5 = 1 << ((byte)lVar4 & 0x1f);
      }
      if (((0 < (int)uVar8) && (local_28->HashSize < iVar5)) || (iVar5 < local_28->HashSize)) {
        local_28->HashSize = iVar5;
        TSet<TTuple<FName,unsigned_char_*>,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>,FDefaultSetAllocator>
        ::Rehash(local_28);
      }
    }
  }
  bVar3 = 1 < *(int *)&(this->RowMap).field_0x48;
  if (!bVar3) {
    TSet<TTuple<FName,unsigned_char_*>,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FName,unsigned_char_*>,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar1 = &(this->RowMap).field_0xc;
  *(undefined4 *)&(this->RowMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->RowMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RowMap).field_0x34 = 0;
  iVar5 = *(int *)&(this->RowMap).field_0x2c;
  *(undefined4 *)&(this->RowMap).field_0x28 = 0;
  if ((iVar5 < 0) || (0x80 < iVar5)) {
    *(undefined4 *)&(this->RowMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->RowMap).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->RowMap).field_0x48 = 1;
    TSet<TTuple<FName,unsigned_char_*>,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FName,unsigned_char_*>,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>,FDefaultSetAllocator>
              *)this_00);
  }
  FScopedDataTableChange::~FScopedDataTableChange(&local_98);
  return;
}

// FindRowInternal @ 147aded20

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

uchar * __thiscall
UDataTable::FindRowInternal
          (UDataTable *this,UScriptStruct *param_1,FName param_2,wchar_t *param_3,bool param_4)

{
  int iVar1;
  UScriptStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  TMapBase<FName,unsigned_char_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>_>
  *this_00;
  uchar **ppuVar5;
  uchar *puVar6;
  FName local_res18 [2];
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pUVar2 = (this->RowStruct).field0_0x0.DebugPtr;
  local_res18[0] = param_2;
  if (pUVar2 == (UScriptStruct *)0x0) {
    if ((byte)LogDataTable._0_1_ < 2) {
      return (uchar *)0x0;
    }
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_58,(UObject *)0x0);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDataTable);
  }
  else {
    if (param_1 != (UScriptStruct *)0x0) {
      iVar1 = (int)param_1->_padding_;
      if (((int)pUVar2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
          &param_1->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        if (param_2 == (FName)0x0) {
          if ((byte)LogDataTable._0_1_ < 3) {
            return (uchar *)0x0;
          }
          if (!param_4) {
            return (uchar *)0x0;
          }
          UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_48,(UObject *)0x0);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDataTable);
          local_58.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
        }
        else {
          this_00 = (TMapBase<FName,unsigned_char_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>_>
                     *)(**(code **)(this->_padding_ + 0x2d0))(this);
          ppuVar5 = TMapBase<FName,unsigned_char_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>_>
                    ::Find(this_00,local_res18[0]);
          if (ppuVar5 != (uchar **)0x0) {
            if (*ppuVar5 != (uchar *)0x0) {
              return *ppuVar5;
            }
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("RowData",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataTable.cpp"
                               ,0x453,L"");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              puVar6 = (uchar *)(*pcVar3)();
              return puVar6;
            }
            return (uchar *)0x0;
          }
          if (!param_4) {
            return (uchar *)0x0;
          }
          if ((byte)LogDataTable._0_1_ < 3) {
            return (uchar *)0x0;
          }
          UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_28,(UObject *)0x0);
          ::FName::ToString(local_res18,&local_38);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDataTable);
          local_58.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
            local_58.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
          }
        }
        goto LAB_147adef61;
      }
    }
    if ((byte)LogDataTable._0_1_ < 2) {
      return (uchar *)0x0;
    }
    if (!param_4) {
      return (uchar *)0x0;
    }
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDataTable);
    local_58.Data.AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
  }
LAB_147adef61:
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return (uchar *)0x0;
}

// FindRowUnchecked @ 147adef90

uchar * __thiscall UDataTable::FindRowUnchecked(UDataTable *this,FName param_1)

{
  TMapBase<FName,unsigned_char_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>_>
  *this_00;
  uchar **ppuVar1;
  
  if ((this->RowStruct).field0_0x0.DebugPtr != (UScriptStruct *)0x0) {
    this_00 = (TMapBase<FName,unsigned_char_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>_>
               *)(**(code **)(this->_padding_ + 0x2d0))();
    ppuVar1 = TMapBase<FName,unsigned_char_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>_>
              ::Find(this_00,param_1);
    if (ppuVar1 != (uchar **)0x0) {
      return *ppuVar1;
    }
  }
  return (uchar *)0x0;
}

// FindTableProperty @ 147adefd0

FProperty * __thiscall UDataTable::FindTableProperty(UDataTable *this,FName *param_1)

{
  UScriptStruct *pUVar1;
  longlong lVar2;
  FProperty *pFVar3;
  int iVar4;
  FProperty *pFVar5;
  UClass *pUVar6;
  undefined8 *puVar7;
  FProperty *pFVar8;
  bool bVar9;
  FString local_48;
  void *local_38 [2];
  TObjectPtr<UScriptStruct>_u_0 local_28;
  FProperty *local_20;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  pUVar1 = (this->RowStruct).field0_0x0.DebugPtr;
  if (pUVar1 == (UScriptStruct *)0x0) {
    return (FProperty *)0x0;
  }
  pFVar5 = UStruct::FindPropertyByName((UStruct *)pUVar1,*param_1);
  pFVar8 = pFVar5;
  if (pFVar5 == (FProperty *)0x0) {
    pUVar1 = (this->RowStruct).field0_0x0.DebugPtr;
    pUVar6 = Z_Construct_UClass_UUserDefinedStruct_NoRegister();
    lVar2 = pUVar1->_padding_;
    iVar4 = (int)pUVar6->_padding_;
    if ((iVar4 <= *(int *)(lVar2 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar4 * 8) ==
        &pUVar6->_padding_)) {
      ::FName::ToString(param_1,&local_48);
      local_28 = (TObjectPtr<UScriptStruct>_u_0)(this->RowStruct).field0_0x0.DebugPtr;
      if (local_28.DebugPtr == (UScriptStruct *)0x0) {
        local_20 = (FProperty *)0x0;
      }
      else {
        local_20 = (FProperty *)(local_28.DebugPtr)->_padding_;
      }
      local_18 = 0xffffffff;
      local_14 = 0x101;
      local_12 = 0;
      TFieldIterator<FProperty>::IterateToNext((TFieldIterator<FProperty> *)&local_28.ObjectPtr);
      pFVar3 = local_20;
      while (pFVar8 = pFVar5, local_20 = pFVar3, pFVar3 != (FProperty *)0x0) {
        pUVar1 = (this->RowStruct).field0_0x0.DebugPtr;
        puVar7 = (undefined8 *)(**(code **)(pUVar1->_padding_ + 0x328))(pUVar1,local_38,pFVar3);
        if (local_48.Data.ArrayNum == *(int *)(puVar7 + 1)) {
          if (local_48.Data.ArrayNum < 2) {
            bVar9 = true;
          }
          else {
            iVar4 = FGenericPlatformStricmp::Stricmp
                              ((wchar_t *)local_48.Data.AllocatorInstance.Data,(wchar_t *)*puVar7);
            bVar9 = iVar4 == 0;
          }
        }
        else {
          bVar9 = local_48.Data.ArrayNum + *(int *)(puVar7 + 1) == 1;
        }
        if (local_38[0] != (void *)0x0) {
          FMemory::Free(local_38[0]);
        }
        pFVar8 = pFVar3;
        if (bVar9) break;
        local_20 = (FProperty *)pFVar3->_padding_;
        TFieldIterator<FProperty>::IterateToNext((TFieldIterator<FProperty> *)&local_28.ObjectPtr);
        pFVar3 = local_20;
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
  }
  bVar9 = DataTableUtils::IsSupportedTableProperty(pFVar8);
  if (!bVar9) {
    pFVar8 = (FProperty *)0x0;
  }
  return pFVar8;
}

// FinishDestroy @ 147adf980

void __thiscall UDataTable::FinishDestroy(UDataTable *this)

{
  bool bVar1;
  
  UObject::FinishDestroy((UObject *)this);
  bVar1 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (!bVar1) {
                    /* WARNING: Could not recover jumptable at 0x000147adf9aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x2e0))(this);
    return;
  }
  return;
}

// GetEmptyUsingStruct @ 147ae81e0

/* WARNING: Enum "Type": Some values do not have unique names */

UScriptStruct * __thiscall UDataTable::GetEmptyUsingStruct(UDataTable *this)

{
  UPackage *pUVar1;
  UPackage *pUVar2;
  UScriptStruct *pUVar3;
  FString local_18;
  
  pUVar3 = (this->RowStruct).field0_0x0.DebugPtr;
  if (pUVar3 == (UScriptStruct *)0x0) {
    if ((this->_padding_ & 0x10) == 0) {
      pUVar1 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this);
      pUVar2 = GetTransientPackage();
      if ((pUVar1 != pUVar2) && (1 < (byte)LogDataTable._0_1_)) {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDataTable);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
    }
    pUVar3 = Z_Registration_Info_UScriptStruct_FTableRowBase.OuterSingleton;
    if (Z_Registration_Info_UScriptStruct_FTableRowBase.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar1 = Z_Construct_UPackage__Script_Engine();
      pUVar3 = GetStaticStruct(Z_Construct_UScriptStruct_FTableRowBase,(UObject *)pUVar1,
                               L"TableRowBase");
      Z_Registration_Info_UScriptStruct_FTableRowBase.OuterSingleton = pUVar3;
    }
  }
  return pUVar3;
}

// GetPreloadDependencies @ 147aead50

void __thiscall
UDataTable::GetPreloadDependencies
          (UDataTable *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  TObjectPtr<UScriptStruct>_u_0 *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TObjectPtr<UScriptStruct>_u_0 local_18 [2];
  
  UObject::GetPreloadDependencies((UObject *)this,param_1);
  local_18[0] = (this->RowStruct).field0_0x0;
  pTVar1 = (TObjectPtr<UScriptStruct>_u_0 *)(param_1->AllocatorInstance).Data;
  if ((pTVar1 <= local_18) && (local_18 < pTVar1 + param_1->ArrayMax)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  *(TObjectPtr<UScriptStruct>_u_0 *)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) =
       local_18[0];
  return;
}

// GetPrivateStaticClass @ 147aeb200

UClass * __cdecl UDataTable::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataTable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DataTable",&Z_Registration_Info_UClass_UDataTable.InnerSingleton,
               StaticRegisterNativesUDataTable,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDataTable>,InternalVTableHelperCtorCaller<UDataTable>,local_res8
               ,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataTable.InnerSingleton;
}

// GetResourceSizeEx @ 147aeccf0

void __thiscall UDataTable::GetResourceSizeEx(UDataTable *this,FResourceSizeEx *param_1)

{
  uint uVar1;
  UScriptStruct *pUVar2;
  int iVar3;
  longlong lVar4;
  
  UObject::GetResourceSizeEx((UObject *)this,param_1);
  uVar1 = *(uint *)&(this->RowMap).field_0x48;
  if (uVar1 < 2) {
    lVar4 = 0;
  }
  else {
    lVar4 = (longlong)(int)uVar1 << 2;
  }
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,lVar4 + (ulonglong)((*(int *)&(this->RowMap).field_0x2c + 0x1fU >> 5) << 2) +
                     (longlong)*(int *)&(this->RowMap).field_0xc * 0x18);
  pUVar2 = (this->RowStruct).field0_0x0.DebugPtr;
  if (pUVar2 != (UScriptStruct *)0x0) {
    iVar3 = (int)*(short *)((longlong)&pUVar2->_padding_ + 4);
    FResourceSizeEx::AddDedicatedSystemMemoryBytes
              (param_1,(longlong)
                       ((*(int *)&(this->RowMap).field_0x8 - *(int *)&(this->RowMap).field_0x34) *
                       ((int)pUVar2->_padding_ + -1 + iVar3 & -iVar3)));
  }
  return;
}

// GetRowNames @ 147aecd80

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UDataTable::GetRowNames
          (UDataTable *this,TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TMapBase<FName,unsigned_char_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<FName,unsigned_char_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>_>
              *)&this->RowMap,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTablePropertyArray @ 147aee260

/* WARNING: Removing unreachable block (ram,0x000147aee4c5) */
/* WARNING: Removing unreachable block (ram,0x000147aee9fb) */
/* WARNING: Removing unreachable block (ram,0x000147aee8bc) */
/* WARNING: Removing unreachable block (ram,0x000147aee705) */
/* WARNING: Removing unreachable block (ram,0x000147aeee38) */

TArray<FProperty_*,TSizedDefaultAllocator<32>_> * __thiscall
UDataTable::GetTablePropertyArray
          (UDataTable *this,TArray<FProperty_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *param_1,UStruct *param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3,int param_4)

{
  wchar_t *pwVar1;
  FName FVar2;
  code *pcVar3;
  FProperty *pFVar4;
  FField *this_00;
  bool bVar5;
  int iVar6;
  int iVar7;
  TArray<FProperty_*,TSizedDefaultAllocator<32>_> *pTVar8;
  FProperty *pFVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  ForAnyElementType FVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  longlong lVar22;
  uint local_188;
  longlong local_184;
  TArray<FName,TSizedDefaultAllocator<32>_> local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  TArray<FString,TSizedDefaultAllocator<32>_> local_118;
  FName local_108;
  TFieldIterator<FProperty> local_100;
  TFieldIterator<FProperty> local_e8;
  FString local_d0;
  undefined8 local_c0;
  FString local_b8;
  longlong local_a8;
  FString local_a0;
  FString local_90;
  FName local_80;
  FString local_78;
  FString local_68;
  FString local_58;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  DataTableUtils::GetStructPropertyNames(&local_178,param_2);
  iVar7 = param_1->ArrayNum;
  if (1 < iVar7) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar7,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
    memset((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8,0,
           (longlong)iVar7 << 3);
    iVar7 = param_1->ArrayNum;
    local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_118.ArrayNum = 0;
    local_118.ArrayMax = 0;
    local_188 = 0;
    if (0 < iVar7) {
      local_b8.Data.ArrayNum = 0;
      local_b8.Data.ArrayMax = 0;
      local_a8 = 0;
      do {
        lVar22 = local_a8;
        lVar10 = local_b8.Data._8_8_;
        if (local_188 != param_4) {
          uVar19 = 0;
          if ((int)local_188 < iVar7) {
            uVar19 = ~local_188 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            pTVar8 = (TArray<FProperty_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar8;
          }
          pwVar1 = *(wchar_t **)((param_1->AllocatorInstance).Data + lVar22);
          ::FString::FString(&local_68,pwVar1);
          DataTableUtils::MakeValidName(&local_b8);
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          local_c0 = 0;
          if ((FName)local_b8.Data.AllocatorInstance.Data == (FName)0x0) {
            ::FString::PrintfImpl(&local_168,L"Missing name for column %d.");
            pFVar14 = (param_3->AllocatorInstance).Data;
            if (((pFVar14 <= (FScriptContainerElement *)&local_168) &&
                ((FScriptContainerElement *)&local_168 <
                 pFVar14 + (longlong)param_3->ArrayMax * 0x10)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
              pcVar3 = (code *)swi(3);
              pTVar8 = (TArray<FProperty_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
              return pTVar8;
            }
            iVar7 = param_3->ArrayNum;
            if (iVar7 == param_3->ArrayMax) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&param_3->AllocatorInstance,&param_3->ArrayMax);
              param_3->ArrayNum = iVar7 + 1;
            }
            else {
              param_3->ArrayNum = iVar7 + 1;
            }
            pFVar14 = (param_3->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
            *(undefined8 *)pFVar14 = 0;
            *(FScriptContainerElement **)pFVar14 = local_168.Data.AllocatorInstance.Data;
            *(int *)(pFVar14 + 8) = local_168.Data.ArrayNum;
            *(int *)(pFVar14 + 0xc) = local_168.Data.ArrayMax;
            local_168.Data.ArrayNum = 0;
            local_168.Data.ArrayMax = 0;
            local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          }
          else {
            pFVar9 = FindFProperty<FProperty>
                               (param_2,(FName)local_b8.Data.AllocatorInstance.Data,Default);
            if (param_2 == (UStruct *)0x0) {
              local_100.Field = (FField *)0x0;
            }
            else {
              local_100.Field = param_2->ChildProperties;
            }
            local_100.InterfaceIndex = -1;
            local_100.bIncludeSuper = true;
            local_100.bIncludeDeprecated = true;
            local_100.bIncludeInterface = false;
            local_100.Struct = param_2;
            TFieldIterator<FProperty>::IterateToNext(&local_100);
            pFVar4 = (FProperty *)local_100.Field;
            while (local_100.Field = (FField *)pFVar4, pFVar4 != (FProperty *)0x0) {
              if (pFVar9 != (FProperty *)0x0) goto LAB_147aee736;
              DataTableUtils::GetPropertyImportNames(pFVar4,&local_118);
              pFVar14 = local_118.AllocatorInstance.Data + (longlong)local_118.ArrayNum * 0x10;
              for (FVar15.Data = local_118.AllocatorInstance.Data; FVar15.Data != pFVar14;
                  FVar15.Data = FVar15.Data + 0x10) {
                if (*(int *)(FVar15.Data + 8) == 0) {
                  pwVar11 = L"";
                }
                else {
                  pwVar11 = *(wchar_t **)FVar15.Data;
                }
                iVar7 = FGenericPlatformStricmp::Stricmp(pwVar11,pwVar1);
                pFVar9 = pFVar4;
                if (iVar7 == 0) goto LAB_147aee58d;
              }
              pFVar9 = (FProperty *)0x0;
LAB_147aee58d:
              local_100.Field = (FField *)pFVar4->_padding_;
              TFieldIterator<FProperty>::IterateToNext(&local_100);
              pFVar4 = (FProperty *)local_100.Field;
            }
            if (pFVar9 == (FProperty *)0x0) {
              if (this->bIgnoreExtraFields == '\0') {
                local_80 = (FName)param_2->_padding_;
                ::FName::ToString(&local_80,&local_78);
                ::FName::ToString((FName *)&local_b8,&local_58);
                ::FString::PrintfImpl
                          (&local_158,L"Cannot find Property for column \'%s\' in struct \'%s\'.");
                pFVar14 = (param_3->AllocatorInstance).Data;
                if (((pFVar14 <= (FScriptContainerElement *)&local_158) &&
                    ((FScriptContainerElement *)&local_158 <
                     pFVar14 + (longlong)param_3->ArrayMax * 0x10)) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar5)) {
                  pcVar3 = (code *)swi(3);
                  pTVar8 = (TArray<FProperty_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
                  return pTVar8;
                }
                iVar7 = param_3->ArrayNum;
                if (iVar7 == param_3->ArrayMax) {
                  iVar7 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x810,&param_3->AllocatorInstance,&param_3->ArrayMax);
                  param_3->ArrayNum = iVar7 + 1;
                }
                else {
                  param_3->ArrayNum = iVar7 + 1;
                }
                pFVar14 = (param_3->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
                *(undefined8 *)pFVar14 = 0;
                *(FScriptContainerElement **)pFVar14 = local_158.Data.AllocatorInstance.Data;
                *(int *)(pFVar14 + 8) = local_158.Data.ArrayNum;
                *(int *)(pFVar14 + 0xc) = local_158.Data.ArrayMax;
                local_158.Data.ArrayNum = 0;
                local_158.Data.ArrayMax = 0;
                local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_58.Data.AllocatorInstance.Data);
                }
                if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_78.Data.AllocatorInstance.Data);
                }
              }
            }
            else {
LAB_147aee736:
              pFVar12 = (__return_storage_ptr__->AllocatorInstance).Data;
              pFVar14 = pFVar12 + (longlong)__return_storage_ptr__->ArrayNum * 8;
              for (; pFVar12 != pFVar14; pFVar12 = pFVar12 + 8) {
                if (*(FProperty **)pFVar12 == pFVar9) {
                  bVar5 = IsThisNotNull(pFVar9,"FField::GetName");
                  if (bVar5) {
                    ::FName::ToString((FName *)&pFVar9->_padding_,&local_a0);
                  }
                  else {
                    ::FString::FString(&local_a0,L"None");
                  }
                  ::FString::PrintfImpl(&local_148,L"Duplicate column \'%s\'.");
                  pFVar14 = (param_3->AllocatorInstance).Data;
                  if (((pFVar14 <= (FScriptContainerElement *)&local_148) &&
                      ((FScriptContainerElement *)&local_148 <
                       pFVar14 + (longlong)param_3->ArrayMax * 0x10)) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar5)) {
                    pcVar3 = (code *)swi(3);
                    pTVar8 = (TArray<FProperty_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
                    return pTVar8;
                  }
                  iVar7 = param_3->ArrayNum;
                  if (iVar7 == param_3->ArrayMax) {
                    iVar7 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x810,&param_3->AllocatorInstance,&param_3->ArrayMax);
                    param_3->ArrayNum = iVar7 + 1;
                  }
                  else {
                    param_3->ArrayNum = iVar7 + 1;
                  }
                  pFVar14 = (param_3->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
                  *(undefined8 *)pFVar14 = 0;
                  *(FScriptContainerElement **)pFVar14 = local_148.Data.AllocatorInstance.Data;
                  *(int *)(pFVar14 + 8) = local_148.Data.ArrayNum;
                  *(int *)(pFVar14 + 0xc) = local_148.Data.ArrayMax;
                  local_148.Data.ArrayNum = 0;
                  local_148.Data.ArrayMax = 0;
                  local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  FVar15.Data = local_a0.Data.AllocatorInstance.Data;
                  goto LAB_147aee8c5;
                }
              }
              bVar5 = DataTableUtils::IsSupportedTableProperty(pFVar9);
              if (bVar5) {
                uVar19 = 0;
                if ((int)local_188 < __return_storage_ptr__->ArrayNum) {
                  uVar19 = ~local_188 >> 0x1f;
                }
                if ((uVar19 == 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar5)) {
                  pcVar3 = (code *)swi(3);
                  pTVar8 = (TArray<FProperty_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
                  return pTVar8;
                }
                *(FProperty **)((__return_storage_ptr__->AllocatorInstance).Data + lVar10 * 8) =
                     pFVar9;
              }
              else {
                bVar5 = IsThisNotNull(pFVar9,"FField::GetName");
                if (bVar5) {
                  ::FName::ToString((FName *)&pFVar9->_padding_,&local_90);
                }
                else {
                  ::FString::FString(&local_90,L"None");
                }
                ::FString::PrintfImpl
                          (&local_138,L"Unsupported Property type for struct member \'%s\'.");
                pFVar14 = (param_3->AllocatorInstance).Data;
                if (((pFVar14 <= (FScriptContainerElement *)&local_138) &&
                    ((FScriptContainerElement *)&local_138 <
                     pFVar14 + (longlong)param_3->ArrayMax * 0x10)) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar5)) {
                  pcVar3 = (code *)swi(3);
                  pTVar8 = (TArray<FProperty_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
                  return pTVar8;
                }
                iVar7 = param_3->ArrayNum;
                if (iVar7 == param_3->ArrayMax) {
                  iVar7 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x810,&param_3->AllocatorInstance,&param_3->ArrayMax);
                  param_3->ArrayNum = iVar7 + 1;
                }
                else {
                  param_3->ArrayNum = iVar7 + 1;
                }
                pFVar14 = (param_3->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
                *(undefined8 *)pFVar14 = 0;
                *(FScriptContainerElement **)pFVar14 = local_138.Data.AllocatorInstance.Data;
                local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                *(int *)(pFVar14 + 8) = local_138.Data.ArrayNum;
                *(int *)(pFVar14 + 0xc) = local_138.Data.ArrayMax;
                local_138.Data.ArrayNum = 0;
                local_138.Data.ArrayMax = 0;
                FVar15.Data = local_90.Data.AllocatorInstance.Data;
LAB_147aee8c5:
                if (FVar15.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(FVar15.Data);
                }
              }
              uVar16 = 0;
              bVar5 = IsThisNotNull(pFVar9,"FField::GetFName");
              if (bVar5) {
                local_184 = pFVar9->_padding_;
              }
              else {
                local_184 = 0;
              }
              if (((local_178.AllocatorInstance.Data <= (FScriptContainerElement *)&local_184) &&
                  ((FScriptContainerElement *)&local_184 <
                   local_178.AllocatorInstance.Data + (longlong)local_178.ArrayMax * 8)) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar5)) {
                pcVar3 = (code *)swi(3);
                pTVar8 = (TArray<FProperty_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
                return pTVar8;
              }
              FVar15.Data = local_178.AllocatorInstance.Data;
              lVar13 = (longlong)local_178.ArrayNum;
              if (local_178.ArrayNum != 0) {
                bVar5 = *(longlong *)local_178.AllocatorInstance.Data != local_184;
                lVar10 = local_184;
                uVar18 = uVar16;
                uVar21 = uVar16;
                do {
                  uVar17 = (uint)uVar18;
                  uVar19 = uVar17;
                  do {
                    uVar16 = uVar16 + 1;
                    uVar19 = uVar19 + 1;
                    uVar18 = (ulonglong)uVar19;
                    if (lVar13 <= (longlong)uVar16) break;
                  } while (bVar5 == (*(longlong *)(FVar15.Data + uVar16 * 8) != lVar10));
                  if (bVar5 != false) {
                    uVar20 = (uint)uVar21;
                    if (uVar20 != uVar17) {
                      memmove(FVar15.Data + (longlong)(int)uVar20 * 8,
                              FVar15.Data + (longlong)(int)uVar17 * 8,
                              (longlong)(int)(uVar19 - uVar17) << 3);
                      lVar10 = local_184;
                    }
                    uVar21 = (ulonglong)(uVar20 + (uVar19 - uVar17));
                  }
                  bVar5 = (bool)(bVar5 ^ 1);
                } while ((longlong)uVar16 < lVar13);
                local_178.ArrayNum = (int)uVar21;
                lVar10 = local_b8.Data._8_8_;
                lVar22 = local_a8;
              }
            }
          }
        }
        iVar7 = param_1->ArrayNum;
        local_188 = local_188 + 1;
        local_b8.Data._8_8_ = lVar10 + 1;
        local_a8 = lVar22 + 8;
      } while ((int)local_188 < iVar7);
    }
    DestructItems<FString,int>((FString *)local_118.AllocatorInstance.Data,local_118.ArrayNum);
    if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.AllocatorInstance.Data);
    }
  }
  if ((this->bIgnoreMissingFields == '\0') && (uVar18 = 0, uVar16 = uVar18, 0 < local_178.ArrayNum))
  {
    do {
      uVar17 = (uint)uVar18;
      uVar19 = 0;
      if ((int)uVar17 < local_178.ArrayNum) {
        uVar19 = ~uVar17 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TArray<FProperty_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar8;
      }
      FVar2 = *(FName *)(local_178.AllocatorInstance.Data + uVar16);
      if (FVar2 != (FName)0x0) {
        if (param_2 == (UStruct *)0x0) {
          local_e8.Field = (FField *)0x0;
        }
        else {
          local_e8.Field = param_2->ChildProperties;
        }
        local_e8.InterfaceIndex = -1;
        local_e8.bIncludeSuper = true;
        local_e8.bIncludeDeprecated = true;
        local_e8.bIncludeInterface = false;
        local_e8.Struct = param_2;
        TFieldIterator<FProperty>::IterateToNext(&local_e8);
        this_00 = local_e8.Field;
        while (local_e8.Field = this_00, this_00 != (FField *)0x0) {
          bVar5 = IsThisNotNull(this_00,"FField::GetFName");
          if (bVar5) {
            local_108 = this_00->NamePrivate;
          }
          else {
            local_108.ComparisonIndex.Value = 0;
            local_108.Number = 0;
          }
          if (local_108 == FVar2) {
            if (this_00 != (FField *)0x0) {
              FField::GetAuthoredName(this_00,&local_d0);
              goto LAB_147aeed28;
            }
            break;
          }
          local_e8.Field = this_00->Next;
          TFieldIterator<FProperty>::IterateToNext(&local_e8);
          this_00 = local_e8.Field;
        }
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7199246111658212943>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataTableUtils.cpp"
                         ,0x1b1,"Prop");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TArray<FProperty_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar8;
      }
      local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d0.Data.ArrayNum = 0;
      local_d0.Data.ArrayMax = 0;
LAB_147aeed28:
      ::FString::PrintfImpl(&local_128,L"Expected column \'%s\' not found in input.");
      pFVar14 = (param_3->AllocatorInstance).Data;
      if (((pFVar14 <= (FScriptContainerElement *)&local_128) &&
          ((FScriptContainerElement *)&local_128 < pFVar14 + (longlong)param_3->ArrayMax * 0x10)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TArray<FProperty_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar8;
      }
      iVar7 = param_3->ArrayNum;
      if (iVar7 == param_3->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_3->AllocatorInstance,&param_3->ArrayMax);
        param_3->ArrayNum = iVar7 + 1;
      }
      else {
        param_3->ArrayNum = iVar7 + 1;
      }
      pFVar14 = (param_3->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
      *(undefined8 *)pFVar14 = 0;
      *(FScriptContainerElement **)pFVar14 = local_128.Data.AllocatorInstance.Data;
      *(int *)(pFVar14 + 8) = local_128.Data.ArrayNum;
      *(int *)(pFVar14 + 0xc) = local_128.Data.ArrayMax;
      local_128.Data.ArrayNum = 0;
      local_128.Data.ArrayMax = 0;
      local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
      uVar18 = (ulonglong)(uVar17 + 1);
      uVar16 = uVar16 + 8;
    } while ((int)(uVar17 + 1) < local_178.ArrayNum);
  }
  if (local_178.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// HandleDataTableChanged @ 147aefb50

void __thiscall UDataTable::HandleDataTableChanged(UDataTable *this,FName param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  UScriptStruct *pUVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FUObjectItem *pFVar9;
  UScriptStruct *pUVar10;
  longlong *plVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if ((this == (UDataTable *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Test",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Object.h"
                         ,0x760,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((((uint)this->_padding_ >> 0x1e & 1) == 0) &&
      (pFVar9 = FUObjectArray::IndexToObject
                          (&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4)),
      ((uint)((ulonglong)(pFVar9->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) &&
     (((uint)this->_padding_ >> 0xf & 1) == 0)) {
    pUVar4 = (this->RowStruct).field0_0x0.DebugPtr;
    if ((pUVar4 != (UScriptStruct *)0x0) &&
       (pUVar10 = FTableRowBase::StaticStruct(), pUVar10 != (UScriptStruct *)0x0)) {
      iVar3 = (int)pUVar10->_padding_;
      if (((int)pUVar4->_padding_ < iVar3) ||
         ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar3 * 8) !=
          &pUVar10->_padding_)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (bVar6) {
        if (param_1 == (FName)0x0) {
          iVar3 = *(int *)&(this->RowMap).field_0x28;
          iVar14 = 0;
          puVar1 = &(this->RowMap).field_0x10;
          uVar7 = 1;
          iVar16 = 0;
          iVar8 = 0;
          if (iVar3 != 0) {
            puVar17 = *(uint **)&(this->RowMap).field_0x20;
            if (puVar17 == (uint *)0x0) {
              puVar17 = (uint *)puVar1;
            }
            uVar13 = *puVar17;
            while (uVar13 == 0) {
              lVar12 = (longlong)iVar14;
              iVar16 = iVar16 + 0x20;
              iVar14 = iVar14 + 1;
              iVar8 = iVar3;
              if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14)
              goto LAB_147aefced;
              uVar13 = puVar17[lVar12 + 1];
            }
            uVar7 = -uVar13 & uVar13;
            uVar2 = (ulonglong)uVar7 * 2 + 1;
            lVar12 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
              }
            }
            iVar8 = iVar16 + -1 + (int)lVar12;
            if (iVar3 < iVar8) {
              iVar8 = iVar3;
            }
          }
LAB_147aefced:
          uVar13 = *(uint *)&(this->RowMap).field_0x28;
          uVar18 = uVar13 & 0xffffffe0;
          TStack_60._padding_ = CONCAT44(uVar7,iVar14);
          TStack_60.CurrentBitIndex = iVar8;
          TStack_60.UnvisitedBitMask = 0xffffffff;
          iVar14 = (int)uVar13 >> 5;
          TStack_60._28_4_ = local_9c;
          TStack_60.BaseBitIndex = iVar16;
          uStack_40 = CONCAT44(uStack_6c,
                               *(int *)&(this->RowMap).field_0x8 -
                               *(int *)&(this->RowMap).field_0x34);
          TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
          if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x7af,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar7 = *(uint *)&(this->RowMap).field_0x28;
          if (uVar13 != uVar7) {
            puVar15 = *(undefined1 **)&(this->RowMap).field_0x20;
            if (puVar15 == (undefined1 *)0x0) {
              puVar15 = puVar1;
            }
            uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
            while (uVar13 == 0) {
              lVar12 = (longlong)iVar14;
              uVar18 = uVar18 + 0x20;
              iVar14 = iVar14 + 1;
              uVar13 = uVar7;
              if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
              goto LAB_147aefe00;
              uVar13 = *(uint *)(puVar15 + lVar12 * 4 + 4);
            }
            uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
            lVar12 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
              }
            }
            uVar13 = (int)lVar12 + -1 + uVar18;
            if ((int)uVar7 < (int)uVar13) {
              uVar13 = uVar7;
            }
          }
LAB_147aefe00:
          while( true ) {
            if (*(int *)&(this->RowMap).field_0x8 - *(int *)&(this->RowMap).field_0x34 !=
                (int)uStack_40) {
              `TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
            }
            if ((TStack_60.CurrentBitIndex == uVar13) &&
               (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
            plVar11 = *(longlong **)
                       (*(longlong *)&this->RowMap + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18)
            ;
            (**(code **)(*plVar11 + 0x10))
                      (plVar11,this,
                       *(undefined8 *)
                        (*(longlong *)&this->RowMap + (longlong)TStack_60.CurrentBitIndex * 0x18));
            TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
          }
        }
        else {
          plVar11 = (longlong *)FindRowUnchecked(this,param_1);
          if (plVar11 != (longlong *)0x0) {
            (**(code **)(*plVar11 + 0x10))(plVar11,this,param_1);
          }
        }
      }
    }
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnDataTableChangedDelegate);
  }
  return;
}

// LoadStructData @ 147af8e50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDataTable::LoadStructData(UDataTable *this,FStructuredArchiveSlot param_1)

{
  uint *puVar1;
  FSlotBase FVar2;
  FArchive *pFVar3;
  FArchiveState *this_00;
  UPackage *pUVar4;
  UPackage *pUVar5;
  UScriptStruct *this_01;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint local_res8 [2];
  FSlotBase local_res10;
  undefined1 local_res18 [8];
  uchar **local_res20;
  void *local_68;
  FScopedDataTableChange local_60;
  undefined1 local_50 [32];
  
  pFVar3 = *(FArchive **)(*(longlong *)param_1 + 8);
  puVar1 = (uint *)**(undefined8 **)&pFVar3->field_0x8;
  local_res10.StructuredArchive = (FStructuredArchive *)param_1;
  if ((uint *)(*(undefined8 **)&pFVar3->field_0x8)[1] < puVar1 + 1) {
    if ((pFVar3->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar3 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar3,local_res8);
    }
  }
  else {
    local_res8[0] = *puVar1;
    **(longlong **)&pFVar3->field_0x8 = **(longlong **)&pFVar3->field_0x8 + 4;
  }
  FVar2.StructuredArchive = local_res10.StructuredArchive;
  this_01 = (this->RowStruct).field0_0x0.DebugPtr;
  if (this_01 == (UScriptStruct *)0x0) {
    if ((0 < (int)local_res8[0]) &&
       (pFVar3 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10),
       (pFVar3->field_0x28 & 0x40) != 0)) {
      if (1 < (byte)LogDataTable._0_1_) {
        UObjectBaseUtility::GetPathName
                  ((UObjectBaseUtility *)this,(FString *)local_50,(UObject *)0x0);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDataTable);
        if ((FScriptContainerElement *)local_50._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_50._0_8_);
        }
      }
      this_00 = (FArchiveState *)
                UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
      FArchiveState::SetError(this_00);
      return;
    }
    if ((this->_padding_ & 0x10) == 0) {
      pUVar4 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this);
      pUVar5 = GetTransientPackage();
      if ((pUVar4 != pUVar5) && (2 < (byte)LogDataTable._0_1_)) {
        UObjectBaseUtility::GetPathName
                  ((UObjectBaseUtility *)this,(FString *)local_50,(UObject *)0x0);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDataTable);
        if ((FScriptContainerElement *)local_50._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_50._0_8_);
        }
      }
    }
    this_01 = Z_Registration_Info_UScriptStruct_FTableRowBase.OuterSingleton;
    if (Z_Registration_Info_UScriptStruct_FTableRowBase.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar4 = Z_Construct_UPackage__Script_Engine();
      this_01 = GetStaticStruct(Z_Construct_UScriptStruct_FTableRowBase,(UObject *)pUVar4,
                                L"TableRowBase");
      Z_Registration_Info_UScriptStruct_FTableRowBase.OuterSingleton = this_01;
    }
  }
  iVar9 = 0;
  local_60.RowName.ComparisonIndex.Value = 0;
  local_60.RowName.Number = 0;
  local_60.Table = this;
  EnterCriticalSection((LPCRITICAL_SECTION)&FScopedDataTableChange::CriticalSection);
  uVar7 = ((uint)((ulonglong)local_60.Table >> 0x14) & 0xffff ^
          (uint)((ulonglong)local_60.Table >> 4)) * -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  piVar6 = TMapBase<UDataTable_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UDataTable_*,int,0>_>
           ::FindOrAddImpl<UDataTable_*_const_&>
                     ((TMapBase<UDataTable_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UDataTable_*,int,0>_>
                       *)&FScopedDataTableChange::ScopeCount,uVar7 >> 0x10 ^ uVar7,&local_60.Table);
  local_res18 = (undefined1  [8])0x0;
  local_60.RowName.ComparisonIndex.Value = 0;
  local_60.RowName.Number = 0;
  *piVar6 = *piVar6 + 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&FScopedDataTableChange::CriticalSection);
  TSet<TTuple<FName,unsigned_char_*>,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<FName,unsigned_char_*>,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>,FDefaultSetAllocator>
             *)&this->RowMap,local_res8[0]);
  if (0 < (int)local_res8[0]) {
    local_50._0_8_ = &local_res20;
    local_50._8_8_ = &local_68;
    do {
      local_res20 = (uchar **)0x0;
      pFVar3 = (FVar2.StructuredArchive)->Formatter->Inner;
      (**(code **)(*(longlong *)pFVar3 + 0x178))(pFVar3,&local_res20);
      iVar8 = (int)*(short *)((longlong)&this_01->_padding_ + 4);
      local_68 = FMemory::Malloc((longlong)((int)this_01->_padding_ + -1 + iVar8 & -iVar8),0);
      (**(code **)(this_01->_padding_ + 0x2f8))(this_01,local_68,1);
      UScriptStruct::SerializeItem
                (this_01,(FStructuredArchiveSlot)FVar2.StructuredArchive,local_68,(void *)0x0);
      TSet<TTuple<FName,unsigned_char_*>,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,unsigned_char_*_const_&>_>
                ((TSet<TTuple<FName,unsigned_char_*>,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>,FDefaultSetAllocator>
                  *)&this->RowMap,
                 (TPairInitializer<FName_const_&,unsigned_char_*_const_&> *)local_res18,
                 (bool *)local_50);
      iVar9 = iVar9 + 1;
    } while (iVar9 < (int)local_res8[0]);
  }
  FScopedDataTableChange::~FScopedDataTableChange(&local_60);
  return;
}

// OnPostDataImported @ 147afbc70

void __thiscall
UDataTable::OnPostDataImported
          (UDataTable *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  UScriptStruct *pUVar6;
  longlong *plVar7;
  code *pcVar8;
  bool bVar9;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar10;
  TMap<FName,unsigned_char_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>_>
  *pTVar11;
  bool bVar12;
  UPackage *pUVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  undefined1 *puVar18;
  uint *puVar19;
  undefined1 local_res8 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> *local_res10;
  int local_res18;
  FName local_res20;
  FString local_b8;
  TMap<FName,unsigned_char_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>_>
  *local_a8;
  int iStack_a0;
  uint uStack_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TMap<FName,unsigned_char_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>_>
  *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  pUVar6 = (this->RowStruct).field0_0x0.DebugPtr;
  if (pUVar6 == (UScriptStruct *)0x0) {
    return;
  }
  local_res10 = param_1;
  if (Z_Registration_Info_UScriptStruct_FTableRowBase.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar13 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FTableRowBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTableRowBase,(UObject *)pUVar13,L"TableRowBase")
    ;
  }
  if (Z_Registration_Info_UScriptStruct_FTableRowBase.OuterSingleton != (UScriptStruct *)0x0) {
    iVar4 = (int)(Z_Registration_Info_UScriptStruct_FTableRowBase.OuterSingleton)->_padding_;
    if ((iVar4 <= (int)pUVar6->_padding_) &&
       ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar4 * 8) ==
        &(Z_Registration_Info_UScriptStruct_FTableRowBase.OuterSingleton)->_padding_)) {
      bVar9 = true;
      goto LAB_147afbd03;
    }
  }
  bVar9 = false;
LAB_147afbd03:
  local_res20 = (FName)this->_padding_;
  ::FName::ToString(&local_res20,&local_b8);
  iVar4 = *(int *)&(this->RowMap).field_0x28;
  puVar1 = &(this->RowMap).field_0x10;
  iStack_a0 = 0;
  local_a8 = &this->RowMap;
  uStack_9c = 1;
  local_88 = 0;
  iStack_8c = 0;
  if (iVar4 != 0) {
    puVar19 = *(uint **)&(this->RowMap).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar1;
    }
    uVar17 = *puVar19;
    while (uVar17 == 0) {
      lVar14 = (longlong)iStack_a0;
      local_88 = local_88 + 0x20;
      iStack_a0 = iStack_a0 + 1;
      iStack_8c = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a0) goto LAB_147afbd9e;
      uVar17 = puVar19[lVar14 + 1];
    }
    uStack_9c = -uVar17 & uVar17;
    uVar3 = (ulonglong)uStack_9c * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_res18 = (int)lVar14;
    iStack_8c = local_88 + -1 + local_res18;
    if (iVar4 < iStack_8c) {
      iStack_8c = iVar4;
    }
  }
LAB_147afbd9e:
  uVar17 = *(uint *)&(this->RowMap).field_0x28;
  uVar16 = uVar17 & 0xffffffe0;
  iStack_80 = *(int *)&(this->RowMap).field_0x8 - *(int *)&(this->RowMap).field_0x34;
  uStack_90 = 0xffffffff;
  TStack_70._padding_ = CONCAT44(uStack_9c,iStack_a0);
  TStack_70.CurrentBitIndex = iStack_8c;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar17 >> 5;
  TStack_70._28_4_ = iStack_8c;
  TStack_70.BaseBitIndex = local_88;
  uStack_50 = CONCAT44(uStack_7c,iStack_80);
  local_98 = puVar1;
  iStack_84 = iStack_8c;
  local_78 = local_a8;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar17 < 0) || (iVar4 < (int)uVar17)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar10 = local_res10;
  uVar5 = *(uint *)&(this->RowMap).field_0x28;
  if (uVar17 != uVar5) {
    puVar18 = *(undefined1 **)&(this->RowMap).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar1;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar15 * 4);
    while (uVar17 == 0) {
      lVar14 = (longlong)iVar15;
      uVar16 = uVar16 + 0x20;
      iVar15 = iVar15 + 1;
      uVar17 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_147afbe99;
      uVar17 = *(uint *)(puVar18 + lVar14 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar17 = (int)lVar14 + -1 + uVar16;
    if ((int)uVar5 < (int)uVar17) {
      uVar17 = uVar5;
    }
  }
LAB_147afbe99:
  while( true ) {
    pTVar11 = local_78;
    if (*(int *)&local_78->field_0x8 - *(int *)&local_78->field_0x34 != (int)uStack_50) {
      `TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_70.CurrentBitIndex == uVar17) &&
        (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar11 == &this->RowMap)) break;
    puVar2 = (undefined8 *)(*(longlong *)pTVar11 + (longlong)TStack_70.CurrentBitIndex * 0x18);
    if (bVar9) {
      plVar7 = (longlong *)puVar2[1];
      (**(code **)(*plVar7 + 8))(plVar7,this,*puVar2,pTVar10);
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  return;
}

// RemoveRow @ 147b0c140

void __thiscall UDataTable::RemoveRow(UDataTable *this,FName param_1)

{
  int *piVar1;
  uint uVar2;
  FScopedDataTableChange local_18;
  
  local_18.RowName.ComparisonIndex.Value = 0;
  local_18.RowName.Number = 0;
  local_18.Table = this;
  EnterCriticalSection((LPCRITICAL_SECTION)&FScopedDataTableChange::CriticalSection);
  uVar2 = ((uint)((ulonglong)local_18.Table >> 0x14) & 0xffff ^
          (uint)((ulonglong)local_18.Table >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  piVar1 = TMapBase<UDataTable_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UDataTable_*,int,0>_>
           ::FindOrAddImpl<UDataTable_*_const_&>
                     ((TMapBase<UDataTable_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UDataTable_*,int,0>_>
                       *)&FScopedDataTableChange::ScopeCount,uVar2 >> 0x10 ^ uVar2,&local_18.Table);
  *piVar1 = *piVar1 + 1;
  local_18.RowName = param_1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&FScopedDataTableChange::CriticalSection);
  (**(code **)(this->_padding_ + 0x2c0))(this,param_1);
  FScopedDataTableChange::~FScopedDataTableChange(&local_18);
  return;
}

// RemoveRowInternal @ 147b0c1f0

void __thiscall UDataTable::RemoveRowInternal(UDataTable *this,FName param_1)

{
  uchar *puVar1;
  UScriptStruct *pUVar2;
  uchar *local_res8;
  
  pUVar2 = GetEmptyUsingStruct(this);
  local_res8 = (uchar *)0x0;
  TMap<FName,unsigned_char_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>_>
  ::RemoveAndCopyValue(&this->RowMap,param_1,&local_res8);
  puVar1 = local_res8;
  if (local_res8 != (uchar *)0x0) {
    (**(code **)(pUVar2->_padding_ + 0x300))(pUVar2,local_res8,1);
    FMemory::Free(puVar1);
  }
  return;
}

// SaveStructData @ 147b10330

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDataTable::SaveStructData(UDataTable *this,FStructuredArchiveSlot param_1)

{
  FArchive *this_00;
  uint *puVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  UPackage *pUVar5;
  UPackage *pUVar6;
  UScriptStruct *this_01;
  ulonglong uVar7;
  uint uVar8;
  uint local_res8 [2];
  undefined8 local_res10;
  FString local_98;
  undefined1 local_88 [32];
  longlong local_68;
  TSet<TTuple<FName,unsigned_char_*>,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>,FDefaultSetAllocator>
  *pTStack_60;
  longlong *local_58;
  undefined1 auStack_50 [16];
  uint uStack_40;
  uint uStack_3c;
  longlong local_38;
  TSet<TTuple<FName,unsigned_char_*>,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>,FDefaultSetAllocator>
  *pTStack_30;
  TSet<TTuple<FName,unsigned_char_*>,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>,FDefaultSetAllocator>
  *local_28;
  undefined2 local_20;
  
  this_01 = (this->RowStruct).field0_0x0.DebugPtr;
  if (this_01 == (UScriptStruct *)0x0) {
    if ((this->_padding_ & 0x10) == 0) {
      pUVar5 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this);
      pUVar6 = GetTransientPackage();
      if ((pUVar5 != pUVar6) && (1 < (byte)LogDataTable._0_1_)) {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_98,(UObject *)0x0);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDataTable);
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
      }
    }
    this_01 = Z_Registration_Info_UScriptStruct_FTableRowBase.OuterSingleton;
    if (Z_Registration_Info_UScriptStruct_FTableRowBase.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_Engine();
      this_01 = GetStaticStruct(Z_Construct_UScriptStruct_FTableRowBase,(UObject *)pUVar5,
                                L"TableRowBase");
      Z_Registration_Info_UScriptStruct_FTableRowBase.OuterSingleton = this_01;
    }
  }
  local_res8[0] = *(int *)&(this->RowMap).field_0x8 - *(int *)&(this->RowMap).field_0x34;
  this_00 = *(FArchive **)(*(longlong *)param_1 + 8);
  puVar1 = (uint *)**(undefined8 **)&this_00->field_0x8;
  if ((uint *)(*(undefined8 **)&this_00->field_0x8)[1] < puVar1 + 1) {
    if ((this_00->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this_00 + 0x188))(this_00,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(this_00,local_res8);
    }
  }
  else {
    local_res8[0] = *puVar1;
    **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
  }
  TSet<TTuple<FName,unsigned_char_*>,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_88,
             (TSet<TTuple<FName,unsigned_char_*>,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>,FDefaultSetAllocator>
              *)&this->RowMap);
  local_20 = 0;
  stack0xffffffffffffffb8 = local_88._16_16_;
  local_58 = (longlong *)local_88._0_8_;
  auStack_50._0_8_ = local_88._8_8_;
  local_38 = local_68;
  pTStack_30 = pTStack_60;
  uVar7 = local_88._24_8_ >> 0x20;
  uVar8 = local_88._28_4_;
  local_28 = (TSet<TTuple<FName,unsigned_char_*>,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>,FDefaultSetAllocator>
              *)&this->RowMap;
  if ((int)uVar8 < *(int *)(local_88._16_8_ + 0x18)) {
    do {
      plVar3 = local_58;
      local_res10 = *(undefined8 *)(*local_58 + (longlong)(int)uVar7 * 0x18);
      (**(code **)(**(longlong **)(*(longlong *)param_1 + 8) + 0x178))
                (*(longlong **)(*(longlong *)param_1 + 8),&local_res10);
      UScriptStruct::SerializeItem
                (this_01,param_1,*(void **)(*plVar3 + 8 + (longlong)(int)uVar8 * 0x18),(void *)0x0);
      uStack_40 = uStack_40 & ~auStack_50._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_50);
      uVar7 = (ulonglong)uStack_3c;
      uVar8 = uStack_3c;
    } while ((int)uStack_3c < *(int *)(auStack_50._8_8_ + 0x18));
    if (((char)local_20 != '\0') && (local_20._1_1_ != '\0')) {
      uVar8 = *(int *)&(local_28->Elements).field_0x8 - *(int *)&(local_28->Elements).field_0x34;
      if (uVar8 < 4) {
        iVar4 = 1;
      }
      else {
        uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
        lVar2 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar4 = 1 << ((byte)lVar2 & 0x1f);
      }
      if (((0 < (int)uVar8) && (local_28->HashSize < iVar4)) || (iVar4 < local_28->HashSize)) {
        local_28->HashSize = iVar4;
        TSet<TTuple<FName,unsigned_char_*>,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>,FDefaultSetAllocator>
        ::Rehash(local_28);
      }
    }
  }
  return;
}

// Serialize @ 147b10bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UDataTable::Serialize(UDataTable *this,FArchive *param_1)

{
  UScriptStruct *this_00;
  FStructuredArchiveFromArchive *this_01;
  FStructuredArchiveSlot FVar1;
  FArchive *pFVar2;
  int *piVar3;
  uint uVar4;
  undefined1 auStackY_208 [32];
  FLLMScope local_1d8 [2];
  FSlotBase local_1d0;
  FName local_1c8;
  FScopedDataTableChange local_1c0;
  FMemScope local_1b0 [2];
  FStructuredArchiveFromArchive local_1a0;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_208;
  this_01 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&local_1a0,param_1);
  FVar1 = FStructuredArchiveFromArchive::GetSlot(this_01);
  local_1d0.StructuredArchive = *(FStructuredArchive **)FVar1;
  pFVar2 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_1d0);
  FLLMScope::FLLMScope(local_1d8,LLMTagDeclaration_DataTable.UniqueName,false,None,Default,true);
  local_1c8 = LLMTagDeclaration_DataTable.UniqueName;
  FMemScope::FMemScope(local_1b0,&local_1c8,true);
  UObject::Serialize((UObject *)this,(FStructuredArchiveRecord)local_1d0.StructuredArchive);
  this_00 = (this->RowStruct).field0_0x0.DebugPtr;
  if (this_00 != (UScriptStruct *)0x0) {
    UObject::ConditionalPreload((UObject *)this_00);
  }
  if ((pFVar2->field_0x28 & 1) == 0) {
    if ((pFVar2->field_0x28 & 4) != 0) {
      SaveStructData(this,(FStructuredArchiveSlot)local_1d0.StructuredArchive);
    }
  }
  else {
    local_1c0.RowName.ComparisonIndex.Value = 0;
    local_1c0.RowName.Number = 0;
    local_1c0.Table = this;
    EnterCriticalSection((LPCRITICAL_SECTION)&FScopedDataTableChange::CriticalSection);
    uVar4 = ((uint)((ulonglong)local_1c0.Table >> 0x14) & 0xffff ^
            (uint)((ulonglong)local_1c0.Table >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    piVar3 = TMapBase<UDataTable_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UDataTable_*,int,0>_>
             ::FindOrAddImpl<UDataTable_*_const_&>
                       ((TMapBase<UDataTable_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UDataTable_*,int,0>_>
                         *)&FScopedDataTableChange::ScopeCount,uVar4 >> 0x10 ^ uVar4,
                        &local_1c0.Table);
    local_1c8.ComparisonIndex.Value = 0;
    local_1c8.Number = 0;
    local_1c0.RowName.ComparisonIndex.Value = 0;
    local_1c0.RowName.Number = 0;
    *piVar3 = *piVar3 + 1;
    LeaveCriticalSection((LPCRITICAL_SECTION)&FScopedDataTableChange::CriticalSection);
    (**(code **)(this->_padding_ + 0x2e0))(this);
    LoadStructData(this,(FStructuredArchiveSlot)local_1d0.StructuredArchive);
    FScopedDataTableChange::~FScopedDataTableChange(&local_1c0);
  }
  FMemScope::~FMemScope(local_1b0);
  FLLMScope::~FLLMScope(local_1d8);
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1a0);
  return;
}

// Serialize @ 147b10d60

void __thiscall UDataTable::Serialize(UDataTable *this,FStructuredArchiveRecord param_1)

{
  UScriptStruct *this_00;
  FArchive *pFVar1;
  int *piVar2;
  uint uVar3;
  FLLMScope local_res8 [2];
  FSlotBase local_res10;
  FName local_res18;
  FMemScope local_res20;
  FScopedDataTableChange local_28;
  
  local_res10.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_DataTable.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_DataTable.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  UObject::Serialize((UObject *)this,(FStructuredArchiveRecord)local_res10.StructuredArchive);
  this_00 = (this->RowStruct).field0_0x0.DebugPtr;
  if (this_00 != (UScriptStruct *)0x0) {
    UObject::ConditionalPreload((UObject *)this_00);
  }
  if ((pFVar1->field_0x28 & 1) == 0) {
    if ((pFVar1->field_0x28 & 4) != 0) {
      SaveStructData(this,(FStructuredArchiveSlot)local_res10.StructuredArchive);
    }
  }
  else {
    local_28.RowName.ComparisonIndex.Value = 0;
    local_28.RowName.Number = 0;
    local_28.Table = this;
    EnterCriticalSection((LPCRITICAL_SECTION)&FScopedDataTableChange::CriticalSection);
    uVar3 = ((uint)((ulonglong)local_28.Table >> 0x14) & 0xffff ^
            (uint)((ulonglong)local_28.Table >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    piVar2 = TMapBase<UDataTable_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UDataTable_*,int,0>_>
             ::FindOrAddImpl<UDataTable_*_const_&>
                       ((TMapBase<UDataTable_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UDataTable_*,int,0>_>
                         *)&FScopedDataTableChange::ScopeCount,uVar3 >> 0x10 ^ uVar3,&local_28.Table
                       );
    local_res18.ComparisonIndex.Value = 0;
    local_res18.Number = 0;
    local_28.RowName.ComparisonIndex.Value = 0;
    local_28.RowName.Number = 0;
    *piVar2 = *piVar2 + 1;
    LeaveCriticalSection((LPCRITICAL_SECTION)&FScopedDataTableChange::CriticalSection);
    (**(code **)(this->_padding_ + 0x2e0))(this);
    LoadStructData(this,(FStructuredArchiveSlot)local_res10.StructuredArchive);
    FScopedDataTableChange::~FScopedDataTableChange(&local_28);
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// StaticRegisterNativesUDataTable @ 147b17230

void __cdecl UDataTable::StaticRegisterNativesUDataTable(void)

{
  return;
}

