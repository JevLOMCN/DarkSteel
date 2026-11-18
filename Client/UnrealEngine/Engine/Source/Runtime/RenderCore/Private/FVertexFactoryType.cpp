// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 8

// FVertexFactoryType @ 145ec4150

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FVertexFactoryType * __thiscall
FVertexFactoryType::FVertexFactoryType
          (FVertexFactoryType *this,wchar_t *param_1,wchar_t *param_2,EVertexFactoryFlags param_3,
          _func___cdecl_FVertexFactoryShaderParameters_ptr_EShaderFrequency_FShaderParameterMap_ptr
          *param_4,_func___cdecl_FTypeLayoutDesc_ptr_EShaderFrequency *param_5,
          _func___cdecl_void_EShaderFrequency_FVertexFactoryShaderParameters_ptr_FSceneInterface_ptr_FSceneView_ptr_FMeshMaterialShader_ptr_EVertexInputStreamType_Type_FVertexFactory_ptr_FMeshBatchElement_ptr_FMeshDrawSingleShaderBindings_ptr_TArray<FVertexInputStream,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>_>_ptr
          *param_6,_func___cdecl_void_EVertexInputStreamType_TArray<FVertexElement,TFixedAllocator<17>_>_ptr
                   *param_7,
          _func___cdecl_bool_FVertexFactoryShaderPermutationParameters_ptr *param_8)

