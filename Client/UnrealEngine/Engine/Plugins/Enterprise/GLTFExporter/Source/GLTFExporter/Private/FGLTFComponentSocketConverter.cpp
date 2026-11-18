// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 1

// Convert @ 14e5e5ee0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FGLTFJsonNode * __thiscall
FGLTFComponentSocketConverter::Convert
          (FGLTFComponentSocketConverter *this,USceneComponent *param_1,FName param_2)

{
  int iVar1;
  UStaticMesh *pUVar2;
  FGLTFLogBuilder *this_00;
  FGLTFJsonNode *pFVar3;
  UClass *pUVar4;
  USkeletalMesh *pUVar5;
  FName local_res8;
  FName local_res18;
  FString local_48;
  FString local_38;
  FString local_28;
  
  local_res18 = param_2;
  pFVar3 = FGLTFConvertBuilder::AddUniqueNode(*(FGLTFConvertBuilder **)&this->field_0x58,param_1);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  if (local_res18 != (FName)0x0) {
    if (param_1 != (USceneComponent *)0x0) {
      pUVar4 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar4->_padding_)) {
        pUVar2 = *(UStaticMesh **)&param_1[2].ClientAttachedChildren.ArrayNum;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UStaticMesh *)0x0))
        {
          UE::GC::MarkAsReachable((UObject *)pUVar2);
        }
        if (pFVar3 == (FGLTFJsonNode *)0x0) {
          return (FGLTFJsonNode *)0x0;
        }
        if (pUVar2 == (UStaticMesh *)0x0) {
          return (FGLTFJsonNode *)0x0;
        }
        local_res8.ComparisonIndex.Value = 0;
        local_res8.Number = 0;
        if (local_res18 == (FName)0x0) {
          return (FGLTFJsonNode *)0x0;
        }
        pFVar3 = TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,UStaticMesh_const_*,FName>::GetOrAdd
                           (*(TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,UStaticMesh_const_*,FName>
                              **)(*(longlong *)&this->field_0x58 + 0x900),pFVar3,pUVar2,local_res18)
        ;
        return pFVar3;
      }
      if (param_1 != (USceneComponent *)0x0) {
        pUVar4 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
        iVar1 = (int)pUVar4->_padding_;
        if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar4->_padding_)) {
          pUVar5 = USkeletalMeshComponent::GetSkeletalMeshAsset((USkeletalMeshComponent *)param_1);
          if (pFVar3 == (FGLTFJsonNode *)0x0) {
            return (FGLTFJsonNode *)0x0;
          }
          if (pUVar5 == (USkeletalMesh *)0x0) {
            return (FGLTFJsonNode *)0x0;
          }
          local_res8.ComparisonIndex.Value = 0;
          local_res8.Number = 0;
          if (local_res18 == (FName)0x0) {
            return (FGLTFJsonNode *)0x0;
          }
          pFVar3 = TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,USkeletalMesh_const_*,FName>::
                   GetOrAdd(*(TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,USkeletalMesh_const_*,FName>
                              **)(*(longlong *)&this->field_0x58 + 0x908),pFVar3,pUVar5,local_res18)
          ;
          return pFVar3;
        }
      }
    }
    local_res8 = (FName)param_1->_padding_;
    this_00 = *(FGLTFLogBuilder **)&this->field_0x58;
    ::FName::ToString(&local_res8,&local_48);
    ::FName::ToString(&local_res18,&local_28);
    ::FString::PrintfImpl
              (&local_38,
               L"Can\'t export socket %s because it belongs to an unsupported mesh component %s");
    FGLTFLogBuilder::LogWarning(this_00,&local_38);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  return pFVar3;
}

