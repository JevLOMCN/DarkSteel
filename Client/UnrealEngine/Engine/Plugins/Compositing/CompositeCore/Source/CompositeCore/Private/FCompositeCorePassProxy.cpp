// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CompositeCore
// Functions: 5

// FCompositeCorePassProxy @ 14ea75d10

FCompositeCorePassProxy * __thiscall
FCompositeCorePassProxy::FCompositeCorePassProxy
          (FCompositeCorePassProxy *this,
          TArray<TVariant<UE::CompositeCore::FPassInternalResourceDesc,UE::CompositeCore::FPassExternalResourceDesc,FCompositeCorePassProxy_const_*>,TSizedDefaultAllocator<32>_>
          *param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FCompositeCorePassProxy__6B_;
  (this->PassDeclaredInputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PassDeclaredInputs).AllocatorInstance.Data = (param_1->AllocatorInstance).Data;
  (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->PassDeclaredInputs).ArrayNum = param_1->ArrayNum;
  (this->PassDeclaredInputs).ArrayMax = param_1->ArrayMax;
  param_1->ArrayNum = 0;
  param_1->ArrayMax = 0;
  (this->PassDeclaredOutputOverride).bIsSet = false;
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

// ~FCompositeCorePassProxy @ 14ea77380

void __thiscall FCompositeCorePassProxy::~FCompositeCorePassProxy(FCompositeCorePassProxy *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->PassDeclaredInputs).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// CreateOutputRenderTarget @ 14ea7ced0

/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FScreenPassRenderTarget * __cdecl
FCompositeCorePassProxy::CreateOutputRenderTarget
          (FScreenPassRenderTarget *__return_storage_ptr__,FRDGBuilder *param_1,FSceneView *param_2,
          TIntRect<int> *param_3,FRDGTextureDesc *param_4,wchar_t *param_5)

{
  bool bVar1;
  TIntPoint<int>_u_0 TVar2;
  TIntPoint<int>_u_0_s_0 TVar3;
  longlong lVar4;
  FRDGTexture *pFVar5;
  int iVar6;
  
  param_4->field_0x33 = FSceneTexturesConfig::GlobalInstance.ColorFormat;
  param_4->field_0x30 = 1;
  *(undefined2 *)&param_4->field_0x2c = 1;
  *(undefined8 *)param_4 = 0x20009;
  *(ulonglong *)&param_4->field_0x24 =
       CONCAT44(*(int *)((longlong)&param_3->field0_0x0 + 0xc) -
                *(int *)((longlong)&param_3->field0_0x0 + 4),
                *(int *)((longlong)&param_3->field0_0x0 + 8) - *(int *)&param_3->field0_0x0);
  bVar1 = param_2->bHMDHiddenAreaMaskActive;
  TVar2 = (param_3->field0_0x0)._s_0.Min.field0_0x0;
  TVar3 = (param_3->field0_0x0)._s_0.Max.field0_0x0._s_0;
  pFVar5 = FRDGBuilder::CreateTexture(param_1,param_4,param_5,None);
  __return_storage_ptr__->_padding_ = (longlong)pFVar5;
  __return_storage_ptr__->_padding_ = (longlong)TVar2;
  __return_storage_ptr__->_padding_ = (longlong)TVar3;
  lVar4 = __return_storage_ptr__->_padding_;
  if (lVar4 != 0) {
    iVar6 = TVar3.X;
    if (iVar6 < *(int *)(lVar4 + 0x150)) {
      iVar6 = *(int *)(lVar4 + 0x150);
    }
    *(int *)(lVar4 + 0x150) = iVar6;
    iVar6 = *(int *)((longlong)&__return_storage_ptr__->_padding_ + 4);
    if (iVar6 < *(int *)(lVar4 + 0x154)) {
      iVar6 = *(int *)(lVar4 + 0x154);
    }
    *(int *)(lVar4 + 0x154) = iVar6;
  }
  __return_storage_ptr__->LoadAction = -(bVar1 != false) & EClear;
  if (*(void **)&param_4->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&param_4->field_0x40);
  }
  return __return_storage_ptr__;
}

// GetTypeName @ 14ea7fe40

FName * __thiscall FCompositeCorePassProxy::GetTypeName(FCompositeCorePassProxy *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compositing\\CompositeCore\\Source\\CompositeCore\\Public\\Passes\\CompositeCorePassProxy.h"
             ,0x107,L"Pure virtual not implemented (%s)");
  return &`public:_virtual_class_FName_const&___ptr64___cdecl_FCompositeCorePassProxy::GetTypeName(void)const___ptr64'
          ::__l2::Name;
}

// ValidateInputs @ 14ea83d80

/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

bool __thiscall
FCompositeCorePassProxy::ValidateInputs(FCompositeCorePassProxy *this,FPassInputArray *param_1)

{
  int iVar1;
  
  iVar1 = (this->PassDeclaredInputs).ArrayNum;
  if (iVar1 < 1) {
    iVar1 = 1;
  }
  return iVar1 <= (param_1->Inputs).ArrayNum;
}

