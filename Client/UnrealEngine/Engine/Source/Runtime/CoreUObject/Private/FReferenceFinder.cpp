// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 8

// FReferenceFinder @ 142011310

FReferenceFinder * __thiscall
FReferenceFinder::FReferenceFinder
          (FReferenceFinder *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1,
          UObject *param_2,bool param_3,bool param_4,bool param_5,bool param_6)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FReferenceFinder *pFVar8;
  ulonglong uVar9;
  FLinkerLoad *pFVar10;
  ForElementType<FSetElementId> FVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  ulonglong uVar16;
  ulonglong *puVar17;
  uint *puVar18;
  uint uVar19;
  uint local_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  uVar14 = 0;
  this->_padding_ = 0;
  this->ObjectArray = param_1;
  *(undefined8 *)&(this->ObjectSet).Elements = 0;
  *(undefined8 *)&(this->ObjectSet).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ObjectSet).Elements.field_0x20 = 0;
  this->_padding_ = (longlong)&___7FReferenceFinder__6B_;
  *(undefined4 *)&(this->ObjectSet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ObjectSet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ObjectSet).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ObjectSet).Elements.field_0x34 = 0;
  (this->ObjectSet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ObjectSet).HashSize = 0;
  this->bShouldIgnoreArchetype = param_4;
  this->bShouldIgnoreTransient = param_6;
  this->LimitOuter = param_2;
  this->SerializedProperty = (FProperty *)0x0;
  this->bRequireDirectOuter = param_3;
  this->bSerializeRecursively = false;
  iVar2 = this->ObjectArray->ArrayNum;
  pFVar15 = (this->ObjectArray->AllocatorInstance).Data;
  if ((iVar2 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FReferenceFinder *)(*pcVar5)();
    return pFVar8;
  }
  uVar7 = *(int *)&(this->ObjectSet).Elements.field_0x8 -
          *(int *)&(this->ObjectSet).Elements.field_0x34;
  uVar19 = iVar2 + uVar7;
  if (uVar19 <= uVar7) goto LAB_142011626;
  if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar19);
  }
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)&this->ObjectSet,uVar19);
  if (uVar19 < 4) {
    uVar7 = 1;
  }
  else {
    uVar12 = (ulonglong)((uVar19 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar7 = 1 << ((byte)lVar4 & 0x1f);
  }
  iVar13 = (this->ObjectSet).HashSize;
  if ((iVar13 != 0) && ((int)uVar7 <= iVar13)) goto LAB_142011626;
  (this->ObjectSet).HashSize = uVar7;
  if ((this->ObjectSet).Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->ObjectSet).Hash.SecondaryData,0,0,4);
  }
  if (uVar7 != 0) {
    uVar19 = uVar7;
    if (uVar7 < 2) {
      if ((this->ObjectSet).Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        uVar19 = 0;
        goto LAB_14201146f;
      }
    }
    else {
LAB_14201146f:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(this->ObjectSet).Hash.SecondaryData,0,uVar19,4);
    }
    if (0 < (int)uVar7) {
      uVar16 = (ulonglong)uVar7;
      uVar12 = uVar14;
      do {
        FVar3 = (this->ObjectSet).Hash.SecondaryData;
        FVar11 = (ForElementType<FSetElementId>)&(this->ObjectSet).Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar11 = FVar3;
        }
        uVar9 = uVar12 & (longlong)(int)uVar7 - 1U;
        uVar12 = uVar12 + 1;
        *(undefined4 *)((longlong)FVar11 + uVar9 * 4) = 0xffffffff;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
  }
  if ((this->ObjectSet).HashSize != 0) {
    uVar7 = *(uint *)&(this->ObjectSet).Elements.field_0x28;
    local_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->ObjectSet).Elements.field_0x10;
    local_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar7 != 0) {
      puVar18 = *(uint **)&(this->ObjectSet).Elements.field_0x20;
      if (puVar18 == (uint *)0x0) {
        puVar18 = (uint *)local_50.Array;
      }
      uVar19 = *puVar18;
      uVar12 = uVar14;
      while (uVar19 == 0) {
        iVar13 = (int)uVar14;
        uStack_60 = (int)uVar12 + 0x20;
        uVar12 = (ulonglong)uStack_60;
        local_78 = iVar13 + 1;
        uVar14 = (ulonglong)local_78;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_78)
        goto LAB_14201155e;
        uVar19 = puVar18[(longlong)iVar13 + 1];
      }
      uStack_74 = -uVar19 & uVar19;
      uVar14 = (ulonglong)uStack_74 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_64 = (uStack_60 - 1) + (int)lVar4;
      uVar14 = (ulonglong)uStack_64;
      if ((int)uVar7 < (int)uStack_64) {
LAB_14201155e:
        uVar14 = (ulonglong)uVar7;
        uStack_64 = uVar7;
      }
    }
    local_50._padding_ = CONCAT44(uStack_74,local_78);
    local_50.CurrentBitIndex = uStack_64;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    if ((int)uVar14 < (int)uVar7) {
      do {
        puVar17 = (ulonglong *)
                  ((longlong)(int)uVar14 * 0x10 + *(longlong *)&(this->ObjectSet).Elements);
        uVar7 = ((uint)(*puVar17 >> 0x14) & 0xffff ^ (uint)(*puVar17 >> 4)) * -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        uVar7 = (uVar7 >> 0x10 ^ uVar7) & (this->ObjectSet).HashSize - 1U;
        *(uint *)((longlong)puVar17 + 0xc) = uVar7;
        FVar3 = (this->ObjectSet).Hash.SecondaryData;
        FVar11 = (ForElementType<FSetElementId>)&(this->ObjectSet).Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar11 = FVar3;
        }
        uVar12 = (longlong)(this->ObjectSet).HashSize - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(puVar17 + 1) = *(undefined4 *)((longlong)FVar11 + uVar12 * 4);
        *(int *)((longlong)FVar11 + uVar12 * 4) = (int)uVar14;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar14 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
LAB_142011626:
  pFVar1 = pFVar15 + (longlong)iVar2 * 8;
  for (; pFVar15 != pFVar1; pFVar15 = pFVar15 + 8) {
    TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,FDefaultSetAllocator>::
    Emplace<UObject_const_*_const_&>(&this->ObjectSet,(UObject **)&param_6,(bool *)pFVar15);
  }
  if ((param_5) && (this->LimitOuter != (UObject *)0x0)) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  this->bSerializeRecursively = bVar6;
  if ((param_2 != (UObject *)0x0) &&
     (pFVar10 = UObjectBaseUtility::GetLinker((UObjectBaseUtility *)param_2),
     pFVar10 != (FLinkerLoad *)0x0)) {
    this->SerializedProperty = (FProperty *)pFVar10->_padding_;
  }
  return this;
}

