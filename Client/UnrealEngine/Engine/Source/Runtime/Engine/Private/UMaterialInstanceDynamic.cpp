// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 87

// StaticClass @ 147f0de80

UClass * __cdecl UMaterialInstanceDynamic::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialInstanceDynamic.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UMaterialInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialInstanceDynamic",
               &Z_Registration_Info_UClass_UMaterialInstanceDynamic.InnerSingleton,
               StaticRegisterNativesUMaterialInstanceDynamic,0x330,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMaterialInstanceDynamic>,
               InternalVTableHelperCtorCaller<UMaterialInstanceDynamic>,local_res8,
               UMaterialInstance::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialInstanceDynamic.InnerSingleton;
}

// UMaterialInstanceDynamic @ 147f2e2e0

UMaterialInstanceDynamic * __thiscall
UMaterialInstanceDynamic::UMaterialInstanceDynamic
          (UMaterialInstanceDynamic *this,FVTableHelper *param_1)

{
  UMaterialInstance::UMaterialInstance((UMaterialInstance *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IBlendableInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  *(undefined8 *)&this->RenamedTextures = 0;
  *(undefined8 *)&(this->RenamedTextures).field_0x8 = 0;
  *(undefined8 *)&(this->RenamedTextures).field_0x20 = 0;
  *(undefined4 *)&(this->RenamedTextures).field_0x28 = 0;
  *(undefined4 *)&(this->RenamedTextures).field_0x2c = 0x80;
  *(undefined4 *)&(this->RenamedTextures).field_0x34 = 0;
  *(undefined4 *)&(this->RenamedTextures).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->RenamedTextures).field_0x40 = 0;
  *(undefined4 *)&(this->RenamedTextures).field_0x48 = 0;
  return this;
}

// UMaterialInstanceDynamic @ 147f2e370

UMaterialInstanceDynamic * __thiscall
UMaterialInstanceDynamic::UMaterialInstanceDynamic
          (UMaterialInstanceDynamic *this,FObjectInitializer *param_1)

{
  UMaterialInstance::UMaterialInstance((UMaterialInstance *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IBlendableInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  *(undefined8 *)&this->RenamedTextures = 0;
  *(undefined8 *)&(this->RenamedTextures).field_0x8 = 0;
  *(undefined8 *)&(this->RenamedTextures).field_0x20 = 0;
  *(undefined4 *)&(this->RenamedTextures).field_0x28 = 0;
  *(undefined4 *)&(this->RenamedTextures).field_0x2c = 0x80;
  *(undefined4 *)&(this->RenamedTextures).field_0x34 = 0;
  *(undefined4 *)&(this->RenamedTextures).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->RenamedTextures).field_0x40 = 0;
  *(undefined4 *)&(this->RenamedTextures).field_0x48 = 0;
  return this;
}

// ~UMaterialInstanceDynamic @ 147f2f420

void __thiscall UMaterialInstanceDynamic::~UMaterialInstanceDynamic(UMaterialInstanceDynamic *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IBlendableInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  *(undefined4 *)&(this->RenamedTextures).field_0x48 = 0;
  pvVar1 = *(void **)&(this->RenamedTextures).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RenamedTextures);
  UMaterialInstance::~UMaterialInstance((UMaterialInstance *)this);
  return;
}

// CanCacheTexturesSamplingInfo @ 147f34010

bool __thiscall
UMaterialInstanceDynamic::CanCacheTexturesSamplingInfo(UMaterialInstanceDynamic *this)

{
  return false;
}

// ClearParameterValues @ 147f34680

void __thiscall UMaterialInstanceDynamic::ClearParameterValues(UMaterialInstanceDynamic *this)

{
  UMaterialInstance::ClearParameterValuesInternal((UMaterialInstance *)this,AllNonStatic);
  return;
}

// CopyInterpParameters @ 147f34f70

void __thiscall
UMaterialInstanceDynamic::CopyInterpParameters
          (UMaterialInstanceDynamic *this,UMaterialInstance *param_1)

{
  int iVar1;
  FName *pFVar2;
  FName *pFVar3;
  FName *pFVar4;
  undefined1 local_res10 [8];
  FMaterialParameterInfo local_48;
  TVector4<double>_u_0 local_38;
  
  if (param_1 != (UMaterialInstance *)0x0) {
    iVar1 = (param_1->ScalarParameterValues).ArrayNum;
    pFVar3 = (FName *)(param_1->ScalarParameterValues).AllocatorInstance.Data;
    pFVar2 = (FName *)((longlong)pFVar3 + (longlong)iVar1 * 0x24);
    while( true ) {
      if ((param_1->ScalarParameterValues).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FScalarParameterValue,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar3 == pFVar2) break;
      SetScalarParameterValue(this,*pFVar3,(float)pFVar3[2].ComparisonIndex.Value);
      pFVar3 = (FName *)&pFVar3[4].Number;
    }
    pFVar3 = (FName *)(param_1->VectorParameterValues).AllocatorInstance.Data;
    iVar1 = (param_1->VectorParameterValues).ArrayNum;
    pFVar2 = pFVar3 + 2;
    pFVar4 = pFVar3 + (longlong)iVar1 * 6;
    while( true ) {
      if ((param_1->VectorParameterValues).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FVectorParameterValue,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar3 == pFVar4) break;
      local_38._s_0.X = (double)*pFVar2;
      local_38._s_0.Y = (double)pFVar2[1];
      local_48.Name = *pFVar3;
      local_48.Association.Value = '\x02';
      local_48.Index = -1;
      UMaterialInstance::SetVectorParameterValueInternal
                ((UMaterialInstance *)this,&local_48,(FLinearColor *)&local_38._s_0);
      pFVar3 = pFVar3 + 6;
      pFVar2 = pFVar2 + 6;
    }
    pFVar3 = (FName *)(param_1->DoubleVectorParameterValues).AllocatorInstance.Data;
    iVar1 = (param_1->DoubleVectorParameterValues).ArrayNum;
    pFVar4 = pFVar3 + (longlong)iVar1 * 8;
    pFVar2 = pFVar3 + 2;
    while( true ) {
      if ((param_1->DoubleVectorParameterValues).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FDoubleVectorParameterValue,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar3 == pFVar4) break;
      local_48.Name = *pFVar3;
      local_38._s_0.X = (double)*pFVar2;
      local_38._s_0.Y = (double)pFVar2[1];
      local_38._s_0.Z = (double)pFVar2[2];
      local_38._s_0.W = (double)pFVar2[3];
      local_48.Association.Value = '\x02';
      local_48.Index = -1;
      UMaterialInstance::SetDoubleVectorParameterValueInternal
                ((UMaterialInstance *)this,&local_48,(TVector4<double> *)&local_38._s_0);
      pFVar3 = pFVar3 + 8;
      pFVar2 = pFVar2 + 8;
    }
    iVar1 = (param_1->TextureParameterValues).ArrayNum;
    pFVar3 = (FName *)(param_1->TextureParameterValues).AllocatorInstance.Data;
    pFVar2 = pFVar3 + (longlong)iVar1 * 5;
    while( true ) {
      if ((param_1->TextureParameterValues).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FTextureParameterValue,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar3 == pFVar2) break;
      SetTextureParameterValue(this,*pFVar3,(UTexture *)pFVar3[2]);
      pFVar3 = pFVar3 + 5;
    }
    iVar1 = (param_1->FontParameterValues).ArrayNum;
    pFVar2 = (FName *)(param_1->FontParameterValues).AllocatorInstance.Data;
    pFVar3 = pFVar2 + (longlong)iVar1 * 6;
    while( true ) {
      if ((param_1->FontParameterValues).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FFontParameterValue,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar2 == pFVar3) break;
      local_48.Name = *pFVar2;
      local_48.Association.Value = '\x02';
      local_48.Index = -1;
      UMaterialInstance::SetFontParameterValueInternal
                ((UMaterialInstance *)this,&local_48,(UFont *)pFVar2[2],
                 pFVar2[3].ComparisonIndex.Value);
      pFVar2 = pFVar2 + 6;
    }
  }
  return;
}

// CopyMaterialUniformParameters @ 147f35a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EMaterialParameterType": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
UMaterialInstanceDynamic::CopyMaterialUniformParameters
          (UMaterialInstanceDynamic *this,UMaterialInterface *param_1)

{
  int *piVar1;
  FMaterialNumericParameterInfo *pFVar2;
  undefined8 *puVar3;
  uint *puVar4;
  int iVar5;
  undefined4 uVar6;
  code *pcVar7;
  longlong lVar8;
  EMaterialTextureParameterType EVar9;
  UMaterialInterface *pUVar10;
  UMaterialInstanceDynamic *pUVar11;
  UMaterialInstanceDynamic *pUVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  FName *pFVar17;
  FThreadSafeStaticStat<FStat_STAT_MaterialInstance_CopyUniformParamsInternal> FVar18;
  UClass *pUVar19;
  longlong lVar20;
  FMaterial *this_00;
  FUniformExpressionSet *pFVar21;
  FType *pFVar22;
  uint uVar23;
  EShaderPlatform EVar24;
  longlong lVar25;
  longlong *plVar26;
  FName FVar27;
  longlong *plVar28;
  ForAnyElementType FVar29;
  FMaterialTextureParameterInfo *this_01;
  longlong *plVar30;
  FMaterialNumericParameterInfo *pFVar31;
  longlong *plVar32;
  longlong *plVar33;
  EMaterialParameterType *pEVar34;
  undefined8 *puVar35;
  FMaterialTextureParameterInfo *pFVar36;
  undefined1 auStackY_278 [32];
  undefined1 uStack_214;
  undefined1 uStack_213;
  undefined1 uStack_212;
  undefined1 uStack_211;
  undefined1 uStack_210;
  undefined1 auStack_20f [7];
  FName FStack_208;
  byte bStack_200;
  ForAnyElementType FStack_1f8;
  undefined8 uStack_1f0;
  FName FStack_1e8;
  UMaterialInterface *pUStack_1e0;
  EMaterialTextureParameterType EStack_1d8;
  UMaterialInstanceDynamic *pUStack_1d0;
  FLLMScope FStack_1c8;
  FColor_u_0 FStack_1c4;
  FName FStack_1c0;
  undefined4 uStack_1b8;
  uint uStack_1b4;
  longlong lStack_1b0;
  FMaterialParameterInfo FStack_1a8;
  undefined8 uStack_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  FMemScope FStack_188;
  TArrayView<FMaterialNumericParameterInfo_const_,int> TStack_180;
  TArrayView<FMaterialTextureParameterInfo_const_,int> TStack_170;
  undefined8 uStack_158;
  undefined8 uStack_148;
  FName FStack_138;
  FMaterialParameterMetadata FStack_130;
  FType FStack_100;
  FValue FStack_e8;
  ulonglong uStack_40;
  
  uStack_40 = __security_cookie.value ^ (ulonglong)auStackY_278;
  pUStack_1d0 = this;
  FLLMScope::FLLMScope(&FStack_1c8,MaterialInstance,false,None,Default,true);
  FMemScope::FMemScope(&FStack_188,MaterialInstance,true);
  FVar18 = StatPtr_STAT_MaterialInstance_CopyUniformParamsInternal;
  if (StatPtr_STAT_MaterialInstance_CopyUniformParamsInternal ==
      (FThreadSafeStaticStat<FStat_STAT_MaterialInstance_CopyUniformParamsInternal>)0x0) {
    pFVar17 = ::FName::FName(&FStack_138,"STAT_MaterialInstance_CopyUniformParamsInternal");
    FVar18 = (FThreadSafeStaticStat<FStat_STAT_MaterialInstance_CopyUniformParamsInternal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_MaterialInstance_CopyUniformParamsInternal,*pFVar17,
                        L"MaterialInstance CopyUniformParamsInternal","STATGROUP_Shaders",
                        "STATCAT_Advanced",L"Shader Compression",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FStack_208.ComparisonIndex.Value = 0;
  FStack_208.Number = 0;
  bStack_200 = 0;
  FVar27 = *(FName *)FVar18;
  if ((FVar27.ComparisonIndex.Value.Value != 0) || (FVar27.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      FStack_1c4.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&FStack_1c4._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
      bStack_200 = bStack_200 | 1;
      if (-1 < CpuChannel->Enabled) {
        FStack_1c0.ComparisonIndex.Value = FVar27.ComparisonIndex.Value.Value;
        FStack_1c0.Number = FVar27.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&FStack_1c0,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstance.cpp"
                   ,0x1651);
        bStack_200 = bStack_200 | 2;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FStack_208 = FVar27;
      FStack_1e8 = FVar27;
      FThreadStats::AddMessage(FVar27,CycleScopeStart);
      bStack_200 = bStack_200 | 4;
    }
  }
  if ((param_1 != (UMaterialInterface *)0x0) && ((UMaterialInstanceDynamic *)param_1 != this)) {
    UMaterialInstance::ClearParameterValuesInternal((UMaterialInstance *)this,AllNonStatic);
    uStack_1f0._0_4_ = 0;
    FStack_1f8.Data = (FScriptContainerElement *)0x0;
    uStack_1f0 = 0;
    pUStack_1e0 = param_1;
    while( true ) {
      iVar14 = (int)uStack_1f0;
      if ((FStack_1f8.Data <= (FScriptContainerElement *)&pUStack_1e0) &&
         ((FScriptContainerElement *)&pUStack_1e0 < FStack_1f8.Data + (longlong)uStack_1f0._4_4_ * 8
         )) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar13) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar14 = (int)uStack_1f0;
      }
      if (iVar14 == uStack_1f0._4_4_) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&FStack_1f8,(int *)((longlong)&uStack_1f0 + 4));
      }
      pUVar10 = pUStack_1e0;
      uStack_1f0 = CONCAT44(uStack_1f0._4_4_,iVar14 + 1);
      *(UMaterialInterface **)(FStack_1f8.Data + (longlong)iVar14 * 8) = pUStack_1e0;
      if (pUStack_1e0 == (UMaterialInterface *)0x0) break;
      pUVar19 = UMaterialInstance::GetPrivateStaticClass();
      lVar25 = pUVar10->_padding_;
      iVar14 = (int)pUVar19->_padding_;
      if ((*(int *)(lVar25 + 0x38) < iVar14) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar25 + 0x30) + (longlong)iVar14 * 8) !=
          &pUVar19->_padding_)) break;
      pUStack_1e0 = *(UMaterialInterface **)&pUVar10[1].SubsurfaceProfiles.ArrayNum;
      if (pUStack_1e0 == (UMaterialInterface *)0x0) goto LAB_147f35d3e;
    }
    pUStack_1e0 = (UMaterialInterface *)0x0;
LAB_147f35d3e:
    iVar14 = (int)uStack_1f0 + -1;
    if (-1 < iVar14) {
      lVar25 = (longlong)iVar14 << 3;
      do {
        lStack_1b0 = lVar25;
        if (((int)uStack_1f0 <= iVar14) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar27 = *(FName *)(FStack_1f8.Data + lVar25);
        FStack_1e8 = FVar27;
        if (FVar27 != (FName)0x0) {
          pUVar19 = UMaterialInstance::GetPrivateStaticClass();
          iVar5 = (int)pUVar19->_padding_;
          if ((*(int *)(*(longlong *)((longlong)FVar27 + 0x10) + 0x38) < iVar5) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)((longlong)FVar27 + 0x10) + 0x30) + (longlong)iVar5 * 8)
              != &pUVar19->_padding_)) {
            pUVar19 = Z_Construct_UClass_UMaterial_NoRegister();
            iVar5 = (int)pUVar19->_padding_;
            if ((iVar5 <= *(int *)(*(longlong *)((longlong)FVar27 + 0x10) + 0x38)) &&
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)((longlong)FVar27 + 0x10) + 0x30) + (longlong)iVar5 * 8
                 ) == &pUVar19->_padding_)) {
              lVar25 = (**(code **)(*(longlong *)FVar27 + 0x180))(FVar27);
              if (lVar25 == 0) {
LAB_147f36281:
                this_00 = (FMaterial *)
                          (**(code **)(*(longlong *)FVar27 + 0x390))(FVar27,GMaxRHIShaderPlatform,4)
                ;
                if (this_00 == (FMaterial *)0x0) goto LAB_147f36511;
              }
              else {
                EVar24 = SP_NumPlatforms;
                if (*(byte *)(lVar25 + 0x188) != 5) {
                  EVar24 = GRHIGlobals.ShaderPlatformForFeatureLevel[*(byte *)(lVar25 + 0x188)];
                }
                this_00 = (FMaterial *)(**(code **)(*(longlong *)FVar27 + 0x390))(FVar27,EVar24,4);
                if (this_00 == (FMaterial *)0x0) goto LAB_147f36281;
              }
              FMaterial::GetUniformNumericParameterExpressions(this_00,&TStack_180);
              pFVar31 = TStack_180.DataPtr + TStack_180.ArrayNum;
              if (TStack_180.DataPtr != pFVar31) {
                pEVar34 = &(TStack_180.DataPtr)->ParameterType;
                FStack_1e8 = FVar27;
                do {
                  pFVar21 = FMaterial::GetUniformExpressions(this_00);
                  uVar6 = *(undefined4 *)(pEVar34 + 4);
                  FVar29 = (pFVar21->DefaultValues).AllocatorInstance;
                  if (((ulonglong)FVar29 & 1) != 0) {
                    FVar29 = (ForAnyElementType)
                             ((longlong)&(pFVar21->DefaultValues).AllocatorInstance.field_0x0 +
                             ((longlong)FVar29 >> 0x18));
                  }
                  pFVar22 = GetShaderValueType(&FStack_100,*pEVar34);
                  UE::Shader::FValue::FromMemoryImage
                            (&FStack_e8,pFVar22->ValueType,
                             (void *)((longlong)FVar29 + (ulonglong)(uint)uVar6),(uint *)0x0);
                  FMaterialParameterValue::FMaterialParameterValue
                            (&FStack_130.Value,*pEVar34,&FStack_e8);
                  FStack_1a8.Name.Number = *(uint *)(pEVar34 + -0xc);
                  uStack_158._0_4_ =
                       (((FMaterialNumericParameterInfo *)(pEVar34 + -0x14))->ParameterInfo).Name.
                       ComparisonIndex;
                  uStack_158._4_4_ =
                       (((FMaterialNumericParameterInfo *)(pEVar34 + -0x14))->ParameterInfo).Name.
                       DisplayIndex;
                  FStack_1a8.Name.ComparisonIndex.Value = (undefined4)uStack_158;
                  FStack_130.PrimitiveDataIndex = -1;
                  FStack_130.bDynamicSwitchParameter = false;
                  FStack_1a8.Association.Value = '\x02';
                  FStack_1a8.Index = -1;
                  UMaterialInstance::AddParameterValueInternal
                            ((UMaterialInstance *)this,&FStack_1a8,&FStack_130,None);
                  if (FStack_e8.Component.AllocatorInstance.SecondaryData !=
                      (ForElementType<UE::Shader::FValueComponent>)0x0) {
                    FMemory::Free((void *)FStack_e8.Component.AllocatorInstance.SecondaryData);
                  }
                  pFVar2 = (FMaterialNumericParameterInfo *)(pEVar34 + 8);
                  pEVar34 = pEVar34 + 0x1c;
                } while (pFVar2 != pFVar31);
              }
              FVar27 = FStack_1e8;
              EStack_1d8 = Standard2D;
              do {
                EVar9 = EStack_1d8;
                FMaterial::GetUniformTextureExpressions(this_00,&TStack_170,EStack_1d8);
                pUVar11 = pUStack_1d0;
                pFVar36 = TStack_170.DataPtr + TStack_170.ArrayNum;
                this = pUStack_1d0;
                for (this_01 = TStack_170.DataPtr; pUStack_1d0 = this, this_01 != pFVar36;
                    this_01 = this_01 + 1) {
                  if (((this_01->ParameterInfo).Name.ComparisonIndex.Value != 0) ||
                     ((this_01->ParameterInfo).Name.Number != 0)) {
                    uVar16 = (uint)pUVar11->_padding_;
                    puVar4 = (uint *)((longlong)&pUVar11->_padding_ + 4);
                    if (uVar16 == *puVar4) {
                      uVar16 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x828,(ForAnyElementType *)&pUVar11->_padding_,
                                          (int *)puVar4);
                    }
                    *(uint *)&pUVar11->_padding_ = uVar16 + 1;
                    uVar23 = 0;
                    if ((int)uVar16 < (int)(uVar16 + 1)) {
                      uVar23 = ~uVar16 >> 0x1f;
                    }
                    if ((uVar23 == 0) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar13)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    puVar35 = (undefined8 *)0x0;
                    puVar3 = (undefined8 *)(pUVar11->_padding_ + (longlong)(int)uVar16 * 0x28);
                    if (puVar3 != (undefined8 *)0x0) {
                      uStack_198 = 0;
                      uStack_190 = CONCAT31(uStack_190._1_3_,2);
                      uStack_18c = 0xffffffff;
                      *puVar3 = 0;
                      puVar3[1] = CONCAT44(0xffffffff,uStack_190);
                      puVar3[2] = 0;
                      puVar3[3] = 0;
                      puVar3[4] = 0;
                      puVar35 = puVar3;
                    }
                    uStack_1b4 = (this_01->ParameterInfo).Name.Number;
                    uStack_148._0_4_ = (this_01->ParameterInfo).Name.ComparisonIndex;
                    uStack_148._4_4_ = (this_01->ParameterInfo).Name.DisplayIndex;
                    uStack_1b8 = (undefined4)uStack_148;
                    *puVar35 = CONCAT44(uStack_1b4,(undefined4)uStack_148);
                    FMaterialTextureParameterInfo::GetGameThreadTextureValue
                              (this_01,(UMaterialInterface *)FVar27,this_00,
                               (UTexture **)(puVar35 + 2));
                  }
                  EVar9 = EStack_1d8;
                  this = pUStack_1d0;
                }
                EStack_1d8 = EVar9 + Cube;
              } while (EStack_1d8 < Count);
            }
          }
          else {
            iVar5 = *(int *)((longlong)FVar27 + 0x1a8);
            plVar33 = &this->_padding_;
            plVar32 = *(longlong **)((longlong)FVar27 + 0x1a0);
            plVar30 = (longlong *)((longlong)plVar32 + (longlong)iVar5 * 0x24);
LAB_147f35e10:
            if (*(int *)((longlong)FVar27 + 0x1a8) != iVar5) {
              uStack_214 = 0;
              `TCheckedPointerIterator<FScalarParameterValue_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(&uStack_214);
            }
            pUVar11 = pUStack_1d0;
            if (plVar32 != plVar30) {
              iVar15 = (int)this->_padding_;
              plVar26 = (longlong *)*plVar33;
              plVar28 = (longlong *)((longlong)plVar26 + (longlong)iVar15 * 0x24);
              while( true ) {
                if ((int)this->_padding_ != iVar15) {
                  uStack_213 = 0;
                  `TCheckedPointerIterator<FScalarParameterValue,int,0>::operator!='::__l2::
                  <lambda_1>::operator()(&uStack_213);
                }
                if (plVar26 == plVar28) {
                  if ((((longlong *)*plVar33 <= plVar32) &&
                      (plVar32 < (longlong *)
                                 (*plVar33 +
                                 (longlong)*(int *)((longlong)&this->_padding_ + 4) * 0x24))) &&
                     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar13)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  iVar15 = (int)this->_padding_;
                  piVar1 = (int *)((longlong)&this->_padding_ + 4);
                  if (iVar15 == *piVar1) {
                    iVar15 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x424,(ForAnyElementType *)plVar33,piVar1);
                  }
                  *(int *)&this->_padding_ = iVar15 + 1;
                  lVar8 = plVar32[1];
                  lVar25 = *plVar33;
                  lVar20 = (longlong)iVar15;
                  plVar28 = (longlong *)(lVar25 + lVar20 * 0x24);
                  *plVar28 = *plVar32;
                  plVar28[1] = lVar8;
                  lVar8 = plVar32[3];
                  plVar28 = (longlong *)(lVar25 + lVar20 * 0x24 + 0x10);
                  *plVar28 = plVar32[2];
                  plVar28[1] = lVar8;
                  plVar28 = plVar32 + 4;
                  plVar32 = (longlong *)((longlong)plVar32 + 0x24);
                  *(int *)(lVar25 + lVar20 * 0x24 + 0x20) = (int)*plVar28;
                  FVar27 = FStack_1e8;
                  goto LAB_147f35e10;
                }
                if (*plVar26 == *plVar32) break;
                plVar26 = (longlong *)((longlong)plVar26 + 0x24);
              }
              plVar28 = plVar32 + 2;
              plVar32 = (longlong *)((longlong)plVar32 + 0x24);
              *(int *)(plVar26 + 2) = (int)*plVar28;
              FVar27 = FStack_1e8;
              goto LAB_147f35e10;
            }
            iVar5 = *(int *)((longlong)FVar27 + 0x1b8);
            plVar33 = *(longlong **)((longlong)FVar27 + 0x1b0);
            plVar30 = &pUStack_1d0->_padding_;
            plVar32 = plVar33 + (longlong)iVar5 * 6;
