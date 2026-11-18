// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 224

// Construct<FMetaSoundAssetTagClassCollections> @ 14ad6acd0

void __cdecl UE::CoreUObject::Private::Construct<FMetaSoundAssetTagClassCollections>(void *param_1)

{
  return;
}

// ConstructForTests<FMetaSoundAssetTagClassCollections> @ 14ad6ace0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMetaSoundAssetTagClassCollections>(void *param_1)

{
  return;
}

// Construct<FMetasoundFrontendDocumentMetadata> @ 14ad6ad80

void __cdecl UE::CoreUObject::Private::Construct<FMetasoundFrontendDocumentMetadata>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 1;
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FMetasoundFrontendDocumentMetadata> @ 14ad6ae30

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMetasoundFrontendDocumentMetadata>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 1;
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FMetasoundFrontendDocumentMetadata> @ 14ad6aec0

void __cdecl UE::CoreUObject::Private::Destruct<FMetasoundFrontendDocumentMetadata>(void *param_1)

{
  return;
}

// Construct<FMetasoundFrontendVertexLiteral> @ 14ad6b330

void __cdecl UE::CoreUObject::Private::Construct<FMetasoundFrontendVertexLiteral>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(FGuid *)param_1 = Metasound::FrontendInvalidID;
  return;
}

// ConstructForTests<FMetasoundFrontendVertexLiteral> @ 14ad6b3e0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMetasoundFrontendVertexLiteral>(void *param_1)

{
  *(FGuid *)param_1 = Metasound::FrontendInvalidID;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  return;
}

// Copy<FMetasoundFrontendDocumentMetadata> @ 14ad6b4e0

bool __cdecl
UE::CoreUObject::Private::Copy<FMetasoundFrontendDocumentMetadata>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Destruct<FMetasoundFrontendVertexLiteral> @ 14ad6b670

void __cdecl UE::CoreUObject::Private::Destruct<FMetasoundFrontendVertexLiteral>(void *param_1)

{
  FMetasoundFrontendLiteral::~FMetasoundFrontendLiteral
            ((FMetasoundFrontendLiteral *)((longlong)param_1 + 0x10));
  return;
}

// Copy<FMetasoundFrontendVertexLiteral> @ 14ad6b930

bool __cdecl
UE::CoreUObject::Private::Copy<FMetasoundFrontendVertexLiteral>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      FMetasoundFrontendLiteral::operator=
                ((FMetasoundFrontendLiteral *)(puVar3 + 2),
                 (FMetasoundFrontendLiteral *)
                 ((longlong)puVar3 + ((longlong)param_2 - (longlong)param_1) + 0x10));
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 0xd;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMetasoundFrontendClassEnvironmentVariable> @ 14ad6bac0

void __cdecl
UE::CoreUObject::Private::Construct<FMetasoundFrontendClassEnvironmentVariable>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0x11) = 0;
  *(undefined1 *)((longlong)param_1 + 0x13) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// ConstructForTests<FMetasoundFrontendClassEnvironmentVariable> @ 14ad6bae0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMetasoundFrontendClassEnvironmentVariable>
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FMetasoundFrontendClassEnvironmentVariable> @ 14ad6bb10

void __cdecl
UE::CoreUObject::Private::Destruct<FMetasoundFrontendClassEnvironmentVariable>(void *param_1)

{
  return;
}

// Copy<FMetasoundFrontendClassEnvironmentVariable> @ 14ad6bb60

bool __cdecl
UE::CoreUObject::Private::Copy<FMetasoundFrontendClassEnvironmentVariable>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined4 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      *(undefined4 *)(puVar4 + 2) = uVar2;
      param_3 = param_3 + -1;
      puVar4 = (undefined8 *)((longlong)puVar4 + 0x14);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMetaSoundAssetTagCollections> @ 14ad6c6d0

void __cdecl UE::CoreUObject::Private::Construct<FMetaSoundAssetTagCollections>(void *param_1)

{
  return;
}

// ConstructForTests<FMetaSoundAssetTagCollections> @ 14ad6c7d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMetaSoundAssetTagCollections>(void *param_1)

{
  return;
}

// Construct<FMetasoundFrontendGraphClass> @ 14ad6d070

void __cdecl UE::CoreUObject::Private::Construct<FMetasoundFrontendGraphClass>(void *param_1)

{
  FGuid FVar1;
  
  *(undefined ***)param_1 = &___7FMetasoundFrontendClass__6B_;
  FVar1 = Metasound::FrontendInvalidID;
  *(undefined ***)param_1 = &___7FMetasoundFrontendGraphClass__6B_;
  *(FGuid *)((longlong)param_1 + 8) = FVar1;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 1;
  *(undefined2 *)((longlong)param_1 + 0x3a) = 2;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined1 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xd8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  return;
}

// ConstructForTests<FMetasoundFrontendGraphClass> @ 14ad6d080

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMetasoundFrontendGraphClass>(void *param_1)

{
  FGuid FVar1;
  
  *(undefined ***)param_1 = &___7FMetasoundFrontendClass__6B_;
  FVar1 = Metasound::FrontendInvalidID;
  *(undefined ***)param_1 = &___7FMetasoundFrontendGraphClass__6B_;
  *(FGuid *)((longlong)param_1 + 8) = FVar1;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 1;
  *(undefined2 *)((longlong)param_1 + 0x3a) = 2;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined1 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xd8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  return;
}

// Destruct<FMetasoundFrontendGraphClass> @ 14ad6d0d0

void __cdecl UE::CoreUObject::Private::Destruct<FMetasoundFrontendGraphClass>(void *param_1)

{
  *(undefined ***)param_1 = &___7FMetasoundFrontendGraphClass__6B_;
  *(undefined4 *)((longlong)param_1 + 0xf0) = 0;
  if (*(void **)((longlong)param_1 + 0xe8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xe8));
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0xa8));
  DestructItems<FMetasoundFrontendGraph,int>
            (*(FMetasoundFrontendGraph **)((longlong)param_1 + 0x90),
             *(int *)((longlong)param_1 + 0x98));
  if (*(void **)((longlong)param_1 + 0x90) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x90));
  }
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  if (*(void **)((longlong)param_1 + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x60));
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            (*(FMetasoundFrontendClassInput **)((longlong)param_1 + 0x50),
             *(int *)((longlong)param_1 + 0x58));
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
  }
  return;
}

// Construct<FMetasoundFrontendVertexHandle> @ 14ad6d3b0

void __cdecl UE::CoreUObject::Private::Construct<FMetasoundFrontendVertexHandle>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FMetasoundFrontendVertexHandle> @ 14ad6d3d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMetasoundFrontendVertexHandle>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Copy<FMetasoundFrontendGraphClass> @ 14ad6d3f0

bool __cdecl
UE::CoreUObject::Private::Copy<FMetasoundFrontendGraphClass>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  FMetasoundFrontendGraph *pFVar4;
  undefined8 uVar5;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar5 = *(undefined8 *)((longlong)param_2 + 0x10);
    *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
    *(undefined8 *)((longlong)param_1 + 0x10) = uVar5;
    uVar5 = *(undefined8 *)((longlong)param_2 + 0x20);
    *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_2 + 0x18);
    *(undefined8 *)((longlong)param_1 + 0x20) = uVar5;
    uVar5 = *(undefined8 *)((longlong)param_2 + 0x30);
    *(undefined8 *)((longlong)param_1 + 0x28) = *(undefined8 *)((longlong)param_2 + 0x28);
    *(undefined8 *)((longlong)param_1 + 0x30) = uVar5;
    uVar5 = *(undefined8 *)((longlong)param_2 + 0x40);
    *(undefined8 *)((longlong)param_1 + 0x38) = *(undefined8 *)((longlong)param_2 + 0x38);
    *(undefined8 *)((longlong)param_1 + 0x40) = uVar5;
    *(undefined4 *)((longlong)param_1 + 0x48) = *(undefined4 *)((longlong)param_2 + 0x48);
    FMetasoundFrontendClassInterface::operator=
              ((FMetasoundFrontendClassInterface *)((longlong)param_1 + 0x50),
               (FMetasoundFrontendClassInterface *)((longlong)param_2 + 0x50));
    pFVar2 = (ForAnyElementType *)((longlong)param_1 + 0x90);
    if (pFVar2 != (ForAnyElementType *)((longlong)param_2 + 0x90)) {
      DestructItems<FMetasoundFrontendGraph,int>
                ((FMetasoundFrontendGraph *)pFVar2->Data,*(int *)((longlong)param_1 + 0x98));
      iVar3 = *(int *)((longlong)param_2 + 0x98);
      piVar1 = (int *)((longlong)param_1 + 0x9c);
      pFVar4 = (FMetasoundFrontendGraph *)((ForAnyElementType *)((longlong)param_2 + 0x90))->Data;
      *(int *)((longlong)param_1 + 0x98) = iVar3;
      if ((iVar3 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,8,iVar3,*piVar1,pFVar2,iVar3,piVar1);
        ConstructItems<FMetasoundFrontendGraph,FMetasoundFrontendGraph,int>
                  (pFVar2->Data,pFVar4,iVar3);
      }
    }
    *(undefined1 *)((longlong)param_1 + 0xa0) = *(undefined1 *)((longlong)param_2 + 0xa0);
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
               ((longlong)param_1 + 0xa8),
               (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
               ((longlong)param_2 + 0xa8));
    param_2 = (void *)((longlong)param_2 + 0xf8);
    param_1 = (void *)((longlong)param_1 + 0xf8);
  }
  return true;
}

// Destruct<FMetasoundFrontendVertexHandle> @ 14ad6d550

void __cdecl UE::CoreUObject::Private::Destruct<FMetasoundFrontendVertexHandle>(void *param_1)

{
  return;
}

// Copy<FMetasoundFrontendVertexHandle> @ 14ad6d610

bool __cdecl
UE::CoreUObject::Private::Copy<FMetasoundFrontendVertexHandle>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      puVar1 = (undefined8 *)(lVar6 + (longlong)param_1);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(lVar6 + 0x10 + (longlong)param_1);
      uVar4 = *puVar2;
      uVar5 = puVar2[1];
      *(undefined8 *)param_1 = *puVar1;
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      param_1 = (void *)((longlong)param_1 + 0x20);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// GetStructTypeHash<FMetasoundFrontendVertexHandle> @ 14ad6d900

uint __cdecl
UE::CoreUObject::Private::GetStructTypeHash<FMetasoundFrontendVertexHandle>(void *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)param_1;
  return *(int *)((longlong)param_1 + 0x1c) + -0x61c88647 + uVar1 * 0x40 + (uVar1 >> 2) ^ uVar1;
}

// Construct<FMetasoundFrontendClassOutput> @ 14ad6e200

void __cdecl UE::CoreUObject::Private::Construct<FMetasoundFrontendClassOutput>(void *param_1)

{
  FGuid FVar1;
  
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  FVar1 = Metasound::FrontendInvalidID;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(FGuid *)((longlong)param_1 + 0x20) = FVar1;
  return;
}

// ConstructForTests<FMetasoundFrontendClassOutput> @ 14ad6e240

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMetasoundFrontendClassOutput>(void *param_1)

{
  FGuid FVar1;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  FVar1 = Metasound::FrontendInvalidID;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(FGuid *)((longlong)param_1 + 0x20) = FVar1;
  return;
}

// Destruct<FMetasoundFrontendClassOutput> @ 14ad6e270

void __cdecl UE::CoreUObject::Private::Destruct<FMetasoundFrontendClassOutput>(void *param_1)

{
  return;
}

// Copy<FMetasoundFrontendClassOutput> @ 14ad6e280

bool __cdecl
UE::CoreUObject::Private::Copy<FMetasoundFrontendClassOutput>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  if (param_3 != 0) {
    lVar8 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined4 *)(lVar8 + 0x30 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar8 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar8 + 0x10 + (longlong)param_1);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      puVar1 = (undefined8 *)(lVar8 + 0x20 + (longlong)param_1);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar8 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar7;
      *(undefined4 *)((longlong)param_1 + 0x30) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x34);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMetaSoundAssetKey> @ 14ad6e4c0

void __cdecl UE::CoreUObject::Private::Construct<FMetaSoundAssetKey>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x18) = 1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FMetaSoundAssetKey> @ 14ad6e4e0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMetaSoundAssetKey>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x18) = 1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FMetaSoundAssetKey> @ 14ad6e500

void __cdecl UE::CoreUObject::Private::Destruct<FMetaSoundAssetKey>(void *param_1)

{
  return;
}

// Copy<FMetaSoundAssetKey> @ 14ad6e5a0

bool __cdecl
UE::CoreUObject::Private::Copy<FMetaSoundAssetKey>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      puVar1 = (undefined8 *)(lVar6 + (longlong)param_1);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(lVar6 + 0x10 + (longlong)param_1);
      uVar4 = *puVar2;
      uVar5 = puVar2[1];
      *(undefined8 *)param_1 = *puVar1;
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      param_1 = (void *)((longlong)param_1 + 0x20);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// GetStructTypeHash<FMetaSoundAssetKey> @ 14ad6e620

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FMetaSoundAssetKey>(void *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x18);
  iVar2 = *(int *)((longlong)param_1 + 0x1c);
  uVar3 = *(undefined8 *)((longlong)param_1 + 8);
  uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  uVar4 = *(undefined8 *)param_1;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
  uVar6 = uVar6 + (int)((ulonglong)uVar4 >> 0x20);
  uVar4 = *(undefined8 *)((longlong)param_1 + 0x10);
  uVar6 = uVar5 + (int)((ulonglong)uVar3 >> 0x20) + uVar6 * 0x40 + (uVar6 >> 2) + 0x9e3779b9 ^ uVar6
  ;
  uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
  uVar6 = uVar6 * 0x40 + (int)((ulonglong)uVar4 >> 0x20) + (uVar6 >> 2) + uVar5 + 0x9e3779b9 ^ uVar6
  ;
  return uVar6 * 0x40 + (iVar2 + -0x61c88647 + uVar1 * 0x40 + (uVar1 >> 2) ^ uVar1) + 0x9e3779b9 +
         (uVar6 >> 2) ^ uVar6;
}

// Construct<FMetasoundFrontendGraph> @ 14ad6e8c0

void __cdecl UE::CoreUObject::Private::Construct<FMetasoundFrontendGraph>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// ConstructForTests<FMetasoundFrontendGraph> @ 14ad6e8f0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMetasoundFrontendGraph>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// Destruct<FMetasoundFrontendGraph> @ 14ad6e920

void __cdecl UE::CoreUObject::Private::Destruct<FMetasoundFrontendGraph>(void *param_1)

