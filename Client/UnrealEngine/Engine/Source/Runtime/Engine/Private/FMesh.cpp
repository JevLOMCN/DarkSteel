// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FMesh @ 147abbf60

FMesh * __thiscall FDebugRenderSceneProxy::FMesh::FMesh(FMesh *this,FMesh *param_1)

{
  int *piVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  double dVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  
  piVar1 = &(this->Vertices).ArrayMax;
  (this->Vertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Vertices).ArrayNum;
  pFVar4 = (param_1->Vertices).AllocatorInstance.Data;
  (this->Vertices).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,4,iVar3,0,(ForAnyElementType *)this,iVar3,piVar1);
    memcpy((this->Vertices).AllocatorInstance.Data,pFVar4,(longlong)iVar3 * 0x58);
  }
  pTVar2 = &this->Indices;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Indices).ArrayMax;
  iVar3 = (param_1->Indices).ArrayNum;
  pFVar4 = (param_1->Indices).AllocatorInstance.Data;
  (this->Indices).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar4,(longlong)iVar3 << 2);
  }
  dVar5 = (param_1->Box).Min.field0_0x0._s_0.Y;
  (this->Box).Min.field0_0x0._s_0.X = (param_1->Box).Min.field0_0x0._s_0.X;
  (this->Box).Min.field0_0x0._s_0.Y = dVar5;
  dVar5 = (param_1->Box).Max.field0_0x0._s_0.X;
  (this->Box).Min.field0_0x0._s_0.Z = (param_1->Box).Min.field0_0x0._s_0.Z;
  (this->Box).Max.field0_0x0._s_0.X = dVar5;
  dVar5 = (param_1->Box).Max.field0_0x0._s_0.Z;
  (this->Box).Max.field0_0x0._s_0.Y = (param_1->Box).Max.field0_0x0._s_0.Y;
  (this->Box).Max.field0_0x0._s_0.Z = dVar5;
  uVar6 = (param_1->Box).Pad[0];
  uVar7 = (param_1->Box).Pad[1];
  uVar8 = (param_1->Box).Pad[2];
  uVar9 = (param_1->Box).Pad[3];
  uVar10 = (param_1->Box).Pad[4];
  uVar11 = (param_1->Box).Pad[5];
  uVar12 = (param_1->Box).Pad[6];
  (this->Box).IsValid = (param_1->Box).IsValid;
  (this->Box).Pad[0] = uVar6;
  (this->Box).Pad[1] = uVar7;
  (this->Box).Pad[2] = uVar8;
  (this->Box).Pad[3] = uVar9;
  (this->Box).Pad[4] = uVar10;
  (this->Box).Pad[5] = uVar11;
  (this->Box).Pad[6] = uVar12;
  (this->Color).field0_0x0 = (param_1->Color).field0_0x0;
  return this;
}

// FMesh @ 147abc070

FMesh * __thiscall FDebugRenderSceneProxy::FMesh::FMesh(FMesh *this)

{
  (this->Vertices).ArrayNum = 0;
  (this->Vertices).ArrayMax = 0;
  (this->Indices).ArrayNum = 0;
  (this->Indices).ArrayMax = 0;
  (this->Box).Min.field0_0x0._s_0.X = 0.0;
  (this->Box).Min.field0_0x0._s_0.Y = 0.0;
  (this->Box).Min.field0_0x0._s_0.Z = 0.0;
  (this->Box).Max.field0_0x0._s_0.X = 0.0;
  (this->Box).Max.field0_0x0._s_0.Y = 0.0;
  (this->Box).Max.field0_0x0._s_0.Z = 0.0;
  (this->Vertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Indices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Box).IsValid = '\0';
  (this->Box).Pad[0] = '\0';
  (this->Box).Pad[1] = '\0';
  (this->Box).Pad[2] = '\0';
  (this->Box).Pad[3] = '\0';
  (this->Box).Pad[4] = '\0';
  (this->Box).Pad[5] = '\0';
  (this->Box).Pad[6] = '\0';
  (this->Color).field0_0x0._s_0 = (FColor_u_0_s_0)FColor::White.field0_0x0;
  return this;
}

// ~FMesh @ 147abf180

void __thiscall FDebugRenderSceneProxy::FMesh::~FMesh(FMesh *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Indices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Vertices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