LAB_147f35f50:
            if (*(int *)((longlong)FVar27 + 0x1b8) != iVar5) {
              uStack_212 = 0;
              `TCheckedPointerIterator<FVectorParameterValue_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(&uStack_212);
            }
            pUVar12 = pUStack_1d0;
            if (plVar33 != plVar32) {
              iVar15 = (int)pUVar11->_padding_;
              plVar28 = (longlong *)*plVar30;
              plVar26 = plVar28 + (longlong)iVar15 * 6;
              while( true ) {
                if ((int)pUVar11->_padding_ != iVar15) {
                  uStack_211 = 0;
                  `TCheckedPointerIterator<FVectorParameterValue,int,0>::operator!='::__l2::
                  <lambda_1>::operator()(&uStack_211);
                }
                if (plVar28 == plVar26) {
                  if ((((longlong *)*plVar30 <= plVar33) &&
                      (plVar33 < (longlong *)*plVar30 +
                                 (longlong)*(int *)((longlong)&pUVar11->_padding_ + 4) * 6)) &&
                     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar13)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  iVar15 = (int)pUVar11->_padding_;
                  piVar1 = (int *)((longlong)&pUVar11->_padding_ + 4);
                  if (iVar15 == *piVar1) {
                    iVar15 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x430,(ForAnyElementType *)plVar30,piVar1);
                  }
                  *(int *)&pUVar11->_padding_ = iVar15 + 1;
                  lVar8 = plVar33[1];
                  lVar20 = (longlong)iVar15;
                  lVar25 = *plVar30;
                  plVar28 = (longlong *)(lVar25 + lVar20 * 0x30);
                  *plVar28 = *plVar33;
                  plVar28[1] = lVar8;
                  lVar8 = plVar33[3];
                  plVar28 = (longlong *)(lVar25 + 0x10 + lVar20 * 0x30);
                  *plVar28 = plVar33[2];
                  plVar28[1] = lVar8;
                  plVar28 = plVar33 + 4;
                  lVar8 = plVar33[5];
                  plVar33 = plVar33 + 6;
                  plVar26 = (longlong *)(lVar25 + 0x20 + lVar20 * 0x30);
                  *plVar26 = *plVar28;
                  plVar26[1] = lVar8;
                  FVar27 = FStack_1e8;
                  goto LAB_147f35f50;
                }
                if (*plVar28 == *plVar33) break;
                plVar28 = plVar28 + 6;
              }
              plVar26 = plVar33 + 2;
              lVar25 = plVar33[3];
              plVar33 = plVar33 + 6;
              plVar28[2] = *plVar26;
              plVar28[3] = lVar25;
              FVar27 = FStack_1e8;
              goto LAB_147f35f50;
            }
            iVar5 = *(int *)((longlong)FVar27 + 0x1c8);
            plVar33 = *(longlong **)((longlong)FVar27 + 0x1c0);
            plVar30 = &pUStack_1d0->_padding_;
            plVar32 = plVar33 + (longlong)iVar5 * 8;
LAB_147f36094:
            if (*(int *)((longlong)FVar27 + 0x1c8) != iVar5) {
              uStack_210 = 0;
              `TCheckedPointerIterator<FDoubleVectorParameterValue_const_,int,0>::operator!='::__l2
              ::<lambda_1>::operator()(&uStack_210);
            }
            this = pUStack_1d0;
            if (plVar33 != plVar32) {
              iVar15 = (int)pUVar12->_padding_;
              plVar28 = (longlong *)*plVar30;
              plVar26 = plVar28 + (longlong)iVar15 * 8;
              while( true ) {
                if ((int)pUVar12->_padding_ != iVar15) {
                  auStack_20f[0] = 0;
                  `TCheckedPointerIterator<FDoubleVectorParameterValue,int,0>::operator!='::__l2::
                  <lambda_1>::operator()(auStack_20f);
                }
                if (plVar28 == plVar26) {
                  if ((((longlong *)*plVar30 <= plVar33) &&
                      (plVar33 < (longlong *)*plVar30 +
                                 (longlong)*(int *)((longlong)&pUVar12->_padding_ + 4) * 8)) &&
                     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar13)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  iVar15 = (int)pUVar12->_padding_;
                  piVar1 = (int *)((longlong)&pUVar12->_padding_ + 4);
                  if (iVar15 == *piVar1) {
                    iVar15 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x1040,(ForAnyElementType *)plVar30,piVar1);
                  }
                  *(int *)&pUVar12->_padding_ = iVar15 + 1;
                  lVar8 = plVar33[1];
                  lVar25 = *plVar30;
                  lVar20 = (longlong)iVar15 * 0x40;
                  *(longlong *)(lVar20 + lVar25) = *plVar33;
                  ((longlong *)(lVar20 + lVar25))[1] = lVar8;
                  lVar8 = plVar33[3];
                  plVar28 = (longlong *)(lVar20 + 0x10 + lVar25);
                  *plVar28 = plVar33[2];
                  plVar28[1] = lVar8;
                  lVar8 = plVar33[5];
                  plVar28 = (longlong *)(lVar20 + 0x20 + lVar25);
                  *plVar28 = plVar33[4];
                  plVar28[1] = lVar8;
                  plVar28 = plVar33 + 6;
                  lVar8 = plVar33[7];
                  plVar33 = plVar33 + 8;
                  plVar26 = (longlong *)(lVar20 + 0x30 + lVar25);
                  *plVar26 = *plVar28;
                  plVar26[1] = lVar8;
                  FVar27 = FStack_1e8;
                  goto LAB_147f36094;
                }
                if (*plVar28 == *plVar33) break;
                plVar28 = plVar28 + 8;
              }
              lVar25 = plVar33[3];
              plVar28[2] = plVar33[2];
              plVar28[3] = lVar25;
              plVar26 = plVar33 + 4;
              lVar25 = plVar33[5];
              plVar33 = plVar33 + 8;
              plVar28[4] = *plVar26;
              plVar28[5] = lVar25;
              FVar27 = FStack_1e8;
              goto LAB_147f36094;
            }
            MergeParameterOverrides<FTextureParameterValue>
                      ((TArray<FTextureParameterValue,TSizedDefaultAllocator<32>_> *)
                       &pUStack_1d0->_padding_,
                       (TArray<FTextureParameterValue,TSizedDefaultAllocator<32>_> *)
                       ((longlong)FVar27 + 0x1d0));
            MergeParameterOverrides<FRuntimeVirtualTextureParameterValue>
                      ((TArray<FRuntimeVirtualTextureParameterValue,TSizedDefaultAllocator<32>_> *)
                       &this->_padding_,
                       (TArray<FRuntimeVirtualTextureParameterValue,TSizedDefaultAllocator<32>_> *)
                       ((longlong)FVar27 + 0x200));
            MergeParameterOverrides<FSparseVolumeTextureParameterValue>
                      ((TArray<FSparseVolumeTextureParameterValue,TSizedDefaultAllocator<32>_> *)
                       &this->_padding_,
                       (TArray<FSparseVolumeTextureParameterValue,TSizedDefaultAllocator<32>_> *)
                       ((longlong)FVar27 + 0x210));
            MergeParameterOverrides<FParameterCollectionParameterValue>
                      ((TArray<FParameterCollectionParameterValue,TSizedDefaultAllocator<32>_> *)
                       &this->_padding_,
                       (TArray<FParameterCollectionParameterValue,TSizedDefaultAllocator<32>_> *)
                       ((longlong)FVar27 + 0x1f0));
          }
        }
LAB_147f36511:
        iVar14 = iVar14 + -1;
        lVar25 = lStack_1b0 + -8;
        lStack_1b0 = lVar25;
      } while (-1 < iVar14);
    }
    UMaterialInstance::InitResources((UMaterialInstance *)this);
    if (FStack_1f8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_1f8.Data);
    }
  }
  if ((bStack_200 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((bStack_200 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((bStack_200 & 4) != 0) {
    FThreadStats::AddMessage(FStack_208,CycleScopeEnd);
  }
  bStack_200 = 0;
  FMemScope::~FMemScope(&FStack_188);
  FLLMScope::~FLLMScope(&FStack_1c8);
  return;
}

// CopyParameterOverrides @ 147f365e0

void __thiscall
UMaterialInstanceDynamic::CopyParameterOverrides
          (UMaterialInstanceDynamic *this,UMaterialInstance *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FTextureParameterValue *pFVar6;
  FFontParameterValue *pFVar7;
  bool bVar8;
  FLLMScope local_res10 [2];
  FMemScope local_res18 [2];
  
  FLLMScope::FLLMScope(local_res10,MaterialInstance,false,None,Default,true);
  FMemScope::FMemScope(local_res18,MaterialInstance,true);
  UMaterialInstance::ClearParameterValuesInternal((UMaterialInstance *)this,AllNonStatic);
  if ((param_1 != (UMaterialInstance *)0x0) ||
     (bVar8 = FRuntimeErrors::LogRuntimeIssueReturningFalse
                        ("MaterialInstance != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstanceDynamic.cpp"
                         ,0x203), bVar8)) {
    plVar2 = &this->_padding_;
    if ((TArray<FVectorParameterValue,TSizedDefaultAllocator<32>_> *)plVar2 !=
        &param_1->VectorParameterValues) {
      iVar3 = (param_1->VectorParameterValues).ArrayNum;
      piVar1 = (int *)((longlong)&this->_padding_ + 4);
      pFVar5 = (param_1->VectorParameterValues).AllocatorInstance.Data;
      iVar4 = *piVar1;
      *(int *)&this->_padding_ = iVar3;
      if ((iVar3 == 0) && (iVar4 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,4,iVar3,iVar4,(ForAnyElementType *)plVar2,iVar3,piVar1);
        if (iVar3 != 0) {
          memcpy((void *)*plVar2,pFVar5,(longlong)iVar3 * 0x30);
        }
      }
    }
    plVar2 = &this->_padding_;
    if ((TArray<FDoubleVectorParameterValue,TSizedDefaultAllocator<32>_> *)plVar2 !=
        &param_1->DoubleVectorParameterValues) {
      iVar3 = (param_1->DoubleVectorParameterValues).ArrayNum;
      piVar1 = (int *)((longlong)&this->_padding_ + 4);
      pFVar5 = (param_1->DoubleVectorParameterValues).AllocatorInstance.Data;
      iVar4 = *piVar1;
      *(int *)&this->_padding_ = iVar3;
      if ((iVar3 == 0) && (iVar4 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,0x10,iVar3,iVar4,(ForAnyElementType *)plVar2,iVar3,piVar1);
        if (iVar3 != 0) {
          memcpy((void *)*plVar2,pFVar5,(longlong)iVar3 << 6);
        }
      }
    }
    plVar2 = &this->_padding_;
    if ((TArray<FScalarParameterValue,TSizedDefaultAllocator<32>_> *)plVar2 !=
        &param_1->ScalarParameterValues) {
      iVar3 = (param_1->ScalarParameterValues).ArrayNum;
      piVar1 = (int *)((longlong)&this->_padding_ + 4);
      pFVar5 = (param_1->ScalarParameterValues).AllocatorInstance.Data;
      iVar4 = *piVar1;
      *(int *)&this->_padding_ = iVar3;
      if ((iVar3 == 0) && (iVar4 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x24,4,iVar3,iVar4,(ForAnyElementType *)plVar2,iVar3,piVar1);
        if (iVar3 != 0) {
          memcpy((void *)*plVar2,pFVar5,(longlong)iVar3 * 0x24);
        }
      }
    }
    plVar2 = &this->_padding_;
    if ((TArray<FTextureParameterValue,TSizedDefaultAllocator<32>_> *)plVar2 !=
        &param_1->TextureParameterValues) {
      iVar3 = (param_1->TextureParameterValues).ArrayNum;
      piVar1 = (int *)((longlong)&this->_padding_ + 4);
      pFVar6 = (FTextureParameterValue *)(param_1->TextureParameterValues).AllocatorInstance.Data;
      iVar4 = *piVar1;
      *(int *)&this->_padding_ = iVar3;
      if ((iVar3 == 0) && (iVar4 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,iVar3,iVar4,(ForAnyElementType *)plVar2,iVar3,piVar1);
        ConstructItems<FTextureParameterValue,FTextureParameterValue,int>
                  ((void *)*plVar2,pFVar6,iVar3);
      }
    }
    plVar2 = &this->_padding_;
    if ((TArray<FFontParameterValue,TSizedDefaultAllocator<32>_> *)plVar2 !=
        &param_1->FontParameterValues) {
      iVar3 = (param_1->FontParameterValues).ArrayNum;
      piVar1 = (int *)((longlong)&this->_padding_ + 4);
      pFVar7 = (FFontParameterValue *)(param_1->FontParameterValues).AllocatorInstance.Data;
      iVar4 = *piVar1;
      *(int *)&this->_padding_ = iVar3;
      if ((iVar3 == 0) && (iVar4 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,iVar3,iVar4,(ForAnyElementType *)plVar2,iVar3,piVar1);
        ConstructItems<FFontParameterValue,FFontParameterValue,int>((void *)*plVar2,pFVar7,iVar3);
      }
    }
  }
  UMaterialInstance::InitResources((UMaterialInstance *)this);
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// CopyScalarAndVectorParameters @ 147f368a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EMaterialParameterType": Some values do not have unique names */

void __thiscall
UMaterialInstanceDynamic::CopyScalarAndVectorParameters
          (UMaterialInstanceDynamic *this,UMaterialInterface *param_1,EShaderPlatform param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  FName *pFVar3;
  float *pfVar4;
  undefined4 *puVar5;
  UMaterialInstance *this_00;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FMaterial *this_01;
  UClass *pUVar10;
  FUniformExpressionSet *pFVar11;
  FType *pFVar12;
  FMaterialParameterValue *pFVar13;
  longlong lVar14;
  ulonglong uVar15;
  ForAnyElementType FVar16;
  FMemoryImageMaterialParameterInfo *pFVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  FNameEntryId FVar23;
  undefined4 uVar24;
  undefined1 auStack_268 [32];
  longlong local_248;
  longlong local_240;
  undefined4 local_238;
  uint uStack_234;
  undefined4 uStack_230;
  int iStack_22c;
  FMaterialParameterValue_u_0 local_228;
  ulonglong local_208;
  undefined4 local_200;
  undefined1 local_1fc;
  UMaterialInstance *local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  FName local_1e0;
  FName FStack_1d8;
  FMaterial *local_1d0;
  TArrayView<FMaterialNumericParameterInfo_const_,int> local_1c8;
  undefined1 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  FUtf8String local_198;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  FUtf8String local_170;
  undefined8 local_158;
  FType local_148;
  FMaterialParameterValue local_130;
  FValue local_108;
  ulonglong local_60;
  ulonglong uVar22;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStack_268;
  local_1f8 = (UMaterialInstance *)param_1;
  bVar7 = IsInGameThread();
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstance.cpp"
                         ,0x78e,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this_01 = (FMaterial *)(**(code **)(this->_padding_ + 0x390))(this,param_2,4);
  if (this_01 != (FMaterial *)0x0) {
    local_1d0 = this_01;
    UMaterialInstance::ClearParameterValuesInternal((UMaterialInstance *)this,Numeric);
    FMaterial::GetUniformNumericParameterExpressions(this_01,&local_1c8);
    uVar15 = (ulonglong)local_1c8.ArrayNum;
    uVar19 = 0;
    uVar20 = uVar15;
    uVar22 = uVar19;
    if (0 < local_1c8.ArrayNum) {
      do {
        uVar21 = (uint)uVar22;
        uVar8 = 0;
        if ((int)uVar21 < (int)uVar15) {
          uVar8 = ~uVar21 >> 0x1f;
        }
        if (uVar8 == 0) {
          local_240 = (longlong)(int)uVar15;
          local_248 = (longlong)(int)uVar21;
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        pFVar17 = (FMemoryImageMaterialParameterInfo *)
                  ((longlong)&((local_1c8.DataPtr)->ParameterInfo).Name.ComparisonIndex.Value +
                  uVar19);
        local_208 = CONCAT71(local_208._1_7_,0xff);
        local_200 = 0xffffffff;
        local_1fc = 0;
        for (this_00 = (UMaterialInstance *)param_1; this_00 != (UMaterialInstance *)0x0;
            this_00 = (UMaterialInstance *)(this_00->Parent).field0_0x0.DebugPtr) {
          pUVar10 = UMaterialInstance::GetPrivateStaticClass();
          iVar9 = (int)pUVar10->_padding_;
          if ((*(int *)(this_00->_padding_ + 0x38) < iVar9) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar9 * 8) !=
              &pUVar10->_padding_)) break;
          bVar7 = UMaterialInstance::GetParameterOverrideValue
                            (this_00,(EMaterialParameterType)pFVar17[1].Name.ComparisonIndex.Value,
                             pFVar17,(FMaterialParameterMetadata *)&local_228.Font);
          if (bVar7) goto LAB_147f36ad0;
        }
        pFVar11 = FMaterial::GetUniformExpressions(local_1d0);
        uVar8 = pFVar17[1].Name.DisplayIndex.Value;
        FVar16 = (pFVar11->DefaultValues).AllocatorInstance;
        if (((ulonglong)FVar16 & 1) != 0) {
          FVar16 = (ForAnyElementType)
                   ((longlong)&(pFVar11->DefaultValues).AllocatorInstance.field_0x0 +
                   ((longlong)FVar16 >> 0x18));
        }
        pFVar12 = GetShaderValueType(&local_148,
                                     (EMaterialParameterType)pFVar17[1].Name.ComparisonIndex.Value);
        UE::Shader::FValue::FromMemoryImage
                  (&local_108,pFVar12->ValueType,(void *)((longlong)FVar16 + (ulonglong)uVar8),
                   (uint *)0x0);
        pFVar13 = FMaterialParameterValue::FMaterialParameterValue
                            (&local_130,
                             (EMaterialParameterType)pFVar17[1].Name.ComparisonIndex.Value,
                             &local_108);
        local_228.Double[0] = (double)(pFVar13->field0_0x0).Texture;
        local_228.Double[1] = (double)*(FName *)((pFVar13->field0_0x0).Double + 1);
        local_228.Double[2] = (pFVar13->field0_0x0).Double[2];
        local_228.Double[3] = (pFVar13->field0_0x0).Double[3];
        local_208 = *(ulonglong *)&pFVar13->Type;
        param_1 = (UMaterialInterface *)local_1f8;
        if (local_108.Component.AllocatorInstance.SecondaryData !=
            (ForElementType<UE::Shader::FValueComponent>)0x0) {
          FMemory::Free((void *)local_108.Component.AllocatorInstance.SecondaryData);
          param_1 = (UMaterialInterface *)local_1f8;
        }
LAB_147f36ad0:
        uStack_234 = (pFVar17->Name).Number;
        local_158._0_4_ = (pFVar17->Name).ComparisonIndex;
        local_158._4_4_ = (pFVar17->Name).DisplayIndex;
        local_238 = (undefined4)local_158;
        uStack_230 = CONCAT31(uStack_230._1_3_,(pFVar17->Association).Value);
        iStack_22c = pFVar17->Index;
        local_1a0 = 0;
        local_1a8 = 0;
        local_1b8 = 0;
        local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_198.Data.ArrayNum = 0;
        local_198.Data.ArrayMax = 0;
        local_1b0 = 0;
        local_1f0 = 0;
        FUtf8String::Reset(&local_198,0);
        local_170.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_178 = 0;
        local_180 = 0;
        local_170.Data.ArrayNum = 0;
        local_170.Data.ArrayMax = 0;
        local_188 = 0;
        local_1e8 = 0;
        FUtf8String::Reset(&local_170,0);
        switch(local_208 & 0xff) {
        case 0:
          if (((char)local_208 != '\0') &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type == EMaterialParameterType::Scalar",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Materials\\MaterialParameters.h"
                                 ,0x176,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar9 = (int)this->_padding_;
          piVar1 = (int *)((longlong)&this->_padding_ + 4);
          if (iVar9 == *piVar1) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x424,(ForAnyElementType *)&this->_padding_,piVar1);
          }
          lVar14 = (longlong)iVar9;
          *(int *)&this->_padding_ = iVar9 + 1;
          lVar18 = this->_padding_;
          puVar2 = (undefined8 *)(lVar18 + lVar14 * 0x24);
          *puVar2 = CONCAT44(uStack_234,local_238);
          puVar2[1] = CONCAT44(iStack_22c,uStack_230);
          *(undefined8 *)(lVar18 + 0x14 + lVar14 * 0x24) = 0;
          *(undefined8 *)(lVar18 + 0x1c + lVar14 * 0x24) = 0;
          *(float *)(lVar18 + 0x10 + lVar14 * 0x24) = local_228.Float[0];
          break;
        case 1:
          if (((char)local_208 != '\x01') &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type == EMaterialParameterType::Vector",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Materials\\MaterialParameters.h"
                                 ,0x177,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar9 = (int)this->_padding_;
          piVar1 = (int *)((longlong)&this->_padding_ + 4);
          local_1e0 = local_228.EnumEntry;
          FStack_1d8 = local_228._8_8_;
          if (iVar9 == *piVar1) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x430,(ForAnyElementType *)&this->_padding_,piVar1);
          }
          lVar14 = (longlong)iVar9;
          *(int *)&this->_padding_ = iVar9 + 1;
          lVar18 = this->_padding_;
          puVar2 = (undefined8 *)(lVar18 + lVar14 * 0x30);
          *puVar2 = CONCAT44(uStack_234,local_238);
          puVar2[1] = CONCAT44(iStack_22c,uStack_230);
          pFVar3 = (FName *)(lVar18 + 0x10 + lVar14 * 0x30);
          *pFVar3 = local_1e0;
          pFVar3[1] = FStack_1d8;
          *(undefined8 *)(lVar18 + 0x20 + lVar14 * 0x30) = 0;
          *(undefined8 *)(lVar18 + 0x28 + lVar14 * 0x30) = 0;
          break;
        case 2:
          if (((char)local_208 != '\x02') &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type == EMaterialParameterType::DoubleVector",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Materials\\MaterialParameters.h"
                                 ,0x178,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar9 = (int)this->_padding_;
          piVar1 = (int *)((longlong)&this->_padding_ + 4);
          FVar23.Value = SUB84(local_228.Double[1],0);
          uVar22 = (ulonglong)local_228._8_8_ >> 0x20;
          uVar24 = SUB84(local_228.Double[3],0);
          uVar15 = (ulonglong)local_228._24_8_ >> 0x20;
          if (iVar9 == *piVar1) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x1040,(ForAnyElementType *)&this->_padding_,piVar1);
          }
          *(int *)&this->_padding_ = iVar9 + 1;
          lVar18 = this->_padding_;
          lVar14 = (longlong)iVar9 * 0x40;
          *(undefined8 *)(lVar14 + lVar18) = CONCAT44(uStack_234,local_238);
          ((undefined8 *)(lVar14 + lVar18))[1] = CONCAT44(iStack_22c,uStack_230);
          pfVar4 = (float *)(lVar14 + 0x10 + lVar18);
          *pfVar4 = local_228.Float[0];
          pfVar4[1] = local_228.Float[1];
          pfVar4[2] = (float)FVar23.Value;
          pfVar4[3] = (float)uVar22;
          puVar5 = (undefined4 *)(lVar14 + 0x20 + lVar18);
          *puVar5 = local_228._16_4_;
          puVar5[1] = local_228._20_4_;
          puVar5[2] = uVar24;
          puVar5[3] = (int)uVar15;
          *(undefined8 *)(lVar14 + 0x30 + lVar18) = 0;
          *(undefined8 *)(lVar14 + 0x38 + lVar18) = 0;
          break;
        case 3:
          iVar9 = (int)this->_padding_;
          piVar1 = (int *)((longlong)&this->_padding_ + 4);
          if (iVar9 == *piVar1) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x828,(ForAnyElementType *)&this->_padding_,piVar1);
          }
          lVar18 = this->_padding_;
          *(int *)&this->_padding_ = iVar9 + 1;
          goto LAB_147f36d63;
        case 4:
          iVar9 = (int)this->_padding_;
          piVar1 = (int *)((longlong)&this->_padding_ + 4);
          if (iVar9 == *piVar1) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x828,(ForAnyElementType *)&this->_padding_,piVar1);
          }
          lVar18 = this->_padding_;
          *(int *)&this->_padding_ = iVar9 + 1;
          goto LAB_147f36d63;
        case 5:
          iVar9 = (int)this->_padding_;
          piVar1 = (int *)((longlong)&this->_padding_ + 4);
          if (iVar9 == *piVar1) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x830,(ForAnyElementType *)&this->_padding_,piVar1);
          }
          lVar18 = this->_padding_;
          *(int *)&this->_padding_ = iVar9 + 1;
          lVar14 = (longlong)iVar9;
          puVar2 = (undefined8 *)(lVar18 + lVar14 * 0x30);
          *puVar2 = CONCAT44(uStack_234,local_238);
          puVar2[1] = CONCAT44(iStack_22c,uStack_230);
          *(double *)(lVar18 + 0x10 + lVar14 * 0x30) = local_228.Double[0];
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             ((FName)local_228.Texture != (FName)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_228.Texture);
          }
          *(float *)(lVar18 + 0x18 + lVar14 * 0x30) = local_228.Float[2];
          *(undefined8 *)(lVar18 + 0x1c + lVar14 * 0x30) = 0;
          *(undefined8 *)(lVar18 + 0x24 + lVar14 * 0x30) = 0;
          break;
        case 6:
          iVar9 = (int)this->_padding_;
          piVar1 = (int *)((longlong)&this->_padding_ + 4);
          if (iVar9 == *piVar1) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x828,(ForAnyElementType *)&this->_padding_,piVar1);
          }
          lVar18 = this->_padding_;
          *(int *)&this->_padding_ = iVar9 + 1;
          goto LAB_147f36d63;
        case 7:
          iVar9 = (int)this->_padding_;
          piVar1 = (int *)((longlong)&this->_padding_ + 4);
          if (iVar9 == *piVar1) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x828,(ForAnyElementType *)&this->_padding_,piVar1);
          }
          lVar18 = this->_padding_;
          *(int *)&this->_padding_ = iVar9 + 1;
          goto LAB_147f36d63;
        case 8:
          break;
        case 9:
          iVar9 = (int)this->_padding_;
          piVar1 = (int *)((longlong)&this->_padding_ + 4);
          if (iVar9 == *piVar1) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x828,(ForAnyElementType *)&this->_padding_,piVar1);
          }
          lVar18 = this->_padding_;
          *(int *)&this->_padding_ = iVar9 + 1;
