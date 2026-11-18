// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ClothSysRuntimeIntrfc
// Functions: 2

// StaticStruct @ 144645150

UScriptStruct * __cdecl FClothCollisionPrim_Convex::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FClothCollisionPrim_Convex.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface();
    Z_Registration_Info_UScriptStruct_FClothCollisionPrim_Convex.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FClothCollisionPrim_Convex,(UObject *)pUVar1,
                         L"ClothCollisionPrim_Convex");
  }
  return Z_Registration_Info_UScriptStruct_FClothCollisionPrim_Convex.OuterSingleton;
}

// FClothCollisionPrim_Convex @ 144648330

FClothCollisionPrim_Convex * __thiscall
FClothCollisionPrim_Convex::FClothCollisionPrim_Convex
          (FClothCollisionPrim_Convex *this,FClothCollisionPrim_Convex *param_1)

{
  int *piVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FClothCollisionPrim_ConvexFace *pFVar4;
  FScriptContainerElement *_Src;
  
  piVar1 = &(this->Faces).ArrayMax;
  (this->Faces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Faces).ArrayNum;
  pFVar4 = (FClothCollisionPrim_ConvexFace *)(param_1->Faces).AllocatorInstance.Data;
  (this->Faces).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,0x10,iVar3,0,(ForAnyElementType *)this,iVar3,piVar1);
    ConstructItems<FClothCollisionPrim_ConvexFace,FClothCollisionPrim_ConvexFace,int>
              ((this->Faces).AllocatorInstance.Data,pFVar4,iVar3);
  }
  pTVar2 = &this->SurfacePoints;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->SurfacePoints).ArrayMax;
  iVar3 = (param_1->SurfacePoints).ArrayNum;
  _Src = (param_1->SurfacePoints).AllocatorInstance.Data;
  (this->SurfacePoints).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar3 * 0x18);
  }
  this->BoneIndex = param_1->BoneIndex;
  return this;
}

