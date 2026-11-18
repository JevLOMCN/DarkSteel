// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 3

// ~FGLTFJsonPrimitive @ 14e5d7a80

void __thiscall FGLTFJsonPrimitive::~FGLTFJsonPrimitive(FGLTFJsonPrimitive *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Targets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FGLTFJsonMaterialVariantMapping,int>
            ((FGLTFJsonMaterialVariantMapping *)
             (this->MaterialVariantMappings).AllocatorInstance.Data,
             (this->MaterialVariantMappings).ArrayNum);
  pFVar1 = (this->MaterialVariantMappings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Attributes).Weights.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Attributes).Joints.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Attributes).TexCoords.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// HasValue @ 14e601180

bool __thiscall FGLTFJsonPrimitive::HasValue(FGLTFJsonPrimitive *this)

{
  FGLTFJsonAccessor *pFVar1;
  
  pFVar1 = (this->Attributes).Position;
  if (((((((pFVar1 != (FGLTFJsonAccessor *)0x0) && (pFVar1->Count != 0)) ||
         ((pFVar1 = (this->Attributes).Color0, pFVar1 != (FGLTFJsonAccessor *)0x0 &&
          (pFVar1->Count != 0)))) ||
        ((pFVar1 = (this->Attributes).Normal, pFVar1 != (FGLTFJsonAccessor *)0x0 &&
         (pFVar1->Count != 0)))) ||
       ((pFVar1 = (this->Attributes).Tangent, pFVar1 != (FGLTFJsonAccessor *)0x0 &&
        (pFVar1->Count != 0)))) ||
      ((((this->Attributes).TexCoords.ArrayNum != 0 || ((this->Attributes).Joints.ArrayNum != 0)) ||
       ((this->Attributes).Weights.ArrayNum != 0)))) && (this->Indices != (FGLTFJsonAccessor *)0x0))
  {
    return true;
  }
  return false;
}

// WriteObject @ 14e61d6f0

void __thiscall FGLTFJsonPrimitive::WriteObject(FGLTFJsonPrimitive *this,IGLTFJsonWriter *param_1)