{
  FString *pFVar1;
  TLinkedList<FVertexFactoryType_*> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  size_t sVar7;
  FVertexFactoryType *pFVar8;
  FString *pFVar9;
  TSet<TTuple<FHashedName,FVertexFactoryType_*>,TDefaultMapHashableKeyFuncs<FHashedName,FVertexFactoryType_*,0>,FDefaultSetAllocator>
  *this_00;
  TArray<FVertexFactoryType_*,TSizedDefaultAllocator<32>_> *pTVar10;
  wchar_t *pwVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  FVertexFactoryType *local_d8;
  FString local_d0;
  wchar_t *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  FString local_a8;
  FString local_98;
  FScriptContainerElement *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  FHashedName *local_78;
  _func___cdecl_FVertexFactoryShaderParameters_ptr_EShaderFrequency_FShaderParameterMap_ptr
  **local_70;
  TStringView<wchar_t> local_68;
  FString local_58;
  FString local_48;
  TStringView<wchar_t> local_38;
  
  pFVar1 = &this->ShaderFwdFilename;
  this->Name = param_1;
  this->ShaderFilename = param_2;
  this->_padding_ = (longlong)&___7FVertexFactoryType__6B_;
  iVar6 = 0;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShaderFwdFilename).Data.ArrayNum = 0;
  (this->ShaderFwdFilename).Data.ArrayMax = 0;
  ::FName::FName(&this->TypeName,param_1);
  FHashedName::FHashedName(&this->HashedName,&this->TypeName);
  this->ConstructParameters = param_4;
  this->GetParameterTypeLayout = param_5;
  this->GetParameterTypeElementShaderBindings = param_6;
  this->Flags = param_3;
  this->GetPSOPrecacheVertexFetchElements = param_7;
  this->ShouldCacheRef = param_8;
  iVar15 = 0;
  (this->GlobalListLink)._padding_ = 0;
  (this->GlobalListLink)._padding_ = 0;
  (this->GlobalListLink).Element = this;
  iStack_b0 = iVar15;
  local_b8 = param_2;
  if (param_2 != (wchar_t *)0x0) {
    sVar7 = wcslen(param_2);
    iStack_b0 = (int)sVar7;
  }
  local_68._12_4_ = uStack_ac;
  local_68.Size = iStack_b0;
  local_68.DataPtr = local_b8;
  bVar4 = CheckVirtualShaderFilePath
                    (&local_68,(TArray<FShaderCompilerError,TSizedDefaultAllocator<32>_> *)0x0);
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("CheckVirtualShaderFilePath(InShaderFilename)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\VertexFactory.cpp"
                         ,0x85,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FVertexFactoryType *)(*pcVar3)();
    return pFVar8;
  }
  ::FString::FString(&local_a8,param_2);
  pFVar9 = FPaths::GetExtension(&local_58,&local_a8,false);
  if ((pFVar9->Data).ArrayNum == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
  iVar5 = FGenericPlatformStricmp::Stricmp(pwVar11,L"ush");
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if ((iVar5 != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("FPaths::GetExtension(InShaderFilename) == L\"ush\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\VertexFactory.cpp"
                         ,0x89,
                         L"Incorrect virtual shader path extension for vertex factory shader header \'%s\': Only .ush files should be included."
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FVertexFactoryType *)(*pcVar3)();
    return pFVar8;
  }
  if ((this->Flags & IncludesFwdShader) != None) {
    ::FString::FString(&local_98,param_2);
    pFVar9 = FPaths::GetBaseFilename(&local_48,&local_98,false);
    ::FString::ConcatFC(&local_d0,pFVar9,L"Fwd.ush");
    if (pFVar1 != &local_d0) {
      pFVar12 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar12 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar12);
      }
      (pFVar1->Data).AllocatorInstance.Data = local_d0.Data.AllocatorInstance.Data;
      (this->ShaderFwdFilename).Data.ArrayNum = local_d0.Data.ArrayNum;
      (this->ShaderFwdFilename).Data.ArrayMax = local_d0.Data.ArrayMax;
      local_d0.Data.ArrayNum = 0;
      local_d0.Data.ArrayMax = 0;
      local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    local_88 = (pFVar1->Data).AllocatorInstance.Data;
    iVar5 = (this->ShaderFwdFilename).Data.ArrayNum;
    iStack_80 = iVar5 + -1;
    if (iVar5 == 0) {
      iStack_80 = iVar15;
    }
    local_38._12_4_ = uStack_7c;
    local_38.Size = iStack_80;
    local_38.DataPtr = (wchar_t *)local_88;
    bVar4 = CheckVirtualShaderFilePath
                      (&local_38,(TArray<FShaderCompilerError,TSizedDefaultAllocator<32>_> *)0x0);
    if ((!bVar4) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("CheckVirtualShaderFilePath(ShaderFwdFilename)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\VertexFactory.cpp"
                           ,0x8e,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FVertexFactoryType *)(*pcVar3)();
      return pFVar8;
    }
  }
  if ((bVertexFactoriesInitialized != false) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bVertexFactoriesInitialized",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\VertexFactory.cpp"
                         ,0x93,
                         L"VF type was loaded after engine init, use ELoadingPhase::PostConfigInit on your module to cause it to load earlier."
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FVertexFactoryType *)(*pcVar3)();
    return pFVar8;
  }
  pTVar2 = &this->GlobalListLink;
  if (GVFTypeList != (TLinkedList<FVertexFactoryType_*> *)0x0) {
    GVFTypeList->_padding_ = (longlong)pTVar2;
  }
  pTVar2->_padding_ = (longlong)GVFTypeList;
  (this->GlobalListLink)._padding_ = (longlong)&GVFTypeList;
  GVFTypeList = pTVar2;
  this_00 = (TSet<TTuple<FHashedName,FVertexFactoryType_*>,TDefaultMapHashableKeyFuncs<FHashedName,FVertexFactoryType_*,0>,FDefaultSetAllocator>
             *)GetVFTypeMap();
  local_78 = &this->HashedName;
  local_70 = &param_4;
  param_4 = (_func___cdecl_FVertexFactoryShaderParameters_ptr_EShaderFrequency_FShaderParameterMap_ptr
             *)this;
  TSet<TTuple<FHashedName,FVertexFactoryType_*>,TDefaultMapHashableKeyFuncs<FHashedName,FVertexFactoryType_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FHashedName_const_&,FVertexFactoryType_*_&&>_>
            (this_00,(TPairInitializer<FHashedName_const_&,FVertexFactoryType_*_&&> *)
                     &stack0x00000020,(bool *)&local_78);
  if ((this->Flags & UsedWithMaterials) != None) {
    pTVar10 = GetSortedMaterialVertexFactoryTypes();
    uVar13 = pTVar10->ArrayNum;
    pFVar12 = (pTVar10->AllocatorInstance).Data;
    if (0 < (int)uVar13) {
      do {
        uVar14 = uVar13 >> 1;
        FHashedName::FHashedName
                  ((FHashedName *)&param_5,
                   (FHashedName *)
                   (*(longlong *)(pFVar12 + (longlong)(int)(uVar14 + iVar6) * 8) + 0x30));
        iVar15 = iVar6;
        if (param_5 < (_func___cdecl_FTypeLayoutDesc_ptr_EShaderFrequency *)(this->HashedName).Hash)
        {
          iVar15 = uVar14 + iVar6 + (uVar13 & 1);
        }
        uVar13 = uVar14;
        iVar6 = iVar15;
      } while (uVar14 != 0);
    }
    pFVar12 = (pTVar10->AllocatorInstance).Data;
    local_d8 = this;
    if (((pFVar12 <= (FScriptContainerElement *)&local_d8) &&
        ((FScriptContainerElement *)&local_d8 < pFVar12 + (longlong)pTVar10->ArrayMax * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FVertexFactoryType *)(*pcVar3)();
      return pFVar8;
    }
    iVar6 = pTVar10->ArrayNum;
    if (iVar6 == pTVar10->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar10->AllocatorInstance,&pTVar10->ArrayMax);
    }
    pFVar12 = (pTVar10->AllocatorInstance).Data;
    pTVar10->ArrayNum = iVar6 + 1;
    pFVar12 = pFVar12 + (longlong)iVar15 * 8;
    memmove(pFVar12 + 8,pFVar12,(longlong)(iVar6 - iVar15) << 3);
    *(FVertexFactoryType **)((pTVar10->AllocatorInstance).Data + (longlong)iVar15 * 8) = local_d8;
  }
  NumVertexFactories = NumVertexFactories + 1;
  return this;
}

