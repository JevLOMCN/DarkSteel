// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 25

// StaticClass @ 145f36420

UClass * __cdecl ULandscapeScratchRenderTarget::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeScratchRenderTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeScratchRenderTarget",
               &Z_Registration_Info_UClass_ULandscapeScratchRenderTarget.InnerSingleton,
               StaticRegisterNativesULandscapeScratchRenderTarget,0x78,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<ULandscapeScratchRenderTarget>,
               InternalVTableHelperCtorCaller<ULandscapeScratchRenderTarget>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeScratchRenderTarget.InnerSingleton;
}

// ULandscapeScratchRenderTarget @ 145f42ad0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

ULandscapeScratchRenderTarget * __thiscall
ULandscapeScratchRenderTarget::ULandscapeScratchRenderTarget
          (ULandscapeScratchRenderTarget *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->RenderTargetFormat = RTF_RGBA8;
  this->_padding_ = (longlong)&___7ULandscapeScratchRenderTarget__6B_;
  (this->RenderTarget).field0_0x0.DebugPtr = (UTextureRenderTarget *)0x0;
  this->bIsInUse = false;
  (this->CurrentRenderTargetParams).DebugName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CurrentRenderTargetParams).DebugName.Data.ArrayNum = 0;
  (this->CurrentRenderTargetParams).DebugName.Data.ArrayMax = 0;
  (this->CurrentRenderTargetParams).bExactDimensions = false;
  (this->CurrentRenderTargetParams).bUseUAV = false;
  (this->CurrentRenderTargetParams).bTargetArraySlicesIndependently = false;
  (this->CurrentRenderTargetParams).Resolution.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->CurrentRenderTargetParams).NumSlices = 0;
  *(undefined8 *)((longlong)&(this->CurrentRenderTargetParams).ClearColor.field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->CurrentRenderTargetParams).ClearColor.field0_0x0 + 0xc) = 0;
  this->CurrentState = None;
  *(undefined8 *)&(this->CurrentRenderTargetParams).Format = 2;
  return this;
}

// ULandscapeScratchRenderTarget @ 145f42b30

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

ULandscapeScratchRenderTarget * __thiscall
ULandscapeScratchRenderTarget::ULandscapeScratchRenderTarget(ULandscapeScratchRenderTarget *this)

{
  UObject::UObject((UObject *)this);
  this->RenderTargetFormat = RTF_RGBA8;
  this->_padding_ = (longlong)&___7ULandscapeScratchRenderTarget__6B_;
  (this->RenderTarget).field0_0x0.DebugPtr = (UTextureRenderTarget *)0x0;
  this->bIsInUse = false;
  (this->CurrentRenderTargetParams).DebugName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CurrentRenderTargetParams).DebugName.Data.ArrayNum = 0;
  (this->CurrentRenderTargetParams).DebugName.Data.ArrayMax = 0;
  (this->CurrentRenderTargetParams).bExactDimensions = false;
  (this->CurrentRenderTargetParams).bUseUAV = false;
  (this->CurrentRenderTargetParams).bTargetArraySlicesIndependently = false;
  (this->CurrentRenderTargetParams).Resolution.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->CurrentRenderTargetParams).NumSlices = 0;
  *(undefined8 *)((longlong)&(this->CurrentRenderTargetParams).ClearColor.field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->CurrentRenderTargetParams).ClearColor.field0_0x0 + 0xc) = 0;
  this->CurrentState = None;
  *(undefined8 *)&(this->CurrentRenderTargetParams).Format = 2;
  return this;
}

