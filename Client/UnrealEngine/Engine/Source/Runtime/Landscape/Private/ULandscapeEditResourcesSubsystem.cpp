// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 11

// StaticClass @ 145f36550

UClass * __cdecl ULandscapeEditResourcesSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeEditResourcesSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeEditResourcesSubsystem",
               &Z_Registration_Info_UClass_ULandscapeEditResourcesSubsystem.InnerSingleton,
               StaticRegisterNativesULandscapeEditResourcesSubsystem,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULandscapeEditResourcesSubsystem>,
               InternalVTableHelperCtorCaller<ULandscapeEditResourcesSubsystem>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeEditResourcesSubsystem.InnerSingleton;
}

// ULandscapeEditResourcesSubsystem @ 145f42900

ULandscapeEditResourcesSubsystem * __thiscall
ULandscapeEditResourcesSubsystem::ULandscapeEditResourcesSubsystem
          (ULandscapeEditResourcesSubsystem *this,FVTableHelper *param_1)

{
  UEngineSubsystem::UEngineSubsystem((UEngineSubsystem *)this,param_1);
  this->_padding_ = (longlong)&___7ULandscapeEditResourcesSubsystem__6B_;
  (this->ScratchRenderTargets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScratchRenderTargets).ArrayNum = 0;
  (this->ScratchRenderTargets).ArrayMax = 0;
  return this;
}

// ULandscapeEditResourcesSubsystem @ 145f42940

ULandscapeEditResourcesSubsystem * __thiscall
ULandscapeEditResourcesSubsystem::ULandscapeEditResourcesSubsystem
          (ULandscapeEditResourcesSubsystem *this)

{
  UEngineSubsystem::UEngineSubsystem((UEngineSubsystem *)this);
  this->_padding_ = (longlong)&___7ULandscapeEditResourcesSubsystem__6B_;
  (this->ScratchRenderTargets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScratchRenderTargets).ArrayNum = 0;
  (this->ScratchRenderTargets).ArrayMax = 0;
  return this;
}

// ~ULandscapeEditResourcesSubsystem @ 145f43af0

