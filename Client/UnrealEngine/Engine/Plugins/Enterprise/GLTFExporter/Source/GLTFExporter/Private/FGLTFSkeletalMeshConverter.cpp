// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 3

// FGLTFSkeletalMeshConverter @ 14e5d2cb0

FGLTFSkeletalMeshConverter * __thiscall
FGLTFSkeletalMeshConverter::FGLTFSkeletalMeshConverter
          (FGLTFSkeletalMeshConverter *this,FGLTFConvertBuilder *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FGLTFSkeletalMeshConverter__6B_;
  (this->MeshSectionConverter)._padding_ = 0;
  (this->MeshSectionConverter)._padding_ = 0;
  (this->MeshSectionConverter)._padding_ = 0;
  *(undefined4 *)&(this->MeshSectionConverter)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->MeshSectionConverter)._padding_ + 4) = 0x80;
  *(undefined4 *)&(this->MeshSectionConverter)._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&(this->MeshSectionConverter)._padding_ + 4) = 0;
  (this->MeshSectionConverter)._padding_ = 0;
  *(undefined4 *)&(this->MeshSectionConverter)._padding_ = 0;
  (this->MeshSectionConverter)._padding_ =
       (longlong)&___7__TGLTFMeshSectionConverter_VUSkeletalMesh____6B_;
  (this->MeshSectionConverter).Outputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshSectionConverter).Outputs.ArrayNum = 0;
  (this->MeshSectionConverter).Outputs.ArrayMax = 0;
  return this;
}

// Convert @ 14e5ea8b0

FGLTFJsonMesh * __thiscall
FGLTFSkeletalMeshConverter::Convert
          (FGLTFSkeletalMeshConverter *this,USkeletalMesh *param_1,USkeletalMeshComponent *param_2,
          FGLTFMaterialArray *param_3,int param_4)

{
  int iVar1;
  FGLTFLogBuilder *this_00;
  FGLTFTaskBuilder *this_01;
  int iVar2;
  longlong lVar3;
  FGLTFJsonMesh *pFVar4;
  FName FVar5;
  FName local_res8;
  FString local_48;
  FString local_38;
  
  lVar3 = (**(code **)(param_1->_padding_ + 0x328))(param_1,param_4);
  if ((*(byte *)(lVar3 + 0xd0) & 4) == 0) {
    local_res8 = (FName)param_1->_padding_;
    this_00 = (FGLTFLogBuilder *)this->_padding_;
    ::FName::ToString(&local_res8,&local_48);
    ::FString::PrintfImpl
              (&local_38,
               L"Export of mesh %s (LOD %d) can in runtime be speed-up by checking \'Allow CPU Access\' in asset settings"
              );
    FGLTFLogBuilder::LogSuggestion(this_00,&local_38);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  lVar3 = (**(code **)(param_1->_padding_ + 0x3c0))(param_1);
  iVar1 = *(int *)(lVar3 + 8);
  pFVar4 = FGLTFJsonBuilder::AddMesh((FGLTFJsonBuilder *)this->_padding_);
  iVar2 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x98,8,iVar1,&(pFVar4->Primitives).AllocatorInstance,
                     &(pFVar4->Primitives).ArrayNum,&(pFVar4->Primitives).ArrayMax);
  DefaultConstructItems<FGLTFJsonPrimitive,int>
            ((pFVar4->Primitives).AllocatorInstance.Data + (longlong)iVar2 * 0x98,iVar1);
  this_01 = (FGLTFTaskBuilder *)this->_padding_;
  FVar5 = (FName)::operator_new(0x50);
  if (FVar5 == (FName)0x0) {
    FVar5.ComparisonIndex.Value = 0;
    FVar5.Number = 0;
  }
  else {
    *(undefined1 *)((longlong)FVar5 + 8) = 1;
    *(TGLTFMeshSectionConverter<USkeletalMesh> **)((longlong)FVar5 + 0x18) =
         &this->MeshSectionConverter;
    *(undefined ***)FVar5 = &___7FGLTFDelayedSkeletalMeshTask__6B_;
    *(FGLTFTaskBuilder **)((longlong)FVar5 + 0x10) = this_01;
    *(USkeletalMesh **)((longlong)FVar5 + 0x20) = param_1;
    *(USkeletalMeshComponent **)((longlong)FVar5 + 0x28) = param_2;
    FGLTFMaterialArray::FGLTFMaterialArray((FGLTFMaterialArray *)((longlong)FVar5 + 0x30),param_3);
    *(int *)((longlong)FVar5 + 0x40) = param_4;
    *(FGLTFJsonMesh **)((longlong)FVar5 + 0x48) = pFVar4;
  }
  local_res8 = FVar5;
  FGLTFTaskBuilder::ScheduleSlowTask(this_01,(FGLTFDelayedTask *)&local_res8);
  if (*(void **)param_3 != (void *)0x0) {
    FMemory::Free(*(void **)param_3);
  }
  return pFVar4;
}

