// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 3

// StaticStruct @ 148e429c0

UScriptStruct * __cdecl FNDIDynamicMeshSimCacheFrame::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNDIDynamicMeshSimCacheFrame.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNDIDynamicMeshSimCacheFrame.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNDIDynamicMeshSimCacheFrame,(UObject *)pUVar1,
                         L"NDIDynamicMeshSimCacheFrame");
  }
  return Z_Registration_Info_UScriptStruct_FNDIDynamicMeshSimCacheFrame.OuterSingleton;
}

// FNDIDynamicMeshSimCacheFrame @ 148ea3250

FNDIDynamicMeshSimCacheFrame * __thiscall
FNDIDynamicMeshSimCacheFrame::FNDIDynamicMeshSimCacheFrame
          (FNDIDynamicMeshSimCacheFrame *this,FNDIDynamicMeshSimCacheFrame *param_1)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FNDIDynamicMeshSimCacheSection,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FNDIDynamicMeshSimCacheSection *pFVar6;
  double dVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  
  pTVar1 = &this->IndexData;
  this->NumTriangles = param_1->NumTriangles;
  this->NumVertices = param_1->NumVertices;
  this->NumTexCoords = param_1->NumTexCoords;
  dVar7 = (param_1->LocalBounds).Min.field0_0x0._s_0.Y;
  (this->LocalBounds).Min.field0_0x0._s_0.X = (param_1->LocalBounds).Min.field0_0x0._s_0.X;
  (this->LocalBounds).Min.field0_0x0._s_0.Y = dVar7;
  dVar7 = (param_1->LocalBounds).Max.field0_0x0._s_0.X;
  (this->LocalBounds).Min.field0_0x0._s_0.Z = (param_1->LocalBounds).Min.field0_0x0._s_0.Z;
  (this->LocalBounds).Max.field0_0x0._s_0.X = dVar7;
  dVar7 = (param_1->LocalBounds).Max.field0_0x0._s_0.Z;
  (this->LocalBounds).Max.field0_0x0._s_0.Y = (param_1->LocalBounds).Max.field0_0x0._s_0.Y;
  (this->LocalBounds).Max.field0_0x0._s_0.Z = dVar7;
  uVar8 = (param_1->LocalBounds).Pad[0];
  uVar9 = (param_1->LocalBounds).Pad[1];
  uVar10 = (param_1->LocalBounds).Pad[2];
  uVar11 = (param_1->LocalBounds).Pad[3];
  uVar12 = (param_1->LocalBounds).Pad[4];
  uVar13 = (param_1->LocalBounds).Pad[5];
  uVar14 = (param_1->LocalBounds).Pad[6];
  (this->LocalBounds).IsValid = (param_1->LocalBounds).IsValid;
  (this->LocalBounds).Pad[0] = uVar8;
  (this->LocalBounds).Pad[1] = uVar9;
  (this->LocalBounds).Pad[2] = uVar10;
  (this->LocalBounds).Pad[3] = uVar11;
  (this->LocalBounds).Pad[4] = uVar12;
  (this->LocalBounds).Pad[5] = uVar13;
  (this->LocalBounds).Pad[6] = uVar14;
  this->VertexBufferSize = param_1->VertexBufferSize;
  this->PositionOffset = param_1->PositionOffset;
  this->TangentBasisOffset = param_1->TangentBasisOffset;
  this->TexCoordOffset = param_1->TexCoordOffset;
  this->ColorOffset = param_1->ColorOffset;
  piVar2 = &(this->IndexData).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->IndexData).ArrayNum;
  pFVar5 = (param_1->IndexData).AllocatorInstance.Data;
  (this->IndexData).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar5,(longlong)iVar4);
  }
  pTVar1 = &this->VertexData;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->VertexData).ArrayMax;
  iVar4 = (param_1->VertexData).ArrayNum;
  pFVar5 = (param_1->VertexData).AllocatorInstance.Data;
  (this->VertexData).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar5,(longlong)iVar4);
  }
  pTVar3 = &this->Sections;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Sections).ArrayMax;
  iVar4 = (param_1->Sections).ArrayNum;
  pFVar6 = (FNDIDynamicMeshSimCacheSection *)(param_1->Sections).AllocatorInstance.Data;
  (this->Sections).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar2);
    ConstructItems<FNDIDynamicMeshSimCacheSection,FNDIDynamicMeshSimCacheSection,int>
              ((pTVar3->AllocatorInstance).Data,pFVar6,iVar4);
  }
  return this;
}

