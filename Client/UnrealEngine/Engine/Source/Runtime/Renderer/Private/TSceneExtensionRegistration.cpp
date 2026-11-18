// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 28

// CreateInstance @ 144841510

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

ISceneExtension * __thiscall
TSceneExtensionRegistration<FFirstPersonSceneExtension>::CreateInstance
          (TSceneExtensionRegistration<FFirstPersonSceneExtension> *this,FScene *param_1)

{
  bool bVar1;
  ISceneExtension *pIVar2;
  EShaderPlatform EVar3;
  
  if (*(int *)&param_1->field_0x8 == 5) {
    EVar3 = SP_NumPlatforms;
  }
  else {
    EVar3 = GRHIGlobals.ShaderPlatformForFeatureLevel[*(int *)&param_1->field_0x8];
  }
  bVar1 = HasFirstPersonGBufferBit(EVar3);
  if (!bVar1) {
    return (ISceneExtension *)0x0;
  }
  pIVar2 = ::operator_new(0x30);
  if (pIVar2 != (ISceneExtension *)0x0) {
    pIVar2->Scene = param_1;
    pIVar2->_padding_ = (longlong)&___7FFirstPersonSceneExtension__6B_;
    pIVar2[1]._padding_ = 0;
    pIVar2[1].Scene = (FScene *)0x0;
    pIVar2[2]._padding_ = 0;
    pIVar2[2].Scene = (FScene *)0x0;
    return pIVar2;
  }
  return (ISceneExtension *)0x0;
}

// ~TSceneExtensionRegistration<FFirstPersonSceneExtension> @ 14485d9b0

void __thiscall
TSceneExtensionRegistration<FFirstPersonSceneExtension>::
~TSceneExtensionRegistration<FFirstPersonSceneExtension>
          (TSceneExtensionRegistration<FFirstPersonSceneExtension> *this)

{
  *(undefined ***)this = &___7ISceneExtensionFactory__6B_;
  return;
}

// CreateInstance @ 144a43a40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ISceneExtension * __thiscall
TSceneExtensionRegistration<RenderCurve::FRenderCurveSceneExtension>::CreateInstance
          (TSceneExtensionRegistration<RenderCurve::FRenderCurveSceneExtension> *this,
          FScene *param_1)

{
  bool bVar1;
  ISceneExtension *pIVar2;
  
  bVar1 = RenderCurve::InternalIsEnabled(param_1);
  if (!bVar1) {
    return (ISceneExtension *)0x0;
  }
  pIVar2 = ::operator_new(0x68);
  if (pIVar2 != (ISceneExtension *)0x0) {
    pIVar2->Scene = param_1;
    pIVar2->_padding_ = (longlong)&___7FRenderCurveSceneExtension_RenderCurve__6B_;
    *(undefined8 *)((longlong)&pIVar2[1]._padding_ + 4) = 0;
    pIVar2[2]._padding_ = 0;
    pIVar2[2].Scene = (FScene *)0x0;
    pIVar2[4]._padding_ = 0;
    *(undefined2 *)&pIVar2[1]._padding_ = 1;
    *(undefined4 *)&pIVar2[4].Scene = 0;
    *(undefined4 *)((longlong)&pIVar2[4].Scene + 4) = 0x80;
    *(undefined4 *)&pIVar2[5]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pIVar2[5]._padding_ + 4) = 0;
    pIVar2[5].Scene = (FScene *)0x0;
    pIVar2[6]._padding_ = 0;
    return pIVar2;
  }
  return (ISceneExtension *)0x0;
}

// ~TSceneExtensionRegistration<RenderCurve::FRenderCurveSceneExtension> @ 144a5abb0

void __thiscall
TSceneExtensionRegistration<RenderCurve::FRenderCurveSceneExtension>::
~TSceneExtensionRegistration<RenderCurve::FRenderCurveSceneExtension>
          (TSceneExtensionRegistration<RenderCurve::FRenderCurveSceneExtension> *this)

