// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 26

// FMountDir @ 142ad6b20

FMountDir * __thiscall
UE::AssetDataGather::Private::FMountDir::FMountDir
          (FMountDir *this,FAssetDataDiscovery *param_1,TStringView<wchar_t> *param_2,
          TStringView<wchar_t> *param_3)

{
  FString *pFVar1;
  longlong *plVar2;
  undefined8 uVar3;
  wchar_t *pwVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  FString *pFVar7;
  FScanDir *pFVar8;
  FScanDir *pFVar9;
  TStringView<wchar_t> local_28;
  
  pFVar9 = (FScanDir *)0x0;
  pFVar1 = &this->LocalAbsPath;
  (this->ChildMountPaths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar3 = *(undefined8 *)&param_2->Size;
  (this->ChildMountPaths).ArrayNum = 0;
  (this->ChildMountPaths).ArrayMax = 0;
  *(undefined8 *)&(this->RelPathsDenyList).Elements = 0;
  pwVar4 = param_2->DataPtr;
  *(undefined8 *)&(this->RelPathsDenyList).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->RelPathsDenyList).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->RelPathsDenyList).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->RelPathsDenyList).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->RelPathsDenyList).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RelPathsDenyList).Elements.field_0x34 = 0;
  (this->RelPathsDenyList).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->RelPathsDenyList).HashSize = 0;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LocalAbsPath).Data.ArrayNum = 0;
  (this->LocalAbsPath).Data.ArrayMax = 0;
  pFVar7 = ::FString::ConstructFromPtrSize((FString *)&local_28,pwVar4,(int)uVar3);
  if (pFVar1 != pFVar7) {
    pFVar5 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
    (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->LocalAbsPath).Data.ArrayNum = (pFVar7->Data).ArrayNum;
    (this->LocalAbsPath).Data.ArrayMax = (pFVar7->Data).ArrayMax;
    (pFVar7->Data).ArrayNum = 0;
    (pFVar7->Data).ArrayMax = 0;
  }
  if (local_28.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_28.DataPtr);
  }
  uVar3 = *(undefined8 *)&param_3->Size;
  pFVar1 = &this->LongPackageName;
  pwVar4 = param_3->DataPtr;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LongPackageName).Data.ArrayNum = 0;
  (this->LongPackageName).Data.ArrayMax = 0;
  pFVar7 = ::FString::ConstructFromPtrSize((FString *)&local_28,pwVar4,(int)uVar3);
  if (pFVar1 != pFVar7) {
    pFVar5 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
    (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->LongPackageName).Data.ArrayNum = (pFVar7->Data).ArrayNum;
    (this->LongPackageName).Data.ArrayMax = (pFVar7->Data).ArrayMax;
    (pFVar7->Data).ArrayNum = 0;
    (pFVar7->Data).ArrayMax = 0;
  }
  if (local_28.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_28.DataPtr);
  }
  (this->Root).Reference = (FScanDir *)0x0;
  this->Discovery = param_1;
  this->ParentMount = (FMountDir *)0x0;
  this->bHasStartedScanning = false;
  pFVar8 = ::operator_new(0x58);
  if (pFVar8 != (FScanDir *)0x0) {
    local_28.DataPtr = (wchar_t *)0x0;
    local_28.Size = 0;
    local_28._12_4_ = 0;
    pFVar9 = FScanDir::FScanDir(pFVar8,this,(FScanDir *)0x0,&local_28);
  }
  pFVar8 = (this->Root).Reference;
  if (pFVar8 != pFVar9) {
    (this->Root).Reference = pFVar9;
    if (pFVar9 != (FScanDir *)0x0) {
      LOCK();
      *(int *)&pFVar9->_padding_ = (int)pFVar9->_padding_ + 1;
      UNLOCK();
    }
    if (pFVar8 != (FScanDir *)0x0) {
      plVar2 = &pFVar8->_padding_;
      LOCK();
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if (((int)lVar6 == 1) && (plVar2 != (longlong *)0x0)) {
        (**(code **)pFVar8->_padding_)(pFVar8,1);
      }
    }
  }
  UpdateDenyList(this);
  return this;
}

// ~FMountDir @ 142adaab0

void __thiscall UE::AssetDataGather::Private::FMountDir::~FMountDir(FMountDir *this)

{
  longlong *plVar1;
  FScanDir *pFVar2;
  FScriptContainerElement *pFVar3;
  ForElementType<FSetElementId> FVar4;
  longlong lVar5;
  
  FScanDir::Shutdown((this->Root).Reference);
  pFVar2 = (this->Root).Reference;
  if (pFVar2 != (FScanDir *)0x0) {
    (this->Root).Reference = (FScanDir *)0x0;
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar5 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  pFVar2 = (this->Root).Reference;
  if (pFVar2 != (FScanDir *)0x0) {
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar5 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  pFVar3 = (this->LongPackageName).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->LocalAbsPath).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  (this->RelPathsDenyList).HashSize = 0;
  FVar4 = (this->RelPathsDenyList).Hash.SecondaryData;
  if (FVar4 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->RelPathsDenyList).Elements);
  DestructItems<FString,int>
            ((FString *)(this->ChildMountPaths).AllocatorInstance.Data,
             (this->ChildMountPaths).ArrayNum);
  pFVar3 = (this->ChildMountPaths).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// AddChildMount @ 142ae8810

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::AssetDataGather::Private::FMountDir::AddChildMount(FMountDir *this,FMountDir *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  wchar_t *pwVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28 [2];
  
  if (param_1 != (FMountDir *)0x0) {
    local_48.DataPtr = (wchar_t *)(this->LocalAbsPath).Data.AllocatorInstance.Data;
    iVar1 = (this->LocalAbsPath).Data.ArrayNum;
    local_58.DataPtr = (wchar_t *)0x0;
    iVar9 = 0;
    local_58.Size = 0;
    local_38.DataPtr = (wchar_t *)(param_1->LocalAbsPath).Data.AllocatorInstance.Data;
    iVar6 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar6 = iVar9;
    }
    iVar1 = (param_1->LocalAbsPath).Data.ArrayNum;
    local_48.Size = iVar6;
    iVar6 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar6 = iVar9;
    }
    local_38.Size = iVar6;
    bVar5 = FPathViews::TryMakeChildPathRelativeTo(&local_38,&local_48,&local_58);
    iVar1 = local_58.Size;
    pwVar4 = local_58.DataPtr;
    if (bVar5) {
      iVar6 = (this->ChildMountPaths).ArrayNum;
      pFVar7 = (this->ChildMountPaths).AllocatorInstance.Data;
      pFVar8 = pFVar7 + (longlong)iVar6 * 0x10;
      uVar3._4_4_ = local_58._12_4_;
      uVar3._0_4_ = local_58.Size;
      if (pFVar7 != pFVar8) {
        do {
          local_38.DataPtr = *(wchar_t **)pFVar7;
          local_48.DataPtr = pwVar4;
          local_28[0].Size = *(int *)(pFVar7 + 8) + -1;
          if (*(int *)(pFVar7 + 8) == 0) {
            local_28[0].Size = iVar9;
          }
          local_38.Size = local_28[0].Size;
          local_28[0]._12_4_ = local_38._12_4_;
          local_48._8_8_ = uVar3;
          local_28[0].DataPtr = local_38.DataPtr;
          bVar5 = FPathViews::Equals(local_28,&local_48);
          if (bVar5) goto LAB_142ae89a3;
          pFVar7 = pFVar7 + 0x10;
        } while (pFVar7 != pFVar8);
        iVar6 = (this->ChildMountPaths).ArrayNum;
      }
      if (iVar6 == (this->ChildMountPaths).ArrayMax) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)this,&(this->ChildMountPaths).ArrayMax);
      }
      (this->ChildMountPaths).ArrayNum = iVar6 + 1;
      pFVar8 = (this->ChildMountPaths).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar8->field_0x0)->AllocatorInstance).Data
           = (FScriptContainerElement *)0x0;
      *(undefined8 *)&pFVar8[8].field_0x0 = 0;
      pFVar7 = (FScriptContainerElement *)
               ::FString::ConstructFromPtrSize((FString *)local_28,pwVar4,iVar1);
      if (pFVar8 != pFVar7) {
        pFVar2 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar8->field_0x0)->
                 AllocatorInstance).Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar8->field_0x0)->AllocatorInstance).
        Data = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar7->field_0x0)->
               AllocatorInstance).Data;
        (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar7->field_0x0)->AllocatorInstance).
        Data = (FScriptContainerElement *)0x0;
        *(int *)&pFVar8[8].field_0x0 = *(int *)&pFVar7[8].field_0x0;
        *(int *)&pFVar8[0xc].field_0x0 = *(int *)&pFVar7[0xc].field_0x0;
        *(undefined8 *)&pFVar7[8].field_0x0 = 0;
      }
      if ((FScriptContainerElement *)local_28[0].DataPtr != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28[0].DataPtr);
      }
LAB_142ae89a3:
      if ((this->bHasStartedScanning != false) && (2 < (byte)LogAssetRegistry._0_1_)) {
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
      }
      UpdateDenyList(this);
      local_28[0]._12_4_ = local_58._12_4_;
      local_28[0].Size = local_58.Size;
      local_28[0].DataPtr = local_58.DataPtr;
      MarkDirty(this,local_28);
    }
  }
  return;
}

// AddChildMountPath @ 142ae8a60

void __thiscall
UE::AssetDataGather::Private::FMountDir::AddChildMountPath
          (FMountDir *this,TStringView<wchar_t> *param_1)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined4 uStack_2c;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  pFVar4 = (this->ChildMountPaths).AllocatorInstance.Data;
  iVar3 = (this->ChildMountPaths).ArrayNum;
  pFVar5 = pFVar4 + (longlong)iVar3 * 0x10;
  if (pFVar4 != pFVar5) {
    do {
      local_18.DataPtr = *(wchar_t **)pFVar4;
      local_28.DataPtr = param_1->DataPtr;
      local_28.Size = param_1->Size;
      local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
      iVar3 = *(int *)(pFVar4 + 8) + -1;
      if (*(int *)(pFVar4 + 8) == 0) {
        iVar3 = 0;
      }
      local_18._12_4_ = uStack_2c;
      local_18.Size = iVar3;
      bVar2 = FPathViews::Equals(&local_18,&local_28);
      if (bVar2) {
        return;
      }
      pFVar4 = pFVar4 + 0x10;
    } while (pFVar4 != pFVar5);
    iVar3 = (this->ChildMountPaths).ArrayNum;
  }
  if (iVar3 == (this->ChildMountPaths).ArrayMax) {
    iVar3 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,&(this->ChildMountPaths).ArrayMax);
  }
  (this->ChildMountPaths).ArrayNum = iVar3 + 1;
  pFVar5 = (this->ChildMountPaths).AllocatorInstance.Data + (longlong)iVar3 * 0x10;
  (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar5->field_0x0)->AllocatorInstance).Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)&pFVar5[8].field_0x0 = 0;
  pFVar4 = (FScriptContainerElement *)
           ::FString::ConstructFromPtrSize
                     ((FString *)&local_18,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
  if (pFVar5 != pFVar4) {
    pFVar1 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar5->field_0x0)->AllocatorInstance
             ).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar5->field_0x0)->AllocatorInstance).Data =
         (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar4->field_0x0)->AllocatorInstance).
         Data;
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar4->field_0x0)->AllocatorInstance).Data =
         (FScriptContainerElement *)0x0;
    *(int *)&pFVar5[8].field_0x0 = *(int *)&pFVar4[8].field_0x0;
    *(int *)&pFVar5[0xc].field_0x0 = *(int *)&pFVar4[0xc].field_0x0;
    *(undefined8 *)&pFVar4[8].field_0x0 = 0;
  }
  if (local_18.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_18.DataPtr);
  }
  return;
}

