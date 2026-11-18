// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 24

// Call @ 14e4e4f00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Interchange::FTaskCreateSceneObjects_GameThread::Execute'::__l2::<lambda_1>,void,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>_const_&>
::Call(void *param_1,
      TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>
      *param_2)

{
  int *piVar1;
  int iVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UObject *pUVar7;
  FSoftObjectPath *pFVar8;
  FSoftObjectPath *this;
  undefined1 auStackX_10 [8];
  UObject *apUStack_28 [2];
  
  iVar2 = param_2->ArrayNum;
  this = (FSoftObjectPath *)(param_2->AllocatorInstance).Data;
  pFVar8 = (FSoftObjectPath *)((longlong)this + (longlong)iVar2 * 0x38);
  while( true ) {
    if (param_2->ArrayNum != iVar2) {
      auStackX_10[0] = 0;
      `TCheckedPointerIterator<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(auStackX_10);
    }
    if (this == pFVar8) break;
    pUVar7 = FSoftObjectPath::TryLoad(this,(FUObjectSerializeContext *)0x0);
    if (pUVar7 != (UObject *)0x0) {
      pFVar3 = *(ForAnyElementType **)param_1;
      apUStack_28[0] = FSoftObjectPath::TryLoad(this,(FUObjectSerializeContext *)0x0);
      if ((GC::GIsIncrementalReachabilityPending != false) && (apUStack_28[0] != (UObject *)0x0)) {
        GC::MarkAsReachable(apUStack_28[0]);
      }
      if ((pFVar3->Data <= (FScriptContainerElement *)apUStack_28) &&
         ((FScriptContainerElement *)apUStack_28 <
          pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = *(int *)&pFVar3[1].Data;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      if (iVar6 == *piVar1) {
        iVar6 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,pFVar3,piVar1);
      }
      *(int *)&pFVar3[1].Data = iVar6 + 1;
      *(UObject **)(pFVar3->Data + (longlong)iVar6 * 8) = apUStack_28[0];
      if ((GC::GIsIncrementalReachabilityPending != false) && (apUStack_28[0] != (UObject *)0x0)) {
        GC::MarkAsReachable(apUStack_28[0]);
      }
    }
    this = (FSoftObjectPath *)&this[1].SubPathString.Data.ArrayNum;
  }
  return;
}

// Call @ 14e4e4f10

FImportAssetResult * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Interchange::FTaskImportObjectFinalize_GameThread::Execute'::__l2::<lambda_1>,UInterchangeFactoryBase::FImportAssetResult,UInterchangeFactoryBase::FImportAssetObjectParams_&>
::Call(FImportAssetResult *__return_storage_ptr__,void *param_1,FImportAssetObjectParams *param_2)

{
  UObject *pUVar1;
  undefined7 uVar2;
  FImportAssetResult *pFVar3;
  FImportAssetResult local_18;
  
  pFVar3 = `UE::Interchange::FTaskImportObjectFinalize_GameThread::Execute'::__l2::<lambda_1>::
           operator()(param_1,&local_18,param_2);
  uVar2 = *(undefined7 *)&pFVar3->field_0x1;
  pUVar1 = pFVar3->ImportedObject;
  __return_storage_ptr__->bIsFactorySkipAsset = pFVar3->bIsFactorySkipAsset;
  *(undefined7 *)&__return_storage_ptr__->field_0x1 = uVar2;
  __return_storage_ptr__->ImportedObject = pUVar1;
  return __return_storage_ptr__;
}

// Call @ 14e4e4f40

FImportAssetResult * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Interchange::FTaskImportObject_Async::Execute'::__l2::<lambda_1>,UInterchangeFactoryBase::FImportAssetResult,UInterchangeFactoryBase::FImportAssetObjectParams_&>
::Call(FImportAssetResult *__return_storage_ptr__,void *param_1,FImportAssetObjectParams *param_2)

{
  UObject *pUVar1;
  undefined7 uVar2;
  FImportAssetResult *pFVar3;
  FImportAssetResult local_18;
  
  pFVar3 = `UE::Interchange::FTaskImportObject_Async::Execute'::__l2::<lambda_1>::operator()
                     (param_1,&local_18,param_2);
  uVar2 = *(undefined7 *)&pFVar3->field_0x1;
  pUVar1 = pFVar3->ImportedObject;
  __return_storage_ptr__->bIsFactorySkipAsset = pFVar3->bIsFactorySkipAsset;
  *(undefined7 *)&__return_storage_ptr__->field_0x1 = uVar2;
  __return_storage_ptr__->ImportedObject = pUVar1;
  return __return_storage_ptr__;
}

// Call @ 14e4e4f70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Interchange::FTaskPostImport_GameThread::Execute'::__l2::<lambda_1>,void,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>_const_&>
::Call(void *param_1,
      TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>
      *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  ForAnyElementType *pFVar11;
  UObject *pUVar12;
  FString *pFVar13;
  FScriptContainerElement *pFVar14;
  ulonglong uVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  FSoftObjectPath *pFVar19;
  FSoftObjectPath *this;
  undefined1 auStackX_18 [8];
  uint uStackX_20;
  UObject *apUStack_e8 [2];
  UObject *pUStack_d8;
  undefined8 uStack_d0;
  UObject *pUStack_c8;
  FString FStack_c0;
  undefined8 uStack_b0;
  ForAnyElementType FStack_a8;
  undefined8 uStack_a0;
  ForAnyElementType FStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  FScriptContainerElement FStack_80;
  FString FStack_78;
  FString FStack_68;
  FString FStack_58;
  
  pFVar11 = *(ForAnyElementType **)((longlong)param_1 + 8);
  bVar6 = false;
  bVar5 = false;
  uVar18 = param_2->ArrayNum + *(int *)&pFVar11[1].Data;
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar18);
  }
  if (*(int *)((longlong)&pFVar11[1].Data + 4) < (int)uVar18) {
    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar18,pFVar11,*(int *)&pFVar11[1].Data,
               (int *)((longlong)&pFVar11[1].Data + 4));
  }
  pFVar11 = *(ForAnyElementType **)((longlong)param_1 + 0x10);
  uVar18 = param_2->ArrayNum + *(int *)&pFVar11[1].Data;
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar18);
  }
  if (*(int *)((longlong)&pFVar11[1].Data + 4) < (int)uVar18) {
    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar18,pFVar11,*(int *)&pFVar11[1].Data,(int *)((longlong)&pFVar11[1].Data + 4));
  }
  pFVar11 = *(ForAnyElementType **)((longlong)param_1 + 0x18);
  uVar18 = param_2->ArrayNum + *(int *)&pFVar11[1].Data;
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar18);
  }
  piVar1 = (int *)((longlong)&pFVar11[1].Data + 4);
  if (*piVar1 < (int)uVar18) {
    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar18,pFVar11,*(int *)&pFVar11[1].Data,piVar1);
  }
  plVar2 = *(longlong **)param_1;
  if ((*plVar2 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar10 = *(int *)(*(longlong *)((longlong)param_1 + 0x20) + 0x60);
  if ((iVar10 < 0) || (*(int *)(*plVar2 + 0x40) <= iVar10)) {
    bVar7 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7806791002571669321>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\Tasks\\InterchangeTaskPipeline.cpp"
                       ,0xb7,"AsyncHelper->SourceDatas.IsValidIndex(SourceIndex)");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  pUStack_c8 = (UObject *)0x0;
  FStack_c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uStack_d0 = 0;
  FStack_c0.Data.ArrayNum = 0;
  FStack_c0.Data.ArrayMax = 0;
  FStack_a8.Data = (FScriptContainerElement *)0x0;
  uStack_a0 = 0;
  FStack_98.Data = (FScriptContainerElement *)0x0;
  uStack_90 = 0;
  FStack_80 = (FScriptContainerElement)0x0;
  if (bVar7) {
    plVar2 = *(longlong **)param_1;
    if ((*plVar2 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar3 = *plVar2;
    uVar18 = *(uint *)(*(longlong *)((longlong)param_1 + 0x20) + 0x60);
    uVar9 = 0;
    if ((int)uVar18 < *(int *)(lVar3 + 0x40)) {
      uVar9 = ~uVar18 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pUVar12 = *(UObject **)(*(longlong *)(lVar3 + 0x38) + (longlong)(int)uVar18 * 8);
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar12);
    }
  }
  else {
    pUVar12 = (UObject *)0x0;
  }
  plVar2 = *(longlong **)param_1;
  pUStack_d8 = pUVar12;
  if ((*plVar2 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar3 = *plVar2;
  uVar18 = *(uint *)(*(longlong *)((longlong)param_1 + 0x20) + 0x60);
  uVar9 = 0;
  if ((int)uVar18 < *(int *)(lVar3 + 0x30)) {
    uVar9 = ~uVar18 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uStack_b0 = *(undefined8 *)(*(longlong *)(lVar3 + 0x28) + (longlong)(int)uVar18 * 8);
  plVar2 = *(longlong **)param_1;
  if ((*plVar2 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar3 = *plVar2;
  pFVar11 = (ForAnyElementType *)(lVar3 + 0x58);
  if (&FStack_a8 != pFVar11) {
    iVar10 = *(int *)(lVar3 + 0x60);
    pFVar17 = pFVar11->Data;
    uStack_a0 = CONCAT44(uStack_a0._4_4_,iVar10);
    if (((iVar10 != 0) || (uStack_a0._4_4_ != 0)) &&
       (ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar10,uStack_a0._4_4_,&FStack_a8,iVar10,(int *)((longlong)&uStack_a0 + 4)),
       iVar10 != 0)) {
      memcpy(FStack_a8.Data,pFVar17,(longlong)iVar10 << 3);
    }
  }
  plVar2 = *(longlong **)param_1;
  if ((*plVar2 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar3 = *plVar2;
  pFVar11 = (ForAnyElementType *)(lVar3 + 0x68);
  if (&FStack_98 != pFVar11) {
    iVar10 = *(int *)(lVar3 + 0x70);
    pFVar17 = pFVar11->Data;
    uStack_90 = CONCAT44(uStack_90._4_4_,iVar10);
    if ((iVar10 == 0) && (uStack_90._4_4_ == 0)) {
      uStack_90 = 0;
    }
    else {
      ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar10,uStack_90._4_4_,&FStack_98,iVar10,(int *)((longlong)&uStack_90 + 4));
      if (iVar10 != 0) {
        memcpy(FStack_98.Data,pFVar17,(longlong)iVar10 << 3);
      }
    }
  }
  plVar2 = *(longlong **)param_1;
  if ((*plVar2 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar3 = *plVar2;
  uVar18 = *(uint *)(*(longlong *)((longlong)param_1 + 0x20) + 0x60);
  uVar9 = 0;
  if ((int)uVar18 < *(int *)(lVar3 + 0x50)) {
    uVar9 = ~uVar18 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this = (FSoftObjectPath *)(param_2->AllocatorInstance).Data;
  uStack_88 = *(undefined8 *)(*(longlong *)(lVar3 + 0x48) + (longlong)(int)uVar18 * 8);
  uStackX_20 = param_2->ArrayNum;
  uVar15 = (ulonglong)(int)uStackX_20;
  pFVar17 = (FScriptContainerElement *)&this[1].SubPathString;
  pFVar19 = (FSoftObjectPath *)((longlong)this + uVar15 * 0x38);
  do {
    if (param_2->ArrayNum != (int)uVar15) {
      auStackX_18[0] = 0;
      `TCheckedPointerIterator<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(auStackX_18);
    }
    if (this == pFVar19) {
      if (FStack_98.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_98.Data);
      }
      if (FStack_a8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_a8.Data);
      }
      if (FStack_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_c0.Data.AllocatorInstance.Data);
      }
      return;
    }
    pUVar12 = FSoftObjectPath::TryLoad(this,(FUObjectSerializeContext *)0x0);
    if ((bVar7) && (*(longlong *)(pFVar17 + -0x10) != 0)) {
      uStack_d0 = *(undefined8 *)(pFVar17 + -8);
      pUStack_c8 = pUVar12;
      if (*(UInterchangeBaseNode **)(pFVar17 + -8) == (UInterchangeBaseNode *)0x0) {
        bVar5 = true;
        pFVar13 = &FStack_78;
        FStack_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FStack_78.Data.ArrayNum = 0;
        FStack_78.Data.ArrayMax = 0;
LAB_14e4dc487:
        if (FStack_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_c0.Data.AllocatorInstance.Data);
        }
        FStack_c0.Data.AllocatorInstance.Data = (pFVar13->Data).AllocatorInstance.Data;
        (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FStack_c0.Data.ArrayNum = (pFVar13->Data).ArrayNum;
        FStack_c0.Data.ArrayMax = (pFVar13->Data).ArrayMax;
        (pFVar13->Data).ArrayNum = 0;
        (pFVar13->Data).ArrayMax = 0;
      }
      else {
        bVar6 = true;
        pFVar13 = UInterchangeBaseNode::GetUniqueID
                            (*(UInterchangeBaseNode **)(pFVar17 + -8),&FStack_68);
        if (&FStack_c0 != pFVar13) goto LAB_14e4dc487;
      }
      if ((bVar5) &&
         (bVar5 = false, FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
      }
      if ((bVar6) &&
         (bVar6 = false, FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
      }
      FStack_80 = *pFVar17;
      (**(code **)(**(longlong **)(pFVar17 + -0x10) + 0x310))();
    }
    if ((pUVar12 != (UObject *)0x0) && ((*(uint *)&pUVar12->field_0x8 >> 0x1e & 1) == 0)) {
      pFVar11 = *(ForAnyElementType **)((longlong)param_1 + 8);
      pFVar14 = (FScriptContainerElement *)
                UInterchangeBaseNode::GetUniqueID
                          (*(UInterchangeBaseNode **)(pFVar17 + -8),&FStack_58);
      if ((pFVar11->Data <= pFVar14) &&
         ((pFVar14 < pFVar11->Data + (longlong)*(int *)((longlong)&pFVar11[1].Data + 4) * 0x10 &&
          (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar8)))) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar10 = *(int *)&pFVar11[1].Data;
      piVar1 = (int *)((longlong)&pFVar11[1].Data + 4);
      if (iVar10 == *piVar1) {
        iVar10 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,pFVar11,piVar1);
      }
      *(int *)&pFVar11[1].Data = iVar10 + 1;
      pFVar16 = pFVar11->Data + (longlong)iVar10 * 0x10;
      *(undefined8 *)pFVar16 = 0;
      *(undefined8 *)pFVar16 = *(undefined8 *)pFVar14;
      *(undefined8 *)pFVar14 = 0;
      *(undefined4 *)(pFVar16 + 8) = *(undefined4 *)(pFVar14 + 8);
      *(undefined4 *)(pFVar16 + 0xc) = *(undefined4 *)(pFVar14 + 0xc);
      *(undefined8 *)(pFVar14 + 8) = 0;
      if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
      }
      pFVar11 = *(ForAnyElementType **)((longlong)param_1 + 0x10);
      apUStack_e8[0] = FSoftObjectPath::TryLoad(this,(FUObjectSerializeContext *)0x0);
      if (((pFVar11->Data <= (FScriptContainerElement *)apUStack_e8) &&
          ((FScriptContainerElement *)apUStack_e8 <
           pFVar11->Data + (longlong)*(int *)((longlong)&pFVar11[1].Data + 4) * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar10 = *(int *)&pFVar11[1].Data;
      piVar1 = (int *)((longlong)&pFVar11[1].Data + 4);
      if (iVar10 == *piVar1) {
        iVar10 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,pFVar11,piVar1);
      }
      *(int *)&pFVar11[1].Data = iVar10 + 1;
      *(UObject **)(pFVar11->Data + (longlong)iVar10 * 8) = apUStack_e8[0];
      pFVar11 = *(ForAnyElementType **)((longlong)param_1 + 0x18);
      if (((pFVar11->Data <= pFVar17) &&
          (pFVar17 < pFVar11->Data + *(int *)((longlong)&pFVar11[1].Data + 4))) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar10 = *(int *)&pFVar11[1].Data;
      piVar1 = (int *)((longlong)&pFVar11[1].Data + 4);
      if (iVar10 == *piVar1) {
        iVar10 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x101,pFVar11,piVar1);
      }
      *(int *)&pFVar11[1].Data = iVar10 + 1;
      pFVar11->Data[iVar10] = *pFVar17;
    }
    uVar15 = (ulonglong)uStackX_20;
    this = (FSoftObjectPath *)&this[1].SubPathString.Data.ArrayNum;
    pFVar17 = pFVar17 + 0x38;
  } while( true );
}

