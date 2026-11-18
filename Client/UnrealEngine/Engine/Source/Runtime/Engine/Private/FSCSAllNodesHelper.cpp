// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// Add @ 1485a7dc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl FSCSAllNodesHelper::Add(USimpleConstructionScript *param_1,USCS_Node *param_2)

{
  TArray<TObjectPtr<USCS_Node>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  USCS_Node *local_18 [2];
  
  pTVar1 = &param_1->AllNodes;
  local_18[0] = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_2 != (USCS_Node *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(param_1->AllNodes).ArrayMax * 8)) {
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
  iVar6 = (param_1->AllNodes).ArrayNum;
  piVar2 = &(param_1->AllNodes).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (param_1->AllNodes).ArrayNum = iVar6 + 1;
  *(USCS_Node **)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_18[0] != (USCS_Node *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_18[0]);
  }
  return;
}

// Remove @ 1485d5ef0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl FSCSAllNodesHelper::Remove(USimpleConstructionScript *param_1,USCS_Node *param_2)

{
  TObjectPtr<USCS_Node>_u_0 local_res8 [4];
  
  local_res8[0].DebugPtr = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_2 != (USCS_Node *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  TArray<TObjectPtr<USCS_Node>,TSizedDefaultAllocator<32>_>::Remove
            (&param_1->AllNodes,(TObjectPtr<USCS_Node> *)&local_res8[0].ObjectPtr);
  return;
}

