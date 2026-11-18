// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 2

// FindSettingsForShot<UMoviePipelineGameOverrideSetting> @ 14ddc0b30

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

TArray<UMoviePipelineGameOverrideSetting_*,TSizedDefaultAllocator<32>_> * __thiscall
UMoviePipeline::FindSettingsForShot<UMoviePipelineGameOverrideSetting>
          (UMoviePipeline *this,
          TArray<UMoviePipelineGameOverrideSetting_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,UMoviePipelineExecutorShot *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  UMoviePipelineSetting *pUVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  TArray<UMoviePipelineGameOverrideSetting_*,TSizedDefaultAllocator<32>_> *pTVar9;
  FString *pFVar10;
  int iVar11;
  ulonglong uVar12;
  wchar_t *pwVar13;
  ForAnyElementType FVar14;
  wchar_t *pwVar15;
  undefined1 local_res20 [8];
  UMoviePipelineSetting *local_70;
  UClass *local_68;
  TArray<UMoviePipelineSetting_*,TSizedDefaultAllocator<32>_> local_60;
  FString local_50;
  FString local_40;
  FString local_30;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  *piVar1 = 0;
  local_68 = Z_Construct_UClass_UMoviePipelineGameOverrideSetting_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_68 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_68);
  }
  FindSettingsForShot(this,&local_60,(TSubclassOf<UMoviePipelineSetting>)&local_68,param_1);
  uVar12 = (ulonglong)(uint)local_60.ArrayNum;
  if (local_60.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar12);
  }
  if (*piVar1 < local_60.ArrayNum) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_60.ArrayNum,&__return_storage_ptr__->AllocatorInstance,
               __return_storage_ptr__->ArrayNum,piVar1);
    uVar12 = (ulonglong)(uint)local_60.ArrayNum;
  }
  iVar11 = (int)uVar12;
  pFVar2 = local_60.AllocatorInstance.Data + (longlong)iVar11 * 8;
  FVar14.Data = local_60.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar12 != iVar11) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<UMoviePipelineSetting_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (FVar14.Data == pFVar2) {
      if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.AllocatorInstance.Data);
      }
      return __return_storage_ptr__;
    }
    pUVar3 = *(UMoviePipelineSetting **)FVar14.Data;
    if (pUVar3 == (UMoviePipelineSetting *)0x0) {
      pFVar10 = GetTypeName<UMoviePipelineGameOverrideSetting>(&local_30);
      if ((pFVar10->Data).ArrayNum == 0) {
        pwVar13 = L"";
      }
      else {
        pwVar13 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar13);
    }
    pUVar8 = Z_Construct_UClass_UMoviePipelineGameOverrideSetting_NoRegister();
    iVar7 = (int)pUVar8->_padding_;
    if ((*(int *)(pUVar3->_padding_ + 0x38) < iVar7) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar7 * 8)
        != &pUVar8->_padding_)) break;
    pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
    local_70 = pUVar3;
    if ((pFVar4 <= (FScriptContainerElement *)&local_70) &&
       ((FScriptContainerElement *)&local_70 <
        pFVar4 + (longlong)__return_storage_ptr__->ArrayMax * 8)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TArray<UMoviePipelineGameOverrideSetting_*,TSizedDefaultAllocator<32>_> *)
                 (*pcVar5)();
        return pTVar9;
      }
    }
    iVar7 = __return_storage_ptr__->ArrayNum;
    if (iVar7 == __return_storage_ptr__->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar7 + 1;
    *(UMoviePipelineSetting **)
     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_70;
    FVar14.Data = FVar14.Data + 8;
    uVar12 = (ulonglong)(uint)local_60.ArrayNum;
  }
  pFVar10 = GetTypeName<UMoviePipelineGameOverrideSetting>(&local_50);
  pwVar13 = L"";
  if ((pFVar10->Data).ArrayNum == 0) {
    pwVar15 = L"";
  }
  else {
    pwVar15 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
  pFVar10 = GetFullNameForCastLogError<UMoviePipelineSetting>(&local_40,pUVar3);
  if ((pFVar10->Data).ArrayNum != 0) {
    pwVar13 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar13,pwVar15);
}

