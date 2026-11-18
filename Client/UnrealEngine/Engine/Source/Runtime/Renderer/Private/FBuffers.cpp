// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// FBuffers @ 144a59d60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FBuffers * __thiscall RenderCurve::FRenderCurveSceneExtension::FBuffers::FBuffers(FBuffers *this)

{
  UE::RendererPrivateUtils::Implementation::FPersistentBuffer::FPersistentBuffer
            ((FPersistentBuffer *)this,0x200,L"RenderCurve.Scene.RenderCurveInstanceDataBuffer",true
            );
  (this->ClusterDataBuffer).Reference = (FRDGPooledBuffer *)0x0;
  return this;
}

// FBuffers @ 145665850

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FBuffers * __thiscall FSkinningSceneExtension::FBuffers::FBuffers(FBuffers *this)

{
  UE::RendererPrivateUtils::Implementation::FPersistentBuffer::FPersistentBuffer
            ((FPersistentBuffer *)this,GSkinningBuffersHeaderDataMinSizeBytes >> 2,
             L"Skinning.HeaderData",true);
  UE::RendererPrivateUtils::Implementation::FPersistentBuffer::FPersistentBuffer
            ((FPersistentBuffer *)&this->BoneHierarchyBuffer,
             GSkinningBuffersTransformDataMinSizeBytes >> 2,L"Skinning.BoneHierarchy",true);
  UE::RendererPrivateUtils::Implementation::FPersistentBuffer::FPersistentBuffer
            ((FPersistentBuffer *)&this->BoneObjectSpaceBuffer,
             GSkinningBuffersTransformDataMinSizeBytes >> 2,L"Skinning.BoneObjectSpace",true);
  UE::RendererPrivateUtils::Implementation::FPersistentBuffer::FPersistentBuffer
            ((FPersistentBuffer *)&this->TransformDataBuffer,
             GSkinningBuffersTransformDataMinSizeBytes >> 2,L"Skinning.BoneTransforms",true);
  return this;
}

