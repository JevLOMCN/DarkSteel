// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 27

// StaticClass @ 14dc99cd0

UClass * __cdecl UMovieGraphRenderLayerSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphRenderLayerSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphRenderLayerSubsystem",
               &Z_Registration_Info_UClass_UMovieGraphRenderLayerSubsystem.InnerSingleton,
               StaticRegisterNativesUMovieGraphRenderLayerSubsystem,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphRenderLayerSubsystem>,
               InternalVTableHelperCtorCaller<UMovieGraphRenderLayerSubsystem>,local_res8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphRenderLayerSubsystem.InnerSingleton;
}

// UMovieGraphRenderLayerSubsystem @ 14dcb1000

UMovieGraphRenderLayerSubsystem * __thiscall
UMovieGraphRenderLayerSubsystem::UMovieGraphRenderLayerSubsystem
          (UMovieGraphRenderLayerSubsystem *this,FVTableHelper *param_1)

{
  UWorldSubsystem::UWorldSubsystem((UWorldSubsystem *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieGraphRenderLayerSubsystem__6B_;
  (this->RenderLayers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RenderLayers).ArrayNum = 0;
  (this->RenderLayers).ArrayMax = 0;
  (this->ActiveRenderLayer).field0_0x0.DebugPtr = (UMovieGraphRenderLayer *)0x0;
  return this;
}

// ~UMovieGraphRenderLayerSubsystem @ 14dcb32d0

void __thiscall
UMovieGraphRenderLayerSubsystem::~UMovieGraphRenderLayerSubsystem
          (UMovieGraphRenderLayerSubsystem *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieGraphRenderLayerSubsystem__6B_;
  pFVar1 = (this->RenderLayers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UWorldSubsystem::~UWorldSubsystem((UWorldSubsystem *)this);
  return;
}

// operator() @ 14dcb4f80

bool __thiscall
`UMovieGraphRenderLayerSubsystem::AddRenderLayer'::__l2::<lambda_1>::operator()
          (void *this,UMovieGraphRenderLayer *param_1)

{
  int iVar1;
  FName FVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  FString *pFVar5;
  bool bVar6;
  FName local_res10;
  TStringView<wchar_t> local_38;
  FString local_28;
  FString local_18;
  
  bVar6 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  if (param_1 != (UMovieGraphRenderLayer *)0x0) {
    local_res10 = (FName)param_1->_padding_;
    ::FName::ToString(&local_res10,&local_28);
    FVar2 = *(FName *)(*(longlong *)this + 0x28);
    pFVar5 = ::FString::FString(&local_18,&local_28);
    local_38.DataPtr = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    iVar1 = (pFVar5->Data).ArrayNum;
    local_38.Size = iVar1 + -1;
    if (iVar1 == 0) {
      local_38.Size = 0;
    }
    bVar4 = ::FName::Equals(FVar2,&local_38);
    pFVar3 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    bVar6 = true;
    if (bVar4) {
      bVar4 = true;
      goto LAB_14dcb502d;
    }
  }
  bVar4 = false;
  if (!bVar6) {
    return false;
  }
LAB_14dcb502d:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar4;
}

// AddRenderLayer @ 14dcba3b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UMovieGraphRenderLayerSubsystem::AddRenderLayer
          (UMovieGraphRenderLayerSubsystem *this,UMovieGraphRenderLayer *param_1)

{
  TArray<TObjectPtr<UMovieGraphRenderLayer>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  UMovieGraphRenderLayer *local_res10;
  FName local_res18 [2];
  UMovieGraphRenderLayer *local_38;
  FString local_30;
  
  if (param_1 == (UMovieGraphRenderLayer *)0x0) {
    if (2 < (byte)LogMovieRenderPipeline._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
      return false;
    }
  }
  else {
    pFVar8 = (this->RenderLayers).AllocatorInstance.Data;
    pTVar1 = &this->RenderLayers;
    pFVar3 = pFVar8 + (longlong)(this->RenderLayers).ArrayNum * 8;
    local_res10 = param_1;
    while( true ) {
      if (pFVar8 == pFVar3) {
        local_38 = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        pFVar3 = (pTVar1->AllocatorInstance).Data;
        if (((pFVar3 <= (FScriptContainerElement *)&local_38) &&
            ((FScriptContainerElement *)&local_38 <
             pFVar3 + (longlong)(this->RenderLayers).ArrayMax * 8)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        iVar7 = (this->RenderLayers).ArrayNum;
        piVar2 = &(this->RenderLayers).ArrayMax;
        if (iVar7 == *piVar2) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&pTVar1->AllocatorInstance,piVar2);
        }
        (this->RenderLayers).ArrayNum = iVar7 + 1;
        *(UMovieGraphRenderLayer **)((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 8) =
             local_38;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_38 != (UMovieGraphRenderLayer *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_38);
        }
        return true;
      }
      bVar5 = `UMovieGraphRenderLayerSubsystem::AddRenderLayer'::__l2::<lambda_1>::operator()
                        (&local_res10,*(UMovieGraphRenderLayer **)pFVar8);
      if (bVar5) break;
      pFVar8 = pFVar8 + 8;
    }
    if (2 < (byte)LogMovieRenderPipeline._0_1_) {
      local_res18[0] = param_1->RenderLayerName;
      ::FName::ToString(local_res18,&local_30);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
      if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_30.Data.AllocatorInstance.Data);
      }
    }
  }
  return false;
}

