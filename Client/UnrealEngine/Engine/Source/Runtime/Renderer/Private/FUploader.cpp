// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// FUploader @ 1450376a0

FUploader * __thiscall Nanite::FMaterialsSceneExtension::FUploader::FUploader(FUploader *this)

{
  int *piVar1;
  
  (this->PrimitiveDataUploader)._padding_ =
       (longlong)
       &
       ___7__TBufferScatterUploader_UFPackedPrimitiveData_FMaterialsSceneExtension_Nanite__UFByteAddressBufferTraits_Implementation_RendererPrivateUtils_UE___00_Implementation_RendererPrivateUtils_UE__6B_
  ;
  piVar1 = &(this->PrimitiveDataUploader).UploadData.ScatterOffsets.ArrayMax;
  (this->PrimitiveDataUploader).UploadDataProxy = (FUploadData *)0x0;
  *piVar1 = 0;
  (this->PrimitiveDataUploader).UploadData.Values.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PrimitiveDataUploader).UploadData.Values.ArrayNum = 0;
  (this->PrimitiveDataUploader).UploadData.Values.ArrayMax = 0;
  (this->PrimitiveDataUploader).UploadData.ScatterOffsets.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PrimitiveDataUploader).UploadData.ScatterOffsets.ArrayNum = 0;
  if ((this->PrimitiveDataUploader).UploadData.ScatterOffsets.ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->PrimitiveDataUploader).UploadData.ScatterOffsets.AllocatorInstance,
               (this->PrimitiveDataUploader).UploadData.ScatterOffsets.ArrayNum,piVar1);
  }
  (this->MaterialDataUploader).UploadData.ScatterOffsets.ArrayMax = 0;
  (this->MaterialDataUploader)._padding_ =
       (longlong)
       &
       ___7__TBufferScatterUploader_IUFByteAddressBufferTraits_Implementation_RendererPrivateUtils_UE___01_Implementation_RendererPrivateUtils_UE__6B_
  ;
  (this->MaterialDataUploader).UploadDataProxy = (FUploadData *)0x0;
  (this->MaterialDataUploader).UploadData.Values.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MaterialDataUploader).UploadData.Values.ArrayNum = 0;
  (this->MaterialDataUploader).UploadData.Values.ArrayMax = 0;
  (this->MaterialDataUploader).UploadData.ScatterOffsets.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MaterialDataUploader).UploadData.ScatterOffsets.ArrayNum = 0;
  if ((this->MaterialDataUploader).UploadData.ScatterOffsets.ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->MaterialDataUploader).UploadData.ScatterOffsets.AllocatorInstance,
               (this->MaterialDataUploader).UploadData.ScatterOffsets.ArrayNum,
               &(this->MaterialDataUploader).UploadData.ScatterOffsets.ArrayMax);
  }
  return this;
}

// FUploader @ 145666680

FUploader * __thiscall FSkinningSceneExtension::FUploader::FUploader(FUploader *this)