LAB_147f36d63:
          lVar14 = (longlong)iVar9;
          puVar2 = (undefined8 *)(lVar18 + lVar14 * 0x28);
          *puVar2 = CONCAT44(uStack_234,local_238);
          puVar2[1] = CONCAT44(iStack_22c,uStack_230);
          *(double *)(lVar18 + 0x10 + lVar14 * 0x28) = local_228.Double[0];
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             ((FName)local_228.Texture != (FName)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_228.Texture);
          }
          *(undefined8 *)(lVar18 + 0x18 + lVar14 * 0x28) = 0;
          *(undefined8 *)(lVar18 + 0x20 + lVar14 * 0x28) = 0;
          break;
        default:
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("!\"Enclosing block should never be called\"",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstance.cpp"
                             ,0xfe2,L"");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_170.Data.AllocatorInstance.Data);
        }
        if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.Data.AllocatorInstance.Data);
        }
        uVar19 = uVar19 + 0x1c;
        if (uVar20 - 1 == 0) break;
        uVar15 = (ulonglong)(uint)local_1c8.ArrayNum;
        uVar20 = uVar20 - 1;
        uVar22 = (ulonglong)(uVar21 + 1);
      } while( true );
    }
    UMaterialInstance::InitResources((UMaterialInstance *)this);
  }
  return;
}

// CopyScalarAndVectorParameters @ 147f36ff0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
UMaterialInstanceDynamic::CopyScalarAndVectorParameters
          (UMaterialInstanceDynamic *this,UMaterialInterface *param_1,Type param_2)

{
  if (param_2 == Num) {
    CopyScalarAndVectorParameters(this,param_1,SP_NumPlatforms);
    return;
  }
  CopyScalarAndVectorParameters
            (this,param_1,GRHIGlobals.ShaderPlatformForFeatureLevel[(int)param_2]);
  return;
}

// Create @ 147f37020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMaterialInstanceDynamic * __cdecl
UMaterialInstanceDynamic::Create(UMaterialInterface *param_1,UObject *param_2,FName param_3)

{
  FName FVar1;
  UClass *pUVar2;
  FString *pFVar3;
  FName *pFVar4;
  FName FVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  UMaterialInstanceDynamic *this;
  longlong *plVar8;
  int iVar9;
  wchar_t *pwVar10;
  FName local_res18;
  undefined1 auStackY_138 [32];
  FLLMScope local_108;
  FName local_104;
  undefined1 local_f8 [16];
  FString local_e8;
  FString local_d8;
  FString local_c8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_res18 = param_3;
  FLLMScope::FLLMScope(&local_108,MaterialInstance,false,None,Default,true);
  FMemScope::FMemScope((FMemScope *)(local_f8 + 8),MaterialInstance,true);
  pUVar2 = (UClass *)GetTransientPackage();
  if (param_2 != (UObject *)0x0) {
    pUVar2 = (UClass *)param_2;
  }
  if (local_res18 == (FName)0x0) {
    if (param_1 != (UMaterialInterface *)0x0) {
      local_104 = (FName)param_1->_padding_;
      ::FName::ToString(&local_104,&local_c8);
      pFVar3 = ::FString::FString(&local_d8,"MID_");
      ::FString::ConcatFF(&local_e8,pFVar3,&local_c8);
      iVar9 = local_e8.Data.ArrayNum + -1;
      if (local_e8.Data.ArrayNum == 0) {
        iVar9 = 0;
      }
      pFVar4 = ::FName::FName(&local_104,iVar9,(wchar_t *)local_e8.Data.AllocatorInstance.Data,
                              FNAME_Add);
      FVar1 = *pFVar4;
      FVar5 = (FName)StaticClass();
      local_res18 = MakeUniqueObjectName
                              ((UObject *)local_f8,(UClass *)param_2,FVar5,
                               FVar1.ComparisonIndex.Value.Value);
      local_res18 = *(FName *)local_res18;
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
    }
    if (local_res18 == (FName)0x0) goto LAB_147f371ec;
  }
  pFVar3 = ::FName::ToString(&local_res18,&local_d8);
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar4 = ::FName::FName((FName *)local_f8,pwVar10);
  FVar1 = *pFVar4;
  pUVar6 = StaticClass();
  pUVar7 = StaticFindObjectFast(pUVar6,(UObject *)pUVar2,FVar1,ExactClass,RF_NoFlags,Borrowed);
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  FVar1 = local_res18;
  if (pUVar7 != (UObject *)0x0) {
    FVar5 = (FName)StaticClass();
    local_res18 = MakeUniqueObjectName
                            ((UObject *)local_f8,pUVar2,FVar5,FVar1.ComparisonIndex.Value.Value);
    local_res18 = *(FName *)local_res18;
  }
LAB_147f371ec:
  FVar1 = local_res18;
  if (local_res18 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar2,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar6 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar6);
  FVar5 = local_res18;
  local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_b8._56_8_ = (UPackage *)0x0;
  local_res18.ComparisonIndex = FVar1.ComparisonIndex.Value;
  local_res18.Number = FVar1.Number;
  local_b8._16_4_ = local_res18.ComparisonIndex.Value;
  local_b8._20_4_ = local_res18.Number;
  local_b8._24_4_ = RF_NoFlags;
  local_b8._40_8_ = (UObject *)0x0;
  local_b8[0x20] = false;
  local_res18 = FVar5;
  local_b8._8_8_ = pUVar2;
  this = (UMaterialInstanceDynamic *)
         StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar8 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar8 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  UMaterialInstance::SetParentInternal((UMaterialInstance *)this,param_1,false);
  UpdateCachedDataDynamic(this);
  FMemScope::~FMemScope((FMemScope *)(local_f8 + 8));
  FLLMScope::~FLLMScope(&local_108);
  return this;
}

// GetBlendMode @ 147f3f0a0

/* WARNING: Enum "EBlendMode": Some values do not have unique names */

EBlendMode __thiscall UMaterialInstanceDynamic::GetBlendMode(UMaterialInstanceDynamic *this)

{
  EBlendMode EVar1;
  
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f3f0af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    EVar1 = (**(code **)(*(longlong *)this->_padding_ + 0x460))();
    return EVar1;
  }
  return BLEND_Opaque;
}

// GetCastDynamicShadowAsMasked @ 147f3f540

bool __thiscall
UMaterialInstanceDynamic::GetCastDynamicShadowAsMasked(UMaterialInstanceDynamic *this)

{
  undefined1 uVar1;
  
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f3f54f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(longlong *)this->_padding_ + 0x458))();
    return (bool)uVar1;
  }
  return false;
}

// GetDisplacementFadeRange @ 147f3f6e0

FDisplacementFadeRange __thiscall
UMaterialInstanceDynamic::GetDisplacementFadeRange(UMaterialInstanceDynamic *this)

{
  longlong *plVar1;
  undefined8 *puVar2;
  FDisplacementFadeRange in_RDX;
  undefined1 local_res8 [32];
  
  plVar1 = (longlong *)this->_padding_;
  if (plVar1 != (longlong *)0x0) {
    puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x4f8))(plVar1,local_res8);
    *(undefined8 *)in_RDX = *puVar2;
    return in_RDX;
  }
  *(undefined8 *)in_RDX = 0x3f80000040800000;
  return in_RDX;
}

// GetDisplacementScaling @ 147f3f780

FDisplacementScaling __thiscall
UMaterialInstanceDynamic::GetDisplacementScaling(UMaterialInstanceDynamic *this)

{
  longlong *plVar1;
  undefined8 *puVar2;
  FDisplacementScaling in_RDX;
  undefined1 local_res8 [32];
  
  plVar1 = (longlong *)this->_padding_;
  if (plVar1 != (longlong *)0x0) {
    puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x4e8))(plVar1,local_res8);
    *(undefined8 *)in_RDX = *puVar2;
    return in_RDX;
  }
  *(undefined8 *)in_RDX = 0x3f00000040800000;
  return in_RDX;
}

// GetMaxWorldPositionOffsetDisplacement @ 147f403c0

float __thiscall
UMaterialInstanceDynamic::GetMaxWorldPositionOffsetDisplacement(UMaterialInstanceDynamic *this)

{
  float fVar1;
  
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f403cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar1 = (float)(**(code **)(*(longlong *)this->_padding_ + 0x500))();
    return fVar1;
  }
  return 0.0;
}

// GetOpacityMaskClipValue @ 147f40540

float __thiscall UMaterialInstanceDynamic::GetOpacityMaskClipValue(UMaterialInstanceDynamic *this)

{
  float fVar1;
  
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f4054f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar1 = (float)(**(code **)(*(longlong *)this->_padding_ + 0x450))();
    return fVar1;
  }
  return 0.0;
}

// GetPrivateStaticClass @ 147f43740

UClass * __cdecl UMaterialInstanceDynamic::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialInstanceDynamic.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UMaterialInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialInstanceDynamic",
               &Z_Registration_Info_UClass_UMaterialInstanceDynamic.InnerSingleton,
               StaticRegisterNativesUMaterialInstanceDynamic,0x330,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMaterialInstanceDynamic>,
               InternalVTableHelperCtorCaller<UMaterialInstanceDynamic>,local_res8,
               UMaterialInstance::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialInstanceDynamic.InnerSingleton;
}

// GetShadingModels @ 147f44f70

FMaterialShadingModelField __thiscall
UMaterialInstanceDynamic::GetShadingModels(UMaterialInstanceDynamic *this)

{
  longlong *plVar1;
  undefined2 *puVar2;
  undefined2 *in_RDX;
  undefined1 local_res8 [32];
  
  plVar1 = (longlong *)this->_padding_;
  if (plVar1 != (longlong *)0x0) {
    puVar2 = (undefined2 *)(**(code **)(*plVar1 + 0x468))(plVar1,local_res8);
    *in_RDX = *puVar2;
    return (FMaterialShadingModelField)(ushort)in_RDX;
  }
  *in_RDX = 2;
  return (FMaterialShadingModelField)(ushort)in_RDX;
}

// GetTextureDensity @ 147f457c0

float __thiscall
UMaterialInstanceDynamic::GetTextureDensity
          (UMaterialInstanceDynamic *this,FName param_1,FMeshUVChannelInfo *param_2)

{
  FName *pFVar1;
  int iVar2;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar3;
  FName *pFVar4;
  float fVar5;
  float fVar6;
  undefined1 local_res8 [8];
  
  fVar5 = UMaterialInstance::GetTextureDensity((UMaterialInstance *)this,param_1,param_2);
  pTVar3 = TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
           ::Find((TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
                   *)&this->RenamedTextures,param_1);
  if (pTVar3 != (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
    pFVar4 = (FName *)(pTVar3->AllocatorInstance).Data;
    iVar2 = pTVar3->ArrayNum;
    pFVar1 = pFVar4 + iVar2;
    while( true ) {
      if (pTVar3->ArrayNum != iVar2) {
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar4 == pFVar1) break;
      fVar6 = UMaterialInstance::GetTextureDensity((UMaterialInstance *)this,*pFVar4,param_2);
      if (fVar6 <= fVar5) {
        fVar6 = fVar5;
      }
      pFVar4 = pFVar4 + 1;
      fVar5 = fVar6;
    }
  }
  return fVar5;
}

// HasOverridenBaseProperties @ 147f47430

bool __thiscall UMaterialInstanceDynamic::HasOverridenBaseProperties(UMaterialInstanceDynamic *this)

{
  return false;
}

// HasPixelAnimation @ 147f47460

bool __thiscall UMaterialInstanceDynamic::HasPixelAnimation(UMaterialInstanceDynamic *this)

{
  undefined1 uVar1;
  
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f4746f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(longlong *)this->_padding_ + 0x520))();
    return (bool)uVar1;
  }
  return false;
}

// InitializeMID @ 147f4a450

void __thiscall
UMaterialInstanceDynamic::InitializeMID(UMaterialInstanceDynamic *this,UMaterialInterface *param_1)

{
  UMaterialInstance::SetParentInternal((UMaterialInstance *)this,param_1,false);
  UpdateCachedDataDynamic(this);
  return;
}

// InitializeScalarParameterAndGetIndex @ 147f4a480

bool __thiscall
UMaterialInstanceDynamic::InitializeScalarParameterAndGetIndex
          (UMaterialInstanceDynamic *this,FName *param_1,float param_2,int *param_3)

{
  FName FVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  FMaterialParameterInfo local_98;
  undefined1 local_88 [32];
  FUtf8String local_68;
  undefined1 local_58 [24];
  FUtf8String local_40 [2];
  
  local_88[0] = false;
  uVar9 = 0;
  *param_3 = -1;
  FVar1 = *param_1;
  local_98.Association.Value = '\x02';
  local_98.Index = -1;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  local_88._8_8_ = 0;
  local_88._24_8_ = 0;
  local_88._16_8_ = 0;
  local_98.Name = FVar1;
  FUtf8String::Reset(&local_68,0);
  local_40[0].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40[0].Data.ArrayNum = 0;
  local_40[0].Data.ArrayMax = 0;
  local_58._0_8_ = 0;
  local_58._16_8_ = 0;
  local_58._8_8_ = 0;
  FUtf8String::Reset(local_40,0);
  UMaterialInstance::SetScalarParameterValueInternal
            ((UMaterialInstance *)this,&local_98,param_2,false,
             (FScalarParameterAtlasInstanceData *)local_88);
  iVar7 = (int)this->_padding_;
  uVar10 = uVar9;
  if (0 < iVar7) {
    do {
      uVar8 = (uint)uVar9;
      uVar6 = 0;
      if ((int)uVar8 < iVar7) {
        uVar6 = ~uVar8 >> 0x1f;
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
      lVar2 = this->_padding_;
      if (((((uint)*(undefined8 *)(lVar2 + uVar10) == FVar1.ComparisonIndex.Value.Value) &&
           ((uint)((ulonglong)*(undefined8 *)(lVar2 + uVar10) >> 0x20) == FVar1.Number)) &&
          (*(int *)(lVar2 + 0xc + uVar10) == -1)) && (*(char *)(lVar2 + 8 + uVar10) == '\x02'))
      goto LAB_147f4a5e5;
      iVar7 = (int)this->_padding_;
      uVar9 = (ulonglong)(uVar8 + 1);
      uVar10 = uVar10 + 0x24;
    } while ((int)(uVar8 + 1) < iVar7);
  }
  uVar8 = 0xffffffff;
LAB_147f4a5e5:
  *param_3 = uVar8;
  return uVar8 != 0xffffffff;
}

// InitializeVectorParameterAndGetIndex @ 147f4a620

bool __thiscall
UMaterialInstanceDynamic::InitializeVectorParameterAndGetIndex
          (UMaterialInstanceDynamic *this,FName *param_1,FLinearColor *param_2,int *param_3)

{
  FName FVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  FMaterialParameterInfo local_38;
  FLinearColor_u_0 local_28;
  
  *param_3 = -1;
  local_28._0_8_ = *(undefined8 *)&param_2->field0_0x0;
  local_28._8_8_ = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
  FVar1 = *param_1;
  local_38.Association.Value = '\x02';
  local_38.Index = -1;
  local_38.Name = FVar1;
  UMaterialInstance::SetVectorParameterValueInternal
            ((UMaterialInstance *)this,&local_38,(FLinearColor *)&local_28._s_0);
  iVar7 = (int)this->_padding_;
  uVar8 = 0;
  if (0 < iVar7) {
    lVar9 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar8 < iVar7) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      lVar2 = this->_padding_;
      if (((((uint)*(undefined8 *)(lVar2 + lVar9) == FVar1.ComparisonIndex.Value.Value) &&
           ((uint)((ulonglong)*(undefined8 *)(lVar2 + lVar9) >> 0x20) == FVar1.Number)) &&
          (*(int *)(lVar2 + 0xc + lVar9) == -1)) && (*(char *)(lVar2 + 8 + lVar9) == '\x02'))
      goto LAB_147f4a708;
      iVar7 = (int)this->_padding_;
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0x30;
    } while ((int)uVar8 < iVar7);
  }
  uVar8 = 0xffffffff;
LAB_147f4a708:
  *param_3 = uVar8;
  return uVar8 != 0xffffffff;
}

// IsDisplacementFadeEnabled @ 147f4ac60

bool __thiscall UMaterialInstanceDynamic::IsDisplacementFadeEnabled(UMaterialInstanceDynamic *this)

{
  undefined1 uVar1;
  
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f4ac6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(longlong *)this->_padding_ + 0x4f0))();
    return (bool)uVar1;
  }
  return false;
}

// IsDitheredLODTransition @ 147f4acb0

bool __thiscall UMaterialInstanceDynamic::IsDitheredLODTransition(UMaterialInstanceDynamic *this)

{
  undefined1 uVar1;
  
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f4acbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(longlong *)this->_padding_ + 0x488))();
    return (bool)uVar1;
  }
  return false;
}

// IsMasked @ 147f4ae80

bool __thiscall UMaterialInstanceDynamic::IsMasked(UMaterialInstanceDynamic *this)

{
  undefined1 uVar1;
  
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f4ae8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(longlong *)this->_padding_ + 0x4b0))();
    return (bool)uVar1;
  }
  return false;
}

// IsShadingModelFromMaterialExpression @ 147f4b1f0

bool __thiscall
UMaterialInstanceDynamic::IsShadingModelFromMaterialExpression(UMaterialInstanceDynamic *this)

{
  undefined1 uVar1;
  
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f4b1ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(longlong *)this->_padding_ + 0x470))();
    return (bool)uVar1;
  }
  return false;
}

// IsThinSurface @ 147f4b270

bool __thiscall UMaterialInstanceDynamic::IsThinSurface(UMaterialInstanceDynamic *this)

{
  undefined1 uVar1;
  
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f4b27f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(longlong *)this->_padding_ + 0x480))();
    return (bool)uVar1;
  }
  return false;
}

// IsTranslucencyWritingVelocity @ 147f4b330

bool __thiscall
UMaterialInstanceDynamic::IsTranslucencyWritingVelocity(UMaterialInstanceDynamic *this)

{
  undefined1 uVar1;
  
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f4b33f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(longlong *)this->_padding_ + 0x498))();
    return (bool)uVar1;
  }
  return false;
}

// IsTwoSided @ 147f4b380

bool __thiscall UMaterialInstanceDynamic::IsTwoSided(UMaterialInstanceDynamic *this)

{
  undefined1 uVar1;
  
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f4b38f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(longlong *)this->_padding_ + 0x478))();
    return (bool)uVar1;
  }
  return false;
}

// K2_CopyMaterialInstanceParameters @ 147f4b800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EMaterialParameterType": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
UMaterialInstanceDynamic::K2_CopyMaterialInstanceParameters
          (UMaterialInstanceDynamic *this,UMaterialInterface *param_1,bool param_2)

{
  int *piVar1;
  FMaterialNumericParameterInfo *pFVar2;
  undefined8 *puVar3;
  uint *puVar4;
  int iVar5;
  undefined4 uVar6;
  code *pcVar7;
  longlong lVar8;
  EMaterialTextureParameterType EVar9;
  UMaterialInterface *pUVar10;
  UMaterialInstanceDynamic *pUVar11;
  UMaterialInstanceDynamic *pUVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  FName *pFVar17;
  FThreadSafeStaticStat<FStat_STAT_MaterialInstance_CopyUniformParamsInternal> FVar18;
  UClass *pUVar19;
  longlong lVar20;
  FMaterial *this_00;
  FUniformExpressionSet *pFVar21;
  FType *pFVar22;
  uint uVar23;
  EShaderPlatform EVar24;
  longlong lVar25;
  longlong *plVar26;
  FName FVar27;
  longlong *plVar28;
  ForAnyElementType FVar29;
  FMaterialTextureParameterInfo *this_01;
  longlong *plVar30;
  FMaterialNumericParameterInfo *pFVar31;
  longlong *plVar32;
  longlong *plVar33;
  EMaterialParameterType *pEVar34;
  undefined8 *puVar35;
  FMaterialTextureParameterInfo *pFVar36;
  undefined1 auStackY_278 [32];
  undefined1 uStack_214;
  undefined1 uStack_213;
  undefined1 uStack_212;
  undefined1 uStack_211;
  undefined1 uStack_210;
  undefined1 auStack_20f [7];
  FName FStack_208;
  byte bStack_200;
  ForAnyElementType FStack_1f8;
  undefined8 uStack_1f0;
  FName FStack_1e8;
  UMaterialInterface *pUStack_1e0;
  EMaterialTextureParameterType EStack_1d8;
  UMaterialInstanceDynamic *pUStack_1d0;
  FLLMScope FStack_1c8;
  FColor_u_0 FStack_1c4;
  FName FStack_1c0;
  undefined4 uStack_1b8;
  uint uStack_1b4;
  longlong lStack_1b0;
  FMaterialParameterInfo FStack_1a8;
  undefined8 uStack_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  FMemScope FStack_188;
  TArrayView<FMaterialNumericParameterInfo_const_,int> TStack_180;
  TArrayView<FMaterialTextureParameterInfo_const_,int> TStack_170;
  undefined8 uStack_158;
  undefined8 uStack_148;
  FName FStack_138;
  FMaterialParameterMetadata FStack_130;
  FType FStack_100;
  FValue FStack_e8;
  ulonglong uStack_40;
  
  if (!param_2) {
    UMaterialInstance::CopyMaterialInstanceParameters((UMaterialInstance *)this,param_1);
    return;
  }
  uStack_40 = __security_cookie.value ^ (ulonglong)auStackY_278;
  pUStack_1d0 = this;
  FLLMScope::FLLMScope(&FStack_1c8,MaterialInstance,false,None,Default,true);
  FMemScope::FMemScope(&FStack_188,MaterialInstance,true);
  FVar18 = StatPtr_STAT_MaterialInstance_CopyUniformParamsInternal;
  if (StatPtr_STAT_MaterialInstance_CopyUniformParamsInternal ==
      (FThreadSafeStaticStat<FStat_STAT_MaterialInstance_CopyUniformParamsInternal>)0x0) {
    pFVar17 = ::FName::FName(&FStack_138,"STAT_MaterialInstance_CopyUniformParamsInternal");
    FVar18 = (FThreadSafeStaticStat<FStat_STAT_MaterialInstance_CopyUniformParamsInternal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_MaterialInstance_CopyUniformParamsInternal,*pFVar17,
                        L"MaterialInstance CopyUniformParamsInternal","STATGROUP_Shaders",
                        "STATCAT_Advanced",L"Shader Compression",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FStack_208.ComparisonIndex.Value = 0;
  FStack_208.Number = 0;
  bStack_200 = 0;
  FVar27 = *(FName *)FVar18;
  if ((FVar27.ComparisonIndex.Value.Value != 0) || (FVar27.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      FStack_1c4.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&FStack_1c4._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
      bStack_200 = bStack_200 | 1;
      if (-1 < CpuChannel->Enabled) {
        FStack_1c0.ComparisonIndex.Value = FVar27.ComparisonIndex.Value.Value;
        FStack_1c0.Number = FVar27.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&FStack_1c0,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstance.cpp"
                   ,0x1651);
        bStack_200 = bStack_200 | 2;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FStack_208 = FVar27;
      FStack_1e8 = FVar27;
      FThreadStats::AddMessage(FVar27,CycleScopeStart);
      bStack_200 = bStack_200 | 4;
    }
  }
  if ((param_1 != (UMaterialInterface *)0x0) && ((UMaterialInstanceDynamic *)param_1 != this)) {
    UMaterialInstance::ClearParameterValuesInternal((UMaterialInstance *)this,AllNonStatic);
    uStack_1f0._0_4_ = 0;
    FStack_1f8.Data = (FScriptContainerElement *)0x0;
    uStack_1f0 = 0;
    pUStack_1e0 = param_1;
    while( true ) {
      iVar14 = (int)uStack_1f0;
      if ((FStack_1f8.Data <= (FScriptContainerElement *)&pUStack_1e0) &&
         ((FScriptContainerElement *)&pUStack_1e0 < FStack_1f8.Data + (longlong)uStack_1f0._4_4_ * 8
         )) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar13) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar14 = (int)uStack_1f0;
      }
      if (iVar14 == uStack_1f0._4_4_) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&FStack_1f8,(int *)((longlong)&uStack_1f0 + 4));
      }
      pUVar10 = pUStack_1e0;
      uStack_1f0 = CONCAT44(uStack_1f0._4_4_,iVar14 + 1);
      *(UMaterialInterface **)(FStack_1f8.Data + (longlong)iVar14 * 8) = pUStack_1e0;
      if (pUStack_1e0 == (UMaterialInterface *)0x0) break;
      pUVar19 = UMaterialInstance::GetPrivateStaticClass();
      lVar25 = pUVar10->_padding_;
      iVar14 = (int)pUVar19->_padding_;
      if ((*(int *)(lVar25 + 0x38) < iVar14) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar25 + 0x30) + (longlong)iVar14 * 8) !=
          &pUVar19->_padding_)) break;
      pUStack_1e0 = *(UMaterialInterface **)&pUVar10[1].SubsurfaceProfiles.ArrayNum;
      if (pUStack_1e0 == (UMaterialInterface *)0x0) goto LAB_147f35d3e;
    }
    pUStack_1e0 = (UMaterialInterface *)0x0;