// ClearActiveRenderLayer @ 14dcbe640

void __thiscall
UMovieGraphRenderLayerSubsystem::ClearActiveRenderLayer(UMovieGraphRenderLayerSubsystem *this)

{
  UMovieGraphRenderLayer *this_00;
  
  this_00 = (this->ActiveRenderLayer).field0_0x0.DebugPtr;
  if (this_00 != (UMovieGraphRenderLayer *)0x0) {
    UMovieGraphRenderLayer::Revert(this_00);
  }
  (this->ActiveRenderLayer).field0_0x0.DebugPtr = (UMovieGraphRenderLayer *)0x0;
  return;
}

// Deinitialize @ 14dcc0270

void __thiscall UMovieGraphRenderLayerSubsystem::Deinitialize(UMovieGraphRenderLayerSubsystem *this)

{
  return;
}

// GetFromWorld @ 14dccd970

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UMovieGraphRenderLayerSubsystem * __cdecl
UMovieGraphRenderLayerSubsystem::GetFromWorld(UWorld *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UMovieGraphRenderLayerSubsystem *pUVar5;
  
  if (param_1 == (UWorld *)0x0) {
    return (UMovieGraphRenderLayerSubsystem *)0x0;
  }
  pUVar3 = StaticClass();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar3 != (UClass *)0x0) goto LAB_14dca8002;
  }
  else if (pUVar3 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
LAB_14dca8002:
    pUVar4 = StaticClass();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar3->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_14dca8032;
    }
  }
  pUVar3 = (UClass *)0x0;
LAB_14dca8032:
  pUVar5 = (UMovieGraphRenderLayerSubsystem *)
           FSubsystemCollectionBase::GetSubsystemInternal
                     ((FSubsystemCollectionBase *)&param_1->SubsystemCollection,pUVar3);
  return pUVar5;
}

// GetPrivateStaticClass @ 14dcd30c0

UClass * __cdecl UMovieGraphRenderLayerSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphRenderLayerSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphRenderLayerSubsystem",
               &Z_Registration_Info_UClass_UMovieGraphRenderLayerSubsystem.InnerSingleton,
               StaticRegisterNativesUMovieGraphRenderLayerSubsystem,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphRenderLayerSubsystem>,
               InternalVTableHelperCtorCaller<UMovieGraphRenderLayerSubsystem>,local_res8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphRenderLayerSubsystem.InnerSingleton;
}

// Initialize @ 14dcd5c00

void __thiscall
UMovieGraphRenderLayerSubsystem::Initialize
          (UMovieGraphRenderLayerSubsystem *this,FSubsystemCollectionBase *param_1)

{
  return;
}

// RemoveRenderLayer @ 14dcdf320

void __thiscall
UMovieGraphRenderLayerSubsystem::RemoveRenderLayer
          (UMovieGraphRenderLayerSubsystem *this,FString *param_1)

