// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsSolver
// Functions: 1

// Call @ 14e253220

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Groom::Private::CreateDeformerInstance'::__l5::<lambda_1>,void>::Call
          (void *param_1)

{
  int iVar1;
  UActorComponent *this;
  UOptimusDeformerDynamicInstanceManager *this_00;
  bool bVar2;
  UClass *pUVar3;
  FSceneInterface *pFVar4;
  UOptimusDeformerInstance *pUVar5;
  IMeshDeformerProducer *pIVar6;
  FGuid FStack_18;
  
  this = *(UActorComponent **)(*(longlong *)((longlong)param_1 + 8) + 0x20);
  if (this != (UActorComponent *)0x0) {
    pUVar3 = Z_Construct_UClass_UMeshComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if (((iVar1 <= *(int *)(this->_padding_ + 0x38)) &&
        ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8)
         == &pUVar3->_padding_)) && (this->bIsBeingDestroyed == '\0')) {
      pFVar4 = UActorComponent::GetScene(this);
      if (pFVar4 != (FSceneInterface *)0x0) {
        bVar2 = IsSavingPackage((UObject *)0x0);
        if (!bVar2) {
          bVar2 = IsGarbageCollectingAndLockingUObjectHashTables();
          if ((!bVar2) &&
             (this_00 = *(UOptimusDeformerDynamicInstanceManager **)((longlong)param_1 + 8),
             this_00 != (UOptimusDeformerDynamicInstanceManager *)0x0)) {
            pUVar3 = Z_Construct_UClass_UOptimusDeformerDynamicInstanceManager_NoRegister();
            iVar1 = (int)pUVar3->_padding_;
            if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
               ((longlong *)
                *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
                &pUVar3->_padding_)) {
              FStack_18._0_8_ = *(undefined8 *)((longlong)param_1 + 0x10);
              FStack_18._8_8_ = *(undefined8 *)((longlong)param_1 + 0x18);
              pUVar5 = UOptimusDeformerDynamicInstanceManager::GetDeformerInstance
                                 (this_00,&FStack_18);
              if (pUVar5 == (UOptimusDeformerInstance *)0x0) {
                FStack_18._0_8_ = *(undefined8 *)((longlong)param_1 + 0x10);
                FStack_18._8_8_ = *(undefined8 *)((longlong)param_1 + 0x18);
                pIVar6 = (IMeshDeformerProducer *)(*(longlong *)((longlong)param_1 + 0x20) + 0x68);
                if (*(longlong *)((longlong)param_1 + 0x20) == 0) {
                  pIVar6 = (IMeshDeformerProducer *)0x0;
                }
                UOptimusDeformerDynamicInstanceManager::AddProducerDeformer
                          (this_00,pIVar6,&FStack_18,*(UOptimusDeformer **)param_1);
              }
            }
          }
        }
      }
    }
  }
  return;
}