// Call @ 14e4e4f80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Interchange::FTaskPreCompletion_GameThread::Execute'::__l2::<lambda_1>,void,int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>_const_&>
::Call(void *param_1,int *param_2,
      TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>
      *param_3)

{
  `UE::Interchange::FTaskPreCompletion_GameThread::Execute'::__l2::<lambda_1>::operator()
            (param_1,*param_2,param_3);
  return;
}

// Call @ 14e4e4f90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Interchange::FImportAsyncHelper::IsImportingObject'::__l2::<lambda_1>,void,int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>_const_&>
::Call(void *param_1,int *param_2,
      TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>
      *param_3)

{
  `UE::Interchange::FImportAsyncHelper::IsImportingObject'::__l2::<lambda_1>::operator()
            (param_1,*param_2,param_3);
  return;
}

// Call @ 14e4e4fa0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Interchange::Private::ShouldReimportFactoryNode'::__l2::<lambda_1>,void,FString_const_&,UInterchangeFactoryBaseNode_*>
::Call(void *param_1,FString *param_2,UInterchangeFactoryBaseNode **param_3)

{
  `UE::Interchange::Private::ShouldReimportFactoryNode'::__l2::<lambda_1>::operator()
            (param_1,param_2,*param_3);
  return;
}

// Call @ 14e4e4fb0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Interchange::FFactoryCommon::UpdateImportAssetData'::__l2::<lambda_1>,void,UInterchangeAssetImportData_*>
::Call(void *param_1,UInterchangeAssetImportData **param_2)

{
  return;
}

// Call @ 14e4e4fc0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Interchange::FImportResult::AddImportedObject'::__l8::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 14e4e4fe0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInterchangeReset::ExecuteReset'::__l5::<lambda_1>,void,FString_const_&,UInterchangeFactoryBaseNode_*>
::Call(void *param_1,FString *param_2,UInterchangeFactoryBaseNode **param_3)

{
  `FInterchangeReset::ExecuteReset'::__l5::<lambda_1>::operator()(param_1,param_2,*param_3);
  return;
}

