// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 4

// BindInstanceProtocol @ 1442b65b0

void __cdecl
UE::Net::Private::FReplicationInstanceOperationsInternal::BindInstanceProtocol
          (FNetHandle param_1,FReplicationInstanceProtocol *param_2,FReplicationProtocol *param_3)

{
  uint *puVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  ulonglong uVar6;
  FFragmentData *pFVar7;
  FReplicationStateDescriptor **ppFVar8;
  
  pFVar7 = param_2->FragmentData;
  ppFVar8 = param_3->ReplicationStateDescriptors;
  if (param_2->FragmentCount != 0) {
    uVar6 = (ulonglong)param_2->FragmentCount;
    do {
      puVar2 = pFVar7->ExternalSrcBuffer;
      if (puVar2 != (uchar *)0x0) {
        lVar5 = 0;
        if (((*ppFVar8)->Traits & IsNativeFastArrayReplicationState) != None) {
          lVar5 = (ulonglong)(*ppFVar8)->ChangeMasksExternalOffset - 4;
        }
        puVar1 = (uint *)(puVar2 + lVar5);
        if (((*(uint *)(puVar2 + lVar5) & 0x3fffffff) != 0) &&
           (((*(int *)param_1.field0_0x0 != 0 || (*(int *)((longlong)param_1.field0_0x0 + 4) != 0))
            && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("!ReplicationStateHeader.IsBound() || !NetHandle.IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationOperationsInternal.cpp"
                                   ,0x38,L""), bVar4)))) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *puVar1 = *puVar1 ^ (*puVar1 ^ *(uint *)param_1.field0_0x0) & 0x3fffffff;
      }
      pFVar7 = pFVar7 + 1;
      ppFVar8 = ppFVar8 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if ((*(int *)param_1.field0_0x0 == 0) && (*(int *)((longlong)param_1.field0_0x0 + 4) == 0)) {
    param_2->InstanceTraits = param_2->InstanceTraits & ~IsBound;
    return;
  }
  param_2->InstanceTraits = param_2->InstanceTraits | IsBound;
  return;
}

// ResetObjectStateDirtiness @ 1442e0240

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

void __cdecl
UE::Net::Private::FReplicationInstanceOperationsInternal::ResetObjectStateDirtiness
          (FNetRefHandleManager *param_1,uint param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FReplicatedObjectData *pFVar4;
  
  pFVar1 = (param_1->GlobalScopableInternalIndices).Storage.AllocatorInstance.Data;
  if ((param_1->GlobalScopableInternalIndices).BitCount <= param_2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2c1,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((*(uint *)(pFVar1 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) {
    pFVar4 = FNetRefHandleManager::GetReplicatedObjectDataNoCheck(param_1,param_2);
    if ((pFVar4->InstanceProtocol != (FReplicationInstanceProtocol *)0x0) &&
       (pFVar4->Protocol->InternalTotalSize != 0)) {
      FReplicationInstanceOperations::ResetDirtiness(pFVar4->InstanceProtocol,pFVar4->Protocol);
    }
  }
  return;
}

// UnbindInstanceProtocol @ 1442e7190

void __cdecl
UE::Net::Private::FReplicationInstanceOperationsInternal::UnbindInstanceProtocol
          (FReplicationInstanceProtocol *param_1,FReplicationProtocol *param_2)

{
  uchar *puVar1;
  longlong lVar2;
  FFragmentData *pFVar3;
  FReplicationStateDescriptor **ppFVar4;
  ulonglong uVar5;
  
  if ((param_1->InstanceTraits & IsBound) != None) {
    pFVar3 = param_1->FragmentData;
    ppFVar4 = param_2->ReplicationStateDescriptors;
    if (param_1->FragmentCount != 0) {
      uVar5 = (ulonglong)param_1->FragmentCount;
      do {
        puVar1 = pFVar3->ExternalSrcBuffer;
        if (puVar1 != (uchar *)0x0) {
          lVar2 = 0;
          if (((*ppFVar4)->Traits & IsNativeFastArrayReplicationState) != None) {
            lVar2 = (ulonglong)(*ppFVar4)->ChangeMasksExternalOffset - 4;
          }
          *(uint *)(puVar1 + lVar2) =
               *(uint *)(puVar1 + lVar2) ^ *(uint *)(puVar1 + lVar2) & 0x3fffffff;
        }
        pFVar3 = pFVar3 + 1;
        ppFVar4 = ppFVar4 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    param_1->InstanceTraits = param_1->InstanceTraits & ~IsBound;
  }
  return;
}

// operator() @ 1504b87f0

bool __thiscall
`UE::Net::Private::FReplicationInstanceOperationsInternal::QuantizeObjectStateData'::__l17::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_387837848931270537>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_387837848931270537>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

