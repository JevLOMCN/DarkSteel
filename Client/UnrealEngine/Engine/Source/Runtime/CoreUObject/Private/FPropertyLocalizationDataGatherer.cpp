// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 23

// FPropertyLocalizationDataGatherer @ 141f21e20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FPropertyLocalizationDataGatherer * __thiscall
FPropertyLocalizationDataGatherer::FPropertyLocalizationDataGatherer
          (FPropertyLocalizationDataGatherer *this,
          TArray<FGatherableTextData,TSizedDefaultAllocator<32>_> *param_1,UPackage *param_2,
          EPropertyLocalizationGathererResultFlags *param_3)

{
  TSet<FPropertyLocalizationDataGatherer::FObjectAndGatherFlags,DefaultKeyFuncs<FPropertyLocalizationDataGatherer::FObjectAndGatherFlags,0>,FDefaultSetAllocator>
  *this_00;
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  byte bVar3;
  uint uVar4;
  uint *puVar5;
  undefined1 *puVar6;
  UObjectBaseUtility *this_01;
  longlong lVar7;
  code *pcVar8;
  TSet<FPropertyLocalizationDataGatherer::FObjectAndGatherFlags,DefaultKeyFuncs<FPropertyLocalizationDataGatherer::FObjectAndGatherFlags,0>,FDefaultSetAllocator>
  *pTVar9;
  bool bVar10;
  FPropertyLocalizationDataGatherer *pFVar11;
  UClass *pUVar12;
  FString *pFVar13;
  ulonglong uVar14;
  int iVar15;
  ForAnyElementType FVar16;
  wchar_t *pwVar17;
  uint uVar18;
  undefined1 *puVar19;
  uint *puVar20;
  wchar_t *pwVar21;
  uint uVar22;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20 [2];
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_208;
  int local_1f8;
  FPropertyLocalizationDataGatherer *local_1f0;
  TSet<FPropertyLocalizationDataGatherer::FObjectAndGatherFlags,DefaultKeyFuncs<FPropertyLocalizationDataGatherer::FObjectAndGatherFlags,0>,FDefaultSetAllocator>
  *local_1e8;
  int iStack_1e0;
  uint uStack_1dc;
  undefined1 *local_1d8;
  undefined4 uStack_1d0;
  int iStack_1cc;
  int local_1c8;
  undefined4 uStack_1c4;
  int iStack_1c0;
  undefined4 uStack_1bc;
  TSet<FPropertyLocalizationDataGatherer::FObjectAndGatherFlags,DefaultKeyFuncs<FPropertyLocalizationDataGatherer::FObjectAndGatherFlags,0>,FDefaultSetAllocator>
  *local_1b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1b0;
  undefined8 uStack_190;
  code *local_188;
  FPropertyLocalizationDataGatherer **local_180;
  FString local_178;
  undefined1 local_168 [32];
  FArchiveState local_148;
  bool local_b8;
  ForAnyElementType local_b0;
  undefined8 local_a8;
  FString local_a0;
  FString local_90;
  FString local_80 [2];
  undefined4 local_54;
  
  this->Package = param_2;
  this_00 = &this->BytecodePendingGather;
  this->GatherableTextDataArray = param_1;
  puVar6 = &(this->BytecodePendingGather).Elements.field_0x10;
  (this->PackageNamespace).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_180 = &local_1f0;
  (this->PackageNamespace).Data.ArrayNum = 0;
  (this->PackageNamespace).Data.ArrayMax = 0;
  this->ResultFlags = param_3;
  *(undefined8 *)&this->GatherableFieldsForTypes = 0;
  *(undefined8 *)&(this->GatherableFieldsForTypes).field_0x8 = 0;
  *(undefined8 *)&(this->GatherableFieldsForTypes).field_0x20 = 0;
  *(undefined4 *)&(this->GatherableFieldsForTypes).field_0x28 = 0;
  *(undefined4 *)&(this->GatherableFieldsForTypes).field_0x2c = 0x80;
  *(undefined4 *)&(this->GatherableFieldsForTypes).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GatherableFieldsForTypes).field_0x34 = 0;
  *(undefined8 *)&(this->GatherableFieldsForTypes).field_0x40 = 0;
  *(undefined4 *)&(this->GatherableFieldsForTypes).field_0x48 = 0;
  *(undefined8 *)&(this->AllObjectsInPackage).Elements.field_0x10 = 0;
  *(undefined8 *)&(this->AllObjectsInPackage).Elements.field_0x18 = 0;
  (this->AllObjectsInPackage).Hash.InlineData[0] = '\0';
  (this->AllObjectsInPackage).Hash.InlineData[1] = '\0';
  (this->AllObjectsInPackage).Hash.InlineData[2] = '\0';
  (this->AllObjectsInPackage).Hash.InlineData[3] = '\0';
  (this->AllObjectsInPackage).Hash._padding_ = 0;
  *(undefined8 *)&(this->AllObjectsInPackage).HashSize = 0;
  *(undefined8 *)&(this->AllObjectsInPackage).Elements = 0;
  *(undefined8 *)&(this->AllObjectsInPackage).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->AllObjectsInPackage).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->AllObjectsInPackage).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->AllObjectsInPackage).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->AllObjectsInPackage).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AllObjectsInPackage).Elements.field_0x34 = 0;
  (this->AllObjectsInPackage).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  *(undefined8 *)&(this->ProcessedObjects).Elements = 0;
  *(undefined8 *)&(this->ProcessedObjects).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ProcessedObjects).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ProcessedObjects).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ProcessedObjects).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ProcessedObjects).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ProcessedObjects).Elements.field_0x34 = 0;
  (this->ProcessedObjects).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ProcessedObjects).HashSize = 0;
  *(undefined8 *)&this_00->Elements = 0;
  *(undefined8 *)&(this->BytecodePendingGather).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->BytecodePendingGather).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->BytecodePendingGather).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->BytecodePendingGather).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->BytecodePendingGather).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BytecodePendingGather).Elements.field_0x34 = 0;
  (this->BytecodePendingGather).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->BytecodePendingGather).HashSize = 0;
  *(undefined8 *)&(this->DefaultTextInstances).Elements = 0;
  *(undefined8 *)&(this->DefaultTextInstances).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->DefaultTextInstances).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->DefaultTextInstances).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->DefaultTextInstances).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->DefaultTextInstances).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DefaultTextInstances).Elements.field_0x34 = 0;
  (this->DefaultTextInstances).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->DefaultTextInstances).HashSize = 0;
  local_188 = UE::Core::Private::Function::
              TFunctionRefCaller<`FPropertyLocalizationDataGatherer::FPropertyLocalizationDataGatherer'::__l2::<lambda_1>,bool,UObject_*>
              ::Call;
  local_1f0 = this;
  ForEachObjectWithPackage
            (this->Package,(TFunctionRef<bool___cdecl(UObject_*)> *)&local_188,true,RF_Transient,
             Garbage);
  local_208.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_208.ArrayNum = 0;
  local_208.ArrayMax = 0;
  GetObjectsWithPackage(this->Package,&local_208,false,RF_Transient,Garbage);
  iVar15 = local_208.ArrayNum;
  uVar14 = (ulonglong)local_208.ArrayNum;
  pFVar1 = local_208.AllocatorInstance.Data + uVar14 * 8;
  FVar16.Data = local_208.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar14 != iVar15) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (FVar16.Data == pFVar1) break;
    GatherLocalizationDataFromObjectWithCallbacks(this,*(UObject **)FVar16.Data,None);
    uVar14 = local_208._8_8_ & 0xffffffff;
    FVar16.Data = FVar16.Data + 8;
  }
  if (local_208.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.AllocatorInstance.Data);
  }
  local_res18 = *(int *)&(this->BytecodePendingGather).Elements.field_0x28;
  uStack_1dc = 1;
  local_1c8 = 0;
  iStack_1cc = 0;
  iStack_1e0 = 0;
  if (local_res18 != 0) {
    puVar5 = *(uint **)&(this->BytecodePendingGather).Elements.field_0x20;
    puVar20 = (uint *)puVar6;
    if (puVar5 != (uint *)0x0) {
      puVar20 = puVar5;
    }
    uVar18 = *puVar20;
    local_1c8 = 0;
    while (uVar18 == 0) {
      iStack_1e0 = iStack_1e0 + 1;
      local_1c8 = local_1c8 + 0x20;
      iStack_1cc = local_res18;
      if ((int)(local_res18 + -1 + (local_res18 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1e0)
      goto LAB_141f220da;
      uVar18 = puVar20[iStack_1e0];
    }
    uStack_1dc = ~(uVar18 - 1) & uVar18;
    uVar14 = (ulonglong)uStack_1dc * 2 + 1;
    lVar7 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_1f8 = (int)lVar7;
    iStack_1cc = local_1f8 + -1 + local_1c8;
    if (local_res18 < iStack_1cc) {
      iStack_1cc = local_res18;
    }
  }
LAB_141f220da:
  pwVar21 = L"";
  uStack_1c4 = local_54;
  iStack_1c0 = *(int *)&(this->BytecodePendingGather).Elements.field_0x8 -
               *(int *)&(this->BytecodePendingGather).Elements.field_0x34;
  uVar18 = *(uint *)&(this->BytecodePendingGather).Elements.field_0x28;
  uStack_1d0 = 0xffffffff;
  uVar22 = uVar18 & 0xffffffe0;
  TStack_1b0._padding_ = CONCAT44(uStack_1dc,iStack_1e0);
  TStack_1b0.CurrentBitIndex = iStack_1cc;
  TStack_1b0.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar18 >> 5;
  TStack_1b0._28_4_ = local_54;
  TStack_1b0.BaseBitIndex = local_1c8;
  uStack_190 = CONCAT44(uStack_1bc,iStack_1c0);
  local_1e8 = this_00;
  local_1d8 = puVar6;
  local_1b8 = this_00;
  TStack_1b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar6;
  if ((((int)uVar18 < 0) || (local_res18 < (int)uVar18)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    pFVar11 = (FPropertyLocalizationDataGatherer *)(*pcVar8)();
    return pFVar11;
  }
  uVar4 = *(uint *)&(this->BytecodePendingGather).Elements.field_0x28;
  if (uVar18 != uVar4) {
    puVar6 = *(undefined1 **)&(this->BytecodePendingGather).Elements.field_0x20;
    puVar19 = &(this->BytecodePendingGather).Elements.field_0x10;
    if (puVar6 != (undefined1 *)0x0) {
      puVar19 = puVar6;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar15 * 4);
    while (uVar18 == 0) {
      iVar15 = iVar15 + 1;
      uVar22 = uVar22 + 0x20;
      uVar18 = uVar4;
      if ((int)(((int)(uVar4 - 1) >> 0x1f & 0x1fU) + (uVar4 - 1)) >> 5 < iVar15) goto LAB_141f221f0;
      uVar18 = *(uint *)(puVar19 + (longlong)iVar15 * 4);
    }
    uVar14 = (ulonglong)(~(uVar18 - 1) & uVar18) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar18 = (int)lVar7 + -1 + uVar22;
    if ((int)uVar4 < (int)uVar18) {
      uVar18 = uVar4;
    }
  }
LAB_141f221f0:
  do {
    pTVar9 = local_1b8;
    if (*(int *)&(local_1b8->Elements).field_0x8 - *(int *)&(local_1b8->Elements).field_0x34 !=
        (int)uStack_190) {
      `TSparseArray<TSparseSetElement<FPropertyLocalizationDataGatherer::FObjectAndGatherFlags>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_1b0.CurrentBitIndex == uVar18) &&
        (TStack_1b0.Array ==
         (TBitArray<FDefaultBitArrayAllocator> *)&(this->BytecodePendingGather).Elements.field_0x10)
        ) && (pTVar9 == this_00)) {
      if (*(int *)&(this->BytecodePendingGather).Elements.field_0x8 !=
          *(int *)&(this->BytecodePendingGather).Elements.field_0x34) {
        TSet<FPropertyLocalizationDataGatherer::FObjectAndGatherFlags,DefaultKeyFuncs<FPropertyLocalizationDataGatherer::FObjectAndGatherFlags,0>,FDefaultSetAllocator>
        ::UnhashElements(this_00);
        iVar15 = *(int *)&(this->BytecodePendingGather).Elements.field_0xc;
        *(undefined4 *)&(this->BytecodePendingGather).Elements.field_0x8 = 0;
        if (iVar15 < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,0,(ForAnyElementType *)this_00,0,
                     (int *)&(this->BytecodePendingGather).Elements.field_0xc);
        }
        *(undefined4 *)&(this->BytecodePendingGather).Elements.field_0x30 = 0xffffffff;
        *(undefined4 *)&(this->BytecodePendingGather).Elements.field_0x34 = 0;
        *(undefined4 *)&(this->BytecodePendingGather).Elements.field_0x28 = 0;
      }
      return this;
    }
    lVar7 = *(longlong *)&pTVar9->Elements;
    puVar2 = (undefined8 *)(lVar7 + (longlong)TStack_1b0.CurrentBitIndex * 0x18);
    if ((*(byte *)(lVar7 + 8 + (longlong)TStack_1b0.CurrentBitIndex * 0x18) & 0x20) == 0) {
      this_01 = (UObjectBaseUtility *)*puVar2;
      if (this_01 == (UObjectBaseUtility *)0x0) {
        pFVar13 = GetTypeName<UStruct>(local_80);
        if ((pFVar13->Data).ArrayNum != 0) {
          pwVar21 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(L"nullptr",pwVar21);
      }
      pUVar12 = Z_Construct_UClass_UStruct_NoRegister();
      iVar15 = (int)pUVar12->_padding_;
      if ((*(int *)(*(longlong *)&this_01->field_0x10 + 0x38) < iVar15) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&this_01->field_0x10 + 0x30) + (longlong)iVar15 * 8) !=
          &pUVar12->_padding_)) {
        pFVar13 = GetTypeName<UStruct>(&local_a0);
        if ((pFVar13->Data).ArrayNum == 0) {
          pwVar17 = L"";
        }
        else {
          pwVar17 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
        }
        pFVar13 = GetFullNameForCastLogError<UObject_const_>(&local_90,(UObject *)this_01);
        if ((pFVar13->Data).ArrayNum != 0) {
          pwVar21 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar21,pwVar17);
      }
      bVar3 = *(byte *)(puVar2 + 1);
      pFVar13 = UObjectBaseUtility::GetPathName(this_01,&local_178,(UObject *)0x0);
      if (0 < *(int *)&this_01[2].field_0x18) {
        *this->ResultFlags = *this->ResultFlags | HasScript;
        if ((pFVar13->Data).ArrayNum == 0) {
          local_168._0_8_ = L"";
        }
        else {
          local_168._0_8_ = (pFVar13->Data).AllocatorInstance.Data;
        }
        local_168._8_8_ = &this_01[2].field_0x10;
        local_168._16_8_ = this;
        local_168[0x18] = (bool)(~((byte)~bVar3 >> 2) & 1);
        FArchiveState::FArchiveState(&local_148);
        local_b8 = false;
        local_148._padding_ = (longlong)&___7FNullArchive__6B_;
        local_b0.Data = (FScriptContainerElement *)0x0;
        local_a8._0_4_ = 0;
        local_a8._4_4_ = 0;
        iVar15 = *(int *)(local_168._8_8_ + 8);
        local_res20[0] = 0;
        if (0 < iVar15) {
          do {
            FGatherTextFromScriptBytecode::SerializeExpr
                      ((FGatherTextFromScriptBytecode *)local_168,local_res20,(FArchive *)&local_148
                      );
          } while (local_res20[0] < iVar15);
          if (local_b0.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b0.Data);
          }
        }
        FArchive::~FArchive((FArchive *)&local_148);
      }
      if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Data.AllocatorInstance.Data);
      }
    }
    TStack_1b0.UnvisitedBitMask = TStack_1b0.UnvisitedBitMask & ~TStack_1b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1b0);
  } while( true );
}

