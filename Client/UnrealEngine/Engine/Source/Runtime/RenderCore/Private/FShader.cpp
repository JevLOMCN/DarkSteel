// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 14

// FShader @ 145dee460

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

FShader * __thiscall FShader::FShader(FShader *this,FShaderCompiledShaderInitializerType *param_1)

{
  TArray<FHashedName,TMemoryImageAllocator<0>_> *pTVar1;
  TArray<FShaderUniformBufferParameter,TMemoryImageAllocator<0>_> *pTVar2;
  FShaderUniformBufferParameter *this_00;
  TLinkedList<FShaderParametersMetadata_*> *pTVar3;
  wchar_t *_Str;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TLinkedList<FShaderParametersMetadata_*> **ppTVar7;
  size_t sVar8;
  ForAnyElementType FVar9;
  FShader *pFVar10;
  FHashedName *pFVar11;
  ForAnyElementType FVar12;
  undefined4 uStack_3c;
  TStringView<wchar_t> local_38;
  
  (this->Bindings).RootParameterBufferIndex = 0xffff;
  (this->Bindings).Parameters.AllocatorInstance = (ForAnyElementType)0x0;
  pTVar1 = &this->UniformBufferParameterStructs;
  (this->Bindings).Parameters.ArrayNum = 0;
  (this->Bindings).Parameters.ArrayMax = 0;
  pTVar2 = &this->UniformBufferParameters;
  (this->Bindings).ResourceParameters.AllocatorInstance = (ForAnyElementType)0x0;
  (this->Bindings).ResourceParameters.ArrayNum = 0;
  (this->Bindings).ResourceParameters.ArrayMax = 0;
  (this->Bindings).BindlessResourceParameters.AllocatorInstance = (ForAnyElementType)0x0;
  (this->Bindings).BindlessResourceParameters.ArrayNum = 0;
  (this->Bindings).BindlessResourceParameters.ArrayMax = 0;
  (this->Bindings).GraphUniformBuffers.AllocatorInstance = (ForAnyElementType)0x0;
  (this->Bindings).GraphUniformBuffers.ArrayNum = 0;
  (this->Bindings).GraphUniformBuffers.ArrayMax = 0;
  (this->Bindings).ParameterReferences.AllocatorInstance = (ForAnyElementType)0x0;
  (this->Bindings).ParameterReferences.ArrayNum = 0;
  (this->Bindings).ParameterReferences.ArrayMax = 0;
  (this->Bindings).StructureLayoutHash = 0;
  (this->ParameterMapInfo).UniformBuffers.AllocatorInstance = (ForAnyElementType)0x0;
  (this->ParameterMapInfo).UniformBuffers.ArrayNum = 0;
  (this->ParameterMapInfo).UniformBuffers.ArrayMax = 0;
  (this->ParameterMapInfo).TextureSamplers.AllocatorInstance = (ForAnyElementType)0x0;
  (this->ParameterMapInfo).TextureSamplers.ArrayNum = 0;
  (this->ParameterMapInfo).TextureSamplers.ArrayMax = 0;
  (this->ParameterMapInfo).SRVs.AllocatorInstance = (ForAnyElementType)0x0;
  (this->ParameterMapInfo).SRVs.ArrayNum = 0;
  (this->ParameterMapInfo).SRVs.ArrayMax = 0;
  (this->ParameterMapInfo).LooseParameterBuffers.AllocatorInstance = (ForAnyElementType)0x0;
  (this->ParameterMapInfo).LooseParameterBuffers.ArrayNum = 0;
  (this->ParameterMapInfo).LooseParameterBuffers.ArrayMax = 0;
  pTVar1->AllocatorInstance = (ForAnyElementType)0x0;
  (this->UniformBufferParameterStructs).ArrayNum = 0;
  (this->UniformBufferParameterStructs).ArrayMax = 0;
  pTVar2->AllocatorInstance = (ForAnyElementType)0x0;
  (this->UniformBufferParameters).ArrayNum = 0;
  (this->UniformBufferParameters).ArrayMax = 0;
  (this->Type).field0_0x0 = (TIndexedPtrBase<FShaderType,FShaderType_*>_u_0)param_1->Type;
  (this->VFType).field0_0x0 =
       (TIndexedPtrBase<FVertexFactoryType,FVertexFactoryType_*>_u_0)param_1->VertexFactoryType;
  (this->Target).field0_0x0 = (param_1->Target).field0_0x0;
  this->ResourceIndex = -1;
  this->SortKey = *(uint *)param_1->OutputHash->Hash;
  BuildParameterMapInfo(this,&param_1->ParameterMap->ParameterMap);
  ppTVar7 = FShaderParametersMetadata::GetStructList();
  pTVar3 = *ppTVar7;
  do {
    if (pTVar3 == (TLinkedList<FShaderParametersMetadata_*> *)0x0) {
      return this;
    }
    _Str = pTVar3->Element->ShaderVariableName;
    iVar6 = 0;
    if (_Str != (wchar_t *)0x0) {
      sVar8 = wcslen(_Str);
      iVar6 = (int)sVar8;
    }
    local_38._12_4_ = uStack_3c;
    local_38.Size = iVar6;
    local_38.DataPtr = _Str;
    bVar5 = FShaderParameterMap::ContainsParameterAllocation(param_1->ParameterMap,&local_38);
    if (bVar5) {
      FVar9 = pTVar1->AllocatorInstance;
      pFVar11 = &pTVar3->Element->ShaderVariableHashedName;
      FVar12 = (ForAnyElementType)
               ((longlong)&(pTVar1->AllocatorInstance).field_0x0 + ((longlong)FVar9 >> 0x18));
      if (((ulonglong)FVar9 & 1) == 0) {
        FVar12 = FVar9;
      }
      if ((ulonglong)FVar12 <= pFVar11) {
        if (((ulonglong)FVar9 & 1) != 0) {
          FVar9 = (ForAnyElementType)
                  ((longlong)&(pTVar1->AllocatorInstance).field_0x0 + ((longlong)FVar9 >> 0x18));
        }
        if ((pFVar11 < (undefined1 *)
                       ((longlong)FVar9 +
                       (longlong)(this->UniformBufferParameterStructs).ArrayMax * 8)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          pFVar10 = (FShader *)(*pcVar4)();
          return pFVar10;
        }
      }
      iVar6 = (this->UniformBufferParameterStructs).ArrayNum;
      if (iVar6 == (this->UniformBufferParameterStructs).ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                          (0x808,&pTVar1->AllocatorInstance,
                           &(this->UniformBufferParameterStructs).ArrayMax);
      }
      (this->UniformBufferParameterStructs).ArrayNum = iVar6 + 1;
      FVar9 = pTVar1->AllocatorInstance;
      if (((ulonglong)FVar9 & 1) != 0) {
        FVar9 = (ForAnyElementType)
                ((longlong)&(pTVar1->AllocatorInstance).field_0x0 + ((longlong)FVar9 >> 0x18));
      }
      FHashedName::FHashedName((FHashedName *)((longlong)FVar9 + (longlong)iVar6 * 8),pFVar11);
      iVar6 = (this->UniformBufferParameters).ArrayNum;
      if (iVar6 == (this->UniformBufferParameters).ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                          (0x202,&pTVar2->AllocatorInstance,
                           &(this->UniformBufferParameters).ArrayMax);
      }
      (this->UniformBufferParameters).ArrayNum = iVar6 + 1;
      FVar9 = pTVar2->AllocatorInstance;
      if (((ulonglong)FVar9 & 1) != 0) {
        FVar9 = (ForAnyElementType)
                ((longlong)&(pTVar2->AllocatorInstance).field_0x0 + ((longlong)FVar9 >> 0x18));
      }
      this_00 = (FShaderUniformBufferParameter *)((longlong)FVar9 + (longlong)iVar6 * 2);
      DefaultConstructItems<FShaderUniformBufferParameter,int>(this_00,1);
      FShaderUniformBufferParameter::Bind
                (this_00,param_1->ParameterMap,pTVar3->Element->ShaderVariableName,SPF_Mandatory);
    }
    pTVar3 = (TLinkedList<FShaderParametersMetadata_*> *)pTVar3->_padding_;
  } while( true );
}

// FShader @ 145dee6f0

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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

FShader * __thiscall FShader::FShader(FShader *this)

{
  (this->Bindings).Parameters.AllocatorInstance = (ForAnyElementType)0x0;
  (this->Bindings).Parameters.ArrayNum = 0;
  (this->Bindings).Parameters.ArrayMax = 0;
  (this->Bindings).ResourceParameters.AllocatorInstance = (ForAnyElementType)0x0;
  (this->Bindings).ResourceParameters.ArrayNum = 0;
  (this->Bindings).ResourceParameters.ArrayMax = 0;
  (this->Bindings).BindlessResourceParameters.AllocatorInstance = (ForAnyElementType)0x0;
  (this->Bindings).BindlessResourceParameters.ArrayNum = 0;
  (this->Bindings).BindlessResourceParameters.ArrayMax = 0;
  (this->Bindings).GraphUniformBuffers.AllocatorInstance = (ForAnyElementType)0x0;
  (this->Bindings).GraphUniformBuffers.ArrayNum = 0;
  (this->Bindings).GraphUniformBuffers.ArrayMax = 0;
  (this->Bindings).ParameterReferences.AllocatorInstance = (ForAnyElementType)0x0;
  (this->Bindings).ParameterReferences.ArrayNum = 0;
  (this->Bindings).ParameterReferences.ArrayMax = 0;
  (this->Bindings).StructureLayoutHash = 0;
  (this->ParameterMapInfo).UniformBuffers.AllocatorInstance = (ForAnyElementType)0x0;
  (this->ParameterMapInfo).UniformBuffers.ArrayNum = 0;
  (this->ParameterMapInfo).UniformBuffers.ArrayMax = 0;
  (this->ParameterMapInfo).TextureSamplers.AllocatorInstance = (ForAnyElementType)0x0;
  (this->ParameterMapInfo).TextureSamplers.ArrayNum = 0;
  (this->ParameterMapInfo).TextureSamplers.ArrayMax = 0;
  (this->ParameterMapInfo).SRVs.AllocatorInstance = (ForAnyElementType)0x0;
  (this->ParameterMapInfo).SRVs.ArrayNum = 0;
  (this->ParameterMapInfo).SRVs.ArrayMax = 0;
  (this->ParameterMapInfo).LooseParameterBuffers.AllocatorInstance = (ForAnyElementType)0x0;
  (this->ParameterMapInfo).LooseParameterBuffers.ArrayNum = 0;
  (this->ParameterMapInfo).LooseParameterBuffers.ArrayMax = 0;
  (this->UniformBufferParameterStructs).AllocatorInstance = (ForAnyElementType)0x0;
  (this->UniformBufferParameterStructs).ArrayNum = 0;
  (this->UniformBufferParameterStructs).ArrayMax = 0;
  (this->UniformBufferParameters).AllocatorInstance = (ForAnyElementType)0x0;
  (this->UniformBufferParameters).ArrayNum = 0;
  (this->UniformBufferParameters).ArrayMax = 0;
  (this->Type).field0_0x0.Ptr = (FShaderType *)0x0;
  (this->VFType).field0_0x0.Ptr = (FVertexFactoryType *)0x0;
  (this->Bindings).RootParameterBufferIndex = 0xffff;
  (this->Target).field0_0x0.Packed =
       (uint)GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel] << 4;
  this->ResourceIndex = -1;
  return this;
}

