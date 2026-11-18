// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 1

// Remove @ 14656c940

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::Remove
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *this,
          TScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_> *this_00
  ;
  <lambda_1> local_res8 [8];
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_48;
  FDestructionSentinel local_38;
  FReadAccessScope local_20;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_20);
  local_48.Object = param_1->Object;
  local_48.FunctionName = param_1->FunctionName;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_20);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  this_00 = &this->InvocationList;
  uVar6 = TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
          ::Find(this_00,&local_48);
  if (uVar6 != 0xffffffff) {
    uVar7 = 0;
    if ((int)(uVar6 + 1) <= (this->InvocationList).ArrayNum) {
      uVar7 = ~uVar6 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar2 = (this->InvocationList).ArrayNum;
    pFVar3 = (this_00->AllocatorInstance).Data;
    iVar8 = iVar2 + ~uVar6;
    if (1 < iVar8) {
      iVar8 = 1;
    }
    if (iVar8 != 0) {
      memmove(pFVar3 + (longlong)(int)uVar6 * 0x10,pFVar3 + (longlong)(iVar2 - iVar8) * 0x10,
              (longlong)iVar8 << 4);
    }
    piVar1 = &(this->InvocationList).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,&this_00->AllocatorInstance,(this->InvocationList).ArrayNum,
               &(this->InvocationList).ArrayMax);
  }
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            (this_00,local_res8,Default);
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

