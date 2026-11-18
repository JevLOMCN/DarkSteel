// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SourceControl
// Functions: 81

// StaticClass @ 146af5230

UClass * __cdecl USourceControlHelpers::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USourceControlHelpers.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SourceControl",L"SourceControlHelpers",
               &Z_Registration_Info_UClass_USourceControlHelpers.InnerSingleton,
               StaticRegisterNativesUSourceControlHelpers,0x28,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USourceControlHelpers>,
               InternalVTableHelperCtorCaller<USourceControlHelpers>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USourceControlHelpers.InnerSingleton;
}

// USourceControlHelpers @ 146b006d0

USourceControlHelpers * __thiscall
USourceControlHelpers::USourceControlHelpers(USourceControlHelpers *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7USourceControlHelpers__6B_;
  return this;
}

// USourceControlHelpers @ 146b00700

USourceControlHelpers * __thiscall
USourceControlHelpers::USourceControlHelpers
          (USourceControlHelpers *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7USourceControlHelpers__6B_;
  return this;
}

// ~USourceControlHelpers @ 146b013d0

void __thiscall USourceControlHelpers::~USourceControlHelpers(USourceControlHelpers *this)

{
  *(undefined ***)this = &___7USourceControlHelpers__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 146b017d0

void __thiscall
`USourceControlHelpers::AsyncQueryFileStates'::__l2::<lambda_1>::operator()
          (void *this,FSourceControlState *param_1)

{
  FScriptContainerElement *pFVar1;
  FSourceControlState *pFVar2;
  UObject *this_00;
  UFunction *pUVar3;
  FSourceControlState *pFVar4;
  bool bVar5;
  FReadAccessScope local_c8;
  FSourceControlState local_b0;
  FSourceControlState local_60;
  
  pFVar2 = FSourceControlState::FSourceControlState(&local_b0,param_1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this,&local_c8);
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    this_00 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 8));
    if (this_00 != (UObject *)0x0) {
      pUVar3 = UObject::FindFunction(this_00,*(FName *)((longlong)this + 0x10));
      bVar5 = pUVar3 != (UFunction *)0x0;
      goto LAB_146b01834;
    }
  }
  bVar5 = false;
LAB_146b01834:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_c8);
  if (bVar5) {
    pFVar4 = FSourceControlState::FSourceControlState(&local_60,pFVar2);
    USourceControlHelpers::FQueryFileStateDelegate_DelegateWrapper(this,pFVar4);
  }
  pFVar1 = (pFVar2->PreviousUser).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (pFVar2->CheckedOutOther).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (pFVar2->Filename).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_1->PreviousUser).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_1->CheckedOutOther).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_1->Filename).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// operator() @ 146b01b90

void __thiscall
`USourceControlHelpers::QueryFileStates'::__l2::<lambda_1>::operator()
          (void *this,FSourceControlState *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  
  pFVar2 = *(ForAnyElementType **)this;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  iVar4 = *(int *)&pFVar2[1].Data;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x850,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar4 + 1;
  FSourceControlState::FSourceControlState
            ((FSourceControlState *)(pFVar2->Data + (longlong)iVar4 * 0x50),param_1);
  pFVar3 = (param_1->PreviousUser).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (param_1->CheckedOutOther).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (param_1->Filename).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// AbsoluteFilenames @ 146b03a20

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl
USourceControlHelpers::AbsoluteFilenames
          (TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  FString local_38;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar6 = param_1->ArrayNum;
  if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
  }
  if (0 < (int)uVar6) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar6,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  iVar2 = param_1->ArrayNum;
  pFVar12 = (param_1->AllocatorInstance).Data;
  pFVar10 = pFVar12 + (longlong)iVar2 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar12 == pFVar10) break;
    bVar4 = FPaths::IsRelative((FString *)pFVar12);
    if (bVar4) {
      pFVar8 = (FScriptContainerElement *)
               FPaths::ConvertRelativePathToFull(&local_38,(FString *)pFVar12);
      pFVar9 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar9 <= pFVar8) && (pFVar8 < pFVar9 + (longlong)*piVar1 * 0x10)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar7;
        }
      }
      iVar5 = __return_storage_ptr__->ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar5 + 1;
      pFVar9 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
      *(undefined8 *)pFVar9 = 0;
      *(FScriptContainerElement **)pFVar9 =
           (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar8->field_0x0)->AllocatorInstance).
           Data;
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar8->field_0x0)->AllocatorInstance).Data
           = (FScriptContainerElement *)0x0;
      *(int *)(pFVar9 + 8) = *(int *)&pFVar8[8].field_0x0;
      *(int *)(pFVar9 + 0xc) = *(int *)&pFVar8[0xc].field_0x0;
      *(undefined8 *)&pFVar8[8].field_0x0 = 0;
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    else {
      pFVar9 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar9 <= pFVar12) && (pFVar12 < pFVar9 + (longlong)*piVar1 * 0x10)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar7;
        }
      }
      iVar5 = __return_storage_ptr__->ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar5 + 1;
      ::FString::FString((FString *)
                         ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10)
                         ,(FString *)pFVar12);
    }
    uVar11 = __return_storage_ptr__->ArrayNum - 1;
    uVar6 = 0;
    if ((int)uVar11 < __return_storage_ptr__->ArrayNum) {
      uVar6 = ~uVar11 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar7;
      }
    }
    FPaths::NormalizeFilename
              ((FString *)
               ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x10));
    pFVar12 = pFVar12 + 0x10;
  }
  return __return_storage_ptr__;
}

// AnnotateFile @ 146b04b50