// Call @ 14e4e4ff0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UInterchangeAssetImportData::PostLoad'::__l5::<lambda_1>,void,FString_const_&,UInterchangeBaseNode_*>
::Call(void *param_1,FString *param_2,UInterchangeBaseNode **param_3)

{
  **(byte **)param_1 = **(byte **)param_1 | *param_3 == (UInterchangeBaseNode *)0x0;
  return;
}

// Call @ 14e4e5010

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Interchange::FImportAsyncHelper::CleanUp'::__l6::<lambda_1>,void,FString_const_&,UInterchangeBaseNode_*>
::Call(void *param_1,FString *param_2,UInterchangeBaseNode **param_3)

{
  FUObjectItem *this;
  
  this = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&(*param_3)->_padding_ + 4))
  ;
  FUObjectItem::ClearRootFlags(this,Async);
  return;
}

// Call @ 14e4e5040

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Interchange::FImportResult::AddImportedObject'::__l8::<lambda_1>,void>::Call
          (void *param_1)

{
  longlong *plVar1;
  bool bVar2;
  UObject *pUVar3;
  UObject *pUStackX_8;
  FReadAccessScope FStack_28;
  
  pUVar3 = FWeakObjectPtr::Get(param_1);
  if (pUVar3 != (UObject *)0x0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)param_1 + 8),
               &FStack_28);
    if ((*(int *)((longlong)param_1 + 0x18) != 0) &&
       (plVar1 = *(longlong **)((longlong)param_1 + 0x10), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x68))(plVar1,pUVar3);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&FStack_28);
    bVar2 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                      ((TScriptDelegate<FNotThreadSafeDelegateMode> *)((longlong)param_1 + 0x20));
    if (bVar2) {
      pUStackX_8 = pUVar3;
      TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>
                ((TScriptDelegate<FNotThreadSafeDelegateMode> *)((longlong)param_1 + 0x20),
                 &pUStackX_8);
    }
  }
  return;
}