{
  int *piVar1;
  int iVar2;
  UMovieGraphRenderLayer *pUVar3;
  FScriptContainerElement *pFVar4;
  FName FVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  FString *pFVar9;
  int iVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  bool bVar14;
  FName local_res8;
  FString local_68;
  FScriptContainerElement *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  TStringView<wchar_t> local_48;
  FString local_38;
  
  bVar14 = false;
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  pUVar3 = (this->ActiveRenderLayer).field0_0x0.DebugPtr;
  if (pUVar3 == (UMovieGraphRenderLayer *)0x0) {
LAB_14dcdf3a7:
    bVar8 = false;
  }
  else {
    local_res8 = (FName)pUVar3->_padding_;
    ::FName::ToString(&local_res8,&local_68);
    iVar10 = (param_1->Data).ArrayNum;
    if (local_68.Data.ArrayNum == iVar10) {
      if (1 < local_68.Data.ArrayNum) {
        iVar10 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)local_68.Data.AllocatorInstance.Data,
                            (wchar_t *)(param_1->Data).AllocatorInstance.Data);
        bVar14 = iVar10 == 0;
        goto LAB_14dcdf397;
      }
    }
    else {
      bVar14 = local_68.Data.ArrayNum + iVar10 == 1;
LAB_14dcdf397:
      if (!bVar14) {
        bVar14 = true;
        goto LAB_14dcdf3a7;
      }
    }
    bVar8 = true;
    bVar14 = true;
  }
  if ((bVar14) && (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (bVar8) {
    pUVar3 = (this->ActiveRenderLayer).field0_0x0.DebugPtr;
    if (pUVar3 != (UMovieGraphRenderLayer *)0x0) {
      UMovieGraphRenderLayer::Revert(pUVar3);
    }
    (this->ActiveRenderLayer).field0_0x0.DebugPtr = (UMovieGraphRenderLayer *)0x0;
  }
  pFVar4 = (this->RenderLayers).AllocatorInstance.Data;
  iVar10 = (this->RenderLayers).ArrayNum;
  pFVar12 = pFVar4;
  while( true ) {
    if (pFVar12 == pFVar4 + (longlong)iVar10 * 8) {
      return;
    }
    FVar5 = *(FName *)(*(longlong *)pFVar12 + 0x28);
    pFVar9 = ::FString::FString(&local_38,param_1);
    local_58 = (pFVar9->Data).AllocatorInstance.Data;
    iVar2 = (pFVar9->Data).ArrayNum;
    iStack_50 = iVar2 + -1;
    if (iVar2 == 0) {
      iStack_50 = 0;
    }
    local_48._12_4_ = uStack_4c;
    local_48.Size = iStack_50;
    local_48.DataPtr = (wchar_t *)local_58;
    bVar14 = ::FName::Equals(FVar5,&local_48);
    pFVar6 = (pFVar9->Data).AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    if (bVar14) break;
    pFVar12 = pFVar12 + 8;
  }
  uVar11 = (uint)((longlong)pFVar12 - (longlong)pFVar4 >> 3);
  if (uVar11 == 0xffffffff) {
    return;
  }
  uVar13 = 0;
  if ((int)uVar11 < (this->RenderLayers).ArrayNum) {
    uVar13 = ~uVar11 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar4 = (this->RenderLayers).AllocatorInstance.Data + (longlong)(int)uVar11 * 8;
  iVar10 = (this->RenderLayers).ArrayNum + ~uVar11;
  if (iVar10 != 0) {
    memmove(pFVar4,pFVar4 + 8,(longlong)iVar10 << 3);
  }
  piVar1 = &(this->RenderLayers).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,&(this->RenderLayers).AllocatorInstance,(this->RenderLayers).ArrayNum,
             &(this->RenderLayers).ArrayMax);
  return;
}

// Reset @ 14dce0b50

void __thiscall UMovieGraphRenderLayerSubsystem::Reset(UMovieGraphRenderLayerSubsystem *this)

{
  int *piVar1;
  UMovieGraphRenderLayer *this_00;
  
  this_00 = (this->ActiveRenderLayer).field0_0x0.DebugPtr;
  if (this_00 != (UMovieGraphRenderLayer *)0x0) {
    UMovieGraphRenderLayer::Revert(this_00);
  }
  (this->ActiveRenderLayer).field0_0x0.DebugPtr = (UMovieGraphRenderLayer *)0x0;
  piVar1 = &(this->RenderLayers).ArrayMax;
  (this->RenderLayers).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->RenderLayers).AllocatorInstance,0,piVar1);
  }
  return;
}

// RevertAndClearActiveRenderLayer @ 14dce2450

