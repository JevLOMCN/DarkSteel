// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 23

// StaticClass @ 1476db330

UClass * __cdecl UCanvasRenderTarget2D::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCanvasRenderTarget2D.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CanvasRenderTarget2D",
               &Z_Registration_Info_UClass_UCanvasRenderTarget2D.InnerSingleton,
               StaticRegisterNativesUCanvasRenderTarget2D,0x1a8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCanvasRenderTarget2D>,
               InternalVTableHelperCtorCaller<UCanvasRenderTarget2D>,local_res8,
               UTextureRenderTarget2D::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCanvasRenderTarget2D.InnerSingleton;
}

// UCanvasRenderTarget2D @ 1476e82e0

UCanvasRenderTarget2D * __thiscall
UCanvasRenderTarget2D::UCanvasRenderTarget2D(UCanvasRenderTarget2D *this,FVTableHelper *param_1)

{
  UTextureRenderTarget2D::UTextureRenderTarget2D((UTextureRenderTarget2D *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  *(undefined8 *)&this->OnCanvasRenderTargetUpdate = 0;
  *(undefined8 *)&(this->OnCanvasRenderTargetUpdate).field_0x8 = 0;
  *(undefined8 *)&(this->OnCanvasRenderTargetUpdate).field_0x10 = 0;
  (this->World).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UCanvasRenderTarget2D @ 1476e8350

UCanvasRenderTarget2D * __thiscall
UCanvasRenderTarget2D::UCanvasRenderTarget2D
          (UCanvasRenderTarget2D *this,FObjectInitializer *param_1)

{
  uint *puVar1;
  undefined8 local_res8 [4];
  
  UTextureRenderTarget2D::UTextureRenderTarget2D((UTextureRenderTarget2D *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  *(undefined8 *)&this->OnCanvasRenderTargetUpdate = 0;
  *(undefined8 *)&(this->OnCanvasRenderTargetUpdate).field_0x8 = 0;
  *(undefined8 *)&(this->OnCanvasRenderTargetUpdate).field_0x10 = 0;
  (this->World).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->World).WeakPtr,(FObjectPtr)local_res8);
  puVar1 = (uint *)((longlong)&this->_padding_ + 4);
  *puVar1 = *puVar1 & 0xfffffffe;
  puVar1 = (uint *)((longlong)&this->_padding_ + 4);
  *puVar1 = *puVar1 | 2;
  this->SampleCount = RTSC_1;
  this->bShouldClearRenderTargetOnReceiveUpdate = true;
  return this;
}

// ~UCanvasRenderTarget2D @ 1476e9140

void __thiscall UCanvasRenderTarget2D::~UCanvasRenderTarget2D(UCanvasRenderTarget2D *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  pvVar1 = *(void **)&(this->OnCanvasRenderTargetUpdate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCanvasRenderTargetUpdate);
  UTextureRenderTarget2D::~UTextureRenderTarget2D((UTextureRenderTarget2D *)this);
  return;
}

// operator() @ 1476e97f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`UCanvasRenderTarget2D::RepaintCanvas'::__l8::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  code *pcVar1;
  bool bVar2;
  byte bVar3;
  FRHITransitionInfo_u_8 *pFVar4;
  longlong *plVar5;
  IRHICommandContext *pIVar6;
  undefined8 *puVar7;
  undefined1 auStack_188 [32];
  TArrayView<FRHITransitionInfo_const_,int> local_168;
  FRHITransitionInfo local_158;
  FRHIRenderPassInfo local_128;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_188;
  pFVar4 = (FRHITransitionInfo_u_8 *)(**(code **)(*(longlong *)(*(longlong *)this + 0x60) + 0x10))()
  ;
  local_168.ArrayNum = 1;
  local_158.field1_0x8 = *pFVar4;
  local_158._padding_._4_2_ = 0xffff;
  local_168.DataPtr = &local_158;
  local_158._padding_._0_4_ = 0xffffffff;
  local_158.Type = Texture;
  local_158.AccessBefore = None;
  local_158.AccessAfter = RTV;
  local_158.Flags = None;
  local_158.CommitInfo.bIsSet = false;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_168,None);
  if (*(char *)((longlong)this + 8) != '\0') {
    plVar5 = (longlong *)(**(code **)(*(longlong *)(*(longlong *)this + 0x60) + 0x10))();
    local_128.ColorRenderTargets.Elements[0].RenderTarget = (FRHITexture *)*plVar5;
    local_128.ColorRenderTargets.Elements[1].RenderTarget = (FRHITexture *)0x0;
    local_128.ColorRenderTargets.Elements[1].ResolveTarget = (FRHITexture *)0x0;
    local_128.ColorRenderTargets.Elements[1].ArraySlice = -1;
    local_128.ColorRenderTargets.Elements[1].MipIndex = '\0';
    local_128.ColorRenderTargets.Elements[1].Action = DontLoad_DontStore;
    local_128.ColorRenderTargets.Elements[2].RenderTarget = (FRHITexture *)0x0;
    local_128.ColorRenderTargets.Elements[2].ResolveTarget = (FRHITexture *)0x0;
    local_128.ColorRenderTargets.Elements[2].ArraySlice = -1;
    local_128.ColorRenderTargets.Elements[2].MipIndex = '\0';
    local_128.ColorRenderTargets.Elements[2].Action = DontLoad_DontStore;
    local_128.ColorRenderTargets.Elements[3].RenderTarget = (FRHITexture *)0x0;
    local_128.ColorRenderTargets.Elements[3].ResolveTarget = (FRHITexture *)0x0;
    local_128.ColorRenderTargets.Elements[3].ArraySlice = -1;
    local_128.ColorRenderTargets.Elements[3].MipIndex = '\0';
    local_128.ColorRenderTargets.Elements[3].Action = DontLoad_DontStore;
    local_128.ColorRenderTargets.Elements[4].RenderTarget = (FRHITexture *)0x0;
    local_128.ColorRenderTargets.Elements[4].ResolveTarget = (FRHITexture *)0x0;
    local_128.ColorRenderTargets.Elements[4].ArraySlice = -1;
    local_128.ColorRenderTargets.Elements[4].MipIndex = '\0';
    local_128.ColorRenderTargets.Elements[4].Action = DontLoad_DontStore;
    local_128.ColorRenderTargets.Elements[5].RenderTarget = (FRHITexture *)0x0;
    local_128.ColorRenderTargets.Elements[5].ResolveTarget = (FRHITexture *)0x0;
    local_128.ColorRenderTargets.Elements[5].ArraySlice = -1;
    local_128.ColorRenderTargets.Elements[5].MipIndex = '\0';
    local_128.ColorRenderTargets.Elements[5].Action = DontLoad_DontStore;
    local_128.ColorRenderTargets.Elements[6].RenderTarget = (FRHITexture *)0x0;
    local_128.ColorRenderTargets.Elements[6].ResolveTarget = (FRHITexture *)0x0;
    local_128.ColorRenderTargets.Elements[6].ArraySlice = -1;
    local_128.ColorRenderTargets.Elements[6].MipIndex = '\0';
    local_128.ColorRenderTargets.Elements[6].Action = DontLoad_DontStore;
    local_128.ColorRenderTargets.Elements[7].RenderTarget = (FRHITexture *)0x0;
    local_128.ColorRenderTargets.Elements[7].ResolveTarget = (FRHITexture *)0x0;
    local_128.ColorRenderTargets.Elements[7].ArraySlice = -1;
    local_128.ColorRenderTargets.Elements[7].MipIndex = '\0';
    local_128.ColorRenderTargets.Elements[7].Action = DontLoad_DontStore;
    local_128.DepthStencilRenderTarget.DepthStencilTarget = (FRHITexture *)0x0;
    local_128.DepthStencilRenderTarget.ResolveTarget = (FRHITexture *)0x0;
    local_128.DepthStencilRenderTarget.Action = DontLoad_DontStore;
    local_128.DepthStencilRenderTarget.ExclusiveDepthStencil.Value = DepthNop;
    local_128.ResolveRect.X1 = -1;
    local_128.ResolveRect.Y1 = -1;
    local_128.ResolveRect.X2 = -1;
    local_128.ResolveRect.Y2 = -1;
    local_128.ShadingRateTexture.Reference = (FRHITexture *)0x0;
    local_128.ShadingRateTextureCombiner = VRSRB_Passthrough;
    local_128.NopAccess = None;
    local_128.NumOcclusionQueries = 0;
    local_128.bOcclusionQueries = false;
    local_128.MultiViewCount = '\0';
    local_128.SubpassHint = None;
    if (local_128.ColorRenderTargets.Elements[0].RenderTarget == (FRHITexture *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ColorRT",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                         ,0x14b0,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_128.ColorRenderTargets.Elements[0].ResolveTarget = (FRHITexture *)0x0;
    local_128.ColorRenderTargets.Elements[0].ArraySlice = -1;
    local_128.ColorRenderTargets.Elements[0].MipIndex = '\0';
    local_128.ColorRenderTargets.Elements[0].Action = Clear_Store;
    FRHICommandList::BeginRenderPass((FRHICommandList *)param_1,&local_128,L"ClearUCanvas");
    if ((param_1->field_0x29b & 2) == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInsideRenderPass()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x10c5,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((param_1->field_0x29b & 4) != 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsInsideComputePass()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x10c6,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    bVar3 = param_1->field_0x29b;
    if ((bVar3 & 8) != 0) {
      (**(code **)(GDynamicRHI->_padding_ + 0x270))(GDynamicRHI,param_1,1);
      param_1->field_0x29b = param_1->field_0x29b & 0xf7;
      bVar3 = param_1->field_0x29b;
    }
    if ((GRHICommandList.bLatchedBypass == false) || ((bVar3 & 0x20) == 0)) {
      puVar7 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x10,8);
      *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
      **(undefined8 **)&param_1->field_0x30 = puVar7;
      *(undefined8 **)&param_1->field_0x30 = puVar7 + 1;
      puVar7[1] = 0;
      *puVar7 = &___7FRHICommandEndRenderPass__6B_;
    }
    else {
      pIVar6 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_1);
      (**(code **)(pIVar6->_padding_ + 0x250))(pIVar6);
    }
    param_1->field_0x29b = param_1->field_0x29b & 0xfd;
    *(undefined2 *)&param_1->field_0x298 = 0;
    if (local_128.ShadingRateTexture.Reference != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)local_128.ShadingRateTexture.Reference);
    }
  }
  return;
}

// CreateCanvasRenderTarget2D @ 1476fa620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UCanvasRenderTarget2D * __cdecl
UCanvasRenderTarget2D::CreateCanvasRenderTarget2D
          (UObject *param_1,TSubclassOf<UCanvasRenderTarget2D> param_2,int param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  FName FVar4;
  FName FVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  UPackage *pUVar8;
  UCanvasRenderTarget2D *this;
  longlong *plVar9;
  undefined1 auStack_f8 [32];
  FName local_d8;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if ((((0 < param_3) && (0 < param_4)) &&
      (lVar2 = *(longlong *)param_2.Class.field0_0x0, lVar2 != 0)) &&
     (pUVar6 = StaticClass(), pUVar6 != (UClass *)0x0)) {
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (lVar2 = *(longlong *)param_2.Class.field0_0x0, lVar2 != 0)) {
      pUVar6 = (UClass *)0x0;
      local_d8.ComparisonIndex.Value = 0;
      local_d8.Number = 0;
      pUVar7 = StaticClass();
      if (pUVar7 != (UClass *)0x0) {
        iVar1 = (int)pUVar7->_padding_;
        if ((*(int *)(lVar2 + 0x38) < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar7->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          pUVar6 = *(UClass **)param_2.Class.field0_0x0;
        }
      }
      pUVar8 = GetTransientPackage();
      FVar4 = local_d8;
      if (local_d8 == (FName)0x0) {
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)pUVar8,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
      }
      pUVar7 = StaticClass();
      CheckIsClassChildOf_Internal(pUVar7,pUVar6);
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_c8,pUVar6);
      FVar5 = local_d8;
      local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
      local_c8._56_8_ = (UPackage *)0x0;
      local_d8.ComparisonIndex = FVar4.ComparisonIndex.Value;
      local_d8.Number = FVar4.Number;
      local_c8._16_4_ = local_d8.ComparisonIndex.Value;
      local_c8._20_4_ = local_d8.Number;
      local_c8._24_4_ = RF_NoFlags;
      local_c8._40_8_ = (UObject *)0x0;
      local_c8[0x20] = false;
      local_d8 = FVar5;
      local_c8._8_8_ = pUVar8;
      this = (UCanvasRenderTarget2D *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
      if (local_c8._64_8_ != 0) {
        plVar9 = (longlong *)(local_c8 + 0x50);
        if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
          plVar9 = (longlong *)local_c8._104_8_;
        }
        (**(code **)(*plVar9 + 0x10))();
      }
      if (this != (UCanvasRenderTarget2D *)0x0) {
        local_d8 = (FName)UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_d8 != (FName)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_d8);
        }
        FWeakObjectPtr::operator=(&(this->World).WeakPtr,(FObjectPtr)&local_d8);
        UTextureRenderTarget2D::InitAutoFormat((UTextureRenderTarget2D *)this,param_3,param_4);
        return this;
      }
    }
  }
  return (UCanvasRenderTarget2D *)0x0;
}

