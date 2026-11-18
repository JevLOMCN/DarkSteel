// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// AcquireLayout @ 147f6d060

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FMaterialShaderMapLayout * __thiscall
FMaterialShaderMapLayoutCache::AcquireLayout
          (FMaterialShaderMapLayoutCache *this,EShaderPlatform param_1,
          EShaderPermutationFlags param_2,FMaterialShaderParameters *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  FMaterialShaderParameters *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  FMaterialShaderMapLayout *pFVar9;
  FMaterialShaderMapLayout *pFVar10;
  ulong64 uVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  ulong64 local_38;
  FMaterialShaderMapLayout *local_30;
  
  iVar7 = (param_3->MaterialShaderTags).ArrayNum;
  lVar8 = (longlong)iVar7;
  uVar11 = (ulonglong)param_2 << 0x20 | (ulonglong)param_1;
  if (iVar7 != 0) {
    pFVar13 = (param_3->MaterialShaderTags).AllocatorInstance.Data;
    uVar12 = 0;
    do {
      uVar2 = *(undefined8 *)pFVar13;
      uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
      pFVar13 = pFVar13 + 8;
      uVar12 = uVar12 ^ uVar6 + 0x9e3779b9 +
                        (int)((ulonglong)uVar2 >> 0x20) + uVar12 * 0x40 + (uVar12 >> 2);
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    uVar11 = uVar11 ^ uVar12;
  }
  pFVar10 = (FMaterialShaderMapLayout *)0x0;
  local_38 = CityHash64WithSeed((char *)param_3,0x38,uVar11);
  AcquireSRWLockShared((PSRWLOCK)&this->LayoutLock);
  pFVar9 = FindLayout(this,local_38);
  ReleaseSRWLockShared((PSRWLOCK)&this->LayoutLock);
  if (pFVar9 == (FMaterialShaderMapLayout *)0x0) {
    AcquireSRWLockExclusive((PSRWLOCK)&this->LayoutLock);
    pFVar9 = FindLayout(this,local_38);
    if (pFVar9 == (FMaterialShaderMapLayout *)0x0) {
      pFVar9 = ::operator_new(0x50);
      if (pFVar9 != (FMaterialShaderMapLayout *)0x0) {
        pFVar9->_padding_ = 0;
        *(undefined4 *)&pFVar9->field_0x4c = 0;
        pFVar9->_padding_ = 0;
        pFVar9->_padding_ = 0;
        pFVar9->_padding_ = 0;
        pFVar9->_padding_ = 0;
        (pFVar9->MeshShaderMaps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar9->MeshShaderMaps).ArrayNum = 0;
        (pFVar9->MeshShaderMaps).ArrayMax = 0;
        (pFVar9->ShaderMapHash).Hash[0] = '\0';
        (pFVar9->ShaderMapHash).Hash[1] = '\0';
        (pFVar9->ShaderMapHash).Hash[2] = '\0';
        (pFVar9->ShaderMapHash).Hash[3] = '\0';
        (pFVar9->ShaderMapHash).Hash[4] = '\0';
        (pFVar9->ShaderMapHash).Hash[5] = '\0';
        (pFVar9->ShaderMapHash).Hash[6] = '\0';
        (pFVar9->ShaderMapHash).Hash[7] = '\0';
        (pFVar9->ShaderMapHash).Hash[8] = '\0';
        (pFVar9->ShaderMapHash).Hash[9] = '\0';
        (pFVar9->ShaderMapHash).Hash[10] = '\0';
        (pFVar9->ShaderMapHash).Hash[0xb] = '\0';
        (pFVar9->ShaderMapHash).Hash[0xc] = '\0';
        (pFVar9->ShaderMapHash).Hash[0xd] = '\0';
        (pFVar9->ShaderMapHash).Hash[0xe] = '\0';
        (pFVar9->ShaderMapHash).Hash[0xf] = '\0';
        (pFVar9->ShaderMapHash).Hash[0x10] = '\0';
        (pFVar9->ShaderMapHash).Hash[0x11] = '\0';
        (pFVar9->ShaderMapHash).Hash[0x12] = '\0';
        (pFVar9->ShaderMapHash).Hash[0x13] = '\0';
        pFVar10 = pFVar9;
      }
      CreateLayout(this,pFVar10,param_1,param_2,param_3);
      *(EShaderPlatform *)&pFVar10->_padding_ = param_1;
      pFVar13 = (this->ShaderMapLayouts).AllocatorInstance.Data;
      local_30 = pFVar10;
      if (((pFVar13 <= (FScriptContainerElement *)&local_30) &&
          ((FScriptContainerElement *)&local_30 <
           pFVar13 + (longlong)(this->ShaderMapLayouts).ArrayMax * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FMaterialShaderMapLayout *)(*pcVar4)();
        return pFVar10;
      }
      uVar12 = (this->ShaderMapLayouts).ArrayNum;
      piVar1 = &(this->ShaderMapLayouts).ArrayMax;
      if (uVar12 == *piVar1) {
        uVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)this,piVar1);
      }
      pFVar13 = (this->ShaderMapLayouts).AllocatorInstance.Data;
      (this->ShaderMapLayouts).ArrayNum = uVar12 + 1;
      *(FMaterialShaderMapLayout **)(pFVar13 + (longlong)(int)uVar12 * 8) = local_30;
      pFVar13 = (this->MaterialParameterHashes).AllocatorInstance.Data;
      local_30 = (FMaterialShaderMapLayout *)0x0;
      if (((pFVar13 <= (FScriptContainerElement *)&local_38) &&
          ((FScriptContainerElement *)&local_38 <
           pFVar13 + (longlong)(this->MaterialParameterHashes).ArrayMax * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FMaterialShaderMapLayout *)(*pcVar4)();
        return pFVar10;
      }
      iVar7 = (this->MaterialParameterHashes).ArrayNum;
      piVar1 = &(this->MaterialParameterHashes).ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->MaterialParameterHashes).AllocatorInstance,piVar1);
      }
      (this->MaterialParameterHashes).ArrayNum = iVar7 + 1;
      *(ulong64 *)((this->MaterialParameterHashes).AllocatorInstance.Data + (longlong)iVar7 * 8) =
           local_38;
      pFVar3 = (FMaterialShaderParameters *)(this->MaterialShaderParameters).AllocatorInstance.Data;
      if (((pFVar3 <= param_3) && (param_3 < pFVar3 + (this->MaterialShaderParameters).ArrayMax)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FMaterialShaderMapLayout *)(*pcVar4)();
        return pFVar10;
      }
      iVar7 = (this->MaterialShaderParameters).ArrayNum;
      piVar1 = &(this->MaterialShaderParameters).ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x848,&(this->MaterialShaderParameters).AllocatorInstance,piVar1);
      }
      (this->MaterialShaderParameters).ArrayNum = iVar7 + 1;
      FMaterialShaderParameters::FMaterialShaderParameters
                ((FMaterialShaderParameters *)
                 ((this->MaterialShaderParameters).AllocatorInstance.Data + (longlong)iVar7 * 0x48),
                 param_3);
      FHashTable::Add(&this->ShaderMapHashTable,(uint)local_38,uVar12);
      if (((this->MaterialParameterHashes).ArrayNum != (this->ShaderMapLayouts).ArrayNum) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("MaterialParameterHashes.Num() == ShaderMapLayouts.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShader.cpp"
                             ,0xc44,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FMaterialShaderMapLayout *)(*pcVar4)();
        return pFVar10;
      }
      pFVar9 = pFVar10;
      if (((this->MaterialShaderParameters).ArrayNum != (this->ShaderMapLayouts).ArrayNum) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("MaterialShaderParameters.Num() == ShaderMapLayouts.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShader.cpp"
                             ,0xc45,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FMaterialShaderMapLayout *)(*pcVar4)();
        return pFVar10;
      }
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&this->LayoutLock);
    if ((pFVar9 == (FMaterialShaderMapLayout *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Layout",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShader.cpp"
                           ,0xc49,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FMaterialShaderMapLayout *)(*pcVar4)();
      return pFVar10;
    }
  }
  return pFVar9;
}

