// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 6

// FTextReferencesArchive @ 141f226d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FTextReferencesArchive * __thiscall
FTextReferencesArchive::FTextReferencesArchive
          (FTextReferencesArchive *this,UPackage *param_1,EComparisonMode param_2,FString *param_3,
          FString *param_4,FString *param_5,int *param_6)

{
  FScriptContainerElement *pFVar1;
  byte *pbVar2;
  TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,FDefaultSetAllocator> *this_00;
  ForElementType<FSetElementId> FVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  ForElementType<FSetElementId> FVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulong64 uVar11;
  ForAnyElementType FVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong *puVar15;
  uint *puVar16;
  undefined1 local_res18 [8];
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_98;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_88;
  uint local_78;
  uint uStack_74;
  undefined1 *puStack_70;
  undefined4 local_68;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,FDefaultSetAllocator> *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  FArchiveState::FArchiveState((FArchiveState *)this);
  this->ComparisonMode = param_2;
  this_00 = &this->AllObjectsInPackage;
  this->NamespaceToMatch = param_3;
  this->_padding_ = (longlong)&___7FTextReferencesArchive__6B_;
  uVar8 = 0;
  this->KeyToMatch = param_4;
  this->SourceToMatch = param_5;
  this->Count = param_6;
  *(undefined8 *)&this_00->Elements = 0;
  *(undefined8 *)&(this->AllObjectsInPackage).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->AllObjectsInPackage).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->AllObjectsInPackage).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->AllObjectsInPackage).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->AllObjectsInPackage).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AllObjectsInPackage).Elements.field_0x34 = 0;
  (this->AllObjectsInPackage).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->AllObjectsInPackage).HashSize = 0;
  *(undefined8 *)&(this->ProcessedObjects).Elements = 0;
  *(undefined8 *)&(this->ProcessedObjects).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ProcessedObjects).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ProcessedObjects).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ProcessedObjects).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ProcessedObjects).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ProcessedObjects).Elements.field_0x34 = 0;
  (this->ProcessedObjects).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ProcessedObjects).HashSize = 0;
  (**(code **)(this->_padding_ + 0xd8))(this,1);
  (**(code **)(this->_padding_ + 0x108))(this,0);
  pbVar2 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar2 = *pbVar2 | 8;
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ArrayNum = 0;
  local_98.ArrayMax = 0;
  GetObjectsWithOuter((UObjectBase *)param_1,&local_98,true,RF_Transient,Garbage);
  iVar6 = local_98.ArrayNum;
  uVar11 = (ulong64)local_98.ArrayNum;
  if ((uint)local_98.ArrayNum <=
      (uint)(*(int *)&(this->AllObjectsInPackage).Elements.field_0x8 -
            *(int *)&(this->AllObjectsInPackage).Elements.field_0x34)) goto LAB_141f22a43;
  if (local_98.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum(uVar11);
  }
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this_00,local_98.ArrayNum);
  if ((uint)iVar6 < 4) {
    uVar10 = 1;
  }
  else {
    uVar9 = (ulonglong)(((uint)iVar6 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar10 = 1 << ((byte)lVar4 & 0x1f);
  }
  iVar6 = (this->AllObjectsInPackage).HashSize;
  if ((iVar6 == 0) || (iVar6 < (int)uVar10)) {
    (this->AllObjectsInPackage).HashSize = uVar10;
    if ((this->AllObjectsInPackage).Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(this->AllObjectsInPackage).Hash.SecondaryData,0,0,4);
    }
    if (uVar10 != 0) {
      uVar13 = uVar10;
      if (uVar10 < 2) {
        if ((this->AllObjectsInPackage).Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          uVar13 = 0;
          goto LAB_141f2289d;
        }
      }
      else {
LAB_141f2289d:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&(this->AllObjectsInPackage).Hash.SecondaryData,0,uVar13,4);
      }
      if (0 < (int)uVar10) {
        uVar14 = (ulonglong)uVar10;
        uVar9 = uVar8;
        do {
          FVar3 = (this->AllObjectsInPackage).Hash.SecondaryData;
          FVar7 = (ForElementType<FSetElementId>)&(this->AllObjectsInPackage).Hash;
          if (FVar3 != (ForElementType<FSetElementId>)0x0) {
            FVar7 = FVar3;
          }
          uVar5 = uVar9 & (longlong)(int)uVar10 - 1U;
          uVar9 = uVar9 + 1;
          *(undefined4 *)((longlong)FVar7 + uVar5 * 4) = 0xffffffff;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
    }
    if ((this->AllObjectsInPackage).HashSize != 0) {
      uVar10 = *(uint *)&(this->AllObjectsInPackage).Elements.field_0x28;
      puStack_70 = &(this->AllObjectsInPackage).Elements.field_0x10;
      uStack_74 = 1;
      local_78 = 0;
      uStack_64 = 0;
      uStack_60 = 0;
      if (uVar10 != 0) {
        puVar16 = *(uint **)&(this->AllObjectsInPackage).Elements.field_0x20;
        if (puVar16 == (uint *)0x0) {
          puVar16 = (uint *)puStack_70;
        }
        uVar13 = *puVar16;
        uVar9 = uVar8;
        while (uVar13 == 0) {
          uStack_60 = (int)uVar9 + 0x20;
          uVar9 = (ulonglong)uStack_60;
          iVar6 = (int)uVar8;
          local_78 = iVar6 + 1;
          uVar8 = (ulonglong)local_78;
          if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_78)
          goto LAB_141f22989;
          uVar13 = puVar16[(longlong)iVar6 + 1];
        }
        uStack_74 = -uVar13 & uVar13;
        uVar8 = (ulonglong)uStack_74 * 2 + 1;
        lVar4 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        uStack_64 = (int)lVar4 + -1 + uStack_60;
        uVar8 = (ulonglong)uStack_64;
        if ((int)uVar10 < (int)uStack_64) {
LAB_141f22989:
          uVar8 = (ulonglong)uVar10;
          uStack_64 = uVar10;
        }
      }
      local_68 = 0xffffffff;
      local_50._padding_ = CONCAT44(uStack_74,local_78);
      local_50.CurrentBitIndex = uStack_64;
      local_50.UnvisitedBitMask = 0xffffffff;
      local_50._28_4_ = uStack_5c;
      local_50.BaseBitIndex = uStack_60;
      local_58 = this_00;
      local_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_70;
      if ((int)uVar8 < (int)uVar10) {
        do {
          puVar15 = (ulonglong *)((longlong)(int)uVar8 * 0x10 + *(longlong *)&local_58->Elements);
          uVar10 = ((uint)(*puVar15 >> 0x14) & 0xffff ^ (uint)(*puVar15 >> 4)) * -0x7a143595;
          uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
          uVar10 = (uVar10 >> 0x10 ^ uVar10) & (this->AllObjectsInPackage).HashSize - 1U;
          *(uint *)((longlong)puVar15 + 0xc) = uVar10;
          FVar3 = (this->AllObjectsInPackage).Hash.SecondaryData;
          FVar7 = (ForElementType<FSetElementId>)&(this->AllObjectsInPackage).Hash;
          if (FVar3 != (ForElementType<FSetElementId>)0x0) {
            FVar7 = FVar3;
          }
          uVar9 = (longlong)(this->AllObjectsInPackage).HashSize - 1U & (longlong)(int)uVar10;
          *(undefined4 *)(puVar15 + 1) = *(undefined4 *)((longlong)FVar7 + uVar9 * 4);
          *(int *)((longlong)FVar7 + uVar9 * 4) = (int)uVar8;
          local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
          uVar8 = (ulonglong)(uint)local_50.CurrentBitIndex;
        } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
      }
    }
  }
  uVar11 = local_98._8_8_ & 0xffffffff;
LAB_141f22a43:
  iVar6 = (int)uVar11;
  pFVar1 = local_98.AllocatorInstance.Data + (longlong)iVar6 * 8;
  FVar12.Data = local_98.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar11 != iVar6) {
      `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (FVar12.Data == pFVar1) break;
    param_5 = *(FString **)FVar12.Data;
    TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,FDefaultSetAllocator>::
    Emplace<UObject_const_*_const_&>(this_00,(UObject **)&param_4,(bool *)&param_5);
    uVar11 = local_98._8_8_ & 0xffffffff;
    FVar12.Data = FVar12.Data + 8;
  }
  if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  GetObjectsWithOuter((UObjectBase *)param_1,&local_88,false,RF_Transient,Garbage);
  iVar6 = local_88.ArrayNum;
  uVar8 = (ulonglong)local_88.ArrayNum;
  pFVar1 = local_88.AllocatorInstance.Data + uVar8 * 8;
  FVar12.Data = local_88.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar8 != iVar6) {
      `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (FVar12.Data == pFVar1) break;
    ProcessObject(this,*(UObject **)FVar12.Data);
    uVar8 = local_88._8_8_ & 0xffffffff;
    FVar12.Data = FVar12.Data + 8;
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return this;
}