{
  *(undefined ***)this = &___7ISceneExtensionFactory__6B_;
  return;
}

// CreateInstance @ 144e5a4d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

ISceneExtension * __thiscall
TSceneExtensionRegistration<FMaterialCacheSceneExtension>::CreateInstance
          (TSceneExtensionRegistration<FMaterialCacheSceneExtension> *this,FScene *param_1)

{
  bool bVar1;
  FStaticShaderPlatform FVar2;
  FMaterialCacheSceneExtension *pFVar3;
  
  FVar2.Platform = FSceneInterface::GetShaderPlatform((FSceneInterface *)param_1);
  bVar1 = IsMaterialCacheEnabled(FVar2);
  if (bVar1) {
    pFVar3 = ::operator_new(0x68);
    if (pFVar3 != (FMaterialCacheSceneExtension *)0x0) {
      pFVar3 = FMaterialCacheSceneExtension::FMaterialCacheSceneExtension(pFVar3,param_1);
      return (ISceneExtension *)pFVar3;
    }
  }
  return (ISceneExtension *)0x0;
}

// ~TSceneExtensionRegistration<FMaterialCacheSceneExtension> @ 144e73ef0

void __thiscall
TSceneExtensionRegistration<FMaterialCacheSceneExtension>::
~TSceneExtensionRegistration<FMaterialCacheSceneExtension>
          (TSceneExtensionRegistration<FMaterialCacheSceneExtension> *this)

{
  *(undefined ***)this = &___7ISceneExtensionFactory__6B_;
  return;
}

// CreateInstance @ 14501c000

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

ISceneExtension * __thiscall
TSceneExtensionRegistration<Nanite::FMaterialsSceneExtension>::CreateInstance
          (TSceneExtensionRegistration<Nanite::FMaterialsSceneExtension> *this,FScene *param_1)

{
  bool bVar1;
  ISceneExtension *pIVar2;
  EShaderPlatform EVar3;
  
  if (*(int *)&param_1->field_0x8 == 5) {
    EVar3 = SP_NumPlatforms;
  }
  else {
    EVar3 = GRHIGlobals.ShaderPlatformForFeatureLevel[*(int *)&param_1->field_0x8];
  }
  bVar1 = DoesRuntimeSupportNanite(EVar3,true,true);
  if (!bVar1) {
    return (ISceneExtension *)0x0;
  }
  pIVar2 = ::operator_new(0x170);
  if (pIVar2 != (ISceneExtension *)0x0) {
    pIVar2->Scene = param_1;
    pIVar2->_padding_ = (longlong)&___7FMaterialsSceneExtension_Nanite__6B_;
    FSpanAllocator::FSpanAllocator((FSpanAllocator *)(pIVar2 + 1),false);
    pIVar2[0xe].Scene = (FScene *)0x0;
    pIVar2[0xf]._padding_ = 0;
    pIVar2[0x10].Scene = (FScene *)0x0;
    *(undefined4 *)&pIVar2[0x11]._padding_ = 0;
    *(undefined4 *)((longlong)&pIVar2[0x11]._padding_ + 4) = 0x80;
    *(undefined4 *)((longlong)&pIVar2[0x11].Scene + 4) = 0;
    *(undefined4 *)&pIVar2[0x11].Scene = 0xffffffff;
    pIVar2[0x12]._padding_ = 0;
    pIVar2[0x12].Scene = (FScene *)0x0;
    pIVar2[0x13]._padding_ = 0;
    pIVar2[0x13].Scene = (FScene *)0x0;
    pIVar2[0x14]._padding_ = 0;
    pIVar2[0x14].Scene = (FScene *)0x0;
    pIVar2[0x15]._padding_ = 0;
    pIVar2[0x15].Scene = (FScene *)0x0;
    pIVar2[0x16]._padding_ = 0;
    pIVar2[0x16].Scene = (FScene *)0x0;
    return pIVar2;
  }
  return (ISceneExtension *)0x0;
}