// GetAllocatedSize @ 142afb0e0

ulong64 __thiscall UE::AssetDataGather::Private::FMountDir::GetAllocatedSize(FMountDir *this)

{
  FScriptContainerElement *pFVar1;
  undefined1 *puVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong64 uVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 *puVar16;
  uint uVar17;
  uint *puVar19;
  FScriptContainerElement *pFVar20;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  ulonglong uVar18;
  
  uVar9 = FScanDir::GetAllocatedSize((this->Root).Reference);
  iVar10 = (this->ChildMountPaths).ArrayNum;
  pFVar11 = (this->ChildMountPaths).AllocatorInstance.Data;
  lVar12 = (longlong)(this->ChildMountPaths).ArrayMax * 0x10 + 0x58 + uVar9;
  pFVar20 = pFVar11 + (longlong)iVar10 * 0x10;
  while( true ) {
    if ((this->ChildMountPaths).ArrayNum != iVar10) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar11 == pFVar20) break;
    pFVar1 = pFVar11 + 0xc;
    pFVar11 = pFVar11 + 0x10;
    lVar12 = lVar12 + (longlong)*(int *)pFVar1 * 2;
  }
  uVar15 = 0;
  uVar14 = 0;
  uVar3 = (this->RelPathsDenyList).HashSize;
  uVar18 = uVar15;
  if (1 < uVar3) {
    uVar18 = (longlong)(int)uVar3 << 2;
  }
  puVar2 = &(this->RelPathsDenyList).Elements.field_0x10;
  uVar3 = *(uint *)&(this->RelPathsDenyList).Elements.field_0x28;
  uVar6 = 1;
  uVar17 = 0;
  uVar9 = lVar12 + (longlong)(this->LongPackageName).Data.ArrayMax * 2 +
          uVar18 + ((*(int *)&(this->RelPathsDenyList).Elements.field_0x2c + 0x1fU >> 5) << 2) +
          (longlong)*(int *)&(this->RelPathsDenyList).Elements.field_0xc * 0x18;
  uVar7 = uVar14;
  if (uVar3 != 0) {
    puVar19 = *(uint **)&(this->RelPathsDenyList).Elements.field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar2;
    }
    uVar7 = *puVar19;
    uVar18 = uVar15;
    uVar17 = 0;
    uVar14 = 0;
    while (uVar7 == 0) {
      iVar10 = (int)uVar15;
      uVar17 = (int)uVar18 + 0x20;
      uVar18 = (ulonglong)uVar17;
      uVar14 = iVar10 + 1;
      uVar15 = (ulonglong)uVar14;
      uVar7 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar14)
      goto LAB_142afb21d;
      uVar7 = puVar19[(longlong)iVar10 + 1];
    }
    uVar6 = -uVar7 & uVar7;
    uVar15 = (ulonglong)uVar6 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res18 = (int)lVar12;
    uVar7 = (uVar17 - 1) + local_res18;
    if ((int)uVar3 < (int)uVar7) {
      uVar7 = uVar3;
    }
  }
LAB_142afb21d:
  uVar8 = *(uint *)&(this->RelPathsDenyList).Elements.field_0x28;
  uVar13 = uVar8 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,uVar14);
  TStack_60.CurrentBitIndex = uVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar8 >> 5;
  TStack_60._28_4_ = uVar7;
  TStack_60.BaseBitIndex = uVar17;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->RelPathsDenyList).Elements.field_0x8 -
                       *(int *)&(this->RelPathsDenyList).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar8 < 0) || ((int)uVar3 < (int)uVar8)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return uVar9;
  }
  uVar3 = *(uint *)&(this->RelPathsDenyList).Elements.field_0x28;
  if (uVar8 != uVar3) {
    puVar16 = *(undefined1 **)&(this->RelPathsDenyList).Elements.field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar2;
    }
    uVar14 = -1 << ((byte)uVar8 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar10 * 4);
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar10;
      uVar13 = uVar13 + 0x20;
      iVar10 = iVar10 + 1;
      uVar8 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_142afb320;
      uVar14 = *(uint *)(puVar16 + lVar12 * 4 + 4);
    }
    uVar15 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar8 = (int)lVar12 + -1 + uVar13;
    if ((int)uVar3 < (int)uVar8) {
      uVar8 = uVar3;
    }
  }
LAB_142afb320:
  while( true ) {
    if (*(int *)&(this->RelPathsDenyList).Elements.field_0x8 -
        *(int *)&(this->RelPathsDenyList).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar8) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    uVar9 = uVar9 + (longlong)
                    *(int *)(*(longlong *)&(this->RelPathsDenyList).Elements + 0xc +
                            (longlong)TStack_60.CurrentBitIndex * 0x18) * 2;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return uVar9;
}

// GetChildMounts @ 142afd540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<UE::AssetDataGather::Private::FMountDir_*,TSizedDefaultAllocator<32>_> * __thiscall
UE::AssetDataGather::Private::FMountDir::GetChildMounts
          (FMountDir *this,
          TArray<UE::AssetDataGather::Private::FMountDir_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  void *pvVar6;
  TArray<UE::AssetDataGather::Private::FMountDir_*,TSizedDefaultAllocator<32>_> *pTVar7;
  ulong64 uVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  undefined1 auStackY_318 [32];
  undefined1 local_2c8 [8];
  FMountDir *local_2c0;
  uint local_2b8;
  FScriptContainerElement *local_2b0;
  wchar_t *local_2a8;
  int iStack_2a0;
  undefined4 uStack_29c;
  wchar_t *local_298;
  int iStack_290;
  undefined4 uStack_28c;
  TStringView<wchar_t> local_288;
  TStringView<wchar_t> local_278;
  TStringBuilderBase<wchar_t> local_268;
  wchar_t local_248 [256];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_318;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_2b8 = (this->ChildMountPaths).ArrayNum;
  uVar5 = (ulonglong)(int)local_2b8;
  pFVar9 = (this->ChildMountPaths).AllocatorInstance.Data;
  local_2b0 = pFVar9 + uVar5 * 0x10;
  while( true ) {
    pFVar1 = local_2b0;
    if ((this->ChildMountPaths).ArrayNum != (int)uVar5) {
      local_2c8[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_2c8);
    }
    if (pFVar9 == pFVar1) break;
    pFVar1 = (this->LocalAbsPath).Data.AllocatorInstance.Data;
    local_268.Base = local_248;
    local_268.End = (wchar_t *)local_48;
    local_268.bIsDynamic = false;
    local_268.bIsExternal = false;
    local_268.CurPos = local_248;
    iVar4 = (this->LocalAbsPath).Data.ArrayNum;
    iVar10 = iVar4 + -1;
    if (iVar4 == 0) {
      iVar10 = 0;
    }
    uVar8 = (ulong64)iVar10;
    if (local_48 < local_248 + uVar8) {
      TStringBuilderBase<wchar_t>::Extend(&local_268,uVar8);
    }
    if (iVar10 != 0) {
      pvVar6 = FGenericPlatformString::Memcpy(local_268.CurPos,pFVar1,uVar8 * 2);
      local_268.CurPos = (wchar_t *)((longlong)pvVar6 + uVar8 * 2);
    }
    local_2a8 = *(wchar_t **)pFVar9;
    iStack_2a0 = *(int *)(pFVar9 + 8) + -1;
    if (*(int *)(pFVar9 + 8) == 0) {
      iStack_2a0 = 0;
    }
    local_288._12_4_ = uStack_29c;
    local_288.Size = iStack_2a0;
    local_288.DataPtr = local_2a8;
    FPathViews::AppendPath(&local_268,&local_288);
    local_298 = local_268.Base;
    iStack_290 = (int)((longlong)local_268.CurPos - (longlong)local_268.Base >> 1);
    local_278._12_4_ = uStack_28c;
    local_278.Size = iStack_290;
    local_278.DataPtr = local_268.Base;
    local_2c0 = FAssetDataDiscovery::FindMountPoint(this->Discovery,&local_278);
    if (local_2c0 == (FMountDir *)0x0) {
      bVar3 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1152219097065326097>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                         ,0x611,"ChildMount");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TArray<UE::AssetDataGather::Private::FMountDir_*,TSizedDefaultAllocator<32>_> *)
                 (*pcVar2)();
        return pTVar7;
      }
    }
    else {
      pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar1 <= (FScriptContainerElement *)&local_2c0) &&
         ((FScriptContainerElement *)&local_2c0 <
          pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 8)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pTVar7 = (TArray<UE::AssetDataGather::Private::FMountDir_*,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar7;
        }
      }
      iVar4 = __return_storage_ptr__->ArrayNum;
      if (iVar4 == __return_storage_ptr__->ArrayMax) {
        iVar4 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar4 + 1;
      *(FMountDir **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_2c0;
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
    pFVar9 = pFVar9 + 0x10;
    uVar5 = (ulonglong)local_2b8;
  }
  return __return_storage_ptr__;
}

// GetControllingDir @ 142afd7d0

FScanDir * __thiscall
UE::AssetDataGather::Private::FMountDir::GetControllingDir
          (FMountDir *this,TStringView<wchar_t> *param_1,bool param_2,FInherited *param_3,
          FString *param_4)

{
  int iVar1;
  bool bVar2;
  FScanDir *pFVar3;
  int iVar4;
  FInherited local_res8 [2];
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_38.DataPtr = (wchar_t *)0x0;
  local_38.Size = 0;
  local_28.DataPtr = (wchar_t *)(this->LocalAbsPath).Data.AllocatorInstance.Data;
  iVar1 = (this->LocalAbsPath).Data.ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  local_28.Size = iVar4;
  bVar2 = FPathViews::TryMakeChildPathRelativeTo(&local_18,&local_28,&local_38);
  if (!bVar2) {
    return (FScanDir *)0x0;
  }
  local_18._12_4_ = local_38._12_4_;
  local_18.Size = local_38.Size;
  local_res8[0].bIsOnAllowList = false;
  local_res8[0].bMatchesDenyList = false;
  local_res8[0].bIgnoreDenyList = false;
  local_18.DataPtr = local_38.DataPtr;
  pFVar3 = FScanDir::GetControllingDir
                     ((this->Root).Reference,&local_18,param_2,local_res8,param_3,param_4);
  return pFVar3;
}

