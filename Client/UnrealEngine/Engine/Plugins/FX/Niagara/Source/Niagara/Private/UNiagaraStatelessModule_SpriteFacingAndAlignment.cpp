// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 9

// StaticClass @ 14940c5a0

UClass * __cdecl UNiagaraStatelessModule_SpriteFacingAndAlignment::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_SpriteFacingAndAlignment.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_SpriteFacingAndAlignment",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_SpriteFacingAndAlignment.
                InnerSingleton,StaticRegisterNativesUNiagaraStatelessModule_SpriteFacingAndAlignment
               ,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraStatelessModule_SpriteFacingAndAlignment>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_SpriteFacingAndAlignment>,
               local_res8,UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_SpriteFacingAndAlignment.InnerSingleton;
}

// UNiagaraStatelessModule_SpriteFacingAndAlignment @ 14942a700

UNiagaraStatelessModule_SpriteFacingAndAlignment * __thiscall
UNiagaraStatelessModule_SpriteFacingAndAlignment::UNiagaraStatelessModule_SpriteFacingAndAlignment
          (UNiagaraStatelessModule_SpriteFacingAndAlignment *this,FVTableHelper *param_1)

{
  UNiagaraStatelessModule::UNiagaraStatelessModule((UNiagaraStatelessModule *)this,param_1);
  this->bSpriteFacingEnabled = true;
  this->bSpriteAlignmentEnabled = false;
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_SpriteFacingAndAlignment__6B_;
  FNiagaraDistributionRangeVector3::FNiagaraDistributionRangeVector3
            (&this->SpriteFacing,&UE::Math::TVector<float>::XAxisVector);
  FNiagaraDistributionRangeVector3::FNiagaraDistributionRangeVector3
            (&this->SpriteAlignment,&UE::Math::TVector<float>::YAxisVector);
  return this;
}

// UNiagaraStatelessModule_SpriteFacingAndAlignment @ 14942a750

UNiagaraStatelessModule_SpriteFacingAndAlignment * __thiscall
UNiagaraStatelessModule_SpriteFacingAndAlignment::UNiagaraStatelessModule_SpriteFacingAndAlignment
          (UNiagaraStatelessModule_SpriteFacingAndAlignment *this)

{
  UNiagaraStatelessModule::UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  this->bSpriteFacingEnabled = true;
  this->bSpriteAlignmentEnabled = false;
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_SpriteFacingAndAlignment__6B_;
  FNiagaraDistributionRangeVector3::FNiagaraDistributionRangeVector3
            (&this->SpriteFacing,&UE::Math::TVector<float>::XAxisVector);
  FNiagaraDistributionRangeVector3::FNiagaraDistributionRangeVector3
            (&this->SpriteAlignment,&UE::Math::TVector<float>::YAxisVector);
  return this;
}

// ~UNiagaraStatelessModule_SpriteFacingAndAlignment @ 14942ce80

void __thiscall
UNiagaraStatelessModule_SpriteFacingAndAlignment::~UNiagaraStatelessModule_SpriteFacingAndAlignment
          (UNiagaraStatelessModule_SpriteFacingAndAlignment *this)

{
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_SpriteFacingAndAlignment__6B_;
  FInstancedStruct::Reset((FInstancedStruct *)&(this->SpriteAlignment)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->SpriteFacing)._padding_);
  UNiagaraStatelessModule::~UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  return;
}

// BuildEmitterData @ 1494367f0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
UNiagaraStatelessModule_SpriteFacingAndAlignment::BuildEmitterData
          (UNiagaraStatelessModule_SpriteFacingAndAlignment *this,
          FNiagaraStatelessEmitterDataBuildContext *param_1)