// CreateInstance @ 14501dc90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

ISceneExtension * __thiscall
TSceneExtensionRegistration<Nanite::FOwnershipVisibilitySceneExtension>::CreateInstance
          (TSceneExtensionRegistration<Nanite::FOwnershipVisibilitySceneExtension> *this,
          FScene *param_1)

{
  bool bVar1;
  ISceneExtension *pIVar2;
  EShaderPlatform EVar3;
  
  if (*(int *)&param_1->field_0x8 == 5) {
    EVar3 = SP_NumPlatforms;
  }
  else {
    EVar3 = GRHIGlobals.ShaderPlatformForFeatureLevel[*(int *)&param_1->field_0x8];
  }
  bVar1 = DoesRuntimeSupportNanite(EVar3,true,true);
  if (!bVar1) {
    return (ISceneExtension *)0x0;
  }
  pIVar2 = ::operator_new(0x20);
  if (pIVar2 != (ISceneExtension *)0x0) {
    pIVar2->Scene = param_1;
    pIVar2->_padding_ = (longlong)&___7FOwnershipVisibilitySceneExtension_Nanite__6B_;
    pIVar2[1]._padding_ = 0;
    pIVar2[1].Scene = (FScene *)0x0;
    return pIVar2;
  }
  return (ISceneExtension *)0x0;
}

// ~TSceneExtensionRegistration<Nanite::FMaterialsSceneExtension> @ 145037c90

void __thiscall
TSceneExtensionRegistration<Nanite::FMaterialsSceneExtension>::
~TSceneExtensionRegistration<Nanite::FMaterialsSceneExtension>
          (TSceneExtensionRegistration<Nanite::FMaterialsSceneExtension> *this)

{
  *(undefined ***)this = &___7ISceneExtensionFactory__6B_;
  return;
}

// ~TSceneExtensionRegistration<Nanite::FOwnershipVisibilitySceneExtension> @ 145037cb0

void __thiscall
TSceneExtensionRegistration<Nanite::FOwnershipVisibilitySceneExtension>::
~TSceneExtensionRegistration<Nanite::FOwnershipVisibilitySceneExtension>
          (TSceneExtensionRegistration<Nanite::FOwnershipVisibilitySceneExtension> *this)

{
  *(undefined ***)this = &___7ISceneExtensionFactory__6B_;
  return;
}

// CreateInstance @ 14546aed0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

ISceneExtension * __thiscall
TSceneExtensionRegistration<FSceneCulling>::CreateInstance
          (TSceneExtensionRegistration<FSceneCulling> *this,FScene *param_1)

{
  bool bVar1;
  FSceneCulling *pFVar2;
  EShaderPlatform EVar3;
  
  if (*(int *)&param_1->field_0x8 == 5) {
    EVar3 = SP_NumPlatforms;
  }
  else {
    EVar3 = GRHIGlobals.ShaderPlatformForFeatureLevel[*(int *)&param_1->field_0x8];
  }
  bVar1 = DoesPlatformSupportNanite(EVar3,true);
  if (bVar1) {
    pFVar2 = ::operator_new(0x578);
    if (pFVar2 != (FSceneCulling *)0x0) {
      pFVar2 = FSceneCulling::FSceneCulling(pFVar2,param_1);
      return (ISceneExtension *)pFVar2;
    }
  }
  return (ISceneExtension *)0x0;
}

// ~TSceneExtensionRegistration<FSceneCulling> @ 145478cb0

void __thiscall
TSceneExtensionRegistration<FSceneCulling>::~TSceneExtensionRegistration<FSceneCulling>
          (TSceneExtensionRegistration<FSceneCulling> *this)

{
  *(undefined ***)this = &___7ISceneExtensionFactory__6B_;
  return;
}

// CreateInstance @ 1455fa830

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ISceneExtension * __thiscall
TSceneExtensionRegistration<FShadowScene>::CreateInstance
          (TSceneExtensionRegistration<FShadowScene> *this,FScene *param_1)

