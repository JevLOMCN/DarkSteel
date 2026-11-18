// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Localization
// Functions: 4

// AddConflict @ 146b4f160

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FLocTextConflicts::AddConflict
          (FLocTextConflicts *this,FLocKey *param_1,FLocKey *param_2,
          TSharedPtr<FLocMetadataObject,1> *param_3,FLocItem *param_4,FString *param_5)

{
  uint uVar1;
  FLocMetadataObject *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FScriptContainerElement *_Src;
  code *pcVar4;
  bool bVar5;
  FConflict *pFVar6;
  longlong lVar7;
  FString local_b8;
  FConflict *local_a8;
  TReferenceControllerBase<1> *pTStack_a0;
  TSharedPtr<FLocTextConflicts::FConflict,1> local_98;
  FString local_88;
  atomic<int> local_78;
  FString local_70;
  undefined4 local_60;
  undefined8 local_58;
  FSharedReferencer<1> local_50;
  TSharedPtr<FLocMetadataObject,1> local_48;
  FLocKey *local_38;
  FConflict **local_30;
  
  local_48.Object = param_3->Object;
  local_48.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FindEntryByKey(this,&local_98,param_1,param_2,&local_48);
  pFVar6 = local_98.Object;
  if (local_98.Object == (FConflict *)0x0) {
    pTStack_a0 = ::operator_new(0xa0);
    if (pTStack_a0 == (TReferenceControllerBase<1> *)0x0) {
      local_a8 = ___xmm_00000000000000000000000000000010;
      pTStack_a0 = _UNK_150651568;
    }
    else {
      pTStack_a0->SharedReferenceCount = (atomic<int>)0x1;
      pTStack_a0->WeakReferenceCount = (atomic<int>)0x1;
      pTStack_a0->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFConflict_FLocTextConflicts___00_SharedPointerInternals__6B_
      ;
      pFVar2 = param_3->Object;
      pTVar3 = (param_3->SharedReferenceCount).ReferenceController;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      ::FString::FString(&local_88,&param_2->Str);
      local_78 = (atomic<int>)param_2->Hash;
      ::FString::FString(&local_70,&param_1->Str);
      uVar1 = param_1->Hash;
      pTStack_a0[1]._padding_ = (longlong)local_70.Data.AllocatorInstance.Data;
      pTStack_a0[1].SharedReferenceCount = (atomic<int>)local_70.Data.ArrayNum;
      pTStack_a0[1].WeakReferenceCount = (atomic<int>)local_70.Data.ArrayMax;
      *(uint *)&pTStack_a0[2]._padding_ = uVar1;
      *(FScriptContainerElement **)&pTStack_a0[2].SharedReferenceCount =
           local_88.Data.AllocatorInstance.Data;
      *(int *)&pTStack_a0[3]._padding_ = local_88.Data.ArrayNum;
      *(int *)((longlong)&pTStack_a0[3]._padding_ + 4) = local_88.Data.ArrayMax;
      pTStack_a0[3].SharedReferenceCount = local_78;
      pTStack_a0[4]._padding_ = (longlong)pFVar2;
      *(TReferenceControllerBase<1> **)&pTStack_a0[4].SharedReferenceCount = pTVar3;
      pTStack_a0[5]._padding_ = 0;
      pTStack_a0[5].SharedReferenceCount = (atomic<int>)0x0;
      pTStack_a0[5].WeakReferenceCount = (atomic<int>)0x0;
      pTStack_a0[7]._padding_ = 0;
      pTStack_a0[7].SharedReferenceCount = (atomic<int>)0x0;
      pTStack_a0[7].WeakReferenceCount = (atomic<int>)0x80;
      *(undefined4 *)&pTStack_a0[8]._padding_ = 0xffffffff;
      *(undefined4 *)((longlong)&pTStack_a0[8]._padding_ + 4) = 0;
      pTStack_a0[9]._padding_ = 0;
      pTStack_a0[9].SharedReferenceCount = (atomic<int>)0x0;
      local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_70.Data.ArrayNum = 0;
      local_70.Data.ArrayMax = 0;
      local_60 = 0;
      local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_88.Data.ArrayNum = 0;
      local_88.Data.ArrayMax = 0;
      local_78 = (atomic<int>)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      local_a8 = (FConflict *)(pTStack_a0 + 1);
      if (local_a8 == (FConflict *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    local_30 = &local_a8;
    local_38 = param_2;
    TSet<TTuple<FLocKey,TSharedRef<FLocTextConflicts::FConflict,1>_>,TDefaultMapHashableKeyFuncs<FLocKey,TSharedRef<FLocTextConflicts::FConflict,1>,1>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FLocKey_const_&,TSharedRef<FLocTextConflicts::FConflict,1>_const_&>_>
              ((TSet<TTuple<FLocKey,TSharedRef<FLocTextConflicts::FConflict,1>_>,TDefaultMapHashableKeyFuncs<FLocKey,TSharedRef<FLocTextConflicts::FConflict,1>,1>,FDefaultSetAllocator>
                *)this,(TPairInitializer<FLocKey_const_&,TSharedRef<FLocTextConflicts::FConflict,1>_const_&>
                        *)&stack0x00000020,(bool *)&local_38);
    local_50.ReferenceController = pTStack_a0;
    if (pTStack_a0 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_a0->SharedReferenceCount = (atomic<int>)((int)pTStack_a0->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_98.Object = local_a8;
    local_58 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_98.SharedReferenceCount,&local_50);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_50.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_a0);
    pFVar6 = local_98.Object;
    if (local_98.Object == (FConflict *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.Data.ArrayNum = (param_5->Data).ArrayNum;
  lVar7 = (longlong)local_b8.Data.ArrayNum;
  _Src = (param_5->Data).AllocatorInstance.Data;
  if (local_b8.Data.ArrayNum == 0) {
    local_b8.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_b8.Data.ArrayNum,0,(ForAnyElementType *)&local_b8,local_b8.Data.ArrayNum,
               &local_b8.Data.ArrayMax);
    memcpy(local_b8.Data.AllocatorInstance.Data,_Src,lVar7 * 2);
  }
  ::FString::ReplaceCharWithEscapedCharInline
            (&local_b8,(TArray<wchar_t,TSizedDefaultAllocator<32>_> *)0x0);
  TMultiMap<FString,FLocItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FLocItem,1>_>
  ::EmplaceUnique<FString_const_&,FLocItem_const_&>
            (&pFVar6->EntriesBySourceLocation,&local_b8,param_4);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  return;
}

// FindEntryByKey @ 146b5f4c0

/* WARNING: Type propagation algorithm not settling */

TSharedPtr<FLocTextConflicts::FConflict,1> * __thiscall
FLocTextConflicts::FindEntryByKey
          (FLocTextConflicts *this,
          TSharedPtr<FLocTextConflicts::FConflict,1> *__return_storage_ptr__,FLocKey *param_1,
          FLocKey *param_2,TSharedPtr<FLocMetadataObject,1> *param_3)

{
  FConflict *pFVar1;
  FLocMetadataObject *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  TSharedPtr<FLocTextConflicts::FConflict,1> *pTVar8;
  wchar_t *_Str1;
  wchar_t *_Str2;
  ForAnyElementType FVar9;
  TSharedRef<FLocTextConflicts::FConflict,1> *pTVar10;
  undefined1 local_res8 [8];
  TArray<TSharedRef<FLocTextConflicts::FConflict,1>,TSizedDefaultAllocator<32>_> local_38;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  TMultiMap<FLocKey,TSharedRef<FLocTextConflicts::FConflict,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLocKey,TSharedRef<FLocTextConflicts::FConflict,1>,1>_>
  ::MultiFind<TSizedDefaultAllocator<32>_>(&this->EntriesByKey,param_2,&local_38,false);
  iVar5 = local_38.ArrayNum;
  pTVar10 = (TSharedRef<FLocTextConflicts::FConflict,1> *)
            (local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 0x10);
  FVar9.Data = local_38.AllocatorInstance.Data;
  do {
    if (local_38.ArrayNum != iVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedRef<FLocTextConflicts::FConflict,1>,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if ((TSharedRef<FLocTextConflicts::FConflict,1> *)FVar9.Data == pTVar10) {
      __return_storage_ptr__->Object = (FConflict *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      goto LAB_146b5f638;
    }
    pFVar1 = ((TSharedRef<FLocTextConflicts::FConflict,1> *)FVar9.Data)->Object;
    if ((pFVar1->Namespace).Hash == param_1->Hash) {
      if ((param_1->Str).Data.ArrayNum == 0) {
        _Str2 = L"";
      }
      else {
        _Str2 = (wchar_t *)(param_1->Str).Data.AllocatorInstance.Data;
      }
      if ((pFVar1->Namespace).Str.Data.ArrayNum == 0) {
        _Str1 = L"";
      }
      else {
        _Str1 = (wchar_t *)(pFVar1->Namespace).Str.Data.AllocatorInstance.Data;
      }
      iVar7 = wcscmp(_Str1,_Str2);
      if (iVar7 == 0) {
        pFVar2 = (pFVar1->KeyMetadataObj).Object;
        if ((param_3->Object != (FLocMetadataObject *)0x0) == (pFVar2 != (FLocMetadataObject *)0x0))
        {
          if (param_3->Object == (FLocMetadataObject *)0x0) {
            if (pFVar2 == (FLocMetadataObject *)0x0) {
LAB_146b5f614:
              __return_storage_ptr__->Object =
                   ((TSharedRef<FLocTextConflicts::FConflict,1> *)FVar9.Data)->Object;
              pTVar3 = (((TSharedRef<FLocTextConflicts::FConflict,1> *)FVar9.Data)->
                       SharedReferenceCount).ReferenceController;
              (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
              if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                UNLOCK();
              }
LAB_146b5f638:
              DestructItems<TSharedRef<FLocTextConflicts::FConflict,1>,int>
                        ((TSharedRef<FLocTextConflicts::FConflict,1> *)
                         local_38.AllocatorInstance.Data,local_38.ArrayNum);
              if ((TSharedRef<FLocTextConflicts::FConflict,1> *)local_38.AllocatorInstance.Data !=
                  (TSharedRef<FLocTextConflicts::FConflict,1> *)0x0) {
                FMemory::Free(local_38.AllocatorInstance.Data);
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((param_3->SharedReferenceCount).ReferenceController);
              return __return_storage_ptr__;
            }
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x44d,L"");
            if (bVar6) {
              pcVar4 = (code *)swi(3);
              pTVar8 = (TSharedPtr<FLocTextConflicts::FConflict,1> *)(*pcVar4)();
              return pTVar8;
            }
          }
          pFVar1 = ((TSharedRef<FLocTextConflicts::FConflict,1> *)FVar9.Data)->Object;
          pFVar2 = param_3->Object;
          if ((pFVar1->KeyMetadataObj).Object == (FLocMetadataObject *)0x0) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x44d,L"");
            if (bVar6) {
              pcVar4 = (code *)swi(3);
              pTVar8 = (TSharedPtr<FLocTextConflicts::FConflict,1> *)(*pcVar4)();
              return pTVar8;
            }
          }
          bVar6 = FLocMetadataObject::operator==(pFVar2,(pFVar1->KeyMetadataObj).Object);
          if (bVar6) goto LAB_146b5f614;
        }
      }
    }
    FVar9.Data = FVar9.Data + 0x10;
  } while( true );
}

// GetConflictReport @ 146b712e0

FString * __thiscall
FLocTextConflicts::GetConflictReport(FLocTextConflicts *this,FString *__return_storage_ptr__)

{
  ulonglong uVar1;
  longlong lVar2;
  void *_Src;
  code *pcVar3;
  FLocTextConflicts *pFVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  FString *pFVar10;
  longlong lVar11;
  wchar_t *pwVar12;
  FLocItem *this_00;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  uint *puVar17;
  TBitArray<FDefaultBitArrayAllocator> *pTVar18;
  uint uVar19;
  undefined1 local_res18 [8];
  uint local_res20;
  TArray<FLocItem,TSizedDefaultAllocator<32>_> local_1e8;
  FString local_1d8;
  FLocTextConflicts *local_1c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1c0;
  int iStack_1a0;
  undefined4 uStack_19c;
  FString local_198;
  int local_188;
  int local_184;
  int local_180;
  longlong local_178;
  longlong *local_170;
  TBitArray<FDefaultBitArrayAllocator> *local_168;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  FLocTextConflicts *local_120;
  int iStack_118;
  uint uStack_114;
  TBitArray<FDefaultBitArrayAllocator> *local_110;
  undefined4 uStack_108;
  uint uStack_104;
  int local_100;
  undefined4 uStack_fc;
  FLocTextConflicts *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e8;
  undefined8 uStack_c8;
  TSharedPtr<FLocMetadataObject,1> local_c0;
  TSharedPtr<FLocMetadataObject,1> local_b0;
  FString local_a0 [2];
  undefined4 local_74;
  undefined4 local_54;
  
  pTVar18 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->EntriesByKey).field_0x10;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  uVar19 = *(uint *)&(this->EntriesByKey).field_0x28;
  iVar15 = 0;
  uVar8 = 1;
  TStack_1c0.CurrentBitIndex = 0;
  TStack_1c0.BaseBitIndex = iVar15;
  if (uVar19 != 0) {
    puVar17 = *(uint **)&(this->EntriesByKey).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)pTVar18;
    }
    uVar9 = *puVar17;
    TStack_1c0.BaseBitIndex = 0;
    iVar15 = 0;
    while (uVar9 == 0) {
      lVar11 = (longlong)iVar15;
      TStack_1c0.BaseBitIndex = TStack_1c0.BaseBitIndex + 0x20;
      iVar15 = iVar15 + 1;
      TStack_1c0.CurrentBitIndex = uVar19;
      if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
      goto LAB_146b7139d;
      uVar9 = puVar17[lVar11 + 1];
    }
    uVar8 = -uVar9 & uVar9;
    uVar1 = (ulonglong)uVar8 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_188 = (int)lVar11;
    TStack_1c0.CurrentBitIndex = TStack_1c0.BaseBitIndex + -1 + local_188;
    if ((int)uVar19 < TStack_1c0.CurrentBitIndex) {
      TStack_1c0.CurrentBitIndex = uVar19;
    }
  }
LAB_146b7139d:
  uVar9 = *(uint *)&(this->EntriesByKey).field_0x28;
  uVar14 = uVar9 & 0xffffffe0;
  iStack_1a0 = *(int *)&(this->EntriesByKey).field_0x8 - *(int *)&(this->EntriesByKey).field_0x34;
  TStack_1c0._padding_ = CONCAT44(uVar8,iVar15);
  TStack_1c0.UnvisitedBitMask = 0xffffffff;
  TStack_1c0._28_4_ = local_74;
  TStack_e8._padding_ = TStack_1c0._padding_;
  iVar15 = (int)uVar9 >> 5;
  uStack_c8 = CONCAT44(uStack_19c,iStack_1a0);
  TStack_e8.BaseBitIndex = TStack_1c0.BaseBitIndex;
  TStack_e8._28_4_ = local_74;
  TStack_e8.UnvisitedBitMask = 0xffffffff;
  local_res20 = uVar9;
  local_1c8 = this;
  TStack_1c0.Array = pTVar18;
  local_168 = pTVar18;
  local_f0 = this;
  TStack_e8.Array = pTVar18;
  TStack_e8.CurrentBitIndex = TStack_1c0.CurrentBitIndex;
  if ((((int)uVar9 < 0) || ((int)uVar19 < (int)uVar9)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pFVar10 = (FString *)(*pcVar3)();
    return pFVar10;
  }
  uVar19 = *(uint *)&(this->EntriesByKey).field_0x28;
  if (uVar9 != uVar19) {
    puVar16 = *(undefined1 **)&(this->EntriesByKey).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = (undefined1 *)pTVar18;
    }
    uVar8 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar15 * 4);
    while (uVar8 == 0) {
      lVar11 = (longlong)iVar15;
      uVar14 = uVar14 + 0x20;
      iVar15 = iVar15 + 1;
      uVar9 = uVar19;
      local_res20 = uVar19;
      if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
      goto LAB_146b714d0;
      uVar8 = *(uint *)(puVar16 + lVar11 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar8 & uVar8) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_184 = (int)lVar11;
    uVar9 = local_184 + -1 + uVar14;
    local_res20 = uVar9;
    if ((int)uVar19 < (int)uVar9) {
      uVar9 = uVar19;
      local_res20 = uVar19;
    }
  }
LAB_146b714d0:
  do {
    pFVar4 = local_f0;
    if (*(int *)&(local_f0->EntriesByKey).field_0x8 - *(int *)&(local_f0->EntriesByKey).field_0x34
        != (int)uStack_c8) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FLocKey,TSharedRef<FLocTextConflicts::FConflict,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_e8.CurrentBitIndex == uVar9) && (TStack_e8.Array == pTVar18)) && (pFVar4 == this))
    {
      return __return_storage_ptr__;
    }
    local_170 = (longlong *)
                (*(longlong *)&pFVar4->EntriesByKey + 0x18 +
                (longlong)TStack_e8.CurrentBitIndex * 0x30);
    local_1e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    bVar6 = false;
    local_1e8.ArrayNum = 0;
    local_1e8.ArrayMax = 0;
    local_178 = *local_170;
    TMapBase<FString,FLocItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FLocItem,1>_>
    ::GenerateValueArray<TSizedDefaultAllocator<32>_>
              ((TMapBase<FString,FLocItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FLocItem,1>_>
                *)(local_178 + 0x40),&local_1e8);
    iVar15 = local_1e8.ArrayNum;
    if ((1 < local_1e8.ArrayNum) && (uVar9 = local_res20, uVar19 = 0, 0 < local_1e8.ArrayNum + -1))
    {
      do {
        if (bVar6) goto LAB_146b71676;
        uVar8 = uVar19 + 1;
        if ((int)uVar8 < iVar15) {
          uVar9 = uVar8;
          do {
            if (bVar6) break;
            uVar14 = 0;
            if ((int)uVar19 < iVar15) {
              uVar14 = ~uVar19 >> 0x1f;
            }
            if (uVar14 == 0) {
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar7) {
                pcVar3 = (code *)swi(3);
                pFVar10 = (FString *)(*pcVar3)();
                return pFVar10;
              }
              iVar15 = local_1e8.ArrayNum;
            }
            this_00 = (FLocItem *)(local_1e8.AllocatorInstance.Data + (longlong)(int)uVar19 * 0x20);
            uVar14 = 0;
            if ((int)uVar9 < iVar15) {
              uVar14 = ~uVar9 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar3 = (code *)swi(3);
              pFVar10 = (FString *)(*pcVar3)();
              return pFVar10;
            }
            bVar7 = FLocItem::operator==
                              (this_00,(FLocItem *)
                                       (local_1e8.AllocatorInstance.Data +
                                       (longlong)(int)uVar9 * 0x20));
            if (!bVar7) {
              bVar6 = true;
            }
            uVar9 = uVar9 + 1;
            iVar15 = local_1e8.ArrayNum;
          } while ((int)uVar9 < local_1e8.ArrayNum);
        }
        uVar19 = uVar8;
      } while ((int)uVar8 < iVar15 + -1);
      uVar9 = local_res20;
      if (bVar6) {
LAB_146b71676:
        plVar5 = local_170;
        local_c0.Object = *(FLocMetadataObject **)(*local_170 + 0x30);
        local_c0.SharedReferenceCount.ReferenceController =
             *(TReferenceControllerBase<1> **)(*local_170 + 0x38);
        if (local_c0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        FJsonInternationalizationMetaDataSerializer::MetadataToString(&local_130,&local_c0);
        ::FString::PrintfImpl(&local_160,L"%s - %s %s\n");
        iVar15 = local_160.Data.ArrayNum + -1;
        if (local_160.Data.ArrayNum == 0) {
          iVar15 = 0;
        }
        ::FString::AppendChars
                  (__return_storage_ptr__,(wchar_t *)local_160.Data.AllocatorInstance.Data,iVar15);
        if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_160.Data.AllocatorInstance.Data);
        }
        lVar11 = *plVar5;
        local_1c8 = (FLocTextConflicts *)(lVar11 + 0x40);
        iStack_118 = 0;
        uVar19 = *(uint *)(lVar11 + 0x68);
        TStack_1c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(lVar11 + 0x50);
        local_100 = 0;
        uStack_104 = 0;
        uStack_114 = 1;
        if (uVar19 != 0) {
          pTVar18 = TStack_1c0.Array;
          if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar11 + 0x60) !=
              (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            pTVar18 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar11 + 0x60);
          }
          uStack_114 = *(uint *)(pTVar18->AllocatorInstance).InlineData;
          while (uStack_114 == 0) {
            lVar11 = (longlong)iStack_118;
            local_100 = local_100 + 0x20;
            iStack_118 = iStack_118 + 1;
            uStack_104 = uVar19;
            uStack_114 = 1;
            if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_118)
            goto LAB_146b717ad;
            uStack_114 = *(uint *)((pTVar18->AllocatorInstance).InlineData + lVar11 * 4 + 4);
          }
          uStack_114 = -uStack_114 & uStack_114;
          uVar1 = (ulonglong)uStack_114 * 2 + 1;
          lVar11 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          local_180 = (int)lVar11;
          uStack_104 = local_100 + -1 + local_180;
          if ((int)uVar19 < (int)uStack_104) {
            uStack_104 = uVar19;
          }
        }