void __thiscall
ULandscapeEditResourcesSubsystem::~ULandscapeEditResourcesSubsystem
          (ULandscapeEditResourcesSubsystem *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ULandscapeEditResourcesSubsystem__6B_;
  pFVar1 = (this->ScratchRenderTargets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UEngineSubsystem::~UEngineSubsystem((UEngineSubsystem *)this);
  return;
}

// operator() @ 145f47ec0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

bool __thiscall
`ULandscapeEditResourcesSubsystem::RequestScratchRenderTarget'::__l5::<lambda_2>::operator()
          (void *this,ULandscapeScratchRenderTarget *param_1,ULandscapeScratchRenderTarget *param_2)

{
  TObjectPtr<UTextureRenderTarget> *this_00;
  bool bVar1;
  UClass *pUVar2;
  UTextureRenderTarget *pUVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  this_00 = &param_1->RenderTarget;
  iVar4 = 0;
  iVar7 = iVar4;
  iVar6 = iVar4;
  if ((this_00->field0_0x0).DebugPtr != (UTextureRenderTarget *)0x0) {
    pUVar2 = Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar2);
    if ((bVar1) && (pUVar3 = (this_00->field0_0x0).DebugPtr, pUVar3 != (UTextureRenderTarget *)0x0))
    {
      iVar7 = (int)pUVar3[1]._padding_;
      iVar6 = *(int *)((longlong)&pUVar3[1]._padding_ + 4);
    }
    else if ((this_00->field0_0x0).DebugPtr != (UTextureRenderTarget *)0x0) {
      pUVar2 = Z_Construct_UClass_UTextureRenderTarget2DArray_NoRegister();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar2);
      if ((bVar1) &&
         (pUVar3 = (this_00->field0_0x0).DebugPtr, pUVar3 != (UTextureRenderTarget *)0x0)) {
        iVar7 = (int)pUVar3[1]._padding_;
        iVar6 = *(int *)((longlong)&pUVar3[1]._padding_ + 4);
      }
    }
  }
  iVar5 = iVar4;
  if ((param_2->RenderTarget).field0_0x0.DebugPtr == (UTextureRenderTarget *)0x0)
  goto LAB_145f47f9e;
  pUVar2 = Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
  bVar1 = FObjectPtr::IsA((FObjectPtr *)&param_2->RenderTarget,pUVar2);
  if ((!bVar1) ||
     (pUVar3 = (param_2->RenderTarget).field0_0x0.DebugPtr, pUVar3 == (UTextureRenderTarget *)0x0))
  {
    if ((param_2->RenderTarget).field0_0x0.DebugPtr == (UTextureRenderTarget *)0x0)
    goto LAB_145f47f9e;
    pUVar2 = Z_Construct_UClass_UTextureRenderTarget2DArray_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)&param_2->RenderTarget,pUVar2);
    if ((!bVar1) ||
       (pUVar3 = (param_2->RenderTarget).field0_0x0.DebugPtr, pUVar3 == (UTextureRenderTarget *)0x0)
       ) goto LAB_145f47f9e;
  }
  iVar4 = *(int *)((longlong)&pUVar3[1]._padding_ + 4);
  iVar5 = (int)pUVar3[1]._padding_;
LAB_145f47f9e:
  return iVar7 * iVar6 - *(int *)this < iVar5 * iVar4 - *(int *)this;
}

// Deinitialize @ 145f4fb90

void __thiscall
ULandscapeEditResourcesSubsystem::Deinitialize(ULandscapeEditResourcesSubsystem *this)

{
  return;
}

// GetPrivateStaticClass @ 145f54080

UClass * __cdecl ULandscapeEditResourcesSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeEditResourcesSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeEditResourcesSubsystem",
               &Z_Registration_Info_UClass_ULandscapeEditResourcesSubsystem.InnerSingleton,
               StaticRegisterNativesULandscapeEditResourcesSubsystem,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULandscapeEditResourcesSubsystem>,
               InternalVTableHelperCtorCaller<ULandscapeEditResourcesSubsystem>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeEditResourcesSubsystem.InnerSingleton;
}

// Initialize @ 145f581a0

void __thiscall
ULandscapeEditResourcesSubsystem::Initialize
          (ULandscapeEditResourcesSubsystem *this,FSubsystemCollectionBase *param_1)

{
  return;
}

// ReleaseScratchRenderTarget @ 145f5bf80

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
ULandscapeEditResourcesSubsystem::ReleaseScratchRenderTarget
          (ULandscapeEditResourcesSubsystem *this,ULandscapeScratchRenderTarget *param_1)

{
  FScratchRenderTargetParams *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  undefined8 local_58 [2];
  TIntPoint<int>_u_0 local_44;
  
  if (param_1->bIsInUse != false) {
    pFVar4 = (this->ScratchRenderTargets).AllocatorInstance.Data;
    pFVar2 = pFVar4 + (longlong)(this->ScratchRenderTargets).ArrayNum * 8;
    for (; pFVar4 != pFVar2; pFVar4 = pFVar4 + 8) {
      if (*(ULandscapeScratchRenderTarget **)pFVar4 == (ULandscapeScratchRenderTarget *)0x0) {
        bVar5 = param_1 == (ULandscapeScratchRenderTarget *)0x0;
      }
      else {
        bVar5 = *(ULandscapeScratchRenderTarget **)pFVar4 == param_1;
      }
      if (bVar5) goto LAB_145f5bff6;
    }
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("InScratchRenderTarget->IsInUse() && ScratchRenderTargets.Contains(InScratchRenderTarget)"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEditResourcesSubsystem.cpp"
                     ,0x1e9,L"");
  if (bVar5) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_145f5bff6:
  if ((param_1->bIsInUse == false) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInUse()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEditResourcesSubsystem.cpp"
                         ,399,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar1 = &param_1->CurrentRenderTargetParams;
  local_44 = (TIntPoint<int>_u_0)0x0;
  if (pFVar1 != (FScratchRenderTargetParams *)local_58) {
    pFVar2 = (pFVar1->DebugName).Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->DebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_1->CurrentRenderTargetParams).DebugName.Data.ArrayNum = 0;
    (param_1->CurrentRenderTargetParams).DebugName.Data.ArrayMax = 0;
  }
  (param_1->CurrentRenderTargetParams).bExactDimensions = false;
  (param_1->CurrentRenderTargetParams).bUseUAV = false;
  (param_1->CurrentRenderTargetParams).bTargetArraySlicesIndependently = false;
  (param_1->CurrentRenderTargetParams).NumSlices = 0;
  *(undefined8 *)&(param_1->CurrentRenderTargetParams).ClearColor.field0_0x0 = 0;
  *(undefined8 *)((longlong)&(param_1->CurrentRenderTargetParams).ClearColor.field0_0x0 + 8) = 0;
  (param_1->CurrentRenderTargetParams).InitialState = None;
  (param_1->CurrentRenderTargetParams).Resolution.field0_0x0 = local_44;
  (param_1->CurrentRenderTargetParams).Format = RTF_RGBA8;
  param_1->bIsInUse = false;
  return;
}

// RequestScratchRenderTarget @ 145f5cfa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

ULandscapeScratchRenderTarget * __thiscall
ULandscapeEditResourcesSubsystem::RequestScratchRenderTarget
          (ULandscapeEditResourcesSubsystem *this,FScratchRenderTargetParams *param_1)

{
  TArray<TObjectPtr<ULandscapeScratchRenderTarget>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  UObject *pUVar4;
  FName FVar5;
  code *pcVar6;
  ForAnyElementType _Src;
  bool bVar7;
  int iVar8;
  ULandscapeScratchRenderTarget *pUVar9;
  FName *pFVar10;
  FName FVar11;
  UClass *pUVar12;
  UPackage *pUVar13;
  longlong *plVar14;
  FScriptContainerElement *pFVar15;
  undefined1 auStackY_158 [32];
  ForAnyElementType local_108;
  undefined8 local_100;
  FIdentityFunctor local_f8;
  ULandscapeScratchRenderTarget *local_f0;
  ForAnyElementType local_e8;
  int local_e0;
  int local_dc;
  int local_d8 [2];
  FName local_d0;
  FName local_c8 [2];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_158;
  pFVar15 = (this->ScratchRenderTargets).AllocatorInstance.Data;
  pTVar1 = &this->ScratchRenderTargets;
  iVar8 = 0;
  local_108.Data = (FScriptContainerElement *)0x0;
  local_100 = 0;
  pFVar3 = pFVar15 + (longlong)(this->ScratchRenderTargets).ArrayNum * 8;
  _Src.Data = local_108.Data;
  for (; local_108.Data = _Src.Data, pFVar15 != pFVar3; pFVar15 = pFVar15 + 8) {
    if ((*(ULandscapeScratchRenderTarget **)pFVar15)->bIsInUse == false) {
      bVar7 = ULandscapeScratchRenderTarget::IsCompatibleWith
                        (*(ULandscapeScratchRenderTarget **)pFVar15,param_1);
      if (bVar7) {
        if (((local_108.Data <= pFVar15) &&
            (pFVar15 < local_108.Data + (longlong)local_100._4_4_ * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          pUVar9 = (ULandscapeScratchRenderTarget *)(*pcVar6)();
          return pUVar9;
        }
        iVar8 = (int)local_100;
        if ((int)local_100 == local_100._4_4_) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_108,(int *)((longlong)&local_100 + 4));
        }
        local_100 = CONCAT44(local_100._4_4_,iVar8 + 1);
        pUVar4 = *(UObject **)pFVar15;
        *(UObject **)(local_108.Data + (longlong)iVar8 * 8) = pUVar4;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar4);
        }
      }
      iVar8 = (int)local_100;
    }
    _Src.Data = local_108.Data;
  }
  local_e8.Data = (FScriptContainerElement *)0x0;
  local_e0 = iVar8;
  if (iVar8 == 0) {
    local_dc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar8,0,&local_e8,iVar8,&local_dc);
    memcpy(local_e8.Data,_Src.Data,(longlong)iVar8 << 3);
  }
  if (local_108.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data);
  }
  if (local_e0 == 0) {
    pFVar10 = ::FName::FName(local_c8,L"ScratchLandscapeRT");
    FVar5 = *pFVar10;
    FVar11 = (FName)ULandscapeScratchRenderTarget::StaticClass();
    pUVar12 = (UClass *)GetTransientPackage();
    MakeUniqueObjectName((UObject *)&local_d0,pUVar12,FVar11,FVar5.ComparisonIndex.Value.Value);
    pUVar13 = GetTransientPackage();
    if (local_d0 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)pUVar13,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar12 = ULandscapeScratchRenderTarget::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_b8,pUVar12);
    local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_b8._56_8_ = (UPackage *)0x0;
    local_b8._16_4_ = local_d0.ComparisonIndex.Value;
    local_b8._20_4_ = local_d0.Number;
    local_b8._24_4_ = RF_Transient;
    local_b8._40_8_ = (UObject *)0x0;
    local_b8[0x20] = false;
    local_b8._8_8_ = pUVar13;
    pUVar9 = (ULandscapeScratchRenderTarget *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
    if (local_b8._64_8_ != 0) {
      plVar14 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar14 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar14 + 0x10))();
    }
    local_f0 = pUVar9;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar9 != (ULandscapeScratchRenderTarget *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_f0) &&
        ((FScriptContainerElement *)&local_f0 <
         pFVar3 + (longlong)(this->ScratchRenderTargets).ArrayMax * 8)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      pUVar9 = (ULandscapeScratchRenderTarget *)(*pcVar6)();
      return pUVar9;
    }
    iVar8 = (this->ScratchRenderTargets).ArrayNum;
    piVar2 = &(this->ScratchRenderTargets).ArrayMax;
    if (iVar8 == *piVar2) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar1->AllocatorInstance,piVar2);
    }
    (this->ScratchRenderTargets).ArrayNum = iVar8 + 1;
    *(ULandscapeScratchRenderTarget **)((pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 8) =
         local_f0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_f0 != (ULandscapeScratchRenderTarget *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_f0);
    }
  }
  else {
    local_d8[0] = (param_1->Resolution).field0_0x0._s_0.Y * (param_1->Resolution).field0_0x0._s_0.X;
    AlgoImpl::
    IntroSortInternal<ULandscapeScratchRenderTarget_*,int,FIdentityFunctor,TDereferenceWrapper<ULandscapeScratchRenderTarget_*,_ULandscapeEditResourcesSubsystem::RequestScratchRenderTarget_::__l5::<lambda_2>_>_>
              ((ULandscapeScratchRenderTarget **)local_e8.Data,local_e0,local_f8,
               (<lambda_2> *)local_d8);
    if ((local_e0 < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      pUVar9 = (ULandscapeScratchRenderTarget *)(*pcVar6)();
      return pUVar9;
    }
    pUVar9 = *(ULandscapeScratchRenderTarget **)local_e8.Data;
  }
  ULandscapeScratchRenderTarget::OnRequested(pUVar9,param_1);
  if (local_e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data);
  }
  return pUVar9;
}

// StaticRegisterNativesULandscapeEditResourcesSubsystem @ 145f5ec70

void __cdecl
ULandscapeEditResourcesSubsystem::StaticRegisterNativesULandscapeEditResourcesSubsystem(void)

{
  return;
}

