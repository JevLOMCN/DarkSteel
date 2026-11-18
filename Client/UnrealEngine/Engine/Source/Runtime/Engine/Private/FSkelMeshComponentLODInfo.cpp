// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// StaticStruct @ 14791c220

UScriptStruct * __cdecl FSkelMeshComponentLODInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSkelMeshComponentLODInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FSkelMeshComponentLODInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo,(UObject *)pUVar1,
                         L"SkelMeshComponentLODInfo");
  }
  return Z_Registration_Info_UScriptStruct_FSkelMeshComponentLODInfo.OuterSingleton;
}

// FSkelMeshComponentLODInfo @ 147929ab0

FSkelMeshComponentLODInfo * __thiscall
FSkelMeshComponentLODInfo::FSkelMeshComponentLODInfo(FSkelMeshComponentLODInfo *this)

{
  (this->HiddenMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HiddenMaterials).ArrayNum = 0;
  (this->HiddenMaterials).ArrayMax = 0;
  this->OverrideVertexColors = (FColorVertexBuffer *)0x0;
  this->OverrideSkinWeights = (FSkinWeightVertexBuffer *)0x0;
  this->OverrideProfileSkinWeights = (FSkinWeightVertexBuffer *)0x0;
  return this;
}

// ~FSkelMeshComponentLODInfo @ 14792ccd0

void __thiscall
FSkelMeshComponentLODInfo::~FSkelMeshComponentLODInfo(FSkelMeshComponentLODInfo *this)