bool __cdecl
USourceControlHelpers::AnnotateFile
          (ISourceControlProvider *param_1,FString *param_2,FString *param_3,
          TArray<FAnnotationLine,TSizedDefaultAllocator<32>_> *param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  ISourceControlLabel *pIVar2;
  TReferenceControllerBase<1> *pTVar3;
  ISourceControlRevision *pIVar4;
  char cVar5;
  bool bVar6;
  TSharedRef<ISourceControlRevision,1> *local_28;
  undefined8 local_20;
  TSharedRef<ISourceControlLabel,1> *local_18;
  int local_10;
  
  (**(code **)((longlong)*param_1 + 0x118))(param_1,&local_18,param_2);
  if (0 < local_10) {
    pTVar1 = (local_18->SharedReferenceCount).ReferenceController;
    pIVar2 = local_18->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_28 = (TSharedRef<ISourceControlRevision,1> *)0x0;
    local_20 = 0;
    (**(code **)(*(longlong *)pIVar2 + 0x18))(pIVar2,param_3,&local_28);
    if (0 < (int)local_20) {
      pTVar3 = (local_28->SharedReferenceCount).ReferenceController;
      pIVar4 = local_28->Object;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      cVar5 = (**(code **)(*(longlong *)pIVar4 + 0x18))(pIVar4,param_4);
      if (cVar5 != '\0') {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        DestructItems<TSharedRef<ISourceControlRevision,1>,int>(local_28,(int)local_20);
        if (local_28 != (TSharedRef<ISourceControlRevision,1> *)0x0) {
          FMemory::Free(local_28);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        bVar6 = true;
        goto LAB_146b04c38;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    }
    DestructItems<TSharedRef<ISourceControlRevision,1>,int>(local_28,(int)local_20);
    if (local_28 != (TSharedRef<ISourceControlRevision,1> *)0x0) {
      FMemory::Free(local_28);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  bVar6 = false;
LAB_146b04c38:
  DestructItems<TSharedRef<ISourceControlLabel,1>,int>(local_18,local_10);
  if (local_18 != (TSharedRef<ISourceControlLabel,1> *)0x0) {
    FMemory::Free(local_18);
  }
  return bVar6;
}

// AnnotateFile @ 146b04c70

bool __cdecl
USourceControlHelpers::AnnotateFile
          (ISourceControlProvider *param_1,int param_2,FString *param_3,
          TArray<FAnnotationLine,TSizedDefaultAllocator<32>_> *param_4)

{
  ISourceControlProvider IVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  FUpdateStatus *pFVar8;
  FSharedReferencer<1> FVar9;
  TRawPtrProxy<FUpdateStatus> local_res8;
  longlong *local_98;
  TReferenceControllerBase<1> *local_90;
  longlong *local_88;
  TReferenceControllerBase<1> *local_80;
  TSharedRef<FUpdateStatus,1> local_78;
  FUpdateStatus *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  ForAnyElementType local_50;
  ulonglong local_48;
  FDestructionSentinel local_40;
  
  pFVar8 = ::operator_new(0x60);
  local_res8.Object = (FUpdateStatus *)0x0;
  if (pFVar8 != (FUpdateStatus *)0x0) {
    pFVar8->_padding_ = 0;
    pFVar8->_padding_ = (longlong)&___7FUpdateStatus__6B_;
    pFVar8->_padding_ = 0;
    pFVar8->_padding_ = 0;
    pFVar8->_padding_ = 0;
    pFVar8->_padding_ = 0;
    pFVar8->_padding_ = 0;
    pFVar8->_padding_ = 0;
    pFVar8->_padding_ = 0;
    *(undefined4 *)&pFVar8->_padding_ = 0;
    *(undefined4 *)&pFVar8->_padding_ = 0;
    pFVar8->bUpdateHistory = false;
    pFVar8->bGetOpenedOnly = false;
    pFVar8->bUpdateModifiedState = false;
    pFVar8->bUpdateModifiedStateToLocalRevision = false;
    pFVar8->bCheckingAllFiles = false;
    pFVar8->bForceQuiet = false;
    pFVar8->bForceUpdate = false;
    pFVar8->bSetRequireDirPathEndWithSeparator = false;
    local_res8.Object = pFVar8;
  }
  TSharedRef<FUpdateStatus,1>::TSharedRef<FUpdateStatus,1><FUpdateStatus>(&local_78,&local_res8);
  FVar9.ReferenceController = local_78.SharedReferenceCount.ReferenceController;
  local_68 = local_78.Object;
  pTStack_60 = local_78.SharedReferenceCount.ReferenceController;
  local_48 = 0;
  (local_78.Object)->bUpdateHistory = true;
  IVar1 = *param_1;
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.Data = (FScriptContainerElement *)0x0;
  if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  iVar6 = (**(code **)((longlong)IVar1 + 0xd0))(param_1,&local_68,param_3,0,&local_58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_60);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  if (((int)local_48 != 0) && (local_50.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_50.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_50,0,0,0x10);
    local_48 = local_48 & 0xffffffff00000000;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  if (iVar6 == 1) {
    (**(code **)((longlong)*param_1 + 0x90))(param_1,&local_88,param_3,1);
    if (local_88 != (longlong *)0x0) {
      if ((local_88 == (longlong *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      iVar6 = (**(code **)(*local_88 + 8))();
      while (iVar6 = iVar6 + -1, -1 < iVar6) {
        if ((local_88 == (longlong *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        (**(code **)(*local_88 + 0x10))(local_88,&local_98,iVar6);
        if (local_98 != (longlong *)0x0) {
          if ((local_98 == (longlong *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          iVar7 = (**(code **)(*local_98 + 0x68))();
          if (param_2 <= iVar7) {
            if ((local_98 == (longlong *)0x0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar3)) {
              pcVar2 = (code *)swi(3);
              uVar4 = (*pcVar2)();
              return (bool)uVar4;
            }
            cVar5 = (**(code **)(*local_98 + 0x18))(local_98,param_4);
            if (cVar5 != '\0') {
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_90);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_80);
              bVar3 = true;
              goto LAB_146b04f29;
            }
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_90);
        FVar9.ReferenceController = local_78.SharedReferenceCount.ReferenceController;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_80);
  }
  local_78.SharedReferenceCount.ReferenceController = FVar9.ReferenceController;
  bVar3 = false;
LAB_146b04f29:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  return bVar3;
}

// AsyncQueryFileState @ 146b051f0

void __cdecl
USourceControlHelpers::AsyncQueryFileState
          (FQueryFileStateDelegate *param_1,FString *param_2,bool param_3)

{
  FScriptContainerElement *_Src;
  longlong lVar1;
  FString local_58;
  TArray<FString,TSizedDefaultAllocator<32>_> local_48;
  FQueryFileStateDelegate local_38;
  FReadAccessScope local_20;
  
  local_58.Data.ArrayNum = (param_2->Data).ArrayNum;
  lVar1 = (longlong)local_58.Data.ArrayNum;
  _Src = (param_2->Data).AllocatorInstance.Data;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_58.Data.ArrayNum == 0) {
    local_58.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_58.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_58.Data.ArrayNum,
               &local_58.Data.ArrayMax);
    memcpy(local_58.Data.AllocatorInstance.Data,_Src,lVar1 * 2);
  }
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_48.AllocatorInstance,1,&local_48.ArrayMax);
  ConstructItems<FString,FString,int>(local_48.AllocatorInstance.Data,&local_58,1);
  local_38._0_8_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_20);
  local_38._8_8_ = *(undefined8 *)&param_1->field_0x8;
  local_38._16_8_ = *(undefined8 *)&param_1->field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_20);
  AsyncQueryFileStates(&local_38,&local_48,param_3);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}

// AsyncQueryFileStates @ 146b05340

void __cdecl
USourceControlHelpers::AsyncQueryFileStates
          (FQueryFileStateDelegate *param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2,
          bool param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  FScriptContainerElement *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  TArrayView<FString_const_,int> local_78;
  FReadAccessScope local_68;
  FReadAccessScope local_50;
  code *local_38 [5];
  undefined8 *local_10;
  
  local_a8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_68);
  local_a0 = *(undefined8 *)&param_1->field_0x8;
  local_98 = *(undefined8 *)&param_1->field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_68);
  local_38[0] = (code *)0x0;
  puVar5 = FMemory::Malloc(0x20,8);
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &UE::Core::Private::Function::
             TFunction_OwnedObject<`USourceControlHelpers::AsyncQueryFileStates'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  puVar5[3] = 0;
  local_10 = puVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_a8,&local_50);
  puVar5[2] = local_a0;
  puVar5[3] = local_98;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_50);
  if (puVar5 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`USourceControlHelpers::AsyncQueryFileStates'::__l2::<lambda_1>,void,FSourceControlState>
                  ::Call;
  }
  local_88 = (param_2->AllocatorInstance).Data;
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_78._12_4_ = uStack_7c;
  local_78.ArrayNum = iVar1;
  local_78.DataPtr = (FString *)local_88;
  iStack_80 = iVar1;
  SourceControlHelpersInternal::RunQueryFileStates
            (&local_78,Asynchronous,param_3,(TFunction<void___cdecl(FSourceControlState)> *)local_38
            );
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a8.AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  DestructItems<FString,int>((FString *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
  pFVar2 = (param_2->AllocatorInstance).Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// BranchPackage @ 146b054c0

bool __cdecl USourceControlHelpers::BranchPackage(UPackage *param_1,UPackage *param_2,Type param_3)

{
  bool bVar1;
  
  bVar1 = ::`anonymous_namespace'::CopyPackage_Internal(param_1,param_2,Branch,param_3);
  return bVar1;
}

// CheckInFile @ 146b05a80

bool __cdecl
USourceControlHelpers::CheckInFile(FString *param_1,FString *param_2,bool param_3,bool param_4)

{
  ISourceControlProvider IVar1;
  FSharedReferencer<1> FVar2;
  int iVar3;
  ISourceControlProvider *pIVar4;
  FText *pFVar5;
  bool bVar6;
  FString local_58;
  TSharedRef<FCheckIn,1> local_48;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  ulonglong local_28;
  FDestructionSentinel local_20;
  
  SourceControlHelpersInternal::ConvertFileToQualifiedPath
            (&local_58,param_1,param_3,false,(wchar_t *)0x0);
  if (1 < local_58.Data.ArrayNum) {
    pIVar4 = SourceControlHelpersInternal::VerifySourceControl(param_3);
    if (pIVar4 != (ISourceControlProvider *)0x0) {
      ISourceControlOperation::Create<FCheckIn>(&local_48);
      pFVar5 = FText::FromString((FText *)local_38,param_2);
      FCheckIn::SetDescription(local_48.Object,pFVar5);
      if ((atomic<unsigned___int64>)local_38 != (atomic<unsigned___int64>)0x0) {
        (**(code **)((longlong)*(ITextData *)local_38 + 0x10))();
      }
      FVar2.ReferenceController = local_48.SharedReferenceCount.ReferenceController;
      (local_48.Object)->bKeepCheckedOut = param_4;
      IVar1 = *pIVar4;
      local_28 = 0;
      local_38 = (undefined1  [8])0x0;
      local_30.Data = (FScriptContainerElement *)0x0;
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      iVar3 = (**(code **)((longlong)IVar1 + 0xd0))(pIVar4,&local_48,&local_58,0,local_38);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
                 (FWriteAccessScope *)&local_20);
      if (((int)local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_30.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
        local_28 = local_28 & 0xffffffff00000000;
      }
      if (local_20.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
      }
      if (local_30.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_30.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_38);
      bVar6 = iVar3 == 1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar2.ReferenceController);
      goto LAB_146b05be7;
    }
  }
  bVar6 = false;
LAB_146b05be7:
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return bVar6;
}

// CheckInFiles @ 146b05c20

bool __cdecl
USourceControlHelpers::CheckInFiles
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,FString *param_2,bool param_3,
          bool param_4)

{
  ISourceControlProvider IVar1;
  FSharedReferencer<1> FVar2;
  bool bVar3;
  int iVar4;
  ISourceControlProvider *pIVar5;
  FText *pFVar6;
  TArray<FString,TSizedDefaultAllocator<32>_> local_68;
  TSharedRef<FCheckIn,1> local_58;
  undefined1 local_48 [8];
  ForAnyElementType local_40;
  ulonglong local_38;
  FDestructionSentinel local_30;
  
  if (param_1->ArrayNum == 0) {
    bVar3 = true;
  }
  else {
    pIVar5 = SourceControlHelpersInternal::VerifySourceControl(param_3);
    bVar3 = false;
    if (pIVar5 != (ISourceControlProvider *)0x0) {
      local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.ArrayNum = 0;
      local_68.ArrayMax = 0;
      bVar3 = SourceControlHelpersInternal::ConvertFilesToQualifiedPaths
                        (param_1,&local_68,param_3,false);
      ISourceControlOperation::Create<FCheckIn>(&local_58);
      pFVar6 = FText::FromString((FText *)local_48,param_2);
      FCheckIn::SetDescription(local_58.Object,pFVar6);
      if ((atomic<unsigned___int64>)local_48 != (atomic<unsigned___int64>)0x0) {
        (**(code **)((longlong)*(ITextData *)local_48 + 0x10))();
      }
      FVar2.ReferenceController = local_58.SharedReferenceCount.ReferenceController;
      (local_58.Object)->bKeepCheckedOut = param_4;
      IVar1 = *pIVar5;
      local_38 = 0;
      local_48 = (undefined1  [8])0x0;
      local_40.Data = (FScriptContainerElement *)0x0;
      if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      iVar4 = (**(code **)((longlong)IVar1 + 0xe8))(pIVar5,&local_58,&local_68,0,local_48);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
                 (FWriteAccessScope *)&local_30);
      if (((int)local_38 != 0) && (local_40.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_40.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40,0,0,0x10);
        local_38 = local_38 & 0xffffffff00000000;
      }
      if (local_30.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
      }
      if (local_40.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_48);
      if ((!bVar3) || (bVar3 = true, iVar4 != 1)) {
        bVar3 = false;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar2.ReferenceController);
      DestructItems<FString,int>((FString *)local_68.AllocatorInstance.Data,local_68.ArrayNum);
      if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.AllocatorInstance.Data);
      }
    }
  }
  return bVar3;
}

// CheckOutFile @ 146b05e00

bool __cdecl USourceControlHelpers::CheckOutFile(FString *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ISourceControlProvider *pIVar7;
  TSharedRef<FCheckOut,1> *pTVar8;
  ISourceControlState *local_a8;
  TReferenceControllerBase<1> *pTStack_a0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_98;
  ForAnyElementType local_90;
  ulonglong local_88;
  FString local_80;
  FCheckOut *local_70;
  TReferenceControllerBase<1> *local_68;
  TSharedPtr<ISourceControlState,1> local_60;
  FDestructionSentinel local_50;
  TSharedRef<FCheckOut,1> local_38;
  TSharedPtr<ISourceControlState,1> local_28;
  
  SourceControlHelpersInternal::ConvertFileToQualifiedPath
            (&local_80,param_1,param_2,false,(wchar_t *)0x0);
  if ((local_80.Data.ArrayNum < 2) ||
     (pIVar7 = SourceControlHelpersInternal::VerifySourceControl(param_2),
     pIVar7 == (ISourceControlProvider *)0x0)) {
    bVar2 = false;
    goto LAB_146b060b1;
  }
  (**(code **)((longlong)*pIVar7 + 0x90))(pIVar7,&local_a8,&local_80);
  if (local_a8 == (ISourceControlState *)0x0) {
    local_60.Object = (ISourceControlState *)0x0;
    local_60.SharedReferenceCount.ReferenceController = pTStack_a0;
    if (pTStack_a0 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_a0->SharedReferenceCount = (atomic<int>)((int)pTStack_a0->SharedReferenceCount + 1);
      UNLOCK();
    }
    LogCheckoutFailure(param_1,&local_80,&local_60,false,param_2);
    bVar2 = false;
  }
  else {
    if ((local_a8 == (ISourceControlState *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    cVar4 = (**(code **)(*(longlong *)local_a8 + 0x88))();
    if (cVar4 == '\0') {
      if ((local_a8 == (ISourceControlState *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      cVar4 = (**(code **)(*(longlong *)local_a8 + 0xe8))();
      if (cVar4 == '\0') {
        bVar2 = false;
        if ((local_a8 == (ISourceControlState *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        cVar4 = (**(code **)(*(longlong *)local_a8 + 0x80))();
        if (cVar4 != '\0') {
          local_88 = 0;
          local_98.AccessDetector.State =
               (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
          local_90.Data = (FScriptContainerElement *)0x0;
          pcVar1 = *(code **)((longlong)*pIVar7 + 0xd0);
          pTVar8 = ISourceControlOperation::Create<FCheckOut>(&local_38);
          local_70 = pTVar8->Object;
          local_68 = (pTVar8->SharedReferenceCount).ReferenceController;
          if (local_68 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_68->SharedReferenceCount = (atomic<int>)((int)local_68->SharedReferenceCount + 1);
            UNLOCK();
          }
          iVar6 = (*pcVar1)(pIVar7,&local_70,&local_80,0,&local_98);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_68);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_38.SharedReferenceCount.ReferenceController);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_98,(FWriteAccessScope *)&local_50);
          if (((int)local_88 != 0) && (local_90.Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)local_90.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_90,0,0,0x10)
            ;
            local_88 = local_88 & 0xffffffff00000000;
          }
          if (local_50.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
          }
          if (local_90.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_90.Data);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_98.AccessDetector);
          if (iVar6 == 1) goto LAB_146b0609a;
          bVar2 = true;
        }
        local_28.Object = local_a8;
        local_28.SharedReferenceCount.ReferenceController = pTStack_a0;
        if (pTStack_a0 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_a0->SharedReferenceCount =
               (atomic<int>)((int)pTStack_a0->SharedReferenceCount + 1);
          UNLOCK();
        }
        LogCheckoutFailure(param_1,&local_80,&local_28,bVar2,param_2);
        bVar2 = false;
        goto LAB_146b0609c;
      }
    }
LAB_146b0609a:
    bVar2 = true;
  }
LAB_146b0609c:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_a0);
LAB_146b060b1:
  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// CheckOutFiles @ 146b060f0

bool __cdecl
USourceControlHelpers::CheckOutFiles
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  void *_Src;
  TReferenceControllerBase<1> *pTVar1;
  ISourceControlState *pIVar2;
  code *pcVar3;
  bool bVar4;
  ForAnyElementType _Src_00;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  ISourceControlProvider *pIVar11;
  FCheckOut *pFVar12;
  FCheckOut *pFVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  atomic<int> *paVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  ForAnyElementType local_108;
  int local_100;
  int local_fc;
  FString local_f8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_e8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_d8;
  ForAnyElementType local_d0;
  ulonglong local_c8;
  TSharedRef<ISourceControlState,1> *local_c0;
  undefined8 local_b8;
  longlong local_b0;
  ISourceControlProvider *local_a8;
  TRawPtrProxy<FCheckOut> local_a0;
  TSharedPtr<ISourceControlState,1> local_98;
  FCheckOut *local_88;
  TReferenceControllerBase<1> *pTStack_80;
  FDestructionSentinel local_78;
  TSharedRef<FCheckOut,1> local_58;
  
  if (param_1->ArrayNum == 0) {
    return true;
  }
  uVar18 = 0;
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 0;
  local_e8.ArrayMax = 0;
  bVar5 = SourceControlHelpersInternal::ConvertFilesToQualifiedPaths
                    (param_1,&local_e8,param_2,false);
  iVar10 = local_e8.ArrayNum;
  lVar14 = (longlong)local_e8.ArrayNum;
  pIVar11 = SourceControlHelpersInternal::VerifySourceControl(param_2);
  local_a8 = pIVar11;
  if (pIVar11 == (ISourceControlProvider *)0x0) {
    bVar5 = false;
  }
  else {
    local_c0 = (TSharedRef<ISourceControlState,1> *)0x0;
    local_b8 = 0;
    (**(code **)((longlong)*pIVar11 + 0xa0))(pIVar11,&local_e8,&local_c0);
    bVar4 = false;
    local_108.Data = (FScriptContainerElement *)0x0;
    local_fc = 0;
    local_100 = 0;
    uVar19 = uVar18;
    uVar21 = uVar18;
    local_b0 = lVar14;
    bVar6 = false;
    if (0 < iVar10) {
      do {
        bVar4 = bVar6;
        uVar20 = (uint)uVar21;
        uVar16 = ~uVar20 >> 0x1f;
        uVar9 = 0;
        if ((int)uVar20 < local_e8.ArrayNum) {
          uVar9 = uVar16;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return (bool)uVar7;
        }
        local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_f8.Data.ArrayNum = *(int *)(local_e8.AllocatorInstance.Data + uVar18 + 8);
        lVar14 = (longlong)local_f8.Data.ArrayNum;
        _Src = *(void **)(local_e8.AllocatorInstance.Data + uVar18);
        if (local_f8.Data.ArrayNum == 0) {
          local_f8.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_f8.Data.ArrayNum,0,(ForAnyElementType *)&local_f8,
                     local_f8.Data.ArrayNum,&local_f8.Data.ArrayMax);
          memcpy(local_f8.Data.AllocatorInstance.Data,_Src,lVar14 * 2);
        }
        uVar9 = 0;
        if ((int)uVar20 < (int)local_b8) {
          uVar9 = uVar16;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return (bool)uVar7;
        }
        pTVar1 = *(TReferenceControllerBase<1> **)
                  ((longlong)&(local_c0->SharedReferenceCount).ReferenceController + uVar18);
        pIVar2 = *(ISourceControlState **)((longlong)&local_c0->Object + uVar18);
        if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
          paVar17 = (atomic<int> *)&DAT_00000008;
        }
        else {
          paVar17 = &pTVar1->SharedReferenceCount;
          LOCK();
          *paVar17 = (atomic<int>)((int)*paVar17 + 1);
          UNLOCK();
        }
        cVar8 = (**(code **)(*(longlong *)pIVar2 + 0x88))(pIVar2);
        if ((cVar8 == '\0') &&
           (cVar8 = (**(code **)(*(longlong *)pIVar2 + 0xe8))(pIVar2), cVar8 == '\0')) {
          cVar8 = (**(code **)(*(longlong *)pIVar2 + 0x80))(pIVar2);
          if (cVar8 == '\0') {
            bVar4 = true;
            if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              *paVar17 = (atomic<int>)((int)*paVar17 + 1);
              UNLOCK();
            }
            uVar9 = 0;
            if ((int)uVar20 < param_1->ArrayNum) {
              uVar9 = uVar16;
            }
            local_98.Object = pIVar2;
            local_98.SharedReferenceCount.ReferenceController = pTVar1;
            if ((uVar9 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar3 = (code *)swi(3);
              uVar7 = (*pcVar3)();
              return (bool)uVar7;
            }
            LogCheckoutFailure((FString *)((param_1->AllocatorInstance).Data + uVar18),&local_f8,
                               &local_98,false,param_2);
          }
          else {
            if (((local_108.Data <= (FScriptContainerElement *)&local_f8) &&
                ((FScriptContainerElement *)&local_f8 < local_108.Data + (longlong)local_fc * 0x10))
               && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar6)) {
              pcVar3 = (code *)swi(3);
              uVar7 = (*pcVar3)();
              return (bool)uVar7;
            }
            if (local_100 == local_fc) {
              local_100 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x810,&local_108,&local_fc);
            }
            _Src_00.Data = local_f8.Data.AllocatorInstance.Data;
            lVar14 = (longlong)local_100;
            local_100 = local_100 + 1;
            pFVar15 = local_108.Data + lVar14 * 0x10;
            *(FScriptContainerElement **)pFVar15 = (FScriptContainerElement *)0x0;
            lVar14 = (longlong)local_f8.Data.ArrayNum;
            *(int *)(pFVar15 + 8) = local_f8.Data.ArrayNum;
            if (local_f8.Data.ArrayNum == 0) {
              *(int *)(pFVar15 + 0xc) = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_f8.Data.ArrayNum,0,(ForAnyElementType *)pFVar15,
                         local_f8.Data.ArrayNum,(int *)(pFVar15 + 0xc));
                    /* WARNING: Load size is inaccurate */
              memcpy(*pFVar15,_Src_00.Data,lVar14 * 2);
            }
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
        uVar19 = uVar19 + 1;
        uVar18 = uVar18 + 0x10;
        pIVar11 = local_a8;
        uVar21 = (ulonglong)(uVar20 + 1);
        bVar6 = bVar4;
      } while ((longlong)uVar19 < local_b0);
    }
    pFVar13 = (FCheckOut *)0x0;
    if ((!bVar5) || (bVar4)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
      if (local_100 != 0) {
        local_c8 = 0;
        local_d8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
        local_d0.Data = (FScriptContainerElement *)0x0;
        pcVar3 = *(code **)((longlong)*pIVar11 + 0xe8);
        pFVar12 = ::operator_new(0x58);
        if (pFVar12 != (FCheckOut *)0x0) {
          *(undefined8 *)&pFVar12->field_0x8 = 0;
          *(undefined8 *)&pFVar12->field_0x48 = 0;
          *(undefined8 *)&pFVar12->field_0x50 = 0;
          *(undefined8 *)&pFVar12->field_0x20 = 0;
          *(undefined8 *)&pFVar12->field_0x30 = 0;
          *(undefined8 *)&pFVar12->field_0x40 = 0;
          *(undefined ***)pFVar12 = &___7FCheckOut__6B_;
          *(undefined8 *)&pFVar12->field_0x10 = 0;
          *(undefined8 *)&pFVar12->field_0x18 = 0;
          *(undefined8 *)&pFVar12->field_0x28 = 0;
          *(undefined8 *)&pFVar12->field_0x38 = 0;
          pFVar13 = pFVar12;
        }
        local_a0.Object = pFVar13;
        TSharedRef<FCheckOut,1>::TSharedRef<FCheckOut,1><FCheckOut>(&local_58,&local_a0);
        local_88 = local_58.Object;
        pTStack_80 = local_58.SharedReferenceCount.ReferenceController;
        if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        iVar10 = (*pcVar3)(pIVar11,&local_88,&local_108,0,&local_d8);
        bVar5 = iVar10 == 1;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_80);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_58.SharedReferenceCount.ReferenceController);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_d8,(FWriteAccessScope *)&local_78);
        if (((int)local_c8 != 0) && (local_d0.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)local_d0.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_d0,0,0,0x10);
          local_c8 = local_c8 & 0xffffffff00000000;
        }
        if (local_78.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
        }
        if (local_d0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d0.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_d8.AccessDetector);
      }
    }
    DestructItems<FString,int>((FString *)local_108.Data,local_100);
    if (local_108.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data);
    }
    DestructItems<TSharedRef<ISourceControlState,1>,int>(local_c0,(int)local_b8);
    if (local_c0 != (TSharedRef<ISourceControlState,1> *)0x0) {
      FMemory::Free(local_c0);
    }
  }
  DestructItems<FString,int>((FString *)local_e8.AllocatorInstance.Data,local_e8.ArrayNum);
  if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  return bVar5;
}

// CheckOutOrAddFile @ 146b066c0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __cdecl USourceControlHelpers::CheckOutOrAddFile(FString *param_1,bool param_2)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ISourceControlProvider *pIVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  TSharedRef<FCheckOut,1> *pTVar10;
  TSharedRef<FMarkForAdd,1> *pTVar11;
  FScriptContainerElement *pFVar12;
  longlong *local_418;
  TReferenceControllerBase<1> *local_410;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_408
  ;
  ForAnyElementType local_3f8;
  undefined8 local_3f0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_3e8;
  ForAnyElementType local_3e0;
  ulonglong local_3d8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_3d0;
  ForAnyElementType local_3c8;
  ulonglong local_3c0;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_3b8
  ;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_3a8
  ;
  FString local_398;
  FString local_388;
  FCheckOut *local_378;
  TReferenceControllerBase<1> *local_370;
  FMarkForAdd *local_368;
  TReferenceControllerBase<1> *local_360;
  FString local_358;
  FString local_348;
  FString local_338;
  FString local_328;
  FString local_318;
  FString local_308;
  FString local_2f8;
  FDestructionSentinel local_2e8;
  FDestructionSentinel local_2d0;
  FFormatArgumentValue local_2b8;
  FFormatArgumentValue local_298;
  FFormatArgumentValue local_278;
  FFormatArgumentValue local_258;
  FFormatArgumentValue local_238;
  FFormatArgumentValue local_218;
  FFormatArgumentValue local_1f8;
  FText local_1d8;
  FText local_1c8;
  FText local_1b8;
  FText local_1a8;
  TSharedRef<FCheckOut,1> local_198;
  FText local_188;
  FText local_178;
  FText local_168;
  FText local_158;
  FText local_148;
  FText local_138;
  FText local_128;
  TSharedRef<FMarkForAdd,1> local_118;
  FText local_108;
  FText local_f8;
  FText local_e8;
  FText local_d8;
  FText local_c8;
  FText local_b8;
  FText local_a8;
  FText local_98;
  FTextFormat local_88;
  FTextFormat local_78;
  FTextFormat local_68;
  FTextFormat local_58;
  FTextFormat local_48;
  FTextFormat local_38;
  
  SourceControlHelpersInternal::ConvertFileToQualifiedPath
            (&local_398,param_1,param_2,false,(wchar_t *)0x0);
  if ((local_398.Data.ArrayNum < 2) ||
     (pIVar7 = SourceControlHelpersInternal::VerifySourceControl(param_2),
     pIVar7 == (ISourceControlProvider *)0x0)) {
    bVar2 = false;
    goto LAB_146b073c4;
  }
  (**(code **)((longlong)*pIVar7 + 0x90))(pIVar7,&local_418,&local_398);
  if (local_418 == (longlong *)0x0) {
    local_3b8.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3b8.Pairs.ArrayNum = 0;
    local_3b8.Pairs.ArrayMax = 0;
    pFVar8 = FText::FromString(&local_1d8,param_1);
    local_298.Type = Text;
    FText::FText((FText *)&local_298.TextValue,pFVar8);
    if ((local_298.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    ::FString::FString(&local_358,L"InFile");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_3b8,&local_358,&local_298);
    if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_358.Data.AllocatorInstance.Data);
    }
    if (local_298.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_298.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    if (local_1d8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1d8.TextData.Reference + 0x10))();
    }
    pFVar8 = FText::FromString(&local_1c8,&local_398);
    local_278.Type = Text;
    FText::FText((FText *)&local_278.TextValue,pFVar8);
    if ((local_278.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    ::FString::FString(&local_348,L"SCFile");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_3b8,&local_348,&local_278);
    if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_348.Data.AllocatorInstance.Data);
    }
    if (local_278.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_278.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    if (local_1c8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1c8.TextData.Reference + 0x10))();
    }
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_1a8,L"SourceControlHelpers",L"CouldNotDetermineState",
                        L"Could not determine revision control state of file \'{InFile}\' ({SCFile})."
                       );
    pFVar9 = FTextFormat::FTextFormat(&local_88,pFVar8,Default);
    pFVar8 = FText::Format(&local_1b8,pFVar9,&local_3b8);
    SourceControlHelpersInternal::LogError(pFVar8,param_2);
    if (local_1b8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1b8.TextData.Reference + 0x10))();
    }
    if (local_1a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1a8.TextData.Reference + 0x10))();
    }
    DestructItems<TTuple<FString,FFormatArgumentValue>,int>
              ((TTuple<FString,FFormatArgumentValue> *)local_3b8.Pairs.AllocatorInstance.Data,
               local_3b8.Pairs.ArrayNum);
    if ((TTuple<FString,FFormatArgumentValue> *)local_3b8.Pairs.AllocatorInstance.Data !=
        (TTuple<FString,FFormatArgumentValue> *)0x0) {
      FMemory::Free(local_3b8.Pairs.AllocatorInstance.Data);
    }
    bVar2 = false;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_410);
    goto LAB_146b073c4;
  }
  if ((local_418 == (longlong *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  cVar4 = (**(code **)(*local_418 + 0x88))();
  if (cVar4 == '\0') {
    if ((local_418 == (longlong *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    cVar4 = (**(code **)(*local_418 + 0xe8))();
    if (cVar4 != '\0') goto LAB_146b073b4;
    local_3f8.Data = (FScriptContainerElement *)0x0;
    local_3f0 = 0;
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_3f8,(int *)((longlong)&local_3f0 + 4));
    _Src.Data = local_398.Data.AllocatorInstance.Data;
    pFVar12 = local_3f8.Data + (longlong)iVar6 * 0x10;
    local_3f0 = CONCAT44(local_3f0._4_4_,iVar6 + 1);
    *(FScriptContainerElement **)pFVar12 = (FScriptContainerElement *)0x0;
    *(int *)(pFVar12 + 8) = local_398.Data.ArrayNum;
    if (local_398.Data.ArrayNum == 0) {
      *(int *)(pFVar12 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_398.Data.ArrayNum,0,(ForAnyElementType *)pFVar12,local_398.Data.ArrayNum,
                 (int *)(pFVar12 + 0xc));
                    /* WARNING: Load size is inaccurate */
      memcpy(*pFVar12,_Src.Data,(longlong)local_398.Data.ArrayNum * 2);
    }
    if ((local_418 == (longlong *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    cVar4 = (**(code **)(*local_418 + 0x80))();
    if (cVar4 == '\0') {
      bVar2 = false;
      if ((local_418 == (longlong *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      cVar4 = (**(code **)(*local_418 + 0xd8))();
      if (cVar4 == '\0') {
        local_3d8 = 0;
        local_3e8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        local_3e0.Data = (FScriptContainerElement *)0x0;
        pcVar1 = *(code **)((longlong)*pIVar7 + 0xe8);
        pTVar11 = ISourceControlOperation::Create<FMarkForAdd>(&local_118);
        local_368 = pTVar11->Object;
        local_360 = (pTVar11->SharedReferenceCount).ReferenceController;
        if (local_360 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_360->SharedReferenceCount = (atomic<int>)((int)local_360->SharedReferenceCount + 1);
          UNLOCK();
        }
        iVar6 = (*pcVar1)(pIVar7,&local_368,&local_3f8,0,&local_3e8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_360);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_118.SharedReferenceCount.ReferenceController);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_3e8,(FWriteAccessScope *)&local_2d0);
        if (((int)local_3d8 != 0) && (local_3e0.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)local_3e0.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_3e0,0,0,0x10);
          local_3d8 = local_3d8 & 0xffffffff00000000;
        }
        if (local_2d0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2d0.Accessor,&local_2d0);
        }
        if (local_3e0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3e0.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_3e8.AccessDetector);
        if (iVar6 == 1) goto LAB_146b06ed6;
        bVar2 = true;
      }
      local_388.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_388.Data.ArrayNum = 0;
      local_388.Data.ArrayMax = 0;
      local_408.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_408.Pairs.ArrayNum = 0;
      local_408.Pairs.ArrayMax = 0;
      pFVar8 = FText::FromString(&local_128,param_1);
      local_218.Type = Text;
      FText::FText((FText *)&local_218.TextValue,pFVar8);
      if ((local_218.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar5)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      ::FString::FString(&local_318,L"InFile");
      TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
      Emplace<FString,FFormatArgumentValue>(&local_408,&local_318,&local_218);
      if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_318.Data.AllocatorInstance.Data);
      }
      if (local_218.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_218.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      if (local_128.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
      }
      pFVar8 = FText::FromString(&local_e8,&local_398);
      local_1f8.Type = Text;
      FText::FText((FText *)&local_1f8.TextValue,pFVar8);
      if ((local_1f8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar5)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      ::FString::FString(&local_308,L"SCFile");
      TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
      Emplace<FString,FFormatArgumentValue>(&local_408,&local_308,&local_1f8);
      if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_308.Data.AllocatorInstance.Data);
      }
      if (local_1f8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_1f8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      if (local_e8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
      }
      if (bVar2) {
        pFVar8 = FText::AsLocalizable_Advanced_LocText
                           (&local_d8,L"SourceControlHelpers",L"AddFailed",
                            L"Failed to add file \'{InFile}\' to revision control ({SCFile}).");
        pFVar9 = FTextFormat::FTextFormat(&local_68,pFVar8,Default);
        pFVar8 = FText::Format(&local_138,pFVar9,&local_408);
        SourceControlHelpersInternal::LogError(pFVar8,param_2);
        local_148.TextData.Reference = local_d8.TextData.Reference;
        if (local_138.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
          local_148.TextData.Reference = local_d8.TextData.Reference;
        }
      }
      else {
        if ((local_418 == (longlong *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        cVar4 = (**(code **)(*local_418 + 0xd0))();
        if (cVar4 == '\0') {
          pFVar8 = FText::AsLocalizable_Advanced_LocText
                             (&local_b8,L"SourceControlHelpers",L"NotAtHeadRevision",
                              L"File \'{InFile}\' is not at head revision ({SCFile}).");
          pFVar9 = FTextFormat::FTextFormat(&local_58,pFVar8,Default);
          pFVar8 = FText::Format(&local_c8,pFVar9,&local_408);
          SourceControlHelpersInternal::LogError(pFVar8,param_2);
          local_148.TextData.Reference = local_b8.TextData.Reference;
          if (local_c8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
            local_148.TextData.Reference = local_b8.TextData.Reference;
          }
        }
        else {
          if ((local_418 == (longlong *)0x0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          cVar4 = (**(code **)(*local_418 + 0x90))(local_418,&local_388);
          if (cVar4 == '\0') {
            pFVar8 = FText::AsLocalizable_Advanced_LocText
                               (&local_148,L"SourceControlHelpers",L"CouldNotDetermineState",
                                L"Could not determine revision control state of file \'{InFile}\' ({SCFile})."
                               );
            pFVar9 = FTextFormat::FTextFormat(&local_48,pFVar8,Default);
            pFVar8 = FText::Format(&local_158,pFVar9,&local_408);
            SourceControlHelpersInternal::LogError(pFVar8,param_2);
            if (local_158.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
            }
          }
          else {
            pFVar8 = FText::FromString(&local_a8,&local_388);
            local_2b8.Type = Text;
            FText::FText((FText *)&local_2b8.TextValue,pFVar8);
            if ((local_2b8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0)
               && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsSet()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                      ,0xbd,
                                      L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                     ), bVar2)) {
              pcVar1 = (code *)swi(3);
              uVar3 = (*pcVar1)();
              return (bool)uVar3;
            }
            ::FString::FString(&local_2f8,L"SimultaneousCheckoutUser");
            TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
            ::Emplace<FString,FFormatArgumentValue>(&local_408,&local_2f8,&local_2b8);
            if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
            }
            if (local_2b8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)
                           *(ITextData *)
                            local_2b8.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))();
            }
            if (local_a8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
            }
            pFVar8 = FText::AsLocalizable_Advanced_LocText
                               (&local_168,L"SourceControlHelpers",L"SimultaneousCheckout",
                                L"File \'{InFile}\' is checked out by another ({SimultaneousCheckoutUser}) ({SCFile})."
                               );
            pFVar9 = FTextFormat::FTextFormat(&local_38,pFVar8,Default);
            pFVar8 = FText::Format(&local_98,pFVar9,&local_408);
            SourceControlHelpersInternal::LogError(pFVar8,param_2);
            local_148.TextData.Reference = local_168.TextData.Reference;
            if (local_98.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
              local_148.TextData.Reference = local_168.TextData.Reference;
            }
          }
        }
      }
      if (local_148.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_148.TextData.Reference + 0x10))();
      }
      bVar2 = false;
      DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                ((TTuple<FString,FFormatArgumentValue> *)local_408.Pairs.AllocatorInstance.Data,
                 local_408.Pairs.ArrayNum);
      if ((TTuple<FString,FFormatArgumentValue> *)local_408.Pairs.AllocatorInstance.Data !=
          (TTuple<FString,FFormatArgumentValue> *)0x0) {
        FMemory::Free(local_408.Pairs.AllocatorInstance.Data);
      }
      if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_388.Data.AllocatorInstance.Data);
      }
    }
    else {
      local_3c0 = 0;
      local_3d0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_3c8.Data = (FScriptContainerElement *)0x0;
      pcVar1 = *(code **)((longlong)*pIVar7 + 0xe8);
      pTVar10 = ISourceControlOperation::Create<FCheckOut>(&local_198);
      local_378 = pTVar10->Object;
      local_370 = (pTVar10->SharedReferenceCount).ReferenceController;
      if (local_370 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_370->SharedReferenceCount = (atomic<int>)((int)local_370->SharedReferenceCount + 1);
        UNLOCK();
      }
      iVar6 = (*pcVar1)(pIVar7,&local_378,&local_3f8,0,&local_3d0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_370)
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_198.SharedReferenceCount.ReferenceController);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_3d0,(FWriteAccessScope *)&local_2e8);
      if (((int)local_3c0 != 0) && (local_3c8.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_3c8.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_3c8,0,0,0x10);
        local_3c0 = local_3c0 & 0xffffffff00000000;
      }
      if (local_2e8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2e8.Accessor,&local_2e8);
      }
      if (local_3c8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3c8.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_3d0.AccessDetector);
      if (iVar6 == 1) {
LAB_146b06ed6:
        bVar2 = true;
      }
      else {
        local_3a8.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_3a8.Pairs.ArrayNum = 0;
        local_3a8.Pairs.ArrayMax = 0;
        pFVar8 = FText::FromString(&local_188,param_1);
        local_258.Type = Text;
        FText::FText((FText *)&local_258.TextValue,pFVar8);
        if ((local_258.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0xbd,
                               L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                              ), bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        ::FString::FString(&local_338,L"InFile");
        TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
        Emplace<FString,FFormatArgumentValue>(&local_3a8,&local_338,&local_258);
        if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_338.Data.AllocatorInstance.Data);
        }
        if (local_258.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)
                       *(ITextData *)local_258.TextValue.field0_0x0.TypedValue.TextData.Reference +
                      0x10))();
        }
        if (local_188.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_188.TextData.Reference + 0x10))();
        }
        pFVar8 = FText::FromString(&local_178,&local_398);
        local_238.Type = Text;
        FText::FText((FText *)&local_238.TextValue,pFVar8);
        if ((local_238.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0xbd,
                               L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                              ), bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        ::FString::FString(&local_328,L"SCFile");
        TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
        Emplace<FString,FFormatArgumentValue>(&local_3a8,&local_328,&local_238);
        if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_328.Data.AllocatorInstance.Data);
        }
        if (local_238.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)
                       *(ITextData *)local_238.TextValue.field0_0x0.TypedValue.TextData.Reference +
                      0x10))();
        }
        if (local_178.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_178.TextData.Reference + 0x10))();
        }
        pFVar8 = FText::AsLocalizable_Advanced_LocText
                           (&local_108,L"SourceControlHelpers",L"CheckoutFailed",
                            L"Failed to check out file \'{InFile}\' ({SCFile}).");
        pFVar9 = FTextFormat::FTextFormat(&local_78,pFVar8,Default);
        pFVar8 = FText::Format(&local_f8,pFVar9,&local_3a8);
        SourceControlHelpersInternal::LogError(pFVar8,param_2);
        if (local_f8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
        }
        if (local_108.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
        }
        DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                  ((TTuple<FString,FFormatArgumentValue> *)local_3a8.Pairs.AllocatorInstance.Data,
                   local_3a8.Pairs.ArrayNum);
        if ((TTuple<FString,FFormatArgumentValue> *)local_3a8.Pairs.AllocatorInstance.Data !=
            (TTuple<FString,FFormatArgumentValue> *)0x0) {
          FMemory::Free(local_3a8.Pairs.AllocatorInstance.Data);
        }
        bVar2 = false;
      }
    }
    DestructItems<FString,int>((FString *)local_3f8.Data,(int)local_3f0);
    if (local_3f8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3f8.Data);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_410)
      ;
      goto LAB_146b073c4;
    }
  }
  else {
LAB_146b073b4:
    bVar2 = true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_410);
LAB_146b073c4:
  if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_398.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// CheckOutOrAddFiles @ 146b07400

bool __cdecl
USourceControlHelpers::CheckOutOrAddFiles
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  void *_Src;
  TReferenceControllerBase<1> *pTVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  ForAnyElementType _Src_00;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  ISourceControlProvider *pIVar13;
  FMarkForAdd *pFVar14;
  ForAnyElementType FVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  FMarkForAdd *pFVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  ForAnyElementType local_148;
  undefined8 local_140;
  ForAnyElementType local_138;
  int local_130;
  int local_12c;
  ForAnyElementType local_128;
  int local_120;
  int local_11c;
  TArray<FString,TSizedDefaultAllocator<32>_> local_118;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_108;
  ForAnyElementType local_100;
  ulonglong local_f8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_f0;
  ForAnyElementType local_e8;
  ulonglong local_e0;
  TSharedRef<ISourceControlState,1> *local_d8;
  undefined8 local_d0;
  longlong local_c8;
  ISourceControlProvider *local_c0;
  TRawPtrProxy<FMarkForAdd> local_b8;
  TRawPtrProxy<FCheckOut> local_b0;
  FMarkForAdd *local_a8;
  TReferenceControllerBase<1> *pTStack_a0;
  FCheckOut *local_98;
  TReferenceControllerBase<1> *pTStack_90;
  FDestructionSentinel local_88;
  FDestructionSentinel local_70;
  TSharedRef<FMarkForAdd,1> local_58;
  TSharedRef<FCheckOut,1> local_48;
  
  if (param_1->ArrayNum == 0) {
    return true;
  }
  uVar19 = 0;
  local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.ArrayNum = 0;
  local_118.ArrayMax = 0;
  bVar7 = SourceControlHelpersInternal::ConvertFilesToQualifiedPaths
                    (param_1,&local_118,param_2,false);
  iVar12 = local_118.ArrayNum;
  lVar17 = (longlong)local_118.ArrayNum;
  pIVar13 = SourceControlHelpersInternal::VerifySourceControl(param_2);
  local_c0 = pIVar13;
  if (pIVar13 == (ISourceControlProvider *)0x0) {
    bVar7 = false;
  }
  else {
    local_d8 = (TSharedRef<ISourceControlState,1> *)0x0;
    local_d0 = 0;
    (**(code **)((longlong)*pIVar13 + 0xa0))(pIVar13,&local_118,&local_d8);
    bVar5 = false;
    local_138.Data = (FScriptContainerElement *)0x0;
    bVar4 = false;
    local_12c = 0;
    local_148.Data = (FScriptContainerElement *)0x0;
    local_130 = 0;
    local_140 = 0;
    uVar20 = uVar19;
    uVar22 = uVar19;
    local_c8 = lVar17;
    bVar8 = false;
    bVar6 = false;
    if (0 < iVar12) {
      do {
        bVar5 = bVar6;
        bVar4 = bVar8;
        uVar21 = (uint)uVar22;
        uVar11 = 0;
        if ((int)uVar21 < local_118.ArrayNum) {
          uVar11 = ~uVar21 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          uVar9 = (*pcVar3)();
          return (bool)uVar9;
        }
        local_128.Data = (FScriptContainerElement *)0x0;
        local_120 = *(int *)(local_118.AllocatorInstance.Data + uVar20 + 8);
        lVar17 = (longlong)local_120;
        _Src = *(void **)(local_118.AllocatorInstance.Data + uVar20);
        if (local_120 == 0) {
          local_11c = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_120,0,&local_128,local_120,&local_11c);
          memcpy(local_128.Data,_Src,lVar17 * 2);
        }
        uVar11 = 0;
        if ((int)uVar21 < (int)local_d0) {
          uVar11 = ~uVar21 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          uVar9 = (*pcVar3)();
          return (bool)uVar9;
        }
        pTVar1 = *(TReferenceControllerBase<1> **)
                  ((longlong)&(local_d8->SharedReferenceCount).ReferenceController + uVar20);
        plVar2 = *(longlong **)((longlong)&local_d8->Object + uVar20);
        if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
          UNLOCK();
        }
        cVar10 = (**(code **)(*plVar2 + 0x88))(plVar2);
        if ((cVar10 == '\0') && (cVar10 = (**(code **)(*plVar2 + 0xe8))(plVar2), cVar10 == '\0')) {
          cVar10 = (**(code **)(*plVar2 + 0xd8))(plVar2);
          if (cVar10 == '\0') {
            cVar10 = (**(code **)(*plVar2 + 0x120))();
            if (cVar10 != '\0') {
              if (((local_138.Data <= (FScriptContainerElement *)&local_128) &&
                  ((FScriptContainerElement *)&local_128 <
                   local_138.Data + (longlong)local_12c * 0x10)) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar8)) {
                pcVar3 = (code *)swi(3);
                uVar9 = (*pcVar3)();
                return (bool)uVar9;
              }
              if (local_130 == local_12c) {
                local_130 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x810,&local_138,&local_12c);
              }
              FVar15.Data = local_138.Data;
              iVar12 = local_130;
              local_130 = local_130 + 1;
              goto LAB_146b076fa;
            }
            bVar5 = true;
          }
          else {
            cVar10 = (**(code **)(*plVar2 + 0x80))(plVar2);
            if (cVar10 == '\0') {
              bVar4 = true;
            }
            else {
              if (((local_148.Data <= (FScriptContainerElement *)&local_128) &&
                  ((FScriptContainerElement *)&local_128 <
                   local_148.Data + (longlong)local_140._4_4_ * 0x10)) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar8)) {
                pcVar3 = (code *)swi(3);
                uVar9 = (*pcVar3)();
                return (bool)uVar9;
              }
              iVar12 = (int)local_140;
              if ((int)local_140 == local_140._4_4_) {
                iVar12 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&local_148,(int *)((longlong)&local_140 + 4));
              }
              local_140 = CONCAT44(local_140._4_4_,iVar12 + 1);
              FVar15.Data = local_148.Data;
LAB_146b076fa:
              _Src_00.Data = local_128.Data;
              pFVar16 = FVar15.Data + (longlong)iVar12 * 0x10;
              *(FScriptContainerElement **)pFVar16 = (FScriptContainerElement *)0x0;
              lVar17 = (longlong)local_120;
              *(int *)(pFVar16 + 8) = local_120;
              if (local_120 == 0) {
                *(int *)(pFVar16 + 0xc) = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_120,0,(ForAnyElementType *)pFVar16,local_120,
                           (int *)(pFVar16 + 0xc));
                    /* WARNING: Load size is inaccurate */
                memcpy(*pFVar16,_Src_00.Data,lVar17 * 2);
              }
            }
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        if (local_128.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.Data);
        }
        uVar19 = uVar19 + 1;
        uVar20 = uVar20 + 0x10;
        pIVar13 = local_c0;
        uVar22 = (ulonglong)(uVar21 + 1);
        bVar8 = bVar4;
        bVar6 = bVar5;
      } while ((longlong)uVar19 < local_c8);
    }
    pFVar18 = (FMarkForAdd *)0x0;
    if (((!bVar7) || (bVar4)) || (bVar5)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (local_130 != 0) {
      local_f8 = 0;
      local_108.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_100.Data = (FScriptContainerElement *)0x0;
      pcVar3 = *(code **)((longlong)*pIVar13 + 0xe8);
      pFVar14 = ::operator_new(0x58);
      local_b8.Object = pFVar18;
      if (pFVar14 != (FMarkForAdd *)0x0) {
        *(undefined8 *)&pFVar14->field_0x8 = 0;
        *(undefined8 *)&pFVar14->field_0x48 = 0;
        *(undefined8 *)&pFVar14->field_0x50 = 0;
        *(undefined8 *)&pFVar14->field_0x20 = 0;
        *(undefined8 *)&pFVar14->field_0x30 = 0;
        *(undefined8 *)&pFVar14->field_0x40 = 0;
        *(undefined ***)pFVar14 = &___7FMarkForAdd__6B_;
        *(undefined8 *)&pFVar14->field_0x10 = 0;
        *(undefined8 *)&pFVar14->field_0x18 = 0;
        *(undefined8 *)&pFVar14->field_0x28 = 0;
        *(undefined8 *)&pFVar14->field_0x38 = 0;
        local_b8.Object = pFVar14;
      }
      TSharedRef<FMarkForAdd,1>::TSharedRef<FMarkForAdd,1><FMarkForAdd>(&local_58,&local_b8);
      local_a8 = local_58.Object;
      pTStack_a0 = local_58.SharedReferenceCount.ReferenceController;
      if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      iVar12 = (*pcVar3)(pIVar13,&local_a8,&local_138,0,&local_108);
      pFVar14 = pFVar18;
      if (iVar12 == 1) {
        pFVar14 = (FMarkForAdd *)(ulonglong)bVar7;
      }
      bVar7 = SUB81(pFVar14,0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_a0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_108,(FWriteAccessScope *)&local_88);
      if (((int)local_f8 != 0) && (local_100.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_100.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_100,0,0,0x10);
        local_f8 = local_f8 & 0xffffffff00000000;
      }
      if (local_88.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
      }
      if (local_100.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_108.AccessDetector);
    }
    if ((int)local_140 != 0) {
      local_e0 = 0;
      local_f0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_e8.Data = (FScriptContainerElement *)0x0;
      pcVar3 = *(code **)((longlong)*pIVar13 + 0xe8);
      pFVar14 = ::operator_new(0x58);
      local_b0.Object = (FCheckOut *)pFVar18;
      if (pFVar14 != (FMarkForAdd *)0x0) {
        *(undefined8 *)&pFVar14->field_0x8 = 0;
        *(undefined8 *)&pFVar14->field_0x48 = 0;
        *(undefined8 *)&pFVar14->field_0x50 = 0;
        *(undefined8 *)&pFVar14->field_0x20 = 0;
        *(undefined8 *)&pFVar14->field_0x30 = 0;
        *(undefined8 *)&pFVar14->field_0x40 = 0;
        *(undefined ***)pFVar14 = &___7FCheckOut__6B_;
        *(undefined8 *)&pFVar14->field_0x10 = 0;
        *(undefined8 *)&pFVar14->field_0x18 = 0;
        *(undefined8 *)&pFVar14->field_0x28 = 0;
        *(undefined8 *)&pFVar14->field_0x38 = 0;
        local_b0.Object = (FCheckOut *)pFVar14;
      }
      TSharedRef<FCheckOut,1>::TSharedRef<FCheckOut,1><FCheckOut>(&local_48,&local_b0);
      local_98 = local_48.Object;
      pTStack_90 = local_48.SharedReferenceCount.ReferenceController;
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      iVar12 = (*pcVar3)(pIVar13,&local_98,&local_148,0,&local_f0);
      if (iVar12 == 1) {
        pFVar18 = (FMarkForAdd *)(ulonglong)bVar7;
      }
      bVar7 = SUB81(pFVar18,0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_90);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_f0,(FWriteAccessScope *)&local_70);
      if (((int)local_e0 != 0) && (local_e8.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_e8.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_e8,0,0,0x10);
        local_e0 = local_e0 & 0xffffffff00000000;
      }
      if (local_70.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
      }
      if (local_e8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_f0.AccessDetector);
    }
    DestructItems<FString,int>((FString *)local_148.Data,(int)local_140);
    if (local_148.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data);
    }
    DestructItems<FString,int>((FString *)local_138.Data,local_130);
    if (local_138.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data);
    }
    DestructItems<TSharedRef<ISourceControlState,1>,int>(local_d8,(int)local_d0);
    if (local_d8 != (TSharedRef<ISourceControlState,1> *)0x0) {
      FMemory::Free(local_d8);
    }
  }
  DestructItems<FString,int>((FString *)local_118.AllocatorInstance.Data,local_118.ArrayNum);
  if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.AllocatorInstance.Data);
  }
  return bVar7;
}

// CheckoutOrMarkForAdd @ 146b07bd0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __cdecl
USourceControlHelpers::CheckoutOrMarkForAdd
          (FString *param_1,FText *param_2,
          TDelegate<bool___cdecl(FString_const_&,FText_const_&,FText_&),FDefaultDelegateUserPolicy>
          *param_3,FText *param_4)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  ISourceControlModule *pIVar6;
  longlong *plVar7;
  TSharedRef<FCheckOut,1> *pTVar8;
  FText *pFVar9;
  FText *pFVar10;
  FTextFormat *pFVar11;
  TSharedRef<FMarkForAdd,1> *pTVar12;
  longlong *plVar13;
  char cVar14;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1a8;
  ForAnyElementType local_1a0;
  ulonglong local_198;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_190;
  ForAnyElementType local_188;
  ulonglong local_180;
  longlong *local_178;
  TReferenceControllerBase<1> *local_170;
  longlong *local_168;
  TReferenceControllerBase<1> *local_160;
  FCheckOut *local_158;
  TReferenceControllerBase<1> *local_150;
  FMarkForAdd *local_148;
  TReferenceControllerBase<1> *local_140;
  FDestructionSentinel local_138;
  FDestructionSentinel local_120;
  TSharedRef<FCheckOut,1> local_108;
  FText local_f8;
  FText local_e8;
  TSharedRef<FMarkForAdd,1> local_d8;
  FText local_c8;
  FText local_b8;
  FReadAccessScope local_a8;
  FReadAccessScope local_90;
  FText local_78;
  FTextFormat local_68;
  FText local_58;
  FTextFormat local_48;
  
  cVar14 = true;
  pIVar6 = ISourceControlModule::Get();
  plVar7 = (longlong *)(**(code **)((longlong)*pIVar6 + 0x78))(pIVar6);
  pIVar6 = ISourceControlModule::Get();
  cVar2 = (**(code **)((longlong)*pIVar6 + 0x70))(pIVar6);
  if (cVar2 != '\0') {
    (**(code **)(*plVar7 + 0x90))(plVar7,&local_178,param_1,0);
    if (local_178 != (longlong *)0x0) {
      if ((local_178 == (longlong *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      cVar2 = (**(code **)(*local_178 + 0xd8))();
      if (cVar2 != '\0') {
        if ((local_178 == (longlong *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
        cVar2 = (**(code **)(*local_178 + 0x80))();
        if (cVar2 != '\0') {
          local_198 = 0;
          local_1a8.AccessDetector.State =
               (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
          pcVar1 = *(code **)(*plVar7 + 0xd0);
          local_1a0.Data = (FScriptContainerElement *)0x0;
          pTVar8 = ISourceControlOperation::Create<FCheckOut>(&local_108);
          local_158 = pTVar8->Object;
          local_150 = (pTVar8->SharedReferenceCount).ReferenceController;
          if (local_150 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_150->SharedReferenceCount =
                 (atomic<int>)((int)local_150->SharedReferenceCount + 1);
            UNLOCK();
          }
          iVar5 = (*pcVar1)(plVar7,&local_158,param_1,0,&local_1a8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_150);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_108.SharedReferenceCount.ReferenceController);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_1a8,(FWriteAccessScope *)&local_138);
          if (((int)local_198 != 0) && (local_1a0.Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)local_1a0.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_1a0,0,0,0x10);
            local_198 = local_198 & 0xffffffff00000000;
          }
          if (local_138.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_138.Accessor,&local_138);
          }
          if (local_1a0.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1a0.Data);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1a8.AccessDetector);
          cVar14 = iVar5 == 1;
          if (!(bool)cVar14) {
            pFVar9 = FText::FText(&local_78,param_2);
            pFVar10 = FText::AsLocalizable_Advanced_LocText
                                (&local_e8,L"SourceControlHelpers",L"SourceControlCheckoutError",
                                 L"Could not check out {0} file.");
            pFVar11 = FTextFormat::FTextFormat(&local_68,pFVar10,Default);
            pFVar9 = FText::Format<FText>(&local_f8,pFVar11,pFVar9);
            FText::operator=(param_4,pFVar9);
            if (local_f8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
            }
            if (local_e8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
            }
          }
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_170);
    if ((bool)cVar14 == false) {
      return false;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_3,&local_a8);
  if (((*(int *)&param_3->field_0x10 == 0) || (*(longlong **)&param_3->field_0x8 == (longlong *)0x0)
      ) || (cVar2 = (**(code **)(**(longlong **)&param_3->field_0x8 + 0x38))(), cVar2 == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_a8);
  if (bVar3) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_3,&local_90);
    if (*(int *)&param_3->field_0x10 == 0) {
      plVar13 = (longlong *)0x0;
    }
    else {
      plVar13 = *(longlong **)&param_3->field_0x8;
    }
    cVar14 = (**(code **)(*plVar13 + 0x60))(plVar13,param_1,param_2,param_4);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_90);
  }
  if (cVar14 != '\0') {
    pIVar6 = ISourceControlModule::Get();
    cVar2 = (**(code **)((longlong)*pIVar6 + 0x70))(pIVar6);
    if (cVar2 != '\0') {
      (**(code **)(*plVar7 + 0x90))(plVar7,&local_168,param_1,1);
      if (local_168 != (longlong *)0x0) {
        if ((local_168 == (longlong *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
        cVar2 = (**(code **)(*local_168 + 0xd8))();
        if (cVar2 == '\0') {
          local_180 = 0;
          local_190.AccessDetector.State =
               (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
          pcVar1 = *(code **)(*plVar7 + 0xd0);
          local_188.Data = (FScriptContainerElement *)0x0;
          pTVar12 = ISourceControlOperation::Create<FMarkForAdd>(&local_d8);
          local_148 = pTVar12->Object;
          local_140 = (pTVar12->SharedReferenceCount).ReferenceController;
          if (local_140 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_140->SharedReferenceCount =
                 (atomic<int>)((int)local_140->SharedReferenceCount + 1);
            UNLOCK();
          }
          iVar5 = (*pcVar1)(plVar7,&local_148,param_1,0,&local_190);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_140);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_d8.SharedReferenceCount.ReferenceController);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_190,(FWriteAccessScope *)&local_120);
          if (((int)local_180 != 0) && (local_188.Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)local_188.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_188,0,0,0x10);
            local_180 = local_180 & 0xffffffff00000000;
          }
          if (local_120.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_120.Accessor,&local_120);
          }
          if (local_188.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_188.Data);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_190.AccessDetector);
          cVar14 = iVar5 == 1;
          if (!(bool)cVar14) {
            pFVar9 = FText::FText(&local_58,param_2);
            pFVar10 = FText::AsLocalizable_Advanced_LocText
                                (&local_b8,L"SourceControlHelpers",L"SourceControlMarkForAddError",
                                 L"Could not mark {0} file for add.");
            pFVar11 = FTextFormat::FTextFormat(&local_48,pFVar10,Default);
            pFVar9 = FText::Format<FText>(&local_c8,pFVar11,pFVar9);
            FText::operator=(param_4,pFVar9);
            if (local_c8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
            }
            if (local_b8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
            }
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_160)
      ;
    }
  }
  return (bool)cVar14;
}

// CopyFile @ 146b0fd80

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __cdecl
`USourceControlHelpers::CopyFileUnderSourceControl'::__l2::Local::CopyFile
          (FString *param_1,FText *param_2,FText *param_3,FString *param_4)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  IFileManager *pIVar3;
  FText *pFVar4;
  FTextFormat *pFVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  undefined1 local_res8 [8];
  FText local_48;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  pIVar3 = IFileManager::Get();
  pwVar6 = L"";
  if ((param_4->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_4->Data).AllocatorInstance.Data;
  }
  if ((param_1->Data).ArrayNum != 0) {
    pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar2 = (**(code **)((longlong)*pIVar3 + 0x40))(pIVar3,pwVar6,pwVar7,1,1,0,0,0,0);
  if (iVar2 != 0) {
    local_48.TextData.Reference = (param_2->TextData).Reference;
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 8))
                (local_48.TextData.Reference,local_res8);
    }
    local_48.Flags = param_2->Flags;
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_28,L"SourceControlHelpers",L"ExternalImageCopyError",
                        L"Could not overwrite {0} file.");
    pFVar5 = FTextFormat::FTextFormat(&local_18,pFVar4,Default);
    pFVar4 = FText::Format<FText>(&local_38,pFVar5,&local_48);
    FText::operator=(param_3,pFVar4);
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
  }
  pFVar1 = (param_4->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return iVar2 == 0;
}

// CopyFile @ 146b0fec0

bool __cdecl USourceControlHelpers::CopyFile(FString *param_1,FString *param_2,bool param_3)

{
  int *piVar1;
  ISourceControlProvider IVar2;
  FSharedReferencer<1> FVar3;
  int iVar4;
  ForAnyElementType FVar5;
  ISourceControlProvider *pIVar6;
  FCopy *pFVar7;
  FCopy *pFVar8;
  bool bVar9;
  FString *pFVar10;
  TRawPtrProxy<FCopy> local_res20;
  FString local_88;
  FString local_78;
  FString local_68;
  TSharedRef<FCopy,1> local_58;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_48;
  ForAnyElementType local_40;
  ulonglong local_38;
  FDestructionSentinel local_30;
  
  pFVar8 = (FCopy *)0x0;
  SourceControlHelpersInternal::ConvertFileToQualifiedPath
            (&local_78,param_1,param_3,false,(wchar_t *)0x0);
  if (local_78.Data.ArrayNum < 2) {
    bVar9 = false;
  }
  else {
    FPaths::GetExtension(&local_68,&local_78,true);
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_68.Data.ArrayNum != 0) {
      FVar5.Data = local_68.Data.AllocatorInstance.Data;
    }
    SourceControlHelpersInternal::ConvertFileToQualifiedPath
              (&local_88,param_2,param_3,false,(wchar_t *)FVar5.Data);
    if ((local_88.Data.ArrayNum < 2) ||
       (pIVar6 = SourceControlHelpersInternal::VerifySourceControl(param_3),
       pIVar6 == (ISourceControlProvider *)0x0)) {
      bVar9 = false;
    }
    else {
      pFVar7 = ::operator_new(0x70);
      if (pFVar7 != (FCopy *)0x0) {
        pFVar7->_padding_ = 0;
        pFVar7->_padding_ = 0;
        pFVar7->_padding_ = 0;
        pFVar7->_padding_ = (longlong)&___7FCopy__6B_;
        pFVar7->_padding_ = 0;
        pFVar7->_padding_ = 0;
        pFVar7->_padding_ = 0;
        pFVar7->_padding_ = 0;
        pFVar7->_padding_ = 0;
        pFVar7->_padding_ = 0;
        pFVar7->_padding_ = 0;
        pFVar7->CopyMethod = Branch;
        pFVar7->ResolveMethod = AcceptTarget;
        (pFVar7->Destination).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar7->Destination).Data.ArrayNum = 0;
        (pFVar7->Destination).Data.ArrayMax = 0;
        pFVar8 = pFVar7;
      }
      local_res20.Object = pFVar8;
      TSharedRef<FCopy,1>::TSharedRef<FCopy,1><FCopy>(&local_58,&local_res20);
      FVar5.Data = local_88.Data.AllocatorInstance.Data;
      pFVar10 = &(local_58.Object)->Destination;
      if (pFVar10 != &local_88) {
        piVar1 = &((local_58.Object)->Destination).Data.ArrayMax;
        iVar4 = *piVar1;
        ((local_58.Object)->Destination).Data.ArrayNum = local_88.Data.ArrayNum;
        if ((local_88.Data.ArrayNum == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_88.Data.ArrayNum,iVar4,(ForAnyElementType *)pFVar10,
                     local_88.Data.ArrayNum,piVar1);
          if (local_88.Data.ArrayNum != 0) {
            memcpy((pFVar10->Data).AllocatorInstance.Data,FVar5.Data,
                   (longlong)local_88.Data.ArrayNum * 2);
          }
        }
      }
      FVar3.ReferenceController = local_58.SharedReferenceCount.ReferenceController;
      IVar2 = *pIVar6;
      local_38 = 0;
      local_48.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_40.Data = (FScriptContainerElement *)0x0;
      if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      iVar4 = (**(code **)((longlong)IVar2 + 0xd0))(pIVar6,&local_58,&local_78,0,&local_48);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_48,(FWriteAccessScope *)&local_30);
      if (((int)local_38 != 0) && (local_40.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_40.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40,0,0,0x10);
        local_38 = local_38 & 0xffffffff00000000;
      }
      if (local_30.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
      }
      if (local_40.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_48.AccessDetector);
      bVar9 = iVar4 == 1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar3.ReferenceController);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return bVar9;
}

// CopyFileUnderSourceControl @ 146b10160

bool __cdecl
USourceControlHelpers::CopyFileUnderSourceControl
          (FString *param_1,FString *param_2,FText *param_3,FText *param_4)

{
  bool bVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  local_58 = (undefined1  [8])0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_40);
  local_28 = &local_50;
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,&local_50);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_NAEBVFString__AEBVFText__AEAV2__ZUFDefaultDelegateUserPolicy__V1___6B_
    ;
    ::FString::FString((FString *)(puVar2 + 1),param_2);
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[3] = uVar3;
    *puVar2 = &
              ___7__TBaseStaticDelegateInstance___A6A_NAEBVFString__AEBVFText__AEAV2__ZUFDefaultDelegateUserPolicy__V1___6B_
    ;
    puVar2[4] = `USourceControlHelpers::CopyFileUnderSourceControl'::__l2::Local::CopyFile;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  bVar1 = CheckoutOrMarkForAdd
                    (param_1,param_3,
                     (TDelegate<bool___cdecl(FString_const_&,FText_const_&,FText_&),FDefaultDelegateUserPolicy>
                      *)local_58,param_4);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_58);
  return bVar1;
}

// CopyPackage @ 146b102c0

bool __cdecl USourceControlHelpers::CopyPackage(UPackage *param_1,UPackage *param_2,Type param_3)

{
  bool bVar1;
  
  bVar1 = ::`anonymous_namespace'::CopyPackage_Internal(param_1,param_2,Add,param_3);
  return bVar1;
}

// CurrentProvider @ 146b130e0

FString * __cdecl USourceControlHelpers::CurrentProvider(FString *__return_storage_ptr__)

{
  ISourceControlModule *pIVar1;
  longlong *plVar2;
  FName *this;
  
  pIVar1 = ISourceControlModule::Get();
  plVar2 = (longlong *)(**(code **)((longlong)*pIVar1 + 0x78))(pIVar1);
  this = (FName *)(**(code **)(*plVar2 + 0x20))(plVar2);
  ::FName::ToString(this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// FQueryFileStateDelegate_DelegateWrapper @ 146b15660

void __cdecl
USourceControlHelpers::FQueryFileStateDelegate_DelegateWrapper
          (TScriptDelegate<FNotThreadSafeDelegateMode> *param_1,FSourceControlState *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  UObject *this;
  UFunction *pUVar4;
  FDestructionSentinel local_78;
  FSourceControlState local_58;
  
  local_58.Filename.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Filename.Data.ArrayNum = 0;
  local_58.Filename.Data.ArrayMax = 0;
  local_58.bIsValid = false;
  local_58.bIsUnknown = false;
  local_58.bCanCheckIn = false;
  local_58.bCanCheckOut = false;
  local_58.bIsCheckedOut = false;
  local_58.bIsCurrent = false;
  local_58.bIsSourceControlled = false;
  local_58.bIsAdded = false;
  local_58.bIsDeleted = false;
  local_58.bIsIgnored = false;
  local_58.bCanEdit = false;
  local_58.bCanDelete = false;
  local_58.bIsModified = false;
  local_58.bCanAdd = false;
  local_58.bIsConflicted = false;
  local_58.bCanRevert = false;
  local_58.bIsCheckedOutOther = false;
  local_58.CheckedOutOther.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.CheckedOutOther.Data.ArrayNum = 0;
  local_58.CheckedOutOther.Data.ArrayMax = 0;
  local_58.bIsCheckedOutInOtherBranch = false;
  local_58.bIsModifiedInOtherBranch = false;
  local_58.PreviousUser.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.PreviousUser.Data.ArrayNum = 0;
  local_58.PreviousUser.Data.ArrayMax = 0;
  FSourceControlState::operator=(&local_58,param_2);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_78);
  bVar3 = FWeakObjectPtr::IsValid(&param_1->Object);
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object.IsValid() != false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\ScriptDelegates.h"
                       ,0x1bb,L"ProcessDelegate() called with no object bound to delegate!");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_1->FunctionName == (FName)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("FunctionName != NAME_None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\ScriptDelegates.h"
                       ,0x1bc,L"ProcessDelegate() called with no function name set!");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this = FWeakObjectPtr::Get(&param_1->Object);
  pUVar4 = UObject::FindFunctionChecked(this,param_1->FunctionName);
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar4,&local_58);
  if (local_58.PreviousUser.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.PreviousUser.Data.AllocatorInstance.Data);
  }
  if (local_58.CheckedOutOther.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.CheckedOutOther.Data.AllocatorInstance.Data);
  }
  if (local_58.Filename.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Filename.Data.AllocatorInstance.Data);
  }
  pFVar1 = (param_2->PreviousUser).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_2->CheckedOutOther).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_2->Filename).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// GetAssetData @ 146b16180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */
