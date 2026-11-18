// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 13

// FShaderPipelineType @ 145dee9e0

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

FShaderPipelineType * __thiscall
FShaderPipelineType::FShaderPipelineType
          (FShaderPipelineType *this,wchar_t *param_1,FShaderType *param_2,FShaderType *param_3,
          FShaderType *param_4,bool param_5,bool param_6)

{
  TLinkedList<FShaderPipelineType_*> *pTVar1;
  EShaderTypeForDynamicCast EVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FShaderPipelineType *pFVar6;
  size_t sVar7;
  FScriptContainerElement *pFVar8;
  int *piVar9;
  int iVar10;
  ulonglong uVar11;
  TArray<FShaderPipelineType_*,TSizedDefaultAllocator<32>_> *pTVar12;
  uint uVar13;
  uint uVar14;
  FShaderPipelineType *local_res8;
  FHashedName local_res10;
  FShaderType *local_res18;
  FShaderType *local_res20;
  FShaderPipelineType *local_68;
  FHashedName *local_60;
  FShaderPipelineType **local_58;
  
  uVar11 = (ulonglong)param_5;
  this->Name = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  ::FName::FName(&this->TypeName,param_1);
  FHashedName::FHashedName(&this->HashedName,&this->TypeName);
  FHashedName::FHashedName(&this->HashedPrimaryShaderFilename,local_res18->SourceFilename);
  iVar10 = 0;
  this->bShouldOptimizeUnusedOutputs = param_6;
  (this->Stages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Stages).ArrayNum = 0;
  (this->Stages).ArrayMax = 0;
  (this->GlobalListLink)._padding_ = 0;
  (this->GlobalListLink)._padding_ = 0;
  (this->GlobalListLink).Element = this;
  if ((this->Name == (wchar_t *)0x0) || (*this->Name == L'\0')) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Name && *Name",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\Shader.cpp"
                       ,0x414,L"Shader Pipeline Type requires a valid Name!");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FShaderPipelineType *)(*pcVar3)();
      return pFVar6;
    }
  }
  if (local_res18 == (FShaderType *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InVertexOrMeshShader",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\Shader.cpp"
                       ,0x416,L"A Shader Pipeline always requires a Vertex or Mesh Shader");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FShaderPipelineType *)(*pcVar3)();
      return pFVar6;
    }
  }
  sVar7 = wcslen(param_1);
  if (0x3ff < (int)sVar7) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("FCString::Strlen(InName) < NAME_SIZE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\Shader.cpp"
                       ,0x419,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FShaderPipelineType *)(*pcVar3)();
      return pFVar6;
    }
  }
  this->AllStages[0] = (FShaderType *)0x0;
  this->AllStages[1] = (FShaderType *)0x0;
  this->AllStages[2] = (FShaderType *)0x0;
  this->AllStages[3] = (FShaderType *)0x0;
  this->AllStages[4] = (FShaderType *)0x0;
  this->AllStages[5] = (FShaderType *)0x0;
  this->AllStages[6] = (FShaderType *)0x0;
  this->AllStages[7] = (FShaderType *)0x0;
  this->AllStages[8] = (FShaderType *)0x0;
  this->AllStages[9] = (FShaderType *)0x0;
  this->AllStages[10] = (FShaderType *)0x0;
  this->AllStages[0xb] = (FShaderType *)0x0;
  if (param_4 != (FShaderType *)0x0) {
    if (param_4->ShaderTypeForDynamicCast != local_res18->ShaderTypeForDynamicCast) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InPixelShader->GetTypeForDynamicCast() == InVertexOrMeshShader->GetTypeForDynamicCast()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\Shader.cpp"
                         ,0x41f,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FShaderPipelineType *)(*pcVar3)();
        return pFVar6;
      }
    }
    pFVar8 = (this->Stages).AllocatorInstance.Data;
    if ((pFVar8 <= (FScriptContainerElement *)&param_4) &&
       ((FScriptContainerElement *)&param_4 < pFVar8 + (longlong)(this->Stages).ArrayMax * 8)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FShaderPipelineType *)(*pcVar3)();
        return pFVar6;
      }
    }
    iVar5 = (this->Stages).ArrayNum;
    if (iVar5 == (this->Stages).ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->Stages).AllocatorInstance,&(this->Stages).ArrayMax);
    }
    (this->Stages).ArrayNum = iVar5 + 1;
    *(FShaderType **)((this->Stages).AllocatorInstance.Data + (longlong)iVar5 * 8) = param_4;
    this->AllStages[3] = param_4;
  }
  if (local_res20 != (FShaderType *)0x0) {
    if (local_res20->ShaderTypeForDynamicCast != local_res18->ShaderTypeForDynamicCast) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InGeometryOrAmplificationShader->GetTypeForDynamicCast() == InVertexOrMeshShader->GetTypeForDynamicCast()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\Shader.cpp"
                         ,0x426,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FShaderPipelineType *)(*pcVar3)();
        return pFVar6;
      }
    }
    pFVar8 = (this->Stages).AllocatorInstance.Data;
    if ((pFVar8 <= (FScriptContainerElement *)&local_res20) &&
       ((FScriptContainerElement *)&local_res20 < pFVar8 + (longlong)(this->Stages).ArrayMax * 8)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FShaderPipelineType *)(*pcVar3)();
        return pFVar6;
      }
    }
    iVar5 = (this->Stages).ArrayNum;
    if (iVar5 == (this->Stages).ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->Stages).AllocatorInstance,&(this->Stages).ArrayMax);
    }
    (this->Stages).ArrayNum = iVar5 + 1;
    *(FShaderType **)((this->Stages).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_res20;
    this->AllStages[(uVar11 ^ 1) * 2 + 2] = local_res20;
  }
  pFVar8 = (this->Stages).AllocatorInstance.Data;
  if ((pFVar8 <= (FScriptContainerElement *)&local_res18) &&
     ((FScriptContainerElement *)&local_res18 < pFVar8 + (longlong)(this->Stages).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FShaderPipelineType *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar5 = (this->Stages).ArrayNum;
  if (iVar5 == (this->Stages).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Stages).AllocatorInstance,&(this->Stages).ArrayMax);
  }
  (this->Stages).ArrayNum = iVar5 + 1;
  *(FShaderType **)((this->Stages).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_res18;
  this->AllStages[uVar11] = local_res18;
  if ((this->AllStages[0] != (FShaderType *)0x0) && (this->AllStages[0]->TotalPermutationCount != 1)
     ) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShaderType->GetPermutationCount() == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\Shader.cpp"
                       ,0x431,
                       L"Shader \'%s\' has multiple shader permutations. Shader pipelines only support a single permutation."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FShaderPipelineType *)(*pcVar3)();
      return pFVar6;
    }
  }
  if ((this->AllStages[1] != (FShaderType *)0x0) && (this->AllStages[1]->TotalPermutationCount != 1)
     ) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShaderType->GetPermutationCount() == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\Shader.cpp"
                       ,0x431,
                       L"Shader \'%s\' has multiple shader permutations. Shader pipelines only support a single permutation."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FShaderPipelineType *)(*pcVar3)();
      return pFVar6;
    }
  }
  if ((this->AllStages[2] != (FShaderType *)0x0) && (this->AllStages[2]->TotalPermutationCount != 1)
     ) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShaderType->GetPermutationCount() == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\Shader.cpp"
                       ,0x431,
                       L"Shader \'%s\' has multiple shader permutations. Shader pipelines only support a single permutation."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FShaderPipelineType *)(*pcVar3)();
      return pFVar6;
    }
  }
  if ((this->AllStages[3] != (FShaderType *)0x0) && (this->AllStages[3]->TotalPermutationCount != 1)
     ) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShaderType->GetPermutationCount() == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\Shader.cpp"
                       ,0x431,
                       L"Shader \'%s\' has multiple shader permutations. Shader pipelines only support a single permutation."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FShaderPipelineType *)(*pcVar3)();
      return pFVar6;
    }
  }
  if ((this->AllStages[4] != (FShaderType *)0x0) && (this->AllStages[4]->TotalPermutationCount != 1)
     ) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShaderType->GetPermutationCount() == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\Shader.cpp"
                       ,0x431,
                       L"Shader \'%s\' has multiple shader permutations. Shader pipelines only support a single permutation."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FShaderPipelineType *)(*pcVar3)();
      return pFVar6;
    }
  }
  if ((this->AllStages[5] != (FShaderType *)0x0) && (this->AllStages[5]->TotalPermutationCount != 1)
     ) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShaderType->GetPermutationCount() == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\Shader.cpp"
                       ,0x431,
                       L"Shader \'%s\' has multiple shader permutations. Shader pipelines only support a single permutation."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FShaderPipelineType *)(*pcVar3)();
      return pFVar6;
    }
  }
  pTVar1 = &this->GlobalListLink;
  TypeHashCounter = TypeHashCounter + 1;
  this->HashIndex = TypeHashCounter;
  if (GShaderPipelineList != (TLinkedList<FShaderPipelineType_*> *)0x0) {
    GShaderPipelineList->_padding_ = (longlong)pTVar1;
  }
  pTVar1->_padding_ = (longlong)GShaderPipelineList;
  (this->GlobalListLink)._padding_ = (longlong)&GShaderPipelineList;
  piVar9 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  GShaderPipelineList = pTVar1;
  if (*piVar9 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FShaderPipelineType::GetNameToTypeMap'::__l2::
             _dynamic_atexit_destructor_for__GShaderPipelineNameToTypeMap__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_60 = &this->HashedName;
  local_58 = &local_res8;
  local_res8 = this;
  TSet<TTuple<FHashedName,FShaderPipelineType_*>,TDefaultMapHashableKeyFuncs<FHashedName,FShaderPipelineType_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FHashedName_const_&,FShaderPipelineType_*_&&>_>
            ((TSet<TTuple<FHashedName,FShaderPipelineType_*>,TDefaultMapHashableKeyFuncs<FHashedName,FShaderPipelineType_*,0>,FDefaultSetAllocator>
              *)&GShaderPipelineNameToTypeMap,
             (TPairInitializer<FHashedName_const_&,FShaderPipelineType_*_&&> *)&param_5,
             (bool *)&local_60);
  EVar2 = local_res18->ShaderTypeForDynamicCast;
  if (*piVar9 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`GetSortedShaderPipelineTypes'::__l2::_dynamic_atexit_destructor_for__SortedTypes__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  pTVar12 = SortedTypes + EVar2;
  pFVar8 = (pTVar12->AllocatorInstance).Data;
  uVar13 = SortedTypes[EVar2].ArrayNum;
  iVar5 = 0;
  if (0 < SortedTypes[EVar2].ArrayNum) {
    do {
      uVar14 = uVar13 >> 1;
      FHashedName::FHashedName
                (&local_res10,
                 (FHashedName *)(*(longlong *)(pFVar8 + (longlong)(int)(uVar14 + iVar5) * 8) + 0x10)
                );
      iVar10 = iVar5;
      if (local_res10.Hash < (this->HashedName).Hash) {
        iVar10 = (uVar13 & 1) + uVar14 + iVar5;
      }
      uVar13 = uVar14;
      iVar5 = iVar10;
    } while (uVar14 != 0);
  }
  pFVar8 = (pTVar12->AllocatorInstance).Data;
  local_68 = this;
  if ((pFVar8 <= (FScriptContainerElement *)&local_68) &&
     ((FScriptContainerElement *)&local_68 < pFVar8 + (longlong)SortedTypes[EVar2].ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FShaderPipelineType *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar5 = SortedTypes[EVar2].ArrayNum;
  if (iVar5 == SortedTypes[EVar2].ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar12->AllocatorInstance,&SortedTypes[EVar2].ArrayMax);
  }
  pFVar8 = (pTVar12->AllocatorInstance).Data;
  SortedTypes[EVar2].ArrayNum = iVar5 + 1;
  pFVar8 = pFVar8 + (longlong)iVar10 * 8;
  memmove(pFVar8 + 8,pFVar8,(longlong)(iVar5 - iVar10) << 3);
  *(FShaderPipelineType **)((pTVar12->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_68;
  if (bInitialized != false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bInitialized",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\Shader.cpp"
                       ,0x442,
                       L"Shader Pipeline was loaded after Engine init, use ELoadingPhase::PostConfigInit on your module to cause it to load earlier."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FShaderPipelineType *)(*pcVar3)();
      return pFVar6;
    }
  }
  return this;
}

// ~FShaderPipelineType @ 145df1c40

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

void __thiscall FShaderPipelineType::~FShaderPipelineType(FShaderPipelineType *this)

{
  FScriptContainerElement *pFVar1;
  ulong64 uVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TSet<TTuple<FHashedName,FShaderPipelineType_*>,TDefaultMapHashableKeyFuncs<FHashedName,FShaderPipelineType_*,0>,FDefaultSetAllocator>
  *this_00;
  TArray<FShaderPipelineType_*,TSizedDefaultAllocator<32>_> *pTVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  <lambda_1> local_res8;
  
  this_00 = (TSet<TTuple<FHashedName,FShaderPipelineType_*>,TDefaultMapHashableKeyFuncs<FHashedName,FShaderPipelineType_*,0>,FDefaultSetAllocator>
             *)GetNameToTypeMap();
  if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
    uVar2 = (this->HashedName).Hash;
    TSet<TTuple<FHashedName,FShaderPipelineType_*>,TDefaultMapHashableKeyFuncs<FHashedName,FShaderPipelineType_*,0>,FDefaultSetAllocator>
    ::RemoveImpl<FHashedName>(this_00,(int)(uVar2 >> 0x20) * 0x17 + (int)uVar2,&this->HashedName);
  }
  lVar8 = (this->GlobalListLink)._padding_;
  if (lVar8 != 0) {
    *(longlong *)(lVar8 + 8) = (this->GlobalListLink)._padding_;
  }
  plVar3 = (longlong *)(this->GlobalListLink)._padding_;
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (this->GlobalListLink)._padding_;
  }
  (this->GlobalListLink)._padding_ = 0;
  (this->GlobalListLink)._padding_ = 0;
  lVar8 = 0x30;
  if (this->AllStages[1] != (FShaderType *)0x0) {
    lVar8 = 0x38;
  }
  pTVar7 = GetSortedShaderPipelineTypes
                     (*(EShaderTypeForDynamicCast *)
                       (*(longlong *)((longlong)this->AllStages + lVar8 + -0x30) + 8));
  uVar6 = Algo::
          BinarySearchBy<TArray<FShaderPipelineType_*,TSizedDefaultAllocator<32>_>,FHashedName,_FShaderPipelineType::~FShaderPipelineType_::__l2::<lambda_1>,TLess<void>_>
                    (pTVar7,&this->HashedName,local_res8,(TLess<void>)local_res8);
  if (uVar6 == 0xffffffff) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("SortedIndex != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\Shader.cpp"
                       ,0x44c,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar10 = 0;
  if ((int)uVar6 < pTVar7->ArrayNum) {
    uVar10 = ~uVar6 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar1 = (pTVar7->AllocatorInstance).Data + (longlong)(int)uVar6 * 8;
  iVar9 = pTVar7->ArrayNum + ~uVar6;
  if (iVar9 != 0) {
    memmove(pFVar1,pFVar1 + 8,(longlong)iVar9 << 3);
  }
  pTVar7->ArrayNum = pTVar7->ArrayNum + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,&pTVar7->AllocatorInstance,pTVar7->ArrayNum,&pTVar7->ArrayMax);
  pFVar1 = (this->Stages).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// GetNameToTypeMap @ 145e0f9b0

TMap<FHashedName,FShaderPipelineType_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHashedName,FShaderPipelineType_*,0>_>
* __cdecl FShaderPipelineType::GetNameToTypeMap(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FShaderPipelineType::GetNameToTypeMap'::__l2::
             _dynamic_atexit_destructor_for__GShaderPipelineNameToTypeMap__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &GShaderPipelineNameToTypeMap;
}

// GetShaderPipelineTypeByName @ 145e10a90

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

FShaderPipelineType * __cdecl FShaderPipelineType::GetShaderPipelineTypeByName(FHashedName *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  TMap<FHashedName,FShaderPipelineType_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHashedName,FShaderPipelineType_*,0>_>
  *pTVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  
  pTVar4 = GetNameToTypeMap();
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
            return (FShaderPipelineType *)0x0;
          }
          return (FShaderPipelineType *)*puVar5;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (FShaderPipelineType *)0x0;
}

// GetShaderPipelineTypesByFilename @ 145e10b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

TArray<FShaderPipelineType_const_*,TSizedDefaultAllocator<32>_> * __cdecl
FShaderPipelineType::GetShaderPipelineTypesByFilename
          (TArray<FShaderPipelineType_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          wchar_t *param_1,bool param_2)

{
  FString *pFVar1;
  undefined ***pppuVar2;
  undefined1 auStackY_a8 [32];
  FRegexPattern local_78;
  FString local_68;
  FString local_58;
  code *local_48 [2];
  undefined **local_38;
  FRegexPattern *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  if (param_2) {
    pFVar1 = ::FString::FString(&local_58,param_1);
    pFVar1 = ::FString::Replace(pFVar1,&local_68,L"*",L"(.)*",IgnoreCase);
    FRegexPattern::FRegexPattern(&local_78,pFVar1,CaseInsensitive);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    local_20 = (undefined ***)0x0;
    local_38 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FShaderPipelineType::GetShaderPipelineTypesByFilename'::`5'::<lambda_1>,0,0>
                ::_vftable_;
    local_30 = &local_78;
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FShaderPipelineType::GetShaderPipelineTypesByFilename'::__l5::<lambda_1>,bool,wchar_t_const_*>
                  ::Call;
    GetShaderPipelineTypesByFilenameFilter
              (__return_storage_ptr__,(TFunction<bool___cdecl(wchar_t_const_*)> *)local_48);
    if (local_48[0] != (code *)0x0) {
      pppuVar2 = &local_38;
      if (local_20 != (undefined ***)0x0) {
        pppuVar2 = local_20;
      }
      (*(code *)(*pppuVar2)[2])();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.Implementation.SharedReferenceCount.ReferenceController);
  }
  else {
    local_38 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FShaderPipelineType::GetShaderPipelineTypesByFilename'::`7'::<lambda_2>,0,0>
                ::_vftable_;
    local_20 = (undefined ***)0x0;
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FShaderPipelineType::GetShaderPipelineTypesByFilename'::__l7::<lambda_2>,bool,wchar_t_const_*>
                  ::Call;
    local_30 = (FRegexPattern *)param_1;
    GetShaderPipelineTypesByFilenameFilter
              (__return_storage_ptr__,(TFunction<bool___cdecl(wchar_t_const_*)> *)local_48);
    if (local_48[0] != (code *)0x0) {
      pppuVar2 = &local_38;
      if (local_20 != (undefined ***)0x0) {
        pppuVar2 = local_20;
      }
      (*(code *)(*pppuVar2)[2])();
    }
  }
  return __return_storage_ptr__;
}