// GetDiscovery @ 142afe7e0

FAssetDataDiscovery * __thiscall
UE::AssetDataGather::Private::FMountDir::GetDiscovery(FMountDir *this)

{
  return this->Discovery;
}

// GetFirstIncompleteScanDir @ 142afe990

FScanDir * __thiscall
UE::AssetDataGather::Private::FMountDir::GetFirstIncompleteScanDir(FMountDir *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScanDir *pFVar3;
  FScanDir *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->Root).Reference;
  pFVar5 = (pFVar3->SubDirs).AllocatorInstance.Data;
  iVar2 = (pFVar3->SubDirs).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((pFVar3->SubDirs).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TRefCountPtr<UE::AssetDataGather::Private::FScanDir>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    pFVar4 = FScanDir::GetFirstIncompleteScanDir(*(FScanDir **)pFVar5);
    if (pFVar4 != (FScanDir *)0x0) {
      return pFVar4;
    }
    pFVar5 = pFVar5 + 8;
  }
  pFVar4 = (FScanDir *)0x0;
  if (pFVar3->bIsComplete == false) {
    pFVar4 = pFVar3;
  }
  return pFVar4;
}

// GetLocalAbsPath @ 142afed70

TStringView<wchar_t> * __thiscall
UE::AssetDataGather::Private::FMountDir::GetLocalAbsPath
          (FMountDir *this,TStringView<wchar_t> *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  
  __return_storage_ptr__->DataPtr = (wchar_t *)(this->LocalAbsPath).Data.AllocatorInstance.Data;
  iVar1 = (this->LocalAbsPath).Data.ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  __return_storage_ptr__->Size = iVar2;
  return __return_storage_ptr__;
}

// GetLongPackageName @ 142afeeb0

TStringView<wchar_t> * __thiscall
UE::AssetDataGather::Private::FMountDir::GetLongPackageName
          (FMountDir *this,TStringView<wchar_t> *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  
  __return_storage_ptr__->DataPtr = (wchar_t *)(this->LongPackageName).Data.AllocatorInstance.Data;
  iVar1 = (this->LongPackageName).Data.ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  __return_storage_ptr__->Size = iVar2;
  return __return_storage_ptr__;
}

// GetMonitorData @ 142afefb0

void __thiscall
UE::AssetDataGather::Private::FMountDir::GetMonitorData
          (FMountDir *this,TStringView<wchar_t> *param_1,FInherited *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FScanDir *pFVar4;
  FInherited local_res8 [2];
  TStringView<wchar_t> local_98;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  
  local_78.DataPtr = (wchar_t *)(this->LocalAbsPath).Data.AllocatorInstance.Data;
  local_58.DataPtr = param_1->DataPtr;
  local_58.Size = param_1->Size;
  local_58._12_4_ = *(undefined4 *)&param_1->field_0xc;
  iVar1 = (this->LocalAbsPath).Data.ArrayNum;
  local_98.DataPtr = (wchar_t *)0x0;
  local_98.Size = 0;
  local_78.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_78.Size = 0;
  }
  local_68._12_4_ = local_78._12_4_;
  local_68.Size = local_78.Size;
  local_68.DataPtr = local_78.DataPtr;
  bVar3 = FPathViews::TryMakeChildPathRelativeTo(&local_58,&local_68,&local_98);
  if (bVar3) {
    pFVar4 = (this->Root).Reference;
    if (pFVar4->MountDir != (FMountDir *)0x0) {
      local_88.DataPtr = (wchar_t *)0x0;
      local_88.Size = 0;
      local_res8[0].bMatchesDenyList = (pFVar4->DirectData).bMatchesDenyList != false;
      local_res8[0].bIsOnAllowList = (pFVar4->DirectData).bIsOnAllowList != false;
      local_78.DataPtr = (wchar_t *)0x0;
      bVar3 = (pFVar4->DirectData).bIgnoreDenyList != false;
      local_78.Size = 0;
      if (local_98.Size != 0) {
        local_48._12_4_ = local_98._12_4_;
        local_48.Size = local_98.Size;
        local_48.DataPtr = local_98.DataPtr;
        local_res8[0].bIgnoreDenyList = bVar3;
        FPathViews::SplitFirstComponent(&local_48,&local_88,&local_78);
        local_38._12_4_ = local_88._12_4_;
        local_38.Size = local_88.Size;
        local_38.DataPtr = local_88.DataPtr;
        pFVar4 = FScanDir::FindSubDir(pFVar4,&local_38);
        if (pFVar4 != (FScanDir *)0x0) {
          local_28._12_4_ = local_78._12_4_;
          local_28.Size = local_78.Size;
          local_28.DataPtr = local_78.DataPtr;
          FScanDir::GetMonitorData(pFVar4,&local_28,local_res8,param_2);
          return;
        }
      }
      param_2->bIsOnAllowList = local_res8[0].bIsOnAllowList;
      param_2->bMatchesDenyList = local_res8[0].bMatchesDenyList;
      param_2->bIgnoreDenyList = bVar3;
      return;
    }
  }
  else {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1152219097065325858>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                       ,0x522,
                       "FPathViews::TryMakeChildPathRelativeTo(InLocalAbsPath, GetLocalAbsPath(), QueryRelPath)"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  param_2->bIsOnAllowList = false;
  param_2->bMatchesDenyList = false;
  param_2->bIgnoreDenyList = false;
  return;
}

// GetParentMount @ 142b00400

FMountDir * __thiscall UE::AssetDataGather::Private::FMountDir::GetParentMount(FMountDir *this)

{
  return this->ParentMount;
}

// IsChildMountPath @ 142b04400

bool __thiscall
UE::AssetDataGather::Private::FMountDir::IsChildMountPath
          (FMountDir *this,TStringView<wchar_t> *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  undefined4 uStack_3c;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  
  iVar1 = (this->ChildMountPaths).ArrayNum;
  pFVar4 = (this->ChildMountPaths).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->ChildMountPaths).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar4 == pFVar5) {
      return false;
    }
    local_28.DataPtr = *(wchar_t **)pFVar4;
    local_38.DataPtr = param_1->DataPtr;
    local_38.Size = param_1->Size;
    local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
    iVar3 = *(int *)(pFVar4 + 8) + -1;
    if (*(int *)(pFVar4 + 8) == 0) {
      iVar3 = 0;
    }
    local_28._12_4_ = uStack_3c;
    local_28.Size = iVar3;
    bVar2 = FPathViews::IsParentPathOf(&local_28,&local_38);
    if (bVar2) break;
    pFVar4 = pFVar4 + 0x10;
  }
  return true;
}

// IsComplete @ 142b04580

bool __thiscall UE::AssetDataGather::Private::FMountDir::IsComplete(FMountDir *this)

{
  return ((this->Root).Reference)->bIsComplete;
}

// IsMonitored @ 142b04d20

bool __thiscall
UE::AssetDataGather::Private::FMountDir::IsMonitored(FMountDir *this,TStringView<wchar_t> *param_1)

{
  FInherited local_res10 [8];
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_res10[0].bIsOnAllowList = false;
  local_res10[0].bMatchesDenyList = false;
  local_res10[0].bIgnoreDenyList = false;
  GetMonitorData(this,&local_18,local_res10);
  if ((local_res10[0].bIsOnAllowList != false) &&
     ((local_res10[0].bMatchesDenyList == false || (local_res10[0].bIgnoreDenyList != false)))) {
    return true;
  }
  return false;
}

// MarkDirty @ 142b09630

void __thiscall
UE::AssetDataGather::Private::FMountDir::MarkDirty(FMountDir *this,TStringView<wchar_t> *param_1)