{
  DestructItems<FMetasoundFrontendVariable,int>
            (*(FMetasoundFrontendVariable **)((longlong)param_1 + 0x20),
             *(int *)((longlong)param_1 + 0x28));
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  DestructItems<FMetasoundFrontendNode,int>
            (*(FMetasoundFrontendNode **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FMetasoundFrontendGraph> @ 14ad6ebe0

bool __cdecl
UE::CoreUObject::Private::Copy<FMetasoundFrontendGraph>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  ForAnyElementType *pFVar3;
  int iVar4;
  int iVar5;
  FMetasoundFrontendNode *pFVar6;
  FScriptContainerElement *pFVar7;
  FMetasoundFrontendVariable *pFVar8;
  ForAnyElementType *pFVar9;
  
  if (param_3 != 0) {
    pFVar9 = param_1;
    do {
      pFVar3 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar9);
      if (pFVar9 != pFVar3) {
        DestructItems<FMetasoundFrontendNode,int>
                  ((FMetasoundFrontendNode *)pFVar9->Data,*(int *)&pFVar9[1].Data);
        iVar4 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar9[1].Data + 4);
        pFVar6 = (FMetasoundFrontendNode *)pFVar3->Data;
        iVar5 = *piVar1;
        *(int *)&pFVar9[1].Data = iVar4;
        if ((iVar4 == 0) && (iVar5 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x88,8,iVar4,iVar5,pFVar9,iVar4,piVar1);
          ConstructItems<FMetasoundFrontendNode,FMetasoundFrontendNode,int>
                    (pFVar9->Data,pFVar6,iVar4);
        }
      }
      pFVar2 = pFVar9 + 2;
      if (pFVar2 != pFVar3 + 2) {
        iVar4 = *(int *)&pFVar3[3].Data;
        piVar1 = (int *)((longlong)&pFVar9[3].Data + 4);
        pFVar7 = pFVar3[2].Data;
        iVar5 = *piVar1;
        *(int *)&pFVar9[3].Data = iVar4;
        if ((iVar4 == 0) && (iVar5 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x40,4,iVar4,iVar5,pFVar2,iVar4,piVar1);
          if (iVar4 != 0) {
            memcpy(pFVar2->Data,pFVar7,(longlong)iVar4 << 6);
          }
        }
      }
      pFVar2 = pFVar9 + 4;
      if (pFVar2 != pFVar3 + 4) {
        DestructItems<FMetasoundFrontendVariable,int>
                  ((FMetasoundFrontendVariable *)pFVar2->Data,*(int *)&pFVar9[5].Data);
        iVar4 = *(int *)&pFVar3[5].Data;
        piVar1 = (int *)((longlong)&pFVar9[5].Data + 4);
        pFVar8 = (FMetasoundFrontendVariable *)pFVar3[4].Data;
        iVar5 = *piVar1;
        *(int *)&pFVar9[5].Data = iVar4;
        if ((iVar4 == 0) && (iVar5 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xb8,8,iVar4,iVar5,pFVar2,iVar4,piVar1);
          ConstructItems<FMetasoundFrontendVariable,FMetasoundFrontendVariable,int>
                    (pFVar2->Data,pFVar8,iVar4);
        }
      }
      pFVar7 = pFVar3[7].Data;
      pFVar9[6].Data = pFVar3[6].Data;
      pFVar9[7].Data = pFVar7;
      param_3 = param_3 + -1;
      pFVar9 = pFVar9 + 8;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMetasoundFrontendVertex> @ 14ad6efa0

void __cdecl UE::CoreUObject::Private::Construct<FMetasoundFrontendVertex>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FMetasoundFrontendVertex> @ 14ad6f010

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMetasoundFrontendVertex>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FMetasoundFrontendVertex> @ 14ad6f080

void __cdecl UE::CoreUObject::Private::Destruct<FMetasoundFrontendVertex>(void *param_1)

{
  return;
}

// Copy<FMetasoundFrontendVertex> @ 14ad6f120

bool __cdecl
UE::CoreUObject::Private::Copy<FMetasoundFrontendVertex>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      puVar1 = (undefined8 *)(lVar6 + (longlong)param_1);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(lVar6 + 0x10 + (longlong)param_1);
      uVar4 = *puVar2;
      uVar5 = puVar2[1];
      *(undefined8 *)param_1 = *puVar1;
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      param_1 = (void *)((longlong)param_1 + 0x20);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMetasoundFrontendClassVariable> @ 14ad6f1c0

void __cdecl UE::CoreUObject::Private::Construct<FMetasoundFrontendClassVariable>(void *param_1)

{
  FGuid FVar1;
  
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  FVar1 = Metasound::FrontendInvalidID;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(FGuid *)((longlong)param_1 + 0x20) = FVar1;
  *(undefined1 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  return;
}

// ConstructForTests<FMetasoundFrontendClassVariable> @ 14ad6f2c0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMetasoundFrontendClassVariable>(void *param_1)

{
  FGuid FVar1;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  FVar1 = Metasound::FrontendInvalidID;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(FGuid *)((longlong)param_1 + 0x20) = FVar1;
  *(undefined1 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  return;
}

// Destruct<FMetasoundFrontendClassVariable> @ 14ad6f390

void __cdecl UE::CoreUObject::Private::Destruct<FMetasoundFrontendClassVariable>(void *param_1)

{
  FMetasoundFrontendLiteral::~FMetasoundFrontendLiteral
            ((FMetasoundFrontendLiteral *)((longlong)param_1 + 0x38));
  return;
}

// Copy<FMetasoundFrontendClassVariable> @ 14ad6f530

bool __cdecl
UE::CoreUObject::Private::Copy<FMetasoundFrontendClassVariable>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = ((undefined8 *)(lVar2 + (longlong)param_1))[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar1;
      uVar1 = *(undefined8 *)((longlong)param_1 + lVar2 + 0x18);
      *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_1 + lVar2 + 0x10);
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar1;
      uVar1 = *(undefined8 *)((longlong)param_1 + lVar2 + 0x28);
      *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_1 + lVar2 + 0x20);
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar1;
      *(undefined4 *)((longlong)param_1 + 0x30) = *(undefined4 *)((longlong)param_1 + lVar2 + 0x30);
      FMetasoundFrontendLiteral::operator=
                ((FMetasoundFrontendLiteral *)((longlong)param_1 + 0x38),
                 (FMetasoundFrontendLiteral *)((longlong)param_1 + lVar2 + 0x38));
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x90);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMetasoundFrontendGraphClassPresetOptions> @ 14ad703a0

void __cdecl
UE::CoreUObject::Private::Construct<FMetasoundFrontendGraphClassPresetOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffffffff;
  return;
}

// ConstructForTests<FMetasoundFrontendGraphClassPresetOptions> @ 14ad703e0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMetasoundFrontendGraphClassPresetOptions>
          (void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  return;
}

// Destruct<FMetasoundFrontendGraphClassPresetOptions> @ 14ad70420

void __cdecl
UE::CoreUObject::Private::Destruct<FMetasoundFrontendGraphClassPresetOptions>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 8));
  return;
}

// Copy<FMetasoundFrontendGraphClassPresetOptions> @ 14ad704d0

bool __cdecl
UE::CoreUObject::Private::Copy<FMetasoundFrontendGraphClassPresetOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined1 *puVar1;
  
  if (param_3 != 0) {
    puVar1 = param_1;
    do {
      *puVar1 = puVar1[(longlong)param_2 - (longlong)param_1];
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
                ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(puVar1 + 8),
                 (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
                 (puVar1 + ((longlong)param_2 - (longlong)param_1) + 8));
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 0x58;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMetasoundFrontendVersion> @ 14ad70560

void __cdecl UE::CoreUObject::Private::Construct<FMetasoundFrontendVersion>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 1;
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FMetasoundFrontendVersion> @ 14ad70600

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMetasoundFrontendVersion>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 1;
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FMetasoundFrontendVersion> @ 14ad706e0

void __cdecl UE::CoreUObject::Private::Destruct<FMetasoundFrontendVersion>(void *param_1)

{
  return;
}

// Copy<FMetasoundFrontendVersion> @ 14ad707b0

bool __cdecl
UE::CoreUObject::Private::Copy<FMetasoundFrontendVersion>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// GetStructTypeHash<FMetasoundFrontendVersion> @ 14ad70880

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FMetasoundFrontendVersion>(void *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  
  uVar1 = *(uint *)((longlong)param_1 + 8);
  iVar2 = *(int *)((longlong)param_1 + 0xc);
  uVar3 = *(undefined8 *)param_1;
  uVar4 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  uVar4 = uVar4 + (int)((ulonglong)uVar3 >> 0x20);
  return uVar4 * 0x40 + (iVar2 + -0x61c88647 + uVar1 * 0x40 + (uVar1 >> 2) ^ uVar1) +
         (uVar4 >> 2) + 0x9e3779b9 ^ uVar4;
}

// Construct<FMetasoundFrontendClassInput> @ 14ad70990

void __cdecl UE::CoreUObject::Private::Construct<FMetasoundFrontendClassInput>(void *param_1)

{
  FGuid FVar1;
  
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  FVar1 = Metasound::FrontendInvalidID;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(FGuid *)((longlong)param_1 + 0x20) = FVar1;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// ConstructForTests<FMetasoundFrontendClassInput> @ 14ad709e0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMetasoundFrontendClassInput>(void *param_1)

{
  FGuid FVar1;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  FVar1 = Metasound::FrontendInvalidID;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(FGuid *)((longlong)param_1 + 0x20) = FVar1;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// Destruct<FMetasoundFrontendClassInput> @ 14ad70a10

void __cdecl UE::CoreUObject::Private::Destruct<FMetasoundFrontendClassInput>(void *param_1)

{
  DestructItems<FMetasoundFrontendClassInputDefault,int>
            (*(FMetasoundFrontendClassInputDefault **)((longlong)param_1 + 0x38),
             *(int *)((longlong)param_1 + 0x40));
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
    return;
  }
  return;
}

// Copy<FMetasoundFrontendClassInput> @ 14ad70ab0

bool __cdecl
UE::CoreUObject::Private::Copy<FMetasoundFrontendClassInput>
          (void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  ForAnyElementType *pFVar2;
  int *piVar3;
  int iVar4;
  FMetasoundFrontendClassInputDefault *pFVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  if (param_3 != 0) {
    lVar7 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar6 = ((undefined8 *)(lVar7 + (longlong)param_1))[1];
      pFVar1 = (ForAnyElementType *)((longlong)param_1 + lVar7 + 0x38);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar7 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar6;
      pFVar2 = (ForAnyElementType *)((longlong)param_1 + 0x38);
      uVar6 = *(undefined8 *)((longlong)param_1 + lVar7 + 0x18);
      *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_1 + lVar7 + 0x10);
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar6;
      uVar6 = *(undefined8 *)((longlong)param_1 + lVar7 + 0x28);
      *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_1 + lVar7 + 0x20);
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar6;
      *(undefined4 *)((longlong)param_1 + 0x30) = *(undefined4 *)((longlong)param_1 + lVar7 + 0x30);
      if (pFVar2 != pFVar1) {
        DestructItems<FMetasoundFrontendClassInputDefault,int>
                  ((FMetasoundFrontendClassInputDefault *)pFVar2->Data,
                   *(int *)((longlong)param_1 + 0x40));
        iVar4 = *(int *)((longlong)param_1 + lVar7 + 0x40);
        piVar3 = (int *)((longlong)param_1 + 0x44);
        pFVar5 = (FMetasoundFrontendClassInputDefault *)pFVar1->Data;
        *(int *)((longlong)param_1 + 0x40) = iVar4;
        if ((iVar4 == 0) && (*piVar3 == 0)) {
          *piVar3 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x68,8,iVar4,*piVar3,pFVar2,iVar4,piVar3);
          ConstructItems<FMetasoundFrontendClassInputDefault,FMetasoundFrontendClassInputDefault,int>
                    (pFVar2->Data,pFVar5,iVar4);
        }
      }
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x48);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMetasoundFrontendVersionNumber> @ 14ad70f90

void __cdecl UE::CoreUObject::Private::Construct<FMetasoundFrontendVersionNumber>(void *param_1)

{
  *(undefined8 *)param_1 = 1;
  return;
}

// ConstructForTests<FMetasoundFrontendVersionNumber> @ 14ad71030

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMetasoundFrontendVersionNumber>(void *param_1)

{
  *(undefined8 *)param_1 = 1;
  return;
}

// Destruct<FMetasoundFrontendVersionNumber> @ 14ad71040

void __cdecl UE::CoreUObject::Private::Destruct<FMetasoundFrontendVersionNumber>(void *param_1)

{
  return;
}

// Construct<FMetasoundFrontendNode> @ 14ad71050

void __cdecl UE::CoreUObject::Private::Construct<FMetasoundFrontendNode>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(FGuid *)param_1 = Metasound::FrontendInvalidID;
  *(FGuid *)((longlong)param_1 + 0x10) = Metasound::FrontendInvalidID;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 0x68));
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 0x78));
  return;
}

// ConstructForTests<FMetasoundFrontendNode> @ 14ad710c0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMetasoundFrontendNode>(void *param_1)

{
  *(FGuid *)param_1 = Metasound::FrontendInvalidID;
  *(FGuid *)((longlong)param_1 + 0x10) = Metasound::FrontendInvalidID;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 0x68));
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 0x78));
  return;
}

// Destruct<FMetasoundFrontendNode> @ 14ad71130

void __cdecl UE::CoreUObject::Private::Destruct<FMetasoundFrontendNode>(void *param_1)

{
  FInstancedStruct::Reset((FInstancedStruct *)((longlong)param_1 + 0x78));
  FInstancedStruct::Reset((FInstancedStruct *)((longlong)param_1 + 0x68));
  DestructItems<FMetasoundFrontendVertexLiteral,int>
            (*(FMetasoundFrontendVertexLiteral **)((longlong)param_1 + 0x58),
             *(int *)((longlong)param_1 + 0x60));
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
  }
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
    return;
  }
  return;
}

// Copy<FMetasoundFrontendVersionNumber> @ 14ad71140

bool __cdecl
UE::CoreUObject::Private::Copy<FMetasoundFrontendVersionNumber>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FMetasoundFrontendNode> @ 14ad71170