// Equals @ 148eb5d70

bool __thiscall
FNDIDynamicMeshSimCacheFrame::Equals
          (FNDIDynamicMeshSimCacheFrame *this,FNDIDynamicMeshSimCacheFrame *param_1,
          TArrayView<unsigned_char_const_,int> *param_2,
          TArrayView<unsigned_char_const_,int> *param_3)

{
  uchar uVar1;
  bool bVar2;
  int iVar3;
  
  if (((this->NumTriangles == param_1->NumTriangles) && (this->NumVertices == param_1->NumVertices))
     && (this->NumTexCoords == param_1->NumTexCoords)) {
    uVar1 = (param_1->LocalBounds).IsValid;
    if ((this->LocalBounds).IsValid == '\0') {
      if (uVar1 != '\0') {
        return false;
      }
    }
    else {
      if (uVar1 == '\0') {
        return false;
      }
      if ((param_1->LocalBounds).Min.field0_0x0._s_0.X != (this->LocalBounds).Min.field0_0x0._s_0.X)
      {
        return false;
      }
      if ((param_1->LocalBounds).Min.field0_0x0._s_0.Y != (this->LocalBounds).Min.field0_0x0._s_0.Y)
      {
        return false;
      }
      if ((param_1->LocalBounds).Min.field0_0x0._s_0.Z != (this->LocalBounds).Min.field0_0x0._s_0.Z)
      {
        return false;
      }
      if ((param_1->LocalBounds).Max.field0_0x0._s_0.X != (this->LocalBounds).Max.field0_0x0._s_0.X)
      {
        return false;
      }
      if ((param_1->LocalBounds).Max.field0_0x0._s_0.Y != (this->LocalBounds).Max.field0_0x0._s_0.Y)
      {
        return false;
      }
      if ((param_1->LocalBounds).Max.field0_0x0._s_0.Z != (this->LocalBounds).Max.field0_0x0._s_0.Z)
      {
        return false;
      }
    }
    if (((((this->VertexBufferSize == param_1->VertexBufferSize) &&
          (this->PositionOffset == param_1->PositionOffset)) &&
         ((this->TangentBasisOffset == param_1->TangentBasisOffset &&
          ((this->TexCoordOffset == param_1->TexCoordOffset &&
           (this->ColorOffset == param_1->ColorOffset)))))) &&
        (iVar3 = (this->Sections).ArrayNum, iVar3 == (param_1->Sections).ArrayNum)) &&
       (bVar2 = CompareItems<FNDIDynamicMeshSimCacheSection,int>
                          ((FNDIDynamicMeshSimCacheSection *)(this->Sections).AllocatorInstance.Data
                           ,(FNDIDynamicMeshSimCacheSection *)
                            (param_1->Sections).AllocatorInstance.Data,iVar3), bVar2)) {
      iVar3 = (this->IndexData).ArrayNum;
      if (iVar3 == param_2->ArrayNum) {
        if ((iVar3 != 0) &&
           (iVar3 = memcmp(param_2->DataPtr,(this->IndexData).AllocatorInstance.Data,(longlong)iVar3
                          ), iVar3 != 0)) {
          return false;
        }
        iVar3 = (this->VertexData).ArrayNum;
        if (iVar3 == param_3->ArrayNum) {
          if ((iVar3 != 0) &&
             (iVar3 = memcmp(param_3->DataPtr,(this->VertexData).AllocatorInstance.Data,
                             (longlong)iVar3), iVar3 != 0)) {
            return false;
          }
          return true;
        }
      }
    }
  }
  return false;
}

