// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFCore
// Functions: 6

// operator() @ 14e62c230

bool __thiscall
`GLTF::FAsset::ValidationCheck'::__l6::<lambda_2>::operator()(void *this,FNode *param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  
  uVar1 = param_1->MeshIndex;
  if (uVar1 != 0xffffffff) {
    if (((int)uVar1 < 0) || (lVar2 = *(longlong *)this, *(int *)(lVar2 + 0x48) <= (int)uVar1)) {
      return false;
    }
    if (0 < (param_1->MorphTargetWeights).ArrayNum) {
      iVar7 = 0;
      uVar6 = 0;
      if ((int)uVar1 < *(int *)(lVar2 + 0x48)) {
        uVar6 = ~uVar1 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      if (0 < *(int *)((longlong)(int)uVar1 * 0xa8 + 0x18 + *(longlong *)(lVar2 + 0x40))) {
        iVar7 = *(int *)(*(longlong *)
                          ((longlong)(int)uVar1 * 0xa8 + 0x10 + *(longlong *)(lVar2 + 0x40)) + 0x88)
        ;
      }
      if ((param_1->MorphTargetWeights).ArrayNum != iVar7) {
        return false;
      }
    }
  }
  bVar4 = UE::Math::TTransform<double>::IsValid(&param_1->Transform);
  return !bVar4;
}

// Clear @ 14e6318d0

void __thiscall GLTF::FAsset::Clear(FAsset *this,uint param_1,uint param_2)

{
  int *piVar1;
  long64 *plVar2;
  TSet<GLTF::EExtension,DefaultKeyFuncs<GLTF::EExtension,0>,FDefaultSetAllocator> *this_00;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  
  piVar1 = &(this->Buffers).ArrayMax;
  (this->Buffers).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->Buffers).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->BufferViews).ArrayMax;
  (this->BufferViews).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&(this->BufferViews).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->Accessors).ArrayMax;
  (this->Accessors).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xd0,8,0,&(this->Accessors).AllocatorInstance,0,piVar1);
  }
  DestructItems<GLTF::FMesh,int>
            ((FMesh *)(this->Meshes).AllocatorInstance.Data,(this->Meshes).ArrayNum);
  piVar1 = &(this->Meshes).ArrayMax;
  (this->Meshes).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xa8,8,0,&(this->Meshes).AllocatorInstance,0,piVar1);
  }
  DestructItems<GLTF::FScene,int>
            ((FScene *)(this->Scenes).AllocatorInstance.Data,(this->Scenes).ArrayNum);
  piVar1 = &(this->Scenes).ArrayMax;
  (this->Scenes).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,8,0,&(this->Scenes).AllocatorInstance,0,piVar1);
  }
  DestructItems<GLTF::FNode,int>
            ((FNode *)(this->Nodes).AllocatorInstance.Data,(this->Nodes).ArrayNum);
  piVar1 = &(this->Nodes).ArrayMax;
  (this->Nodes).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x260,0x10,0,&(this->Nodes).AllocatorInstance,0,piVar1);
  }
  DestructItems<GLTF::FCamera,int>
            ((FCamera *)(this->Cameras).AllocatorInstance.Data,(this->Cameras).ArrayNum);
  piVar1 = &(this->Cameras).ArrayMax;
  (this->Cameras).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x90,8,0,&(this->Cameras).AllocatorInstance,0,piVar1);
  }
  DestructItems<GLTF::FLight,int>
            ((FLight *)(this->Lights).AllocatorInstance.Data,(this->Lights).ArrayNum);
  piVar1 = &(this->Lights).ArrayMax;
  (this->Lights).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,0,&(this->Lights).AllocatorInstance,0,piVar1);
  }
  DestructItems<GLTF::FSkinInfo,int>
            ((FSkinInfo *)(this->Skins).AllocatorInstance.Data,(this->Skins).ArrayNum);
  piVar1 = &(this->Skins).ArrayMax;
  (this->Skins).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x98,8,0,&(this->Skins).AllocatorInstance,0,piVar1);
  }
  DestructItems<GLTF::FImage,int>
            ((FImage *)(this->Images).AllocatorInstance.Data,(this->Images).ArrayNum);
  piVar1 = &(this->Images).ArrayMax;
  (this->Images).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xa8,8,0,&(this->Images).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->Samplers).ArrayMax;
  (this->Samplers).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&(this->Samplers).AllocatorInstance,0,piVar1);
  }
  DestructItems<GLTF::FTexture,int>
            ((FTexture *)(this->Textures).AllocatorInstance.Data,(this->Textures).ArrayNum);
  piVar1 = &(this->Textures).ArrayMax;
  (this->Textures).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,8,0,&(this->Textures).AllocatorInstance,0,piVar1);
  }
  DestructItems<GLTF::FMaterial,int>
            ((FMaterial *)(this->Materials).AllocatorInstance.Data,(this->Materials).ArrayNum);
  piVar1 = &(this->Materials).ArrayMax;
  (this->Materials).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x370,0x10,0,&(this->Materials).AllocatorInstance,0,piVar1);
  }
  this_00 = &this->ProcessedExtensions;
  for (lVar4 = 0x3f; 0x23UL >> lVar4 == 0; lVar4 = lVar4 + -1) {
  }
  iVar6 = 1 << ((byte)lVar4 & 0x1f);
  iVar3 = (this->ProcessedExtensions).HashSize;
  if ((iVar3 < iVar6) || (iVar6 < iVar3)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
    TSet<enum_GLTF::EExtension,DefaultKeyFuncs<enum_GLTF::EExtension,0>,FDefaultSetAllocator>::
    UnhashElements(this_00);
  }
  iVar3 = *(int *)&(this->ProcessedExtensions).Elements.field_0xc;
  *(undefined4 *)&(this->ProcessedExtensions).Elements.field_0x8 = 0;
  if (iVar3 != 0x15) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0x15,(ForAnyElementType *)this_00,0,
               (int *)&(this->ProcessedExtensions).Elements.field_0xc);
  }
  *(undefined4 *)&(this->ProcessedExtensions).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ProcessedExtensions).Elements.field_0x34 = 0;
  iVar3 = *(int *)&(this->ProcessedExtensions).Elements.field_0x2c;
  *(undefined4 *)&(this->ProcessedExtensions).Elements.field_0x28 = 0;
  if ((iVar3 < 0x20) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->ProcessedExtensions).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->ProcessedExtensions).Elements.field_0x10,0);
  }
  if (bVar5) {
    (this->ProcessedExtensions).HashSize = iVar6;
    TSet<enum_GLTF::EExtension,DefaultKeyFuncs<enum_GLTF::EExtension,0>,FDefaultSetAllocator>::
    Rehash(this_00);
  }
  DestructItems<FString,int>
            ((FString *)(this->ExtensionsRequired).AllocatorInstance.Data,
             (this->ExtensionsRequired).ArrayNum);
  piVar1 = &(this->ExtensionsRequired).ArrayMax;
  (this->ExtensionsRequired).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->ExtensionsRequired).AllocatorInstance,0,piVar1);
  }
  ::FString::Empty(&(this->Metadata).GeneratorName);
  DestructItems<GLTF::FMetadata::FExtraData,int>
            ((FExtraData *)(this->Metadata).Extras.AllocatorInstance.Data,
             (this->Metadata).Extras.ArrayNum);
  piVar1 = &(this->Metadata).Extras.ArrayMax;
  (this->Metadata).Extras.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&(this->Metadata).Extras.AllocatorInstance,0,piVar1);
  }
  if (0 < (this->BinData).ArrayNum) {
    plVar2 = &(this->BinData).ArrayMax;
    (this->BinData).ArrayNum = 0;
    if (*plVar2 != (ulonglong)(param_1 << 10)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                (1,1,(ulonglong)(param_1 << 10),&(this->BinData).AllocatorInstance,0,plVar2);
    }
  }
  if (0 < (this->ExtraBinData).ArrayNum) {
    plVar2 = &(this->ExtraBinData).ArrayMax;
    (this->ExtraBinData).ArrayNum = 0;
    if (*plVar2 != (ulonglong)(param_2 << 10)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                (1,1,(ulonglong)(param_2 << 10),&(this->ExtraBinData).AllocatorInstance,0,plVar2);
    }
  }
  return;
}

// CreateBuffersForAccessorIndex @ 14e632280

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FAccessor * __thiscall GLTF::FAsset::CreateBuffersForAccessorIndex(FAsset *this,uint param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> *this_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FAccessor *pFVar8;
  ulonglong uVar9;
  
  if ((-1 < (int)param_1) && ((int)param_1 < (this->Accessors).ArrayNum)) {
    uVar6 = 0;
    if ((int)param_1 < (this->Accessors).ArrayNum) {
      uVar6 = ~param_1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FAccessor *)(*pcVar4)();
        return pFVar8;
      }
    }
    iVar7 = (this->UncompressedDracoBinData).ArrayNum;
    piVar1 = &(this->UncompressedDracoBinData).ArrayMax;
    pFVar8 = (FAccessor *)((this->Accessors).AllocatorInstance.Data + (longlong)(int)param_1 * 0xd0)
    ;
    uVar6 = pFVar8->ByteStride;
    uVar9 = (ulonglong)(uVar6 * pFVar8->Count);
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&(this->UncompressedDracoBinData).AllocatorInstance,piVar1);
    }
    (this->UncompressedDracoBinData).ArrayNum = iVar7 + 1;
    pFVar3 = (this->UncompressedDracoBinData).AllocatorInstance.Data;
    pFVar2 = pFVar3 + (longlong)iVar7 * 0x18;
    *(undefined8 *)pFVar2 = 0;
    *(undefined8 *)(pFVar2 + 8) = 0;
    this_00 = (TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)(pFVar3 + (longlong)iVar7 * 0x18)
    ;
    this_00->ArrayMax = 0;
    if (this_00->ArrayMax < (longlong)uVar9) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                (1,1,uVar9,(ForAnyElementType *)this_00,this_00->ArrayNum,&this_00->ArrayMax);
    }
    TArray<unsigned_char,TSizedDefaultAllocator<64>_>::SetNumUninitialized(this_00,uVar9,Default);
    pFVar2 = (this_00->AllocatorInstance).Data;
    (pFVar8->BufferView).Buffer.ByteLength = uVar9;
    (pFVar8->BufferView).ByteLength = uVar9;
    (pFVar8->BufferView).ByteStride = uVar6;
    (pFVar8->BufferView).Buffer.Data = (uchar *)pFVar2;
    (pFVar8->BufferView).ByteOffset = 0;
    return pFVar8;
  }
  return &EmptyAccessor;
}

// GenerateNames @ 14e6389e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014e63a9d1) */

void __thiscall GLTF::FAsset::GenerateNames(FAsset *this)

{
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  FString *pFVar8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar9;
  wchar_t *pwVar10;
  undefined8 *puVar11;
  uint uVar12;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  bool *pbVar15;
  FMesh *this_00;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  ulonglong uVar19;
  FScriptContainerElement *pFVar20;
  ulonglong uVar21;
  bool *pbVar22;
  FAsset *pFVar23;
  undefined1 auStackY_508 [32];
  undefined1 local_4b8 [4];
  uint local_4b4;
  uint local_4b0;
  undefined1 local_4ac [4];
  int local_4a8;
  FString local_4a0;
  FAsset *local_490;
  FString local_488;
  FString local_478;
  FString local_468;
  FString local_458;
  FString local_448;
  FString local_438;
  FString local_428;
  FString local_418;
  void *local_408;
  undefined8 local_400;
  FString local_3f8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_3e8;
  FString local_3d8;
  FString local_3c8;
  FString local_3b8;
  FString local_3a8;
  FString local_398;
  FString local_388;
  FString local_378;
  FString local_368;
  FString local_358;
  FString local_348;
  FString local_338;
  FString local_328;
  FString local_318;
  FString local_308;
  FString local_2f8;
  FString local_2e8;
  undefined1 local_2d8 [8];
  undefined1 local_2d0 [8];
  FName local_2c8;
  FName local_2c0;
  FName local_2b8;
  FName local_2b0;
  FName local_2a8;
  longlong local_2a0;
  FString local_298;
  FString local_288;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_278;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_268;
  FString local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_128;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_d8;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_508;
  local_490 = this;
  ::FString::ConcatFC(&local_288,&this->Name,L"_scene_");
  uVar19 = 0;
  uVar17 = 0;
  uVar13 = uVar19;
  if ((this->Scenes).ArrayNum != 0) {
    do {
      uVar5 = (uint)uVar13;
      uVar16 = 0;
      if ((int)uVar5 < (this->Scenes).ArrayNum) {
        uVar16 = ~uVar5 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar20 = (this->Scenes).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x80;
      local_2f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2f8.Data.ArrayNum = 0;
      local_2f8.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_2f8,uVar5);
      ::FString::ConcatFF(&local_3f8,&local_288,&local_2f8);
      pFVar14 = pFVar20 + 0x70;
      if (pFVar14 != (FScriptContainerElement *)&local_3f8) {
        if (*(void **)&pFVar14->field_0x0 != (void *)0x0) {
          FMemory::Free(*(void **)&pFVar14->field_0x0);
        }
        *(FScriptContainerElement **)&pFVar14->field_0x0 = local_3f8.Data.AllocatorInstance.Data;
        *(int *)(pFVar20 + 0x78) = local_3f8.Data.ArrayNum;
        *(int *)(pFVar20 + 0x7c) = local_3f8.Data.ArrayMax;
        local_3f8.Data.ArrayNum = 0;
        local_3f8.Data.ArrayMax = 0;
        local_3f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
      }
      if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
      }
      if (*(int *)(pFVar20 + 8) < 2) {
        uVar16 = *(int *)(pFVar20 + 0x78) - 1;
        if (*(int *)(pFVar20 + 0x78) == 0) {
          uVar16 = uVar17;
        }
        ::FString::AssignRange((FString *)pFVar20,*(wchar_t **)&pFVar14->field_0x0,uVar16);
      }
      UE::Interchange::SanitizeName((FString *)pFVar20,false);
      uVar13 = uVar13 + 1;
    } while (uVar13 < (ulonglong)(longlong)(this->Scenes).ArrayNum);
  }
  if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.Data.AllocatorInstance.Data);
  }
  local_88.Elements._0_8_ = 0;
  local_88.Elements._8_8_ = 0;
  local_88.Elements._32_8_ = 0;
  local_88.Elements._40_4_ = 0;
  local_88.Elements._44_4_ = 0x80;
  local_88.Elements._48_4_ = 0xffffffff;
  local_88.Elements._52_4_ = 0;
  local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_88.HashSize = 0;
  ::FString::ConcatFC((FString *)&local_268,&this->Name,L"_node_");
  ::FString::ConcatFC((FString *)&local_278,&this->Name,L"_joint_");
  uVar16 = 0;
  uVar13 = uVar19;
  uVar21 = uVar19;
  if (0 < (this->Nodes).ArrayNum) {
    do {
      uVar12 = (uint)uVar13;
      uVar5 = uVar17;
      if ((int)uVar12 < (this->Nodes).ArrayNum) {
        uVar5 = ~uVar12 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar14 = (this->Nodes).AllocatorInstance.Data + uVar21;
      bVar4 = *(int *)&pFVar14[0x80].field_0x0 == 2;
      pTVar1 = (TArray<wchar_t,TSizedDefaultAllocator<32>_> *)(pFVar14 + 0x250);
      pTVar9 = &local_278;
      if (!bVar4) {
        pTVar9 = &local_268;
      }
      if (pTVar1 != pTVar9) {
        TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
                  (pTVar1,(wchar_t *)(pTVar9->AllocatorInstance).Data,pTVar9->ArrayNum,
                   *(int *)(pFVar14 + 0x25c));
      }
      local_2e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2e8.Data.ArrayNum = 0;
      local_2e8.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_2e8,uVar12);
      ::FString::ConcatFF((FString *)&local_3e8,(FString *)pTVar1,&local_2e8);
      if (pTVar1 != &local_3e8) {
        pFVar20 = (pTVar1->AllocatorInstance).Data;
        if (pFVar20 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar20);
        }
        (pTVar1->AllocatorInstance).Data = local_3e8.AllocatorInstance.Data;
        *(int *)(pFVar14 + 600) = local_3e8.ArrayNum;
        *(int *)(pFVar14 + 0x25c) = local_3e8.ArrayMax;
        local_3e8.ArrayNum = 0;
        local_3e8.ArrayMax = 0;
        local_3e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_3e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3e8.AllocatorInstance.Data);
      }
      if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
      }
      if (*(int *)(pFVar14 + 8) < 2) {
        uVar5 = *(int *)(pFVar14 + 600) - 1;
        if (*(int *)(pFVar14 + 600) == 0) {
          uVar5 = uVar17;
        }
        ::FString::AssignRange((FString *)pFVar14,*(wchar_t **)&pFVar14[0x250].field_0x0,uVar5);
      }
      UE::Interchange::SanitizeName((FString *)pFVar14,bVar4);
      if (*(int *)(pFVar14 + 8) == 0) {
        pwVar10 = L"";
        uVar5 = uVar17;
      }
      else {
        pwVar10 = *(wchar_t **)&pFVar14->field_0x0;
        uVar5 = *(int *)(pFVar14 + 8) - 1;
      }
      uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar5,pwVar10);
      iVar6 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
              FindIndexByHash<FString>(&local_88,uVar5,(FString *)pFVar14);
      if (iVar6 != -1) {
        if (*(int *)(pFVar14 + 600) == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = *(wchar_t **)&pFVar14[0x250].field_0x0;
        }
        pFVar8 = FMD5::HashAnsiString(&local_148,pwVar10);
        ::FString::ConcatCF(&local_298,L"_",pFVar8);
        uVar5 = local_298.Data.ArrayNum - 1;
        if (local_298.Data.ArrayNum == 0) {
          uVar5 = uVar16;
        }
        ::FString::AppendChars
                  ((FString *)pFVar14,(wchar_t *)local_298.Data.AllocatorInstance.Data,uVar5);
        if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_298.Data.AllocatorInstance.Data);
        }
        if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_148.Data.AllocatorInstance.Data);
        }
      }
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                (&local_88,(FString *)local_2d8,(bool *)pFVar14);
      uVar13 = (ulonglong)(uVar12 + 1);
      uVar21 = uVar21 + 0x260;
    } while ((int)(uVar12 + 1) < (this->Nodes).ArrayNum);
  }
  if (local_278.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.AllocatorInstance.Data);
  }
  if (local_268.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.AllocatorInstance.Data);
  }
  local_88.HashSize = 0;
  if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_88.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_88.Elements);
  ::FString::ConcatFC(&local_258,&this->Name,L"_texture_");
  uVar13 = uVar19;
  uVar21 = uVar19;
  if (0 < (this->Textures).ArrayNum) {
    do {
      uVar12 = (uint)uVar21;
      uVar5 = uVar16;
      if ((int)uVar12 < (this->Textures).ArrayNum) {
        uVar5 = ~uVar12 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_388.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar20 = (this->Textures).AllocatorInstance.Data + uVar13;
      local_388.Data.ArrayNum = 0;
      local_388.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_388,uVar12);
      ::FString::ConcatFF(&local_3d8,&local_258,&local_388);
      pFVar14 = pFVar20 + 0x70;
      if (pFVar14 != (FScriptContainerElement *)&local_3d8) {
        if (*(void **)pFVar14 != (void *)0x0) {
          FMemory::Free(*(void **)pFVar14);
        }
        *(FScriptContainerElement **)pFVar14 = local_3d8.Data.AllocatorInstance.Data;
        *(int *)(pFVar20 + 0x78) = local_3d8.Data.ArrayNum;
        *(int *)(pFVar20 + 0x7c) = local_3d8.Data.ArrayMax;
        local_3d8.Data.ArrayNum = 0;
        local_3d8.Data.ArrayMax = 0;
        local_3d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
      }
      if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_388.Data.AllocatorInstance.Data);
      }
      pTVar1 = (TArray<wchar_t,TSizedDefaultAllocator<32>_> *)(pFVar20 + 0x10);
      if (*(int *)(pFVar20 + 0x18) < 2) {
        pTVar9 = *(TArray<wchar_t,TSizedDefaultAllocator<32>_> **)pFVar20;
        if (pTVar9->ArrayNum < 2) {
          if ((pTVar9[1].ArrayNum < 2) ||
             (bVar4 = ::FString::StartsWith((FString *)(pTVar9 + 1),L"data:",5,IgnoreCase), bVar4))
          {
            uVar5 = *(int *)(pFVar20 + 0x78) - 1;
            if (*(int *)(pFVar20 + 0x78) == 0) {
              uVar5 = uVar16;
            }
            ::FString::AssignRange((FString *)pTVar1,*(wchar_t **)(pFVar20 + 0x70),uVar5);
          }
          else {
            pTVar9 = &FPaths::GetBaseFilename
                                (&local_138,(FString *)(*(longlong *)pFVar20 + 0x10),true)->Data;
            if (pTVar1 != pTVar9) {
              pFVar14 = (pTVar1->AllocatorInstance).Data;
              if (pFVar14 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar14);
              }
              *(FScriptContainerElement **)(pFVar20 + 0x10) = (pTVar9->AllocatorInstance).Data;
              (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
              *(int *)(pFVar20 + 0x18) = pTVar9->ArrayNum;
              *(int *)(pFVar20 + 0x1c) = pTVar9->ArrayMax;
              pTVar9->ArrayNum = 0;
              pTVar9->ArrayMax = 0;
            }
            if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_138.Data.AllocatorInstance.Data);
            }
          }
        }
        else if (pTVar1 != pTVar9) {
          TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
                    (pTVar1,(wchar_t *)(pTVar9->AllocatorInstance).Data,pTVar9->ArrayNum,
                     *(int *)(pFVar20 + 0x1c));
        }
      }
      UE::Interchange::SanitizeName((FString *)pTVar1,false);
      uVar13 = uVar13 + 0x80;
      uVar21 = (ulonglong)(uVar12 + 1);
    } while ((int)(uVar12 + 1) < (this->Textures).ArrayNum);
  }
  if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.Data.AllocatorInstance.Data);
  }
  ::FString::ConcatFC(&local_248,&this->Name,L"_camera_");
  uVar13 = uVar19;
  uVar21 = uVar19;
  if (0 < (this->Cameras).ArrayNum) {
    do {
      uVar12 = (uint)uVar13;
      uVar5 = uVar16;
      if ((int)uVar12 < (this->Cameras).ArrayNum) {
        uVar5 = ~uVar12 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_378.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar20 = (this->Cameras).AllocatorInstance.Data + uVar21;
      local_378.Data.ArrayNum = 0;
      local_378.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_378,uVar12);
      ::FString::ConcatFF(&local_3c8,&local_248,&local_378);
      pFVar14 = pFVar20 + 0x80;
      if (pFVar14 != (FScriptContainerElement *)&local_3c8) {
        if (*(void **)pFVar14 != (void *)0x0) {
          FMemory::Free(*(void **)pFVar14);
        }
        *(FScriptContainerElement **)pFVar14 = local_3c8.Data.AllocatorInstance.Data;
        *(int *)(pFVar20 + 0x88) = local_3c8.Data.ArrayNum;
        *(int *)(pFVar20 + 0x8c) = local_3c8.Data.ArrayMax;
        local_3c8.Data.ArrayNum = 0;
        local_3c8.Data.ArrayMax = 0;
        local_3c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_3c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3c8.Data.AllocatorInstance.Data);
      }
      if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_378.Data.AllocatorInstance.Data);
      }
      pTVar1 = (TArray<wchar_t,TSizedDefaultAllocator<32>_> *)(pFVar20 + 8);
      if (*(int *)(pFVar20 + 0x10) < 2) {
        pTVar9 = *(TArray<wchar_t,TSizedDefaultAllocator<32>_> **)pFVar20;
        if (pTVar9->ArrayNum < 2) {
          uVar5 = *(int *)(pFVar20 + 0x88) - 1;
          if (*(int *)(pFVar20 + 0x88) == 0) {
            uVar5 = uVar17;
          }
          ::FString::AssignRange((FString *)pTVar1,*(wchar_t **)(pFVar20 + 0x80),uVar5);
        }
        else if (pTVar1 != pTVar9) {
          TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
                    (pTVar1,(wchar_t *)(pTVar9->AllocatorInstance).Data,pTVar9->ArrayNum,
                     *(int *)(pFVar20 + 0x14));
        }
      }
      UE::Interchange::SanitizeName((FString *)pTVar1,false);
      uVar13 = (ulonglong)(uVar12 + 1);
      uVar21 = uVar21 + 0x90;
    } while ((int)(uVar12 + 1) < (this->Cameras).ArrayNum);
  }
  if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.Data.AllocatorInstance.Data);
  }
  ::FString::ConcatFC(&local_238,&this->Name,L"_light_");
  uVar13 = uVar19;
  if (0 < (this->Lights).ArrayNum) {
    do {
      uVar16 = (uint)uVar13;
      uVar17 = 0;
      if ((int)uVar16 < (this->Lights).ArrayNum) {
        uVar17 = ~uVar16 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_368.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar20 = (this->Lights).AllocatorInstance.Data + uVar19;
      local_368.Data.ArrayNum = 0;
      local_368.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_368,uVar16);
      ::FString::ConcatFF(&local_3b8,&local_238,&local_368);
      pFVar14 = pFVar20 + 0x48;
      if (pFVar14 != (FScriptContainerElement *)&local_3b8) {
        if (*(void **)pFVar14 != (void *)0x0) {
          FMemory::Free(*(void **)pFVar14);
        }
        *(FScriptContainerElement **)pFVar14 = local_3b8.Data.AllocatorInstance.Data;
        *(int *)(pFVar20 + 0x50) = local_3b8.Data.ArrayNum;
        *(int *)(pFVar20 + 0x54) = local_3b8.Data.ArrayMax;
        local_3b8.Data.ArrayNum = 0;
        local_3b8.Data.ArrayMax = 0;
        local_3b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
      }
      if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_368.Data.AllocatorInstance.Data);
      }
      pFVar14 = pFVar20 + 8;
      if (*(int *)(pFVar20 + 0x10) < 2) {
        pFVar2 = *(FScriptContainerElement **)pFVar20;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          iVar6 = *(int *)&pFVar2[8].field_0x0;
          if (1 < iVar6) {
            if (pFVar14 != pFVar2) {
              pFVar2 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar2->field_0x0)->
                       AllocatorInstance).Data;
              *(int *)(pFVar20 + 0x10) = iVar6;
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,iVar6,*(int *)(pFVar20 + 0x14),(ForAnyElementType *)pFVar14,iVar6,
                         (int *)(pFVar20 + 0x14));
              memcpy((((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar14->field_0x0)->
                     AllocatorInstance).Data,pFVar2,(longlong)iVar6 * 2);
            }
            goto LAB_14e6393b7;
          }
        }
        iVar6 = *(int *)(pFVar20 + 0x50) + -1;
        if (*(int *)(pFVar20 + 0x50) == 0) {
          iVar6 = 0;
        }
        ::FString::AssignRange((FString *)pFVar14,*(wchar_t **)(pFVar20 + 0x48),iVar6);
      }
LAB_14e6393b7:
      UE::Interchange::SanitizeName((FString *)(pFVar20 + 8),false);
      uVar19 = uVar19 + 0x58;
      uVar13 = (ulonglong)(uVar16 + 1);
    } while ((int)(uVar16 + 1) < (this->Lights).ArrayNum);
  }
  uVar13 = 0;
  if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.Data.AllocatorInstance.Data);
  }
  ::FString::ConcatFC(&local_228,&this->Name,L"_material_");
  iVar6 = (this->Materials).ArrayNum;
  uVar17 = 0;
  uVar19 = uVar13;
  uVar21 = uVar13;
  if (0 < iVar6) {
    do {
      uVar5 = (uint)uVar19;
      uVar16 = 0;
      if ((int)uVar5 < iVar6) {
        uVar16 = ~uVar5 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_358.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar20 = (this->Materials).AllocatorInstance.Data + uVar21;
      local_358.Data.ArrayNum = 0;
      local_358.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_358,uVar5);
      ::FString::ConcatFF(&local_3a8,&local_228,&local_358);
      pFVar14 = pFVar20 + 0x360;
      if (pFVar14 != (FScriptContainerElement *)&local_3a8) {
        if (*(void **)&pFVar14->field_0x0 != (void *)0x0) {
          FMemory::Free(*(void **)&pFVar14->field_0x0);
        }
        *(FScriptContainerElement **)&pFVar14->field_0x0 = local_3a8.Data.AllocatorInstance.Data;
        *(int *)(pFVar20 + 0x368) = local_3a8.Data.ArrayNum;
        *(int *)(pFVar20 + 0x36c) = local_3a8.Data.ArrayMax;
        local_3a8.Data.ArrayNum = 0;
        local_3a8.Data.ArrayMax = 0;
        local_3a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
      }
      if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_358.Data.AllocatorInstance.Data);
      }
      if (*(int *)(pFVar20 + 8) < 2) {
        uVar16 = *(int *)(pFVar20 + 0x368) - 1;
        if (*(int *)(pFVar20 + 0x368) == 0) {
          uVar16 = uVar17;
        }
        ::FString::AssignRange((FString *)pFVar20,*(wchar_t **)&pFVar20[0x360].field_0x0,uVar16);
      }
      UE::Interchange::SanitizeName((FString *)pFVar20,false);
      iVar6 = (this->Materials).ArrayNum;
      uVar19 = (ulonglong)(uVar5 + 1);
      uVar21 = uVar21 + 0x370;
    } while ((int)(uVar5 + 1) < iVar6);
  }
  if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.Data.AllocatorInstance.Data);
  }
  ::FString::ConcatFC(&local_218,&this->Name,L"_skin_");
  iVar6 = (this->Skins).ArrayNum;
  uVar19 = uVar13;
  uVar21 = uVar13;
  if (0 < iVar6) {
    do {
      uVar5 = (uint)uVar19;
      uVar16 = uVar17;
      if ((int)uVar5 < iVar6) {
        uVar16 = ~uVar5 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar20 = (this->Skins).AllocatorInstance.Data;
      local_348.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_348.Data.ArrayNum = 0;
      local_348.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_348,uVar5);
      ::FString::ConcatFF(&local_398,&local_218,&local_348);
      pFVar14 = pFVar20 + uVar21 + 0x88;
      if (pFVar14 != (FScriptContainerElement *)&local_398) {
        if (*(void **)pFVar14 != (void *)0x0) {
          FMemory::Free(*(void **)pFVar14);
        }
        *(FScriptContainerElement **)pFVar14 = local_398.Data.AllocatorInstance.Data;
        *(int *)(pFVar20 + uVar21 + 0x90) = local_398.Data.ArrayNum;
        *(int *)(pFVar20 + uVar21 + 0x94) = local_398.Data.ArrayMax;
        local_398.Data.ArrayNum = 0;
        local_398.Data.ArrayMax = 0;
        local_398.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_398.Data.AllocatorInstance.Data);
      }
      if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_348.Data.AllocatorInstance.Data);
      }
      if (*(int *)(pFVar20 + uVar21 + 0x10) < 2) {
        uVar16 = *(int *)(pFVar20 + uVar21 + 0x90) - 1;
        if (*(int *)(pFVar20 + uVar21 + 0x90) == 0) {
          uVar16 = uVar17;
        }
        ::FString::AssignRange
                  ((FString *)(pFVar20 + uVar21 + 8),*(wchar_t **)(pFVar20 + uVar21 + 0x88),uVar16);
      }
      UE::Interchange::SanitizeName((FString *)(pFVar20 + uVar21 + 8),false);
      iVar6 = (this->Skins).ArrayNum;
      uVar19 = (ulonglong)(uVar5 + 1);
      uVar21 = uVar21 + 0x98;
    } while ((int)(uVar5 + 1) < iVar6);
  }
  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
  ::FString::ConcatFC(&local_208,&this->Name,L"_animation_");
  iVar6 = (this->Animations).ArrayNum;
  uVar16 = 0;
  uVar19 = uVar13;
  uVar21 = uVar13;
  if (0 < iVar6) {
    do {
      uVar12 = (uint)uVar19;
      uVar5 = uVar17;
      if ((int)uVar12 < iVar6) {
        uVar5 = ~uVar12 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_338.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar20 = (this->Animations).AllocatorInstance.Data + uVar21;
      local_338.Data.ArrayNum = 0;
      local_338.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_338,uVar12);
      ::FString::ConcatFF(&local_488,&local_208,&local_338);
      pFVar14 = pFVar20 + 0x80;
      if (pFVar14 != (FScriptContainerElement *)&local_488) {
        if (*(void **)&pFVar14->field_0x0 != (void *)0x0) {
          FMemory::Free(*(void **)&pFVar14->field_0x0);
        }
        *(FScriptContainerElement **)&pFVar14->field_0x0 = local_488.Data.AllocatorInstance.Data;
        *(int *)(pFVar20 + 0x88) = local_488.Data.ArrayNum;
        *(int *)(pFVar20 + 0x8c) = local_488.Data.ArrayMax;
        local_488.Data.ArrayNum = 0;
        local_488.Data.ArrayMax = 0;
        local_488.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_488.Data.AllocatorInstance.Data);
      }
      if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_338.Data.AllocatorInstance.Data);
      }
      if (*(int *)(pFVar20 + 8) < 2) {
        uVar5 = *(int *)(pFVar20 + 0x88) - 1;
        if (*(int *)(pFVar20 + 0x88) == 0) {
          uVar5 = uVar16;
        }
        ::FString::AssignRange((FString *)pFVar20,*(wchar_t **)&pFVar20[0x80].field_0x0,uVar5);
      }
      UE::Interchange::SanitizeName((FString *)pFVar20,false);
      iVar6 = (this->Animations).ArrayNum;
      uVar19 = (ulonglong)(uVar12 + 1);
      uVar21 = uVar21 + 0x90;
    } while ((int)(uVar12 + 1) < iVar6);
  }
  if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.Data.AllocatorInstance.Data);
  }
  ::FString::ConcatFC(&local_1f8,&this->Name,L"_image_");
  iVar6 = (this->Images).ArrayNum;
  uVar19 = uVar13;
  uVar21 = uVar13;
  if (0 < iVar6) {
    do {
      uVar5 = (uint)uVar19;
      uVar17 = uVar16;
      if ((int)uVar5 < iVar6) {
        uVar17 = ~uVar5 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_328.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar20 = (this->Images).AllocatorInstance.Data + uVar21;
      local_328.Data.ArrayNum = 0;
      local_328.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_328,uVar5);
      ::FString::ConcatFF(&local_478,&local_1f8,&local_328);
      pFVar14 = pFVar20 + 0x98;
      if (pFVar14 != (FScriptContainerElement *)&local_478) {
        if (*(void **)pFVar14 != (void *)0x0) {
          FMemory::Free(*(void **)pFVar14);
        }
        *(FScriptContainerElement **)pFVar14 = local_478.Data.AllocatorInstance.Data;
        *(int *)&pFVar20[0xa0].field_0x0 = local_478.Data.ArrayNum;
        *(int *)(pFVar20 + 0xa4) = local_478.Data.ArrayMax;
        local_478.Data.ArrayNum = 0;
        local_478.Data.ArrayMax = 0;
        local_478.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_478.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_478.Data.AllocatorInstance.Data);
      }
      if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_328.Data.AllocatorInstance.Data);
      }
      if (*(int *)(pFVar20 + 8) < 2) {
        uVar17 = *(int *)&pFVar20[0xa0].field_0x0 - 1;
        if (*(int *)&pFVar20[0xa0].field_0x0 == 0) {
          uVar17 = uVar16;
        }
        ::FString::AssignRange((FString *)pFVar20,*(wchar_t **)(pFVar20 + 0x98),uVar17);
      }
      UE::Interchange::SanitizeName((FString *)pFVar20,false);
      iVar6 = (this->Images).ArrayNum;
      uVar19 = (ulonglong)(uVar5 + 1);
      uVar21 = uVar21 + 0xa8;
    } while ((int)(uVar5 + 1) < iVar6);
  }
  if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
  }
  ::FString::ConcatFC(&local_1e8,&this->Name,L"_mesh_");
  iVar6 = (this->Meshes).ArrayNum;
  uVar19 = uVar13;
  uVar21 = uVar13;
  if (0 < iVar6) {
    do {
      uVar5 = (uint)uVar19;
      uVar17 = uVar16;
      if ((int)uVar5 < iVar6) {
        uVar17 = ~uVar5 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_318.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar20 = (this->Meshes).AllocatorInstance.Data + uVar21;
      local_318.Data.ArrayNum = 0;
      local_318.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_318,uVar5);
      ::FString::ConcatFF(&local_468,&local_1e8,&local_318);
      pFVar14 = pFVar20 + 0x90;
      if (pFVar14 != (FScriptContainerElement *)&local_468) {
        if (*(void **)&pFVar14->field_0x0 != (void *)0x0) {
          FMemory::Free(*(void **)&pFVar14->field_0x0);
        }
        *(FScriptContainerElement **)&pFVar14->field_0x0 = local_468.Data.AllocatorInstance.Data;
        *(int *)(pFVar20 + 0x98) = local_468.Data.ArrayNum;
        *(int *)(pFVar20 + 0x9c) = local_468.Data.ArrayMax;
        local_468.Data.ArrayNum = 0;
        local_468.Data.ArrayMax = 0;
        local_468.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_468.Data.AllocatorInstance.Data);
      }
      if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_318.Data.AllocatorInstance.Data);
      }
      if (*(int *)(pFVar20 + 8) < 2) {
        uVar17 = *(int *)(pFVar20 + 0x98) - 1;
        if (*(int *)(pFVar20 + 0x98) == 0) {
          uVar17 = uVar16;
        }
        ::FString::AssignRange((FString *)pFVar20,*(wchar_t **)&pFVar20[0x90].field_0x0,uVar17);
      }
      UE::Interchange::SanitizeName((FString *)pFVar20,false);
      iVar6 = (this->Meshes).ArrayNum;
      uVar19 = (ulonglong)(uVar5 + 1);
      uVar21 = uVar21 + 0xa8;
    } while ((int)(uVar5 + 1) < iVar6);
  }
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  ::FString::ConcatFC(&local_1d8,&this->Name,L"_IES_");
  iVar6 = (this->LightsIES).ArrayNum;
  uVar19 = uVar13;
  uVar21 = uVar13;
  if (0 < iVar6) {
    do {
      uVar5 = (uint)uVar19;
      uVar17 = uVar16;
      if ((int)uVar5 < iVar6) {
        uVar17 = ~uVar5 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar20 = (this->LightsIES).AllocatorInstance.Data;
      local_308.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_308.Data.ArrayNum = 0;
      local_308.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_308,uVar5);
      ::FString::ConcatFF(&local_458,&local_1d8,&local_308);
      pFVar14 = pFVar20 + uVar21 + 0x58;
      if (pFVar14 != (FScriptContainerElement *)&local_458) {
        if (*(void **)pFVar14 != (void *)0x0) {
          FMemory::Free(*(void **)pFVar14);
        }
        *(FScriptContainerElement **)pFVar14 = local_458.Data.AllocatorInstance.Data;
        *(int *)(pFVar20 + uVar21 + 0x60) = local_458.Data.ArrayNum;
        *(int *)(pFVar20 + uVar21 + 100) = local_458.Data.ArrayMax;
        local_458.Data.ArrayNum = 0;
        local_458.Data.ArrayMax = 0;
        local_458.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_458.Data.AllocatorInstance.Data);
      }
      if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_308.Data.AllocatorInstance.Data);
      }
      if (*(int *)(pFVar20 + uVar21 + 0x50) < 2) {
        uVar17 = *(int *)(pFVar20 + uVar21 + 0x60) - 1;
        if (*(int *)(pFVar20 + uVar21 + 0x60) == 0) {
          uVar17 = uVar16;
        }
        ::FString::AssignRange
                  ((FString *)(pFVar20 + uVar21 + 0x48),*(wchar_t **)(pFVar20 + uVar21 + 0x58),
                   uVar17);
      }
      UE::Interchange::SanitizeName((FString *)(pFVar20 + uVar21 + 0x48),false);
      iVar6 = (this->LightsIES).ArrayNum;
      uVar19 = (ulonglong)(uVar5 + 1);
      uVar21 = uVar21 + 0x68;
    } while ((int)(uVar5 + 1) < iVar6);
  }
  if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_1c8,L"Material_");
  iVar6 = (this->Materials).ArrayNum;
  uVar19 = uVar13;
  uVar21 = uVar13;
  if (0 < iVar6) {
    do {
      uVar5 = (uint)uVar19;
      uVar17 = uVar16;
      if ((int)uVar5 < iVar6) {
        uVar17 = ~uVar5 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar14 = (this->Materials).AllocatorInstance.Data + uVar21;
      if ((1 < *(int *)(pFVar14 + 8)) &&
         (::FName::FName(&local_2c8,*(wchar_t **)&pFVar14->field_0x0), local_2c8 == (FName)0x0)) {
        ::FString::ConcatFF(&local_448,&local_1c8,(FString *)pFVar14);
        if (pFVar14 != (FScriptContainerElement *)&local_448) {
          if (*(void **)&pFVar14->field_0x0 != (void *)0x0) {
            FMemory::Free(*(void **)&pFVar14->field_0x0);
          }
          *(FScriptContainerElement **)&pFVar14->field_0x0 = local_448.Data.AllocatorInstance.Data;
          *(int *)(pFVar14 + 8) = local_448.Data.ArrayNum;
          *(int *)(pFVar14 + 0xc) = local_448.Data.ArrayMax;
          local_448.Data.ArrayNum = 0;
          local_448.Data.ArrayMax = 0;
          local_448.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        if (local_448.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_448.Data.AllocatorInstance.Data);
        }
      }
      iVar6 = (this->Materials).ArrayNum;
      uVar19 = (ulonglong)(uVar5 + 1);
      uVar21 = uVar21 + 0x370;
    } while ((int)(uVar5 + 1) < iVar6);
  }
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_1b8,L"Texture_");
  iVar6 = (this->Textures).ArrayNum;
  uVar17 = 0;
  uVar19 = uVar13;
  uVar21 = uVar13;
  if (0 < iVar6) {
    do {
      uVar12 = (uint)uVar19;
      uVar5 = uVar17;
      if ((int)uVar12 < iVar6) {
        uVar5 = ~uVar12 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar14 = (this->Textures).AllocatorInstance.Data + uVar21 + 0x10;
      if ((1 < *(int *)(pFVar14 + 8)) &&
         (::FName::FName(&local_2c0,*(wchar_t **)&pFVar14->field_0x0), local_2c0 == (FName)0x0)) {
        ::FString::ConcatFF(&local_438,&local_1b8,(FString *)pFVar14);
        if (pFVar14 != (FScriptContainerElement *)&local_438) {
          if (*(void **)&pFVar14->field_0x0 != (void *)0x0) {
            FMemory::Free(*(void **)&pFVar14->field_0x0);
          }
          *(FScriptContainerElement **)&pFVar14->field_0x0 = local_438.Data.AllocatorInstance.Data;
          *(int *)(pFVar14 + 8) = local_438.Data.ArrayNum;
          *(int *)(pFVar14 + 0xc) = local_438.Data.ArrayMax;
          local_438.Data.ArrayNum = 0;
          local_438.Data.ArrayMax = 0;
          local_438.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        if (local_438.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_438.Data.AllocatorInstance.Data);
        }
      }
      iVar6 = (this->Textures).ArrayNum;
      uVar19 = (ulonglong)(uVar12 + 1);
      uVar21 = uVar21 + 0x80;
    } while ((int)(uVar12 + 1) < iVar6);
  }
  if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_1a8,L"Mesh_");
  iVar6 = (this->Meshes).ArrayNum;
  uVar19 = uVar13;
  uVar21 = uVar13;
  if (0 < iVar6) {
    do {
      uVar12 = (uint)uVar19;
      uVar5 = uVar17;
      if ((int)uVar12 < iVar6) {
        uVar5 = ~uVar12 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar14 = (this->Meshes).AllocatorInstance.Data + uVar21;
      if ((1 < *(int *)(pFVar14 + 8)) &&
         (::FName::FName(&local_2b8,*(wchar_t **)&pFVar14->field_0x0), local_2b8 == (FName)0x0)) {
        ::FString::ConcatFF(&local_428,&local_1a8,(FString *)pFVar14);
        if (pFVar14 != (FScriptContainerElement *)&local_428) {
          if (*(void **)&pFVar14->field_0x0 != (void *)0x0) {
            FMemory::Free(*(void **)&pFVar14->field_0x0);
          }
          *(FScriptContainerElement **)&pFVar14->field_0x0 = local_428.Data.AllocatorInstance.Data;
          *(int *)(pFVar14 + 8) = local_428.Data.ArrayNum;
          *(int *)(pFVar14 + 0xc) = local_428.Data.ArrayMax;
          local_428.Data.ArrayNum = 0;
          local_428.Data.ArrayMax = 0;
          local_428.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        if (local_428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_428.Data.AllocatorInstance.Data);
        }
      }
      iVar6 = (this->Meshes).ArrayNum;
      uVar19 = (ulonglong)(uVar12 + 1);
      uVar21 = uVar21 + 0xa8;
    } while ((int)(uVar12 + 1) < iVar6);
  }
  if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_198,L"Animation_");
  iVar6 = (this->Animations).ArrayNum;
  uVar19 = uVar13;
  uVar21 = uVar13;
  if (0 < iVar6) {
    do {
      uVar12 = (uint)uVar19;
      uVar5 = uVar17;
      if ((int)uVar12 < iVar6) {
        uVar5 = ~uVar12 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar14 = (this->Animations).AllocatorInstance.Data + uVar21;
      if ((1 < *(int *)(pFVar14 + 8)) &&
         (::FName::FName(&local_2b0,*(wchar_t **)&pFVar14->field_0x0), local_2b0 == (FName)0x0)) {
        ::FString::ConcatFF(&local_418,&local_198,(FString *)pFVar14);
        if (pFVar14 != (FScriptContainerElement *)&local_418) {
          if (*(void **)&pFVar14->field_0x0 != (void *)0x0) {
            FMemory::Free(*(void **)&pFVar14->field_0x0);
          }
          *(FScriptContainerElement **)&pFVar14->field_0x0 = local_418.Data.AllocatorInstance.Data;
          *(int *)(pFVar14 + 8) = local_418.Data.ArrayNum;
          *(int *)(pFVar14 + 0xc) = local_418.Data.ArrayMax;
          local_418.Data.ArrayNum = 0;
          local_418.Data.ArrayMax = 0;
          local_418.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_418.Data.AllocatorInstance.Data);
        }
      }
      iVar6 = (this->Animations).ArrayNum;
      uVar19 = (ulonglong)(uVar12 + 1);
      uVar21 = uVar21 + 0x90;
    } while ((int)(uVar12 + 1) < iVar6);
  }
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_188,L"TextureIES_");
  iVar6 = (this->LightsIES).ArrayNum;
  uVar19 = uVar13;
  uVar21 = uVar13;
  if (0 < iVar6) {
    do {
      uVar12 = (uint)uVar19;
      uVar5 = uVar17;
      if ((int)uVar12 < iVar6) {
        uVar5 = ~uVar12 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar14 = (this->LightsIES).AllocatorInstance.Data + uVar21 + 0x48;
      if ((1 < *(int *)(pFVar14 + 8)) &&
         (::FName::FName(&local_2a8,*(wchar_t **)&pFVar14->field_0x0), local_2a8 == (FName)0x0)) {
        ::FString::ConcatFF((FString *)&local_408,&local_188,(FString *)pFVar14);
        if (pFVar14 != (FScriptContainerElement *)&local_408) {
          if (*(void **)&pFVar14->field_0x0 != (void *)0x0) {
            FMemory::Free(*(void **)&pFVar14->field_0x0);
          }
          *(void **)&pFVar14->field_0x0 = local_408;
          *(undefined4 *)(pFVar14 + 8) = (undefined4)local_400;
          *(undefined4 *)(pFVar14 + 0xc) = local_400._4_4_;
          local_400 = 0;
          local_408 = (void *)0x0;
        }
        if (local_408 != (void *)0x0) {
          FMemory::Free(local_408);
        }
      }
      iVar6 = (this->LightsIES).ArrayNum;
      uVar19 = (ulonglong)(uVar12 + 1);
      uVar21 = uVar21 + 0x68;
    } while ((int)(uVar12 + 1) < iVar6);
  }
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  iVar6 = (this->Meshes).ArrayNum;
  local_128.Elements._52_4_ = 0;
  local_128.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_128.Elements._0_8_ = 0;
  local_128.Elements._8_8_ = 0;
  local_128.Elements._32_8_ = 0;
  local_128.Elements._40_4_ = 0;
  local_128.Elements._44_4_ = 0x80;
  local_128.Elements._48_4_ = 0xffffffff;
  local_128.HashSize = 0;
  local_4b0 = 0;
  uVar19 = uVar13;
  local_128.Elements._8_4_ = uVar16;
  if (0 < iVar6) {
    do {
      uVar16 = (uint)uVar13;
      uVar17 = 0;
      if ((int)uVar16 < (this->Meshes).ArrayNum) {
        uVar17 = ~uVar16 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (0 < *(int *)((this->Meshes).AllocatorInstance.Data + uVar19 + 0x18)) {
        local_d8.Elements._0_8_ = 0;
        local_d8.Elements._8_8_ = 0;
        uVar17 = 0;
        if ((int)uVar16 < (this->Meshes).ArrayNum) {
          uVar17 = ~uVar16 >> 0x1f;
        }
        local_d8.Elements._32_8_ = 0;
        local_d8.Elements._40_4_ = 0;
        local_d8.Elements._44_4_ = 0x80;
        local_d8.Elements._48_4_ = 0xffffffff;
        local_d8.Elements._52_4_ = 0;
        local_d8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
        local_d8.HashSize = 0;
        if ((uVar17 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar14 = (this->Meshes).AllocatorInstance.Data;
        iVar6 = *(int *)(pFVar14 + uVar19 + 0x38);
        pbVar15 = *(bool **)(pFVar14 + uVar19 + 0x30);
        pbVar22 = pbVar15 + (longlong)iVar6 * 0x10;
        uVar17 = local_4b0;
        while( true ) {
          if (*(int *)(pFVar14 + uVar19 + 0x38) != iVar6) {
            local_4b8[0] = 0;
            `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_4b8);
          }
          this = local_490;
          if (pbVar15 == pbVar22) break;
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                    (&local_128,(FString *)(local_2d8 + 4),pbVar15);
          uVar17 = uVar17 + 1;
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                    (&local_d8,(FString *)local_2d0,pbVar15);
          pbVar15 = pbVar15 + 0x10;
        }
        uVar5 = 0;
        if ((int)uVar16 < (local_490->Meshes).ArrayNum) {
          uVar5 = ~uVar16 >> 0x1f;
        }
        local_4b0 = uVar17;
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (local_d8.Elements._8_4_ - local_d8.Elements._52_4_ !=
            *(int *)((this->Meshes).AllocatorInstance.Data + uVar19 + 0x38)) {
          uVar17 = 0;
          if ((int)uVar16 < (this->Meshes).ArrayNum) {
            uVar17 = ~uVar16 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar14 = (this->Meshes).AllocatorInstance.Data;
          DestructItems<FString,int>
                    (*(FString **)(pFVar14 + uVar19 + 0x30),*(int *)(pFVar14 + uVar19 + 0x38));
          *(undefined4 *)(pFVar14 + uVar19 + 0x38) = 0;
          if (*(int *)(pFVar14 + uVar19 + 0x3c) != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,0,(ForAnyElementType *)(pFVar14 + uVar19 + 0x30),0,
                       (int *)(pFVar14 + uVar19 + 0x3c));
          }
        }
        local_d8.HashSize = 0;
        if (local_d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_d8.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_d8.Elements);
      }
      iVar6 = (this->Meshes).ArrayNum;
      uVar13 = (ulonglong)(uVar16 + 1);
      uVar19 = uVar19 + 0xa8;
    } while ((int)(uVar16 + 1) < iVar6);
    uVar13 = (ulonglong)local_4b0;
  }
  lVar18 = 0;
  local_4a8 = local_128.Elements._8_4_ - local_128.Elements._52_4_;
  uVar17 = 0;
  if (0 < iVar6) {
    local_490 = (FAsset *)0x0;
    do {
      pFVar23 = local_490;
      iVar6 = 0;
      uVar5 = 0;
      uVar16 = uVar5;
      if ((int)uVar17 < (this->Meshes).ArrayNum) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (0 < *(int *)((this->Meshes).AllocatorInstance.Data + lVar18 + 0x18)) {
        if (local_4a8 != (int)uVar13) {
          uVar16 = uVar5;
          if ((int)uVar17 < (this->Meshes).ArrayNum) {
            uVar16 = ~uVar17 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar14 = (this->Meshes).AllocatorInstance.Data;
          DestructItems<FString,int>
                    (*(FString **)(pFVar14 + lVar18 + 0x30),*(int *)(pFVar14 + lVar18 + 0x38));
          *(undefined4 *)(pFVar14 + lVar18 + 0x38) = 0;
          if (*(int *)(pFVar14 + lVar18 + 0x3c) != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,0,(ForAnyElementType *)(pFVar14 + lVar18 + 0x30),0,
                       (int *)(pFVar14 + lVar18 + 0x3c));
          }
        }
        uVar16 = uVar5;
        if ((int)uVar17 < (this->Meshes).ArrayNum) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar14 = (this->Meshes).AllocatorInstance.Data;
        uVar16 = uVar5;
        if (0 < *(int *)(pFVar14 + lVar18 + 0x18)) {
          uVar16 = *(uint *)(*(longlong *)(pFVar14 + lVar18 + 0x10) + 0x88);
        }
        uVar12 = uVar5;
        if ((int)uVar17 < (this->Meshes).ArrayNum) {
          uVar12 = ~uVar17 >> 0x1f;
        }
        local_4b4 = uVar16;
        if ((uVar12 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (uVar16 != *(uint *)((this->Meshes).AllocatorInstance.Data + lVar18 + 0x38)) {
          uVar16 = uVar5;
          if ((int)uVar17 < (this->Meshes).ArrayNum) {
            uVar16 = ~uVar17 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar14 = (this->Meshes).AllocatorInstance.Data;
          DestructItems<FString,int>
                    (*(FString **)(pFVar14 + lVar18 + 0x30),*(int *)(pFVar14 + lVar18 + 0x38));
          *(undefined4 *)(pFVar14 + lVar18 + 0x38) = 0;
          uVar16 = local_4b4;
          if (*(int *)(pFVar14 + lVar18 + 0x3c) != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,0,(ForAnyElementType *)(pFVar14 + lVar18 + 0x30),0,
                       (int *)(pFVar14 + lVar18 + 0x3c));
            uVar16 = local_4b4;
          }
        }
        if ((int)uVar17 < (this->Meshes).ArrayNum) {
          uVar5 = ~uVar17 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (*(int *)((this->Meshes).AllocatorInstance.Data + lVar18 + 0x38) == 0) {
          if (0 < (int)uVar16) {
            local_2a0 = (longlong)(int)uVar17 * 0xa8;
            do {
              uVar16 = 0;
              if ((int)uVar17 < (this->Meshes).ArrayNum) {
                uVar16 = ~uVar17 >> 0x1f;
              }
              if ((uVar16 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pFVar14 = (this->Meshes).AllocatorInstance.Data;
              ::FString::PrintfImpl(&local_158,L"%d");
              uVar16 = 0;
              if ((int)uVar17 < (this->Meshes).ArrayNum) {
                uVar16 = ~uVar17 >> 0x1f;
              }
              if ((uVar16 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              ::FString::ConcatFC(&local_168,
                                  (FString *)
                                  ((this->Meshes).AllocatorInstance.Data + local_2a0 + 0x90),L"_");
              ::FString::ConcatFF(&local_178,&local_168,&local_158);
              ::FString::ConcatFC(&local_4a0,&local_178,L"_MorphTarget");
              if (((*(FString **)(pFVar14 + lVar18 + 0x30) <= &local_4a0) &&
                  (&local_4a0 <
                   *(FString **)(pFVar14 + lVar18 + 0x30) + *(int *)(pFVar14 + lVar18 + 0x3c))) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              iVar7 = *(int *)(pFVar14 + lVar18 + 0x38);
              if (iVar7 == *(int *)(pFVar14 + lVar18 + 0x3c)) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x810,(ForAnyElementType *)(pFVar14 + lVar18 + 0x30),
                                   (int *)(pFVar14 + lVar18 + 0x3c));
              }
              *(int *)(pFVar14 + lVar18 + 0x38) = iVar7 + 1;
              puVar11 = (undefined8 *)
                        ((longlong)iVar7 * 0x10 + *(longlong *)(pFVar14 + lVar18 + 0x30));
              *puVar11 = 0;
              *puVar11 = local_4a0.Data.AllocatorInstance.Data;
              *(int *)(puVar11 + 1) = local_4a0.Data.ArrayNum;
              *(int *)((longlong)puVar11 + 0xc) = local_4a0.Data.ArrayMax;
              local_4a0.Data.ArrayNum = 0;
              local_4a0.Data.ArrayMax = 0;
              local_4a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_178.Data.AllocatorInstance.Data);
              }
              if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_168.Data.AllocatorInstance.Data);
              }
              if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_158.Data.AllocatorInstance.Data);
              }
              iVar6 = iVar6 + 1;
              pFVar23 = local_490;
            } while (iVar6 < (int)local_4b4);
          }
          uVar16 = 0;
          if ((int)uVar17 < (this->Meshes).ArrayNum) {
            uVar16 = ~uVar17 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          this_00 = (FMesh *)((this->Meshes).AllocatorInstance.Data + lVar18);
          bVar4 = FMesh::IsValidPrivate(this_00);
          if ((TOptional<bool> *)local_4ac != &this_00->bIsValidCache) {
            (this_00->bIsValidCache).TypedValue = bVar4;
            (this_00->bIsValidCache).bIsSet = true;
          }
        }
      }
      uVar13 = (ulonglong)local_4b0;
      local_490 = (FAsset *)((longlong)&(pFVar23->Name).Data.AllocatorInstance.Data + 1);
      uVar17 = uVar17 + 1;
      lVar18 = lVar18 + 0xa8;
    } while ((int)uVar17 < (this->Meshes).ArrayNum);
  }
  local_128.HashSize = 0;
  if (local_128.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_128.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_128.Elements);
  return;
}

