// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// ResolveParameterCollection @ 1491df3b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
NDIMPCPrivate::FInstanceData_GT::ResolveParameterCollection
          (FInstanceData_GT *this,FNiagaraSystemInstance *param_1,
          UMaterialParameterCollection *param_2)

{
  int iVar1;
  UClass *pUVar2;
  UMaterialParameterCollectionInstance *local_res8;
  
  if (((this->ObjectBinding).UObjectOffset == -1) ||
     (FNiagaraParameterStore::GetUObject((this->ObjectBinding).BoundStore,(int)&local_res8),
     local_res8 == (UMaterialParameterCollectionInstance *)0x0)) {
LAB_1491df44c:
    local_res8 = (UMaterialParameterCollectionInstance *)param_2;
    if (param_2 == (UMaterialParameterCollection *)0x0) {
      return;
    }
LAB_1491df451:
    local_res8 = UWorld::GetParameterCollectionInstance
                           (param_1->World,(UMaterialParameterCollection *)local_res8);
    if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
       (local_res8 == (UMaterialParameterCollectionInstance *)0x0)) goto LAB_1491df478;
  }
  else {
    pUVar2 = Z_Construct_UClass_UMaterialParameterCollectionInstance_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(local_res8->_padding_ + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(local_res8->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar2->_padding_)) {
      pUVar2 = Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
      iVar1 = (int)pUVar2->_padding_;
      if ((*(int *)(local_res8->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(local_res8->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar2->_padding_)) goto LAB_1491df44c;
      goto LAB_1491df451;
    }
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_1491df478;
  }
  UE::GC::MarkAsReachable((UObject *)local_res8);
LAB_1491df478:
  FWeakObjectPtr::operator=(&(this->MPC).WeakPtr,(FObjectPtr)&local_res8);
  return;
}