// operator() @ 141f267d0

void __thiscall
`FPropertyLocalizationDataGatherer::GatherTextInstance'::__l2::<lambda_1>::operator()
          (void *this,FString *param_1,FString *param_2,FTextSourceData *param_3,bool param_4)

{
  uint *puVar1;
  int iVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  FTextSourceSiteContext *pFVar9;
  FString *this_00;
  FTextSourceSiteContext *pFVar10;
  FScriptContainerElement *this_01;
  bool bVar11;
  FString *local_48;
  undefined8 local_40;
  bool *local_38;
  
  this_01 = *(FScriptContainerElement **)**(longlong **)this;
  pFVar8 = this_01 + (longlong)(int)((longlong *)**(longlong **)this)[1] * 0x80;
  for (; this_01 != pFVar8; this_01 = this_01 + 0x80) {
    iVar5 = *(int *)(this_01 + 8);
    iVar2 = (param_1->Data).ArrayNum;
    if (iVar5 == iVar2) {
      if (1 < iVar5) {
        iVar5 = wcscmp(*(wchar_t **)this_01,(wchar_t *)(param_1->Data).AllocatorInstance.Data);
        bVar11 = iVar5 == 0;
        goto LAB_141f26837;
      }
LAB_141f2683e:
      iVar5 = *(int *)(this_01 + 0x18);
      iVar2 = (param_3->SourceString).Data.ArrayNum;
      if (iVar5 == iVar2) {
        if (1 < iVar5) {
          iVar5 = wcscmp(*(wchar_t **)(this_01 + 0x10),
                         (wchar_t *)(param_3->SourceString).Data.AllocatorInstance.Data);
          bVar11 = iVar5 == 0;
          goto LAB_141f26862;
        }
      }
      else {
        bVar11 = iVar5 + iVar2 == 1;
LAB_141f26862:
        if (!bVar11) goto LAB_141f2687a;
      }
      bVar11 = FLocMetadataObject::operator==
                         ((FLocMetadataObject *)(this_01 + 0x20),&param_3->SourceStringMetaData);
      if (bVar11) {
        if (this_01 != (FScriptContainerElement *)0x0) goto LAB_141f26940;
        break;
      }
    }
    else {
      bVar11 = iVar5 + iVar2 == 1;
LAB_141f26837:
      if (bVar11) goto LAB_141f2683e;
    }
LAB_141f2687a:
  }
  pFVar3 = (ForAnyElementType *)**(undefined8 **)this;
  puVar1 = (uint *)((longlong)&pFVar3[1].Data + 4);
  uVar6 = *(uint *)&pFVar3[1].Data;
  if (uVar6 == *puVar1) {
    uVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x880,pFVar3,(int *)puVar1);
  }
  *(uint *)&pFVar3[1].Data = uVar6 + 1;
  DefaultConstructItems<FGatherableTextData,int>(pFVar3->Data + (longlong)(int)uVar6 * 0x80,1);
  uVar7 = 0;
  if ((int)uVar6 < *(int *)&pFVar3[1].Data) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this_01 = pFVar3->Data + (longlong)(int)uVar6 * 0x80;
  ::FString::operator=((FString *)this_01,param_1);
  ::FString::operator=((FString *)(this_01 + 0x10),&param_3->SourceString);
  FLocMetadataObject::operator=
            ((FLocMetadataObject *)(this_01 + 0x20),&param_3->SourceStringMetaData);
LAB_141f26940:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(``FPropertyLocalizationDataGatherer::GatherTextInstance'::__l2::<lambda_1>::operator()'::
           __l6::_dynamic_atexit_destructor_for__DefaultMetadataObject__);
    _Init_thread_footer(&::_TSS0);
  }
  local_40 = *(undefined8 *)((longlong)this + 8);
  pFVar9 = *(FTextSourceSiteContext **)(this_01 + 0x70);
  local_38 = &param_4;
  pFVar10 = pFVar9 + *(int *)(this_01 + 0x78);
  local_48 = param_2;
  do {
    if (pFVar9 == pFVar10) {
LAB_141f269ca:
      uVar6 = *(uint *)(this_01 + 0x78);
      if (uVar6 == *(uint *)(this_01 + 0x7c)) {
        uVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x8c8,(ForAnyElementType *)(this_01 + 0x70),(int *)(this_01 + 0x7c));
      }
      *(uint *)(this_01 + 0x78) = uVar6 + 1;
      DefaultConstructItems<FTextSourceSiteContext,int>
                ((void *)(*(longlong *)(this_01 + 0x70) + (longlong)(int)uVar6 * 200),1);
      uVar7 = 0;
      if ((int)uVar6 < *(int *)(this_01 + 0x78)) {
        uVar7 = ~uVar6 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      this_00 = (FString *)(*(longlong *)(this_01 + 0x70) + (longlong)(int)uVar6 * 200);
      ::FString::operator=(this_00,param_2);
      ::FString::operator=(this_00 + 1,*(FString **)((longlong)this + 8));
      *(bool *)&this_00[2].Data.AllocatorInstance.Data = param_4;
      *(undefined1 *)((longlong)&this_00[2].Data.AllocatorInstance.Data + 1) = 0;
      return;
    }
    bVar11 = ``FPropertyLocalizationDataGatherer::GatherTextInstance'::__l2::<lambda_1>::operator()'
             ::__l6::<lambda_2>::operator()(&local_48,pFVar9);
    if (bVar11) {
      if (pFVar9 != (FTextSourceSiteContext *)0x0) {
        return;
      }
      goto LAB_141f269ca;
    }
    pFVar9 = pFVar9 + 1;
  } while( true );
}

// operator() @ 141f27a20

bool __thiscall
`FPropertyLocalizationDataGatherer::CacheGatherableFieldsForType'::__l26::<lambda_1>::operator()
          (void *this,FProperty *param_1,FProperty *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  FGatherableFieldsForType *pFVar8;
  FProperty *local_res18 [2];
  
  uVar2 = *(ulonglong *)(param_1->_padding_ + 0x18);
  local_res18[0] = param_2;
  if (((uVar2 >> 0x1e & 1) == 0) && ((uVar2 >> 0x1a & 1) == 0)) {
    if (((uVar2 >> 0x14 & 1) != 0) && ((UStruct *)param_1[1]._padding_ != (UStruct *)0x0)) {
      pFVar8 = FPropertyLocalizationDataGatherer::GetGatherableFieldsForType
                         (*(FPropertyLocalizationDataGatherer **)this,
                          (UStruct *)param_1[1]._padding_);
      if (((((pFVar8->Properties).ArrayNum == 0) && ((pFVar8->Functions).ArrayNum == 0)) &&
          (pFVar8->CustomObjectCallback ==
           (TFunction<void___cdecl(UObject_const_*,FPropertyLocalizationDataGatherer_&,EPropertyLocalizationGathererTextFlags)>
            *)0x0)) &&
         (pFVar8->CustomStructCallback ==
          (TFunction<void___cdecl(FString_const_&,UScriptStruct_const_*,void_const_*,void_const_*,FPropertyLocalizationDataGatherer_&,EPropertyLocalizationGathererTextFlags)>
           *)0x0)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) goto LAB_141f27a87;
    }
    return false;
  }
LAB_141f27a87:
  pFVar3 = (ForAnyElementType *)**(undefined8 **)((longlong)this + 8);
  if ((pFVar3->Data <= (FScriptContainerElement *)local_res18) &&
     ((FScriptContainerElement *)local_res18 <
      pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  iVar7 = *(int *)&pFVar3[1].Data;
  piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar3,piVar1);
  }
  *(int *)&pFVar3[1].Data = iVar7 + 1;
  *(FProperty **)(pFVar3->Data + (longlong)iVar7 * 8) = local_res18[0];
  return true;
}

// CacheGatherableFieldsForType @ 141f299b0

FGatherableFieldsForType * __thiscall
FPropertyLocalizationDataGatherer::CacheGatherableFieldsForType
          (FPropertyLocalizationDataGatherer *this,UStruct *param_1)