{
  FThreadSafeCounter *pFVar1;
  FAssetDataDiscovery *this_00;
  code *pcVar2;
  wchar_t *pwVar3;
  undefined8 uVar4;
  double dVar5;
  bool bVar6;
  FScanDir *this_01;
  FScanDir *this_02;
  <lambda_1> local_res8 [8];
  FInherited local_res10 [2];
  FInherited local_res18 [2];
  double local_res20;
  FString local_a8;
  TStringView<wchar_t> local_98;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48 [2];
  
  this_02 = (this->Root).Reference;
  local_res10[0].bIsOnAllowList = false;
  local_res10[0].bMatchesDenyList = false;
  local_res10[0].bIgnoreDenyList = false;
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Data.ArrayNum = 0;
  local_a8.Data.ArrayMax = 0;
  pwVar3 = param_1->DataPtr;
  uVar4._0_4_ = param_1->Size;
  uVar4._4_4_ = *(undefined4 *)&param_1->field_0xc;
  if ((this_02->MountDir == (FMountDir *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                         ,0x2a6,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_res18[0].bMatchesDenyList = (this_02->DirectData).bMatchesDenyList != false;
  local_res18[0].bIsOnAllowList = (this_02->DirectData).bIsOnAllowList != false;
  bVar6 = (this_02->DirectData).bIgnoreDenyList != false;
  local_res18[0].bIgnoreDenyList = bVar6;
  if ((int)uVar4 == 0) {
LAB_142b096c1:
    local_res10[0].bIsOnAllowList = local_res18[0].bIsOnAllowList;
    local_res10[0].bMatchesDenyList = local_res18[0].bMatchesDenyList;
    local_res10[0].bIgnoreDenyList = bVar6;
    ::FString::AssignRange(&local_a8,pwVar3,(int)uVar4);
  }
  else {
    local_98.DataPtr = (wchar_t *)0x0;
    local_98.Size = 0;
    local_88.DataPtr = (wchar_t *)0x0;
    local_88.Size = 0;
    local_78.DataPtr = pwVar3;
    local_78._8_8_ = uVar4;
    FPathViews::SplitFirstComponent(&local_78,&local_98,&local_88);
    if ((((this_02->bHasScanned == false) && (this_02->MountDir != (FMountDir *)0x0)) &&
        ((this_02->DirectData).bIsOnAllowList != false)) &&
       (((this_02->DirectData).bMatchesDenyList == false ||
        ((this_02->DirectData).bIgnoreDenyList != false)))) {
      local_68._12_4_ = local_98._12_4_;
      local_68.Size = local_98.Size;
      local_68.DataPtr = local_98.DataPtr;
      this_01 = FScanDir::FindOrAddSubDir(this_02,&local_68);
    }
    else {
      local_58._12_4_ = local_98._12_4_;
      local_58.Size = local_98.Size;
      local_58.DataPtr = local_98.DataPtr;
      this_01 = FScanDir::FindSubDir(this_02,&local_58);
      if (this_01 == (FScanDir *)0x0) goto LAB_142b096c1;
    }
    local_48[0]._12_4_ = local_88._12_4_;
    local_48[0].Size = local_88.Size;
    local_48[0].DataPtr = local_88.DataPtr;
    this_02 = FScanDir::GetControllingDir(this_01,local_48,true,local_res18,local_res10,&local_a8);
  }
  if (this_02 != (FScanDir *)0x0) {
    dVar5 = __real_bff0000000000000;
    if (local_a8.Data.ArrayNum < 2) {
      FScanDir::
      ForEachDescendent<_UE::AssetDataGather::Private::FScanDir::MarkDirty_::__l5::<lambda_1>_>
                (this_02,local_res8);
      dVar5 = __real_bff0000000000000;
    }
    do {
      if ((this_02->MountDir != (FMountDir *)0x0) && (this_02->bIsComplete != false)) {
        this_02->bIsComplete = false;
        this_00 = this_02->MountDir->Discovery;
        local_res20 = dVar5;
        FAssetDataDiscovery::SetIsIdle(this_00,false,&local_res20);
        LOCK();
        pFVar1 = &this_00->NumDirectoriesToScan;
        pFVar1->Counter = pFVar1->Counter + 1;
        UNLOCK();
      }
      this_02 = this_02->Parent;
    } while (this_02 != (FScanDir *)0x0);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  return;
}

// OnDestroyClearChildMounts @ 142b0a690

void __thiscall UE::AssetDataGather::Private::FMountDir::OnDestroyClearChildMounts(FMountDir *this)

{
  int *piVar1;
  
  DestructItems<FString,int>
            ((FString *)(this->ChildMountPaths).AllocatorInstance.Data,
             (this->ChildMountPaths).ArrayNum);
  piVar1 = &(this->ChildMountPaths).ArrayMax;
  (this->ChildMountPaths).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  return;
}

// RemoveChildMount @ 142b14970

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::AssetDataGather::Private::FMountDir::RemoveChildMount(FMountDir *this,FMountDir *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  wchar_t *pwVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  TStringView<wchar_t> local_b8;
  FScriptContainerElement *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  FScriptContainerElement *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48 [2];
  
  if (param_1 != (FMountDir *)0x0) {
    local_98 = (this->LocalAbsPath).Data.AllocatorInstance.Data;
    iVar1 = (this->LocalAbsPath).Data.ArrayNum;
    uVar10 = 0;
    local_b8.DataPtr = (wchar_t *)0x0;
    local_b8.Size = 0;
    local_a8 = (param_1->LocalAbsPath).Data.AllocatorInstance.Data;
    iStack_90 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_90 = 0;
    }
    iVar1 = (param_1->LocalAbsPath).Data.ArrayNum;
    local_88._12_4_ = uStack_8c;
    local_88.Size = iStack_90;
    iStack_a0 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_a0 = 0;
    }
    local_78._12_4_ = uStack_9c;
    local_78.Size = iStack_a0;
    local_88.DataPtr = (wchar_t *)local_98;
    local_78.DataPtr = (wchar_t *)local_a8;
    bVar6 = FPathViews::TryMakeChildPathRelativeTo(&local_78,&local_88,&local_b8);
    pwVar5 = local_b8.DataPtr;
    if (bVar6) {
      bVar6 = false;
      iVar1 = (this->ChildMountPaths).ArrayNum;
      if (0 < iVar1) {
        local_a8 = (FScriptContainerElement *)local_b8.DataPtr;
        iStack_a0 = local_b8.Size;
        uStack_9c = local_b8._12_4_;
        uVar4._4_4_ = local_b8._12_4_;
        uVar4._0_4_ = local_b8.Size;
        uVar12 = uVar10;
        iVar11 = iVar1;
        do {
          uVar9 = (uint)uVar10;
          uVar8 = 0;
          if ((int)uVar9 < iVar11) {
            uVar8 = ~uVar9 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar2 = (this->ChildMountPaths).AllocatorInstance.Data;
          local_68.DataPtr = pwVar5;
          local_a8 = *(FScriptContainerElement **)(pFVar2 + uVar12);
          iVar11 = *(int *)(pFVar2 + uVar12 + 8);
          iStack_a0 = iVar11 + -1;
          if (iVar11 == 0) {
            iStack_a0 = 0;
          }
          local_58._12_4_ = uStack_9c;
          local_58.Size = iStack_a0;
          local_68._8_8_ = uVar4;
          local_58.DataPtr = (wchar_t *)local_a8;
          bVar7 = FPathViews::Equals(&local_58,&local_68);
          if (bVar7) {
            bVar6 = true;
            uVar8 = 0;
            if ((int)uVar9 < (this->ChildMountPaths).ArrayNum) {
              uVar8 = ~uVar9 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            TArray<FString,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                      (&this->ChildMountPaths,uVar9);
          }
          else {
            uVar10 = (ulonglong)(uVar9 + 1);
            uVar12 = uVar12 + 0x10;
          }
          iVar11 = (this->ChildMountPaths).ArrayNum;
        } while ((int)uVar10 < iVar11);
        if (bVar6) {
          Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,(ForAnyElementType *)this,iVar11,&(this->ChildMountPaths).ArrayMax);
        }
      }
      if (iVar1 != (this->ChildMountPaths).ArrayNum) {
        if ((param_1->bHasStartedScanning != false) && (2 < (byte)LogAssetRegistry._0_1_)) {
          Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
        }
        UpdateDenyList(this);
        local_48[0]._12_4_ = local_b8._12_4_;
        local_48[0].Size = local_b8.Size;
        local_48[0].DataPtr = local_b8.DataPtr;
        MarkDirty(this,local_48);
      }
    }
  }
  return;
}

// RemoveChildMountPath @ 142b14c80

bool __thiscall
UE::AssetDataGather::Private::FMountDir::RemoveChildMountPath
          (FMountDir *this,TStringView<wchar_t> *param_1)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  wchar_t *pwVar5;
  undefined8 uVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  
  pwVar5 = param_1->DataPtr;
  uVar6._0_4_ = param_1->Size;
  uVar6._4_4_ = *(undefined4 *)&param_1->field_0xc;
  iVar1 = (this->ChildMountPaths).ArrayNum;
  bVar7 = false;
  uVar11 = 0;
  if (0 < iVar1) {
    lVar13 = 0;
    iVar12 = iVar1;
    do {
      uVar10 = 0;
      if ((int)uVar11 < iVar12) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return (bool)uVar9;
        }
      }
      pFVar3 = (this->ChildMountPaths).AllocatorInstance.Data;
      local_38.DataPtr = *(wchar_t **)(pFVar3 + lVar13);
      iVar2 = *(int *)(pFVar3 + lVar13 + 8);
      iVar12 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar12 = 0;
      }
      local_38._12_4_ = uStack_5c;
      local_38.Size = iVar12;
      local_48.DataPtr = pwVar5;
      local_48._8_8_ = uVar6;
      bVar8 = FPathViews::Equals(&local_38,&local_48);
      if (bVar8) {
        bVar7 = true;
        uVar10 = 0;
        if ((int)uVar11 < (this->ChildMountPaths).ArrayNum) {
          uVar10 = ~uVar11 >> 0x1f;
        }
        if (uVar10 == 0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar4 = (code *)swi(3);
            uVar9 = (*pcVar4)();
            return (bool)uVar9;
          }
        }
        TArray<FString,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl(&this->ChildMountPaths,uVar11)
        ;
      }
      else {
        uVar11 = uVar11 + 1;
        lVar13 = lVar13 + 0x10;
      }
      iVar12 = (this->ChildMountPaths).ArrayNum;
    } while ((int)uVar11 < iVar12);
    if (bVar7) {
      Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,(ForAnyElementType *)this,iVar12,&(this->ChildMountPaths).ArrayMax);
    }
  }
  return iVar1 != (this->ChildMountPaths).ArrayNum;
}

// SetHasStartedScanning @ 142b1e810

void __thiscall UE::AssetDataGather::Private::FMountDir::SetHasStartedScanning(FMountDir *this)

{
  this->bHasStartedScanning = true;
  return;
}

// SetParentMount @ 142b1f190

void __thiscall
UE::AssetDataGather::Private::FMountDir::SetParentMount(FMountDir *this,FMountDir *param_1)

{
  this->ParentMount = param_1;
  return;
}

// Shrink @ 142b22400

void __thiscall UE::AssetDataGather::Private::FMountDir::Shrink(FMountDir *this)

{
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  
  FScanDir::Shrink((this->Root).Reference);
  iVar4 = (this->ChildMountPaths).ArrayNum;
  piVar1 = &(this->ChildMountPaths).ArrayMax;
  if (*piVar1 != iVar4) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar4,(ForAnyElementType *)this,iVar4,piVar1);
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Shrink((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            *)&this->RelPathsDenyList);
  uVar5 = *(int *)&(this->RelPathsDenyList).Elements.field_0x8 -
          *(int *)&(this->RelPathsDenyList).Elements.field_0x34;
  if (uVar5 < 4) {
    iVar4 = 1;
  }
  else {
    uVar2 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar4 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((((int)uVar5 < 1) || (iVar4 <= (this->RelPathsDenyList).HashSize)) &&
     ((this->RelPathsDenyList).HashSize <= iVar4)) {
    return;
  }
  (this->RelPathsDenyList).HashSize = iVar4;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Rehash(&this->RelPathsDenyList);
  return;
}

// TrySetDirectoryProperties @ 142b28b20

void __thiscall
UE::AssetDataGather::Private::FMountDir::TrySetDirectoryProperties
          (FMountDir *this,FPathExistence *param_1,FSetPathProperties *param_2,
          FScanDirAndParentData *param_3,TStringView<wchar_t> *param_4,bool *param_5)

