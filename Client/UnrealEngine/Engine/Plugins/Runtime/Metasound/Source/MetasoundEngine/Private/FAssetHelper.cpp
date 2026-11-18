// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 6

// GetReferencedAssets<UMetaSoundPatch> @ 14b31b130

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FMetasoundAssetBase_*,TSizedDefaultAllocator<32>_> * __cdecl
Metasound::Engine::FAssetHelper::GetReferencedAssets<UMetaSoundPatch>
          (TArray<FMetasoundAssetBase_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UMetaSoundPatch *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  UMetaSoundPatch *this;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *pTVar6;
  bool bVar7;
  int iVar8;
  TArray<FMetasoundAssetBase_*,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  UMetaSoundPatch *local_res10;
  int local_res18;
  int local_res20;
  longlong local_d8;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *local_d0;
  int iStack_c8;
  uint uStack_c4;
  undefined1 *local_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  int local_b0;
  int iStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  IMetasoundUObjectRegistry *local_a0;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  FString local_68;
  FString local_58;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_res10 = param_1;
  local_a0 = IMetasoundUObjectRegistry::Get();
  puVar1 = &(param_1->ReferencedAssetClassObjects).Elements.field_0x10;
  iVar8 = *(int *)&(param_1->ReferencedAssetClassObjects).Elements.field_0x28;
  local_d0 = &param_1->ReferencedAssetClassObjects;
  uStack_c4 = 1;
  iStack_c8 = 0;
  iStack_b4 = iStack_c8;
  local_b0 = 0;
  if (iVar8 != 0) {
    puVar15 = *(uint **)&(param_1->ReferencedAssetClassObjects).Elements.field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar12 = *puVar15;
    iStack_c8 = 0;
    while (uVar12 == 0) {
      lVar10 = (longlong)iStack_c8;
      local_b0 = local_b0 + 0x20;
      iStack_c8 = iStack_c8 + 1;
      iStack_b4 = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c8) goto LAB_14b31b1ed;
      uVar12 = puVar15[lVar10 + 1];
    }
    uStack_c4 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uStack_c4 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res18 = (int)lVar10;
    iStack_b4 = local_b0 + -1 + local_res18;
    if (iVar8 < iStack_b4) {
      iStack_b4 = iVar8;
    }
  }
LAB_14b31b1ed:
  iStack_a8 = *(int *)&(param_1->ReferencedAssetClassObjects).Elements.field_0x8 -
              *(int *)&(param_1->ReferencedAssetClassObjects).Elements.field_0x34;
  uVar12 = *(uint *)&(param_1->ReferencedAssetClassObjects).Elements.field_0x28;
  TStack_90._padding_ = CONCAT44(uStack_c4,iStack_c8);
  uStack_b8 = 0xffffffff;
  uVar16 = uVar12 & 0xffffffe0;
  TStack_90.CurrentBitIndex = iStack_b4;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar12 >> 5;
  TStack_90._28_4_ = iStack_b4;
  TStack_90.BaseBitIndex = local_b0;
  uStack_70 = CONCAT44(uStack_a4,iStack_a8);
  local_c0 = puVar1;
  iStack_ac = iStack_b4;
  local_98 = local_d0;
  TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar8 < (int)uVar12)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TArray<FMetasoundAssetBase_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
    return pTVar9;
  }
  this = local_res10;
  uVar3 = *(uint *)&(param_1->ReferencedAssetClassObjects).Elements.field_0x28;
  if (uVar12 != uVar3) {
    puVar14 = *(undefined1 **)&(param_1->ReferencedAssetClassObjects).Elements.field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar11 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar11;
      uVar16 = uVar16 + 0x20;
      iVar11 = iVar11 + 1;
      uVar12 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14b31b300;
      uVar12 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res20 = (int)lVar10;
    uVar12 = local_res20 + -1 + uVar16;
    if ((int)uVar3 < (int)uVar12) {
      uVar12 = uVar3;
    }
  }