/* WARNING: Enum "EDependencyQuery": Some values do not have unique names */

bool __cdecl
USourceControlHelpers::GetAssetData
          (FString *param_1,FString *param_2,TArray<FAssetData,TSizedDefaultAllocator<32>_> *param_3
          ,TArray<FName,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  int iVar2;
  FAssetData *pFVar3;
  FName FVar4;
  code *pcVar5;
  FScriptContainerElement *pFVar6;
  FString *pFVar7;
  EPackageExtension EVar8;
  bool bVar9;
  FName *pFVar10;
  FModuleManager *this;
  IModuleInterface *pIVar11;
  longlong *plVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  undefined1 auStackY_108 [32];
  TStringView<wchar_t> local_c8;
  FLoadPackageRegistryData local_b8;
  longlong *local_90;
  code *local_88;
  FString *local_80;
  FName local_78;
  FDependencyQuery local_70;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_108;
  pFVar3 = (FAssetData *)(param_3->AllocatorInstance).Data;
  piVar1 = &param_3->ArrayMax;
  local_80 = param_1;
  if (*piVar1 < 0) {
    DestructItems<FAssetData,int>(pFVar3,param_3->ArrayNum);
    param_3->ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x68,8,0,&param_3->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FAssetData,int>(pFVar3,param_3->ArrayNum);
    param_3->ArrayNum = 0;
  }
  if (param_4 != (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
    param_4->ArrayNum = 0;
    if (param_4->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&param_4->AllocatorInstance,0,&param_4->ArrayMax);
    }
  }
  pFVar10 = ::FName::FName(&local_78,L"AssetRegistry");
  FVar4 = *pFVar10;
  this = FModuleManager::Get();
  pIVar11 = FModuleManager::LoadModuleChecked(this,FVar4);
  local_90 = (longlong *)(**(code **)((longlong)*pIVar11 + 0x40))(pIVar11);
  pwVar14 = L"";
  local_88 = *(code **)(*local_90 + 0x18);
  if ((param_2->Data).ArrayNum == 0) {
    pwVar13 = L"";
  }
  else {
    pwVar13 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  pFVar10 = ::FName::FName((FName *)&local_c8,pwVar13);
  (*local_88)(local_90,*pFVar10,param_3,1);
  pFVar7 = local_80;
  if (param_3->ArrayNum < 1) {
    local_c8.DataPtr = (wchar_t *)(local_80->Data).AllocatorInstance.Data;
    iVar2 = (local_80->Data).ArrayNum;
    local_c8.Size = iVar2 + -1;
    if (iVar2 == 0) {
      local_c8.Size = 0;
    }
    EVar8 = FPackagePath::ParseExtension(&local_c8,(int *)0x0);
    if ((EVar8 == Unspecified) || (EVar8 == Custom)) {
      bVar9 = false;
    }
    else {
      IAssetRegistry::FLoadPackageRegistryData::FLoadPackageRegistryData
                (&local_b8,param_4 != (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0);
      plVar12 = (longlong *)(**(code **)((longlong)*pIVar11 + 0x40))(pIVar11);
      (**(code **)(*plVar12 + 0x400))(plVar12,pFVar7,&local_b8);
      if ((FLoadPackageRegistryData *)param_3 != &local_b8) {
        DestructItems<FAssetData,int>
                  ((FAssetData *)(param_3->AllocatorInstance).Data,param_3->ArrayNum);
        pFVar6 = (param_3->AllocatorInstance).Data;
        if (pFVar6 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar6);
        }
        (param_3->AllocatorInstance).Data = local_b8.Data.AllocatorInstance.Data;
        param_3->ArrayNum = local_b8.Data.ArrayNum;
        *piVar1 = local_b8.Data.ArrayMax;
        local_b8.Data.ArrayNum = 0;
        local_b8.Data.ArrayMax = 0;
        local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if ((param_4 != (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) &&
         (param_4 != &local_b8.DataDependencies)) {
        pFVar6 = (param_4->AllocatorInstance).Data;
        if (pFVar6 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar6);
        }
        (param_4->AllocatorInstance).Data = local_b8.DataDependencies.AllocatorInstance.Data;
        param_4->ArrayNum = local_b8.DataDependencies.ArrayNum;
        param_4->ArrayMax = local_b8.DataDependencies.ArrayMax;
        local_b8.DataDependencies.ArrayNum = 0;
        local_b8.DataDependencies.ArrayMax = 0;
        local_b8.DataDependencies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      bVar9 = 0 < param_3->ArrayNum;
      IAssetRegistry::FLoadPackageRegistryData::~FLoadPackageRegistryData(&local_b8);
    }
  }
  else {
    if (param_4 != (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
      plVar12 = (longlong *)(**(code **)((longlong)*pIVar11 + 0x40))(pIVar11);
      pcVar5 = *(code **)(*plVar12 + 200);
      UE::AssetRegistry::FDependencyQuery::FDependencyQuery(&local_70,Hard);
      if ((param_2->Data).ArrayNum != 0) {
        pwVar14 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
      }
      pFVar10 = ::FName::FName((FName *)&local_c8,pwVar14);
      (*pcVar5)(plVar12,*pFVar10,param_4,1);
      if (local_70.RequiredUnions.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0) {
        FMemory::Free((void *)local_70.RequiredUnions.AllocatorInstance.SecondaryData);
      }
    }
    bVar9 = true;
  }
  return bVar9;
}

// GetAssetData @ 146b16450

bool __cdecl
USourceControlHelpers::GetAssetData
          (FString *param_1,TArray<FAssetData,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_3)

{
  bool bVar1;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  bVar1 = FPackageName::TryConvertFilenameToLongPackageName(param_1,&local_18,(FString *)0x0,None);
  if (bVar1) {
    bVar1 = GetAssetData(param_1,&local_18,param_2,param_3);
  }
  else {
    bVar1 = false;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// GetAssetDataFromFileHistory @ 146b16600

bool __cdecl
USourceControlHelpers::GetAssetDataFromFileHistory
          (FString *param_1,TArray<FAssetData,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_3,long64 param_4)

{
  FAssetData *pFVar1;
  bool bVar2;
  ISourceControlModule *pIVar3;
  longlong *plVar4;
  ISourceControlState *local_38;
  TReferenceControllerBase<1> *pTStack_30;
  TSharedPtr<ISourceControlState,1> local_28;
  
  pFVar1 = (FAssetData *)(param_2->AllocatorInstance).Data;
  if (param_2->ArrayMax < 0) {
    DestructItems<FAssetData,int>(pFVar1,param_2->ArrayNum);
    param_2->ArrayNum = 0;
    if (param_2->ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x68,8,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
    }
  }
  else {
    DestructItems<FAssetData,int>(pFVar1,param_2->ArrayNum);
    param_2->ArrayNum = 0;
  }
  if (param_3 != (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
    param_3->ArrayNum = 0;
    if (param_3->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
    }
  }
  pIVar3 = ISourceControlModule::Get();
  plVar4 = (longlong *)(**(code **)((longlong)*pIVar3 + 0x78))(pIVar3);
  (**(code **)(*plVar4 + 0x90))(plVar4,&local_38,param_1,1);
  if (local_38 == (ISourceControlState *)0x0) {
    bVar2 = false;
  }
  else {
    local_28.Object = local_38;
    local_28.SharedReferenceCount.ReferenceController = pTStack_30;
    if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar2 = GetAssetDataFromFileHistory(&local_28,param_2,param_3,param_4);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return bVar2;
}

// GetAssetDataFromFileHistory @ 146b16740

bool __cdecl
USourceControlHelpers::GetAssetDataFromFileHistory
          (TSharedPtr<ISourceControlState,1> *param_1,
          TArray<FAssetData,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_3,long64 param_4)

{
  FAssetData *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  ISourceControlModule *pIVar7;
  longlong *plVar8;
  FUpdateStatus *pFVar9;
  FUpdateStatus *pFVar10;
  undefined8 uVar11;
  TRawPtrProxy<FUpdateStatus> local_res8;
  FString local_c8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b8;
  ForAnyElementType local_b0;
  ulonglong local_a8;
  longlong *local_a0;
  TReferenceControllerBase<1> *local_98;
  FString local_90;
  TSharedRef<FUpdateStatus,1> local_78;
  FUpdateStatus *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  FDestructionSentinel local_58;
  
  if ((param_1->Object == (ISourceControlState *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSourceControlState.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SourceControlHelpers.cpp"
                         ,0x862,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pFVar1 = (FAssetData *)(param_2->AllocatorInstance).Data;
  if (param_2->ArrayMax < 0) {
    DestructItems<FAssetData,int>(pFVar1,param_2->ArrayNum);
    param_2->ArrayNum = 0;
    if (param_2->ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x68,8,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
    }
  }
  else {
    DestructItems<FAssetData,int>(pFVar1,param_2->ArrayNum);
    param_2->ArrayNum = 0;
  }
  pFVar10 = (FUpdateStatus *)0x0;
  if (param_3 != (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
    param_3->ArrayNum = 0;
    if (param_3->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
    }
  }
  if ((param_1->Object == (ISourceControlState *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  iVar6 = (**(code **)(*(longlong *)param_1->Object + 8))();
  if (iVar6 == 0) {
    pIVar7 = ISourceControlModule::Get();
    plVar8 = (longlong *)(**(code **)((longlong)*pIVar7 + 0x78))(pIVar7);
    pFVar9 = ::operator_new(0x60);
    if (pFVar9 != (FUpdateStatus *)0x0) {
      pFVar9->_padding_ = 0;
      pFVar9->_padding_ = (longlong)&___7FUpdateStatus__6B_;
      pFVar9->_padding_ = 0;
      pFVar9->_padding_ = 0;
      pFVar9->_padding_ = 0;
      pFVar9->_padding_ = 0;
      pFVar9->_padding_ = 0;
      pFVar9->_padding_ = 0;
      pFVar9->_padding_ = 0;
      *(undefined4 *)&pFVar9->_padding_ = 0;
      *(undefined4 *)&pFVar9->_padding_ = 0;
      pFVar9->bUpdateHistory = false;
      pFVar9->bGetOpenedOnly = false;
      pFVar9->bUpdateModifiedState = false;
      pFVar9->bUpdateModifiedStateToLocalRevision = false;
      pFVar9->bCheckingAllFiles = false;
      pFVar9->bForceQuiet = false;
      pFVar9->bForceUpdate = false;
      pFVar9->bSetRequireDirPathEndWithSeparator = false;
      pFVar10 = pFVar9;
    }
    local_res8.Object = pFVar10;
    TSharedRef<FUpdateStatus,1>::TSharedRef<FUpdateStatus,1><FUpdateStatus>(&local_78,&local_res8);
    local_a8 = 0;
    local_b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_b0.Data = (FScriptContainerElement *)0x0;
    (local_78.Object)->bUpdateHistory = true;
    (local_78.Object)->bForceQuiet = true;
    pcVar2 = *(code **)(*plVar8 + 0xd0);
    if ((param_1->Object == (ISourceControlState *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    uVar11 = (**(code **)(*(longlong *)param_1->Object + 0x68))();
    local_68 = local_78.Object;
    pTStack_60 = local_78.SharedReferenceCount.ReferenceController;
    if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    (*pcVar2)(plVar8,&local_68,uVar11,0,&local_b8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_60);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_b8,(FWriteAccessScope *)&local_58);
    if (((int)local_a8 != 0) && (local_b0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_b0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_b0,0,0,0x10);
      local_a8 = local_a8 & 0xffffffff00000000;
    }
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
    if (local_b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8.AccessDetector);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
  }
  if ((param_1->Object == (ISourceControlState *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  iVar6 = (**(code **)(*(longlong *)param_1->Object + 8))();
  if (iVar6 < 1) goto LAB_146b16be1;
  if ((param_1->Object == (ISourceControlState *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  (**(code **)(*(longlong *)param_1->Object + 0x10))(param_1->Object,&local_a0);
  if ((local_a0 == (longlong *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Revision.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SourceControlHelpers.cpp"
                         ,0x877,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if (param_4 < 0) {
LAB_146b16afb:
    local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.Data.ArrayNum = 0;
    local_c8.Data.ArrayMax = 0;
    if ((local_a0 == (longlong *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    cVar5 = (**(code **)(*local_a0 + 8))(local_a0,&local_c8);
    if (cVar5 != '\0') {
      local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_90.Data.ArrayNum = 0;
      local_90.Data.ArrayMax = 0;
      bVar3 = FPackageName::TryConvertFilenameToLongPackageName
                        (&local_c8,&local_90,(FString *)0x0,None);
      if (bVar3) {
        bVar3 = GetAssetData(&local_c8,&local_90,param_2,param_3);
        if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.Data.AllocatorInstance.Data);
        }
      }
      else {
        if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.Data.AllocatorInstance.Data);
        }
        bVar3 = false;
      }
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_98);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->SharedReferenceCount).ReferenceController);
      return bVar3;
    }
  }
  else {
    if ((local_a0 == (longlong *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    iVar6 = (**(code **)(*local_a0 + 0x70))();
    if (iVar6 < param_4) goto LAB_146b16afb;
    local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.Data.ArrayNum = 0;
    local_c8.Data.ArrayMax = 0;
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_98);
LAB_146b16be1:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return false;
}

// GetAssetDataFromPackage @ 146b16c10

bool __cdecl
USourceControlHelpers::GetAssetDataFromPackage
          (FString *param_1,TArray<FAssetData,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_3)

{
  bool bVar1;
  FString *pFVar2;
  FString local_28;
  FString local_18;
  
  pFVar2 = PackageFilename_Internal(&local_18,param_1);
  FPaths::ConvertRelativePathToFull(&local_28,pFVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  bVar1 = GetAssetData(&local_28,param_1,param_2,param_3);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// GetFilesInDepotAtPath @ 146b176d0

bool __cdecl
USourceControlHelpers::GetFilesInDepotAtPath
          (FString *param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2,bool param_3,
          bool param_4,bool param_5)

{
  bool bVar1;
  int iVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  iVar2 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x810,&local_18.AllocatorInstance,&local_18.ArrayMax);
  local_18.ArrayNum = iVar2 + 1;
  ::FString::FString((FString *)(local_18.AllocatorInstance.Data + (longlong)iVar2 * 0x10),param_1);
  bVar1 = GetFilesInDepotAtPaths(&local_18,param_2,param_3,param_4,param_5);
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return bVar1;
}

// GetFilesInDepotAtPaths @ 146b17790

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __cdecl
USourceControlHelpers::GetFilesInDepotAtPaths
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,bool param_3,bool param_4,
          bool param_5)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  ITextData *pIVar3;
  code *pcVar4;
  TRefCountPtr<ITextData> TVar5;
  ForAnyElementType FVar6;
  FSharedReferencer<1> FVar7;
  char cVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  int iVar12;
  ISourceControlModule *pIVar13;
  FGetFileList *pFVar14;
  FGetFileList *pFVar15;
  FText *pFVar16;
  FTextFormat *pFVar17;
  FMessageLog *this;
  longlong lVar18;
  FScriptContainerElement *pFVar19;
  FScriptContainerElement *pFVar20;
  FScriptContainerElement *pFVar21;
  bool bVar22;
  undefined1 local_1b7;
  undefined1 local_1b6;
  undefined1 local_1b5;
  ForAnyElementType local_1b0;
  undefined8 local_1a8;
  FString local_1a0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_190;
  ForAnyElementType local_188;
  ulonglong local_180;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_178
  ;
  undefined1 local_168 [8];
  TRawPtrProxy<FGetFileList> local_160;
  longlong *local_158;
  FName local_150;
  TSharedRef<FGetFileList,1> local_148;
  FString local_138;
  FGetFileList *local_128;
  TReferenceControllerBase<1> *pTStack_120;
  FString local_118;
  FDestructionSentinel local_108;
  FFormatArgumentValue local_f0;
  FText local_d0;
  TSharedRef<FTokenizedMessage,1> local_c0;
  FText local_b0;
  FText local_a0;
  FTextFormat local_90;
  FMessageLog local_80;
  
  bVar22 = -1 < CpuChannel->Enabled;
  if (bVar22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1688,"USourceControlHelpers::GetFilesInDepotAtPaths",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SourceControlHelpers.cpp"
               ,0x698);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1688);
  }
  uVar10 = 0;
  pIVar13 = ISourceControlModule::Get();
  cVar8 = (**(code **)((longlong)*pIVar13 + 0x70))(pIVar13);
  if (cVar8 != '\0') {
    pIVar13 = ISourceControlModule::Get();
    local_158 = (longlong *)(**(code **)((longlong)*pIVar13 + 0x78))(pIVar13);
    cVar8 = (**(code **)(*local_158 + 0x40))(local_158);
    if (cVar8 != '\0') {
      iVar12 = param_1->ArrayNum;
      pFVar19 = (param_1->AllocatorInstance).Data;
      pFVar21 = pFVar19 + (longlong)iVar12 * 0x10;
      local_1b0.Data = (FScriptContainerElement *)0x0;
      local_1a8 = 0;
      while( true ) {
        pFVar15 = (FGetFileList *)0x0;
        if (param_1->ArrayNum != iVar12) {
          local_1b7 = 0;
          `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_1b7);
        }
        if (pFVar19 == pFVar21) break;
        local_1a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1a0.Data.ArrayNum = 0;
        local_1a0.Data.ArrayMax = 0;
        ::FString::FString(&local_138,L"");
        FPackageName::TryConvertLongPackageNameToFilename((FString *)pFVar19,&local_1a0,&local_138);
        if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.Data.AllocatorInstance.Data);
        }
        FPaths::RemoveDuplicateSlashes(&local_1a0);
        if (((local_1b0.Data <= (FScriptContainerElement *)&local_1a0) &&
            ((FScriptContainerElement *)&local_1a0 <
             local_1b0.Data + (longlong)local_1a8._4_4_ * 0x10)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar4 = (code *)swi(3);
          uVar10 = (*pcVar4)();
          return (bool)uVar10;
        }
        iVar11 = (int)local_1a8;
        if ((int)local_1a8 == local_1a8._4_4_) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_1b0,(int *)((longlong)&local_1a8 + 4));
        }
        FVar6.Data = local_1a0.Data.AllocatorInstance.Data;
        local_1a8 = CONCAT44(local_1a8._4_4_,iVar11 + 1);
        pFVar20 = local_1b0.Data + (longlong)iVar11 * 0x10;
        *(FScriptContainerElement **)pFVar20 = (FScriptContainerElement *)0x0;
        lVar18 = (longlong)local_1a0.Data.ArrayNum;
        *(int *)(pFVar20 + 8) = local_1a0.Data.ArrayNum;
        if (local_1a0.Data.ArrayNum == 0) {
          *(int *)(pFVar20 + 0xc) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_1a0.Data.ArrayNum,0,(ForAnyElementType *)pFVar20,
                     local_1a0.Data.ArrayNum,(int *)(pFVar20 + 0xc));
                    /* WARNING: Load size is inaccurate */
          memcpy(*pFVar20,FVar6.Data,lVar18 * 2);
        }
        if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
        }
        pFVar19 = pFVar19 + 0x10;
      }
      pFVar14 = ::operator_new(0x80);
      if (pFVar14 != (FGetFileList *)0x0) {
        pFVar14->_padding_ = 0;
        pFVar14->_padding_ = 0;
        pFVar14->_padding_ = 0;
        pFVar14->MethodUsed = FolderSearch;
        pFVar14->bIncludeDeleted = false;
        pFVar14->bForceQuiet = false;
        *(undefined2 *)&pFVar14->field_0x5e = 0;
        pFVar14->_padding_ = 0;
        pFVar14->_padding_ = 0;
        pFVar14->_padding_ = 0;
        pFVar14->_padding_ = (longlong)&___7FGetFileList__6B_;
        pFVar14->_padding_ = 0;
        pFVar14->_padding_ = 0;
        pFVar14->_padding_ = 0;
        pFVar14->_padding_ = 0;
        (pFVar14->FilesList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar14->FilesList).ArrayNum = 0;
        (pFVar14->FilesList).ArrayMax = 0;
        (pFVar14->SearchPatterns).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar14->SearchPatterns).ArrayNum = 0;
        (pFVar14->SearchPatterns).ArrayMax = 0;
        pFVar15 = pFVar14;
      }
      local_160.Object = pFVar15;
      TSharedRef<FGetFileList,1>::TSharedRef<FGetFileList,1><FGetFileList>(&local_148,&local_160);
      pFVar15 = local_148.Object;
      (local_148.Object)->bIncludeDeleted = param_3;
      pTVar1 = &(local_148.Object)->SearchPatterns;
      (local_148.Object)->bForceQuiet = param_4;
      if (pTVar1 != (TArray<FString,TSizedDefaultAllocator<32>_> *)&local_1b0) {
        DestructItems<FString,int>
                  ((FString *)(pTVar1->AllocatorInstance).Data,
                   ((local_148.Object)->SearchPatterns).ArrayNum);
        FVar6.Data = local_1b0.Data;
        iVar12 = (int)local_1a8;
        piVar2 = &(pFVar15->SearchPatterns).ArrayMax;
        (pFVar15->SearchPatterns).ArrayNum = (int)local_1a8;
        if (((int)local_1a8 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,(int)local_1a8,*piVar2,&pTVar1->AllocatorInstance,(int)local_1a8,piVar2)
          ;
          ConstructItems<FString,FString,int>
                    ((pTVar1->AllocatorInstance).Data,(FString *)FVar6.Data,iVar12);
        }
      }
      FVar7.ReferenceController = local_148.SharedReferenceCount.ReferenceController;
      if (param_5) {
        pFVar15->MethodUsed = FileRegexSearch;
      }
      local_128 = local_148.Object;
      pTStack_120 = local_148.SharedReferenceCount.ReferenceController;
      local_180 = 0;
      lVar18 = *local_158;
      local_190.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_188.Data = (FScriptContainerElement *)0x0;
      if (local_148.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      iVar12 = (**(code **)(lVar18 + 0xe8))(local_158,&local_128,&local_1b0,0,&local_190);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_120);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_190,(FWriteAccessScope *)&local_108);
      if (((int)local_180 != 0) && (local_188.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_188.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_188,0,0,0x10);
        local_180 = local_180 & 0xffffffff00000000;
      }
      if (local_108.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_108.Accessor,&local_108);
      }
      if (local_188.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_190.AccessDetector);
      uVar10 = iVar12 == 1;
      local_1b5 = uVar10;
      if ((bool)uVar10) {
        TArray<FString,TSizedDefaultAllocator<32>_>::operator=(param_2,&pFVar15->FilesList);
        local_148.SharedReferenceCount.ReferenceController = FVar7.ReferenceController;
      }
      else {
        iVar12 = param_1->ArrayNum;
        pFVar19 = (param_1->AllocatorInstance).Data;
        pFVar21 = pFVar19 + (longlong)iVar12 * 0x10;
        while( true ) {
          if (param_1->ArrayNum != iVar12) {
            local_1b6 = 0;
            `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_1b6);
          }
          uVar10 = local_1b5;
          if (pFVar19 == pFVar21) break;
          local_178.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_178.Pairs.ArrayNum = 0;
          local_178.Pairs.ArrayMax = 0;
          pFVar16 = FText::FromString(&local_d0,(FString *)pFVar19);
          local_f0.Type = Text;
          FText::FText((FText *)&local_f0.TextValue,pFVar16);
          if ((local_f0.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0xbd,
                                 L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                ), bVar9)) {
            pcVar4 = (code *)swi(3);
            uVar10 = (*pcVar4)();
            return (bool)uVar10;
          }
          ::FString::FString(&local_118,L"Path");
          TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
          Emplace<FString,FFormatArgumentValue>(&local_178,&local_118,&local_f0);
          if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_118.Data.AllocatorInstance.Data);
          }
          if (local_f0.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)
                         *(ITextData *)local_f0.TextValue.field0_0x0.TypedValue.TextData.Reference +
                        0x10))();
          }
          if (local_d0.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_d0.TextData.Reference + 0x10))();
          }
          pFVar16 = FText::AsLocalizable_Advanced_LocText
                              (&local_a0,L"SourceControlHelpers",L"CouldNotGetFileList",
                               L"Could not get file list at path: {Path}.");
          pFVar17 = FTextFormat::FTextFormat(&local_90,pFVar16,Default);
          pFVar16 = FText::Format(&local_b0,pFVar17,&local_178);
          TVar5 = SourceControlHelpersInternal::LastErrorText.TextData;
          pIVar3 = (pFVar16->TextData).Reference;
          if (SourceControlHelpersInternal::LastErrorText.TextData.Reference != pIVar3) {
            SourceControlHelpersInternal::LastErrorText.TextData.Reference = pIVar3;
            if (pIVar3 != (ITextData *)0x0) {
              (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_168);
            }
            if (TVar5.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*TVar5.Reference + 0x10))(TVar5.Reference);
            }
          }
          SourceControlHelpersInternal::LastErrorText.Flags = pFVar16->Flags;
          if (!param_4) {
            ::FName::FName(&local_150,"SourceControl");
            this = FMessageLog::FMessageLog(&local_80,&local_150);
            FMessageLog::Error(this,&local_c0,&SourceControlHelpersInternal::LastErrorText);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_c0.SharedReferenceCount.ReferenceController);
            FMessageLog::~FMessageLog(&local_80);
          }
          if (local_b0.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_b0.TextData.Reference + 0x10))();
          }
          if (local_a0.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_a0.TextData.Reference + 0x10))();
          }
          DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                    ((TTuple<FString,FFormatArgumentValue> *)local_178.Pairs.AllocatorInstance.Data,
                     local_178.Pairs.ArrayNum);
          if ((TTuple<FString,FFormatArgumentValue> *)local_178.Pairs.AllocatorInstance.Data !=
              (TTuple<FString,FFormatArgumentValue> *)0x0) {
            FMemory::Free(local_178.Pairs.AllocatorInstance.Data);
          }
          pFVar19 = pFVar19 + 0x10;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_148.SharedReferenceCount.ReferenceController);
      DestructItems<FString,int>((FString *)local_1b0.Data,(int)local_1a8);
      if (local_1b0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b0.Data);
      }
    }
  }
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return (bool)uVar10;
}

// GetGlobalSettingsIni @ 146b17e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl USourceControlHelpers::GetGlobalSettingsIni(void)

{
  FString *pFVar1;
  int iVar2;
  undefined1 auStackY_258 [32];
  FString local_228;
  FString local_218;
  FConfigContext local_208;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_258;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`USourceControlHelpers::GetGlobalSettingsIni'::__l2::
           _dynamic_atexit_destructor_for__SourceControlGlobalSettingsIni__);
    _Init_thread_footer(&::_TSS0);
  }
  iVar2 = SourceControlGlobalSettingsIni.Data.ArrayNum + -1;
  if (SourceControlGlobalSettingsIni.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  if (iVar2 == 0) {
    local_228.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_228.Data.ArrayNum = 0;
    local_228.Data.ArrayMax = 0;
    FConfigContext::FConfigContext(&local_208,GConfig,true,&local_228,(FConfigFile *)0x0);
    if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.Data.AllocatorInstance.Data);
    }
    pFVar1 = FPaths::EngineSavedDir(&local_218);
    ::FString::ConcatFC(&local_228,pFVar1,L"Config/");
    if (local_208.GeneratedConfigDir.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_208.GeneratedConfigDir.Data.AllocatorInstance.Data);
    }
    local_208.GeneratedConfigDir.Data.AllocatorInstance.Data = local_228.Data.AllocatorInstance.Data
    ;
    local_208.GeneratedConfigDir.Data.ArrayNum = local_228.Data.ArrayNum;
    local_208.GeneratedConfigDir.Data.ArrayMax = local_228.Data.ArrayMax;
    local_228.Data.ArrayNum = 0;
    local_228.Data.ArrayMax = 0;
    local_228.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_228,"");
    if (local_208.ProjectConfigDir.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.ProjectConfigDir.Data.AllocatorInstance.Data);
    }
    local_208.ProjectConfigDir.Data.AllocatorInstance.Data = local_228.Data.AllocatorInstance.Data;
    local_208.ProjectConfigDir.Data.ArrayNum = local_228.Data.ArrayNum;
    local_208.ProjectConfigDir.Data.ArrayMax = local_228.Data.ArrayMax;
    FConfigContext::Load(&local_208,L"SourceControlSettings",&SourceControlGlobalSettingsIni);
    FConfigContext::~FConfigContext(&local_208);
  }
  return &SourceControlGlobalSettingsIni;
}

// GetPrivateStaticClass @ 146b192c0

UClass * __cdecl USourceControlHelpers::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USourceControlHelpers.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SourceControl",L"SourceControlHelpers",
               &Z_Registration_Info_UClass_USourceControlHelpers.InnerSingleton,
               StaticRegisterNativesUSourceControlHelpers,0x28,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USourceControlHelpers>,
               InternalVTableHelperCtorCaller<USourceControlHelpers>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USourceControlHelpers.InnerSingleton;
}

// GetSettingsIni @ 146b197b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl USourceControlHelpers::GetSettingsIni(void)

{
  char cVar1;
  ISourceControlModule *pIVar2;
  FString *pFVar3;
  int iVar4;
  undefined1 auStackY_248 [32];
  FString local_218;
  FConfigContext local_208;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_248;
  pIVar2 = ISourceControlModule::Get();
  cVar1 = (**(code **)((longlong)*pIVar2 + 0xa0))(pIVar2);
  if (cVar1 != '\0') {
    pFVar3 = GetGlobalSettingsIni();
    return pFVar3;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`USourceControlHelpers::GetSettingsIni'::__l7::
             _dynamic_atexit_destructor_for__SourceControlSettingsIni__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  iVar4 = SourceControlSettingsIni.Data.ArrayNum + -1;
  if (SourceControlSettingsIni.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  if (iVar4 == 0) {
    local_218.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.Data.ArrayNum = 0;
    local_218.Data.ArrayMax = 0;
    FConfigContext::FConfigContext(&local_208,GConfig,true,&local_218,(FConfigFile *)0x0);
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    FConfigContext::Load(&local_208,L"SourceControlSettings",&SourceControlSettingsIni);
    FConfigContext::~FConfigContext(&local_208);
  }
  return &SourceControlSettingsIni;
}

// IsAvailable @ 146b1bcb0

bool __cdecl USourceControlHelpers::IsAvailable(void)

{
  char cVar1;
  ISourceControlModule *pIVar2;
  longlong *plVar3;
  
  pIVar2 = ISourceControlModule::Get();
  cVar1 = (**(code **)((longlong)*pIVar2 + 0x70))(pIVar2);
  if (cVar1 != '\0') {
    plVar3 = (longlong *)(**(code **)((longlong)*pIVar2 + 0x78))(pIVar2);
    cVar1 = (**(code **)(*plVar3 + 0x40))(plVar3);
    if (cVar1 != '\0') {
      return true;
    }
  }
  return false;
}

// IsEnabled @ 146b1bdf0

bool __cdecl USourceControlHelpers::IsEnabled(void)

{
  undefined1 uVar1;
  ISourceControlModule *pIVar2;
  
  pIVar2 = ISourceControlModule::Get();
                    /* WARNING: Could not recover jumptable at 0x000146b1be07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*pIVar2 + 0x70))(pIVar2,*(code **)((longlong)*pIVar2 + 0x70));
  return (bool)uVar1;
}

// LastErrorMsg @ 146b1c400

FText * __cdecl USourceControlHelpers::LastErrorMsg(FText *__return_storage_ptr__)

{
  TRefCountPtr<ITextData> TVar1;
  undefined1 local_res8 [32];
  
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  TVar1 = SourceControlHelpersInternal::LastErrorText.TextData;
  (__return_storage_ptr__->TextData).Reference =
       SourceControlHelpersInternal::LastErrorText.TextData.Reference;
  if (TVar1.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar1.Reference + 8))(TVar1.Reference,local_res8);
  }
  __return_storage_ptr__->Flags = SourceControlHelpersInternal::LastErrorText.Flags;
  return __return_storage_ptr__;
}

// MarkFileForAdd @ 146b1d3e0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __cdecl USourceControlHelpers::MarkFileForAdd(FString *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  ISourceControlProvider *pIVar6;
  FText *pFVar7;
  FTextFormat *pFVar8;
  FMarkForAdd *pFVar9;
  FMarkForAdd *pFVar10;
  ForAnyElementType FVar11;
  TRawPtrProxy<FMarkForAdd> local_res18 [2];
  longlong *local_228;
  TReferenceControllerBase<1> *local_220;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_218;
  ForAnyElementType local_210;
  ulonglong local_208;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_200
  ;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_1f0
  ;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  FMarkForAdd *local_1a8;
  TReferenceControllerBase<1> *pTStack_1a0;
  FString local_198;
  FString local_188;
  FDestructionSentinel local_178;
  FFormatArgumentValue local_160;
  FFormatArgumentValue local_140;
  FFormatArgumentValue local_120;
  FFormatArgumentValue local_100;
  FText local_e0;
  FText local_d0;
  FText local_c0;
  FText local_b0;
  TSharedRef<FMarkForAdd,1> local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FTextFormat local_48;
  FTextFormat local_38;
  
  pFVar10 = (FMarkForAdd *)0x0;
  SourceControlHelpersInternal::ConvertFileToQualifiedPath
            (&local_1e0,param_1,param_2,false,(wchar_t *)0x0);
  if ((local_1e0.Data.ArrayNum < 2) ||
     (pIVar6 = SourceControlHelpersInternal::VerifySourceControl(param_2),
     pIVar6 == (ISourceControlProvider *)0x0)) {
    bVar2 = false;
    goto LAB_146b1da66;
  }
  (**(code **)((longlong)*pIVar6 + 0x90))(pIVar6,&local_228,&local_1e0,1);
  if (local_228 == (longlong *)0x0) {
    local_200.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_200.Pairs.ArrayNum = 0;
    local_200.Pairs.ArrayMax = 0;
    pFVar7 = FText::FromString(&local_e0,param_1);
    local_160.Type = Text;
    FText::FText((FText *)&local_160.TextValue,pFVar7);
    if ((local_160.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    ::FString::FString(&local_1d0,L"InFile");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_200,&local_1d0,&local_160);
    if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
    }
    if (local_160.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_160.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    if (local_e0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e0.TextData.Reference + 0x10))();
    }
    pFVar7 = FText::FromString(&local_d0,&local_1e0);
    local_140.Type = Text;
    FText::FText((FText *)&local_140.TextValue,pFVar7);
    if ((local_140.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    ::FString::FString(&local_1c0,L"SCFile");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_200,&local_1c0,&local_140);
    if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
    }
    if (local_140.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_140.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    if (local_d0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_d0.TextData.Reference + 0x10))();
    }
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_b0,L"SourceControlHelpers",L"CouldNotDetermineState",
                        L"Could not determine revision control state of file \'{InFile}\' ({SCFile})."
                       );
    pFVar8 = FTextFormat::FTextFormat(&local_48,pFVar7,Default);
    pFVar7 = FText::Format(&local_c0,pFVar8,&local_200);
    SourceControlHelpersInternal::LogError(pFVar7,param_2);
    if (local_c0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_c0.TextData.Reference + 0x10))();
    }
    if (local_b0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b0.TextData.Reference + 0x10))();
    }
    DestructItems<TTuple<FString,FFormatArgumentValue>,int>
              ((TTuple<FString,FFormatArgumentValue> *)local_200.Pairs.AllocatorInstance.Data,
               local_200.Pairs.ArrayNum);
    FVar11.Data = local_200.Pairs.AllocatorInstance.Data;
LAB_146b1da3e:
    if ((TTuple<FString,FFormatArgumentValue> *)FVar11.Data !=
        (TTuple<FString,FFormatArgumentValue> *)0x0) {
      FMemory::Free(FVar11.Data);
    }
    bVar2 = false;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_220);
  }
  else {
    if ((local_228 == (longlong *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    cVar4 = (**(code **)(*local_228 + 0x110))();
    if (cVar4 == '\0') {
      if ((local_228 == (longlong *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      cVar4 = (**(code **)(*local_228 + 0xd8))();
      if (cVar4 == '\0') {
        if ((local_228 == (longlong *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        cVar4 = (**(code **)(*local_228 + 0xe8))();
        if (cVar4 == '\0') goto LAB_146b1d718;
      }
    }
    else {
LAB_146b1d718:
      local_208 = 0;
      local_218.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      pcVar1 = *(code **)((longlong)*pIVar6 + 0xd0);
      local_210.Data = (FScriptContainerElement *)0x0;
      pFVar9 = ::operator_new(0x58);
      if (pFVar9 != (FMarkForAdd *)0x0) {
        *(undefined8 *)&pFVar9->field_0x8 = 0;
        *(undefined8 *)&pFVar9->field_0x48 = 0;
        *(undefined8 *)&pFVar9->field_0x50 = 0;
        *(undefined ***)pFVar9 = &___7FMarkForAdd__6B_;
        *(undefined8 *)&pFVar9->field_0x10 = 0;
        *(undefined8 *)&pFVar9->field_0x18 = 0;
        *(undefined8 *)&pFVar9->field_0x20 = 0;
        *(undefined8 *)&pFVar9->field_0x28 = 0;
        *(undefined8 *)&pFVar9->field_0x30 = 0;
        *(undefined8 *)&pFVar9->field_0x38 = 0;
        *(undefined8 *)&pFVar9->field_0x40 = 0;
        pFVar10 = pFVar9;
      }
      local_res18[0].Object = pFVar10;
      TSharedRef<FMarkForAdd,1>::TSharedRef<FMarkForAdd,1><FMarkForAdd>(&local_98,local_res18);
      local_1a8 = local_98.Object;
      pTStack_1a0 = local_98.SharedReferenceCount.ReferenceController;
      if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      iVar5 = (*pcVar1)(pIVar6,&local_1a8,&local_1e0,0,&local_218);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_1a0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_98.SharedReferenceCount.ReferenceController);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_218,(FWriteAccessScope *)&local_178);
      if (((int)local_208 != 0) && (local_210.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_210.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_210,0,0,0x10);
        local_208 = local_208 & 0xffffffff00000000;
      }
      if (local_178.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_178.Accessor,&local_178);
      }
      if (local_210.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_210.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_218.AccessDetector);
      if (iVar5 != 1) {
        local_1f0.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1f0.Pairs.ArrayNum = 0;
        local_1f0.Pairs.ArrayMax = 0;
        pFVar7 = FText::FromString(&local_88,param_1);
        local_120.Type = Text;
        FText::FText((FText *)&local_120.TextValue,pFVar7);
        if ((local_120.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0xbd,
                               L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                              ), bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        ::FString::FString(&local_198,L"InFile");
        TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
        Emplace<FString,FFormatArgumentValue>(&local_1f0,&local_198,&local_120);
        if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.Data.AllocatorInstance.Data);
        }
        if (local_120.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)
                       *(ITextData *)local_120.TextValue.field0_0x0.TypedValue.TextData.Reference +
                      0x10))();
        }
        if (local_88.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
        }
        pFVar7 = FText::FromString(&local_78,&local_1e0);
        local_100.Type = Text;
        FText::FText((FText *)&local_100.TextValue,pFVar7);
        if ((local_100.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0xbd,
                               L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                              ), bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        ::FString::FString(&local_188,L"SCFile");
        TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
        Emplace<FString,FFormatArgumentValue>(&local_1f0,&local_188,&local_100);
        if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_188.Data.AllocatorInstance.Data);
        }
        if (local_100.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)
                       *(ITextData *)local_100.TextValue.field0_0x0.TypedValue.TextData.Reference +
                      0x10))();
        }
        if (local_78.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
        }
        pFVar7 = FText::AsLocalizable_Advanced_LocText
                           (&local_58,L"SourceControlHelpers",L"MarkForAddFailed",
                            L"Failed to add file \'{InFile}\' to revision control ({SCFile}).");
        pFVar8 = FTextFormat::FTextFormat(&local_38,pFVar7,Default);
        pFVar7 = FText::Format(&local_68,pFVar8,&local_1f0);
        SourceControlHelpersInternal::LogError(pFVar7,param_2);
        if (local_68.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
        }
        if (local_58.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
        }
        DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                  ((TTuple<FString,FFormatArgumentValue> *)local_1f0.Pairs.AllocatorInstance.Data,
                   local_1f0.Pairs.ArrayNum);
        FVar11.Data = local_1f0.Pairs.AllocatorInstance.Data;
        goto LAB_146b1da3e;
      }
    }
    bVar2 = true;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_220);
  }
LAB_146b1da66:
  if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// MarkFileForDelete @ 146b1dab0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __cdecl USourceControlHelpers::MarkFileForDelete(FString *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  ISourceControlProvider *pIVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  TSharedRef<FRevert,1> *pTVar10;
  TSharedRef<FDelete,1> *pTVar11;
  IFileManager *pIVar12;
  ForAnyElementType FVar13;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *pTVar14;
  FString local_328;
  longlong *local_318;
  TReferenceControllerBase<1> *local_310;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_308;
  ForAnyElementType local_300;
  ulonglong local_2f8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2f0;
  ForAnyElementType local_2e8;
  ulonglong local_2e0;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_2d8
  ;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_2c8
  ;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_2b8
  ;
  FRevert *local_2a8;
  TReferenceControllerBase<1> *local_2a0;
  FDelete *local_298;
  TReferenceControllerBase<1> *local_290;
  FString local_288;
  FString local_278;
  FString local_268;
  FString local_258;
  FString local_248;
  FString local_238;
  FDestructionSentinel local_228;
  FDestructionSentinel local_210;
  FFormatArgumentValue local_1f8;
  FFormatArgumentValue local_1d8;
  FFormatArgumentValue local_1b8;
  FFormatArgumentValue local_198;
  FFormatArgumentValue local_178;
  FFormatArgumentValue local_158;
  FText local_138;
  FText local_128;
  FText local_118;
  FText local_108;
  FText local_f8;
  FText local_e8;
  TSharedRef<FRevert,1> local_d8;
  FText local_c8;
  FText local_b8;
  TSharedRef<FDelete,1> local_a8;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FTextFormat local_58;
  FTextFormat local_48;
  FTextFormat local_38;
  
  pTVar14 = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)0x0;
  SourceControlHelpersInternal::ConvertFileToQualifiedPath
            (&local_328,param_1,param_2,false,(wchar_t *)0x0);
  if ((local_328.Data.ArrayNum < 2) ||
     (pIVar7 = SourceControlHelpersInternal::VerifySourceControl(param_2),
     pIVar7 == (ISourceControlProvider *)0x0)) {
    uVar3 = 0;
    goto LAB_146b1e453;
  }
  (**(code **)((longlong)*pIVar7 + 0x90))(pIVar7,&local_318,&local_328,0);
  if (local_318 == (longlong *)0x0) {
    local_2d8.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2d8.Pairs.ArrayNum = 0;
    local_2d8.Pairs.ArrayMax = 0;
    pFVar8 = FText::FromString(&local_138,param_1);
    local_178.Type = Text;
    FText::FText((FText *)&local_178.TextValue,pFVar8);
    if ((local_178.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    ::FString::FString(&local_288,L"InFile");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_2d8,&local_288,&local_178);
    if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.Data.AllocatorInstance.Data);
    }
    if (local_178.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_178.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar8 = FText::FromString(&local_128,&local_328);
    local_158.Type = Text;
    FText::FText((FText *)&local_158.TextValue,pFVar8);
    if ((local_158.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    ::FString::FString(&local_278,L"SCFile");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_2d8,&local_278,&local_158);
    if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278.Data.AllocatorInstance.Data);
    }
    if (local_158.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_158.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    if (local_128.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
    }
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_c8,L"SourceControlHelpers",L"CouldNotDetermineState",
                        L"Could not determine revision control state of file \'{InFile}\' ({SCFile})."
                       );
    pFVar9 = FTextFormat::FTextFormat(&local_58,pFVar8,Default);
    pFVar8 = FText::Format(&local_118,pFVar9,&local_2d8);
    SourceControlHelpersInternal::LogError(pFVar8,param_2);
    if (local_118.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
    }
    if (local_c8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
    }
    DestructItems<TTuple<FString,FFormatArgumentValue>,int>
              ((TTuple<FString,FFormatArgumentValue> *)local_2d8.Pairs.AllocatorInstance.Data,
               local_2d8.Pairs.ArrayNum);
    if ((TTuple<FString,FFormatArgumentValue> *)local_2d8.Pairs.AllocatorInstance.Data !=
        (TTuple<FString,FFormatArgumentValue> *)0x0) {
      FMemory::Free(local_2d8.Pairs.AllocatorInstance.Data);
    }
    uVar3 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_310);
    goto LAB_146b1e453;
  }
  if (local_318 == (longlong *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  cVar4 = (**(code **)(*local_318 + 0xd8))();
  if (cVar4 == '\0') {
LAB_146b1e3dd:
    pIVar12 = IFileManager::Get();
    FVar13.Data = (FScriptContainerElement *)L"";
    if (local_328.Data.ArrayNum != 0) {
      FVar13.Data = local_328.Data.AllocatorInstance.Data;
    }
    cVar4 = (**(code **)((longlong)*pIVar12 + 0x50))(pIVar12,FVar13.Data);
    if (cVar4 == '\0') {
      uVar3 = 1;
    }
    else {
      FVar13.Data = (FScriptContainerElement *)L"";
      if (local_328.Data.ArrayNum != 0) {
        FVar13.Data = local_328.Data.AllocatorInstance.Data;
      }
      uVar3 = (**(code **)((longlong)*pIVar12 + 0x38))
                        (pIVar12,FVar13.Data,0,1,(ulonglong)pTVar14 & 0xffffffffffffff00);
    }
  }
  else {
    if ((local_318 == (longlong *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    cVar4 = (**(code **)(*local_318 + 0xe8))();
    if (cVar4 == '\0') {
      if ((local_318 == (longlong *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      cVar5 = (**(code **)(*local_318 + 0x88))();
      if (cVar5 != '\0') goto LAB_146b1de27;
LAB_146b1e105:
      local_2f8 = 0;
      local_308.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_300.Data = (FScriptContainerElement *)0x0;
      pcVar1 = *(code **)((longlong)*pIVar7 + 0xd0);
      pTVar11 = ISourceControlOperation::Create<FDelete>(&local_a8);
      local_298 = pTVar11->Object;
      local_290 = (pTVar11->SharedReferenceCount).ReferenceController;
      if (local_290 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_290->SharedReferenceCount = (atomic<int>)((int)local_290->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar14 = &local_308;
      iVar6 = (*pcVar1)(pIVar7,&local_298,&local_328,0,pTVar14);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_290)
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a8.SharedReferenceCount.ReferenceController);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_308,(FWriteAccessScope *)&local_210);
      if (((int)local_2f8 != 0) && (local_300.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_300.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_300,0,0,0x10);
        local_2f8 = local_2f8 & 0xffffffff00000000;
      }
      if (local_210.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_210.Accessor,&local_210);
      }
      if (local_300.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_300.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_308.AccessDetector);
      if (iVar6 == 1) goto LAB_146b1e3dd;
      local_2b8.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2b8.Pairs.ArrayNum = 0;
      local_2b8.Pairs.ArrayMax = 0;
      pFVar8 = FText::FromString(&local_98,param_1);
      local_1b8.Type = Text;
      FText::FText((FText *)&local_1b8.TextValue,pFVar8);
      if ((local_1b8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      ::FString::FString(&local_248,L"InFile");
      TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
      Emplace<FString,FFormatArgumentValue>(&local_2b8,&local_248,&local_1b8);
      if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_248.Data.AllocatorInstance.Data);
      }
      if (local_1b8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_1b8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      if (local_98.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
      }
      pFVar8 = FText::FromString(&local_88,&local_328);
      local_198.Type = Text;
      FText::FText((FText *)&local_198.TextValue,pFVar8);
      if ((local_198.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      ::FString::FString(&local_238,L"SCFile");
      TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
      Emplace<FString,FFormatArgumentValue>(&local_2b8,&local_238,&local_198);
      if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_238.Data.AllocatorInstance.Data);
      }
      if (local_198.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_198.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_108,L"SourceControlHelpers",L"CouldNotDelete",
                          L"Could not delete file \'{InFile}\' from revision control ({SCFile}).");
      pFVar9 = FTextFormat::FTextFormat(&local_38,pFVar8,Default);
      pFVar8 = FText::Format(&local_78,pFVar9,&local_2b8);
      SourceControlHelpersInternal::LogError(pFVar8,param_2);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_108.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
      }
      DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                ((TTuple<FString,FFormatArgumentValue> *)local_2b8.Pairs.AllocatorInstance.Data,
                 local_2b8.Pairs.ArrayNum);
      FVar13.Data = local_2b8.Pairs.AllocatorInstance.Data;
    }
    else {
LAB_146b1de27:
      local_2e0 = 0;
      local_2f0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_2e8.Data = (FScriptContainerElement *)0x0;
      pcVar1 = *(code **)((longlong)*pIVar7 + 0xd0);
      pTVar10 = ISourceControlOperation::Create<FRevert>(&local_d8);
      local_2a8 = pTVar10->Object;
      local_2a0 = (pTVar10->SharedReferenceCount).ReferenceController;
      if (local_2a0 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_2a0->SharedReferenceCount = (atomic<int>)((int)local_2a0->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar14 = &local_2f0;
      iVar6 = (*pcVar1)(pIVar7,&local_2a8,&local_328,0,pTVar14);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2a0)
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_d8.SharedReferenceCount.ReferenceController);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_2f0,(FWriteAccessScope *)&local_228);
      if (((int)local_2e0 != 0) && (local_2e8.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_2e8.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_2e8,0,0,0x10);
        local_2e0 = local_2e0 & 0xffffffff00000000;
      }
      if (local_228.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_228.Accessor,&local_228);
      }
      if (local_2e8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2e8.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2f0.AccessDetector);
      if (iVar6 == 1) {
        if (cVar4 != '\0') goto LAB_146b1e3dd;
        goto LAB_146b1e105;
      }
      local_2c8.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2c8.Pairs.ArrayNum = 0;
      local_2c8.Pairs.ArrayMax = 0;
      pFVar8 = FText::FromString(&local_e8,param_1);
      local_1f8.Type = Text;
      FText::FText((FText *)&local_1f8.TextValue,pFVar8);
      if ((local_1f8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      ::FString::FString(&local_268,L"InFile");
      TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
      Emplace<FString,FFormatArgumentValue>(&local_2c8,&local_268,&local_1f8);
      if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_268.Data.AllocatorInstance.Data);
      }
      if (local_1f8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_1f8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      if (local_e8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
      }
      pFVar8 = FText::FromString(&local_f8,&local_328);
      local_1d8.Type = Text;
      FText::FText((FText *)&local_1d8.TextValue,pFVar8);
      if ((local_1d8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      ::FString::FString(&local_258,L"SCFile");
      TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
      Emplace<FString,FFormatArgumentValue>(&local_2c8,&local_258,&local_1d8);
      if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_258.Data.AllocatorInstance.Data);
      }
      if (local_1d8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_1d8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      if (local_f8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
      }
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_b8,L"SourceControlHelpers",L"CouldNotRevert",
                          L"Could not revert revision control state of file \'{InFile}\' ({SCFile})."
                         );
      pFVar9 = FTextFormat::FTextFormat(&local_48,pFVar8,Default);
      pFVar8 = FText::Format(&local_68,pFVar9,&local_2c8);
      SourceControlHelpersInternal::LogError(pFVar8,param_2);
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      if (local_b8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
      }
      DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                ((TTuple<FString,FFormatArgumentValue> *)local_2c8.Pairs.AllocatorInstance.Data,
                 local_2c8.Pairs.ArrayNum);
      FVar13.Data = local_2c8.Pairs.AllocatorInstance.Data;
    }
    if ((TTuple<FString,FFormatArgumentValue> *)FVar13.Data !=
        (TTuple<FString,FFormatArgumentValue> *)0x0) {
      FMemory::Free(FVar13.Data);
    }
    uVar3 = 0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_310);
LAB_146b1e453:
  if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_328.Data.AllocatorInstance.Data);
  }
  return (bool)uVar3;
}

// MarkFilesForAdd @ 146b1e490

bool __cdecl
USourceControlHelpers::MarkFilesForAdd
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  code *pcVar1;
  FMRSWRecursiveAccessDetector *pFVar2;
  bool bVar3;
  int iVar4;
  ISourceControlProvider *pIVar5;
  FMarkForAdd *pFVar6;
  FMarkForAdd *pFVar7;
  TRawPtrProxy<FMarkForAdd> local_res8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_78;
  FMarkForAdd *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  FDestructionSentinel local_58;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_38;
  ForAnyElementType local_30;
  ulonglong local_28;
  
  if (param_1->ArrayNum != 0) {
    pIVar5 = SourceControlHelpersInternal::VerifySourceControl(param_2);
    bVar3 = false;
    if (pIVar5 != (ISourceControlProvider *)0x0) {
      pFVar7 = (FMarkForAdd *)0x0;
      local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.ArrayNum = 0;
      local_78.ArrayMax = 0;
      bVar3 = SourceControlHelpersInternal::ConvertFilesToQualifiedPaths
                        (param_1,&local_78,param_2,false);
      local_28 = 0;
      local_38.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_30.Data = (FScriptContainerElement *)0x0;
      pcVar1 = *(code **)((longlong)*pIVar5 + 0xe8);
      pFVar6 = ::operator_new(0x58);
      if (pFVar6 != (FMarkForAdd *)0x0) {
        *(undefined8 *)&pFVar6->field_0x8 = 0;
        *(undefined8 *)&pFVar6->field_0x48 = 0;
        *(undefined8 *)&pFVar6->field_0x50 = 0;
        *(undefined ***)pFVar6 = &___7FMarkForAdd__6B_;
        *(undefined8 *)&pFVar6->field_0x10 = 0;
        *(undefined8 *)&pFVar6->field_0x18 = 0;
        *(undefined8 *)&pFVar6->field_0x20 = 0;
        *(undefined8 *)&pFVar6->field_0x28 = 0;
        *(undefined8 *)&pFVar6->field_0x30 = 0;
        *(undefined8 *)&pFVar6->field_0x38 = 0;
        *(undefined8 *)&pFVar6->field_0x40 = 0;
        pFVar7 = pFVar6;
      }
      local_res8.Object = pFVar7;
      TSharedRef<FMarkForAdd,1>::TSharedRef<FMarkForAdd,1><FMarkForAdd>
                ((TSharedRef<FMarkForAdd,1> *)&local_58,&local_res8);
      pFVar2 = local_58.Accessor;
      local_68 = (FMarkForAdd *)local_58._0_8_;
      pTStack_60 = (TReferenceControllerBase<1> *)local_58.Accessor;
      if ((TReferenceControllerBase<1> *)local_58.Accessor != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *(atomic<int> *)((longlong)local_58.Accessor + 8) =
             (atomic<int>)((int)*(atomic<int> *)((longlong)local_58.Accessor + 8) + 1);
        UNLOCK();
      }
      iVar4 = (*pcVar1)(pIVar5,&local_68,&local_78,0,&local_38);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_60);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar2);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_38,(FWriteAccessScope *)&local_58);
      if (((int)local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_30.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
        local_28 = local_28 & 0xffffffff00000000;
      }
      if (local_58.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
      }
      if (local_30.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_30.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_38.AccessDetector);
      if ((bVar3) && (iVar4 == 1)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      DestructItems<FString,int>((FString *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
      if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.AllocatorInstance.Data);
      }
    }
    return bVar3;
  }
  return true;
}

// MarkFilesForDelete @ 146b1e680

bool __cdecl
USourceControlHelpers::MarkFilesForDelete
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  void *pvVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  char cVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  ISourceControlProvider *pIVar15;
  FRevert *pFVar16;
  FRevert *pFVar17;
  IFileManager *pIVar18;
  ulonglong uVar19;
  wchar_t *pwVar20;
  longlong lVar21;
  longlong lVar22;
  FScriptContainerElement *pFVar23;
  ForAnyElementType FVar24;
  FRevert *pFVar25;
  uint uVar26;
  byte bVar27;
  undefined1 local_res20 [8];
  FScriptContainerElement *in_stack_fffffffffffffe68;
  ForAnyElementType local_168;
  undefined8 local_160;
  ForAnyElementType local_158;
  int local_150;
  int local_14c;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_148;
  int local_140;
  int local_13c;
  TArray<FString,TSizedDefaultAllocator<32>_> local_138;
  FScriptContainerElement *local_128;
  wchar_t *local_120;
  int local_118;
  int local_114;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_110;
  ForAnyElementType local_108;
  ulonglong local_100;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_f8;
  ForAnyElementType local_f0;
  ulonglong local_e8;
  TSharedRef<ISourceControlState,1> *local_e0;
  undefined8 local_d8;
  longlong local_d0;
  longlong local_c8;
  ISourceControlProvider *local_c0;
  TRawPtrProxy<FRevert> local_b8;
  TRawPtrProxy<FDelete> local_b0;
  FRevert *local_a8;
  TReferenceControllerBase<1> *pTStack_a0;
  FDelete *local_98;
  TReferenceControllerBase<1> *pTStack_90;
  FDestructionSentinel local_88;
  FDestructionSentinel local_70;
  TSharedRef<FRevert,1> local_58;
  TSharedRef<FDelete,1> local_48;
  
  if (param_1->ArrayNum == 0) {
    return true;
  }
  uVar26 = 0;
  local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.ArrayNum = 0;
  local_138.ArrayMax = 0;
  bVar7 = SourceControlHelpersInternal::ConvertFilesToQualifiedPaths
                    (param_1,&local_138,param_2,false);
  iVar14 = local_138.ArrayNum;
  lVar21 = (longlong)local_138.ArrayNum;
  pIVar15 = SourceControlHelpersInternal::VerifySourceControl(param_2);
  local_c0 = pIVar15;
  if (pIVar15 == (ISourceControlProvider *)0x0) {
    bVar27 = 0;
  }
  else {
    local_e0 = (TSharedRef<ISourceControlState,1> *)0x0;
    local_d8 = 0;
    (**(code **)((longlong)*pIVar15 + 0xa0))(pIVar15,&local_138,&local_e0);
    bVar5 = false;
    local_158.Data = (FScriptContainerElement *)0x0;
    local_14c = 0;
    local_150 = 0;
    local_168.Data = (FScriptContainerElement *)0x0;
    local_160 = 0;
    local_c8 = lVar21;
    if (0 < iVar14) {
      local_128 = (FScriptContainerElement *)0x0;
      local_d0 = 0;
      bVar5 = false;
      do {
        lVar21 = local_d0;
        pFVar23 = local_128;
        uVar13 = 0;
        if ((int)uVar26 < local_138.ArrayNum) {
          uVar13 = ~uVar26 >> 0x1f;
        }
        if (uVar13 == 0) {
          in_stack_fffffffffffffe68 = (FScriptContainerElement *)(longlong)(int)uVar26;
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
        local_148.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        local_140 = *(int *)(local_138.AllocatorInstance.Data + lVar21 + 8);
        lVar22 = (longlong)local_140;
        pvVar1 = *(void **)(local_138.AllocatorInstance.Data + lVar21);
        if (local_140 == 0) {
          local_13c = 0;
        }
        else {
          in_stack_fffffffffffffe68 = (FScriptContainerElement *)&local_148;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_140,0,(ForAnyElementType *)in_stack_fffffffffffffe68,local_140,
                     &local_13c);
          memcpy((void *)local_148.AccessDetector.State,pvVar1,lVar22 * 2);
        }
        uVar13 = 0;
        if ((int)uVar26 < (int)local_d8) {
          uVar13 = ~uVar26 >> 0x1f;
        }
        if (uVar13 == 0) {
          in_stack_fffffffffffffe68 = pFVar23;
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
        pTVar2 = *(TReferenceControllerBase<1> **)
                  ((longlong)&(local_e0->SharedReferenceCount).ReferenceController + lVar21);
        plVar3 = *(longlong **)((longlong)&local_e0->Object + lVar21);
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        cVar10 = (**(code **)(*plVar3 + 0xd8))(plVar3);
        if (cVar10 != '\0') {
          cVar10 = (**(code **)(*plVar3 + 0xe8))(plVar3);
          if ((cVar10 != '\0') || (cVar11 = (**(code **)(*plVar3 + 0x88))(plVar3), cVar11 != '\0'))
          {
            if ((local_158.Data <= (FScriptContainerElement *)&local_148) &&
               ((FScriptContainerElement *)&local_148 < local_158.Data + (longlong)local_14c * 0x10)
               ) {
              in_stack_fffffffffffffe68 = (FScriptContainerElement *)&local_148;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar8) {
                pcVar4 = (code *)swi(3);
                uVar9 = (*pcVar4)();
                return (bool)uVar9;
              }
            }
            if (local_150 == local_14c) {
              local_150 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x810,&local_158,&local_14c);
            }
            TVar6.AccessDetector.State = local_148.AccessDetector.State;
            pFVar23 = local_158.Data + (longlong)local_150 * 0x10;
            *(FMRSWRecursiveAccessDetector *)pFVar23 = (FMRSWRecursiveAccessDetector)0x0;
            lVar21 = (longlong)local_140;
            *(int *)(pFVar23 + 8) = local_140;
            if (local_140 == 0) {
              *(int *)(pFVar23 + 0xc) = 0;
              local_150 = local_150 + 1;
            }
            else {
              in_stack_fffffffffffffe68 = pFVar23;
              local_150 = local_150 + 1;
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_140,0,(ForAnyElementType *)pFVar23,local_140,
                         (int *)(pFVar23 + 0xc));
              memcpy((void *)*(FMRSWRecursiveAccessDetector *)pFVar23,
                     (void *)TVar6.AccessDetector.State,lVar21 * 2);
            }
            pFVar23 = local_128;
            if (cVar10 != '\0') goto LAB_146b1eab4;
          }
          cVar10 = (**(code **)(*plVar3 + 0x108))(plVar3);
          if (cVar10 == '\0') {
            bVar5 = true;
            pFVar23 = local_128;
          }
          else {
            if ((local_168.Data <= (FScriptContainerElement *)&local_148) &&
               ((FScriptContainerElement *)&local_148 <
                local_168.Data + (longlong)local_160._4_4_ * 0x10)) {
              in_stack_fffffffffffffe68 = (FScriptContainerElement *)&local_148;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar8) {
                pcVar4 = (code *)swi(3);
                uVar9 = (*pcVar4)();
                return (bool)uVar9;
              }
            }
            iVar14 = (int)local_160;
            if ((int)local_160 == local_160._4_4_) {
              iVar14 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&local_168,(int *)((longlong)&local_160 + 4));
            }
            TVar6.AccessDetector.State = local_148.AccessDetector.State;
            local_160 = CONCAT44(local_160._4_4_,iVar14 + 1);
            pFVar23 = local_168.Data + (longlong)iVar14 * 0x10;
            *(FMRSWRecursiveAccessDetector *)pFVar23 = (FMRSWRecursiveAccessDetector)0x0;
            lVar21 = (longlong)local_140;
            *(int *)(pFVar23 + 8) = local_140;
            if (local_140 == 0) {
              *(int *)(pFVar23 + 0xc) = 0;
              pFVar23 = local_128;
            }
            else {
              in_stack_fffffffffffffe68 = pFVar23;
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_140,0,(ForAnyElementType *)pFVar23,local_140,
                         (int *)(pFVar23 + 0xc));
              memcpy((void *)*(FMRSWRecursiveAccessDetector *)pFVar23,
                     (void *)TVar6.AccessDetector.State,lVar21 * 2);
              pFVar23 = local_128;
            }
          }
        }
LAB_146b1eab4:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        if (local_148.AccessDetector.State != (atomic<unsigned___int64>)0x0) {
          FMemory::Free((void *)local_148.AccessDetector.State);
        }
        local_128 = pFVar23 + 1;
        local_d0 = local_d0 + 0x10;
        uVar26 = uVar26 + 1;
        pIVar15 = local_c0;
      } while ((longlong)local_128 < local_c8);
    }
    pFVar25 = (FRevert *)0x0;
    if ((!bVar7) || (bVar5)) {
      pFVar17 = (FRevert *)0x0;
    }
    else {
      pFVar17 = (FRevert *)&DAT_00000001;
    }
    pFVar16 = pFVar17;
    if (local_150 != 0) {
      local_100 = 0;
      local_110.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_108.Data = (FScriptContainerElement *)0x0;
      pcVar4 = *(code **)((longlong)*pIVar15 + 0xe8);
      pFVar16 = ::operator_new(0x70);
      local_b8.Object = pFVar25;
      if (pFVar16 != (FRevert *)0x0) {
        pFVar16->_padding_ = 0;
        *(undefined4 *)((longlong)&pFVar16->_padding_ + 4) = 0;
        *(undefined4 *)&pFVar16->field_0x5a = 0;
        *(undefined2 *)&pFVar16->field_0x5e = 0;
        pFVar16->_padding_ = 0;
        pFVar16->_padding_ = 0;
        pFVar16->_padding_ = 0;
        pFVar16->_padding_ = (longlong)&___7FRevert__6B_;
        pFVar16->_padding_ = 0;
        pFVar16->_padding_ = 0;
        pFVar16->_padding_ = 0;
        pFVar16->_padding_ = 0;
        pFVar16->_padding_ = 0;
        *(undefined4 *)&pFVar16->_padding_ = 0;
        pFVar16->bIsSoftRevert = false;
        pFVar16->bIsRevertAll = false;
        (pFVar16->DeletedFiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar16->DeletedFiles).ArrayNum = 0;
        (pFVar16->DeletedFiles).ArrayMax = 0;
        local_b8.Object = pFVar16;
      }
      TSharedRef<FRevert,1>::TSharedRef<FRevert,1><FRevert>(&local_58,&local_b8);
      local_a8 = local_58.Object;
      pTStack_a0 = local_58.SharedReferenceCount.ReferenceController;
      if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      in_stack_fffffffffffffe68 = (FScriptContainerElement *)&local_110;
      iVar14 = (*pcVar4)(pIVar15,&local_a8,&local_158,0,in_stack_fffffffffffffe68);
      pFVar16 = pFVar25;
      if (iVar14 == 1) {
        pFVar16 = pFVar17;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_a0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_110,(FWriteAccessScope *)&local_88);
      if (((int)local_100 != 0) && (local_108.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_108.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_108,0,0,0x10);
        local_100 = local_100 & 0xffffffff00000000;
      }
      if (local_88.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
      }
      if (local_108.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_110.AccessDetector);
    }
    pFVar17 = pFVar16;
    if ((int)local_160 != 0) {
      local_e8 = 0;
      local_f8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_f0.Data = (FScriptContainerElement *)0x0;
      pcVar4 = *(code **)((longlong)*pIVar15 + 0xe8);
      pFVar17 = ::operator_new(0x58);
      local_b0.Object = (FDelete *)pFVar25;
      if (pFVar17 != (FRevert *)0x0) {
        pFVar17->_padding_ = 0;
        pFVar17->_padding_ = 0;
        pFVar17->_padding_ = 0;
        pFVar17->_padding_ = 0;
        pFVar17->_padding_ = 0;
        pFVar17->_padding_ = 0;
        pFVar17->_padding_ = (longlong)&___7FDelete__6B_;
        pFVar17->_padding_ = 0;
        pFVar17->_padding_ = 0;
        pFVar17->_padding_ = 0;
        pFVar17->_padding_ = 0;
        local_b0.Object = (FDelete *)pFVar17;
      }
      TSharedRef<FDelete,1>::TSharedRef<FDelete,1><FDelete>(&local_48,&local_b0);
      local_98 = local_48.Object;
      pTStack_90 = local_48.SharedReferenceCount.ReferenceController;
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      in_stack_fffffffffffffe68 = (FScriptContainerElement *)&local_f8;
      iVar14 = (*pcVar4)(pIVar15,&local_98,&local_168,0,in_stack_fffffffffffffe68);
      pFVar17 = pFVar25;
      if (iVar14 == 1) {
        pFVar17 = pFVar16;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_90);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_f8,(FWriteAccessScope *)&local_70);
      if (((int)local_e8 != 0) && (local_f0.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_f0.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_f0,0,0,0x10);
        local_e8 = local_e8 & 0xffffffff00000000;
      }
      if (local_70.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
      }
      if (local_f0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_f8.AccessDetector);
    }
    pIVar18 = IFileManager::Get();
    iVar14 = local_138.ArrayNum;
    uVar19 = (ulonglong)local_138.ArrayNum;
    pFVar23 = local_138.AllocatorInstance.Data + uVar19 * 0x10;
    FVar24.Data = local_138.AllocatorInstance.Data;
    while( true ) {
      bVar27 = (byte)pFVar17;
      if ((int)uVar19 != iVar14) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (FVar24.Data == pFVar23) break;
      local_118 = *(int *)(FVar24.Data + 8);
      lVar21 = (longlong)local_118;
      pvVar1 = *(void **)FVar24.Data;
      local_120 = (wchar_t *)0x0;
      if (local_118 == 0) {
        local_114 = 0;
      }
      else {
        in_stack_fffffffffffffe68 = (FScriptContainerElement *)&local_120;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_118,0,(ForAnyElementType *)in_stack_fffffffffffffe68,local_118,
                   &local_114);
        memcpy(local_120,pvVar1,lVar21 * 2);
      }
      pwVar20 = L"";
      if (local_118 != 0) {
        pwVar20 = local_120;
      }
      cVar10 = (**(code **)((longlong)*pIVar18 + 0x50))(pIVar18,pwVar20);
      if (cVar10 != '\0') {
        pwVar20 = L"";
        if (local_118 != 0) {
          pwVar20 = local_120;
        }
        in_stack_fffffffffffffe68 =
             (FScriptContainerElement *)((ulonglong)in_stack_fffffffffffffe68 & 0xffffffffffffff00);
        bVar12 = (**(code **)((longlong)*pIVar18 + 0x38))
                           (pIVar18,pwVar20,0,1,in_stack_fffffffffffffe68);
        pFVar17 = (FRevert *)(ulonglong)(bVar27 & bVar12);
      }
      if (local_120 != (wchar_t *)0x0) {
        FMemory::Free(local_120);
      }
      uVar19 = local_138._8_8_ & 0xffffffff;
      FVar24.Data = FVar24.Data + 0x10;
    }
    DestructItems<FString,int>((FString *)local_168.Data,(int)local_160);
    if (local_168.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data);
    }
    DestructItems<FString,int>((FString *)local_158.Data,local_150);
    if (local_158.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data);
    }
    DestructItems<TSharedRef<ISourceControlState,1>,int>(local_e0,(int)local_d8);
    if (local_e0 != (TSharedRef<ISourceControlState,1> *)0x0) {
      FMemory::Free(local_e0);
    }
  }
  DestructItems<FString,int>((FString *)local_138.AllocatorInstance.Data,local_138.ArrayNum);
  if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.AllocatorInstance.Data);
  }
  return (bool)bVar27;
}

// PackageFilename @ 146b217b0

FString * __cdecl
USourceControlHelpers::PackageFilename(FString *__return_storage_ptr__,FString *param_1)

{
  FString *pFVar1;
  FString local_18;
  
  pFVar1 = PackageFilename_Internal(&local_18,param_1);
  FPaths::ConvertRelativePathToFull(__return_storage_ptr__,pFVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// PackageFilename @ 146b217f0

FString * __cdecl
USourceControlHelpers::PackageFilename(FString *__return_storage_ptr__,UPackage *param_1)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  FPackagePath *pFVar3;
  FString *pFVar4;
  int iVar5;
  ForAnyElementType FVar6;
  FName local_res8;
  FString local_48;
  TStringView<wchar_t> local_38;
  FString local_28;
  FString local_18;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  if (param_1 == (UPackage *)0x0) {
    return __return_storage_ptr__;
  }
  pFVar3 = UPackage::GetLoadedPath(param_1);
  FPackagePath::GetPackageName(pFVar3,&local_48);
  pFVar3 = UPackage::GetLoadedPath(param_1);
  bVar2 = FPackagePath::IsEmpty(pFVar3);
  if (!bVar2) {
    iVar5 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    local_38.Size = iVar5;
    local_38.DataPtr = (wchar_t *)local_48.Data.AllocatorInstance.Data;
    bVar2 = FPackageName::IsMemoryPackage(&local_38);
    if (bVar2) {
      if (((uint)param_1->PackageFlagsPrivate >> 0x11 & 1) == 0) {
        pFVar4 = FPackageName::GetAssetPackageExtension();
      }
      else {
        pFVar4 = FPackageName::GetMapPackageExtension();
      }
      ::FString::FString((FString *)&local_38,pFVar4);
      pFVar4 = FPackageName::LongPackageNameToFilename(&local_18,&local_48,(FString *)&local_38);
      pFVar4 = FPaths::ConvertRelativePathToFull(&local_28,pFVar4);
      if (__return_storage_ptr__ != pFVar4) {
        pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (__return_storage_ptr__->Data).AllocatorInstance.Data =
             (pFVar4->Data).AllocatorInstance.Data;
        (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (__return_storage_ptr__->Data).ArrayNum = (pFVar4->Data).ArrayNum;
        (__return_storage_ptr__->Data).ArrayMax = (pFVar4->Data).ArrayMax;
        (pFVar4->Data).ArrayNum = 0;
        (pFVar4->Data).ArrayMax = 0;
      }
      FVar6.Data = local_18.Data.AllocatorInstance.Data;
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
        FVar6.Data = local_18.Data.AllocatorInstance.Data;
      }
      goto LAB_146b21979;
    }
  }
  local_res8 = (FName)param_1->_padding_;
  ::FName::ToString(&local_res8,(FString *)&local_38);
  pFVar4 = PackageFilename_Internal(&local_28,(FString *)&local_38);
  pFVar4 = FPaths::ConvertRelativePathToFull(&local_18,pFVar4);
  if (__return_storage_ptr__ != pFVar4) {
    pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar4->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  FVar6.Data = local_28.Data.AllocatorInstance.Data;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
    FVar6.Data = local_28.Data.AllocatorInstance.Data;
  }
LAB_146b21979:
  if (FVar6.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar6.Data);
  }
  if ((FScriptContainerElement *)local_38.DataPtr != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.DataPtr);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// PackageFilenames @ 146b21b00

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl
USourceControlHelpers::PackageFilenames
          (TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FString *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  FString local_38;
  FString local_28;
  
  uVar10 = 0;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar4 = param_1->ArrayNum;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  if (0 < (int)uVar4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar4,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  iVar5 = param_1->ArrayNum;
  if (0 < iVar5) {
    do {
      uVar4 = 0;
      if ((int)uVar10 < iVar5) {
        uVar4 = ~uVar10 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar6;
      }
      pFVar7 = PackageFilename_Internal
                         (&local_28,
                          (FString *)
                          ((param_1->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x10));
      pFVar8 = (FScriptContainerElement *)FPaths::ConvertRelativePathToFull(&local_38,pFVar7);
      pFVar9 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar9 <= pFVar8) && (pFVar8 < pFVar9 + (longlong)*piVar1 * 0x10)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar6;
      }
      iVar5 = __return_storage_ptr__->ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar5 + 1;
      pFVar9 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
      *(undefined8 *)pFVar9 = 0;
      *(FScriptContainerElement **)pFVar9 =
           (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar8->field_0x0)->AllocatorInstance).
           Data;
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar8->field_0x0)->AllocatorInstance).Data
           = (FScriptContainerElement *)0x0;
      *(int *)(pFVar9 + 8) = *(int *)&pFVar8[8].field_0x0;
      *(int *)(pFVar9 + 0xc) = *(int *)&pFVar8[0xc].field_0x0;
      *(undefined8 *)&pFVar8[8].field_0x0 = 0;
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      iVar5 = param_1->ArrayNum;
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < iVar5);
  }
  return __return_storage_ptr__;
}

// PackageFilenames @ 146b21cf0

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl
USourceControlHelpers::PackageFilenames
          (TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<UPackage_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FString *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  FString local_38;
  FString local_28;
  
  uVar11 = 0;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar4 = param_1->ArrayNum;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  if (0 < (int)uVar4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar4,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  iVar5 = param_1->ArrayNum;
  uVar12 = uVar11;
  if (0 < iVar5) {
    do {
      uVar10 = (uint)uVar11;
      uVar4 = 0;
      if ((int)uVar10 < iVar5) {
        uVar4 = ~uVar10 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar6;
      }
      pFVar7 = PackageFilename(&local_28,*(UPackage **)((param_1->AllocatorInstance).Data + uVar12))
      ;
      pFVar8 = (FScriptContainerElement *)FPaths::ConvertRelativePathToFull(&local_38,pFVar7);
      pFVar9 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar9 <= pFVar8) && (pFVar8 < pFVar9 + (longlong)*piVar1 * 0x10)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar6;
      }
      iVar5 = __return_storage_ptr__->ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar5 + 1;
      pFVar9 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
      *(undefined8 *)pFVar9 = 0;
      *(FScriptContainerElement **)pFVar9 =
           (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar8->field_0x0)->AllocatorInstance).
           Data;
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar8->field_0x0)->AllocatorInstance).Data
           = (FScriptContainerElement *)0x0;
      *(int *)(pFVar9 + 8) = *(int *)&pFVar8[8].field_0x0;
      *(int *)(pFVar9 + 0xc) = *(int *)&pFVar8[0xc].field_0x0;
      *(undefined8 *)&pFVar8[8].field_0x0 = 0;
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      iVar5 = param_1->ArrayNum;
      uVar11 = (ulonglong)(uVar10 + 1);
      uVar12 = uVar12 + 8;
    } while ((int)(uVar10 + 1) < iVar5);
  }
  return __return_storage_ptr__;
}

// QueryFileState @ 146b21ef0

FSourceControlState * __cdecl
USourceControlHelpers::QueryFileState
          (FSourceControlState *__return_storage_ptr__,FString *param_1,bool param_2)

{
  FScriptContainerElement *_Src;
  code *pcVar1;
  bool bVar2;
  FSourceControlState *pFVar3;
  longlong lVar4;
  ForAnyElementType local_88;
  int local_80;
  int local_7c;
  FString local_78;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TArrayView<FString_const_,int> local_58;
  code *local_48 [2];
  undefined **local_38;
  FSourceControlState *local_30;
  undefined8 local_20;
  
  (__return_storage_ptr__->Filename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Filename).Data.ArrayNum = 0;
  (__return_storage_ptr__->Filename).Data.ArrayMax = 0;
  __return_storage_ptr__->bIsValid = false;
  __return_storage_ptr__->bIsUnknown = false;
  __return_storage_ptr__->bCanCheckIn = false;
  __return_storage_ptr__->bCanCheckOut = false;
  __return_storage_ptr__->bIsCheckedOut = false;
  __return_storage_ptr__->bIsCurrent = false;
  __return_storage_ptr__->bIsSourceControlled = false;
  __return_storage_ptr__->bIsAdded = false;
  __return_storage_ptr__->bIsDeleted = false;
  __return_storage_ptr__->bIsIgnored = false;
  __return_storage_ptr__->bCanEdit = false;
  __return_storage_ptr__->bCanDelete = false;
  __return_storage_ptr__->bIsModified = false;
  __return_storage_ptr__->bCanAdd = false;
  __return_storage_ptr__->bIsConflicted = false;
  __return_storage_ptr__->bCanRevert = false;
  __return_storage_ptr__->bIsCheckedOutOther = false;
  (__return_storage_ptr__->CheckedOutOther).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->CheckedOutOther).Data.ArrayNum = 0;
  (__return_storage_ptr__->CheckedOutOther).Data.ArrayMax = 0;
  __return_storage_ptr__->bIsCheckedOutInOtherBranch = false;
  __return_storage_ptr__->bIsModifiedInOtherBranch = false;
  (__return_storage_ptr__->PreviousUser).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->PreviousUser).Data.ArrayNum = 0;
  (__return_storage_ptr__->PreviousUser).Data.ArrayMax = 0;
  ::FString::operator=(&__return_storage_ptr__->Filename,param_1);
  local_78.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar4 = (longlong)local_78.Data.ArrayNum;
  _Src = (param_1->Data).AllocatorInstance.Data;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USourceControlHelpers::QueryFileState'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USourceControlHelpers::QueryFileState'::__l2::<lambda_1>,void,FSourceControlState>
                ::Call;
  local_20 = 0;
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30 = __return_storage_ptr__;
  if (local_78.Data.ArrayNum == 0) {
    local_78.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_78.Data.ArrayNum,0,(ForAnyElementType *)&local_78,local_78.Data.ArrayNum,
               &local_78.Data.ArrayMax);
    memcpy(local_78.Data.AllocatorInstance.Data,_Src,lVar4 * 2);
  }
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_88,1,&local_7c);
  ConstructItems<FString,FString,int>(local_88.Data,&local_78,1);
  iStack_60 = local_80;
  local_68 = local_88.Data;
  if (local_80 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSourceControlState *)(*pcVar1)();
      return pFVar3;
    }
  }
  local_58._12_4_ = uStack_5c;
  local_58.ArrayNum = iStack_60;
  local_58.DataPtr = (FString *)local_68;
  SourceControlHelpersInternal::RunQueryFileStates
            (&local_58,Synchronous,param_2,(TFunction<void___cdecl(FSourceControlState)> *)local_48)
  ;
  DestructItems<FString,int>((FString *)local_88.Data,local_80);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// QueryFileStates @ 146b220c0

TArray<FSourceControlState,TSizedDefaultAllocator<32>_> * __cdecl
USourceControlHelpers::QueryFileStates
          (TArray<FSourceControlState,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TArray<FSourceControlState,TSizedDefaultAllocator<32>_> *pTVar5;
  undefined4 uStack_4c;
  TArrayView<FString_const_,int> local_48;
  code *local_38 [2];
  undefined **local_28;
  TArray<FSourceControlState,TSizedDefaultAllocator<32>_> *local_20;
  undefined8 local_10;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar1 = param_1->ArrayNum;
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USourceControlHelpers::QueryFileStates'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USourceControlHelpers::QueryFileStates'::__l2::<lambda_1>,void,FSourceControlState>
                ::Call;
  pFVar2 = (param_1->AllocatorInstance).Data;
  local_20 = __return_storage_ptr__;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArray<FSourceControlState,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar5;
    }
  }
  local_48._12_4_ = uStack_4c;
  local_48.ArrayNum = iVar1;
  local_48.DataPtr = (FString *)pFVar2;
  SourceControlHelpersInternal::RunQueryFileStates
            (&local_48,Synchronous,param_2,(TFunction<void___cdecl(FSourceControlState)> *)local_38)
  ;
  DestructItems<FString,int>((FString *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  pFVar2 = (param_1->AllocatorInstance).Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return __return_storage_ptr__;
}

// RevertFile @ 146b23190

bool __cdecl USourceControlHelpers::RevertFile(FString *param_1,bool param_2)

{
  code *pcVar1;
  FMRSWRecursiveAccessDetector *pFVar2;
  int iVar3;
  ISourceControlProvider *pIVar4;
  FRevert *pFVar5;
  FRevert *pFVar6;
  bool bVar7;
  TRawPtrProxy<FRevert> local_res18 [2];
  FString local_78;
  FRevert *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  FDestructionSentinel local_58;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_38;
  ForAnyElementType local_30;
  ulonglong local_28;
  
  pFVar6 = (FRevert *)0x0;
  SourceControlHelpersInternal::ConvertFileToQualifiedPath
            (&local_78,param_1,param_2,false,(wchar_t *)0x0);
  if ((local_78.Data.ArrayNum < 2) ||
     (pIVar4 = SourceControlHelpersInternal::VerifySourceControl(param_2),
     pIVar4 == (ISourceControlProvider *)0x0)) {
    bVar7 = false;
  }
  else {
    local_28 = 0;
    local_38.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    pcVar1 = *(code **)((longlong)*pIVar4 + 0xd0);
    local_30.Data = (FScriptContainerElement *)0x0;
    pFVar5 = ::operator_new(0x70);
    if (pFVar5 != (FRevert *)0x0) {
      pFVar5->_padding_ = 0;
      *(undefined4 *)((longlong)&pFVar5->_padding_ + 4) = 0;
      *(undefined4 *)&pFVar5->field_0x5a = 0;
      *(undefined2 *)&pFVar5->field_0x5e = 0;
      pFVar5->_padding_ = (longlong)&___7FRevert__6B_;
      pFVar5->_padding_ = 0;
      pFVar5->_padding_ = 0;
      pFVar5->_padding_ = 0;
      pFVar5->_padding_ = 0;
      pFVar5->_padding_ = 0;
      pFVar5->_padding_ = 0;
      pFVar5->_padding_ = 0;
      pFVar5->_padding_ = 0;
      *(undefined4 *)&pFVar5->_padding_ = 0;
      pFVar5->bIsSoftRevert = false;
      pFVar5->bIsRevertAll = false;
      (pFVar5->DeletedFiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar5->DeletedFiles).ArrayNum = 0;
      (pFVar5->DeletedFiles).ArrayMax = 0;
      pFVar6 = pFVar5;
    }
    local_res18[0].Object = pFVar6;
    TSharedRef<FRevert,1>::TSharedRef<FRevert,1><FRevert>
              ((TSharedRef<FRevert,1> *)&local_58,local_res18);
    pFVar2 = local_58.Accessor;
    local_68 = (FRevert *)local_58._0_8_;
    pTStack_60 = (TReferenceControllerBase<1> *)local_58.Accessor;
    if ((TReferenceControllerBase<1> *)local_58.Accessor != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)local_58.Accessor + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)local_58.Accessor + 8) + 1);
      UNLOCK();
    }
    iVar3 = (*pcVar1)(pIVar4,&local_68,&local_78,0,&local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_60);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar2);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_38,(FWriteAccessScope *)&local_58);
    if (((int)local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = local_28 & 0xffffffff00000000;
    }
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_38.AccessDetector);
    bVar7 = iVar3 == 1;
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return bVar7;
}

// RevertFiles @ 146b23370

bool __cdecl
USourceControlHelpers::RevertFiles
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  void *_Src;
  TReferenceControllerBase<1> *pTVar1;
  longlong *plVar2;
  code *pcVar3;
  ForAnyElementType _Src_00;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  ISourceControlProvider *pIVar10;
  FRevert *pFVar11;
  longlong lVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  ForAnyElementType local_d8;
  int local_d0;
  int local_cc;
  ForAnyElementType local_c8;
  int local_c0;
  int local_bc;
  TArray<FString,TSizedDefaultAllocator<32>_> local_b8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a8;
  ForAnyElementType local_a0;
  ulonglong local_98;
  TSharedRef<ISourceControlState,1> *local_90;
  undefined8 local_88;
  TRawPtrProxy<FRevert> local_80;
  FRevert *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  FDestructionSentinel local_68;
  TSharedRef<FRevert,1> local_48;
  
  if (param_1->ArrayNum == 0) {
    return true;
  }
  uVar15 = 0;
  local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayNum = 0;
  local_b8.ArrayMax = 0;
  bVar4 = SourceControlHelpersInternal::ConvertFilesToQualifiedPaths
                    (param_1,&local_b8,param_2,false);
  iVar9 = local_b8.ArrayNum;
  lVar12 = (longlong)local_b8.ArrayNum;
  pIVar10 = SourceControlHelpersInternal::VerifySourceControl(param_2);
  if (pIVar10 == (ISourceControlProvider *)0x0) {
    bVar4 = false;
  }
  else {
    local_90 = (TSharedRef<ISourceControlState,1> *)0x0;
    local_88 = 0;
    (**(code **)((longlong)*pIVar10 + 0xa0))(pIVar10,&local_b8,&local_90);
    local_d8.Data = (FScriptContainerElement *)0x0;
    local_d0 = 0;
    local_cc = 0;
    uVar16 = uVar15;
    uVar18 = uVar15;
    if (0 < iVar9) {
      do {
        uVar17 = (uint)uVar18;
        uVar8 = 0;
        if ((int)uVar17 < local_b8.ArrayNum) {
          uVar8 = ~uVar17 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        local_c8.Data = (FScriptContainerElement *)0x0;
        local_c0 = *(int *)(local_b8.AllocatorInstance.Data + uVar16 + 8);
        lVar13 = (longlong)local_c0;
        _Src = *(void **)(local_b8.AllocatorInstance.Data + uVar16);
        if (local_c0 == 0) {
          local_bc = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_c0,0,&local_c8,local_c0,&local_bc);
          memcpy(local_c8.Data,_Src,lVar13 * 2);
        }
        uVar8 = 0;
        if ((int)uVar17 < (int)local_88) {
          uVar8 = ~uVar17 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        pTVar1 = *(TReferenceControllerBase<1> **)
                  ((longlong)&(local_90->SharedReferenceCount).ReferenceController + uVar16);
        plVar2 = *(longlong **)((longlong)&local_90->Object + uVar16);
        if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
          UNLOCK();
        }
        cVar7 = (**(code **)(*plVar2 + 0x130))();
        if (cVar7 != '\0') {
          if (((local_d8.Data <= (FScriptContainerElement *)&local_c8) &&
              ((FScriptContainerElement *)&local_c8 < local_d8.Data + (longlong)local_cc * 0x10)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          if (local_d0 == local_cc) {
            local_d0 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&local_d8,&local_cc);
          }
          _Src_00.Data = local_c8.Data;
          lVar13 = (longlong)local_d0;
          local_d0 = local_d0 + 1;
          pFVar14 = local_d8.Data + lVar13 * 0x10;
          *(FScriptContainerElement **)pFVar14 = (FScriptContainerElement *)0x0;
          lVar13 = (longlong)local_c0;
          *(int *)(pFVar14 + 8) = local_c0;
          if (local_c0 == 0) {
            *(int *)(pFVar14 + 0xc) = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_c0,0,(ForAnyElementType *)pFVar14,local_c0,(int *)(pFVar14 + 0xc));
                    /* WARNING: Load size is inaccurate */
            memcpy(*pFVar14,_Src_00.Data,lVar13 * 2);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        if (local_c8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data);
        }
        uVar15 = uVar15 + 1;
        uVar16 = uVar16 + 0x10;
        uVar18 = (ulonglong)(uVar17 + 1);
      } while ((longlong)uVar15 < lVar12);
    }
    if (local_d0 != 0) {
      local_98 = 0;
      local_a8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_a0.Data = (FScriptContainerElement *)0x0;
      pcVar3 = *(code **)((longlong)*pIVar10 + 0xe8);
      pFVar11 = ::operator_new(0x70);
      local_80.Object = (FRevert *)0x0;
      if (pFVar11 != (FRevert *)0x0) {
        pFVar11->_padding_ = 0;
        *(undefined4 *)((longlong)&pFVar11->_padding_ + 4) = 0;
        *(undefined4 *)&pFVar11->field_0x5a = 0;
        *(undefined2 *)&pFVar11->field_0x5e = 0;
        pFVar11->_padding_ = 0;
        pFVar11->_padding_ = 0;
        pFVar11->_padding_ = 0;
        pFVar11->_padding_ = (longlong)&___7FRevert__6B_;
        pFVar11->_padding_ = 0;
        pFVar11->_padding_ = 0;
        pFVar11->_padding_ = 0;
        pFVar11->_padding_ = 0;
        pFVar11->_padding_ = 0;
        *(undefined4 *)&pFVar11->_padding_ = 0;
        pFVar11->bIsSoftRevert = false;
        pFVar11->bIsRevertAll = false;
        (pFVar11->DeletedFiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar11->DeletedFiles).ArrayNum = 0;
        (pFVar11->DeletedFiles).ArrayMax = 0;
        local_80.Object = pFVar11;
      }
      TSharedRef<FRevert,1>::TSharedRef<FRevert,1><FRevert>(&local_48,&local_80);
      local_78 = local_48.Object;
      pTStack_70 = local_48.SharedReferenceCount.ReferenceController;
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      iVar9 = (*pcVar3)(pIVar10,&local_78,&local_d8,0,&local_a8);
      pFVar11 = (FRevert *)0x0;
      if (iVar9 == 1) {
        pFVar11 = (FRevert *)(ulonglong)bVar4;
      }
      bVar4 = SUB81(pFVar11,0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_70);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_a8,(FWriteAccessScope *)&local_68);
      if (((int)local_98 != 0) && (local_a0.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_a0.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a0,0,0,0x10);
        local_98 = local_98 & 0xffffffff00000000;
      }
      if (local_68.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
      }
      if (local_a0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a8.AccessDetector);
    }
    DestructItems<FString,int>((FString *)local_d8.Data,local_d0);
    if (local_d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data);
    }
    DestructItems<TSharedRef<ISourceControlState,1>,int>(local_90,(int)local_88);
    if (local_90 != (TSharedRef<ISourceControlState,1> *)0x0) {
      FMemory::Free(local_90);
    }
  }
  DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
  if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.AllocatorInstance.Data);
  }
  return bVar4;
}

