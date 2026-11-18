// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenColorIO
// Functions: 6

// Call @ 14d76dea0

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

FShaderType * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<FOpenColorIOShaderType_&___cdecl(void),FShaderType_&>::Call(void *param_1)

{
  FShaderType *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014d76dea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FShaderType *)(*param_1)();
  return pFVar1;
}

// Call @ 14d76deb0

TOptional<bool> __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<TOptional<bool>_(__cdecl*)(ISceneViewExtension_const_*,FSceneViewExtensionContext_const_&),TOptional<bool>,ISceneViewExtension_const_*,FSceneViewExtensionContext_const_&>
::Call(void *param_1,ISceneViewExtension **param_2,FSceneViewExtensionContext *param_3)

{
  (*(code *)*param_2)(param_1,param_3->_padding_);
  return SUB82(param_1,0);
}

// Call @ 14d76dee0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FOpenColorIOTransformResource::CacheShaders'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  
  lVar1 = *(longlong *)param_1;
  uVar2 = *(undefined8 *)((longlong)param_1 + 8);
  bVar4 = IsInRenderingThread();
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compositing\\OpenColorIO\\Source\\OpenColorIO\\Private\\OpenColorIOShared.cpp"
                       ,0xf2,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(undefined8 *)(lVar1 + 0x40) = uVar2;
  return;
}

// Call @ 14d76df40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FOpenColorIODisplayExtension::SetupView'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  undefined8 uVar3;
  FScriptContainerElement *_Src;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  
  pTVar6 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
  pTVar7 = *(TReferenceControllerBase<1> **)param_1;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
    UNLOCK();
    aVar2 = pTVar6->SharedReferenceCount;
    do {
      pTVar5 = (TReferenceControllerBase<1> *)0x0;
      if (aVar2 == (atomic<int>)0x0) break;
      LOCK();
      aVar4 = pTVar6->SharedReferenceCount;
      bVar8 = aVar2 == aVar4;
      if (bVar8) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      pTVar5 = pTVar6;
      aVar2 = aVar4;
    } while (!bVar8);
    LOCK();
    paVar1 = &pTVar6->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
    }
    if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
      pTVar7 = (TReferenceControllerBase<1> *)0x0;
    }
    pTVar6 = pTVar5;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      uVar3 = *(undefined8 *)((longlong)param_1 + 0x10);
      pTVar5 = pTVar7 + 4;
      pTVar7[3].SharedReferenceCount = (atomic<int>)(int)uVar3;
      pTVar7[3].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar3 >> 0x20);
      if (pTVar5 != (TReferenceControllerBase<1> *)((longlong)param_1 + 0x18)) {
        _Src = (FScriptContainerElement *)
               ((TReferenceControllerBase<1> *)((longlong)param_1 + 0x18))->_padding_;
        aVar2 = *(atomic<int> *)((longlong)param_1 + 0x20);
        pTVar7[4].SharedReferenceCount = aVar2;
        if ((aVar2 == (atomic<int>)0x0) && (pTVar7[4].WeakReferenceCount == (atomic<int>)0x0)) {
          pTVar7[4].WeakReferenceCount = (atomic<int>)0x0;
        }
        else {
          ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,(int)aVar2,(int)pTVar7[4].WeakReferenceCount,(ForAnyElementType *)pTVar5,
                     (int)aVar2,(int *)&pTVar7[4].WeakReferenceCount);
          if (aVar2 != (atomic<int>)0x0) {
            memcpy((FScriptContainerElement *)pTVar5->_padding_,_Src,(longlong)(int)aVar2 << 3);
          }
        }
      }
      ::FString::operator=((FString *)(pTVar7 + 5),(FString *)((longlong)param_1 + 0x28));
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

// Call @ 14d76df50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FOpenColorIOTransformResource::ReleaseShaderMap'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  lVar1 = *(longlong *)param_1;
  bVar3 = IsInRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compositing\\OpenColorIO\\Source\\OpenColorIO\\Private\\OpenColorIOShared.cpp"
                       ,0xf2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(undefined8 *)(lVar1 + 0x40) = 0;
  return;
}