void __thiscall
UMovieGraphRenderLayerSubsystem::RevertAndClearActiveRenderLayer
          (UMovieGraphRenderLayerSubsystem *this)

{
  UMovieGraphRenderLayer *this_00;
  
  this_00 = (this->ActiveRenderLayer).field0_0x0.DebugPtr;
  if (this_00 != (UMovieGraphRenderLayer *)0x0) {
    UMovieGraphRenderLayer::Revert(this_00);
  }
  (this->ActiveRenderLayer).field0_0x0.DebugPtr = (UMovieGraphRenderLayer *)0x0;
  return;
}

// SetActiveRenderLayerByName @ 14dce2780

void __thiscall
UMovieGraphRenderLayerSubsystem::SetActiveRenderLayerByName
          (UMovieGraphRenderLayerSubsystem *this,FName *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  
  pFVar2 = (this->RenderLayers).AllocatorInstance.Data;
  iVar1 = (this->RenderLayers).ArrayNum;
  if (pFVar2 != pFVar2 + (longlong)iVar1 * 8) {
    pFVar7 = pFVar2;
    while (*(FName *)(*(longlong *)pFVar7 + 0x28) != *param_1) {
      pFVar7 = pFVar7 + 8;
      if (pFVar7 == pFVar2 + (longlong)iVar1 * 8) {
        return;
      }
    }
    uVar6 = (uint)((longlong)pFVar7 - (longlong)pFVar2 >> 3);
    if (uVar6 != 0xffffffff) {
      uVar5 = 0;
      if ((int)uVar6 < iVar1) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      SetActiveRenderLayerByObj
                (this,*(UMovieGraphRenderLayer **)
                       ((this->RenderLayers).AllocatorInstance.Data + (longlong)(int)uVar6 * 8));
    }
  }
  return;
}

