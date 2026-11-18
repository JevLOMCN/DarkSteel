// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 3

// StaticStruct @ 146399e50

UScriptStruct * __cdecl FGeometryCollectionSizeSpecificData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGeometryCollectionSizeSpecificData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionEngine();
    Z_Registration_Info_UScriptStruct_FGeometryCollectionSizeSpecificData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData,
                         (UObject *)pUVar1,L"GeometryCollectionSizeSpecificData");
  }
  return Z_Registration_Info_UScriptStruct_FGeometryCollectionSizeSpecificData.OuterSingleton;
}

// FGeometryCollectionSizeSpecificData @ 1463a2700

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FGeometryCollectionSizeSpecificData * __thiscall
FGeometryCollectionSizeSpecificData::FGeometryCollectionSizeSpecificData
          (FGeometryCollectionSizeSpecificData *this)

{
  TArray<FGeometryCollectionCollisionTypeData,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined2 uStack_36;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar4 = _UNK_15127a598;
  uVar3 = ___xmm_00000032000000190000000a00000005;
  pTVar1 = &this->CollisionShapes;
  this->MaxSize = 99999.9;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  uStack_34 = (undefined4)uVar3;
  uStack_30 = (undefined4)((ulonglong)uVar3 >> 0x20);
  uStack_2c = (undefined4)uVar4;
  uStack_28 = (undefined4)((ulonglong)uVar4 >> 0x20);
  (this->CollisionShapes).ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x24,4,1,0,&pTVar1->AllocatorInstance,1,&(this->CollisionShapes).ArrayMax);
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  *(ulonglong *)pFVar2 = CONCAT44(uStack_34,CONCAT22(uStack_36,0x500));
  *(ulonglong *)(pFVar2 + 8) = CONCAT44(uStack_2c,uStack_30);
  *(ulonglong *)(pFVar2 + 0x10) = CONCAT44(0x3f800000,uStack_28);
  *(undefined8 *)(pFVar2 + 0x18) = 0x3c;
  *(undefined4 *)(pFVar2 + 0x20) = 0;
  this->DamageThreshold = 5000;
  return this;
}

// Serialize @ 1463c50e0

bool __thiscall
FGeometryCollectionSizeSpecificData::Serialize
          (FGeometryCollectionSizeSpecificData *this,FArchive *param_1)

{
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FPhysicsObjectVersion::GUID);
  return false;
}