// GetRootNodes @ 14e63db70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
GLTF::FAsset::GetRootNodes(FAsset *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  FScriptContainerElement *pFVar7;
  ForAnyElementType FVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint *puVar16;
  ForElementType<unsigned_int> FVar17;
  FScriptContainerElement *pFVar18;
  undefined1 auStackY_168 [32];
  uint local_118;
  undefined1 local_114 [4];
  uint local_110;
  undefined1 local_10c [12];
  uint local_100;
  uint uStack_fc;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_f8;
  undefined4 local_f0;
  uint uStack_ec;
  uint uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  int local_dc;
  uint *local_d8;
  TArray<int,TSizedDefaultAllocator<32>_> *local_d0;
  longlong *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_c0;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  uVar11 = (this->Nodes).ArrayNum;
  uVar14 = 0;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  local_10c._4_8_ = this;
  local_d0 = param_1;
  if (uVar11 == 0) goto LAB_14e63ddf4;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar11);
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar11);
  if (uVar11 < 4) {
    uVar11 = 1;
  }
  else {
    uVar9 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    local_e0 = (undefined4)lVar2;
    uVar11 = 1 << ((byte)lVar2 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar11 <= (int)local_50)) goto LAB_14e63ddf4;
  local_50 = uVar11;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar11 != 0) {
    uVar13 = uVar11;
    if (uVar11 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar13 = 0;
        goto LAB_14e63dc56;
      }
    }
    else {
LAB_14e63dc56:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar13,4);
    }
    if (0 < (int)uVar11) {
      uVar15 = (ulonglong)uVar11;
      uVar9 = uVar14;
      do {
        FVar8.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar8.Data = local_58.Data;
        }
        uVar6 = uVar9 & (longlong)(int)uVar11 - 1U;
        uVar9 = uVar9 + 1;
        *(undefined4 *)(FVar8.Data + uVar6 * 4) = 0xffffffff;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
  }
  if (local_50 != 0) {
    pTStack_f8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_100 = 0;
    uStack_fc = 1;
    uStack_ec = 0;
    uStack_e8 = 0;
    uVar9 = uVar14;
    if (local_70 != 0) {
      FVar17 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar17 = local_78;
      }
      uVar11 = *(uint *)FVar17;
      uVar15 = uVar14;
      while (uVar11 == 0) {
        uStack_e8 = (int)uVar15 + 0x20;
        uVar15 = (ulonglong)uStack_e8;
        iVar5 = (int)uVar9;
        local_100 = iVar5 + 1;
        uVar9 = (ulonglong)local_100;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_100)
        goto LAB_14e63dd61;
        uVar11 = ((uint *)((longlong)FVar17 + 4))[iVar5];
      }
      uStack_fc = -uVar11 & uVar11;
      uVar9 = (ulonglong)uStack_fc * 2 + 1;
      lVar2 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      local_dc = (int)lVar2;
      uStack_ec = local_dc + -1 + (int)uVar15;
      uVar9 = (ulonglong)uStack_ec;
      if ((int)local_70 < (int)uStack_ec) {
LAB_14e63dd61:
        uVar9 = (ulonglong)local_70;
        uStack_ec = local_70;
      }
    }
    local_f0 = 0xffffffff;
    local_c8 = (longlong *)local_98;
    local_c0._padding_ = CONCAT44(uStack_fc,local_100);
    local_c0.CurrentBitIndex = uStack_ec;
    local_c0.UnvisitedBitMask = 0xffffffff;
    local_c0._28_4_ = uStack_e4;
    local_c0.BaseBitIndex = uStack_e8;
    local_c0.Array = pTStack_f8;
    if ((int)uVar9 < (int)local_70) {
      do {
        puVar16 = (uint *)((longlong)(int)uVar9 * 0x10 + *local_c8);
        uVar11 = local_50 - 1 & *puVar16;
        puVar16[3] = uVar11;
        FVar8.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar8.Data = local_58.Data;
        }
        uVar15 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar11;
        puVar16[2] = *(uint *)(FVar8.Data + uVar15 * 4);
        *(int *)(FVar8.Data + uVar15 * 4) = (int)uVar9;
        local_c0.UnvisitedBitMask = local_c0.UnvisitedBitMask & ~local_c0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_c0);
        uVar9 = (ulonglong)(uint)local_c0.CurrentBitIndex;
      } while (local_c0.CurrentBitIndex < (local_c0.Array)->NumBits);
    }
  }