// RevertUnchangedFile @ 146b238a0

bool __cdecl USourceControlHelpers::RevertUnchangedFile(FString *param_1,bool param_2)

{
  ForAnyElementType _Src;
  int iVar1;
  ISourceControlProvider *pIVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  TArray<FString,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  SourceControlHelpersInternal::ConvertFileToQualifiedPath
            (&local_18,param_1,param_2,false,(wchar_t *)0x0);
  if (1 < local_18.Data.ArrayNum) {
    pIVar2 = SourceControlHelpersInternal::VerifySourceControl(param_2);
    if (pIVar2 != (ISourceControlProvider *)0x0) {
      local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.ArrayNum = 0;
      local_28.ArrayMax = 0;
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_28.AllocatorInstance,&local_28.ArrayMax);
      _Src.Data = local_18.Data.AllocatorInstance.Data;
      pFVar4 = local_28.AllocatorInstance.Data + (longlong)iVar1 * 0x10;
      local_28.ArrayNum = iVar1 + 1;
      *(FScriptContainerElement **)pFVar4 = (FScriptContainerElement *)0x0;
      *(int *)(pFVar4 + 8) = local_18.Data.ArrayNum;
      if (local_18.Data.ArrayNum == 0) {
        *(int *)(pFVar4 + 0xc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_18.Data.ArrayNum,0,(ForAnyElementType *)pFVar4,local_18.Data.ArrayNum,
                   (int *)(pFVar4 + 0xc));
                    /* WARNING: Load size is inaccurate */
        memcpy(*pFVar4,_Src.Data,(longlong)local_18.Data.ArrayNum * 2);
      }
      RevertUnchangedFiles(pIVar2,&local_28);
      bVar3 = true;
      DestructItems<FString,int>((FString *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
      if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      goto LAB_146b239bf;
    }
  }
  bVar3 = false;
LAB_146b239bf:
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// RevertUnchangedFiles @ 146b239f0

void __cdecl
USourceControlHelpers::RevertUnchangedFiles
          (ISourceControlProvider *param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  TReferenceControllerBase<1> *pTVar2;
  ISourceControlState *pIVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  FRevert *pFVar8;
  FScriptContainerElement *pFVar9;
  FRevert *pFVar10;
  uint uVar11;
  TRawPtrProxy<FUpdateStatus> local_res8;
  TRawPtrProxy<FRevert> local_res18 [2];
  ForAnyElementType local_e8;
  undefined8 local_e0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_d8;
  ForAnyElementType local_d0;
  ulonglong local_c8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_c0;
  ForAnyElementType local_b8;
  ulonglong local_b0;
  TSharedRef<ISourceControlState,1> *local_a8;
  undefined8 local_a0;
  TSharedRef<FUpdateStatus,1> local_98;
  FUpdateStatus *local_88;
  TReferenceControllerBase<1> *pTStack_80;
  FRevert *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  FDestructionSentinel local_68;
  FDestructionSentinel local_50;
  TSharedRef<FRevert,1> local_38;
  
  pFVar8 = ::operator_new(0x60);
  pFVar10 = (FRevert *)0x0;
  local_res8.Object = (FUpdateStatus *)pFVar10;
  if (pFVar8 != (FRevert *)0x0) {
    pFVar8->_padding_ = 0;
    pFVar8->_padding_ = (longlong)&___7FUpdateStatus__6B_;
    pFVar8->_padding_ = 0;
    pFVar8->_padding_ = 0;
    pFVar8->_padding_ = 0;
    pFVar8->_padding_ = 0;
    pFVar8->_padding_ = 0;
    pFVar8->_padding_ = 0;
    pFVar8->_padding_ = 0;
    *(undefined4 *)&pFVar8->_padding_ = 0;
    *(undefined4 *)&pFVar8->_padding_ = 0;
    *(undefined8 *)&pFVar8->bIsSoftRevert = 0;
    local_res8.Object = (FUpdateStatus *)pFVar8;
  }
  TSharedRef<FUpdateStatus,1>::TSharedRef<FUpdateStatus,1><FUpdateStatus>(&local_98,&local_res8);
  local_88 = local_98.Object;
  pTStack_80 = local_98.SharedReferenceCount.ReferenceController;
  (local_98.Object)->bUpdateModifiedState = true;
  local_c8 = 0;
  local_d8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_d0.Data = (FScriptContainerElement *)0x0;
  pcVar1 = *(code **)((longlong)*param_1 + 0xe8);
  if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar1)(param_1,&local_88,param_2,0,&local_d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_80);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_d8,(FWriteAccessScope *)&local_68);
  if (((int)local_c8 != 0) && (local_d0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_d0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_d0,0,0,0x10);
    local_c8 = local_c8 & 0xffffffff00000000;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  if (local_d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_d8.AccessDetector);
  local_e8.Data = (FScriptContainerElement *)0x0;
  local_e0 = 0;
  local_a8 = (TSharedRef<ISourceControlState,1> *)0x0;
  local_a0 = 0;
  (**(code **)((longlong)*param_1 + 0xa0))(param_1,param_2,&local_a8,1);
  pFVar8 = pFVar10;
  while( true ) {
    uVar11 = (uint)pFVar8;
    if (((int)uVar11 < 0) || ((int)local_a0 <= (int)uVar11)) {
      if ((int)local_e0 != 0) {
        local_b0 = 0;
        local_c0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
        local_b8.Data = (FScriptContainerElement *)0x0;
        pcVar1 = *(code **)((longlong)*param_1 + 0xe8);
        pFVar8 = ::operator_new(0x70);
        if (pFVar8 != (FRevert *)0x0) {
          pFVar8->_padding_ = 0;
          *(undefined4 *)((longlong)&pFVar8->_padding_ + 4) = 0;
          *(undefined4 *)&pFVar8->field_0x5a = 0;
          *(undefined2 *)&pFVar8->field_0x5e = 0;
          pFVar8->_padding_ = 0;
          pFVar8->_padding_ = 0;
          pFVar8->_padding_ = 0;
          pFVar8->_padding_ = (longlong)&___7FRevert__6B_;
          pFVar8->_padding_ = 0;
          pFVar8->_padding_ = 0;
          pFVar8->_padding_ = 0;
          pFVar8->_padding_ = 0;
          pFVar8->_padding_ = 0;
          *(undefined4 *)&pFVar8->_padding_ = 0;
          *(undefined2 *)&pFVar8->bIsSoftRevert = 0;
          (pFVar8->DeletedFiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar8->DeletedFiles).ArrayNum = 0;
          (pFVar8->DeletedFiles).ArrayMax = 0;
          pFVar10 = pFVar8;
        }
        local_res18[0].Object = pFVar10;
        TSharedRef<FRevert,1>::TSharedRef<FRevert,1><FRevert>(&local_38,local_res18);
        local_78 = local_38.Object;
        pTStack_70 = local_38.SharedReferenceCount.ReferenceController;
        if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        (*pcVar1)(param_1,&local_78,&local_e8,0,&local_c0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_70);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_38.SharedReferenceCount.ReferenceController);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_c0,(FWriteAccessScope *)&local_50);
        if (((int)local_b0 != 0) && (local_b8.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)local_b8.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_b8,0,0,0x10);
          local_b0 = local_b0 & 0xffffffff00000000;
        }
        if (local_50.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
        }
        if (local_b8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_c0.AccessDetector);
      }
      DestructItems<TSharedRef<ISourceControlState,1>,int>(local_a8,(int)local_a0);
      if (local_a8 != (TSharedRef<ISourceControlState,1> *)0x0) {
        FMemory::Free(local_a8);
      }
      DestructItems<FString,int>((FString *)local_e8.Data,(int)local_e0);
      if (local_e8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_98.SharedReferenceCount.ReferenceController);
      return;
    }
    uVar6 = 0;
    if ((int)uVar11 < (int)local_a0) {
      uVar6 = ~uVar11 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) break;
    pTVar2 = local_a8[(int)uVar11].SharedReferenceCount.ReferenceController;
    pIVar3 = local_a8[(int)uVar11].Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    cVar5 = (**(code **)(*(longlong *)pIVar3 + 0x88))(pIVar3);
    if ((cVar5 != '\0') &&
       (cVar5 = (**(code **)(*(longlong *)pIVar3 + 0x118))(pIVar3), cVar5 == '\0')) {
      pFVar9 = (FScriptContainerElement *)(**(code **)(*(longlong *)pIVar3 + 0x68))(pIVar3);
      if ((local_e8.Data <= pFVar9) &&
         ((pFVar9 < local_e8.Data + (longlong)local_e0._4_4_ * 0x10 &&
          (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar4)))) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar7 = (int)local_e0;
      if ((int)local_e0 == local_e0._4_4_) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_e8,(int *)((longlong)&local_e0 + 4));
      }
      local_e0 = CONCAT44(local_e0._4_4_,iVar7 + 1);
      ::FString::FString((FString *)(local_e8.Data + (longlong)iVar7 * 0x10),(FString *)pFVar9);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pFVar8 = (FRevert *)(ulonglong)(uVar11 + 1);
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// RevertUnchangedFiles @ 146b23ec0

