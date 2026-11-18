// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 1

// WriteObject @ 14e61c780

void __thiscall
FGLTFJsonMaterialVariantMapping::WriteObject
          (FGLTFJsonMaterialVariantMapping *this,IGLTFJsonWriter *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FGLTFJsonMaterial *pFVar3;
  longlong lVar4;
  undefined4 uVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  FString local_28;
  
  pFVar3 = this->Material;
  ::FString::FString(&local_28,L"material");
  (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_28);
  if (pFVar3 == (FGLTFJsonMaterial *)0x0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)pFVar3->_padding_;
  }
  (**(code **)(param_1->_padding_ + 0x30))(param_1,uVar5);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_28,L"variants");
  (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_28);
  (**(code **)(param_1->_padding_ + 0x58))(param_1);
  pFVar6 = (this->Variants).AllocatorInstance.Data;
  iVar2 = (this->Variants).ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Variants).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FGLTFJsonMaterialVariant_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    lVar4 = param_1->_padding_;
    if (pFVar6 == pFVar1) break;
    if (*(longlong *)pFVar6 == 0) {
      (**(code **)(lVar4 + 0x30))(param_1,0xffffffff);
      pFVar6 = pFVar6 + 8;
    }
    else {
      (**(code **)(lVar4 + 0x30))(param_1,*(undefined4 *)(*(longlong *)pFVar6 + 8));
      pFVar6 = pFVar6 + 8;
    }
  }
  (**(code **)(lVar4 + 0x60))(param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