{
  char cVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined1 local_58 [16];
  undefined **local_48;
  code *local_40;
  undefined8 local_30;
  
  pTVar2 = param_1->BuiltData;
  uVar7 = pTVar2->ArrayNum + 3U & 0xfffffffc;
  iVar5 = (uVar7 - pTVar2->ArrayNum) + 0x48;
  iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar5,&pTVar2->AllocatorInstance,&pTVar2->ArrayNum,&pTVar2->ArrayMax);
  memset((pTVar2->AllocatorInstance).Data + iVar4,0,(longlong)iVar5);
  pFVar6 = (param_1->BuiltData->AllocatorInstance).Data + (int)uVar7;
  *(undefined8 *)pFVar6 = 0;
  *(undefined8 *)(pFVar6 + 8) = 0;
  *(undefined8 *)(pFVar6 + 0x10) = 0;
  *(undefined8 *)(pFVar6 + 0x18) = 0;
  *(undefined8 *)(pFVar6 + 0x20) = 0;
  *(undefined8 *)(pFVar6 + 0x28) = 0;
  *(undefined8 *)(pFVar6 + 0x30) = 0;
  *(undefined8 *)(pFVar6 + 0x38) = 0;
  *(undefined8 *)(pFVar6 + 0x40) = 0;
  *(undefined4 *)pFVar6 = 0xffffffff;
  *(undefined8 *)(pFVar6 + 4) = UE::Math::TVector<float>::XAxisVector.field0_0x0._0_8_;
  *(float *)(pFVar6 + 0xc) = UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.Z;
  *(undefined8 *)(pFVar6 + 0x10) = UE::Math::TVector<float>::XAxisVector.field0_0x0._0_8_;
  *(float *)(pFVar6 + 0x18) = UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.Z;
  *(undefined4 *)(pFVar6 + 0x1c) = 0xffffffff;
  *(undefined8 *)(pFVar6 + 0x20) = UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_;
  *(float *)(pFVar6 + 0x28) = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
  *(undefined8 *)(pFVar6 + 0x2c) = UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_;
  *(float *)(pFVar6 + 0x34) = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
  *(undefined8 *)(pFVar6 + 0x38) = 0xffffffffffffffff;
  *(undefined8 *)(pFVar6 + 0x40) = 0xffffffffffffffff;
  bVar3 = UNiagaraStatelessModule::IsModuleEnabled((UNiagaraStatelessModule *)this);
  if (bVar3) {
    if (this->bSpriteFacingEnabled != false) {
      iVar4 = FNiagaraStatelessEmitterDataBuildContext::FindParticleVariableIndex
                        (param_1,&NiagaraStatelessCommon::GGlobals.SpriteFacingVariable);
      *(int *)(pFVar6 + 0x38) = iVar4;
      iVar4 = FNiagaraStatelessEmitterDataBuildContext::FindParticleVariableIndex
                        (param_1,&NiagaraStatelessCommon::GGlobals.PreviousSpriteFacingVariable);
      *(int *)(pFVar6 + 0x3c) = iVar4;
    }
    if (this->bSpriteAlignmentEnabled != false) {
      iVar4 = FNiagaraStatelessEmitterDataBuildContext::FindParticleVariableIndex
                        (param_1,&NiagaraStatelessCommon::GGlobals.SpriteAlignmentVariable);
      *(int *)(pFVar6 + 0x40) = iVar4;
      iVar4 = FNiagaraStatelessEmitterDataBuildContext::FindParticleVariableIndex
                        (param_1,&NiagaraStatelessCommon::GGlobals.PreviousSpriteAlignmentVariable);
      *(int *)(pFVar6 + 0x44) = iVar4;
    }
    uVar8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    uVar11 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    if ((((*(int *)(pFVar6 + 0x38) != -1) || (*(int *)(pFVar6 + 0x3c) != -1)) ||
        (*(int *)(pFVar6 + 0x40) != -1)) || (*(int *)(pFVar6 + 0x44) != -1)) {
      if (this->bSpriteFacingEnabled != false) {
        cVar1 = (char)(this->SpriteFacing)._padding_;
        local_58._4_4_ = (undefined4)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        local_58._8_4_ =
             (undefined4)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
        local_58._12_4_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        if (cVar1 == '\x01') {
          local_58._0_4_ =
               FNiagaraStatelessEmitterDataBuildContext::AddRendererBinding
                         (param_1,(FNiagaraVariableBase *)
                                  ((longlong)&(this->SpriteFacing)._padding_ + 4));
        }
        else if (cVar1 == '\x02') {
          local_58._0_4_ =
               FNiagaraStatelessEmitterDataBuildContext::AddExpression
                         (param_1,(FInstancedStruct *)&(this->SpriteFacing)._padding_);
        }
        else {
          uVar11 = *(undefined8 *)&(this->SpriteFacing).Min.field0_0x0;
          local_58._4_4_ = (undefined4)uVar11;
          local_58._8_4_ = (undefined4)((ulonglong)uVar11 >> 0x20);
          local_58._12_4_ = (this->SpriteFacing).Min.field0_0x0._s_0.Z;
          local_58._0_4_ = -1;
          uVar9 = local_58._4_4_;
          uVar10 = local_58._8_4_;
          uVar8 = local_58._12_4_;
          if (cVar1 != '\x03') {
            uVar11 = *(undefined8 *)&(this->SpriteFacing).Max.field0_0x0;
            uVar9 = (int)uVar11;
            uVar10 = (int)((ulonglong)uVar11 >> 0x20);
            uVar8 = (this->SpriteFacing).Max.field0_0x0._s_0.Z;
          }
          uVar11 = CONCAT44(uVar10,uVar9);
        }
        *(ulonglong *)pFVar6 = CONCAT44(local_58._4_4_,local_58._0_4_);
        *(ulonglong *)(pFVar6 + 8) = CONCAT44(local_58._12_4_,local_58._8_4_);
        *(undefined8 *)(pFVar6 + 0x10) = uVar11;
        *(undefined4 *)(pFVar6 + 0x18) = uVar8;
      }
      uVar8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      uVar11 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      if (this->bSpriteAlignmentEnabled != false) {
        cVar1 = (char)(this->SpriteAlignment)._padding_;
        local_58._4_4_ = (undefined4)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        local_58._8_4_ =
             (undefined4)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
        local_58._12_4_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        if (cVar1 == '\x01') {
          local_58._0_4_ =
               FNiagaraStatelessEmitterDataBuildContext::AddRendererBinding
                         (param_1,(FNiagaraVariableBase *)
                                  ((longlong)&(this->SpriteAlignment)._padding_ + 4));
        }
        else if (cVar1 == '\x02') {
          local_58._0_4_ =
               FNiagaraStatelessEmitterDataBuildContext::AddExpression
                         (param_1,(FInstancedStruct *)&(this->SpriteAlignment)._padding_);
        }
        else {
          uVar11 = *(undefined8 *)&(this->SpriteAlignment).Min.field0_0x0;
          local_58._4_4_ = (undefined4)uVar11;
          local_58._8_4_ = (undefined4)((ulonglong)uVar11 >> 0x20);
          local_58._12_4_ = (this->SpriteAlignment).Min.field0_0x0._s_0.Z;
          local_58._0_4_ = -1;
          uVar9 = local_58._4_4_;
          uVar10 = local_58._8_4_;
          uVar8 = local_58._12_4_;
          if (cVar1 != '\x03') {
            uVar11 = *(undefined8 *)&(this->SpriteAlignment).Max.field0_0x0;
            uVar9 = (int)uVar11;
            uVar10 = (int)((ulonglong)uVar11 >> 0x20);
            uVar8 = (this->SpriteAlignment).Max.field0_0x0._s_0.Z;
          }
          uVar11 = CONCAT44(uVar10,uVar9);
        }
        *(ulonglong *)(pFVar6 + 0x1c) = CONCAT44(local_58._4_4_,local_58._0_4_);
        *(ulonglong *)(pFVar6 + 0x24) = CONCAT44(local_58._12_4_,local_58._8_4_);
        *(undefined8 *)(pFVar6 + 0x2c) = uVar11;
        *(undefined4 *)(pFVar6 + 0x34) = uVar8;
      }
      local_30 = 0;
      local_48 = &
                 ___7__TFunction_OwnedObject_P6AXAEBVFParticleSimulationContext_NiagaraStateless___Z_0A__0A__Function_Private_Core_UE__6B_
      ;
      local_40 = NSMSpriteFacingAndAlignmentPrivate::ParticleSimulate;
      local_58._0_4_ = 0x4943dba0;
      local_58._4_4_ = 1;
      FNiagaraStatelessEmitterDataBuildContext::AddParticleSimulationExecSimulate
                (param_1,(TFunction<void___cdecl(NiagaraStateless::FParticleSimulationContext_const_&)>
                          *)local_58);
    }
  }
  return;
}

