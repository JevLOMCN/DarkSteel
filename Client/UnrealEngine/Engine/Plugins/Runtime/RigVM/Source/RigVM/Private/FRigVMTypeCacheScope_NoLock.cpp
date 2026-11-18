// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 8

// FRigVMTypeCacheScope_NoLock @ 14a0c1f20

FRigVMTypeCacheScope_NoLock * __thiscall
FRigVMTypeCacheScope_NoLock::FRigVMTypeCacheScope_NoLock
          (FRigVMTypeCacheScope_NoLock *this,FRigVMRegistryHandle *param_1,
          FRigVMTemplateArgument *param_2)

{
  longlong lVar1;
  
  this->Registry = param_1->Registry;
  this->Argument = param_2;
  lVar1 = *(longlong *)&param_2->FilterType;
  (this->NumTypes).bIsSet = false;
  (this->Types).field0_0x0.TypedValue.ArrayMax = -1;
  this->bShouldCopyTypes = lVar1 != 0;
  (this->Types).field0_0x0.TypedValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Types).field0_0x0.TypedValue.ArrayNum = 0;
  return this;
}

// FRigVMTypeCacheScope_NoLock @ 14a0c1f60

FRigVMTypeCacheScope_NoLock * __thiscall
FRigVMTypeCacheScope_NoLock::FRigVMTypeCacheScope_NoLock(FRigVMTypeCacheScope_NoLock *this)

{
  (this->Types).field0_0x0.TypedValue.ArrayMax = -1;
  this->Registry = (FRigVMRegistry_NoLock *)0x0;
  this->Argument = (FRigVMTemplateArgument *)0x0;
  this->bShouldCopyTypes = false;
  (this->NumTypes).bIsSet = false;
  (this->Types).field0_0x0.TypedValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Types).field0_0x0.TypedValue.ArrayNum = 0;
  return this;
}

// ~FRigVMTypeCacheScope_NoLock @ 14a0c33e0

void __thiscall
FRigVMTypeCacheScope_NoLock::~FRigVMTypeCacheScope_NoLock(FRigVMTypeCacheScope_NoLock *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  if (((this->Types).field0_0x0.TypedValue.ArrayMax != -1) &&
     (pFVar1 = (this->Types).field0_0x0.TypedValue.AllocatorInstance.Data,
     pFVar1 != (FScriptContainerElement *)0x0)) {
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      if (FLowLevelMemTracker::EnabledState != Disabled) {
        this_00 = FLowLevelMemTracker::TrackerInstance;
        if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
          this_00 = FLowLevelMemTracker::Construct();
        }
        FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
      }
      if (UE::Private::GMalloc == (FMalloc *)0x0) {
        FMemory::GCreateMalloc();
      }
      else {
        DoGamethreadHook(2);
      }
      (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
    }
    return;
  }
  return;
}

// operator() @ 14a0c8ed0