LAB_147f35d3e:
    iVar14 = (int)uStack_1f0 + -1;
    if (-1 < iVar14) {
      lVar25 = (longlong)iVar14 << 3;
      do {
        lStack_1b0 = lVar25;
        if (((int)uStack_1f0 <= iVar14) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar27 = *(FName *)(FStack_1f8.Data + lVar25);
        FStack_1e8 = FVar27;
        if (FVar27 != (FName)0x0) {
          pUVar19 = UMaterialInstance::GetPrivateStaticClass();
          iVar5 = (int)pUVar19->_padding_;
          if ((*(int *)(*(longlong *)((longlong)FVar27 + 0x10) + 0x38) < iVar5) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)((longlong)FVar27 + 0x10) + 0x30) + (longlong)iVar5 * 8)
              != &pUVar19->_padding_)) {
            pUVar19 = Z_Construct_UClass_UMaterial_NoRegister();
            iVar5 = (int)pUVar19->_padding_;
            if ((iVar5 <= *(int *)(*(longlong *)((longlong)FVar27 + 0x10) + 0x38)) &&
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)((longlong)FVar27 + 0x10) + 0x30) + (longlong)iVar5 * 8
                 ) == &pUVar19->_padding_)) {
              lVar25 = (**(code **)(*(longlong *)FVar27 + 0x180))(FVar27);
              if (lVar25 == 0) {
LAB_147f36281:
                this_00 = (FMaterial *)
                          (**(code **)(*(longlong *)FVar27 + 0x390))(FVar27,GMaxRHIShaderPlatform,4)
                ;
                if (this_00 == (FMaterial *)0x0) goto LAB_147f36511;
              }
              else {
                EVar24 = SP_NumPlatforms;
                if (*(byte *)(lVar25 + 0x188) != 5) {
                  EVar24 = GRHIGlobals.ShaderPlatformForFeatureLevel[*(byte *)(lVar25 + 0x188)];
                }
                this_00 = (FMaterial *)(**(code **)(*(longlong *)FVar27 + 0x390))(FVar27,EVar24,4);
                if (this_00 == (FMaterial *)0x0) goto LAB_147f36281;
              }
              FMaterial::GetUniformNumericParameterExpressions(this_00,&TStack_180);
              pFVar31 = TStack_180.DataPtr + TStack_180.ArrayNum;
              if (TStack_180.DataPtr != pFVar31) {
                pEVar34 = &(TStack_180.DataPtr)->ParameterType;
                FStack_1e8 = FVar27;
                do {
                  pFVar21 = FMaterial::GetUniformExpressions(this_00);
                  uVar6 = *(undefined4 *)(pEVar34 + 4);
                  FVar29 = (pFVar21->DefaultValues).AllocatorInstance;
                  if (((ulonglong)FVar29 & 1) != 0) {
                    FVar29 = (ForAnyElementType)
                             ((longlong)&(pFVar21->DefaultValues).AllocatorInstance.field_0x0 +
                             ((longlong)FVar29 >> 0x18));
                  }
                  pFVar22 = GetShaderValueType(&FStack_100,*pEVar34);
                  UE::Shader::FValue::FromMemoryImage
                            (&FStack_e8,pFVar22->ValueType,
                             (void *)((longlong)FVar29 + (ulonglong)(uint)uVar6),(uint *)0x0);
                  FMaterialParameterValue::FMaterialParameterValue
                            (&FStack_130.Value,*pEVar34,&FStack_e8);
                  FStack_1a8.Name.Number = *(uint *)(pEVar34 + -0xc);
                  uStack_158._0_4_ =
                       (((FMaterialNumericParameterInfo *)(pEVar34 + -0x14))->ParameterInfo).Name.
                       ComparisonIndex;
                  uStack_158._4_4_ =
                       (((FMaterialNumericParameterInfo *)(pEVar34 + -0x14))->ParameterInfo).Name.
                       DisplayIndex;
                  FStack_1a8.Name.ComparisonIndex.Value = (undefined4)uStack_158;
                  FStack_130.PrimitiveDataIndex = -1;
                  FStack_130.bDynamicSwitchParameter = false;
                  FStack_1a8.Association.Value = '\x02';
                  FStack_1a8.Index = -1;
                  UMaterialInstance::AddParameterValueInternal
                            ((UMaterialInstance *)this,&FStack_1a8,&FStack_130,None);
                  if (FStack_e8.Component.AllocatorInstance.SecondaryData !=
                      (ForElementType<UE::Shader::FValueComponent>)0x0) {
                    FMemory::Free((void *)FStack_e8.Component.AllocatorInstance.SecondaryData);
                  }
                  pFVar2 = (FMaterialNumericParameterInfo *)(pEVar34 + 8);
                  pEVar34 = pEVar34 + 0x1c;
                } while (pFVar2 != pFVar31);
              }
              FVar27 = FStack_1e8;
              EStack_1d8 = Standard2D;
              do {
                EVar9 = EStack_1d8;
                FMaterial::GetUniformTextureExpressions(this_00,&TStack_170,EStack_1d8);
                pUVar11 = pUStack_1d0;
                pFVar36 = TStack_170.DataPtr + TStack_170.ArrayNum;
                this = pUStack_1d0;
                for (this_01 = TStack_170.DataPtr; pUStack_1d0 = this, this_01 != pFVar36;
                    this_01 = this_01 + 1) {
                  if (((this_01->ParameterInfo).Name.ComparisonIndex.Value != 0) ||
                     ((this_01->ParameterInfo).Name.Number != 0)) {
                    uVar16 = (uint)pUVar11->_padding_;
                    puVar4 = (uint *)((longlong)&pUVar11->_padding_ + 4);
                    if (uVar16 == *puVar4) {
                      uVar16 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x828,(ForAnyElementType *)&pUVar11->_padding_,
                                          (int *)puVar4);
                    }
                    *(uint *)&pUVar11->_padding_ = uVar16 + 1;
                    uVar23 = 0;
                    if ((int)uVar16 < (int)(uVar16 + 1)) {
                      uVar23 = ~uVar16 >> 0x1f;
                    }
                    if ((uVar23 == 0) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar13)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    puVar35 = (undefined8 *)0x0;
                    puVar3 = (undefined8 *)(pUVar11->_padding_ + (longlong)(int)uVar16 * 0x28);
                    if (puVar3 != (undefined8 *)0x0) {
                      uStack_198 = 0;
                      uStack_190 = CONCAT31(uStack_190._1_3_,2);
                      uStack_18c = 0xffffffff;
                      *puVar3 = 0;
                      puVar3[1] = CONCAT44(0xffffffff,uStack_190);
                      puVar3[2] = 0;
                      puVar3[3] = 0;
                      puVar3[4] = 0;
                      puVar35 = puVar3;
                    }
                    uStack_1b4 = (this_01->ParameterInfo).Name.Number;
                    uStack_148._0_4_ = (this_01->ParameterInfo).Name.ComparisonIndex;
                    uStack_148._4_4_ = (this_01->ParameterInfo).Name.DisplayIndex;
                    uStack_1b8 = (undefined4)uStack_148;
                    *puVar35 = CONCAT44(uStack_1b4,(undefined4)uStack_148);
                    FMaterialTextureParameterInfo::GetGameThreadTextureValue
                              (this_01,(UMaterialInterface *)FVar27,this_00,
                               (UTexture **)(puVar35 + 2));
                  }
                  EVar9 = EStack_1d8;
                  this = pUStack_1d0;
                }
                EStack_1d8 = EVar9 + Cube;
              } while (EStack_1d8 < Count);
            }
          }
          else {
            iVar5 = *(int *)((longlong)FVar27 + 0x1a8);
            plVar33 = &this->_padding_;
            plVar32 = *(longlong **)((longlong)FVar27 + 0x1a0);
            plVar30 = (longlong *)((longlong)plVar32 + (longlong)iVar5 * 0x24);
LAB_147f35e10:
            if (*(int *)((longlong)FVar27 + 0x1a8) != iVar5) {
              uStack_214 = 0;
              `TCheckedPointerIterator<FScalarParameterValue_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(&uStack_214);
            }
            pUVar11 = pUStack_1d0;
            if (plVar32 != plVar30) {
              iVar15 = (int)this->_padding_;
              plVar26 = (longlong *)*plVar33;
              plVar28 = (longlong *)((longlong)plVar26 + (longlong)iVar15 * 0x24);
              while( true ) {
                if ((int)this->_padding_ != iVar15) {
                  uStack_213 = 0;
                  `TCheckedPointerIterator<FScalarParameterValue,int,0>::operator!='::__l2::
                  <lambda_1>::operator()(&uStack_213);
                }
                if (plVar26 == plVar28) {
                  if ((((longlong *)*plVar33 <= plVar32) &&
                      (plVar32 < (longlong *)
                                 (*plVar33 +
                                 (longlong)*(int *)((longlong)&this->_padding_ + 4) * 0x24))) &&
                     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar13)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  iVar15 = (int)this->_padding_;
                  piVar1 = (int *)((longlong)&this->_padding_ + 4);
                  if (iVar15 == *piVar1) {
                    iVar15 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x424,(ForAnyElementType *)plVar33,piVar1);
                  }
                  *(int *)&this->_padding_ = iVar15 + 1;
                  lVar8 = plVar32[1];
                  lVar25 = *plVar33;
                  lVar20 = (longlong)iVar15;
                  plVar28 = (longlong *)(lVar25 + lVar20 * 0x24);
                  *plVar28 = *plVar32;
                  plVar28[1] = lVar8;
                  lVar8 = plVar32[3];
                  plVar28 = (longlong *)(lVar25 + lVar20 * 0x24 + 0x10);
                  *plVar28 = plVar32[2];
                  plVar28[1] = lVar8;
                  plVar28 = plVar32 + 4;
                  plVar32 = (longlong *)((longlong)plVar32 + 0x24);
                  *(int *)(lVar25 + lVar20 * 0x24 + 0x20) = (int)*plVar28;
                  FVar27 = FStack_1e8;
                  goto LAB_147f35e10;
                }
                if (*plVar26 == *plVar32) break;
                plVar26 = (longlong *)((longlong)plVar26 + 0x24);
              }
              plVar28 = plVar32 + 2;
              plVar32 = (longlong *)((longlong)plVar32 + 0x24);
              *(int *)(plVar26 + 2) = (int)*plVar28;
              FVar27 = FStack_1e8;
              goto LAB_147f35e10;
            }
            iVar5 = *(int *)((longlong)FVar27 + 0x1b8);
            plVar33 = *(longlong **)((longlong)FVar27 + 0x1b0);
            plVar30 = &pUStack_1d0->_padding_;
            plVar32 = plVar33 + (longlong)iVar5 * 6;
LAB_147f35f50:
            if (*(int *)((longlong)FVar27 + 0x1b8) != iVar5) {
              uStack_212 = 0;
              `TCheckedPointerIterator<FVectorParameterValue_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(&uStack_212);
            }
            pUVar12 = pUStack_1d0;
            if (plVar33 != plVar32) {
              iVar15 = (int)pUVar11->_padding_;
              plVar28 = (longlong *)*plVar30;
              plVar26 = plVar28 + (longlong)iVar15 * 6;
              while( true ) {
                if ((int)pUVar11->_padding_ != iVar15) {
                  uStack_211 = 0;
                  `TCheckedPointerIterator<FVectorParameterValue,int,0>::operator!='::__l2::
                  <lambda_1>::operator()(&uStack_211);
                }
                if (plVar28 == plVar26) {
                  if ((((longlong *)*plVar30 <= plVar33) &&
                      (plVar33 < (longlong *)*plVar30 +
                                 (longlong)*(int *)((longlong)&pUVar11->_padding_ + 4) * 6)) &&
                     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar13)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  iVar15 = (int)pUVar11->_padding_;
                  piVar1 = (int *)((longlong)&pUVar11->_padding_ + 4);
                  if (iVar15 == *piVar1) {
                    iVar15 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x430,(ForAnyElementType *)plVar30,piVar1);
                  }
                  *(int *)&pUVar11->_padding_ = iVar15 + 1;
                  lVar8 = plVar33[1];
                  lVar20 = (longlong)iVar15;
                  lVar25 = *plVar30;
                  plVar28 = (longlong *)(lVar25 + lVar20 * 0x30);
                  *plVar28 = *plVar33;
                  plVar28[1] = lVar8;
                  lVar8 = plVar33[3];
                  plVar28 = (longlong *)(lVar25 + 0x10 + lVar20 * 0x30);
                  *plVar28 = plVar33[2];
                  plVar28[1] = lVar8;
                  plVar28 = plVar33 + 4;
                  lVar8 = plVar33[5];
                  plVar33 = plVar33 + 6;
                  plVar26 = (longlong *)(lVar25 + 0x20 + lVar20 * 0x30);
                  *plVar26 = *plVar28;
                  plVar26[1] = lVar8;
                  FVar27 = FStack_1e8;
                  goto LAB_147f35f50;
                }
                if (*plVar28 == *plVar33) break;
                plVar28 = plVar28 + 6;
              }
              plVar26 = plVar33 + 2;
              lVar25 = plVar33[3];
              plVar33 = plVar33 + 6;
              plVar28[2] = *plVar26;
              plVar28[3] = lVar25;
              FVar27 = FStack_1e8;
              goto LAB_147f35f50;
            }
            iVar5 = *(int *)((longlong)FVar27 + 0x1c8);
            plVar33 = *(longlong **)((longlong)FVar27 + 0x1c0);
            plVar30 = &pUStack_1d0->_padding_;
            plVar32 = plVar33 + (longlong)iVar5 * 8;
LAB_147f36094:
            if (*(int *)((longlong)FVar27 + 0x1c8) != iVar5) {
              uStack_210 = 0;
              `TCheckedPointerIterator<FDoubleVectorParameterValue_const_,int,0>::operator!='::__l2
              ::<lambda_1>::operator()(&uStack_210);
            }
            this = pUStack_1d0;
            if (plVar33 != plVar32) {
              iVar15 = (int)pUVar12->_padding_;
              plVar28 = (longlong *)*plVar30;
              plVar26 = plVar28 + (longlong)iVar15 * 8;
              while( true ) {
                if ((int)pUVar12->_padding_ != iVar15) {
                  auStack_20f[0] = 0;
                  `TCheckedPointerIterator<FDoubleVectorParameterValue,int,0>::operator!='::__l2::
                  <lambda_1>::operator()(auStack_20f);
                }
                if (plVar28 == plVar26) {
                  if ((((longlong *)*plVar30 <= plVar33) &&
                      (plVar33 < (longlong *)*plVar30 +
                                 (longlong)*(int *)((longlong)&pUVar12->_padding_ + 4) * 8)) &&
                     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar13)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  iVar15 = (int)pUVar12->_padding_;
                  piVar1 = (int *)((longlong)&pUVar12->_padding_ + 4);
                  if (iVar15 == *piVar1) {
                    iVar15 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x1040,(ForAnyElementType *)plVar30,piVar1);
                  }
                  *(int *)&pUVar12->_padding_ = iVar15 + 1;
                  lVar8 = plVar33[1];
                  lVar25 = *plVar30;
                  lVar20 = (longlong)iVar15 * 0x40;
                  *(longlong *)(lVar20 + lVar25) = *plVar33;
                  ((longlong *)(lVar20 + lVar25))[1] = lVar8;
                  lVar8 = plVar33[3];
                  plVar28 = (longlong *)(lVar20 + 0x10 + lVar25);
                  *plVar28 = plVar33[2];
                  plVar28[1] = lVar8;
                  lVar8 = plVar33[5];
                  plVar28 = (longlong *)(lVar20 + 0x20 + lVar25);
                  *plVar28 = plVar33[4];
                  plVar28[1] = lVar8;
                  plVar28 = plVar33 + 6;
                  lVar8 = plVar33[7];
                  plVar33 = plVar33 + 8;
                  plVar26 = (longlong *)(lVar20 + 0x30 + lVar25);
                  *plVar26 = *plVar28;
                  plVar26[1] = lVar8;
                  FVar27 = FStack_1e8;
                  goto LAB_147f36094;
                }
                if (*plVar28 == *plVar33) break;
                plVar28 = plVar28 + 8;
              }
              lVar25 = plVar33[3];
              plVar28[2] = plVar33[2];
              plVar28[3] = lVar25;
              plVar26 = plVar33 + 4;
              lVar25 = plVar33[5];
              plVar33 = plVar33 + 8;
              plVar28[4] = *plVar26;
              plVar28[5] = lVar25;
              FVar27 = FStack_1e8;
              goto LAB_147f36094;
            }
            MergeParameterOverrides<FTextureParameterValue>
                      ((TArray<FTextureParameterValue,TSizedDefaultAllocator<32>_> *)
                       &pUStack_1d0->_padding_,
                       (TArray<FTextureParameterValue,TSizedDefaultAllocator<32>_> *)
                       ((longlong)FVar27 + 0x1d0));
            MergeParameterOverrides<FRuntimeVirtualTextureParameterValue>
                      ((TArray<FRuntimeVirtualTextureParameterValue,TSizedDefaultAllocator<32>_> *)
                       &this->_padding_,
                       (TArray<FRuntimeVirtualTextureParameterValue,TSizedDefaultAllocator<32>_> *)
                       ((longlong)FVar27 + 0x200));
            MergeParameterOverrides<FSparseVolumeTextureParameterValue>
                      ((TArray<FSparseVolumeTextureParameterValue,TSizedDefaultAllocator<32>_> *)
                       &this->_padding_,
                       (TArray<FSparseVolumeTextureParameterValue,TSizedDefaultAllocator<32>_> *)
                       ((longlong)FVar27 + 0x210));
            MergeParameterOverrides<FParameterCollectionParameterValue>
                      ((TArray<FParameterCollectionParameterValue,TSizedDefaultAllocator<32>_> *)
                       &this->_padding_,
                       (TArray<FParameterCollectionParameterValue,TSizedDefaultAllocator<32>_> *)
                       ((longlong)FVar27 + 0x1f0));
          }
        }
LAB_147f36511:
        iVar14 = iVar14 + -1;
        lVar25 = lStack_1b0 + -8;
        lStack_1b0 = lVar25;
      } while (-1 < iVar14);
    }
    UMaterialInstance::InitResources((UMaterialInstance *)this);
    if (FStack_1f8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_1f8.Data);
    }
  }
  if ((bStack_200 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((bStack_200 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((bStack_200 & 4) != 0) {
    FThreadStats::AddMessage(FStack_208,CycleScopeEnd);
  }
  bStack_200 = 0;
  FMemScope::~FMemScope(&FStack_188);
  FLLMScope::~FLLMScope(&FStack_1c8);
  return;
}

// K2_GetScalarParameterValue @ 147f4b8d0

float __thiscall
UMaterialInstanceDynamic::K2_GetScalarParameterValue(UMaterialInstanceDynamic *this,FName param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  float fVar4;
  uint local_58 [3];
  undefined4 local_4c;
  undefined1 local_48;
  float local_40 [8];
  char local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  local_58[0] = (uint)param_1.ComparisonIndex.Value;
  local_58[2] = param_1.Number;
  local_58[1] = 0;
  local_4c = 0xffffffff;
  local_48 = 2;
  local_20 = -1;
  local_18 = 0xffffffff;
  local_14 = 0;
  cVar2 = (**(code **)(this->_padding_ + 0x410))(this,0,local_58,local_40,3);
  if (cVar2 == '\0') {
    return 0.0;
  }
  if (local_20 != '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type == EMaterialParameterType::Scalar",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Materials\\MaterialParameters.h"
                       ,0x176,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      fVar4 = (float)(*pcVar1)();
      return fVar4;
    }
  }
  return local_40[0];
}

// K2_GetScalarParameterValueByInfo @ 147f4b980

float __thiscall
UMaterialInstanceDynamic::K2_GetScalarParameterValueByInfo
          (UMaterialInstanceDynamic *this,FMaterialParameterInfo *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  float fVar4;
  uint local_58 [3];
  int local_4c;
  uchar local_48;
  float local_40 [8];
  char local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  local_58[0] = (uint)(param_1->Name).ComparisonIndex;
  local_58[2] = (param_1->Name).Number;
  local_4c = param_1->Index;
  local_48 = (param_1->Association).Value;
  local_58[1] = 0;
  local_20 = -1;
  local_18 = 0xffffffff;
  local_14 = 0;
  cVar2 = (**(code **)(this->_padding_ + 0x410))(this,0,local_58,local_40,3);
  if (cVar2 == '\0') {
    return 0.0;
  }
  if (local_20 != '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type == EMaterialParameterType::Scalar",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Materials\\MaterialParameters.h"
                       ,0x176,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      fVar4 = (float)(*pcVar1)();
      return fVar4;
    }
  }
  return local_40[0];
}

// K2_GetTextureCollectionParameterValue @ 147f4baa0

UTextureCollection * __thiscall
UMaterialInstanceDynamic::K2_GetTextureCollectionParameterValue
          (UMaterialInstanceDynamic *this,FName param_1)

{
  char cVar1;
  UTextureCollection *pUVar2;
  uint local_58 [3];
  undefined4 local_4c;
  undefined1 local_48;
  UTextureCollection *local_40 [4];
  undefined1 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  local_58[0] = (uint)param_1.ComparisonIndex.Value;
  local_58[2] = param_1.Number;
  local_58[1] = 0;
  local_4c = 0xffffffff;
  local_48 = 2;
  local_20 = 0xff;
  local_18 = 0xffffffff;
  local_14 = 0;
  cVar1 = (**(code **)(this->_padding_ + 0x410))
                    (this,CONCAT71(param_1._1_7_ >> 0x20,4),local_58,local_40,3);
  pUVar2 = (UTextureCollection *)0x0;
  if (cVar1 != '\0') {
    pUVar2 = local_40[0];
  }
  return pUVar2;
}

// K2_GetTextureCollectionParameterValueByInfo @ 147f4bb10

UTextureCollection * __thiscall
UMaterialInstanceDynamic::K2_GetTextureCollectionParameterValueByInfo
          (UMaterialInstanceDynamic *this,FMaterialParameterInfo *param_1)

{
  char cVar1;
  UTextureCollection *pUVar2;
  uint local_58 [3];
  int local_4c;
  uchar local_48;
  UTextureCollection *local_40 [4];
  undefined1 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  local_58[0] = (uint)(param_1->Name).ComparisonIndex;
  local_58[2] = (param_1->Name).Number;
  local_4c = param_1->Index;
  local_48 = (param_1->Association).Value;
  local_58[1] = 0;
  local_20 = 0xff;
  local_18 = 0xffffffff;
  local_14 = 0;
  cVar1 = (**(code **)(this->_padding_ + 0x410))(this,4,local_58,local_40,3);
  pUVar2 = (UTextureCollection *)0x0;
  if (cVar1 != '\0') {
    pUVar2 = local_40[0];
  }
  return pUVar2;
}

// K2_GetTextureParameterValue @ 147f4bc00

UTexture * __thiscall
UMaterialInstanceDynamic::K2_GetTextureParameterValue(UMaterialInstanceDynamic *this,FName param_1)

{
  char cVar1;
  UTexture *pUVar2;
  uint local_58 [3];
  undefined4 local_4c;
  undefined1 local_48;
  UTexture *local_40 [4];
  undefined1 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  local_58[0] = (uint)param_1.ComparisonIndex.Value;
  local_58[2] = param_1.Number;
  local_58[1] = 0;
  local_4c = 0xffffffff;
  local_48 = 2;
  local_20 = 0xff;
  local_18 = 0xffffffff;
  local_14 = 0;
  cVar1 = (**(code **)(this->_padding_ + 0x410))
                    (this,CONCAT71(param_1._1_7_ >> 0x20,3),local_58,local_40,3);
  pUVar2 = (UTexture *)0x0;
  if (cVar1 != '\0') {
    pUVar2 = local_40[0];
  }
  return pUVar2;
}

// K2_GetTextureParameterValueByInfo @ 147f4bc70

UTexture * __thiscall
UMaterialInstanceDynamic::K2_GetTextureParameterValueByInfo
          (UMaterialInstanceDynamic *this,FMaterialParameterInfo *param_1)

{
  char cVar1;
  UTexture *pUVar2;
  uint local_58 [3];
  int local_4c;
  uchar local_48;
  UTexture *local_40 [4];
  undefined1 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  local_58[0] = (uint)(param_1->Name).ComparisonIndex;
  local_58[2] = (param_1->Name).Number;
  local_4c = param_1->Index;
  local_48 = (param_1->Association).Value;
  local_58[1] = 0;
  local_20 = 0xff;
  local_18 = 0xffffffff;
  local_14 = 0;
  cVar1 = (**(code **)(this->_padding_ + 0x410))(this,3,local_58,local_40,3);
  pUVar2 = (UTexture *)0x0;
  if (cVar1 != '\0') {
    pUVar2 = local_40[0];
  }
  return pUVar2;
}

// K2_GetVectorParameterValue @ 147f4bdb0

FLinearColor * __thiscall
UMaterialInstanceDynamic::K2_GetVectorParameterValue
          (UMaterialInstanceDynamic *this,FLinearColor *__return_storage_ptr__,FName param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  FLinearColor *pFVar5;
  uint local_58 [3];
  undefined4 local_4c;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  char local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  local_58[0] = (uint)param_1.ComparisonIndex.Value;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
  (__return_storage_ptr__->field0_0x0)._s_0.B = 0.0;
  local_58[1] = 0;
  local_14 = 0;
  lVar1 = this->_padding_;
  (__return_storage_ptr__->field0_0x0)._s_0.A = 1.0;
  local_58[2] = param_1.Number;
  local_4c = 0xffffffff;
  local_48 = 2;
  local_20 = -1;
  local_18 = 0xffffffff;
  cVar3 = (**(code **)(lVar1 + 0x410))(this,1,local_58,&local_40,3);
  if (cVar3 != '\0') {
    if (local_20 != '\x01') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type == EMaterialParameterType::Vector",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Materials\\MaterialParameters.h"
                         ,0x177,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FLinearColor *)(*pcVar2)();
        return pFVar5;
      }
    }
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 = local_40;
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uStack_38;
  }
  return __return_storage_ptr__;
}

// K2_GetVectorParameterValueByInfo @ 147f4be70

