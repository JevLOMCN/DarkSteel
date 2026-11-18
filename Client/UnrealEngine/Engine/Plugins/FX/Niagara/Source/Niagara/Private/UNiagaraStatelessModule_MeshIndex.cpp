// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 10

// StaticClass @ 14940cc50

UClass * __cdecl UNiagaraStatelessModule_MeshIndex::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_MeshIndex.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_MeshIndex",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_MeshIndex.InnerSingleton,
               StaticRegisterNativesUNiagaraStatelessModule_MeshIndex,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraStatelessModule_MeshIndex>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_MeshIndex>,local_res8,
               UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_MeshIndex.InnerSingleton;
}

// UNiagaraStatelessModule_MeshIndex @ 149429a60

UNiagaraStatelessModule_MeshIndex * __thiscall
UNiagaraStatelessModule_MeshIndex::UNiagaraStatelessModule_MeshIndex
          (UNiagaraStatelessModule_MeshIndex *this,FVTableHelper *param_1)

{
  int iVar1;
  
  UNiagaraStatelessModule::UNiagaraStatelessModule((UNiagaraStatelessModule *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_MeshIndex__6B_;
  (this->MeshIndex).Mode = UniformConstant;
  (this->MeshIndex).ParameterBinding.Name.ComparisonIndex = 0;
  (this->MeshIndex).ParameterBinding.Name.Number = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->MeshIndex).ParameterBinding.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->MeshIndex).ParameterBinding.TypeDefHandle.RegisteredTypeIndex = iVar1;
  FInstancedStruct::FInstancedStruct(&(this->MeshIndex).ParameterExpression);
  (this->MeshIndex).Min = 0;
  (this->MeshIndex).Max = 0;
  (this->MeshIndex).Mode = UniformConstant;
  (this->MeshIndexWeight).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshIndexWeight).ArrayNum = 0;
  (this->MeshIndexWeight).ArrayMax = 0;
  return this;
}

// UNiagaraStatelessModule_MeshIndex @ 149429ad0

UNiagaraStatelessModule_MeshIndex * __thiscall
UNiagaraStatelessModule_MeshIndex::UNiagaraStatelessModule_MeshIndex
          (UNiagaraStatelessModule_MeshIndex *this)

{
  int iVar1;
  
  UNiagaraStatelessModule::UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_MeshIndex__6B_;
  (this->MeshIndex).Mode = UniformConstant;
  (this->MeshIndex).ParameterBinding.Name.ComparisonIndex = 0;
  (this->MeshIndex).ParameterBinding.Name.Number = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->MeshIndex).ParameterBinding.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->MeshIndex).ParameterBinding.TypeDefHandle.RegisteredTypeIndex = iVar1;
  FInstancedStruct::FInstancedStruct(&(this->MeshIndex).ParameterExpression);
  (this->MeshIndex).Min = 0;
  (this->MeshIndex).Max = 0;
  (this->MeshIndex).Mode = UniformConstant;
  (this->MeshIndexWeight).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshIndexWeight).ArrayNum = 0;
  (this->MeshIndexWeight).ArrayMax = 0;
  return this;
}

// ~UNiagaraStatelessModule_MeshIndex @ 14942ca90

void __thiscall
UNiagaraStatelessModule_MeshIndex::~UNiagaraStatelessModule_MeshIndex
          (UNiagaraStatelessModule_MeshIndex *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_MeshIndex__6B_;
  pFVar1 = (this->MeshIndexWeight).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FInstancedStruct::Reset(&(this->MeshIndex).ParameterExpression);
  UNiagaraStatelessModule::~UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  return;
}

// BuildEmitterData @ 1494340d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
UNiagaraStatelessModule_MeshIndex::BuildEmitterData
          (UNiagaraStatelessModule_MeshIndex *this,FNiagaraStatelessEmitterDataBuildContext *param_1
          )