// FastUpdateResource @ 147703d50

void __thiscall UCanvasRenderTarget2D::FastUpdateResource(UCanvasRenderTarget2D *this)

{
  bool bVar1;
  FTextureResource *pFVar2;
  
  pFVar2 = UTexture::GetResource((UTexture *)this);
  if (pFVar2 == (FTextureResource *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147703d6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x328))();
    return;
  }
  bVar1 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (!bVar1) {
    RepaintCanvas(this);
    return;
  }
  return;
}

// GetPrivateStaticClass @ 14770a070

UClass * __cdecl UCanvasRenderTarget2D::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCanvasRenderTarget2D.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CanvasRenderTarget2D",
               &Z_Registration_Info_UClass_UCanvasRenderTarget2D.InnerSingleton,
               StaticRegisterNativesUCanvasRenderTarget2D,0x1a8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCanvasRenderTarget2D>,
               InternalVTableHelperCtorCaller<UCanvasRenderTarget2D>,local_res8,
               UTextureRenderTarget2D::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCanvasRenderTarget2D.InnerSingleton;
}

// GetSampleCount @ 14770a940

ETextureRenderTargetSampleCount __thiscall
UCanvasRenderTarget2D::GetSampleCount(UCanvasRenderTarget2D *this)

{
  return this->SampleCount;
}