{
  ISceneExtension *pIVar1;
  
  pIVar1 = ::operator_new(0xa8);
  if (pIVar1 != (ISceneExtension *)0x0) {
    pIVar1->Scene = param_1;
    pIVar1->_padding_ = (longlong)&___7FShadowScene__6B_;
    pIVar1[1]._padding_ = 0;
    pIVar1[1].Scene = (FScene *)0x0;
    pIVar1[3]._padding_ = 0;
    *(undefined4 *)&pIVar1[3].Scene = 0;
    *(undefined4 *)((longlong)&pIVar1[3].Scene + 4) = 0x80;
    *(undefined4 *)&pIVar1[4]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pIVar1[4]._padding_ + 4) = 0;
    pIVar1[4].Scene = (FScene *)0x0;
    pIVar1[5]._padding_ = 0;
    pIVar1[6].Scene = (FScene *)0x0;
    *(undefined4 *)&pIVar1[7]._padding_ = 0;
    *(undefined4 *)((longlong)&pIVar1[7]._padding_ + 4) = 0x80;
    pIVar1[7].Scene = (FScene *)0x0;
    pIVar1[8]._padding_ = 0;
    pIVar1[8].Scene = (FScene *)0x0;
    pIVar1[9]._padding_ = 0;
    pIVar1[9].Scene = (FScene *)0x0;
    *(undefined1 *)&pIVar1[10]._padding_ = 0;
    return pIVar1;
  }
  return (ISceneExtension *)0x0;
}

// ~TSceneExtensionRegistration<FShadowScene> @ 14560adc0

void __thiscall
TSceneExtensionRegistration<FShadowScene>::~TSceneExtensionRegistration<FShadowScene>
          (TSceneExtensionRegistration<FShadowScene> *this)

{
  *(undefined ***)this = &___7ISceneExtensionFactory__6B_;
  return;
}

// CreateInstance @ 145651a80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

ISceneExtension * __thiscall
TSceneExtensionRegistration<FSkinningSceneExtension>::CreateInstance
          (TSceneExtensionRegistration<FSkinningSceneExtension> *this,FScene *param_1)

{
  bool bVar1;
  FSkinningSceneExtension *pFVar2;
  EShaderPlatform EVar3;
  
  bVar1 = NaniteSkinnedMeshesSupported();
  if (bVar1) {
    if (*(int *)&param_1->field_0x8 == 5) {
      EVar3 = SP_NumPlatforms;
    }
    else {
      EVar3 = GRHIGlobals.ShaderPlatformForFeatureLevel[*(int *)&param_1->field_0x8];
    }
    bVar1 = DoesRuntimeSupportNanite(EVar3,true,true);
    if (bVar1) {
      pFVar2 = ::operator_new(0x3d0);
      if (pFVar2 != (FSkinningSceneExtension *)0x0) {
        pFVar2 = FSkinningSceneExtension::FSkinningSceneExtension(pFVar2,param_1);
        return (ISceneExtension *)pFVar2;
      }
    }
  }
  return (ISceneExtension *)0x0;
}

// CreateInstance @ 145651c60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

ISceneExtension * __thiscall
TSceneExtensionRegistration<FSkinningTransformProvider>::CreateInstance
          (TSceneExtensionRegistration<FSkinningTransformProvider> *this,FScene *param_1)