LAB_14b31b300:
  while( true ) {
    pTVar6 = local_98;
    if (*(int *)&(local_98->Elements).field_0x8 - *(int *)&(local_98->Elements).field_0x34 !=
        (int)uStack_70) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_90.CurrentBitIndex == uVar12) &&
        (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar6 == &this->ReferencedAssetClassObjects)) break;
    puVar13 = (undefined8 *)
              ((longlong)TStack_90.CurrentBitIndex * 0x10 + *(longlong *)&pTVar6->Elements);
    local_d8 = (**(code **)((longlong)*local_a0 + 0x50))(local_a0,*puVar13);
    if (local_d8 == 0) {
      if (1 < (byte)LogMetaSound._0_1_) {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_58,(UObject *)0x0);
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)*puVar13,&local_68,(UObject *)0x0);
        UE::Logging::Private::BasicLog<2>
                  (&`public:_static_class_TArray<FMetasoundAssetBase*___ptr64,TSizedDefaultAllocator<32>_>___cdecl_Metasound::Engine::FAssetHelper::GetReferencedAssets<UMetaSoundPatch>(UMetaSoundPatch&___ptr64)'
                    ::__l12::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar4 <= (FScriptContainerElement *)&local_d8) &&
          ((FScriptContainerElement *)&local_d8 <
           pFVar4 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TArray<FMetasoundAssetBase_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar9;
      }
      iVar8 = __return_storage_ptr__->ArrayNum;
      if (iVar8 == __return_storage_ptr__->ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar8 + 1;
      *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) =
           local_d8;
    }
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
  }
  return __return_storage_ptr__;
}

// GetReferencedAssets<UMetaSoundSource> @ 14b31b4b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FMetasoundAssetBase_*,TSizedDefaultAllocator<32>_> * __cdecl
Metasound::Engine::FAssetHelper::GetReferencedAssets<UMetaSoundSource>
          (TArray<FMetasoundAssetBase_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UMetaSoundSource *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  UMetaSoundSource *this;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *pTVar6;
  bool bVar7;
  int iVar8;
  TArray<FMetasoundAssetBase_*,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  UMetaSoundSource *local_res10;
  int local_res18;
  int local_res20;
  longlong local_d8;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *local_d0;
  int iStack_c8;
  uint uStack_c4;
  undefined1 *local_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  int local_b0;
  int iStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  IMetasoundUObjectRegistry *local_a0;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  FString local_68;
  FString local_58;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_res10 = param_1;
  local_a0 = IMetasoundUObjectRegistry::Get();
  puVar1 = &(param_1->ReferencedAssetClassObjects).Elements.field_0x10;
  iVar8 = *(int *)&(param_1->ReferencedAssetClassObjects).Elements.field_0x28;
  local_d0 = &param_1->ReferencedAssetClassObjects;
  uStack_c4 = 1;
  iStack_c8 = 0;
  iStack_b4 = iStack_c8;
  local_b0 = 0;
  if (iVar8 != 0) {
    puVar15 = *(uint **)&(param_1->ReferencedAssetClassObjects).Elements.field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar12 = *puVar15;
    iStack_c8 = 0;
    while (uVar12 == 0) {
      lVar10 = (longlong)iStack_c8;
      local_b0 = local_b0 + 0x20;
      iStack_c8 = iStack_c8 + 1;
      iStack_b4 = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c8) goto LAB_14b31b56d;
      uVar12 = puVar15[lVar10 + 1];
    }
    uStack_c4 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uStack_c4 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res18 = (int)lVar10;
    iStack_b4 = local_b0 + -1 + local_res18;
    if (iVar8 < iStack_b4) {
      iStack_b4 = iVar8;
    }
  }
LAB_14b31b56d:
  iStack_a8 = *(int *)&(param_1->ReferencedAssetClassObjects).Elements.field_0x8 -
              *(int *)&(param_1->ReferencedAssetClassObjects).Elements.field_0x34;
  uVar12 = *(uint *)&(param_1->ReferencedAssetClassObjects).Elements.field_0x28;
  TStack_90._padding_ = CONCAT44(uStack_c4,iStack_c8);
  uStack_b8 = 0xffffffff;
  uVar16 = uVar12 & 0xffffffe0;
  TStack_90.CurrentBitIndex = iStack_b4;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar12 >> 5;
  TStack_90._28_4_ = iStack_b4;
  TStack_90.BaseBitIndex = local_b0;
  uStack_70 = CONCAT44(uStack_a4,iStack_a8);
  local_c0 = puVar1;
  iStack_ac = iStack_b4;
  local_98 = local_d0;
  TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar8 < (int)uVar12)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TArray<FMetasoundAssetBase_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
    return pTVar9;
  }
  this = local_res10;
  uVar3 = *(uint *)&(param_1->ReferencedAssetClassObjects).Elements.field_0x28;
  if (uVar12 != uVar3) {
    puVar14 = *(undefined1 **)&(param_1->ReferencedAssetClassObjects).Elements.field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar11 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar11;
      uVar16 = uVar16 + 0x20;
      iVar11 = iVar11 + 1;
      uVar12 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14b31b680;
      uVar12 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res20 = (int)lVar10;
    uVar12 = local_res20 + -1 + uVar16;
    if ((int)uVar3 < (int)uVar12) {
      uVar12 = uVar3;
    }
  }
LAB_14b31b680:
  while( true ) {
    pTVar6 = local_98;
    if (*(int *)&(local_98->Elements).field_0x8 - *(int *)&(local_98->Elements).field_0x34 !=
        (int)uStack_70) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_90.CurrentBitIndex == uVar12) &&
        (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar6 == &this->ReferencedAssetClassObjects)) break;
    puVar13 = (undefined8 *)
              ((longlong)TStack_90.CurrentBitIndex * 0x10 + *(longlong *)&pTVar6->Elements);
    local_d8 = (**(code **)((longlong)*local_a0 + 0x50))(local_a0,*puVar13);
    if (local_d8 == 0) {
      if (1 < (byte)LogMetaSound._0_1_) {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_58,(UObject *)0x0);
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)*puVar13,&local_68,(UObject *)0x0);
        UE::Logging::Private::BasicLog<2>
                  (&`public:_static_class_TArray<FMetasoundAssetBase*___ptr64,TSizedDefaultAllocator<32>_>___cdecl_Metasound::Engine::FAssetHelper::GetReferencedAssets<UMetaSoundSource>(UMetaSoundSource&___ptr64)'
                    ::__l12::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar4 <= (FScriptContainerElement *)&local_d8) &&
          ((FScriptContainerElement *)&local_d8 <
           pFVar4 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TArray<FMetasoundAssetBase_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar9;
      }
      iVar8 = __return_storage_ptr__->ArrayNum;
      if (iVar8 == __return_storage_ptr__->ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar8 + 1;
      *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) =
           local_d8;
    }
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
  }
  return __return_storage_ptr__;
}