// ~FShader @ 145df18c0

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

void __thiscall FShader::~FShader(FShader *this)

{
  TArray<FShaderLooseParameterBufferInfo,TMemoryImageAllocator<0>_> *this_00;
  FShaderLooseParameterBufferInfo *pFVar1;
  
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->UniformBufferParameters);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->UniformBufferParameterStructs);
  this_00 = &(this->ParameterMapInfo).LooseParameterBuffers;
  pFVar1 = *(FShaderLooseParameterBufferInfo **)&(this_00->AllocatorInstance).field_0x0;
  if (((ulonglong)pFVar1 & 1) != 0) {
    pFVar1 = (FShaderLooseParameterBufferInfo *)
             (&(this_00->AllocatorInstance).field_0x0 + ((longlong)pFVar1 >> 0x18));
  }
  DestructItems<FShaderLooseParameterBufferInfo,int>
            (pFVar1,(this->ParameterMapInfo).LooseParameterBuffers.ArrayNum);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase((FMemoryImageAllocatorBase *)this_00);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&(this->ParameterMapInfo).SRVs);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&(this->ParameterMapInfo).TextureSamplers);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->ParameterMapInfo);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&(this->Bindings).ParameterReferences);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&(this->Bindings).GraphUniformBuffers);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&(this->Bindings).BindlessResourceParameters);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&(this->Bindings).ResourceParameters);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase((FMemoryImageAllocatorBase *)this);
  return;
}

// BuildParameterMapInfo @ 145df99a0

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