bool __cdecl
UE::CoreUObject::Private::Copy<FMetasoundFrontendNode>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  FMetasoundFrontendVertexLiteral *pFVar5;
  undefined8 uVar6;
  TArray<FMetasoundFrontendVertex,TSizedDefaultAllocator<32>_> *this;
  void *pvVar7;
  undefined8 *puVar8;
  
  if (param_3 != 0) {
    this = (TArray<FMetasoundFrontendVertex,TSizedDefaultAllocator<32>_> *)
           ((longlong)param_1 + 0x28);
    pvVar7 = param_2;
    puVar8 = param_1;
    do {
      puVar3 = (undefined8 *)((longlong)puVar8 + ((longlong)param_2 - (longlong)param_1));
      uVar6 = puVar3[1];
      *puVar8 = *puVar3;
      puVar8[1] = uVar6;
      uVar6 = *(undefined8 *)((longlong)pvVar7 + 0x18);
      puVar8[2] = *(undefined8 *)((longlong)pvVar7 + 0x10);
      puVar8[3] = uVar6;
      puVar8[4] = *(undefined8 *)((longlong)pvVar7 + 0x20);
      TArray<FMetasoundFrontendVertex,TSizedDefaultAllocator<32>_>::operator=
                (this,(TArray<FMetasoundFrontendVertex,TSizedDefaultAllocator<32>_> *)
                      ((longlong)pvVar7 + 0x28));
      TArray<FMetasoundFrontendVertex,TSizedDefaultAllocator<32>_>::operator=
                (this + 1,(TArray<FMetasoundFrontendVertex,TSizedDefaultAllocator<32>_> *)
                          ((longlong)pvVar7 + 0x38));
      TArray<FMetasoundFrontendVertex,TSizedDefaultAllocator<32>_>::operator=
                (this + 2,(TArray<FMetasoundFrontendVertex,TSizedDefaultAllocator<32>_> *)
                          ((longlong)pvVar7 + 0x48));
      pFVar1 = (ForAnyElementType *)(puVar8 + 0xb);
      if (pFVar1 != (ForAnyElementType *)((longlong)pvVar7 + 0x58)) {
        DestructItems<FMetasoundFrontendVertexLiteral,int>
                  ((FMetasoundFrontendVertexLiteral *)pFVar1->Data,*(int *)(puVar8 + 0xc));
        iVar4 = *(int *)((longlong)pvVar7 + 0x60);
        piVar2 = (int *)((longlong)puVar8 + 100);
        pFVar5 = (FMetasoundFrontendVertexLiteral *)
                 ((ForAnyElementType *)((longlong)pvVar7 + 0x58))->Data;
        *(int *)(puVar8 + 0xc) = iVar4;
        if ((iVar4 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x68,8,iVar4,*piVar2,pFVar1,iVar4,piVar2);
          ConstructItems<FMetasoundFrontendVertexLiteral,FMetasoundFrontendVertexLiteral,int>
                    (pFVar1->Data,pFVar5,iVar4);
        }
      }
      if ((FInstancedStruct *)(puVar8 + 0xd) != (FInstancedStruct *)((longlong)pvVar7 + 0x68)) {
        FInstancedStruct::InitializeAs
                  ((FInstancedStruct *)(puVar8 + 0xd),
                   (((FInstancedStruct *)((longlong)pvVar7 + 0x68))->ScriptStruct).field0_0x0.
                   DebugPtr,*(uchar **)((longlong)pvVar7 + 0x70));
      }
      if ((FInstancedStruct *)(puVar8 + 0xf) != (FInstancedStruct *)((longlong)pvVar7 + 0x78)) {
        FInstancedStruct::InitializeAs
                  ((FInstancedStruct *)(puVar8 + 0xf),
                   (((FInstancedStruct *)((longlong)pvVar7 + 0x78))->ScriptStruct).field0_0x0.
                   DebugPtr,*(uchar **)((longlong)pvVar7 + 0x80));
      }
      param_3 = param_3 + -1;
      this = (TArray<FMetasoundFrontendVertex,TSizedDefaultAllocator<32>_> *)&this[8].ArrayNum;
      pvVar7 = (void *)((longlong)pvVar7 + 0x88);
      puVar8 = puVar8 + 0x11;
    } while (param_3 != 0);
  }
  return true;
}

// GetStructTypeHash<FMetasoundFrontendVersionNumber> @ 14ad71300

uint __cdecl
UE::CoreUObject::Private::GetStructTypeHash<FMetasoundFrontendVersionNumber>(void *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)param_1;
  return *(int *)((longlong)param_1 + 4) + -0x61c88647 + uVar1 * 0x40 + (uVar1 >> 2) ^ uVar1;
}

// Construct<FMetasoundFrontendClassInputDefault> @ 14ad716d0

void __cdecl UE::CoreUObject::Private::Construct<FMetasoundFrontendClassInputDefault>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 3) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined1 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(FGuid *)((longlong)param_1 + 0x58) = Metasound::Frontend::DefaultPageID;
  return;
}

// ConstructForTests<FMetasoundFrontendClassInputDefault> @ 14ad71790

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMetasoundFrontendClassInputDefault>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(FGuid *)((longlong)param_1 + 0x58) = Metasound::Frontend::DefaultPageID;
  return;
}

// Destruct<FMetasoundFrontendClassInputDefault> @ 14ad71830

void __cdecl UE::CoreUObject::Private::Destruct<FMetasoundFrontendClassInputDefault>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
  }
  DestructItems<FString,int>
            (*(FString **)((longlong)param_1 + 0x38),*(int *)((longlong)param_1 + 0x40));
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FMetasoundFrontendClassInputDefault> @ 14ad71af0

bool __cdecl
UE::CoreUObject::Private::Copy<FMetasoundFrontendClassInputDefault>
          (void *param_1,void *param_2,int param_3)

{
  FMetasoundFrontendLiteral *pFVar1;
  FScriptContainerElement *pFVar2;
  undefined3 uVar3;
  int iVar4;
  FMetasoundFrontendLiteral *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FMetasoundFrontendLiteral *)
               (((longlong)param_2 - (longlong)param_1) + (longlong)this);
      FMetasoundFrontendLiteral::operator=(this,pFVar1);
      uVar3 = *(undefined3 *)&pFVar1[1].field_0x1;
      iVar4 = pFVar1[1].AsNumDefault;
      pFVar2 = pFVar1[1].AsBoolean.AllocatorInstance.Data;
      this[1].Type = pFVar1[1].Type;
      *(undefined3 *)&this[1].field_0x1 = uVar3;
      this[1].AsNumDefault = iVar4;
      this[1].AsBoolean.AllocatorInstance.Data = pFVar2;
      param_3 = param_3 + -1;
      this = (FMetasoundFrontendLiteral *)&this[1].AsBoolean.ArrayNum;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMetaSoundFrontendGraphComment> @ 14ad72b60

void __cdecl UE::CoreUObject::Private::Construct<FMetaSoundFrontendGraphComment>(void *param_1)

{
  return;
}

// ConstructForTests<FMetaSoundFrontendGraphComment> @ 14ad72b70

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMetaSoundFrontendGraphComment>(void *param_1)

{
  return;
}

// Construct<FMetasoundFrontendClass> @ 14ad72c40

void __cdecl UE::CoreUObject::Private::Construct<FMetasoundFrontendClass>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined ***)param_1 = &___7FMetasoundFrontendClass__6B_;
  *(FGuid *)((longlong)param_1 + 8) = Metasound::FrontendInvalidID;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 1;
  *(undefined1 *)((longlong)param_1 + 0x38) = 10;
  *(undefined2 *)((longlong)param_1 + 0x3a) = 2;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  return;
}

// ConstructForTests<FMetasoundFrontendClass> @ 14ad72e20

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMetasoundFrontendClass>(void *param_1)

{
  *(undefined ***)param_1 = &___7FMetasoundFrontendClass__6B_;
  *(FGuid *)((longlong)param_1 + 8) = Metasound::FrontendInvalidID;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 1;
  *(undefined1 *)((longlong)param_1 + 0x38) = 10;
  *(undefined2 *)((longlong)param_1 + 0x3a) = 2;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  return;
}

// Destruct<FMetasoundFrontendClass> @ 14ad72ee0

void __cdecl UE::CoreUObject::Private::Destruct<FMetasoundFrontendClass>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  if (*(void **)((longlong)param_1 + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x60));
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            (*(FMetasoundFrontendClassInput **)((longlong)param_1 + 0x50),
             *(int *)((longlong)param_1 + 0x58));
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
    return;
  }
  return;
}

// Copy<FMetasoundFrontendClass> @ 14ad72f30

bool __cdecl
UE::CoreUObject::Private::Copy<FMetasoundFrontendClass>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x10);
    *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
    *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x20);
    *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_2 + 0x18);
    *(undefined8 *)((longlong)param_1 + 0x20) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x30);
    *(undefined8 *)((longlong)param_1 + 0x28) = *(undefined8 *)((longlong)param_2 + 0x28);
    *(undefined8 *)((longlong)param_1 + 0x30) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x40);
    *(undefined8 *)((longlong)param_1 + 0x38) = *(undefined8 *)((longlong)param_2 + 0x38);
    *(undefined8 *)((longlong)param_1 + 0x40) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x48) = *(undefined4 *)((longlong)param_2 + 0x48);
    FMetasoundFrontendClassInterface::operator=
              ((FMetasoundFrontendClassInterface *)((longlong)param_1 + 0x50),
               (FMetasoundFrontendClassInterface *)((longlong)param_2 + 0x50));
    param_2 = (void *)((longlong)param_2 + 0x90);
    param_1 = (void *)((longlong)param_1 + 0x90);
  }
  return true;
}

// Construct<FMetasoundFrontendClassStyleDisplay> @ 14ad739b0

void __cdecl UE::CoreUObject::Private::Construct<FMetasoundFrontendClassStyleDisplay>(void *param_1)

{
  return;
}

// ConstructForTests<FMetasoundFrontendClassStyleDisplay> @ 14ad739c0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMetasoundFrontendClassStyleDisplay>(void *param_1)

{
  return;
}

// Construct<FMetasoundCommentNodeIntVector> @ 14ad73e50

void __cdecl UE::CoreUObject::Private::Construct<FMetasoundCommentNodeIntVector>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FMetasoundCommentNodeIntVector> @ 14ad73e60

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMetasoundCommentNodeIntVector>(void *param_1)

{
  return;
}

// StructuredSerializeFromMismatchedTag<FMetasoundCommentNodeIntVector> @ 14ad73f90

bool __cdecl
UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FMetasoundCommentNodeIntVector>
          (FPropertyTag *param_1,FStructuredArchiveSlot param_2,void *param_3)

{
  bool bVar1;
  
  bVar1 = FMetasoundCommentNodeIntVector::SerializeFromMismatchedTag(param_3,param_1,param_2);
  return bVar1;
}

// Construct<FMetasoundFrontendClassStyle> @ 14ad73fb0

void __cdecl UE::CoreUObject::Private::Construct<FMetasoundFrontendClassStyle>(void *param_1)

{
  return;
}

// ConstructForTests<FMetasoundFrontendClassStyle> @ 14ad73fc0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMetasoundFrontendClassStyle>(void *param_1)

{
  return;
}

// GetStructTypeHash<FMetasoundCommentNodeIntVector> @ 14ad74160

uint __cdecl
UE::CoreUObject::Private::GetStructTypeHash<FMetasoundCommentNodeIntVector>(void *param_1)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014ad7416f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*FCrc::MemCrc32Func)(param_1,8,0);
  return uVar1;
}

// Construct<FMetasoundFrontendClassVertex> @ 14ad74290

void __cdecl UE::CoreUObject::Private::Construct<FMetasoundFrontendClassVertex>(void *param_1)

{
  FGuid FVar1;
  
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  FVar1 = Metasound::FrontendInvalidID;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(FGuid *)((longlong)param_1 + 0x20) = FVar1;
  return;
}

// ConstructForTests<FMetasoundFrontendClassVertex> @ 14ad742d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMetasoundFrontendClassVertex>(void *param_1)

{
  FGuid FVar1;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  FVar1 = Metasound::FrontendInvalidID;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(FGuid *)((longlong)param_1 + 0x20) = FVar1;
  return;
}

// Destruct<FMetasoundFrontendClassVertex> @ 14ad74300

void __cdecl UE::CoreUObject::Private::Destruct<FMetasoundFrontendClassVertex>(void *param_1)

{
  return;
}

// Copy<FMetasoundFrontendClassVertex> @ 14ad74d30

bool __cdecl
UE::CoreUObject::Private::Copy<FMetasoundFrontendClassVertex>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  if (param_3 != 0) {
    lVar8 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined4 *)(lVar8 + 0x30 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar8 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar8 + 0x10 + (longlong)param_1);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      puVar1 = (undefined8 *)(lVar8 + 0x20 + (longlong)param_1);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar8 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar7;
      *(undefined4 *)((longlong)param_1 + 0x30) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x34);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMetasoundFrontendVertexMetadata> @ 14ad75980

void __cdecl UE::CoreUObject::Private::Construct<FMetasoundFrontendVertexMetadata>(void *param_1)

{
  return;
}

// ConstructForTests<FMetasoundFrontendVertexMetadata> @ 14ad759f0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMetasoundFrontendVertexMetadata>(void *param_1)

{
  return;
}

// Construct<FMetasoundFrontendClassMetadata> @ 14ad75a40

void __cdecl UE::CoreUObject::Private::Construct<FMetasoundFrontendClassMetadata>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x18) = 1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x20) = 10;
  *(undefined2 *)((longlong)param_1 + 0x22) = 2;
  return;
}

// ConstructForTests<FMetasoundFrontendClassMetadata> @ 14ad75ab0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMetasoundFrontendClassMetadata>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x18) = 1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x20) = 10;
  *(undefined2 *)((longlong)param_1 + 0x22) = 2;
  return;
}

// Destruct<FMetasoundFrontendClassMetadata> @ 14ad75ae0

void __cdecl UE::CoreUObject::Private::Destruct<FMetasoundFrontendClassMetadata>(void *param_1)

{
  return;
}

// Copy<FMetasoundFrontendClassMetadata> @ 14ad75bf0

bool __cdecl
UE::CoreUObject::Private::Copy<FMetasoundFrontendClassMetadata>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  if (param_3 != 0) {
    lVar8 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined4 *)(lVar8 + 0x30 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar8 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar8 + 0x10 + (longlong)param_1);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      puVar1 = (undefined8 *)(lVar8 + 0x20 + (longlong)param_1);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar8 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar7;
      *(undefined4 *)((longlong)param_1 + 0x30) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x34);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMetasoundFrontendGraphStyle> @ 14ad767e0

void __cdecl UE::CoreUObject::Private::Construct<FMetasoundFrontendGraphStyle>(void *param_1)

{
  return;
}

// ConstructForTests<FMetasoundFrontendGraphStyle> @ 14ad767f0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMetasoundFrontendGraphStyle>(void *param_1)

{
  return;
}

// Construct<FMetasoundFrontendClassName> @ 14ad76d30

void __cdecl UE::CoreUObject::Private::Construct<FMetasoundFrontendClassName>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FMetasoundFrontendClassName> @ 14ad76d90

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMetasoundFrontendClassName>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FMetasoundFrontendClassName> @ 14ad76db0

void __cdecl UE::CoreUObject::Private::Destruct<FMetasoundFrontendClassName>(void *param_1)

{
  return;
}

// Copy<FMetasoundFrontendClassName> @ 14ad76e00

bool __cdecl
UE::CoreUObject::Private::Copy<FMetasoundFrontendClassName>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      puVar4[2] = uVar2;
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// GetStructTypeHash<FMetasoundFrontendClassName> @ 14ad76e80

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FMetasoundFrontendClassName>(void *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *(undefined8 *)((longlong)param_1 + 8);
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  uVar2 = *(undefined8 *)param_1;
  uVar4 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
  uVar4 = uVar4 + (int)((ulonglong)uVar2 >> 0x20);
  uVar2 = *(undefined8 *)((longlong)param_1 + 0x10);
  uVar4 = uVar3 + (int)((ulonglong)uVar1 >> 0x20) + uVar4 * 0x40 + (uVar4 >> 2) + 0x9e3779b9 ^ uVar4
  ;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
  return uVar3 + 0x9e3779b9 + (int)((ulonglong)uVar2 >> 0x20) + uVar4 * 0x40 + (uVar4 >> 2) ^ uVar4;
}

// Construct<FMetasoundFrontendEdgeStyle> @ 14ad77a30

void __cdecl UE::CoreUObject::Private::Construct<FMetasoundFrontendEdgeStyle>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FMetasoundFrontendEdgeStyle> @ 14ad77a90

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMetasoundFrontendEdgeStyle>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FMetasoundFrontendEdgeStyle> @ 14ad77ab0