// Call @ 14e4e5050

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UInterchangeManager::SetActiveMode'::__l8::<lambda_1>,bool,float>::Call
          (void *param_1,float *param_2)

{
  EAsyncTaskNotificationPromptAction EVar1;
  
  if (*(FAsyncTaskNotification **)(*(longlong *)param_1 + 0x248) != (FAsyncTaskNotification *)0x0) {
    EVar1 = FAsyncTaskNotification::GetPromptAction
                      (*(FAsyncTaskNotification **)(*(longlong *)param_1 + 0x248));
    if (EVar1 == Cancel) {
      UInterchangeManager::CancelAllTasks(*(UInterchangeManager **)param_1);
    }
  }
  return true;
}

// Call @ 14e4e5090

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Interchange::FTaskParsing::Execute'::__l17::<lambda_1>,void,FString_const_&,UInterchangeFactoryBaseNode_*>
::Call(void *param_1,FString *param_2,UInterchangeFactoryBaseNode **param_3)

{
  `UE::Interchange::FTaskParsing::Execute'::__l17::<lambda_1>::operator()(param_1,param_2,*param_3);
  return;
}

// Call @ 14e4e50a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Interchange::FTaskCompletion_GameThread::Execute'::__l19::<lambda_1>,void,int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>_const_&>
::Call(void *param_1,int *param_2,
      TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>
      *param_3)

{
  `UE::Interchange::FTaskCompletion_GameThread::Execute'::__l19::<lambda_1>::operator()
            (param_1,*param_2,param_3);
  return;
}