bool __cdecl
USourceControlHelpers::RevertUnchangedFiles
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  ISourceControlProvider *pIVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  if (param_1->ArrayNum != 0) {
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    SourceControlHelpersInternal::ConvertFilesToQualifiedPaths(param_1,&local_18,param_2,false);
    pIVar1 = SourceControlHelpersInternal::VerifySourceControl(param_2);
    if (pIVar1 != (ISourceControlProvider *)0x0) {
      RevertUnchangedFiles(pIVar1,&local_18);
    }
    DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
    return pIVar1 != (ISourceControlProvider *)0x0;
  }
  return true;
}

// StaticRegisterNativesUSourceControlHelpers @ 146b27420

void __cdecl USourceControlHelpers::StaticRegisterNativesUSourceControlHelpers(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x19;
  local_18.DataPtr = Z_Construct_UClass_USourceControlHelpers_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SyncFile @ 146b27cf0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __cdecl USourceControlHelpers::SyncFile(FString *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  ISourceControlProvider *pIVar5;
  FSync *pFVar6;
  FSync *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  TRawPtrProxy<FSync> local_res18 [2];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_158;
  ForAnyElementType local_150;
  ulonglong local_148;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_140
  ;
  FString local_130;
  FSync *local_118;
  TReferenceControllerBase<1> *pTStack_110;
  FString local_108;
  FString local_f8;
  FDestructionSentinel local_e8;
  FFormatArgumentValue local_d0;
  FFormatArgumentValue local_b0;
  TSharedRef<FSync,1> local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FTextFormat local_38;
  
  pFVar7 = (FSync *)0x0;
  SourceControlHelpersInternal::ConvertFileToQualifiedPath
            (&local_130,param_1,param_2,true,(wchar_t *)0x0);
  if ((local_130.Data.ArrayNum < 2) ||
     (pIVar5 = SourceControlHelpersInternal::VerifySourceControl(param_2),
     pIVar5 == (ISourceControlProvider *)0x0)) {
    bVar2 = false;
  }
  else {
    local_148 = 0;
    local_158.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    pcVar1 = *(code **)((longlong)*pIVar5 + 0xd0);
    local_150.Data = (FScriptContainerElement *)0x0;
    pFVar6 = ::operator_new(0x70);
    if (pFVar6 != (FSync *)0x0) {
      pFVar6->_padding_ = 0;
      pFVar6->_padding_ = 0;
      *(undefined4 *)&pFVar6->field_0x6b = 0;
      pFVar6->field_0x6f = 0;
      pFVar6->_padding_ = (longlong)&___7FSync__6B_;
      pFVar6->_padding_ = 0;
      pFVar6->_padding_ = 0;
      pFVar6->_padding_ = 0;
      pFVar6->_padding_ = 0;
      pFVar6->_padding_ = 0;
      pFVar6->_padding_ = 0;
      pFVar6->_padding_ = 0;
      pFVar6->_padding_ = 0;
      (pFVar6->Revision).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar6->Revision).Data.ArrayNum = 0;
      (pFVar6->Revision).Data.ArrayMax = 0;
      pFVar6->bHeadRevision = false;
      pFVar6->bLastSynced = false;
      pFVar6->bForce = false;
      pFVar7 = pFVar6;
    }
    local_res18[0].Object = pFVar7;
    TSharedRef<FSync,1>::TSharedRef<FSync,1><FSync>(&local_88,local_res18);
    local_118 = local_88.Object;
    pTStack_110 = local_88.SharedReferenceCount.ReferenceController;
    if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    iVar4 = (*pcVar1)(pIVar5,&local_118,&local_130,0,&local_158);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_110)
    ;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.SharedReferenceCount.ReferenceController);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_158,(FWriteAccessScope *)&local_e8);
    if (((int)local_148 != 0) && (local_150.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_150.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_150,0,0,0x10);
      local_148 = local_148 & 0xffffffff00000000;
    }
    if (local_e8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
    }
    if (local_150.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_158.AccessDetector);
    if (iVar4 == 1) {
      bVar2 = true;
    }
    else {
      local_140.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_140.Pairs.ArrayNum = 0;
      local_140.Pairs.ArrayMax = 0;
      pFVar8 = FText::FromString(&local_78,param_1);
      local_d0.Type = Text;
      FText::FText((FText *)&local_d0.TextValue,pFVar8);
      if ((local_d0.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      ::FString::FString(&local_108,L"InFile");
      TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
      Emplace<FString,FFormatArgumentValue>(&local_140,&local_108,&local_d0);
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
      if (local_d0.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_d0.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      pFVar8 = FText::FromString(&local_68,&local_130);
      local_b0.Type = Text;
      FText::FText((FText *)&local_b0.TextValue,pFVar8);
      if ((local_b0.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      ::FString::FString(&local_f8,L"SCFile");
      TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
      Emplace<FString,FFormatArgumentValue>(&local_140,&local_f8,&local_b0);
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
      if (local_b0.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_b0.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_48,L"SourceControlHelpers",L"SyncFailed",
                          L"Failed to sync file \'{InFile}\' ({SCFile}).");
      pFVar9 = FTextFormat::FTextFormat(&local_38,pFVar8,Default);
      pFVar8 = FText::Format(&local_58,pFVar9,&local_140);
      SourceControlHelpersInternal::LogError(pFVar8,param_2);
      if (local_58.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
      }
      if (local_48.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      }
      bVar2 = false;
      DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                ((TTuple<FString,FFormatArgumentValue> *)local_140.Pairs.AllocatorInstance.Data,
                 local_140.Pairs.ArrayNum);
      if ((TTuple<FString,FFormatArgumentValue> *)local_140.Pairs.AllocatorInstance.Data !=
          (TTuple<FString,FFormatArgumentValue> *)0x0) {
        FMemory::Free(local_140.Pairs.AllocatorInstance.Data);
      }
    }
  }
  if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// SyncFiles @ 146b280d0

bool __cdecl
USourceControlHelpers::SyncFiles(TArray<FString,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  code *pcVar1;
  TReferenceControllerBase<1> *pTVar2;
  bool bVar3;
  int iVar4;
  ISourceControlProvider *pIVar5;
  FSync *pFVar6;
  FSync *pFVar7;
  TRawPtrProxy<FSync> local_res8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_78;
  FSync *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  FSync *local_58;
  TReferenceControllerBase<1> *pTStack_50;
  bool local_48;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_38;
  ForAnyElementType local_30;
  ulonglong local_28;
  
  if (param_1->ArrayNum != 0) {
    pIVar5 = SourceControlHelpersInternal::VerifySourceControl(param_2);
    bVar3 = false;
    if (pIVar5 != (ISourceControlProvider *)0x0) {
      pFVar7 = (FSync *)0x0;
      local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.ArrayNum = 0;
      local_78.ArrayMax = 0;
      bVar3 = SourceControlHelpersInternal::ConvertFilesToQualifiedPaths
                        (param_1,&local_78,param_2,true);
      local_28 = 0;
      local_38.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_30.Data = (FScriptContainerElement *)0x0;
      pcVar1 = *(code **)((longlong)*pIVar5 + 0xe8);
      pFVar6 = ::operator_new(0x70);
      if (pFVar6 != (FSync *)0x0) {
        pFVar6->_padding_ = 0;
        pFVar6->_padding_ = 0;
        *(undefined4 *)&pFVar6->field_0x6b = 0;
        pFVar6->field_0x6f = 0;
        pFVar6->_padding_ = (longlong)&___7FSync__6B_;
        pFVar6->_padding_ = 0;
        pFVar6->_padding_ = 0;
        pFVar6->_padding_ = 0;
        pFVar6->_padding_ = 0;
        pFVar6->_padding_ = 0;
        pFVar6->_padding_ = 0;
        pFVar6->_padding_ = 0;
        pFVar6->_padding_ = 0;
        (pFVar6->Revision).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar6->Revision).Data.ArrayNum = 0;
        (pFVar6->Revision).Data.ArrayMax = 0;
        pFVar6->bHeadRevision = false;
        pFVar6->bLastSynced = false;
        pFVar6->bForce = false;
        pFVar7 = pFVar6;
      }
      local_res8.Object = pFVar7;
      TSharedRef<FSync,1>::TSharedRef<FSync,1><FSync>((TSharedRef<FSync,1> *)&local_58,&local_res8);
      pTVar2 = pTStack_50;
      local_68 = local_58;
      pTStack_60 = pTStack_50;
      if (pTStack_50 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_50->SharedReferenceCount = (atomic<int>)((int)pTStack_50->SharedReferenceCount + 1);
        UNLOCK();
      }
      iVar4 = (*pcVar1)(pIVar5,&local_68,&local_78,0,&local_38);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_60);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_38,(FWriteAccessScope *)&local_58);
      if (((int)local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_30.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
        local_28 = local_28 & 0xffffffff00000000;
      }
      if (local_48 == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)pTStack_50,(FDestructionSentinel *)&local_58);
      }
      if (local_30.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_30.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_38.AccessDetector);
      if ((bVar3) && (iVar4 == 1)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      DestructItems<FString,int>((FString *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
      if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.AllocatorInstance.Data);
      }
    }
    return bVar3;
  }
  return true;
}

// execAsyncQueryFileState @ 146b2a440

void __cdecl
USourceControlHelpers::execAsyncQueryFileState(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  longlong lVar2;
  bool bVar3;
  int local_res10 [2];
  FString local_a8;
  void *local_98;
  undefined8 local_90;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_88;
  FMRSWRecursiveAccessDetector *local_80;
  undefined8 local_78;
  TArray<FString,TSizedDefaultAllocator<32>_> local_70;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_60;
  FMRSWRecursiveAccessDetector *local_58;
  bool local_50;
  undefined7 uStack_4f;
  FDestructionSentinel local_48;
  FReadAccessScope local_30;
  
  local_88.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_80 = (FMRSWRecursiveAccessDetector *)0x0;
  local_78._0_1_ = false;
  local_78._1_7_ = 0;
  FDelegateProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_98 = (void *)0x0;
  local_90 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar3 = local_res10[0] != 0;
  local_60.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_88,(FReadAccessScope *)&local_48);
  local_58 = local_80;
  local_50 = local_78._0_1_;
  uStack_4f = local_78._1_7_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_48);
  _Src = local_98;
  lVar2 = (longlong)(int)local_90;
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Data.ArrayNum = (int)local_90;
  if ((int)local_90 == 0) {
    local_a8.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_90,0,(ForAnyElementType *)&local_a8,(int)local_90,
               &local_a8.Data.ArrayMax);
    memcpy(local_a8.Data.AllocatorInstance.Data,_Src,lVar2 * 2);
  }
  local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_70.AllocatorInstance,1,&local_70.ArrayMax);
  ConstructItems<FString,FString,int>(local_70.AllocatorInstance.Data,&local_a8,1);
  local_48.AccessType = Reader;
  local_48._4_4_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_60,&local_30);
  local_48.Accessor = local_58;
  local_48.bDestroyed = local_50;
  local_48._17_7_ = uStack_4f;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_30);
  AsyncQueryFileStates((FQueryFileStateDelegate *)&local_48,&local_70,bVar3);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_60.AccessDetector);
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_88.AccessDetector);
  return;
}