FLinearColor * __thiscall
UMaterialInstanceDynamic::K2_GetVectorParameterValueByInfo
          (UMaterialInstanceDynamic *this,FLinearColor *__return_storage_ptr__,
          FMaterialParameterInfo *param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  FLinearColor *pFVar5;
  uint local_58 [3];
  int local_4c;
  uchar local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  char local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  local_58[0] = (uint)(param_1->Name).ComparisonIndex;
  local_58[2] = (param_1->Name).Number;
  local_4c = param_1->Index;
  local_48 = (param_1->Association).Value;
  lVar1 = this->_padding_;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
  (__return_storage_ptr__->field0_0x0)._s_0.B = 0.0;
  local_58[1] = 0;
  local_14 = 0;
  (__return_storage_ptr__->field0_0x0)._s_0.A = 1.0;
  local_20 = -1;
  local_18 = 0xffffffff;
  cVar3 = (**(code **)(lVar1 + 0x410))(this,1,local_58,&local_40,3);
  if (cVar3 != '\0') {
    if (local_20 != '\x01') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type == EMaterialParameterType::Vector",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Materials\\MaterialParameters.h"
                         ,0x177,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FLinearColor *)(*pcVar2)();
        return pFVar5;
      }
    }
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 = local_40;
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uStack_38;
  }
  return __return_storage_ptr__;
}

// K2_InterpolateMaterialInstanceParams @ 147f4bf30

void __thiscall
UMaterialInstanceDynamic::K2_InterpolateMaterialInstanceParams
          (UMaterialInstanceDynamic *this,UMaterialInstance *param_1,UMaterialInstance *param_2,
          float param_3)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  longlong *plVar6;
  longlong *plVar7;
  FScalarParameterValue *pFVar8;
  FScalarParameterValue *pFVar9;
  FVectorParameterValue *pFVar10;
  FVectorParameterValue *pFVar11;
  ulonglong uVar12;
  FLinearColor_u_0 *pFVar13;
  FLinearColor_u_0 *pFVar14;
  uint uVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  TArray<FName,TSizedDefaultAllocator<32>_> local_148;
  ulonglong local_138;
  FLinearColor_u_0 local_130;
  FLinearColor_u_0 local_118;
  uint local_108 [3];
  undefined4 local_fc;
  undefined1 local_f8;
  uint local_f4 [3];
  undefined4 local_e8;
  undefined1 local_e4;
  FMaterialParameterInfo local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  char local_b0;
  undefined4 local_a8;
  undefined1 local_a4;
  float local_a0 [8];
  char local_80;
  undefined4 local_78;
  undefined1 local_74;
  
  if ((param_1 != (UMaterialInstance *)0x0) && (param_2 != (UMaterialInstance *)0x0)) {
    plVar6 = (longlong *)(**(code **)(param_1->_padding_ + 0x2d8))(param_1);
    plVar7 = (longlong *)(**(code **)(param_2->_padding_ + 0x2d8))(param_2);
    if (plVar6 == plVar7) {
      local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_148.ArrayNum = 0;
      local_148.ArrayMax = 0;
      GameThread_FindAllScalarParameterNames(param_1,&local_148);
      GameThread_FindAllScalarParameterNames(param_2,&local_148);
      uVar12 = (ulonglong)local_148.ArrayNum;
      uVar15 = 0;
      local_138 = uVar12;
      if (0 < local_148.ArrayNum) {
        lVar16 = 0;
        do {
          uVar5 = 0;
          if ((int)uVar15 < (int)uVar12) {
            uVar5 = ~uVar15 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          FVar1 = *(FName *)(local_148.AllocatorInstance.Data + lVar16 * 8);
          pFVar8 = GameThread_GetScalarParameterValue(param_1,FVar1);
          pFVar9 = GameThread_GetScalarParameterValue(param_2,FVar1);
          if ((pFVar8 != (FScalarParameterValue *)0x0) || (pFVar9 != (FScalarParameterValue *)0x0))
          {
            if ((pFVar8 == (FScalarParameterValue *)0x0) ||
               (fVar18 = 0.0, pFVar9 == (FScalarParameterValue *)0x0)) {
              local_108[0] = (uint)FVar1.ComparisonIndex.Value;
              local_108[2] = FVar1.Number;
              local_108[1] = 0;
              local_fc = 0xffffffff;
              local_f8 = 2;
              local_80 = -1;
              local_78 = 0xffffffff;
              local_74 = 0;
              cVar4 = (**(code **)(*plVar6 + 0x410))(plVar6,0,local_108,local_a0,3);
              fVar17 = 0.0;
              if (((cVar4 != '\0') && (fVar17 = local_a0[0], local_80 != '\0')) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Type == EMaterialParameterType::Scalar",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Materials\\MaterialParameters.h"
                                     ,0x176,L""), fVar17 = local_a0[0], bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              fVar18 = fVar17;
              if (pFVar8 != (FScalarParameterValue *)0x0) goto LAB_147f4c12a;
            }
            else {
LAB_147f4c12a:
              fVar17 = pFVar8->ParameterValue;
            }
            if (pFVar9 != (FScalarParameterValue *)0x0) {
              fVar18 = pFVar9->ParameterValue;
            }
            SetScalarParameterValue(this,FVar1,(fVar18 - fVar17) * param_3 + fVar17);
          }
          uVar15 = uVar15 + 1;
          lVar16 = lVar16 + 1;
          if ((longlong)local_138 <= lVar16) break;
          uVar12 = local_148._8_8_ & 0xffffffff;
        } while( true );
      }
      bVar3 = local_148.ArrayMax != 0;
      local_148._8_8_ = (ulonglong)(uint)local_148.ArrayMax << 0x20;
      if (bVar3) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,0,&local_148.AllocatorInstance,0,&local_148.ArrayMax);
      }
      GameThread_FindAllVectorParameterNames(param_1,&local_148);
      GameThread_FindAllVectorParameterNames(param_2,&local_148);
      uVar12 = (ulonglong)local_148.ArrayNum;
      uVar15 = 0;
      local_138 = uVar12;
      if (0 < local_148.ArrayNum) {
        lVar16 = 0;
        do {
          uVar5 = 0;
          if ((int)uVar15 < (int)uVar12) {
            uVar5 = ~uVar15 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          FVar1 = *(FName *)(local_148.AllocatorInstance.Data + lVar16 * 8);
          pFVar10 = GameThread_GetVectorParameterValue(param_1,FVar1);
          pFVar11 = GameThread_GetVectorParameterValue(param_2,FVar1);
          if ((pFVar10 != (FVectorParameterValue *)0x0) || (pFVar11 != (FVectorParameterValue *)0x0)
             ) {
            local_130._0_8_ = 0;
            local_130._8_8_ = 0;
            if ((pFVar10 == (FVectorParameterValue *)0x0) ||
               (pFVar11 == (FVectorParameterValue *)0x0)) {
              local_f4[0] = (uint)FVar1.ComparisonIndex.Value;
              local_f4[2] = FVar1.Number;
              local_f4[1] = 0;
              local_e8 = 0xffffffff;
              local_e4 = 2;
              local_b0 = -1;
              local_a8 = 0xffffffff;
              local_a4 = 0;
              cVar4 = (**(code **)(*plVar6 + 0x410))(plVar6,1,local_f4,&local_d0,3);
              if (cVar4 != '\0') {
                if ((local_b0 != '\x01') &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Type == EMaterialParameterType::Vector",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Materials\\MaterialParameters.h"
                                       ,0x177,L""), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                local_130._0_8_ = local_d0;
                local_130._8_8_ = uStack_c8;
              }
              if (pFVar10 != (FVectorParameterValue *)0x0) goto LAB_147f4c31e;
              pFVar13 = &local_130;
            }
            else {
LAB_147f4c31e:
              pFVar13 = &(pFVar10->ParameterValue).field0_0x0;
            }
            fVar18 = (((FLinearColor_u_0 *)&(pFVar13->_s_0).R)->_s_0).R;
            if (pFVar11 == (FVectorParameterValue *)0x0) {
              pFVar14 = &local_130;
            }
            else {
              pFVar14 = &(pFVar11->ParameterValue).field0_0x0;
            }
            local_e0.Association.Value = '\x02';
            local_e0.Index = -1;
            local_118._s_0.R =
                 ((((FLinearColor_u_0 *)&(pFVar14->_s_0).R)->_s_0).R - fVar18) * param_3 + fVar18;
            local_118._s_0.G = ((pFVar14->_s_0).G - (pFVar13->_s_0).G) * param_3 + (pFVar13->_s_0).G
            ;
            local_118._s_0.B = ((pFVar14->_s_0).B - (pFVar13->_s_0).B) * param_3 + (pFVar13->_s_0).B
            ;
            local_118._s_0.A = ((pFVar14->_s_0).A - (pFVar13->_s_0).A) * param_3 + (pFVar13->_s_0).A
            ;
            local_e0.Name = FVar1;
            UMaterialInstance::SetVectorParameterValueInternal
                      ((UMaterialInstance *)this,&local_e0,(FLinearColor *)&local_118._s_0);
          }
          uVar15 = uVar15 + 1;
          lVar16 = lVar16 + 1;
          if ((longlong)local_138 <= lVar16) break;
          uVar12 = local_148._8_8_ & 0xffffffff;
        } while( true );
      }
      if (local_148.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// SetDoubleVectorParameterValue @ 147f4fd20

void __thiscall
UMaterialInstanceDynamic::SetDoubleVectorParameterValue
          (UMaterialInstanceDynamic *this,FName param_1,TVector4<double> *param_2)

{
  FMaterialParameterInfo local_38;
  TVector4<double>_u_0 local_28;
  
  local_28._s_0.X = (param_2->field0_0x0)._s_0.X;
  local_28._s_0.Y = (param_2->field0_0x0)._s_0.Y;
  local_28._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  local_28._s_0.W = (param_2->field0_0x0)._s_0.W;
  local_38.Association.Value = '\x02';
  local_38.Index = -1;
  local_38.Name = param_1;
  UMaterialInstance::SetDoubleVectorParameterValueInternal
            ((UMaterialInstance *)this,&local_38,(TVector4<double> *)&local_28._s_0);
  return;
}

// SetFontParameterValue @ 147f50020

void __thiscall
UMaterialInstanceDynamic::SetFontParameterValue
          (UMaterialInstanceDynamic *this,FMaterialParameterInfo *param_1,UFont *param_2,int param_3
          )

{
  uint *puVar1;
  longlong *plVar2;
  uchar uVar3;
  int iVar4;
  int iVar5;
  FName FVar6;
  FName FVar7;
  UFont *pUVar8;
  code *pcVar9;
  TEnumAsByte<EMaterialParameterAssociation> TVar10;
  undefined3 uVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  FFontParameterValue *pFVar15;
  FFontParameterValue *pFVar16;
  longlong lVar17;
  FLLMScope aFStackX_18 [2];
  int iStackX_20;
  FMemScope FStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  iStackX_20 = param_3;
  FLLMScope::FLLMScope(aFStackX_18,MaterialInstance,false,None,Default,true);
  FMemScope::FMemScope(&FStack_60,MaterialInstance,true);
  if (param_2 != (UFont *)0x0) {
    UObject::ConditionalPostLoad((UObject *)param_2);
  }
  FVar6 = param_1->Name;
  plVar2 = &this->_padding_;
  iVar5 = (int)this->_padding_;
  iVar4 = param_1->Index;
  uVar14 = 0;
  uVar3 = (param_1->Association).Value;
  if (0 < iVar5) {
    lVar17 = 0;
    do {
      uVar13 = 0;
      if ((int)uVar14 < iVar5) {
        uVar13 = ~uVar14 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar15 = (FFontParameterValue *)(*plVar2 + lVar17);
      FVar7 = (pFVar15->ParameterInfo).Name;
      if ((((FVar7.ComparisonIndex.Value.Value == FVar6.ComparisonIndex.Value.Value) &&
           (FVar7.Number == FVar6.Number)) && ((pFVar15->ParameterInfo).Index == iVar4)) &&
         ((pFVar15->ParameterInfo).Association.Value == uVar3)) {
        if (pFVar15 != (FFontParameterValue *)0x0) {
          pUVar8 = (pFVar15->FontValue).field0_0x0.DebugPtr;
          if (pUVar8 == (UFont *)0x0) {
            bVar12 = param_2 == (UFont *)0x0;
          }
          else {
            bVar12 = pUVar8 == param_2;
          }
          if ((!bVar12) || (pFVar15->FontPage != iStackX_20)) goto LAB_147f50254;
          goto LAB_147f502aa;
        }
        break;
      }
      iVar5 = (int)this->_padding_;
      uVar14 = uVar14 + 1;
      lVar17 = lVar17 + 0x30;
    } while ((int)uVar14 < iVar5);
  }
  uVar14 = (uint)this->_padding_;
  puVar1 = (uint *)((longlong)&this->_padding_ + 4);
  if (uVar14 == *puVar1) {
    uVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,(ForAnyElementType *)plVar2,(int *)puVar1);
  }
  *(uint *)&this->_padding_ = uVar14 + 1;
  uVar13 = 0;
  if ((int)uVar14 < (int)(uVar14 + 1)) {
    uVar13 = ~uVar14 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pFVar15 = (FFontParameterValue *)0x0;
  pFVar16 = (FFontParameterValue *)(*plVar2 + (longlong)(int)uVar14 * 0x30);
  if (pFVar16 != (FFontParameterValue *)0x0) {
    uStack_58 = 0;
    uStack_50 = CONCAT31(uStack_50._1_3_,2);
    uStack_4c = 0xffffffff;
    (pFVar16->ParameterInfo).Name.ComparisonIndex = 0;
    (pFVar16->ParameterInfo).Name.Number = 0;
    (pFVar16->ParameterInfo).Association = '\x02';
    *(undefined3 *)&(pFVar16->ParameterInfo).field_0x9 = uStack_50._1_3_;
    (pFVar16->ParameterInfo).Index = 0xffffffff;
    (pFVar16->FontValue).field0_0x0.DebugPtr = (UFont *)0x0;
    pFVar16->FontPage = 0;
    (pFVar16->ExpressionGUID).A = 0;
    (pFVar16->ExpressionGUID).B = 0;
    (pFVar16->ExpressionGUID).C = 0;
    (pFVar16->ExpressionGUID).D = 0;
    pFVar15 = pFVar16;
  }
  TVar10.Value = (param_1->Association).Value;
  uVar11 = *(undefined3 *)&param_1->field_0x9;
  iVar4 = param_1->Index;
  (pFVar15->ParameterInfo).Name = param_1->Name;
  (pFVar15->ParameterInfo).Association = (TEnumAsByte<EMaterialParameterAssociation>)TVar10.Value;
  *(undefined3 *)&(pFVar15->ParameterInfo).field_0x9 = uVar11;
  (pFVar15->ParameterInfo).Index = iVar4;
  (pFVar15->ExpressionGUID).C = 0;
  (pFVar15->ExpressionGUID).D = 0;
  (pFVar15->ExpressionGUID).A = 0;
  (pFVar15->ExpressionGUID).B = 0;
LAB_147f50254:
  iVar4 = iStackX_20;
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (param_2 == (UFont *)0x0)) {
    (pFVar15->FontValue).field0_0x0.DebugPtr = param_2;
    pFVar15->FontPage = iStackX_20;
    if (param_2 == (UFont *)0x0) goto LAB_147f5029f;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)param_2);
    (pFVar15->FontValue).field0_0x0.DebugPtr = param_2;
    pFVar15->FontPage = iVar4;
  }
  UObjectBaseUtility::AddToCluster((UObjectBaseUtility *)param_2,(UObjectBaseUtility *)this,true);
LAB_147f5029f:
  GameThread_UpdateMIParameter<FFontParameterValue>((UMaterialInstance *)this,pFVar15);
LAB_147f502aa:
  FMemScope::~FMemScope(&FStack_60);
  FLLMScope::~FLLMScope(aFStackX_18);
  return;
}

// SetNaniteOverride @ 147f50640

void __thiscall
UMaterialInstanceDynamic::SetNaniteOverride
          (UMaterialInstanceDynamic *this,UMaterialInterface *param_1)

{
  FMaterialOverrideNanite::SetOverrideMaterial
            ((FMaterialOverrideNanite *)&this->_padding_,param_1,true);
  return;
}

// SetRuntimeVirtualTextureParameterValue @ 147f51140

void __thiscall
UMaterialInstanceDynamic::SetRuntimeVirtualTextureParameterValue
          (UMaterialInstanceDynamic *this,FName param_1,URuntimeVirtualTexture *param_2)

{
  FMaterialParameterInfo local_18;
  
  local_18.Association.Value = '\x02';
  local_18.Index = -1;
  local_18.Name = param_1;
  UMaterialInstance::SetRuntimeVirtualTextureParameterValueInternal
            ((UMaterialInstance *)this,&local_18,param_2);
  return;
}

// SetRuntimeVirtualTextureParameterValueByInfo @ 147f51170

void __thiscall
UMaterialInstanceDynamic::SetRuntimeVirtualTextureParameterValueByInfo
          (UMaterialInstanceDynamic *this,FMaterialParameterInfo *param_1,
          URuntimeVirtualTexture *param_2)

{
  uint *puVar1;
  longlong *plVar2;
  FRuntimeVirtualTextureParameterValue *pFVar3;
  uchar uVar4;
  int iVar5;
  int iVar6;
  FName FVar7;
  FName FVar8;
  URuntimeVirtualTexture *pUVar9;
  code *pcVar10;
  TEnumAsByte<EMaterialParameterAssociation> TVar11;
  undefined3 uVar12;
  TObjectPtr<URuntimeVirtualTexture>_u_0 TVar13;
  bool bVar14;
  uint uVar15;
  UClass *pUVar16;
  uint uVar17;
  FRuntimeVirtualTextureParameterValue *pFVar18;
  longlong lVar19;
  TObjectPtr<URuntimeVirtualTexture>_u_0 TStackX_18;
  FLLMScope aFStackX_20 [2];
  TObjectPtr<URuntimeVirtualTexture>_u_0 *pTStack_68;
  FMemScope FStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  TStackX_18.DebugPtr = param_2;
  FLLMScope::FLLMScope(aFStackX_20,MaterialInstance,false,None,Default,true);
  FMemScope::FMemScope(&FStack_60,MaterialInstance,true);
  if (TStackX_18.DebugPtr != (URuntimeVirtualTexture *)0x0) {
    UObject::ConditionalPostLoad((UObject *)TStackX_18.DebugPtr);
  }
  FVar7 = param_1->Name;
  plVar2 = &this->_padding_;
  iVar6 = (int)this->_padding_;
  iVar5 = param_1->Index;
  uVar17 = 0;
  uVar4 = (param_1->Association).Value;
  if (0 < iVar6) {
    lVar19 = 0;
    do {
      uVar15 = 0;
      if ((int)uVar17 < iVar6) {
        uVar15 = ~uVar17 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar18 = (FRuntimeVirtualTextureParameterValue *)(*plVar2 + lVar19);
      FVar8 = (pFVar18->ParameterInfo).Name;
      if ((((FVar8.ComparisonIndex.Value.Value == FVar7.ComparisonIndex.Value.Value) &&
           (FVar8.Number == FVar7.Number)) && ((pFVar18->ParameterInfo).Index == iVar5)) &&
         ((pFVar18->ParameterInfo).Association.Value == uVar4)) {
        if (pFVar18 != (FRuntimeVirtualTextureParameterValue *)0x0) {
          pUVar9 = (pFVar18->ParameterValue).field0_0x0.DebugPtr;
          if (pUVar9 == (URuntimeVirtualTexture *)0x0) {
            bVar14 = TStackX_18.DebugPtr == (URuntimeVirtualTexture *)0x0;
          }
          else {
            bVar14 = pUVar9 == TStackX_18.DebugPtr;
          }
          if (!bVar14) goto LAB_147f5139f;
          goto LAB_147f51438;
        }
        break;
      }
      iVar6 = (int)this->_padding_;
      uVar17 = uVar17 + 1;
      lVar19 = lVar19 + 0x28;
    } while ((int)uVar17 < iVar6);
  }
  uVar17 = (uint)this->_padding_;
  puVar1 = (uint *)((longlong)&this->_padding_ + 4);
  if (uVar17 == *puVar1) {
    uVar17 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x828,(ForAnyElementType *)plVar2,(int *)puVar1);
  }
  *(uint *)&this->_padding_ = uVar17 + 1;
  uVar15 = 0;
  if ((int)uVar17 < (int)(uVar17 + 1)) {
    uVar15 = ~uVar17 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar18 = (FRuntimeVirtualTextureParameterValue *)0x0;
  pFVar3 = (FRuntimeVirtualTextureParameterValue *)(*plVar2 + (longlong)(int)uVar17 * 0x28);
  if (pFVar3 != (FRuntimeVirtualTextureParameterValue *)0x0) {
    uStack_58 = 0;
    uStack_50 = CONCAT31(uStack_50._1_3_,2);
    uStack_4c = 0xffffffff;
    (pFVar3->ParameterInfo).Name.ComparisonIndex = 0;
    (pFVar3->ParameterInfo).Name.Number = 0;
    (pFVar3->ParameterInfo).Association = '\x02';
    *(undefined3 *)&(pFVar3->ParameterInfo).field_0x9 = uStack_50._1_3_;
    (pFVar3->ParameterInfo).Index = 0xffffffff;
    (pFVar3->ParameterValue).field0_0x0.DebugPtr = (URuntimeVirtualTexture *)0x0;
    (pFVar3->ExpressionGUID).A = 0;
    (pFVar3->ExpressionGUID).B = 0;
    (pFVar3->ExpressionGUID).C = 0;
    (pFVar3->ExpressionGUID).D = 0;
    pFVar18 = pFVar3;
  }
  TVar11.Value = (param_1->Association).Value;
  uVar12 = *(undefined3 *)&param_1->field_0x9;
  iVar5 = param_1->Index;
  (pFVar18->ParameterInfo).Name = param_1->Name;
  (pFVar18->ParameterInfo).Association = (TEnumAsByte<EMaterialParameterAssociation>)TVar11.Value;
  *(undefined3 *)&(pFVar18->ParameterInfo).field_0x9 = uVar12;
  (pFVar18->ParameterInfo).Index = iVar5;
  (pFVar18->ExpressionGUID).C = 0;
  (pFVar18->ExpressionGUID).D = 0;
  (pFVar18->ExpressionGUID).A = 0;
  (pFVar18->ExpressionGUID).B = 0;
LAB_147f5139f:
  if (TStackX_18.DebugPtr != (URuntimeVirtualTexture *)0x0) {
    pUVar16 = Z_Construct_UClass_URuntimeVirtualTexture_NoRegister();
    iVar5 = (int)pUVar16->_padding_;
    if ((*(int *)(*(longlong *)&(TStackX_18.DebugPtr)->field_0x10 + 0x38) < iVar5) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&(TStackX_18.DebugPtr)->field_0x10 + 0x30) +
         (longlong)iVar5 * 8) != &pUVar16->_padding_)) {
      pTStack_68 = &TStackX_18;
      bVar14 = `UMaterialInstance::SetRuntimeVirtualTextureParameterValueInternal'::__l12::
               <lambda_1>::operator()(&pTStack_68);
      if (!bVar14) goto LAB_147f51438;
    }
    TVar13 = TStackX_18;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TStackX_18.DebugPtr != (URuntimeVirtualTexture *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TStackX_18.DebugPtr);
    }
    (pFVar18->ParameterValue).field0_0x0.DebugPtr = (URuntimeVirtualTexture *)TVar13;
    UObjectBaseUtility::AddToCluster
              ((UObjectBaseUtility *)TStackX_18.DebugPtr,(UObjectBaseUtility *)this,true);
    GameThread_UpdateMIParameter<FRuntimeVirtualTextureParameterValue>
              ((UMaterialInstance *)this,pFVar18);
  }
LAB_147f51438:
  FMemScope::~FMemScope(&FStack_60);
  FLLMScope::~FLLMScope(aFStackX_20);
  return;
}

// SetScalarParameterByIndex @ 147f51470

bool __thiscall
UMaterialInstanceDynamic::SetScalarParameterByIndex
          (UMaterialInstanceDynamic *this,int param_1,float param_2)

{
  FScalarParameterValue *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  if ((-1 < param_1) && (param_1 < (int)this->_padding_)) {
    if (param_1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    pFVar1 = (FScalarParameterValue *)(this->_padding_ + (longlong)param_1 * 0x24);
    if (pFVar1 != (FScalarParameterValue *)0x0) {
      if (param_2 != pFVar1->ParameterValue) {
        pFVar1->ParameterValue = param_2;
        GameThread_UpdateMIParameter<FScalarParameterValue>((UMaterialInstance *)this,pFVar1);
      }
      return true;
    }
  }
  return false;
}

// SetScalarParameterValue @ 147f515d0

void __thiscall
UMaterialInstanceDynamic::SetScalarParameterValue
          (UMaterialInstanceDynamic *this,FName param_1,float param_2)

{
  FMaterialParameterInfo local_88;
  undefined1 local_78 [32];
  FUtf8String local_58;
  undefined1 local_48 [24];
  FUtf8String local_30 [2];
  
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  local_78._8_8_ = 0;
  local_78._24_8_ = 0;
  local_78._16_8_ = 0;
  local_88.Association.Value = '\x02';
  local_88.Index = -1;
  local_78[0] = false;
  local_88.Name = param_1;
  FUtf8String::Reset(&local_58,0);
  local_30[0].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30[0].Data.ArrayNum = 0;
  local_30[0].Data.ArrayMax = 0;
  local_48._0_8_ = 0;
  local_48._16_8_ = 0;
  local_48._8_8_ = 0;
  FUtf8String::Reset(local_30,0);
  UMaterialInstance::SetScalarParameterValueInternal
            ((UMaterialInstance *)this,&local_88,param_2,false,
             (FScalarParameterAtlasInstanceData *)local_78);
  return;
}

// SetScalarParameterValueByInfo @ 147f51690

void __thiscall
UMaterialInstanceDynamic::SetScalarParameterValueByInfo
          (UMaterialInstanceDynamic *this,FMaterialParameterInfo *param_1,float param_2)

{
  undefined1 local_78 [32];
  FUtf8String local_58;
  undefined1 local_48 [24];
  FUtf8String local_30 [2];
  
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  local_78._8_8_ = 0;
  local_78._24_8_ = 0;
  local_78._16_8_ = 0;
  local_78[0] = false;
  FUtf8String::Reset(&local_58,0);
  local_30[0].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30[0].Data.ArrayNum = 0;
  local_30[0].Data.ArrayMax = 0;
  local_48._0_8_ = 0;
  local_48._16_8_ = 0;
  local_48._8_8_ = 0;
  FUtf8String::Reset(local_30,0);
  UMaterialInstance::SetScalarParameterValueInternal
            ((UMaterialInstance *)this,param_1,param_2,false,
             (FScalarParameterAtlasInstanceData *)local_78);
  return;
}

// SetSparseVolumeTextureParameterValue @ 147f51970

void __thiscall
UMaterialInstanceDynamic::SetSparseVolumeTextureParameterValue
          (UMaterialInstanceDynamic *this,FName param_1,USparseVolumeTexture *param_2)

{
  FMaterialParameterInfo local_18;
  
  local_18.Association.Value = '\x02';
  local_18.Index = -1;
  local_18.Name = param_1;
  UMaterialInstance::SetSparseVolumeTextureParameterValueInternal
            ((UMaterialInstance *)this,&local_18,param_2);
  return;
}

// SetTextureCollectionParameterValue @ 147f51cb0

void __thiscall
UMaterialInstanceDynamic::SetTextureCollectionParameterValue
          (UMaterialInstanceDynamic *this,FName param_1,UTextureCollection *param_2)

{
  FMaterialParameterInfo local_18;
  
  local_18.Association.Value = '\x02';
  local_18.Index = -1;
  local_18.Name = param_1;
  UMaterialInstance::SetTextureCollectionParameterValueInternal
            ((UMaterialInstance *)this,&local_18,param_2);
  return;
}

// SetTextureCollectionParameterValueByInfo @ 147f51ce0

void __thiscall
UMaterialInstanceDynamic::SetTextureCollectionParameterValueByInfo
          (UMaterialInstanceDynamic *this,FMaterialParameterInfo *param_1,
          UTextureCollection *param_2)

{
  uint *puVar1;
  longlong *plVar2;
  FTextureCollectionParameterValue *pFVar3;
  uchar uVar4;
  int iVar5;
  int iVar6;
  FName FVar7;
  FName FVar8;
  UTextureCollection *pUVar9;
  code *pcVar10;
  TEnumAsByte<EMaterialParameterAssociation> TVar11;
  undefined3 uVar12;
  TObjectPtr<UTextureCollection>_u_0 TVar13;
  bool bVar14;
  uint uVar15;
  UClass *pUVar16;
  uint uVar17;
  FTextureCollectionParameterValue *pFVar18;
  longlong lVar19;
  TObjectPtr<UTextureCollection>_u_0 TStackX_18;
  FLLMScope aFStackX_20 [2];
  TObjectPtr<UTextureCollection>_u_0 *pTStack_68;
  FMemScope FStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  TStackX_18.DebugPtr = param_2;
  FLLMScope::FLLMScope(aFStackX_20,MaterialInstance,false,None,Default,true);
  FMemScope::FMemScope(&FStack_60,MaterialInstance,true);
  if (TStackX_18.DebugPtr != (UTextureCollection *)0x0) {
    UObject::ConditionalPostLoad((UObject *)TStackX_18.DebugPtr);
  }
  FVar7 = param_1->Name;
  plVar2 = &this->_padding_;
  iVar6 = (int)this->_padding_;
  iVar5 = param_1->Index;
  uVar17 = 0;
  uVar4 = (param_1->Association).Value;
  if (0 < iVar6) {
    lVar19 = 0;
    do {
      uVar15 = 0;
      if ((int)uVar17 < iVar6) {
        uVar15 = ~uVar17 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar18 = (FTextureCollectionParameterValue *)(*plVar2 + lVar19);
      FVar8 = (pFVar18->ParameterInfo).Name;
      if ((((FVar8.ComparisonIndex.Value.Value == FVar7.ComparisonIndex.Value.Value) &&
           (FVar8.Number == FVar7.Number)) && ((pFVar18->ParameterInfo).Index == iVar5)) &&
         ((pFVar18->ParameterInfo).Association.Value == uVar4)) {
        if (pFVar18 != (FTextureCollectionParameterValue *)0x0) {
          pUVar9 = (pFVar18->ParameterValue).field0_0x0.DebugPtr;
          if (pUVar9 == (UTextureCollection *)0x0) {
            bVar14 = TStackX_18.DebugPtr == (UTextureCollection *)0x0;
          }
          else {
            bVar14 = pUVar9 == TStackX_18.DebugPtr;
          }
          if (!bVar14) goto LAB_147f51f0f;
          goto LAB_147f51fa8;
        }
        break;
      }
      iVar6 = (int)this->_padding_;
      uVar17 = uVar17 + 1;
      lVar19 = lVar19 + 0x28;
    } while ((int)uVar17 < iVar6);
  }
  uVar17 = (uint)this->_padding_;
  puVar1 = (uint *)((longlong)&this->_padding_ + 4);
  if (uVar17 == *puVar1) {
    uVar17 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x828,(ForAnyElementType *)plVar2,(int *)puVar1);
  }
  *(uint *)&this->_padding_ = uVar17 + 1;
  uVar15 = 0;
  if ((int)uVar17 < (int)(uVar17 + 1)) {
    uVar15 = ~uVar17 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar18 = (FTextureCollectionParameterValue *)0x0;
  pFVar3 = (FTextureCollectionParameterValue *)(*plVar2 + (longlong)(int)uVar17 * 0x28);
  if (pFVar3 != (FTextureCollectionParameterValue *)0x0) {
    uStack_58 = 0;
    uStack_50 = CONCAT31(uStack_50._1_3_,2);
    uStack_4c = 0xffffffff;
    (pFVar3->ParameterInfo).Name.ComparisonIndex = 0;
    (pFVar3->ParameterInfo).Name.Number = 0;
    (pFVar3->ParameterInfo).Association = '\x02';
    *(undefined3 *)&(pFVar3->ParameterInfo).field_0x9 = uStack_50._1_3_;
    (pFVar3->ParameterInfo).Index = 0xffffffff;
    (pFVar3->ParameterValue).field0_0x0.DebugPtr = (UTextureCollection *)0x0;
    (pFVar3->ExpressionGUID).A = 0;
    (pFVar3->ExpressionGUID).B = 0;
    (pFVar3->ExpressionGUID).C = 0;
    (pFVar3->ExpressionGUID).D = 0;
    pFVar18 = pFVar3;
  }
  TVar11.Value = (param_1->Association).Value;
  uVar12 = *(undefined3 *)&param_1->field_0x9;
  iVar5 = param_1->Index;
  (pFVar18->ParameterInfo).Name = param_1->Name;
  (pFVar18->ParameterInfo).Association = (TEnumAsByte<EMaterialParameterAssociation>)TVar11.Value;
  *(undefined3 *)&(pFVar18->ParameterInfo).field_0x9 = uVar12;
  (pFVar18->ParameterInfo).Index = iVar5;
  (pFVar18->ExpressionGUID).C = 0;
  (pFVar18->ExpressionGUID).D = 0;
  (pFVar18->ExpressionGUID).A = 0;
  (pFVar18->ExpressionGUID).B = 0;
LAB_147f51f0f:
  if (TStackX_18.DebugPtr != (UTextureCollection *)0x0) {
    pUVar16 = Z_Construct_UClass_UTextureCollection_NoRegister();
    iVar5 = (int)pUVar16->_padding_;
    if ((*(int *)((TStackX_18.DebugPtr)->_padding_ + 0x38) < iVar5) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)((TStackX_18.DebugPtr)->_padding_ + 0x30) + (longlong)iVar5 * 8) !=
        &pUVar16->_padding_)) {
      pTStack_68 = &TStackX_18;
      bVar14 = `UMaterialInstance::SetTextureCollectionParameterValueInternal'::__l12::<lambda_1>::
               operator()(&pTStack_68);
      if (!bVar14) goto LAB_147f51fa8;
    }
    TVar13 = TStackX_18;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TStackX_18.DebugPtr != (UTextureCollection *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TStackX_18.DebugPtr);
    }
    (pFVar18->ParameterValue).field0_0x0.DebugPtr = (UTextureCollection *)TVar13;
    UObjectBaseUtility::AddToCluster
              ((UObjectBaseUtility *)TStackX_18.DebugPtr,(UObjectBaseUtility *)this,true);
    GameThread_UpdateMIParameter<FTextureCollectionParameterValue>
              ((UMaterialInstance *)this,pFVar18);
  }