void __thiscall
FShader::BuildParameterMapInfo
          (FShader *this,
          TMap<FString,FParameterAllocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FParameterAllocation,0>_>
          *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  short *psVar3;
  undefined2 *puVar4;
  ulonglong uVar5;
  TArray<FShaderResourceParameterInfo,TMemoryImageAllocator<0>_> *pTVar6;
  TArray<FShaderLooseParameterBufferInfo,TMemoryImageAllocator<0>_> *pTVar7;
  char cVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined2 uVar11;
  code *pcVar12;
  FShader *pFVar13;
  FIdentityFunctor FVar14;
  bool bVar15;
  bool bVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  ForAnyElementType FVar20;
  ForAnyElementType FVar21;
  int *piVar22;
  longlong lVar23;
  FShaderLooseParameterInfo *pFVar24;
  char *pcVar25;
  uint uVar26;
  ForAnyElementType *pFVar27;
  ulong64 uVar28;
  TMemoryImagePtr<FScriptContainerElement>_u_0 TVar29;
  uint uVar30;
  ulonglong *puVar31;
  int iVar32;
  uint *puVar33;
  longlong lVar34;
  FShader *local_res8;
  TMap<FString,FParameterAllocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FParameterAllocation,0>_>
  *local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_138;
  undefined1 local_137;
  undefined1 local_136 [6];
  undefined2 local_130 [4];
  undefined2 local_128 [4];
  undefined2 local_120;
  undefined2 local_11e;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_118;
  undefined8 local_110;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  TMap<FString,FParameterAllocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FParameterAllocation,0>_>
  *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f0;
  int local_c8;
  int local_c4;
  TMap<FString,FParameterAllocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FParameterAllocation,0>_>
  *local_c0;
  int iStack_b8;
  uint uStack_b4;
  undefined1 *local_b0;
  undefined4 uStack_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  TMap<FString,FParameterAllocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FParameterAllocation,0>_>
  *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined4 local_4c;
  
  iVar19 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  uVar26 = 0;
  uVar30 = 0;
  uVar28 = 0;
  iVar32 = 0;
  TStack_f0.BaseBitIndex = 0;
  uVar18 = 1;
  uVar17 = 1;
  TStack_88.CurrentBitIndex = 0;
  if (iVar19 != 0) {
    puVar33 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar33 = (uint *)puVar1;
    }
    uVar17 = *puVar33;
    while (uVar17 == 0) {
      lVar23 = (longlong)iVar32;
      TStack_f0.BaseBitIndex = TStack_f0.BaseBitIndex + 0x20;
      iVar32 = iVar32 + 1;
      uVar17 = 1;
      TStack_88.CurrentBitIndex = iVar19;
      if ((int)(iVar19 + -1 + (iVar19 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar32) goto LAB_145df9a50;
      uVar17 = puVar33[lVar23 + 1];
    }
    uVar17 = -uVar17 & uVar17;
    uVar5 = (ulonglong)uVar17 * 2 + 1;
    lVar23 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    local_c8 = (int)lVar23;
    TStack_88.CurrentBitIndex = local_c8 + -1 + TStack_f0.BaseBitIndex;
    if (iVar19 < TStack_88.CurrentBitIndex) {
      TStack_88.CurrentBitIndex = iVar19;
    }
  }
LAB_145df9a50:
  TStack_f0._padding_ = CONCAT44(uVar17,iVar32);
  TStack_f0.UnvisitedBitMask = 0xffffffff;
  uVar17 = TStack_f0.UnvisitedBitMask;
  TStack_f0.UnvisitedBitMask = 0xffffffff;
  TStack_88._padding_ = TStack_f0._padding_;
  TStack_f0._28_4_ = local_4c;
  TStack_88.BaseBitIndex = TStack_f0.BaseBitIndex;
  TStack_88._28_4_ = local_4c;
  TStack_88.UnvisitedBitMask = 0xffffffff;
  local_res8 = this;
  local_res10 = param_1;
  local_f8 = param_1;
  TStack_f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  local_90 = param_1;
  TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  TStack_f0.CurrentBitIndex = TStack_88.CurrentBitIndex;
  if (TStack_88.CurrentBitIndex < *(int *)&param_1->field_0x28) {
    do {
      cVar8 = *(char *)((longlong)TStack_88.CurrentBitIndex * 0x20 + 0x16 + *(longlong *)local_90);
      if (cVar8 == '\x01') {
        uVar26 = uVar26 + 1;
      }
      else if (cVar8 == '\x02') {
LAB_145df9ad2:
        uVar30 = uVar30 + 1;
      }
      else {
        if (cVar8 != '\x03') {
          if (cVar8 == '\x05') goto LAB_145df9ad2;
          if (cVar8 != '\x06') goto LAB_145df9ad8;
        }
        uVar28 = (ulong64)((int)uVar28 + 1);
      }
LAB_145df9ad8:
      TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
      uVar17 = TStack_f0.UnvisitedBitMask;
    } while (TStack_88.CurrentBitIndex < (TStack_88.Array)->NumBits);
  }
  TStack_f0.UnvisitedBitMask = uVar17;
  pFVar13 = local_res8;
  if ((int)uVar26 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar26);
  }
  piVar22 = &(local_res8->ParameterMapInfo).UniformBuffers.ArrayMax;
  (local_res8->ParameterMapInfo).UniformBuffers.ArrayNum = 0;
  if (*piVar22 != uVar26) {
    UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (2,2,uVar26,(ForAnyElementType *)&local_res8->ParameterMapInfo,0,piVar22);
  }
  if ((int)uVar30 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar30);
  }
  piVar22 = &(pFVar13->ParameterMapInfo).TextureSamplers.ArrayMax;
  (pFVar13->ParameterMapInfo).TextureSamplers.ArrayNum = 0;
  if (*piVar22 != uVar30) {
    UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (4,2,uVar30,&(pFVar13->ParameterMapInfo).TextureSamplers.AllocatorInstance,0,piVar22);
  }
  iVar19 = (int)uVar28;
  if (iVar19 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar28);
  }
  piVar22 = &(pFVar13->ParameterMapInfo).SRVs.ArrayMax;
  (pFVar13->ParameterMapInfo).SRVs.ArrayNum = 0;
  if (*piVar22 != iVar19) {
    UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (4,2,iVar19,&(pFVar13->ParameterMapInfo).SRVs.AllocatorInstance,0,piVar22);
  }
  iVar19 = *(int *)&param_1->field_0x28;
  iStack_b8 = 0;
  local_a0 = 0;
  iStack_a4 = 0;
  if (iVar19 != 0) {
    puVar33 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar33 = (uint *)puVar1;
    }
    uVar17 = *puVar33;
    while (uVar17 == 0) {
      lVar23 = (longlong)iStack_b8;
      local_a0 = local_a0 + 0x20;
      iStack_b8 = iStack_b8 + 1;
      iStack_a4 = iVar19;
      if ((int)(iVar19 + -1 + (iVar19 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b8) goto LAB_145df9c2e;
      uVar17 = puVar33[lVar23 + 1];
    }
    uVar18 = -uVar17 & uVar17;
    uVar5 = (ulonglong)uVar18 * 2 + 1;
    lVar23 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    local_c4 = (int)lVar23;
    iStack_a4 = local_c4 + -1 + local_a0;
    if (iVar19 < iStack_a4) {
      iStack_a4 = iVar19;
    }
  }
LAB_145df9c2e:
  uStack_a8 = 0xffffffff;
  TStack_f0._padding_ = CONCAT44(uVar18,iStack_b8);
  TStack_f0.UnvisitedBitMask = 0xffffffff;
  TStack_f0._28_4_ = iStack_a4;
  TStack_f0.BaseBitIndex = local_a0;
  local_f8 = param_1;
  TStack_f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  local_c0 = param_1;
  uStack_b4 = uVar18;
  local_b0 = puVar1;
  iStack_9c = iStack_a4;
  TStack_f0.CurrentBitIndex = iStack_a4;
  if (iStack_a4 < iVar19) {
    do {
      pFVar27 = &(pFVar13->ParameterMapInfo).SRVs.AllocatorInstance;
      lVar23 = (longlong)TStack_f0.CurrentBitIndex * 0x20 + *(longlong *)local_f8;
      cVar8 = *(char *)(lVar23 + 0x16);
      if (cVar8 == '\0') {
        iVar19 = (pFVar13->ParameterMapInfo).LooseParameterBuffers.ArrayNum;
        bVar16 = false;
        uVar17 = 0;
        if (0 < iVar19) {
          lVar34 = 0;
          do {
            uVar18 = 0;
            if ((int)uVar17 < iVar19) {
              uVar18 = ~uVar17 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            FVar20 = (pFVar13->ParameterMapInfo).LooseParameterBuffers.AllocatorInstance;
            if (((ulonglong)FVar20 & 1) != 0) {
              FVar20 = (ForAnyElementType)
                       ((longlong)
                        &(pFVar13->ParameterMapInfo).LooseParameterBuffers.AllocatorInstance.
                         field_0x0 + ((longlong)FVar20 >> 0x18));
            }
            psVar3 = (short *)(lVar34 + (longlong)FVar20);
            if (*psVar3 == *(short *)(lVar23 + 0x10)) {
              iVar19 = *(int *)(psVar3 + 8);
              pFVar27 = (ForAnyElementType *)(psVar3 + 4);
              if (iVar19 == *(int *)(psVar3 + 10)) {
                iVar19 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                                   (0x204,pFVar27,(int *)(psVar3 + 10));
              }
              *(int *)(psVar3 + 8) = iVar19 + 1;
              FVar20 = *pFVar27;
              if (((ulonglong)FVar20 & 1) != 0) {
                FVar20 = (ForAnyElementType)
                         ((longlong)&pFVar27->field_0x0 + ((longlong)FVar20 >> 0x18));
              }
              uVar11 = *(undefined2 *)(lVar23 + 0x14);
              bVar16 = true;
              puVar4 = (undefined2 *)((longlong)FVar20 + (longlong)iVar19 * 4);
              *puVar4 = *(undefined2 *)(lVar23 + 0x12);
              puVar4[1] = uVar11;
              psVar3[1] = psVar3[1] + *(short *)(lVar23 + 0x14);
            }
            iVar19 = (pFVar13->ParameterMapInfo).LooseParameterBuffers.ArrayNum;
            uVar17 = uVar17 + 1;
            lVar34 = lVar34 + 0x18;
          } while ((int)uVar17 < iVar19);
          if (bVar16) goto LAB_145df9f8e;
        }
        local_120 = *(undefined2 *)(lVar23 + 0x10);
        local_11e = *(undefined2 *)(lVar23 + 0x14);
        local_118.Packed = 0;
        local_110 = 0;
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                           (0x204,(ForAnyElementType *)&local_118.Frozen,
                            (int *)((longlong)&local_110 + 4));
        local_110 = CONCAT44(local_110._4_4_,iVar19 + 1);
        TVar29 = local_118;
        if ((local_118.Packed & 1) != 0) {
          TVar29.UnfrozenPtr =
               (FScriptContainerElement *)
               ((longlong)&local_118 + ((longlong)local_118.Packed >> 0x18));
        }
        uVar11 = *(undefined2 *)(lVar23 + 0x14);
        pTVar7 = &(pFVar13->ParameterMapInfo).LooseParameterBuffers;
        *(undefined2 *)(TVar29.UnfrozenPtr + (longlong)iVar19 * 4) = *(undefined2 *)(lVar23 + 0x12);
        *(undefined2 *)(TVar29.UnfrozenPtr + (longlong)iVar19 * 4 + 2) = uVar11;
        FVar20 = pTVar7->AllocatorInstance;
        FVar21 = (ForAnyElementType)
                 ((longlong)&(pTVar7->AllocatorInstance).field_0x0 + ((longlong)FVar20 >> 0x18));
        if (((ulonglong)FVar20 & 1) == 0) {
          FVar21 = FVar20;
        }
        if ((ulonglong)FVar21 <= &local_120) {
          if (((ulonglong)FVar20 & 1) != 0) {
            FVar20 = (ForAnyElementType)
                     ((longlong)&(pTVar7->AllocatorInstance).field_0x0 + ((longlong)FVar20 >> 0x18))
            ;
          }
          if ((&local_120 <
               (undefined2 *)
               ((longlong)FVar20 +
               (longlong)(pFVar13->ParameterMapInfo).LooseParameterBuffers.ArrayMax * 0x18)) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar16)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
        }
        iVar19 = (pFVar13->ParameterMapInfo).LooseParameterBuffers.ArrayNum;
        piVar22 = &(pFVar13->ParameterMapInfo).LooseParameterBuffers.ArrayMax;
        if (iVar19 == *piVar22) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                             (0x818,&pTVar7->AllocatorInstance,piVar22);
        }
        (pFVar13->ParameterMapInfo).LooseParameterBuffers.ArrayNum = iVar19 + 1;
        FVar20 = pTVar7->AllocatorInstance;
        if (((ulonglong)FVar20 & 1) != 0) {
          FVar20 = (ForAnyElementType)
                   ((longlong)&(pTVar7->AllocatorInstance).field_0x0 + ((longlong)FVar20 >> 0x18));
        }
        lVar23 = (longlong)iVar19;
        *(undefined2 *)((longlong)FVar20 + lVar23 * 0x18) = local_120;
        pFVar27 = (ForAnyElementType *)((longlong)FVar20 + (lVar23 * 3 + 1) * 8);
        *(undefined2 *)((undefined1 *)((longlong)FVar20 + 2) + lVar23 * 0x18) = local_11e;
        *pFVar27 = (ForAnyElementType)0x0;
        lVar34 = (longlong)(int)local_110;
        TVar29 = local_118;
        if ((local_118.Packed & 1) != 0) {
          TVar29.UnfrozenPtr =
               (FScriptContainerElement *)
               ((longlong)&local_118 + ((longlong)local_118.Packed >> 0x18));
        }
        *(int *)(pFVar27 + 1) = (int)local_110;
        piVar22 = (int *)(lVar23 * 0x18 + 0x14 + (longlong)FVar20);
        if ((int)local_110 == 0) {
          *piVar22 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<1,TMemoryImageAllocator<0>::ForAnyElementType>
                    (4,2,(int)local_110,0,pFVar27,(int)local_110,piVar22);
          FVar20 = *pFVar27;
          if (((ulonglong)FVar20 & 1) != 0) {
            FVar20 = (ForAnyElementType)((longlong)&pFVar27->field_0x0 + ((longlong)FVar20 >> 0x18))
            ;
          }
          memcpy((void *)FVar20,TVar29.UnfrozenPtr,lVar34 << 2);
        }
        FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
                  ((FMemoryImageAllocatorBase *)&local_118.Frozen);
      }
      else if (cVar8 == '\x01') {
        iVar19 = (pFVar13->ParameterMapInfo).UniformBuffers.ArrayNum;
        piVar22 = &(pFVar13->ParameterMapInfo).UniformBuffers.ArrayMax;
        if (iVar19 == *piVar22) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                             (0x202,(ForAnyElementType *)&pFVar13->ParameterMapInfo,piVar22);
        }
        (pFVar13->ParameterMapInfo).UniformBuffers.ArrayNum = iVar19 + 1;
        FVar20 = (pFVar13->ParameterMapInfo).UniformBuffers.AllocatorInstance;
        if (((ulonglong)FVar20 & 1) != 0) {
          FVar20 = (ForAnyElementType)
                   ((longlong)
                    &(pFVar13->ParameterMapInfo).UniformBuffers.AllocatorInstance.field_0x0 +
                   ((longlong)FVar20 >> 0x18));
        }
        *(undefined2 *)((longlong)FVar20 + (longlong)iVar19 * 2) = *(undefined2 *)(lVar23 + 0x10);
      }
      else {
        if (cVar8 == '\x02') {
LAB_145dfa0aa:
          pFVar27 = &(pFVar13->ParameterMapInfo).TextureSamplers.AllocatorInstance;
        }
        else if (cVar8 != '\x03') {
          if (cVar8 == '\x05') goto LAB_145dfa0aa;
          if (cVar8 != '\x06') goto LAB_145df9f8e;
        }
        if (pFVar27 != (ForAnyElementType *)0x0) {
          iVar19 = *(int *)(pFVar27 + 1);
          if (iVar19 == *(int *)&pFVar27[1].field_0x4) {
            iVar19 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                               (0x204,pFVar27,(int *)&pFVar27[1].field_0x4);
          }
          *(int *)(pFVar27 + 1) = iVar19 + 1;
          FVar20 = *pFVar27;
          if (((ulonglong)FVar20 & 1) != 0) {
            FVar20 = (ForAnyElementType)((longlong)&pFVar27->field_0x0 + ((longlong)FVar20 >> 0x18))
            ;
          }
          uVar9 = *(undefined1 *)(lVar23 + 0x16);
          uVar10 = *(undefined1 *)(lVar23 + 0x10);
          puVar4 = (undefined2 *)((longlong)FVar20 + (longlong)iVar19 * 4);
          *puVar4 = *(undefined2 *)(lVar23 + 0x12);
          *(undefined1 *)(puVar4 + 1) = uVar10;
          *(undefined1 *)((longlong)puVar4 + 3) = uVar9;
        }
      }
LAB_145df9f8e:
      TStack_f0.UnvisitedBitMask = TStack_f0.UnvisitedBitMask & ~TStack_f0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f0);
    } while (TStack_f0.CurrentBitIndex < (TStack_f0.Array)->NumBits);
  }
  FVar20 = (pFVar13->ParameterMapInfo).LooseParameterBuffers.AllocatorInstance;
  if (((ulonglong)FVar20 & 1) != 0) {
    FVar20 = (ForAnyElementType)
             ((longlong)
              &(pFVar13->ParameterMapInfo).LooseParameterBuffers.AllocatorInstance.field_0x0 +
             ((longlong)FVar20 >> 0x18));
  }
  iVar19 = (pFVar13->ParameterMapInfo).LooseParameterBuffers.ArrayNum;
  FVar14 = local_res10._0_1_;
  puVar31 = (ulonglong *)((longlong)FVar20 + 8);
  while( true ) {
    if ((pFVar13->ParameterMapInfo).LooseParameterBuffers.ArrayNum != iVar19) {
      `TCheckedPointerIterator<FShaderLooseParameterBufferInfo,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_res10);
    }
    if (puVar31 + -1 == (ulonglong *)((longlong)FVar20 + (longlong)iVar19 * 0x18)) break;
    pFVar24 = (FShaderLooseParameterInfo *)*puVar31;
    if (((ulonglong)pFVar24 & 1) != 0) {
      pFVar24 = (FShaderLooseParameterInfo *)(((longlong)pFVar24 >> 0x18) + (longlong)puVar31);
    }
    AlgoImpl::
    IntroSortInternal<FShaderLooseParameterInfo,int,FIdentityFunctor,TDereferenceWrapper<FShaderLooseParameterInfo,TLess<void>_>_>
              (pFVar24,(int)puVar31[1],FVar14,(TLess<void> *)&local_res8);
    puVar31 = puVar31 + 3;
  }
  FVar20 = (pFVar13->ParameterMapInfo).LooseParameterBuffers.AllocatorInstance;
  if (((ulonglong)FVar20 & 1) != 0) {
    FVar20 = (ForAnyElementType)
             ((longlong)
              &(pFVar13->ParameterMapInfo).LooseParameterBuffers.AllocatorInstance.field_0x0 +
             ((longlong)FVar20 >> 0x18));
  }
  AlgoImpl::
  IntroSortInternal<FShaderLooseParameterBufferInfo,int,FIdentityFunctor,TDereferenceWrapper<FShaderLooseParameterBufferInfo,TLess<void>_>_>
            ((FShaderLooseParameterBufferInfo *)FVar20,
             (pFVar13->ParameterMapInfo).LooseParameterBuffers.ArrayNum,local_res10._0_1_,
             (TLess<void> *)local_res18);
  FVar20 = (pFVar13->ParameterMapInfo).UniformBuffers.AllocatorInstance;
  if (((ulonglong)FVar20 & 1) != 0) {
    FVar20 = (ForAnyElementType)
             ((longlong)&(pFVar13->ParameterMapInfo).UniformBuffers.AllocatorInstance.field_0x0 +
             ((longlong)FVar20 >> 0x18));
  }
  AlgoImpl::
  IntroSortInternal<FShaderUniformBufferParameterInfo,int,FIdentityFunctor,TDereferenceWrapper<FShaderUniformBufferParameterInfo,TLess<void>_>_>
            ((FShaderUniformBufferParameterInfo *)FVar20,
             (pFVar13->ParameterMapInfo).UniformBuffers.ArrayNum,local_res10._0_1_,
             (TLess<void> *)local_res20);
  FVar20 = (pFVar13->ParameterMapInfo).TextureSamplers.AllocatorInstance;
  if (((ulonglong)FVar20 & 1) != 0) {
    FVar20 = (ForAnyElementType)
             ((longlong)&(pFVar13->ParameterMapInfo).TextureSamplers.AllocatorInstance.field_0x0 +
             ((longlong)FVar20 >> 0x18));
  }
  AlgoImpl::
  IntroSortInternal<FShaderResourceParameterInfo,int,FIdentityFunctor,TDereferenceWrapper<FShaderResourceParameterInfo,TLess<void>_>_>
            ((FShaderResourceParameterInfo *)FVar20,
             (pFVar13->ParameterMapInfo).TextureSamplers.ArrayNum,local_res10._0_1_,
             (TLess<void> *)&local_138);
  FVar20 = (pFVar13->ParameterMapInfo).SRVs.AllocatorInstance;
  if (((ulonglong)FVar20 & 1) != 0) {
    FVar20 = (ForAnyElementType)
             ((longlong)&(pFVar13->ParameterMapInfo).SRVs.AllocatorInstance.field_0x0 +
             ((longlong)FVar20 >> 0x18));
  }
  AlgoImpl::
  IntroSortInternal<FShaderResourceParameterInfo,int,FIdentityFunctor,TDereferenceWrapper<FShaderResourceParameterInfo,TLess<void>_>_>
            ((FShaderResourceParameterInfo *)FVar20,(pFVar13->ParameterMapInfo).SRVs.ArrayNum,
             local_res10._0_1_,(TLess<void> *)&local_137);
  FVar20 = (pFVar13->ParameterMapInfo).LooseParameterBuffers.AllocatorInstance;
  if (((ulonglong)FVar20 & 1) != 0) {
    FVar20 = (ForAnyElementType)
             ((longlong)
              &(pFVar13->ParameterMapInfo).LooseParameterBuffers.AllocatorInstance.field_0x0 +
             ((longlong)FVar20 >> 0x18));
  }
  iVar19 = (pFVar13->ParameterMapInfo).LooseParameterBuffers.ArrayNum;
  piVar22 = (int *)((longlong)FVar20 + 0x10);
  while( true ) {
    if ((pFVar13->ParameterMapInfo).LooseParameterBuffers.ArrayNum != iVar19) {
      `TCheckedPointerIterator<FShaderLooseParameterBufferInfo,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_136);
    }
    piVar2 = piVar22 + -4;
    if (piVar2 == (int *)((longlong)FVar20 + (longlong)iVar19 * 0x18)) break;
    local_130[0] = (undefined2)*piVar2;
    CityHash64WithSeed((char *)local_130,2,0);
    local_128[0] = *(undefined2 *)((longlong)piVar22 + -0xe);
    CityHash64WithSeed((char *)local_128,2,0);
    local_108 = *piVar22;
    CityHash64WithSeed((char *)&local_108,4,0);
    pcVar25 = *(char **)(piVar22 + -2);
    if (((ulonglong)pcVar25 & 1) != 0) {
      pcVar25 = (char *)(((longlong)pcVar25 >> 0x18) + 8 + (longlong)piVar2);
    }
    CityHash64WithSeed(pcVar25,*piVar22 << 2,0);
    piVar22 = piVar22 + 6;
  }
  local_104 = (pFVar13->ParameterMapInfo).UniformBuffers.ArrayNum;
  CityHash64WithSeed((char *)&local_104,4,0);
  FVar20 = (pFVar13->ParameterMapInfo).UniformBuffers.AllocatorInstance;
  if (((ulonglong)FVar20 & 1) != 0) {
    FVar20 = (ForAnyElementType)
             ((longlong)&(pFVar13->ParameterMapInfo).UniformBuffers.AllocatorInstance.field_0x0 +
             ((longlong)FVar20 >> 0x18));
  }
  CityHash64WithSeed((char *)FVar20,(pFVar13->ParameterMapInfo).UniformBuffers.ArrayNum * 2,0);
  local_100 = (pFVar13->ParameterMapInfo).TextureSamplers.ArrayNum;
  pTVar6 = &(pFVar13->ParameterMapInfo).TextureSamplers;
  CityHash64WithSeed((char *)&local_100,4,0);
  FVar20 = pTVar6->AllocatorInstance;
  if (((ulonglong)FVar20 & 1) != 0) {
    FVar20 = (ForAnyElementType)
             ((longlong)&(pTVar6->AllocatorInstance).field_0x0 + ((longlong)FVar20 >> 0x18));
  }
  CityHash64WithSeed((char *)FVar20,(pFVar13->ParameterMapInfo).TextureSamplers.ArrayNum << 2,0);
  pTVar6 = &(pFVar13->ParameterMapInfo).SRVs;
  local_fc = (pFVar13->ParameterMapInfo).SRVs.ArrayNum;
  CityHash64WithSeed((char *)&local_fc,4,0);
  FVar20 = pTVar6->AllocatorInstance;
  if (((ulonglong)FVar20 & 1) != 0) {
    FVar20 = (ForAnyElementType)
             ((longlong)&(pTVar6->AllocatorInstance).field_0x0 + ((longlong)FVar20 >> 0x18));
  }
  CityHash64WithSeed((char *)FVar20,(pFVar13->ParameterMapInfo).SRVs.ArrayNum << 2,0);
  (pFVar13->ParameterMapInfo).Hash = 0;
  return;
}