{
  TArray<UFunction_const_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  UStruct *pUVar4;
  FScriptContainerElement *pFVar5;
  ForElementType<FSetElementId> FVar6;
  TObjectPtr<UField>_u_0 *pTVar7;
  code *pcVar8;
  TObjectPtr<UField>_u_0 TVar9;
  FProperty *pFVar10;
  TUniquePtr<FPropertyLocalizationDataGatherer::FGatherableFieldsForType,TDefaultDelete<FPropertyLocalizationDataGatherer::FGatherableFieldsForType>_>
  *pTVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  FGatherableFieldsForType *pFVar15;
  FGatherableFieldsForType *pFVar16;
  UClass *pUVar17;
  TFunction<void___cdecl(UObject_const_*,FPropertyLocalizationDataGatherer_&,EPropertyLocalizationGathererTextFlags)>
  *pTVar18;
  longlong lVar19;
  TFunction<void___cdecl(FString_const_&,UScriptStruct_const_*,void_const_*,void_const_*,FPropertyLocalizationDataGatherer_&,EPropertyLocalizationGathererTextFlags)>
  *pTVar20;
  ForElementType<FSetElementId> FVar21;
  ulonglong uVar22;
  TPairInitializer<UStruct_const_*_const_&,TUniquePtr<FPropertyLocalizationDataGatherer::FGatherableFieldsForType,TDefaultDelete<FPropertyLocalizationDataGatherer::FGatherableFieldsForType>_>_&&>
  local_res8;
  FGatherableFieldsForType *local_res18;
  TObjectPtr<UField>_u_0 local_98;
  FProperty *local_90;
  FPropertyLocalizationDataGatherer *local_88;
  FGatherableFieldsForType **local_80;
  TUniquePtr<FPropertyLocalizationDataGatherer::FGatherableFieldsForType,TDefaultDelete<FPropertyLocalizationDataGatherer::FGatherableFieldsForType>_>
  **local_78;
  FGatherableFieldsForType **local_70;
  TFieldIterator<FProperty_const_> local_68;
  TFieldIterator<UField_const_> local_50;
  
  local_res8.Value =
       (TUniquePtr<FPropertyLocalizationDataGatherer::FGatherableFieldsForType,TDefaultDelete<FPropertyLocalizationDataGatherer::FGatherableFieldsForType>_>
        *)param_1;
  if ((param_1 == (UStruct *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InType",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\PropertyLocalizationDataGathering.cpp"
                          ,0x5d,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    pFVar15 = (FGatherableFieldsForType *)(*pcVar8)();
    return pFVar15;
  }
  pFVar15 = ::operator_new(0x30);
  local_res18 = (FGatherableFieldsForType *)0x0;
  if (pFVar15 != (FGatherableFieldsForType *)0x0) {
    (pFVar15->Properties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar15->Properties).ArrayNum = 0;
    (pFVar15->Properties).ArrayMax = 0;
    (pFVar15->Functions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar15->Functions).ArrayNum = 0;
    (pFVar15->Functions).ArrayMax = 0;
    pFVar15->CustomObjectCallback =
         (TFunction<void___cdecl(UObject_const_*,FPropertyLocalizationDataGatherer_&,EPropertyLocalizationGathererTextFlags)>
          *)0x0;
    pFVar15->CustomStructCallback =
         (TFunction<void___cdecl(FString_const_&,UScriptStruct_const_*,void_const_*,void_const_*,FPropertyLocalizationDataGatherer_&,EPropertyLocalizationGathererTextFlags)>
          *)0x0;
    local_res18 = pFVar15;
  }
  pUVar4 = (((TObjectPtr<UStruct> *)((longlong)local_res8.Value + 0x40))->field0_0x0).DebugPtr;
  if (pUVar4 != (UStruct *)0x0) {
    pFVar16 = GetGatherableFieldsForType(this,pUVar4);
    pFVar15 = local_res18;
    if (local_res18 != pFVar16) {
      iVar14 = (pFVar16->Properties).ArrayNum;
      pFVar5 = (pFVar16->Properties).AllocatorInstance.Data;
      iVar3 = (local_res18->Properties).ArrayMax;
      (local_res18->Properties).ArrayNum = iVar14;
      if ((iVar14 == 0) && (iVar3 == 0)) {
        (local_res18->Properties).ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar14,iVar3,(ForAnyElementType *)local_res18,iVar14,
                   &(local_res18->Properties).ArrayMax);
        if (iVar14 != 0) {
          memcpy((pFVar15->Properties).AllocatorInstance.Data,pFVar5,(longlong)iVar14 << 3);
        }
      }
    }
    pTVar1 = &pFVar15->Functions;
    if (pTVar1 != &pFVar16->Functions) {
      iVar14 = (pFVar16->Functions).ArrayNum;
      piVar2 = &(pFVar15->Functions).ArrayMax;
      pFVar5 = (pFVar16->Functions).AllocatorInstance.Data;
      (pFVar15->Functions).ArrayNum = iVar14;
      if ((iVar14 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar14,*piVar2,&pTVar1->AllocatorInstance,iVar14,piVar2);
        if (iVar14 != 0) {
          memcpy((pTVar1->AllocatorInstance).Data,pFVar5,(longlong)iVar14 << 3);
        }
      }
    }
    pFVar15->CustomObjectCallback = pFVar16->CustomObjectCallback;
    pFVar15->CustomStructCallback = pFVar16->CustomStructCallback;
  }
  pTVar11 = local_res8.Value;
  uVar22 = (ulonglong)_tls_index;
  if ((UStruct *)local_res8.Value != (UStruct *)0x0) {
    pUVar17 = Z_Construct_UClass_UClass_NoRegister();
    iVar14 = (int)pUVar17->_padding_;
    if ((iVar14 <= *(int *)(*(longlong *)((longlong)pTVar11 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)((longlong)pTVar11 + 0x10) + 0x30) + (longlong)iVar14 * 8) ==
        &pUVar17->_padding_)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar22 * 8) + 0x9d4c) <
           ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        atexit(`FPropertyLocalizationDataGatherer::
               GetTypeSpecificLocalizationDataObjectGatheringCallbacks'::__l2::
               _dynamic_atexit_destructor_for__TypeSpecificLocalizationDataGatheringCallbacks__);
        _Init_thread_footer(&::_TSS0);
      }
      uVar13 = ((uint)((ulonglong)pTVar11 >> 0x14) & 0xffff ^ (uint)((ulonglong)pTVar11 >> 4)) *
               -0x7a143595;
      uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
      if (TypeSpecificLocalizationDataGatheringCallbacks._8_4_ !=
          TypeSpecificLocalizationDataGatheringCallbacks._52_4_) {
        lVar19 = 0x154b88348;
        if (TypeSpecificLocalizationDataGatheringCallbacks._64_8_ != 0) {
          lVar19 = TypeSpecificLocalizationDataGatheringCallbacks._64_8_;
        }
        for (iVar14 = *(int *)(lVar19 + (ulonglong)
                                        (TypeSpecificLocalizationDataGatheringCallbacks._72_4_ - 1 &
                                        (uVar13 >> 0x10 ^ uVar13)) * 4); iVar14 != -1;
            iVar14 = *(int *)(TypeSpecificLocalizationDataGatheringCallbacks._0_8_ + 0x40 +
                             (longlong)iVar14 * 0x50)) {
          if (*(UStruct **)
               (TypeSpecificLocalizationDataGatheringCallbacks._0_8_ + (longlong)iVar14 * 0x50) ==
              (UStruct *)pTVar11) {
            if (((iVar14 != -1) &&
                (lVar19 = (longlong)iVar14 * 0x50 +
                          TypeSpecificLocalizationDataGatheringCallbacks._0_8_, lVar19 != 0)) &&
               (pTVar18 = (TFunction<void___cdecl(UObject_const_*,FPropertyLocalizationDataGatherer_&,EPropertyLocalizationGathererTextFlags)>
                           *)(lVar19 + 0x10),
               pTVar18 !=
               (TFunction<void___cdecl(UObject_const_*,FPropertyLocalizationDataGatherer_&,EPropertyLocalizationGathererTextFlags)>
                *)0x0)) {
              local_res18->CustomObjectCallback = pTVar18;
            }
            break;
          }
        }
      }
    }
  }
  pTVar11 = local_res8.Value;
  if ((UStruct *)local_res8.Value != (UStruct *)0x0) {
    pUVar17 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar14 = (int)pUVar17->_padding_;
    if ((iVar14 <= *(int *)(*(longlong *)((longlong)pTVar11 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)((longlong)pTVar11 + 0x10) + 0x30) + (longlong)iVar14 * 8) ==
        &pUVar17->_padding_)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar22 * 8) + 0x9d4c) <
           ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        atexit(`FPropertyLocalizationDataGatherer::
               GetTypeSpecificLocalizationDataStructGatheringCallbacks'::__l2::
               _dynamic_atexit_destructor_for__TypeSpecificLocalizationDataGatheringCallbacks__);
        _Init_thread_footer(&::_TSS0);
      }
      uVar13 = ((uint)((ulonglong)pTVar11 >> 0x14) & 0xffff ^ (uint)((ulonglong)pTVar11 >> 4)) *
               -0x7a143595;
      uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
      if (TypeSpecificLocalizationDataGatheringCallbacks._8_4_ !=
          TypeSpecificLocalizationDataGatheringCallbacks._52_4_) {
        lVar19 = 0x154b883a8;
        if (TypeSpecificLocalizationDataGatheringCallbacks._64_8_ != 0) {
          lVar19 = TypeSpecificLocalizationDataGatheringCallbacks._64_8_;
        }
        for (iVar14 = *(int *)(lVar19 + (ulonglong)
                                        (TypeSpecificLocalizationDataGatheringCallbacks._72_4_ - 1 &
                                        (uVar13 >> 0x10 ^ uVar13)) * 4); iVar14 != -1;
            iVar14 = *(int *)(TypeSpecificLocalizationDataGatheringCallbacks._0_8_ + 0x40 +
                             (longlong)iVar14 * 0x50)) {
          if (*(UStruct **)
               (TypeSpecificLocalizationDataGatheringCallbacks._0_8_ + (longlong)iVar14 * 0x50) ==
              (UStruct *)pTVar11) {
            if (((iVar14 != -1) &&
                (lVar19 = (longlong)iVar14 * 0x50 +
                          TypeSpecificLocalizationDataGatheringCallbacks._0_8_, lVar19 != 0)) &&
               (pTVar20 = (TFunction<void___cdecl(FString_const_&,UScriptStruct_const_*,void_const_*,void_const_*,FPropertyLocalizationDataGatherer_&,EPropertyLocalizationGathererTextFlags)>
                           *)(lVar19 + 0x10),
               pTVar20 !=
               (TFunction<void___cdecl(FString_const_&,UScriptStruct_const_*,void_const_*,void_const_*,FPropertyLocalizationDataGatherer_&,EPropertyLocalizationGathererTextFlags)>
                *)0x0)) {
              local_res18->CustomStructCallback = pTVar20;
            }
            break;
          }
        }
      }
    }
  }
  pTVar11 = local_res8.Value;
  local_68.Struct = (UStruct *)local_res8.Value;
  local_68.InterfaceIndex = -1;
  local_68.bIncludeSuper = false;
  local_68.bIncludeDeprecated = false;
  if ((UStruct *)local_res8.Value == (UStruct *)0x0) {
    local_68.Field = (FField *)0x0;
LAB_141f29db0:
    local_68.bIncludeInterface = false;
  }
  else {
    local_68.Field = *(FField **)((longlong)local_res8.Value + 0x50);
    pUVar17 = Z_Construct_UClass_UClass_NoRegister();
    iVar14 = (int)pUVar17->_padding_;
    if ((*(int *)(*(longlong *)((longlong)pTVar11 + 0x10) + 0x38) < iVar14) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)((longlong)pTVar11 + 0x10) + 0x30) + (longlong)iVar14 * 8) !=
        &pUVar17->_padding_)) goto LAB_141f29db0;
    local_68.bIncludeInterface = true;
  }
  TFieldIterator<FProperty_const_>::IterateToNext(&local_68);
  pUVar4 = (UStruct *)local_res8.Value;
  pFVar10 = (FProperty *)local_68.Field;
  while (local_res8.Value =
              (TUniquePtr<FPropertyLocalizationDataGatherer::FGatherableFieldsForType,TDefaultDelete<FPropertyLocalizationDataGatherer::FGatherableFieldsForType>_>
               *)pUVar4, local_68.Field = (FField *)pFVar10, pFVar10 != (FProperty *)0x0) {
    local_80 = &local_res18;
    local_88 = this;
    if (pFVar10 != (FProperty *)0x0) {
      uVar22 = *(ulonglong *)(pFVar10->_padding_ + 0x18);
      local_90 = pFVar10;
      if (((uVar22 >> 0x1e & 1) == 0) && ((uVar22 >> 0x1a & 1) == 0)) {
        if (((uVar22 >> 0x14 & 1) != 0) && ((UStruct *)pFVar10[1]._padding_ != (UStruct *)0x0)) {
          pFVar15 = GetGatherableFieldsForType(this,(UStruct *)pFVar10[1]._padding_);
          if (((((pFVar15->Properties).ArrayNum == 0) && ((pFVar15->Functions).ArrayNum == 0)) &&
              (pFVar15->CustomObjectCallback ==
               (TFunction<void___cdecl(UObject_const_*,FPropertyLocalizationDataGatherer_&,EPropertyLocalizationGathererTextFlags)>
                *)0x0)) &&
             (pFVar15->CustomStructCallback ==
              (TFunction<void___cdecl(FString_const_&,UScriptStruct_const_*,void_const_*,void_const_*,FPropertyLocalizationDataGatherer_&,EPropertyLocalizationGathererTextFlags)>
               *)0x0)) {
            bVar12 = false;
          }
          else {
            bVar12 = true;
          }
          if (bVar12) goto LAB_141f29f39;
        }
        if (((*(uint *)(pFVar10->_padding_ + 0x18) >> 0x15 & 1) != 0) &&
           (pFVar10 != (FProperty *)0x0)) {
          `FPropertyLocalizationDataGatherer::CacheGatherableFieldsForType'::__l26::<lambda_1>::
          operator()(&local_88,(FProperty *)pFVar10[1]._padding_,pFVar10);
        }
        if ((((*(ulonglong *)(pFVar10->_padding_ + 0x18) >> 0x2e & 1) != 0) &&
            (pFVar10 != (FProperty *)0x0)) &&
           (bVar12 = `FPropertyLocalizationDataGatherer::CacheGatherableFieldsForType'::__l26::
                     <lambda_1>::operator()(&local_88,(FProperty *)pFVar10[1]._padding_,pFVar10),
           !bVar12)) {
          `FPropertyLocalizationDataGatherer::CacheGatherableFieldsForType'::__l26::<lambda_1>::
          operator()(&local_88,(FProperty *)pFVar10[1]._padding_,pFVar10);
        }
        if (((*(ulonglong *)(pFVar10->_padding_ + 0x18) >> 0x2f & 1) != 0) &&
           (pFVar10 != (FProperty *)0x0)) {
          `FPropertyLocalizationDataGatherer::CacheGatherableFieldsForType'::__l26::<lambda_1>::
          operator()(&local_88,(FProperty *)pFVar10[1]._padding_,pFVar10);
        }
        if (((*(byte *)(pFVar10->_padding_ + 0x1f) & 1) != 0) && (pFVar10 != (FProperty *)0x0)) {
          if ((pFVar10[1]._padding_ == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ValueProperty",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\PropertyOptional.h"
                                  ,0x18,L"Expected ValueProperty to be initialized"), bVar12)) {
            pcVar8 = (code *)swi(3);
            pFVar15 = (FGatherableFieldsForType *)(*pcVar8)();
            return pFVar15;
          }
          `FPropertyLocalizationDataGatherer::CacheGatherableFieldsForType'::__l26::<lambda_1>::
          operator()(&local_88,(FProperty *)pFVar10[1]._padding_,pFVar10);
        }
      }
      else {
LAB_141f29f39:
        pFVar15 = local_res18;
        pFVar5 = (local_res18->Properties).AllocatorInstance.Data;
        if (((pFVar5 <= (FScriptContainerElement *)&local_90) &&
            ((FScriptContainerElement *)&local_90 <
             pFVar5 + (longlong)(local_res18->Properties).ArrayMax * 8)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          pFVar15 = (FGatherableFieldsForType *)(*pcVar8)();
          return pFVar15;
        }
        iVar14 = (pFVar15->Properties).ArrayNum;
        piVar2 = &(pFVar15->Properties).ArrayMax;
        if (iVar14 == *piVar2) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)pFVar15,piVar2);
        }
        (pFVar15->Properties).ArrayNum = iVar14 + 1;
        *(FProperty **)((pFVar15->Properties).AllocatorInstance.Data + (longlong)iVar14 * 8) =
             local_90;
      }
    }
    local_68.Field = (FField *)pFVar10->_padding_;
    TFieldIterator<FProperty_const_>::IterateToNext(&local_68);
    pUVar4 = (UStruct *)local_res8.Value;
    pFVar10 = (FProperty *)local_68.Field;
  }
  local_50.InterfaceIndex = -1;
  local_50.bIncludeSuper = false;
  local_50.bIncludeDeprecated = false;
  local_50.Struct = pUVar4;
  if (pUVar4 == (UStruct *)0x0) {
    local_50.Field = (UField *)0x0;
  }
  else {
    local_50.Field = (pUVar4->Children).field0_0x0.DebugPtr;
    pUVar17 = Z_Construct_UClass_UClass_NoRegister();
    iVar14 = (int)pUVar17->_padding_;
    if ((iVar14 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar14 * 8)
        == &pUVar17->_padding_)) {
      local_50.bIncludeInterface = true;
      goto LAB_141f2a04f;
    }
  }
  local_50.bIncludeInterface = false;
LAB_141f2a04f:
  TFieldIterator<UField_const_>::IterateToNext(&local_50);
  TVar9.DebugPtr = local_50.Field;
  do {
    local_50.Field = TVar9.DebugPtr;
    if (TVar9.DebugPtr == (UField *)0x0) {
      if ((local_res18 == (FGatherableFieldsForType *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("GatherableFieldsForType.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\PropertyLocalizationDataGathering.cpp"
                              ,0xad,L""), bVar12)) {
        pcVar8 = (code *)swi(3);
        pFVar15 = (FGatherableFieldsForType *)(*pcVar8)();
        return pFVar15;
      }
      local_78 = &local_res8.Value;
      local_70 = &local_res18;
      TSet<TTuple<UStruct_const_*,TUniquePtr<FPropertyLocalizationDataGatherer::FGatherableFieldsForType,TDefaultDelete<FPropertyLocalizationDataGatherer::FGatherableFieldsForType>_>_>,TDefaultMapHashableKeyFuncs<UStruct_const_*,TUniquePtr<FPropertyLocalizationDataGatherer::FGatherableFieldsForType,TDefaultDelete<FPropertyLocalizationDataGatherer::FGatherableFieldsForType>_>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<UStruct_const_*_const_&,TUniquePtr<FPropertyLocalizationDataGatherer::FGatherableFieldsForType,TDefaultDelete<FPropertyLocalizationDataGatherer::FGatherableFieldsForType>_>_&&>_>
                ((TSet<TTuple<UStruct_const_*,TUniquePtr<FPropertyLocalizationDataGatherer::FGatherableFieldsForType,TDefaultDelete<FPropertyLocalizationDataGatherer::FGatherableFieldsForType>_>_>,TDefaultMapHashableKeyFuncs<UStruct_const_*,TUniquePtr<FPropertyLocalizationDataGatherer::FGatherableFieldsForType,TDefaultDelete<FPropertyLocalizationDataGatherer::FGatherableFieldsForType>_>,0>,FDefaultSetAllocator>
                  *)&this->GatherableFieldsForTypes,&local_res8,(bool *)&local_78);
      pFVar16 = local_res18;
      pFVar15 = *(FGatherableFieldsForType **)
                 (*(longlong *)&this->GatherableFieldsForTypes + 8 +
                 (longlong)(int)local_res8.Key * 0x18);
      if (local_res18 != (FGatherableFieldsForType *)0x0) {
        if ((local_res18->Functions).AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free((local_res18->Functions).AllocatorInstance.Data);
        }
        pFVar5 = (pFVar16->Properties).AllocatorInstance.Data;
        if (pFVar5 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar5);
        }
        ::operator_delete(pFVar16,0x30);
      }
      return pFVar15;
    }
    pUVar17 = Z_Construct_UClass_UFunction_NoRegister();
    pFVar15 = local_res18;
    iVar14 = (int)pUVar17->_padding_;
    if ((*(int *)((TVar9.DebugPtr)->_padding_ + 0x38) < iVar14) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)((TVar9.DebugPtr)->_padding_ + 0x30) + (longlong)iVar14 * 8)
        != &pUVar17->_padding_)) {
      local_98.DebugPtr = (UField *)0x0;
    }
    else {
      local_98 = TVar9;
      if (((TVar9.DebugPtr != (UField *)0x0) && (0 < (int)TVar9.DebugPtr[2]._padding_)) &&
         (uVar13 = ((uint)((ulonglong)TVar9.DebugPtr >> 0x14) & 0xffff ^
                   (uint)((ulonglong)TVar9.DebugPtr >> 4)) * -0x7a143595,
         uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb,
         *(int *)&(this->AllObjectsInPackage).Elements.field_0x8 !=
         *(int *)&(this->AllObjectsInPackage).Elements.field_0x34)) {
        FVar6 = (this->AllObjectsInPackage).Hash.SecondaryData;
        FVar21 = (ForElementType<FSetElementId>)&(this->AllObjectsInPackage).Hash;
        if (FVar6 != (ForElementType<FSetElementId>)0x0) {
          FVar21 = FVar6;
        }
        iVar14 = *(int *)((longlong)FVar21 +
                         (ulonglong)
                         ((this->AllObjectsInPackage).HashSize - 1U & (uVar13 >> 0x10 ^ uVar13)) * 4
                         );
        if (iVar14 != -1) {
          lVar19 = *(longlong *)&(this->AllObjectsInPackage).Elements;
          do {
            if (*(UField **)(lVar19 + (longlong)iVar14 * 0x10) == TVar9.DebugPtr) {
              pTVar7 = (TObjectPtr<UField>_u_0 *)(local_res18->Functions).AllocatorInstance.Data;
              if (((pTVar7 <= &local_98) && (&local_98 < pTVar7 + (local_res18->Functions).ArrayMax)
                  ) && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar12)) {
                pcVar8 = (code *)swi(3);
                pFVar15 = (FGatherableFieldsForType *)(*pcVar8)();
                return pFVar15;
              }
              iVar14 = (pFVar15->Functions).ArrayNum;
              piVar2 = &(pFVar15->Functions).ArrayMax;
              if (iVar14 == *piVar2) {
                iVar14 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&(pFVar15->Functions).AllocatorInstance,piVar2);
              }
              (pFVar15->Functions).ArrayNum = iVar14 + 1;
              ((TObjectPtr<UField>_u_0 *)
              ((pFVar15->Functions).AllocatorInstance.Data + (longlong)iVar14 * 8))->DebugPtr =
                   (UField *)local_98;
              break;
            }
            iVar14 = *(int *)(lVar19 + 8 + (longlong)iVar14 * 0x10);
          } while (iVar14 != -1);
        }
      }
    }
    local_50.Field = ((TVar9.DebugPtr)->Next).field0_0x0.DebugPtr;
    TFieldIterator<UField_const_>::IterateToNext(&local_50);
    TVar9.DebugPtr = local_50.Field;
  } while( true );
}

// CanGatherFromInnerProperty @ 141f2a6d0

bool __thiscall
FPropertyLocalizationDataGatherer::CanGatherFromInnerProperty
          (FPropertyLocalizationDataGatherer *this,FProperty *param_1)

{
  ulonglong uVar1;
  FGatherableFieldsForType *pFVar2;
  
  uVar1 = *(ulonglong *)(param_1->_padding_ + 0x18);
  if (((uVar1 >> 0x1e & 1) != 0) || ((uVar1 >> 0x1a & 1) != 0)) {
    return true;
  }
  if (((uVar1 >> 0x14 & 1) != 0) && ((UStruct *)param_1[1]._padding_ != (UStruct *)0x0)) {
    pFVar2 = GetGatherableFieldsForType(this,(UStruct *)param_1[1]._padding_);
    if ((pFVar2->Properties).ArrayNum != 0) {
      return true;
    }
    if ((pFVar2->Functions).ArrayNum != 0) {
      return true;
    }
    if (pFVar2->CustomObjectCallback !=
        (TFunction<void___cdecl(UObject_const_*,FPropertyLocalizationDataGatherer_&,EPropertyLocalizationGathererTextFlags)>
         *)0x0) {
      return true;
    }
    if (pFVar2->CustomStructCallback !=
        (TFunction<void___cdecl(FString_const_&,UScriptStruct_const_*,void_const_*,void_const_*,FPropertyLocalizationDataGatherer_&,EPropertyLocalizationGathererTextFlags)>
         *)0x0) {
      return true;
    }
  }
  return false;
}

// ExtractTextIdentity @ 141f2e8b0

bool __cdecl
FPropertyLocalizationDataGatherer::ExtractTextIdentity
          (FText *param_1,FString *param_2,FString *param_3,bool param_4)

{
  bool bVar1;
  FString *pFVar2;
  FTextKey local_28 [2];
  undefined1 local_20 [8];
  FString local_18;
  
  FTextInspector::GetTextId((FText *)local_20);
  if (((local_20._0_4_ != -1) || (local_20._4_4_ != -1)) &&
     (bVar1 = FText::ShouldGatherForLocalization(param_1), bVar1)) {
    local_28[0].Index = local_20._0_4_;
    FTextKey::ToString(local_28,param_2);
    local_28[0].Index = local_20._4_4_;
    FTextKey::ToString(local_28,param_3);
    if (param_4) {
      pFVar2 = TextNamespaceUtil::StripPackageNamespace(&local_18,param_2);
      ::FString::operator=(param_2,pFVar2);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    return true;
  }
  return false;
}

// GatherLocalizationDataFromChildTextProperties @ 141f30960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FPropertyLocalizationDataGatherer::GatherLocalizationDataFromChildTextProperties
          (FPropertyLocalizationDataGatherer *this,FString *param_1,FProperty *param_2,void *param_3
          ,void *param_4,EPropertyLocalizationGathererTextFlags param_5)

{
  int iVar1;
  UStruct *pUVar2;
  TScriptSparseSet<FDefaultSetAllocator> *pTVar3;
  ForElementType<unsigned_int> FVar4;
  ForElementType<FSetElementId> FVar5;
  FProperty *pFVar6;
  code *pcVar7;
  bool bVar8;
  longlong lVar9;
  FScriptSetHelper *pFVar10;
  bool bVar11;
  char cVar12;
  bool bVar13;
  uint uVar14;
  FString *pFVar15;
  UPackage *this_00;
  ulonglong uVar16;
  void *pvVar17;
  FGatherableFieldsForType *pFVar18;
  UObject *pUVar19;
  longlong lVar20;
  ITextData *pIVar21;
  ForElementType<FSetElementId> FVar22;
  int iVar23;
  FScriptMapHelper_u_16 FVar24;
  ulonglong uVar25;
  ForElementType<unsigned_int> FVar26;
  uint uVar27;
  FScriptMapHelper_u_16 FVar28;
  int iVar29;
  EPropertyLocalizationGathererTextFlags EVar30;
  EPropertyLocalizationGathererTextFlags EVar31;
  int iVar32;
  FProperty *pFVar33;
  FString *pFVar34;
  undefined1 auStackY_278 [32];
  int local_230;
  int local_22c;
  FString local_228;
  FString local_218;
  TScriptContainerIterator<FScriptSetHelper> local_208;
  undefined1 local_1f8 [16];
  FPropertyLocalizationDataGatherer *local_1e8;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  uint local_190;
  FTextKey local_18c;
  FTextKey local_188;
  FTextKey local_184;
  FTextKey local_180;
  int local_17c;
  int local_178;
  int local_174;
  int local_170;
  int local_16c;
  FProperty *local_168;
  FProperty *local_160;
  int local_158;
  int local_154;
  FProperty *local_150;
  FProperty *local_148;
  FString local_140;
  FString local_130;
  FTextId local_120;
  void *local_118;
  void *local_110;
  FProperty *local_108;
  FProperty *local_100;
  FString local_f8;
  FString local_e8 [2];
  FScriptMapHelper local_c8;
  FScriptSetHelper local_90;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_278;
  local_110 = param_4;
  if ((param_2->PropertyFlags >> 0xd & 1) == 0) {
    uVar16 = *(ulonglong *)(param_2->_padding_ + 0x18);
    local_150 = param_2;
    if ((uVar16 >> 0x1e & 1) == 0) {
      local_150 = (FProperty *)0x0;
    }
    local_218.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.Data.ArrayNum = 0;
    local_218.Data.ArrayMax = 0;
    local_168 = param_2;
    if ((uVar16 >> 0x15 & 1) == 0) {
      local_168 = (FProperty *)0x0;
    }
    pFVar33 = param_2;
    if ((uVar16 >> 0x2e & 1) == 0) {
      pFVar33 = (FProperty *)0x0;
    }
    local_148 = param_2;
    if ((uVar16 >> 0x2f & 1) == 0) {
      local_148 = (FProperty *)0x0;
    }
    local_108 = param_2;
    if ((uVar16 >> 0x14 & 1) == 0) {
      local_108 = (FProperty *)0x0;
    }
    local_100 = param_2;
    if ((uVar16 >> 0x1a & 1) == 0) {
      local_100 = (FProperty *)0x0;
    }
    local_160 = param_2;
    if ((uVar16 >> 0x38 & 1) == 0) {
      local_160 = (FProperty *)0x0;
    }
    EVar30 = -((param_2->PropertyFlags & CPF_EditorOnly) != CPF_None) & ForceEditorOnly | param_5;
    local_1f8._8_8_ = param_2;
    local_1e8 = this;
    local_118 = param_3;
    bVar11 = IsThisNotNull(param_2,"FField::GetName");
    if (bVar11) {
      ::FName::ToString((FName *)&param_2->_padding_,&local_140);
    }
    else {
      ::FString::FString(&local_140,L"None");
    }
    iVar23 = (param_1->Data).ArrayNum;
    iVar29 = iVar23 + -1;
    if (iVar23 == 0) {
      iVar29 = 0;
    }
    iVar23 = local_140.Data.ArrayNum;
    if (local_140.Data.ArrayNum == 0) {
      iVar23 = 1;
    }
    ::FString::Reserve(&local_218,iVar29 + iVar23);
    iVar23 = (param_1->Data).ArrayNum;
    iVar29 = iVar23 + -1;
    if (iVar23 == 0) {
      iVar29 = 0;
    }
    ::FString::AppendChars(&local_218,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar29);
    if (1 < (param_1->Data).ArrayNum) {
      ::FString::AppendChar(&local_218,L'.');
    }
    iVar29 = local_140.Data.ArrayNum + -1;
    if (local_140.Data.ArrayNum == 0) {
      iVar29 = 0;
    }
    ::FString::AppendChars(&local_218,(wchar_t *)local_140.Data.AllocatorInstance.Data,iVar29);
    if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Data.AllocatorInstance.Data);
    }
    local_16c = param_2->ArrayDim;
    local_22c = 0;
    if (0 < local_16c) {
      pFVar34 = &local_1a0;
      if (local_16c < 2) {
        pFVar34 = &local_218;
      }
      local_190 = EVar30 & 8;
      do {
        iVar29 = local_22c;
        local_1a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1a0.Data.ArrayNum = 0;
        local_1a0.Data.ArrayMax = 0;
        if (1 < local_16c) {
          iVar23 = local_218.Data.ArrayNum + 9;
          if (local_218.Data.ArrayNum == 0) {
            iVar23 = 10;
          }
          ::FString::Reserve(&local_1a0,iVar23);
          iVar23 = local_218.Data.ArrayNum + -1;
          if (local_218.Data.ArrayNum == 0) {
            iVar23 = 0;
          }
          ::FString::AppendChars(&local_1a0,(wchar_t *)local_218.Data.AllocatorInstance.Data,iVar23)
          ;
          ::FString::AppendChar(&local_1a0,L'[');
          ::FString::AppendInt(&local_1a0,iVar29);
          ::FString::AppendChar(&local_1a0,L']');
        }
        lVar20 = (longlong)(iVar29 * param_2->ElementSize);
        FVar28.HeapMap = (FScriptMap *)((longlong)local_118 + lVar20);
        pvVar17 = (void *)(lVar20 + (longlong)local_110);
        if (local_110 == (void *)0x0) {
          pvVar17 = (void *)0x0;
        }
        EVar31 = EVar30;
        if (((local_190 == 0) && (pvVar17 != (void *)0x0)) &&
           (cVar12 = (**(code **)(param_2->_padding_ + 0xb8))(param_2,FVar28.HeapMap,pvVar17),
           cVar12 != '\0')) {
          EVar31 = EVar30 | ForceIsDefaultValue;
        }
        pFVar6 = local_160;
        if (local_150 == (FProperty *)0x0) {
          if (local_168 == (FProperty *)0x0) {
            if (pFVar33 == (FProperty *)0x0) {
              if (local_148 == (FProperty *)0x0) {
                if (local_108 == (FProperty *)0x0) {
                  if ((local_100 == (FProperty *)0x0) || ((param_5 & SkipSubObjects) != None)) {
                    if (local_160 != (FProperty *)0x0) {
                      cVar12 = (**(code **)(*(longlong *)local_160[1]._padding_ + 0x1a8))();
                      lVar20 = *(longlong *)pFVar6[1]._padding_;
                      if (cVar12 == '\0') {
                        cVar12 = (**(code **)(lVar20 + 0x1a8))();
                        if ((cVar12 != '\0') &&
                           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                               ("!ValueProperty->HasIntrusiveUnsetOptionalState()",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\PropertyOptional.h"
                                                ,0xa0,L""), bVar11)) {
                          pcVar7 = (code *)swi(3);
                          (*pcVar7)();
                          return;
                        }
                        lVar20 = pFVar6[1]._padding_;
                        cVar12 = *(char *)((longlong)
                                           &((TRefCountPtr<ITextData> *)&(FVar28.HeapMap)->field_0x0
                                            )->Reference +
                                          (longlong)
                                          (*(int *)(lVar20 + 0x34) * *(int *)(lVar20 + 0x30)));
                      }
                      else {
                        cVar12 = (**(code **)(lVar20 + 0x1b8))();
                      }
                      pFVar6 = local_160;
                      FVar24.HeapMap = (FScriptMap *)0x0;
                      if (cVar12 != '\0') {
                        FVar24.HeapMap = FVar28.HeapMap;
                      }
                      if (FVar24.HeapMap != (FScriptMap *)0x0) {
                        if ((local_160[1]._padding_ == 0) &&
                           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                               ("ValueProperty",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\PropertyOptional.h"
                                                ,0x18,L"Expected ValueProperty to be initialized"),
                           bVar11)) {
                          pcVar7 = (code *)swi(3);
                          (*pcVar7)();
                          return;
                        }
                        pFVar6 = (FProperty *)pFVar6[1]._padding_;
                        ::FString::PrintfImpl(&local_f8,L"%s?");
                        GatherLocalizationDataFromChildTextProperties
                                  (this,&local_f8,pFVar6,FVar24.HeapMap,(void *)0x0,EVar31);
                        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
                        }
                      }
                    }
                  }
                  else {
                    if ((*(uint *)(local_100->_padding_ + 0x18) >> 0x10 & 1) == 0) {
                      pUVar19 = (UObject *)
                                (**(code **)(local_100->_padding_ + 0x1f8))
                                          (local_100,FVar28.HeapMap);
                    }
                    else {
                      pUVar19 = (UObject *)((FVar28.FreezableMap)->Pairs).Elements.Data._padding_;
                    }
                    if ((pUVar19 != (UObject *)0x0) &&
                       (uVar14 = ((uint)((ulonglong)pUVar19 >> 0x14) & 0xffff ^
                                 (uint)((ulonglong)pUVar19 >> 4)) * -0x7a143595,
                       uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb,
                       *(int *)&(this->AllObjectsInPackage).Elements.field_0x8 !=
                       *(int *)&(this->AllObjectsInPackage).Elements.field_0x34)) {
                      FVar5 = (this->AllObjectsInPackage).Hash.SecondaryData;
                      FVar22 = (ForElementType<FSetElementId>)&(this->AllObjectsInPackage).Hash;
                      if (FVar5 != (ForElementType<FSetElementId>)0x0) {
                        FVar22 = FVar5;
                      }
                      iVar29 = *(int *)((longlong)FVar22 +
                                       (ulonglong)
                                       ((this->AllObjectsInPackage).HashSize - 1U &
                                       (uVar14 >> 0x10 ^ uVar14)) * 4);
                      if (iVar29 != -1) {
                        lVar20 = *(longlong *)&(this->AllObjectsInPackage).Elements;
                        do {
                          if (*(UObject **)(lVar20 + (longlong)iVar29 * 0x10) == pUVar19) {
                            GatherLocalizationDataFromObjectWithCallbacks(this,pUVar19,EVar30);
                            break;
                          }
                          iVar29 = *(int *)(lVar20 + 8 + (longlong)iVar29 * 0x10);
                        } while (iVar29 != -1);
                      }
                    }
                  }
                }
                else if ((UScriptStruct *)local_108[1]._padding_ != (UScriptStruct *)0x0) {
                  GatherLocalizationDataFromStructWithCallbacks
                            (this,pFVar34,(UScriptStruct *)local_108[1]._padding_,FVar28.HeapMap,
                             pvVar17,EVar31);
                }
              }
              else {
                local_90.ElementProp = (FProperty *)local_148[1]._padding_;
                local_90.SetLayout._0_8_ = local_148[1]._padding_;
                local_90.SetLayout._8_8_ = local_148[1]._padding_;
                local_90.SetLayout.SparseArrayLayout.Size = (int)local_148[1]._padding_;
                local_90.Set = (TScriptSparseSet<FDefaultSetAllocator> *)FVar28.HeapMap;
                if ((local_90.ElementProp == (FProperty *)0x0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("ElementProp",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                        ,0x1653,L""), bVar11)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                local_208.Container = &local_90;
                local_208.InternalIndex = -1;
                local_208.LogicalIndex = -1;
                while( true ) {
                  TScriptContainerIterator<FScriptSetHelper>::Advance(&local_208);
                  pFVar10 = local_208.Container;
                  uVar14 = local_208.InternalIndex;
                  pTVar3 = (local_208.Container)->Set;
                  if ((local_208.InternalIndex < 0) ||
                     ((pTVar3->Elements).AllocationFlags.NumBits <= local_208.InternalIndex)) break;
                  if (((pTVar3->Elements).AllocationFlags.NumBits <= local_208.InternalIndex) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValidIndex(Index)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                          ,0x8c4,L""), bVar11)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  FVar4 = (pTVar3->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
                  FVar26 = (ForElementType<unsigned_int>)&(pTVar3->Elements).AllocationFlags;
                  if (FVar4 != (ForElementType<unsigned_int>)0x0) {
                    FVar26 = FVar4;
                  }
                  uVar27 = uVar14;
                  if ((int)uVar14 < 0) {
                    uVar27 = uVar14 + 0x1f;
                  }
                  if ((*(uint *)((longlong)FVar26 + (longlong)((int)uVar27 >> 5) * 4) >>
                       (uVar14 & 0x1f) & 1) == 0) break;
                  iVar23 = (pFVar34->Data).ArrayNum;
                  local_1b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_1b0.Data.ArrayNum = 0;
                  local_1b0.Data.ArrayMax = 0;
                  iVar29 = iVar23 + 9;
                  if (iVar23 == 0) {
                    iVar29 = 10;
                  }
                  ::FString::Reserve(&local_1b0,iVar29);
                  iVar23 = (pFVar34->Data).ArrayNum;
                  iVar29 = iVar23 + -1;
                  if (iVar23 == 0) {
                    iVar29 = 0;
                  }
                  ::FString::AppendChars
                            (&local_1b0,(wchar_t *)(pFVar34->Data).AllocatorInstance.Data,iVar29);
                  ::FString::AppendChar(&local_1b0,L'(');
                  ::FString::AppendInt(&local_1b0,local_208.LogicalIndex);
                  ::FString::AppendChar(&local_1b0,L')');
                  iVar29 = local_208.InternalIndex;
                  pTVar3 = pFVar10->Set;
                  if (((int)uVar14 < 0) ||
                     ((pTVar3->Elements).AllocationFlags.NumBits <= (int)uVar14)) {
LAB_141f31620:
                    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Iterator",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                        ,0x16bb,
                                        L"Invalid Iterator. Test Iterator before calling this method."
                                       );
                    if (bVar11) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                  }
                  else {
                    if (((pTVar3->Elements).AllocationFlags.NumBits <= (int)uVar14) &&
                       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                           ("IsValidIndex(Index)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                            ,0x8c4,L""), bVar11)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    FVar4 = (pTVar3->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
                    FVar26 = (ForElementType<unsigned_int>)&(pTVar3->Elements).AllocationFlags;
                    if (FVar4 != (ForElementType<unsigned_int>)0x0) {
                      FVar26 = FVar4;
                    }
                    uVar27 = uVar14 & 0x1f;
                    if ((int)uVar14 < 0) {
                      uVar14 = uVar14 + 0x1f;
                    }
                    if ((*(uint *)((longlong)FVar26 + (longlong)((int)uVar14 >> 5) * 4) >> uVar27 &
                        1) == 0) goto LAB_141f31620;
                  }
                  GatherLocalizationDataFromChildTextProperties
                            (local_1e8,&local_1b0,(FProperty *)local_148[1]._padding_,
                             &((ITextData *)
                              (((TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>
                                 *)&(local_90.Set)->Elements)->Elements).Data._padding_)->field_0x0
                             + iVar29 * local_90.SetLayout.SparseArrayLayout.Size,(void *)0x0,EVar31
                            );
                  if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
                  }
                }
              }
            }
            else {
              uVar16 = *(ulonglong *)(*(longlong *)(pFVar33[1]._padding_ + 8) + 0x18);
              if ((((uVar16 >> 0x1e & 1) == 0) && ((uVar16 >> 0x1a & 1) == 0)) &&
                 ((((uVar16 >> 0x14 & 1) == 0 ||
                   (pUVar2 = *(UStruct **)(pFVar33[1]._padding_ + 0x70), pUVar2 == (UStruct *)0x0))
                  || ((((pFVar18 = GetGatherableFieldsForType(this,pUVar2),
                        (pFVar18->Properties).ArrayNum == 0 && ((pFVar18->Functions).ArrayNum == 0))
                       && (pFVar18->CustomObjectCallback ==
                           (TFunction<void___cdecl(UObject_const_*,FPropertyLocalizationDataGatherer_&,EPropertyLocalizationGathererTextFlags)>
                            *)0x0)) &&
                      (pFVar18->CustomStructCallback ==
                       (TFunction<void___cdecl(FString_const_&,UScriptStruct_const_*,void_const_*,void_const_*,FPropertyLocalizationDataGatherer_&,EPropertyLocalizationGathererTextFlags)>
                        *)0x0)))))) {
                bVar11 = false;
              }
              else {
                bVar11 = true;
              }
              uVar16 = *(ulonglong *)(*(longlong *)(pFVar33[1]._padding_ + 8) + 0x18);
              if ((((uVar16 >> 0x1e & 1) == 0) && ((uVar16 >> 0x1a & 1) == 0)) &&
                 ((((uVar16 >> 0x14 & 1) == 0 ||
                   (pUVar2 = *(UStruct **)(pFVar33[1]._padding_ + 0x70), pUVar2 == (UStruct *)0x0))
                  || ((((pFVar18 = GetGatherableFieldsForType(this,pUVar2),
                        (pFVar18->Properties).ArrayNum == 0 && ((pFVar18->Functions).ArrayNum == 0))
                       && (pFVar18->CustomObjectCallback ==
                           (TFunction<void___cdecl(UObject_const_*,FPropertyLocalizationDataGatherer_&,EPropertyLocalizationGathererTextFlags)>
                            *)0x0)) &&
                      (pFVar18->CustomStructCallback ==
                       (TFunction<void___cdecl(FString_const_&,UScriptStruct_const_*,void_const_*,void_const_*,FPropertyLocalizationDataGatherer_&,EPropertyLocalizationGathererTextFlags)>
                        *)0x0)))))) {
                bVar8 = false;
              }
              else {
                bVar8 = true;
              }
              local_c8.KeyProp = (FProperty *)pFVar33[1]._padding_;
              local_c8.ValueProp = (FProperty *)pFVar33[1]._padding_;
              local_c8.MapLayout.SetLayout.SparseArrayLayout =
                   (FScriptSparseArrayLayout)pFVar33[1]._padding_;
              local_c8.MapFlags = (EMapPropertyFlags)pFVar33[1]._padding_;
              local_c8.MapLayout._0_8_ = pFVar33[1]._padding_;
              local_c8.MapLayout.SetLayout._4_8_ = pFVar33[1]._padding_;
              if (((local_c8.KeyProp == (FProperty *)0x0) ||
                  (local_c8.ValueProp == (FProperty *)0x0)) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InKeyProp && InValueProp",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                      ,0x1558,L""), bVar13)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              local_c8.field2_0x10.HeapMap = FVar28.HeapMap;
              if (((local_c8.KeyProp == (FProperty *)0x0) ||
                  (local_c8.ValueProp == (FProperty *)0x0)) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("KeyProp && ValueProp",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                      ,0x1564,L""), bVar13)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              iVar32 = 0;
              iVar23 = 0;
              iVar29 = ((local_c8.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum;
              if (0 < iVar29) {
                do {
                  local_17c = iVar23;
                  bVar13 = FScriptMapHelper::
                           WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                                     (&local_c8,(<lambda_1> *)&local_17c);
                  if (bVar13) break;
                  iVar23 = iVar23 + 1;
                } while (iVar23 < iVar29);
              }
              local_230 = iVar23;
              bVar13 = FScriptMapHelper::
                       WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                                 (&local_c8,(<lambda_1> *)&local_230);
              param_2 = (FProperty *)local_1f8._8_8_;
              if (bVar13) {
                do {
                  FVar28 = local_c8.field2_0x10;
                  if ((local_c8.MapFlags & UsesMemoryImageAllocator) == None) {
                    local_174 = iVar23;
                    bVar13 = FScriptMapHelper::
                             WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                                       (&local_c8,(<lambda_1> *)&local_174);
                    if ((!bVar13) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Iterator",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                            ,0x1303,
                                            L"Invalid Iterator. Test Iterator before calling this method."
                                           ), bVar13)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    pvVar17 = &((ITextData *)((FVar28.FreezableMap)->Pairs).Elements.Data._padding_)
                               ->field_0x0 +
                              local_c8.MapLayout.SetLayout.SparseArrayLayout.Size * iVar23;
                    this = local_1e8;
                  }
                  else {
                    local_178 = iVar23;
                    bVar13 = FScriptMapHelper::
                             WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                                       (&local_c8,(<lambda_1> *)&local_178);
                    if ((!bVar13) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Iterator",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                            ,0x1303,
                                            L"Invalid Iterator. Test Iterator before calling this method."
                                           ), bVar13)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    pIVar21 = (ITextData *)((FVar28.FreezableMap)->Pairs).Elements.Data._padding_;
                    if (((ulonglong)pIVar21 & 1) != 0) {
                      pIVar21 = (ITextData *)
                                ((longlong)
                                 &((TRefCountPtr<ITextData> *)&(FVar28.HeapMap)->field_0x0)->
                                  Reference + ((longlong)pIVar21 >> 0x18));
                    }
                    pvVar17 = &pIVar21->field_0x0 +
                              local_c8.MapLayout.SetLayout.SparseArrayLayout.Size * iVar23;
                  }
                  if (bVar11) {
                    local_1d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    local_1d0.Data.ArrayNum = 0;
                    local_1d0.Data.ArrayMax = 0;
                    iVar1 = (pFVar34->Data).ArrayNum;
                    iVar29 = iVar1 + 0x13;
                    if (iVar1 == 0) {
                      iVar29 = 0x14;
                    }
                    ::FString::Reserve(&local_1d0,iVar29);
                    iVar1 = (pFVar34->Data).ArrayNum;
                    iVar29 = iVar1 + -1;
                    if (iVar1 == 0) {
                      iVar29 = 0;
                    }
                    ::FString::AppendChars
                              (&local_1d0,(wchar_t *)(pFVar34->Data).AllocatorInstance.Data,iVar29);
                    ::FString::AppendChar(&local_1d0,L'(');
                    ::FString::AppendInt(&local_1d0,iVar32);
                    ::FString::AppendChars(&local_1d0,L" - Key)",7);
                    GatherLocalizationDataFromChildTextProperties
                              (this,&local_1d0,(FProperty *)pFVar33[1]._padding_,pvVar17,(void *)0x0
                               ,EVar31);
                    if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
                    }
                  }
                  if (bVar8) {
                    local_1c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    local_1c0.Data.ArrayNum = 0;
                    local_1c0.Data.ArrayMax = 0;
                    iVar1 = (pFVar34->Data).ArrayNum;
                    iVar29 = iVar1 + 0x13;
                    if (iVar1 == 0) {
                      iVar29 = 0x14;
                    }
                    ::FString::Reserve(&local_1c0,iVar29);
                    iVar1 = (pFVar34->Data).ArrayNum;
                    iVar29 = iVar1 + -1;
                    if (iVar1 == 0) {
                      iVar29 = 0;
                    }
                    ::FString::AppendChars
                              (&local_1c0,(wchar_t *)(pFVar34->Data).AllocatorInstance.Data,iVar29);
                    ::FString::AppendChar(&local_1c0,L'(');
                    ::FString::AppendInt(&local_1c0,iVar32);
                    ::FString::AppendChars(&local_1c0,L" - Value)",9);
                    GatherLocalizationDataFromChildTextProperties
                              (this,&local_1c0,(FProperty *)pFVar33[1]._padding_,
                               (void *)((longlong)(int)pFVar33[1]._padding_ + (longlong)pvVar17),
                               (void *)0x0,EVar31);
                    if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
                    }
                  }
                  iVar29 = ((local_c8.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum;
                  do {
                    iVar23 = iVar23 + 1;
                    if (iVar29 <= iVar23) break;
                    local_170 = iVar23;
                    bVar13 = FScriptMapHelper::
                             WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                                       (&local_c8,(<lambda_1> *)&local_170);
                  } while (!bVar13);
                  iVar32 = iVar32 + 1;
                  local_230 = iVar23;
                  bVar13 = FScriptMapHelper::
                           WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                                     (&local_c8,(<lambda_1> *)&local_230);
                  param_2 = (FProperty *)local_1f8._8_8_;
                } while (bVar13);
              }
            }
          }
          else {
            lVar9 = local_168[1]._padding_;
            (**(code **)(*(longlong *)local_168[1]._padding_ + 0x168))();
            lVar20 = local_168[1]._padding_;
            iVar29 = *(int *)(lVar20 + 0x34);
            if ((iVar29 < 1) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ElementSize > 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                    ,0x1177,L""), bVar11)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            if ((lVar20 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InnerProperty",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                    ,0x1178,L""), bVar11)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar23 = ((FVar28.FreezableMap)->Pairs).Elements.Data.ArrayNum;
            uVar16 = 0;
            param_2 = (FProperty *)local_1f8._8_8_;
            if (0 < iVar23) {
              uVar25 = uVar16;
              do {
                local_1e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_1e0.Data.ArrayNum = 0;
                local_1e0.Data.ArrayMax = 0;
                iVar1 = (pFVar34->Data).ArrayNum;
                iVar32 = iVar1 + 9;
                if (iVar1 == 0) {
                  iVar32 = 10;
                }
                ::FString::Reserve(&local_1e0,iVar32);
                iVar1 = (pFVar34->Data).ArrayNum;
                iVar32 = iVar1 + -1;
                if (iVar1 == 0) {
                  iVar32 = 0;
                }
                ::FString::AppendChars
                          (&local_1e0,(wchar_t *)(pFVar34->Data).AllocatorInstance.Data,iVar32);
                ::FString::AppendChar(&local_1e0,L'(');
                ::FString::AppendInt(&local_1e0,(int)uVar16);
                ::FString::AppendChar(&local_1e0,L')');
                if (((FVar28.FreezableMap)->Pairs).Elements.Data.ArrayNum == 0) {
                  pvVar17 = (void *)0x0;
                }
                else {
                  pIVar21 = (ITextData *)((FVar28.FreezableMap)->Pairs).Elements.Data._padding_;
                  if (((lVar9 & 1) != 0) && (((ulonglong)pIVar21 & 1) != 0)) {
                    pIVar21 = (ITextData *)
                              ((longlong)
                               &((TRefCountPtr<ITextData> *)&(FVar28.HeapMap)->field_0x0)->Reference
                              + ((longlong)pIVar21 >> 0x18));
                  }
                  pvVar17 = &pIVar21->field_0x0 + (longlong)iVar29 * uVar25;
                }
                GatherLocalizationDataFromChildTextProperties
                          (local_1e8,&local_1e0,(FProperty *)local_168[1]._padding_,pvVar17,
                           (void *)0x0,EVar31);
                if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
                }
                uVar14 = (int)uVar16 + 1;
                uVar16 = (ulonglong)uVar14;
                uVar25 = uVar25 + 1;
                param_2 = (FProperty *)local_1f8._8_8_;
              } while ((int)uVar14 < iVar23);
            }
          }
        }
        else if ((EVar31 & ForceIsDefaultValue) == None) {
          if ((param_5 & SkipProperties) == None) {
            this_00 = FField::GetOutermost((FField *)local_150);
            uVar14 = FTextInspector::GetFlags((FText *)FVar28.HeapMap);
            if ((uVar14 & 4) != 0) {
              UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this_00);
            }
            if (((param_5 & ForceEditorOnlyProperties) == None) &&
               ((local_150->PropertyFlags & CPF_EditorOnly) == CPF_None)) {
              GatherTextInstance(this,(FText *)FVar28.HeapMap,pFVar34,false);
            }
            else {
              GatherTextInstance(this,(FText *)FVar28.HeapMap,pFVar34,true);
            }
          }
        }
        else {
          local_228.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_130.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_228.Data.ArrayNum = 0;
          local_228.Data.ArrayMax = 0;
          local_130.Data.ArrayNum = 0;
          local_130.Data.ArrayMax = 0;
          FTextInspector::GetTextId((FText *)local_1f8);
          if (((local_1f8._0_4_ != -1) || (local_1f8._4_4_ != -1)) &&
             (bVar11 = FText::ShouldGatherForLocalization((FText *)FVar28.HeapMap), bVar11)) {
            local_18c.Index = local_1f8._0_4_;
            FTextKey::ToString(&local_18c,&local_228);
            local_188.Index = local_1f8._4_4_;
            FTextKey::ToString(&local_188,&local_130);
            pFVar15 = TextNamespaceUtil::StripPackageNamespace(local_e8,&local_228);
            if (&local_228 != pFVar15) {
              if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_228.Data.AllocatorInstance.Data);
              }
              local_228.Data.AllocatorInstance.Data = (pFVar15->Data).AllocatorInstance.Data;
              (pFVar15->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_228.Data.ArrayNum = (pFVar15->Data).ArrayNum;
              local_228.Data.ArrayMax = (pFVar15->Data).ArrayMax;
              (pFVar15->Data).ArrayNum = 0;
              (pFVar15->Data).ArrayMax = 0;
            }
            if (local_e8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e8[0].Data.AllocatorInstance.Data);
            }
            FTextKey::FTextKey(&local_180,&local_130);
            FTextKey::FTextKey(&local_184,&local_228);
            local_158 = local_184.Index;
            local_154 = local_180.Index;
            TSet<FTextId,DefaultKeyFuncs<FTextId,0>,FDefaultSetAllocator>::Emplace<FTextId>
                      (&this->DefaultTextInstances,&local_120,(bool *)&local_158);
          }
          if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_130.Data.AllocatorInstance.Data);
          }
          if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_228.Data.AllocatorInstance.Data);
          }
        }
        if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
        }
        local_22c = local_22c + 1;
        this = local_1e8;
      } while (local_22c < param_2->ArrayDim);
    }
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// GatherLocalizationDataFromObject @ 141f318e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FPropertyLocalizationDataGatherer::GatherLocalizationDataFromObject
          (FPropertyLocalizationDataGatherer *this,UObject *param_1,
          EPropertyLocalizationGathererTextFlags param_2)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  UObjectBase *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  UClass *pUVar7;
  UScriptStruct *pUVar8;
  void *pvVar9;
  void *pvVar10;
  FObjectAndGatherFlags *pFVar11;
  UPackage *pUVar12;
  ulonglong uVar13;
  ForElementType<FSetElementId> FVar14;
  ForAnyElementType FVar15;
  undefined1 local_res8 [8];
  FObjectAndGatherFlags local_res10;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_a8;
  FString local_98;
  code *local_88;
  EPropertyLocalizationGathererTextFlags *local_80;
  FString local_78;
  FString local_68;
  FString local_58;
  FObjectAndGatherFlags local_48;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->AllObjectsInPackage).Elements.field_0x8 !=
      *(int *)&(this->AllObjectsInPackage).Elements.field_0x34) {
    FVar14 = (this->AllObjectsInPackage).Hash.SecondaryData;
    if (FVar14 == (ForElementType<FSetElementId>)0x0) {
      FVar14 = (ForElementType<FSetElementId>)&(this->AllObjectsInPackage).Hash;
    }
    iVar6 = *(int *)((longlong)FVar14 +
                    (ulonglong)((this->AllObjectsInPackage).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5))
                    * 4);
    if (iVar6 != -1) {
      lVar2 = *(longlong *)&(this->AllObjectsInPackage).Elements;
      do {
        if (*(UObject **)(lVar2 + (longlong)iVar6 * 0x10) == param_1) goto LAB_141f31a2a;
        iVar6 = *(int *)(lVar2 + 8 + (longlong)iVar6 * 0x10);
      } while (iVar6 != -1);
    }
  }
  UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_58,(UObject *)0x0,None);
  UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this->Package,&local_68,(UObject *)0x0,None)
  ;
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsObjectValidForGather(Object)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\PropertyLocalizationDataGathering.cpp"
                     ,0xe0,
                     L"Cannot gather for objects outside of the current package! Package: \'%s\'. Object: \'%s\'."
                    );
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_141f31a2a:
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_98,(UObject *)0x0);
  GatherLocalizationDataFromObjectFields(this,&local_98,param_1,param_2);
  if (param_1 != (UObject *)0x0) {
    pUVar7 = Z_Construct_UClass_UClass_NoRegister();
    iVar6 = (int)pUVar7->_padding_;
    if ((iVar6 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar6 * 8) ==
        &pUVar7->_padding_)) {
      local_80 = &local_res10.GatherTextFlags;
      local_88 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FPropertyLocalizationDataGatherer::GatherLocalizationDataFromObject'::__l14::<lambda_1>_const_,bool,FProperty_*>
                 ::Call;
      bVar4 = UE::Reflection::DoesSparseClassDataOverrideArchetype
                        ((UClass *)param_1,(TFunctionRef<bool___cdecl(FProperty_*)> *)&local_88);
      if (bVar4) {
        pUVar8 = UClass::GetSparseClassDataStruct((UClass *)param_1);
        pvVar9 = UClass::GetSparseClassData((UClass *)param_1,CreateIfNull);
        pvVar10 = UClass::GetArchetypeForSparseClassData((UClass *)param_1,ArchetypeIfNull);
        ::FString::ConcatFC(&local_78,&local_98,L".SparseClassData");
        GatherLocalizationDataFromStructWithCallbacks(this,&local_78,pUVar8,pvVar9,pvVar10,param_2);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  if ((param_2 & ForceHasScript) != None) {
    *this->ResultFlags = *this->ResultFlags | HasScript;
  }
  if (param_1 != (UObject *)0x0) {
    pUVar7 = Z_Construct_UClass_UStruct_NoRegister();
    iVar6 = (int)pUVar7->_padding_;
    if (((iVar6 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
        ((longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar6 * 8) ==
         &pUVar7->_padding_)) && (0 < *(int *)&param_1[2].field_0x18)) {
      pFVar11 = FObjectAndGatherFlags::FObjectAndGatherFlags(&local_48,param_1,param_2);
      TSet<FPropertyLocalizationDataGatherer::FObjectAndGatherFlags,DefaultKeyFuncs<FPropertyLocalizationDataGatherer::FObjectAndGatherFlags,0>,FDefaultSetAllocator>
      ::Emplace<FPropertyLocalizationDataGatherer::FObjectAndGatherFlags>
                (&this->BytecodePendingGather,&local_res10,(bool *)pFVar11);
    }
  }
  if ((param_2 & SkipSubObjects) == None) {
    local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.ArrayNum = 0;
    local_a8.ArrayMax = 0;
    GetObjectsWithOuter((UObjectBase *)param_1,&local_a8,false,RF_Transient,Garbage);
    iVar6 = local_a8.ArrayNum;
    uVar13 = (ulonglong)local_a8.ArrayNum;
    pFVar1 = local_a8.AllocatorInstance.Data + uVar13 * 8;
    FVar15.Data = local_a8.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar13 != iVar6) {
        `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (FVar15.Data == pFVar1) break;
      this_00 = *(UObjectBase **)FVar15.Data;
      pUVar12 = UObjectBase::GetExternalPackage(this_00);
      if (pUVar12 == (UPackage *)0x0) {
        GatherLocalizationDataFromObjectWithCallbacks(this,(UObject *)this_00,param_2);
      }
      uVar13 = local_a8._8_8_ & 0xffffffff;
      FVar15.Data = FVar15.Data + 8;
    }
    if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.AllocatorInstance.Data);
    }
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return;
}