{
  longlong *plVar1;
  int iVar2;
  FScanDir *pFVar3;
  code *pcVar4;
  longlong lVar5;
  undefined4 uVar6;
  bool bVar7;
  FScanDirAndParentData *pFVar8;
  TStringView<wchar_t> *pTVar9;
  bool *pbVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  FPathExistence *local_res10;
  bool local_res20 [8];
  FInherited local_118 [2];
  FSetPathProperties local_110;
  FScriptContainerElement *local_108;
  int iStack_100;
  undefined4 uStack_fc;
  FScanDirAndParentData local_f8;
  TStringView<wchar_t> local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  FScriptContainerElement *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  FScriptContainerElement *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  wchar_t *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  TStringView<wchar_t> local_98;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  
  local_res10 = param_1;
  if (param_3 != (FScanDirAndParentData *)0x0) {
    pFVar3 = (param_3->ScanDir).Reference;
    if (pFVar3 != (FScanDir *)0x0) {
      (param_3->ScanDir).Reference = (FScanDir *)0x0;
      plVar1 = &pFVar3->_padding_;
      LOCK();
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar5 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar3->_padding_)(pFVar3,1);
      }
    }
    (param_3->ParentData).bIsOnAllowList = false;
    (param_3->ParentData).bMatchesDenyList = false;
    (param_3->ParentData).bIgnoreDenyList = false;
  }
  if (param_4 != (TStringView<wchar_t> *)0x0) {
    uStack_d0 = 0;
    local_d8 = 0;
    param_4->DataPtr = (wchar_t *)0x0;
    *(undefined8 *)&param_4->Size = 0;
  }
  if (param_5 != (bool *)0x0) {
    *param_5 = false;
  }
  iVar2 = (this->LocalAbsPath).Data.ArrayNum;
  local_108 = (this->LocalAbsPath).Data.AllocatorInstance.Data;
  local_e8.DataPtr = (wchar_t *)0x0;
  local_e8.Size = 0;
  iStack_100 = iVar2 + -1;
  if (iVar2 == 0) {
    iStack_100 = 0;
  }
  uStack_fc = local_88._12_4_;
  local_b8 = (local_res10->LocalAbsPath).Data.AllocatorInstance.Data;
  iVar2 = (local_res10->LocalAbsPath).Data.ArrayNum;
  local_78.Size = iStack_100;
  local_78._12_4_ = local_88._12_4_;
  iStack_b0 = iVar2 + -1;
  if (iVar2 == 0) {
    iStack_b0 = 0;
  }
  local_68._12_4_ = uStack_ac;
  local_68.Size = iStack_b0;
  local_78.DataPtr = (wchar_t *)local_108;
  local_68.DataPtr = (wchar_t *)local_b8;
  bVar7 = FPathViews::TryMakeChildPathRelativeTo(&local_68,&local_78,&local_e8);
  uVar6 = local_e8._12_4_;
  if (bVar7) {
    if ((param_2->IgnoreDenyList).bIsSet == false) {
LAB_142b28dc6:
      local_88._12_4_ = local_e8._12_4_;
      local_88.Size = local_e8.Size;
      local_f8.ScanDir.Reference = (FScanDir *)0x0;
      local_f8.ParentData.bIsOnAllowList = false;
      local_f8.ParentData.bMatchesDenyList = false;
      pbVar10 = local_res20;
      if (param_5 != (bool *)0x0) {
        pbVar10 = param_5;
      }
      local_f8.ParentData.bIgnoreDenyList = false;
      local_98.DataPtr = (wchar_t *)0x0;
      local_98.Size = 0;
      pTVar9 = &local_98;
      if (param_4 != (TStringView<wchar_t> *)0x0) {
        pTVar9 = param_4;
      }
      local_res20[0] = false;
      pFVar8 = &local_f8;
      if (param_3 != (FScanDirAndParentData *)0x0) {
        pFVar8 = param_3;
      }
      local_118[0].bIsOnAllowList = false;
      local_118[0].bMatchesDenyList = false;
      local_118[0].bIgnoreDenyList = false;
      local_88.DataPtr = local_e8.DataPtr;
      FScanDir::TrySetDirectoryProperties
                ((this->Root).Reference,local_res10,&local_88,local_118,param_2,pFVar8,pTVar9,
                 pbVar10);
      if (local_f8.ScanDir.Reference != (FScanDir *)0x0) {
        plVar1 = &(local_f8.ScanDir.Reference)->_padding_;
        LOCK();
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if (((int)lVar5 == 1) && (plVar1 != (longlong *)0x0)) {
          (**(code **)(local_f8.ScanDir.Reference)->_padding_)(local_f8.ScanDir.Reference,1);
        }
      }
    }
    else {
      iVar2 = (this->ChildMountPaths).ArrayNum;
      uStack_fc = local_e8._12_4_;
      iStack_100 = local_e8.Size;
      pFVar11 = (this->ChildMountPaths).AllocatorInstance.Data;
      local_108 = (FScriptContainerElement *)local_e8.DataPtr;
      pFVar12 = pFVar11 + (longlong)iVar2 * 0x10;
      while( true ) {
        if ((this->ChildMountPaths).ArrayNum != iVar2) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (pFVar11 == pFVar12) goto LAB_142b28dc6;
        local_c8 = local_108;
        iStack_c0 = iStack_100;
        local_a8 = *(wchar_t **)pFVar11;
        uStack_bc = uVar6;
        local_58._12_4_ = uVar6;
        local_58.Size = iStack_100;
        iStack_a0 = *(int *)(pFVar11 + 8) + -1;
        if (*(int *)(pFVar11 + 8) == 0) {
          iStack_a0 = 0;
        }
        local_58.DataPtr = (wchar_t *)local_108;
        local_48._12_4_ = uStack_9c;
        local_48.Size = iStack_a0;
        local_48.DataPtr = local_a8;
        bVar7 = FPathViews::IsParentPathOf(&local_48,&local_58);
        if (bVar7) break;
        pFVar11 = pFVar11 + 0x10;
      }
      bVar7 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1152219097065325898>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                         ,0x54a,"!IsChildMountPath(RelPath)");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_110.IsOnAllowList.bIsSet = (param_2->IsOnAllowList).bIsSet;
      if (local_110.IsOnAllowList.bIsSet != false) {
        local_110.IsOnAllowList.TypedValue = (param_2->IsOnAllowList).TypedValue;
      }
      local_110.MatchesDenyList.bIsSet = (param_2->MatchesDenyList).bIsSet;
      if (local_110.MatchesDenyList.bIsSet != false) {
        local_110.MatchesDenyList.TypedValue = (param_2->MatchesDenyList).TypedValue;
      }
      if ((param_2->IgnoreDenyList).bIsSet != false) {
        local_110.IgnoreDenyList.TypedValue = (param_2->IgnoreDenyList).TypedValue;
      }
      local_110.HasScanned.bIsSet = (param_2->HasScanned).bIsSet;
      if (local_110.HasScanned.bIsSet != false) {
        local_110.HasScanned.TypedValue = (param_2->HasScanned).TypedValue;
      }
      local_110.IgnoreDenyList.bIsSet = false;
      TrySetDirectoryProperties(this,local_res10,&local_110,param_3,param_4,param_5);
    }
  }
  else {
    bVar7 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1152219097065325892>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                       ,0x544,
                       "FPathViews::TryMakeChildPathRelativeTo(QueryPath.GetLocalAbsPath(), GetLocalAbsPath(), RelPath)"
                      );
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// Update @ 142b2b2a0

void __thiscall
UE::AssetDataGather::Private::FMountDir::Update
          (FMountDir *this,
          TArray<UE::AssetDataGather::Private::FScanDirAndParentData,TSizedDefaultAllocator<32>_>
          *param_1)

{
  FInherited local_res8 [10];
  
  local_res8[0].bIsOnAllowList = false;
  local_res8[0].bMatchesDenyList = false;
  local_res8[0].bIgnoreDenyList = false;
  FScanDir::Update((this->Root).Reference,param_1,local_res8);
  return;
}

// UpdateDenyList @ 142b2c6c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UE::AssetDataGather::Private::FMountDir::UpdateDenyList(FMountDir *this)

