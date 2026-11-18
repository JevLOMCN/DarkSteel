// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetCore
// Functions: 6

// AddSubObjectUnique @ 1441d6710

EResult __thiscall
UE::Net::FSubObjectRegistry::AddSubObjectUnique
          (FSubObjectRegistry *this,UObject *param_1,ELifetimeCondition param_2)

{
  int *piVar1;
  FWeakObjectPtr *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  EResult EVar6;
  int iVar7;
  FWeakObjectPtr *pFVar8;
  uint uVar9;
  uint uVar10;
  FWeakObjectPtr local_res8;
  UObject *local_res10 [2];
  UObject *local_res20;
  FWeakObjectPtr local_48;
  FWeakObjectPtr FStack_40;
  ELifetimeCondition local_38;
  
  if ((param_1 == (UObject *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSubObject",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Misc\\NetSubObjectRegistry.cpp"
                         ,0xd,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    EVar6 = (*pcVar4)();
    return EVar6;
  }
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    GC::MarkAsReachable(param_1);
  }
  local_48.ObjectIndex = 0;
  local_48.ObjectSerialNumber = 0;
  iVar7 = 0;
  local_res10[0] = param_1;
  if ((GC::GIsIncrementalReachabilityPending == false) || (param_1 == (UObject *)0x0)) {
    FWeakObjectPtr::operator=(&local_48,(FObjectPtr)local_res10);
    FStack_40.ObjectIndex = 0;
    FStack_40.ObjectSerialNumber = 0;
    uVar10 = 0;
    if (param_1 == (UObject *)0x0) goto LAB_1441d6805;
  }
  else {
    GC::MarkAsReachable(param_1);
    FWeakObjectPtr::operator=(&local_48,(FObjectPtr)local_res10);
  }
  FStack_40.ObjectIndex = 0;
  FStack_40.ObjectSerialNumber = 0;
  if (GC::GIsIncrementalReachabilityPending != false) {
    GC::MarkAsReachable(param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res20 = param_1;
  if (GC::GIsIncrementalReachabilityPending != false) {
    GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
  FStack_40 = local_res8;
  iVar7 = local_res8.ObjectIndex;
  uVar10 = local_res8.ObjectSerialNumber;
LAB_1441d6805:
  pFVar2 = (FWeakObjectPtr *)(this->Registry).AllocatorInstance.Data;
  pFVar8 = pFVar2;
  do {
    local_38 = param_2;
    if (pFVar8 == (FWeakObjectPtr *)((longlong)pFVar2 + (longlong)(this->Registry).ArrayNum * 0x14))
    {
LAB_1441d6838:
      if (((pFVar2 <= &local_48) &&
          (&local_48 <
           (FWeakObjectPtr *)((longlong)pFVar2 + (longlong)(this->Registry).ArrayMax * 0x14))) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        EVar6 = (*pcVar4)();
        return EVar6;
      }
      iVar7 = (this->Registry).ArrayNum;
      piVar1 = &(this->Registry).ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x414,(ForAnyElementType *)this,piVar1);
      }
      (this->Registry).ArrayNum = iVar7 + 1;
      pFVar3 = (this->Registry).AllocatorInstance.Data;
      pFVar2 = (FWeakObjectPtr *)(pFVar3 + (longlong)iVar7 * 0x14);
      *pFVar2 = local_48;
      pFVar2[1] = FStack_40;
      *(ELifetimeCondition *)(pFVar3 + (longlong)iVar7 * 0x14 + 0x10) = local_38;
      return NewEntry;
    }
    if ((pFVar8[1].ObjectIndex == iVar7) && (pFVar8[1].ObjectSerialNumber == uVar10)) {
      uVar10 = (uint)(((longlong)pFVar8 - (longlong)pFVar2) / 0x14);
      if (uVar10 != 0xffffffff) {
        uVar9 = 0;
        if ((int)uVar10 < (this->Registry).ArrayNum) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          EVar6 = (*pcVar4)();
          return EVar6;
        }
        return (*(ELifetimeCondition *)
                 ((this->Registry).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x14 + 0x10) !=
               param_2) + AlreadyRegistered;
      }
      goto LAB_1441d6838;
    }
    pFVar8 = (FWeakObjectPtr *)&pFVar8[2].ObjectSerialNumber;
  } while( true );
}

// CleanRegistryIndexes @ 1441d76a0

void __thiscall
UE::Net::FSubObjectRegistry::CleanRegistryIndexes
          (FSubObjectRegistry *this,TArrayView<int,int> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  uint *local_48;
  uint *local_40;
  uint *local_38;
  
  local_res18[0] = param_1->ArrayNum;
  local_res10[0] = 0x7fffffff;
  while( true ) {
    uVar5 = local_res18[0] - 1;
    if ((int)uVar5 < 0) {
      return;
    }
    uVar7 = 0;
    if ((int)uVar5 < param_1->ArrayNum) {
      uVar7 = ~uVar5 >> 0x1f;
    }
    local_res18[0] = uVar5;
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar6)) break;
    uVar5 = param_1->DataPtr[(int)uVar5];
    local_res20[0] = uVar5;
    if ((int)uVar5 < (int)local_res10[0]) {
      uVar7 = 0;
      if ((int)uVar5 < (this->Registry).ArrayNum) {
        uVar7 = ~uVar5 >> 0x1f;
      }
      local_res10[0] = uVar5;
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar2 = (this->Registry).ArrayNum;
      pFVar3 = (this->Registry).AllocatorInstance.Data;
      iVar8 = iVar2 + ~uVar5;
      if (1 < iVar8) {
        iVar8 = 1;
      }
      if (iVar8 != 0) {
        memmove(pFVar3 + (longlong)(int)uVar5 * 0x14,pFVar3 + (longlong)(iVar2 - iVar8) * 0x14,
                (longlong)iVar8 * 0x14);
      }
      piVar1 = &(this->Registry).ArrayNum;
      *piVar1 = *piVar1 + -1;
      Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14,4,(ForAnyElementType *)this,(this->Registry).ArrayNum,
                 &(this->Registry).ArrayMax);
    }
    else {
      local_48 = local_res10;
      local_40 = local_res18;
      local_38 = local_res20;
      `UE::Net::FSubObjectRegistry::CleanRegistryIndexes'::__l4::<lambda_1>::operator()(&local_48);
      local_res10[0] = local_res20[0];
    }
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// GetNetCondition @ 1441dc7a0

ELifetimeCondition __thiscall
UE::Net::FSubObjectRegistry::GetNetCondition(FSubObjectRegistry *this,UObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ELifetimeCondition EVar5;
  UObject *local_res10 [3];
  
  local_res10[0] = param_1;
  uVar3 = TArray<UE::Net::FSubObjectRegistry::FEntry,TSizedDefaultAllocator<32>_>::
          IndexOfByKey<UObject_*>(&this->Registry,local_res10);
  if (uVar3 == 0xffffffff) {
    return COND_Max;
  }
  uVar4 = 0;
  if ((int)uVar3 < (this->Registry).ArrayNum) {
    uVar4 = ~uVar3 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar5 = (*pcVar1)();
      return EVar5;
    }
  }
  return *(ELifetimeCondition *)
          ((this->Registry).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x14 + 0x10);
}

// IsSubObjectInRegistry @ 1441e1060

bool __thiscall
UE::Net::FSubObjectRegistry::IsSubObjectInRegistry(FSubObjectRegistry *this,UObject *param_1)

{
  FEntry *pFVar1;
  UObject *local_res10 [3];
  
  local_res10[0] = param_1;
  pFVar1 = TArray<UE::Net::FSubObjectRegistry::FEntry,TSizedDefaultAllocator<32>_>::
           FindByKey<UObject_const_*>(&this->Registry,local_res10);
  return pFVar1 != (FEntry *)0x0;
}

// RemoveSubObject @ 1441e8110

bool __thiscall
UE::Net::FSubObjectRegistry::RemoveSubObject(FSubObjectRegistry *this,UObject *param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  UObject *local_res10;
  
  local_res10 = param_1;
  uVar5 = TArray<UE::Net::FSubObjectRegistry::FEntry,TSizedDefaultAllocator<32>_>::
          IndexOfByKey<UObject_*>(&this->Registry,&local_res10);
  if (uVar5 == 0xffffffff) {
    return false;
  }
  uVar6 = 0;
  if ((int)uVar5 < (this->Registry).ArrayNum) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  iVar7 = (this->Registry).ArrayNum + ~uVar5;
  _Dst = (this->Registry).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x14;
  if (iVar7 != 0) {
    memmove(_Dst,_Dst + 0x14,(longlong)iVar7 * 0x14);
  }
  piVar1 = &(this->Registry).ArrayNum;
  *piVar1 = *piVar1 + -1;
  Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x14,4,(ForAnyElementType *)this,(this->Registry).ArrayNum,&(this->Registry).ArrayMax);
  return true;
}

// operator() @ 1504b1a60

bool __thiscall
`UE::Net::FSubObjectRegistry::CleanRegistryIndexes'::__l4::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2140559344675061826>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2140559344675061826>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

