// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralMeshComponent
// Functions: 5

// StaticStruct @ 14d261fb0

UScriptStruct * __cdecl FProcMeshSection::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FProcMeshSection.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProceduralMeshComponent();
    Z_Registration_Info_UScriptStruct_FProcMeshSection.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FProcMeshSection,(UObject *)pUVar1,
                         L"ProcMeshSection");
  }
  return Z_Registration_Info_UScriptStruct_FProcMeshSection.OuterSingleton;
}

// FProcMeshSection @ 14d264820

FProcMeshSection * __thiscall
FProcMeshSection::FProcMeshSection(FProcMeshSection *this,FProcMeshSection *param_1)

{
  double dVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  
  (this->ProcVertexBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProcVertexBuffer).AllocatorInstance.Data =
       (param_1->ProcVertexBuffer).AllocatorInstance.Data;
  (param_1->ProcVertexBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProcVertexBuffer).ArrayNum = (param_1->ProcVertexBuffer).ArrayNum;
  (this->ProcVertexBuffer).ArrayMax = (param_1->ProcVertexBuffer).ArrayMax;
  (param_1->ProcVertexBuffer).ArrayNum = 0;
  (param_1->ProcVertexBuffer).ArrayMax = 0;
  (this->ProcIndexBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProcIndexBuffer).AllocatorInstance.Data = (param_1->ProcIndexBuffer).AllocatorInstance.Data
  ;
  (param_1->ProcIndexBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProcIndexBuffer).ArrayNum = (param_1->ProcIndexBuffer).ArrayNum;
  (this->ProcIndexBuffer).ArrayMax = (param_1->ProcIndexBuffer).ArrayMax;
  (param_1->ProcIndexBuffer).ArrayNum = 0;
  (param_1->ProcIndexBuffer).ArrayMax = 0;
  dVar1 = (param_1->SectionLocalBox).Min.field0_0x0._s_0.Y;
  (this->SectionLocalBox).Min.field0_0x0._s_0.X = (param_1->SectionLocalBox).Min.field0_0x0._s_0.X;
  (this->SectionLocalBox).Min.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->SectionLocalBox).Max.field0_0x0._s_0.X;
  (this->SectionLocalBox).Min.field0_0x0._s_0.Z = (param_1->SectionLocalBox).Min.field0_0x0._s_0.Z;
  (this->SectionLocalBox).Max.field0_0x0._s_0.X = dVar1;
  dVar1 = (param_1->SectionLocalBox).Max.field0_0x0._s_0.Z;
  (this->SectionLocalBox).Max.field0_0x0._s_0.Y = (param_1->SectionLocalBox).Max.field0_0x0._s_0.Y;
  (this->SectionLocalBox).Max.field0_0x0._s_0.Z = dVar1;
  uVar2 = (param_1->SectionLocalBox).Pad[0];
  uVar3 = (param_1->SectionLocalBox).Pad[1];
  uVar4 = (param_1->SectionLocalBox).Pad[2];
  uVar5 = (param_1->SectionLocalBox).Pad[3];
  uVar6 = (param_1->SectionLocalBox).Pad[4];
  uVar7 = (param_1->SectionLocalBox).Pad[5];
  uVar8 = (param_1->SectionLocalBox).Pad[6];
  (this->SectionLocalBox).IsValid = (param_1->SectionLocalBox).IsValid;
  (this->SectionLocalBox).Pad[0] = uVar2;
  (this->SectionLocalBox).Pad[1] = uVar3;
  (this->SectionLocalBox).Pad[2] = uVar4;
  (this->SectionLocalBox).Pad[3] = uVar5;
  (this->SectionLocalBox).Pad[4] = uVar6;
  (this->SectionLocalBox).Pad[5] = uVar7;
  (this->SectionLocalBox).Pad[6] = uVar8;
  this->bEnableCollision = param_1->bEnableCollision;
  this->bSectionVisible = param_1->bSectionVisible;
  return this;
}

// FProcMeshSection @ 14d2648a0