// DumpDebugInfo @ 145e051c0

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

void __thiscall FShader::DumpDebugInfo(FShader *this,FShaderMapPointerTable *param_1)

{
  FName this_00;
  undefined1 local_res8 [8];
  FString local_28;
  
  if ((*(byte *)&(this->VFType).field0_0x0 & 1) != 0) {
    TPtrTableBase<FVertexFactoryType,FVertexFactoryType_*>::GetIndexedPointer
              ((TPtrTableBase<FVertexFactoryType,FVertexFactoryType_*> *)&param_1->VFTypes,
               (uint)((this->VFType).field0_0x0.PackedIndex >> 1));
  }
  if (3 < (byte)LogConsoleResponse._0_1_) {
    GetShaderFrequencyString
              (*(EShaderFrequency *)&(this->Target).field0_0x0 & (SF_NumFrequencies|SF_Pixel),true);
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
  }
  if (3 < (byte)LogConsoleResponse._0_1_) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_28);
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (3 < (byte)LogConsoleResponse._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
    }
  }
  if (3 < (byte)LogConsoleResponse._0_1_) {
    if ((*(byte *)&(this->Type).field0_0x0 & 1) != 0) {
      TPtrTableBase<FShaderType,FShaderType_*>::GetIndexedPointer
                ((TPtrTableBase<FShaderType,FShaderType_*> *)&param_1->ShaderTypes,
                 (uint)((this->Type).field0_0x0.PackedIndex >> 1));
    }
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
  }
  if (3 < (byte)LogConsoleResponse._0_1_) {
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    BytesToHex(ShaderSourceDefaultHash.Hash,0x14,&local_28);
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (3 < (byte)LogConsoleResponse._0_1_) {
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.Data.ArrayNum = 0;
      local_28.Data.ArrayMax = 0;
      BytesToHex(ShaderSourceDefaultHash.Hash,0x14,&local_28);
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (3 < (byte)LogConsoleResponse._0_1_) {
        local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_28.Data.ArrayNum = 0;
        local_28.Data.ArrayMax = 0;
        BytesToHex(ShaderSourceDefaultHash.Hash,0x14,&local_28);
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  return;
}

// Finalize @ 145e09170

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

void __thiscall FShader::Finalize(FShader *this,FShaderMapResourceCode *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FString local_18;
  
  iVar3 = FShaderMapResourceCode::FindShaderIndex(param_1,&ShaderSourceDefaultHash);
  if (iVar3 == -1) {
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    BytesToHex(ShaderSourceDefaultHash.Hash,0x14,&local_18);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewResourceIndex != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\Shader.cpp"
                       ,0x328,L"Missing shader code %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->ResourceIndex = iVar3;
  return;
}

// FindAutomaticallyBoundUniformBufferStruct @ 145e09600

/* WARNING: Type propagation algorithm not settling */
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

FShaderParametersMetadata * __thiscall
FShader::FindAutomaticallyBoundUniformBufferStruct(FShader *this,int param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FShaderParametersMetadata *pFVar6;
  ForAnyElementType FVar7;
  TMap<FHashedName,FShaderParametersMetadata_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHashedName,FShaderParametersMetadata_*,0>_>
  *pTVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  
  iVar12 = (this->UniformBufferParameters).ArrayNum;
  puVar11 = (undefined8 *)0x0;
  puVar9 = puVar11;
  puVar14 = puVar11;
  if (0 < iVar12) {
    do {
      uVar10 = (uint)puVar9;
      uVar5 = 0;
      if ((int)uVar10 < iVar12) {
        uVar5 = ~uVar10 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FShaderParametersMetadata *)(*pcVar3)();
        return pFVar6;
      }
      FVar7 = (this->UniformBufferParameters).AllocatorInstance;
      if (((ulonglong)FVar7 & 1) != 0) {
        FVar7 = (ForAnyElementType)
                ((longlong)&(this->UniformBufferParameters).AllocatorInstance.field_0x0 +
                ((longlong)FVar7 >> 0x18));
      }
      if ((*(short *)((longlong)puVar14 + (longlong)FVar7) == -1) &&
         (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<4717616138333192331>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                             ,0x8b,"IsBound()"), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FShaderParametersMetadata *)(*pcVar3)();
        return pFVar6;
      }
      if ((uint)*(ushort *)((longlong)puVar14 + (longlong)FVar7) == param_1) {
        pTVar8 = FShaderParametersMetadata::GetNameStructMap();
        uVar5 = 0;
        if ((int)uVar10 < (this->UniformBufferParameterStructs).ArrayNum) {
          uVar5 = ~uVar10 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar6 = (FShaderParametersMetadata *)(*pcVar3)();
          return pFVar6;
        }
        FVar7 = (this->UniformBufferParameterStructs).AllocatorInstance;
        if (((ulonglong)FVar7 & 1) != 0) {
          FVar7 = (ForAnyElementType)
                  ((longlong)&(this->UniformBufferParameterStructs).AllocatorInstance.field_0x0 +
                  ((longlong)FVar7 >> 0x18));
        }
        uVar2 = *(ulonglong *)((longlong)FVar7 + (longlong)(int)uVar10 * 8);
        if (*(int *)&pTVar8->field_0x8 == *(int *)&pTVar8->field_0x34) {
          return (FShaderParametersMetadata *)0x0;
        }
        puVar13 = *(undefined1 **)&pTVar8->field_0x40;
        if (*(undefined1 **)&pTVar8->field_0x40 == (undefined1 *)0x0) {
          puVar13 = &pTVar8->field_0x38;
        }
        iVar12 = *(int *)(puVar13 +
                         ((uVar2 >> 0x20) * 0x17 + uVar2 &
                         (ulonglong)(*(int *)&pTVar8->field_0x48 - 1)) * 4);
        if (iVar12 != -1) {
          while (lVar1 = *(longlong *)pTVar8 + (longlong)iVar12 * 0x18,
                *(ulonglong *)(*(longlong *)pTVar8 + (longlong)iVar12 * 0x18) != uVar2) {
            iVar12 = *(int *)(lVar1 + 0x10);
            if (iVar12 == -1) {
              return (FShaderParametersMetadata *)0x0;
            }
          }
          puVar9 = (undefined8 *)(lVar1 + 8);
          if (lVar1 == 0) {
            puVar9 = puVar11;
          }
          if (puVar9 == (undefined8 *)0x0) {
            return (FShaderParametersMetadata *)0x0;
          }
          return (FShaderParametersMetadata *)*puVar9;
        }
        return (FShaderParametersMetadata *)0x0;
      }
      iVar12 = (this->UniformBufferParameters).ArrayNum;
      puVar9 = (undefined8 *)(ulonglong)(uVar10 + 1);
      puVar14 = (undefined8 *)((longlong)puVar14 + 2);
    } while ((int)(uVar10 + 1) < iVar12);
  }
  return (FShaderParametersMetadata *)0x0;
}

// GetHash @ 145e0f520

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

FSHAHash * __thiscall FShader::GetHash(FShader *this)

{
  return &ShaderSourceDefaultHash;
}

// GetOutputHash @ 145e0fec0

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

FSHAHash * __thiscall FShader::GetOutputHash(FShader *this)

{
  return &ShaderSourceDefaultHash;
}

// GetTypeLayout @ 145e156b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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

FTypeLayoutDesc * __thiscall FShader::GetTypeLayout(FShader *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xe0;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FShader;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FShader,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<4>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    `public:_static_void___cdecl_FShader::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "UniformBufferParameterStructs";
    DAT_15518d9e2 = Freeze::FindFieldNameLength(L"UniformBufferParameterStructs");
    _DAT_15518d9c0 = StaticGetTypeLayoutDesc<TArray<FHashedName,TMemoryImageAllocator<0>_>_>();
    DAT_15518d9c8 = ::TypeBuffer[0x10];
    DAT_15518d9c8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15518d9c8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15518d9c8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15518d9c8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15518d9c8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15518d9c8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15518d9c8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FShader::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15518d9d0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15518d9d8 = 0xa0;
    _DAT_15518d9dc = 1;
    _DAT_15518d9e0 = 0;
    `public:_static_void___cdecl_FShader::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ParameterMapInfo";
    DAT_15518d9b2 = Freeze::FindFieldNameLength(L"ParameterMapInfo");
    _DAT_15518d990 = FShaderParameterMapInfo::StaticGetTypeLayout();
    DAT_15518d998 = ::TypeBuffer[0x10];
    DAT_15518d998_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15518d998_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15518d998_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15518d998_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15518d998_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15518d998_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15518d998_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FShader::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15518d9a0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15518d9a8 = 0x58;
    _DAT_15518d9ac = 1;
    _DAT_15518d9b0 = 0;
    `public:_static_void___cdecl_FShader::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "Bindings";
    DAT_15518d982 = Freeze::FindFieldNameLength(L"Bindings");
    _DAT_15518d960 = FShaderParameterBindings::StaticGetTypeLayout();
    DAT_15518d968 = ::TypeBuffer[0x10];
    DAT_15518d968_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15518d968_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15518d968_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15518d968_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15518d968_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15518d968_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15518d968_1._6_1_ = ::TypeBuffer[0x17];
    _DAT_15518d970 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15518d978 = 0;
    _DAT_15518d97c = 1;
    _DAT_15518d980 = 0;
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FShader::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// GetVertexFactoryHash @ 145e159f0

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

FSHAHash * __thiscall FShader::GetVertexFactoryHash(FShader *this)

{
  return &ShaderSourceDefaultHash;
}

// Initialize @ 145e177d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FShader::InternalLinkType<4>::Initialize(FTypeLayoutDesc *param_1)

{
  `public:_static_void___cdecl_FShader::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'::
  __l2::FieldBuffer = "SortKey";
  DAT_15518db02 = Freeze::FindFieldNameLength(L"SortKey");
  _DAT_15518dae0 = StaticGetTypeLayoutDesc<unsigned_int>();
  _DAT_15518daf8 = 0xd8;
  _DAT_15518daf0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15518dafc = 1;
  _DAT_15518db00 = 0;
  _DAT_15518dae8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FShader::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FShader::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'::
  __l2::FieldBuffer = "ResourceIndex";
  DAT_15518dad2 = Freeze::FindFieldNameLength(L"ResourceIndex");
  _DAT_15518dab0 = StaticGetTypeLayoutDesc<int>();
  _DAT_15518dac0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15518dac8 = 0xd4;
  _DAT_15518dacc = 1;
  _DAT_15518dad0 = 0;
  _DAT_15518dab8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FShader::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FShader::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'::
  __l2::FieldBuffer = "Target";
  DAT_15518daa2 = Freeze::FindFieldNameLength(L"Target");
  if ((DAT_15518d11f & 2) == 0) {
    DAT_15518d11f = DAT_15518d11f | 3;
    _DAT_15518d110 = 4;
    _DAT_15518d0c0 = L"FShaderTarget";
    _DAT_15518d0d8 = TStaticGetTypeLayoutHelper<FShaderTarget>::CallWriteMemoryImage;
    _DAT_15518d0e0 = TStaticGetTypeLayoutHelper<FShaderTarget>::CallUnfrozenCopy;
    _DAT_15518d0e8 = TStaticGetTypeLayoutHelper<FShaderTarget>::CallAppendHash;
    _DAT_15518d0f0 = TStaticGetTypeLayoutHelper<FShaderTarget>::CallGetTargetAlignment;
    _DAT_15518d0f8 = TStaticGetTypeLayoutHelper<FShaderTarget>::CallToString;
    _DAT_15518d0d0 = TStaticGetTypeLayoutHelper<FShaderTarget>::CallDestroy;
    _DAT_15518d118 = 4;
    DAT_15518d11c = 0;
    _DAT_15518d114 = 4;
  }
  _DAT_15518da90 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15518da80 =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<FShaderTarget>::Do(void)'
        ::__l2::TypeBuffer;
  _DAT_15518da98 = 0xd0;
  _DAT_15518da9c = 1;
  _DAT_15518daa0 = 0;
  _DAT_15518da88 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FShader::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FShader::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'::
  __l2::FieldBuffer = "VFType";
  DAT_15518da72 = Freeze::FindFieldNameLength(L"VFType");
  _DAT_15518da50 =
       StaticGetTypeLayoutDesc<TIndexedPtrBase<FVertexFactoryType,FVertexFactoryType_*>_>();
  _DAT_15518da60 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15518da68 = 200;
  _DAT_15518da6c = 1;
  _DAT_15518da70 = 0;
  _DAT_15518da58 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FShader::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FShader::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'::
  __l2::FieldBuffer = "Type";
  DAT_15518da42 = Freeze::FindFieldNameLength(L"Type");
  _DAT_15518da20 = StaticGetTypeLayoutDesc<TIndexedPtrBase<FShaderType,FShaderType_*>_>();
  _DAT_15518da30 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15518da38 = 0xc0;
  _DAT_15518da3c = 1;
  _DAT_15518da40 = 0;
  _DAT_15518da28 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FShader::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FShader::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'::
  __l2::FieldBuffer = "UniformBufferParameters";
  DAT_15518da12 = Freeze::FindFieldNameLength(L"UniformBufferParameters");
  if ((DAT_155134097 & 2) == 0) {
    DAT_155134097 = DAT_155134097 | 3;
    _DAT_155134088 = 0x10;
    _DAT_155134038 = L"(TArray<T, AllocatorType>)";
    _DAT_155134050 =
         TStaticGetTypeLayoutHelper<TArray<FShaderUniformBufferParameter,TMemoryImageAllocator<0>_>_>
         ::CallWriteMemoryImage;
    _DAT_155134058 =
         TStaticGetTypeLayoutHelper<TArray<FShaderUniformBufferParameter,TMemoryImageAllocator<0>_>_>
         ::CallUnfrozenCopy;
    _DAT_155134060 =
         TStaticGetTypeLayoutHelper<TArray<FShaderUniformBufferParameter,TMemoryImageAllocator<0>_>_>
         ::CallAppendHash;
    _DAT_155134068 =
         TStaticGetTypeLayoutHelper<TArray<FShaderUniformBufferParameter,TMemoryImageAllocator<0>_>_>
         ::CallGetTargetAlignment;
    _DAT_155134070 =
         TStaticGetTypeLayoutHelper<TArray<FShaderUniformBufferParameter,TMemoryImageAllocator<0>_>_>
         ::CallToString;
    _DAT_155134048 =
         TStaticGetTypeLayoutHelper<TArray<FShaderUniformBufferParameter,TMemoryImageAllocator<0>_>_>
         ::CallDestroy;
    _DAT_155134090 = 8;
    DAT_155134094 = 0;
    _DAT_15513408c = 0x10;
  }
  _DAT_15518da00 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15518d9f0 =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<FShaderUniformBufferParameter,TMemoryImageAllocator<0>_>_>::Do(void)'
        ::__l2::TypeBuffer;
  _DAT_15518da08 = 0xb0;
  _DAT_15518da0c = 1;
  _DAT_15518da10 = 0;
  _DAT_15518d9f8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FShader::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  return;
}

// InternalDestroy @ 145e18700

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

void __cdecl
FShader::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    ~FShader(param_1);
  }
  memset(param_1,0xfe,0xe0);
  return;
}