// ~ULandscapeScratchRenderTarget @ 145f43b50

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
ULandscapeScratchRenderTarget::~ULandscapeScratchRenderTarget(ULandscapeScratchRenderTarget *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ULandscapeScratchRenderTarget__6B_;
  pFVar1 = (this->CurrentRenderTargetParams).DebugName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 145f44e90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`ULandscapeScratchRenderTarget::Clear'::__l2::<lambda_1>::operator()
          (void *this,FRDGBuilder *param_1)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  TRefCountPtr<IPooledRenderTarget> TVar4;
  FRDGTexture *pFVar5;
  longlong *local_res8;
  TIntRect<int>_u_0 local_48 [2];
  undefined1 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  
  TVar4 = CreateRenderTarget((FRHITexture *)&local_res8,*(wchar_t **)(*(longlong *)this + 0x20));
  pFVar5 = FRDGBuilder::RegisterExternalTexture
                     (param_1,(TRefCountPtr<IPooledRenderTarget> *)TVar4.Reference,None);
  if (local_res8 != (longlong *)0x0) {
    (**(code **)(*local_res8 + 0x38))();
  }
  local_28 = 0;
  local_24 = 0;
  local_48[0]._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  local_48[0]._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  local_20 = 1;
  local_18 = 1;
  cVar1 = (pFVar5->Desc).field_0x32;
  if ((cVar1 == '\x01') || (cVar1 == '\x04')) {
    if ((int)(uint)*(ushort *)&(pFVar5->Desc).field_0x2e < *(int *)((longlong)this + 8)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("EffectiveNumSlices <= TextureRef->Desc.ArraySize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEditResourcesSubsystem.cpp"
                         ,199,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_20 = CONCAT44(local_20._4_4_,*(undefined4 *)((longlong)this + 8));
  }
  AddClearRenderTargetPass(param_1,pFVar5,(FRDGTextureClearInfo *)&local_48[0]._s_0);
  return;
}

// Clear @ 145f4e2f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
ULandscapeScratchRenderTarget::Clear
          (ULandscapeScratchRenderTarget *this,FRDGBuilderRecorder *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  FTextureRenderTargetResource *pFVar5;
  FRDGExternalTextureAccessFinal local_68;
  FRDGExternalTextureAccessFinal *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  TArrayView<UE::Landscape::FRDGBuilderRecorder::FRDGExternalTextureAccessFinal_const_,int> local_48
  ;
  code *local_38 [2];
  undefined **local_28;
  FTextureRenderTargetResource *local_20;
  int local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  if ((this->RenderTarget).field0_0x0.DebugPtr == (UTextureRenderTarget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("RenderTarget != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEditResourcesSubsystem.cpp"
                       ,0xba,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TransitionTo(this,RTV,param_1);
  pFVar5 = UTextureRenderTarget::GameThread_GetRenderTargetResource
                     ((this->RenderTarget).field0_0x0.DebugPtr);
  iVar1 = (this->CurrentRenderTargetParams).NumSlices;
  local_68.TextureResource =
       UTexture::GetResource((UTexture *)(this->RenderTarget).field0_0x0.DebugPtr);
  local_58 = &local_68;
  uStack_50 = 1;
  uVar3._4_4_ = uStack_4c;
  uVar3._0_4_ = 1;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`ULandscapeScratchRenderTarget::Clear'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_14 = local_48._12_4_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`ULandscapeScratchRenderTarget::Clear'::__l2::<lambda_1>,void,FRDGBuilder_&>
                ::Call;
  local_68.Access = RTV;
  local_10 = 0;
  local_48.DataPtr = local_58;
  local_48._8_8_ = uVar3;
  local_20 = pFVar5;
  local_18 = iVar1;
  UE::Landscape::FRDGBuilderRecorder::EnqueueRDGCommand
            (param_1,(TFunction<void___cdecl(FRDGBuilder_&)> *)local_38,&local_48);
  return;
}

// CopyFrom @ 145f4f570

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
ULandscapeScratchRenderTarget::CopyFrom
          (ULandscapeScratchRenderTarget *this,FCopyFromScratchRenderTargetParams *param_1,
          FRDGBuilderRecorder *param_2)

{
  FTextureRenderTargetResource *pFVar1;
  FTextureRenderTargetResource *pFVar2;
  
  TransitionTo(param_1->SourceScratchRenderTarget,CopySrc,param_2);
  TransitionTo(this,CopyDest,param_2);
  pFVar1 = UTextureRenderTarget::GameThread_GetRenderTargetResource
                     ((this->RenderTarget).field0_0x0.DebugPtr);
  pFVar2 = UTextureRenderTarget::GameThread_GetRenderTargetResource
                     ((param_1->SourceScratchRenderTarget->RenderTarget).field0_0x0.DebugPtr);
  UE::Landscape::Private::EnqueueCopyToScratchRTRenderCommand
            ((FCopyFromParams *)param_1,(FTextureResource *)pFVar2,(FTextureResource *)pFVar1,
             param_2);
  return;
}

// CopyFrom @ 145f4f5f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
ULandscapeScratchRenderTarget::CopyFrom
          (ULandscapeScratchRenderTarget *this,FCopyFromTextureParams *param_1,
          FRDGBuilderRecorder *param_2)

{
  FTextureRenderTargetResource *pFVar1;
  FTextureResource *pFVar2;
  
  TransitionTo(this,CopyDest,param_2);
  pFVar1 = UTextureRenderTarget::GameThread_GetRenderTargetResource
                     ((this->RenderTarget).field0_0x0.DebugPtr);
  pFVar2 = UTexture::GetResource(param_1->SourceTexture);
  UE::Landscape::Private::EnqueueCopyToScratchRTRenderCommand
            ((FCopyFromParams *)param_1,pFVar2,(FTextureResource *)pFVar1,param_2);
  return;
}

// GetClearColor @ 145f53530

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

FLinearColor * __thiscall
ULandscapeScratchRenderTarget::GetClearColor
          (ULandscapeScratchRenderTarget *this,FLinearColor *__return_storage_ptr__)