// operator() @ 1505648f0

bool __thiscall
`Metasound::Engine::FAssetHelper::GetAssetPathChecked<UMetaSoundPatch_const_>'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<8562638116328833245>);
  if (bVar2) {
    UObjectBaseUtility::GetPathName(*(UObjectBaseUtility **)this,&local_18,(UObject *)0x0);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8562638116328833245>,
                       &`public:___cdecl_`public:_static_struct_FTopLevelAssetPath___cdecl_Metasound::Engine::FAssetHelper::GetAssetPathChecked<UMetaSoundPatch_const_>(UMetaSoundPatch_const&___ptr64)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15056495a;
    }
  }
  bVar2 = false;
LAB_15056495a:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150564990

bool __thiscall
`Metasound::Engine::FAssetHelper::GetAssetPathChecked<UMetaSoundSource_const_>'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<8562638116328833245>);
  if (bVar2) {
    UObjectBaseUtility::GetPathName(*(UObjectBaseUtility **)this,&local_18,(UObject *)0x0);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8562638116328833245>,
                       &`public:___cdecl_`public:_static_struct_FTopLevelAssetPath___cdecl_Metasound::Engine::FAssetHelper::GetAssetPathChecked<UMetaSoundSource_const_>(UMetaSoundSource_const&___ptr64)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1505649fa;
    }
  }
  bVar2 = false;
LAB_1505649fa:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1505651a0

bool __thiscall
`Metasound::Engine::FAssetHelper::GetAssetPathChecked<UMetaSoundPatch_const_>'::__l2::<lambda_2>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<8562638116328833246>);
  if (bVar2) {
    UObjectBaseUtility::GetPathName(*(UObjectBaseUtility **)this,&local_18,(UObject *)0x0);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8562638116328833246>,
                       &`public:___cdecl_`public:_static_struct_FTopLevelAssetPath___cdecl_Metasound::Engine::FAssetHelper::GetAssetPathChecked<UMetaSoundPatch_const_>(UMetaSoundPatch_const&___ptr64)'::`2'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15056520a;
    }
  }
  bVar2 = false;
LAB_15056520a:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150565240

bool __thiscall
`Metasound::Engine::FAssetHelper::GetAssetPathChecked<UMetaSoundSource_const_>'::__l2::<lambda_2>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<8562638116328833246>);
  if (bVar2) {
    UObjectBaseUtility::GetPathName(*(UObjectBaseUtility **)this,&local_18,(UObject *)0x0);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8562638116328833246>,
                       &`public:___cdecl_`public:_static_struct_FTopLevelAssetPath___cdecl_Metasound::Engine::FAssetHelper::GetAssetPathChecked<UMetaSoundSource_const_>(UMetaSoundSource_const&___ptr64)'::`2'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1505652aa;
    }
  }
  bVar2 = false;
LAB_1505652aa:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

