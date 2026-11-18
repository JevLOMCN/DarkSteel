// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 2

// HasValue @ 14e6010b0

bool __thiscall FGLTFJsonMesh::HasValue(FGLTFJsonMesh *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Primitives).ArrayNum;
  pFVar2 = (this->Primitives).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x98;
  while( true ) {
    if ((this->Primitives).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FGLTFJsonPrimitive_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (((((((*(longlong *)(pFVar2 + 0x10) != 0) &&
            (*(int *)(*(longlong *)(pFVar2 + 0x10) + 0x30) != 0)) ||
           ((*(longlong *)(pFVar2 + 0x18) != 0 &&
            (*(int *)(*(longlong *)(pFVar2 + 0x18) + 0x30) != 0)))) ||
          ((*(longlong *)(pFVar2 + 0x20) != 0 &&
           (*(int *)(*(longlong *)(pFVar2 + 0x20) + 0x30) != 0)))) ||
         ((*(longlong *)(pFVar2 + 0x28) != 0 && (*(int *)(*(longlong *)(pFVar2 + 0x28) + 0x30) != 0)
          ))) || (((*(int *)(pFVar2 + 0x38) != 0 || (*(int *)(pFVar2 + 0x48) != 0)) ||
                  (*(int *)(pFVar2 + 0x58) != 0)))) && (*(longlong *)(pFVar2 + 0x60) != 0)) {
      return true;
    }
    pFVar2 = pFVar2 + 0x98;
  }
  return false;
}

// WriteObject @ 14e61c880

void __thiscall FGLTFJsonMesh::WriteObject(FGLTFJsonMesh *this,IGLTFJsonWriter *param_1)

{
  int iVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  FString local_28;
  
  if (1 < (this->Name).Data.ArrayNum) {
    ::FString::FString(&local_28,L"name");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_28);
    (**(code **)(param_1->_padding_ + 0x18))(param_1,&this->Name);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  pcVar2 = *(code **)(param_1->_padding_ + 0x40);
  ::FString::FString(&local_28,L"primitives");
  (*pcVar2)(param_1,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  (**(code **)(param_1->_padding_ + 0x58))(param_1);
  iVar1 = (this->Primitives).ArrayNum;
  pFVar3 = (this->Primitives).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x98;
  while( true ) {
    if ((this->Primitives).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FGLTFJsonPrimitive_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    if (((((((*(longlong *)(pFVar3 + 0x10) != 0) &&
            (*(int *)(*(longlong *)(pFVar3 + 0x10) + 0x30) != 0)) ||
           ((*(longlong *)(pFVar3 + 0x18) != 0 &&
            (*(int *)(*(longlong *)(pFVar3 + 0x18) + 0x30) != 0)))) ||
          ((*(longlong *)(pFVar3 + 0x20) != 0 &&
           (*(int *)(*(longlong *)(pFVar3 + 0x20) + 0x30) != 0)))) ||
         ((*(longlong *)(pFVar3 + 0x28) != 0 && (*(int *)(*(longlong *)(pFVar3 + 0x28) + 0x30) != 0)
          ))) || (((*(int *)(pFVar3 + 0x38) != 0 || (*(int *)(pFVar3 + 0x48) != 0)) ||
                  (*(int *)(pFVar3 + 0x58) != 0)))) && (*(longlong *)(pFVar3 + 0x60) != 0)) {
      (**(code **)(*(longlong *)pFVar3 + 8))(pFVar3,param_1);
    }
    pFVar3 = pFVar3 + 0x98;
  }
  (**(code **)(param_1->_padding_ + 0x60))(param_1);
  if ((this->TargetNames).ArrayNum != 0) {
    ::FString::FString(&local_28,L"extras");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_28);
    (**(code **)(param_1->_padding_ + 0x48))(param_1);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_28,L"targetNames");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_28);
    (**(code **)(param_1->_padding_ + 0x58))(param_1);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    iVar1 = (this->TargetNames).ArrayNum;
    pFVar3 = (this->TargetNames).AllocatorInstance.Data;
    pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((this->TargetNames).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar3 == pFVar4) break;
      (**(code **)(param_1->_padding_ + 0x18))(param_1,pFVar3);
      pFVar3 = pFVar3 + 0x10;
    }
    (**(code **)(param_1->_padding_ + 0x60))(param_1);
    (**(code **)(param_1->_padding_ + 0x50))(param_1);
  }
  return;
}

