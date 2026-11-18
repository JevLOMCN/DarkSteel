// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 2

// StaticStruct @ 14d574ff0

UScriptStruct * __cdecl FCameraDirectorStateTreeEvaluationData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCameraDirectorStateTreeEvaluationData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UScriptStruct_FCameraDirectorStateTreeEvaluationData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCameraDirectorStateTreeEvaluationData,
                         (UObject *)pUVar1,L"CameraDirectorStateTreeEvaluationData");
  }
  return Z_Registration_Info_UScriptStruct_FCameraDirectorStateTreeEvaluationData.OuterSingleton;
}

// Reset @ 14d5cbca0

void __thiscall
FCameraDirectorStateTreeEvaluationData::Reset(FCameraDirectorStateTreeEvaluationData *this)

{
  (this->ActiveCameraRigs).ArrayNum = 0;
  if ((this->ActiveCameraRigs).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,&(this->ActiveCameraRigs).ArrayMax);
  }
  (this->ActiveCameraRigProxies).ArrayNum = 0;
  if ((this->ActiveCameraRigProxies).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ActiveCameraRigProxies).AllocatorInstance,0,
               &(this->ActiveCameraRigProxies).ArrayMax);
  }
  return;
}