// GatherLocalizationDataFromObjectFields @ 141f31c70

void __thiscall
FPropertyLocalizationDataGatherer::GatherLocalizationDataFromObjectFields
          (FPropertyLocalizationDataGatherer *this,FString *param_1,UObject *param_2,
          EPropertyLocalizationGathererTextFlags param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FProperty *this_00;
  UObject *pUVar3;
  bool bVar4;
  UObject *pUVar5;
  FGatherableFieldsForType *pFVar6;
  ulonglong uVar7;
  UClass *pUVar8;
  void *pvVar9;
  void *pvVar10;
  FObjectAndGatherFlags *pFVar11;
  FScriptContainerElement *pFVar12;
  UObject *pUVar13;
  undefined1 local_res18 [16];
  undefined1 local_58 [8];
  FObjectAndGatherFlags local_50;
  
  pUVar5 = UObject::GetArchetype(param_2);
  pFVar6 = GetGatherableFieldsForType(this,*(UStruct **)&param_2->field_0x10);
  pUVar13 = (UObject *)(pFVar6->Properties).AllocatorInstance.Data;
  local_58._0_4_ = (pFVar6->Properties).ArrayNum;
  uVar7 = (ulonglong)(int)local_58._0_4_;
  local_50.Object = (UObject *)((longlong)&pUVar13->field_0x0 + uVar7 * 8);
  do {
    pUVar3 = local_50.Object;
    if ((pFVar6->Properties).ArrayNum != (int)uVar7) {
      `TCheckedPointerIterator<FProperty_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pUVar13 == pUVar3) {
      pFVar12 = (pFVar6->Functions).AllocatorInstance.Data;
      iVar2 = (pFVar6->Functions).ArrayNum;
      pFVar1 = pFVar12 + (longlong)iVar2 * 8;
      while( true ) {
        if ((pFVar6->Functions).ArrayNum != iVar2) {
          `TCheckedPointerIterator<UFunction_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res18);
        }
        if (pFVar12 == pFVar1) break;
        pUVar13 = *(UObject **)pFVar12;
        bVar4 = ShouldProcessObject(this,pUVar13,param_3);
        if (bVar4) {
          pFVar11 = FObjectAndGatherFlags::FObjectAndGatherFlags(&local_50,pUVar13,param_3);
          TSet<FPropertyLocalizationDataGatherer::FObjectAndGatherFlags,DefaultKeyFuncs<FPropertyLocalizationDataGatherer::FObjectAndGatherFlags,0>,FDefaultSetAllocator>
          ::Emplace<FPropertyLocalizationDataGatherer::FObjectAndGatherFlags>
                    (&this->ProcessedObjects,(FObjectAndGatherFlags *)local_58,(bool *)pFVar11);
          GatherLocalizationDataFromObject(this,pUVar13,param_3);
        }
        pFVar12 = pFVar12 + 8;
      }
      return;
    }
    this_00 = *(FProperty **)pUVar13;
    pUVar8 = Z_Construct_UClass_UClass_NoRegister();
    bVar4 = FFieldVariant::IsA((FFieldVariant *)&this_00->_padding_,pUVar8);
    if (bVar4) {
      uVar7 = this_00->_padding_ & 0xfffffffffffffffe;
    }
    else {
      uVar7 = 0;
    }
    if ((*(int *)(uVar7 + 0x38) <= *(int *)(*(longlong *)&param_2->field_0x10 + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) +
         (longlong)*(int *)(uVar7 + 0x38) * 8) == uVar7 + 0x30)) {
      pvVar9 = FProperty::ContainerUObjectPtrToValuePtrInternal(this_00,param_2,0);
      if (pUVar5 == (UObject *)0x0) {
LAB_141f31d73:
        pvVar10 = (void *)0x0;
      }
      else {
        pUVar8 = FField::GetOwnerClass((FField *)this_00);
        iVar2 = (int)pUVar8->_padding_;
        if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar2) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
            &pUVar8->_padding_)) goto LAB_141f31d73;
        pvVar10 = FProperty::ContainerUObjectPtrToValuePtrInternal(this_00,pUVar5,0);
      }
      GatherLocalizationDataFromChildTextProperties
                (this,param_1,this_00,pvVar9,pvVar10,
                 -((this_00->PropertyFlags >> 0x23 & 1) != 0) & ForceEditorOnly | param_3);
    }
    uVar7 = (ulonglong)(uint)local_58._0_4_;
    pUVar13 = (UObject *)&pUVar13->field_0x8;
  } while( true );
}