// CreateLayout @ 147f73010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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

void __thiscall
FMaterialShaderMapLayoutCache::CreateLayout
          (FMaterialShaderMapLayoutCache *this,FMaterialShaderMapLayout *param_1,
          EShaderPlatform param_2,EShaderPermutationFlags param_3,FMaterialShaderParameters *param_4
          )

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  FShaderType *pFVar4;
  longlong lVar5;
  FVertexFactoryType *pFVar6;
  code *pcVar7;
  bool bVar8;
  EShaderPermutationFlags EVar9;
  FMaterialShaderParameters *pFVar10;
  FMaterialShaderMapLayout *pFVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  TArray<FShaderType_*,TSizedDefaultAllocator<32>_> *pTVar15;
  uint uVar16;
  TArray<FShaderPipelineType_*,TSizedDefaultAllocator<32>_> *pTVar17;
  undefined8 *puVar18;
  FScriptContainerElement *pFVar19;
  FScriptContainerElement *pFVar20;
  FScriptContainerElement *pFVar21;
  TArray<FShaderPipelineType_*,TSizedDefaultAllocator<32>_> *pTVar22;
  ulonglong uVar23;
  FScriptContainerElement *pFVar24;
  undefined1 auStackY_2b8 [32];
  undefined1 local_265;
  undefined1 local_264;
  undefined1 local_263;
  undefined1 local_262;
  undefined1 local_261;
  undefined1 local_260 [4];
  EShaderPermutationFlags local_25c;
  int local_258;
  int local_254;
  uint local_250;
  FShaderPipelineType *local_248;
  FMaterialShaderParameters *local_240;
  TArray<FShaderPipelineType_*,TSizedDefaultAllocator<32>_> *local_238;
  longlong local_230;
  FMaterialShaderMapLayout *local_228;
  TArray<FShaderPipelineType_*,TSizedDefaultAllocator<32>_> *local_220;
  TArray<FShaderType_*,TSizedDefaultAllocator<32>_> *local_218;
  TArray<FShaderPipelineType_*,TSizedDefaultAllocator<32>_> *local_210;
  TArray<FShaderType_*,TSizedDefaultAllocator<32>_> *local_208;
  TArray<FShaderPipelineType_*,TSizedDefaultAllocator<32>_> *local_200;
  FShaderType *local_1f8;
  int iStack_1f0;
  undefined4 uStack_1ec;
  FShaderType *local_1e8;
  int iStack_1e0;
  undefined4 uStack_1dc;
  ulong64 local_1d8;
  undefined8 local_1d0;
  ulong64 local_1c8;
  uint *local_1c0;
  ulong64 local_1b8;
  TArray<FVertexFactoryType_*,TSizedDefaultAllocator<32>_> *local_1b0;
  FScriptContainerElement *local_1a8;
  FShaderPermutationParameters local_198;
  FMaterialShaderParameters local_188;
  FShaderPermutationParameters local_138;
  FMaterialShaderParameters local_128;
  FSHA1 local_d8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  local_240 = param_4;
  local_25c = param_3;
  local_228 = param_1;
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_void___cdecl_FMaterialShaderMapLayoutCache::CreateLayout(FMaterialShaderMapLayout&___ptr64,EShaderPlatform,EShaderPermutationFlags,FMaterialShaderParameters_const&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId3164,"FMaterialShaderMapLayoutCache_CreateLayout",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShader.cpp"
               ,0xc5c);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_void___cdecl_FMaterialShaderMapLayoutCache::CreateLayout(FMaterialShaderMapLayout&___ptr64,EShaderPlatform,EShaderPermutationFlags,FMaterialShaderParameters_const&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId3164);
  }
  pTVar15 = FShaderType::GetSortedTypes(Material);
  local_218 = pTVar15;
  local_208 = FShaderType::GetSortedTypes(MeshMaterial);
  local_238 = FShaderPipelineType::GetSortedTypes(Material);
  local_200 = FShaderPipelineType::GetSortedTypes(MeshMaterial);
  FSHA1::FSHA1(&local_d8);
  local_250 = pTVar15->ArrayNum;
  uVar23 = (ulonglong)(int)local_250;
  pTVar22 = (TArray<FShaderPipelineType_*,TSizedDefaultAllocator<32>_> *)
            (pTVar15->AllocatorInstance).Data;
  pTVar17 = (TArray<FShaderPipelineType_*,TSizedDefaultAllocator<32>_> *)
            (&pTVar22->AllocatorInstance + uVar23);
  local_210 = pTVar17;
  while( true ) {
    local_220 = pTVar22;
    if (pTVar15->ArrayNum != (int)uVar23) {
      local_265 = 0;
      `TCheckedPointerIterator<FShaderType_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_265);
    }
    pFVar11 = local_228;
    pFVar10 = local_240;
    EVar9 = local_25c;
    if (pTVar22 == pTVar17) break;
    pFVar4 = (FShaderType *)(pTVar22->AllocatorInstance).Data;
    local_258 = 0;
    iVar3 = pFVar4->TotalPermutationCount;
    if (0 < iVar3) {
      do {
        local_138.Flags = EVar9;
        local_138.Platform = param_2;
        local_138.PermutationId = local_258;
        FMaterialShaderParameters::FMaterialShaderParameters(&local_128,pFVar10);
        bVar12 = FShaderType::ShouldCompilePermutation(pFVar4,&local_138);
        if (local_128.MaterialShaderTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.MaterialShaderTags.AllocatorInstance.Data);
        }
        if (bVar12) {
          iStack_1f0 = local_258;
          local_1f8 = pFVar4;
          if ((((FShaderType **)pFVar11->_padding_ <= &local_1f8) &&
              (&local_1f8 <
               (FShaderType **)pFVar11->_padding_ +
               (longlong)*(int *)((longlong)&pFVar11->_padding_ + 4) * 2)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar12)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar13 = (int)pFVar11->_padding_;
          piVar1 = (int *)((longlong)&pFVar11->_padding_ + 4);
          if (iVar13 == *piVar1) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,(ForAnyElementType *)&pFVar11->_padding_,piVar1);
          }
          *(int *)&pFVar11->_padding_ = iVar13 + 1;
          puVar2 = (undefined8 *)(pFVar11->_padding_ + (longlong)iVar13 * 0x10);
          *puVar2 = local_1f8;
          puVar2[1] = CONCAT44(uStack_1ec,iStack_1f0);
          local_1d8 = (pFVar4->HashedName).Hash;
          FSHA1::Update(&local_d8,(uchar *)&local_1d8,8);
          FSHA1::Update(&local_d8,(uchar *)&local_258,4);
        }
        local_258 = local_258 + 1;
      } while (local_258 < iVar3);
      uVar23 = (ulonglong)local_250;
      pTVar17 = local_210;
      pTVar15 = local_218;
      pTVar22 = local_220;
    }
    pTVar22 = (TArray<FShaderPipelineType_*,TSizedDefaultAllocator<32>_> *)&pTVar22->ArrayNum;
  }
  local_1c0 = (uint *)&FGenericDataDrivenShaderPlatformInfo::Infos[param_2].field_0x38;
  if (ZPULL(*local_1c0,0xc,1) != 0) {
    pFVar19 = (local_238->AllocatorInstance).Data;
    iVar3 = local_238->ArrayNum;
    pFVar20 = pFVar19 + (longlong)iVar3 * 8;
    while( true ) {
      if (local_238->ArrayNum != iVar3) {
        local_264 = 0;
        `TCheckedPointerIterator<FShaderPipelineType_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_264);
      }
      if (pFVar19 == pFVar20) break;
      lVar5 = *(longlong *)pFVar19;
      local_198.PermutationId = 0;
      local_198.Flags = local_25c;
      local_230 = lVar5;
      local_198.Platform = param_2;
      FMaterialShaderParameters::FMaterialShaderParameters(&local_188,local_240);
      puVar18 = *(undefined8 **)(lVar5 + 0x20);
      iVar13 = *(int *)(lVar5 + 0x28);
      puVar2 = puVar18 + iVar13;
      while( true ) {
        if (*(int *)(lVar5 + 0x28) != iVar13) {
          local_263 = 0;
          `TCheckedPointerIterator<FShaderType_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_263);
        }
        if (puVar18 == puVar2) {
          if (local_188.MaterialShaderTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          {
            FMemory::Free(local_188.MaterialShaderTags.AllocatorInstance.Data);
          }
          pFVar11 = local_228;
          if ((((longlong *)local_228->_padding_ <= &local_230) &&
              (&local_230 <
               (longlong *)local_228->_padding_ + *(int *)((longlong)&local_228->_padding_ + 4))) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar12)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar13 = (int)pFVar11->_padding_;
          piVar1 = (int *)((longlong)&pFVar11->_padding_ + 4);
          if (iVar13 == *piVar1) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,(ForAnyElementType *)&pFVar11->_padding_,piVar1);
          }
          *(int *)&pFVar11->_padding_ = iVar13 + 1;
          *(longlong *)(pFVar11->_padding_ + (longlong)iVar13 * 8) = local_230;
          local_1d0 = *(undefined8 *)(local_230 + 0x10);
          FSHA1::Update(&local_d8,(uchar *)&local_1d0,8);
          goto LAB_147f73471;
        }
        bVar12 = FShaderType::ShouldCompilePermutation((FShaderType *)*puVar18,&local_198);
        if (!bVar12) break;
        puVar18 = puVar18 + 1;
      }
      if (local_188.MaterialShaderTags.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
LAB_147f73471:
        pFVar19 = pFVar19 + 8;
      }
      else {
        FMemory::Free(local_188.MaterialShaderTags.AllocatorInstance.Data);
        pFVar19 = pFVar19 + 8;
      }
    }
  }
  local_1b0 = FVertexFactoryType::GetSortedMaterialTypes();
  uVar23 = (ulonglong)local_1b0->ArrayNum;
  pFVar20 = (local_1b0->AllocatorInstance).Data;
  local_220 = (TArray<FShaderPipelineType_*,TSizedDefaultAllocator<32>_> *)
              CONCAT44(local_220._4_4_,local_1b0->ArrayNum);
  local_1a8 = pFVar20 + uVar23 * 8;
  do {
    pFVar19 = local_1a8;
    local_218 = (TArray<FShaderType_*,TSizedDefaultAllocator<32>_> *)pFVar20;
    if (local_1b0->ArrayNum != (int)uVar23) {
      local_262 = 0;
      `TCheckedPointerIterator<FVertexFactoryType_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_262);
    }
    if (pFVar20 == pFVar19) {
      FSHA1::Final(&local_d8);
      FSHA1::GetHash(&local_d8,(local_228->ShaderMapHash).Hash);
      FSHA1::~FSHA1(&local_d8);
      if (bVar8) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    pFVar19 = (FScriptContainerElement *)0x0;
    pFVar6 = *(FVertexFactoryType **)pFVar20;
    local_250 = local_208->ArrayNum;
    uVar23 = (ulonglong)(int)local_250;
    pTVar22 = (TArray<FShaderPipelineType_*,TSizedDefaultAllocator<32>_> *)
              (local_208->AllocatorInstance).Data;
    pTVar17 = (TArray<FShaderPipelineType_*,TSizedDefaultAllocator<32>_> *)
              (&pTVar22->AllocatorInstance + uVar23);
    local_210 = pTVar17;
    while( true ) {
      local_238 = pTVar22;
      if (local_208->ArrayNum != (int)uVar23) {
        local_261 = 0;
        `TCheckedPointerIterator<FShaderType_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_261);
      }
      if (pTVar22 == pTVar17) break;
      pFVar4 = (FShaderType *)(pTVar22->AllocatorInstance).Data;
      bVar12 = FMeshMaterialShaderType::ShouldCompileVertexFactoryPermutation
                         (param_2,local_240,pFVar6,pFVar4,local_25c);
      EVar9 = local_25c;
      if (bVar12) {
        iVar3 = pFVar4->TotalPermutationCount;
        local_254 = 0;
        if (0 < iVar3) {
          do {
            bVar12 = FMeshMaterialShaderType::ShouldCompilePermutation
                               ((FMeshMaterialShaderType *)pFVar4,param_2,local_240,pFVar6,local_254
                                ,EVar9);
            pFVar11 = local_228;
            if (bVar12) {
              if (pFVar19 == (FScriptContainerElement *)0x0) {
                piVar1 = &(local_228->MeshShaderMaps).ArrayMax;
                uVar14 = (local_228->MeshShaderMaps).ArrayNum;
                if (uVar14 == *piVar1) {
                  uVar14 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x830,&(local_228->MeshShaderMaps).AllocatorInstance,piVar1);
                }
                (pFVar11->MeshShaderMaps).ArrayNum = uVar14 + 1;
                uVar16 = 0;
                if ((int)uVar14 < (int)(uVar14 + 1)) {
                  uVar16 = ~uVar14 >> 0x1f;
                }
                if ((uVar16 == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pFVar19 = (FScriptContainerElement *)0x0;
                pFVar20 = (pFVar11->MeshShaderMaps).AllocatorInstance.Data +
                          (longlong)(int)uVar14 * 0x30;
                if (pFVar20 != (FScriptContainerElement *)0x0) {
                  *(undefined8 *)(pFVar20 + 8) = 0;
                  *(undefined8 *)(pFVar20 + 0x10) = 0;
                  *(undefined8 *)(pFVar20 + 0x18) = 0;
                  *(undefined8 *)(pFVar20 + 0x20) = 0;
                  *(FVertexFactoryType **)(pFVar20 + 0x28) = pFVar6;
                  pFVar19 = pFVar20;
                }
              }
              iStack_1e0 = local_254;
              local_1e8 = pFVar4;
              if (((*(FShaderType ***)(pFVar19 + 8) <= &local_1e8) &&
                  (&local_1e8 <
                   *(FShaderType ***)(pFVar19 + 8) + (longlong)*(int *)(pFVar19 + 0x14) * 2)) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar12)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              iVar13 = *(int *)(pFVar19 + 0x10);
              if (iVar13 == *(int *)(pFVar19 + 0x14)) {
                iVar13 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,(ForAnyElementType *)(pFVar19 + 8),(int *)(pFVar19 + 0x14)
                                   );
              }
              *(int *)(pFVar19 + 0x10) = iVar13 + 1;
              puVar2 = (undefined8 *)(*(longlong *)(pFVar19 + 8) + (longlong)iVar13 * 0x10);
              *puVar2 = local_1e8;
              puVar2[1] = CONCAT44(uStack_1dc,iStack_1e0);
              local_1c8 = (pFVar4->HashedName).Hash;
              FSHA1::Update(&local_d8,(uchar *)&local_1c8,8);
              FSHA1::Update(&local_d8,(uchar *)&local_254,4);
            }
            local_254 = local_254 + 1;
          } while (local_254 < iVar3);
          uVar23 = (ulonglong)local_250;
          pTVar17 = local_210;
          pTVar22 = local_238;
        }
      }
      pTVar22 = (TArray<FShaderPipelineType_*,TSizedDefaultAllocator<32>_> *)&pTVar22->ArrayNum;
    }
    if ((*local_1c0 >> 0xc & 1) != 0) {
      pFVar24 = (local_200->AllocatorInstance).Data;
      iVar3 = local_200->ArrayNum;
      pFVar20 = pFVar24 + (longlong)iVar3 * 8;
      while( true ) {
        if (local_200->ArrayNum != iVar3) {
          local_260[0] = 0;
          `TCheckedPointerIterator<FShaderPipelineType_*_const,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_260);
        }
        EVar9 = local_25c;
        if (pFVar24 == pFVar20) break;
        local_248 = *(FShaderPipelineType **)pFVar24;
        bVar12 = FMeshMaterialShaderType::ShouldCompileVertexFactoryPipeline
                           (local_248,param_2,local_240,pFVar6,local_25c);
        if ((bVar12) &&
           (bVar12 = FMeshMaterialShaderType::ShouldCompilePipeline
                               (local_248,param_2,local_240,pFVar6,EVar9), pFVar11 = local_228,
           bVar12)) {
          if (pFVar19 == (FScriptContainerElement *)0x0) {
            piVar1 = &(local_228->MeshShaderMaps).ArrayMax;
            uVar14 = (local_228->MeshShaderMaps).ArrayNum;
            if (uVar14 == *piVar1) {
              uVar14 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x830,&(local_228->MeshShaderMaps).AllocatorInstance,piVar1);
            }
            (pFVar11->MeshShaderMaps).ArrayNum = uVar14 + 1;
            uVar16 = 0;
            if ((int)uVar14 < (int)(uVar14 + 1)) {
              uVar16 = ~uVar14 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar19 = (FScriptContainerElement *)0x0;
            pFVar21 = (pFVar11->MeshShaderMaps).AllocatorInstance.Data +
                      (longlong)(int)uVar14 * 0x30;
            if (pFVar21 != (FScriptContainerElement *)0x0) {
              *(undefined8 *)(pFVar21 + 8) = 0;
              *(undefined8 *)(pFVar21 + 0x10) = 0;
              *(undefined8 *)(pFVar21 + 0x18) = 0;
              *(undefined8 *)(pFVar21 + 0x20) = 0;
              *(FVertexFactoryType **)(pFVar21 + 0x28) = pFVar6;
              pFVar19 = pFVar21;
            }
          }
          if (((*(FShaderPipelineType ***)(pFVar19 + 0x18) <= &local_248) &&
              (&local_248 < *(FShaderPipelineType ***)(pFVar19 + 0x18) + *(int *)(pFVar19 + 0x24)))
             && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar12)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar13 = *(int *)(pFVar19 + 0x20);
          if (iVar13 == *(int *)(pFVar19 + 0x24)) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,(ForAnyElementType *)(pFVar19 + 0x18),(int *)(pFVar19 + 0x24))
            ;
          }
          *(int *)(pFVar19 + 0x20) = iVar13 + 1;
          *(FShaderPipelineType **)(*(longlong *)(pFVar19 + 0x18) + (longlong)iVar13 * 8) =
               local_248;
          local_1b8 = (local_248->HashedName).Hash;
          FSHA1::Update(&local_d8,(uchar *)&local_1b8,8);
        }
        pFVar24 = pFVar24 + 8;
      }
    }
    pFVar20 = (FScriptContainerElement *)((longlong)local_218 + 8);
    uVar23 = (ulonglong)local_220 & 0xffffffff;
  } while( true );
}

