// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 3

// FGLTFMeshData @ 14e5d2560

FGLTFMeshData * __thiscall
FGLTFMeshData::FGLTFMeshData
          (FGLTFMeshData *this,USkeletalMesh *param_1,USkeletalMeshComponent *param_2,int param_3)

{
  FString *pFVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  FName local_res8;
  FString local_18;
  
  this->LODIndex = param_3;
  this->Parent = (FGLTFMeshData *)0x0;
  pFVar1 = &this->Name;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).Data.ArrayNum = 0;
  (this->Name).Data.ArrayMax = 0;
  if (param_2 == (USkeletalMeshComponent *)0x0) {
    local_res8 = (FName)param_1->_padding_;
    ::FName::ToString(&local_res8,pFVar1);
  }
  else {
    lVar2 = param_2->_padding_;
    if ((lVar2 == 0) || (param_2 != *(USkeletalMeshComponent **)(lVar2 + 0x1b8))) {
      local_res8 = (FName)param_2->_padding_;
    }
    else {
      local_res8 = *(FName *)(lVar2 + 0x18);
    }
    ::FName::ToString(&local_res8,&local_18);
    if (pFVar1 != &local_18) {
      pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pFVar1->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
      (this->Name).Data.ArrayNum = local_18.Data.ArrayNum;
      (this->Name).Data.ArrayMax = local_18.Data.ArrayMax;
      local_18.Data.ArrayNum = 0;
      local_18.Data.ArrayMax = 0;
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return this;
    }
  }
  return this;
}

// FGLTFMeshData @ 14e5d2650

FGLTFMeshData * __thiscall
FGLTFMeshData::FGLTFMeshData
          (FGLTFMeshData *this,UStaticMesh *param_1,UStaticMeshComponent *param_2,int param_3)

{
  FString *pFVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  FName local_res8;
  FString local_18;
  
  this->LODIndex = param_3;
  this->Parent = (FGLTFMeshData *)0x0;
  pFVar1 = &this->Name;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).Data.ArrayNum = 0;
  (this->Name).Data.ArrayMax = 0;
  if (param_2 == (UStaticMeshComponent *)0x0) {
    local_res8 = (FName)param_1->_padding_;
    ::FName::ToString(&local_res8,pFVar1);
  }
  else {
    lVar2 = param_2->_padding_;
    if ((lVar2 == 0) || (param_2 != *(UStaticMeshComponent **)(lVar2 + 0x1b8))) {
      local_res8 = (FName)param_2->_padding_;
    }
    else {
      local_res8 = *(FName *)(lVar2 + 0x18);
    }
    ::FName::ToString(&local_res8,&local_18);
    if (pFVar1 != &local_18) {
      pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pFVar1->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
      (this->Name).Data.ArrayNum = local_18.Data.ArrayNum;
      (this->Name).Data.ArrayMax = local_18.Data.ArrayMax;
      local_18.Data.ArrayNum = 0;
      local_18.Data.ArrayMax = 0;
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return this;
    }
  }
  return this;
}

// GetParent @ 14e5fbc60

FGLTFMeshData * __thiscall FGLTFMeshData::GetParent(FGLTFMeshData *this)

{
  if (this->Parent != (FGLTFMeshData *)0x0) {
    this = this->Parent;
  }
  return this;
}