bool __thiscall
`FRigVMTypeCacheScope_NoLock::UpdateTypesIfRequired'::__l2::<lambda_1>::operator()
          (void *this,TRigVMTypeIndex *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  
  pFVar2 = *(ForAnyElementType **)this;
  if (((TRigVMTypeIndex *)pFVar2->Data <= param_1) &&
     (param_1 < (TRigVMTypeIndex *)pFVar2->Data + *(int *)((longlong)&pFVar2[1].Data + 4))) {
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
  iVar7 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar7 + 1;
  pFVar3 = pFVar2->Data;
  *(FName *)(pFVar3 + (longlong)iVar7 * 0xc) = param_1->Name;
  *(int *)(pFVar3 + (longlong)iVar7 * 0xc + 8) = param_1->Index;
  return true;
}

// GetNumTypes_NoLock @ 14a0e88d0

int __thiscall FRigVMTypeCacheScope_NoLock::GetNumTypes_NoLock(FRigVMTypeCacheScope_NoLock *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 local_18;
  int local_14 [3];
  
  if (this->Registry == (FRigVMRegistry_NoLock *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Registry",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMTemplate.cpp"
                       ,0xba4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  if ((this->NumTypes).bIsSet == false) {
    if (this->bShouldCopyTypes == false) {
      if (this->Argument == (FRigVMTemplateArgument *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Argument",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMTemplate.cpp"
                           ,0xbae,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          iVar3 = (*pcVar1)();
          return iVar3;
        }
      }
      iVar3 = FRigVMTemplateArgument::GetNumTypes_NoLock(this->Argument,&this->Registry->ThisHandle)
      ;
      if ((TOptional<int> *)local_14 != &this->NumTypes) {
        (this->NumTypes).TypedValue = iVar3;
        (this->NumTypes).bIsSet = true;
      }
    }
    else {
      UpdateTypesIfRequired(this);
      if ((this->Types).field0_0x0.TypedValue.ArrayMax == -1) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          iVar3 = (*pcVar1)();
          return iVar3;
        }
      }
      if ((TOptional<int> *)&local_18 != &this->NumTypes) {
        (this->NumTypes).TypedValue = (this->Types).field0_0x0.TypedValue.ArrayNum;
        (this->NumTypes).bIsSet = true;
      }
    }
    if ((this->NumTypes).bIsSet == false) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
    }
  }
  return (this->NumTypes).TypedValue;
}

// GetTypeIndex_NoLock @ 14a0f0fa0

TRigVMTypeIndex * __thiscall
FRigVMTypeCacheScope_NoLock::GetTypeIndex_NoLock
          (FRigVMTypeCacheScope_NoLock *this,TRigVMTypeIndex *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  TRigVMTypeIndex *pTVar3;
  FName *pFVar4;
  
  if (this->Registry == (FRigVMRegistry_NoLock *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Registry",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMTemplate.cpp"
                       ,2999,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TRigVMTypeIndex *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->Types).field0_0x0.TypedValue.ArrayMax == -1) {
    if (this->bShouldCopyTypes == false) {
      FRigVMTemplateArgument::GetTypeIndex_NoLock
                (this->Argument,__return_storage_ptr__,param_1,&this->Registry->ThisHandle);
      return __return_storage_ptr__;
    }
    UpdateTypesIfRequired(this);
    if ((this->Types).field0_0x0.TypedValue.ArrayMax == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TRigVMTypeIndex *)(*pcVar1)();
        return pTVar3;
      }
    }
  }
  if ((param_1 < 0) || ((this->Types).field0_0x0.TypedValue.ArrayNum <= param_1)) {
    if ((this->Types).field0_0x0.TypedValue.ArrayNum < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TRigVMTypeIndex *)(*pcVar1)();
        return pTVar3;
      }
    }
    pFVar4 = *(FName **)&(this->Types).field0_0x0;
  }
  else {
    if (param_1 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TRigVMTypeIndex *)(*pcVar1)();
        return pTVar3;
      }
    }
    pFVar4 = (FName *)((this->Types).field0_0x0.TypedValue.AllocatorInstance.Data +
                      (longlong)param_1 * 0xc);
  }
  __return_storage_ptr__->Name = *pFVar4;
  __return_storage_ptr__->Index = pFVar4[1].ComparisonIndex.Value;
  return __return_storage_ptr__;
}

// UpdateIfRequired @ 14a1155a0

FRigVMTypeCacheScope_NoLock * __thiscall
FRigVMTypeCacheScope_NoLock::UpdateIfRequired
          (FRigVMTypeCacheScope_NoLock *this,FRigVMRegistryHandle *param_1,
          FRigVMTemplateArgument *param_2)

{
  if (this->Registry != param_1->Registry) {
    this->Registry = param_1->Registry;
    this->Argument = (FRigVMTemplateArgument *)0x0;
  }
  if (this->Argument != param_2) {
    this->Argument = param_2;
    this->bShouldCopyTypes = *(longlong *)&param_2->FilterType != 0;
  }
  return this;
}

// UpdateTypesIfRequired @ 14a115cf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FRigVMTypeCacheScope_NoLock::UpdateTypesIfRequired(FRigVMTypeCacheScope_NoLock *this)

{
  TOptional<TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  undefined ***pppuVar6;
  undefined1 auStackY_88 [32];
  ForAnyElementType local_58 [2];
  code *local_48 [2];
  undefined **local_38;
  TOptional<TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_> *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_88;
  if ((this->Registry == (FRigVMRegistry_NoLock *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Registry",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMTemplate.cpp"
                         ,0xbcb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((this->bShouldCopyTypes == false) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("bShouldCopyTypes",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMTemplate.cpp"
                         ,0xbcc,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((this->Types).field0_0x0.TypedValue.ArrayMax == -1) {
    pTVar1 = &this->Types;
    if ((TOptional<TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_> *)local_58 != pTVar1) {
      pFVar2 = (pTVar1->field0_0x0).TypedValue.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pTVar1->field0_0x0).TypedValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(undefined8 *)((longlong)&(this->Types).field0_0x0 + 8) = 0;
    }
    if (((this->Types).field0_0x0.TypedValue.ArrayMax == -1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar5 = FRigVMTemplateArgument::GetNumTypes_NoLock(this->Argument,&this->Registry->ThisHandle);
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
    if ((this->Types).field0_0x0.TypedValue.ArrayMax < (int)uVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar5,(ForAnyElementType *)pTVar1,
                 (this->Types).field0_0x0.TypedValue.ArrayNum,
                 &(this->Types).field0_0x0.TypedValue.ArrayMax);
    }
    local_38 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FRigVMTypeCacheScope_NoLock::UpdateTypesIfRequired'::`2'::<lambda_1>,0,0>
                ::_vftable_;
    local_20 = (undefined ***)0x0;
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FRigVMTypeCacheScope_NoLock::UpdateTypesIfRequired'::__l2::<lambda_1>,bool,TRigVMTypeIndex>
                  ::Call;
    local_30 = pTVar1;
    FRigVMTemplateArgument::ForEachType
              (this->Argument,(TFunction<bool___cdecl(TRigVMTypeIndex)> *)local_48,
               &this->Registry->ThisHandle);
    if (local_48[0] != (code *)0x0) {
      pppuVar6 = &local_38;
      if (local_20 != (undefined ***)0x0) {
        pppuVar6 = local_20;
      }
      (*(code *)(*pppuVar6)[2])();
    }
  }
  return;
}