// FindSettingsForShot<UMoviePipelineViewFamilySetting> @ 14ddc0da0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

TArray<UMoviePipelineViewFamilySetting_*,TSizedDefaultAllocator<32>_> * __thiscall
UMoviePipeline::FindSettingsForShot<UMoviePipelineViewFamilySetting>
          (UMoviePipeline *this,
          TArray<UMoviePipelineViewFamilySetting_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,UMoviePipelineExecutorShot *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  UMoviePipelineSetting *pUVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  TArray<UMoviePipelineViewFamilySetting_*,TSizedDefaultAllocator<32>_> *pTVar9;
  FString *pFVar10;
  int iVar11;
  ulonglong uVar12;
  wchar_t *pwVar13;
  ForAnyElementType FVar14;
  wchar_t *pwVar15;
  undefined1 local_res20 [8];
  UMoviePipelineSetting *local_70;
  UClass *local_68;
  TArray<UMoviePipelineSetting_*,TSizedDefaultAllocator<32>_> local_60;
  FString local_50;
  FString local_40;
  FString local_30;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  *piVar1 = 0;
  local_68 = Z_Construct_UClass_UMoviePipelineViewFamilySetting_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_68 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_68);
  }
  FindSettingsForShot(this,&local_60,(TSubclassOf<UMoviePipelineSetting>)&local_68,param_1);
  uVar12 = (ulonglong)(uint)local_60.ArrayNum;
  if (local_60.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar12);
  }
  if (*piVar1 < local_60.ArrayNum) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_60.ArrayNum,&__return_storage_ptr__->AllocatorInstance,
               __return_storage_ptr__->ArrayNum,piVar1);
    uVar12 = (ulonglong)(uint)local_60.ArrayNum;
  }
  iVar11 = (int)uVar12;
  pFVar2 = local_60.AllocatorInstance.Data + (longlong)iVar11 * 8;
  FVar14.Data = local_60.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar12 != iVar11) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<UMoviePipelineSetting_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (FVar14.Data == pFVar2) {
      if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.AllocatorInstance.Data);
      }
      return __return_storage_ptr__;
    }
    pUVar3 = *(UMoviePipelineSetting **)FVar14.Data;
    if (pUVar3 == (UMoviePipelineSetting *)0x0) {
      pFVar10 = GetTypeName<UMoviePipelineViewFamilySetting>(&local_30);
      if ((pFVar10->Data).ArrayNum == 0) {
        pwVar13 = L"";
      }
      else {
        pwVar13 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar13);
    }
    pUVar8 = Z_Construct_UClass_UMoviePipelineViewFamilySetting_NoRegister();
    iVar7 = (int)pUVar8->_padding_;
    if ((*(int *)(pUVar3->_padding_ + 0x38) < iVar7) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar7 * 8)
        != &pUVar8->_padding_)) break;
    pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
    local_70 = pUVar3;
    if ((pFVar4 <= (FScriptContainerElement *)&local_70) &&
       ((FScriptContainerElement *)&local_70 <
        pFVar4 + (longlong)__return_storage_ptr__->ArrayMax * 8)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TArray<UMoviePipelineViewFamilySetting_*,TSizedDefaultAllocator<32>_> *)
                 (*pcVar5)();
        return pTVar9;
      }
    }
    iVar7 = __return_storage_ptr__->ArrayNum;
    if (iVar7 == __return_storage_ptr__->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar7 + 1;
    *(UMoviePipelineSetting **)
     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_70;
    FVar14.Data = FVar14.Data + 8;
    uVar12 = (ulonglong)(uint)local_60.ArrayNum;
  }
  pFVar10 = GetTypeName<UMoviePipelineViewFamilySetting>(&local_50);
  pwVar13 = L"";
  if ((pFVar10->Data).ArrayNum == 0) {
    pwVar15 = L"";
  }
  else {
    pwVar15 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
  pFVar10 = GetFullNameForCastLogError<UMoviePipelineSetting>(&local_40,pUVar3);
  if ((pFVar10->Data).ArrayNum != 0) {
    pwVar13 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar13,pwVar15);
}