// GetSize @ 14770ab10

void __thiscall
UCanvasRenderTarget2D::GetSize(UCanvasRenderTarget2D *this,int *param_1,int *param_2)

{
  float fVar1;
  
  fVar1 = (float)(**(code **)(this->_padding_ + 0x368))();
  *param_1 = (int)fVar1;
  fVar1 = (float)(**(code **)(this->_padding_ + 0x370))(this);
  *param_2 = (int)fVar1;
  return;
}

// GetWorld @ 14770b1b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall UCanvasRenderTarget2D::GetWorld(UCanvasRenderTarget2D *this)

{
  UWorld *pUVar1;
  
  pUVar1 = (UWorld *)FWeakObjectPtr::Get(&(this->World).WeakPtr);
  return pUVar1;
}

// OnSampleCountChanged @ 14771d140

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UCanvasRenderTarget2D::OnSampleCountChanged(UCanvasRenderTarget2D *this)

{
  uint *puVar1;
  byte *pbVar2;
  ETextureRenderTargetSampleCount EVar3;
  uint uVar4;
  
  EVar3 = this->SampleCount;
  puVar1 = (uint *)((longlong)&this->_padding_ + 4);
  *puVar1 = *puVar1 & 0xfffffffd;
  uVar4 = 0;
  if (EVar3 == RTSC_1) {
    uVar4 = 2;
  }
  puVar1 = (uint *)((longlong)&this->_padding_ + 4);
  *puVar1 = *puVar1 | uVar4;
  if (((this->_padding_ & 0x200000000) != 0) && (EVar3 != RTSC_1)) {
    if (2 < (byte)LogTexture._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTexture);
    }
    pbVar2 = (byte *)((longlong)&this->_padding_ + 4);
    *pbVar2 = *pbVar2 & 0xfd;
  }
  return;
}