// GatherLocalizationDataFromObjectWithCallbacks @ 141f31e50

void __thiscall
FPropertyLocalizationDataGatherer::GatherLocalizationDataFromObjectWithCallbacks
          (FPropertyLocalizationDataGatherer *this,UObject *param_1,
          EPropertyLocalizationGathererTextFlags param_2)

{
  longlong lVar1;
  TFunction<void___cdecl(UObject_const_*,FPropertyLocalizationDataGatherer_&,EPropertyLocalizationGathererTextFlags)>
  *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UPackage *pUVar6;
  FGatherableFieldsForType *pFVar7;
  FObjectAndGatherFlags *pFVar8;
  undefined8 uVar9;
  longlong *plVar10;
  uint uVar11;
  ForElementType<FSetElementId> FVar12;
  FObjectAndGatherFlags local_res10;
  UObject *local_78;
  FString local_70;
  FString local_60;
  FObjectAndGatherFlags local_50;
  FObjectAndGatherFlags local_40;
  
  pUVar6 = UObjectBaseUtility::GetPackage(*(UObjectBaseUtility **)&param_1->field_0x10);
  if ((((uint)pUVar6->PackageFlagsPrivate & 0x40) != 0) ||
     ((*(byte *)(*(longlong *)&param_1->field_0x10 + 0xd4) & 0x10) != 0)) {
    param_2 = param_2 | ForceEditorOnlyProperties;
  }
  pFVar7 = GetGatherableFieldsForType(this,*(UStruct **)&param_1->field_0x10);
  if (pFVar7->CustomObjectCallback ==
      (TFunction<void___cdecl(UObject_const_*,FPropertyLocalizationDataGatherer_&,EPropertyLocalizationGathererTextFlags)>
       *)0x0) {
    bVar4 = ShouldProcessObject(this,param_1,param_2);
    if (bVar4) {
      pFVar8 = FObjectAndGatherFlags::FObjectAndGatherFlags(&local_40,param_1,param_2);
      TSet<FPropertyLocalizationDataGatherer::FObjectAndGatherFlags,DefaultKeyFuncs<FPropertyLocalizationDataGatherer::FObjectAndGatherFlags,0>,FDefaultSetAllocator>
      ::Emplace<FPropertyLocalizationDataGatherer::FObjectAndGatherFlags>
                (&this->ProcessedObjects,(FObjectAndGatherFlags *)&stack0x00000020,(bool *)pFVar8);
      GatherLocalizationDataFromObject(this,param_1,param_2);
      return;
    }
  }
  else {
    uVar11 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
             -0x7a143595;
    uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
    if (*(int *)&(this->AllObjectsInPackage).Elements.field_0x8 !=
        *(int *)&(this->AllObjectsInPackage).Elements.field_0x34) {
      FVar12 = (this->AllObjectsInPackage).Hash.SecondaryData;
      if (FVar12 == (ForElementType<FSetElementId>)0x0) {
        FVar12 = (ForElementType<FSetElementId>)&(this->AllObjectsInPackage).Hash;
      }
      iVar5 = *(int *)((longlong)FVar12 +
                      (ulonglong)
                      ((this->AllObjectsInPackage).HashSize - 1U & (uVar11 >> 0x10 ^ uVar11)) * 4);
      if (iVar5 != -1) {
        lVar1 = *(longlong *)&(this->AllObjectsInPackage).Elements;
        do {
          if (*(UObject **)(lVar1 + (longlong)iVar5 * 0x10) == param_1) goto LAB_141f31fde;
          iVar5 = *(int *)(lVar1 + 8 + (longlong)iVar5 * 0x10);
        } while (iVar5 != -1);
      }
    }
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_60,(UObject *)0x0,None);
    UObjectBaseUtility::GetFullName
              ((UObjectBaseUtility *)this->Package,&local_70,(UObject *)0x0,None);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsObjectValidForGather(Object)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\PropertyLocalizationDataGathering.cpp"
                       ,0xcf,
                       L"Cannot gather for objects outside of the current package! Package: \'%s\'. Object: \'%s\'."
                      );
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
LAB_141f31fde:
    bVar4 = ShouldProcessObject(this,param_1,param_2);
    if (bVar4) {
      pFVar8 = FObjectAndGatherFlags::FObjectAndGatherFlags(&local_50,param_1,param_2);
      TSet<FPropertyLocalizationDataGatherer::FObjectAndGatherFlags,DefaultKeyFuncs<FPropertyLocalizationDataGatherer::FObjectAndGatherFlags,0>,FDefaultSetAllocator>
      ::Emplace<FPropertyLocalizationDataGatherer::FObjectAndGatherFlags>
                (&this->ProcessedObjects,&local_res10,(bool *)pFVar8);
      pTVar2 = pFVar7->CustomObjectCallback;
      local_res10.GatherTextFlags = param_2;
      local_78 = param_1;
      UE::Core::Private::Function::CheckCallable(*(void **)pTVar2);
      pcVar3 = *(code **)pTVar2;
      plVar10 = (longlong *)&pTVar2->field_0x10;
      if (*(longlong **)&pTVar2->field_0x28 != (longlong *)0x0) {
        plVar10 = *(longlong **)&pTVar2->field_0x28;
      }
      uVar9 = (**(code **)(*plVar10 + 8))();
      (*pcVar3)(uVar9,&local_78,this,&local_res10.GatherTextFlags);
    }
  }
  return;
}

