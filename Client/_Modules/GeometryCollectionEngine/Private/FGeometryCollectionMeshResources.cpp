// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 5

// ~FGeometryCollectionMeshResources @ 1463a5540

void __thiscall
FGeometryCollectionMeshResources::~FGeometryCollectionMeshResources
          (FGeometryCollectionMeshResources *this)

{
  FStaticMeshVertexDataInterface *pFVar1;
  FRHIShaderResourceView *this_00;
  
  (this->BoneMapVertexBuffer)._padding_ = (longlong)&___7FBoneMapVertexBuffer__6B_;
  pFVar1 = (this->BoneMapVertexBuffer).BoneMapData;
  if (pFVar1 != (FStaticMeshVertexDataInterface *)0x0) {
    (**(code **)*pFVar1)(pFVar1,1);
  }
  (this->BoneMapVertexBuffer).BoneMapData = (FStaticMeshVertexDataInterface *)0x0;
  this_00 = (this->BoneMapVertexBuffer).VertexBufferSRV.Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)&this->BoneMapVertexBuffer);
  FColorVertexBuffer::~FColorVertexBuffer(&this->ColorVertexBuffer);
  FStaticMeshVertexBuffer::~FStaticMeshVertexBuffer(&this->StaticMeshVertexBuffer);
  FPositionVertexBuffer::~FPositionVertexBuffer(&this->PositionVertexBuffer);
  FRawStaticIndexBuffer::~FRawStaticIndexBuffer(&this->IndexBuffer);
  return;
}

// operator= @ 1463a6130

FGeometryCollectionMeshResources * __thiscall
FGeometryCollectionMeshResources::operator=
          (FGeometryCollectionMeshResources *this,FGeometryCollectionMeshResources *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  FRHIShaderResourceView *this_00;
  FRHIShaderResourceView *this_01;
  void *_Dst;
  void *_Src;
  
  FIndexBuffer::operator=((FIndexBuffer *)this,(FIndexBuffer *)param_1);
  plVar1 = &(param_1->IndexBuffer).IndexStorage._padding_;
  plVar2 = &(this->IndexBuffer).IndexStorage._padding_;
  if (plVar2 != plVar1) {
    _Src = (void *)*plVar1;
    piVar3 = (int *)((longlong)&(this->IndexBuffer).IndexStorage._padding_ + 4);
    iVar4 = *piVar3;
    iVar5 = (int)(param_1->IndexBuffer).IndexStorage._padding_;
    if (((ulonglong)_Src & 1) != 0) {
      _Src = (void *)((longlong)plVar1 + ((longlong)_Src >> 0x18));
    }
    *(int *)&(this->IndexBuffer).IndexStorage._padding_ = iVar5;
    if ((iVar5 == 0) && (iVar4 == 0)) {
      *piVar3 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (1,1,iVar5,iVar4,(ForAnyElementType *)plVar2,iVar5,piVar3);
      _Dst = (void *)*plVar2;
      if (((ulonglong)_Dst & 1) != 0) {
        _Dst = (void *)((longlong)plVar2 + ((longlong)_Dst >> 0x18));
      }
      if (iVar5 != 0) {
        memcpy(_Dst,_Src,(longlong)iVar5);
      }
    }
  }
  (this->IndexBuffer).IndexStorage.bNeedsCPUAccess =
       (param_1->IndexBuffer).IndexStorage.bNeedsCPUAccess;
  (this->IndexBuffer).CachedNumIndices = (param_1->IndexBuffer).CachedNumIndices;
  (this->IndexBuffer).b32Bit = (param_1->IndexBuffer).b32Bit;
  FPositionVertexBuffer::operator=(&this->PositionVertexBuffer,&param_1->PositionVertexBuffer);
  FStaticMeshVertexBuffer::operator=(&this->StaticMeshVertexBuffer,&param_1->StaticMeshVertexBuffer)
  ;
  FColorVertexBuffer::operator=(&this->ColorVertexBuffer,&param_1->ColorVertexBuffer);
  FVertexBuffer::operator=
            ((FVertexBuffer *)&this->BoneMapVertexBuffer,
             (FVertexBuffer *)&param_1->BoneMapVertexBuffer);
  (this->BoneMapVertexBuffer).NumVertices = (param_1->BoneMapVertexBuffer).NumVertices;
  (this->BoneMapVertexBuffer).bNeedsCPUAccess = (param_1->BoneMapVertexBuffer).bNeedsCPUAccess;
  this_00 = (param_1->BoneMapVertexBuffer).VertexBufferSRV.Reference;
  this_01 = (this->BoneMapVertexBuffer).VertexBufferSRV.Reference;
  if (this_01 != this_00) {
    (this->BoneMapVertexBuffer).VertexBufferSRV.Reference = this_00;
    if (this_00 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_00);
    }
    if (this_01 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)this_01);
    }
  }
  (this->BoneMapVertexBuffer).BoneMapData = (param_1->BoneMapVertexBuffer).BoneMapData;
  (this->BoneMapVertexBuffer).Data = (param_1->BoneMapVertexBuffer).Data;
  return this;
}