// SetActiveRenderLayerByObj @ 14dce2850

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMovieGraphRenderLayerSubsystem::SetActiveRenderLayerByObj
          (UMovieGraphRenderLayerSubsystem *this,UMovieGraphRenderLayer *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UMovieGraphRenderLayer *this_00;
  UWorld *pUVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res10 [8];
  
  if (param_1 != (UMovieGraphRenderLayer *)0x0) {
    this_00 = (this->ActiveRenderLayer).field0_0x0.DebugPtr;
    if (this_00 != (UMovieGraphRenderLayer *)0x0) {
      UMovieGraphRenderLayer::Revert(this_00);
    }
    (this->ActiveRenderLayer).field0_0x0.DebugPtr = (UMovieGraphRenderLayer *)0x0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->ActiveRenderLayer).field0_0x0.DebugPtr = param_1;
    pUVar3 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
    if (pUVar3 != (UWorld *)0x0) {
      pFVar4 = (param_1->Modifiers).AllocatorInstance.Data;
      iVar2 = (param_1->Modifiers).ArrayNum;
      pFVar1 = pFVar4 + (longlong)iVar2 * 8;
      while( true ) {
        if ((param_1->Modifiers).ArrayNum != iVar2) {
          `TCheckedPointerIterator<TObjectPtr<UMovieGraphModifierBase>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res10);
        }
        if (pFVar4 == pFVar1) break;
        (**(code **)(**(longlong **)pFVar4 + 0x2b0))(*(longlong **)pFVar4,pUVar3);
        pFVar4 = pFVar4 + 8;
      }
    }
  }
  return;
}

// SetAndApplyRenderLayer @ 14dce2e80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMovieGraphRenderLayerSubsystem::SetAndApplyRenderLayer
          (UMovieGraphRenderLayerSubsystem *this,UMovieGraphRenderLayer *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UWorld *pUVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMovieGraphRenderLayer *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->ActiveRenderLayer).field0_0x0.DebugPtr = param_1;
  pUVar3 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  if (pUVar3 != (UWorld *)0x0) {
    pFVar4 = (param_1->Modifiers).AllocatorInstance.Data;
    iVar2 = (param_1->Modifiers).ArrayNum;
    pFVar1 = pFVar4 + (longlong)iVar2 * 8;
    while( true ) {
      if ((param_1->Modifiers).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UMovieGraphModifierBase>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar4 == pFVar1) break;
      (**(code **)(**(longlong **)pFVar4 + 0x2b0))(*(longlong **)pFVar4,pUVar3);
      pFVar4 = pFVar4 + 8;
    }
  }
  return;
}

// ShouldCreateSubsystem @ 14dce4ac0

bool __thiscall
UMovieGraphRenderLayerSubsystem::ShouldCreateSubsystem
          (UMovieGraphRenderLayerSubsystem *this,UObject *param_1)

{
  return true;
}

// StaticRegisterNativesUMovieGraphRenderLayerSubsystem @ 14dce67b0

void __cdecl
UMovieGraphRenderLayerSubsystem::StaticRegisterNativesUMovieGraphRenderLayerSubsystem(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 9;
  local_18.DataPtr = Z_Construct_UClass_UMovieGraphRenderLayerSubsystem_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddRenderLayer @ 14dcef210

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieGraphRenderLayerSubsystem::execAddRenderLayer(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  FProperty *pFVar3;
  code *pcVar4;
  UObject *pUVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  UObject *local_res10;
  UObject *local_res18;
  FName local_res20;
  UObject *local_48;
  FString local_40;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar5 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (UObject *)0x0) {
    if (2 < (byte)LogMovieRenderPipeline._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    }
  }
  else {
    puVar8 = *(undefined8 **)&param_1[1].field_0x10;
    puVar1 = &param_1[1].field_0x10;
    puVar2 = puVar8 + *(int *)&param_1[1].field_0x18;
    local_res18 = local_res10;
    while( true ) {
      if (puVar8 == puVar2) {
        local_48 = pUVar5;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar5);
        }
        if (((*(UObject ***)puVar1 <= &local_48) &&
            (&local_48 < *(UObject ***)puVar1 + *(int *)&param_1[1].field_0x1c)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar7 = *(int *)&param_1[1].field_0x18;
        if (iVar7 == *(int *)&param_1[1].field_0x1c) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,(ForAnyElementType *)puVar1,(int *)&param_1[1].field_0x1c);
        }
        *(int *)&param_1[1].field_0x18 = iVar7 + 1;
        *(UObject **)(*(longlong *)puVar1 + (longlong)iVar7 * 8) = local_48;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_48 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_48);
        }
        *(undefined1 *)param_3 = 1;
        return;
      }
      bVar6 = `UMovieGraphRenderLayerSubsystem::AddRenderLayer'::__l2::<lambda_1>::operator()
                        (&local_res18,(UMovieGraphRenderLayer *)*puVar8);
      if (bVar6) break;
      puVar8 = puVar8 + 1;
    }
    if (2 < (byte)LogMovieRenderPipeline._0_1_) {
      local_res20.ComparisonIndex.Value = *(uint *)&pUVar5[1].field_0x0;
      local_res20.Number = *(uint *)&pUVar5[1].field_0x4;
      ::FName::ToString(&local_res20,&local_40);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
        *(undefined1 *)param_3 = 0;
        return;
      }
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execClearActiveRenderLayer @ 14dcef990

void __cdecl
UMovieGraphRenderLayerSubsystem::execClearActiveRenderLayer
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(UMovieGraphRenderLayer **)&param_1[1].field_0x20 != (UMovieGraphRenderLayer *)0x0) {
    UMovieGraphRenderLayer::Revert(*(UMovieGraphRenderLayer **)&param_1[1].field_0x20);
  }
  *(undefined8 *)&param_1[1].field_0x20 = 0;
  return;
}

// execGetActiveRenderLayer @ 14dcf05d0

void __cdecl
UMovieGraphRenderLayerSubsystem::execGetActiveRenderLayer
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[1].field_0x20;
  return;
}

// execGetFromWorld @ 14dcf0d90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UMovieGraphRenderLayerSubsystem::execGetFromWorld(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMovieGraphRenderLayerSubsystem *pUVar2;
  UWorld *local_res10 [3];
  
  local_res10[0] = (UWorld *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] != (UWorld *)0x0) {
    pUVar2 = UWorld::GetSubsystem<UMovieGraphRenderLayerSubsystem>(local_res10[0]);
    *(UMovieGraphRenderLayerSubsystem **)param_3 = pUVar2;
    return;
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetRenderLayers @ 14dcf1920

void __cdecl
UMovieGraphRenderLayerSubsystem::execGetRenderLayers(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  void *_Src;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (param_3 != &param_1[1].field_0x10) {
    iVar1 = *(int *)&param_1[1].field_0x18;
    _Src = *(void **)&param_1[1].field_0x10;
    *(int *)((longlong)param_3 + 8) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)param_3 + 0xc) == 0)) {
      *(int *)((longlong)param_3 + 0xc) = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,*(int *)((longlong)param_3 + 0xc),param_3,iVar1,
               (int *)((longlong)param_3 + 0xc));
    if (iVar1 != 0) {
      memcpy(*(void **)param_3,_Src,(longlong)iVar1 << 3);
    }
  }
  return;
}

