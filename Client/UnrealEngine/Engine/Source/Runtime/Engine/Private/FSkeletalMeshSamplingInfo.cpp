// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// ~FSkeletalMeshSamplingInfo @ 1485a60f0

void __thiscall
FSkeletalMeshSamplingInfo::~FSkeletalMeshSamplingInfo(FSkeletalMeshSamplingInfo *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FSkeletalMeshSamplingRegionBuiltData,int>
            ((FSkeletalMeshSamplingRegionBuiltData *)
             (this->BuiltData).RegionBuiltData.AllocatorInstance.Data,
             (this->BuiltData).RegionBuiltData.ArrayNum);
  pFVar1 = (this->BuiltData).RegionBuiltData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FSkeletalMeshSamplingLODBuiltData,int>
            ((FSkeletalMeshSamplingLODBuiltData *)
             (this->BuiltData).WholeMeshBuiltData.AllocatorInstance.Data,
             (this->BuiltData).WholeMeshBuiltData.ArrayNum);
  pFVar1 = (this->BuiltData).WholeMeshBuiltData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FSkeletalMeshSamplingRegion,int>
            ((FSkeletalMeshSamplingRegion *)(this->Regions).AllocatorInstance.Data,
             (this->Regions).ArrayNum);
  pFVar1 = (this->Regions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// StaticStruct @ 1485e3f80

UScriptStruct * __cdecl FSkeletalMeshSamplingInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSkeletalMeshSamplingInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FSkeletalMeshSamplingInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo,(UObject *)pUVar1,
                         L"SkeletalMeshSamplingInfo");
  }
  return Z_Registration_Info_UScriptStruct_FSkeletalMeshSamplingInfo.OuterSingleton;
}

// IsSamplingEnabled @ 148659de0

bool __thiscall
FSkeletalMeshSamplingInfo::IsSamplingEnabled
          (FSkeletalMeshSamplingInfo *this,USkeletalMesh *param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res10 [8];
  
  if (((param_1 == (USkeletalMesh *)0x0) ||
      (cVar3 = (**(code **)(param_1->_padding_ + 0x440))(param_1,param_2), cVar3 == '\0')) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("OwnerMesh && OwnerMesh->IsValidLODIndex(LODIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshSampling.cpp"
                         ,0x156,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  lVar6 = (**(code **)(param_1->_padding_ + 0x328))(param_1,param_2);
  if ((*(byte *)(lVar6 + 0xd0) & 4) == 0) {
    iVar1 = (this->Regions).ArrayNum;
    pFVar7 = (this->Regions).AllocatorInstance.Data;
    pFVar8 = pFVar7 + (longlong)iVar1 * 0x30;
    while( true ) {
      if ((this->Regions).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FSkeletalMeshSamplingRegion_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar7 == pFVar8) {
        return false;
      }
      if (*(int *)(pFVar7 + 8) == param_2) break;
      pFVar7 = pFVar7 + 0x30;
    }
  }
  return true;
}