{
  float fVar1;
  ENiagaraDistributionMode EVar2;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  TArrayView<float_const_,int> *pTVar8;
  float *pfVar9;
  ForElementType<float> FVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  ForAnyElementType FVar14;
  uint uVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  longlong lVar19;
  undefined1 auStackY_1c8 [32];
  TArrayView<float_const_,int> local_198;
  longlong local_188;
  FScriptContainerElement *local_180;
  FNiagaraStatelessEmitterDataBuildContext *local_178;
  ForElementType<float> local_168;
  int iStack_160;
  undefined4 uStack_15c;
  FMeshIndexWeightedSampler local_158;
  TArrayView<float_const_,int> local_108;
  TArrayView<float_const_,int> local_f8;
  code *local_e8 [2];
  undefined **local_d8;
  code *local_d0;
  undefined8 local_c0;
  TArrayView<float_const_,int> local_b8;
  ForElementType<float> local_a8;
  int local_60 [2];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  pTVar3 = param_1->BuiltData;
  uVar15 = pTVar3->ArrayNum + 3U & 0xfffffffc;
  iVar11 = (uVar15 - pTVar3->ArrayNum) + 0x10;
  local_178 = param_1;
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar11,&pTVar3->AllocatorInstance,&pTVar3->ArrayNum,&pTVar3->ArrayMax);
  memset((pTVar3->AllocatorInstance).Data + iVar6,0,(longlong)iVar11);
  lVar19 = (longlong)(int)uVar15;
  uVar15 = 0;
  lVar16 = 0;
  pFVar17 = (param_1->BuiltData->AllocatorInstance).Data;
  *(undefined8 *)(pFVar17 + lVar19) = 0;
  *(undefined4 *)(pFVar17 + lVar19 + 8) = 0;
  *(undefined4 *)(pFVar17 + lVar19 + 0xc) = 0xffffffff;
  local_188 = lVar19;
  local_180 = pFVar17;
  bVar5 = UNiagaraStatelessModule::IsModuleEnabled((UNiagaraStatelessModule *)this);
  if (!bVar5) {
    return;
  }
  iVar6 = FNiagaraStatelessEmitterDataBuildContext::FindParticleVariableIndex
                    (param_1,&NiagaraStatelessCommon::GGlobals.MeshIndexVariable);
  *(int *)(pFVar17 + lVar19 + 0xc) = iVar6;
  if (iVar6 == -1) {
    return;
  }
  EVar2 = (this->MeshIndex).Mode;
  if (EVar2 == Binding) {
    uVar7 = FNiagaraStatelessEmitterDataBuildContext::AddRendererBinding
                      (param_1,&(this->MeshIndex).ParameterBinding);
LAB_1494341d4:
    uVar12 = uVar15;
    uVar18 = uVar15;
    if (uVar7 != 0xffffffff) {
      *(uint *)(pFVar17 + lVar19) = uVar7 | 0x80000000;
      goto LAB_149434511;
    }
  }
  else {
    if (EVar2 == Expression) {
      uVar7 = FNiagaraStatelessEmitterDataBuildContext::AddExpression
                        (param_1,&(this->MeshIndex).ParameterExpression);
      goto LAB_1494341d4;
    }
    uVar18 = (this->MeshIndex).Min;
    uVar12 = uVar18;
    if (EVar2 != UniformConstant) {
      uVar12 = (this->MeshIndex).Max;
    }
  }
  *(uint *)(pFVar17 + lVar19) = uVar18;
  if ((0 < (int)(uVar12 - uVar18)) && ((int)(uVar12 - uVar18) < 0x100)) {
    pTVar8 = TArrayView<float_const_,int>::
             TArrayView<float_const_,int><TArray<float,TSizedDefaultAllocator<32>_>_const_&,TArray<float,TSizedDefaultAllocator<32>_>_>
                       (&local_b8,&this->MeshIndexWeight);
    local_108.DataPtr = pTVar8->DataPtr;
    local_108.ArrayNum = pTVar8->ArrayNum;
    local_108._12_4_ = *(undefined4 *)&pTVar8->field_0xc;
    NSMMeshIndexPrivate::FMeshIndexWeightedSampler::FMeshIndexWeightedSampler
              (&local_158,(uVar12 - uVar18) + 1,&local_108);
    FWeightedRandomSampler::Initialize((FWeightedRandomSampler *)&local_158);
    iVar6 = (int)local_158._padding_;
    lVar13 = (longlong)(int)local_158._padding_;
    if (1 < (int)local_158._padding_) {
      local_a8.SecondaryData = (ForElementType<float>)0x0;
      *(int *)(pFVar17 + lVar19 + 8) = (int)local_158._padding_ + -1;
      local_60[0] = 0;
      local_60[1] = 0x10;
      UE::Core::Private::
      ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<float>_>
                (4,4,(int)local_158._padding_ * 2,&local_a8,local_60,local_60 + 1);
      if (0 < iVar6) {
        uVar7 = 0;
        do {
          iVar6 = (int)local_158._padding_;
          local_198.DataPtr = (float *)local_158._padding_;
          if ((local_158._padding_ & 1U) != 0) {
            local_198.DataPtr = (float *)((longlong)&local_158 + (local_158._padding_ >> 0x18) + 8);
          }
          if (((int)local_158._padding_ < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_198.ArrayNum = iVar6;
          pfVar9 = TArrayView<float_const_,int>::operator[](&local_198,uVar15);
          fVar1 = *pfVar9;
          uVar12 = 0;
          if ((int)uVar7 < local_60[0]) {
            uVar12 = ~uVar7 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar6 = (int)local_158._padding_;
          FVar10 = (ForElementType<float>)&local_a8;
          if (local_a8.SecondaryData != (ForElementType<float>)0x0) {
            FVar10 = local_a8.SecondaryData;
          }
          *(float *)((longlong)FVar10 + lVar16 * 8) = fVar1;
          FVar14 = (ForAnyElementType)local_158._padding_;
          if ((local_158._padding_ & 1U) != 0) {
            FVar14 = (ForAnyElementType)
                     ((longlong)&local_158 + (local_158._padding_ >> 0x18) + 0x18);
          }
          if (((int)local_158._padding_ < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar12 = 0;
          if ((int)uVar15 < iVar6) {
            uVar12 = ~uVar15 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar6 = *(int *)((longlong)FVar14 + lVar16 * 4);
          uVar12 = 0;
          if ((int)(uVar7 + 1) < local_60[0]) {
            uVar12 = ~(uVar7 + 1) >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar10 = (ForElementType<float>)&local_a8;
          if (local_a8.SecondaryData != (ForElementType<float>)0x0) {
            FVar10 = local_a8.SecondaryData;
          }
          uVar15 = uVar15 + 1;
          uVar7 = uVar7 + 2;
          *(float *)((uchar *)((longlong)FVar10 + 4) + lVar16 * 8) = (float)(int)(iVar6 + uVar18);
          lVar16 = lVar16 + 1;
          pFVar17 = local_180;
          lVar19 = local_188;
          param_1 = local_178;
        } while (lVar16 < lVar13);
      }
      iVar6 = local_60[0];
      local_168 = (ForElementType<float>)&local_a8;
      if (local_a8.SecondaryData != (ForElementType<float>)0x0) {
        local_168 = local_a8.SecondaryData;
      }
      if ((local_60[0] < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iStack_160 = iVar6;
      local_f8._12_4_ = uStack_15c;
      local_f8.ArrayNum = iVar6;
      local_f8.DataPtr = (float *)local_168;
      uVar15 = FNiagaraStatelessEmitterDataBuildContext::AddStaticData(param_1,&local_f8);
      *(uint *)(pFVar17 + lVar19 + 4) = uVar15;
      if (local_a8.SecondaryData != (ForElementType<float>)0x0) {
        FMemory::Free((void *)local_a8.SecondaryData);
      }
    }
    if (local_158.PerIndexWeight.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.PerIndexWeight.AllocatorInstance.Data);
    }
    FWeightedRandomSampler::~FWeightedRandomSampler((FWeightedRandomSampler *)&local_158);
  }
LAB_149434511:
  local_c0 = 0;
  local_d8 = &
             ___7__TFunction_OwnedObject_P6AXAEBVFParticleSimulationContext_NiagaraStateless___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_d0 = NSMMeshIndexPrivate::ParticleSimulate;
  local_e8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<void_(__cdecl*)(NiagaraStateless::FParticleSimulationContext_const_&),void,NiagaraStateless::FParticleSimulationContext_const_&>
                ::Call;
  FNiagaraStatelessEmitterDataBuildContext::AddParticleSimulationExecSimulate
            (param_1,(TFunction<void___cdecl(NiagaraStateless::FParticleSimulationContext_const_&)>
                      *)local_e8);
  return;
}

// BuildShaderParameters @ 14943a8b0

void __thiscall
UNiagaraStatelessModule_MeshIndex::BuildShaderParameters
          (UNiagaraStatelessModule_MeshIndex *this,FNiagaraStatelessShaderParametersBuilder *param_1
          )

{
  int iVar1;
  FShaderParametersMetadataBuilder *this_00;
  FShaderParametersMetadata *pFVar2;
  
  iVar1 = param_1->ParameterOffset;
  this_00 = param_1->MetadataBuilder;
  if (this_00 != (FShaderParametersMetadataBuilder *)0x0) {
    pFVar2 = TShaderParameterStructTypeInfo<NiagaraStateless::FMeshIndexModule_ShaderParameters>::
             GetStructMetadata();
    FShaderParametersMetadataBuilder::AddIncludedStruct(this_00,pFVar2,Float);
  }
  pFVar2 = TShaderParameterStructTypeInfo<NiagaraStateless::FMeshIndexModule_ShaderParameters>::
           GetStructMetadata();
  param_1->ParameterOffset = pFVar2->Size + (iVar1 + 0xfU & 0xfffffff0);
  return;
}

// GetPrivateStaticClass @ 14944bcb0

UClass * __cdecl UNiagaraStatelessModule_MeshIndex::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_MeshIndex.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_MeshIndex",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_MeshIndex.InnerSingleton,
               StaticRegisterNativesUNiagaraStatelessModule_MeshIndex,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraStatelessModule_MeshIndex>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_MeshIndex>,local_res8,
               UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_MeshIndex.InnerSingleton;
}

// SetShaderParameters @ 149465ec0

void __thiscall
UNiagaraStatelessModule_MeshIndex::SetShaderParameters
          (UNiagaraStatelessModule_MeshIndex *this,
          FNiagaraStatelessSetShaderParameterContext *param_1)

{
  uchar *puVar1;
  code *pcVar2;
  bool bVar3;
  FShaderParametersMetadata *pFVar4;
  uint uVar5;
  uchar *puVar6;
  uint uVar7;
  
  uVar5 = param_1->ParameterOffset + 0xf & 0xfffffff0;
  pFVar4 = TShaderParameterStructTypeInfo<NiagaraStateless::FMeshIndexModule_ShaderParameters>::
           GetStructMetadata();
  FNiagaraStatelessSetShaderParameterContext::ValidateIncludeStructType(param_1,uVar5,pFVar4);
  pFVar4 = TShaderParameterStructTypeInfo<NiagaraStateless::FMeshIndexModule_ShaderParameters>::
           GetStructMetadata();
  uVar7 = param_1->BuiltDataOffset + 3U & 0xfffffffc;
  puVar6 = param_1->ShaderParametersBase + uVar5;
  param_1->ParameterOffset = pFVar4->Size + uVar5;
  param_1->BuiltDataOffset = uVar7 + 0x10;
  if ((param_1->BuiltData).ArrayNum < (int)(uVar7 + 0x10)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("BuiltDataOffset <= BuiltData.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessSetShaderParameterContext.h"
                       ,0x22,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  puVar1 = (param_1->BuiltData).DataPtr;
  *(undefined4 *)puVar6 = *(undefined4 *)(puVar1 + (int)uVar7);
  *(undefined4 *)(puVar6 + 4) = *(undefined4 *)(puVar1 + (longlong)(int)uVar7 + 4);
  *(undefined4 *)(puVar6 + 8) = *(undefined4 *)(puVar1 + (longlong)(int)uVar7 + 8);
  return;
}

// StaticRegisterNativesUNiagaraStatelessModule_MeshIndex @ 149469cd0

void __cdecl
UNiagaraStatelessModule_MeshIndex::StaticRegisterNativesUNiagaraStatelessModule_MeshIndex(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UNiagaraStatelessModule_MeshIndex_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execNeedsMeshIndexWeights @ 1494722d0

void __cdecl
UNiagaraStatelessModule_MeshIndex::execNeedsMeshIndexWeights
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((param_1[1].field_0x8 != '\x05') && (param_1[1].field_0x8 != '\x06')) {
    *(undefined1 *)param_3 = 0;
    return;
  }
  *(undefined1 *)param_3 = 1;
  return;
}

