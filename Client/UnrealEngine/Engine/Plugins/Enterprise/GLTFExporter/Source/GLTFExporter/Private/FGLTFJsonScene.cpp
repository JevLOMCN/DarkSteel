// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 1

// WriteObject @ 14e61e3d0

void __thiscall FGLTFJsonScene::WriteObject(FGLTFJsonScene *this,IGLTFJsonWriter *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
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
  if (0 < (this->Nodes).ArrayNum) {
    ::FString::FString(&local_28,L"nodes");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_28);
    (**(code **)(param_1->_padding_ + 0x58))(param_1);
    pFVar4 = (this->Nodes).AllocatorInstance.Data;
    iVar2 = (this->Nodes).ArrayNum;
    pFVar1 = pFVar4 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->Nodes).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FGLTFJsonNode_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      lVar3 = param_1->_padding_;
      if (pFVar4 == pFVar1) break;
      if (*(longlong *)pFVar4 == 0) {
        (**(code **)(lVar3 + 0x30))(param_1,0xffffffff);
        pFVar4 = pFVar4 + 8;
      }
      else {
        (**(code **)(lVar3 + 0x30))(param_1,*(undefined4 *)(*(longlong *)pFVar4 + 8));
        pFVar4 = pFVar4 + 8;
      }
    }
    (**(code **)(lVar3 + 0x60))(param_1);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

