// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_ISKM
// Functions: 2

// StaticStruct @ 14a837270

UScriptStruct * __cdecl FWN_ISKM_BoidRandomSpawnInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWN_ISKM_BoidRandomSpawnInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_WN_ISKM();
    Z_Registration_Info_UScriptStruct_FWN_ISKM_BoidRandomSpawnInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWN_ISKM_BoidRandomSpawnInfo,(UObject *)pUVar1,
                         L"WN_ISKM_BoidRandomSpawnInfo");
  }
  return Z_Registration_Info_UScriptStruct_FWN_ISKM_BoidRandomSpawnInfo.OuterSingleton;
}

// operator= @ 14a840220

FWN_ISKM_BoidRandomSpawnInfo * __thiscall
FWN_ISKM_BoidRandomSpawnInfo::operator=
          (FWN_ISKM_BoidRandomSpawnInfo *this,FWN_ISKM_BoidRandomSpawnInfo *param_1)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  
  this->SpecificSkeletalMeshName = param_1->SpecificSkeletalMeshName;
  this->SpecificAnimSequenceName = param_1->SpecificAnimSequenceName;
  pTVar1 = &this->SpawnTiles;
  this->NumBoids = param_1->NumBoids;
  this->Radius = param_1->Radius;
  this->MinDistance = param_1->MinDistance;
  this->MinScale = param_1->MinScale;
  this->MaxScale = param_1->MaxScale;
  this->MinZ = param_1->MinZ;
  this->MaxZ = param_1->MaxZ;
  this->bTracingToGround = param_1->bTracingToGround;
  this->bUseNavInfo = param_1->bUseNavInfo;
  if (pTVar1 != &param_1->SpawnTiles) {
    iVar3 = (this->SpawnTiles).ArrayMax;
    piVar2 = &(this->SpawnTiles).ArrayMax;
    _Src = (param_1->SpawnTiles).AllocatorInstance.Data;
    iVar4 = (param_1->SpawnTiles).ArrayNum;
    (this->SpawnTiles).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar4,iVar3,&pTVar1->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar4 * 0x18);
      }
    }
  }
  this->TileSize = param_1->TileSize;
  return this;
}