// execAsyncQueryFileStates @ 146b2a690

void __cdecl
USourceControlHelpers::execAsyncQueryFileStates(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString *pFVar2;
  int iVar3;
  bool bVar4;
  int local_res10 [2];
  FString *local_88;
  undefined8 local_80;
  TArray<FString,TSizedDefaultAllocator<32>_> local_78;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  undefined8 local_60;
  undefined8 local_58;
  FQueryFileStateDelegate local_50;
  FReadAccessScope local_38;
  
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60 = 0;
  local_58 = 0;
  FDelegateProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_88 = (FString *)0x0;
  local_80 = 0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pFVar2 = local_88;
  bVar4 = local_res10[0] != 0;
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar3 = (int)local_80;
  local_78.ArrayNum = (int)local_80;
  if ((int)local_80 == 0) {
    local_78.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,(int)local_80,0,&local_78.AllocatorInstance,(int)local_80,&local_78.ArrayMax);
    ConstructItems<FString,FString,int>(local_78.AllocatorInstance.Data,pFVar2,iVar3);
  }
  local_50._0_8_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_68,&local_38);
  local_50._8_8_ = local_60;
  local_50._16_8_ = local_58;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  AsyncQueryFileStates(&local_50,&local_78,bVar4);
  DestructItems<FString,int>(local_88,(int)local_80);
  if (local_88 != (FString *)0x0) {
    FMemory::Free(local_88);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return;
}

