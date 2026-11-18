// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 1

// WriteObject @ 14e61ca90

void __thiscall FGLTFJsonNode::WriteObject(FGLTFJsonNode *this,IGLTFJsonWriter *param_1)

{
  FScriptContainerElement *pFVar1;
  FGLTFJsonCamera *pFVar2;
  FGLTFJsonSkin *pFVar3;
  FGLTFJsonMesh *pFVar4;
  FGLTFJsonLightIES *pFVar5;
  FGLTFJsonLight *pFVar6;
  FGLTFJsonLightMap *pFVar7;
  code *pcVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  FScriptContainerElement *pFVar12;
  bool local_res8 [8];
  EGLTFJsonExtension local_res18 [4];
  FString local_38;
  
  if (1 < (this->Name).Data.ArrayNum) {
    ::FString::FString(&local_38,L"name");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_38);
    (**(code **)(param_1->_padding_ + 0x18))(param_1,&this->Name);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  FGLTFJsonTransform::WriteValue((FGLTFJsonTransform *)&this->_padding_,param_1);
  pFVar2 = this->Camera;
  if (pFVar2 != (FGLTFJsonCamera *)0x0) {
    ::FString::FString(&local_38,L"camera");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_38);
    (**(code **)(param_1->_padding_ + 0x30))(param_1,(int)pFVar2->_padding_);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  pFVar3 = this->Skin;
  if (pFVar3 != (FGLTFJsonSkin *)0x0) {
    ::FString::FString(&local_38,L"skin");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_38);
    (**(code **)(param_1->_padding_ + 0x30))(param_1,(int)pFVar3->_padding_);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = this->Mesh;
  if (pFVar4 != (FGLTFJsonMesh *)0x0) {
    ::FString::FString(&local_38,L"mesh");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_38);
    (**(code **)(param_1->_padding_ + 0x30))(param_1,(int)pFVar4->_padding_);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (this->Light == (FGLTFJsonLight *)0x0) {
    if ((this->LightIESInstance != (FGLTFJsonLightIESInstance *)0x0) &&
       (pFVar5 = this->LightIESInstance->LightIES, pFVar5 != (FGLTFJsonLightIES *)0x0)) {
      iVar9 = (pFVar5->URI).Data.ArrayNum;
      iVar10 = iVar9 + -1;
      if (iVar9 == 0) {
        iVar10 = 0;
      }
      if ((iVar10 != 0) || (pFVar5->BufferView != (FGLTFJsonBufferView *)0x0)) goto LAB_14e61cbf2;
    }
    if (this->LightMap == (FGLTFJsonLightMap *)0x0) goto LAB_14e61ce29;
  }
LAB_14e61cbf2:
  ::FString::FString(&local_38,L"extensions");
  (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_38);
  (**(code **)(param_1->_padding_ + 0x48))(param_1);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (this->Light != (FGLTFJsonLight *)0x0) {
    local_res8[0] = false;
    local_res8[1] = false;
    local_res8[2] = false;
    local_res8[3] = false;
    TSet<enum_EGLTFJsonExtension,DefaultKeyFuncs<enum_EGLTFJsonExtension,0>,FDefaultSetAllocator>::
    Emplace<enum_EGLTFJsonExtension_const_&>(param_1->Extensions,local_res18,local_res8);
    ::FString::FString(&local_38,L"KHR_lights_punctual");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_38);
    (**(code **)(param_1->_padding_ + 0x48))(param_1);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar6 = this->Light;
    ::FString::FString(&local_38,L"light");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_38);
    if (pFVar6 == (FGLTFJsonLight *)0x0) {
      uVar11 = 0xffffffff;
    }
    else {
      uVar11 = (undefined4)pFVar6->_padding_;
    }
    (**(code **)(param_1->_padding_ + 0x30))(param_1,uVar11);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    (**(code **)(param_1->_padding_ + 0x50))(param_1);
  }
  if (this->LightMap != (FGLTFJsonLightMap *)0x0) {
    local_res8[0] = true;
    local_res8[1] = false;
    local_res8[2] = false;
    local_res8[3] = false;
    TSet<enum_EGLTFJsonExtension,DefaultKeyFuncs<enum_EGLTFJsonExtension,0>,FDefaultSetAllocator>::
    Emplace<enum_EGLTFJsonExtension_const_&>(param_1->Extensions,local_res18,local_res8);
    ::FString::FString(&local_38,L"EPIC_lightmap_textures");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_38);
    (**(code **)(param_1->_padding_ + 0x48))(param_1);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar7 = this->LightMap;
    ::FString::FString(&local_38,L"lightmap");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_38);
    if (pFVar7 == (FGLTFJsonLightMap *)0x0) {
      uVar11 = 0xffffffff;
    }
    else {
      uVar11 = (undefined4)pFVar7->_padding_;
    }
    (**(code **)(param_1->_padding_ + 0x30))(param_1,uVar11);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    (**(code **)(param_1->_padding_ + 0x50))(param_1);
  }
  if ((this->LightIESInstance != (FGLTFJsonLightIESInstance *)0x0) &&
     (pFVar5 = this->LightIESInstance->LightIES, pFVar5 != (FGLTFJsonLightIES *)0x0)) {
    iVar10 = (pFVar5->URI).Data.ArrayNum;
    iVar9 = iVar10 + -1;
    if (iVar10 == 0) {
      iVar9 = 0;
    }
    if ((iVar9 != 0) || (pFVar5->BufferView != (FGLTFJsonBufferView *)0x0)) {
      local_res8[0] = true;
      local_res8[1] = false;
      local_res8[2] = false;
      local_res8[3] = false;
      TSet<enum_EGLTFJsonExtension,DefaultKeyFuncs<enum_EGLTFJsonExtension,0>,FDefaultSetAllocator>
      ::Emplace<enum_EGLTFJsonExtension_const_&>(param_1->Extensions,local_res18,local_res8);
      ::FString::FString(&local_38,L"EXT_lights_ies");
      (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_38);
      (**(code **)(param_1->_padding_ + 0x48))(param_1);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      (**(code **)(this->LightIESInstance->_padding_ + 0x10))(this->LightIESInstance,param_1);
      (**(code **)(param_1->_padding_ + 0x50))(param_1);
    }
  }
  (**(code **)(param_1->_padding_ + 0x50))(param_1);
LAB_14e61ce29:
  if (0 < (this->Children).ArrayNum) {
    ::FString::FString(&local_38,L"children");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_38);
    (**(code **)(param_1->_padding_ + 0x58))(param_1);
    pFVar12 = (this->Children).AllocatorInstance.Data;
    iVar9 = (this->Children).ArrayNum;
    pFVar1 = pFVar12 + (longlong)iVar9 * 8;
    while( true ) {
      if ((this->Children).ArrayNum != iVar9) {
        `TCheckedPointerIterator<FGLTFJsonNode_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar12 == pFVar1) break;
      pcVar8 = *(code **)(param_1->_padding_ + 0x30);
      if (*(longlong *)pFVar12 == 0) {
        (*pcVar8)(param_1,0xffffffff);
        pFVar12 = pFVar12 + 8;
      }
      else {
        (*pcVar8)(param_1,*(undefined4 *)(*(longlong *)pFVar12 + 8));
        pFVar12 = pFVar12 + 8;
      }
    }
    (**(code **)(param_1->_padding_ + 0x60))(param_1);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return;
}