{
  FColorVertexBuffer *pFVar1;
  FSkinWeightVertexBuffer *this_00;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = this->OverrideVertexColors;
  if (pFVar1 != (FColorVertexBuffer *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    this->OverrideVertexColors = (FColorVertexBuffer *)0x0;
  }
  this_00 = this->OverrideSkinWeights;
  if (this_00 != (FSkinWeightVertexBuffer *)0x0) {
    FSkinWeightVertexBuffer::~FSkinWeightVertexBuffer(this_00);
    ::operator_delete(this_00,0xa8);
    this->OverrideSkinWeights = (FSkinWeightVertexBuffer *)0x0;
  }
  if (this->OverrideProfileSkinWeights != (FSkinWeightVertexBuffer *)0x0) {
    this->OverrideProfileSkinWeights = (FSkinWeightVertexBuffer *)0x0;
  }
  pFVar2 = (this->HiddenMaterials).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// BeginReleaseOverrideSkinWeights @ 1479351c0

bool __thiscall
FSkelMeshComponentLODInfo::BeginReleaseOverrideSkinWeights(FSkelMeshComponentLODInfo *this)

{
  if (this->OverrideSkinWeights != (FSkinWeightVertexBuffer *)0x0) {
    FSkinWeightVertexBuffer::BeginReleaseResources(this->OverrideSkinWeights);
    return true;
  }
  return false;
}

// BeginReleaseOverrideVertexColors @ 1479351f0

bool __thiscall
FSkelMeshComponentLODInfo::BeginReleaseOverrideVertexColors(FSkelMeshComponentLODInfo *this)

{
  if (this->OverrideVertexColors != (FColorVertexBuffer *)0x0) {
    BeginReleaseResource
              ((FRenderResource *)this->OverrideVertexColors,&UE::RenderCommandPipe::SkeletalMesh);
    return true;
  }
  return false;
}

// CleanUpOverrideSkinWeights @ 147939280

void __thiscall
FSkelMeshComponentLODInfo::CleanUpOverrideSkinWeights(FSkelMeshComponentLODInfo *this)

{
  FSkinWeightVertexBuffer *this_00;
  
  this_00 = this->OverrideSkinWeights;
  if (this_00 != (FSkinWeightVertexBuffer *)0x0) {
    FSkinWeightVertexBuffer::~FSkinWeightVertexBuffer(this_00);
    ::operator_delete(this_00,0xa8);
    this->OverrideSkinWeights = (FSkinWeightVertexBuffer *)0x0;
  }
  if (this->OverrideProfileSkinWeights != (FSkinWeightVertexBuffer *)0x0) {
    this->OverrideProfileSkinWeights = (FSkinWeightVertexBuffer *)0x0;
  }
  return;
}

// CleanUpOverrideVertexColors @ 1479392e0

void __thiscall
FSkelMeshComponentLODInfo::CleanUpOverrideVertexColors(FSkelMeshComponentLODInfo *this)

{
  FColorVertexBuffer *pFVar1;
  
  pFVar1 = this->OverrideVertexColors;
  if (pFVar1 != (FColorVertexBuffer *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    this->OverrideVertexColors = (FColorVertexBuffer *)0x0;
  }
  return;
}

// EndReleaseOverrideSkinWeights @ 147941010

void __thiscall
FSkelMeshComponentLODInfo::EndReleaseOverrideSkinWeights(FSkelMeshComponentLODInfo *this)

{
  FSkinWeightVertexBuffer *this_00;
  
  this_00 = this->OverrideSkinWeights;
  if (this_00 != (FSkinWeightVertexBuffer *)0x0) {
    FSkinWeightVertexBuffer::~FSkinWeightVertexBuffer(this_00);
    ::operator_delete(this_00,0xa8);
    this->OverrideSkinWeights = (FSkinWeightVertexBuffer *)0x0;
  }
  if (this->OverrideProfileSkinWeights != (FSkinWeightVertexBuffer *)0x0) {
    this->OverrideProfileSkinWeights = (FSkinWeightVertexBuffer *)0x0;
  }
  return;
}

// EndReleaseOverrideVertexColors @ 147941070

void __thiscall
FSkelMeshComponentLODInfo::EndReleaseOverrideVertexColors(FSkelMeshComponentLODInfo *this)

{
  FColorVertexBuffer *pFVar1;
  
  pFVar1 = this->OverrideVertexColors;
  if (pFVar1 != (FColorVertexBuffer *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    this->OverrideVertexColors = (FColorVertexBuffer *)0x0;
  }
  return;
}

// ReleaseOverrideSkinWeightsAndBlock @ 147961ba0

void __thiscall
FSkelMeshComponentLODInfo::ReleaseOverrideSkinWeightsAndBlock(FSkelMeshComponentLODInfo *this)

{
  FSkinWeightVertexBuffer *this_00;
  
  if (this->OverrideSkinWeights != (FSkinWeightVertexBuffer *)0x0) {
    FSkinWeightVertexBuffer::BeginReleaseResources(this->OverrideSkinWeights);
    FlushRenderingCommands();
    this_00 = this->OverrideSkinWeights;
    if (this_00 != (FSkinWeightVertexBuffer *)0x0) {
      FSkinWeightVertexBuffer::~FSkinWeightVertexBuffer(this_00);
      ::operator_delete(this_00,0xa8);
      this->OverrideSkinWeights = (FSkinWeightVertexBuffer *)0x0;
    }
    if (this->OverrideProfileSkinWeights != (FSkinWeightVertexBuffer *)0x0) {
      this->OverrideProfileSkinWeights = (FSkinWeightVertexBuffer *)0x0;
    }
  }
  return;
}

// ReleaseOverrideVertexColorsAndBlock @ 147961c10

void __thiscall
FSkelMeshComponentLODInfo::ReleaseOverrideVertexColorsAndBlock(FSkelMeshComponentLODInfo *this)

{
  FColorVertexBuffer *pFVar1;
  
  if (this->OverrideVertexColors != (FColorVertexBuffer *)0x0) {
    BeginReleaseResource
              ((FRenderResource *)this->OverrideVertexColors,&UE::RenderCommandPipe::SkeletalMesh);
    FlushRenderingCommands();
    pFVar1 = this->OverrideVertexColors;
    if (pFVar1 != (FColorVertexBuffer *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
      this->OverrideVertexColors = (FColorVertexBuffer *)0x0;
    }
  }
  return;
}