{
  undefined1 *puVar1;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar2;
  FString *pFVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  FAssetDataDiscovery *pFVar8;
  void *pvVar9;
  code *pcVar10;
  FMountDir *pFVar11;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar12;
  bool bVar13;
  char cVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar18;
  IFileManager *pIVar19;
  void *pvVar20;
  FPathExistence *pFVar21;
  byte bVar22;
  longlong *plVar23;
  wchar_t *pwVar24;
  longlong lVar25;
  ulong64 uVar26;
  FScriptContainerElement *pFVar27;
  TBitArray<FDefaultBitArrayAllocator> *pTVar28;
  int iVar29;
  uint uVar30;
  uint uVar31;
  FScriptContainerElement *pFVar32;
  uint *puVar33;
  uint uVar34;
  undefined1 auStackY_6e8 [32];
  undefined1 local_6a8;
  undefined1 local_6a7;
  undefined1 local_6a6;
  undefined1 local_6a5;
  undefined1 local_6a4;
  bool local_6a3;
  bool local_6a2 [2];
  FInherited local_6a0 [2];
  FSetPathProperties local_698;
  undefined1 local_690 [8];
  FMountDir *local_688;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_680;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_678;
  undefined8 local_658;
  longlong *local_650;
  uint uStack_648;
  uint uStack_644;
  TBitArray<FDefaultBitArrayAllocator> *local_640;
  undefined4 uStack_638;
  uint uStack_634;
  uint local_630;
  undefined4 uStack_62c;
  int iStack_628;
  undefined4 uStack_624;
  FPathExistence local_620;
  FPathExistence local_600;
  uint local_5e0;
  uint uStack_5dc;
  undefined1 *puStack_5d8;
  undefined4 local_5d0;
  int iStack_5cc;
  uint uStack_5c8;
  undefined4 uStack_5c4;
  FScanDirAndParentData local_5c0;
  FScanDirAndParentData local_5b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_5a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_580;
  undefined1 local_560 [12];
  undefined1 local_554 [12];
  int local_548;
  int local_544;
  int local_540;
  TStringView<wchar_t> local_538;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_528;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_520;
  undefined8 uStack_500;
  longlong *local_4f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_4f0;
  undefined8 uStack_4d0;
  undefined1 local_4c8 [12];
  uint uStack_4bc;
  TBitArray<FDefaultBitArrayAllocator> *local_4b8;
  undefined8 uStack_4b0;
  longlong local_4a8;
  int iStack_4a0;
  undefined4 uStack_49c;
  wchar_t *local_498;
  int iStack_490;
  undefined4 uStack_48c;
  wchar_t *local_488;
  int iStack_480;
  undefined4 uStack_47c;
  FSparseArrayAllocationInfo local_478;
  wchar_t *local_468;
  int iStack_460;
  undefined4 uStack_45c;
  FScriptContainerElement *local_458;
  int iStack_450;
  undefined4 uStack_44c;
  wchar_t *local_448;
  uint uStack_440;
  undefined4 uStack_43c;
  TStringView<wchar_t> local_438;
  wchar_t *local_428;
  uint uStack_420;
  undefined4 uStack_41c;
  TStringView<wchar_t> local_418;
  TStringView<wchar_t> local_408;
  TStringView<wchar_t> local_3f8;
  FString local_3e8;
  TStringView<wchar_t> local_3d8;
  TStringView<wchar_t> local_3c8;
  FString local_3b8;
  TStringView<wchar_t> local_3a8;
  TStringView<wchar_t> local_398;
  TRangedForIterator local_388;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_358;
  undefined4 local_31c;
  undefined4 local_2fc;
  undefined1 local_2f8 [32];
  uint *local_2d8;
  uint local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8;
  int local_2c4;
  ForElementType<FSetElementId> local_2b8;
  int local_2b0;
  undefined1 local_2a8 [32];
  uint *local_288;
  uint local_280;
  undefined4 local_27c;
  undefined4 local_278;
  int local_274;
  ForElementType<FSetElementId> local_268;
  int local_260;
  TStringBuilderBase<wchar_t> local_258;
  wchar_t local_238 [256];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStackY_6e8;
  local_2cc = 0x80;
  local_2f8._0_8_ = 0;
  puVar1 = &(this->RelPathsDenyList).Elements.field_0x10;
  local_2f8._8_8_ = 0;
  pTVar2 = &this->RelPathsDenyList;
  local_2d8 = (uint *)0x0;
  local_2d0 = 0;
  local_2c4 = 0;
  local_2b8 = (ForElementType<FSetElementId>)0x0;
  local_2b0 = 0;
  local_2c8 = 0xffffffff;
  local_580._padding_._0_4_ = 0;
  local_580._padding_._4_4_ = 1;
  local_580.UnvisitedBitMask = 0xffffffff;
  local_580.CurrentBitIndex = 0;
  local_580.BaseBitIndex = 0;
  local_688 = this;
  local_580.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if (*(int *)&(this->RelPathsDenyList).Elements.field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_580);
  }
  TStack_678._padding_ = CONCAT44(local_580._padding_._4_4_,(undefined4)local_580._padding_);
  TStack_678._16_8_ = CONCAT44(local_580.CurrentBitIndex,local_580.UnvisitedBitMask);
  TStack_678._24_8_ = CONCAT44(local_580._28_4_,local_580.BaseBitIndex);
  local_658._0_4_ =
       *(int *)&(this->RelPathsDenyList).Elements.field_0x8 -
       *(int *)&(this->RelPathsDenyList).Elements.field_0x34;
  TStack_678.Array = local_580.Array;
  local_4b8 = local_580.Array;
  uStack_49c = local_658._4_4_;
  local_680 = pTVar2;
  local_4c8._0_8_ = pTVar2;
  unique0x10001f40 = TStack_678._padding_;
  uStack_4b0 = TStack_678._16_8_;
  local_4a8 = TStack_678._24_8_;
  iStack_4a0 = (int)local_658;
  pTVar18 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_358,(TBitArray<FDefaultBitArrayAllocator> *)puVar1,
                       *(int *)&(this->RelPathsDenyList).Elements.field_0x28);
  TStack_678._padding_ = pTVar18->_padding_;
  TStack_678.Array = pTVar18->Array;
  TStack_678.UnvisitedBitMask = pTVar18->UnvisitedBitMask;
  TStack_678.CurrentBitIndex = pTVar18->CurrentBitIndex;
  TStack_678._24_8_ = *(undefined8 *)&pTVar18->BaseBitIndex;
  local_658._0_4_ =
       *(int *)&(this->RelPathsDenyList).Elements.field_0x8 -
       *(int *)&(this->RelPathsDenyList).Elements.field_0x34;
  local_388.InitialNum = (int)local_658;
  local_388._44_4_ = local_658._4_4_;
  local_680 = pTVar2;
  local_388._padding_ = (longlong)pTVar2;
  local_388._padding_ = TStack_678._padding_;
  local_388._padding_ = (longlong)TStack_678.Array;
  local_388._padding_ = TStack_678._16_8_;
  local_388._padding_ = TStack_678._24_8_;
  bVar13 = TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           ::TRangedForIterator::operator!=((TRangedForIterator *)local_4c8,&local_388);
  if (bVar13) {
    do {
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_2f8,
                 (FString *)local_560,
                 (bool *)(*(longlong *)
                           (TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            *)local_4c8._0_8_ + (longlong)uStack_4b0._4_4_ * 0x18));
      uStack_4b0 = CONCAT44(uStack_4b0._4_4_,(uint)uStack_4b0 & ~uStack_4bc);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_4c8 + 8));
      bVar13 = TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               ::TRangedForIterator::operator!=((TRangedForIterator *)local_4c8,&local_388);
    } while (bVar13);
  }
  iVar29 = 1;
  uVar15 = (this->Discovery->MountRelativePathsDenyList).ArrayNum;
  if (3 < uVar15) {
    uVar5 = (ulonglong)((uVar15 >> 1) + 7) * 2 + 1;
    lVar25 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    local_560._4_4_ = (undefined4)lVar25;
    iVar29 = 1 << ((byte)lVar25 & 0x1f);
  }
  if ((((int)uVar15 < 1) || (iVar29 <= (this->RelPathsDenyList).HashSize)) &&
     ((this->RelPathsDenyList).HashSize <= iVar29)) {
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::UnhashElements(pTVar2);
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&pTVar2->Elements,uVar15);
  }
  else {
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&pTVar2->Elements,uVar15);
    (this->RelPathsDenyList).HashSize = iVar29;
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Rehash(pTVar2);
  }
  pFVar8 = this->Discovery;
  iVar29 = (pFVar8->LongPackageNamesDenyList).ArrayNum;
  pFVar27 = (pFVar8->LongPackageNamesDenyList).AllocatorInstance.Data;
  pFVar32 = pFVar27 + (longlong)iVar29 * 0x10;
  while( true ) {
    if ((pFVar8->LongPackageNamesDenyList).ArrayNum != iVar29) {
      local_6a8 = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_6a8)
      ;
    }
    if (pFVar27 == pFVar32) break;
    local_458 = (this->LongPackageName).Data.AllocatorInstance.Data;
    iVar6 = (this->LongPackageName).Data.ArrayNum;
    local_538.DataPtr = (wchar_t *)0x0;
    local_538.Size = 0;
    local_468 = *(wchar_t **)pFVar27;
    iStack_450 = iVar6 + -1;
    if (iVar6 == 0) {
      iStack_450 = 0;
    }
    local_398._12_4_ = uStack_44c;
    local_398.Size = iStack_450;
    iStack_460 = *(int *)(pFVar27 + 8) + -1;
    if (*(int *)(pFVar27 + 8) == 0) {
      iStack_460 = 0;
    }
    local_408._12_4_ = uStack_45c;
    local_408.Size = iStack_460;
    local_408.DataPtr = local_468;
    local_398.DataPtr = (wchar_t *)local_458;
    bVar13 = FPathViews::TryMakeChildPathRelativeTo(&local_408,&local_398,&local_538);
    if (bVar13) {
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<TStringView<wchar_t>_&>
                (&this->RelPathsDenyList,(TStringView<wchar_t> *)(local_560 + 8),(bool *)&local_538)
      ;
    }
    pFVar27 = pFVar27 + 0x10;
  }
  pFVar8 = this->Discovery;
  iVar29 = (pFVar8->MountRelativePathsDenyList).ArrayNum;
  pFVar27 = (pFVar8->MountRelativePathsDenyList).AllocatorInstance.Data;
  pFVar32 = pFVar27 + (longlong)iVar29 * 0x10;
  while( true ) {
    if ((pFVar8->MountRelativePathsDenyList).ArrayNum != iVar29) {
      local_6a7 = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_6a7)
      ;
    }
    pFVar11 = local_688;
    if (pFVar27 == pFVar32) break;
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              (&this->RelPathsDenyList,(FString *)local_554,(bool *)pFVar27);
    pFVar27 = pFVar27 + 0x10;
  }
  iVar29 = (this->ChildMountPaths).ArrayNum;
  pFVar27 = (this->ChildMountPaths).AllocatorInstance.Data;
  pFVar32 = pFVar27 + (longlong)iVar29 * 0x10;
  pTVar2 = &local_688->RelPathsDenyList;
  while( true ) {
    if ((local_688->ChildMountPaths).ArrayNum != iVar29) {
      local_6a6 = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_6a6)
      ;
    }
    if (pFVar27 == pFVar32) break;
    iVar6 = *(int *)&(pFVar11->RelPathsDenyList).Elements.field_0x34;
    if (iVar6 == 0) {
      iVar16 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x18,8,1,(ForAnyElementType *)pTVar2,
                          (int *)&(pFVar11->RelPathsDenyList).Elements.field_0x8,
                          (int *)&(pFVar11->RelPathsDenyList).Elements.field_0xc);
      TBitArray<FDefaultBitArrayAllocator>::Add
                ((TBitArray<FDefaultBitArrayAllocator> *)
                 &(pFVar11->RelPathsDenyList).Elements.field_0x10,false);
    }
    else {
      iVar16 = *(int *)&(pFVar11->RelPathsDenyList).Elements.field_0x30;
      iVar6 = iVar6 + -1;
      lVar25 = *(longlong *)&pTVar2->Elements;
      iVar7 = *(int *)(lVar25 + 4 + (longlong)iVar16 * 0x18);
      *(int *)&(pFVar11->RelPathsDenyList).Elements.field_0x30 = iVar7;
      *(int *)&(pFVar11->RelPathsDenyList).Elements.field_0x34 = iVar6;
      if (iVar6 != 0) {
        *(undefined4 *)(lVar25 + (longlong)iVar7 * 0x18) = 0xffffffff;
      }
    }
    TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)pTVar2,&local_478,iVar16);
    pvVar20 = local_478.Pointer;
    if (local_478.Pointer != (TSparseSetElement<FString> *)0x0) {
      ::FString::FString(local_478.Pointer,(FString *)pFVar27);
      *(undefined4 *)((longlong)pvVar20 + 0x10) = 0xffffffff;
    }
    iVar6 = local_478.Index;
    if (*(int *)((longlong)pvVar20 + 8) == 0) {
      pwVar24 = L"";
      iVar16 = 0;
    }
    else {
      pwVar24 = *(wchar_t **)pvVar20;
      iVar16 = *(int *)((longlong)pvVar20 + 8) + -1;
    }
    uVar15 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar16,pwVar24);
    if ((*(int *)&(pFVar11->RelPathsDenyList).Elements.field_0x8 -
         *(int *)&(pFVar11->RelPathsDenyList).Elements.field_0x34 == 1) ||
       (iVar16 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
                 FindIndexByHash<FString>(pTVar2,uVar15,pvVar20), iVar16 == -1)) {
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::RehashOrLink
                (pTVar2,uVar15,pvVar20,iVar6);
      pFVar27 = pFVar27 + 0x10;
    }
    else {
      lVar25 = *(longlong *)&pTVar2->Elements;
      pvVar9 = *(void **)(lVar25 + (longlong)iVar16 * 0x18);
      if (pvVar9 != (void *)0x0) {
        FMemory::Free(pvVar9);
      }
      memmove((void *)(lVar25 + (longlong)iVar16 * 0x18),pvVar20,0x10);
      TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)pTVar2,iVar6,1);
      pFVar27 = pFVar27 + 0x10;
    }
  }
  uVar15 = 0;
  local_27c = 0x80;
  TStack_678.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)&(pFVar11->RelPathsDenyList).Elements.field_0x10;
  local_2a8._0_8_ = 0;
  local_2a8._8_8_ = 0;
  local_288 = (uint *)0x0;
  local_280 = 0;
  local_274 = 0;
  local_268 = (ForElementType<FSetElementId>)0x0;
  local_260 = 0;
  local_278 = 0xffffffff;
  iVar29 = *(int *)&(pFVar11->RelPathsDenyList).Elements.field_0x28;
  local_5e0 = 0;
  uStack_5dc = 1;
  iStack_5cc = 0;
  uStack_5c8 = 0;
  if (iVar29 != 0) {
    puVar33 = *(uint **)&(pFVar11->RelPathsDenyList).Elements.field_0x20;
    if (puVar33 == (uint *)0x0) {
      puVar33 = (uint *)TStack_678.Array;
    }
    uVar30 = *puVar33;
    uStack_5c8 = uVar15;
    local_5e0 = uVar15;
    while (uVar30 == 0) {
      uStack_5c8 = uStack_5c8 + 0x20;
      lVar25 = (longlong)(int)local_5e0;
      local_5e0 = local_5e0 + 1;
      if ((int)(iVar29 + -1 + (iVar29 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)local_5e0)
      goto LAB_142b2cc9e;
      uVar30 = puVar33[lVar25 + 1];
    }
    uStack_5dc = ~(uVar30 - 1) & uVar30;
    uVar5 = (ulonglong)uStack_5dc * 2 + 1;
    lVar25 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    local_554._4_4_ = (undefined4)lVar25;
    iStack_5cc = local_554._4_4_ + -1 + uStack_5c8;
    if (iVar29 < iStack_5cc) {
LAB_142b2cc9e:
      iStack_5cc = iVar29;
    }
  }
  local_5d0 = 0xffffffff;
  uVar30 = *(uint *)&(pFVar11->RelPathsDenyList).Elements.field_0x28;
  pTVar28 = (TBitArray<FDefaultBitArrayAllocator> *)&(pFVar11->RelPathsDenyList).Elements.field_0x10
  ;
  TStack_678._padding_ = CONCAT44(uStack_5dc,local_5e0);
  bVar22 = (byte)uVar30 & 0x1f;
  TStack_678.CurrentBitIndex = iStack_5cc;
  TStack_678.UnvisitedBitMask = 0xffffffff;
  TStack_678._28_4_ = uStack_5c4;
  TStack_678.BaseBitIndex = uStack_5c8;
  local_658 = CONCAT44(local_658._4_4_,
                       *(int *)&(pFVar11->RelPathsDenyList).Elements.field_0x8 -
                       *(int *)&(pFVar11->RelPathsDenyList).Elements.field_0x34);
  local_5a0._padding_._0_4_ = (int)uVar30 >> 5;
  local_5a0._padding_._4_4_ = 1 << bVar22;
  local_5a0.UnvisitedBitMask = -1 << bVar22;
  local_5a0.BaseBitIndex = uVar30 & 0xffffffe0;
  uStack_500 = local_658;
  local_680 = pTVar2;
  puStack_5d8 = (undefined1 *)TStack_678.Array;
  local_5a0.Array = pTVar28;
  local_5a0.CurrentBitIndex = uVar30;
  local_528 = pTVar2;
  TStack_520._padding_ = TStack_678._padding_;
  TStack_520.Array = TStack_678.Array;
  TStack_520._16_8_ = TStack_678._16_8_;
  TStack_520._24_8_ = TStack_678._24_8_;
  if (((int)uVar30 < 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if (uVar30 != *(uint *)&(pFVar11->RelPathsDenyList).Elements.field_0x28) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_5a0);
    pTVar28 = local_5a0.Array;
    uVar30 = local_5a0.CurrentBitIndex;
  }
  while( true ) {
    pTVar12 = local_528;
    if (*(int *)&(local_528->Elements).field_0x8 - *(int *)&(local_528->Elements).field_0x34 !=
        (int)uStack_500) {
      local_6a5 = 0;
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_6a5);
    }
    if (((TStack_520.CurrentBitIndex == uVar30) && (TStack_520.Array == pTVar28)) &&
       (pTVar12 == pTVar2)) break;
    pFVar3 = (FString *)
             (*(longlong *)&pTVar12->Elements + (longlong)TStack_520.CurrentBitIndex * 0x18);
    if (local_2f8._8_4_ == local_2c4) {
LAB_142b2cdfe:
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_2a8,
                 (FString *)(local_554 + 8),(bool *)pFVar3);
    }
    else {
      iVar29 = (pFVar3->Data).ArrayNum;
      if (iVar29 == 0) {
        pwVar24 = L"";
        iVar29 = 0;
      }
      else {
        pwVar24 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
        iVar29 = iVar29 + -1;
      }
      uVar17 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar29,pwVar24);
      iVar29 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::RemoveImpl<FString>
                         ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_2f8
                          ,uVar17,pFVar3);
      if (iVar29 == 0) goto LAB_142b2cdfe;
    }
    TStack_520.UnvisitedBitMask = TStack_520.UnvisitedBitMask & ~TStack_520._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_520);
  }
  local_258.Base = local_238;
  local_258.bIsDynamic = false;
  local_258.bIsExternal = false;
  local_258.CurPos = local_238;
  local_258.End = (wchar_t *)local_38;
  pIVar19 = IFileManager::Get();
  uVar30 = local_280;
  uStack_648 = 0;
  uStack_644 = 1;
  local_698.IgnoreDenyList.bIsSet = false;
  local_698.HasScanned.bIsSet = false;
  local_630 = 0;
  local_6a0[0].bIsOnAllowList = false;
  local_6a0[0].bMatchesDenyList = false;
  local_6a0[0].bIgnoreDenyList = false;
  local_698.IsOnAllowList.bIsSet = false;
  local_698.MatchesDenyList.TypedValue = true;
  local_698.MatchesDenyList.bIsSet = true;
  uStack_634 = uStack_648;
  if (local_280 != 0) {
    puVar33 = (uint *)(local_2a8 + 0x10);
    if (local_288 != (uint *)0x0) {
      puVar33 = local_288;
    }
    uVar17 = *puVar33;
    local_630 = uVar15;
    uStack_648 = uVar15;
    while (uVar17 == 0) {
      lVar25 = (longlong)(int)uStack_648;
      local_630 = local_630 + 0x20;
      uStack_648 = uStack_648 + 1;
      uStack_634 = local_280;
      if ((int)((local_280 - 1) + ((int)(local_280 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_648)
      goto LAB_142b2cf23;
      uVar17 = puVar33[lVar25 + 1];
    }
    uStack_644 = ~(uVar17 - 1) & uVar17;
    uVar5 = (ulonglong)uStack_644 * 2 + 1;
    lVar25 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    local_548 = (int)lVar25;
    uStack_634 = local_548 + -1 + local_630;
    if ((int)local_280 < (int)uStack_634) {
      uStack_634 = local_280;
    }
  }
LAB_142b2cf23:
  local_650 = (longlong *)local_2a8;
  local_640 = (TBitArray<FDefaultBitArrayAllocator> *)(local_2a8 + 0x10);
  uStack_62c = local_31c;
  uVar15 = local_280 & 0xffffffe0;
  iStack_628 = local_2a8._8_4_ - local_274;
  TStack_4f0._padding_ = CONCAT44(uStack_644,uStack_648);
  uStack_638 = 0xffffffff;
  TStack_4f0.CurrentBitIndex = uStack_634;
  TStack_4f0.UnvisitedBitMask = 0xffffffff;
  iVar29 = (int)local_280 >> 5;
  TStack_4f0._28_4_ = local_31c;
  TStack_4f0.BaseBitIndex = local_630;
  uStack_4d0 = CONCAT44(uStack_624,iStack_628);
  bVar22 = (byte)local_280;
  local_4f8 = local_650;
  TStack_4f0.Array = local_640;
  if (((int)local_280 < 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar11 = local_688;
  if (uVar30 != local_280) {
    puVar33 = (uint *)(local_2a8 + 0x10);
    if (local_288 != (uint *)0x0) {
      puVar33 = local_288;
    }
    uVar30 = -1 << (bVar22 & 0x1f) & puVar33[iVar29];
    while (uVar30 == 0) {
      lVar25 = (longlong)iVar29;
      uVar15 = uVar15 + 0x20;
      iVar29 = iVar29 + 1;
      uVar30 = local_280;
      if ((int)((local_280 - 1) + ((int)(local_280 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar29)
      goto LAB_142b2d050;
      uVar30 = puVar33[lVar25 + 1];
    }
    uVar5 = (ulonglong)(~(uVar30 - 1) & uVar30) * 2 + 1;
    lVar25 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    local_544 = (int)lVar25;
    uVar30 = local_544 + -1 + uVar15;
    if ((int)local_280 < (int)uVar30) {
      uVar30 = local_280;
    }
  }
LAB_142b2d050:
  while( true ) {
    plVar23 = local_4f8;
    if ((int)local_4f8[1] - *(int *)((longlong)local_4f8 + 0x34) != (int)uStack_4d0) {
      local_6a4 = 0;
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_6a4);
    }
    uVar15 = local_2d0;
    if (((TStack_4f0.CurrentBitIndex == uVar30) &&
        (TStack_4f0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_2a8 + 0x10))) &&
       (plVar23 == (longlong *)local_2a8)) break;
    pFVar27 = (pFVar11->LocalAbsPath).Data.AllocatorInstance.Data;
    puVar4 = (undefined8 *)(*plVar23 + (longlong)TStack_4f0.CurrentBitIndex * 0x18);
    iVar6 = (pFVar11->LocalAbsPath).Data.ArrayNum;
    local_258.CurPos = local_258.Base;
    iVar29 = iVar6 + -1;
    if (iVar6 == 0) {
      iVar29 = 0;
    }
    uVar26 = (ulong64)iVar29;
    if (local_258.End < local_258.Base + uVar26) {
      TStringBuilderBase<wchar_t>::Extend(&local_258,uVar26);
    }
    if (iVar29 != 0) {
      pvVar20 = FGenericPlatformString::Memcpy(local_258.CurPos,pFVar27,uVar26 * 2);
      local_258.CurPos = (wchar_t *)((longlong)pvVar20 + uVar26 * 2);
    }
    local_488 = (wchar_t *)*puVar4;
    iStack_480 = *(int *)(puVar4 + 1) + -1;
    if (*(int *)(puVar4 + 1) == 0) {
      iStack_480 = 0;
    }
    local_3f8._12_4_ = uStack_47c;
    local_3f8.Size = iStack_480;
    local_3f8.DataPtr = local_488;
    FPathViews::AppendPath(&local_258,&local_3f8);
    pcVar10 = *(code **)((longlong)*pIVar19 + 0x58);
    if (local_258.End < local_258.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_258,1);
    }
    *local_258.CurPos = L'\0';
    cVar14 = (*pcVar10)(pIVar19,local_258.Base);
    if (cVar14 != '\0') {
      local_5c0.ScanDir.Reference = (FScanDir *)0x0;
      local_5c0.ParentData.bIsOnAllowList = false;
      local_5c0.ParentData.bMatchesDenyList = false;
      local_5c0.ParentData.bIgnoreDenyList = false;
      local_438.DataPtr = (wchar_t *)0x0;
      local_438.Size = 0;
      local_6a3 = false;
      local_600.LocalAbsPath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_600.LocalAbsPath.Data.ArrayNum = 0;
      local_600.LocalAbsPath.Data.ArrayMax = 0;
      pFVar21 = (FPathExistence *)
                ::FString::ConstructFromPtrSize
                          (&local_3e8,local_258.Base,
                           (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1));
      if (&local_600 != pFVar21) {
        if (local_600.LocalAbsPath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_600.LocalAbsPath.Data.AllocatorInstance.Data);
        }
        local_600.LocalAbsPath.Data.AllocatorInstance.Data =
             (pFVar21->LocalAbsPath).Data.AllocatorInstance.Data;
        (pFVar21->LocalAbsPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_600.LocalAbsPath.Data.ArrayNum = (pFVar21->LocalAbsPath).Data.ArrayNum;
        local_600.LocalAbsPath.Data.ArrayMax = (pFVar21->LocalAbsPath).Data.ArrayMax;
        (pFVar21->LocalAbsPath).Data.ArrayNum = 0;
        (pFVar21->LocalAbsPath).Data.ArrayMax = 0;
      }
      if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
      }
      local_498 = (wchar_t *)*puVar4;
      local_600.ModificationTime.Ticks = 0;
      local_600.PathType = MissingParentDir;
      local_600.bIsReadOnly = false;
      local_600.bHasExistenceData = true;
      iStack_490 = *(int *)(puVar4 + 1) + -1;
      if (*(int *)(puVar4 + 1) == 0) {
        iStack_490 = 0;
      }
      local_3d8._12_4_ = uStack_48c;
      local_3d8.Size = iStack_490;
      local_3d8.DataPtr = local_498;
      FScanDir::TrySetDirectoryProperties
                ((pFVar11->Root).Reference,&local_600,&local_3d8,local_6a0,&local_698,&local_5c0,
                 &local_438,&local_6a3);
      if (local_600.LocalAbsPath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_600.LocalAbsPath.Data.AllocatorInstance.Data);
      }
      if (local_5c0.ScanDir.Reference != (FScanDir *)0x0) {
        plVar23 = &(local_5c0.ScanDir.Reference)->_padding_;
        LOCK();
        lVar25 = *plVar23;
        *(int *)plVar23 = (int)*plVar23 + -1;
        UNLOCK();
        if ((((int)lVar25 == 1) && (plVar23 != (longlong *)0x0)) &&
           (local_5c0.ScanDir.Reference != (FScanDir *)0x0)) {
          (**(code **)(local_5c0.ScanDir.Reference)->_padding_)(local_5c0.ScanDir.Reference,1);
        }
      }
    }
    TStack_4f0.UnvisitedBitMask = TStack_4f0.UnvisitedBitMask & ~TStack_4f0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_4f0);
  }
  uVar30 = 0;
  uVar17 = 0;
  local_698.MatchesDenyList.TypedValue = false;
  local_698.MatchesDenyList.bIsSet = true;
  uStack_644 = 1;
  uStack_634 = uVar17;
  uStack_648 = uVar17;
  local_630 = uVar17;
  if (local_2d0 != 0) {
    puVar33 = (uint *)(local_2f8 + 0x10);
    if (local_2d8 != (uint *)0x0) {
      puVar33 = local_2d8;
    }
    uVar34 = *puVar33;
    local_630 = uVar30;
    uStack_648 = uVar30;
    while (uVar34 == 0) {
      lVar25 = (longlong)(int)uStack_648;
      local_630 = local_630 + 0x20;
      uStack_648 = uStack_648 + 1;
      uStack_634 = local_2d0;
      if ((int)((local_2d0 - 1) + ((int)(local_2d0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_648)
      goto LAB_142b2d3a4;
      uVar34 = puVar33[lVar25 + 1];
    }
    uStack_644 = ~(uVar34 - 1) & uVar34;
    uVar5 = (ulonglong)uStack_644 * 2 + 1;
    lVar25 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    local_540 = (int)lVar25;
    uStack_634 = local_540 + -1 + local_630;
    if ((int)local_2d0 < (int)uStack_634) {
      uStack_634 = local_2d0;
    }
  }
LAB_142b2d3a4:
  local_680 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_2f8;
  uStack_62c = local_2fc;
  TStack_678.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_2f8 + 0x10);
  iStack_628 = local_2f8._8_4_ - local_2c4;
  uVar31 = local_2d0 & 0xffffffe0;
  uStack_638 = 0xffffffff;
  TStack_678.CurrentBitIndex = uStack_634;
  TStack_678.UnvisitedBitMask = 0xffffffff;
  uVar34 = -1 << ((byte)local_2d0 & 0x1f);
  TStack_678._padding_ = CONCAT44(uStack_644,uStack_648);
  iVar29 = (int)local_2d0 >> 5;
  local_688 = (FMountDir *)CONCAT44(local_688._4_4_,uVar34);
  TStack_678._28_4_ = local_2fc;
  TStack_678.BaseBitIndex = local_630;
  local_658 = CONCAT44(uStack_624,iStack_628);
  local_650 = (longlong *)local_680;
  local_640 = TStack_678.Array;
  if ((int)local_2d0 < 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("StartIndex >= 0 && StartIndex <= Array.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                        ,0x7af,L"");
    if (bVar13) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    uVar34 = (uint)local_688;
  }
  if (uVar15 != local_2d0) {
    puVar33 = (uint *)(local_2f8 + 0x10);
    if (local_2d8 != (uint *)0x0) {
      puVar33 = local_2d8;
    }
    uVar34 = uVar34 & puVar33[iVar29];
    while (uVar34 == 0) {
      lVar25 = (longlong)iVar29;
      uVar31 = uVar31 + 0x20;
      iVar29 = iVar29 + 1;
      uVar15 = local_2d0;
      if ((int)((local_2d0 - 1) + ((int)(local_2d0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar29)
      goto LAB_142b2d4d0;
      uVar34 = puVar33[lVar25 + 1];
    }
    uVar5 = (ulonglong)(~(uVar34 - 1) & uVar34) * 2 + 1;
    lVar25 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    uVar15 = (int)lVar25 + -1 + uVar31;
    if ((int)local_2d0 < (int)uVar15) {
      uVar15 = local_2d0;
    }
  }
LAB_142b2d4d0:
  while( true ) {
    pTVar2 = local_680;
    if ((int)*(longlong *)((longlong)local_680 + 8) - *(int *)((longlong)local_680 + 0x34) !=
        (int)local_658) {
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_690);
    }
    if (((TStack_678.CurrentBitIndex == uVar15) &&
        (TStack_678.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_2f8 + 0x10))) &&
       (pTVar2 == (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_2f8))
    break;
    pFVar27 = (pFVar11->LocalAbsPath).Data.AllocatorInstance.Data;
    local_5b0.ScanDir.Reference = (FScanDir *)0x0;
    local_5b0.ParentData.bIsOnAllowList = false;
    local_5b0.ParentData.bMatchesDenyList = false;
    local_5b0.ParentData.bIgnoreDenyList = false;
    puVar4 = (undefined8 *)(*(longlong *)pTVar2 + (longlong)TStack_678.CurrentBitIndex * 0x18);
    local_418.DataPtr = (wchar_t *)0x0;
    iVar29 = (pFVar11->LocalAbsPath).Data.ArrayNum;
    local_418.Size = 0;
    local_6a2[0] = false;
    local_258.CurPos = local_258.Base;
    uVar34 = iVar29 - 1;
    if (iVar29 == 0) {
      uVar34 = uVar17;
    }
    uVar26 = (ulong64)(int)uVar34;
    if (local_258.End < local_258.Base + uVar26) {
      TStringBuilderBase<wchar_t>::Extend(&local_258,uVar26);
    }
    if (uVar34 != 0) {
      pvVar20 = FGenericPlatformString::Memcpy(local_258.CurPos,pFVar27,uVar26 * 2);
      local_258.CurPos = (wchar_t *)((longlong)pvVar20 + uVar26 * 2);
    }
    local_448 = (wchar_t *)*puVar4;
    uStack_440 = *(int *)(puVar4 + 1) - 1;
    if (*(int *)(puVar4 + 1) == 0) {
      uStack_440 = uVar30;
    }
    local_3c8._12_4_ = uStack_43c;
    local_3c8.Size = uStack_440;
    local_3c8.DataPtr = local_448;
    FPathViews::AppendPath(&local_258,&local_3c8);
    local_620.LocalAbsPath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_620.LocalAbsPath.Data.ArrayNum = 0;
    local_620.LocalAbsPath.Data.ArrayMax = 0;
    pFVar21 = (FPathExistence *)
              ::FString::ConstructFromPtrSize
                        (&local_3b8,local_258.Base,
                         (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1));
    if (&local_620 != pFVar21) {
      if (local_620.LocalAbsPath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_620.LocalAbsPath.Data.AllocatorInstance.Data);
      }
      local_620.LocalAbsPath.Data.AllocatorInstance.Data =
           (pFVar21->LocalAbsPath).Data.AllocatorInstance.Data;
      (pFVar21->LocalAbsPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_620.LocalAbsPath.Data.ArrayNum = (pFVar21->LocalAbsPath).Data.ArrayNum;
      local_620.LocalAbsPath.Data.ArrayMax = (pFVar21->LocalAbsPath).Data.ArrayMax;
      (pFVar21->LocalAbsPath).Data.ArrayNum = 0;
      (pFVar21->LocalAbsPath).Data.ArrayMax = 0;
    }
    if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
    }
    local_428 = (wchar_t *)*puVar4;
    local_620.ModificationTime.Ticks = 0;
    local_620.PathType = MissingParentDir;
    local_620.bIsReadOnly = false;
    local_620.bHasExistenceData = false;
    uStack_420 = *(int *)(puVar4 + 1) - 1;
    if (*(int *)(puVar4 + 1) == 0) {
      uStack_420 = uVar30;
    }
    local_3a8._12_4_ = uStack_41c;
    local_3a8.Size = uStack_420;
    local_3a8.DataPtr = local_428;
    FScanDir::TrySetDirectoryProperties
              ((pFVar11->Root).Reference,&local_620,&local_3a8,local_6a0,&local_698,&local_5b0,
               &local_418,local_6a2);
    if (local_620.LocalAbsPath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_620.LocalAbsPath.Data.AllocatorInstance.Data);
    }
    if (local_5b0.ScanDir.Reference != (FScanDir *)0x0) {
      plVar23 = &(local_5b0.ScanDir.Reference)->_padding_;
      LOCK();
      lVar25 = *plVar23;
      *(int *)plVar23 = (int)*plVar23 + -1;
      UNLOCK();
      if ((((int)lVar25 == 1) && (plVar23 != (longlong *)0x0)) &&
         (local_5b0.ScanDir.Reference != (FScanDir *)0x0)) {
        (**(code **)(local_5b0.ScanDir.Reference)->_padding_)(local_5b0.ScanDir.Reference,1);
      }
    }
    TStack_678.UnvisitedBitMask = TStack_678.UnvisitedBitMask & ~TStack_678._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_678);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_258);
  local_260 = 0;
  if (local_268 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_268);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_2a8);
  local_2b0 = 0;
  if (local_2b8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_2b8);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_2f8);
  return;
}