// Call @ 14e4e50b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInterchangeReset::ExecuteReset'::__l5::<lambda_2>,void,FString_const_&,UInterchangeFactoryBaseNode_*>
::Call(void *param_1,FString *param_2,UInterchangeFactoryBaseNode **param_3)

{
  `FInterchangeReset::ExecuteReset'::__l5::<lambda_2>::operator()(param_1,param_2,*param_3);
  return;
}

// Call @ 14e4e50c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Interchange::FTaskCompletion_GameThread::Execute'::__l19::<lambda_2>,void,int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>_const_&>
::Call(void *param_1,int *param_2,
      TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>
      *param_3)

{
  `UE::Interchange::FTaskCompletion_GameThread::Execute'::__l19::<lambda_2>::operator()
            (param_1,*param_2,param_3);
  return;
}

// Call @ 14e4e50d0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Interchange::FTaskImportObjectFinalize_GameThread::Execute'::__l28::<lambda_2>,bool,UE::Interchange::FImportAsyncHelper::FImportedObjectInfo_const_&>
::Call(void *param_1,FImportedObjectInfo *param_2)

{
  bool bVar1;
  FSoftObjectPath local_28;
  
  local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_28.AssetPath.PackageName.Number = 0;
  local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetPath.AssetName.Number = 0;
  local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.SubPathString.Data.ArrayNum = 0;
  local_28.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_28,*(UObject **)(*(longlong *)param_1 + 8));
  bVar1 = FSoftObjectPath::operator==(&param_2->ImportedObject,&local_28);
  if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// Call @ 14e4e5130

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Interchange::FTaskCreateSceneObjects_GameThread::Execute'::__l50::<lambda_2>,bool,UE::Interchange::FImportAsyncHelper::FImportedObjectInfo_const_&>
::Call(void *param_1,FImportedObjectInfo *param_2)