// GetShaderPipelineTypesByFilenameFilter @ 145e10ca0

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

TArray<FShaderPipelineType_const_*,TSizedDefaultAllocator<32>_> * __cdecl
FShaderPipelineType::GetShaderPipelineTypesByFilenameFilter
          (TArray<FShaderPipelineType_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TFunction<bool___cdecl(wchar_t_const_*)> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FShaderPipelineType *pFVar3;
  code *pcVar4;
  TLinkedList<FShaderPipelineType_*> *pTVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *plVar8;
  FScriptContainerElement *pFVar9;
  undefined8 local_res8;
  FShaderPipelineType *local_res18 [2];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pTVar5 = GShaderPipelineList;
  do {
    if (pTVar5 == (TLinkedList<FShaderPipelineType_*> *)0x0) {
      return __return_storage_ptr__;
    }
    pFVar3 = pTVar5->Element;
    pFVar9 = (pFVar3->Stages).AllocatorInstance.Data;
    iVar2 = (pFVar3->Stages).ArrayNum;
    pFVar1 = pFVar9 + (longlong)iVar2 * 8;
    local_res18[0] = pFVar3;
    while( true ) {
      if ((pFVar3->Stages).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FShaderType_const_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res8);
      }
      if (pFVar9 == pFVar1) goto LAB_145e10d5d;
      local_res8 = *(undefined8 *)(*(longlong *)pFVar9 + 0x38);
      UE::Core::Private::Function::CheckCallable(*(void **)param_1);
      pcVar4 = *(code **)param_1;
      plVar8 = *(longlong **)&param_1->field_0x28;
      if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
        plVar8 = (longlong *)&param_1->field_0x10;
      }
      uVar7 = (**(code **)(*plVar8 + 8))();
      cVar6 = (*pcVar4)(uVar7,&local_res8);
      if (cVar6 != '\0') break;
      pFVar9 = pFVar9 + 8;
    }
    TArray<FShaderPipelineType_const_*,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<FShaderPipelineType_const_*_const_&>(__return_storage_ptr__,local_res18);
