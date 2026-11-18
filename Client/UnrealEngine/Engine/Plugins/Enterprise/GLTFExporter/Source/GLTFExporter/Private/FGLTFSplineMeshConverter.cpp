// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 3

// FGLTFSplineMeshConverter @ 14e5d2d50

FGLTFSplineMeshConverter * __thiscall
FGLTFSplineMeshConverter::FGLTFSplineMeshConverter
          (FGLTFSplineMeshConverter *this,FGLTFConvertBuilder *param_1)

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
  this->_padding_ = (longlong)&___7FGLTFSplineMeshConverter__6B_;
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

// Convert @ 14e5eb670

FGLTFJsonMesh * __thiscall
FGLTFSplineMeshConverter::Convert
          (FGLTFSplineMeshConverter *this,UStaticMesh *param_1,USplineMeshComponent *param_2,
          FGLTFMaterialArray *param_3,int param_4)

{
  FGLTFLogBuilder *this_00;
  FGLTFTaskBuilder *this_01;
  int iVar1;
  FGLTFJsonMesh *pFVar2;
  FName FVar3;
  int iVar4;
  FName local_res8;
  FString local_48;
  FString local_38;
  
  if (param_1 == (UStaticMesh *)0x0) {
    iVar4 = 0;
  }
  else {
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
    iVar4 = (param_1->StaticMaterials).ArrayNum;
  }
  pFVar2 = FGLTFJsonBuilder::AddMesh((FGLTFJsonBuilder *)this->_padding_);
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x98,8,iVar4,&(pFVar2->Primitives).AllocatorInstance,
                     &(pFVar2->Primitives).ArrayNum,&(pFVar2->Primitives).ArrayMax);
  DefaultConstructItems<FGLTFJsonPrimitive,int>
            ((pFVar2->Primitives).AllocatorInstance.Data + (longlong)iVar1 * 0x98,iVar4);
  if ((param_1 != (UStaticMesh *)0x0) && (param_2 != (USplineMeshComponent *)0x0)) {
    this_01 = (FGLTFTaskBuilder *)this->_padding_;
    FVar3 = (FName)::operator_new(0x58);
    if (FVar3 == (FName)0x0) {
      FVar3.ComparisonIndex.Value = 0;
      FVar3.Number = 0;
    }
    else {
      *(undefined1 *)((longlong)FVar3 + 8) = 1;
      *(TGLTFMeshSectionConverter<UStaticMesh> **)((longlong)FVar3 + 0x18) =
           &this->MeshSectionConverter;
      *(undefined ***)FVar3 = &___7FGLTFDelayedStaticAndSplineMeshTask__6B_;
      *(FGLTFTaskBuilder **)((longlong)FVar3 + 0x10) = this_01;
      *(UStaticMesh **)((longlong)FVar3 + 0x20) = param_1;
      *(undefined8 *)((longlong)FVar3 + 0x28) = 0;
      *(USplineMeshComponent **)((longlong)FVar3 + 0x30) = param_2;
      FGLTFMaterialArray::FGLTFMaterialArray((FGLTFMaterialArray *)((longlong)FVar3 + 0x38),param_3)
      ;
      *(int *)((longlong)FVar3 + 0x48) = param_4;
      *(undefined ***)FVar3 = &___7FGLTFDelayedSplineMeshTask__6B_;
      *(FGLTFJsonMesh **)((longlong)FVar3 + 0x50) = pFVar2;
    }
    local_res8 = FVar3;
    FGLTFTaskBuilder::ScheduleSlowTask(this_01,(FGLTFDelayedTask *)&local_res8);
  }
  if (*(void **)param_3 != (void *)0x0) {
    FMemory::Free(*(void **)param_3);
  }
  return pFVar2;
}

// Sanitize @ 14e612a70

void __thiscall
FGLTFSplineMeshConverter::Sanitize
          (FGLTFSplineMeshConverter *this,UStaticMesh **param_1,USplineMeshComponent **param_2,
          FGLTFMaterialArray *param_3,int *param_4)

{
  int iVar1;
  USplineMeshComponent *pUVar2;
  UStaticMesh *this_00;
  int iVar3;
  int iVar4;
  
  FGLTFMeshUtilities::ResolveMaterials
            ((TArray<UMaterialInterface_const_*,TSizedDefaultAllocator<32>_> *)param_3,
             (UStaticMeshComponent *)*param_2,*param_1);
  FGLTFBuilder::ResolveProxies
            ((FGLTFBuilder *)this->_padding_,
             (TArray<UMaterialInterface_const_*,TSizedDefaultAllocator<32>_> *)param_3);
  pUVar2 = *param_2;
  this_00 = *param_1;
  iVar4 = *param_4;
  if (iVar4 < 1) {
    iVar1 = *(int *)(*(longlong *)(this->_padding_ + 0x18) + 0x98);
    iVar3 = -1;
    if (pUVar2 == (USplineMeshComponent *)0x0) {
LAB_14e612afe:
      if (this_00 == (UStaticMesh *)0x0) {
        iVar4 = -1;
      }
      else {
        iVar4 = (this_00->MinLOD).Default;
      }
LAB_14e612b0d:
      if (iVar4 < iVar1) {
        iVar4 = iVar1;
      }
    }
    else {
      iVar4 = (int)pUVar2->_padding_ + -1;
      if (iVar4 < 1) {
        if ((pUVar2->_padding_ & 0x80000000000) == 0) goto LAB_14e612afe;
        iVar4 = *(int *)((longlong)&pUVar2->_padding_ + 4);
        goto LAB_14e612b0d;
      }
    }
    if (this_00 == (UStaticMesh *)0x0) goto LAB_14e612b20;
  }
  else if (this_00 == (UStaticMesh *)0x0) {
    iVar3 = -1;
    goto LAB_14e612b20;
  }
  iVar3 = UStaticMesh::GetNumLODs(this_00);
  iVar3 = iVar3 + -1;
LAB_14e612b20:
  if (iVar4 < iVar3) {
    iVar3 = iVar4;
  }
  *param_4 = iVar3;
  return;
}