// execCheckInFile @ 146b2a860

void __cdecl USourceControlHelpers::execCheckInFile(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  ISourceControlProvider IVar3;
  code *pcVar4;
  FCheckIn *pFVar5;
  bool bVar6;
  int iVar7;
  FText *pFVar8;
  FString *pFVar9;
  UPackage *pUVar10;
  ISourceControlProvider *pIVar11;
  int iVar12;
  ForAnyElementType FVar13;
  longlong lVar14;
  bool bVar15;
  bool bVar16;
  int local_res10 [2];
  int local_res18 [2];
  FString local_198;
  FString local_188;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_178;
  ForAnyElementType local_170;
  ulonglong local_168;
  FString local_160;
  FScriptContainerElement *local_148;
  int iStack_140;
  undefined4 uStack_13c;
  FString local_138;
  TSharedRef<FCheckIn,1> local_128;
  FCheckIn *local_118;
  TReferenceControllerBase<1> *pTStack_110;
  FDestructionSentinel local_108;
  FText local_f0;
  FString local_e0;
  TStringView<wchar_t> local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FText local_38;
  
  local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.Data.ArrayNum = 0;
  local_188.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_188,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_188);
  }
  local_160.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_160.Data.ArrayNum = 0;
  local_160.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_160,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_160);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar15 = local_res10[0] != 0;
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  FVar13.Data = local_188.Data.AllocatorInstance.Data;
  bVar16 = local_res18[0] != 0;
  lVar14 = (longlong)local_188.Data.ArrayNum;
  local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_198.Data.ArrayNum = 0;
  local_198.Data.ArrayMax = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_188.Data.ArrayNum < 2) {
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_f0,L"SourceControlHelpers",L"UnspecifiedFile",L"File not specified");
    SourceControlHelpersInternal::LogError(pFVar8,bVar15);
    if (local_f0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_f0.TextData.Reference + 0x10))();
    }
  }
  else {
    local_198.Data._8_8_ = local_188.Data._8_8_ & 0xffffffff;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_188.Data.ArrayNum,0,(ForAnyElementType *)&local_198,local_188.Data.ArrayNum
               ,&local_198.Data.ArrayMax);
    memcpy(local_198.Data.AllocatorInstance.Data,FVar13.Data,lVar14 * 2);
    iVar7 = local_198.Data.ArrayNum + -2;
    if (local_198.Data.ArrayNum == 0) {
      iVar7 = -1;
    }
    if (iVar7 < 0) {
code_r0x000146b2aa86:
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x107,
                         L"String index out of bounds: Index %i from a string with a length of %i");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else {
      iVar12 = local_198.Data.ArrayNum + -1;
      if (local_198.Data.ArrayNum == 0) {
        iVar12 = 0;
      }
      if (iVar12 <= iVar7) goto code_r0x000146b2aa86;
    }
    iVar12 = local_198.Data.ArrayNum;
    if (*(short *)(local_198.Data.AllocatorInstance.Data + (longlong)iVar7 * 2) == 0x27) {
      pFVar9 = FPackageName::ExportTextPathToObjectPath(&local_e0,&local_198);
      if (&local_198 != pFVar9) {
        if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.Data.AllocatorInstance.Data);
        }
        local_198.Data.AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
        (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_198.Data.ArrayNum = (pFVar9->Data).ArrayNum;
        local_198.Data.ArrayMax = (pFVar9->Data).ArrayMax;
        (pFVar9->Data).ArrayNum = 0;
        (pFVar9->Data).ArrayMax = 0;
      }
      if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.Data.AllocatorInstance.Data);
      }
      iVar12 = local_198.Data.ArrayNum;
    }
    iVar7 = iVar12 + -1;
    if (iVar12 == 0) {
      iVar7 = 0;
    }
    if (iVar7 < 1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x107,
                         L"String index out of bounds: Index %i from a string with a length of %i");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar12 = local_198.Data.ArrayNum;
    }
    if (*(short *)local_198.Data.AllocatorInstance.Data == 0x2f) {
      local_148 = local_198.Data.AllocatorInstance.Data;
      iStack_140 = iVar12 + -1;
      if (iVar12 == 0) {
        iStack_140 = 0;
      }
      local_c8._12_4_ = uStack_13c;
      local_c8.Size = iStack_140;
      local_c8.DataPtr = (wchar_t *)local_198.Data.AllocatorInstance.Data;
      bVar6 = FPackageName::IsValidLongPackageName(&local_c8,false,(EErrorCode *)0x0);
      if (!bVar6) goto LAB_146b2ac80;
      bVar6 = FPackageName::DoesPackageExist(&local_198,&local_198,true);
      if (!bVar6) {
        ::FString::FString(&local_138,L"");
        bVar6 = FPackageName::TryConvertLongPackageNameToFilename(&local_198,&local_198,&local_138);
        if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.Data.AllocatorInstance.Data);
        }
        if (!bVar6) goto LAB_146b2ac80;
        FVar13.Data = (FScriptContainerElement *)L"";
        if (local_198.Data.ArrayNum != 0) {
          FVar13.Data = local_198.Data.AllocatorInstance.Data;
        }
        pUVar10 = FindPackage((UObject *)0x0,(wchar_t *)FVar13.Data);
        if ((pUVar10 == (UPackage *)0x0) || (((uint)pUVar10->PackageFlagsPrivate >> 0x11 & 1) == 0))
        {
          pFVar9 = FPackageName::GetAssetPackageExtension();
        }
        else {
          pFVar9 = FPackageName::GetMapPackageExtension();
        }
        iVar7 = (pFVar9->Data).ArrayNum;
        iVar12 = iVar7 + -1;
        if (iVar7 == 0) {
          iVar12 = 0;
        }
        ::FString::AppendChars(&local_198,(wchar_t *)(pFVar9->Data).AllocatorInstance.Data,iVar12);
      }
      pFVar9 = FPaths::ConvertRelativePathToFull(&local_b8,&local_198);
      local_48.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
      if (&local_198 != pFVar9) {
        if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.Data.AllocatorInstance.Data);
        }
        local_198.Data.AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
        (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_198.Data.ArrayNum = (pFVar9->Data).ArrayNum;
        local_198.Data.ArrayMax = (pFVar9->Data).ArrayMax;
        (pFVar9->Data).ArrayNum = 0;
        (pFVar9->Data).ArrayMax = 0;
        local_48.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
      }