// execRemoveRenderLayer @ 14dcf3080

void __cdecl
UMovieGraphRenderLayerSubsystem::execRemoveRenderLayer
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  RemoveRenderLayer((UMovieGraphRenderLayerSubsystem *)param_1,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execReset @ 14dcf3120

void __cdecl
UMovieGraphRenderLayerSubsystem::execReset(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(UMovieGraphRenderLayer **)&param_1[1].field_0x20 != (UMovieGraphRenderLayer *)0x0) {
    UMovieGraphRenderLayer::Revert(*(UMovieGraphRenderLayer **)&param_1[1].field_0x20);
  }
  *(undefined8 *)&param_1[1].field_0x20 = 0;
  *(undefined4 *)&param_1[1].field_0x18 = 0;
  if (*(int *)&param_1[1].field_0x1c != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&param_1[1].field_0x10,0,(int *)&param_1[1].field_0x1c);
  }
  return;
}

// execSetActiveRenderLayerByName @ 14dcf31c0

void __cdecl
UMovieGraphRenderLayerSubsystem::execSetActiveRenderLayerByName
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong *plVar6;
  uint uVar7;
  longlong *plVar8;
  longlong local_18 [2];
  
  local_18[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  plVar8 = local_18;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar8 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  plVar2 = *(longlong **)&param_1[1].field_0x10;
  if (plVar2 != plVar2 + *(int *)&param_1[1].field_0x18) {
    plVar6 = plVar2;
    while (*(longlong *)(*plVar6 + 0x28) != *plVar8) {
      plVar6 = plVar6 + 1;
      if (plVar6 == plVar2 + *(int *)&param_1[1].field_0x18) {
        return;
      }
    }
    uVar5 = (uint)((longlong)plVar6 - (longlong)plVar2 >> 3);
    if (uVar5 != 0xffffffff) {
      uVar7 = 0;
      if ((int)uVar5 < *(int *)&param_1[1].field_0x18) {
        uVar7 = ~uVar5 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      SetActiveRenderLayerByObj
                ((UMovieGraphRenderLayerSubsystem *)param_1,
                 *(UMovieGraphRenderLayer **)
                  (*(longlong *)&param_1[1].field_0x10 + (longlong)(int)uVar5 * 8));
    }
  }
  return;
}

// execSetActiveRenderLayerByObj @ 14dcf3300

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UMovieGraphRenderLayerSubsystem::execSetActiveRenderLayerByObj
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  FProperty *pFVar3;
  UObject *pUVar4;
  UWorld *pUVar5;
  undefined8 *puVar6;
  undefined1 local_res10 [8];
  UObject *local_res20;
  
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  pUVar4 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 != (UObject *)0x0) {
    if (*(UMovieGraphRenderLayer **)&param_1[1].field_0x20 != (UMovieGraphRenderLayer *)0x0) {
      UMovieGraphRenderLayer::Revert(*(UMovieGraphRenderLayer **)&param_1[1].field_0x20);
    }
    *(undefined8 *)&param_1[1].field_0x20 = 0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    *(UObject **)&param_1[1].field_0x20 = pUVar4;
    pUVar5 = UWorldSubsystem::GetWorld((UWorldSubsystem *)param_1);
    if (pUVar5 != (UWorld *)0x0) {
      puVar6 = *(undefined8 **)&pUVar4[1].field_0x8;
      iVar2 = *(int *)&pUVar4[1].field_0x10;
      puVar1 = puVar6 + iVar2;
      while( true ) {
        if (*(int *)&pUVar4[1].field_0x10 != iVar2) {
          `TCheckedPointerIterator<TObjectPtr<UMovieGraphModifierBase>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res10);
        }
        if (puVar6 == puVar1) break;
        (**(code **)(*(longlong *)*puVar6 + 0x2b0))((longlong *)*puVar6,pUVar5);
        puVar6 = puVar6 + 1;
      }
    }
  }
  return;
}