// ~FVertexFactoryType @ 145ec4750

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FVertexFactoryType::~FVertexFactoryType(FVertexFactoryType *this)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  longlong *plVar3;
  ulong64 uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  TSet<TTuple<FHashedName,FVertexFactoryType_*>,TDefaultMapHashableKeyFuncs<FHashedName,FVertexFactoryType_*,0>,FDefaultSetAllocator>
  *this_00;
  TArray<FVertexFactoryType_*,TSizedDefaultAllocator<32>_> *pTVar9;
  uint uVar10;
  <lambda_1> local_res8;
  
  this->_padding_ = (longlong)&___7FVertexFactoryType__6B_;
  lVar2 = (this->GlobalListLink)._padding_;
  if (lVar2 != 0) {
    *(longlong *)(lVar2 + 8) = (this->GlobalListLink)._padding_;
  }
  plVar3 = (longlong *)(this->GlobalListLink)._padding_;
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (this->GlobalListLink)._padding_;
  }
  (this->GlobalListLink)._padding_ = 0;
  (this->GlobalListLink)._padding_ = 0;
  this_00 = (TSet<TTuple<FHashedName,FVertexFactoryType_*>,TDefaultMapHashableKeyFuncs<FHashedName,FVertexFactoryType_*,0>,FDefaultSetAllocator>
             *)GetVFTypeMap();
  if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
    uVar4 = (this->HashedName).Hash;
    iVar7 = TSet<TTuple<FHashedName,FVertexFactoryType_*>,TDefaultMapHashableKeyFuncs<FHashedName,FVertexFactoryType_*,0>,FDefaultSetAllocator>
            ::RemoveImpl<FHashedName>
                      (this_00,(int)(uVar4 >> 0x20) * 0x17 + (int)uVar4,&this->HashedName);
    if (iVar7 == 1) goto LAB_145ec47f1;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("GetVFTypeMap().Remove(HashedName) == 1",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\VertexFactory.cpp"
                     ,0xa6,L"");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_145ec47f1:
  if ((this->Flags & UsedWithMaterials) != None) {
    pTVar9 = GetSortedMaterialVertexFactoryTypes();
    uVar8 = Algo::
            BinarySearchBy<TArray<FVertexFactoryType_*,TSizedDefaultAllocator<32>_>,FHashedName,_FVertexFactoryType::~FVertexFactoryType_::__l12::<lambda_1>,TLess<void>_>
                      (pTVar9,&this->HashedName,local_res8,(TLess<void>)local_res8);
    if (uVar8 == 0xffffffff) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("SortedIndex != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\VertexFactory.cpp"
                         ,0xac,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    uVar10 = 0;
    if ((int)uVar8 < pTVar9->ArrayNum) {
      uVar10 = ~uVar8 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar1 = (pTVar9->AllocatorInstance).Data + (longlong)(int)uVar8 * 8;
    iVar7 = pTVar9->ArrayNum + ~uVar8;
    if (iVar7 != 0) {
      memmove(pFVar1,pFVar1 + 8,(longlong)iVar7 << 3);
    }
    pTVar9->ArrayNum = pTVar9->ArrayNum + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&pTVar9->AllocatorInstance,pTVar9->ArrayNum,&pTVar9->ArrayMax);
  }
  if (NumVertexFactories == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumVertexFactories > 0u",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\VertexFactory.cpp"
                       ,0xb0,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  NumVertexFactories = NumVertexFactories - 1;
  pFVar1 = (this->ShaderFwdFilename).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// CheckManualVertexFetchSupport @ 145ec6440

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl FVertexFactoryType::CheckManualVertexFetchSupport(Type param_1)

{
  EShaderPlatform EVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  if (param_1 == Num) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InFeatureLevel != ERHIFeatureLevel::Num",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\VertexFactory.cpp"
                       ,0xb6,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  else if ((int)param_1 < 2) {
    return false;
  }
  EVar1 = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)param_1];
  if ((FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0x2ce,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bSupportsManualVertexFetch == 0) {
    return false;
  }
  return true;
}

// GetSortedMaterialTypes @ 145ec8e50

TArray<FVertexFactoryType_*,TSizedDefaultAllocator<32>_> * __cdecl
FVertexFactoryType::GetSortedMaterialTypes(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`GetSortedMaterialVertexFactoryTypes'::__l2::_dynamic_atexit_destructor_for__Types__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &Types;
}

// GetSourceHash @ 145ec8ed0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FSHAHash * __thiscall
FVertexFactoryType::GetSourceHash(FVertexFactoryType *this,EShaderPlatform param_1)

{
  FSHAHash *pFVar1;
  
  pFVar1 = GetShaderFileHash(this->ShaderFilename,param_1);
  return pFVar1;
}

// GetTypeList @ 145eca180

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TLinkedList<FVertexFactoryType_*> ** __cdecl FVertexFactoryType::GetTypeList(void)

{
  return &GVFTypeList;
}

// GetVFByName @ 145eca190

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FVertexFactoryType * __cdecl FVertexFactoryType::GetVFByName(FHashedName *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  TMap<FHashedName,FVertexFactoryType_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHashedName,FVertexFactoryType_*,0>_>
  *pTVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  
  pTVar4 = GetVFTypeMap();
  uVar2 = param_1->Hash;
  if (*(int *)&pTVar4->field_0x8 != *(int *)&pTVar4->field_0x34) {
    puVar6 = *(undefined1 **)&pTVar4->field_0x40;
    if (*(undefined1 **)&pTVar4->field_0x40 == (undefined1 *)0x0) {
      puVar6 = &pTVar4->field_0x38;
    }
    iVar3 = *(int *)(puVar6 + ((uVar2 >> 0x20) * 0x17 + uVar2 &
                              (ulonglong)(*(int *)&pTVar4->field_0x48 - 1)) * 4);
    if (iVar3 != -1) {
      do {
        lVar1 = *(longlong *)pTVar4 + (longlong)iVar3 * 0x18;
        if (*(ulonglong *)(*(longlong *)pTVar4 + (longlong)iVar3 * 0x18) == uVar2) {
          puVar5 = (undefined8 *)(lVar1 + 8);
          if (lVar1 == 0) {
            puVar5 = (undefined8 *)0x0;
          }
          if (puVar5 == (undefined8 *)0x0) {
            return (FVertexFactoryType *)0x0;
          }
          return (FVertexFactoryType *)*puVar5;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (FVertexFactoryType *)0x0;
}

// Initialize @ 145eca440

void __cdecl
FVertexFactoryType::Initialize
          (TMap<FString,TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_>,0>_>
           *param_1)

{
  bVertexFactoriesInitialized = true;
  return;
}