// ~FTextReferencesArchive @ 141f23dd0

void __thiscall FTextReferencesArchive::~FTextReferencesArchive(FTextReferencesArchive *this)

{
  ForElementType<FSetElementId> FVar1;
  
  (this->ProcessedObjects).HashSize = 0;
  FVar1 = (this->ProcessedObjects).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<UObject_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UObject_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ProcessedObjects).Elements);
  (this->AllObjectsInPackage).HashSize = 0;
  FVar1 = (this->AllObjectsInPackage).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<UObject_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UObject_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->AllObjectsInPackage).Elements);
  FArchive::~FArchive((FArchive *)this);
  return;
}

// operator<< @ 141f257a0

FArchive * __thiscall
FTextReferencesArchive::operator<<(FTextReferencesArchive *this,UObject **param_1)

{
  ProcessObject(this,*param_1);
  return (FArchive *)this;
}

// operator<< @ 141f257c0

FArchive * __thiscall
FTextReferencesArchive::operator<<(FTextReferencesArchive *this,FText *param_1)

{
  EComparisonMode EVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  TOptional<FString>_u_0 *pTVar5;
  FString *pFVar6;
  TOptional<FString>_u_0 *pTVar7;
  longlong lVar8;
  bool bVar9;
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  TOptional<FString>_u_0 local_38;
  TOptional<FString>_u_0 local_28;
  
  pTVar5 = &FTextInspector::GetNamespace((TOptional<FString> *)&local_28.TypedValue,param_1)->
            field0_0x0;
  local_38.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_38._8_8_ = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  pTVar7 = &local_38;
  if (*(int *)((longlong)&(pTVar5->TypedValue).Data + 0xc) != -1) {
    pTVar7 = pTVar5;
  }
  local_40 = *(int *)((longlong)&(pTVar7->TypedValue).Data + 8);
  lVar8 = (longlong)local_40;
  pFVar3 = (((TOptional<FString>_u_0 *)&(pTVar7->TypedValue).Data)->TypedValue).Data.
           AllocatorInstance.Data;
  if (local_40 == 0) {
    local_3c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_40,0,&local_48,local_40,&local_3c);
    memcpy(local_48.Data,pFVar3,lVar8 * 2);
  }
  if ((local_28.TypedValue.Data.ArrayMax != -1) &&
     (local_28.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_28.TypedValue.Data.AllocatorInstance.Data);
  }
  pTVar5 = &FTextInspector::GetKey((TOptional<FString> *)&local_28.TypedValue,param_1)->field0_0x0;
  local_38.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_38._8_8_ = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  pTVar7 = &local_38;
  if (*(int *)((longlong)&(pTVar5->TypedValue).Data + 0xc) != -1) {
    pTVar7 = pTVar5;
  }
  local_50 = *(int *)((longlong)&(pTVar7->TypedValue).Data + 8);
  lVar8 = (longlong)local_50;
  pFVar3 = (((TOptional<FString>_u_0 *)&(pTVar7->TypedValue).Data)->TypedValue).Data.
           AllocatorInstance.Data;
  if (local_50 == 0) {
    local_4c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_50,0,&local_58,local_50,&local_4c);
    memcpy(local_58.Data,pFVar3,lVar8 * 2);
  }
  if ((local_28.TypedValue.Data.ArrayMax != -1) &&
     (local_28.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_28.TypedValue.Data.AllocatorInstance.Data);
  }
  iVar2 = local_50;
  iVar4 = (this->NamespaceToMatch->Data).ArrayNum;
  if (local_40 == iVar4) {
    if (1 < local_40) {
      iVar4 = wcscmp((wchar_t *)local_48.Data,
                     (wchar_t *)(this->NamespaceToMatch->Data).AllocatorInstance.Data);
      bVar9 = iVar4 == 0;
      goto LAB_141f25921;
    }
  }
  else {
    bVar9 = local_40 + iVar4 == 1;
LAB_141f25921:
    if (!bVar9) goto LAB_141f25a07;
  }
  iVar4 = (this->KeyToMatch->Data).ArrayNum;
  if (iVar2 == iVar4) {
    if (1 < iVar2) {
      iVar4 = wcscmp((wchar_t *)local_58.Data,
                     (wchar_t *)(this->KeyToMatch->Data).AllocatorInstance.Data);
      bVar9 = iVar4 == 0;
      goto LAB_141f25954;
    }
  }
  else {
    bVar9 = iVar4 + iVar2 == 1;
LAB_141f25954:
    if (!bVar9) goto LAB_141f25a07;
  }
  EVar1 = this->ComparisonMode;
  if (EVar1 != MatchId) {
    if (EVar1 == MatchSource) {
      pFVar6 = FTextInspector::GetSourceString(param_1);
      if (pFVar6 == (FString *)0x0) goto LAB_141f25a07;
      iVar4 = (pFVar6->Data).ArrayNum;
      iVar2 = (this->SourceToMatch->Data).ArrayNum;
      if (iVar4 == iVar2) {
        if (iVar4 < 2) goto LAB_141f259fe;
        iVar4 = wcscmp((wchar_t *)(pFVar6->Data).AllocatorInstance.Data,
                       (wchar_t *)(this->SourceToMatch->Data).AllocatorInstance.Data);
        bVar9 = iVar4 == 0;
      }
      else {
        bVar9 = iVar2 + iVar4 == 1;
      }
      if (!bVar9) goto LAB_141f25a07;
    }
    else {
      if ((EVar1 != MismatchSource) ||
         (pFVar6 = FTextInspector::GetSourceString(param_1), pFVar6 == (FString *)0x0))
      goto LAB_141f25a07;
      iVar4 = (pFVar6->Data).ArrayNum;
      iVar2 = (this->SourceToMatch->Data).ArrayNum;
      if (iVar4 == iVar2) {
        if (iVar4 < 2) goto LAB_141f25a07;
        iVar4 = wcscmp((wchar_t *)(pFVar6->Data).AllocatorInstance.Data,
                       (wchar_t *)(this->SourceToMatch->Data).AllocatorInstance.Data);
        bVar9 = iVar4 == 0;
      }
      else {
        bVar9 = iVar2 + iVar4 == 1;
      }
      if (bVar9) goto LAB_141f25a07;
    }
  }
