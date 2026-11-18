// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionDepNodes
// Functions: 12

// Construct<FSetVertexColorInCollectionFromVertexSelectionDataflowNode> @ 14e968ee0

void __cdecl
UE::CoreUObject::Private::Construct<FSetVertexColorInCollectionFromVertexSelectionDataflowNode>
          (void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FSetVertexColorInCollectionFromVertexSelectionDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection
            ((FManagedArrayCollection *)((longlong)param_1 + 0x248));
  *(FName *)((longlong)param_1 + 0x2f8) = FDataflowVertexSelection::VerticesGroupName;
  *(undefined8 *)((longlong)param_1 + 0x310) = 0;
  *(undefined4 *)((longlong)param_1 + 0x318) = 0;
  *(undefined4 *)((longlong)param_1 + 0x31c) = 0x80;
  *(float *)((longlong)param_1 + 800) =
       FLinearColor::sRGBToLinearTable[FColor::Yellow.field0_0x0._s_0.R];
  *(float *)((longlong)param_1 + 0x324) =
       FLinearColor::sRGBToLinearTable[FColor::Yellow.field0_0x0._s_0.G];
  *(float *)((longlong)param_1 + 0x328) =
       FLinearColor::sRGBToLinearTable[FColor::Yellow.field0_0x0._s_0.B];
  *(float *)((longlong)param_1 + 0x32c) = (float)FColor::Yellow.field0_0x0._3_1_ * __real_3b808081;
  *(float *)((longlong)param_1 + 0x330) =
       FLinearColor::sRGBToLinearTable[FColor::Blue.field0_0x0._s_0.R];
  *(float *)((longlong)param_1 + 0x334) =
       FLinearColor::sRGBToLinearTable[FColor::Blue.field0_0x0._s_0.G];
  *(float *)((longlong)param_1 + 0x338) =
       FLinearColor::sRGBToLinearTable[FColor::Blue.field0_0x0._s_0.B];
  *(float *)((longlong)param_1 + 0x33c) = (float)FColor::Blue.field0_0x0._3_1_ * __real_3b808081;
  return;
}

// ConstructForTests<FSetVertexColorInCollectionFromVertexSelectionDataflowNode> @ 14e968ef0

void __cdecl
UE::CoreUObject::Private::
ConstructForTests<FSetVertexColorInCollectionFromVertexSelectionDataflowNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FSetVertexColorInCollectionFromVertexSelectionDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection
            ((FManagedArrayCollection *)((longlong)param_1 + 0x248));
  *(FName *)((longlong)param_1 + 0x2f8) = FDataflowVertexSelection::VerticesGroupName;
  *(undefined8 *)((longlong)param_1 + 0x310) = 0;
  *(undefined4 *)((longlong)param_1 + 0x318) = 0;
  *(undefined4 *)((longlong)param_1 + 0x31c) = 0x80;
  *(float *)((longlong)param_1 + 800) =
       FLinearColor::sRGBToLinearTable[FColor::Yellow.field0_0x0._s_0.R];
  *(float *)((longlong)param_1 + 0x324) =
       FLinearColor::sRGBToLinearTable[FColor::Yellow.field0_0x0._s_0.G];
  *(float *)((longlong)param_1 + 0x328) =
       FLinearColor::sRGBToLinearTable[FColor::Yellow.field0_0x0._s_0.B];
  *(float *)((longlong)param_1 + 0x32c) = (float)FColor::Yellow.field0_0x0._3_1_ * __real_3b808081;
  *(float *)((longlong)param_1 + 0x330) =
       FLinearColor::sRGBToLinearTable[FColor::Blue.field0_0x0._s_0.R];
  *(float *)((longlong)param_1 + 0x334) =
       FLinearColor::sRGBToLinearTable[FColor::Blue.field0_0x0._s_0.G];
  *(float *)((longlong)param_1 + 0x338) =
       FLinearColor::sRGBToLinearTable[FColor::Blue.field0_0x0._s_0.B];
  *(float *)((longlong)param_1 + 0x33c) = (float)FColor::Blue.field0_0x0._3_1_ * __real_3b808081;
  return;
}

// Destruct<FSetVertexColorInCollectionFromVertexSelectionDataflowNode> @ 14e968f00

void __cdecl
UE::CoreUObject::Private::Destruct<FSetVertexColorInCollectionFromVertexSelectionDataflowNode>
          (void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x310) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x310));
  }
  FManagedArrayCollection::~FManagedArrayCollection
            ((FManagedArrayCollection *)((longlong)param_1 + 0x248));
  FDataflowNode::~FDataflowNode(param_1);
  return;
}

// Copy<FSetVertexColorInCollectionFromVertexSelectionDataflowNode> @ 14e968f40