// ~FReferenceFinder @ 1420133c0

void __thiscall FReferenceFinder::~FReferenceFinder(FReferenceFinder *this)

{
  ForElementType<FSetElementId> FVar1;
  
  this->_padding_ = (longlong)&___7FReferenceFinder__6B_;
  (this->ObjectSet).HashSize = 0;
  FVar1 = (this->ObjectSet).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<UObject_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UObject_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ObjectSet).Elements);
  FReferenceCollector::~FReferenceCollector((FReferenceCollector *)this);
  return;
}

// FindReferences @ 14203fe90

void __thiscall
FReferenceFinder::FindReferences
          (FReferenceFinder *this,UObject *param_1,UObject *param_2,FProperty *param_3)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  
  if (param_1 == (UObject *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0xf33,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = *(longlong *)&param_1->field_0x10;
  pUVar5 = Z_Construct_UClass_UClass_NoRegister();
  if (pUVar5 != (UClass *)0x0) {
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_14203ff1c;
  }
  FReferenceCollector::AddPropertyReferences
            ((FReferenceCollector *)this,*(UStruct **)&param_1->field_0x10,param_1,param_2);
LAB_14203ff1c:
  UClass::CallAddReferencedObjects
            (*(UClass **)&param_1->field_0x10,param_1,(FReferenceCollector *)this);
  return;
}

// GetSerializedProperty @ 142055e60

FProperty * __thiscall FReferenceFinder::GetSerializedProperty(FReferenceFinder *this)

{
  return this->SerializedProperty;
}

// HandleObjectReference @ 142059e40

void __thiscall
FReferenceFinder::HandleObjectReference
          (FReferenceFinder *this,UObject **param_1,UObject *param_2,FProperty *param_3)

{
  UObjectBaseUtility *this_00;
  UObject *pUVar1;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  char local_res10;
  UObject *local_18;
  UObjectBase *local_10;
  
  this_00 = (UObjectBaseUtility *)*param_1;
  if (this_00 == (UObjectBaseUtility *)0x0) {
    return;
  }
  pUVar1 = this->LimitOuter;
  if ((pUVar1 != (UObject *)0x0) && (*(UObject **)&this_00->field_0x20 != pUVar1)) {
    if (this->bRequireDirectOuter != false) {
      return;
    }
    bVar5 = UObjectBaseUtility::IsIn(this_00,pUVar1);
    if (!bVar5) {
      return;
    }
  }
  local_10 = (UObjectBase *)*param_1;
  TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,FDefaultSetAllocator>::
  Emplace<UObject_const_*_const_&>(&this->ObjectSet,&local_18,(bool *)&local_10);
  if (local_res10 == '\0') {
    bVar5 = UObjectBase::IsValidLowLevel(local_10);
    if ((!bVar5) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Object->IsValidLowLevel()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                           ,0xf4a,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar2 = this->ObjectArray;
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_10) &&
        ((FScriptContainerElement *)&local_10 < pFVar3 + (longlong)pTVar2->ArrayMax * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = pTVar2->ArrayNum;
    if (iVar6 == pTVar2->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
    }
    pTVar2->ArrayNum = iVar6 + 1;
    *(UObjectBase **)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_10;
    if (this->bSerializeRecursively != false) {
      (**(code **)(this->_padding_ + 0xa0))(this,local_10,param_2,param_3);
    }
  }
  return;
}

// IsIgnoringArchetypeRef @ 142063390

bool __thiscall FReferenceFinder::IsIgnoringArchetypeRef(FReferenceFinder *this)

{
  return this->bShouldIgnoreArchetype;
}

// IsIgnoringTransient @ 142063450

bool __thiscall FReferenceFinder::IsIgnoringTransient(FReferenceFinder *this)

{
  return this->bShouldIgnoreTransient;
}

// SetSerializedProperty @ 14208f140

void __thiscall FReferenceFinder::SetSerializedProperty(FReferenceFinder *this,FProperty *param_1)

{
  this->SerializedProperty = param_1;
  return;
}