LAB_14e63ddf4:
  uVar9 = uVar14;
  if (0 < (this->Nodes).ArrayNum) {
    do {
      uVar13 = (uint)uVar14;
      uVar11 = 0;
      if ((int)uVar13 < (this->Nodes).ArrayNum) {
        uVar11 = ~uVar13 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar18 = (this->Nodes).AllocatorInstance.Data;
      puVar12 = *(uint **)(pFVar18 + uVar9 + 0x70);
      iVar5 = *(int *)(pFVar18 + uVar9 + 0x78);
      puVar16 = puVar12 + iVar5;
LAB_14e63de80:
      if (*(int *)(pFVar18 + uVar9 + 0x78) != iVar5) {
        local_114[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_114);
      }
      if (puVar12 != puVar16) {
        local_110 = *puVar12;
        if (local_98._8_4_ != local_64) {
          FVar8.Data = local_60;
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            FVar8.Data = local_58.Data;
          }
          uVar11 = *(uint *)(FVar8.Data + (ulonglong)(local_50 - 1 & local_110) * 4);
          while (uVar11 != 0xffffffff) {
            pFVar10 = (FScriptContainerElement *)(local_98._0_8_ + (longlong)(int)uVar11 * 0x10);
            if (*(uint *)pFVar10 == local_110) {
              pFVar7 = pFVar10 + 4;
              if (pFVar10 == (FScriptContainerElement *)0x0) {
                pFVar7 = (FScriptContainerElement *)0x0;
              }
              if (pFVar7 != (FScriptContainerElement *)0x0) {
                *(uint *)pFVar7 = *(uint *)pFVar7 + 1;
                puVar12 = puVar12 + 1;
                goto LAB_14e63de80;
              }
              break;
            }
            uVar11 = *(uint *)(pFVar10 + 8);
          }
        }
        local_d8 = &local_110;
        TSet<TTuple<int,unsigned_int>,TDefaultMapHashableKeyFuncs<int,unsigned_int,0>,FDefaultSetAllocator>
        ::Emplace<TKeyInitializer<int_const_&>_>
                  ((TSet<TTuple<int,unsigned_int>,TDefaultMapHashableKeyFuncs<int,unsigned_int,0>,FDefaultSetAllocator>
                    *)local_98,(TKeyInitializer<int_const_&> *)local_10c,(bool *)&local_d8);
        puVar12 = puVar12 + 1;
        *(undefined4 *)(local_98._0_8_ + (longlong)(int)local_10c._0_4_ * 0x10 + 4) = 1;
        goto LAB_14e63de80;
      }
      uVar14 = (ulonglong)(uVar13 + 1);
      uVar9 = uVar9 + 0x260;
      param_1 = local_d0;
      this = (FAsset *)local_10c._4_8_;
    } while ((int)(uVar13 + 1) <
             ((TArray<GLTF::FNode,TSizedDefaultAllocator<32>_> *)(local_10c._4_8_ + 0x60))->ArrayNum
            );
  }
  pFVar18 = (FScriptContainerElement *)0x0;
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_1->AllocatorInstance,0,piVar1);
  }
  local_118 = 0;
  pFVar10 = pFVar18;
  if ((this->Nodes).ArrayNum < 1) {
LAB_14e63e0ad:
    local_50 = 0;
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data);
    }
    TSparseArray<TSparseSetElement<TTuple<int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_98);
    return;
  }
