// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// FGameToRenderData @ 148ea2de0

FGameToRenderData * __thiscall
NDIDynamicMeshLocal::FGameToRenderData::FGameToRenderData
          (FGameToRenderData *this,FGameToRenderData *param_1)

{
  double dVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  
  this->bGpuUsesDynamicAllocation = param_1->bGpuUsesDynamicAllocation;
  this->NumTriangles = param_1->NumTriangles;
  this->NumVertices = param_1->NumVertices;
  this->NumTexCoords = param_1->NumTexCoords;
  dVar1 = (param_1->LocalBounds).Min.field0_0x0._s_0.Y;
  (this->LocalBounds).Min.field0_0x0._s_0.X = (param_1->LocalBounds).Min.field0_0x0._s_0.X;
  (this->LocalBounds).Min.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->LocalBounds).Max.field0_0x0._s_0.X;
  (this->LocalBounds).Min.field0_0x0._s_0.Z = (param_1->LocalBounds).Min.field0_0x0._s_0.Z;
  (this->LocalBounds).Max.field0_0x0._s_0.X = dVar1;
  dVar1 = (param_1->LocalBounds).Max.field0_0x0._s_0.Z;
  (this->LocalBounds).Max.field0_0x0._s_0.Y = (param_1->LocalBounds).Max.field0_0x0._s_0.Y;
  (this->LocalBounds).Max.field0_0x0._s_0.Z = dVar1;
  uVar2 = (param_1->LocalBounds).Pad[0];
  uVar3 = (param_1->LocalBounds).Pad[1];
  uVar4 = (param_1->LocalBounds).Pad[2];
  uVar5 = (param_1->LocalBounds).Pad[3];
  uVar6 = (param_1->LocalBounds).Pad[4];
  uVar7 = (param_1->LocalBounds).Pad[5];
  uVar8 = (param_1->LocalBounds).Pad[6];
  (this->LocalBounds).IsValid = (param_1->LocalBounds).IsValid;
  (this->LocalBounds).Pad[0] = uVar2;
  (this->LocalBounds).Pad[1] = uVar3;
  (this->LocalBounds).Pad[2] = uVar4;
  (this->LocalBounds).Pad[3] = uVar5;
  (this->LocalBounds).Pad[4] = uVar6;
  (this->LocalBounds).Pad[5] = uVar7;
  (this->LocalBounds).Pad[6] = uVar8;
  this->VertexBufferSize = param_1->VertexBufferSize;
  this->PositionOffset = param_1->PositionOffset;
  this->TangentBasisOffset = param_1->TangentBasisOffset;
  this->TexCoordOffset = param_1->TexCoordOffset;
  this->ColorOffset = param_1->ColorOffset;
  TResourceArray<unsigned_char,0>::TResourceArray<unsigned_char,0>
            (&this->IndexData,&param_1->IndexData);
  TResourceArray<unsigned_char,0>::TResourceArray<unsigned_char,0>
            (&this->VertexData,&param_1->VertexData);
  (this->MeshSections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshSections).AllocatorInstance.Data = (param_1->MeshSections).AllocatorInstance.Data;
  (param_1->MeshSections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshSections).ArrayNum = (param_1->MeshSections).ArrayNum;
  (this->MeshSections).ArrayMax = (param_1->MeshSections).ArrayMax;
  (param_1->MeshSections).ArrayNum = 0;
  (param_1->MeshSections).ArrayMax = 0;
  return this;
}

// FGameToRenderData @ 148ea2ec0