LAB_145e10d5d:
    pTVar5 = (TLinkedList<FShaderPipelineType_*> *)pTVar5->_padding_;
  } while( true );
}

// GetSortedTypes @ 145e117d0

TArray<FShaderPipelineType_*,TSizedDefaultAllocator<32>_> * __cdecl
FShaderPipelineType::GetSortedTypes(EShaderTypeForDynamicCast param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`GetSortedShaderPipelineTypes'::__l2::_dynamic_atexit_destructor_for__SortedTypes__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return SortedTypes + param_1;
}

// GetSourceHash @ 145e117f0

/* WARNING: Removing unreachable block (ram,0x000145e1191a) */
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
FShaderPipelineType::GetSourceHash(FShaderPipelineType *this,EShaderPlatform param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FSHAHash *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_48;
  FString local_38;
  
  pFVar8 = (this->Stages).AllocatorInstance.Data;
  iVar2 = (this->Stages).ArrayNum;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Stages).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FShaderType_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar8 == pFVar1) break;
    ::FString::FString(&local_38,*(wchar_t **)(*(longlong *)pFVar8 + 0x38));
    if (((local_48.AllocatorInstance.Data <= (FScriptContainerElement *)&local_38) &&
        ((FScriptContainerElement *)&local_38 <
         local_48.AllocatorInstance.Data + (longlong)local_48.ArrayMax * 0x10)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FSHAHash *)(*pcVar3)();
      return pFVar6;
    }
    iVar5 = local_48.ArrayNum;
    if (local_48.ArrayNum == local_48.ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_48.AllocatorInstance,&local_48.ArrayMax);
    }
    local_48.ArrayNum = iVar5 + 1;
    pFVar7 = local_48.AllocatorInstance.Data + (longlong)iVar5 * 0x10;
    *(undefined8 *)pFVar7 = 0;
    *(FScriptContainerElement **)pFVar7 = local_38.Data.AllocatorInstance.Data;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar7 + 8) = local_38.Data.ArrayNum;
    *(int *)(pFVar7 + 0xc) = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    pFVar8 = pFVar8 + 8;
  }
  pFVar6 = GetShaderFilesHash(&local_48,param_1);
  DestructItems<FString,int>((FString *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return pFVar6;
}

// GetTypeList @ 145e15800

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

TLinkedList<FShaderPipelineType_*> ** __cdecl FShaderPipelineType::GetTypeList(void)

{
  return &GShaderPipelineList;
}

// Initialize @ 145e17ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

void __cdecl FShaderPipelineType::Initialize(void)

{
  FShaderPipelineType *pFVar1;
  FName FVar2;
  TLinkedList<FShaderPipelineType_*> *pTVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  ForElementType<FSetElementId> FVar9;
  ulonglong uVar10;
  FShaderType **ppFVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  longlong local_a0;
  FName local_98;
  FName local_90;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_88;
  ulonglong local_38;
  ulonglong uVar14;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if ((bInitialized) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bInitialized",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\Shader.cpp"
                         ,0x48b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar16 = 0;
  local_88.Elements._0_8_ = 0;
  local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_88.Elements._8_8_ = 0;
  local_88.Elements._32_8_ = 0;
  local_88.Elements._40_4_ = 0;
  local_88.Elements._44_4_ = 0x80;
  local_88.Elements._48_4_ = 0xffffffff;
  local_88.Elements._52_4_ = 0;
  local_88.HashSize = 0;
  pTVar3 = GShaderPipelineList;
  do {
    if (pTVar3 == (TLinkedList<FShaderPipelineType_*> *)0x0) {
      local_88.HashSize = 0;
      bInitialized = true;
      if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_88.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_88.Elements);
      return;
    }
    pFVar1 = pTVar3->Element;
    ppFVar11 = pFVar1->AllStages;
    uVar14 = uVar16;
    do {
      if (((*ppFVar11 != (FShaderType *)0x0) && ((char)(*ppFVar11)->Frequency != (char)uVar14)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!PipelineType->AllStages[Index] || PipelineType->AllStages[Index]->GetFrequency() == (EShaderFrequency)Index"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\Shader.cpp"
                             ,0x49d,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar13 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar13;
      ppFVar11 = ppFVar11 + 1;
    } while ((int)uVar13 < 0xc);
    iVar8 = (pFVar1->Stages).ArrayNum;
    if (iVar8 < 1) {
      local_a8 = (wchar_t *)0x0;
      local_a0 = (longlong)iVar8;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar14 = *(ulonglong *)(pFVar1->Stages).AllocatorInstance.Data;
    iVar8 = (pFVar1->Stages).ArrayNum;
    uVar15 = uVar16;
    if (*(int *)(uVar14 + 8) == 0) {
      uVar15 = uVar14;
    }
    if (iVar8 < 1) {
      local_a8 = (wchar_t *)0x0;
      local_a0 = (longlong)iVar8;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar14 = *(ulonglong *)(pFVar1->Stages).AllocatorInstance.Data;
    iVar8 = (pFVar1->Stages).ArrayNum;
    uVar17 = uVar16;
    if (*(int *)(uVar14 + 8) == 2) {
      uVar17 = uVar14;
    }
    if (iVar8 < 1) {
      local_a8 = (wchar_t *)0x0;
      local_a0 = (longlong)iVar8;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar8 = (pFVar1->Stages).ArrayNum;
    uVar13 = 1;
    uVar14 = *(ulonglong *)(pFVar1->Stages).AllocatorInstance.Data;
    uVar10 = uVar16;
    if (*(int *)(uVar14 + 8) == 1) {
      uVar10 = uVar14;
    }
    if (1 < iVar8) {
      lVar12 = 8;
      do {
        if (uVar15 == 0) {
          if (uVar17 == 0) {
            if (uVar10 != 0) {
              uVar6 = 0;
              if ((int)uVar13 < iVar8) {
                uVar6 = ~uVar13 >> 0x1f;
              }
              if (uVar6 == 0) {
                local_a0 = (longlong)iVar8;
                local_a8 = (wchar_t *)(longlong)(int)uVar13;
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar5) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
              }
              uVar14 = *(ulonglong *)((pFVar1->Stages).AllocatorInstance.Data + lVar12);
              uVar7 = uVar16;
              if (*(int *)(uVar14 + 8) == 1) {
                uVar7 = uVar14;
              }
              if (uVar7 == 0) {
                local_a8 = pFVar1->Name;
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Stages[Index]->GetMaterialShaderType()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\Shader.cpp"
                                   ,0x4b3,L"Invalid combination of Shader types on Pipeline %s");
                if (bVar5) goto code_r0x000145e180d0;
              }
            }
          }
          else {
            uVar6 = 0;
            if ((int)uVar13 < iVar8) {
              uVar6 = ~uVar13 >> 0x1f;
            }
            if (uVar6 == 0) {
              local_a0 = (longlong)iVar8;
              local_a8 = (wchar_t *)(longlong)(int)uVar13;
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar5) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            uVar14 = *(ulonglong *)((pFVar1->Stages).AllocatorInstance.Data + lVar12);
            uVar7 = uVar16;
            if (*(int *)(uVar14 + 8) == 2) {
              uVar7 = uVar14;
            }
            if (uVar7 == 0) {
              local_a8 = pFVar1->Name;
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Stages[Index]->GetMeshMaterialShaderType()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\Shader.cpp"
                                 ,0x4af,L"Invalid combination of Shader types on Pipeline %s");
              if (bVar5) goto code_r0x000145e180d0;
            }
          }
        }
        else {
          uVar6 = 0;
          if ((int)uVar13 < iVar8) {
            uVar6 = ~uVar13 >> 0x1f;
          }
          if (uVar6 == 0) {
            local_a0 = (longlong)iVar8;
            local_a8 = (wchar_t *)(longlong)(int)uVar13;
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          uVar14 = *(ulonglong *)((pFVar1->Stages).AllocatorInstance.Data + lVar12);
          uVar7 = uVar16;
          if (*(int *)(uVar14 + 8) == 0) {
            uVar7 = uVar14;
          }
          if (uVar7 == 0) {
            local_a8 = pFVar1->Name;
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Stages[Index]->GetGlobalShaderType()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\Shader.cpp"
                               ,0x4ab,L"Invalid combination of Shader types on Pipeline %s");
            if (bVar5) {
code_r0x000145e180d0:
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
        }
        iVar8 = (pFVar1->Stages).ArrayNum;
        uVar13 = uVar13 + 1;
        lVar12 = lVar12 + 8;
      } while ((int)uVar13 < iVar8);
    }
    FVar2 = pFVar1->TypeName;
    local_90 = FVar2;
    uVar13 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
    if (local_88.Elements._8_4_ != local_88.Elements._52_4_) {
      FVar9 = (ForElementType<FSetElementId>)&local_88.Hash;
      if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar9 = local_88.Hash.SecondaryData;
      }
      for (iVar8 = *(int *)((longlong)FVar9 +
                           (ulonglong)(local_88.HashSize - 1U & FVar2.Number + uVar13) * 4);
          iVar8 != -1; iVar8 = *(int *)(local_88.Elements._0_8_ + 8 + (longlong)iVar8 * 0x10)) {
        if (*(FName *)(local_88.Elements._0_8_ + (longlong)iVar8 * 0x10) == FVar2) {
          local_a8 = pFVar1->Name;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!UsedNames.Contains(PipelineName)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\Shader.cpp"
                             ,0x4b8,L"Two Pipelines with the same name %s found!");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          break;
        }
      }
    }
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
              (&local_88,&local_98,(bool *)&local_90);
    pTVar3 = (TLinkedList<FShaderPipelineType_*> *)pTVar3->_padding_;
  } while( true );
}

// ShouldCompilePermutation @ 145e2d200

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

bool __thiscall
FShaderPipelineType::ShouldCompilePermutation
          (FShaderPipelineType *this,FShaderPermutationParameters *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  pFVar6 = (this->Stages).AllocatorInstance.Data;
  iVar2 = (this->Stages).ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Stages).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FShaderType_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar6 == pFVar1) break;
    lVar3 = *(longlong *)pFVar6;
    bVar4 = ShouldCompileShaderFrequency(*(EShaderFrequency *)(lVar3 + 0x48),param_1->Platform);
    if ((!bVar4) || (cVar5 = (**(code **)(lVar3 + 0x68))(param_1), cVar5 == '\0')) {
      return false;
    }
    pFVar6 = pFVar6 + 8;
  }
  return true;
}

// ShouldOptimizeUnusedOutputs @ 145e2daf0

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

bool __thiscall
FShaderPipelineType::ShouldOptimizeUnusedOutputs(FShaderPipelineType *this,EShaderPlatform param_1)

{
  if ((this->bShouldOptimizeUnusedOutputs != false) &&
     (FGenericDataDrivenShaderPlatformInfo::Infos[param_1].bSupportsShaderPipelines != 0)) {
    return true;
  }
  return false;
}

// ShouldPrecachePermutation @ 145e2db20

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

EShaderPermutationPrecacheRequest __thiscall
FShaderPipelineType::ShouldPrecachePermutation
          (FShaderPipelineType *this,FShaderPermutationParameters *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  EShaderPermutationPrecacheRequest EVar5;
  FScriptContainerElement *pFVar6;
  EShaderPermutationPrecacheRequest EVar7;
  undefined1 local_res8 [8];
  
  pFVar6 = (this->Stages).AllocatorInstance.Data;
  iVar2 = (this->Stages).ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 8;
  EVar5 = NotUsed;
  while( true ) {
    EVar7 = EVar5;
    if ((this->Stages).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FShaderType_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar6 == pFVar1) break;
    lVar3 = *(longlong *)pFVar6;
    bVar4 = ShouldCompileShaderFrequency(*(EShaderFrequency *)(lVar3 + 0x48),param_1->Platform);
    if (bVar4) {
      EVar5 = (**(code **)(lVar3 + 0x70))(param_1);
      if (EVar5 == Precached) {
        return Precached;
      }
    }
    else {
      EVar5 = NotUsed;
    }
    pFVar6 = pFVar6 + 8;
    if (EVar5 != NotPrecached) {
      EVar5 = EVar7;
    }
  }
  return EVar7;
}