void __cdecl UE::CoreUObject::Private::Destruct<FMetasoundFrontendEdgeStyle>(void *param_1)

{
  DestructItems<FMetasoundFrontendEdgeStyleLiteralColorPair,int>
            (*(FMetasoundFrontendEdgeStyleLiteralColorPair **)((longlong)param_1 + 0x18),
             *(int *)((longlong)param_1 + 0x20));
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
    return;
  }
  return;
}

// Copy<FMetasoundFrontendEdgeStyle> @ 14ad77b60

bool __cdecl
UE::CoreUObject::Private::Copy<FMetasoundFrontendEdgeStyle>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FMetasoundFrontendEdgeStyleLiteralColorPair *pFVar4;
  undefined8 uVar5;
  ForAnyElementType *pFVar6;
  longlong lVar7;
  
  if (param_3 != 0) {
    lVar7 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar5 = ((undefined8 *)(lVar7 + (longlong)param_1))[1];
      pFVar1 = (ForAnyElementType *)((longlong)param_1 + lVar7 + 0x18);
      pFVar6 = (ForAnyElementType *)((longlong)param_1 + 0x18);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar7 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_1 + lVar7 + 0x10);
      if (pFVar6 != pFVar1) {
        DestructItems<FMetasoundFrontendEdgeStyleLiteralColorPair,int>
                  ((FMetasoundFrontendEdgeStyleLiteralColorPair *)pFVar6->Data,
                   *(int *)((longlong)param_1 + 0x20));
        iVar3 = *(int *)((longlong)param_1 + lVar7 + 0x20);
        piVar2 = (int *)((longlong)param_1 + 0x24);
        pFVar4 = (FMetasoundFrontendEdgeStyleLiteralColorPair *)pFVar1->Data;
        *(int *)((longlong)param_1 + 0x20) = iVar3;
        if ((iVar3 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x68,8,iVar3,*piVar2,pFVar6,iVar3,piVar2);
          ConstructItems<FMetasoundFrontendEdgeStyleLiteralColorPair,FMetasoundFrontendEdgeStyleLiteralColorPair,int>
                    (pFVar6->Data,pFVar4,iVar3);
        }
      }
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x28);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMetasoundFrontendEdgeStyleLiteralColorPair> @ 14ad78c60

void __cdecl
UE::CoreUObject::Private::Construct<FMetasoundFrontendEdgeStyleLiteralColorPair>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 3) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined1 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x58))->_s_0 =
       (FLinearColor_u_0_s_0)
       Metasound::Frontend::DisplayStyle::EdgeAnimation::DefaultColor.field0_0x0;
  return;
}

// ConstructForTests<FMetasoundFrontendEdgeStyleLiteralColorPair> @ 14ad78d50

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMetasoundFrontendEdgeStyleLiteralColorPair>
          (void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x58))->_s_0 =
       (FLinearColor_u_0_s_0)
       Metasound::Frontend::DisplayStyle::EdgeAnimation::DefaultColor.field0_0x0;
  return;
}

// Destruct<FMetasoundFrontendEdgeStyleLiteralColorPair> @ 14ad78e50

void __cdecl
UE::CoreUObject::Private::Destruct<FMetasoundFrontendEdgeStyleLiteralColorPair>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
  }
  DestructItems<FString,int>
            (*(FString **)((longlong)param_1 + 0x38),*(int *)((longlong)param_1 + 0x40));
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FMetasoundFrontendEdgeStyleLiteralColorPair> @ 14ad78f90

bool __cdecl
UE::CoreUObject::Private::Copy<FMetasoundFrontendEdgeStyleLiteralColorPair>
          (void *param_1,void *param_2,int param_3)

{
  FMetasoundFrontendLiteral *pFVar1;
  FScriptContainerElement *pFVar2;
  undefined3 uVar3;
  int iVar4;
  FMetasoundFrontendLiteral *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FMetasoundFrontendLiteral *)
               (((longlong)param_2 - (longlong)param_1) + (longlong)this);
      FMetasoundFrontendLiteral::operator=(this,pFVar1);
      uVar3 = *(undefined3 *)&pFVar1[1].field_0x1;
      iVar4 = pFVar1[1].AsNumDefault;
      pFVar2 = pFVar1[1].AsBoolean.AllocatorInstance.Data;
      this[1].Type = pFVar1[1].Type;
      *(undefined3 *)&this[1].field_0x1 = uVar3;
      this[1].AsNumDefault = iVar4;
      this[1].AsBoolean.AllocatorInstance.Data = pFVar2;
      param_3 = param_3 + -1;
      this = (FMetasoundFrontendLiteral *)&this[1].AsBoolean.ArrayNum;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMetasoundFrontendInterface> @ 14ad79200

void __cdecl UE::CoreUObject::Private::Construct<FMetasoundFrontendInterface>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x48) = 1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  return;
}

// ConstructForTests<FMetasoundFrontendInterface> @ 14ad79280

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMetasoundFrontendInterface>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x48) = 1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  return;
}

// Destruct<FMetasoundFrontendInterface> @ 14ad79390

void __cdecl UE::CoreUObject::Private::Destruct<FMetasoundFrontendInterface>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
  }
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            (*(FMetasoundFrontendClassInput **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Construct<FMetaSoundDocumentInfo> @ 14ad79490

void __cdecl UE::CoreUObject::Private::Construct<FMetaSoundDocumentInfo>(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x18) = *(byte *)((longlong)param_1 + 0x18) & 0xfe;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)param_1 = 1;
  return;
}

// ConstructForTests<FMetaSoundDocumentInfo> @ 14ad794b0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMetaSoundDocumentInfo>(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x18) = *(byte *)((longlong)param_1 + 0x18) & 0xfe;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)param_1 = 1;
  return;
}

// Destruct<FMetaSoundDocumentInfo> @ 14ad794d0

void __cdecl UE::CoreUObject::Private::Destruct<FMetaSoundDocumentInfo>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FMetasoundFrontendInterface> @ 14ad794f0

bool __cdecl
UE::CoreUObject::Private::Copy<FMetasoundFrontendInterface>(void *param_1,void *param_2,int param_3)

{
  FMetasoundFrontendClassInterface *pFVar1;
  FMetasoundFrontendClassInterface *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FMetasoundFrontendClassInterface *)
               (((longlong)param_2 - (longlong)param_1) + (longlong)this);
      FMetasoundFrontendClassInterface::operator=(this,pFVar1);
      FMetasoundFrontendInterfaceMetadata::operator=
                ((FMetasoundFrontendInterfaceMetadata *)(this + 1),
                 (FMetasoundFrontendInterfaceMetadata *)(pFVar1 + 1));
      param_3 = param_3 + -1;
      this = (FMetasoundFrontendClassInterface *)&this[1].Environment;
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FMetaSoundDocumentInfo> @ 14ad795b0

bool __cdecl
UE::CoreUObject::Private::Copy<FMetaSoundDocumentInfo>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  ForAnyElementType *pFVar4;
  longlong lVar5;
  
  if (param_3 != 0) {
    lVar5 = (longlong)param_2 - (longlong)param_1;
    do {
      pFVar4 = (ForAnyElementType *)((longlong)param_1 + 8);
      *(undefined8 *)param_1 = *(undefined8 *)((longlong)param_1 + lVar5);
      pFVar1 = (ForAnyElementType *)((longlong)param_1 + lVar5 + 8);
      if (pFVar4 != pFVar1) {
        iVar3 = *(int *)((longlong)param_1 + lVar5 + 0x10);
        piVar2 = (int *)((longlong)param_1 + 0x14);
        _Src = pFVar1->Data;
        *(int *)((longlong)param_1 + 0x10) = iVar3;
        if ((iVar3 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,4,iVar3,*piVar2,pFVar4,iVar3,piVar2);
          if (iVar3 != 0) {
            memcpy(pFVar4->Data,_Src,(longlong)iVar3 << 5);
          }
        }
      }
      *(byte *)((longlong)param_1 + 0x18) =
           *(byte *)((longlong)param_1 + 0x18) ^
           (*(byte *)((longlong)param_1 + 0x18) ^ *(byte *)((longlong)param_1 + lVar5 + 0x18)) & 1;
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x20);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMetasoundFrontendEdge> @ 14ad79af0

void __cdecl UE::CoreUObject::Private::Construct<FMetasoundFrontendEdge>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(FGuid *)param_1 = Metasound::FrontendInvalidID;
  *(FGuid *)((longlong)param_1 + 0x10) = Metasound::FrontendInvalidID;
  *(FGuid *)((longlong)param_1 + 0x20) = Metasound::FrontendInvalidID;
  *(FGuid *)((longlong)param_1 + 0x30) = Metasound::FrontendInvalidID;
  return;
}

// ConstructForTests<FMetasoundFrontendEdge> @ 14ad79b80

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMetasoundFrontendEdge>(void *param_1)

{
  *(FGuid *)param_1 = Metasound::FrontendInvalidID;
  *(FGuid *)((longlong)param_1 + 0x10) = Metasound::FrontendInvalidID;
  *(FGuid *)((longlong)param_1 + 0x20) = Metasound::FrontendInvalidID;
  *(FGuid *)((longlong)param_1 + 0x30) = Metasound::FrontendInvalidID;
  return;
}

// Destruct<FMetasoundFrontendEdge> @ 14ad79c00

void __cdecl UE::CoreUObject::Private::Destruct<FMetasoundFrontendEdge>(void *param_1)

{
  return;
}

// Copy<FMetasoundFrontendEdge> @ 14ad79cd0

bool __cdecl
UE::CoreUObject::Private::Copy<FMetasoundFrontendEdge>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  if (param_3 != 0) {
    lVar9 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = ((undefined8 *)(lVar9 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar9 + 0x10 + (longlong)param_1);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      puVar1 = (undefined8 *)(lVar9 + 0x20 + (longlong)param_1);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      puVar1 = (undefined8 *)(lVar9 + 0x30 + (longlong)param_1);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar9 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar8;
      param_1 = (void *)((longlong)param_1 + 0x40);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMetasoundFrontendInterfaceMetadata> @ 14ad79da0

void __cdecl UE::CoreUObject::Private::Construct<FMetasoundFrontendInterfaceMetadata>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FMetasoundFrontendInterfaceMetadata> @ 14ad79dc0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMetasoundFrontendInterfaceMetadata>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FMetasoundFrontendInterfaceMetadata> @ 14ad79de0

void __cdecl UE::CoreUObject::Private::Destruct<FMetasoundFrontendInterfaceMetadata>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x10);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// GetStructTypeHash<FMetasoundFrontendEdge> @ 14ad79e00

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FMetasoundFrontendEdge>(void *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)param_1;
  uVar1 = *(uint *)((longlong)param_1 + 0x28);
  uVar2 = *(int *)((longlong)param_1 + 0x14) + -0x61c88647 + uVar2 * 0x40 + (uVar2 >> 2) ^ uVar2;
  return (uVar2 >> 2) + 0x9e3779b9 +
         (*(int *)((longlong)param_1 + 0x3c) + -0x61c88647 + uVar1 * 0x40 + (uVar1 >> 2) ^ uVar1) +
         uVar2 * 0x40 ^ uVar2;
}

// Copy<FMetasoundFrontendInterfaceMetadata> @ 14ad79f40

bool __cdecl
UE::CoreUObject::Private::Copy<FMetasoundFrontendInterfaceMetadata>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  undefined8 uVar3;
  ForAnyElementType *pFVar4;
  ForAnyElementType *pFVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar3 = ((undefined8 *)(lVar6 + (longlong)param_1))[1];
      pFVar4 = (ForAnyElementType *)((longlong)param_1 + lVar6 + 0x10);
      pFVar5 = (ForAnyElementType *)((longlong)param_1 + 0x10);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar6 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      if (pFVar5 != pFVar4) {
        iVar2 = *(int *)((longlong)param_1 + lVar6 + 0x18);
        piVar1 = (int *)((longlong)param_1 + 0x1c);
        _Src = pFVar4->Data;
        *(int *)((longlong)param_1 + 0x18) = iVar2;
        if ((iVar2 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x14,4,iVar2,*piVar1,pFVar5,iVar2,piVar1);
          if (iVar2 != 0) {
            memcpy(pFVar5->Data,_Src,(longlong)iVar2 * 0x14);
          }
        }
      }
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x20);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMetasoundFrontendNodeStyle> @ 14ad7a640

void __cdecl UE::CoreUObject::Private::Construct<FMetasoundFrontendNodeStyle>(void *param_1)

{
  return;
}

// ConstructForTests<FMetasoundFrontendNodeStyle> @ 14ad7a650

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMetasoundFrontendNodeStyle>(void *param_1)

{
  return;
}

// Construct<FMetasoundFrontendInterfaceUClassOptions> @ 14ad7a6c0

void __cdecl
UE::CoreUObject::Private::Construct<FMetasoundFrontendInterfaceUClassOptions>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x10) = 1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FMetasoundFrontendInterfaceUClassOptions> @ 14ad7a720

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMetasoundFrontendInterfaceUClassOptions>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0x10) = 1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FMetasoundFrontendInterfaceUClassOptions> @ 14ad7a740

void __cdecl
UE::CoreUObject::Private::Destruct<FMetasoundFrontendInterfaceUClassOptions>(void *param_1)

{
  return;
}

// Copy<FMetasoundFrontendInterfaceUClassOptions> @ 14ad7a850

bool __cdecl
UE::CoreUObject::Private::Copy<FMetasoundFrontendInterfaceUClassOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined4 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      *(undefined4 *)(puVar4 + 2) = uVar2;
      param_3 = param_3 + -1;
      puVar4 = (undefined8 *)((longlong)puVar4 + 0x14);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMetasoundFrontendNodeStyleDisplay> @ 14ad7ba30

void __cdecl UE::CoreUObject::Private::Construct<FMetasoundFrontendNodeStyleDisplay>(void *param_1)

{
  return;
}

// ConstructForTests<FMetasoundFrontendNodeStyleDisplay> @ 14ad7ba40

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMetasoundFrontendNodeStyleDisplay>(void *param_1)

{
  return;
}

// Construct<FMetasoundFrontendInterfaceBinding> @ 14ad7bbd0

void __cdecl UE::CoreUObject::Private::Construct<FMetasoundFrontendInterfaceBinding>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 1;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// ConstructForTests<FMetasoundFrontendInterfaceBinding> @ 14ad7bc00

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMetasoundFrontendInterfaceBinding>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// Destruct<FMetasoundFrontendInterfaceBinding> @ 14ad7bc30

void __cdecl UE::CoreUObject::Private::Destruct<FMetasoundFrontendInterfaceBinding>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x28);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FMetasoundFrontendInterfaceBinding> @ 14ad7bc50

