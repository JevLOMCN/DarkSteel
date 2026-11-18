// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAssetEngine
// Functions: 1

// FMultiComponentReregisterContext @ 14dc349b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FMultiComponentReregisterContext * __thiscall
FMultiComponentReregisterContext::FMultiComponentReregisterContext
          (FMultiComponentReregisterContext *this,
          TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UActorComponent *pUVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  UWorld *pUVar8;
  FMultiComponentReregisterContext *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  UActorComponent *local_38;
  UWorld *pUStack_30;
  
  this->_padding_ = 0;
  (this->ComponentsPair).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComponentsPair).ArrayNum = 0;
  (this->ComponentsPair).ArrayMax = 0;
  pFVar10 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar10 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UActorComponent_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar10 == pFVar1) break;
    pUVar3 = *(UActorComponent **)pFVar10;
    pUVar8 = FComponentReregisterContextBase::UnRegister
                       ((FComponentReregisterContextBase *)this,pUVar3);
    if (pUVar8 != (UWorld *)0x0) {
      pFVar4 = (this->ComponentsPair).AllocatorInstance.Data;
      local_38 = pUVar3;
      pUStack_30 = pUVar8;
      if ((pFVar4 <= (FScriptContainerElement *)&local_38) &&
         ((FScriptContainerElement *)&local_38 <
          pFVar4 + (longlong)(this->ComponentsPair).ArrayMax * 0x10)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          pFVar9 = (FMultiComponentReregisterContext *)(*pcVar5)();
          return pFVar9;
        }
      }
      iVar7 = (this->ComponentsPair).ArrayNum;
      if (iVar7 == (this->ComponentsPair).ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(this->ComponentsPair).AllocatorInstance,
                           &(this->ComponentsPair).ArrayMax);
      }
      (this->ComponentsPair).ArrayNum = iVar7 + 1;
      pFVar4 = (this->ComponentsPair).AllocatorInstance.Data + (longlong)iVar7 * 0x10;
      *(UActorComponent **)pFVar4 = local_38;
      *(UWorld **)(pFVar4 + 8) = pUStack_30;
    }
    pFVar10 = pFVar10 + 8;
  }
  return this;
}