bool __cdecl
UE::CoreUObject::Private::Copy<FSetVertexColorInCollectionFromVertexSelectionDataflowNode>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 uVar5;
  void *pvVar6;
  
  if (param_3 != 0) {
    pvVar6 = param_1;
    do {
      pvVar1 = (void *)(((longlong)param_2 - (longlong)param_1) + (longlong)pvVar6);
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowNode.h"
                         ,0x51,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      FManagedArrayCollection::operator=
                ((FManagedArrayCollection *)((longlong)pvVar6 + 0x248),
                 (FManagedArrayCollection *)((longlong)pvVar1 + 0x248));
      *(undefined8 *)((longlong)pvVar6 + 0x2f8) = *(undefined8 *)((longlong)pvVar1 + 0x2f8);
      if (pvVar6 != pvVar1) {
        TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                  ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)pvVar6 + 0x300),
                   (TBitArray<FDefaultBitArrayAllocator> *)((longlong)pvVar1 + 0x300));
      }
      uVar3 = *(undefined8 *)((longlong)pvVar1 + 0x328);
      *(undefined8 *)((longlong)pvVar6 + 800) = *(undefined8 *)((longlong)pvVar1 + 800);
      *(undefined8 *)((longlong)pvVar6 + 0x328) = uVar3;
      uVar3 = *(undefined8 *)((longlong)pvVar1 + 0x338);
      *(undefined8 *)((longlong)pvVar6 + 0x330) = *(undefined8 *)((longlong)pvVar1 + 0x330);
      *(undefined8 *)((longlong)pvVar6 + 0x338) = uVar3;
      param_3 = param_3 + -1;
      pvVar6 = (void *)((longlong)pvVar6 + 0x340);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FSetVertexColorInCollectionFromFloatArrayDataflowNode> @ 14e969d40

void __cdecl
UE::CoreUObject::Private::Construct<FSetVertexColorInCollectionFromFloatArrayDataflowNode>
          (void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FSetVertexColorInCollectionFromFloatArrayDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection
            ((FManagedArrayCollection *)((longlong)param_1 + 0x248));
  *(undefined4 *)((longlong)param_1 + 0x308) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x2f8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x300) = 0;
  return;
}

// ConstructForTests<FSetVertexColorInCollectionFromFloatArrayDataflowNode> @ 14e969d90

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FSetVertexColorInCollectionFromFloatArrayDataflowNode>
          (void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FSetVertexColorInCollectionFromFloatArrayDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection
            ((FManagedArrayCollection *)((longlong)param_1 + 0x248));
  *(undefined4 *)((longlong)param_1 + 0x308) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x2f8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x300) = 0;
  return;
}

// Destruct<FSetVertexColorInCollectionFromFloatArrayDataflowNode> @ 14e969de0

void __cdecl
UE::CoreUObject::Private::Destruct<FSetVertexColorInCollectionFromFloatArrayDataflowNode>
          (void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x2f8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x2f8));
  }
  FManagedArrayCollection::~FManagedArrayCollection
            ((FManagedArrayCollection *)((longlong)param_1 + 0x248));
  FDataflowNode::~FDataflowNode(param_1);
  return;
}

// Copy<FSetVertexColorInCollectionFromFloatArrayDataflowNode> @ 14e969e20

bool __cdecl
UE::CoreUObject::Private::Copy<FSetVertexColorInCollectionFromFloatArrayDataflowNode>
          (void *param_1,void *param_2,int param_3)

{
  code *pcVar1;
  void *pvVar2;
  bool bVar3;
  undefined1 uVar4;
  
  pvVar2 = param_1;
  while( true ) {
    if (param_3 == 0) {
      return true;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowNode.h"
                       ,0x51,L"");
    if (bVar3) break;
    FManagedArrayCollection::operator=
              ((FManagedArrayCollection *)((longlong)pvVar2 + 0x248),
               (FManagedArrayCollection *)
               ((longlong)pvVar2 + (longlong)param_2 + (0x248 - (longlong)param_1)));
    TArray<float,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<float,TSizedDefaultAllocator<32>_> *)((longlong)pvVar2 + 0x2f8),
               (TArray<float,TSizedDefaultAllocator<32>_> *)
               ((longlong)pvVar2 + (longlong)param_2 + (0x2f8 - (longlong)param_1)));
    *(undefined4 *)((longlong)pvVar2 + 0x308) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x308 - (longlong)param_1));
    param_3 = param_3 + -1;
    pvVar2 = (void *)((longlong)pvVar2 + 0x310);
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (bool)uVar4;
}

