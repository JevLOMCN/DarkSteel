// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 3

// StaticStruct @ 14a896dd0

UScriptStruct * __cdecl FPoseSearchDatabaseBlendSpace::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseBlendSpace.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PoseSearch();
    Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseBlendSpace.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace,(UObject *)pUVar1,
                         L"PoseSearchDatabaseBlendSpace");
  }
  return Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseBlendSpace.OuterSingleton;
}

// GetAnimationAsset @ 14a896e10

UObject * __thiscall
FPoseSearchDatabaseBlendSpace::GetAnimationAsset(FPoseSearchDatabaseBlendSpace *this)

{
  return (UObject *)(this->BlendSpace).field0_0x0.DebugPtr;
}

// GetPlayLength @ 14a896e20

float __thiscall
FPoseSearchDatabaseBlendSpace::GetPlayLength
          (FPoseSearchDatabaseBlendSpace *this,TVector<double> *param_1)

{
  float fVar1;
  int local_res8 [8];
  TArray<FBlendSampleData,TSizedDefaultAllocator<32>_> local_28 [2];
  
  local_res8[0] = 0;
  local_28[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28[0].ArrayNum = 0;
  local_28[0].ArrayMax = 0;
  UBlendSpace::GetSamplesFromBlendInput
            ((this->BlendSpace).field0_0x0.DebugPtr,param_1,local_28,local_res8,true);
  fVar1 = UBlendSpace::GetAnimationLengthFromSampleData
                    ((this->BlendSpace).field0_0x0.DebugPtr,local_28);
  DestructItems<FBlendSampleData,int>
            ((FBlendSampleData *)local_28[0].AllocatorInstance.Data,local_28[0].ArrayNum);
  if ((FBlendSampleData *)local_28[0].AllocatorInstance.Data != (FBlendSampleData *)0x0) {
    FMemory::Free(local_28[0].AllocatorInstance.Data);
  }
  return fVar1;
}