{
  bool bVar1;
  ISceneExtension *pIVar2;
  EShaderPlatform EVar3;
  
  bVar1 = NaniteSkinnedMeshesSupported();
  if (bVar1) {
    if (*(int *)&param_1->field_0x8 == 5) {
      EVar3 = SP_NumPlatforms;
    }
    else {
      EVar3 = GRHIGlobals.ShaderPlatformForFeatureLevel[*(int *)&param_1->field_0x8];
    }
    bVar1 = DoesRuntimeSupportNanite(EVar3,true,true);
    if (bVar1) {
      pIVar2 = ::operator_new(0x20);
      if (pIVar2 != (ISceneExtension *)0x0) {
        pIVar2->Scene = param_1;
        pIVar2->_padding_ = (longlong)&___7FSkinningTransformProvider__6B_;
        pIVar2[1]._padding_ = 0;
        pIVar2[1].Scene = (FScene *)0x0;
        return pIVar2;
      }
      return (ISceneExtension *)0x0;
    }
  }
  return (ISceneExtension *)0x0;
}

// CreateInstance @ 145652460

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

ISceneExtension * __thiscall
TSceneExtensionRegistration<FAnimBankTransformProvider>::CreateInstance
          (TSceneExtensionRegistration<FAnimBankTransformProvider> *this,FScene *param_1)

{
  bool bVar1;
  ISceneExtension *pIVar2;
  EShaderPlatform EVar3;
  
  bVar1 = NaniteSkinnedMeshesSupported();
  if (bVar1) {
    if (*(int *)&param_1->field_0x8 == 5) {
      EVar3 = SP_NumPlatforms;
    }
    else {
      EVar3 = GRHIGlobals.ShaderPlatformForFeatureLevel[*(int *)&param_1->field_0x8];
    }
    bVar1 = DoesRuntimeSupportNanite(EVar3,true,true);
    if (bVar1) {
      pIVar2 = ::operator_new(0x160);
      if (pIVar2 != (ISceneExtension *)0x0) {
        pIVar2->Scene = param_1;
        pIVar2->_padding_ = (longlong)&___7FAnimBankTransformProvider__6B_;
        Experimental::RobinHoodHashTable_Private::
        TRobinHoodHashTable<FAnimBankDesc,FAnimBankRecord,FAnimBankDescKeyFuncs,TSizedDefaultAllocator<32>_>
        ::
        TRobinHoodHashTable<FAnimBankDesc,FAnimBankRecord,FAnimBankDescKeyFuncs,TSizedDefaultAllocator<32>_>
                  ((TRobinHoodHashTable<FAnimBankDesc,FAnimBankRecord,FAnimBankDescKeyFuncs,TSizedDefaultAllocator<32>_>
                    *)(pIVar2 + 1));
        FSpanAllocator::FSpanAllocator((FSpanAllocator *)&pIVar2[8].Scene,false);
        return pIVar2;
      }
      return (ISceneExtension *)0x0;
    }
  }
  return (ISceneExtension *)0x0;
}

// ~TSceneExtensionRegistration<FAnimBankTransformProvider> @ 145666d20

void __thiscall
TSceneExtensionRegistration<FAnimBankTransformProvider>::
~TSceneExtensionRegistration<FAnimBankTransformProvider>
          (TSceneExtensionRegistration<FAnimBankTransformProvider> *this)

{
  *(undefined ***)this = &___7ISceneExtensionFactory__6B_;
  return;
}

// ~TSceneExtensionRegistration<FSkinningSceneExtension> @ 145666d40

void __thiscall
TSceneExtensionRegistration<FSkinningSceneExtension>::
~TSceneExtensionRegistration<FSkinningSceneExtension>
          (TSceneExtensionRegistration<FSkinningSceneExtension> *this)

{
  *(undefined ***)this = &___7ISceneExtensionFactory__6B_;
  return;
}

// ~TSceneExtensionRegistration<FSkinningTransformProvider> @ 145666d60

void __thiscall
TSceneExtensionRegistration<FSkinningTransformProvider>::
~TSceneExtensionRegistration<FSkinningTransformProvider>
          (TSceneExtensionRegistration<FSkinningTransformProvider> *this)

{
  *(undefined ***)this = &___7ISceneExtensionFactory__6B_;
  return;
}

// CreateInstance @ 1456bd320

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

