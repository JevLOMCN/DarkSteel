// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 3

// GatherChildBranches @ 14da8d070

void __cdecl
PV::Facades::FTreeFacade::GatherChildBranches
          (FBranchFacade *param_1,int param_2,TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TManagedArray<int> *pTVar3;
  int *piVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  int *piVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  int local_38 [4];
  
  pTVar9 = FBranchFacade::GetChildren(param_1,param_2);
  if (((param_1->BranchNumbers).ConstAttributeArray == (TManagedArray<int> *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x67,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar12 = (pTVar9->AllocatorInstance).Data;
  iVar2 = pTVar9->ArrayNum;
  pTVar3 = (param_1->BranchNumbers).ConstAttributeArray;
  pFVar1 = pFVar12 + (longlong)iVar2 * 4;
LAB_14da8d0d6:
  if (pTVar9->ArrayNum != iVar2) {
    local_res8[0] = 0;
    `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
              (local_res8);
  }
  if (pFVar12 == pFVar1) {
    return;
  }
  piVar4 = *(int **)&pTVar3->field_0x10;
  if (piVar4 != piVar4 + *(int *)&pTVar3->field_0x18) {
    piVar10 = piVar4;
    do {
      if (*piVar10 == *(int *)pFVar12) {
        local_38[0] = (int)((longlong)piVar10 - (longlong)piVar4 >> 2);
        if (local_38[0] == -1) goto LAB_14da8d125;
        pFVar5 = (param_3->AllocatorInstance).Data;
        pFVar11 = pFVar5;
        goto joined_r0x00014da8d15b;
      }
      piVar10 = piVar10 + 1;
    } while (piVar10 != piVar4 + *(int *)&pTVar3->field_0x18);
  }
  local_38[0] = -1;
  goto LAB_14da8d125;
joined_r0x00014da8d15b:
  if (pFVar11 == pFVar5 + (longlong)param_3->ArrayNum * 4) goto LAB_14da8d16d;
  if (*(int *)pFVar11 == local_38[0]) goto LAB_14da8d125;
  pFVar11 = pFVar11 + 4;
  goto joined_r0x00014da8d15b;
LAB_14da8d16d:
  if (((pFVar5 <= (FScriptContainerElement *)local_38) &&
      ((FScriptContainerElement *)local_38 < pFVar5 + (longlong)param_3->ArrayMax * 4)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar8 = param_3->ArrayNum;
  if (iVar8 == param_3->ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_3->AllocatorInstance,&param_3->ArrayMax);
  }
  param_3->ArrayNum = iVar8 + 1;
  *(int *)((param_3->AllocatorInstance).Data + (longlong)iVar8 * 4) = local_38[0];
LAB_14da8d125:
  GatherChildBranches(param_1,local_38[0],param_3);
  pFVar12 = pFVar12 + 4;
  goto LAB_14da8d0d6;
}

// RemoveBranches @ 14daa0cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
PV::Facades::FTreeFacade::RemoveBranches
          (FBranchFacade *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          FManagedArrayCollection *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  uint uVar12;
  undefined1 auStackY_b58 [32];
  bool local_b28;
  bool local_b27;
  bool local_b26 [6];
  uint local_b20;
  longlong local_b18;
  TArray<bool,TSizedDefaultAllocator<32>_> local_b10;
  TArray<bool,TSizedDefaultAllocator<32>_> local_b00;
  TArray<bool,TSizedDefaultAllocator<32>_> local_af0;
  FManagedArrayCollection *local_ae0;
  FFoliageFacade local_ad8;
  FBranchFacade local_858;
  FPointFacade local_568;
  undefined1 local_138 [72];
  undefined4 local_f0;
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_e8;
  void *local_a8;
  undefined4 local_a0;
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_98;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_b58;
  local_ae0 = param_3;
  FBranchFacade::FBranchFacade(&local_858,param_3);
  FPointFacade::FPointFacade(&local_568,param_3);
  FFoliageFacade::FFoliageFacade(&local_ad8,param_3,0);
  uVar9 = param_2->ArrayNum - 1;
  if (-1 < (int)uVar9) {
    lVar11 = (longlong)(int)uVar9 * 4;
    do {
      uVar4 = 0;
      if ((int)uVar9 < param_2->ArrayNum) {
        uVar4 = ~uVar9 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      GatherChildBranches(param_1,*(int *)((param_2->AllocatorInstance).Data + lVar11),param_2);
      lVar11 = lVar11 + -4;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  local_af0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_af0.ArrayNum = 0;
  local_af0.ArrayMax = 0;
  if (local_858.Parents.ConstAttributeArray ==
      (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
    iVar5 = FManagedArrayCollection::NumElements
                      (local_858.Parents.ConstCollection,local_858.Parents.Group);
  }
  else {
    iVar5 = (**(code **)(*(longlong *)local_858.Parents.ConstAttributeArray + 0x60))();
  }
  local_b28 = false;
  TArray<bool,TSizedDefaultAllocator<32>_>::Init(&local_af0,&local_b28,iVar5);
  local_b00.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b00.ArrayNum = 0;
  local_b00.ArrayMax = 0;
  if (local_568.Positions.ConstAttributeArray == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
    iVar5 = FManagedArrayCollection::NumElements
                      (local_568.Positions.ConstCollection,local_568.Positions.Group);
  }
  else {
    iVar5 = (**(code **)(*(longlong *)local_568.Positions.ConstAttributeArray + 0x60))();
  }
  local_b27 = false;
  TArray<bool,TSizedDefaultAllocator<32>_>::Init(&local_b00,&local_b27,iVar5);
  local_b10.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b10.ArrayNum = 0;
  local_b10.ArrayMax = 0;
  if (local_ad8.NameIdsAttribute.ConstAttributeArray == (TManagedArray<int> *)0x0) {
    iVar5 = FManagedArrayCollection::NumElements
                      (local_ad8.NameIdsAttribute.ConstCollection,local_ad8.NameIdsAttribute.Group);
  }
  else {
    iVar5 = (**(code **)(*(longlong *)local_ad8.NameIdsAttribute.ConstAttributeArray + 0x60))();
  }
  local_b26[0] = false;
  TArray<bool,TSizedDefaultAllocator<32>_>::Init(&local_b10,local_b26,iVar5);
  iVar5 = param_2->ArrayNum;
  local_b20 = 0;
  if (0 < iVar5) {
    local_b18 = 0;
    do {
      lVar11 = local_b18;
      uVar9 = local_b20;
      uVar12 = ~local_b20 >> 0x1f;
      uVar4 = 0;
      if ((int)local_b20 < iVar5) {
        uVar4 = uVar12;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar4 = *(uint *)((param_2->AllocatorInstance).Data + lVar11);
      uVar6 = 0;
      if ((int)uVar4 < local_af0.ArrayNum) {
        uVar6 = ~uVar4 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_af0.AllocatorInstance.Data[(int)uVar4] = (FScriptContainerElement)0x1;
      uVar4 = 0;
      if ((int)uVar9 < param_2->ArrayNum) {
        uVar4 = uVar12;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = *(int *)((param_2->AllocatorInstance).Data + lVar11);
      if (((local_858.BranchPoints.ConstAttributeArray ==
            (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) || (iVar5 < 0)) ||
         (iVar7 = (**(code **)(*(longlong *)local_858.BranchPoints.ConstAttributeArray + 0x60))(),
         iVar7 <= iVar5)) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          atexit(`PV::Facades::FBranchFacade::GetPoints'::__l2::
                 _dynamic_atexit_destructor_for__EmptyPoints__);
          _Init_thread_footer(&::_TSS0);
        }
        pTVar8 = &EmptyPoints;
      }
      else {
        pTVar8 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::operator[]
                           (&local_858.BranchPoints,iVar5);
      }
      pFVar10 = (pTVar8->AllocatorInstance).Data;
      iVar5 = pTVar8->ArrayNum;
      pFVar1 = pFVar10 + (longlong)iVar5 * 4;
      while( true ) {
        if (pTVar8->ArrayNum != iVar5) {
          local_b26[1] = false;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_b26 + 1);
        }
        if (pFVar10 == pFVar1) break;
        uVar9 = *(uint *)pFVar10;
        uVar4 = 0;
        if ((int)uVar9 < local_b00.ArrayNum) {
          uVar4 = ~uVar9 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar10 = pFVar10 + 4;
        local_b00.AllocatorInstance.Data[(int)uVar9] = (FScriptContainerElement)0x1;
      }
      uVar9 = 0;
      if ((int)local_b20 < param_2->ArrayNum) {
        uVar9 = uVar12;
      }
      if ((uVar9 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = *(int *)((param_2->AllocatorInstance).Data + local_b18);
      if (((local_ad8.FoliageIdsAttribute.ConstAttributeArray ==
            (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) || (iVar5 < 0)) ||
         (iVar7 = (**(code **)(*(longlong *)local_ad8.FoliageIdsAttribute.ConstAttributeArray + 0x60
                              ))(), iVar7 <= iVar5)) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          atexit(`PV::Facades::FFoliageFacade::GetFoliageEntryIdsForBranch'::__l2::
                 _dynamic_atexit_destructor_for__EmptyArray__);
          _Init_thread_footer(&::_TSS0);
        }
        pTVar8 = &::EmptyArray;
      }
      else {
        pTVar8 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::operator[]
                           (&local_ad8.FoliageIdsAttribute,iVar5);
      }
      pFVar10 = (pTVar8->AllocatorInstance).Data;
      iVar5 = pTVar8->ArrayNum;
      pFVar1 = pFVar10 + (longlong)iVar5 * 4;
      while( true ) {
        if (pTVar8->ArrayNum != iVar5) {
          local_b26[2] = false;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_b26 + 2);
        }
        if (pFVar10 == pFVar1) break;
        uVar9 = *(uint *)pFVar10;
        uVar4 = 0;
        if ((int)uVar9 < local_b10.ArrayNum) {
          uVar4 = ~uVar9 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar10 = pFVar10 + 4;
        local_b10.AllocatorInstance.Data[(int)uVar9] = (FScriptContainerElement)0x1;
      }
      local_b20 = local_b20 + 1;
      iVar5 = param_2->ArrayNum;
      local_b18 = local_b18 + 4;
    } while ((int)local_b20 < iVar5);
  }
  RemoveEntriesAndReIndexAttributes
            ((FRemoveEntriesResult *)local_138,local_ae0,&local_b00,&local_af0,&local_b10);
  local_50 = 0;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98);
  local_a0 = 0;
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_e8);
  local_f0 = 0;
  if ((void *)local_138._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_138._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_138);
  if (local_b10.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b10.AllocatorInstance.Data);
  }
  if (local_b00.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b00.AllocatorInstance.Data);
  }
  if (local_af0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_af0.AllocatorInstance.Data);
  }
  return;
}

// RemoveEntriesAndReIndexAttributes @ 14daa1950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FRemoveEntriesResult * __cdecl
PV::Facades::FTreeFacade::RemoveEntriesAndReIndexAttributes
          (FRemoveEntriesResult *__return_storage_ptr__,FManagedArrayCollection *param_1,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_2,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_3,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  char cVar3;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  int *piVar9;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar10;
  FRemoveEntriesResult *pFVar11;
  undefined1 *puVar12;
  int iVar13;
  ForAnyElementType FVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  uint *puVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ForElementType<unsigned_int> FVar23;
  FScriptContainerElement *pFVar24;
  bool bVar25;
  undefined1 auStack_d58 [32];
  FScriptContainerElement *local_d38;
  FScriptContainerElement *local_d30;
  longlong local_d28;
  longlong local_d20;
  undefined8 local_d18;
  char local_d08;
  int local_d04;
  undefined1 local_d00;
  undefined1 local_cff;
  undefined1 local_cfe;
  undefined1 local_cfd [5];
  TArray<int,TSizedDefaultAllocator<32>_> local_cf8;
  TArray<int,TSizedDefaultAllocator<32>_> local_ce8;
  uint local_cd8 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_cd0;
  TArray<int,TSizedDefaultAllocator<32>_> local_cc0;
  uint local_cb0;
  int local_cac;
  int local_ca8 [2];
  uint local_ca0;
  uint uStack_c9c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_c98;
  undefined4 local_c90;
  uint uStack_c8c;
  uint uStack_c88;
  undefined4 uStack_c84;
  undefined4 local_c80;
  int local_c7c;
  int local_c78 [2];
  TArray<bool,TSizedDefaultAllocator<32>_> *local_c70;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_c68;
  FRemoveEntriesResult *local_c60;
  longlong *local_c58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_c50;
  FFoliageFacade local_c28;
  FBranchFacade local_9a8;
  FPointFacade local_6b8;
  undefined1 local_288 [32];
  ForElementType<unsigned_int> local_268;
  uint local_260;
  int local_25c;
  int local_258;
  int local_254;
  FScriptContainerElement local_250 [8];
  ForAnyElementType local_248;
  uint local_240;
  undefined1 local_238 [72];
  int local_1f0;
  undefined1 local_1e8 [72];
  int local_1a0;
  undefined1 local_198 [72];
  undefined4 local_150;
  undefined1 local_148 [72];
  undefined4 local_100;
  undefined1 local_f8 [72];
  undefined4 local_b0;
  undefined1 local_a8 [72];
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_d58;
  local_c68 = param_4;
  bVar25 = CpuChannel->Enabled < 0;
  local_c70 = param_2;
  local_c60 = __return_storage_ptr__;
  if (bVar25) {
    local_d08 = '\0';
  }
  else {
    local_d08 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId14,
               "PV::Facades::FTreeFacade::RemoveEntriesAndReIndexAttributes",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Facades\\PVTreeFacade.cpp"
               ,0xe);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId14);
  }
  FBranchFacade::FBranchFacade(&local_9a8,param_1);
  FPointFacade::FPointFacade(&local_6b8,param_1);
  FFoliageFacade::FFoliageFacade(&local_c28,param_1,0);
  IShrinkable::RemoveEntries
            ((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)local_1e8
             ,(IShrinkable *)&local_6b8,param_2);
  IShrinkable::RemoveEntries
            ((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)local_198
             ,(IShrinkable *)&local_9a8,param_3);
  IShrinkable::RemoveEntries
            ((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)local_238
             ,(IShrinkable *)&local_c28,param_4);
  if (local_9a8.Parents.ConstAttributeArray ==
      (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
    uVar5 = FManagedArrayCollection::NumElements
                      (local_9a8.Parents.ConstCollection,local_9a8.Parents.Group);
  }
  else {
    uVar5 = (**(code **)(*(longlong *)local_9a8.Parents.ConstAttributeArray + 0x60))();
  }
  uVar17 = 0;
  local_288._0_8_ = (FScriptContainerElement *)0x0;
  local_288._8_8_ = 0;
  local_268 = (ForElementType<unsigned_int>)0x0;
  local_260 = 0;
  local_25c = 0x80;
  local_258 = -1;
  local_254 = 0;
  local_248.Data = (FScriptContainerElement *)0x0;
  local_240 = 0;
  local_cb0 = uVar5;
  if (uVar5 == 0) goto LAB_14daa1d15;
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar5);
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_288,uVar5);
  uVar16 = 1;
  if (3 < uVar5) {
    uVar21 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_c80 = (undefined4)lVar15;
    uVar16 = 1 << ((byte)lVar15 & 0x1f);
  }
  if ((local_240 != 0) && ((int)uVar16 <= (int)local_240)) goto LAB_14daa1d15;
  local_240 = uVar16;
  if (local_248.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_248,0,0,4);
  }
  if (uVar16 != 0) {
    uVar20 = uVar16;
    if (uVar16 < 2) {
      if (local_248.Data != (FScriptContainerElement *)0x0) {
        uVar20 = 0;
        goto LAB_14daa1b5a;
      }
    }
    else {
LAB_14daa1b5a:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_248,0,uVar20,4);
    }
    if (0 < (int)uVar16) {
      uVar22 = (ulonglong)uVar16;
      uVar21 = uVar17;
      do {
        FVar14.Data = local_250;
        if (local_248.Data != (FScriptContainerElement *)0x0) {
          FVar14.Data = local_248.Data;
        }
        uVar8 = (longlong)(int)uVar16 - 1U & uVar21;
        uVar21 = uVar21 + 1;
        *(undefined4 *)(FVar14.Data + uVar8 * 4) = 0xffffffff;
        uVar22 = uVar22 - 1;
      } while (uVar22 != 0);
    }
  }
  if (local_240 != 0) {
    pTStack_c98 = (TBitArray<FDefaultBitArrayAllocator> *)(local_288 + 0x10);
    local_ca0 = 0;
    uStack_c9c = 1;
    uStack_c8c = 0;
    uStack_c88 = 0;
    uVar21 = uVar17;
    if (local_260 != 0) {
      FVar23 = (ForElementType<unsigned_int>)((longlong)local_288 + 0x10);
      if (local_268 != (ForElementType<unsigned_int>)0x0) {
        FVar23 = local_268;
      }
      uVar16 = *(uint *)FVar23;
      uVar22 = uVar17;
      while (uVar16 == 0) {
        uStack_c88 = (int)uVar22 + 0x20;
        uVar22 = (ulonglong)uStack_c88;
        iVar13 = (int)uVar21;
        local_ca0 = iVar13 + 1;
        uVar21 = (ulonglong)local_ca0;
        if ((int)(((int)(local_260 - 1) >> 0x1f & 0x1fU) + (local_260 - 1)) >> 5 < (int)local_ca0)
        goto LAB_14daa1c71;
        uVar16 = ((uint *)((longlong)FVar23 + 4))[iVar13];
      }
      uStack_c9c = ~(uVar16 - 1) & uVar16;
      uVar21 = (ulonglong)uStack_c9c * 2 + 1;
      lVar15 = 0x3f;
      if (uVar21 != 0) {
        for (; uVar21 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      local_c7c = (int)lVar15;
      uStack_c8c = local_c7c + -1 + uStack_c88;
      uVar21 = (ulonglong)uStack_c8c;
      if ((int)local_260 < (int)uStack_c8c) {
LAB_14daa1c71:
        uVar21 = (ulonglong)local_260;
        uStack_c8c = local_260;
      }
    }
    local_c90 = 0xffffffff;
    local_c58 = (longlong *)local_288;
    local_c50._padding_ = CONCAT44(uStack_c9c,local_ca0);
    local_c50.CurrentBitIndex = uStack_c8c;
    local_c50.UnvisitedBitMask = 0xffffffff;
    local_c50._28_4_ = uStack_c84;
    local_c50.BaseBitIndex = uStack_c88;
    local_c50.Array = pTStack_c98;
    if ((int)uVar21 < (int)local_260) {
      do {
        iVar13 = (int)uVar21;
        uVar16 = local_240 - 1 & *(uint *)(*local_c58 + (longlong)iVar13 * 0xc);
        lVar15 = *local_c58 + (longlong)iVar13 * 0xc;
        *(uint *)(lVar15 + 8) = uVar16;
        FVar14.Data = local_250;
        if (local_248.Data != (FScriptContainerElement *)0x0) {
          FVar14.Data = local_248.Data;
        }
        uVar21 = (longlong)(int)local_240 - 1U & (longlong)(int)uVar16;
        *(undefined4 *)(lVar15 + 4) = *(undefined4 *)(FVar14.Data + uVar21 * 4);
        *(int *)(FVar14.Data + uVar21 * 4) = iVar13;
        local_c50.UnvisitedBitMask = local_c50.UnvisitedBitMask & ~local_c50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_c50);
        uVar21 = (ulonglong)(uint)local_c50.CurrentBitIndex;
      } while (local_c50.CurrentBitIndex < (local_c50.Array)->NumBits);
    }
  }
LAB_14daa1d15:
  cVar3 = !bVar25;
  if ((int)uVar5 < 1) {
LAB_14daa2935:
    TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
    TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
              ((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
               local_148,
               (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
               local_1e8);
    TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
    TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
              ((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
               local_f8,(TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                         *)local_198);
    TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
    TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
              ((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
               local_a8,(TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                         *)local_238);
    TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
    TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
              (&__return_storage_ptr__->PointsOldIDsToNewIDs,
               (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
               local_148);
    TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
    TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
              (&__return_storage_ptr__->BranchesOldIDsToNewIDs,
               (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
               local_f8);
    TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
    TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
              (&__return_storage_ptr__->FoliageInstancesOldIDsToNewIDs,
               (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
               local_a8);
    local_60 = 0;
    if ((void *)local_a8._64_8_ != (void *)0x0) {
      FMemory::Free((void *)local_a8._64_8_);
    }
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_a8);
    local_b0 = 0;
    if ((void *)local_f8._64_8_ != (void *)0x0) {
      FMemory::Free((void *)local_f8._64_8_);
    }
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_f8);
    local_100 = 0;
    if ((void *)local_148._64_8_ != (void *)0x0) {
      FMemory::Free((void *)local_148._64_8_);
    }
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_148);
    local_240 = 0;
    if (local_248.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_248.Data);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_288);
    local_1f0 = 0;
    if ((undefined1 *)local_238._64_8_ != (undefined1 *)0x0) {
      FMemory::Free((void *)local_238._64_8_);
    }
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_238);
    local_150 = 0;
    if ((void *)local_198._64_8_ != (void *)0x0) {
      FMemory::Free((void *)local_198._64_8_);
    }
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_198);
    local_1a0 = 0;
    if ((undefined1 *)local_1e8._64_8_ != (undefined1 *)0x0) {
      FMemory::Free((void *)local_1e8._64_8_);
    }
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_1e8);
    if (cVar3 != '\0') {
      FCpuProfilerTrace::OutputEndEvent();
    }
    return __return_storage_ptr__;
  }
  do {
    iVar13 = (int)uVar17;
    if ((local_9a8.BranchNumbers.ConstAttributeArray == (TManagedArray<int> *)0x0) ||
       (iVar6 = (**(code **)(*(longlong *)local_9a8.BranchNumbers.ConstAttributeArray + 0x60))(),
       iVar6 <= iVar13)) {
      local_cac = -1;
    }
    else {
      piVar9 = TManagedArrayAccessor<int>::operator[](&local_9a8.BranchNumbers,iVar13);
      local_cac = *piVar9;
    }
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int>
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_288,local_c78,
               (bool *)&local_cac);
    uVar17 = (ulonglong)(iVar13 + 1U);
  } while ((int)(iVar13 + 1U) < (int)uVar5);
  local_d04 = 0;
  do {
    iVar13 = local_d04;
    local_ce8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_ce8.ArrayNum = 0;
    local_ce8.ArrayMax = 0;
    if ((local_9a8.BranchPoints.ConstAttributeArray ==
         (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) ||
       (iVar6 = (**(code **)(*(longlong *)local_9a8.BranchPoints.ConstAttributeArray + 0x60))(),
       iVar6 <= iVar13)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        atexit(`PV::Facades::FBranchFacade::GetPoints'::__l2::
               _dynamic_atexit_destructor_for__EmptyPoints__);
        _Init_thread_footer(&::_TSS0);
      }
      pTVar10 = &EmptyPoints;
    }
    else {
      pTVar10 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::operator[]
                          (&local_9a8.BranchPoints,iVar13);
    }
    pFVar24 = (pTVar10->AllocatorInstance).Data;
    iVar13 = pTVar10->ArrayNum;
    pFVar1 = pFVar24 + (longlong)iVar13 * 4;
LAB_14daa1e00:
    while( true ) {
      if (pTVar10->ArrayNum != iVar13) {
        local_d00 = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_d00);
      }
      pTVar4 = local_c70;
      if (pFVar24 == pFVar1) break;
      uVar5 = *(uint *)pFVar24;
      if (local_1e8._8_4_ != local_1e8._52_4_) {
        puVar12 = local_1e8 + 0x38;
        if ((undefined1 *)local_1e8._64_8_ != (undefined1 *)0x0) {
          puVar12 = (undefined1 *)local_1e8._64_8_;
        }
        lVar15 = (ulonglong)(local_1a0 - 1U & uVar5) * 4;
        for (iVar6 = *(int *)(puVar12 + lVar15); iVar6 != -1;
            iVar6 = *(int *)(local_1e8._0_8_ + 8 + (longlong)iVar6 * 0x10)) {
          if (*(uint *)(local_1e8._0_8_ + (longlong)iVar6 * 0x10) == uVar5) {
            if (iVar6 != -1) {
              puVar12 = local_1e8 + 0x38;
              if ((undefined1 *)local_1e8._64_8_ != (undefined1 *)0x0) {
                puVar12 = (undefined1 *)local_1e8._64_8_;
              }
              uVar16 = *(uint *)(puVar12 + lVar15);
              puVar18 = (uint *)0x0;
              if (uVar16 == 0xffffffff) goto LAB_14daa1fe1;
              goto LAB_14daa1fc0;
            }
            break;
          }
        }
      }
      uVar16 = 0;
      if ((int)uVar5 < local_c70->ArrayNum) {
        uVar16 = ~uVar5 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (local_d38 = (FScriptContainerElement *)(longlong)(int)uVar5,
         local_d30 = (FScriptContainerElement *)(longlong)local_c70->ArrayNum,
         bVar25 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar2 = (code *)swi(3);
        pFVar11 = (FRemoveEntriesResult *)(*pcVar2)();
        return pFVar11;
      }
      if (((FScriptContainerElement *)(longlong)(int)uVar5)
          [(longlong)(pTVar4->AllocatorInstance).Data] == (FScriptContainerElement)0x0) {
        if (local_ce8.AllocatorInstance.Data <= pFVar24) {
          if (pFVar24 < local_ce8.AllocatorInstance.Data + (longlong)local_ce8.ArrayMax * 4) {
            local_d20 = (longlong)local_ce8.ArrayNum;
            local_d18 = 4;
            local_d30 = local_ce8.AllocatorInstance.Data;
            local_d38 = pFVar24;
            local_d28 = (longlong)local_ce8.ArrayMax;
            bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar25) {
              pcVar2 = (code *)swi(3);
              pFVar11 = (FRemoveEntriesResult *)(*pcVar2)();
              return pFVar11;
            }
          }
        }
        if (local_ce8.ArrayNum == local_ce8.ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_ce8.AllocatorInstance,&local_ce8.ArrayMax);
          local_ce8.ArrayNum = iVar6;
        }
        lVar15 = (longlong)local_ce8.ArrayNum;
        local_ce8.ArrayNum = local_ce8.ArrayNum + 1;
        *(uint *)(local_ce8.AllocatorInstance.Data + lVar15 * 4) = *(uint *)pFVar24;
      }
      pFVar24 = pFVar24 + 4;
    }
    iVar13 = local_d04;
    if ((local_9a8.BranchPoints.ConstAttributeArray !=
         (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) &&
       (iVar6 = (**(code **)(*(longlong *)local_9a8.BranchPoints.ConstAttributeArray + 0x60))(),
       iVar13 = local_d04, local_d04 < iVar6)) {
      TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::ModifyAt
                (&local_9a8.BranchPoints,local_d04,&local_ce8);
    }
    local_cc0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_cc0.ArrayNum = 0;
    local_cc0.ArrayMax = 0;
    if (((local_9a8.Parents.ConstAttributeArray ==
          (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) || (iVar13 < 0)) ||
       (iVar6 = (**(code **)(*(longlong *)local_9a8.Parents.ConstAttributeArray + 0x60))(),
       iVar6 <= iVar13)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        atexit(`PV::Facades::FBranchFacade::GetParents'::__l2::
               _dynamic_atexit_destructor_for__EmptyParents__);
        _Init_thread_footer(&::_TSS0);
      }
      pTVar10 = &EmptyParents;
    }
    else {
      pTVar10 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::operator[]
                          (&local_9a8.Parents,iVar13);
    }
    pFVar24 = (pTVar10->AllocatorInstance).Data;
    iVar13 = pTVar10->ArrayNum;
    pFVar1 = pFVar24 + (longlong)iVar13 * 4;
    while( true ) {
      if (pTVar10->ArrayNum != iVar13) {
        local_cff = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_cff);
      }
      if (pFVar24 == pFVar1) break;
      uVar5 = *(uint *)pFVar24;
      if (uVar5 == 0) {
LAB_14daa2205:
        if (local_cc0.AllocatorInstance.Data <= pFVar24) {
          if (pFVar24 < local_cc0.AllocatorInstance.Data + (longlong)local_cc0.ArrayMax * 4) {
            local_d20 = (longlong)local_cc0.ArrayNum;
            local_d18 = 4;
            local_d30 = local_cc0.AllocatorInstance.Data;
            local_d38 = pFVar24;
            local_d28 = (longlong)local_cc0.ArrayMax;
            bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar25) {
              pcVar2 = (code *)swi(3);
              pFVar11 = (FRemoveEntriesResult *)(*pcVar2)();
              return pFVar11;
            }
          }
        }
        if (local_cc0.ArrayNum == local_cc0.ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_cc0.AllocatorInstance,&local_cc0.ArrayMax);
          local_cc0.ArrayNum = iVar6;
        }
        lVar15 = (longlong)local_cc0.ArrayNum;
        local_cc0.ArrayNum = local_cc0.ArrayNum + 1;
        *(uint *)(local_cc0.AllocatorInstance.Data + lVar15 * 4) = *(uint *)pFVar24;
LAB_14daa2295:
        pFVar24 = pFVar24 + 4;
      }
      else {
        if (local_288._8_4_ == local_254) goto LAB_14daa2295;
        FVar14.Data = local_250;
        if (local_248.Data != (FScriptContainerElement *)0x0) {
          FVar14.Data = local_248.Data;
        }
        iVar6 = *(int *)(FVar14.Data + (ulonglong)(local_240 - 1 & uVar5) * 4);
        if (iVar6 == -1) goto LAB_14daa2295;
        do {
          if (*(uint *)(local_288._0_8_ + (longlong)iVar6 * 0xc) == uVar5) goto LAB_14daa2205;
          iVar6 = *(int *)(local_288._0_8_ + (longlong)iVar6 * 0xc + 4);
        } while (iVar6 != -1);
        pFVar24 = pFVar24 + 4;
      }
    }
    iVar13 = local_d04;
    if ((local_9a8.Parents.ConstAttributeArray !=
         (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) &&
       (iVar6 = (**(code **)(*(longlong *)local_9a8.Parents.ConstAttributeArray + 0x60))(),
       iVar13 = local_d04, local_d04 < iVar6)) {
      TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::ModifyAt
                (&local_9a8.Parents,local_d04,&local_cc0);
    }
    local_cd0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_cd0.ArrayNum = 0;
    local_cd0.ArrayMax = 0;
    if (((local_9a8.Children.ConstAttributeArray ==
          (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) || (iVar13 < 0)) ||
       (iVar6 = (**(code **)(*(longlong *)local_9a8.Children.ConstAttributeArray + 0x60))(),
       iVar6 <= iVar13)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        atexit(`PV::Facades::FBranchFacade::GetChildren'::__l2::
               _dynamic_atexit_destructor_for__EmptyChildren__);
        _Init_thread_footer(&::_TSS0);
      }
      pTVar10 = &EmptyChildren;
    }
    else {
      pTVar10 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::operator[]
                          (&local_9a8.Children,iVar13);
    }
    pFVar24 = (pTVar10->AllocatorInstance).Data;
    iVar13 = pTVar10->ArrayNum;
    pFVar1 = pFVar24 + (longlong)iVar13 * 4;
    while( true ) {
      if (pTVar10->ArrayNum != iVar13) {
        local_cfe = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_cfe);
      }
      if (pFVar24 == pFVar1) break;
      if (local_288._8_4_ == local_254) {
LAB_14daa2455:
        pFVar24 = pFVar24 + 4;
      }
      else {
        FVar14.Data = local_250;
        if (local_248.Data != (FScriptContainerElement *)0x0) {
          FVar14.Data = local_248.Data;
        }
        iVar6 = *(int *)(FVar14.Data + (ulonglong)(local_240 - 1 & *(uint *)pFVar24) * 4);
        if (iVar6 == -1) goto LAB_14daa2455;
        do {
          if (*(uint *)(local_288._0_8_ + (longlong)iVar6 * 0xc) == *(uint *)pFVar24) {
            if (local_cd0.AllocatorInstance.Data <= pFVar24) {
              if (pFVar24 < local_cd0.AllocatorInstance.Data + (longlong)local_cd0.ArrayMax * 4) {
                local_d20 = (longlong)local_cd0.ArrayNum;
                local_d18 = 4;
                local_d30 = local_cd0.AllocatorInstance.Data;
                local_d38 = pFVar24;
                local_d28 = (longlong)local_cd0.ArrayMax;
                bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   );
                if (bVar25) {
                  pcVar2 = (code *)swi(3);
                  pFVar11 = (FRemoveEntriesResult *)(*pcVar2)();
                  return pFVar11;
                }
              }
            }
            if (local_cd0.ArrayNum == local_cd0.ArrayMax) {
              iVar6 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&local_cd0.AllocatorInstance,&local_cd0.ArrayMax);
              local_cd0.ArrayNum = iVar6;
            }
            lVar15 = (longlong)local_cd0.ArrayNum;
            local_cd0.ArrayNum = local_cd0.ArrayNum + 1;
            *(uint *)(local_cd0.AllocatorInstance.Data + lVar15 * 4) = *(uint *)pFVar24;
            goto LAB_14daa2455;
          }
          iVar6 = *(int *)(local_288._0_8_ + (longlong)iVar6 * 0xc + 4);
        } while (iVar6 != -1);
        pFVar24 = pFVar24 + 4;
      }
    }
    iVar13 = local_d04;
    if ((local_9a8.Children.ConstAttributeArray !=
         (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) &&
       (iVar6 = (**(code **)(*(longlong *)local_9a8.Children.ConstAttributeArray + 0x60))(),
       iVar13 = local_d04, local_d04 < iVar6)) {
      TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::ModifyAt
                (&local_9a8.Children,local_d04,&local_cd0);
    }
    local_cf8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_cf8.ArrayNum = 0;
    local_cf8.ArrayMax = 0;
    if (((local_c28.FoliageIdsAttribute.ConstAttributeArray ==
          (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) || (iVar13 < 0)) ||
       (iVar6 = (**(code **)(*(longlong *)local_c28.FoliageIdsAttribute.ConstAttributeArray + 0x60))
                          (), iVar6 <= iVar13)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        atexit(`PV::Facades::FFoliageFacade::GetFoliageEntryIdsForBranch'::__l2::
               _dynamic_atexit_destructor_for__EmptyArray__);
        _Init_thread_footer(&::_TSS0);
      }
      pTVar10 = &::EmptyArray;
    }
    else {
      pTVar10 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::operator[]
                          (&local_c28.FoliageIdsAttribute,iVar13);
    }
    iVar6 = local_d04;
    pFVar24 = (pTVar10->AllocatorInstance).Data;
    iVar13 = pTVar10->ArrayNum;
    pFVar1 = pFVar24 + (longlong)iVar13 * 4;
LAB_14daa2506:
    if (pTVar10->ArrayNum != iVar13) {
      local_cfd[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_cfd);
    }
    pTVar4 = local_c68;
    if (pFVar24 != pFVar1) {
      uVar5 = *(uint *)pFVar24;
      if (local_238._8_4_ != local_238._52_4_) {
        puVar12 = local_238 + 0x38;
        if ((undefined1 *)local_238._64_8_ != (undefined1 *)0x0) {
          puVar12 = (undefined1 *)local_238._64_8_;
        }
        for (iVar7 = *(int *)(puVar12 + (ulonglong)(local_1f0 - 1U & uVar5) * 4); iVar7 != -1;
            iVar7 = *(int *)(local_238._0_8_ + 8 + (longlong)iVar7 * 0x10)) {
          if (*(uint *)(local_238._0_8_ + (longlong)iVar7 * 0x10) == uVar5) {
            if (iVar7 != -1) {
              puVar12 = local_238 + 0x38;
              if ((undefined1 *)local_238._64_8_ != (undefined1 *)0x0) {
                puVar12 = (undefined1 *)local_238._64_8_;
              }
              uVar16 = *(uint *)(puVar12 + (ulonglong)(local_1f0 - 1U & uVar5) * 4);
              if (uVar16 == 0xffffffff) goto LAB_14daa26ee;
              goto LAB_14daa26d0;
            }
            break;
          }
        }
      }
      uVar16 = 0;
      if ((int)uVar5 < local_c68->ArrayNum) {
        uVar16 = ~uVar5 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (local_d38 = (FScriptContainerElement *)(longlong)(int)uVar5,
         local_d30 = (FScriptContainerElement *)(longlong)local_c68->ArrayNum,
         bVar25 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar2 = (code *)swi(3);
        pFVar11 = (FRemoveEntriesResult *)(*pcVar2)();
        return pFVar11;
      }
      if (((FScriptContainerElement *)(longlong)(int)uVar5)
          [(longlong)(pTVar4->AllocatorInstance).Data] == (FScriptContainerElement)0x0) {
        if (local_cf8.AllocatorInstance.Data <= pFVar24) {
          if (pFVar24 < local_cf8.AllocatorInstance.Data + (longlong)local_cf8.ArrayMax * 4) {
            local_d20 = (longlong)local_cf8.ArrayNum;
            local_d18 = 4;
            local_d30 = local_cf8.AllocatorInstance.Data;
            local_d38 = pFVar24;
            local_d28 = (longlong)local_cf8.ArrayMax;
            bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar25) {
              pcVar2 = (code *)swi(3);
              pFVar11 = (FRemoveEntriesResult *)(*pcVar2)();
              return pFVar11;
            }
          }
        }
        if (local_cf8.ArrayNum == local_cf8.ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_cf8.AllocatorInstance,&local_cf8.ArrayMax);
          local_cf8.ArrayNum = iVar7;
        }
        lVar15 = (longlong)local_cf8.ArrayNum;
        local_cf8.ArrayNum = local_cf8.ArrayNum + 1;
        *(uint *)(local_cf8.AllocatorInstance.Data + lVar15 * 4) = *(uint *)pFVar24;
      }
      goto LAB_14daa2687;
    }
    FFoliageFacade::SetFoliageIdsArray(&local_c28,iVar6,&local_cf8);
    if (local_cf8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_cf8.AllocatorInstance.Data);
    }
    if (local_cd0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_cd0.AllocatorInstance.Data);
    }
    if (local_cc0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_cc0.AllocatorInstance.Data);
    }
    if (local_ce8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ce8.AllocatorInstance.Data);
    }
    local_d04 = iVar6 + 1;
    __return_storage_ptr__ = local_c60;
    cVar3 = local_d08;
    if ((int)local_cb0 <= local_d04) goto LAB_14daa2935;
  } while( true );
  while (uVar16 = puVar18[2], uVar16 != 0xffffffff) {
LAB_14daa26d0:
    puVar18 = (uint *)((longlong)(int)uVar16 * 0x10 + local_238._0_8_);
    if (*puVar18 == uVar5) {
      if (puVar18 != (uint *)0x0) goto LAB_14daa2716;
      goto LAB_14daa26f0;
    }
  }
LAB_14daa26ee:
  puVar18 = (uint *)0x0;
LAB_14daa26f0:
  bVar25 = ::FDebug::CheckVerifyFailedImpl2
                     ("Pair != nullptr",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                      ,0x288,L"");
  if (bVar25) {
    pcVar2 = (code *)swi(3);
    pFVar11 = (FRemoveEntriesResult *)(*pcVar2)();
    return pFVar11;
  }
LAB_14daa2716:
  local_cd8[0] = puVar18[1];
  if (local_cf8.AllocatorInstance.Data <= (FScriptContainerElement *)local_cd8) {
    if ((FScriptContainerElement *)local_cd8 <
        local_cf8.AllocatorInstance.Data + (longlong)local_cf8.ArrayMax * 4) {
      local_d20 = (longlong)local_cf8.ArrayNum;
      local_d18 = 4;
      local_d38 = (FScriptContainerElement *)local_cd8;
      local_d30 = local_cf8.AllocatorInstance.Data;
      local_d28 = (longlong)local_cf8.ArrayMax;
      bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar25) {
        pcVar2 = (code *)swi(3);
        pFVar11 = (FRemoveEntriesResult *)(*pcVar2)();
        return pFVar11;
      }
    }
  }
  if (local_cf8.ArrayNum == local_cf8.ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&local_cf8.AllocatorInstance,&local_cf8.ArrayMax);
    local_cf8.ArrayNum = iVar7;
  }
  uVar5 = local_cd8[0];
  lVar15 = (longlong)local_cf8.ArrayNum;
  local_ca8[0] = iVar6;
  local_cf8.ArrayNum = local_cf8.ArrayNum + 1;
  *(uint *)(local_cf8.AllocatorInstance.Data + lVar15 * 4) = local_cd8[0];
  if ((local_c28.Collection == (FManagedArrayCollection *)0x0) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("!IsConst()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Facades\\PVFoliageFacade.cpp"
                          ,0xe6,L""), bVar25)) {
    pcVar2 = (code *)swi(3);
    pFVar11 = (FRemoveEntriesResult *)(*pcVar2)();
    return pFVar11;
  }
  if (((((((local_c28.NamesAttribute.ConstAttributeArray == (TManagedArray<FString> *)0x0) ||
          (local_c28.NameIdsAttribute.ConstAttributeArray == (TManagedArray<int> *)0x0)) ||
         (local_c28.BranchIdsAttribute.ConstAttributeArray == (TManagedArray<int> *)0x0)) ||
        ((local_c28.PivotPointsAttribute.ConstAttributeArray ==
          (TManagedArray<UE::Math::TVector<float>_> *)0x0 ||
         (local_c28.UpVectorsAttribute.ConstAttributeArray ==
          (TManagedArray<UE::Math::TVector<float>_> *)0x0)))) ||
       ((local_c28.NormalVectorsAttribute.ConstAttributeArray ==
         (TManagedArray<UE::Math::TVector<float>_> *)0x0 ||
        ((local_c28.ScalesAttribute.ConstAttributeArray == (TManagedArray<float> *)0x0 ||
         (local_c28.LengthFromRootAttribute.ConstAttributeArray == (TManagedArray<float> *)0x0))))))
      || (local_c28.FoliageIdsAttribute.ConstAttributeArray ==
          (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0)) ||
     (((local_c28.ParentBoneIdsAttribute.ConstAttributeArray == (TManagedArray<int> *)0x0 ||
       ((int)uVar5 < 0)) ||
      (iVar7 = (**(code **)(*(longlong *)local_c28.BranchIdsAttribute.ConstAttributeArray + 0x60))()
      , iVar7 <= (int)uVar5)))) {
LAB_14daa2687:
    pFVar24 = pFVar24 + 4;
  }
  else {
    TManagedArrayAccessor<int>::ModifyAt(&local_c28.BranchIdsAttribute,uVar5,local_ca8);
    pFVar24 = pFVar24 + 4;
  }
  goto LAB_14daa2506;
  while (uVar16 = puVar18[2], puVar18 = (uint *)0x0, uVar16 != 0xffffffff) {
LAB_14daa1fc0:
    puVar18 = (uint *)((longlong)(int)uVar16 * 0x10 + local_1e8._0_8_);
    if (*puVar18 == uVar5) {
      if (puVar18 != (uint *)0x0) goto LAB_14daa2007;
      break;
    }
  }
LAB_14daa1fe1:
  bVar25 = ::FDebug::CheckVerifyFailedImpl2
                     ("Pair != nullptr",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                      ,0x288,L"");
  if (bVar25) {
    pcVar2 = (code *)swi(3);
    pFVar11 = (FRemoveEntriesResult *)(*pcVar2)();
    return pFVar11;
  }
LAB_14daa2007:
  pFVar19 = (FScriptContainerElement *)(puVar18 + 1);
  if (local_ce8.AllocatorInstance.Data <= pFVar19) {
    if (pFVar19 < local_ce8.AllocatorInstance.Data + (longlong)local_ce8.ArrayMax * 4) {
      local_d20 = (longlong)local_ce8.ArrayNum;
      local_d18 = 4;
      local_d30 = local_ce8.AllocatorInstance.Data;
      local_d38 = pFVar19;
      local_d28 = (longlong)local_ce8.ArrayMax;
      bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar25) {
        pcVar2 = (code *)swi(3);
        pFVar11 = (FRemoveEntriesResult *)(*pcVar2)();
        return pFVar11;
      }
    }
  }
  if (local_ce8.ArrayNum == local_ce8.ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&local_ce8.AllocatorInstance,&local_ce8.ArrayMax);
    local_ce8.ArrayNum = iVar6;
  }
  lVar15 = (longlong)local_ce8.ArrayNum;
  pFVar24 = pFVar24 + 4;
  local_ce8.ArrayNum = local_ce8.ArrayNum + 1;
  *(uint *)(local_ce8.AllocatorInstance.Data + lVar15 * 4) = *(uint *)pFVar19;
  goto LAB_14daa1e00;
}