LAB_146b2ae1f:
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    else {
LAB_146b2ac80:
      bVar6 = FPaths::IsRelative(&local_198);
      if (bVar6) {
        pFVar9 = FPaths::ConvertRelativePathToFull(&local_a8,&local_188);
        if (&local_198 != pFVar9) {
          if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_198.Data.AllocatorInstance.Data);
          }
          local_198.Data.AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
          (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_198.Data.ArrayNum = (pFVar9->Data).ArrayNum;
          local_198.Data.ArrayMax = (pFVar9->Data).ArrayMax;
          (pFVar9->Data).ArrayNum = 0;
          (pFVar9->Data).ArrayMax = 0;
        }
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
        bVar6 = FPaths::FileExists(&local_198);
        if (!bVar6) {
          pFVar9 = FPaths::ProjectDir(&local_78);
          pFVar9 = FPaths::ConvertRelativePathToFull(&local_88,pFVar9);
          pFVar9 = FPaths::ConvertRelativePathToFull(&local_98,pFVar9,&local_188);
          if (&local_198 != pFVar9) {
            if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_198.Data.AllocatorInstance.Data);
            }
            local_198.Data.AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
            (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_198.Data.ArrayNum = (pFVar9->Data).ArrayNum;
            local_198.Data.ArrayMax = (pFVar9->Data).ArrayMax;
            (pFVar9->Data).ArrayNum = 0;
            (pFVar9->Data).ArrayMax = 0;
          }
          if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Data.AllocatorInstance.Data);
          }
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          bVar6 = FPaths::FileExists(&local_198);
          if (!bVar6) {
            pFVar9 = FPaths::EngineDir(&local_48);
            pFVar9 = FPaths::ConvertRelativePathToFull(&local_58,pFVar9);
            pFVar9 = FPaths::ConvertRelativePathToFull(&local_68,pFVar9,&local_188);
            if (&local_198 != pFVar9) {
              if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_198.Data.AllocatorInstance.Data);
              }
              local_198.Data.AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
              (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_198.Data.ArrayNum = (pFVar9->Data).ArrayNum;
              local_198.Data.ArrayMax = (pFVar9->Data).ArrayMax;
              (pFVar9->Data).ArrayNum = 0;
              (pFVar9->Data).ArrayMax = 0;
            }
            if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_68.Data.AllocatorInstance.Data);
            }
            if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Data.AllocatorInstance.Data);
            }
            goto LAB_146b2ae1f;
          }
        }
      }
    }
  }
  if (local_198.Data.ArrayNum < 2) {
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
  }
  else {
    pIVar11 = SourceControlHelpersInternal::VerifySourceControl(bVar15);
    if (pIVar11 != (ISourceControlProvider *)0x0) {
      ISourceControlOperation::Create<FCheckIn>(&local_128);
      pFVar8 = FText::FromString(&local_38,&local_160);
      pFVar5 = local_128.Object;
      FCheckIn::SetDescription(local_128.Object,pFVar8);
      if (local_38.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
      }
      pFVar5->bKeepCheckedOut = bVar16;
      IVar3 = *pIVar11;
      local_118 = local_128.Object;
      pTStack_110 = local_128.SharedReferenceCount.ReferenceController;
      local_168 = 0;
      local_178.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_170.Data = (FScriptContainerElement *)0x0;
      if (local_128.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      iVar7 = (**(code **)((longlong)IVar3 + 0xd0))(pIVar11,&local_118,&local_198,0,&local_178);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_110);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_178,(FWriteAccessScope *)&local_108);
      if (((int)local_168 != 0) && (local_170.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_170.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_170,0,0,0x10);
        local_168 = local_168 & 0xffffffff00000000;
      }
      if (local_108.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_108.Accessor,&local_108);
      }
      if (local_170.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_170.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_178.AccessDetector);
      bVar15 = iVar7 == 1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_128.SharedReferenceCount.ReferenceController);
      if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.Data.AllocatorInstance.Data);
      }
      goto LAB_146b2af93;
    }
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
      bVar15 = false;
      goto LAB_146b2af93;
    }
  }
  bVar15 = false;
LAB_146b2af93:
  *(bool *)param_3 = bVar15;
  if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.Data.AllocatorInstance.Data);
  }
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  return;
}

// execCheckInFiles @ 146b2afe0

void __cdecl USourceControlHelpers::execCheckInFiles(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  ISourceControlProvider IVar3;
  FSharedReferencer<1> FVar4;
  int iVar5;
  ISourceControlProvider *pIVar6;
  FText *pFVar7;
  undefined1 uVar8;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar9;
  bool bVar10;
  bool bVar11;
  int local_res10 [2];
  int local_res18 [4];
  TArray<FString,TSizedDefaultAllocator<32>_> local_a8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_98;
  FString local_88;
  TSharedRef<FCheckIn,1> local_78;
  undefined1 local_68 [8];
  ForAnyElementType local_60;
  ulonglong local_58;
  FDestructionSentinel local_50;
  
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  pTVar9 = &local_a8;
  if ((TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar9 = (TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar10 = local_res10[0] != 0;
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  bVar11 = local_res18[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTVar9->ArrayNum == 0) {
    uVar8 = 1;
  }
  else {
    pIVar6 = SourceControlHelpersInternal::VerifySourceControl(bVar10);
    uVar8 = 0;
    if (pIVar6 != (ISourceControlProvider *)0x0) {
      local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.ArrayNum = 0;
      local_98.ArrayMax = 0;
      bVar10 = SourceControlHelpersInternal::ConvertFilesToQualifiedPaths
                         (pTVar9,&local_98,bVar10,false);
      ISourceControlOperation::Create<FCheckIn>(&local_78);
      pFVar7 = FText::FromString((FText *)local_68,&local_88);
      FCheckIn::SetDescription(local_78.Object,pFVar7);
      if ((atomic<unsigned___int64>)local_68 != (atomic<unsigned___int64>)0x0) {
        (**(code **)((longlong)*(ITextData *)local_68 + 0x10))();
      }
      FVar4.ReferenceController = local_78.SharedReferenceCount.ReferenceController;
      (local_78.Object)->bKeepCheckedOut = bVar11;
      IVar3 = *pIVar6;
      local_58 = 0;
      local_68 = (undefined1  [8])0x0;
      local_60.Data = (FScriptContainerElement *)0x0;
      if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      iVar5 = (**(code **)((longlong)IVar3 + 0xe8))(pIVar6,&local_78,&local_98,0,local_68);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.SharedReferenceCount.ReferenceController);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
                 (FWriteAccessScope *)&local_50);
      if (((int)local_58 != 0) && (local_60.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_60.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_60,0,0,0x10);
        local_58 = local_58 & 0xffffffff00000000;
      }
      if (local_50.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
      }
      if (local_60.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_68);
      if ((!bVar10) || (uVar8 = 1, iVar5 != 1)) {
        uVar8 = 0;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar4.ReferenceController);
      DestructItems<FString,int>((FString *)local_98.AllocatorInstance.Data,local_98.ArrayNum);
      if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.AllocatorInstance.Data);
      }
    }
  }
  *(undefined1 *)param_3 = uVar8;
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_a8.AllocatorInstance.Data,local_a8.ArrayNum);
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  return;
}

// execCheckOutFile @ 146b2b2d0

void __cdecl USourceControlHelpers::execCheckOutFile(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res10 [2];
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = CheckOutFile(&local_18,local_res10[0] != 0);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execCheckOutFiles @ 146b2b3c0

void __cdecl
USourceControlHelpers::execCheckOutFiles(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar3;
  int local_res10 [2];
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res10[0] = 0;
  pTVar3 = &local_18;
  if ((TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = CheckOutFiles(pTVar3,local_res10[0] != 0);
  *(bool *)param_3 = bVar2;
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execCheckOutOrAddFile @ 146b2b4d0

void __cdecl
USourceControlHelpers::execCheckOutOrAddFile(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res10 [2];
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = CheckOutOrAddFile(&local_18,local_res10[0] != 0);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execCheckOutOrAddFiles @ 146b2b5c0

void __cdecl
USourceControlHelpers::execCheckOutOrAddFiles(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar3;
  int local_res10 [2];
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res10[0] = 0;
  pTVar3 = &local_18;
  if ((TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = CheckOutOrAddFiles(pTVar3,local_res10[0] != 0);
  *(bool *)param_3 = bVar2;
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execCopyFile @ 146b2b6d0

void __cdecl USourceControlHelpers::execCopyFile(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res10 [2];
  FString local_28;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = CopyFile(&local_18,&local_28,local_res10[0] != 0);
  *(bool *)param_3 = bVar2;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execCurrentProvider @ 146b2b810

void __cdecl
USourceControlHelpers::execCurrentProvider(UObject *param_1,FFrame *param_2,void *param_3)

{
  ISourceControlModule *pIVar1;
  longlong *plVar2;
  FName *this;
  FString local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar1 = ISourceControlModule::Get();
  plVar2 = (longlong *)(**(code **)((longlong)*pIVar1 + 0x78))(pIVar1);
  this = (FName *)(**(code **)(*plVar2 + 0x20))(plVar2);
  ::FName::ToString(this,&local_18);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execIsAvailable @ 146b2b8c0

void __cdecl USourceControlHelpers::execIsAvailable(UObject *param_1,FFrame *param_2,void *param_3)

{
  char cVar1;
  ISourceControlModule *pIVar2;
  longlong *plVar3;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar2 = ISourceControlModule::Get();
  cVar1 = (**(code **)((longlong)*pIVar2 + 0x70))(pIVar2);
  if (cVar1 != '\0') {
    plVar3 = (longlong *)(**(code **)((longlong)*pIVar2 + 0x78))(pIVar2);
    cVar1 = (**(code **)(*plVar3 + 0x40))(plVar3);
    if (cVar1 != '\0') {
      *(undefined1 *)param_3 = 1;
      return;
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execIsEnabled @ 146b2b940

void __cdecl USourceControlHelpers::execIsEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  ISourceControlModule *pIVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar2 = ISourceControlModule::Get();
  uVar1 = (**(code **)((longlong)*pIVar2 + 0x70))(pIVar2);
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execLastErrorMsg @ 146b2b980

void __cdecl USourceControlHelpers::execLastErrorMsg(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 local_res10 [24];
  FText local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_18.TextData.Reference = SourceControlHelpersInternal::LastErrorText.TextData.Reference;
  if (SourceControlHelpersInternal::LastErrorText.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*SourceControlHelpersInternal::LastErrorText.TextData.Reference + 8))
              (SourceControlHelpersInternal::LastErrorText.TextData.Reference,local_res10);
  }
  local_18.Flags = SourceControlHelpersInternal::LastErrorText.Flags;
  FText::operator=(param_3,&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// execMarkFileForAdd @ 146b2b9f0

void __cdecl
USourceControlHelpers::execMarkFileForAdd(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res10 [2];
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = MarkFileForAdd(&local_18,local_res10[0] != 0);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execMarkFileForDelete @ 146b2bae0

void __cdecl
USourceControlHelpers::execMarkFileForDelete(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res10 [2];
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = MarkFileForDelete(&local_18,local_res10[0] != 0);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execMarkFilesForAdd @ 146b2bbd0

void __cdecl
USourceControlHelpers::execMarkFilesForAdd(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar3;
  int local_res10 [2];
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res10[0] = 0;
  pTVar3 = &local_18;
  if ((TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = MarkFilesForAdd(pTVar3,local_res10[0] != 0);
  *(bool *)param_3 = bVar2;
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execMarkFilesForDelete @ 146b2bce0

void __cdecl
USourceControlHelpers::execMarkFilesForDelete(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar3;
  int local_res10 [2];
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res10[0] = 0;
  pTVar3 = &local_18;
  if ((TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = MarkFilesForDelete(pTVar3,local_res10[0] != 0);
  *(bool *)param_3 = bVar2;
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execQueryFileState @ 146b2bdf0

void __cdecl
USourceControlHelpers::execQueryFileState(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FSourceControlState *pFVar2;
  int local_res10 [2];
  FString local_68;
  FSourceControlState local_58;
  
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = QueryFileState(&local_58,&local_68,local_res10[0] != 0);
  FSourceControlState::operator=(param_3,pFVar2);
  if (local_58.PreviousUser.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.PreviousUser.Data.AllocatorInstance.Data);
  }
  if (local_58.CheckedOutOther.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.CheckedOutOther.Data.AllocatorInstance.Data);
  }
  if (local_58.Filename.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Filename.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

// execQueryFileStates @ 146b2bf30

void __cdecl
USourceControlHelpers::execQueryFileStates(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  int iVar3;
  FString *pFVar4;
  bool bVar5;
  bool bVar6;
  int local_res10 [2];
  FSourceControlState *local_98;
  undefined8 local_90;
  ForAnyElementType local_88;
  int local_80;
  int local_7c;
  FString *local_78;
  undefined8 local_70;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TArrayView<FString_const_,int> local_58;
  code *local_48 [2];
  undefined **local_38;
  FSourceControlState **local_30;
  undefined8 local_20;
  
  local_78 = (FString *)0x0;
  local_70 = 0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pFVar4 = local_78;
  bVar6 = local_res10[0] != 0;
  local_88.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar3 = (int)local_70;
  local_80 = (int)local_70;
  if ((int)local_70 == 0) {
    local_7c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,(int)local_70,0,&local_88,(int)local_70,&local_7c);
    ConstructItems<FString,FString,int>(local_88.Data,pFVar4,iVar3);
  }
  iVar3 = local_80;
  local_98 = (FSourceControlState *)0x0;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USourceControlHelpers::QueryFileStates'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_30 = &local_98;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USourceControlHelpers::QueryFileStates'::__l2::<lambda_1>,void,FSourceControlState>
                ::Call;
  local_90 = 0;
  local_20 = 0;
  local_68 = local_88.Data;
  if (local_80 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_58._12_4_ = uStack_5c;
  local_58.ArrayNum = iVar3;
  local_58.DataPtr = (FString *)local_68;
  iStack_60 = iVar3;
  SourceControlHelpersInternal::RunQueryFileStates
            (&local_58,Synchronous,bVar6,(TFunction<void___cdecl(FSourceControlState)> *)local_48);
  DestructItems<FString,int>((FString *)local_88.Data,local_80);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  if (param_3 == &local_98) {
  }
  else {
    DestructItems<FSourceControlState,int>
              (*(FSourceControlState **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FSourceControlState **)param_3 = local_98;
    *(int *)((longlong)param_3 + 8) = (int)local_90;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_90._4_4_;
    local_90 = 0;
    local_98 = (FSourceControlState *)0x0;
    local_90._0_4_ = 0;
  }
  DestructItems<FSourceControlState,int>(local_98,(int)local_90);
  if (local_98 != (FSourceControlState *)0x0) {
    FMemory::Free(local_98);
  }
  DestructItems<FString,int>(local_78,(int)local_70);
  if (local_78 != (FString *)0x0) {
    FMemory::Free(local_78);
  }
  return;
}

// execRevertFile @ 146b2c180

void __cdecl USourceControlHelpers::execRevertFile(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res10 [2];
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = RevertFile(&local_18,local_res10[0] != 0);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execRevertFiles @ 146b2c270

void __cdecl USourceControlHelpers::execRevertFiles(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar3;
  int local_res10 [2];
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res10[0] = 0;
  pTVar3 = &local_18;
  if ((TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = RevertFiles(pTVar3,local_res10[0] != 0);
  *(bool *)param_3 = bVar2;
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execRevertUnchangedFile @ 146b2c380

void __cdecl
USourceControlHelpers::execRevertUnchangedFile(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FText *pFVar6;
  FString *pFVar7;
  UPackage *pUVar8;
  ISourceControlProvider *pIVar9;
  int iVar10;
  int iVar11;
  ForAnyElementType FVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  bool bVar15;
  int local_res10 [2];
  FString local_128;
  TArray<FString,TSizedDefaultAllocator<32>_> local_118;
  FString local_108;
  FScriptContainerElement *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  FString local_e8;
  FText local_d8;
  FString local_c8;
  TStringView<wchar_t> local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.Data.ArrayNum = 0;
  local_108.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FVar12.Data = local_108.Data.AllocatorInstance.Data;
  bVar15 = local_res10[0] != 0;
  lVar13 = (longlong)local_108.Data.ArrayNum;
  local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.Data.ArrayNum = 0;
  local_128.Data.ArrayMax = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_108.Data.ArrayNum < 2) {
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_d8,L"SourceControlHelpers",L"UnspecifiedFile",L"File not specified");
    SourceControlHelpersInternal::LogError(pFVar6,bVar15);
    if (local_d8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
    }
  }
  else {
    local_128.Data._8_8_ = local_108.Data._8_8_ & 0xffffffff;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_108.Data.ArrayNum,0,(ForAnyElementType *)&local_128,local_108.Data.ArrayNum
               ,&local_128.Data.ArrayMax);
    memcpy(local_128.Data.AllocatorInstance.Data,FVar12.Data,lVar13 * 2);
    iVar5 = local_128.Data.ArrayNum + -2;
    if (local_128.Data.ArrayNum == 0) {
      iVar5 = -1;
    }
    iVar10 = 0;
    if (iVar5 < 0) {
code_r0x000146b2c522:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x107,
                         L"String index out of bounds: Index %i from a string with a length of %i");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      iVar11 = local_128.Data.ArrayNum + -1;
      if (local_128.Data.ArrayNum == 0) {
        iVar11 = 0;
      }
      if (iVar11 <= iVar5) goto code_r0x000146b2c522;
    }
    iVar11 = local_128.Data.ArrayNum;
    if (*(short *)(local_128.Data.AllocatorInstance.Data + (longlong)iVar5 * 2) == 0x27) {
      pFVar7 = FPackageName::ExportTextPathToObjectPath(&local_c8,&local_128);
      if (&local_128 != pFVar7) {
        if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.Data.AllocatorInstance.Data);
        }
        local_128.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
        (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_128.Data.ArrayNum = (pFVar7->Data).ArrayNum;
        local_128.Data.ArrayMax = (pFVar7->Data).ArrayMax;
        (pFVar7->Data).ArrayNum = 0;
        (pFVar7->Data).ArrayMax = 0;
      }
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      iVar11 = local_128.Data.ArrayNum;
    }
    iVar5 = iVar11 + -1;
    if (iVar11 == 0) {
      iVar5 = iVar10;
    }
    if (iVar5 < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x107,
                         L"String index out of bounds: Index %i from a string with a length of %i");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar11 = local_128.Data.ArrayNum;
    }
    if (*(short *)local_128.Data.AllocatorInstance.Data == 0x2f) {
      local_f8 = local_128.Data.AllocatorInstance.Data;
      iStack_f0 = iVar11 + -1;
      if (iVar11 == 0) {
        iStack_f0 = iVar10;
      }
      local_b8._12_4_ = uStack_ec;
      local_b8.Size = iStack_f0;
      local_b8.DataPtr = (wchar_t *)local_128.Data.AllocatorInstance.Data;
      bVar3 = FPackageName::IsValidLongPackageName(&local_b8,false,(EErrorCode *)0x0);
      if (!bVar3) goto LAB_146b2c71f;
      bVar3 = FPackageName::DoesPackageExist(&local_128,&local_128,true);
      if (!bVar3) {
        ::FString::FString(&local_e8,L"");
        bVar3 = FPackageName::TryConvertLongPackageNameToFilename(&local_128,&local_128,&local_e8);
        if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
        }
        if (!bVar3) goto LAB_146b2c71f;
        FVar12.Data = (FScriptContainerElement *)L"";
        if (local_128.Data.ArrayNum != 0) {
          FVar12.Data = local_128.Data.AllocatorInstance.Data;
        }
        pUVar8 = FindPackage((UObject *)0x0,(wchar_t *)FVar12.Data);
        if ((pUVar8 == (UPackage *)0x0) || (((uint)pUVar8->PackageFlagsPrivate >> 0x11 & 1) == 0)) {
          pFVar7 = FPackageName::GetAssetPackageExtension();
        }
        else {
          pFVar7 = FPackageName::GetMapPackageExtension();
        }
        iVar5 = (pFVar7->Data).ArrayNum;
        iVar11 = iVar5 + -1;
        if (iVar5 == 0) {
          iVar11 = iVar10;
        }
        ::FString::AppendChars(&local_128,(wchar_t *)(pFVar7->Data).AllocatorInstance.Data,iVar11);
      }
      pFVar7 = FPaths::ConvertRelativePathToFull(&local_a8,&local_128);
      local_38.Data.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
      if (&local_128 != pFVar7) {
        if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.Data.AllocatorInstance.Data);
        }
        local_128.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
        (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_128.Data.ArrayNum = (pFVar7->Data).ArrayNum;
        local_128.Data.ArrayMax = (pFVar7->Data).ArrayMax;
        (pFVar7->Data).ArrayNum = 0;
        (pFVar7->Data).ArrayMax = 0;
        local_38.Data.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
      }
LAB_146b2c8b2:
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    else {
LAB_146b2c71f:
      bVar3 = FPaths::IsRelative(&local_128);
      if (bVar3) {
        pFVar7 = FPaths::ConvertRelativePathToFull(&local_98,&local_108);
        if (&local_128 != pFVar7) {
          if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_128.Data.AllocatorInstance.Data);
          }
          local_128.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
          (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_128.Data.ArrayNum = (pFVar7->Data).ArrayNum;
          local_128.Data.ArrayMax = (pFVar7->Data).ArrayMax;
          (pFVar7->Data).ArrayNum = 0;
          (pFVar7->Data).ArrayMax = 0;
        }
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        bVar3 = FPaths::FileExists(&local_128);
        if (!bVar3) {
          pFVar7 = FPaths::ProjectDir(&local_68);
          pFVar7 = FPaths::ConvertRelativePathToFull(&local_78,pFVar7);
          pFVar7 = FPaths::ConvertRelativePathToFull(&local_88,pFVar7,&local_108);
          if (&local_128 != pFVar7) {
            if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_128.Data.AllocatorInstance.Data);
            }
            local_128.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
            (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_128.Data.ArrayNum = (pFVar7->Data).ArrayNum;
            local_128.Data.ArrayMax = (pFVar7->Data).ArrayMax;
            (pFVar7->Data).ArrayNum = 0;
            (pFVar7->Data).ArrayMax = 0;
          }
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          bVar3 = FPaths::FileExists(&local_128);
          if (!bVar3) {
            pFVar7 = FPaths::EngineDir(&local_38);
            pFVar7 = FPaths::ConvertRelativePathToFull(&local_48,pFVar7);
            pFVar7 = FPaths::ConvertRelativePathToFull(&local_58,pFVar7,&local_108);
            if (&local_128 != pFVar7) {
              if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_128.Data.AllocatorInstance.Data);
              }
              local_128.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
              (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_128.Data.ArrayNum = (pFVar7->Data).ArrayNum;
              local_128.Data.ArrayMax = (pFVar7->Data).ArrayMax;
              (pFVar7->Data).ArrayNum = 0;
              (pFVar7->Data).ArrayMax = 0;
            }
            if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Data.AllocatorInstance.Data);
            }
            if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_48.Data.AllocatorInstance.Data);
            }
            goto LAB_146b2c8b2;
          }
        }
      }
    }
  }
  if (local_128.Data.ArrayNum < 2) {
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  else {
    pIVar9 = SourceControlHelpersInternal::VerifySourceControl(bVar15);
    if (pIVar9 != (ISourceControlProvider *)0x0) {
      local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.ArrayNum = 0;
      local_118.ArrayMax = 0;
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_118.AllocatorInstance,&local_118.ArrayMax);
      FVar12.Data = local_128.Data.AllocatorInstance.Data;
      pFVar14 = local_118.AllocatorInstance.Data + (longlong)iVar5 * 0x10;
      local_118.ArrayNum = iVar5 + 1;
      *(FScriptContainerElement **)pFVar14 = (FScriptContainerElement *)0x0;
      lVar13 = (longlong)local_128.Data.ArrayNum;
      *(int *)(pFVar14 + 8) = local_128.Data.ArrayNum;
      if (local_128.Data.ArrayNum == 0) {
        *(int *)(pFVar14 + 0xc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_128.Data.ArrayNum,0,(ForAnyElementType *)pFVar14,
                   local_128.Data.ArrayNum,(int *)(pFVar14 + 0xc));
                    /* WARNING: Load size is inaccurate */
        memcpy(*pFVar14,FVar12.Data,lVar13 * 2);
      }
      RevertUnchangedFiles(pIVar9,&local_118);
      DestructItems<FString,int>((FString *)local_118.AllocatorInstance.Data,local_118.ArrayNum);
      if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.AllocatorInstance.Data);
      }
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      uVar4 = 1;
      goto LAB_146b2c9ca;
    }
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
      uVar4 = 0;
      goto LAB_146b2c9ca;
    }
  }
  uVar4 = 0;
LAB_146b2c9ca:
  *(undefined1 *)param_3 = uVar4;
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  return;
}

// execRevertUnchangedFiles @ 146b2ca20

void __cdecl
USourceControlHelpers::execRevertUnchangedFiles(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  ISourceControlProvider *pIVar3;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar4;
  bool bVar5;
  int local_res10 [2];
  TArray<FString,TSizedDefaultAllocator<32>_> local_38;
  TArray<FString,TSizedDefaultAllocator<32>_> local_28;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res10[0] = 0;
  pTVar4 = &local_28;
  if ((TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar4 = (TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar5 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTVar4->ArrayNum != 0) {
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ArrayNum = 0;
    local_38.ArrayMax = 0;
    SourceControlHelpersInternal::ConvertFilesToQualifiedPaths(pTVar4,&local_38,bVar5,false);
    pIVar3 = SourceControlHelpersInternal::VerifySourceControl(bVar5);
    if (pIVar3 == (ISourceControlProvider *)0x0) {
      DestructItems<FString,int>((FString *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
      if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
      uVar2 = 0;
      goto LAB_146b2cb63;
    }
    RevertUnchangedFiles(pIVar3,&local_38);
    DestructItems<FString,int>((FString *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
  }
  uVar2 = 1;
LAB_146b2cb63:
  *(undefined1 *)param_3 = uVar2;
  DestructItems<FString,int>((FString *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// execSyncFile @ 146b2cba0

void __cdecl USourceControlHelpers::execSyncFile(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res10 [2];
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = SyncFile(&local_18,local_res10[0] != 0);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execSyncFiles @ 146b2cc90

void __cdecl USourceControlHelpers::execSyncFiles(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar3;
  int local_res10 [2];
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res10[0] = 0;
  pTVar3 = &local_18;
  if ((TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = SyncFiles(pTVar3,local_res10[0] != 0);
  *(bool *)param_3 = bVar2;
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

