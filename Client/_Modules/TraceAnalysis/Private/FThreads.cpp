// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceAnalysis
// Functions: 6

// FThreads @ 14d38fd10

FThreads * __thiscall UE::Trace::FThreads::FThreads(FThreads *this)

{
  int *piVar1;
  
  this->LastGetInfoId = 0xffffffff;
  piVar1 = &(this->Infos).ArrayMax;
  (this->Infos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroupName).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroupName).ArrayNum = 0;
  (this->GroupName).ArrayMax = 0;
  (this->Infos).ArrayNum = 0;
  *piVar1 = 0;
  Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,0x40,&(this->Infos).AllocatorInstance,0,piVar1);
  return this;
}

// ~FThreads @ 14d392780

void __thiscall UE::Trace::FThreads::~FThreads(FThreads *this)

{
  int iVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Infos).ArrayNum;
  pFVar4 = (this->Infos).AllocatorInstance.Data;
  pFVar3 = pFVar4 + (longlong)iVar1 * 8;
  while( true ) {
    if ((this->Infos).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Trace::FThreads::FInfo_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar3) break;
    puVar2 = *(undefined8 **)pFVar4;
    if (puVar2 != (undefined8 *)0x0) {
      if ((void *)puVar2[4] != (void *)0x0) {
        FMemory::Free((void *)puVar2[4]);
      }
      if ((void *)puVar2[2] != (void *)0x0) {
        FMemory::Free((void *)puVar2[2]);
      }
      if ((void *)*puVar2 != (void *)0x0) {
        FMemory::Free((void *)*puVar2);
      }
      ::operator_delete(puVar2,0x48);
    }
    pFVar4 = pFVar4 + 8;
  }
  pFVar3 = (this->GroupName).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->Infos).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
    return;
  }
  return;
}

// GetGroupName @ 14d39ca60

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
UE::Trace::FThreads::GetGroupName(FThreads *this)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  
  pTVar1 = &this->GroupName;
  if ((this->GroupName).ArrayNum < 1) {
    pTVar1 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0;
  }
  return pTVar1;
}

// GetInfo @ 14d39cb50

FInfo * __thiscall UE::Trace::FThreads::GetInfo(FThreads *this,uint param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FInfo *pFVar5;
  FInfo *pFVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = (this->Infos).ArrayNum;
  this->LastGetInfoId = param_1;
  if (uVar8 <= param_1) {
    uVar7 = param_1 + 1;
    if ((int)uVar8 < (int)uVar7) {
      iVar4 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,uVar7 - uVar8,&(this->Infos).AllocatorInstance,&(this->Infos).ArrayNum,
                         &(this->Infos).ArrayMax);
      memset((this->Infos).AllocatorInstance.Data + (longlong)iVar4 * 8,0,
             (longlong)(int)(uVar7 - uVar8) << 3);
    }
    else {
      if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
      }
      if ((int)uVar7 < (int)uVar8) {
        uVar8 = uVar8 - uVar7;
        if (((int)(uVar8 | uVar7) < 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FInfo *)(*pcVar2)();
          return pFVar5;
        }
        if (uVar8 != 0) {
          _Dst = (this->Infos).AllocatorInstance.Data + (longlong)(int)uVar7 * 8;
          iVar4 = ((this->Infos).ArrayNum - uVar8) - uVar7;
          if (iVar4 != 0) {
            memmove(_Dst,_Dst + (longlong)(int)uVar8 * 8,(longlong)iVar4 << 3);
          }
          piVar1 = &(this->Infos).ArrayNum;
          *piVar1 = *piVar1 - uVar8;
          Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&(this->Infos).AllocatorInstance,(this->Infos).ArrayNum,
                     &(this->Infos).ArrayMax);
        }
      }
    }
  }
  pFVar5 = (FInfo *)0x0;
  uVar8 = 0;
  if ((int)param_1 < (this->Infos).ArrayNum) {
    uVar8 = ~param_1 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FInfo *)(*pcVar2)();
    return pFVar5;
  }
  pFVar6 = *(FInfo **)((this->Infos).AllocatorInstance.Data + (longlong)(int)param_1 * 8);
  if (pFVar6 == (FInfo *)0x0) {
    pFVar6 = ::operator_new(0x48);
    if (pFVar6 != (FInfo *)0x0) {
      *(undefined8 *)&pFVar6->SortHint = 0xff;
      (pFVar6->ScopeRoutes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar6->ScopeRoutes).ArrayNum = 0;
      (pFVar6->ScopeRoutes).ArrayMax = 0;
      (pFVar6->Name).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar6->Name).ArrayNum = 0;
      (pFVar6->Name).ArrayMax = 0;
      (pFVar6->GroupName).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar6->GroupName).ArrayNum = 0;
      (pFVar6->GroupName).ArrayMax = 0;
      pFVar6->PrevTimestamp = 0;
      pFVar6->SystemId = 0;
      pFVar5 = pFVar6;
    }
    pFVar5->ThreadId = param_1;
    uVar8 = 0;
    if ((int)param_1 < (this->Infos).ArrayNum) {
      uVar8 = ~param_1 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FInfo *)(*pcVar2)();
      return pFVar5;
    }
    *(FInfo **)((this->Infos).AllocatorInstance.Data + (longlong)(int)param_1 * 8) = pFVar5;
    pFVar6 = pFVar5;
  }
  return pFVar6;
}

// GetInfo @ 14d39cd80

FInfo * __thiscall UE::Trace::FThreads::GetInfo(FThreads *this)

{
  FInfo *pFVar1;
  
  pFVar1 = GetInfo(this,this->LastGetInfoId);
  return pFVar1;
}

// SetGroupName @ 14d3a7bb0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UE::Trace::FThreads::SetGroupName(FThreads *this,char *param_1,uint param_2)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    this_00 = &this->GroupName;
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (this_00,param_2 + 1,Default);
    uVar3 = 0;
    if ((int)param_2 < (this->GroupName).ArrayNum) {
      uVar3 = ~param_2 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (this_00->AllocatorInstance).Data[(int)param_2] = (FScriptContainerElement)0x0;
    memcpy((this_00->AllocatorInstance).Data,param_1,(ulonglong)param_2);
    return;
  }
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum(&this->GroupName,0,Default);
  return;
}