bool __cdecl
UE::CoreUObject::Private::Copy<FMetasoundFrontendInterfaceBinding>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  undefined8 uVar3;
  ForAnyElementType *pFVar4;
  ForAnyElementType *pFVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar3 = ((undefined8 *)(lVar6 + (longlong)param_1))[1];
      pFVar5 = (ForAnyElementType *)((longlong)param_1 + 0x28);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar6 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      uVar3 = *(undefined8 *)((longlong)param_1 + lVar6 + 0x18);
      *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_1 + lVar6 + 0x10);
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar3;
      pFVar4 = (ForAnyElementType *)((longlong)param_1 + lVar6 + 0x28);
      *(undefined4 *)((longlong)param_1 + 0x20) = *(undefined4 *)((longlong)param_1 + lVar6 + 0x20);
      if (pFVar5 != pFVar4) {
        iVar2 = *(int *)((longlong)param_1 + lVar6 + 0x30);
        piVar1 = (int *)((longlong)param_1 + 0x34);
        _Src = pFVar4->Data;
        *(int *)((longlong)param_1 + 0x30) = iVar2;
        if ((iVar2 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,iVar2,*piVar1,pFVar5,iVar2,piVar1);
          if (iVar2 != 0) {
            memcpy(pFVar5->Data,_Src,(longlong)iVar2 << 4);
          }
        }
      }
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x38);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMetaSoundFrontendNodeConfiguration> @ 14ad7c270

void __cdecl UE::CoreUObject::Private::Construct<FMetaSoundFrontendNodeConfiguration>(void *param_1)

{
  *(undefined ***)param_1 = &___7FMetaSoundFrontendNodeConfiguration__6B_;
  return;
}

// ConstructForTests<FMetaSoundFrontendNodeConfiguration> @ 14ad7c290

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMetaSoundFrontendNodeConfiguration>(void *param_1)

{
  *(undefined ***)param_1 = &___7FMetaSoundFrontendNodeConfiguration__6B_;
  return;
}

// Destruct<FMetaSoundFrontendNodeConfiguration> @ 14ad7c2b0

void __cdecl UE::CoreUObject::Private::Destruct<FMetaSoundFrontendNodeConfiguration>(void *param_1)

{
  return;
}

// Copy<FMetaSoundFrontendNodeConfiguration> @ 14ad7c790

bool __cdecl
UE::CoreUObject::Private::Copy<FMetaSoundFrontendNodeConfiguration>
          (void *param_1,void *param_2,int param_3)

{
  return true;
}

// Construct<FMetasoundFrontendInterfaceVertexBinding> @ 14ad7d7d0

void __cdecl
UE::CoreUObject::Private::Construct<FMetasoundFrontendInterfaceVertexBinding>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FMetasoundFrontendInterfaceVertexBinding> @ 14ad7d840

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMetasoundFrontendInterfaceVertexBinding>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FMetasoundFrontendInterfaceVertexBinding> @ 14ad7d8a0

void __cdecl
UE::CoreUObject::Private::Destruct<FMetasoundFrontendInterfaceVertexBinding>(void *param_1)

{
  return;
}

// Copy<FMetasoundFrontendInterfaceVertexBinding> @ 14ad7d9d0

bool __cdecl
UE::CoreUObject::Private::Copy<FMetasoundFrontendInterfaceVertexBinding>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// GetStructTypeHash<FMetasoundFrontendInterfaceVertexBinding> @ 14ad7da60

uint __cdecl
UE::CoreUObject::Private::GetStructTypeHash<FMetasoundFrontendInterfaceVertexBinding>(void *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *(undefined8 *)((longlong)param_1 + 8);
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  uVar2 = *(undefined8 *)param_1;
  uVar4 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
  uVar4 = uVar4 + (int)((ulonglong)uVar2 >> 0x20);
  return uVar4 * 0x40 + uVar3 + (int)((ulonglong)uVar1 >> 0x20) + -0x61c88647 + (uVar4 >> 2) ^ uVar4
  ;
}

// Construct<FMetasoundFrontendNodeInterface> @ 14ad7dd30

void __cdecl UE::CoreUObject::Private::Construct<FMetasoundFrontendNodeInterface>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FMetasoundFrontendNodeInterface> @ 14ad7dd50

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMetasoundFrontendNodeInterface>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FMetasoundFrontendNodeInterface> @ 14ad7dd70

void __cdecl UE::CoreUObject::Private::Destruct<FMetasoundFrontendNodeInterface>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Construct<FMetasoundFrontendDocument> @ 14ad7ddc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UE::CoreUObject::Private::Construct<FMetasoundFrontendDocument>(void *param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTStack_28;
  FSharedReferencer<1> FStack_20;
  
  pTVar4 = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FStack_20.ReferenceController = ::operator_new(0x18);
  if (FStack_20.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    pTStack_28 = ___xmm_00000000000000000000000000000010;
    pTVar3 = (TReferenceControllerBase<1> *)&DAT_00000010;
    FStack_20.ReferenceController = _UNK_150651568;
  }
  else {
    (FStack_20.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3 = FStack_20.ReferenceController + 1;
    (FStack_20.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (FStack_20.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFAccessToken_Frontend_Metasound___00_SharedPointerInternals__6B_
    ;
    if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    LOCK();
    (FStack_20.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_20.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    pTVar4 = FStack_20.ReferenceController;
    pTStack_28 = pTVar3;
  }
  if (param_1 != &pTStack_28) {
    *(TReferenceControllerBase<1> **)param_1 = pTVar3;
    pTStack_28 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_1 + 8),&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 1;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0;
  FMetasoundFrontendGraphClass::FMetasoundFrontendGraphClass
            ((FMetasoundFrontendGraphClass *)((longlong)param_1 + 0x70));
  *(undefined8 *)((longlong)param_1 + 0x168) = 0;
  *(undefined8 *)((longlong)param_1 + 0x170) = 0;
  *(undefined8 *)((longlong)param_1 + 0x178) = 0;
  *(undefined8 *)((longlong)param_1 + 0x180) = 0;
  *(undefined4 *)((longlong)param_1 + 0x188) = 1;
  *(undefined1 *)((longlong)param_1 + 0xa8) = 1;
  return;
}

// ConstructForTests<FMetasoundFrontendDocument> @ 14ad7ddd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMetasoundFrontendDocument>(void *param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTStack_28;
  FSharedReferencer<1> FStack_20;
  
  pTVar4 = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FStack_20.ReferenceController = ::operator_new(0x18);
  if (FStack_20.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    pTStack_28 = ___xmm_00000000000000000000000000000010;
    pTVar3 = (TReferenceControllerBase<1> *)&DAT_00000010;
    FStack_20.ReferenceController = _UNK_150651568;
  }
  else {
    (FStack_20.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3 = FStack_20.ReferenceController + 1;
    (FStack_20.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (FStack_20.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFAccessToken_Frontend_Metasound___00_SharedPointerInternals__6B_
    ;
    if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    LOCK();
    (FStack_20.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_20.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    pTVar4 = FStack_20.ReferenceController;
    pTStack_28 = pTVar3;
  }
  if (param_1 != &pTStack_28) {
    *(TReferenceControllerBase<1> **)param_1 = pTVar3;
    pTStack_28 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_1 + 8),&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 1;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0;
  FMetasoundFrontendGraphClass::FMetasoundFrontendGraphClass
            ((FMetasoundFrontendGraphClass *)((longlong)param_1 + 0x70));
  *(undefined8 *)((longlong)param_1 + 0x168) = 0;
  *(undefined8 *)((longlong)param_1 + 0x170) = 0;
  *(undefined8 *)((longlong)param_1 + 0x178) = 0;
  *(undefined8 *)((longlong)param_1 + 0x180) = 0;
  *(undefined4 *)((longlong)param_1 + 0x188) = 1;
  *(undefined1 *)((longlong)param_1 + 0xa8) = 1;
  return;
}

// Destruct<FMetasoundFrontendDocument> @ 14ad7dde0

void __cdecl UE::CoreUObject::Private::Destruct<FMetasoundFrontendDocument>(void *param_1)

{
  DestructItems<FMetasoundFrontendClass,int>
            (*(FMetasoundFrontendClass **)((longlong)param_1 + 0x178),
             *(int *)((longlong)param_1 + 0x180));
  if (*(void **)((longlong)param_1 + 0x178) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x178));
  }
  DestructItems<FMetasoundFrontendGraphClass,int>
            (*(FMetasoundFrontendGraphClass **)((longlong)param_1 + 0x168),
             *(int *)((longlong)param_1 + 0x170));
  if (*(void **)((longlong)param_1 + 0x168) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x168));
  }
  FMetasoundFrontendGraphClass::~FMetasoundFrontendGraphClass
            ((FMetasoundFrontendGraphClass *)((longlong)param_1 + 0x70));
  *(undefined4 *)((longlong)param_1 + 0x68) = 0;
  if (*(void **)((longlong)param_1 + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x60));
  }
  TSparseArray<TSparseSetElement<FMetasoundFrontendVersion>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FMetasoundFrontendVersion>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FMetasoundFrontendVersion>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x20));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 8));
  return;
}

// Copy<FMetasoundFrontendNodeInterface> @ 14ad7ddf0

bool __cdecl
UE::CoreUObject::Private::Copy<FMetasoundFrontendNodeInterface>
          (void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    TArray<FMetasoundFrontendVertex,TSizedDefaultAllocator<32>_>::operator=(param_1,param_2);
    TArray<FMetasoundFrontendVertex,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FMetasoundFrontendVertex,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_1 + 0x10),
               (TArray<FMetasoundFrontendVertex,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_2 + 0x10));
    TArray<FMetasoundFrontendVertex,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FMetasoundFrontendVertex,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_1 + 0x20),
               (TArray<FMetasoundFrontendVertex,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_2 + 0x20));
    param_2 = (void *)((longlong)param_2 + 0x30);
    param_1 = (TArray<FMetasoundFrontendVertex,TSizedDefaultAllocator<32>_> *)
              ((longlong)param_1 + 0x30);
  }
  return true;
}

// Copy<FMetasoundFrontendDocument> @ 14ad7de70

bool __cdecl
UE::CoreUObject::Private::Copy<FMetasoundFrontendDocument>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  undefined4 *puVar3;
  int iVar4;
  FMetasoundFrontendGraphClass *pFVar5;
  FMetasoundFrontendClass *pFVar6;
  undefined8 uVar7;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar7 = *(undefined8 *)((longlong)param_2 + 0x18);
    *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
    *(undefined8 *)((longlong)param_1 + 0x18) = uVar7;
    TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
    ::operator=((TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
                 *)((longlong)param_1 + 0x20),
                (TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
                 *)((longlong)param_2 + 0x20));
    FMetasoundFrontendGraphClass::operator=
              ((FMetasoundFrontendGraphClass *)((longlong)param_1 + 0x70),
               (FMetasoundFrontendGraphClass *)((longlong)param_2 + 0x70));
    pFVar2 = (ForAnyElementType *)((longlong)param_1 + 0x168);
    if (pFVar2 != (ForAnyElementType *)((longlong)param_2 + 0x168)) {
      DestructItems<FMetasoundFrontendGraphClass,int>
                ((FMetasoundFrontendGraphClass *)pFVar2->Data,*(int *)((longlong)param_1 + 0x170));
      iVar4 = *(int *)((longlong)param_2 + 0x170);
      piVar1 = (int *)((longlong)param_1 + 0x174);
      pFVar5 = (FMetasoundFrontendGraphClass *)
               ((ForAnyElementType *)((longlong)param_2 + 0x168))->Data;
      *(int *)((longlong)param_1 + 0x170) = iVar4;
      if ((iVar4 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xf8,8,iVar4,*piVar1,pFVar2,iVar4,piVar1);
        ConstructItems<FMetasoundFrontendGraphClass,FMetasoundFrontendGraphClass,int>
                  (pFVar2->Data,pFVar5,iVar4);
      }
    }
    pFVar2 = (ForAnyElementType *)((longlong)param_1 + 0x178);
    if (pFVar2 != (ForAnyElementType *)((longlong)param_2 + 0x178)) {
      DestructItems<FMetasoundFrontendClass,int>
                ((FMetasoundFrontendClass *)pFVar2->Data,*(int *)((longlong)param_1 + 0x180));
      iVar4 = *(int *)((longlong)param_2 + 0x180);
      piVar1 = (int *)((longlong)param_1 + 0x184);
      pFVar6 = (FMetasoundFrontendClass *)((ForAnyElementType *)((longlong)param_2 + 0x178))->Data;
      *(int *)((longlong)param_1 + 0x180) = iVar4;
      if ((iVar4 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x90,8,iVar4,*piVar1,pFVar2,iVar4,piVar1);
        ConstructItems<FMetasoundFrontendClass,FMetasoundFrontendClass,int>
                  (pFVar2->Data,pFVar6,iVar4);
      }
    }
    puVar3 = (undefined4 *)((longlong)param_2 + 0x188);
    param_2 = (void *)((longlong)param_2 + 400);
    *(undefined4 *)((longlong)param_1 + 0x188) = *puVar3;
    param_1 = (void *)((longlong)param_1 + 400);
  }
  return true;
}

// Construct<FMetasoundFrontendClassInterface> @ 14ad7e130

void __cdecl UE::CoreUObject::Private::Construct<FMetasoundFrontendClassInterface>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// ConstructForTests<FMetasoundFrontendClassInterface> @ 14ad7e160

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMetasoundFrontendClassInterface>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// Destruct<FMetasoundFrontendClassInterface> @ 14ad7e190