LAB_147f51fa8:
  FMemScope::~FMemScope(&FStack_60);
  FLLMScope::~FLLMScope(aFStackX_20);
  return;
}

// SetTextureParameterValue @ 147f51fe0

void __thiscall
UMaterialInstanceDynamic::SetTextureParameterValue
          (UMaterialInstanceDynamic *this,FName param_1,UTexture *param_2)

{
  TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  longlong lVar6;
  int iVar7;
  int local_res8 [2];
  longlong local_res10;
  longlong *local_res18;
  FName local_res20;
  FMaterialParameterInfo local_98;
  uint local_88 [3];
  undefined4 local_7c;
  undefined1 local_78;
  longlong local_70 [4];
  undefined1 local_50;
  undefined4 local_48;
  undefined1 local_44;
  
  local_88[0] = (uint)param_1.ComparisonIndex.Value;
  local_88[2] = param_1.Number;
  local_98.Association.Value = '\x02';
  local_98.Index = -1;
  local_88[1] = 0;
  local_7c = 0xffffffff;
  local_78 = 2;
  local_50 = 0xff;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_98.Name = param_1;
  cVar2 = (**(code **)(this->_padding_ + 0x410))
                    (this,CONCAT71(param_1._1_7_ >> 0x20,3),local_88,local_70,3);
  lVar6 = 0;
  if (cVar2 != '\0') {
    lVar6 = local_70[0];
  }
  if (((param_2 != (UTexture *)0x0) && (lVar6 != 0)) &&
     (lVar1 = param_2->_padding_, lVar1 != *(longlong *)(lVar6 + 0x18))) {
    this_00 = &this->RenamedTextures;
    local_res10 = lVar1;
    uVar3 = ::GetTypeHash((FNameEntryId)(uint)lVar1);
    uVar3 = uVar3 + (int)((ulonglong)lVar1 >> 0x20);
    if (*(int *)&(this->RenamedTextures).field_0x8 != *(int *)&(this->RenamedTextures).field_0x34) {
      puVar5 = *(undefined1 **)&(this->RenamedTextures).field_0x40;
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &(this->RenamedTextures).field_0x38;
      }
      iVar7 = *(int *)(puVar5 + (ulonglong)
                                (*(int *)&(this->RenamedTextures).field_0x48 - 1U & uVar3) * 4);
      if (iVar7 != -1) {
        do {
          plVar4 = (longlong *)((longlong)iVar7 * 0x20 + *(longlong *)&this_00->field_0x0);
          if (*plVar4 == local_res10) {
            if (plVar4 != (longlong *)0x0) goto LAB_147f5212f;
            break;
          }
          iVar7 = (int)plVar4[3];
        } while (iVar7 != -1);
      }
    }
    local_res18 = &local_res10;
    TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FName_&&>_>
              ((TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)this_00,(uint)local_res8,(TKeyInitializer<FName_&&> *)(ulonglong)uVar3,
               (bool *)&local_res18);
    plVar4 = (longlong *)((longlong)local_res8[0] * 0x20 + *(longlong *)&this_00->field_0x0);
LAB_147f5212f:
    local_res20 = *(FName *)(lVar6 + 0x18);
    TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName>
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)(plVar4 + 1),&local_res20);
  }
  UMaterialInstance::SetTextureParameterValueInternal((UMaterialInstance *)this,&local_98,param_2);
  return;
}

// SetTextureParameterValueByInfo @ 147f52180

void __thiscall
UMaterialInstanceDynamic::SetTextureParameterValueByInfo
          (UMaterialInstanceDynamic *this,FMaterialParameterInfo *param_1,UTexture *param_2)

{
  TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  longlong lVar6;
  int iVar7;
  int local_res8 [2];
  longlong local_res10;
  longlong *local_res18;
  FName local_res20;
  uint local_88 [3];
  int local_7c;
  uchar local_78;
  longlong local_70 [4];
  undefined1 local_50;
  undefined4 local_48;
  undefined1 local_44;
  
  local_88[0] = (uint)(param_1->Name).ComparisonIndex;
  local_88[2] = (param_1->Name).Number;
  local_7c = param_1->Index;
  local_78 = (param_1->Association).Value;
  local_88[1] = 0;
  local_50 = 0xff;
  local_48 = 0xffffffff;
  local_44 = 0;
  cVar2 = (**(code **)(this->_padding_ + 0x410))(this,3,local_88,local_70,3);
  lVar6 = 0;
  if (cVar2 != '\0') {
    lVar6 = local_70[0];
  }
  if (((param_2 != (UTexture *)0x0) && (lVar6 != 0)) &&
     (lVar1 = param_2->_padding_, lVar1 != *(longlong *)(lVar6 + 0x18))) {
    this_00 = &this->RenamedTextures;
    local_res10 = lVar1;
    uVar3 = ::GetTypeHash((FNameEntryId)(uint)lVar1);
    uVar3 = uVar3 + (int)((ulonglong)lVar1 >> 0x20);
    if (*(int *)&(this->RenamedTextures).field_0x8 != *(int *)&(this->RenamedTextures).field_0x34) {
      puVar5 = *(undefined1 **)&(this->RenamedTextures).field_0x40;
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &(this->RenamedTextures).field_0x38;
      }
      iVar7 = *(int *)(puVar5 + (ulonglong)
                                (*(int *)&(this->RenamedTextures).field_0x48 - 1U & uVar3) * 4);
      if (iVar7 != -1) {
        do {
          plVar4 = (longlong *)((longlong)iVar7 * 0x20 + *(longlong *)&this_00->field_0x0);
          if (*plVar4 == local_res10) {
            if (plVar4 != (longlong *)0x0) goto LAB_147f522e3;
            break;
          }
          iVar7 = (int)plVar4[3];
        } while (iVar7 != -1);
      }
    }
    local_res18 = &local_res10;
    TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FName_&&>_>
              ((TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)this_00,(uint)local_res8,(TKeyInitializer<FName_&&> *)(ulonglong)uVar3,
               (bool *)&local_res18);
    plVar4 = (longlong *)((longlong)local_res8[0] * 0x20 + *(longlong *)&this_00->field_0x0);
LAB_147f522e3:
    local_res20 = *(FName *)(lVar6 + 0x18);
    TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName>
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)(plVar4 + 1),&local_res20);
  }
  UMaterialInstance::SetTextureParameterValueInternal((UMaterialInstance *)this,param_1,param_2);
  return;
}

// SetVectorParameterByIndex @ 147f52650

bool __thiscall
UMaterialInstanceDynamic::SetVectorParameterByIndex
          (UMaterialInstanceDynamic *this,int param_1,FLinearColor *param_2)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  undefined1 uVar7;
  FVectorParameterValue *pFVar8;
  
  fVar2 = (param_2->field0_0x0)._s_0.R;
  fVar3 = (param_2->field0_0x0)._s_0.G;
  fVar4 = (param_2->field0_0x0)._s_0.B;
  fVar5 = (param_2->field0_0x0)._s_0.A;
  if ((-1 < param_1) && (param_1 < (int)this->_padding_)) {
    if (param_1 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar1 = (code *)swi(3);
        uVar7 = (*pcVar1)();
        return (bool)uVar7;
      }
    }
    pFVar8 = (FVectorParameterValue *)((longlong)param_1 * 0x30 + this->_padding_);
    if (pFVar8 != (FVectorParameterValue *)0x0) {
      if ((((fVar2 != (pFVar8->ParameterValue).field0_0x0._s_0.R) ||
           (fVar3 != (pFVar8->ParameterValue).field0_0x0._s_0.G)) ||
          (fVar4 != (pFVar8->ParameterValue).field0_0x0._s_0.B)) ||
         (fVar5 != (pFVar8->ParameterValue).field0_0x0._s_0.A)) {
        (pFVar8->ParameterValue).field0_0x0._s_0.R = fVar2;
        (pFVar8->ParameterValue).field0_0x0._s_0.G = fVar3;
        (pFVar8->ParameterValue).field0_0x0._s_0.B = fVar4;
        (pFVar8->ParameterValue).field0_0x0._s_0.A = fVar5;
        GameThread_UpdateMIParameter<FVectorParameterValue>((UMaterialInstance *)this,pFVar8);
      }
      return true;
    }
  }
  return false;
}

// SetVectorParameterValue @ 147f52810

void __thiscall
UMaterialInstanceDynamic::SetVectorParameterValue
          (UMaterialInstanceDynamic *this,FName param_1,FLinearColor *param_2)

{
  FMaterialParameterInfo local_28;
  FLinearColor_u_0 local_18;
  
  local_18._0_8_ = *(undefined8 *)&param_2->field0_0x0;
  local_18._8_8_ = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
  local_28.Association.Value = '\x02';
  local_28.Index = -1;
  local_28.Name = param_1;
  UMaterialInstance::SetVectorParameterValueInternal
            ((UMaterialInstance *)this,&local_28,(FLinearColor *)&local_18._s_0);
  return;
}

// SetVectorParameterValueByInfo @ 147f52850

void __thiscall
UMaterialInstanceDynamic::SetVectorParameterValueByInfo
          (UMaterialInstanceDynamic *this,FMaterialParameterInfo *param_1,FLinearColor *param_2)

{
  FLinearColor_u_0 local_18;
  
  local_18._0_8_ = *(undefined8 *)&param_2->field0_0x0;
  local_18._8_8_ = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
  UMaterialInstance::SetVectorParameterValueInternal
            ((UMaterialInstance *)this,param_1,(FLinearColor *)&local_18._s_0);
  return;
}

// StaticRegisterNativesUMaterialInstanceDynamic @ 147f52cb0

void __cdecl UMaterialInstanceDynamic::StaticRegisterNativesUMaterialInstanceDynamic(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x1a;
  local_18.DataPtr = Z_Construct_UClass_UMaterialInstanceDynamic_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateCachedDataDynamic @ 147f53760

void __thiscall UMaterialInstanceDynamic::UpdateCachedDataDynamic(UMaterialInstanceDynamic *this)

{
  longlong *plVar1;
  char cVar2;
  FMaterialLayersFunctions *pFVar3;
  FMaterialLayersFunctions *pFVar4;
  FMaterialLayersFunctions local_128;
  undefined8 local_18;
  undefined8 uStack_10;
  
  plVar1 = (longlong *)this->_padding_;
  cVar2 = '\0';
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128.EditorOnly.LayerStates.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.EditorOnly.LayerStates.ArrayNum = 0;
  local_128.EditorOnly.LayerStates.ArrayMax = 0;
  local_128.EditorOnly.LayerNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.EditorOnly.LayerNames.ArrayNum = 0;
  local_128.EditorOnly.LayerNames.ArrayMax = 0;
  local_128.EditorOnly.RestrictToLayerRelatives.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_128.EditorOnly.RestrictToLayerRelatives.ArrayNum = 0;
  local_128.EditorOnly.RestrictToLayerRelatives.ArrayMax = 0;
  local_128.EditorOnly.RestrictToBlendRelatives.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_128.EditorOnly.RestrictToBlendRelatives.ArrayNum = 0;
  local_128.EditorOnly.RestrictToBlendRelatives.ArrayMax = 0;
  local_128.EditorOnly.LayerGuids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.EditorOnly.LayerGuids.ArrayNum = 0;
  local_128.EditorOnly.LayerGuids.ArrayMax = 0;
  local_128.EditorOnly.LayerLinkStates.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.EditorOnly.LayerLinkStates.ArrayNum = 0;
  local_128.EditorOnly.LayerLinkStates.ArrayMax = 0;
  local_128.EditorOnly.DeletedParentLayerGuids.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_128.EditorOnly.DeletedParentLayerGuids.ArrayNum = 0;
  local_128.EditorOnly.DeletedParentLayerGuids.ArrayMax = 0;
  local_128.LayerStates_DEPRECATED.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.LayerStates_DEPRECATED.ArrayNum = 0;
  local_128.LayerStates_DEPRECATED.ArrayMax = 0;
  local_128.LayerNames_DEPRECATED.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.LayerNames_DEPRECATED.ArrayNum = 0;
  local_128.LayerNames_DEPRECATED.ArrayMax = 0;
  local_128.RestrictToLayerRelatives_DEPRECATED.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_128.RestrictToLayerRelatives_DEPRECATED.ArrayNum = 0;
  local_128.RestrictToLayerRelatives_DEPRECATED.ArrayMax = 0;
  local_128.RestrictToBlendRelatives_DEPRECATED.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_128.RestrictToBlendRelatives_DEPRECATED.ArrayNum = 0;
  local_128.RestrictToBlendRelatives_DEPRECATED.ArrayMax = 0;
  local_128.LayerGuids_DEPRECATED.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.LayerGuids_DEPRECATED.ArrayNum = 0;
  local_128.LayerGuids_DEPRECATED.ArrayMax = 0;
  local_128.LayerLinkStates_DEPRECATED.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.LayerLinkStates_DEPRECATED.ArrayNum = 0;
  local_128.LayerLinkStates_DEPRECATED.ArrayMax = 0;
  local_128.DeletedParentLayerGuids_DEPRECATED.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_128.DeletedParentLayerGuids_DEPRECATED.ArrayNum = 0;
  local_128.DeletedParentLayerGuids_DEPRECATED.ArrayMax = 0;
  if (plVar1 != (longlong *)0x0) {
    local_18 = 0;
    uStack_10 = 0;
    cVar2 = (**(code **)(*plVar1 + 0x3a0))(plVar1,&local_128,&local_18);
  }
  if (this->_padding_ == 0) {
    pFVar3 = ::operator_new(0x10);
    pFVar4 = (FMaterialLayersFunctions *)0x0;
    if (pFVar3 != (FMaterialLayersFunctions *)0x0) {
      pFVar3->_padding_ = 0;
      pFVar3->_padding_ = 0;
      pFVar4 = pFVar3;
    }
    pFVar3 = (FMaterialLayersFunctions *)this->_padding_;
    if ((pFVar3 != pFVar4) &&
       (this->_padding_ = (longlong)pFVar4, pFVar3 != (FMaterialLayersFunctions *)0x0)) {
      if ((void *)pFVar3->_padding_ != (void *)0x0) {
        FMemory::Free((void *)pFVar3->_padding_);
      }
      ::operator_delete(pFVar3,0x10);
    }
  }
  pFVar4 = &local_128;
  if (cVar2 == '\0') {
    pFVar4 = (FMaterialLayersFunctions *)0x0;
  }
  FMaterialInstanceCachedData::InitializeForDynamic
            ((FMaterialInstanceCachedData *)this->_padding_,pFVar4);
  if ((FMaterialInstanceResource *)this->_padding_ != (FMaterialInstanceResource *)0x0) {
    FMaterialInstanceResource::GameThread_UpdateCachedData
              ((FMaterialInstanceResource *)this->_padding_,
               (FMaterialInstanceCachedData *)this->_padding_);
  }
  if (local_128.DeletedParentLayerGuids_DEPRECATED.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.DeletedParentLayerGuids_DEPRECATED.AllocatorInstance.Data);
  }
  if (local_128.LayerLinkStates_DEPRECATED.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_128.LayerLinkStates_DEPRECATED.AllocatorInstance.Data);
  }
  if (local_128.LayerGuids_DEPRECATED.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.LayerGuids_DEPRECATED.AllocatorInstance.Data);
  }
  if (local_128.RestrictToBlendRelatives_DEPRECATED.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.RestrictToBlendRelatives_DEPRECATED.AllocatorInstance.Data);
  }
  if (local_128.RestrictToLayerRelatives_DEPRECATED.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.RestrictToLayerRelatives_DEPRECATED.AllocatorInstance.Data);
  }
  DestructItems<FText,int>
            ((FText *)local_128.LayerNames_DEPRECATED.AllocatorInstance.Data,
             local_128.LayerNames_DEPRECATED.ArrayNum);
  if ((FText *)local_128.LayerNames_DEPRECATED.AllocatorInstance.Data != (FText *)0x0) {
    FMemory::Free(local_128.LayerNames_DEPRECATED.AllocatorInstance.Data);
  }
  if (local_128.LayerStates_DEPRECATED.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.LayerStates_DEPRECATED.AllocatorInstance.Data);
  }
  if (local_128.EditorOnly.DeletedParentLayerGuids.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.EditorOnly.DeletedParentLayerGuids.AllocatorInstance.Data);
  }
  if (local_128.EditorOnly.LayerLinkStates.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_128.EditorOnly.LayerLinkStates.AllocatorInstance.Data);
  }
  if (local_128.EditorOnly.LayerGuids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.EditorOnly.LayerGuids.AllocatorInstance.Data);
  }
  if (local_128.EditorOnly.RestrictToBlendRelatives.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.EditorOnly.RestrictToBlendRelatives.AllocatorInstance.Data);
  }
  if (local_128.EditorOnly.RestrictToLayerRelatives.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.EditorOnly.RestrictToLayerRelatives.AllocatorInstance.Data);
  }
  DestructItems<FText,int>
            ((FText *)local_128.EditorOnly.LayerNames.AllocatorInstance.Data,
             local_128.EditorOnly.LayerNames.ArrayNum);
  if ((FText *)local_128.EditorOnly.LayerNames.AllocatorInstance.Data != (FText *)0x0) {
    FMemory::Free(local_128.EditorOnly.LayerNames.AllocatorInstance.Data);
  }
  if (local_128.EditorOnly.LayerStates.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.EditorOnly.LayerStates.AllocatorInstance.Data);
  }
  FMaterialLayersFunctionsRuntimeData::~FMaterialLayersFunctionsRuntimeData
            ((FMaterialLayersFunctionsRuntimeData *)&local_128);
  return;
}