{
  TObjectPtr<UTextureRenderTarget> *this_00;
  UTextureRenderTarget *pUVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  UClass *pUVar5;
  
  this_00 = &this->RenderTarget;
  if ((this->RenderTarget).field0_0x0.DebugPtr != (UTextureRenderTarget *)0x0) {
    pUVar5 = Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
    bVar4 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar5);
    if ((bVar4) && (pUVar1 = (this_00->field0_0x0).DebugPtr, pUVar1 != (UTextureRenderTarget *)0x0))
    {
      lVar2 = pUVar1[1]._padding_;
      *(longlong *)&__return_storage_ptr__->field0_0x0 = pUVar1[1]._padding_;
      *(longlong *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = lVar2;
      return __return_storage_ptr__;
    }
    if ((this_00->field0_0x0).DebugPtr != (UTextureRenderTarget *)0x0) {
      pUVar5 = Z_Construct_UClass_UTextureRenderTarget2DArray_NoRegister();
      bVar4 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar5);
      if ((bVar4) &&
         (pUVar1 = (this_00->field0_0x0).DebugPtr, pUVar1 != (UTextureRenderTarget *)0x0)) {
        uVar3 = *(undefined8 *)((longlong)&pUVar1[1]._padding_ + 4);
        *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
             *(undefined8 *)((longlong)&pUVar1[1]._padding_ + 4);
        *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar3;
        return __return_storage_ptr__;
      }
    }
  }
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
  return __return_storage_ptr__;
}

// GetDebugName @ 145f537d0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

FString * __thiscall
ULandscapeScratchRenderTarget::GetDebugName(ULandscapeScratchRenderTarget *this)

{
  return &(this->CurrentRenderTargetParams).DebugName;
}

// GetEffectiveNumSlices @ 145f53940

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

int __thiscall
ULandscapeScratchRenderTarget::GetEffectiveNumSlices(ULandscapeScratchRenderTarget *this)

{
  return (this->CurrentRenderTargetParams).NumSlices;
}

// GetEffectiveResolution @ 145f53950

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

TIntPoint<int> __thiscall
ULandscapeScratchRenderTarget::GetEffectiveResolution(ULandscapeScratchRenderTarget *this)

{
  TIntPoint<int>_u_0 in_RDX;
  
  *(TIntPoint<int>_u_0 *)in_RDX = (this->CurrentRenderTargetParams).Resolution.field0_0x0;
  return (TIntPoint<int>)in_RDX;
}

// GetFormat @ 145f539b0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

ETextureRenderTargetFormat __thiscall
ULandscapeScratchRenderTarget::GetFormat(ULandscapeScratchRenderTarget *this)

{
  return this->RenderTargetFormat;
}

// GetNumSlices @ 145f53b10

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

int __thiscall ULandscapeScratchRenderTarget::GetNumSlices(ULandscapeScratchRenderTarget *this)

{
  UTextureRenderTarget *pUVar1;
  bool bVar2;
  UClass *pUVar3;
  
  if ((this->RenderTarget).field0_0x0.DebugPtr != (UTextureRenderTarget *)0x0) {
    pUVar3 = Z_Construct_UClass_UTextureRenderTarget2DArray_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&this->RenderTarget,pUVar3);
    if ((bVar2) &&
       (pUVar1 = (this->RenderTarget).field0_0x0.DebugPtr, pUVar1 != (UTextureRenderTarget *)0x0)) {
      return (int)pUVar1[1]._padding_;
    }
  }
  return 0;
}

// GetPrivateStaticClass @ 145f541f0

UClass * __cdecl ULandscapeScratchRenderTarget::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeScratchRenderTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeScratchRenderTarget",
               &Z_Registration_Info_UClass_ULandscapeScratchRenderTarget.InnerSingleton,
               StaticRegisterNativesULandscapeScratchRenderTarget,0x78,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<ULandscapeScratchRenderTarget>,
               InternalVTableHelperCtorCaller<ULandscapeScratchRenderTarget>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeScratchRenderTarget.InnerSingleton;
}

// GetRenderTarget2D @ 145f54660

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

UTextureRenderTarget2D * __thiscall
ULandscapeScratchRenderTarget::GetRenderTarget2D(ULandscapeScratchRenderTarget *this)

{
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UTextureRenderTarget2D *pUVar4;
  
  if ((this->RenderTarget).field0_0x0.DebugPtr != (UTextureRenderTarget *)0x0) {
    pUVar3 = Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&this->RenderTarget,pUVar3);
    if (bVar2) {
      pUVar4 = (UTextureRenderTarget2D *)(this->RenderTarget).field0_0x0.DebugPtr;
      if ((pUVar4 != (UTextureRenderTarget2D *)0x0) &&
         ((this->CurrentRenderTargetParams).NumSlices < 1)) {
        return pUVar4;
      }
      goto LAB_145f546a8;
    }
  }
  pUVar4 = (UTextureRenderTarget2D *)0x0;
LAB_145f546a8:
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("(TextureRenderTarget2D != nullptr) && (CurrentRenderTargetParams.NumSlices <= 0)"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEditResourcesSubsystem.cpp"
                     ,0x62,
                     L"Cannot ask for a render target 2D on a scratch render target that wasn\'t created as one"
                    );
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar4 = (UTextureRenderTarget2D *)(*pcVar1)();
    return pUVar4;
  }
  return pUVar4;
}

// GetRenderTarget2DArray @ 145f546f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

UTextureRenderTarget2DArray * __thiscall
ULandscapeScratchRenderTarget::GetRenderTarget2DArray(ULandscapeScratchRenderTarget *this)