FProcMeshSection * __thiscall
FProcMeshSection::FProcMeshSection(FProcMeshSection *this,FProcMeshSection *param_1)

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
  
  piVar1 = &(this->ProcVertexBuffer).ArrayMax;
  (this->ProcVertexBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->ProcVertexBuffer).ArrayNum;
  pFVar4 = (param_1->ProcVertexBuffer).AllocatorInstance.Data;
  (this->ProcVertexBuffer).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x98,8,iVar3,0,(ForAnyElementType *)this,iVar3,piVar1);
    memcpy((this->ProcVertexBuffer).AllocatorInstance.Data,pFVar4,(longlong)iVar3 * 0x98);
  }
  pTVar2 = &this->ProcIndexBuffer;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->ProcIndexBuffer).ArrayMax;
  iVar3 = (param_1->ProcIndexBuffer).ArrayNum;
  pFVar4 = (param_1->ProcIndexBuffer).AllocatorInstance.Data;
  (this->ProcIndexBuffer).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar4,(longlong)iVar3 << 2);
  }
  dVar5 = (param_1->SectionLocalBox).Min.field0_0x0._s_0.Y;
  (this->SectionLocalBox).Min.field0_0x0._s_0.X = (param_1->SectionLocalBox).Min.field0_0x0._s_0.X;
  (this->SectionLocalBox).Min.field0_0x0._s_0.Y = dVar5;
  dVar5 = (param_1->SectionLocalBox).Max.field0_0x0._s_0.X;
  (this->SectionLocalBox).Min.field0_0x0._s_0.Z = (param_1->SectionLocalBox).Min.field0_0x0._s_0.Z;
  (this->SectionLocalBox).Max.field0_0x0._s_0.X = dVar5;
  dVar5 = (param_1->SectionLocalBox).Max.field0_0x0._s_0.Z;
  (this->SectionLocalBox).Max.field0_0x0._s_0.Y = (param_1->SectionLocalBox).Max.field0_0x0._s_0.Y;
  (this->SectionLocalBox).Max.field0_0x0._s_0.Z = dVar5;
  uVar6 = (param_1->SectionLocalBox).Pad[0];
  uVar7 = (param_1->SectionLocalBox).Pad[1];
  uVar8 = (param_1->SectionLocalBox).Pad[2];
  uVar9 = (param_1->SectionLocalBox).Pad[3];
  uVar10 = (param_1->SectionLocalBox).Pad[4];
  uVar11 = (param_1->SectionLocalBox).Pad[5];
  uVar12 = (param_1->SectionLocalBox).Pad[6];
  (this->SectionLocalBox).IsValid = (param_1->SectionLocalBox).IsValid;
  (this->SectionLocalBox).Pad[0] = uVar6;
  (this->SectionLocalBox).Pad[1] = uVar7;
  (this->SectionLocalBox).Pad[2] = uVar8;
  (this->SectionLocalBox).Pad[3] = uVar9;
  (this->SectionLocalBox).Pad[4] = uVar10;
  (this->SectionLocalBox).Pad[5] = uVar11;
  (this->SectionLocalBox).Pad[6] = uVar12;
  this->bEnableCollision = param_1->bEnableCollision;
  this->bSectionVisible = param_1->bSectionVisible;
  return this;
}

// operator= @ 14d265a30

FProcMeshSection * __thiscall
FProcMeshSection::operator=(FProcMeshSection *this,FProcMeshSection *param_1)

{
  double dVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  
  TArray<FProcMeshVertex,TSizedDefaultAllocator<32>_>::operator=
            (&this->ProcVertexBuffer,&param_1->ProcVertexBuffer);
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=
            (&this->ProcIndexBuffer,&param_1->ProcIndexBuffer);
  dVar1 = (param_1->SectionLocalBox).Min.field0_0x0._s_0.Y;
  (this->SectionLocalBox).Min.field0_0x0._s_0.X = (param_1->SectionLocalBox).Min.field0_0x0._s_0.X;
  (this->SectionLocalBox).Min.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->SectionLocalBox).Max.field0_0x0._s_0.X;
  (this->SectionLocalBox).Min.field0_0x0._s_0.Z = (param_1->SectionLocalBox).Min.field0_0x0._s_0.Z;
  (this->SectionLocalBox).Max.field0_0x0._s_0.X = dVar1;
  dVar1 = (param_1->SectionLocalBox).Max.field0_0x0._s_0.Z;
  (this->SectionLocalBox).Max.field0_0x0._s_0.Y = (param_1->SectionLocalBox).Max.field0_0x0._s_0.Y;
  (this->SectionLocalBox).Max.field0_0x0._s_0.Z = dVar1;
  uVar2 = (param_1->SectionLocalBox).Pad[0];
  uVar3 = (param_1->SectionLocalBox).Pad[1];
  uVar4 = (param_1->SectionLocalBox).Pad[2];
  uVar5 = (param_1->SectionLocalBox).Pad[3];
  uVar6 = (param_1->SectionLocalBox).Pad[4];
  uVar7 = (param_1->SectionLocalBox).Pad[5];
  uVar8 = (param_1->SectionLocalBox).Pad[6];
  (this->SectionLocalBox).IsValid = (param_1->SectionLocalBox).IsValid;
  (this->SectionLocalBox).Pad[0] = uVar2;
  (this->SectionLocalBox).Pad[1] = uVar3;
  (this->SectionLocalBox).Pad[2] = uVar4;
  (this->SectionLocalBox).Pad[3] = uVar5;
  (this->SectionLocalBox).Pad[4] = uVar6;
  (this->SectionLocalBox).Pad[5] = uVar7;
  (this->SectionLocalBox).Pad[6] = uVar8;
  this->bEnableCollision = param_1->bEnableCollision;
  this->bSectionVisible = param_1->bSectionVisible;
  return this;
}

// Reset @ 14d276200

void __thiscall FProcMeshSection::Reset(FProcMeshSection *this)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  
  piVar1 = &(this->ProcVertexBuffer).ArrayMax;
  (this->ProcVertexBuffer).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x98,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  piVar1 = &(this->ProcIndexBuffer).ArrayMax;
  (this->ProcIndexBuffer).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->ProcIndexBuffer).AllocatorInstance,0,piVar1);
  }
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->SectionLocalBox).Max.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->SectionLocalBox).Max.field0_0x0._s_0.Y = (double)uVar5;
  (this->SectionLocalBox).Max.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar3 = (this->SectionLocalBox).Max.field0_0x0._s_0.X;
  dVar4 = (this->SectionLocalBox).Max.field0_0x0._s_0.Y;
  (this->SectionLocalBox).IsValid = '\0';
  dVar2 = (this->SectionLocalBox).Max.field0_0x0._s_0.Z;
  (this->SectionLocalBox).Min.field0_0x0._s_0.X = dVar3;
  (this->SectionLocalBox).Min.field0_0x0._s_0.Y = dVar4;
  (this->SectionLocalBox).Min.field0_0x0._s_0.Z = dVar2;
  this->bEnableCollision = false;
  this->bSectionVisible = true;
  return;
}