// GatherLocalizationDataFromStruct @ 141f320e0

void __thiscall
FPropertyLocalizationDataGatherer::GatherLocalizationDataFromStruct
          (FPropertyLocalizationDataGatherer *this,FString *param_1,UScriptStruct *param_2,
          void *param_3,void *param_4,EPropertyLocalizationGathererTextFlags param_5)

{
  GatherLocalizationDataFromStructFields(this,param_1,(UStruct *)param_2,param_3,param_4,param_5);
  return;
}

// GatherLocalizationDataFromStructFields @ 141f32100

void __thiscall
FPropertyLocalizationDataGatherer::GatherLocalizationDataFromStructFields
          (FPropertyLocalizationDataGatherer *this,FString *param_1,UStruct *param_2,void *param_3,
          void *param_4,EPropertyLocalizationGathererTextFlags param_5)

{
  int iVar1;
  FProperty *pFVar2;
  UObject *pUVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  FGatherableFieldsForType *pFVar7;
  ulonglong uVar8;
  FObjectAndGatherFlags *pFVar9;
  void *pvVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_58;
  undefined1 local_57 [3];
  uint local_54;
  undefined1 local_50 [16];
  FObjectAndGatherFlags local_40;
  
  pFVar7 = GetGatherableFieldsForType(this,param_2);
  pFVar12 = (pFVar7->Properties).AllocatorInstance.Data;
  local_54 = (pFVar7->Properties).ArrayNum;
  uVar8 = (ulonglong)(int)local_54;
  local_50._8_8_ = pFVar12 + uVar8 * 8;
  while( true ) {
    uVar5 = local_50._8_8_;
    if ((pFVar7->Properties).ArrayNum != (int)uVar8) {
      local_58 = 0;
      `TCheckedPointerIterator<FProperty_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_58);
    }
    if (pFVar12 == (FScriptContainerElement *)uVar5) break;
    pFVar2 = *(FProperty **)pFVar12;
    if (pFVar2->ArrayDim < 1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (param_3 == (void *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar1 = pFVar2->Offset_Internal;
    if (param_4 == (void *)0x0) {
      pvVar10 = (void *)0x0;
    }
    else {
      if (pFVar2->ArrayDim < 1) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pvVar10 = (void *)((longlong)pFVar2->Offset_Internal + (longlong)param_4);
    }
    GatherLocalizationDataFromChildTextProperties
              (this,param_1,pFVar2,(void *)((longlong)iVar1 + (longlong)param_3),pvVar10,
               -((pFVar2->PropertyFlags & CPF_EditorOnly) != CPF_None) & ForceEditorOnly | param_5);
    uVar8 = (ulonglong)local_54;
    pFVar12 = pFVar12 + 8;
  }
  pFVar11 = (pFVar7->Functions).AllocatorInstance.Data;
  iVar1 = (pFVar7->Functions).ArrayNum;
  pFVar12 = pFVar11 + (longlong)iVar1 * 8;
  while( true ) {
    if ((pFVar7->Functions).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UFunction_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_57);
    }
    if (pFVar11 == pFVar12) break;
    pUVar3 = *(UObject **)pFVar11;
    bVar6 = ShouldProcessObject(this,pUVar3,param_5);
    if (bVar6) {
      pFVar9 = FObjectAndGatherFlags::FObjectAndGatherFlags(&local_40,pUVar3,param_5);
      TSet<FPropertyLocalizationDataGatherer::FObjectAndGatherFlags,DefaultKeyFuncs<FPropertyLocalizationDataGatherer::FObjectAndGatherFlags,0>,FDefaultSetAllocator>
      ::Emplace<FPropertyLocalizationDataGatherer::FObjectAndGatherFlags>
                (&this->ProcessedObjects,(FObjectAndGatherFlags *)local_50,(bool *)pFVar9);
      GatherLocalizationDataFromObject(this,pUVar3,param_5);
    }
    pFVar11 = pFVar11 + 8;
  }
  return;
}

// GatherLocalizationDataFromStructWithCallbacks @ 141f32330

void __thiscall
FPropertyLocalizationDataGatherer::GatherLocalizationDataFromStructWithCallbacks
          (FPropertyLocalizationDataGatherer *this,FString *param_1,UScriptStruct *param_2,
          void *param_3,void *param_4,EPropertyLocalizationGathererTextFlags param_5)

{
  TFunction<void___cdecl(FString_const_&,UScriptStruct_const_*,void_const_*,void_const_*,FPropertyLocalizationDataGatherer_&,EPropertyLocalizationGathererTextFlags)>
  *pTVar1;
  code *pcVar2;
  FGatherableFieldsForType *pFVar3;
  undefined8 uVar4;
  longlong *plVar5;
  EPropertyLocalizationGathererTextFlags local_28 [8];
  void *local_20;
  void *local_18;
  UScriptStruct *local_10;
  
  pFVar3 = GetGatherableFieldsForType(this,(UStruct *)param_2);
  pTVar1 = pFVar3->CustomStructCallback;
  if (pTVar1 == (TFunction<void___cdecl(FString_const_&,UScriptStruct_const_*,void_const_*,void_const_*,FPropertyLocalizationDataGatherer_&,EPropertyLocalizationGathererTextFlags)>
                 *)0x0) {
    GatherLocalizationDataFromStructFields(this,param_1,(UStruct *)param_2,param_3,param_4,param_5);
  }
  else {
    local_28[0] = param_5;
    local_20 = param_4;
    local_18 = param_3;
    local_10 = param_2;
    UE::Core::Private::Function::CheckCallable(*(void **)pTVar1);
    pcVar2 = *(code **)pTVar1;
    plVar5 = (longlong *)&pTVar1->field_0x10;
    if (*(longlong **)&pTVar1->field_0x28 != (longlong *)0x0) {
      plVar5 = *(longlong **)&pTVar1->field_0x28;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar2)(uVar4,param_1,&local_10,&local_18,&local_20,this,local_28);
  }
  return;
}

// GatherScriptBytecode @ 141f32420

void __thiscall
FPropertyLocalizationDataGatherer::GatherScriptBytecode
          (FPropertyLocalizationDataGatherer *this,FString *param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  int iVar1;
  int local_res18 [4];
  undefined1 local_d8 [32];
  FArchiveState local_b8;
  bool local_28;
  ForAnyElementType local_20;
  undefined8 local_18;
  
  if (0 < param_2->ArrayNum) {
    *this->ResultFlags = *this->ResultFlags | HasScript;
    if ((param_1->Data).ArrayNum == 0) {
      local_d8._0_8_ = L"";
    }
    else {
      local_d8._0_8_ = (param_1->Data).AllocatorInstance.Data;
    }
    local_d8._8_8_ = param_2;
    local_d8._16_8_ = this;
    local_d8[0x18] = param_3;
    FArchiveState::FArchiveState(&local_b8);
    local_28 = false;
    local_20.Data = (FScriptContainerElement *)0x0;
    local_b8._padding_ = (longlong)&___7FNullArchive__6B_;
    local_18._0_4_ = 0;
    local_18._4_4_ = 0;
    iVar1 = *(int *)(local_d8._8_8_ + 8);
    local_res18[0] = 0;
    if (0 < iVar1) {
      do {
        FGatherTextFromScriptBytecode::SerializeExpr
                  ((FGatherTextFromScriptBytecode *)local_d8,local_res18,(FArchive *)&local_b8);
      } while (local_res18[0] < iVar1);
    }
    if (local_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data);
    }
    FArchive::~FArchive((FArchive *)&local_b8);
  }
  return;
}

// GatherTextInstance @ 141f32510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FPropertyLocalizationDataGatherer::GatherTextInstance
          (FPropertyLocalizationDataGatherer *this,FText *param_1,FString *param_2,bool param_3)

{
  TRefCountPtr<ITextData> TVar1;
  uint uVar2;
  bool bVar3;
  FString *pFVar4;
  FText *pFVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  undefined1 auStackY_118 [32];
  FTextKey local_e8 [2];
  FText local_e0;
  FString local_d0;
  FString local_c0;
  FPropertyLocalizationDataGatherer *local_b0;
  FString *local_a8;
  FString local_a0;
  undefined1 local_88 [16];
  undefined1 local_78 [24];
  undefined8 uStack_60;
  void *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  void *local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_118;
  pFVar6 = (FScriptContainerElement *)0x0;
  local_e8[0].Index = 0;
  local_b0 = this;
  local_a8 = param_2;
  bVar3 = FText::IsInitializedFromString(param_1);
  if (bVar3) {
    *this->ResultFlags = *this->ResultFlags | HasTextInitializedFromString;
  }
  else {
    local_c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c0.Data.ArrayNum = 0;
    local_c0.Data.ArrayMax = 0;
    local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d0.Data.ArrayNum = 0;
    local_d0.Data.ArrayMax = 0;
    FTextInspector::GetTextId(&local_e0);
    if (((int)local_e0.TextData.Reference != -1) || (local_e0.TextData.Reference._4_4_ != -1)) {
      bVar3 = FText::ShouldGatherForLocalization(param_1);
      if (bVar3) {
        local_e8[0].Index = (int)local_e0.TextData.Reference;
        FTextKey::ToString(local_e8,&local_c0);
        local_e8[0].Index = local_e0.TextData.Reference._4_4_;
        FTextKey::ToString(local_e8,&local_d0);
        *this->ResultFlags = *this->ResultFlags | HasText;
        local_58 = (void *)0x0;
        local_78._0_8_ = (FScriptContainerElement *)0x0;
        uStack_40 = 0;
        local_78._8_8_ = 0;
        uStack_50 = 0x8000000000;
        local_48 = 0xffffffff;
        local_38 = (void *)0x0;
        uStack_30 = 0;
        local_88._0_8_ = (FScriptContainerElement *)0x0;
        local_88._8_4_ = 0;
        local_88._12_4_ = 0;
        local_78._16_8_ = 0;
        uStack_60 = 0;
        pFVar4 = FTextInspector::GetSourceString(param_1);
        bVar3 = pFVar4 == (FString *)0x0;
        if (bVar3) {
          local_e0.TextData.Reference = (ITextData *)0x0;
          local_e0.Flags = 0;
          local_e0._12_4_ = 0;
          pFVar5 = &local_e0;
        }
        else {
          pFVar5 = (FText *)::FString::FString((FString *)&local_e0,pFVar4);
          pFVar6 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar5->TextData)->
                   AllocatorInstance).Data;
        }
        TVar1.Reference = local_e0.TextData.Reference;
        iVar7 = pFVar5->Flags - 1;
        if (pFVar5->Flags == 0) {
          iVar7 = 0;
        }
        ::FString::AssignRange((FString *)local_88,(wchar_t *)pFVar6,iVar7);
        if ((bVar3) && (TVar1.Reference != (ITextData *)0x0)) {
          FMemory::Free(TVar1.Reference);
        }
        if ((!bVar3) && (local_e0.TextData.Reference != (ITextData *)0x0)) {
          FMemory::Free(local_e0.TextData.Reference);
        }
        TextNamespaceUtil::StripPackageNamespace(&local_a0,&local_c0);
        `FPropertyLocalizationDataGatherer::GatherTextInstance'::__l2::<lambda_1>::operator()
                  (&local_b0,&local_a0,&local_d0,(FTextSourceData *)local_88,param_3);
        if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data.AllocatorInstance.Data);
        }
        uStack_30 = uStack_30 & 0xffffffff00000000;
        if (local_38 != (void *)0x0) {
          FMemory::Free(local_38);
        }
        TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_78,0,local_78._8_4_);
        iVar7 = SUB84(local_78._8_8_,4);
        local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
        if (iVar7 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
        }
        uVar2 = uStack_50._4_4_;
        local_48 = 0xffffffff;
        uStack_50 = (ulonglong)uStack_50._4_4_ << 0x20;
        if (0x80 < uVar2) {
          uStack_50 = 0x8000000000;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
        }
        if (local_58 != (void *)0x0) {
          FMemory::Free(local_58);
        }
        if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_78._0_8_);
        }
        if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_88._0_8_);
        }
      }
    }
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// GetGatherableFieldsForType @ 141f34b10