// Call @ 14d76dfa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERDGBuilderFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FOpenColorIORendering::ApplyColorTransform'::__l2::<lambda_6>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  int iVar1;
  Type TVar2;
  void *pvVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  TRefCountPtr<IPooledRenderTarget> TVar7;
  FRDGTexture *pFVar8;
  FRDGTexture *pFVar9;
  longlong lVar10;
  undefined1 auStackY_8d8 [32];
  undefined1 auStack_898 [16];
  longlong lStack_888;
  FOpenColorIORenderPassResources FStack_878;
  undefined1 auStack_850 [16];
  longlong lStack_840;
  longlong lStack_838;
  FScreenPassRenderTarget FStack_830;
  FRDGBuilder FStack_808;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_8d8;
  auStack_898._0_8_ = L"";
  auStack_898._8_8_ = (FScriptContainerElement *)0x0;
  lStack_888 = 0;
  FRDGBuilder::FRDGBuilder
            (&FStack_808,param_2,(FRDGEventName *)auStack_898,None,GMaxRHIShaderPlatform);
  TVar7 = CreateRenderTarget((FRHITexture *)auStack_850,
                             *(wchar_t **)(*(longlong *)((longlong)param_1 + 8) + 0x20));
  pFVar8 = FRDGBuilder::RegisterExternalTexture
                     (&FStack_808,(TRefCountPtr<IPooledRenderTarget> *)TVar7.Reference,None);
  if ((longlong *)auStack_850._0_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)auStack_850._0_8_ + 0x38))();
  }
  TVar7 = CreateRenderTarget((FRHITexture *)auStack_898,
                             *(wchar_t **)(*(longlong *)((longlong)param_1 + 0x10) + 0x20));
  pFVar9 = FRDGBuilder::RegisterExternalTexture
                     (&FStack_808,(TRefCountPtr<IPooledRenderTarget> *)TVar7.Reference,None);
  if ((wchar_t *)auStack_898._0_8_ != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)auStack_898._0_8_ + 0x38))();
  }
  iVar5 = (**(code **)(**(longlong **)((longlong)param_1 + 0x10) + 0x38))();
  iVar6 = (**(code **)(**(longlong **)((longlong)param_1 + 0x10) + 0x30))();
  FStack_830._padding_ = (longlong)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  FStack_830._padding_ = CONCAT44(iVar5,iVar6);
  if (pFVar9 != (FRDGTexture *)0x0) {
    iVar1 = (pFVar9->VisualizeTextureExtent).field0_0x0._s_0.X;
    if (iVar6 < iVar1) {
      iVar6 = iVar1;
    }
    iVar1 = (pFVar9->VisualizeTextureExtent).field0_0x0._s_0.Y;
    (pFVar9->VisualizeTextureExtent).field0_0x0._s_0.X = iVar6;
    if (iVar5 < iVar1) {
      iVar5 = iVar1;
    }
    (pFVar9->VisualizeTextureExtent).field0_0x0._s_0.Y = iVar5;
  }
  FStack_878.TextureResources.ArrayNum = *(int *)((longlong)param_1 + 0x28);
  lVar10 = (longlong)FStack_878.TextureResources.ArrayNum;
  FStack_878.ShaderResource = *(FOpenColorIOTransformResource **)((longlong)param_1 + 0x18);
  pvVar3 = *(void **)((longlong)param_1 + 0x20);
  FStack_830.LoadAction = EClear;
  FStack_878.TextureResources.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_830._padding_ = (longlong)pFVar9;
  if (FStack_878.TextureResources.ArrayNum == 0) {
    FStack_878.TextureResources.ArrayMax = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,FStack_878.TextureResources.ArrayNum,0,
               &FStack_878.TextureResources.AllocatorInstance,FStack_878.TextureResources.ArrayNum,
               &FStack_878.TextureResources.ArrayMax);
    memcpy(FStack_878.TextureResources.AllocatorInstance.Data,pvVar3,lVar10 << 3);
  }
  FStack_878.TransformName.Data.ArrayNum = *(int *)((longlong)param_1 + 0x38);
  lVar10 = (longlong)FStack_878.TransformName.Data.ArrayNum;
  pvVar3 = *(void **)((longlong)param_1 + 0x30);
  FStack_878.TransformName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (FStack_878.TransformName.Data.ArrayNum == 0) {
    FStack_878.TransformName.Data.ArrayMax = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,FStack_878.TransformName.Data.ArrayNum,0,
               (ForAnyElementType *)&FStack_878.TransformName,FStack_878.TransformName.Data.ArrayNum
               ,&FStack_878.TransformName.Data.ArrayMax);
    memcpy(FStack_878.TransformName.Data.AllocatorInstance.Data,pvVar3,lVar10 * 2);
  }
  lStack_840 = 0;
  lStack_838 = 0;
  if (pFVar8 != (FRDGTexture *)0x0) {
    lStack_838 = *(longlong *)&(pFVar8->Desc).field_0x24;
  }
  TVar2 = *(Type *)param_1;
  auStack_898._4_4_ = 0xffffffff;
  auStack_898._0_4_ = GMaxRHIFeatureLevel;
  auStack_898._8_4_ = 1;
  auStack_850._8_8_ = pFVar8;
  bVar4 = IsHMDHiddenAreaMaskActive();
  auStack_898[0xc] = bVar4;
  FOpenColorIORendering::AddPass_RenderThread
            (&FStack_808,(FScreenPassViewInfo *)auStack_898,TVar2,
             (FScreenPassTexture *)(auStack_850 + 8),&FStack_830,&FStack_878,__real_3f800000,None);
  if (FStack_878.TransformName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_878.TransformName.Data.AllocatorInstance.Data);
  }
  if (FStack_878.TextureResources.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_878.TextureResources.AllocatorInstance.Data);
  }
  FRDGBuilder::Execute(&FStack_808);
  FRDGBuilder::~FRDGBuilder(&FStack_808);
  return;
}