{
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UTextureRenderTarget2DArray *pUVar4;
  
  if ((this->RenderTarget).field0_0x0.DebugPtr != (UTextureRenderTarget *)0x0) {
    pUVar3 = Z_Construct_UClass_UTextureRenderTarget2DArray_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&this->RenderTarget,pUVar3);
    if (bVar2) {
      pUVar4 = (UTextureRenderTarget2DArray *)(this->RenderTarget).field0_0x0.DebugPtr;
      if ((pUVar4 != (UTextureRenderTarget2DArray *)0x0) &&
         (0 < (this->CurrentRenderTargetParams).NumSlices)) {
        return pUVar4;
      }
      goto LAB_145f54738;
    }
  }
  pUVar4 = (UTextureRenderTarget2DArray *)0x0;
LAB_145f54738:
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("(RenderTarget2DArray != nullptr) && (CurrentRenderTargetParams.NumSlices > 0)"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEditResourcesSubsystem.cpp"
                     ,0x6e,
                     L"Cannot ask for a render target 2D array on a scratch render target that wasn\'t created as one"
                    );
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar4 = (UTextureRenderTarget2DArray *)(*pcVar1)();
    return pUVar4;
  }
  return pUVar4;
}

// GetResolution @ 145f54780

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

TIntPoint<int> __thiscall
ULandscapeScratchRenderTarget::GetResolution(ULandscapeScratchRenderTarget *this)

{
  TObjectPtr<UTextureRenderTarget> *this_00;
  bool bVar1;
  UClass *pUVar2;
  UTextureRenderTarget *pUVar3;
  TIntPoint<int>_u_0 in_RDX;
  
  this_00 = &this->RenderTarget;
  if ((this->RenderTarget).field0_0x0.DebugPtr != (UTextureRenderTarget *)0x0) {
    pUVar2 = Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar2);
    if ((bVar1) && (pUVar3 = (this_00->field0_0x0).DebugPtr, pUVar3 != (UTextureRenderTarget *)0x0))
    {
LAB_145f547b4:
      *(int *)in_RDX = (int)pUVar3[1]._padding_;
      *(undefined4 *)((longlong)in_RDX + 4) = *(undefined4 *)((longlong)&pUVar3[1]._padding_ + 4);
      return (TIntPoint<int>)in_RDX;
    }
    if ((this_00->field0_0x0).DebugPtr != (UTextureRenderTarget *)0x0) {
      pUVar2 = Z_Construct_UClass_UTextureRenderTarget2DArray_NoRegister();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar2);
      if ((bVar1) &&
         (pUVar3 = (this_00->field0_0x0).DebugPtr, pUVar3 != (UTextureRenderTarget *)0x0))
      goto LAB_145f547b4;
    }
  }
  *(undefined8 *)in_RDX = 0;
  return (TIntPoint<int>)in_RDX;
}

// IsCompatibleWith @ 145f58ca0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