// StaticGetTypeLayout @ 145e30540

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FShader::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xe0;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FShader;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FShader,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<4>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    `public:_static_void___cdecl_FShader::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "UniformBufferParameterStructs";
    DAT_15518d9e2 = Freeze::FindFieldNameLength(L"UniformBufferParameterStructs");
    _DAT_15518d9c0 = StaticGetTypeLayoutDesc<TArray<FHashedName,TMemoryImageAllocator<0>_>_>();
    DAT_15518d9c8 = ::TypeBuffer[0x10];
    DAT_15518d9c8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15518d9c8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15518d9c8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15518d9c8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15518d9c8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15518d9c8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15518d9c8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FShader::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15518d9d0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15518d9d8 = 0xa0;
    _DAT_15518d9dc = 1;
    _DAT_15518d9e0 = 0;
    `public:_static_void___cdecl_FShader::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ParameterMapInfo";
    DAT_15518d9b2 = Freeze::FindFieldNameLength(L"ParameterMapInfo");
    _DAT_15518d990 = FShaderParameterMapInfo::StaticGetTypeLayout();
    DAT_15518d998 = ::TypeBuffer[0x10];
    DAT_15518d998_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15518d998_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15518d998_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15518d998_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15518d998_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15518d998_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15518d998_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FShader::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15518d9a0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15518d9a8 = 0x58;
    _DAT_15518d9ac = 1;
    _DAT_15518d9b0 = 0;
    `public:_static_void___cdecl_FShader::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "Bindings";
    DAT_15518d982 = Freeze::FindFieldNameLength(L"Bindings");
    _DAT_15518d960 = FShaderParameterBindings::StaticGetTypeLayout();
    DAT_15518d968 = ::TypeBuffer[0x10];
    DAT_15518d968_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15518d968_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15518d968_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15518d968_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15518d968_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15518d968_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15518d968_1._6_1_ = ::TypeBuffer[0x17];
    _DAT_15518d970 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15518d978 = 0;
    _DAT_15518d97c = 1;
    _DAT_15518d980 = 0;
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FShader::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