void __cdecl UE::CoreUObject::Private::Destruct<FMetasoundFrontendClassInterface>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            (*(FMetasoundFrontendClassInput **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FMetasoundFrontendClassInterface> @ 14ad7e1e0

bool __cdecl
UE::CoreUObject::Private::Copy<FMetasoundFrontendClassInterface>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  ForAnyElementType *pFVar3;
  int iVar4;
  int iVar5;
  FMetasoundFrontendClassInput *pFVar6;
  FScriptContainerElement *pFVar7;
  ForAnyElementType *pFVar8;
  
  if (param_3 != 0) {
    pFVar8 = param_1;
    do {
      pFVar3 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar8);
      if (pFVar8 != pFVar3) {
        DestructItems<FMetasoundFrontendClassInput,int>
                  ((FMetasoundFrontendClassInput *)pFVar8->Data,*(int *)&pFVar8[1].Data);
        iVar4 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar8[1].Data + 4);
        pFVar6 = (FMetasoundFrontendClassInput *)pFVar3->Data;
        iVar5 = *piVar1;
        *(int *)&pFVar8[1].Data = iVar4;
        if ((iVar4 == 0) && (iVar5 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x48,8,iVar4,iVar5,pFVar8,iVar4,piVar1);
          ConstructItems<FMetasoundFrontendClassInput,FMetasoundFrontendClassInput,int>
                    (pFVar8->Data,pFVar6,iVar4);
        }
      }
      pFVar2 = pFVar8 + 2;
      if (pFVar2 != pFVar3 + 2) {
        iVar4 = *(int *)&pFVar3[3].Data;
        piVar1 = (int *)((longlong)&pFVar8[3].Data + 4);
        pFVar7 = pFVar3[2].Data;
        iVar5 = *piVar1;
        *(int *)&pFVar8[3].Data = iVar4;
        if ((iVar4 == 0) && (iVar5 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x34,4,iVar4,iVar5,pFVar2,iVar4,piVar1);
          if (iVar4 != 0) {
            memcpy(pFVar2->Data,pFVar7,(longlong)iVar4 * 0x34);
          }
        }
      }
      pFVar2 = pFVar8 + 4;
      if (pFVar2 != pFVar3 + 4) {
        iVar4 = *(int *)&pFVar3[5].Data;
        piVar1 = (int *)((longlong)&pFVar8[5].Data + 4);
        pFVar7 = pFVar3[4].Data;
        iVar5 = *piVar1;
        *(int *)&pFVar8[5].Data = iVar4;
        if ((iVar4 == 0) && (iVar5 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x14,4,iVar4,iVar5,pFVar2,iVar4,piVar1);
          if (iVar4 != 0) {
            memcpy(pFVar2->Data,pFVar7,(longlong)iVar4 * 0x14);
          }
        }
      }
      pFVar7 = pFVar3[7].Data;
      pFVar8[6].Data = pFVar3[6].Data;
      pFVar8[7].Data = pFVar7;
      param_3 = param_3 + -1;
      pFVar8 = pFVar8 + 8;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMetasoundFrontendVariable> @ 14ad7e480

void __cdecl UE::CoreUObject::Private::Construct<FMetasoundFrontendVariable>(void *param_1)

{
  memset(param_1,0,0xb8);
  *(FGuid *)((longlong)param_1 + 0x68) = Metasound::FrontendInvalidID;
  *(FGuid *)((longlong)param_1 + 0x78) = Metasound::FrontendInvalidID;
  *(FGuid *)((longlong)param_1 + 0x88) = Metasound::FrontendInvalidID;
  return;
}

// ConstructForTests<FMetasoundFrontendVariable> @ 14ad7e500

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMetasoundFrontendVariable>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(FGuid *)((longlong)param_1 + 0x68) = Metasound::FrontendInvalidID;
  *(FGuid *)((longlong)param_1 + 0x78) = Metasound::FrontendInvalidID;
  *(FGuid *)((longlong)param_1 + 0x88) = Metasound::FrontendInvalidID;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  return;
}

// Destruct<FMetasoundFrontendVariable> @ 14ad7e580

void __cdecl UE::CoreUObject::Private::Destruct<FMetasoundFrontendVariable>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0xa8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xa8));
  }
  if (*(void **)((longlong)param_1 + 0x98) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x98));
  }
  FMetasoundFrontendLiteral::~FMetasoundFrontendLiteral
            ((FMetasoundFrontendLiteral *)((longlong)param_1 + 0x10));
  return;
}

// Copy<FMetasoundFrontendVariable> @ 14ad7e620

bool __cdecl
UE::CoreUObject::Private::Copy<FMetasoundFrontendVariable>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
      FMetasoundFrontendLiteral::operator=
                ((FMetasoundFrontendLiteral *)((longlong)param_1 + 0x10),
                 (FMetasoundFrontendLiteral *)((longlong)param_2 + 0x10));
      uVar1 = *(undefined8 *)((longlong)param_2 + 0x70);
      *(undefined8 *)((longlong)param_1 + 0x68) = *(undefined8 *)((longlong)param_2 + 0x68);
      *(undefined8 *)((longlong)param_1 + 0x70) = uVar1;
      uVar1 = *(undefined8 *)((longlong)param_2 + 0x80);
      *(undefined8 *)((longlong)param_1 + 0x78) = *(undefined8 *)((longlong)param_2 + 0x78);
      *(undefined8 *)((longlong)param_1 + 0x80) = uVar1;
      uVar1 = *(undefined8 *)((longlong)param_2 + 0x90);
      *(undefined8 *)((longlong)param_1 + 0x88) = *(undefined8 *)((longlong)param_2 + 0x88);
      *(undefined8 *)((longlong)param_1 + 0x90) = uVar1;
      TArray<FGuid,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FGuid,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x98),
                 (TArray<FGuid,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x98));
      TArray<FGuid,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FGuid,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0xa8),
                 (TArray<FGuid,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0xa8));
      param_2 = (void *)((longlong)param_2 + 0xb8);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0xb8);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMetasoundFrontendInterfaceStyle> @ 14ad7eb40

void __cdecl UE::CoreUObject::Private::Construct<FMetasoundFrontendInterfaceStyle>(void *param_1)

{
  return;
}

// ConstructForTests<FMetasoundFrontendInterfaceStyle> @ 14ad7eb50

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMetasoundFrontendInterfaceStyle>(void *param_1)

{
  return;
}

// GetStructPtr<FMetaSoundFrontendNodeConfiguration,FMetaSoundFrontendNodeConfiguration> @ 14ad896d0

FMetaSoundFrontendNodeConfiguration * __cdecl
UE::StructUtils::
GetStructPtr<FMetaSoundFrontendNodeConfiguration,FMetaSoundFrontendNodeConfiguration>
          (UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  bool bVar2;
  UPackage *pUVar3;
  FMetaSoundFrontendNodeConfiguration *pFVar4;
  UScriptStruct *local_res8;
  UScriptStruct **local_res10 [3];
  
  if ((param_2 == (void *)0x0) || (param_1 == (UScriptStruct *)0x0)) {
    return (FMetaSoundFrontendNodeConfiguration *)0x0;
  }
  local_res8 = param_1;
  if (Z_Registration_Info_UScriptStruct_FMetaSoundFrontendNodeConfiguration.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_MetasoundFrontend();
    Z_Registration_Info_UScriptStruct_FMetaSoundFrontendNodeConfiguration.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMetaSoundFrontendNodeConfiguration,
                         (UObject *)pUVar3,L"MetaSoundFrontendNodeConfiguration");
  }
  if (local_res8 !=
      Z_Registration_Info_UScriptStruct_FMetaSoundFrontendNodeConfiguration.OuterSingleton) {
    if (Z_Registration_Info_UScriptStruct_FMetaSoundFrontendNodeConfiguration.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_MetasoundFrontend();
      Z_Registration_Info_UScriptStruct_FMetaSoundFrontendNodeConfiguration.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMetaSoundFrontendNodeConfiguration,
                           (UObject *)pUVar3,L"MetaSoundFrontendNodeConfiguration");
      if (Z_Registration_Info_UScriptStruct_FMetaSoundFrontendNodeConfiguration.OuterSingleton ==
          (UScriptStruct *)0x0) goto LAB_14ad89780;
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FMetaSoundFrontendNodeConfiguration.
                 OuterSingleton)->_padding_;
    if (((int)local_res8->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(local_res8->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FMetaSoundFrontendNodeConfiguration.OuterSingleton)->
         _padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
LAB_14ad89780:
      local_res10[0] = &local_res8;
      bVar2 = `UE::StructUtils::
              GetStructPtr<FMetaSoundFrontendNodeConfiguration,FMetaSoundFrontendNodeConfiguration>'
              ::__l7::<lambda_1>::operator()(local_res10);
      pFVar4 = (FMetaSoundFrontendNodeConfiguration *)0x0;
      if (bVar2) {
        pFVar4 = param_2;
      }
      return pFVar4;
    }
  }
  return param_2;
}

// GetStructPtr<FMetaSoundFrontendNodeConfiguration,FMetaSoundFrontendNodeConfiguration> @ 14ad897c0

FMetaSoundFrontendNodeConfiguration * __cdecl
UE::StructUtils::
GetStructPtr<FMetaSoundFrontendNodeConfiguration,FMetaSoundFrontendNodeConfiguration>
          (UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  bool bVar2;
  UPackage *pUVar3;
  UScriptStruct *local_res8;
  UScriptStruct **local_res10 [3];
  
  if (param_2 == (void *)0x0) {
    return (FMetaSoundFrontendNodeConfiguration *)0x0;
  }
  if (param_1 == (UScriptStruct *)0x0) {
    return (FMetaSoundFrontendNodeConfiguration *)0x0;
  }
  local_res8 = param_1;
  if (Z_Registration_Info_UScriptStruct_FMetaSoundFrontendNodeConfiguration.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_MetasoundFrontend();
    Z_Registration_Info_UScriptStruct_FMetaSoundFrontendNodeConfiguration.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMetaSoundFrontendNodeConfiguration,
                         (UObject *)pUVar3,L"MetaSoundFrontendNodeConfiguration");
  }
  if (local_res8 ==
      Z_Registration_Info_UScriptStruct_FMetaSoundFrontendNodeConfiguration.OuterSingleton) {
    return param_2;
  }
  if (Z_Registration_Info_UScriptStruct_FMetaSoundFrontendNodeConfiguration.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_MetasoundFrontend();
    Z_Registration_Info_UScriptStruct_FMetaSoundFrontendNodeConfiguration.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMetaSoundFrontendNodeConfiguration,
                         (UObject *)pUVar3,L"MetaSoundFrontendNodeConfiguration");
    if (Z_Registration_Info_UScriptStruct_FMetaSoundFrontendNodeConfiguration.OuterSingleton ==
        (UScriptStruct *)0x0) goto LAB_14ad89870;
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FMetaSoundFrontendNodeConfiguration.OuterSingleton
               )->_padding_;
  if (((int)local_res8->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(local_res8->_padding_ + (longlong)iVar1 * 8) !=
      &(Z_Registration_Info_UScriptStruct_FMetaSoundFrontendNodeConfiguration.OuterSingleton)->
       _padding_)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    return param_2;
  }
LAB_14ad89870:
  local_res10[0] = &local_res8;
  bVar2 = `UE::StructUtils::
          GetStructPtr<FMetaSoundFrontendNodeConfiguration,FMetaSoundFrontendNodeConfiguration>'::
          __l7::<lambda_1>::operator()(local_res10);
  if (bVar2) {
    return param_2;
  }
  return (FMetaSoundFrontendNodeConfiguration *)0x0;
}

// GetStructPtr<FMetasoundFrontendClassInterface,FMetasoundFrontendClassInterface> @ 14ad898a0

FMetasoundFrontendClassInterface * __cdecl
UE::StructUtils::GetStructPtr<FMetasoundFrontendClassInterface,FMetasoundFrontendClassInterface>
          (UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  bool bVar2;
  UPackage *pUVar3;
  FMetasoundFrontendClassInterface *pFVar4;
  UScriptStruct *local_res8;
  UScriptStruct **local_res10 [3];
  
  if ((param_2 == (void *)0x0) || (param_1 == (UScriptStruct *)0x0)) {
    return (FMetasoundFrontendClassInterface *)0x0;
  }
  local_res8 = param_1;
  if (Z_Registration_Info_UScriptStruct_FMetasoundFrontendClassInterface.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_MetasoundFrontend();
    Z_Registration_Info_UScriptStruct_FMetasoundFrontendClassInterface.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendClassInterface,
                         (UObject *)pUVar3,L"MetasoundFrontendClassInterface");
  }
  if (local_res8 !=
      Z_Registration_Info_UScriptStruct_FMetasoundFrontendClassInterface.OuterSingleton) {
    if (Z_Registration_Info_UScriptStruct_FMetasoundFrontendClassInterface.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_MetasoundFrontend();
      Z_Registration_Info_UScriptStruct_FMetasoundFrontendClassInterface.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendClassInterface,
                           (UObject *)pUVar3,L"MetasoundFrontendClassInterface");
      if (Z_Registration_Info_UScriptStruct_FMetasoundFrontendClassInterface.OuterSingleton ==
          (UScriptStruct *)0x0) goto LAB_14ad89950;
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FMetasoundFrontendClassInterface.OuterSingleton)
                 ->_padding_;
    if (((int)local_res8->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(local_res8->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FMetasoundFrontendClassInterface.OuterSingleton)->
         _padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
LAB_14ad89950:
      local_res10[0] = &local_res8;
      bVar2 = `UE::StructUtils::
              GetStructPtr<FMetasoundFrontendClassInterface,FMetasoundFrontendClassInterface>'::__l7
              ::<lambda_1>::operator()(local_res10);
      pFVar4 = (FMetasoundFrontendClassInterface *)0x0;
      if (bVar2) {
        pFVar4 = param_2;
      }
      return pFVar4;
    }
  }
  return param_2;
}

// GetStructPtr<FMetasoundFrontendClassInterface,FMetasoundFrontendClassInterface> @ 14ad89990

FMetasoundFrontendClassInterface * __cdecl
UE::StructUtils::GetStructPtr<FMetasoundFrontendClassInterface,FMetasoundFrontendClassInterface>
          (UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  bool bVar2;
  UPackage *pUVar3;
  UScriptStruct *local_res8;
  UScriptStruct **local_res10 [3];
  
  if (param_2 == (void *)0x0) {
    return (FMetasoundFrontendClassInterface *)0x0;
  }
  if (param_1 == (UScriptStruct *)0x0) {
    return (FMetasoundFrontendClassInterface *)0x0;
  }
  local_res8 = param_1;
  if (Z_Registration_Info_UScriptStruct_FMetasoundFrontendClassInterface.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_MetasoundFrontend();
    Z_Registration_Info_UScriptStruct_FMetasoundFrontendClassInterface.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendClassInterface,
                         (UObject *)pUVar3,L"MetasoundFrontendClassInterface");
  }
  if (local_res8 ==
      Z_Registration_Info_UScriptStruct_FMetasoundFrontendClassInterface.OuterSingleton) {
    return param_2;
  }
  if (Z_Registration_Info_UScriptStruct_FMetasoundFrontendClassInterface.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_MetasoundFrontend();
    Z_Registration_Info_UScriptStruct_FMetasoundFrontendClassInterface.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendClassInterface,
                         (UObject *)pUVar3,L"MetasoundFrontendClassInterface");
    if (Z_Registration_Info_UScriptStruct_FMetasoundFrontendClassInterface.OuterSingleton ==
        (UScriptStruct *)0x0) goto LAB_14ad89a40;
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FMetasoundFrontendClassInterface.OuterSingleton)->
               _padding_;
  if (((int)local_res8->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(local_res8->_padding_ + (longlong)iVar1 * 8) !=
      &(Z_Registration_Info_UScriptStruct_FMetasoundFrontendClassInterface.OuterSingleton)->
       _padding_)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    return param_2;
  }
LAB_14ad89a40:
  local_res10[0] = &local_res8;
  bVar2 = `UE::StructUtils::
          GetStructPtr<FMetasoundFrontendClassInterface,FMetasoundFrontendClassInterface>'::__l7::
          <lambda_1>::operator()(local_res10);
  if (bVar2) {
    return param_2;
  }
  return (FMetasoundFrontendClassInterface *)0x0;
}

// GetStructRef<FMetasoundFrontendClassInterface> @ 14ad89a70

FMetasoundFrontendClassInterface * __cdecl
UE::StructUtils::GetStructRef<FMetasoundFrontendClassInterface>
          (UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FMetasoundFrontendClassInterface *pFVar4;
  UPackage *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FMetasoundFrontendClassInterface *)(*pcVar2)();
    return pFVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FMetasoundFrontendClassInterface *)(*pcVar2)();
    return pFVar4;
  }
  if (Z_Registration_Info_UScriptStruct_FMetasoundFrontendClassInterface.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_MetasoundFrontend();
    Z_Registration_Info_UScriptStruct_FMetasoundFrontendClassInterface.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendClassInterface,
                         (UObject *)pUVar5,L"MetasoundFrontendClassInterface");
  }
  if (param_1 == Z_Registration_Info_UScriptStruct_FMetasoundFrontendClassInterface.OuterSingleton)
  {
    return param_2;
  }
  if (Z_Registration_Info_UScriptStruct_FMetasoundFrontendClassInterface.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_MetasoundFrontend();
    Z_Registration_Info_UScriptStruct_FMetasoundFrontendClassInterface.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendClassInterface,
                         (UObject *)pUVar5,L"MetasoundFrontendClassInterface");
    if (Z_Registration_Info_UScriptStruct_FMetasoundFrontendClassInterface.OuterSingleton ==
        (UScriptStruct *)0x0) goto LAB_14ad89b6b;
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FMetasoundFrontendClassInterface.OuterSingleton)->
               _padding_;
  if (((int)param_1->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
      &(Z_Registration_Info_UScriptStruct_FMetasoundFrontendClassInterface.OuterSingleton)->
       _padding_)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    return param_2;
  }
