// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 3

// StaticStruct @ 14907bd50

UScriptStruct * __cdecl FNDCGameplayBurstAttachmentSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNDCGameplayBurstAttachmentSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNDCGameplayBurstAttachmentSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNDCGameplayBurstAttachmentSettings,
                         (UObject *)pUVar1,L"NDCGameplayBurstAttachmentSettings");
  }
  return Z_Registration_Info_UScriptStruct_FNDCGameplayBurstAttachmentSettings.OuterSingleton;
}

// operator= @ 1490b97d0

FNDCGameplayBurstAttachmentSettings * __thiscall
FNDCGameplayBurstAttachmentSettings::operator=
          (FNDCGameplayBurstAttachmentSettings *this,FNDCGameplayBurstAttachmentSettings *param_1)

{
  TArray<TSubclassOf<USceneComponent>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  this->SpeedThreshold = param_1->SpeedThreshold;
  FGameplayTagContainer::operator=(&this->GameplayTags,&param_1->GameplayTags);
  pTVar1 = &this->ComponentTypes;
  if (pTVar1 != &param_1->ComponentTypes) {
    iVar3 = (this->ComponentTypes).ArrayMax;
    piVar2 = &(this->ComponentTypes).ArrayMax;
    pFVar5 = (param_1->ComponentTypes).AllocatorInstance.Data;
    iVar4 = (param_1->ComponentTypes).ArrayNum;
    (this->ComponentTypes).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar4,iVar3,&pTVar1->AllocatorInstance,iVar4,piVar2);
      ConstructItems<TSubclassOf<USceneComponent>,TSubclassOf<USceneComponent>,int>
                ((pTVar1->AllocatorInstance).Data,(TSubclassOf<USceneComponent> *)pFVar5,iVar4);
    }
  }
  return this;
}

// UseAttachedPathForComponent @ 149141940

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FNDCGameplayBurstAttachmentSettings::UseAttachedPathForComponent
          (FNDCGameplayBurstAttachmentSettings *this,USceneComponent *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  UClass *pUVar5;
  UPrimitiveComponent *pUVar6;
  AActor *this_00;
  FScriptContainerElement *pFVar7;
  UPrimitiveComponent *pUVar8;
  UPrimitiveComponent *pUVar9;
  TVector<double>_u_0 local_48;
  
  if (param_1 == (USceneComponent *)0x0) {
    return false;
  }
  pUVar5 = Z_Construct_UClass_UNiagaraComponent_NoRegister();
  iVar2 = (int)pUVar5->_padding_;
  if (((iVar2 <= *(int *)(param_1->_padding_ + 0x38)) &&
      ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8)
       == &pUVar5->_padding_)) &&
     (pUVar8 = (UPrimitiveComponent *)(param_1->AttachParent).field0_0x0.DebugPtr,
     pUVar8 != (UPrimitiveComponent *)0x0)) {
    param_1 = (USceneComponent *)pUVar8;
  }
  if (param_2) {
    return true;
  }
  pFVar7 = (this->ComponentTypes).AllocatorInstance.Data;
  pUVar9 = (UPrimitiveComponent *)0x0;
  pUVar8 = *(UPrimitiveComponent **)&((UPrimitiveComponent *)param_1)->field_0x10;
  pFVar1 = pFVar7 + (longlong)(this->ComponentTypes).ArrayNum * 8;
  for (; pFVar7 != pFVar1; pFVar7 = pFVar7 + 8) {
    lVar3 = *(longlong *)pFVar7;
    pUVar6 = pUVar9;
    if ((lVar3 != 0) &&
       (pUVar5 = Z_Construct_UClass_USceneComponent_NoRegister(), pUVar5 != (UClass *)0x0)) {
      iVar2 = (int)pUVar5->_padding_;
      if ((*(int *)(lVar3 + 0x38) < iVar2) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar5->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        pUVar6 = *(UPrimitiveComponent **)pFVar7;
      }
    }
    if (pUVar6 == pUVar8) {
      return true;
    }
  }
  this_00 = USceneComponent::GetAttachParentActor(param_1);
  if (((this_00 != (AActor *)0x0) ||
      (this_00 = *(AActor **)&((UPrimitiveComponent *)param_1)->field_0xa8, this_00 != (AActor *)0x0
      )) && (0 < (this->GameplayTags).GameplayTags.ArrayNum)) {
    local_48._0_8_ = this_00;
    if ((UE::GC::GIsIncrementalReachabilityPending == false) || (this_00 == (AActor *)0x0)) {
      local_48._s_0.Y = (double)pUVar9;
      if (this_00 != (AActor *)0x0) goto LAB_149141a55;
    }
    else {
      UE::GC::MarkAsReachable((UObject *)this_00);
LAB_149141a55:
      pUVar5 = Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
      local_48._s_0.Y =
           (double)UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar5);
    }
    bVar4 = UBlueprintGameplayTagLibrary::HasAnyMatchingGameplayTags
                      ((TScriptInterface<IGameplayTagAssetInterface> *)&local_48._s_0,
                       &this->GameplayTags);
    if (bVar4) {
      return true;
    }
  }
  if (this->SpeedThreshold <= 0.0 && this->SpeedThreshold != 0.0) {
    return false;
  }
  pUVar5 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
  iVar2 = (int)pUVar5->_padding_;
  if ((*(int *)(*(longlong *)&((UPrimitiveComponent *)param_1)->field_0x10 + 0x38) < iVar2) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&((UPrimitiveComponent *)param_1)->field_0x10 + 0x30) +
       (longlong)iVar2 * 8) != &pUVar5->_padding_)) {
    param_1 = (USceneComponent *)pUVar9;
  }
  bVar4 = MovementBaseUtility::IsDynamicBase((UPrimitiveComponent *)param_1);
  if ((bVar4) &&
     (MovementBaseUtility::GetMovementBaseVelocity
                ((TVector<double> *)&local_48._s_0,(UPrimitiveComponent *)param_1,(FName)0x0),
     (double)(this->SpeedThreshold * this->SpeedThreshold) <=
     local_48._s_0.X * local_48._s_0.X + local_48._s_0.Y * local_48._s_0.Y +
     local_48._s_0.Z * local_48._s_0.Z)) {
    return true;
  }
  if (this_00 == (AActor *)0x0) {
    return false;
  }
  pUVar8 = (UPrimitiveComponent *)(this_00->RootComponent).field0_0x0.DebugPtr;
  if (pUVar8 != (UPrimitiveComponent *)0x0) {
    pUVar5 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
    iVar2 = (int)pUVar5->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar5->_padding_)) goto LAB_149141b4b;
  }
  pUVar8 = pUVar9;
LAB_149141b4b:
  if (pUVar8 == (UPrimitiveComponent *)0x0) {
    return false;
  }
  MovementBaseUtility::GetMovementBaseVelocity((TVector<double> *)&local_48._s_0,pUVar8,(FName)0x0);
  return (double)(this->SpeedThreshold * this->SpeedThreshold) <=
         local_48._s_0.Y * local_48._s_0.Y + local_48._s_0.X * local_48._s_0.X +
         local_48._s_0.Z * local_48._s_0.Z;
}