// InitResources @ 1463bb6e0

void __thiscall
FGeometryCollectionMeshResources::InitResources
          (FGeometryCollectionMeshResources *this,UGeometryCollection *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1->_padding_;
  (this->IndexBuffer)._padding_ = lVar1;
  (this->PositionVertexBuffer)._padding_ = lVar1;
  (this->StaticMeshVertexBuffer)._padding_ = lVar1;
  (this->ColorVertexBuffer)._padding_ = lVar1;
  (this->BoneMapVertexBuffer)._padding_ = lVar1;
  BeginInitResource((FRenderResource *)this,(FRenderCommandPipe *)0x0);
  BeginInitResource((FRenderResource *)&this->PositionVertexBuffer,(FRenderCommandPipe *)0x0);
  BeginInitResource((FRenderResource *)&this->StaticMeshVertexBuffer,(FRenderCommandPipe *)0x0);
  BeginInitResource((FRenderResource *)&this->ColorVertexBuffer,(FRenderCommandPipe *)0x0);
  BeginInitResource((FRenderResource *)&this->BoneMapVertexBuffer,(FRenderCommandPipe *)0x0);
  return;
}

// ReleaseResources @ 1463c2220

void __thiscall
FGeometryCollectionMeshResources::ReleaseResources(FGeometryCollectionMeshResources *this)

{
  BeginReleaseResource((FRenderResource *)this,(FRenderCommandPipe *)0x0);
  BeginReleaseResource((FRenderResource *)&this->PositionVertexBuffer,(FRenderCommandPipe *)0x0);
  BeginReleaseResource((FRenderResource *)&this->StaticMeshVertexBuffer,(FRenderCommandPipe *)0x0);
  BeginReleaseResource((FRenderResource *)&this->ColorVertexBuffer,(FRenderCommandPipe *)0x0);
  BeginReleaseResource((FRenderResource *)&this->BoneMapVertexBuffer,(FRenderCommandPipe *)0x0);
  return;
}

// Serialize @ 1463c49c0

void __thiscall
FGeometryCollectionMeshResources::Serialize
          (FGeometryCollectionMeshResources *this,FArchive *param_1)

{
  uint *puVar1;
  FStaticMeshVertexDataInterface *pFVar2;
  uchar *puVar3;
  bool bVar4;
  
  if (((param_1->field_0x28 & 1) == 0) || (1 < (int)GMaxRHIFeatureLevel)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  FRawStaticIndexBuffer::Serialize(&this->IndexBuffer,param_1,false);
  FPositionVertexBuffer::Serialize(&this->PositionVertexBuffer,param_1,bVar4);
  FStaticMeshVertexBuffer::Serialize(&this->StaticMeshVertexBuffer,param_1,false);
  FColorVertexBuffer::Serialize(&this->ColorVertexBuffer,param_1,false);
  (this->BoneMapVertexBuffer).bNeedsCPUAccess = bVar4;
  puVar1 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    puVar1 = &(this->BoneMapVertexBuffer).NumVertices;
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    (this->BoneMapVertexBuffer).NumVertices = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  if ((param_1->field_0x28 & 1) != 0) {
    FBoneMapVertexBuffer::AllocateData(&this->BoneMapVertexBuffer,bVar4);
  }
  pFVar2 = (this->BoneMapVertexBuffer).BoneMapData;
  if (pFVar2 != (FStaticMeshVertexDataInterface *)0x0) {
    (**(code **)((longlong)*pFVar2 + 0x40))(pFVar2,param_1,0);
    if ((this->BoneMapVertexBuffer).NumVertices == 0) {
      puVar3 = (uchar *)0x0;
    }
    else {
      puVar3 = (uchar *)(**(code **)((longlong)*(this->BoneMapVertexBuffer).BoneMapData + 0x30))();
    }
    (this->BoneMapVertexBuffer).Data = puVar3;
  }
  return;
}