{
  bool bVar1;
  FSoftObjectPath local_28;
  
  local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_28.AssetPath.PackageName.Number = 0;
  local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetPath.AssetName.Number = 0;
  local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.SubPathString.Data.ArrayNum = 0;
  local_28.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_28,*(UObject **)param_1);
  bVar1 = FSoftObjectPath::operator==(&param_2->ImportedObject,&local_28);
  if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// Call @ 14e4e5190

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInterchangeReset::ExecuteReset'::__l5::<lambda_3>,void,FString_const_&,UInterchangeFactoryBaseNode_*>
::Call(void *param_1,FString *param_2,UInterchangeFactoryBaseNode **param_3)

{
  `FInterchangeReset::ExecuteReset'::__l5::<lambda_3>::operator()(param_1,param_2,*param_3);
  return;
}

// Call @ 14e4e51a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Interchange::FTaskCompletion_GameThread::Execute'::__l21::<lambda_3>,void,int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>_const_&>
::Call(void *param_1,int *param_2,
      TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>
      *param_3)

{
  `UE::Interchange::FTaskCompletion_GameThread::Execute'::__l21::<lambda_3>::operator()
            (param_1,*param_2,param_3);
  return;
}

// Call @ 14e4e51b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Interchange::FTaskCompletion_GameThread::Execute'::__l21::<lambda_4>,void,int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>_const_&>
::Call(void *param_1,int *param_2,
      TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>
      *param_3)