ISceneExtension * __thiscall
TSceneExtensionRegistration<FSplineMeshSceneExtension>::CreateInstance
          (TSceneExtensionRegistration<FSplineMeshSceneExtension> *this,FScene *param_1)

{
  bool bVar1;
  ISceneExtension *pIVar2;
  FStaticShaderPlatform FVar3;
  
  if (*(int *)&param_1->field_0x8 == 5) {
    FVar3.Platform = SP_NumPlatforms;
  }
  else {
    FVar3.Platform = GRHIGlobals.ShaderPlatformForFeatureLevel[*(int *)&param_1->field_0x8];
  }
  bVar1 = UseSplineMeshSceneResources(FVar3);
  if (!bVar1) {
    return (ISceneExtension *)0x0;
  }
  pIVar2 = ::operator_new(0x168);
  if (pIVar2 != (ISceneExtension *)0x0) {
    pIVar2->Scene = param_1;
    pIVar2->_padding_ = (longlong)&___7FSplineMeshSceneExtension__6B_;
    pIVar2[1]._padding_ = 0;
    pIVar2[1].Scene = (FScene *)0x0;
    pIVar2[3]._padding_ = 0;
    *(undefined4 *)&pIVar2[3].Scene = 0;
    *(undefined4 *)((longlong)&pIVar2[3].Scene + 4) = 0x80;
    *(undefined4 *)&pIVar2[4]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pIVar2[4]._padding_ + 4) = 0;
    pIVar2[5]._padding_ = 0;
    *(undefined4 *)&pIVar2[5].Scene = 0;
    pIVar2[6]._padding_ = 0;
    pIVar2[6].Scene = (FScene *)0x0;
    FSpanAllocator::FSpanAllocator((FSpanAllocator *)(pIVar2 + 7),false);
    pIVar2[0x14].Scene = (FScene *)0x0;
    pIVar2[0x15]._padding_ = 0;
    pIVar2[0x15].Scene = (FScene *)0x0;
    *(undefined2 *)&pIVar2[0x16]._padding_ = 1;
    return pIVar2;
  }
  return (ISceneExtension *)0x0;
}

// ~TSceneExtensionRegistration<FSplineMeshSceneExtension> @ 1456ddaa0

void __thiscall
TSceneExtensionRegistration<FSplineMeshSceneExtension>::
~TSceneExtensionRegistration<FSplineMeshSceneExtension>
          (TSceneExtensionRegistration<FSplineMeshSceneExtension> *this)

{
  *(undefined ***)this = &___7ISceneExtensionFactory__6B_;
  return;
}

// CreateInstance @ 1457a44e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

ISceneExtension * __thiscall
TSceneExtensionRegistration<FVirtualShadowMapArrayCacheManager>::CreateInstance
          (TSceneExtensionRegistration<FVirtualShadowMapArrayCacheManager> *this,FScene *param_1)

{
  bool bVar1;
  FVirtualShadowMapArrayCacheManager *pFVar2;
  EShaderPlatform EVar3;
  
  if (*(int *)&param_1->field_0x8 == 5) {
    EVar3 = SP_NumPlatforms;
  }
  else {
    EVar3 = GRHIGlobals.ShaderPlatformForFeatureLevel[*(int *)&param_1->field_0x8];
  }
  bVar1 = DoesPlatformSupportVirtualShadowMaps(EVar3);
  if (bVar1) {
    pFVar2 = ::operator_new(0x3f0);
    if (pFVar2 != (FVirtualShadowMapArrayCacheManager *)0x0) {
      pFVar2 = FVirtualShadowMapArrayCacheManager::FVirtualShadowMapArrayCacheManager
                         (pFVar2,param_1);
      return (ISceneExtension *)pFVar2;
    }
  }
  return (ISceneExtension *)0x0;
}

// ~TSceneExtensionRegistration<FVirtualShadowMapArrayCacheManager> @ 1457c3bd0

