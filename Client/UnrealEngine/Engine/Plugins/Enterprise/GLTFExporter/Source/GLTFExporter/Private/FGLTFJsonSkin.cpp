// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 1

// WriteObject @ 14e61e660

void __thiscall FGLTFJsonSkin::WriteObject(FGLTFJsonSkin *this,IGLTFJsonWriter *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FGLTFJsonAccessor *pFVar3;
  FGLTFJsonNode *pFVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
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
  pFVar3 = this->InverseBindMatrices;
  if (pFVar3 != (FGLTFJsonAccessor *)0x0) {
    ::FString::FString(&local_28,L"inverseBindMatrices");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_28);
    (**(code **)(param_1->_padding_ + 0x30))(param_1,(int)pFVar3->_padding_);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = this->Skeleton;
  if (pFVar4 != (FGLTFJsonNode *)0x0) {
    ::FString::FString(&local_28,L"skeleton");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_28);
    (**(code **)(param_1->_padding_ + 0x30))(param_1,(int)pFVar4->_padding_);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if (0 < (this->Joints).ArrayNum) {
    ::FString::FString(&local_28,L"joints");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_28);
    (**(code **)(param_1->_padding_ + 0x58))(param_1);
    pFVar6 = (this->Joints).AllocatorInstance.Data;
    iVar2 = (this->Joints).ArrayNum;
    pFVar1 = pFVar6 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->Joints).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FGLTFJsonNode_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      lVar5 = param_1->_padding_;
      if (pFVar6 == pFVar1) break;
      if (*(longlong *)pFVar6 == 0) {
        (**(code **)(lVar5 + 0x30))(param_1,0xffffffff);
        pFVar6 = pFVar6 + 8;
      }
      else {
        (**(code **)(lVar5 + 0x30))(param_1,*(undefined4 *)(*(longlong *)pFVar6 + 8));
        pFVar6 = pFVar6 + 8;
      }
    }
    (**(code **)(lVar5 + 0x60))(param_1);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