LAB_146b717ad:
        uStack_108 = 0xffffffff;
        uStack_fc = local_54;
        TStack_1c0._padding_ = CONCAT44(uStack_114,iStack_118);
        TStack_1c0.UnvisitedBitMask = 0xffffffff;
        TStack_1c0._28_4_ = local_54;
        TStack_1c0.BaseBitIndex = local_100;
        local_120 = local_1c8;
        local_110 = TStack_1c0.Array;
        TStack_1c0.CurrentBitIndex = uStack_104;
        if ((int)uStack_104 < (int)uVar19) {
          do {
            iVar15 = TStack_1c0.CurrentBitIndex;
            pFVar4 = local_1c8;
            lVar11 = (longlong)TStack_1c0.CurrentBitIndex * 0x38;
            FPaths::ConvertRelativePathToFull
                      (&local_198,(FString *)(*(longlong *)&local_1c8->EntriesByKey + lVar11));
            ::FString::ReplaceInline(&local_198,L"\\",L"/",IgnoreCase);
            pFVar10 = FPaths::RootDir(local_a0);
            if ((pFVar10->Data).ArrayNum == 0) {
              pwVar12 = L"";
            }
            else {
              pwVar12 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
            }
            ::FString::ReplaceInline(&local_198,pwVar12,L"/",IgnoreCase);
            if (local_a0[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a0[0].Data.AllocatorInstance.Data);
            }
            lVar2 = *(longlong *)&pFVar4->EntriesByKey;
            local_1d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1d8.Data.ArrayNum = *(int *)(lVar2 + 0x18 + lVar11);
            lVar13 = (longlong)local_1d8.Data.ArrayNum;
            _Src = *(void **)(lVar2 + 0x10 + lVar11);
            if (local_1d8.Data.ArrayNum == 0) {
              local_1d8.Data.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_1d8.Data.ArrayNum,0,(ForAnyElementType *)&local_1d8,
                         local_1d8.Data.ArrayNum,&local_1d8.Data.ArrayMax);
              memcpy(local_1d8.Data.AllocatorInstance.Data,_Src,lVar13 * 2);
            }
            ::FString::ReplaceCharWithEscapedCharInline
                      (&local_1d8,(TArray<wchar_t,TSizedDefaultAllocator<32>_> *)0x0);
            lVar11 = (longlong)iVar15 * 0x38 + *(longlong *)&pFVar4->EntriesByKey;
            local_b0.Object = *(FLocMetadataObject **)(lVar11 + 0x20);
            local_b0.SharedReferenceCount.ReferenceController =
                 *(TReferenceControllerBase<1> **)(lVar11 + 0x28);
            if (local_b0.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                   1);
              UNLOCK();
            }
            FJsonInternationalizationMetaDataSerializer::MetadataToString(&local_140,&local_b0);
            ::FString::PrintfImpl(&local_150,L"\t%s - \"%s\" %s\n");
            iVar15 = local_150.Data.ArrayNum + -1;
            if (local_150.Data.ArrayNum == 0) {
              iVar15 = 0;
            }
            ::FString::AppendChars
                      (__return_storage_ptr__,(wchar_t *)local_150.Data.AllocatorInstance.Data,
                       iVar15);
            if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_150.Data.AllocatorInstance.Data);
            }
            if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_140.Data.AllocatorInstance.Data);
            }
            if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
            }
            if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_198.Data.AllocatorInstance.Data);
            }
            TStack_1c0.UnvisitedBitMask = TStack_1c0.UnvisitedBitMask & ~TStack_1c0._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1c0);
          } while (TStack_1c0.CurrentBitIndex < (TStack_1c0.Array)->NumBits);
        }
        ::FString::AppendChars(__return_storage_ptr__,L"\n",1);
        if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_130.Data.AllocatorInstance.Data);
        }
        uVar9 = local_res20;
        iVar15 = local_1e8.ArrayNum;
      }
    }
    DestructItems<FLocItem,int>((FLocItem *)local_1e8.AllocatorInstance.Data,iVar15);
    if ((FLocItem *)local_1e8.AllocatorInstance.Data != (FLocItem *)0x0) {
      FMemory::Free(local_1e8.AllocatorInstance.Data);
    }
    TStack_e8.UnvisitedBitMask = TStack_e8.UnvisitedBitMask & ~TStack_e8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e8);
    pTVar18 = local_168;
  } while( true );
}

