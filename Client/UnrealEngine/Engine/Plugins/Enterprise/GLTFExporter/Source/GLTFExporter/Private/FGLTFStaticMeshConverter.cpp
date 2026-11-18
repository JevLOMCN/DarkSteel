// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 3

// FGLTFStaticMeshConverter @ 14e5d2df0

FGLTFStaticMeshConverter * __thiscall
FGLTFStaticMeshConverter::FGLTFStaticMeshConverter
          (FGLTFStaticMeshConverter *this,FGLTFConvertBuilder *param_1)

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
  this->_padding_ = (longlong)&___7FGLTFStaticMeshConverter__6B_;
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
       (longlong)&___7__TGLTFMeshSectionConverter_VUStaticMesh____6B_;
  (this->MeshSectionConverter).Outputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshSectionConverter).Outputs.ArrayNum = 0;
  (this->MeshSectionConverter).Outputs.ArrayMax = 0;
  return this;
}

// Convert @ 14e5eb820

FGLTFJsonMesh * __thiscall
FGLTFStaticMeshConverter::Convert
          (FGLTFStaticMeshConverter *this,UStaticMesh *param_1,UStaticMeshComponent *param_2,
          FGLTFMaterialArray *param_3,int param_4)

{
  int iVar1;
  FGLTFLogBuilder *this_00;
  FGLTFTaskBuilder *this_01;
  int iVar2;
  FGLTFJsonMesh *pFVar3;
  FName FVar4;
  FName local_res8;
  FString local_48;
  FString local_38;
  
  if (param_1->bAllowCPUAccess == '\0') {
    local_res8 = (FName)param_1->_padding_;
    this_00 = (FGLTFLogBuilder *)this->_padding_;
    ::FName::ToString(&local_res8,&local_48);
    ::FString::PrintfImpl
              (&local_38,
               L"Export of mesh %s can in runtime be speed-up by checking \'Allow CPU Access\' in asset settings"
              );
    FGLTFLogBuilder::LogSuggestion(this_00,&local_38);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  iVar1 = (param_1->StaticMaterials).ArrayNum;
  pFVar3 = FGLTFJsonBuilder::AddMesh((FGLTFJsonBuilder *)this->_padding_);
  iVar2 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x98,8,iVar1,&(pFVar3->Primitives).AllocatorInstance,
                     &(pFVar3->Primitives).ArrayNum,&(pFVar3->Primitives).ArrayMax);
  DefaultConstructItems<FGLTFJsonPrimitive,int>
            ((pFVar3->Primitives).AllocatorInstance.Data + (longlong)iVar2 * 0x98,iVar1);
  this_01 = (FGLTFTaskBuilder *)this->_padding_;
  FVar4 = (FName)::operator_new(0x58);
  if (FVar4 == (FName)0x0) {
    FVar4.ComparisonIndex.Value = 0;
    FVar4.Number = 0;
  }
  else {
    *(undefined1 *)((longlong)FVar4 + 8) = 1;
    *(TGLTFMeshSectionConverter<UStaticMesh> **)((longlong)FVar4 + 0x18) =
         &this->MeshSectionConverter;
    *(undefined ***)FVar4 = &___7FGLTFDelayedStaticAndSplineMeshTask__6B_;
    *(FGLTFTaskBuilder **)((longlong)FVar4 + 0x10) = this_01;
    *(UStaticMesh **)((longlong)FVar4 + 0x20) = param_1;
    *(UStaticMeshComponent **)((longlong)FVar4 + 0x28) = param_2;
    *(undefined8 *)((longlong)FVar4 + 0x30) = 0;
    FGLTFMaterialArray::FGLTFMaterialArray((FGLTFMaterialArray *)((longlong)FVar4 + 0x38),param_3);
    *(int *)((longlong)FVar4 + 0x48) = param_4;
    *(undefined ***)FVar4 = &___7FGLTFDelayedStaticMeshTask__6B_;
    *(FGLTFJsonMesh **)((longlong)FVar4 + 0x50) = pFVar3;
  }
  local_res8 = FVar4;
  FGLTFTaskBuilder::ScheduleSlowTask(this_01,(FGLTFDelayedTask *)&local_res8);
  if (*(void **)param_3 != (void *)0x0) {
    FMemory::Free(*(void **)param_3);
  }
  return pFVar3;
}

// Sanitize @ 14e612b50

void __thiscall
FGLTFStaticMeshConverter::Sanitize
          (FGLTFStaticMeshConverter *this,UStaticMesh **param_1,UStaticMeshComponent **param_2,
          FGLTFMaterialArray *param_3,int *param_4)

{
  int iVar1;
  UStaticMeshComponent *pUVar2;
  UStaticMesh *this_00;
  int iVar3;
  TArray<UPropertyValue_const_*,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  
  FGLTFMeshUtilities::ResolveMaterials
            ((TArray<UMaterialInterface_const_*,TSizedDefaultAllocator<32>_> *)param_3,*param_2,
             *param_1);
  FGLTFBuilder::ResolveProxies
            ((FGLTFBuilder *)this->_padding_,
             (TArray<UMaterialInterface_const_*,TSizedDefaultAllocator<32>_> *)param_3);
  pUVar2 = *param_2;
  this_00 = *param_1;
  iVar5 = *param_4;
  if (iVar5 < 1) {
    iVar1 = *(int *)(*(longlong *)(this->_padding_ + 0x18) + 0x98);
    iVar3 = -1;
    if (pUVar2 == (UStaticMeshComponent *)0x0) {
LAB_14e612be4:
      if (this_00 == (UStaticMesh *)0x0) {
        iVar5 = -1;
      }
      else {
        iVar5 = (this_00->MinLOD).Default;
      }
LAB_14e612bf3:
      if (iVar5 < iVar1) {
        iVar5 = iVar1;
      }
    }
    else {
      iVar5 = pUVar2->ForcedLodModel + -1;
      if (iVar5 < 1) {
        if (pUVar2->bOverrideMinLOD == '\0') goto LAB_14e612be4;
        iVar5 = pUVar2->MinLOD;
        goto LAB_14e612bf3;
      }
    }
    if (this_00 == (UStaticMesh *)0x0) goto LAB_14e612c06;
  }
  else if (this_00 == (UStaticMesh *)0x0) {
    iVar3 = -1;
    goto LAB_14e612c06;
  }
  iVar3 = UStaticMesh::GetNumLODs(this_00);
  iVar3 = iVar3 + -1;
LAB_14e612c06:
  if (iVar5 < iVar3) {
    iVar3 = iVar5;
  }
  *param_4 = iVar3;
  if (*param_2 != (UStaticMeshComponent *)0x0) {
    pTVar4 = TMapBase<UObject_const_*,TArray<UPropertyValue_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TArray<UPropertyValue_const_*,TSizedDefaultAllocator<32>_>,0>_>
             ::Find((TMapBase<UObject_const_*,TArray<UPropertyValue_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TArray<UPropertyValue_const_*,TSizedDefaultAllocator<32>_>,0>_>
                     *)(this->_padding_ + 0x958),(UObject *)*param_2);
    if (pTVar4 == (TArray<UPropertyValue_const_*,TSizedDefaultAllocator<32>_> *)0x0) {
      *param_2 = (UStaticMeshComponent *)0x0;
    }
  }
  return;
}

