// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 4

// FVulkanVertexInputStateInfo @ 145b94ce0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */

FVulkanVertexInputStateInfo * __thiscall
FVulkanVertexInputStateInfo::FVulkanVertexInputStateInfo(FVulkanVertexInputStateInfo *this)

{
  *(undefined8 *)&this->BindingToStream = 0;
  *(undefined8 *)&(this->BindingToStream).field_0x8 = 0;
  *(undefined8 *)&(this->BindingToStream).field_0x20 = 0;
  this->Hash = 0;
  this->BindingsNum = 0;
  this->BindingsMask = 0;
  *(undefined4 *)&(this->BindingToStream).field_0x28 = 0;
  *(undefined4 *)&(this->BindingToStream).field_0x2c = 0x80;
  *(undefined4 *)&(this->BindingToStream).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BindingToStream).field_0x34 = 0;
  *(undefined8 *)&(this->BindingToStream).field_0x40 = 0;
  *(undefined4 *)&(this->BindingToStream).field_0x48 = 0;
  *(undefined8 *)&this->StreamToBinding = 0;
  *(undefined8 *)&(this->StreamToBinding).field_0x8 = 0;
  *(undefined8 *)&(this->StreamToBinding).field_0x20 = 0;
  *(undefined4 *)&(this->StreamToBinding).field_0x28 = 0;
  *(undefined4 *)&(this->StreamToBinding).field_0x2c = 0x80;
  *(undefined4 *)&(this->StreamToBinding).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StreamToBinding).field_0x34 = 0;
  *(undefined8 *)&(this->StreamToBinding).field_0x40 = 0;
  *(undefined4 *)&(this->StreamToBinding).field_0x48 = 0;
  this->AttributesNum = 0;
  *(undefined8 *)&this->Info = 0;
  (this->Info).pNext = (void *)0x0;
  (this->Info).flags = 0;
  (this->Info).vertexBindingDescriptionCount = 0;
  (this->Info).pVertexBindingDescriptions = (VkVertexInputBindingDescription *)0x0;
  *(undefined8 *)&(this->Info).vertexAttributeDescriptionCount = 0;
  (this->Info).pVertexAttributeDescriptions = (VkVertexInputAttributeDescription *)0x0;
  memset(this->Attributes,0,0x110);
  memset(this->Bindings,0,0xcc);
  return this;
}

// ~FVulkanVertexInputStateInfo @ 145b96b90

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */

void __thiscall
FVulkanVertexInputStateInfo::~FVulkanVertexInputStateInfo(FVulkanVertexInputStateInfo *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->StreamToBinding).field_0x48 = 0;
  pvVar1 = *(void **)&(this->StreamToBinding).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StreamToBinding);
  *(undefined4 *)&(this->BindingToStream).field_0x48 = 0;
  pvVar1 = *(void **)&(this->BindingToStream).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BindingToStream);
  return;
}

// operator== @ 145b976f0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */

bool __thiscall
FVulkanVertexInputStateInfo::operator==
          (FVulkanVertexInputStateInfo *this,FVulkanVertexInputStateInfo *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  
  uVar1 = this->AttributesNum;
  if (uVar1 != param_1->AttributesNum) {
    return false;
  }
  uVar6 = 0;
  if (uVar1 != 0) {
    do {
      lVar2._0_4_ = this->Attributes[uVar6].location;
      lVar2._4_4_ = this->Attributes[uVar6].binding;
      lVar3._0_4_ = param_1->Attributes[uVar6].location;
      lVar3._4_4_ = param_1->Attributes[uVar6].binding;
      if (lVar2 != lVar3) {
        return false;
      }
      lVar4._0_4_ = this->Attributes[uVar6].format;
      lVar4._4_4_ = this->Attributes[uVar6].offset;
      lVar5._0_4_ = param_1->Attributes[uVar6].format;
      lVar5._4_4_ = param_1->Attributes[uVar6].offset;
      if (lVar4 != lVar5) {
        return false;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar1);
  }
  return true;
}

// Generate @ 145baa150

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */

void __thiscall
FVulkanVertexInputStateInfo::Generate
          (FVulkanVertexInputStateInfo *this,FVulkanVertexDeclaration *param_1,uint param_2)

{
  TArray<FVertexElement,TFixedAllocator<17>_> *pTVar1;
  uchar *puVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  code *pcVar7;
  uint uVar8;
  bool bVar9;
  int iVar10;
  undefined1 *puVar11;
  TArray<FVertexElement,TFixedAllocator<17>_> *pTVar12;
  uint *puVar13;
  uint uVar14;
  uchar *puVar15;
  uint uVar16;
  VkVertexInputAttributeDescription *pVVar17;
  VkVertexInputBindingDescription *pVVar18;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  uint local_res18;
  uint local_res20 [2];
  uint local_78;
  undefined1 local_74 [12];
  uint *local_68;
  uint *local_60;
  uint *local_58;
  uint *local_50;
  
  local_res18 = param_2;
  if (((this->Info).sType != VK_STRUCTURE_TYPE_APPLICATION_INFO) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Info.sType == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanVertexDeclaration.cpp"
                         ,0x6f,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar1 = &param_1->Elements;
  uVar14 = 1;
  iVar4 = (param_1->Elements).ArrayNum;
  pTVar12 = pTVar1;
  while( true ) {
    if ((param_1->Elements).ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FVertexElement_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pTVar12 ==
        (TArray<FVertexElement,TFixedAllocator<17>_> *)
        ((pTVar1->AllocatorInstance).InlineData + iVar4)) break;
    if ((param_2 >> ((pTVar12->AllocatorInstance).InlineData[0].Pad[3] & 0x1f) & 1) != 0) {
      if ((0x10 < (pTVar12->AllocatorInstance).InlineData[0].Pad[0]) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Element.StreamIndex < MaxVertexElementCount",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanVertexDeclaration.cpp"
                             ,0x79,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      bVar3 = (pTVar12->AllocatorInstance).InlineData[0].Pad[0];
      uVar16 = this->Bindings[bVar3].binding;
      if ((this->BindingsMask >> (bVar3 & 0x1f) & 1) == 0) {
        if ((((uVar16 != 0) || (this->Bindings[bVar3].inputRate != VK_VERTEX_INPUT_RATE_VERTEX)) ||
            (this->Bindings[bVar3].stride != 0)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("CurrBinding.binding == 0 && CurrBinding.inputRate == 0 && CurrBinding.stride == 0"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanVertexDeclaration.cpp"
                               ,0x87,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        this->Bindings[bVar3].binding = (uint)(pTVar12->AllocatorInstance).InlineData[0].Pad[0];
        this->Bindings[bVar3].inputRate =
             (uint)(*(short *)((pTVar12->AllocatorInstance).InlineData[0].Pad + 6) != 0);
        this->Bindings[bVar3].stride =
             (uint)*(ushort *)((pTVar12->AllocatorInstance).InlineData[0].Pad + 4);
        this->BindingsMask =
             this->BindingsMask | 1 << ((pTVar12->AllocatorInstance).InlineData[0].Pad[0] & 0x1f);
        param_2 = local_res18;
      }
      else {
        if ((uVar16 != bVar3) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("CurrBinding.binding == Element.StreamIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanVertexDeclaration.cpp"
                               ,0x80,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if ((this->Bindings[bVar3].inputRate !=
             (uint)*(ushort *)((pTVar12->AllocatorInstance).InlineData[0].Pad + 6)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("CurrBinding.inputRate == Element.bUseInstanceIndex ? VK_VERTEX_INPUT_RATE_INSTANCE : VK_VERTEX_INPUT_RATE_VERTEX"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanVertexDeclaration.cpp"
                               ,0x81,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        param_2 = local_res18;
        if ((this->Bindings[bVar3].stride !=
             (uint)*(ushort *)((pTVar12->AllocatorInstance).InlineData[0].Pad + 4)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("CurrBinding.stride == Element.Stride",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanVertexDeclaration.cpp"
                               ,0x82,L""), param_2 = local_res18, bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
    }
    pTVar12 = (TArray<FVertexElement,TFixedAllocator<17>_> *)
              ((pTVar12->AllocatorInstance).InlineData + 1);
  }
  puVar13 = &this->BindingsNum;
  *puVar13 = 0;
  TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
           *)&this->BindingToStream);
  TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
           *)&this->StreamToBinding);
  uVar16 = 0;
  pVVar18 = this->Bindings;
  do {
    if ((this->BindingsMask & uVar14) != 0) {
      local_60 = local_res20;
      local_res20[0] = uVar16;
      local_68 = puVar13;
      TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_int_&&>_>
                ((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
                  *)&this->BindingToStream,
                 (TPairInitializer<unsigned_int_const_&,unsigned_int_&&> *)local_74,
                 (bool *)&local_68);
      local_58 = &local_78;
      local_78 = uVar16;
      local_50 = puVar13;
      TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned_int_&&,unsigned_int_const_&>_>
                ((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
                  *)&this->StreamToBinding,
                 (TPairInitializer<unsigned_int_&&,unsigned_int_const_&> *)(local_74 + 4),
                 (bool *)&local_58);
      uVar5 = *puVar13;
      uVar8 = pVVar18->stride;
      this->Bindings[uVar5].binding = pVVar18->binding;
      this->Bindings[uVar5].stride = uVar8;
      this->Bindings[uVar5].inputRate = pVVar18->inputRate;
      this->Bindings[uVar5].binding = *puVar13;
      *puVar13 = *puVar13 + 1;
    }
    uVar16 = uVar16 + 1;
    uVar14 = uVar14 << 1 | (uint)((int)uVar14 < 0);
    pVVar18 = pVVar18 + 1;
  } while (uVar16 < 0x11);
  memset(this->Bindings + *puVar13,0,(ulonglong)*puVar13 * -0xc + 0xcc);
  if ((this->AttributesNum != 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("AttributesNum == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanVertexDeclaration.cpp"
                         ,0xa9,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar14 = local_res18;
  iVar4 = (param_1->Elements).ArrayNum;
  puVar15 = (param_1->Elements).AllocatorInstance.InlineData[0].Pad + 3;
LAB_145baa480:
  if ((param_1->Elements).ArrayNum != iVar4) {
    local_res10[0] = 0;
    `TCheckedPointerIterator<FVertexElement_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
              (local_res10);
  }
  if ((TTypeCompatibleBytes<FVertexElement> *)(puVar15 + -3) ==
      (pTVar1->AllocatorInstance).InlineData + iVar4) {
    uVar14 = this->BindingsNum;
    (this->Info).sType = VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO;
    if (uVar14 == 0) {
      if ((this->Hash != 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Hash == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanVertexDeclaration.cpp"
                             ,0xc2,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    else {
      uVar16 = this->AttributesNum;
      (this->Info).pVertexBindingDescriptions = this->Bindings;
      (this->Info).vertexBindingDescriptionCount = uVar14;
      if ((uVar16 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("AttributesNum > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanVertexDeclaration.cpp"
                             ,0xc9,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      (this->Info).vertexAttributeDescriptionCount = this->AttributesNum;
      uVar14 = this->BindingsNum;
      (this->Info).pVertexAttributeDescriptions = this->Attributes;
      uVar14 = (*FCrc::MemCrc32Func)(this->Bindings,uVar14 * 0xc,0);
      this->Hash = uVar14;
      if ((this->AttributesNum == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("AttributesNum > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanVertexDeclaration.cpp"
                             ,0xce,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar14 = (*FCrc::MemCrc32Func)(this->Attributes,this->AttributesNum << 4,this->Hash);
      this->Hash = uVar14;
    }
    return;
  }
  if ((uVar14 >> (*puVar15 & 0x1f) & 1) == 0) goto LAB_145baa848;
  bVar3 = ((TTypeCompatibleBytes<FVertexElement> *)(puVar15 + -3))->Pad[0];
  if (*(int *)&(this->StreamToBinding).field_0x8 != *(int *)&(this->StreamToBinding).field_0x34) {
    puVar6 = *(undefined1 **)&(this->StreamToBinding).field_0x40;
    puVar11 = &(this->StreamToBinding).field_0x38;
    if (puVar6 != (undefined1 *)0x0) {
      puVar11 = puVar6;
    }
    iVar10 = *(int *)(puVar11 +
                     ((ulonglong)(*(int *)&(this->StreamToBinding).field_0x48 - 1) &
                     (ulonglong)bVar3) * 4);
    if (iVar10 != -1) {
      do {
        if (*(uint *)(*(longlong *)&this->StreamToBinding + (longlong)iVar10 * 0x10) == (uint)bVar3)
        {
          pVVar17 = this->Attributes + this->AttributesNum;
          this->AttributesNum = this->AttributesNum + 1;
          if (((((pVVar17->location != 0) || (pVVar17->binding != 0)) ||
               (pVVar17->format != VK_FORMAT_UNDEFINED)) || (pVVar17->offset != 0)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("CurrAttribute.location == 0 && CurrAttribute.binding == 0 && CurrAttribute.format == 0 && CurrAttribute.offset == 0"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanVertexDeclaration.cpp"
                                 ,0xb4,L""), bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if (*(int *)&(this->StreamToBinding).field_0x8 ==
              *(int *)&(this->StreamToBinding).field_0x34) goto LAB_145baa5d7;
          puVar6 = *(undefined1 **)&(this->StreamToBinding).field_0x40;
          puVar11 = &(this->StreamToBinding).field_0x38;
          if (puVar6 != (undefined1 *)0x0) {
            puVar11 = puVar6;
          }
          uVar16 = *(uint *)(puVar11 +
                            ((ulonglong)(*(int *)&(this->StreamToBinding).field_0x48 - 1) &
                            (ulonglong)
                            ((TTypeCompatibleBytes<FVertexElement> *)(puVar15 + -3))->Pad[0]) * 4);
          if (uVar16 == 0xffffffff) goto LAB_145baa5d7;
          goto LAB_145baa5c0;
        }
        iVar10 = *(int *)(*(longlong *)&this->StreamToBinding + 8 + (longlong)iVar10 * 0x10);
      } while (iVar10 != -1);
      puVar15 = puVar15 + 8;
      goto LAB_145baa480;
    }
  }
LAB_145baa848:
  puVar15 = puVar15 + 8;
  goto LAB_145baa480;
  while (uVar16 = puVar13[2], uVar16 != 0xffffffff) {
LAB_145baa5c0:
    puVar13 = (uint *)((longlong)(int)uVar16 * 0x10 + *(longlong *)&this->StreamToBinding);
    if (*puVar13 == (uint)((TTypeCompatibleBytes<FVertexElement> *)(puVar15 + -3))->Pad[0]) {
      if (puVar13 == (uint *)0x0) goto LAB_145baa5d9;
      goto LAB_145baa5ff;
    }
  }
LAB_145baa5d7:
  puVar13 = (uint *)0x0;
LAB_145baa5d9:
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar9) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
LAB_145baa5ff:
  pVVar17->binding = puVar13[1];
  pVVar17->location = (uint)*puVar15;
  switch(puVar15[-1]) {
  case '\x01':
    pVVar17->format = VK_FORMAT_R32_SFLOAT;
    puVar2 = puVar15 + -2;
    puVar15 = puVar15 + 8;
    pVVar17->offset = (uint)*puVar2;
    goto LAB_145baa480;
  case '\x02':
    pVVar17->format = VK_FORMAT_R32G32_SFLOAT;
    puVar2 = puVar15 + -2;
    puVar15 = puVar15 + 8;
    pVVar17->offset = (uint)*puVar2;
    goto LAB_145baa480;
  case '\x03':
    pVVar17->format = VK_FORMAT_R32G32B32_SFLOAT;
    puVar2 = puVar15 + -2;
    puVar15 = puVar15 + 8;
    pVVar17->offset = (uint)*puVar2;
    goto LAB_145baa480;
  case '\x04':
    pVVar17->format = VK_FORMAT_R32G32B32A32_SFLOAT;
    puVar2 = puVar15 + -2;
    puVar15 = puVar15 + 8;
    pVVar17->offset = (uint)*puVar2;
    goto LAB_145baa480;
  case '\x05':
    pVVar17->format = VK_FORMAT_R8G8B8A8_SNORM;
    puVar2 = puVar15 + -2;
    puVar15 = puVar15 + 8;
    pVVar17->offset = (uint)*puVar2;
    goto LAB_145baa480;
  case '\x06':
    pVVar17->format = VK_FORMAT_R8G8B8A8_UINT;
    puVar2 = puVar15 + -2;
    puVar15 = puVar15 + 8;
    pVVar17->offset = (uint)*puVar2;
    goto LAB_145baa480;
  case '\a':
    pVVar17->format = VK_FORMAT_R8G8B8A8_UNORM;
    puVar2 = puVar15 + -2;
    puVar15 = puVar15 + 8;
    pVVar17->offset = (uint)*puVar2;
    goto LAB_145baa480;
  case '\b':
    pVVar17->format = VK_FORMAT_B8G8R8A8_UNORM;
    puVar2 = puVar15 + -2;
    puVar15 = puVar15 + 8;
    pVVar17->offset = (uint)*puVar2;
    goto LAB_145baa480;
  case '\t':
    pVVar17->format = VK_FORMAT_R16G16_SINT;
    puVar2 = puVar15 + -2;
    puVar15 = puVar15 + 8;
    pVVar17->offset = (uint)*puVar2;
    goto LAB_145baa480;
  case '\n':
    pVVar17->format = VK_FORMAT_R16G16B16A16_SINT;
    puVar2 = puVar15 + -2;
    puVar15 = puVar15 + 8;
    pVVar17->offset = (uint)*puVar2;
    goto LAB_145baa480;
  case '\v':
    pVVar17->format = VK_FORMAT_R16G16_SNORM;
    puVar2 = puVar15 + -2;
    puVar15 = puVar15 + 8;
    pVVar17->offset = (uint)*puVar2;
    goto LAB_145baa480;
  case '\f':
    pVVar17->format = VK_FORMAT_R16G16_SFLOAT;
    puVar2 = puVar15 + -2;
    puVar15 = puVar15 + 8;
    pVVar17->offset = (uint)*puVar2;
    goto LAB_145baa480;
  case '\r':
    pVVar17->format = VK_FORMAT_R16G16B16A16_SFLOAT;
    puVar2 = puVar15 + -2;
    puVar15 = puVar15 + 8;
    pVVar17->offset = (uint)*puVar2;
    goto LAB_145baa480;
  case '\x0e':
    pVVar17->format = VK_FORMAT_R16G16B16A16_SNORM;
    puVar2 = puVar15 + -2;
    puVar15 = puVar15 + 8;
    pVVar17->offset = (uint)*puVar2;
    goto LAB_145baa480;
  case '\x0f':
    pVVar17->format = VK_FORMAT_R16G16_UINT;
    puVar2 = puVar15 + -2;
    puVar15 = puVar15 + 8;
    pVVar17->offset = (uint)*puVar2;
    goto LAB_145baa480;
  case '\x10':
    pVVar17->format = VK_FORMAT_R16G16B16A16_UINT;
    puVar2 = puVar15 + -2;
    puVar15 = puVar15 + 8;
    pVVar17->offset = (uint)*puVar2;
    goto LAB_145baa480;
  case '\x11':
    pVVar17->format = VK_FORMAT_R16G16_UNORM;
    puVar2 = puVar15 + -2;
    puVar15 = puVar15 + 8;
    pVVar17->offset = (uint)*puVar2;
    goto LAB_145baa480;
  case '\x12':
    pVVar17->format = VK_FORMAT_R16G16B16A16_UNORM;
    puVar2 = puVar15 + -2;
    puVar15 = puVar15 + 8;
    pVVar17->offset = (uint)*puVar2;
    goto LAB_145baa480;
  case '\x13':
    pVVar17->format = VK_FORMAT_A2B10G10R10_UNORM_PACK32;
    puVar2 = puVar15 + -2;
    puVar15 = puVar15 + 8;
    pVVar17->offset = (uint)*puVar2;
    goto LAB_145baa480;
  case '\x14':
    pVVar17->format = VK_FORMAT_R32_UINT;
    puVar2 = puVar15 + -2;
    puVar15 = puVar15 + 8;
    pVVar17->offset = (uint)*puVar2;
    goto LAB_145baa480;
  default:
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Undefined vertex-element format conversion\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRHIPrivate.h"
                       ,0x1c0,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pVVar17->format = VK_FORMAT_UNDEFINED;
    pVVar17->offset = (uint)puVar15[-2];
  }
  goto LAB_145baa848;
}