{
  EGLTFJsonPrimitiveMode EVar1;
  int iVar2;
  FGLTFJsonAccessor *pFVar3;
  FGLTFJsonAccessor *pFVar4;
  FGLTFJsonMaterial *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  bool local_res8 [8];
  EGLTFJsonExtension local_res18 [4];
  FString local_38;
  
  pFVar3 = (this->Attributes).Position;
  if ((((((pFVar3 != (FGLTFJsonAccessor *)0x0) && (pFVar3->Count != 0)) ||
        ((pFVar4 = (this->Attributes).Color0, pFVar4 != (FGLTFJsonAccessor *)0x0 &&
         (pFVar4->Count != 0)))) ||
       ((pFVar4 = (this->Attributes).Normal, pFVar4 != (FGLTFJsonAccessor *)0x0 &&
        (pFVar4->Count != 0)))) ||
      (((pFVar4 = (this->Attributes).Tangent, pFVar4 != (FGLTFJsonAccessor *)0x0 &&
        (pFVar4->Count != 0)) ||
       ((((this->Attributes).TexCoords.ArrayNum != 0 || ((this->Attributes).Joints.ArrayNum != 0))
        || ((this->Attributes).Weights.ArrayNum != 0)))))) &&
     (this->Indices != (FGLTFJsonAccessor *)0x0)) {
    if (((((pFVar3 != (FGLTFJsonAccessor *)0x0) && (pFVar3->Count != 0)) ||
         ((pFVar3 = (this->Attributes).Color0, pFVar3 != (FGLTFJsonAccessor *)0x0 &&
          (pFVar3->Count != 0)))) ||
        (((pFVar3 = (this->Attributes).Normal, pFVar3 != (FGLTFJsonAccessor *)0x0 &&
          (pFVar3->Count != 0)) ||
         ((pFVar3 = (this->Attributes).Tangent, pFVar3 != (FGLTFJsonAccessor *)0x0 &&
          (pFVar3->Count != 0)))))) ||
       ((((this->Attributes).TexCoords.ArrayNum != 0 || ((this->Attributes).Joints.ArrayNum != 0))
        || ((this->Attributes).Weights.ArrayNum != 0)))) {
      ::FString::FString(&local_38,L"attributes");
      (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_38);
      (**(code **)((this->Attributes)._padding_ + 8))(&this->Attributes,param_1);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    pFVar3 = this->Indices;
    if (pFVar3 != (FGLTFJsonAccessor *)0x0) {
      ::FString::FString(&local_38,L"indices");
      (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_38);
      (**(code **)(param_1->_padding_ + 0x30))(param_1,(int)pFVar3->_padding_);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    pFVar5 = this->Material;
    if (pFVar5 != (FGLTFJsonMaterial *)0x0) {
      ::FString::FString(&local_38,L"material");
      (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_38);
      (**(code **)(param_1->_padding_ + 0x30))(param_1,(int)pFVar5->_padding_);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    EVar1 = this->Mode;
    if (EVar1 != Triangles) {
      ::FString::FString(&local_38,L"mode");
      (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_38);
      (**(code **)(param_1->_padding_ + 0x30))(param_1,EVar1);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if (0 < (this->MaterialVariantMappings).ArrayNum) {
      IGLTFJsonWriter::StartExtensions(param_1);
      local_res8[0] = true;
      local_res8[1] = false;
      local_res8[2] = false;
      local_res8[3] = false;
      TSet<enum_EGLTFJsonExtension,DefaultKeyFuncs<enum_EGLTFJsonExtension,0>,FDefaultSetAllocator>
      ::Emplace<enum_EGLTFJsonExtension_const_&>(param_1->Extensions,local_res18,local_res8);
      ::FString::FString(&local_38,L"KHR_materials_variants");
      (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_38);
      (**(code **)(param_1->_padding_ + 0x48))(param_1);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      ::FString::FString(&local_38,L"mappings");
      (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_38);
      (**(code **)(param_1->_padding_ + 0x58))(param_1);
      iVar2 = (this->MaterialVariantMappings).ArrayNum;
      pFVar6 = (this->MaterialVariantMappings).AllocatorInstance.Data;
      pFVar7 = pFVar6 + (longlong)iVar2 * 0x20;
      while( true ) {
        if ((this->MaterialVariantMappings).ArrayNum != iVar2) {
          `TCheckedPointerIterator<FGLTFJsonMaterialVariantMapping_const_,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(local_res8);
        }
        if (pFVar6 == pFVar7) break;
        (**(code **)(*(longlong *)pFVar6 + 8))(pFVar6,param_1);
        pFVar6 = pFVar6 + 0x20;
      }
      (**(code **)(param_1->_padding_ + 0x60))(param_1);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      (**(code **)(param_1->_padding_ + 0x50))(param_1);
      (**(code **)(param_1->_padding_ + 0x50))(param_1);
    }
    if (0 < (this->Targets).ArrayNum) {
      ::FString::FString(&local_38,L"targets");
      (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_38);
      (**(code **)(param_1->_padding_ + 0x58))(param_1);
      iVar2 = (this->Targets).ArrayNum;
      pFVar7 = (this->Targets).AllocatorInstance.Data;
      pFVar6 = pFVar7 + (longlong)iVar2 * 0x18;
      while( true ) {
        if ((this->Targets).ArrayNum != iVar2) {
          `TCheckedPointerIterator<FGLTFJsonTarget_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (pFVar7 == pFVar6) break;
        (**(code **)(*(longlong *)pFVar7 + 8))(pFVar7,param_1);
        pFVar7 = pFVar7 + 0x18;
      }
      (**(code **)(param_1->_padding_ + 0x60))(param_1);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

