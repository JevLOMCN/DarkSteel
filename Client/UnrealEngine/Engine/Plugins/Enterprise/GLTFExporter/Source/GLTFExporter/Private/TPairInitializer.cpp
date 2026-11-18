// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 1

// operator<enum_UE::Interchange::GLTFMaterials::EShadingModel,UE::Interchange::GLTFMaterials::FGLTFMaterialInformation>_TTuple<enum_UE::Interchange::GLTFMaterials::EShadingModel,UE::Interchange::GLTFMaterials::FGLTFMaterialInformation> @ 14e5b71e0

TTuple<UE::Interchange::GLTFMaterials::EShadingModel,UE::Interchange::GLTFMaterials::FGLTFMaterialInformation>
* __thiscall
TPairInitializer<enum_UE::Interchange::GLTFMaterials::EShadingModel_const_&,UE::Interchange::GLTFMaterials::FGLTFMaterialInformation_const_&>
::
operator<enum_UE::Interchange::GLTFMaterials::EShadingModel,UE::Interchange::GLTFMaterials::FGLTFMaterialInformation>_TTuple<enum_UE::Interchange::GLTFMaterials::EShadingModel,UE::Interchange::GLTFMaterials::FGLTFMaterialInformation>
          (void *this,
          TTuple<UE::Interchange::GLTFMaterials::EShadingModel,UE::Interchange::GLTFMaterials::FGLTFMaterialInformation>
          *__return_storage_ptr__)

{
  undefined1 *puVar1;
  int iVar2;
  FString *pFVar3;
  FScriptContainerElement *pFVar4;
  
  pFVar3 = *(FString **)((longlong)this + 8);
  *(undefined1 *)__return_storage_ptr__ = **(undefined1 **)this;
  ::FString::FString((FString *)&__return_storage_ptr__->field_0x8,pFVar3);
  ::FString::FString((FString *)&__return_storage_ptr__->field_0x18,pFVar3 + 1);
  puVar1 = &__return_storage_ptr__->field_0x28;
  *(undefined8 *)puVar1 = 0;
  iVar2 = pFVar3[2].Data.ArrayNum;
  pFVar4 = pFVar3[2].Data.AllocatorInstance.Data;
  *(int *)&__return_storage_ptr__->field_0x30 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,0,(ForAnyElementType *)puVar1,iVar2,
               (int *)&__return_storage_ptr__->field_0x34);
    ConstructItems<FString,FString,int>(*(void **)puVar1,(FString *)pFVar4,iVar2);
  }
  return __return_storage_ptr__;
}