// execCopyInterpParameters @ 147f578e0

void __cdecl
UMaterialInstanceDynamic::execCopyInterpParameters(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  longlong lVar3;
  FName *pFVar4;
  FName *pFVar5;
  FName *pFVar6;
  undefined1 local_res10 [8];
  longlong local_res20;
  FMaterialParameterInfo local_58;
  TVector4<double>_u_0 local_48;
  
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  lVar3 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 != 0) {
    pFVar4 = *(FName **)(local_res20 + 0x1a0);
    iVar1 = *(int *)(local_res20 + 0x1a8);
    pFVar5 = (FName *)((longlong)pFVar4 + (longlong)iVar1 * 0x24);
    while( true ) {
      if (*(int *)(lVar3 + 0x1a8) != iVar1) {
        `TCheckedPointerIterator<FScalarParameterValue,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar4 == pFVar5) break;
      SetScalarParameterValue
                ((UMaterialInstanceDynamic *)param_1,*pFVar4,(float)pFVar4[2].ComparisonIndex.Value)
      ;
      pFVar4 = (FName *)&pFVar4[4].Number;
    }
    pFVar4 = *(FName **)(lVar3 + 0x1b0);
    iVar1 = *(int *)(lVar3 + 0x1b8);
    pFVar5 = pFVar4 + 2;
    pFVar6 = pFVar4 + (longlong)iVar1 * 6;
    while( true ) {
      if (*(int *)(lVar3 + 0x1b8) != iVar1) {
        `TCheckedPointerIterator<FVectorParameterValue,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar4 == pFVar6) break;
      local_48._s_0.X = (double)*pFVar5;
      local_48._s_0.Y = (double)pFVar5[1];
      local_58.Name = *pFVar4;
      local_58.Association.Value = '\x02';
      local_58.Index = -1;
      UMaterialInstance::SetVectorParameterValueInternal
                ((UMaterialInstance *)param_1,&local_58,(FLinearColor *)&local_48._s_0);
      pFVar4 = pFVar4 + 6;
      pFVar5 = pFVar5 + 6;
    }
    pFVar4 = *(FName **)(lVar3 + 0x1c0);
    iVar1 = *(int *)(lVar3 + 0x1c8);
    pFVar6 = pFVar4 + (longlong)iVar1 * 8;
    pFVar5 = pFVar4 + 2;
    while( true ) {
      if (*(int *)(lVar3 + 0x1c8) != iVar1) {
        `TCheckedPointerIterator<FDoubleVectorParameterValue,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar4 == pFVar6) break;
      local_58.Name = *pFVar4;
      local_48._s_0.X = (double)*pFVar5;
      local_48._s_0.Y = (double)pFVar5[1];
      local_48._s_0.Z = (double)pFVar5[2];
      local_48._s_0.W = (double)pFVar5[3];
      local_58.Association.Value = '\x02';
      local_58.Index = -1;
      UMaterialInstance::SetDoubleVectorParameterValueInternal
                ((UMaterialInstance *)param_1,&local_58,(TVector4<double> *)&local_48._s_0);
      pFVar4 = pFVar4 + 8;
      pFVar5 = pFVar5 + 8;
    }
    iVar1 = *(int *)(lVar3 + 0x1d8);
    pFVar4 = *(FName **)(lVar3 + 0x1d0);
    pFVar5 = pFVar4 + (longlong)iVar1 * 5;
    while( true ) {
      if (*(int *)(lVar3 + 0x1d8) != iVar1) {
        `TCheckedPointerIterator<FTextureParameterValue,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar4 == pFVar5) break;
      SetTextureParameterValue((UMaterialInstanceDynamic *)param_1,*pFVar4,(UTexture *)pFVar4[2]);
      pFVar4 = pFVar4 + 5;
    }
    iVar1 = *(int *)(lVar3 + 0x228);
    pFVar5 = *(FName **)(lVar3 + 0x220);
    pFVar4 = pFVar5 + (longlong)iVar1 * 6;
    while( true ) {
      if (*(int *)(lVar3 + 0x228) != iVar1) {
        `TCheckedPointerIterator<FFontParameterValue,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar5 == pFVar4) break;
      local_58.Name = *pFVar5;
      local_58.Association.Value = '\x02';
      local_58.Index = -1;
      UMaterialInstance::SetFontParameterValueInternal
                ((UMaterialInstance *)param_1,&local_58,(UFont *)pFVar5[2],
                 pFVar5[3].ComparisonIndex.Value);
      pFVar5 = pFVar5 + 6;
    }
  }
  return;
}

// execCopyParameterOverrides @ 147f57b60

void __cdecl
UMaterialInstanceDynamic::execCopyParameterOverrides(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMaterialInstance *local_res10;
  
  local_res10 = (UMaterialInstance *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  CopyParameterOverrides((UMaterialInstanceDynamic *)param_1,local_res10);
  return;
}

// execInitializeScalarParameterAndGetIndex @ 147f581b0

void __cdecl
UMaterialInstanceDynamic::execInitializeScalarParameterAndGetIndex
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  FName FVar3;
  longlong lVar4;
  code *pcVar5;
  float fVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
  FName *pFVar14;
  uint local_res8 [2];
  float local_res10 [2];
  FName local_res18;
  FMaterialParameterInfo local_b8;
  undefined1 local_a8 [32];
  FUtf8String local_88;
  undefined1 local_78 [24];
  FUtf8String local_60 [2];
  
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0.0;
  pFVar14 = &local_res18;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar14 = (FName *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  fVar6 = local_res10[0];
  local_b8.Association.Value = '\x02';
  puVar13 = local_res8;
  if ((uint *)param_2->MostRecentPropertyAddress != (uint *)0x0) {
    puVar13 = (uint *)param_2->MostRecentPropertyAddress;
  }
  local_b8.Index = -1;
  uVar11 = 0;
  local_a8[0] = false;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  local_a8._8_8_ = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *puVar13 = 0xffffffff;
  FVar3 = *pFVar14;
  local_a8._24_8_ = 0;
  local_a8._16_8_ = 0;
  local_b8.Name = FVar3;
  FUtf8String::Reset(&local_88,0);
  local_60[0].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60[0].Data.ArrayNum = 0;
  local_60[0].Data.ArrayMax = 0;
  local_78._0_8_ = 0;
  local_78._16_8_ = 0;
  local_78._8_8_ = 0;
  FUtf8String::Reset(local_60,0);
  UMaterialInstance::SetScalarParameterValueInternal
            ((UMaterialInstance *)param_1,&local_b8,fVar6,false,
             (FScalarParameterAtlasInstanceData *)local_a8);
  iVar9 = *(int *)&param_1[10].field_0x18;
  uVar12 = uVar11;
  if (0 < iVar9) {
    do {
      uVar10 = (uint)uVar11;
      uVar8 = 0;
      if ((int)uVar10 < iVar9) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      lVar4 = *(longlong *)&param_1[10].field_0x10;
      if (((((uint)*(undefined8 *)(uVar12 + lVar4) == FVar3.ComparisonIndex.Value.Value) &&
           ((uint)((ulonglong)*(undefined8 *)(uVar12 + lVar4) >> 0x20) == FVar3.Number)) &&
          (*(int *)(uVar12 + 0xc + lVar4) == -1)) && (*(char *)(uVar12 + 8 + lVar4) == '\x02'))
      goto LAB_147f583d4;
      iVar9 = *(int *)&param_1[10].field_0x18;
      uVar11 = (ulonglong)(uVar10 + 1);
      uVar12 = uVar12 + 0x24;
    } while ((int)(uVar10 + 1) < iVar9);
  }
  uVar10 = 0xffffffff;
LAB_147f583d4:
  *puVar13 = uVar10;
  *(bool *)param_3 = uVar10 != 0xffffffff;
  return;
}

// execK2_CopyMaterialInstanceParameters @ 147f58410

void __cdecl
UMaterialInstanceDynamic::execK2_CopyMaterialInstanceParameters
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  UMaterialInterface *local_res20;
  
  local_res20 = (UMaterialInterface *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] != 0) {
    UMaterialInstance::CopyMaterialUniformParametersInternal
              ((UMaterialInstance *)param_1,local_res20);
    return;
  }
  UMaterialInstance::CopyMaterialInstanceParameters((UMaterialInstance *)param_1,local_res20);
  return;
}

// execK2_GetScalarParameterValue @ 147f58650

void __cdecl
UMaterialInstanceDynamic::execK2_GetScalarParameterValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined8 local_res8;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_58;
  undefined4 local_50 [8];
  char local_30;
  undefined4 local_28;
  undefined1 local_24;
  
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_64 = 0;
  local_5c = 0xffffffff;
  local_58 = 2;
  local_30 = -1;
  local_28 = 0xffffffff;
  local_68 = (undefined4)local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_60 = (undefined4)((ulonglong)local_res8 >> 0x20);
  local_24 = 0;
  cVar3 = (**(code **)(*(longlong *)param_1 + 0x410))(param_1,0,&local_68,local_50,3);
  if (cVar3 == '\0') {
    *(undefined4 *)param_3 = 0;
  }
  else {
    if (local_30 != '\0') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type == EMaterialParameterType::Scalar",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Materials\\MaterialParameters.h"
                         ,0x176,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(undefined4 *)param_3 = local_50[0];
  }
  return;
}

// execK2_GetScalarParameterValueByInfo @ 147f587a0

void __cdecl
UMaterialInstanceDynamic::execK2_GetScalarParameterValueByInfo
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  uchar *puVar5;
  uchar local_78 [12];
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  uchar local_58;
  undefined4 local_50 [8];
  char local_30;
  undefined4 local_28;
  undefined1 local_24;
  
  local_78[0] = '\0';
  local_78[1] = '\0';
  local_78[2] = '\0';
  local_78[3] = '\0';
  local_78[4] = '\0';
  local_78[5] = '\0';
  local_78[6] = '\0';
  local_78[7] = '\0';
  local_78[8] = 2;
  local_6c = 0xffffffff;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  local_64 = 0;
  local_30 = -1;
  puVar5 = local_78;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar5 = param_2->MostRecentPropertyAddress;
  }
  local_28 = 0xffffffff;
  local_24 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_68 = (int)*(undefined8 *)puVar5;
  local_60 = (int)((ulonglong)*(undefined8 *)puVar5 >> 0x20);
  local_5c = *(undefined4 *)(puVar5 + 0xc);
  local_58 = puVar5[8];
  cVar3 = (**(code **)(*(longlong *)param_1 + 0x410))(param_1,0,&local_68,local_50,3);
  if (cVar3 == '\0') {
    *(undefined4 *)param_3 = 0;
  }
  else {
    if (local_30 != '\0') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type == EMaterialParameterType::Scalar",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Materials\\MaterialParameters.h"
                         ,0x176,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(undefined4 *)param_3 = local_50[0];
  }
  return;
}

// execK2_GetTextureCollectionParameterValue @ 147f58a10

void __cdecl
UMaterialInstanceDynamic::execK2_GetTextureCollectionParameterValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 local_res8;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48;
  undefined8 local_40 [4];
  undefined1 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_54 = 0;
  local_4c = 0xffffffff;
  local_48 = 2;
  local_20 = 0xff;
  local_58 = (undefined4)local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_50 = (undefined4)((ulonglong)local_res8 >> 0x20);
  local_18 = 0xffffffff;
  local_14 = 0;
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x410))(param_1,4,&local_58,local_40,3);
  uVar3 = 0;
  if (cVar2 != '\0') {
    uVar3 = local_40[0];
  }
  *(undefined8 *)param_3 = uVar3;
  return;
}

// execK2_GetTextureCollectionParameterValueByInfo @ 147f58b20

void __cdecl
UMaterialInstanceDynamic::execK2_GetTextureCollectionParameterValueByInfo
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UTextureCollection *pUVar2;
  FMaterialParameterInfo *pFVar3;
  FMaterialParameterInfo local_18;
  
  local_18.Association.Value = '\x02';
  local_18.Name.ComparisonIndex.Value = 0;
  local_18.Name.Number = 0;
  local_18.Index = -1;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pFVar3 = &local_18;
  if ((FMaterialParameterInfo *)param_2->MostRecentPropertyAddress != (FMaterialParameterInfo *)0x0)
  {
    pFVar3 = (FMaterialParameterInfo *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = K2_GetTextureCollectionParameterValueByInfo((UMaterialInstanceDynamic *)param_1,pFVar3);
  *(UTextureCollection **)param_3 = pUVar2;
  return;
}

// execK2_GetTextureParameterValue @ 147f58cf0

void __cdecl
UMaterialInstanceDynamic::execK2_GetTextureParameterValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 local_res8;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48;
  undefined8 local_40 [4];
  undefined1 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_54 = 0;
  local_4c = 0xffffffff;
  local_48 = 2;
  local_20 = 0xff;
  local_58 = (undefined4)local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_50 = (undefined4)((ulonglong)local_res8 >> 0x20);
  local_18 = 0xffffffff;
  local_14 = 0;
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x410))(param_1,3,&local_58,local_40,3);
  uVar3 = 0;
  if (cVar2 != '\0') {
    uVar3 = local_40[0];
  }
  *(undefined8 *)param_3 = uVar3;
  return;
}

// execK2_GetTextureParameterValueByInfo @ 147f58e00

void __cdecl
UMaterialInstanceDynamic::execK2_GetTextureParameterValueByInfo
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  uchar *puVar3;
  undefined8 uVar4;
  uchar local_68 [12];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  uchar local_48;
  undefined8 local_40 [4];
  undefined1 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  local_68[8] = 2;
  local_68[0] = '\0';
  local_68[1] = '\0';
  local_68[2] = '\0';
  local_68[3] = '\0';
  local_68[4] = '\0';
  local_68[5] = '\0';
  local_68[6] = '\0';
  local_68[7] = '\0';
  local_5c = 0xffffffff;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_68);
  }
  local_54 = 0;
  local_20 = 0xff;
  puVar3 = local_68;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  local_18 = 0xffffffff;
  local_14 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_58 = (int)*(undefined8 *)puVar3;
  local_50 = (int)((ulonglong)*(undefined8 *)puVar3 >> 0x20);
  local_4c = *(undefined4 *)(puVar3 + 0xc);
  local_48 = puVar3[8];
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x410))
                    (param_1,CONCAT71((int7)((ulonglong)puVar3 >> 8),3),&local_58,local_40,3);
  uVar4 = 0;
  if (cVar2 != '\0') {
    uVar4 = local_40[0];
  }
  *(undefined8 *)param_3 = uVar4;
  return;
}

// execK2_GetVectorParameterValue @ 147f590b0

void __cdecl
UMaterialInstanceDynamic::execK2_GetVectorParameterValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 local_res8;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  char local_60;
  undefined4 local_58;
  undefined1 local_54;
  
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  uVar6 = __real_3f800000;
  local_94 = 0;
  local_8c = 0xffffffff;
  local_88 = 2;
  local_60 = -1;
  local_58 = 0xffffffff;
  local_98 = (undefined4)local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_90 = (undefined4)((ulonglong)local_res8 >> 0x20);
  local_54 = 0;
  cVar3 = (**(code **)(*(longlong *)param_1 + 0x410))(param_1,1,&local_98,&local_80,3);
  uVar5 = 0;
  uVar7 = 0;
  uVar8 = 0;
  if (((cVar3 != '\0') &&
      (uVar5 = local_78, uVar6 = local_74, uVar7 = local_7c, uVar8 = local_80, local_60 != '\x01'))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Type == EMaterialParameterType::Vector",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Materials\\MaterialParameters.h"
                            ,0x177,L""), uVar5 = local_78, uVar6 = local_74, uVar7 = local_7c,
        uVar8 = local_80, bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(undefined4 *)param_3 = uVar8;
  *(undefined4 *)((longlong)param_3 + 4) = uVar7;
  *(undefined4 *)((longlong)param_3 + 8) = uVar5;
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar6;
  return;
}

// execK2_GetVectorParameterValueByInfo @ 147f59240

void __cdecl
UMaterialInstanceDynamic::execK2_GetVectorParameterValueByInfo
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  uchar *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uchar local_a8 [12];
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  uchar local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  char local_60;
  undefined4 local_58;
  undefined1 local_54;
  
  local_a8[0] = '\0';
  local_a8[1] = '\0';
  local_a8[2] = '\0';
  local_a8[3] = '\0';
  local_a8[4] = '\0';
  local_a8[5] = '\0';
  local_a8[6] = '\0';
  local_a8[7] = '\0';
  local_a8[8] = 2;
  local_9c = 0xffffffff;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a8);
  }
  uVar7 = __real_3f800000;
  local_94 = 0;
  local_60 = -1;
  puVar5 = local_a8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar5 = param_2->MostRecentPropertyAddress;
  }
  local_58 = 0xffffffff;
  local_54 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_98 = (int)*(undefined8 *)puVar5;
  local_90 = (int)((ulonglong)*(undefined8 *)puVar5 >> 0x20);
  local_8c = *(undefined4 *)(puVar5 + 0xc);
  local_88 = puVar5[8];
  cVar3 = (**(code **)(*(longlong *)param_1 + 0x410))
                    (param_1,CONCAT71((int7)((ulonglong)puVar5 >> 8),1),&local_98,&local_80,3);
  uVar6 = 0;
  uVar8 = 0;
  uVar9 = 0;
  if (((cVar3 != '\0') &&
      (uVar6 = local_78, uVar7 = local_74, uVar8 = local_7c, uVar9 = local_80, local_60 != '\x01'))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Type == EMaterialParameterType::Vector",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Materials\\MaterialParameters.h"
                            ,0x177,L""), uVar6 = local_78, uVar7 = local_74, uVar8 = local_7c,
        uVar9 = local_80, bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(undefined4 *)param_3 = uVar9;
  *(undefined4 *)((longlong)param_3 + 4) = uVar8;
  *(undefined4 *)((longlong)param_3 + 8) = uVar6;
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar7;
  return;
}

// execK2_InterpolateMaterialInstanceParams @ 147f593f0

void __cdecl
UMaterialInstanceDynamic::execK2_InterpolateMaterialInstanceParams
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  FName FVar3;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  char cVar7;
  longlong *plVar8;
  longlong *plVar9;
  UClass *pUVar10;
  FScalarParameterValue *pFVar11;
  FScalarParameterValue *pFVar12;
  FVectorParameterValue *pFVar13;
  FVectorParameterValue *pFVar14;
  ulonglong uVar15;
  int iVar16;
  FNameEntryId FVar17;
  uint uVar18;
  longlong lVar19;
  FLinearColor_u_0 *pFVar20;
  longlong *plVar21;
  longlong *plVar22;
  uint uVar23;
  longlong lVar24;
  FLinearColor_u_0 *pFVar25;
  float fVar26;
  float fVar27;
  float local_res10 [2];
  longlong *local_res20;
  TArray<FName,TSizedDefaultAllocator<32>_> local_1b8;
  longlong *local_1a8;
  longlong *local_1a0;
  longlong *local_198;
  ulonglong local_190;
  FLinearColor_u_0 local_188;
  longlong *local_178;
  FLinearColor_u_0 local_168;
  FMemoryImageMaterialParameterInfo local_158;
  FMemoryImageMaterialParameterInfo local_144;
  uint local_130 [3];
  undefined4 local_124;
  undefined1 local_120;
  FMemoryImageMaterialParameterInfo local_11c;
  FMemoryImageMaterialParameterInfo local_108;
  uint local_f4 [3];
  undefined4 local_e8;
  undefined1 local_e4;
  FMaterialParameterInfo local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  char local_b0;
  undefined4 local_a8;
  undefined1 local_a4;
  float local_a0 [8];
  char local_80;
  undefined4 local_78;
  undefined1 local_74;
  
  local_1a8 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1a8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1a8);
  }
  local_res20 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  plVar21 = local_1a8;
  plVar22 = local_res20;
  fVar5 = local_res10[0];
  local_198 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_1a0 = local_1a8;
  if (local_1a8 == (longlong *)0x0) {
    return;
  }
  if (local_res20 == (longlong *)0x0) {
    return;
  }
  plVar8 = (longlong *)(**(code **)(*local_1a8 + 0x2d8))(local_1a8);
  local_178 = plVar8;
  plVar9 = (longlong *)(**(code **)(*plVar22 + 0x2d8))(plVar22);
  if (plVar8 != plVar9) {
    return;
  }
  local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.ArrayNum = 0;
  local_1b8.ArrayMax = 0;
  while( true ) {
    lVar24 = plVar21[0x35];
    iVar16 = 0;
    if (0 < (int)lVar24) {
      lVar19 = 0;
      do {
        if (((int)plVar21[0x35] <= iVar16) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
                  (&local_1b8,(FName *)(plVar21[0x34] + lVar19));
        iVar16 = iVar16 + 1;
        lVar19 = lVar19 + 0x24;
      } while (iVar16 < (int)lVar24);
    }
    if (plVar21[0x26] == 0) break;
    pUVar10 = UMaterialInstance::StaticClass();
    bVar6 = FObjectPtr::IsA((FObjectPtr *)(plVar21 + 0x26),pUVar10);
    if ((!bVar6) || (plVar21 = (longlong *)plVar21[0x26], plVar21 == (longlong *)0x0)) break;
  }
  do {
    lVar24 = plVar22[0x35];
    iVar16 = 0;
    if (0 < (int)lVar24) {
      lVar19 = 0;
      do {
        if (((int)plVar22[0x35] <= iVar16) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
                  (&local_1b8,(FName *)(plVar22[0x34] + lVar19));
        iVar16 = iVar16 + 1;
        lVar19 = lVar19 + 0x24;
      } while (iVar16 < (int)lVar24);
    }
    if (plVar22[0x26] == 0) break;
    pUVar10 = UMaterialInstance::StaticClass();
    bVar6 = FObjectPtr::IsA((FObjectPtr *)(plVar22 + 0x26),pUVar10);
    if ((!bVar6) || (plVar22 = (longlong *)plVar22[0x26], plVar22 == (longlong *)0x0)) break;
  } while( true );
  uVar15 = (ulonglong)local_1b8.ArrayNum;
  uVar23 = 0;
  lVar24 = 0;
  local_190 = uVar15;
  if (0 < local_1b8.ArrayNum) {
    do {
      uVar18 = 0;
      if ((int)uVar23 < (int)uVar15) {
        uVar18 = ~uVar23 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar3 = *(FName *)(local_1b8.AllocatorInstance.Data + lVar24 * 8);
      plVar21 = local_1a0;
      do {
        FVar17 = FVar3.ComparisonIndex.Value;
        local_158.Name.DisplayIndex.Value = 0;
        uVar18 = FVar3.Number;
        local_158.Index = -1;
        local_158.Association.Value = '\x02';
        local_158.Name.ComparisonIndex.Value = FVar17.Value;
        local_158.Name.Number = uVar18;
        pFVar11 = GameThread_FindParameterByName<FScalarParameterValue>
                            ((TArray<FScalarParameterValue,TSizedDefaultAllocator<32>_> *)
                             (plVar21 + 0x34),&local_158);
        plVar22 = local_198;
        if (pFVar11 != (FScalarParameterValue *)0x0) goto LAB_147f597d0;
        plVar21 = (longlong *)plVar21[0x26];
        if (plVar21 == (longlong *)0x0) {
LAB_147f597b3:
          plVar21 = (longlong *)0x0;
        }
        else {
          pUVar10 = UMaterialInstance::GetPrivateStaticClass();
          iVar16 = (int)pUVar10->_padding_;
          if ((*(int *)(plVar21[2] + 0x38) < iVar16) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(plVar21[2] + 0x30) + (longlong)iVar16 * 8)
              != &pUVar10->_padding_)) goto LAB_147f597b3;
        }
      } while (plVar21 != (longlong *)0x0);
      pFVar11 = (FScalarParameterValue *)0x0;
      plVar22 = local_198;
LAB_147f597d0:
      do {
        local_144.Name.DisplayIndex.Value = 0;
        local_144.Index = -1;
        local_144.Association.Value = '\x02';
        local_144.Name.ComparisonIndex.Value = FVar17.Value;
        local_144.Name.Number = uVar18;
        pFVar12 = GameThread_FindParameterByName<FScalarParameterValue>
                            ((TArray<FScalarParameterValue,TSizedDefaultAllocator<32>_> *)
                             (plVar22 + 0x34),&local_144);
        if (pFVar12 != (FScalarParameterValue *)0x0) goto LAB_147f5983c;
        plVar22 = (longlong *)plVar22[0x26];
        if (plVar22 == (longlong *)0x0) {
LAB_147f59833:
          plVar22 = (longlong *)0x0;
        }
        else {
          pUVar10 = UMaterialInstance::GetPrivateStaticClass();
          iVar16 = (int)pUVar10->_padding_;
          if ((*(int *)(plVar22[2] + 0x38) < iVar16) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(plVar22[2] + 0x30) + (longlong)iVar16 * 8)
              != &pUVar10->_padding_)) goto LAB_147f59833;
        }
      } while (plVar22 != (longlong *)0x0);
      pFVar12 = (FScalarParameterValue *)0x0;
LAB_147f5983c:
      if ((pFVar11 != (FScalarParameterValue *)0x0) || (pFVar12 != (FScalarParameterValue *)0x0)) {
        if ((pFVar11 == (FScalarParameterValue *)0x0) ||
           (fVar27 = 0.0, pFVar12 == (FScalarParameterValue *)0x0)) {
          local_130[1] = 0;
          local_124 = 0xffffffff;
          local_120 = 2;
          local_80 = -1;
          local_78 = 0xffffffff;
          local_74 = 0;
          local_130[0] = FVar17.Value;
          local_130[2] = uVar18;
          cVar7 = (**(code **)(*local_178 + 0x410))(local_178,0,local_130,local_a0,3);
          fVar26 = 0.0;
          if (((cVar7 != '\0') && (fVar26 = local_a0[0], local_80 != '\0')) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type == EMaterialParameterType::Scalar",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Materials\\MaterialParameters.h"
                                 ,0x176,L""), fVar26 = local_a0[0], bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          fVar27 = fVar26;
          if (pFVar11 != (FScalarParameterValue *)0x0) goto LAB_147f598e3;
        }
        else {
LAB_147f598e3:
          fVar26 = pFVar11->ParameterValue;
        }
        if (pFVar12 != (FScalarParameterValue *)0x0) {
          fVar27 = pFVar12->ParameterValue;
        }
        SetScalarParameterValue
                  ((UMaterialInstanceDynamic *)param_1,FVar3,(fVar27 - fVar26) * fVar5 + fVar26);
      }
      uVar23 = uVar23 + 1;
      lVar24 = lVar24 + 1;
      if ((longlong)local_190 <= lVar24) break;
      uVar15 = local_1b8._8_8_ & 0xffffffff;
    } while( true );
  }
  bVar6 = local_1b8.ArrayMax != 0;
  local_1b8._8_8_ = (ulonglong)(uint)local_1b8.ArrayMax << 0x20;
  plVar21 = local_1a0;
  if (bVar6) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&local_1b8.AllocatorInstance,0,&local_1b8.ArrayMax);
    plVar21 = local_1a0;
  }
  while( true ) {
    lVar24 = plVar21[0x37];
    iVar16 = 0;
    if (0 < (int)lVar24) {
      lVar19 = 0;
      do {
        if (((int)plVar21[0x37] <= iVar16) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
                  (&local_1b8,(FName *)(plVar21[0x36] + lVar19));
        iVar16 = iVar16 + 1;
        lVar19 = lVar19 + 0x30;
      } while (iVar16 < (int)lVar24);
    }
    plVar22 = local_198;
    if (plVar21[0x26] == 0) break;
    pUVar10 = UMaterialInstance::StaticClass();
    bVar6 = FObjectPtr::IsA((FObjectPtr *)(plVar21 + 0x26),pUVar10);
    plVar22 = local_198;
    if ((!bVar6) ||
       (plVar8 = plVar21 + 0x26, plVar21 = (longlong *)*plVar8,
       (longlong *)*plVar8 == (longlong *)0x0)) break;
  }
  do {
    lVar24 = plVar22[0x37];
    iVar16 = 0;
    if (0 < (int)lVar24) {
      lVar19 = 0;
      do {
        if (((int)plVar22[0x37] <= iVar16) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
                  (&local_1b8,(FName *)(plVar22[0x36] + lVar19));
        iVar16 = iVar16 + 1;
        lVar19 = lVar19 + 0x30;
      } while (iVar16 < (int)lVar24);
    }
    if (plVar22[0x26] == 0) break;
    pUVar10 = UMaterialInstance::StaticClass();
    bVar6 = FObjectPtr::IsA((FObjectPtr *)(plVar22 + 0x26),pUVar10);
    if ((!bVar6) ||
       (plVar21 = plVar22 + 0x26, plVar22 = (longlong *)*plVar21,
       (longlong *)*plVar21 == (longlong *)0x0)) break;
  } while( true );
  uVar15 = (ulonglong)local_1b8.ArrayNum;
  uVar23 = 0;
  lVar24 = 0;
  local_190 = uVar15;
  if (local_1b8.ArrayNum < 1) {
LAB_147f59da6:
    if (local_1b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.AllocatorInstance.Data);
    }
    return;
  }
  do {
    uVar18 = 0;
    if ((int)uVar23 < (int)uVar15) {
      uVar18 = ~uVar23 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar3 = *(FName *)(local_1b8.AllocatorInstance.Data + lVar24 * 8);
    plVar21 = local_1a0;
    do {
      FVar17 = FVar3.ComparisonIndex.Value;
      local_11c.Name.DisplayIndex.Value = 0;
      uVar18 = FVar3.Number;
      local_11c.Index = -1;
      local_11c.Association.Value = '\x02';
      local_11c.Name.ComparisonIndex.Value = FVar17.Value;
      local_11c.Name.Number = uVar18;
      pFVar13 = GameThread_FindParameterByName<FVectorParameterValue>
                          ((TArray<FVectorParameterValue,TSizedDefaultAllocator<32>_> *)
                           (plVar21 + 0x36),&local_11c);
      plVar22 = local_198;
      if (pFVar13 != (FVectorParameterValue *)0x0) goto LAB_147f59bc0;
      plVar21 = (longlong *)plVar21[0x26];
      if (plVar21 == (longlong *)0x0) {
LAB_147f59ba2:
        plVar21 = (longlong *)0x0;
      }
      else {
        pUVar10 = UMaterialInstance::GetPrivateStaticClass();
        iVar16 = (int)pUVar10->_padding_;
        if ((*(int *)(plVar21[2] + 0x38) < iVar16) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(plVar21[2] + 0x30) + (longlong)iVar16 * 8) !=
            &pUVar10->_padding_)) goto LAB_147f59ba2;
      }
    } while (plVar21 != (longlong *)0x0);
    pFVar13 = (FVectorParameterValue *)0x0;
    plVar22 = local_198;
LAB_147f59bc0:
    do {
      local_108.Name.DisplayIndex.Value = 0;
      local_108.Index = -1;
      local_108.Association.Value = '\x02';
      local_108.Name.ComparisonIndex.Value = FVar17.Value;
      local_108.Name.Number = uVar18;
      pFVar14 = GameThread_FindParameterByName<FVectorParameterValue>
                          ((TArray<FVectorParameterValue,TSizedDefaultAllocator<32>_> *)
                           (plVar22 + 0x36),&local_108);
      if (pFVar14 != (FVectorParameterValue *)0x0) goto LAB_147f59c2c;
      plVar22 = (longlong *)plVar22[0x26];
      if (plVar22 == (longlong *)0x0) {
LAB_147f59c23:
        plVar22 = (longlong *)0x0;
      }
      else {
        pUVar10 = UMaterialInstance::GetPrivateStaticClass();
        iVar16 = (int)pUVar10->_padding_;
        if ((*(int *)(plVar22[2] + 0x38) < iVar16) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(plVar22[2] + 0x30) + (longlong)iVar16 * 8) !=
            &pUVar10->_padding_)) goto LAB_147f59c23;
      }
    } while (plVar22 != (longlong *)0x0);
    pFVar14 = (FVectorParameterValue *)0x0;
LAB_147f59c2c:
    if ((pFVar13 != (FVectorParameterValue *)0x0) || (pFVar14 != (FVectorParameterValue *)0x0)) {
      local_188._0_8_ = 0;
      local_188._8_8_ = 0;
      if ((pFVar13 == (FVectorParameterValue *)0x0) || (pFVar14 == (FVectorParameterValue *)0x0)) {
        local_f4[1] = 0;
        local_e8 = 0xffffffff;
        local_e4 = 2;
        local_b0 = -1;
        local_a8 = 0xffffffff;
        local_a4 = 0;
        local_f4[0] = FVar17.Value;
        local_f4[2] = uVar18;
        cVar7 = (**(code **)(*local_178 + 0x410))(local_178,1,local_f4,&local_d0,3);
        if (cVar7 != '\0') {
          if ((local_b0 != '\x01') &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type == EMaterialParameterType::Vector",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Materials\\MaterialParameters.h"
                                 ,0x177,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_188._0_8_ = local_d0;
          local_188._8_8_ = uStack_c8;
        }
        if (pFVar13 != (FVectorParameterValue *)0x0) goto LAB_147f59cdc;
        pFVar25 = &local_188;
      }
      else {
LAB_147f59cdc:
        pFVar25 = &(pFVar13->ParameterValue).field0_0x0;
      }
      fVar27 = (((FLinearColor_u_0 *)&(pFVar25->_s_0).R)->_s_0).R;
      if (pFVar14 == (FVectorParameterValue *)0x0) {
        pFVar20 = &local_188;
      }
      else {
        pFVar20 = &(pFVar14->ParameterValue).field0_0x0;
      }
      local_e0.Association.Value = '\x02';
      local_e0.Index = -1;
      local_168._s_0.R =
           ((((FLinearColor_u_0 *)&(pFVar20->_s_0).R)->_s_0).R - fVar27) * fVar5 + fVar27;
      local_168._s_0.G = ((pFVar20->_s_0).G - (pFVar25->_s_0).G) * fVar5 + (pFVar25->_s_0).G;
      local_168._s_0.B = ((pFVar20->_s_0).B - (pFVar25->_s_0).B) * fVar5 + (pFVar25->_s_0).B;
      local_168._s_0.A = ((pFVar20->_s_0).A - (pFVar25->_s_0).A) * fVar5 + (pFVar25->_s_0).A;
      local_e0.Name = FVar3;
      UMaterialInstance::SetVectorParameterValueInternal
                ((UMaterialInstance *)param_1,&local_e0,(FLinearColor *)&local_168._s_0);
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 1;
    if ((longlong)local_190 <= lVar24) goto LAB_147f59da6;
    uVar15 = local_1b8._8_8_ & 0xffffffff;
  } while( true );
}

// execSetDoubleVectorParameterValue @ 147f59e00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UMaterialInstanceDynamic::execSetDoubleVectorParameterValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName local_res10;
  FMaterialParameterInfo local_58;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  TVector4<double>_u_0 local_28;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_48 = 0.0;
  dStack_40 = 0.0;
  local_38 = ___xmm_3ff00000000000000000000000000000;
  dStack_30 = _UNK_15061cbc8;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_58.Association.Value = '\x02';
  local_58.Index = -1;
  local_28._s_0.X = local_48;
  local_28._s_0.Y = dStack_40;
  local_58.Name = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28._s_0.Z = local_38;
  local_28._s_0.W = dStack_30;
  UMaterialInstance::SetDoubleVectorParameterValueInternal
            ((UMaterialInstance *)param_1,&local_58,(TVector4<double> *)&local_28._s_0);
  return;
}

// execSetRuntimeVirtualTextureParameterValue @ 147f5a0e0

void __cdecl
UMaterialInstanceDynamic::execSetRuntimeVirtualTextureParameterValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName local_res10;
  URuntimeVirtualTexture *local_res20;
  FMaterialParameterInfo local_18;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res20 = (URuntimeVirtualTexture *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_18.Association.Value = '\x02';
  local_18.Index = -1;
  local_18.Name = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UMaterialInstance::SetRuntimeVirtualTextureParameterValueInternal
            ((UMaterialInstance *)param_1,&local_18,local_res20);
  return;
}

// execSetRuntimeVirtualTextureParameterValueByInfo @ 147f5a1d0

void __cdecl
UMaterialInstanceDynamic::execSetRuntimeVirtualTextureParameterValueByInfo
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FMaterialParameterInfo *pFVar2;
  URuntimeVirtualTexture *local_res10;
  FMaterialParameterInfo local_18;
  
  local_18.Association.Value = '\x02';
  local_18.Name.ComparisonIndex.Value = 0;
  local_18.Name.Number = 0;
  local_18.Index = -1;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res10 = (URuntimeVirtualTexture *)0x0;
  pFVar2 = &local_18;
  if ((FMaterialParameterInfo *)param_2->MostRecentPropertyAddress != (FMaterialParameterInfo *)0x0)
  {
    pFVar2 = (FMaterialParameterInfo *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UMaterialInstance::SetRuntimeVirtualTextureParameterValueInternal
            ((UMaterialInstance *)param_1,pFVar2,local_res10);
  return;
}

// execSetScalarParameterByIndex @ 147f5a2d0

void __cdecl
UMaterialInstanceDynamic::execSetScalarParameterByIndex
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FScalarParameterValue *pFVar1;
  FProperty *pFVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  longlong lVar6;
  uint uVar7;
  float local_res8 [2];
  uint local_res10 [2];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  fVar4 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar6 = (longlong)(int)local_res10[0];
  if ((-1 < (int)local_res10[0]) && ((int)local_res10[0] < *(int *)&param_1[10].field_0x18)) {
    uVar7 = 0;
    if ((int)local_res10[0] < *(int *)&param_1[10].field_0x18) {
      uVar7 = ~local_res10[0] >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar1 = (FScalarParameterValue *)(*(longlong *)&param_1[10].field_0x10 + lVar6 * 0x24);
    if (pFVar1 != (FScalarParameterValue *)0x0) {
      if (fVar4 != pFVar1->ParameterValue) {
        pFVar1->ParameterValue = fVar4;
        GameThread_UpdateMIParameter<FScalarParameterValue>((UMaterialInstance *)param_1,pFVar1);
      }
      *(undefined1 *)param_3 = 1;
      return;
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execSetScalarParameterValue @ 147f5a430

void __cdecl
UMaterialInstanceDynamic::execSetScalarParameterValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [2];
  FName local_res20;
  
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetScalarParameterValue((UMaterialInstanceDynamic *)param_1,local_res20,local_res10[0]);
  return;
}

// execSetScalarParameterValueByInfo @ 147f5a500

void __cdecl
UMaterialInstanceDynamic::execSetScalarParameterValueByInfo
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  FMaterialParameterInfo *pFVar3;
  float local_res10 [2];
  FMaterialParameterInfo local_98;
  undefined1 local_88 [32];
  FUtf8String local_68;
  undefined1 local_58 [24];
  FUtf8String local_40 [2];
  
  local_98.Name.ComparisonIndex.Value = 0;
  local_98.Name.Number = 0;
  local_98.Association.Value = '\x02';
  local_98.Index = -1;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_res10[0] = 0.0;
  pFVar3 = &local_98;
  if ((FMaterialParameterInfo *)param_2->MostRecentPropertyAddress != (FMaterialParameterInfo *)0x0)
  {
    pFVar3 = (FMaterialParameterInfo *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar2 = local_res10[0];
  local_88[0] = false;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_88._8_8_ = 0;
  local_88._24_8_ = 0;
  local_88._16_8_ = 0;
  FUtf8String::Reset(&local_68,0);
  local_40[0].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40[0].Data.ArrayNum = 0;
  local_40[0].Data.ArrayMax = 0;
  local_58._0_8_ = 0;
  local_58._16_8_ = 0;
  local_58._8_8_ = 0;
  FUtf8String::Reset(local_40,0);
  UMaterialInstance::SetScalarParameterValueInternal
            ((UMaterialInstance *)param_1,pFVar3,fVar2,false,
             (FScalarParameterAtlasInstanceData *)local_88);
  return;
}

// execSetSparseVolumeTextureParameterValue @ 147f5a660

void __cdecl
UMaterialInstanceDynamic::execSetSparseVolumeTextureParameterValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName local_res10;
  USparseVolumeTexture *local_res20;
  FMaterialParameterInfo local_18;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res20 = (USparseVolumeTexture *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_18.Association.Value = '\x02';
  local_18.Index = -1;
  local_18.Name = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UMaterialInstance::SetSparseVolumeTextureParameterValueInternal
            ((UMaterialInstance *)param_1,&local_18,local_res20);
  return;
}

// execSetTextureCollectionParameterValue @ 147f5a750

void __cdecl
UMaterialInstanceDynamic::execSetTextureCollectionParameterValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName local_res10;
  UTextureCollection *local_res20;
  FMaterialParameterInfo local_18;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res20 = (UTextureCollection *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_18.Association.Value = '\x02';
  local_18.Index = -1;
  local_18.Name = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UMaterialInstance::SetTextureCollectionParameterValueInternal
            ((UMaterialInstance *)param_1,&local_18,local_res20);
  return;
}

// execSetTextureCollectionParameterValueByInfo @ 147f5a840

void __cdecl
UMaterialInstanceDynamic::execSetTextureCollectionParameterValueByInfo
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FMaterialParameterInfo *pFVar2;
  UTextureCollection *local_res10;
  FMaterialParameterInfo local_18;
  
  local_18.Association.Value = '\x02';
  local_18.Name.ComparisonIndex.Value = 0;
  local_18.Name.Number = 0;
  local_18.Index = -1;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res10 = (UTextureCollection *)0x0;
  pFVar2 = &local_18;
  if ((FMaterialParameterInfo *)param_2->MostRecentPropertyAddress != (FMaterialParameterInfo *)0x0)
  {
    pFVar2 = (FMaterialParameterInfo *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UMaterialInstance::SetTextureCollectionParameterValueInternal
            ((UMaterialInstance *)param_1,pFVar2,local_res10);
  return;
}

// execSetTextureParameterValue @ 147f5a940

void __cdecl
UMaterialInstanceDynamic::execSetTextureParameterValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *this;
  FProperty *pFVar1;
  longlong lVar2;
  UTexture *pUVar3;
  char cVar4;
  uint uVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  longlong lVar8;
  int iVar9;
  int local_res8 [2];
  FName local_res10 [2];
  UTexture *local_res20;
  undefined8 in_stack_ffffffffffffff48;
  undefined4 uVar10;
  longlong local_a8;
  uint local_a0 [3];
  undefined4 local_94;
  undefined1 local_90;
  longlong *local_88;
  FName local_80;
  FMaterialParameterInfo local_78;
  longlong local_68 [4];
  undefined1 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
  local_res10[0].ComparisonIndex.Value = 0;
  local_res10[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20 = (UTexture *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  pUVar3 = local_res20;
  local_78.Association.Value = '\x02';
  local_78.Index = -1;
  local_a0[1] = 0;
  local_94 = 0xffffffff;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_78.Name = local_res10[0];
  local_a0[2] = local_res10[0].Number;
  local_a0[0] = local_res10[0].ComparisonIndex.Value;
  local_90 = 2;
  local_48 = 0xff;
  local_40 = 0xffffffff;
  local_3c = 0;
  cVar4 = (**(code **)(*(longlong *)param_1 + 0x410))
                    (param_1,3,local_a0,local_68,CONCAT44(uVar10,3));
  lVar8 = 0;
  if (cVar4 != '\0') {
    lVar8 = local_68[0];
  }
  if (((pUVar3 != (UTexture *)0x0) && (lVar8 != 0)) &&
     (lVar2 = pUVar3->_padding_, lVar2 != *(longlong *)(lVar8 + 0x18))) {
    this = &param_1[0x12].field_0x10;
    local_a8 = lVar2;
    uVar5 = ::GetTypeHash((FNameEntryId)(uint)lVar2);
    uVar5 = uVar5 + (int)((ulonglong)lVar2 >> 0x20);
    if (*(int *)&param_1[0x12].field_0x18 != *(int *)&param_1[0x13].field_0x1c) {
      puVar7 = *(undefined1 **)(param_1 + 0x14);
      if (*(undefined1 **)(param_1 + 0x14) == (undefined1 *)0x0) {
        puVar7 = &param_1[0x13].field_0x20;
      }
      iVar9 = *(int *)(puVar7 + (ulonglong)(*(int *)&param_1[0x14].field_0x8 - 1U & uVar5) * 4);
      if (iVar9 != -1) {
        do {
          plVar6 = (longlong *)((longlong)iVar9 * 0x20 + *(longlong *)this);
          if (*plVar6 == local_a8) {
            if (plVar6 != (longlong *)0x0) goto LAB_147f5ab1b;
            break;
          }
          iVar9 = (int)plVar6[3];
        } while (iVar9 != -1);
      }
    }
    local_88 = &local_a8;
    TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FName_&&>_>
              ((TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)this,(uint)local_res8,(TKeyInitializer<FName_&&> *)(ulonglong)uVar5,
               (bool *)&local_88);
    plVar6 = (longlong *)((longlong)local_res8[0] * 0x20 + *(longlong *)this);
LAB_147f5ab1b:
    local_80 = *(FName *)(lVar8 + 0x18);
    TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName>
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)(plVar6 + 1),&local_80);
  }
  UMaterialInstance::SetTextureParameterValueInternal((UMaterialInstance *)param_1,&local_78,pUVar3)
  ;
  return;
}

// execSetTextureParameterValueByInfo @ 147f5ab60

void __cdecl
UMaterialInstanceDynamic::execSetTextureParameterValueByInfo
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *this;
  FProperty *pFVar1;
  longlong lVar2;
  UTexture *pUVar3;
  char cVar4;
  uint uVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  longlong lVar8;
  int iVar9;
  FMaterialParameterInfo *pFVar10;
  int local_res8 [2];
  UTexture *local_res10;
  longlong local_res20;
  undefined8 in_stack_ffffffffffffff48;
  undefined4 uVar11;
  longlong *local_a8;
  FName local_a0;
  FMaterialParameterInfo local_98;
  uint local_88 [3];
  int local_7c;
  uchar local_78;
  longlong local_70 [4];
  undefined1 local_50;
  undefined4 local_48;
  undefined1 local_44;
  
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
  local_98.Association.Value = '\x02';
  local_98.Name.ComparisonIndex.Value = 0;
  local_98.Name.Number = 0;
  local_98.Index = -1;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_res10 = (UTexture *)0x0;
  pFVar10 = &local_98;
  if ((FMaterialParameterInfo *)param_2->MostRecentPropertyAddress != (FMaterialParameterInfo *)0x0)
  {
    pFVar10 = (FMaterialParameterInfo *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar3 = local_res10;
  local_88[1] = 0;
  local_50 = 0xff;
  local_48 = 0xffffffff;
  local_44 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_88[0] = (pFVar10->Name).ComparisonIndex.Value;
  local_88[2] = (pFVar10->Name).Number;
  local_7c = pFVar10->Index;
  local_78 = (pFVar10->Association).Value;
  cVar4 = (**(code **)(*(longlong *)param_1 + 0x410))
                    (param_1,3,local_88,local_70,CONCAT44(uVar11,3));
  lVar8 = 0;
  if (cVar4 != '\0') {
    lVar8 = local_70[0];
  }
  if (((pUVar3 != (UTexture *)0x0) && (lVar8 != 0)) &&
     (lVar2 = pUVar3->_padding_, lVar2 != *(longlong *)(lVar8 + 0x18))) {
    this = &param_1[0x12].field_0x10;
    local_res20 = lVar2;
    uVar5 = ::GetTypeHash((FNameEntryId)(uint)lVar2);
    uVar5 = uVar5 + (int)((ulonglong)lVar2 >> 0x20);
    if (*(int *)&param_1[0x12].field_0x18 != *(int *)&param_1[0x13].field_0x1c) {
      puVar7 = *(undefined1 **)(param_1 + 0x14);
      if (*(undefined1 **)(param_1 + 0x14) == (undefined1 *)0x0) {
        puVar7 = &param_1[0x13].field_0x20;
      }
      iVar9 = *(int *)(puVar7 + (ulonglong)(*(int *)&param_1[0x14].field_0x8 - 1U & uVar5) * 4);
      if (iVar9 != -1) {
        do {
          plVar6 = (longlong *)((longlong)iVar9 * 0x20 + *(longlong *)this);
          if (*plVar6 == local_res20) {
            if (plVar6 != (longlong *)0x0) goto LAB_147f5ad4b;
            break;
          }
          iVar9 = (int)plVar6[3];
        } while (iVar9 != -1);
      }
    }
    local_a8 = &local_res20;
    TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FName_&&>_>
              ((TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)this,(uint)local_res8,(TKeyInitializer<FName_&&> *)(ulonglong)uVar5,
               (bool *)&local_a8);
    plVar6 = (longlong *)((longlong)local_res8[0] * 0x20 + *(longlong *)this);
LAB_147f5ad4b:
    local_a0 = *(FName *)(lVar8 + 0x18);
    TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName>
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)(plVar6 + 1),&local_a0);
  }
  UMaterialInstance::SetTextureParameterValueInternal((UMaterialInstance *)param_1,pFVar10,pUVar3);
  return;
}

// execSetVectorParameterValue @ 147f5ad90

void __cdecl
UMaterialInstanceDynamic::execSetVectorParameterValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName local_res10;
  FMaterialParameterInfo local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  FLinearColor_u_0 local_18;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_38.Association.Value = '\x02';
  local_38.Index = -1;
  local_18._0_8_ = local_28;
  local_18._8_8_ = uStack_20;
  local_38.Name = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UMaterialInstance::SetVectorParameterValueInternal
            ((UMaterialInstance *)param_1,&local_38,(FLinearColor *)&local_18._s_0);
  return;
}

// execSetVectorParameterValueByInfo @ 147f5ae80

void __cdecl
UMaterialInstanceDynamic::execSetVectorParameterValueByInfo
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FMaterialParameterInfo *pFVar2;
  FMaterialParameterInfo local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  FLinearColor_u_0 local_18;
  
  local_38.Association.Value = '\x02';
  local_38.Name.ComparisonIndex.Value = 0;
  local_38.Name.Number = 0;
  local_38.Index = -1;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar2 = &local_38;
  if ((FMaterialParameterInfo *)param_2->MostRecentPropertyAddress != (FMaterialParameterInfo *)0x0)
  {
    pFVar2 = (FMaterialParameterInfo *)param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_18._0_8_ = local_28;
  local_18._8_8_ = uStack_20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UMaterialInstance::SetVectorParameterValueInternal
            ((UMaterialInstance *)param_1,pFVar2,(FLinearColor *)&local_18._s_0);
  return;
}