// BuildShaderParameters @ 14943acd0

void __thiscall
UNiagaraStatelessModule_SpriteFacingAndAlignment::BuildShaderParameters
          (UNiagaraStatelessModule_SpriteFacingAndAlignment *this,
          FNiagaraStatelessShaderParametersBuilder *param_1)

{
  int iVar1;
  FShaderParametersMetadataBuilder *this_00;
  FShaderParametersMetadata *pFVar2;
  
  iVar1 = param_1->ParameterOffset;
  this_00 = param_1->MetadataBuilder;
  if (this_00 != (FShaderParametersMetadataBuilder *)0x0) {
    pFVar2 = TShaderParameterStructTypeInfo<NiagaraStateless::FSpriteFacingAndAlignmentModule_ShaderParameters>
             ::GetStructMetadata();
    FShaderParametersMetadataBuilder::AddIncludedStruct(this_00,pFVar2,Float);
  }
  pFVar2 = TShaderParameterStructTypeInfo<NiagaraStateless::FSpriteFacingAndAlignmentModule_ShaderParameters>
           ::GetStructMetadata();
  param_1->ParameterOffset = pFVar2->Size + (iVar1 + 0xfU & 0xfffffff0);
  return;
}

// GetPrivateStaticClass @ 14944c4f0

UClass * __cdecl UNiagaraStatelessModule_SpriteFacingAndAlignment::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_SpriteFacingAndAlignment.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_SpriteFacingAndAlignment",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_SpriteFacingAndAlignment.
                InnerSingleton,StaticRegisterNativesUNiagaraStatelessModule_SpriteFacingAndAlignment
               ,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraStatelessModule_SpriteFacingAndAlignment>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_SpriteFacingAndAlignment>,
               local_res8,UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_SpriteFacingAndAlignment.InnerSingleton;
}