FGameToRenderData * __thiscall
NDIDynamicMeshLocal::FGameToRenderData::FGameToRenderData
          (FGameToRenderData *this,FNDIInstanceData_GameThread *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int *piVar4;
  TArray<NDIDynamicMeshLocal::FNDIInstanceSection,TSizedDefaultAllocator<32>_> *pTVar5;
  longlong *plVar6;
  int *piVar7;
  int iVar8;
  double dVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  uchar uVar15;
  uchar uVar16;
  int iVar17;
  int iVar18;
  void *pvVar19;
  FScriptContainerElement *pFVar20;
  FScriptContainerElement *pFVar21;
  int iVar22;
  undefined1 local_res8 [8];
  
  this->bGpuUsesDynamicAllocation = false;
  plVar1 = &(this->IndexData)._padding_;
  plVar2 = &(this->IndexData)._padding_;
  this->NumTriangles = 0;
  this->NumVertices = 0;
  this->NumTexCoords = 0;
  (this->LocalBounds).Min.field0_0x0._s_0.X = -100.0;
  pTVar5 = &this->MeshSections;
  (this->LocalBounds).Min.field0_0x0._s_0.Y = -100.0;
  plVar6 = &(this->VertexData)._padding_;
  (this->LocalBounds).Min.field0_0x0._s_0.Z = -100.0;
  piVar7 = (int *)((longlong)&(this->VertexData)._padding_ + 4);
  piVar3 = &(this->MeshSections).ArrayMax;
  (this->LocalBounds).Max.field0_0x0._s_0.X = 100.0;
  (this->LocalBounds).Max.field0_0x0._s_0.Y = 100.0;
  (this->LocalBounds).Max.field0_0x0._s_0.Z = 100.0;
  (this->LocalBounds).IsValid = '\x01';
  this->PositionOffset = 0xffffffff;
  this->TangentBasisOffset = 0xffffffff;
  this->TexCoordOffset = 0xffffffff;
  this->ColorOffset = 0xffffffff;
  this->VertexBufferSize = 0;
  piVar4 = (int *)((longlong)&(this->IndexData)._padding_ + 4);
  *piVar4 = 0;
  *(undefined4 *)plVar2 = 0;
  *plVar1 = 0;
  (this->IndexData)._padding_ = (longlong)&___7__TResourceArray_E_0A___6B_;
  (this->IndexData).bNeedsCPUAccess = false;
  (this->VertexData)._padding_ = 0;
  *(undefined4 *)plVar6 = 0;
  *piVar7 = 0;
  (this->VertexData)._padding_ = (longlong)&___7__TResourceArray_E_0A___6B_;
  (this->VertexData).bNeedsCPUAccess = false;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->MeshSections).ArrayNum = 0;
  *piVar3 = 0;
  this->bGpuUsesDynamicAllocation = param_1->bGpuUsesDynamicAllocation;
  this->NumTriangles = param_1->NumTriangles;
  this->NumVertices = param_1->NumVertices;
  this->NumTexCoords = param_1->NumTexCoords;
  dVar9 = (param_1->LocalBounds).Min.field0_0x0._s_0.Y;
  (this->LocalBounds).Min.field0_0x0._s_0.X = (param_1->LocalBounds).Min.field0_0x0._s_0.X;
  (this->LocalBounds).Min.field0_0x0._s_0.Y = dVar9;
  dVar9 = (param_1->LocalBounds).Max.field0_0x0._s_0.X;
  (this->LocalBounds).Min.field0_0x0._s_0.Z = (param_1->LocalBounds).Min.field0_0x0._s_0.Z;
  (this->LocalBounds).Max.field0_0x0._s_0.X = dVar9;
  dVar9 = (param_1->LocalBounds).Max.field0_0x0._s_0.Z;
  (this->LocalBounds).Max.field0_0x0._s_0.Y = (param_1->LocalBounds).Max.field0_0x0._s_0.Y;
  (this->LocalBounds).Max.field0_0x0._s_0.Z = dVar9;
  uVar10 = (param_1->LocalBounds).Pad[0];
  uVar11 = (param_1->LocalBounds).Pad[1];
  uVar12 = (param_1->LocalBounds).Pad[2];
  uVar13 = (param_1->LocalBounds).Pad[3];
  uVar14 = (param_1->LocalBounds).Pad[4];
  uVar15 = (param_1->LocalBounds).Pad[5];
  uVar16 = (param_1->LocalBounds).Pad[6];
  (this->LocalBounds).IsValid = (param_1->LocalBounds).IsValid;
  (this->LocalBounds).Pad[0] = uVar10;
  (this->LocalBounds).Pad[1] = uVar11;
  (this->LocalBounds).Pad[2] = uVar12;
  (this->LocalBounds).Pad[3] = uVar13;
  (this->LocalBounds).Pad[4] = uVar14;
  (this->LocalBounds).Pad[5] = uVar15;
  (this->LocalBounds).Pad[6] = uVar16;
  this->VertexBufferSize = param_1->VertexBufferSize;
  this->PositionOffset = param_1->PositionOffset;
  this->TangentBasisOffset = param_1->TangentBasisOffset;
  this->TexCoordOffset = param_1->TexCoordOffset;
  this->ColorOffset = param_1->ColorOffset;
  UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
            (1,1,(param_1->IndexData).ArrayNum,(ForAnyElementType *)plVar1,(int *)plVar2,piVar4);
  pvVar19 = (void *)(this->IndexData)._padding_;
  if (((ulonglong)pvVar19 & 1) != 0) {
    pvVar19 = (void *)((longlong)(&this->LocalBounds + 1) + ((longlong)pvVar19 >> 0x18) + 0x20);
  }
  memcpy(pvVar19,(param_1->IndexData).AllocatorInstance.Data,
         (longlong)(int)(this->IndexData)._padding_);
  UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
            (1,1,(param_1->VertexData).ArrayNum,(ForAnyElementType *)&(this->VertexData)._padding_,
             (int *)plVar6,piVar7);
  plVar1 = &(this->VertexData)._padding_;
  pvVar19 = (void *)*plVar1;
  if (((ulonglong)pvVar19 & 1) != 0) {
    pvVar19 = (void *)(((longlong)pvVar19 >> 0x18) + (longlong)plVar1);
  }
  memcpy(pvVar19,(param_1->VertexData).AllocatorInstance.Data,
         (longlong)(int)(this->VertexData)._padding_);
  if (pTVar5 != &param_1->Sections) {
    iVar8 = (param_1->Sections).ArrayNum;
    pFVar20 = (param_1->Sections).AllocatorInstance.Data;
    (this->MeshSections).ArrayNum = iVar8;
    if ((iVar8 == 0) && (*piVar3 == 0)) {
      *piVar3 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,iVar8,*piVar3,&pTVar5->AllocatorInstance,iVar8,piVar3);
      if (iVar8 != 0) {
        memcpy((pTVar5->AllocatorInstance).Data,pFVar20,(longlong)iVar8 << 4);
      }
    }
  }
  iVar8 = (this->MeshSections).ArrayNum;
  iVar17 = (param_1->Materials).ArrayNum + -1;
  pFVar20 = (pTVar5->AllocatorInstance).Data;
  iVar22 = 0;
  if (0 < iVar17) {
    iVar22 = iVar17;
  }
  pFVar21 = pFVar20 + (longlong)iVar8 * 0x10;
  while( true ) {
    if ((this->MeshSections).ArrayNum != iVar8) {
      `TCheckedPointerIterator<NDIDynamicMeshLocal::FNDIInstanceSection,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar20 == pFVar21) break;
    iVar17 = iVar22;
    if (*(int *)(pFVar20 + 0xc) < iVar22) {
      iVar17 = *(int *)(pFVar20 + 0xc);
    }
    iVar18 = 0;
    if (0 < iVar17) {
      iVar18 = iVar17;
    }
    *(int *)(pFVar20 + 0xc) = iVar18;
    pFVar20 = pFVar20 + 0x10;
  }
  return this;
}