// GetConflictReportAsCSV @ 146b71aa0

FString * __thiscall
FLocTextConflicts::GetConflictReportAsCSV(FLocTextConflicts *this,FString *__return_storage_ptr__)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  void *pvVar3;
  code *pcVar4;
  ForAnyElementType _Src;
  FLocTextConflicts *pFVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  FString *pFVar9;
  byte bVar10;
  longlong lVar11;
  FLocItem *this_00;
  uint uVar12;
  TBitArray<FDefaultBitArrayAllocator> *pTVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  undefined1 *puVar17;
  uint *puVar18;
  int iVar19;
  longlong *plVar20;
  uint uVar21;
  undefined1 local_res18 [8];
  int local_res20;
  TArray<FLocItem,TSizedDefaultAllocator<32>_> local_228;
  FString local_218;
  FString local_208;
  ForAnyElementType local_1f8;
  undefined8 local_1f0;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  int local_1a8;
  uint uStack_1a4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1a0;
  uint local_198;
  uint uStack_194;
  uint uStack_190;
  undefined4 uStack_18c;
  FLocTextConflicts *local_188;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_180;
  int iStack_160;
  undefined4 uStack_15c;
  FLocTextConflicts *local_158;
  undefined8 uStack_150;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_148;
  uint uStack_140;
  uint uStack_13c;
  int iStack_138;
  undefined4 uStack_134;
  int local_130;
  undefined4 uStack_12c;
  int local_128;
  int local_124;
  longlong local_120;
  FString local_118;
  FLocTextConflicts *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  undefined8 uStack_e0;
  FString local_d8;
  FString local_c8;
  FLocTextConflicts *local_b8;
  longlong lStack_b0;
  TBitArray<FDefaultBitArrayAllocator> *local_a8;
  uint uStack_a0;
  uint uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_6c;
  undefined4 local_4c;
  
  ::FString::FString(__return_storage_ptr__,
                     L"Namespace,Key,File1,Line1,File2,Line2,Source1,Source2\n");
  uVar21 = *(uint *)&(this->EntriesByKey).field_0x28;
  puVar1 = &(this->EntriesByKey).field_0x10;
  iVar16 = 0;
  TStack_180.BaseBitIndex = 0;
  uVar8 = 1;
  TStack_180.CurrentBitIndex = 0;
  if (uVar21 != 0) {
    puVar18 = *(uint **)&(this->EntriesByKey).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar8 = *puVar18;
    while (uVar8 == 0) {
      lVar11 = (longlong)iVar16;
      TStack_180.BaseBitIndex = TStack_180.BaseBitIndex + 0x20;
      iVar16 = iVar16 + 1;
      uVar8 = 1;
      TStack_180.CurrentBitIndex = uVar21;
      if ((int)((uVar21 - 1) + ((int)(uVar21 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
      goto LAB_146b71b60;
      uVar8 = puVar18[lVar11 + 1];
    }
    uVar8 = -uVar8 & uVar8;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    TStack_180.CurrentBitIndex = TStack_180.BaseBitIndex + -1 + local_res20;
    if ((int)uVar21 < TStack_180.CurrentBitIndex) {
      TStack_180.CurrentBitIndex = uVar21;
    }
  }
LAB_146b71b60:
  uVar15 = *(uint *)&(this->EntriesByKey).field_0x28;
  bVar10 = (byte)uVar15 & 0x1f;
  iStack_160 = *(int *)&(this->EntriesByKey).field_0x8 - *(int *)&(this->EntriesByKey).field_0x34;
  uVar14 = uVar15 & 0xffffffe0;
  iVar19 = (int)uVar15 >> 5;
  uVar12 = -1 << bVar10;
  uStack_1a4 = 1 << bVar10;
  TStack_180._padding_ = CONCAT44(uVar8,iVar16);
  TStack_180.UnvisitedBitMask = 0xffffffff;
  TStack_180._28_4_ = local_6c;
  TStack_100._padding_ = TStack_180._padding_;
  uStack_e0 = CONCAT44(uStack_15c,iStack_160);
  TStack_100.UnvisitedBitMask = 0xffffffff;
  TStack_100.BaseBitIndex = TStack_180.BaseBitIndex;
  TStack_100._28_4_ = local_6c;
  local_1a8 = iVar19;
  pTStack_1a0 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  local_198 = uVar12;
  uStack_194 = uVar15;
  uStack_190 = uVar14;
  local_188 = this;
  TStack_180.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  local_108 = this;
  TStack_100.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  TStack_100.CurrentBitIndex = TStack_180.CurrentBitIndex;
  if ((((int)uVar15 < 0) || ((int)uVar21 < (int)uVar15)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar9 = (FString *)(*pcVar4)();
    return pFVar9;
  }
  uVar21 = *(uint *)&(this->EntriesByKey).field_0x28;
  if (uVar15 != uVar21) {
    puVar17 = *(undefined1 **)&(this->EntriesByKey).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar12 = uVar12 & *(uint *)(puVar17 + (longlong)iVar19 * 4);
    while (uVar12 == 0) {
      uStack_190 = uVar14 + 0x20;
      local_1a8 = iVar19 + 1;
      if ((int)((uVar21 - 1) + ((int)(uVar21 - 1) >> 0x1f & 0x1fU)) >> 5 < local_1a8)
      goto LAB_146b71c98;
      uVar12 = *(uint *)(puVar17 + (longlong)iVar19 * 4 + 4);
      local_198 = 0xffffffff;
      uVar14 = uStack_190;
      iVar19 = local_1a8;
    }
    uStack_1a4 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uStack_1a4 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_128 = (int)lVar11;
    uStack_194 = local_128 + -1 + uVar14;
    if ((int)uVar21 < (int)uStack_194) {
LAB_146b71c98:
      uStack_194 = uVar21;
    }
  }
  uStack_150 = CONCAT44(uStack_1a4,local_1a8);
  uStack_140 = local_198;
  uStack_13c = uStack_194;
  uStack_134 = uStack_18c;
  iStack_138 = uStack_190;
  local_130 = *(int *)&(this->EntriesByKey).field_0x8 - *(int *)&(this->EntriesByKey).field_0x34;
  pTStack_148 = pTStack_1a0;
  uStack_90 = CONCAT44(uStack_12c,local_130);
  local_a8 = pTStack_1a0;
  local_158 = this;
  local_b8 = this;
  lStack_b0 = uStack_150;
  local_98 = _iStack_138;
  uStack_a0 = uStack_140;
  uStack_9c = uStack_13c;
  do {
    pFVar5 = local_108;
    if (*(int *)&(local_108->EntriesByKey).field_0x8 - *(int *)&(local_108->EntriesByKey).field_0x34
        != (int)uStack_e0) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FLocKey,TSharedRef<FLocTextConflicts::FConflict,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_100.CurrentBitIndex == uStack_9c) && (TStack_100.Array == local_a8)) &&
       (pFVar5 == local_b8)) {
      return __return_storage_ptr__;
    }
    plVar20 = (longlong *)
              (*(longlong *)&pFVar5->EntriesByKey + 0x18 +
              (longlong)TStack_100.CurrentBitIndex * 0x30);
    local_228.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    bVar6 = false;
    local_228.ArrayNum = 0;
    local_228.ArrayMax = 0;
    local_120 = *plVar20;
    TMapBase<FString,FLocItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FLocItem,1>_>
    ::GenerateValueArray<TSizedDefaultAllocator<32>_>
              ((TMapBase<FString,FLocItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FLocItem,1>_>
                *)(local_120 + 0x40),&local_228);
    iVar16 = local_228.ArrayNum;
    if ((1 < local_228.ArrayNum) && (uVar21 = 0, 0 < local_228.ArrayNum + -1)) {
      do {
        if (bVar6) goto LAB_146b71eae;
        uVar8 = uVar21 + 1;
        if ((int)uVar8 < iVar16) {
          uVar15 = uVar8;
          do {
            if (bVar6) break;
            uVar12 = 0;
            if ((int)uVar21 < iVar16) {
              uVar12 = ~uVar21 >> 0x1f;
            }
            if (uVar12 == 0) {
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar6) {
                pcVar4 = (code *)swi(3);
                pFVar9 = (FString *)(*pcVar4)();
                return pFVar9;
              }
              iVar16 = local_228.ArrayNum;
            }
            this_00 = (FLocItem *)(local_228.AllocatorInstance.Data + (longlong)(int)uVar21 * 0x20);
            uVar12 = 0;
            if ((int)uVar15 < iVar16) {
              uVar12 = ~uVar15 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              pFVar9 = (FString *)(*pcVar4)();
              return pFVar9;
            }
            bVar6 = FLocItem::operator==
                              (this_00,(FLocItem *)
                                       (local_228.AllocatorInstance.Data +
                                       (longlong)(int)uVar15 * 0x20));
            bVar6 = !bVar6;
            uVar15 = uVar15 + 1;
            iVar16 = local_228.ArrayNum;
          } while ((int)uVar15 < local_228.ArrayNum);
        }
        uVar21 = uVar8;
      } while ((int)uVar8 < iVar16 + -1);
      if (bVar6) {
LAB_146b71eae:
        lVar11 = *plVar20;
        local_188 = (FLocTextConflicts *)(lVar11 + 0x40);
        local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1b8.Data.ArrayNum = 0;
        local_1b8.Data.ArrayMax = 0;
        TStack_180.Array = (TBitArray<FDefaultBitArrayAllocator> *)(lVar11 + 0x50);
        local_1e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1e8.Data.ArrayNum = 0;
        local_1e8.Data.ArrayMax = 0;
        local_1f8.Data = (FScriptContainerElement *)0x0;
        iVar19 = 0;
        local_1f0 = 0;
        uVar8 = 1;
        uVar21 = *(uint *)(lVar11 + 0x68);
        iStack_138 = iVar19;
        TStack_180.CurrentBitIndex = 0;
        if (uVar21 != 0) {
          pTVar13 = TStack_180.Array;
          if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar11 + 0x60) !=
              (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            pTVar13 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar11 + 0x60);
          }
          uVar15 = *(uint *)(pTVar13->AllocatorInstance).InlineData;
          iStack_138 = 0;
          iVar19 = 0;
          while (uVar15 == 0) {
            lVar11 = (longlong)iVar19;
            iStack_138 = iStack_138 + 0x20;
            iVar19 = iVar19 + 1;
            TStack_180.CurrentBitIndex = uVar21;
            if ((int)((uVar21 - 1) + ((int)(uVar21 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
            goto LAB_146b71f5f;
            uVar15 = *(uint *)((pTVar13->AllocatorInstance).InlineData + lVar11 * 4 + 4);
          }
          uVar8 = -uVar15 & uVar15;
          uVar2 = (ulonglong)uVar8 * 2 + 1;
          lVar11 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          local_124 = (int)lVar11;
          TStack_180.CurrentBitIndex = iStack_138 + -1 + local_124;
          if ((int)uVar21 < TStack_180.CurrentBitIndex) {
            TStack_180.CurrentBitIndex = uVar21;
          }
        }
LAB_146b71f5f:
        uStack_150 = CONCAT44(uVar8,iVar19);
        uStack_140 = 0xffffffff;
        uVar8 = uStack_140;
        uStack_140 = 0xffffffff;
        uStack_134 = local_4c;
        TStack_180._padding_ = uStack_150;
        TStack_180.BaseBitIndex = iStack_138;
        TStack_180._28_4_ = local_4c;
        TStack_180.UnvisitedBitMask = 0xffffffff;
        local_158 = local_188;
        pTStack_148 = TStack_180.Array;
        uStack_13c = TStack_180.CurrentBitIndex;
        if (TStack_180.CurrentBitIndex < (int)uVar21) {
          bVar6 = true;
          do {
            iVar16 = TStack_180.CurrentBitIndex;
            pFVar5 = local_188;
            local_218.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_218.Data.ArrayNum =
                 *(int *)((longlong)TStack_180.CurrentBitIndex * 0x38 + 8 +
                         *(longlong *)&local_188->EntriesByKey);
            lVar11 = (longlong)local_218.Data.ArrayNum;
            pvVar3 = *(void **)((longlong)TStack_180.CurrentBitIndex * 0x38 +
                               *(longlong *)&local_188->EntriesByKey);
            if (local_218.Data.ArrayNum == 0) {
              local_218.Data.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_218.Data.ArrayNum,0,(ForAnyElementType *)&local_218,
                         local_218.Data.ArrayNum,&local_218.Data.ArrayMax);
              memcpy(local_218.Data.AllocatorInstance.Data,pvVar3,lVar11 * 2);
            }
            ::FString::ReplaceInline(&local_218,L"\\",L"/",IgnoreCase);
            local_208.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_208.Data.ArrayNum =
                 *(int *)((longlong)iVar16 * 0x38 + 0x18 + *(longlong *)&pFVar5->EntriesByKey);
            lVar11 = (longlong)local_208.Data.ArrayNum;
            pvVar3 = *(void **)((longlong)iVar16 * 0x38 + 0x10 + *(longlong *)&pFVar5->EntriesByKey)
            ;
            if (local_208.Data.ArrayNum == 0) {
              local_208.Data.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_208.Data.ArrayNum,0,(ForAnyElementType *)&local_208,
                         local_208.Data.ArrayNum,&local_208.Data.ArrayMax);
              memcpy(local_208.Data.AllocatorInstance.Data,pvVar3,lVar11 * 2);
            }
            ::FString::ReplaceCharWithEscapedCharInline
                      (&local_208,(TArray<wchar_t,TSizedDefaultAllocator<32>_> *)0x0);
            if (bVar6) {
              ::FString::FString(&local_d8,L":");
              bVar6 = ::FString::Split(&local_218,&local_d8,&local_1b8,&local_1e8,IgnoreCase,FromEnd
                                      );
              if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_d8.Data.AllocatorInstance.Data);
              }
              if ((!bVar6) || (bVar6 = ::FString::IsNumeric(&local_1e8), !bVar6)) {
                iVar16 = local_218.Data.ArrayNum + -1;
                if (local_218.Data.ArrayNum == 0) {
                  iVar16 = 0;
                }
                ::FString::AssignRange
                          (&local_1b8,(wchar_t *)local_218.Data.AllocatorInstance.Data,iVar16);
                ::FString::operator=(&local_1e8,L"0");
              }
              iVar16 = local_208.Data.ArrayNum;
              _Src.Data = local_208.Data.AllocatorInstance.Data;
              lVar11 = (longlong)local_208.Data.ArrayNum;
              local_1f0 = CONCAT44(local_1f0._4_4_,local_208.Data.ArrayNum);
              if ((local_208.Data.ArrayNum == 0) && (local_1f0._4_4_ == 0)) {
                local_1f0 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_208.Data.ArrayNum,local_1f0._4_4_,&local_1f8,
                           local_208.Data.ArrayNum,(int *)((longlong)&local_1f0 + 4));
                if (iVar16 != 0) {
                  memcpy(local_1f8.Data,_Src.Data,lVar11 * 2);
                }
              }
              if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_208.Data.AllocatorInstance.Data);
              }
              if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_218.Data.AllocatorInstance.Data);
              }
              bVar6 = false;
            }
            else {
              local_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_1c8.Data.ArrayNum = 0;
              local_1c8.Data.ArrayMax = 0;
              local_1d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_1d8.Data.ArrayNum = 0;
              local_1d8.Data.ArrayMax = 0;
              ::FString::FString(&local_c8,L":");
              bVar7 = ::FString::Split(&local_218,&local_c8,&local_1c8,&local_1d8,IgnoreCase,FromEnd
                                      );
              if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_c8.Data.AllocatorInstance.Data);
              }
              if ((!bVar7) || (bVar7 = ::FString::IsNumeric(&local_1d8), !bVar7)) {
                iVar16 = local_218.Data.ArrayNum + -1;
                if (local_218.Data.ArrayNum == 0) {
                  iVar16 = 0;
                }
                ::FString::AssignRange
                          (&local_1c8,(wchar_t *)local_218.Data.AllocatorInstance.Data,iVar16);
                ::FString::operator=(&local_1d8,L"0");
              }
              ::FString::PrintfImpl(&local_118,L"%s,%s,%s,%s,%s,%s,%s,%s\n");
              iVar16 = local_118.Data.ArrayNum + -1;
              if (local_118.Data.ArrayNum == 0) {
                iVar16 = 0;
              }
              ::FString::AppendChars
                        (__return_storage_ptr__,(wchar_t *)local_118.Data.AllocatorInstance.Data,
                         iVar16);
              if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_118.Data.AllocatorInstance.Data);
              }
              if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
              }
              if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
              }
              if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_208.Data.AllocatorInstance.Data);
              }
              if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_218.Data.AllocatorInstance.Data);
              }
            }
            TStack_180.UnvisitedBitMask = TStack_180.UnvisitedBitMask & ~TStack_180._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_180);
          } while (TStack_180.CurrentBitIndex < (TStack_180.Array)->NumBits);
          iVar16 = local_228.ArrayNum;
          uVar8 = uStack_140;
        }
        uStack_140 = uVar8;
        if (local_1f8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f8.Data);
          iVar16 = local_228.ArrayNum;
        }
        if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
          iVar16 = local_228.ArrayNum;
        }
        if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
          iVar16 = local_228.ArrayNum;
        }
      }
    }
    DestructItems<FLocItem,int>((FLocItem *)local_228.AllocatorInstance.Data,iVar16);
    if ((FLocItem *)local_228.AllocatorInstance.Data != (FLocItem *)0x0) {
      FMemory::Free(local_228.AllocatorInstance.Data);
    }
    TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
  } while( true );
}