bool __thiscall
ULandscapeScratchRenderTarget::IsCompatibleWith
          (ULandscapeScratchRenderTarget *this,FScratchRenderTargetParams *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  UTextureRenderTarget *pUVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  UClass *pUVar10;
  UTextureRenderTarget *pUVar11;
  int iVar12;
  UTextureRenderTarget *pUVar13;
  int iVar14;
  int local_res8;
  int iStackX_c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (((this->RenderTarget).field0_0x0.DebugPtr == (UTextureRenderTarget *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("RenderTarget != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEditResourcesSubsystem.cpp"
                         ,0x11d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  if (this->bIsInUse != false) {
    return false;
  }
  if ((this->RenderTarget).field0_0x0.DebugPtr == (UTextureRenderTarget *)0x0) {
    return false;
  }
  if (this->RenderTargetFormat != param_1->Format) {
    return false;
  }
  pUVar10 = Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
  bVar5 = FObjectPtr::IsA((FObjectPtr *)&this->RenderTarget,pUVar10);
  if ((bVar5) &&
     (pUVar11 = (this->RenderTarget).field0_0x0.DebugPtr, pUVar11 != (UTextureRenderTarget *)0x0)) {
    local_38 = (undefined4)pUVar11[1]._padding_;
    uStack_34 = *(undefined4 *)((longlong)&pUVar11[1]._padding_ + 4);
    uStack_30 = (undefined4)pUVar11[1]._padding_;
    uStack_2c = *(undefined4 *)((longlong)&pUVar11[1]._padding_ + 4);
  }
  else {
    if ((this->RenderTarget).field0_0x0.DebugPtr != (UTextureRenderTarget *)0x0) {
      pUVar10 = Z_Construct_UClass_UTextureRenderTarget2DArray_NoRegister();
      bVar5 = FObjectPtr::IsA((FObjectPtr *)&this->RenderTarget,pUVar10);
      if ((bVar5) &&
         (pUVar11 = (this->RenderTarget).field0_0x0.DebugPtr, pUVar11 != (UTextureRenderTarget *)0x0
         )) {
        local_38 = *(undefined4 *)((longlong)&pUVar11[1]._padding_ + 4);
        uStack_34 = (undefined4)pUVar11[1]._padding_;
        uStack_30 = *(undefined4 *)((longlong)&pUVar11[1]._padding_ + 4);
        uStack_2c = (undefined4)pUVar11[1]._padding_;
        goto LAB_145f58d5e;
      }
    }
    local_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
  }
LAB_145f58d5e:
  uVar8 = FCrc::MemCrc_DEPRECATED(&local_38,0x10,0);
  uVar9 = FCrc::MemCrc_DEPRECATED(&param_1->ClearColor,0x10,0);
  if (uVar8 != uVar9) {
    return false;
  }
  pUVar11 = (this->RenderTarget).field0_0x0.DebugPtr;
  if (pUVar11->bCanCreateUAV != param_1->bUseUAV) {
    return false;
  }
  if (pUVar11->bTargetArraySlicesIndependently != param_1->bTargetArraySlicesIndependently) {
    return false;
  }
  pUVar13 = (UTextureRenderTarget *)0x0;
  if (pUVar11 == (UTextureRenderTarget *)0x0) {
LAB_145f58dff:
    pUVar11 = (this->RenderTarget).field0_0x0.DebugPtr;
LAB_145f58e03:
    iVar14 = param_1->NumSlices;
    iVar12 = 0;
    bVar5 = 0 < iVar14;
    if (pUVar11 == (UTextureRenderTarget *)0x0) goto LAB_145f58e30;
  }
  else {
    pUVar10 = Z_Construct_UClass_UTextureRenderTarget2DArray_NoRegister();
    bVar5 = FObjectPtr::IsA((FObjectPtr *)&this->RenderTarget,pUVar10);
    if (!bVar5) goto LAB_145f58dff;
    pUVar3 = (this->RenderTarget).field0_0x0.DebugPtr;
    pUVar11 = (UTextureRenderTarget *)0x0;
    if (pUVar3 == (UTextureRenderTarget *)0x0) goto LAB_145f58e03;
    iVar14 = param_1->NumSlices;
    iVar12 = (int)pUVar3[1]._padding_;
    bVar5 = 0 < iVar14;
  }
  pUVar10 = Z_Construct_UClass_UTextureRenderTarget2DArray_NoRegister();
  bVar7 = FObjectPtr::IsA((FObjectPtr *)&this->RenderTarget,pUVar10);
  if (bVar7) {
    pUVar13 = (this->RenderTarget).field0_0x0.DebugPtr;
  }
LAB_145f58e30:
  if ((pUVar13 != (UTextureRenderTarget *)0x0) == bVar5) {
    GetResolution(this);
    iVar2 = (param_1->Resolution).field0_0x0._s_0.X;
    if (((local_res8 == iVar2) && (iStackX_c == (param_1->Resolution).field0_0x0._s_0.Y)) ||
       ((bVar5 = false, param_1->bExactDimensions == false &&
        ((iVar2 <= local_res8 && ((param_1->Resolution).field0_0x0._s_0.Y <= iStackX_c)))))) {
      bVar5 = true;
    }
    bVar7 = true;
    if (0 < iVar14) {
      bVar7 = iVar12 == param_1->NumSlices;
      if ((!bVar7) && (param_1->bExactDimensions == false)) {
        bVar7 = param_1->NumSlices <= iVar12;
      }
    }
    if ((bVar5) && (bVar7)) {
      return true;
    }
  }
  return false;
}

// OnReleased @ 145f599f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall ULandscapeScratchRenderTarget::OnReleased(ULandscapeScratchRenderTarget *this)

{
  FScratchRenderTargetParams *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 local_58 [2];
  TIntPoint<int>_u_0 local_44;
  
  if (this->bIsInUse == false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInUse()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEditResourcesSubsystem.cpp"
                       ,399,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = &this->CurrentRenderTargetParams;
  local_44 = (TIntPoint<int>_u_0)0x0;
  if (pFVar1 != (FScratchRenderTargetParams *)local_58) {
    pFVar2 = (pFVar1->DebugName).Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->DebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->CurrentRenderTargetParams).DebugName.Data.ArrayNum = 0;
    (this->CurrentRenderTargetParams).DebugName.Data.ArrayMax = 0;
  }
  (this->CurrentRenderTargetParams).bExactDimensions = false;
  (this->CurrentRenderTargetParams).bUseUAV = false;
  (this->CurrentRenderTargetParams).bTargetArraySlicesIndependently = false;
  (this->CurrentRenderTargetParams).NumSlices = 0;
  *(undefined8 *)&(this->CurrentRenderTargetParams).ClearColor.field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->CurrentRenderTargetParams).ClearColor.field0_0x0 + 8) = 0;
  (this->CurrentRenderTargetParams).InitialState = None;
  (this->CurrentRenderTargetParams).Resolution.field0_0x0 = local_44;
  (this->CurrentRenderTargetParams).Format = RTF_RGBA8;
  this->bIsInUse = false;
  return;
}

// OnRequested @ 145f59ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
ULandscapeScratchRenderTarget::OnRequested
          (ULandscapeScratchRenderTarget *this,FScratchRenderTargetParams *param_1)

{
  FScratchRenderTargetParams *pFVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FName FVar5;
  FScriptContainerElement *_Src;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  uchar uVar9;
  FName *pFVar10;
  FName FVar11;
  UClass *pUVar12;
  UPackage *pUVar13;
  UTextureRenderTarget2D *this_00;
  uint uVar14;
  longlong *plVar15;
  undefined1 auStackY_218 [32];
  ETextureRenderTargetFormat local_1d8 [2];
  FName local_1d0;
  ETextureRenderTargetFormat *local_1c8;
  FName local_1c0;
  FName local_1b8;
  FName local_1b0;
  undefined1 local_1a8 [128];
  undefined1 local_128 [128];
  FRDGBuilderRecorder local_a8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_218;
  if ((this->bIsInUse != false) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsInUse()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEditResourcesSubsystem.cpp"
                         ,0x15f,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((this->RenderTarget).field0_0x0.DebugPtr == (UTextureRenderTarget *)0x0) {
    if (param_1->NumSlices < 1) {
      pFVar10 = ::FName::FName(&local_1b0,L"ScratchLandscapeRT2D");
      FVar5 = *pFVar10;
      FVar11 = (FName)Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
      pUVar12 = (UClass *)GetTransientPackage();
      MakeUniqueObjectName((UObject *)&local_1c0,pUVar12,FVar11,FVar5.ComparisonIndex.Value.Value);
      pUVar13 = GetTransientPackage();
      if (local_1c0 == (FName)0x0) {
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)pUVar13,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
      }
      pUVar12 = Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_128,pUVar12);
      local_128._48_8_ = (FObjectInstancingGraph *)0x0;
      local_128._56_8_ = (UPackage *)0x0;
      local_128._16_4_ = local_1c0.ComparisonIndex.Value;
      local_128._20_4_ = local_1c0.Number;
      local_128._24_4_ = RF_Transient;
      local_128._40_8_ = (UObject *)0x0;
      local_128[0x20] = false;
      local_128._8_8_ = pUVar13;
      this_00 = (UTextureRenderTarget2D *)
                StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_128);
      if (local_128._64_8_ != 0) {
        plVar15 = (longlong *)(local_128 + 0x50);
        if ((longlong *)local_128._104_8_ != (longlong *)0x0) {
          plVar15 = (longlong *)local_128._104_8_;
        }
        (**(code **)(*plVar15 + 0x10))();
      }
      uVar14 = *(uint *)((longlong)&this_00->_padding_ + 4);
      *(uint *)((longlong)&this_00->_padding_ + 4) =
           ((uint)param_1->bUseUAV * 2 ^ uVar14) & 2 ^ uVar14;
      (this_00->RenderTargetFormat).Value = (char)param_1->Format;
      uVar7 = *(undefined8 *)((longlong)&(param_1->ClearColor).field0_0x0 + 8);
      *(undefined8 *)&(this_00->ClearColor).field0_0x0 =
           *(undefined8 *)&(param_1->ClearColor).field0_0x0;
      *(undefined8 *)((longlong)&(this_00->ClearColor).field0_0x0 + 8) = uVar7;
      UTextureRenderTarget2D::InitAutoFormat
                (this_00,(param_1->Resolution).field0_0x0._s_0.X,
                 (param_1->Resolution).field0_0x0._s_0.Y);
      UTextureRenderTarget2D::UpdateResourceImmediate(this_00,false);
    }
    else {
      pFVar10 = ::FName::FName(&local_1b8,L"ScratchLandscapeRT2DArray");
      FVar5 = *pFVar10;
      FVar11 = (FName)Z_Construct_UClass_UTextureRenderTarget2DArray_NoRegister();
      pUVar12 = (UClass *)GetTransientPackage();
      MakeUniqueObjectName((UObject *)&local_1d0,pUVar12,FVar11,FVar5.ComparisonIndex.Value.Value);
      pUVar13 = GetTransientPackage();
      if (local_1d0 == (FName)0x0) {
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)pUVar13,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
      }
      pUVar12 = Z_Construct_UClass_UTextureRenderTarget2DArray_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_1a8,pUVar12);
      local_1a8._48_8_ = (FObjectInstancingGraph *)0x0;
      local_1a8._56_8_ = (UPackage *)0x0;
      local_1a8._16_4_ = local_1d0.ComparisonIndex.Value;
      local_1a8._20_4_ = local_1d0.Number;
      local_1a8._24_4_ = RF_Transient;
      local_1a8._40_8_ = (UObject *)0x0;
      local_1a8[0x20] = false;
      local_1a8._8_8_ = pUVar13;
      this_00 = (UTextureRenderTarget2D *)
                StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1a8);
      if (local_1a8._64_8_ != 0) {
        plVar15 = (longlong *)(local_1a8 + 0x50);
        if ((longlong *)local_1a8._104_8_ != (longlong *)0x0) {
          plVar15 = (longlong *)local_1a8._104_8_;
        }
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
      uVar14 = *(uint *)((longlong)&this_00->_padding_ + 4);
      uVar14 = ((uint)param_1->bUseUAV * 2 ^ uVar14) & 2 ^ uVar14;
      *(uint *)((longlong)&this_00->_padding_ + 4) = uVar14;
      *(uint *)((longlong)&this_00->_padding_ + 4) =
           ((uint)param_1->bTargetArraySlicesIndependently << 2 ^ uVar14) & 4 ^ uVar14;
      local_1d8[0] = param_1->Format;
      switch(local_1d8[0]) {
      case RTF_R8:
        uVar9 = '\x03';
        break;
      case RTF_RG8:
        uVar9 = '(';
        break;
      case RTF_RGBA8:
      case RTF_RGBA8_SRGB:
        uVar9 = '\x02';
        break;
      case RTF_R16f:
        uVar9 = '\x15';
        break;
      case RTF_RG16f:
        uVar9 = '\x0f';
        break;
      case RTF_RGBA16f:
        uVar9 = '\n';
        break;
      case RTF_R32f:
        uVar9 = '\r';
        break;
      case RTF_RG32f:
        uVar9 = '\x11';
        break;
      case RTF_RGBA32f:
        uVar9 = '\x01';
        break;
      case RTF_RGB10A2:
        uVar9 = '\x12';
        break;
      default:
        local_1c8 = local_1d8;
        `GetPixelFormatFromRenderTargetFormat'::__l2::<lambda_1>::operator()(&local_1c8);
        uVar9 = '\0';
      }
      ((TEnumAsByte<EPixelFormat> *)&this_00->field_0x174)->Value = uVar9;
      uVar7 = *(undefined8 *)((longlong)&(param_1->ClearColor).field0_0x0 + 8);
      *(undefined8 *)
       &((FLinearColor *)((longlong)&(this_00->ClearColor).field0_0x0 + 4))->field0_0x0 =
           *(undefined8 *)&(param_1->ClearColor).field0_0x0;
      *(undefined8 *)((longlong)&(this_00->ClearColor).field0_0x0 + 0xc) = uVar7;
      UTextureRenderTarget2DArray::InitAutoFormat
                ((UTextureRenderTarget2DArray *)this_00,(param_1->Resolution).field0_0x0._s_0.X,
                 (param_1->Resolution).field0_0x0._s_0.Y,param_1->NumSlices);
      UTextureRenderTarget2DArray::UpdateResourceImmediate
                ((UTextureRenderTarget2DArray *)this_00,false);
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    (this->RenderTarget).field0_0x0.DebugPtr = (UTextureRenderTarget *)this_00;
    if ((this_00 == (UTextureRenderTarget2D *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("RenderTarget != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEditResourcesSubsystem.cpp"
                           ,0x17c,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    this->CurrentState = SRVMask;
    this->RenderTargetFormat = param_1->Format;
  }
  pFVar1 = &this->CurrentRenderTargetParams;
  this->bIsInUse = true;
  if (pFVar1 != param_1) {
    iVar3 = (param_1->DebugName).Data.ArrayNum;
    piVar2 = &(this->CurrentRenderTargetParams).DebugName.Data.ArrayMax;
    iVar4 = *piVar2;
    _Src = (param_1->DebugName).Data.AllocatorInstance.Data;
    (this->CurrentRenderTargetParams).DebugName.Data.ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar4 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar3,iVar4,(ForAnyElementType *)pFVar1,iVar3,piVar2);
      if (iVar3 != 0) {
        memcpy((pFVar1->DebugName).Data.AllocatorInstance.Data,_Src,(longlong)iVar3 * 2);
      }
    }
  }
  (this->CurrentRenderTargetParams).bExactDimensions = param_1->bExactDimensions;
  (this->CurrentRenderTargetParams).bUseUAV = param_1->bUseUAV;
  (this->CurrentRenderTargetParams).bTargetArraySlicesIndependently =
       param_1->bTargetArraySlicesIndependently;
  (this->CurrentRenderTargetParams).Resolution.field0_0x0 = (param_1->Resolution).field0_0x0;
  (this->CurrentRenderTargetParams).NumSlices = param_1->NumSlices;
  (this->CurrentRenderTargetParams).Format = param_1->Format;
  uVar7 = *(undefined8 *)((longlong)&(param_1->ClearColor).field0_0x0 + 8);
  *(undefined8 *)&(this->CurrentRenderTargetParams).ClearColor.field0_0x0 =
       *(undefined8 *)&(param_1->ClearColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->CurrentRenderTargetParams).ClearColor.field0_0x0 + 8) = uVar7;
  (this->CurrentRenderTargetParams).InitialState = param_1->InitialState;
  if (param_1->InitialState != None) {
    local_a8.RDGExternalTextureAccessFinal._40_8_ = ___xmm_00000000ffffffff0000008000000000;
    local_a8.RDGExternalTextureAccessFinal._48_8_ = _UNK_150631d98;
    local_a8.State = Immediate;
    local_a8.RDGCommands.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.RDGCommands.ArrayNum = 0;
    local_a8.RDGCommands.ArrayMax = 0;
    local_a8.RDGExternalTextureAccessFinal._0_8_ = 0;
    local_a8.RDGExternalTextureAccessFinal._8_8_ = 0;
    local_a8.RDGExternalTextureAccessFinal._32_8_ = 0;
    local_a8.RDGExternalTextureAccessFinal._64_8_ = 0;
    local_a8.RDGExternalTextureAccessFinal._72_4_ = 0;
    TransitionTo(this,param_1->InitialState,&local_a8);
    UE::Landscape::FRDGBuilderRecorder::~FRDGBuilderRecorder(&local_a8);
  }
  return;
}

// StaticRegisterNativesULandscapeScratchRenderTarget @ 145f5ec90

void __cdecl ULandscapeScratchRenderTarget::StaticRegisterNativesULandscapeScratchRenderTarget(void)

{
  return;
}

// TransitionTo @ 145f5f770

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
ULandscapeScratchRenderTarget::TransitionTo
          (ULandscapeScratchRenderTarget *this,ERHIAccess param_1,FRDGBuilderRecorder *param_2)

{
  int iVar1;
  ERHIAccess EVar2;
  code *pcVar3;
  ForAnyElementType _Src;
  bool bVar4;
  int iVar5;
  FTextureRenderTargetResource *pFVar6;
  FScriptContainerElement *pFVar7;
  ForAnyElementType local_50;
  undefined8 local_48;
  code *local_38 [2];
  undefined **local_28;
  ForAnyElementType local_20;
  int local_18;
  int local_14 [3];
  
  if (((this->RenderTarget).field0_0x0.DebugPtr == (UTextureRenderTarget *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("RenderTarget != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEditResourcesSubsystem.cpp"
                         ,0xb0,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_50.Data = (FScriptContainerElement *)0x0;
  local_48 = 0;
  if (this->CurrentState != param_1) {
    pFVar6 = UTextureRenderTarget::GameThread_GetRenderTargetResource
                       ((this->RenderTarget).field0_0x0.DebugPtr);
    iVar5 = (int)local_48;
    if ((int)local_48 == local_48._4_4_) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_50,(int *)((longlong)&local_48 + 4));
    }
    _Src.Data = local_50.Data;
    iVar1 = iVar5 + 1;
    EVar2 = this->CurrentState;
    local_48 = CONCAT44(local_48._4_4_,iVar1);
    pFVar7 = local_50.Data + (longlong)iVar5 * 0x10;
    *(FTextureRenderTargetResource **)pFVar7 = pFVar6;
    *(ERHIAccess *)(pFVar7 + 8) = EVar2;
    *(ERHIAccess *)(pFVar7 + 0xc) = param_1;
    this->CurrentState = param_1;
    if ((iVar1 != 0) && (param_2->State != Recording)) {
      local_28 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`ULandscapeScratchRenderTarget::FTransitionBatcherScope::~FTransitionBatcherScope'::`8'::<lambda_1>,0,0>
                  ::_vftable_;
      local_50.Data = (FScriptContainerElement *)0x0;
      local_48 = 0;
      local_38[0] = (code *)0x0;
      local_14[1] = 0;
      local_14[2] = 0;
      local_20.Data = (FScriptContainerElement *)0x0;
      local_18 = iVar1;
      if (iVar1 == 0) {
        local_14[0] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar1,0,&local_20,iVar1,local_14);
        memcpy(local_20.Data,_Src.Data,(longlong)iVar1 << 4);
      }
      local_38[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`ULandscapeScratchRenderTarget::FTransitionBatcherScope::~FTransitionBatcherScope'::__l8::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
      UE::Landscape::FRDGBuilderRecorder::EnqueueRenderCommand
                (param_2,(TFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_38);
      if (_Src.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(_Src.Data);
      }
    }
  }
  if (local_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data);
  }
  return;
}

// TryGetRenderTarget2D @ 145f5f920

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

UTextureRenderTarget2D * __thiscall
ULandscapeScratchRenderTarget::TryGetRenderTarget2D(ULandscapeScratchRenderTarget *this)

{
  bool bVar1;
  UClass *pUVar2;
  
  if ((this->RenderTarget).field0_0x0.DebugPtr != (UTextureRenderTarget *)0x0) {
    pUVar2 = Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)&this->RenderTarget,pUVar2);
    if (bVar1) {
      return (UTextureRenderTarget2D *)(this->RenderTarget).field0_0x0.DebugPtr;
    }
  }
  return (UTextureRenderTarget2D *)0x0;
}

// TryGetRenderTarget2DArray @ 145f5f960

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

UTextureRenderTarget2DArray * __thiscall
ULandscapeScratchRenderTarget::TryGetRenderTarget2DArray(ULandscapeScratchRenderTarget *this)

{
  bool bVar1;
  UClass *pUVar2;
  
  if ((this->RenderTarget).field0_0x0.DebugPtr != (UTextureRenderTarget *)0x0) {
    pUVar2 = Z_Construct_UClass_UTextureRenderTarget2DArray_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)&this->RenderTarget,pUVar2);
    if (bVar1) {
      return (UTextureRenderTarget2DArray *)(this->RenderTarget).field0_0x0.DebugPtr;
    }
  }
  return (UTextureRenderTarget2DArray *)0x0;
}