// Construct<FGeometryCollectionTransferVertexScalarAttributeNode> @ 14e96a140

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryCollectionTransferVertexScalarAttributeNode>
          (void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FGeometryCollectionTransferVertexScalarAttributeNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection
            ((FManagedArrayCollection *)((longlong)param_1 + 0x248));
  FManagedArrayCollection::FManagedArrayCollection
            ((FManagedArrayCollection *)((longlong)param_1 + 0x2f8));
  ::FString::FString((FString *)((longlong)param_1 + 0x3a8),"");
  ::FString::FString((FString *)((longlong)param_1 + 0x3b8),"");
  *(undefined2 *)((longlong)param_1 + 0x3c8) = 0x201;
  *(undefined1 *)((longlong)param_1 + 0x3ca) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3cc) = 0x3c23d70a;
  *(undefined4 *)((longlong)param_1 + 0x3d0) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x3d4) = 0x3c23d70a;
  return;
}

// ConstructForTests<FGeometryCollectionTransferVertexScalarAttributeNode> @ 14e96a150

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryCollectionTransferVertexScalarAttributeNode>
          (void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FGeometryCollectionTransferVertexScalarAttributeNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection
            ((FManagedArrayCollection *)((longlong)param_1 + 0x248));
  FManagedArrayCollection::FManagedArrayCollection
            ((FManagedArrayCollection *)((longlong)param_1 + 0x2f8));
  ::FString::FString((FString *)((longlong)param_1 + 0x3a8),"");
  ::FString::FString((FString *)((longlong)param_1 + 0x3b8),"");
  *(undefined2 *)((longlong)param_1 + 0x3c8) = 0x201;
  *(undefined1 *)((longlong)param_1 + 0x3ca) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3cc) = 0x3c23d70a;
  *(undefined4 *)((longlong)param_1 + 0x3d0) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x3d4) = 0x3c23d70a;
  return;
}

// Destruct<FGeometryCollectionTransferVertexScalarAttributeNode> @ 14e96a160

void __cdecl
UE::CoreUObject::Private::Destruct<FGeometryCollectionTransferVertexScalarAttributeNode>
          (void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x3b8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x3b8));
  }
  if (*(void **)((longlong)param_1 + 0x3a8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x3a8));
  }
  FManagedArrayCollection::~FManagedArrayCollection
            ((FManagedArrayCollection *)((longlong)param_1 + 0x2f8));
  FManagedArrayCollection::~FManagedArrayCollection
            ((FManagedArrayCollection *)((longlong)param_1 + 0x248));
  FDataflowNode::~FDataflowNode(param_1);
  return;
}

// Copy<FGeometryCollectionTransferVertexScalarAttributeNode> @ 14e96a1c0

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryCollectionTransferVertexScalarAttributeNode>
          (void *param_1,void *param_2,int param_3)

{
  code *pcVar1;
  void *pvVar2;
  bool bVar3;
  undefined1 uVar4;
  
  pvVar2 = param_1;
  while( true ) {
    if (param_3 == 0) {
      return true;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowNode.h"
                       ,0x51,L"");
    if (bVar3) break;
    FManagedArrayCollection::operator=
              ((FManagedArrayCollection *)((longlong)pvVar2 + 0x248),
               (FManagedArrayCollection *)
               ((longlong)pvVar2 + (longlong)param_2 + (0x248 - (longlong)param_1)));
    FManagedArrayCollection::operator=
              ((FManagedArrayCollection *)((longlong)pvVar2 + 0x2f8),
               (FManagedArrayCollection *)
               ((longlong)pvVar2 + (longlong)param_2 + (0x2f8 - (longlong)param_1)));
    ::FString::operator=
              ((FString *)((longlong)pvVar2 + 0x3a8),
               (FString *)((longlong)pvVar2 + (longlong)param_2 + (0x3a8 - (longlong)param_1)));
    ::FString::operator=
              ((FString *)((longlong)pvVar2 + 0x3b8),
               (FString *)((longlong)pvVar2 + (longlong)param_2 + (0x3b8 - (longlong)param_1)));
    *(undefined1 *)((longlong)pvVar2 + 0x3c8) =
         *(undefined1 *)((longlong)pvVar2 + (longlong)param_2 + (0x3c8 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar2 + 0x3c9) =
         *(undefined1 *)((longlong)pvVar2 + (longlong)param_2 + (0x3c9 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar2 + 0x3ca) =
         *(undefined1 *)((longlong)pvVar2 + (longlong)param_2 + (0x3ca - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar2 + 0x3cc) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x3cc - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar2 + 0x3d0) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x3d0 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar2 + 0x3d4) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x3d4 - (longlong)param_1));
    param_3 = param_3 + -1;
    pvVar2 = (void *)((longlong)pvVar2 + 0x3d8);
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (bool)uVar4;
}