{
  `UE::Interchange::FTaskCompletion_GameThread::Execute'::__l21::<lambda_4>::operator()
            (param_1,*param_2,param_3);
  return;
}

// Call @ 14e4e51c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UInterchangeManager::ImportInternal'::__l206::<lambda_4>,void,FString_const_&,UInterchangeFactoryBaseNode_*>
::Call(void *param_1,FString *param_2,UInterchangeFactoryBaseNode **param_3)

{
  UInterchangeFactoryBaseNode *this;
  bool bVar1;
  FSoftObjectPath local_28;
  
  this = *param_3;
  if (*(int *)(*(longlong *)param_1 + 8) < 2) {
    local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_28.AssetPath.PackageName.Number = 0;
    local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_28.AssetPath.AssetName.Number = 0;
    local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.SubPathString.Data.ArrayNum = 0;
    local_28.SubPathString.Data.ArrayMax = 0;
    bVar1 = UInterchangeFactoryBaseNode::GetCustomReferenceObject(this,&local_28);
    if (bVar1) {
      bVar1 = FSoftObjectPath::operator==(&local_28,*(FSoftObjectPath **)((longlong)param_1 + 8));
      if (bVar1) {
        UInterchangeFactoryBaseNode::GetCustomSubPath(this,*(FString **)param_1);
      }
    }
    if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  return;
}