// Sanitize @ 14e612910

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FGLTFSkeletalMeshConverter::Sanitize
          (FGLTFSkeletalMeshConverter *this,USkeletalMesh **param_1,USkeletalMeshComponent **param_2
          ,FGLTFMaterialArray *param_3,int *param_4)

{
  int iVar1;
  USkeletalMeshComponent *this_00;
  USkeletalMesh *pUVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  TArray<UPropertyValue_const_*,TSizedDefaultAllocator<32>_> *pTVar6;
  int iVar7;
  int iVar8;
  
  FGLTFMeshUtilities::ResolveMaterials
            ((TArray<UMaterialInterface_const_*,TSizedDefaultAllocator<32>_> *)param_3,*param_2,
             *param_1);
  FGLTFBuilder::ResolveProxies
            ((FGLTFBuilder *)this->_padding_,
             (TArray<UMaterialInterface_const_*,TSizedDefaultAllocator<32>_> *)param_3);
  this_00 = *param_2;
  pUVar2 = *param_1;
  iVar1 = *param_4;
  if (0 < iVar1) {
    if ((pUVar2 == (USkeletalMesh *)0x0) ||
       (lVar4 = (**(code **)(pUVar2->_padding_ + 0x398))(pUVar2), lVar4 == 0)) {
      iVar7 = -1;
      if (iVar1 < -1) {
        iVar7 = iVar1;
      }
    }
    else {
      iVar7 = *(int *)(lVar4 + 8) + -1;
      if (iVar1 < iVar7) {
        iVar7 = iVar1;
      }
    }
    goto LAB_14e612a1e;
  }
  iVar7 = -1;
  iVar1 = *(int *)(*(longlong *)(this->_padding_ + 0x18) + 0x98);
  if (this_00 == (USkeletalMeshComponent *)0x0) {
LAB_14e6129dc:
    if (pUVar2 == (USkeletalMesh *)0x0) {
      iVar8 = -1;
    }
    else {
      piVar5 = (int *)(**(code **)(pUVar2->_padding_ + 0x3a8))(pUVar2);
      iVar8 = *piVar5;
    }
LAB_14e6129f3:
    if (iVar8 < iVar1) {
      iVar8 = iVar1;
    }
  }
  else {
    iVar3 = USkinnedMeshComponent::GetForcedLOD((USkinnedMeshComponent *)this_00);
    iVar8 = iVar3 + -1;
    if (iVar3 + -1 < 1) {
      if ((*(byte *)((longlong)&this_00->_padding_ + 7) & 8) == 0) goto LAB_14e6129dc;
      iVar8 = (int)this_00->_padding_;
      goto LAB_14e6129f3;
    }
  }
  if ((pUVar2 != (USkeletalMesh *)0x0) &&
     (lVar4 = (**(code **)(pUVar2->_padding_ + 0x398))(pUVar2), lVar4 != 0)) {
    iVar7 = *(int *)(lVar4 + 8) + -1;
  }
  if (iVar8 < iVar7) {
    iVar7 = iVar8;
  }
LAB_14e612a1e:
  *param_4 = iVar7;
  if ((*param_2 != (USkeletalMeshComponent *)0x0) &&
     (pTVar6 = TMapBase<UObject_const_*,TArray<UPropertyValue_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TArray<UPropertyValue_const_*,TSizedDefaultAllocator<32>_>,0>_>
               ::Find((TMapBase<UObject_const_*,TArray<UPropertyValue_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TArray<UPropertyValue_const_*,TSizedDefaultAllocator<32>_>,0>_>
                       *)(this->_padding_ + 0x958),(UObject *)*param_2),
     pTVar6 == (TArray<UPropertyValue_const_*,TSizedDefaultAllocator<32>_> *)0x0)) {
    *param_2 = (USkeletalMeshComponent *)0x0;
  }
  return;
}