LAB_14ad89b6b:
  if (Z_Registration_Info_UScriptStruct_FMetasoundFrontendClassInterface.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_MetasoundFrontend();
    Z_Registration_Info_UScriptStruct_FMetasoundFrontendClassInterface.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendClassInterface,
                         (UObject *)pUVar5,L"MetasoundFrontendClassInterface");
  }
  UObjectBaseUtility::GetPathName
            ((UObjectBaseUtility *)
             Z_Registration_Info_UScriptStruct_FMetasoundFrontendClassInterface.OuterSingleton,
             &local_18,(UObject *)0x0);
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0);
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                     ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (!bVar3) {
    return param_2;
  }
  pcVar2 = (code *)swi(3);
  pFVar4 = (FMetasoundFrontendClassInterface *)(*pcVar2)();
  return pFVar4;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FMetasoundFrontendVertex_const_*>_> @ 14ad8d810

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FMetasoundFrontendVertex_const_*>_>
          (ushort param_1,ForElementType<FMetasoundFrontendVertex_const_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x21) {
      iVar8 = 0x20;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x21) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FMetasoundFrontendVertex_const_*>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<FString,enum_EMetasoundFrontendClassType>_>_> @ 14ad8d8e0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<FString,enum_EMetasoundFrontendClassType>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TTuple<FString,EMetasoundFrontendClassType>_> *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 0x21) {
      iVar8 = 0x20;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x21) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TTuple<FString,enum_EMetasoundFrontendClassType>_>::ResizeAllocation
              (param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocShrink<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FMetasoundFrontendVertex_const_*>_> @ 14ad8d9c0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FMetasoundFrontendVertex_const_*>_>
          (uint param_1,uint param_2,ForElementType<FMetasoundFrontendVertex_const_*> *param_3,
          int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0x21) {
    iVar2 = 0x20;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FMetasoundFrontendVertex_const_*>::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FMetasoundFrontendVertex_const_*>_> @ 14ad8da80

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FMetasoundFrontendVertex_const_*>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FMetasoundFrontendVertex_const_*> *param_4,int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x21) {
      iVar1 = 0x20;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FMetasoundFrontendVertex_const_*>::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<FString,enum_EMetasoundFrontendClassType>_>_> @ 14ad8db00

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<FString,enum_EMetasoundFrontendClassType>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TTuple<FString,EMetasoundFrontendClassType>_> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x21) {
      iVar1 = 0x20;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TTuple<FString,enum_EMetasoundFrontendClassType>_>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// Construct<FMetaSoundFrontendDocumentBuilder> @ 14add5520

void __cdecl UE::CoreUObject::Private::Construct<FMetaSoundFrontendDocumentBuilder>(void *param_1)

{
  TSharedPtr<Metasound::Frontend::FDocumentModifyDelegates,1> local_28;
  TScriptInterface<IMetaSoundDocumentInterface> local_18;
  
  local_28.Object = (FDocumentModifyDelegates *)0x0;
  local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_18._0_8_ = 0;
  local_18._8_8_ = 0;
  FMetaSoundFrontendDocumentBuilder::FMetaSoundFrontendDocumentBuilder
            (param_1,&local_18,&local_28,false);
  return;
}

// ConstructForTests<FMetaSoundFrontendDocumentBuilder> @ 14add5560

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMetaSoundFrontendDocumentBuilder>(void *param_1)

{
  TSharedPtr<Metasound::Frontend::FDocumentModifyDelegates,1> local_28;
  TScriptInterface<IMetaSoundDocumentInterface> local_18;
  
  local_28.Object = (FDocumentModifyDelegates *)0x0;
  local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_18._0_8_ = 0;
  local_18._8_8_ = 0;
  FMetaSoundFrontendDocumentBuilder::FMetaSoundFrontendDocumentBuilder
            (param_1,&local_18,&local_28,false);
  return;
}

// Destruct<FMetaSoundFrontendDocumentBuilder> @ 14add55a0

void __cdecl UE::CoreUObject::Private::Destruct<FMetaSoundFrontendDocumentBuilder>(void *param_1)

{
  undefined8 uStack_28;
  FSharedReferencer<1> FStack_20;
  undefined8 uStack_18;
  FSharedReferencer<1> FStack_10;
  
  *(undefined ***)param_1 = &___7FMetaSoundFrontendDocumentBuilder__6B_;
  if ((*(longlong *)((longlong)param_1 + 8) != 0) && (*(longlong *)((longlong)param_1 + 0x10) != 0))
  {
    (**(code **)(**(longlong **)((longlong)param_1 + 0x10) + 0x58))();
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  }
  uStack_28 = 0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((undefined8 *)((longlong)param_1 + 0x38) != &uStack_28) {
    *(undefined8 *)((longlong)param_1 + 0x38) = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_1 + 0x40),&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  uStack_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((undefined8 *)((longlong)param_1 + 0x28) != &uStack_18) {
    *(undefined8 *)((longlong)param_1 + 0x28) = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_1 + 0x30),&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x40));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x30));
  return;
}

// Copy<FMetaSoundFrontendDocumentBuilder> @ 14add55b0

bool __cdecl
UE::CoreUObject::Private::Copy<FMetaSoundFrontendDocumentBuilder>
          (void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  longlong lVar2;
  undefined8 uVar3;
  TReferenceControllerBase<1> *pTVar4;
  void *pvVar5;
  
  pvVar5 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = *(UObject **)((longlong)pvVar5 + (longlong)param_2 + (8 - (longlong)param_1)),
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    *(undefined8 *)((longlong)pvVar5 + 8) =
         *(undefined8 *)((longlong)pvVar5 + (longlong)param_2 + (8 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar5 + 0x10) =
         *(undefined8 *)((longlong)pvVar5 + (longlong)param_2 + (0x10 - (longlong)param_1));
    uVar3 = *(undefined8 *)((longlong)pvVar5 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar5 + 0x18) =
         *(undefined8 *)((longlong)pvVar5 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar5 + 0x20) = uVar3;
    lVar2 = *(longlong *)((longlong)pvVar5 + (longlong)param_2 + (0x30 - (longlong)param_1));
    uVar3 = *(undefined8 *)((longlong)pvVar5 + (longlong)param_2 + (0x28 - (longlong)param_1));
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    pTVar4 = *(TReferenceControllerBase<1> **)((longlong)pvVar5 + 0x30);
    *(undefined8 *)((longlong)pvVar5 + 0x28) = uVar3;
    *(longlong *)((longlong)pvVar5 + 0x30) = lVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    lVar2 = *(longlong *)((longlong)pvVar5 + (longlong)param_2 + (0x40 - (longlong)param_1));
    uVar3 = *(undefined8 *)((longlong)pvVar5 + (longlong)param_2 + (0x38 - (longlong)param_1));
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    pTVar4 = *(TReferenceControllerBase<1> **)((longlong)pvVar5 + 0x40);
    *(undefined8 *)((longlong)pvVar5 + 0x38) = uVar3;
    *(longlong *)((longlong)pvVar5 + 0x40) = lVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    uVar3 = *(undefined8 *)((longlong)pvVar5 + (longlong)param_2 + (0x50 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar5 + 0x48) =
         *(undefined8 *)((longlong)pvVar5 + (longlong)param_2 + (0x48 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar5 + 0x50) = uVar3;
    pvVar5 = (void *)((longlong)pvVar5 + 0x58);
  }
  return true;
}

// Construct<FMetasoundFrontendLiteral> @ 14ae0c430

void __cdecl UE::CoreUObject::Private::Construct<FMetasoundFrontendLiteral>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 3) = 0;
  *(undefined1 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  return;
}

// ConstructForTests<FMetasoundFrontendLiteral> @ 14ae0c470

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMetasoundFrontendLiteral>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  return;
}

// Destruct<FMetasoundFrontendLiteral> @ 14ae0c4b0

void __cdecl UE::CoreUObject::Private::Destruct<FMetasoundFrontendLiteral>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
  }
  DestructItems<FString,int>
            (*(FString **)((longlong)param_1 + 0x38),*(int *)((longlong)param_1 + 0x40));
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FMetasoundFrontendLiteral> @ 14ae0c4c0

bool __cdecl
UE::CoreUObject::Private::Copy<FMetasoundFrontendLiteral>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined1 *puVar5;
  void *pvVar6;
  
  if (param_3 != 0) {
    puVar5 = param_1;
    pvVar6 = param_2;
    do {
      *puVar5 = puVar5[(longlong)param_2 - (longlong)param_1];
      *(undefined4 *)(puVar5 + 4) = *(undefined4 *)((longlong)pvVar6 + 4);
      TArray<bool,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<bool,TSizedDefaultAllocator<32>_> *)(puVar5 + 8),
                 (TArray<bool,TSizedDefaultAllocator<32>_> *)((longlong)pvVar6 + 8));
      TArray<int,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<int,TSizedDefaultAllocator<32>_> *)(puVar5 + 0x18),
                 (TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)pvVar6 + 0x18));
      TArray<float,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<float,TSizedDefaultAllocator<32>_> *)(puVar5 + 0x28),
                 (TArray<float,TSizedDefaultAllocator<32>_> *)((longlong)pvVar6 + 0x28));
      TArray<FString,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FString,TSizedDefaultAllocator<32>_> *)(puVar5 + 0x38),
                 (TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)pvVar6 + 0x38));
      pFVar1 = (ForAnyElementType *)(puVar5 + 0x48);
      if (pFVar1 != (ForAnyElementType *)((longlong)pvVar6 + 0x48)) {
        iVar3 = *(int *)((longlong)pvVar6 + 0x50);
        piVar2 = (int *)(puVar5 + 0x54);
        pFVar4 = ((ForAnyElementType *)((longlong)pvVar6 + 0x48))->Data;
        *(int *)(puVar5 + 0x50) = iVar3;
        if ((iVar3 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar3,*piVar2,pFVar1,iVar3,piVar2);
          ConstructItems<TObjectPtr<UObject>,TObjectPtr<UObject>,int>
                    (pFVar1->Data,(TObjectPtr<UObject> *)pFVar4,iVar3);
        }
      }
      param_3 = param_3 + -1;
      puVar5 = puVar5 + 0x58;
      pvVar6 = (void *)((longlong)pvVar6 + 0x58);
    } while (param_3 != 0);
  }
  return true;
}

// DereferenceIfNecessary<Metasound::Frontend::FDocumentCache,Metasound::Frontend::FDocumentCache_*_&> @ 14ae10470

FDocumentCache * __cdecl
UE::Core::Private::
DereferenceIfNecessary<Metasound::Frontend::FDocumentCache,Metasound::Frontend::FDocumentCache_*_&>
          (FDocumentCache **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<Metasound::Frontend::FDocumentGraphEdgeCache,Metasound::Frontend::FDocumentGraphEdgeCache_*_&> @ 14ae10490

FDocumentGraphEdgeCache * __cdecl
UE::Core::Private::
DereferenceIfNecessary<Metasound::Frontend::FDocumentGraphEdgeCache,Metasound::Frontend::FDocumentGraphEdgeCache_*_&>
          (FDocumentGraphEdgeCache **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<Metasound::Frontend::FDocumentGraphInterfaceCache,Metasound::Frontend::FDocumentGraphInterfaceCache_*_&> @ 14ae104b0

FDocumentGraphInterfaceCache * __cdecl
UE::Core::Private::
DereferenceIfNecessary<Metasound::Frontend::FDocumentGraphInterfaceCache,Metasound::Frontend::FDocumentGraphInterfaceCache_*_&>
          (FDocumentGraphInterfaceCache **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<Metasound::Frontend::FDocumentGraphNodeCache,Metasound::Frontend::FDocumentGraphNodeCache_*_&> @ 14ae104d0

FDocumentGraphNodeCache * __cdecl
UE::Core::Private::
DereferenceIfNecessary<Metasound::Frontend::FDocumentGraphNodeCache,Metasound::Frontend::FDocumentGraphNodeCache_*_&>
          (FDocumentGraphNodeCache **param_1)

{
  return *param_1;
}

// GetStructRef<FMetaSoundFrontendNodeConfiguration> @ 14ae122a0

FMetaSoundFrontendNodeConfiguration * __cdecl
UE::StructUtils::GetStructRef<FMetaSoundFrontendNodeConfiguration>
          (UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FMetaSoundFrontendNodeConfiguration *pFVar4;
  UScriptStruct *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FMetaSoundFrontendNodeConfiguration *)(*pcVar2)();
    return pFVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FMetaSoundFrontendNodeConfiguration *)(*pcVar2)();
    return pFVar4;
  }
  pUVar5 = FMetaSoundFrontendNodeConfiguration::StaticStruct();
  if (param_1 != pUVar5) {
    pUVar5 = FMetaSoundFrontendNodeConfiguration::StaticStruct();
    if (pUVar5 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)param_1->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        return param_2;
      }
    }
    pUVar5 = FMetaSoundFrontendNodeConfiguration::StaticStruct();
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar5,&local_18,(UObject *)0x0);
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                       ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FMetaSoundFrontendNodeConfiguration *)(*pcVar2)();
      return pFVar4;
    }
  }
  return param_2;
}

// Copy<FMetaSoundClassVertexCollectionInfo> @ 14ae49990

bool __cdecl
UE::CoreUObject::Private::Copy<FMetaSoundClassVertexCollectionInfo>
          (void *param_1,void *param_2,int param_3)