// ReceiveUpdate @ 147722b60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UCanvasRenderTarget2D::ReceiveUpdate
          (UCanvasRenderTarget2D *this,UCanvas *param_1,int param_2,int param_3)

{
  UFunction *pUVar1;
  UCanvas *local_18;
  int local_10;
  int local_c;
  
  local_18 = param_1;
  local_10 = param_2;
  local_c = param_3;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UCanvasRenderTarget2D_ReceiveUpdate);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_18);
  return;
}

// RepaintCanvas @ 147723f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UCanvasRenderTarget2D::RepaintCanvas(UCanvasRenderTarget2D *this)

{
  int iVar1;
  FCommandList *pFVar2;
  code *pcVar3;
  FName FVar4;
  FName FVar5;
  bool bVar6;
  uint uVar7;
  UPackage *pUVar8;
  UClass *pUVar9;
  UCanvas *this_00;
  FUObjectItem *this_01;
  UObject *pUVar10;
  FTextureRenderTargetResource *pFVar11;
  FGameTime *pFVar12;
  FRenderCommandList *this_02;
  FRenderCommandTag *pFVar13;
  UFunction *pUVar14;
  longlong *plVar15;
  undefined ***pppuVar16;
  uint uVar17;
  FRenderTarget *pFVar18;
  Type TVar19;
  ulonglong uVar20;
  float fVar21;
  float fVar22;
  undefined1 auStackY_2d8 [32];
  UCanvas *local_2a8;
  int local_2a0;
  int local_29c;
  UCanvas *local_298;
  int local_290;
  int local_28c;
  undefined4 local_27f;
  undefined2 local_27b;
  undefined1 local_279;
  FReadAccessScope local_278;
  FGameTime local_260;
  undefined1 local_248 [128];
  code *local_1c8 [2];
  undefined **local_1b8;
  FTextureRenderTargetResource *pFStack_1b0;
  undefined1 local_1a8;
  undefined4 uStack_1a7;
  undefined2 uStack_1a3;
  undefined1 uStack_1a1;
  undefined ***local_1a0;
  undefined1 local_198 [16];
  undefined **local_188;
  FTextureRenderTargetResource *pFStack_180;
  undefined8 local_178;
  undefined ***local_170;
  byte local_168;
  FCanvas local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&CanvasName,L"CanvasRenderTarget2DCanvas");
    _Init_thread_footer(&::_TSS0);
  }
  FVar4 = CanvasName;
  pUVar8 = GetTransientPackage();
  pUVar9 = Z_Construct_UClass_UCanvas_NoRegister();
  this_00 = (UCanvas *)StaticFindObjectFast(pUVar9,(UObject *)pUVar8,FVar4,None,RF_NoFlags,Borrowed)
  ;
  FVar4 = CanvasName;
  if (this_00 == (UCanvas *)0x0) {
    pUVar8 = GetTransientPackage();
    if (FVar4 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)pUVar8,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar9 = Z_Construct_UClass_UCanvas_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_248,pUVar9);
    FVar5 = CanvasName;
    local_248._48_8_ = (FObjectInstancingGraph *)0x0;
    local_248._56_8_ = (UPackage *)0x0;
    CanvasName.ComparisonIndex = FVar4.ComparisonIndex.Value;
    CanvasName.Number = FVar4.Number;
    local_248._16_4_ = CanvasName.ComparisonIndex.Value;
    local_248._20_4_ = CanvasName.Number;
    local_248._24_4_ = RF_NoFlags;
    local_248._40_8_ = (UObject *)0x0;
    local_248[0x20] = false;
    CanvasName = FVar5;
    local_248._8_8_ = pUVar8;
    this_00 = (UCanvas *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_248);
    if (local_248._64_8_ != 0) {
      plVar15 = (longlong *)(local_248 + 0x50);
      if ((longlong *)local_248._104_8_ != (longlong *)0x0) {
        plVar15 = (longlong *)local_248._104_8_;
      }
      (**(code **)(*plVar15 + 0x10))();
    }
    this_01 = FUObjectArray::IndexToObject
                        (&GUObjectArray,*(int *)((longlong)&this_00->_padding_ + 4));
    FUObjectItem::SetRootFlags(this_01,RootSet);
  }
  pUVar10 = FWeakObjectPtr::Get(&(this->World).WeakPtr);
  TVar19 = GMaxRHIFeatureLevel;
  if (pUVar10 != (UObject *)0x0) {
    pUVar10 = FWeakObjectPtr::Get(&(this->World).WeakPtr);
    TVar19 = (uint)(byte)pUVar10[9].field_0x20;
  }
  pFVar11 = UTextureRenderTarget::GameThread_GetRenderTargetResource((UTextureRenderTarget *)this);
  pFVar12 = FGameTime::GetTimeSinceAppStart(&local_260);
  pFVar18 = (FRenderTarget *)&pFVar11->_padding_;
  if (pFVar11 == (FTextureRenderTargetResource *)0x0) {
    pFVar18 = (FRenderTarget *)0x0;
  }
  FCanvas::FCanvas(&local_158,pFVar18,(FHitProxyConsumer *)0x0,pFVar12,TVar19,__real_3f800000);
  fVar21 = (float)(**(code **)(this->_padding_ + 0x370))(this);
  fVar22 = (float)(**(code **)(this->_padding_ + 0x368))(this);
  UCanvas::Init(this_00,(int)fVar22,(int)fVar21,(FSceneView *)0x0,&local_158);
  if (pFVar11 != (FTextureRenderTargetResource *)0x0) {
    local_1a0 = (undefined ***)0x0;
    local_1b8 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`UCanvasRenderTarget2D::RepaintCanvas'::`8'::<lambda_1>,1,0>
                 ::_vftable_;
    local_1a8 = this->bShouldClearRenderTargetOnReceiveUpdate;
    uStack_1a7 = local_27f;
    uStack_1a3 = local_27b;
    uStack_1a1 = local_279;
    local_1c8[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`UCanvasRenderTarget2D::RepaintCanvas'::__l8::<lambda_1>,void,FRHICommandListImmediate_&>
                   ::Call;
    pFStack_1b0 = pFVar11;
    this_02 = FRenderCommandList::GetInstanceTLS();
    if (this_02 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UCanvasRenderTarget2D::RepaintCanvas_::__l8::TSTR_CanvasRenderTargetMakeCurrentCommand140>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_1c8);
    }
    else {
      if (this_02->bInitialized == 0) {
        FRenderCommandList::Init(this_02);
      }
      iVar1 = (this_02->CommandLists).ArrayNum;
      uVar17 = iVar1 - 1;
      uVar7 = 0;
      if ((int)uVar17 < iVar1) {
        uVar7 = ~uVar17 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar1 = (this_02->CommandLists).ArrayNum;
      local_178._1_4_ = uStack_1a7;
      local_178._0_1_ = local_1a8;
      local_178._5_2_ = uStack_1a3;
      local_178._7_1_ = uStack_1a1;
      local_188 = local_1b8;
      pFStack_180 = pFStack_1b0;
      local_168 = 2;
      pFVar2 = (this_02->CommandLists).AllocatorInstance.Data;
      local_198._0_8_ = local_1c8[0];
      local_170 = local_1a0;
      local_1c8[0] = (code *)0x0;
      pFVar13 = (FRenderCommandTag *)
                TRenderCommandTag<`UCanvasRenderTarget2D::RepaintCanvas'::__l8::TSTR_CanvasRenderTargetMakeCurrentCommand140>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (pFVar2 + (iVar1 + -1),
                 (TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  *)local_198,pFVar13);
      uVar20 = (ulonglong)local_168;
      if ((2 < uVar20) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar20] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_198._0_8_ != (code *)0x0) {
          pppuVar16 = (undefined ***)(local_198 + 0x10);
          if (local_170 != (undefined ***)0x0) {
            pppuVar16 = local_170;
          }
          (*(code *)(*pppuVar16)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar20])(local_198);
      }
    }
    if (local_1c8[0] != (code *)0x0) {
      pppuVar16 = &local_1b8;
      if (local_1a0 != (undefined ***)0x0) {
        pppuVar16 = local_1a0;
      }
      (*(code *)(*pppuVar16)[2])();
    }
  }
  if (((uint)this->_padding_ >> 0x1e & 1) == 0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnCanvasRenderTargetUpdate,&local_278);
    iVar1 = *(int *)&(this->OnCanvasRenderTargetUpdate).field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_278);
    if (0 < iVar1) {
      fVar21 = (float)(**(code **)(this->_padding_ + 0x370))(this);
      local_2a8 = this_00;
      fVar22 = (float)(**(code **)(this->_padding_ + 0x368))(this);
      local_2a0 = (int)fVar22;
      local_29c = (int)fVar21;
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                 &this->OnCanvasRenderTargetUpdate,&local_2a8);
    }
  }
  fVar21 = (float)(**(code **)(this->_padding_ + 0x370))(this);
  local_298 = this_00;
  fVar22 = (float)(**(code **)(this->_padding_ + 0x368))(this);
  local_290 = (int)fVar22;
  local_28c = (int)fVar21;
  pUVar14 = UObject::FindFunctionChecked((UObject *)this,NAME_UCanvasRenderTarget2D_ReceiveUpdate);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar14,&local_298);
  this_00->Canvas = (FCanvas *)0x0;
  if (pFVar11 != (FTextureRenderTargetResource *)0x0) {
    FCanvas::Flush_GameThread(&local_158,false);
  }
  UTextureRenderTarget2D::UpdateResourceImmediate((UTextureRenderTarget2D *)this,false);
  FCanvas::~FCanvas(&local_158);
  return;
}