void __thiscall
TSceneExtensionRegistration<FVirtualShadowMapArrayCacheManager>::
~TSceneExtensionRegistration<FVirtualShadowMapArrayCacheManager>
          (TSceneExtensionRegistration<FVirtualShadowMapArrayCacheManager> *this)

{
  *(undefined ***)this = &___7ISceneExtensionFactory__6B_;
  return;
}

// CreateInstance @ 1458a8750

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

ISceneExtension * __thiscall
TSceneExtensionRegistration<FRuntimeVirtualTextureSceneExtension>::CreateInstance
          (TSceneExtensionRegistration<FRuntimeVirtualTextureSceneExtension> *this,FScene *param_1)

{
  bool bVar1;
  FStaticShaderPlatform FVar2;
  ISceneExtension *pIVar3;
  undefined8 *puVar4;
  
  FVar2.Platform = FSceneInterface::GetShaderPlatform((FSceneInterface *)param_1);
  bVar1 = UseVirtualTexturing(FVar2);
  if (!bVar1) {
    return (ISceneExtension *)0x0;
  }
  pIVar3 = ::operator_new(0x18);
  if (pIVar3 != (ISceneExtension *)0x0) {
    pIVar3->Scene = param_1;
    pIVar3->_padding_ = (longlong)&___7FRuntimeVirtualTextureSceneExtension__6B_;
    puVar4 = ::operator_new(0x50);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[4] = 0;
      *(undefined4 *)(puVar4 + 5) = 0;
      *(undefined4 *)((longlong)puVar4 + 0x2c) = 0x80;
      *(undefined4 *)(puVar4 + 6) = 0xffffffff;
      *(undefined4 *)((longlong)puVar4 + 0x34) = 0;
      puVar4[8] = 0;
      *(undefined4 *)(puVar4 + 9) = 0;
      pIVar3[1]._padding_ = (longlong)puVar4;
      return pIVar3;
    }
    pIVar3[1]._padding_ = 0;
    return pIVar3;
  }
  return (ISceneExtension *)0x0;
}

// CreateInstance @ 1458acac0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

ISceneExtension * __thiscall
TSceneExtensionRegistration<FMeshPaintVirtualTextureSceneExtension>::CreateInstance
          (TSceneExtensionRegistration<FMeshPaintVirtualTextureSceneExtension> *this,FScene *param_1
          )

{
  bool bVar1;
  EShaderPlatform EVar2;
  ISceneExtension *pIVar3;
  
  EVar2 = FSceneInterface::GetShaderPlatform((FSceneInterface *)param_1);
  bVar1 = MeshPaintVirtualTexture::IsSupported(EVar2);
  if (bVar1) {
    pIVar3 = ::operator_new(0x10);
    if (pIVar3 != (ISceneExtension *)0x0) {
      pIVar3->Scene = param_1;
      pIVar3->_padding_ = (longlong)&___7FMeshPaintVirtualTextureSceneExtension__6B_;
      return pIVar3;
    }
  }
  return (ISceneExtension *)0x0;
}

// ~TSceneExtensionRegistration<FMeshPaintVirtualTextureSceneExtension> @ 1458cef40

void __thiscall
TSceneExtensionRegistration<FMeshPaintVirtualTextureSceneExtension>::
~TSceneExtensionRegistration<FMeshPaintVirtualTextureSceneExtension>
          (TSceneExtensionRegistration<FMeshPaintVirtualTextureSceneExtension> *this)

{
  *(undefined ***)this = &___7ISceneExtensionFactory__6B_;
  return;
}

// ~TSceneExtensionRegistration<FRuntimeVirtualTextureSceneExtension> @ 1458cef60

void __thiscall
TSceneExtensionRegistration<FRuntimeVirtualTextureSceneExtension>::
~TSceneExtensionRegistration<FRuntimeVirtualTextureSceneExtension>
          (TSceneExtensionRegistration<FRuntimeVirtualTextureSceneExtension> *this)

{
  *(undefined ***)this = &___7ISceneExtensionFactory__6B_;
  return;
}