// FindLayout @ 147f77c60

FMaterialShaderMapLayout * __thiscall
FMaterialShaderMapLayoutCache::FindLayout(FMaterialShaderMapLayoutCache *this,ulong64 param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FMaterialShaderMapLayout *pFVar5;
  
  uVar1 = (this->ShaderMapHashTable).Hash
          [(ulonglong)(this->ShaderMapHashTable).HashMask & param_1 & 0xffffffff];
  while( true ) {
    if (uVar1 == 0xffffffff) {
      return (FMaterialShaderMapLayout *)0x0;
    }
    uVar4 = 0;
    if ((int)uVar1 < (this->MaterialParameterHashes).ArrayNum) {
      uVar4 = ~uVar1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) break;
    if (*(ulong64 *)
         ((this->MaterialParameterHashes).AllocatorInstance.Data + (longlong)(int)uVar1 * 8) ==
        param_1) {
      uVar4 = 0;
      if ((int)uVar1 < (this->ShaderMapLayouts).ArrayNum) {
        uVar4 = ~uVar1 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FMaterialShaderMapLayout *)(*pcVar2)();
        return pFVar5;
      }
      return *(FMaterialShaderMapLayout **)
              ((this->ShaderMapLayouts).AllocatorInstance.Data + (longlong)(int)uVar1 * 8);
    }
    uVar1 = (this->ShaderMapHashTable).NextIndex[uVar1];
  }
  pcVar2 = (code *)swi(3);
  pFVar5 = (FMaterialShaderMapLayout *)(*pcVar2)();
  return pFVar5;
}