{
  TArray<FMetaSoundClassVertexInfo,TSizedDefaultAllocator<32>_> *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      TArray<FMetaSoundClassVertexInfo,TSizedDefaultAllocator<32>_>::operator=
                (this,(TArray<FMetaSoundClassVertexInfo,TSizedDefaultAllocator<32>_> *)
                      (((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMetaSoundClassSearchInfo> @ 14ae499e0

void __cdecl UE::CoreUObject::Private::Construct<FMetaSoundClassSearchInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  FText::FText(param_1);
  FText::FText((FText *)((longlong)param_1 + 0x10));
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// ConstructForTests<FMetaSoundClassSearchInfo> @ 14ae49a30

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMetaSoundClassSearchInfo>(void *param_1)

{
  FText::FText(param_1);
  FText::FText((FText *)((longlong)param_1 + 0x10));
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// Destruct<FMetaSoundClassSearchInfo> @ 14ae49a70

void __cdecl UE::CoreUObject::Private::Destruct<FMetaSoundClassSearchInfo>(void *param_1)

{
  DestructItems<FText,int>(*(FText **)((longlong)param_1 + 0x30),*(int *)((longlong)param_1 + 0x38))
  ;
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  DestructItems<FText,int>(*(FText **)((longlong)param_1 + 0x20),*(int *)((longlong)param_1 + 0x28))
  ;
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  if (*(longlong **)((longlong)param_1 + 0x10) != (longlong *)0x0) {
    (**(code **)(**(longlong **)((longlong)param_1 + 0x10) + 0x10))();
  }
  if (*(longlong **)param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ae5c2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)param_1 + 0x10))();
    return;
  }
  return;
}

// Copy<FMetaSoundClassSearchInfo> @ 14ae49a80

bool __cdecl
UE::CoreUObject::Private::Copy<FMetaSoundClassSearchInfo>(void *param_1,void *param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      plVar1 = *(longlong **)(lVar3 + (longlong)param_1);
      plVar2 = *(longlong **)param_1;
      if (plVar2 != plVar1) {
        *(longlong **)param_1 = plVar1;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 8))(plVar1,local_res18);
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
      *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_1 + lVar3 + 8);
      plVar1 = *(longlong **)((longlong)param_1 + lVar3 + 0x10);
      plVar2 = *(longlong **)((longlong)param_1 + 0x10);
      if (plVar2 != plVar1) {
        *(longlong **)((longlong)param_1 + 0x10) = plVar1;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 8))(plVar1,local_res8);
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
      *(undefined4 *)((longlong)param_1 + 0x18) = *(undefined4 *)((longlong)param_1 + lVar3 + 0x18);
      TArray<FText,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FText,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x20),
                 (TArray<FText,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + lVar3 + 0x20));
      TArray<FText,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FText,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x30),
                 (TArray<FText,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + lVar3 + 0x30));
      param_3 = param_3 + -1;
      param_1 = (longlong *)((longlong)param_1 + 0x40);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMetaSoundClassVertexInfo> @ 14ae49b90

void __cdecl UE::CoreUObject::Private::Construct<FMetaSoundClassVertexInfo>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x10) = 2;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FMetaSoundClassVertexInfo> @ 14ae49bb0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMetaSoundClassVertexInfo>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x10) = 2;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FMetaSoundClassVertexInfo> @ 14ae49bd0

void __cdecl UE::CoreUObject::Private::Destruct<FMetaSoundClassVertexInfo>(void *param_1)

{
  return;
}

// Copy<FMetaSoundClassVertexInfo> @ 14ae49be0

bool __cdecl
UE::CoreUObject::Private::Copy<FMetaSoundClassVertexInfo>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined4 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      *(undefined4 *)(puVar4 + 2) = uVar2;
      param_3 = param_3 + -1;
      puVar4 = (undefined8 *)((longlong)puVar4 + 0x14);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FNodeTemplateGenerateInterfaceParams> @ 14ae49d20

void __cdecl
UE::CoreUObject::Private::Construct<FNodeTemplateGenerateInterfaceParams>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FNodeTemplateGenerateInterfaceParams> @ 14ae49d40

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FNodeTemplateGenerateInterfaceParams>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FNodeTemplateGenerateInterfaceParams> @ 14ae49d60

void __cdecl UE::CoreUObject::Private::Destruct<FNodeTemplateGenerateInterfaceParams>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FNodeTemplateGenerateInterfaceParams> @ 14ae49da0

bool __cdecl
UE::CoreUObject::Private::Copy<FNodeTemplateGenerateInterfaceParams>
          (void *param_1,void *param_2,int param_3)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pTVar1 = (TArray<FName,TSizedDefaultAllocator<32>_> *)
               (((longlong)param_2 - (longlong)param_1) + (longlong)this);
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=(this,pTVar1);
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=(this + 1,pTVar1 + 1);
      param_3 = param_3 + -1;
      this = this + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMetaSoundFrontendTemplateNodeConfiguration> @ 14ae4a360

void __cdecl
UE::CoreUObject::Private::Construct<FMetaSoundFrontendTemplateNodeConfiguration>(void *param_1)

{
  *(undefined ***)param_1 = &___7FMetaSoundFrontendTemplateNodeConfiguration__6B_;
  return;
}

// ConstructForTests<FMetaSoundFrontendTemplateNodeConfiguration> @ 14ae4a380

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMetaSoundFrontendTemplateNodeConfiguration>
          (void *param_1)

{
  *(undefined ***)param_1 = &___7FMetaSoundFrontendTemplateNodeConfiguration__6B_;
  return;
}

// Destruct<FMetaSoundFrontendTemplateNodeConfiguration> @ 14ae4a3a0

void __cdecl
UE::CoreUObject::Private::Destruct<FMetaSoundFrontendTemplateNodeConfiguration>(void *param_1)

{
  return;
}

// Copy<FMetaSoundFrontendTemplateNodeConfiguration> @ 14ae4a3b0

bool __cdecl
UE::CoreUObject::Private::Copy<FMetaSoundFrontendTemplateNodeConfiguration>
          (void *param_1,void *param_2,int param_3)

{
  return true;
}

// Construct<FMetaSoundClassInterfaceInfo> @ 14ae4a3c0

void __cdecl UE::CoreUObject::Private::Construct<FMetaSoundClassInterfaceInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  FMetaSoundClassInterfaceInfo::FMetaSoundClassInterfaceInfo(param_1);
  return;
}

// ConstructForTests<FMetaSoundClassInterfaceInfo> @ 14ae4a3f0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMetaSoundClassInterfaceInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FText::FText((FText *)((longlong)param_1 + 0x10));
  FText::FText((FText *)((longlong)param_1 + 0x20));
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  return;
}

// Destruct<FMetaSoundClassInterfaceInfo> @ 14ae4a400

void __cdecl UE::CoreUObject::Private::Destruct<FMetaSoundClassInterfaceInfo>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  if (*(void **)((longlong)param_1 + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x60));
  }
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
  }
  FMetaSoundClassSearchInfo::~FMetaSoundClassSearchInfo
            ((FMetaSoundClassSearchInfo *)((longlong)param_1 + 0x10));
  DestructItems<FMetasoundFrontendInterfaceMetadata,int>
            (*(FMetasoundFrontendInterfaceMetadata **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FMetaSoundClassInterfaceInfo> @ 14ae4a470

bool __cdecl
UE::CoreUObject::Private::Copy<FMetaSoundClassInterfaceInfo>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  ForAnyElementType *pFVar3;
  int iVar4;
  int iVar5;
  FMetasoundFrontendInterfaceMetadata *pFVar6;
  FScriptContainerElement *_Src;
  ForAnyElementType *pFVar7;
  
  if (param_3 != 0) {
    pFVar7 = param_1;
    do {
      pFVar3 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar7);
      if (pFVar7 != pFVar3) {
        DestructItems<FMetasoundFrontendInterfaceMetadata,int>
                  ((FMetasoundFrontendInterfaceMetadata *)pFVar7->Data,*(int *)&pFVar7[1].Data);
        iVar4 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar7[1].Data + 4);
        pFVar6 = (FMetasoundFrontendInterfaceMetadata *)pFVar3->Data;
        iVar5 = *piVar1;
        *(int *)&pFVar7[1].Data = iVar4;
        if ((iVar4 == 0) && (iVar5 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,iVar4,iVar5,pFVar7,iVar4,piVar1);
          ConstructItems<FMetasoundFrontendInterfaceMetadata,FMetasoundFrontendInterfaceMetadata,int>
                    (pFVar7->Data,pFVar6,iVar4);
        }
      }
      FMetaSoundClassSearchInfo::operator=
                ((FMetaSoundClassSearchInfo *)(pFVar7 + 2),(FMetaSoundClassSearchInfo *)(pFVar3 + 2)
                );
      TArray<FMetaSoundClassVertexInfo,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FMetaSoundClassVertexInfo,TSizedDefaultAllocator<32>_> *)(pFVar7 + 10),
                 (TArray<FMetaSoundClassVertexInfo,TSizedDefaultAllocator<32>_> *)(pFVar3 + 10));
      TArray<FMetaSoundClassVertexInfo,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FMetaSoundClassVertexInfo,TSizedDefaultAllocator<32>_> *)(pFVar7 + 0xc),
                 (TArray<FMetaSoundClassVertexInfo,TSizedDefaultAllocator<32>_> *)(pFVar3 + 0xc));
      pFVar2 = pFVar7 + 0xe;
      if (pFVar2 != pFVar3 + 0xe) {
        iVar4 = *(int *)&pFVar3[0xf].Data;
        piVar1 = (int *)((longlong)&pFVar7[0xf].Data + 4);
        _Src = pFVar3[0xe].Data;
        iVar5 = *piVar1;
        *(int *)&pFVar7[0xf].Data = iVar4;
        if ((iVar4 == 0) && (iVar5 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,iVar4,iVar5,pFVar2,iVar4,piVar1);
          if (iVar4 != 0) {
            memcpy(pFVar2->Data,_Src,(longlong)iVar4 << 4);
          }
        }
      }
      param_3 = param_3 + -1;
      pFVar7 = pFVar7 + 0x10;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMetaSoundClassVertexCollectionInfo> @ 14ae4a5f0

void __cdecl UE::CoreUObject::Private::Construct<FMetaSoundClassVertexCollectionInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FMetaSoundClassVertexCollectionInfo> @ 14ae4a600

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMetaSoundClassVertexCollectionInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FMetaSoundClassVertexCollectionInfo> @ 14ae4a610

void __cdecl UE::CoreUObject::Private::Destruct<FMetaSoundClassVertexCollectionInfo>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// DeleterFunc<Metasound::FNodeClassRegistrationEventsPimpl> @ 14ae4d090

void __cdecl
UE::Core::Private::PimplPtr::DeleterFunc<Metasound::FNodeClassRegistrationEventsPimpl>
          (void *param_1)

{
  Metasound::FNodeClassRegistrationEventsPimpl::~FNodeClassRegistrationEventsPimpl
            ((FNodeClassRegistrationEventsPimpl *)((longlong)param_1 + 0x10));
  ::operator_delete(param_1,0x20);
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::FFrontendQueryEntry>_> @ 14ae54ad0

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::FFrontendQueryEntry>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<Metasound::FFrontendQueryEntry> *param_5,int param_6,int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 2) {
      iVar1 = 1;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
  ForElementType<Metasound::FFrontendQueryEntry>::ResizeAllocation(param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::FFrontendQueryEntry>_> @ 14ae54b70

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::FFrontendQueryEntry>_>
          (ushort param_1,ForElementType<Metasound::FFrontendQueryEntry> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 2) {
      iVar8 = 1;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 2) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
    ForElementType<Metasound::FFrontendQueryEntry>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2048,32,TSizedDefaultAllocator<32>_>::ForElementType<TUniqueFunction<void___cdecl(void)>_>_> @ 14ae54c40

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2048,32,TSizedDefaultAllocator<32>_>::ForElementType<TUniqueFunction<void___cdecl(void)>_>_>
          (ushort param_1,ForElementType<TUniqueFunction<void___cdecl(void)>_> *param_2,int *param_3
          )

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    iVar8 = 0x800;
    uVar7 = (ulonglong)(byte)param_1;
    if (0x800 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x801) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<2048,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TUniqueFunction<void___cdecl(void)>_>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::FFrontendQueryEntry>_> @ 14ae54d10

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::FFrontendQueryEntry>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<Metasound::FFrontendQueryEntry> *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 2) {
      iVar8 = 1;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 2) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
    ForElementType<Metasound::FFrontendQueryEntry>::ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::FFrontendQueryEntry>_> @ 14ae54df0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::FFrontendQueryEntry>_>
          (uint param_1,uint param_2,ForElementType<Metasound::FFrontendQueryEntry> *param_3,
          int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 2) {
    iVar2 = 1;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
    ForElementType<Metasound::FFrontendQueryEntry>::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::FFrontendQueryEntry>_> @ 14ae54eb0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::FFrontendQueryEntry>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<Metasound::FFrontendQueryEntry> *param_4,int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 2) {
      iVar1 = 1;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
    ForElementType<Metasound::FFrontendQueryEntry>::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<2048,32,TSizedDefaultAllocator<32>_>::ForElementType<TUniqueFunction<void___cdecl(void)>_>_> @ 14ae54f30

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<2048,32,TSizedDefaultAllocator<32>_>::ForElementType<TUniqueFunction<void___cdecl(void)>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TUniqueFunction<void___cdecl(void)>_> *param_4,int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x801) {
      iVar1 = 0x800;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<2048,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TUniqueFunction<void___cdecl(void)>_>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// operator() @ 15055d210

bool __thiscall
`UE::StructUtils::
GetStructPtr<FMetaSoundFrontendNodeConfiguration,FMetaSoundFrontendNodeConfiguration>'::__l7::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  UPackage *pUVar6;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_1997345562860453820>);
  if (bVar4) {
    if (Z_Registration_Info_UScriptStruct_FMetaSoundFrontendNodeConfiguration.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_MetasoundFrontend();
      Z_Registration_Info_UScriptStruct_FMetaSoundFrontendNodeConfiguration.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMetaSoundFrontendNodeConfiguration,
                           (UObject *)pUVar6,L"MetaSoundFrontendNodeConfiguration");
    }
    UObjectBaseUtility::GetPathName
              ((UObjectBaseUtility *)
               Z_Registration_Info_UScriptStruct_FMetaSoundFrontendNodeConfiguration.OuterSingleton,
               &local_18,(UObject *)0x0);
    UObjectBaseUtility::GetPathName
              ((UObjectBaseUtility *)**(undefined8 **)this,&local_28,(UObject *)0x0);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1997345562860453820>,
                       &`public:___cdecl_`struct_FMetaSoundFrontendNodeConfiguration*___ptr64___cdecl_UE::StructUtils::GetStructPtr<FMetaSoundFrontendNodeConfiguration,FMetaSoundFrontendNodeConfiguration>(UScriptStruct_const*___ptr64,void*___ptr64)'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15055d2e3;
    }
  }
  bVar4 = false;
LAB_15055d2e3:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 15055d340

bool __thiscall
`UE::StructUtils::GetStructPtr<FMetasoundFrontendClassInterface,FMetasoundFrontendClassInterface>'::
__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  UPackage *pUVar6;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_1997345562860453820>);
  if (bVar4) {
    if (Z_Registration_Info_UScriptStruct_FMetasoundFrontendClassInterface.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_MetasoundFrontend();
      Z_Registration_Info_UScriptStruct_FMetasoundFrontendClassInterface.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendClassInterface,
                           (UObject *)pUVar6,L"MetasoundFrontendClassInterface");
    }
    UObjectBaseUtility::GetPathName
              ((UObjectBaseUtility *)
               Z_Registration_Info_UScriptStruct_FMetasoundFrontendClassInterface.OuterSingleton,
               &local_18,(UObject *)0x0);
    UObjectBaseUtility::GetPathName
              ((UObjectBaseUtility *)**(undefined8 **)this,&local_28,(UObject *)0x0);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1997345562860453820>,
                       &`public:___cdecl_`struct_FMetasoundFrontendClassInterface*___ptr64___cdecl_UE::StructUtils::GetStructPtr<FMetasoundFrontendClassInterface,FMetasoundFrontendClassInterface>(UScriptStruct_const*___ptr64,void*___ptr64)'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15055d413;
    }
  }
  bVar4 = false;
LAB_15055d413:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

