// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 14727da30

UScriptStruct * __cdecl FInstancedStaticMeshLightMapInstanceData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FInstancedStaticMeshLightMapInstanceData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FInstancedStaticMeshLightMapInstanceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData,
                         (UObject *)pUVar1,L"InstancedStaticMeshLightMapInstanceData");
  }
  return Z_Registration_Info_UScriptStruct_FInstancedStaticMeshLightMapInstanceData.OuterSingleton;
}

// operator= @ 14727fe40

FInstancedStaticMeshLightMapInstanceData * __thiscall
FInstancedStaticMeshLightMapInstanceData::operator=
          (FInstancedStaticMeshLightMapInstanceData *this,
          FInstancedStaticMeshLightMapInstanceData *param_1)

{
  TArray<FGuid,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  double dVar5;
  
  dVar5 = (param_1->Transform).Rotation.XY.m128d_f64[1];
  pTVar1 = &this->MapBuildDataIds;
  (this->Transform).Rotation.XY.m128d_f64[0] = (param_1->Transform).Rotation.XY.m128d_f64[0];
  (this->Transform).Rotation.XY.m128d_f64[1] = dVar5;
  dVar5 = (param_1->Transform).Rotation.ZW.m128d_f64[1];
  (this->Transform).Rotation.ZW.m128d_f64[0] = (param_1->Transform).Rotation.ZW.m128d_f64[0];
  (this->Transform).Rotation.ZW.m128d_f64[1] = dVar5;
  dVar5 = (param_1->Transform).Translation.XY.m128d_f64[1];
  (this->Transform).Translation.XY.m128d_f64[0] = (param_1->Transform).Translation.XY.m128d_f64[0];
  (this->Transform).Translation.XY.m128d_f64[1] = dVar5;
  dVar5 = (param_1->Transform).Translation.ZW.m128d_f64[1];
  (this->Transform).Translation.ZW.m128d_f64[0] = (param_1->Transform).Translation.ZW.m128d_f64[0];
  (this->Transform).Translation.ZW.m128d_f64[1] = dVar5;
  dVar5 = (param_1->Transform).Scale3D.XY.m128d_f64[1];
  (this->Transform).Scale3D.XY.m128d_f64[0] = (param_1->Transform).Scale3D.XY.m128d_f64[0];
  (this->Transform).Scale3D.XY.m128d_f64[1] = dVar5;
  dVar5 = (param_1->Transform).Scale3D.ZW.m128d_f64[1];
  (this->Transform).Scale3D.ZW.m128d_f64[0] = (param_1->Transform).Scale3D.ZW.m128d_f64[0];
  (this->Transform).Scale3D.ZW.m128d_f64[1] = dVar5;
  if (pTVar1 != &param_1->MapBuildDataIds) {
    iVar3 = (this->MapBuildDataIds).ArrayMax;
    piVar2 = &(this->MapBuildDataIds).ArrayMax;
    _Src = (param_1->MapBuildDataIds).AllocatorInstance.Data;
    iVar4 = (param_1->MapBuildDataIds).ArrayNum;
    (this->MapBuildDataIds).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,iVar4,iVar3,&pTVar1->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar4 << 4);
      }
    }
  }
  return this;
}