LAB_14e63dfb2:
  if (local_98._8_4_ != local_64) {
    FVar8.Data = local_60;
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FVar8.Data = local_58.Data;
    }
    for (iVar5 = *(int *)(FVar8.Data + ((ulonglong)(local_50 - 1) & (ulonglong)pFVar10) * 4);
        iVar5 != -1; iVar5 = *(int *)(local_98._0_8_ + (longlong)iVar5 * 0x10 + 8)) {
      if (*(int *)(local_98._0_8_ + (longlong)iVar5 * 0x10) == (int)pFVar10) {
        FVar8.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar8.Data = local_58.Data;
        }
        uVar11 = *(uint *)(FVar8.Data + (ulonglong)(local_50 - 1 & local_118) * 4);
        pFVar10 = pFVar18;
        if (uVar11 == 0xffffffff) goto LAB_14e63e13e;
        goto LAB_14e63e120;
      }
    }
  }
  pFVar10 = (param_1->AllocatorInstance).Data;
  if (((pFVar10 <= (FScriptContainerElement *)&local_118) &&
      ((FScriptContainerElement *)&local_118 < pFVar10 + (longlong)*piVar1 * 4)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = param_1->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_1->AllocatorInstance,piVar1);
  }
  param_1->ArrayNum = iVar5 + 1;
  *(uint *)((param_1->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_118;
  goto LAB_14e63e096;
  while (uVar11 = *(uint *)(pFVar10 + 8), pFVar10 = pFVar18, uVar11 != 0xffffffff) {
LAB_14e63e120:
    pFVar10 = (FScriptContainerElement *)(local_98._0_8_ + (longlong)(int)uVar11 * 0x10);
    if (*(uint *)pFVar10 == local_118) {
      if (pFVar10 != (FScriptContainerElement *)0x0) goto LAB_14e63e164;
      break;
    }
  }
LAB_14e63e13e:
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14e63e164:
  if ((*(uint *)(pFVar10 + 4) != 1) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8573010569722855015>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTF\\GLTFAsset.cpp"
                         ,0x199,"VisitCount[NodeIndex] == 1"), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14e63e096:
  local_118 = local_118 + 1;
  pFVar10 = (FScriptContainerElement *)(ulonglong)local_118;
  if ((this->Nodes).ArrayNum <= (int)local_118) goto LAB_14e63e0ad;
  goto LAB_14e63dfb2;
}

// ValidationCheck @ 14e65d0f0

EValidationCheck __thiscall GLTF::FAsset::ValidationCheck(FAsset *this)

{
  char cVar1;
  bool bVar2;
  FMesh *this_00;
  FMesh *pFVar3;
  FNode *pFVar4;
  FMesh *pFVar5;
  FNode *pFVar6;
  EValidationCheck EVar7;
  FAsset *local_res8;
  
  this_00 = (FMesh *)(this->Meshes).AllocatorInstance.Data;
  pFVar5 = this_00 + (this->Meshes).ArrayNum;
  for (; pFVar3 = (FMesh *)0x0, this_00 != pFVar5; this_00 = this_00 + 1) {
    if ((this_00->bIsValidCache).bIsSet == false) {
      cVar1 = FMesh::IsValidPrivate(this_00);
    }
    else {
      cVar1 = (this_00->bIsValidCache).TypedValue;
    }
    pFVar3 = this_00;
    if (cVar1 == '\0') break;
  }
  pFVar4 = (FNode *)(this->Nodes).AllocatorInstance.Data;
  EVar7 = (EValidationCheck)(pFVar3 != (FMesh *)0x0);
  pFVar6 = pFVar4 + (this->Nodes).ArrayNum;
  local_res8 = this;
  while( true ) {
    if (pFVar4 == pFVar6) {
      return EVar7;
    }
    bVar2 = `GLTF::FAsset::ValidationCheck'::__l6::<lambda_2>::operator()(&local_res8,pFVar4);
    if (bVar2) break;
    pFVar4 = pFVar4 + 1;
  }
  if (pFVar4 == (FNode *)0x0) {
    return EVar7;
  }
  return EVar7 | InvalidNodePresent;
}