{
  int *piVar1;
  
  (this->HeaderDataUploader)._padding_ =
       (longlong)
       &
       ___7__TBufferScatterUploader_UFSkinningHeader__UFByteAddressBufferTraits_Implementation_RendererPrivateUtils_UE___00_Implementation_RendererPrivateUtils_UE__6B_
  ;
  piVar1 = &(this->HeaderDataUploader).UploadData.ScatterOffsets.ArrayMax;
  (this->HeaderDataUploader).UploadDataProxy = (FUploadData *)0x0;
  *piVar1 = 0;
  (this->HeaderDataUploader).UploadData.Values.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->HeaderDataUploader).UploadData.Values.ArrayNum = 0;
  (this->HeaderDataUploader).UploadData.Values.ArrayMax = 0;
  (this->HeaderDataUploader).UploadData.ScatterOffsets.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->HeaderDataUploader).UploadData.ScatterOffsets.ArrayNum = 0;
  if ((this->HeaderDataUploader).UploadData.ScatterOffsets.ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->HeaderDataUploader).UploadData.ScatterOffsets.AllocatorInstance,
               (this->HeaderDataUploader).UploadData.ScatterOffsets.ArrayNum,piVar1);
  }
  (this->BoneHierarchyUploader).UploadData.ScatterOffsets.ArrayMax = 0;
  (this->BoneHierarchyUploader)._padding_ =
       (longlong)
       &
       ___7__TBufferScatterUploader_IUFByteAddressBufferTraits_Implementation_RendererPrivateUtils_UE___00_Implementation_RendererPrivateUtils_UE__6B_
  ;
  (this->BoneHierarchyUploader).UploadDataProxy = (FUploadData *)0x0;
  (this->BoneHierarchyUploader).UploadData.Values.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->BoneHierarchyUploader).UploadData.Values.ArrayNum = 0;
  (this->BoneHierarchyUploader).UploadData.Values.ArrayMax = 0;
  (this->BoneHierarchyUploader).UploadData.ScatterOffsets.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->BoneHierarchyUploader).UploadData.ScatterOffsets.ArrayNum = 0;
  if ((this->BoneHierarchyUploader).UploadData.ScatterOffsets.ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->BoneHierarchyUploader).UploadData.ScatterOffsets.AllocatorInstance,
               (this->BoneHierarchyUploader).UploadData.ScatterOffsets.ArrayNum,
               &(this->BoneHierarchyUploader).UploadData.ScatterOffsets.ArrayMax);
  }
  (this->BoneObjectSpaceUploader).UploadDataProxy = (FUploadData *)0x0;
  (this->BoneObjectSpaceUploader)._padding_ =
       (longlong)
       &
       ___7__TBufferScatterUploader_MUFByteAddressBufferTraits_Implementation_RendererPrivateUtils_UE___00_Implementation_RendererPrivateUtils_UE__6B_
  ;
  piVar1 = &(this->BoneObjectSpaceUploader).UploadData.ScatterOffsets.ArrayMax;
  (this->BoneObjectSpaceUploader).UploadData.Values.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  (this->BoneObjectSpaceUploader).UploadData.Values.ArrayNum = 0;
  (this->BoneObjectSpaceUploader).UploadData.Values.ArrayMax = 0;
  (this->BoneObjectSpaceUploader).UploadData.ScatterOffsets.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->BoneObjectSpaceUploader).UploadData.ScatterOffsets.ArrayNum = 0;
  if ((this->BoneObjectSpaceUploader).UploadData.ScatterOffsets.ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->BoneObjectSpaceUploader).UploadData.ScatterOffsets.AllocatorInstance,
               (this->BoneObjectSpaceUploader).UploadData.ScatterOffsets.ArrayNum,piVar1);
  }
  (this->TransformDataUploader).UploadDataProxy = (FUploadData *)0x0;
  (this->TransformDataUploader)._padding_ =
       (longlong)
       &
       ___7__TBufferScatterUploader_UFMatrix3x4__UFByteAddressBufferTraits_Implementation_RendererPrivateUtils_UE___00_Implementation_RendererPrivateUtils_UE__6B_
  ;
  piVar1 = &(this->TransformDataUploader).UploadData.ScatterOffsets.ArrayMax;
  (this->TransformDataUploader).UploadData.Values.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  (this->TransformDataUploader).UploadData.Values.ArrayNum = 0;
  (this->TransformDataUploader).UploadData.Values.ArrayMax = 0;
  (this->TransformDataUploader).UploadData.ScatterOffsets.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TransformDataUploader).UploadData.ScatterOffsets.ArrayNum = 0;
  if ((this->TransformDataUploader).UploadData.ScatterOffsets.ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->TransformDataUploader).UploadData.ScatterOffsets.AllocatorInstance,
               (this->TransformDataUploader).UploadData.ScatterOffsets.ArrayNum,piVar1);
  }
  return this;
}