// SetSampleCount @ 147729700

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCanvasRenderTarget2D::SetSampleCount
          (UCanvasRenderTarget2D *this,ETextureRenderTargetSampleCount param_1)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  
  if (this->SampleCount != param_1) {
    puVar1 = (uint *)((longlong)&this->_padding_ + 4);
    *puVar1 = *puVar1 & 0xfffffffd;
    this->SampleCount = param_1;
    uVar3 = 0;
    if (param_1 == RTSC_1) {
      uVar3 = 2;
    }
    puVar1 = (uint *)((longlong)&this->_padding_ + 4);
    *puVar1 = *puVar1 | uVar3;
    if (((this->_padding_ & 0x200000000) != 0) && (param_1 != RTSC_1)) {
      if (2 < (byte)LogTexture._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTexture);
      }
      pbVar2 = (byte *)((longlong)&this->_padding_ + 4);
      *pbVar2 = *pbVar2 & 0xfd;
    }
  }
  return;
}

// StaticRegisterNativesUCanvasRenderTarget2D @ 14772be80

void __cdecl UCanvasRenderTarget2D::StaticRegisterNativesUCanvasRenderTarget2D(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_UCanvasRenderTarget2D_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateResource @ 147732460

void __thiscall UCanvasRenderTarget2D::UpdateResource(UCanvasRenderTarget2D *this)

{
                    /* WARNING: Could not recover jumptable at 0x000147732465. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x330))(this,0);
  return;
}

// UpdateResourceWithParams @ 147732480

void __thiscall
UCanvasRenderTarget2D::UpdateResourceWithParams
          (UCanvasRenderTarget2D *this,EUpdateResourceFlags param_1)

{
  bool bVar1;
  uint *puVar2;
  FTlsAutoCleanup *pFVar3;
  undefined1 local_res8 [32];
  code *local_18;
  undefined1 *local_10;
  
  if (this->SampleCount != RTSC_1) {
    puVar2 = (uint *)((longlong)&this->_padding_ + 4);
    *puVar2 = *puVar2 & 0xfffffffd;
  }
  UTexture::UpdateResourceWithParams((UTexture *)this,param_1);
  bVar1 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (!bVar1) {
    puVar2 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
    local_10 = local_res8;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar3 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,puVar2);
    if (*(char *)(pFVar3 + 4) == '\0') {
      RepaintCanvas(this);
      return;
    }
  }
  return;
}

// execCreateCanvasRenderTarget2D @ 147735b60

void __cdecl
UCanvasRenderTarget2D::execCreateCanvasRenderTarget2D
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  int iVar3;
  UCanvasRenderTarget2D *pUVar4;
  int local_res10 [2];
  int local_res18 [2];
  UObject *local_res20;
  UObject *local_28;
  UObject *local_20;
  
  local_28 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  iVar3 = local_res18[0];
  iVar2 = local_res10[0];
  local_20 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res20);
  }
  pUVar4 = CreateCanvasRenderTarget2D
                     (local_28,(TSubclassOf<UCanvasRenderTarget2D>)&local_20,iVar3,iVar2);
  *(UCanvasRenderTarget2D **)param_3 = pUVar4;
  return;
}

// execGetSampleCount @ 1477368d0

void __cdecl
UCanvasRenderTarget2D::execGetSampleCount(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 1000))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execGetSize @ 147736910

void __cdecl UCanvasRenderTarget2D::execGetSize(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int *piVar2;
  int *piVar3;
  float fVar4;
  int local_res8 [2];
  int local_res10 [2];
  
  local_res8[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  piVar2 = (int *)param_2->MostRecentPropertyAddress;
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  piVar3 = local_res8;
  if (piVar2 != (int *)0x0) {
    piVar3 = piVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  piVar2 = local_res10;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar2 = (int *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar4 = (float)(**(code **)(*(longlong *)param_1 + 0x368))(param_1);
  *piVar3 = (int)fVar4;
  fVar4 = (float)(**(code **)(*(longlong *)param_1 + 0x370))(param_1);
  *piVar2 = (int)fVar4;
  return;
}

// execSetSampleCount @ 147738e30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UCanvasRenderTarget2D::execSetSampleCount(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  char local_res8 [8];
  
  local_res8[0] = '\0';
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (param_1[10].field_0x10 != local_res8[0]) {
    *(uint *)&param_1[8].field_0x14 = *(uint *)&param_1[8].field_0x14 & 0xfffffffd;
    param_1[10].field_0x10 = local_res8[0];
    uVar2 = 0;
    if (local_res8[0] == '\0') {
      uVar2 = 2;
    }
    *(uint *)&param_1[8].field_0x14 = *(uint *)&param_1[8].field_0x14 | uVar2;
    if (((param_1[9].field_0xc & 2) != 0) && (local_res8[0] != '\0')) {
      if (2 < (byte)LogTexture._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTexture);
      }
      param_1[9].field_0xc = param_1[9].field_0xc & 0xfd;
    }
  }
  return;
}

// execUpdateResource @ 147739bc0

void __cdecl
UCanvasRenderTarget2D::execUpdateResource(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147739bd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x328))();
  return;
}