LAB_141f259fe:
  *this->Count = *this->Count + 1;
LAB_141f25a07:
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return (FArchive *)this;
}

// ProcessObject @ 141f405b0

void __thiscall FTextReferencesArchive::ProcessObject(FTextReferencesArchive *this,UObject *param_1)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  UObject *local_res10;
  UObject *local_res18;
  
  if ((param_1 != (UObject *)0x0) &&
     (uVar7 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
              -0x7a143595, uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb,
     uVar7 = uVar7 >> 0x10 ^ uVar7,
     *(int *)&(this->AllObjectsInPackage).Elements.field_0x8 !=
     *(int *)&(this->AllObjectsInPackage).Elements.field_0x34)) {
    FVar8 = (this->AllObjectsInPackage).Hash.SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&(this->AllObjectsInPackage).Hash;
    }
    iVar3 = *(int *)((longlong)FVar8 +
                    (ulonglong)((this->AllObjectsInPackage).HashSize - 1U & uVar7) * 4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&(this->AllObjectsInPackage).Elements;
      while (*(UObject **)(lVar1 + (longlong)iVar3 * 0x10) != param_1) {
        iVar3 = *(int *)(lVar1 + 8 + (longlong)iVar3 * 0x10);
        if (iVar3 == -1) {
          return;
        }
      }
      if (*(int *)&(this->ProcessedObjects).Elements.field_0x8 !=
          *(int *)&(this->ProcessedObjects).Elements.field_0x34) {
        FVar8 = (this->ProcessedObjects).Hash.SecondaryData;
        if (FVar8 == (ForElementType<FSetElementId>)0x0) {
          FVar8 = (ForElementType<FSetElementId>)&(this->ProcessedObjects).Hash;
        }
        iVar3 = *(int *)((longlong)FVar8 +
                        (ulonglong)((this->ProcessedObjects).HashSize - 1U & uVar7) * 4);
        if (iVar3 != -1) {
          lVar1 = *(longlong *)&(this->ProcessedObjects).Elements;
          do {
            if (*(UObject **)(lVar1 + (longlong)iVar3 * 0x10) == param_1) {
              return;
            }
            iVar3 = *(int *)(lVar1 + 8 + (longlong)iVar3 * 0x10);
          } while (iVar3 != -1);
        }
      }
      local_res10 = param_1;
      TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,FDefaultSetAllocator>::
      Emplace<UObject_const_*_const_&>(&this->ProcessedObjects,&local_res18,(bool *)&local_res10);
      uVar10 = *(ulonglong *)&param_1->field_0x10;
      if (uVar10 != 0) {
        lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar6 = (ulonglong *)0x0;
        do {
          if ((*(int *)(lVar1 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)
             ) {
            atexit(`FTextReferenceCollector::GetTypeSpecificTextReferenceCollectorCallbacks'::__l2::
                   _dynamic_atexit_destructor_for__TypeSpecificTextReferenceCollectorCallbacks__);
            _Init_thread_footer(&::_TSS0);
          }
          uVar7 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
          uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
          puVar11 = puVar6;
          if (TypeSpecificTextReferenceCollectorCallbacks._8_4_ !=
              TypeSpecificTextReferenceCollectorCallbacks._52_4_) {
            lVar9 = 0x154b88428;
            if (TypeSpecificTextReferenceCollectorCallbacks._64_8_ != 0) {
              lVar9 = TypeSpecificTextReferenceCollectorCallbacks._64_8_;
            }
            iVar3 = *(int *)(lVar9 + (ulonglong)
                                     (TypeSpecificTextReferenceCollectorCallbacks._72_4_ - 1 &
                                     (uVar7 >> 0x10 ^ uVar7)) * 4);
            while (iVar3 != -1) {
              puVar5 = (ulonglong *)
                       ((longlong)iVar3 * 0x50 + TypeSpecificTextReferenceCollectorCallbacks._0_8_);
              if (*puVar5 == uVar10) {
                puVar11 = puVar5 + 2;
                if (puVar5 == (ulonglong *)0x0) {
                  puVar11 = puVar6;
                }
                if (puVar11 != (ulonglong *)0x0) goto LAB_141f407bf;
                break;
              }
              iVar3 = (int)puVar5[8];
            }
          }
          uVar10 = *(ulonglong *)(uVar10 + 0x40);
        } while (uVar10 != 0);
LAB_141f407bf:
        if (puVar11 != (ulonglong *)0x0) {
          local_res10 = param_1;
          UE::Core::Private::Function::CheckCallable((void *)*puVar11);
          pcVar2 = (code *)*puVar11;
          puVar6 = puVar11 + 2;
          if ((ulonglong *)puVar11[5] != (ulonglong *)0x0) {
            puVar6 = (ulonglong *)puVar11[5];
          }
          uVar4 = (**(code **)(*puVar6 + 8))();
          (*pcVar2)(uVar4,&local_res10,this);
          return;
        }
      }
      (**(code **)(*(longlong *)param_1 + 200))(param_1,this);
    }
  }
  return;
}

// ShouldSkipProperty @ 141f4db50

bool __thiscall
FTextReferencesArchive::ShouldSkipProperty(FTextReferencesArchive *this,FProperty *param_1)

{
  if ((((uint)(int)param_1->PropertyFlags >> 0xd & 1) != 0) && ((int)this->_padding_ < 1)) {
    return true;
  }
  return false;
}