FGatherableFieldsForType * __thiscall
FPropertyLocalizationDataGatherer::GetGatherableFieldsForType
          (FPropertyLocalizationDataGatherer *this,UStruct *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FGatherableFieldsForType *pFVar5;
  undefined1 *puVar6;
  longlong *plVar7;
  uint uVar8;
  
  uVar8 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  if (*(int *)&(this->GatherableFieldsForTypes).field_0x8 !=
      *(int *)&(this->GatherableFieldsForTypes).field_0x34) {
    puVar6 = *(undefined1 **)&(this->GatherableFieldsForTypes).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->GatherableFieldsForTypes).field_0x38;
    }
    iVar4 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->GatherableFieldsForTypes).field_0x48 - 1U &
                              (uVar8 >> 0x10 ^ uVar8)) * 4);
    if (iVar4 != -1) {
      do {
        lVar1 = *(longlong *)&this->GatherableFieldsForTypes + (longlong)iVar4 * 0x18;
        if (*(UStruct **)(*(longlong *)&this->GatherableFieldsForTypes + (longlong)iVar4 * 0x18) ==
            param_1) {
          plVar7 = (longlong *)(lVar1 + 8);
          if (lVar1 == 0) {
            plVar7 = (longlong *)0x0;
          }
          if (plVar7 != (longlong *)0x0) {
            if (*plVar7 == 0) {
              bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("GatherableFieldsForTypePtr->IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\PropertyLocalizationDataGathering.cpp"
                                 ,0x52,L"");
              if (bVar3) {
                pcVar2 = (code *)swi(3);
                pFVar5 = (FGatherableFieldsForType *)(*pcVar2)();
                return pFVar5;
              }
            }
            return (FGatherableFieldsForType *)*plVar7;
          }
          break;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  pFVar5 = CacheGatherableFieldsForType(this,param_1);
  return pFVar5;
}

// GetTypeSpecificLocalizationDataObjectGatheringCallbacks @ 141f36df0

TMap<UClass_const_*,TFunction<void___cdecl(UObject_const_*,FPropertyLocalizationDataGatherer_&,EPropertyLocalizationGathererTextFlags)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,TFunction<void___cdecl(UObject_const_*,FPropertyLocalizationDataGatherer_&,EPropertyLocalizationGathererTextFlags)>,0>_>
* __cdecl FPropertyLocalizationDataGatherer::GetTypeSpecificLocalizationDataObjectGatheringCallbacks
                    (void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FPropertyLocalizationDataGatherer::
             GetTypeSpecificLocalizationDataObjectGatheringCallbacks'::__l2::
             _dynamic_atexit_destructor_for__TypeSpecificLocalizationDataGatheringCallbacks__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &TypeSpecificLocalizationDataGatheringCallbacks;
}

// GetTypeSpecificLocalizationDataStructGatheringCallbacks @ 141f36e60

TMap<UScriptStruct_const_*,TFunction<void___cdecl(FString_const_&,UScriptStruct_const_*,void_const_*,void_const_*,FPropertyLocalizationDataGatherer_&,EPropertyLocalizationGathererTextFlags)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,TFunction<void___cdecl(FString_const_&,UScriptStruct_const_*,void_const_*,void_const_*,FPropertyLocalizationDataGatherer_&,EPropertyLocalizationGathererTextFlags)>,0>_>
* __cdecl FPropertyLocalizationDataGatherer::GetTypeSpecificLocalizationDataStructGatheringCallbacks
                    (void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FPropertyLocalizationDataGatherer::
             GetTypeSpecificLocalizationDataStructGatheringCallbacks'::__l2::
             _dynamic_atexit_destructor_for__TypeSpecificLocalizationDataGatheringCallbacks__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &TypeSpecificLocalizationDataGatheringCallbacks;
}

// IsDefaultTextInstance @ 141f3a170

bool __thiscall
FPropertyLocalizationDataGatherer::IsDefaultTextInstance
          (FPropertyLocalizationDataGatherer *this,FText *param_1)

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  FString *pFVar5;
  ForElementType<FSetElementId> FVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FTextKey local_res18 [2];
  FTextKey local_res20;
  int local_res24;
  undefined1 local_48 [4];
  FTextKey aFStack_44 [3];
  FString local_38;
  FString local_28;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FTextInspector::GetTextId((FText *)&local_res20);
  if ((local_res20.Index != -1) || (local_res24 != -1)) {
    bVar2 = FText::ShouldGatherForLocalization(param_1);
    if (bVar2) {
      local_res18[0].Index = local_res20.Index;
      FTextKey::ToString(local_res18,&local_38);
      local_res18[0].Index = local_res24;
      FTextKey::ToString(local_res18,&local_28);
      pFVar5 = TextNamespaceUtil::StripPackageNamespace((FString *)local_48,&local_38);
      if (&local_38 != pFVar5) {
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        local_38.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
        (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_38.Data.ArrayNum = (pFVar5->Data).ArrayNum;
        local_38.Data.ArrayMax = (pFVar5->Data).ArrayMax;
        (pFVar5->Data).ArrayNum = 0;
        (pFVar5->Data).ArrayMax = 0;
      }
      if ((void *)CONCAT44(aFStack_44[0].Index,local_48) != (void *)0x0) {
        FMemory::Free((void *)CONCAT44(aFStack_44[0].Index,local_48));
      }
      FTextKey::FTextKey(&local_res20,&local_28);
      FTextKey::FTextKey(local_res18,&local_38);
      local_48 = (undefined1  [4])local_res18[0].Index;
      aFStack_44[0].Index = local_res20.Index;
      uVar3 = ::GetTypeHash(aFStack_44);
      uVar4 = ::GetTypeHash((FTextKey *)local_48);
      uVar9 = uVar4 - uVar3 ^ uVar3 >> 0xd;
      uVar4 = (-0x61c88647 - uVar9) - uVar3 ^ uVar9 << 8;
      uVar8 = (uVar3 - uVar4) - uVar9 ^ uVar4 >> 0xd;
      uVar9 = (uVar9 - uVar8) - uVar4 ^ uVar8 >> 0xc;
      uVar3 = (uVar4 - uVar9) - uVar8 ^ uVar9 << 0x10;
      uVar4 = (uVar8 - uVar3) - uVar9 ^ uVar3 >> 5;
      uVar8 = (uVar9 - uVar4) - uVar3 ^ uVar4 >> 3;
      uVar3 = (uVar3 - uVar8) - uVar4 ^ uVar8 << 10;
      if (*(int *)&(this->DefaultTextInstances).Elements.field_0x8 !=
          *(int *)&(this->DefaultTextInstances).Elements.field_0x34) {
        FVar6 = (this->DefaultTextInstances).Hash.SecondaryData;
        if (FVar6 == (ForElementType<FSetElementId>)0x0) {
          FVar6 = (ForElementType<FSetElementId>)&(this->DefaultTextInstances).Hash;
        }
        iVar7 = *(int *)((longlong)FVar6 +
                        (ulonglong)
                        ((this->DefaultTextInstances).HashSize - 1U &
                        ((uVar4 - uVar3) - uVar8 ^ uVar3 >> 0xf)) * 4);
        if (iVar7 != -1) {
          lVar1 = *(longlong *)&(this->DefaultTextInstances).Elements;
          do {
            lVar10 = (longlong)iVar7;
            if (((undefined1  [4])*(int *)(lVar1 + lVar10 * 0x10) == local_48) &&
               (*(int *)(lVar1 + 4 + lVar10 * 0x10) == aFStack_44[0].Index)) goto LAB_141f3a352;
            iVar7 = *(int *)(lVar1 + 8 + lVar10 * 0x10);
          } while (iVar7 != -1);
        }
      }
      iVar7 = -1;
LAB_141f3a352:
      bVar2 = iVar7 != -1;
      goto LAB_141f3a35c;
    }
  }
  bVar2 = false;
LAB_141f3a35c:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// IsEditorOnlyProperty @ 141f3a390

bool __cdecl FPropertyLocalizationDataGatherer::IsEditorOnlyProperty(FProperty *param_1)

{
  return (bool)((byte)(param_1->PropertyFlags >> 0x23) & 1);
}

// MarkDefaultTextInstance @ 141f3e6a0

void __thiscall
FPropertyLocalizationDataGatherer::MarkDefaultTextInstance
          (FPropertyLocalizationDataGatherer *this,FText *param_1)

{
  bool bVar1;
  FString *pFVar2;
  FTextKey local_res18 [2];
  FTextKey local_res20;
  int local_res24;
  FTextId local_58;
  FString local_50;
  FString local_40;
  FString local_30;
  
  local_40.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.Data.ArrayNum = 0;
  local_40.Data.ArrayMax = 0;
  local_30.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.Data.ArrayNum = 0;
  local_30.Data.ArrayMax = 0;
  FTextInspector::GetTextId((FText *)&local_res20);
  if ((local_res20.Index != -1) || (local_res24 != -1)) {
    bVar1 = FText::ShouldGatherForLocalization(param_1);
    if (bVar1) {
      local_res18[0].Index = local_res20.Index;
      FTextKey::ToString(local_res18,&local_40);
      local_res18[0].Index = local_res24;
      FTextKey::ToString(local_res18,&local_30);
      pFVar2 = TextNamespaceUtil::StripPackageNamespace(&local_50,&local_40);
      if (&local_40 != pFVar2) {
        if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_40.Data.AllocatorInstance.Data);
        }
        local_40.Data.AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
        (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_40.Data.ArrayNum = (pFVar2->Data).ArrayNum;
        local_40.Data.ArrayMax = (pFVar2->Data).ArrayMax;
        (pFVar2->Data).ArrayNum = 0;
        (pFVar2->Data).ArrayMax = 0;
      }
      if ((void *)CONCAT44(local_50.Data.AllocatorInstance.Data._4_4_,
                           (int)local_50.Data.AllocatorInstance.Data) != (void *)0x0) {
        FMemory::Free((void *)CONCAT44(local_50.Data.AllocatorInstance.Data._4_4_,
                                       (int)local_50.Data.AllocatorInstance.Data));
      }
      FTextKey::FTextKey(&local_res20,&local_30);
      FTextKey::FTextKey(local_res18,&local_40);
      local_50.Data.AllocatorInstance.Data._0_4_ = local_res18[0].Index;
      local_50.Data.AllocatorInstance.Data._4_4_ = local_res20.Index;
      TSet<FTextId,DefaultKeyFuncs<FTextId,0>,FDefaultSetAllocator>::Emplace<FTextId>
                (&this->DefaultTextInstances,&local_58,(bool *)&local_50);
    }
  }
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  return;
}

// MarkObjectProcessed @ 141f3e7e0

void __thiscall
FPropertyLocalizationDataGatherer::MarkObjectProcessed
          (FPropertyLocalizationDataGatherer *this,UObject *param_1,
          EPropertyLocalizationGathererTextFlags param_2)

{
  FObjectAndGatherFlags *pFVar1;
  FObjectAndGatherFlags local_res8 [2];
  FObjectAndGatherFlags local_18;
  
  pFVar1 = FObjectAndGatherFlags::FObjectAndGatherFlags(&local_18,param_1,param_2);
  TSet<FPropertyLocalizationDataGatherer::FObjectAndGatherFlags,DefaultKeyFuncs<FPropertyLocalizationDataGatherer::FObjectAndGatherFlags,0>,FDefaultSetAllocator>
  ::Emplace<FPropertyLocalizationDataGatherer::FObjectAndGatherFlags>
            (&this->ProcessedObjects,local_res8,(bool *)pFVar1);
  return;
}

// ShouldProcessObject @ 141f4da10

bool __thiscall
FPropertyLocalizationDataGatherer::ShouldProcessObject
          (FPropertyLocalizationDataGatherer *this,UObject *param_1,
          EPropertyLocalizationGathererTextFlags param_2)

{
  longlong lVar1;
  FObjectAndGatherFlags *pFVar2;
  longlong lVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  FObjectAndGatherFlags local_18;
  
  if ((*(uint *)&param_1->field_0x8 & 0x40) != 0) {
    return false;
  }
  pFVar2 = FObjectAndGatherFlags::FObjectAndGatherFlags(&local_18,param_1,param_2);
  if (*(int *)&(this->ProcessedObjects).Elements.field_0x8 !=
      *(int *)&(this->ProcessedObjects).Elements.field_0x34) {
    FVar5 = (this->ProcessedObjects).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->ProcessedObjects).Hash;
    }
    iVar4 = *(int *)((longlong)FVar5 +
                    (ulonglong)((this->ProcessedObjects).HashSize - 1U & pFVar2->KeyHash) * 4);
    if (iVar4 != -1) {
      lVar1 = *(longlong *)&(this->ProcessedObjects).Elements;
      do {
        lVar3 = (longlong)iVar4;
        if ((*(UObject **)(lVar1 + lVar3 * 0x18) == pFVar2->Object) &&
           (*(EPropertyLocalizationGathererTextFlags *)(lVar1 + 8 + lVar3 * 0x18) ==
            pFVar2->GatherTextFlags)) goto LAB_141f4daa8;
        iVar4 = *(int *)(lVar1 + 0x10 + lVar3 * 0x18);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_141f4daa8:
  return iVar4 == -1;
}

