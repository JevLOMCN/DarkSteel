// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 2

// operator<FVulkanDescriptorSetsLayoutInfo,FVulkanLayout_*>_TTuple<FVulkanDescriptorSetsLayoutInfo,FVulkanLayout_*> @ 145b3a320

/* WARNING: Enum "VkPipelineBindPoint": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

TTuple<FVulkanDescriptorSetsLayoutInfo,FVulkanLayout_*> * __thiscall
TPairInitializer<FVulkanDescriptorSetsLayoutInfo_const_&,FVulkanLayout_*_const_&>::
operator<FVulkanDescriptorSetsLayoutInfo,FVulkanLayout_*>_TTuple<FVulkanDescriptorSetsLayoutInfo,FVulkanLayout_*>
          (TPairInitializer<FVulkanDescriptorSetsLayoutInfo_const_&,FVulkanLayout_*_const_&> *this,
          TTuple<FVulkanDescriptorSetsLayoutInfo,FVulkanLayout_*> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  int iVar2;
  FVulkanDescriptorSetsLayoutInfo *pFVar3;
  FVulkanLayout **ppFVar4;
  FSetLayout *pFVar5;
  
  pFVar3 = this->Key;
  ppFVar4 = this->Value;
  TStaticArray<FVulkanDescriptorSetsLayoutInfo::FStageInfo,6,4294967295>::
  TStaticArray<FVulkanDescriptorSetsLayoutInfo::FStageInfo,6,4294967295>
            ((TStaticArray<FVulkanDescriptorSetsLayoutInfo::FStageInfo,6,4294967295> *)
             __return_storage_ptr__,&pFVar3->StageInfos);
  *(undefined8 *)&__return_storage_ptr__->field_0xc0 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0xc8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0xe0 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0xe8 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0xec = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0xf0 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0xf4 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x100 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x108 = 0;
  TSet<TTuple<enum_VkDescriptorType,unsigned_int>,TDefaultMapHashableKeyFuncs<enum_VkDescriptorType,unsigned_int,0>,FDefaultSetAllocator>
  ::operator=(&__return_storage_ptr__->field_0xc0,
              (TSet<TTuple<VkDescriptorType,unsigned_int>,TDefaultMapHashableKeyFuncs<VkDescriptorType,unsigned_int,0>,FDefaultSetAllocator>
               *)&pFVar3->LayoutTypes);
  puVar1 = &__return_storage_ptr__->field_0x110;
  *(undefined8 *)puVar1 = 0;
  iVar2 = (pFVar3->SetLayouts).ArrayNum;
  pFVar5 = (FSetLayout *)(pFVar3->SetLayouts).AllocatorInstance.Data;
  *(int *)&__return_storage_ptr__->field_0x118 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x11c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar2,0,(ForAnyElementType *)puVar1,iVar2,
               (int *)&__return_storage_ptr__->field_0x11c);
    ConstructItems<FVulkanDescriptorSetsLayoutInfo::FSetLayout,FVulkanDescriptorSetsLayoutInfo::FSetLayout,int>
              (*(void **)puVar1,pFVar5,iVar2);
  }
  *(uint *)&__return_storage_ptr__->field_0x120 = pFVar3->Hash;
  *(uint *)&__return_storage_ptr__->field_0x124 = pFVar3->TypesUsageID;
  *(VkPipelineBindPoint *)&__return_storage_ptr__->field_0x128 = pFVar3->BindPoint;
  *(FVulkanLayout **)&__return_storage_ptr__->field_0x130 = *ppFVar4;
  return __return_storage_ptr__;
}

// operator<FVulkanVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>_>_TTuple<FVulkanVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>_> @ 145b878b0

TTuple<FVulkanVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>_> * __thiscall
TPairInitializer<FVulkanVertexDeclarationKey_const_&,TRefCountPtr<FRHIVertexDeclaration>_&&>::
operator<FVulkanVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>_>_TTuple<FVulkanVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>_>
          (TPairInitializer<FVulkanVertexDeclarationKey_const_&,TRefCountPtr<FRHIVertexDeclaration>_&&>
           *this,TTuple<FVulkanVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>_>
                 *__return_storage_ptr__)

{
  int iVar1;
  FVulkanVertexDeclarationKey *_Src;
  TRefCountPtr<FRHIVertexDeclaration> *pTVar2;
  
  _Src = this->Key;
  pTVar2 = this->Value;
  iVar1 = (_Src->VertexElements).ArrayNum;
  *(int *)&__return_storage_ptr__->field_0x88 = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x8c = 0x11;
  }
  else {
    UE::Core::Private::ReallocForCopy<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
              (8,2,iVar1,0,(ForElementType<FVertexElement> *)__return_storage_ptr__,iVar1,
               (int *)&__return_storage_ptr__->field_0x8c);
    memcpy(__return_storage_ptr__,_Src,(longlong)iVar1 << 3);
  }
  *(uint *)&__return_storage_ptr__->field_0x90 = _Src->Hash;
  *(uint *)&__return_storage_ptr__->field_0x94 = _Src->HashNoStride;
  *(undefined8 *)&__return_storage_ptr__->field_0x98 = 0;
  *(FRHIVertexDeclaration **)&__return_storage_ptr__->field_0x98 = pTVar2->Reference;
  pTVar2->Reference = (FRHIVertexDeclaration *)0x0;
  return __return_storage_ptr__;
}