// SetShaderParameters @ 149468040

void __thiscall
UNiagaraStatelessModule_SpriteFacingAndAlignment::SetShaderParameters
          (UNiagaraStatelessModule_SpriteFacingAndAlignment *this,
          FNiagaraStatelessSetShaderParameterContext *param_1)

{
  int *piVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  FShaderParametersMetadata *pFVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uchar *puVar9;
  int *piVar10;
  longlong lVar11;
  undefined8 uVar12;
  
  uVar8 = param_1->ParameterOffset + 0xf & 0xfffffff0;
  pFVar5 = TShaderParameterStructTypeInfo<NiagaraStateless::FSpriteFacingAndAlignmentModule_ShaderParameters>
           ::GetStructMetadata();
  FNiagaraStatelessSetShaderParameterContext::ValidateIncludeStructType(param_1,uVar8,pFVar5);
  pFVar5 = TShaderParameterStructTypeInfo<NiagaraStateless::FSpriteFacingAndAlignmentModule_ShaderParameters>
           ::GetStructMetadata();
  uVar7 = param_1->BuiltDataOffset + 3U & 0xfffffffc;
  puVar9 = param_1->ShaderParametersBase + uVar8;
  param_1->ParameterOffset = pFVar5->Size + uVar8;
  iVar6 = uVar7 + 0x48;
  param_1->BuiltDataOffset = iVar6;
  if (((param_1->BuiltData).ArrayNum < iVar6) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("BuiltDataOffset <= BuiltData.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessSetShaderParameterContext.h"
                         ,0x22,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  piVar10 = (int *)((param_1->BuiltData).DataPtr + (int)uVar7);
  piVar1 = &(param_1->RendererParameterData).ArrayNum;
  if (*piVar10 == -1) {
    uVar12 = *(undefined8 *)(piVar10 + 1);
    iVar6 = piVar10[3];
  }
  else {
    iVar6 = *piVar10 * 4;
    lVar11 = (longlong)iVar6;
    if (((iVar6 < 0) || ((ulonglong)(longlong)*piVar1 < lVar11 + 0xcU)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Offset >= 0 && Offset + sizeof(TValueType) <= RendererParameterData.Num()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessSetShaderParameterContext.h"
                           ,0x2d,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    puVar2 = (param_1->RendererParameterData).DataPtr;
    uVar12 = *(undefined8 *)(puVar2 + lVar11);
    iVar6 = *(int *)(puVar2 + lVar11 + 8);
  }
  *(undefined8 *)puVar9 = uVar12;
  *(int *)(puVar9 + 8) = iVar6;
  if (piVar10[7] == -1) {
    uVar12 = *(undefined8 *)(piVar10 + 8);
    iVar6 = piVar10[10];
  }
  else {
    iVar6 = piVar10[7] * 4;
    lVar11 = (longlong)iVar6;
    if (((iVar6 < 0) || ((ulonglong)(longlong)*piVar1 < lVar11 + 0xcU)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Offset >= 0 && Offset + sizeof(TValueType) <= RendererParameterData.Num()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessSetShaderParameterContext.h"
                           ,0x2d,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    puVar2 = (param_1->RendererParameterData).DataPtr;
    uVar12 = *(undefined8 *)(puVar2 + lVar11);
    iVar6 = *(int *)(puVar2 + lVar11 + 8);
  }
  *(undefined8 *)(puVar9 + 0x10) = uVar12;
  *(int *)(puVar9 + 0x18) = iVar6;
  return;
}

// StaticRegisterNativesUNiagaraStatelessModule_SpriteFacingAndAlignment @ 149469e40

void __cdecl
UNiagaraStatelessModule_SpriteFacingAndAlignment::
StaticRegisterNativesUNiagaraStatelessModule_SpriteFacingAndAlignment(void)

{
  return;
}

