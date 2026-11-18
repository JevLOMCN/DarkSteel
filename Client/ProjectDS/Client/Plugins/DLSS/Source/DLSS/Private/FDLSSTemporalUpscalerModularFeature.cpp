// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DLSS
// Functions: 17

// ~FDLSSTemporalUpscalerModularFeature @ 14de21ec0

void __thiscall
FDLSSTemporalUpscalerModularFeature::~FDLSSTemporalUpscalerModularFeature
          (FDLSSTemporalUpscalerModularFeature *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  
  *(undefined4 *)&(this->CustomSettings_RenderThread).field_0x48 = 0;
  pvVar3 = *(void **)&(this->CustomSettings_RenderThread).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FInstancedPropertyBag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FInstancedPropertyBag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FInstancedPropertyBag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CustomSettings_RenderThread);
  *(undefined4 *)&(this->CustomSettings).field_0x48 = 0;
  pvVar3 = *(void **)&(this->CustomSettings).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FInstancedPropertyBag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FInstancedPropertyBag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FInstancedPropertyBag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CustomSettings);
  DestructItems<FSceneViewExtensionIsActiveFunctor,int>
            ((FSceneViewExtensionIsActiveFunctor *)
             (this->IsActiveThisFrameFunctions).AllocatorInstance.Data,
             (this->IsActiveThisFrameFunctions).ArrayNum);
  pFVar4 = (this->IsActiveThisFrameFunctions).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  plVar5 = (longlong *)this->_padding_;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  return;
}

// operator() @ 14de22200

void __thiscall
`FDLSSTemporalUpscalerModularFeature::PostConfigureViewFamily'::__l25::<lambda_2>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FInstancedStruct *this_00;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14de22230;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    if (*(longlong *)this != 0) {
      this_00 = &TMapBase<unsigned_int,FInstancedPropertyBag,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FInstancedPropertyBag,0>_>
                 ::FindOrAddImpl<unsigned_int_const_&>
                           ((TMapBase<unsigned_int,FInstancedPropertyBag,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FInstancedPropertyBag,0>_>
                             *)(*(longlong *)this + 0x80),*(uint *)((longlong)this + 0x10),
                            (uint *)((longlong)this + 0x10))->Value;
      if (this_00 != (FInstancedStruct *)((longlong)this + 0x18)) {
        FInstancedStruct::InitializeAs
                  (this_00,(((FInstancedStruct *)((longlong)this + 0x18))->ScriptStruct).field0_0x0.
                           DebugPtr,*(uchar **)((longlong)this + 0x20));
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        return;
      }
    }
  }
LAB_14de22230:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// AddSceneViewExtensionIsActiveFunctor @ 14de24a10

bool __thiscall
FDLSSTemporalUpscalerModularFeature::AddSceneViewExtensionIsActiveFunctor
          (FDLSSTemporalUpscalerModularFeature *this,FSceneViewExtensionIsActiveFunctor *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  FSceneViewExtensionIsActiveFunctor *pFVar3;
  undefined4 uVar6;
  longlong lVar4;
  undefined8 *puVar5;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  bool bVar15;
  undefined1 uVar16;
  int iVar17;
  FSceneViewExtensionIsActiveFunctor *pFVar18;
  undefined8 *puVar19;
  FScriptContainerElement *pFVar20;
  uint local_38;
  uint uStack_34;
  int iStack_2c;
  
  pFVar3 = (FSceneViewExtensionIsActiveFunctor *)
           (this->IsActiveThisFrameFunctions).AllocatorInstance.Data;
  uVar11 = (param_1->Guid).A;
  uVar12 = (param_1->Guid).B;
  uVar13 = (param_1->Guid).C;
  uVar14 = (param_1->Guid).D;
  pFVar18 = pFVar3;
  do {
    if (pFVar18 == pFVar3 + (this->IsActiveThisFrameFunctions).ArrayNum) {
LAB_14de24ab4:
      if (((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->IsActiveThisFrameFunctions).ArrayMax))
         && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar15)) {
        pcVar7 = (code *)swi(3);
        uVar16 = (*pcVar7)();
        return (bool)uVar16;
      }
      iVar17 = (this->IsActiveThisFrameFunctions).ArrayNum;
      piVar1 = &(this->IsActiveThisFrameFunctions).ArrayMax;
      if (iVar17 == *piVar1) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1040,&(this->IsActiveThisFrameFunctions).AllocatorInstance,piVar1);
      }
      (this->IsActiveThisFrameFunctions).ArrayNum = iVar17 + 1;
      uVar8 = (param_1->Guid).B;
      uVar9 = (param_1->Guid).C;
      uVar10 = (param_1->Guid).D;
      pFVar20 = (this->IsActiveThisFrameFunctions).AllocatorInstance.Data + (longlong)iVar17 * 0x40;
      *(uint *)pFVar20 = (param_1->Guid).A;
      *(uint *)(pFVar20 + 4) = uVar8;
      *(uint *)(pFVar20 + 8) = uVar9;
      *(uint *)(pFVar20 + 0xc) = uVar10;
      lVar4 = *(longlong *)&param_1->IsActiveFunction;
      *(longlong *)(pFVar20 + 0x10) = lVar4;
      *(undefined8 *)(pFVar20 + 0x38) = 0;
      if (lVar4 != 0) {
        puVar5 = *(undefined8 **)&(param_1->IsActiveFunction).field_0x28;
        puVar19 = (undefined8 *)&(param_1->IsActiveFunction).field_0x10;
        if (puVar5 != (undefined8 *)0x0) {
          puVar19 = puVar5;
        }
        (**(code **)*puVar19)();
      }
      return true;
    }
    uVar2 = (pFVar18->Guid).C;
    uVar6 = (pFVar18->Guid).D;
    if (((uVar6 == uVar14 && (pFVar18->Guid).B == uVar12) && uVar13 == uVar2) &&
        (pFVar18->Guid).A == uVar11) {
      if ((int)((longlong)pFVar18 - (longlong)pFVar3 >> 6) != -1) {
        return false;
      }
      goto LAB_14de24ab4;
    }
    pFVar18 = pFVar18 + 1;
  } while( true );
}

// GetCustomSettings @ 14de26a10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FInstancedPropertyBag * __thiscall
FDLSSTemporalUpscalerModularFeature::GetCustomSettings
          (FDLSSTemporalUpscalerModularFeature *this,FSceneView *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FInstancedPropertyBag *pFVar5;
  undefined1 *puVar6;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\DLSS\\Private\\DLSSUpscalerModularFeature.cpp"
                       ,0x10d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FInstancedPropertyBag *)(*pcVar1)();
      return pFVar5;
    }
  }
  uVar3 = FSceneView::GetViewKey(param_1);
  if (*(int *)&(this->CustomSettings).field_0x8 != *(int *)&(this->CustomSettings).field_0x34) {
    puVar6 = *(undefined1 **)&(this->CustomSettings).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->CustomSettings).field_0x38;
    }
    iVar4 = *(int *)(puVar6 + (ulonglong)(*(int *)&(this->CustomSettings).field_0x48 - 1U & uVar3) *
                              4);
    if (iVar4 != -1) {
      do {
        if (*(uint *)((longlong)iVar4 * 0x20 + *(longlong *)&this->CustomSettings) == uVar3) {
          pFVar5 = TMapBase<unsigned_int,FInstancedPropertyBag,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FInstancedPropertyBag,0>_>
                   ::FindChecked((TMapBase<unsigned_int,FInstancedPropertyBag,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FInstancedPropertyBag,0>_>
                                  *)&this->CustomSettings,uVar3);
          return pFVar5;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *(longlong *)&this->CustomSettings);
      } while (iVar4 != -1);
    }
  }
  return (FInstancedPropertyBag *)0x0;
}

// GetCustomSettings_RenderThread @ 14de26ad0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FInstancedPropertyBag * __thiscall
FDLSSTemporalUpscalerModularFeature::GetCustomSettings_RenderThread
          (FDLSSTemporalUpscalerModularFeature *this,FSceneView *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FInstancedPropertyBag *pFVar6;
  undefined1 *puVar7;
  
  bVar3 = IsInRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\DLSS\\Private\\DLSSUpscalerModularFeature.cpp"
                       ,0x11d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FInstancedPropertyBag *)(*pcVar2)();
      return pFVar6;
    }
  }
  uVar4 = FSceneView::GetViewKey(param_1);
  if (*(int *)&(this->CustomSettings_RenderThread).field_0x8 !=
      *(int *)&(this->CustomSettings_RenderThread).field_0x34) {
    puVar7 = *(undefined1 **)&(this->CustomSettings_RenderThread).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->CustomSettings_RenderThread).field_0x38;
    }
    iVar5 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->CustomSettings_RenderThread).field_0x48 - 1U & uVar4)
                              * 4);
    if (iVar5 != -1) {
      lVar1 = *(longlong *)&this->CustomSettings_RenderThread;
      do {
        if (*(uint *)((longlong)iVar5 * 0x20 + lVar1) == uVar4) {
          pFVar6 = TMapBase<unsigned_int,FInstancedPropertyBag,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FInstancedPropertyBag,0>_>
                   ::FindChecked((TMapBase<unsigned_int,FInstancedPropertyBag,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FInstancedPropertyBag,0>_>
                                  *)&this->CustomSettings_RenderThread,uVar4);
          return pFVar6;
        }
        iVar5 = *(int *)((longlong)iVar5 * 0x20 + 0x18 + lVar1);
      } while (iVar5 != -1);
    }
  }
  return (FInstancedPropertyBag *)0x0;
}

// GetDisplayName @ 14de26c90

FText * __thiscall
FDLSSTemporalUpscalerModularFeature::GetDisplayName(FDLSSTemporalUpscalerModularFeature *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::FromString(&::DisplayName,L"NVIDIA DLSS Super Resolution (DLSS-SR)");
      atexit(`FDLSSTemporalUpscalerModularFeature::GetDisplayName'::__l2::
             _dynamic_atexit_destructor_for__DisplayName__);
      _Init_thread_footer(&::_TSS0);
      return &::DisplayName;
    }
  }
  return &::DisplayName;
}

// GetName @ 14de27360

FName * __thiscall
FDLSSTemporalUpscalerModularFeature::GetName(FDLSSTemporalUpscalerModularFeature *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::FeatureName,L"DLSS");
      _Init_thread_footer(&::_TSS0);
      return &::FeatureName;
    }
  }
  return &::FeatureName;
}

// GetQualityMode @ 14de276f0

/* WARNING: Enum "EDLSSQualityMode": Some values do not have unique names */

TOptional<EDLSSQualityMode> __cdecl
FDLSSTemporalUpscalerModularFeature::GetQualityMode(FInstancedPropertyBag *param_1,int param_2)

{
  bool bVar1;
  FName *pFVar2;
  UPackage *pUVar3;
  FDLSSUpscaler *this;
  undefined4 in_register_00000014;
  int in_R8D;
  undefined1 local_res20;
  char local_res21;
  FName local_18 [2];
  
  pFVar2 = ::FName::FName(local_18,"Quality");
  if (Z_Registration_Info_UEnum_EDLSSUpscalerModularFeatureQuality.OuterSingleton == (UEnum *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_DLSS();
    Z_Registration_Info_UEnum_EDLSSUpscalerModularFeatureQuality.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_DLSS_EDLSSUpscalerModularFeatureQuality,(UObject *)pUVar3,
                       L"EDLSSUpscalerModularFeatureQuality");
  }
  FInstancedPropertyBag::GetValueEnum
            ((FInstancedPropertyBag *)CONCAT44(in_register_00000014,param_2),(FName)&local_res20,
             (UEnum *)*pFVar2);
  if (local_res21 == '\0') {
    switch(local_res20) {
    case 0:
      this = DLSS::TemporalUpscalerModularFeature::GetUpscaler();
      if (this == (FDLSSUpscaler *)0x0) goto switchD_14de2778d_caseD_1;
      if (in_R8D < 8300000) {
        if (0x384e0f < in_R8D) goto LAB_14de277c9;
        if (in_R8D < 0x1ef9b0) goto switchD_14de2778d_default;
      }
      else {
        bVar1 = FDLSSUpscaler::IsQualityModeSupported(this,MinValue);
        if (bVar1) goto switchD_14de2778d_caseD_5;
LAB_14de277c9:
        bVar1 = FDLSSUpscaler::IsQualityModeSupported(this,Performance);
        if (bVar1) goto switchD_14de2778d_caseD_4;
      }
      bVar1 = FDLSSUpscaler::IsQualityModeSupported(this,Quality);
      if (!bVar1) goto switchD_14de2778d_default;
    case 2:
      *(undefined4 *)&(param_1->Value).ScriptStruct.field0_0x0 = 1;
      *(undefined1 *)((longlong)&(param_1->Value).ScriptStruct.field0_0x0 + 4) = 1;
      break;
    case 1:
switchD_14de2778d_caseD_1:
      *(undefined4 *)&(param_1->Value).ScriptStruct.field0_0x0 = 2;
      *(undefined1 *)((longlong)&(param_1->Value).ScriptStruct.field0_0x0 + 4) = 1;
      break;
    case 3:
      *(undefined4 *)&(param_1->Value).ScriptStruct.field0_0x0 = 0;
      *(undefined1 *)((longlong)&(param_1->Value).ScriptStruct.field0_0x0 + 4) = 1;
      break;
    case 4:
switchD_14de2778d_caseD_4:
      *(undefined4 *)&(param_1->Value).ScriptStruct.field0_0x0 = 0xffffffff;
      *(undefined1 *)((longlong)&(param_1->Value).ScriptStruct.field0_0x0 + 4) = 1;
      break;
    case 5:
switchD_14de2778d_caseD_5:
      *(undefined4 *)&(param_1->Value).ScriptStruct.field0_0x0 = 0xfffffffe;
      *(undefined1 *)((longlong)&(param_1->Value).ScriptStruct.field0_0x0 + 4) = 1;
      break;
    case 6:
      *(undefined4 *)&(param_1->Value).ScriptStruct.field0_0x0 = 3;
      *(undefined1 *)((longlong)&(param_1->Value).ScriptStruct.field0_0x0 + 4) = 1;
      break;
    default:
      goto switchD_14de2778d_default;
    }
  }
  else {
switchD_14de2778d_default:
    *(undefined1 *)((longlong)&(param_1->Value).ScriptStruct.field0_0x0 + 4) = 0;
  }
  return (TOptional<EDLSSQualityMode>)param_1;
}

// GetSettings @ 14de27880

bool __thiscall
FDLSSTemporalUpscalerModularFeature::GetSettings
          (FDLSSTemporalUpscalerModularFeature *this,FInstancedPropertyBag *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDLSSUpscalerModularFeatureSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DLSS();
    Z_Registration_Info_UScriptStruct_FDLSSUpscalerModularFeatureSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDLSSUpscalerModularFeatureSettings,
                         (UObject *)pUVar1,L"DLSSUpscalerModularFeatureSettings");
  }
  DLSS::TemporalUpscalerModularFeature::CopyStructToPropertyBag
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FDLSSUpscalerModularFeatureSettings.OuterSingleton,
             &DefaultUpscalerSettings,param_1);
  return true;
}

// GetTooltipText @ 14de279c0

FText * __thiscall
FDLSSTemporalUpscalerModularFeature::GetTooltipText(FDLSSTemporalUpscalerModularFeature *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::FromString(&TooltipText,L"NVIDIA DLSS Super Resolution/DLAA");
      atexit(`FDLSSTemporalUpscalerModularFeature::GetTooltipText'::__l2::
             _dynamic_atexit_destructor_for__TooltipText__);
      _Init_thread_footer(&::_TSS0);
      return &TooltipText;
    }
  }
  return &TooltipText;
}

// IsFeatureEnabled @ 14de28030

bool __thiscall
FDLSSTemporalUpscalerModularFeature::IsFeatureEnabled(FDLSSTemporalUpscalerModularFeature *this)

{
  char cVar1;
  IDLSSModuleInterface *pIVar2;
  longlong lVar3;
  
  pIVar2 = DLSS::TemporalUpscalerModularFeature::GetAPI();
  cVar1 = (**(code **)((longlong)*pIVar2 + 0x40))(pIVar2);
  if (cVar1 == '\0') {
    pIVar2 = DLSS::TemporalUpscalerModularFeature::GetAPI();
    lVar3 = (**(code **)((longlong)*pIVar2 + 0x68))(pIVar2);
    return lVar3 != 0;
  }
  return false;
}

// PostConfigureViewFamily @ 14de281c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EDLSSQualityMode": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FDLSSTemporalUpscalerModularFeature::PostConfigureViewFamily
          (FDLSSTemporalUpscalerModularFeature *this,FInstancedPropertyBag *param_1,
          FUpscalerModularFeatureParameters *param_2,FSceneViewFamilyContext *param_3)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  TReferenceControllerBase<1> *pTVar8;
  code *pcVar9;
  char cVar10;
  bool bVar11;
  undefined1 uVar12;
  atomic<int> aVar13;
  IDLSSModuleInterface *pIVar14;
  FDLSSUpscaler *this_00;
  FLegacyScreenPercentageDriver *pFVar15;
  TWeakPtr<FDLSSTemporalUpscalerModularFeature,1> *pTVar16;
  FRenderCommandList *pFVar17;
  FCommandList *pFVar18;
  FRenderCommandTag *pFVar19;
  code *pcVar20;
  code **ppcVar21;
  IConsoleManager *pIVar22;
  longlong *plVar23;
  TConsoleVariableData<float> *pTVar24;
  undefined ***pppuVar25;
  uint *puVar26;
  TReferenceControllerBase<1> *pTVar27;
  int iVar28;
  undefined1 *puVar29;
  longlong *plVar30;
  ulonglong uVar31;
  code *pcVar32;
  undefined8 *puVar33;
  FInstancedStruct *pFVar34;
  int iVar35;
  FDLSSTemporalUpscalerModularFeature *pFVar36;
  undefined8 *puVar37;
  float fVar38;
  float fVar39;
  undefined1 auStackY_1e8 [32];
  undefined1 local_1b8;
  undefined1 local_1b7 [3];
  uint local_1b4;
  FDLSSTemporalUpscalerModularFeature *local_1b0;
  int local_1a8 [2];
  undefined8 *local_1a0;
  TObjectPtr<UScriptStruct_const_>_u_0 local_198;
  FInstancedStruct *local_190;
  code *local_188;
  TReferenceControllerBase<1> *local_180;
  uint local_178;
  TObjectPtr<UScriptStruct_const_>_u_0 local_170;
  code *pcStack_168;
  uint *local_160;
  TWeakPtr<FDLSSTemporalUpscalerModularFeature,1> local_158;
  code *local_148 [2];
  code *local_138 [3];
  code **local_120;
  code *local_118 [2];
  undefined **local_108;
  FDLSSTemporalUpscalerModularFeature *pFStack_100;
  TReferenceControllerBase<1> *local_f8;
  undefined ***local_f0;
  code *local_e8 [2];
  undefined **local_d8;
  FDLSSTemporalUpscalerModularFeature *pFStack_d0;
  TReferenceControllerBase<1> *local_c8;
  undefined ***local_c0;
  byte local_b8;
  undefined1 local_a8 [40];
  code **local_80;
  byte local_78;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  local_1b0 = this;
  local_190 = &param_1->Value;
  pIVar14 = DLSS::TemporalUpscalerModularFeature::GetAPI();
  cVar10 = (**(code **)((longlong)*pIVar14 + 0x40))(pIVar14);
  if (cVar10 != '\0') {
    return false;
  }
  pIVar14 = DLSS::TemporalUpscalerModularFeature::GetAPI();
  this_00 = (FDLSSUpscaler *)(**(code **)((longlong)*pIVar14 + 0x68))(pIVar14);
  if (this_00 == (FDLSSUpscaler *)0x0) {
    return false;
  }
  plVar30 = *(longlong **)&param_3->field_0x8;
  iVar4 = *(int *)&param_3->field_0x10;
  plVar23 = plVar30 + iVar4;
  iVar28 = 0;
  while( true ) {
    iVar35 = iVar28;
    if (*(int *)&param_3->field_0x10 != iVar4) {
      local_1b8 = 0;
      `TCheckedPointerIterator<FSceneView_const_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_1b8);
    }
    pFVar34 = local_190;
    if (plVar30 == plVar23) break;
    lVar6 = *plVar30;
    plVar30 = plVar30 + 1;
    iVar28 = (*(int *)(lVar6 + 0x38c) - *(int *)(lVar6 + 900)) *
             (*(int *)(lVar6 + 0x388) - *(int *)(lVar6 + 0x380));
    if (iVar28 <= iVar35) {
      iVar28 = iVar35;
    }
  }
  GetQualityMode((FInstancedPropertyBag *)&local_198.ObjectPtr,(int)local_190);
  if (local_198._4_1_ == '\0') {
    return false;
  }
  bVar11 = FDLSSUpscaler::IsQualityModeSupported(this_00,local_198._0_4_);
  if (!bVar11) {
    return false;
  }
  fVar38 = FDLSSUpscaler::GetOptimalResolutionFractionForQuality(this_00,local_198._0_4_);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar22 = IConsoleManager::Get();
    plVar23 = (longlong *)(**(code **)((longlong)*pIVar22 + 0xc0))(pIVar22,L"r.ScreenPercentage",1);
    pTVar24 = (TConsoleVariableData<float> *)0x0;
    if (plVar23 != (longlong *)0x0) {
      pTVar24 = (TConsoleVariableData<float> *)(**(code **)(*plVar23 + 0x70))(plVar23);
    }
    CVarScreenPercentage = pTVar24;
    _Init_thread_footer(&::_TSS0);
  }
  pTVar24 = CVarScreenPercentage;
  if (CVarScreenPercentage == (TConsoleVariableData<float> *)0x0) {
LAB_14de28366:
    fVar39 = __real_3f800000;
  }
  else {
    bVar11 = IsInParallelGameThread();
    if (((!bVar11) && (bVar11 = IsInGameThread(), !bVar11)) &&
       (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007945>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6c9,"GetShadowIndex() == 0"), bVar11)) {
      pcVar9 = (code *)swi(3);
      uVar12 = (*pcVar9)();
      return (bool)uVar12;
    }
    fVar39 = pTVar24->ShadowedValue[0] * __real_3c23d70a;
    if (fVar39 <= 0.0) goto LAB_14de28366;
  }
  *(float *)&param_3->field_0x100 = param_2->SecondaryScreenPercentage;
  pFVar15 = ::operator_new(0x18);
  if (pFVar15 == (FLegacyScreenPercentageDriver *)0x0) {
    pFVar15 = (FLegacyScreenPercentageDriver *)0x0;
  }
  else {
    pFVar15 = FLegacyScreenPercentageDriver::FLegacyScreenPercentageDriver
                        (pFVar15,(FSceneViewFamily *)param_3,fVar38 / fVar39);
    if (pFVar15 != (FLegacyScreenPercentageDriver *)0x0) goto LAB_14de283ce;
  }
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("InScreenPercentageInterface",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\SceneView.h"
                      ,0xa24,L"");
  if (bVar11) {
    pcVar9 = (code *)swi(3);
    uVar12 = (*pcVar9)();
    return (bool)uVar12;
  }
LAB_14de283ce:
  if ((*(longlong *)&param_3->field_0x180 != 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ScreenPercentageInterface == nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\SceneView.h"
                          ,0xa25,L"View family already had a screen percentage interface assigned.")
     , bVar11)) {
    pcVar9 = (code *)swi(3);
    uVar12 = (*pcVar9)();
    return (bool)uVar12;
  }
  pFVar36 = local_1b0;
  *(FLegacyScreenPercentageDriver **)&param_3->field_0x180 = pFVar15;
  if (local_1b0->LastFrameCounter != GFrameCounter) {
    local_1b0->LastFrameCounter = GFrameCounter;
    if (0 < *(int *)&(local_1b0->CustomSettings).field_0x8 -
            *(int *)&(local_1b0->CustomSettings).field_0x34) {
      TSet<TTuple<unsigned_int,FInstancedPropertyBag>,TDefaultMapHashableKeyFuncs<unsigned_int,FInstancedPropertyBag,0>,FDefaultSetAllocator>
      ::Reset((TSet<TTuple<unsigned_int,FInstancedPropertyBag>,TDefaultMapHashableKeyFuncs<unsigned_int,FInstancedPropertyBag,0>,FDefaultSetAllocator>
               *)&local_1b0->CustomSettings);
      pTVar16 = TSharedFromThis<FDLSSTemporalUpscalerModularFeature,1>::AsWeak
                          ((TSharedFromThis<FDLSSTemporalUpscalerModularFeature,1> *)
                           &pFVar36->_padding_,&local_158);
      pFStack_100 = pTVar16->Object;
      local_f8 = (pTVar16->WeakReferenceCount).ReferenceController;
      (pTVar16->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pTVar16->Object = (FDLSSTemporalUpscalerModularFeature *)0x0;
      local_108 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`FDLSSTemporalUpscalerModularFeature::PostConfigureViewFamily'::`21'::<lambda_1>,1,0>
                   ::_vftable_;
      local_118[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`FDLSSTemporalUpscalerModularFeature::PostConfigureViewFamily'::__l21::<lambda_1>,void,FRHICommandListImmediate_&>
                     ::Call;
      local_f0 = (undefined ***)0x0;
      pFVar17 = FRenderCommandList::GetInstanceTLS();
      if (pFVar17 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_FDLSSTemporalUpscalerModularFeature::PostConfigureViewFamily_::__l21::TSTR_DLSSTemporalUpscalerModularFeature_ClearData359>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_118);
      }
      else {
        pFVar18 = FRenderCommandList::GetRenderThread(pFVar17);
        local_e8[0] = local_118[0];
        local_c0 = local_f0;
        local_d8 = local_108;
        pFStack_d0 = pFStack_100;
        local_c8 = local_f8;
        local_118[0] = (code *)0x0;
        local_b8 = 2;
        pFVar19 = (FRenderCommandTag *)
                  TRenderCommandTag<`FDLSSTemporalUpscalerModularFeature::PostConfigureViewFamily'::__l21::TSTR_DLSSTemporalUpscalerModularFeature_ClearData359>
                  ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (pFVar18,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_e8,pFVar19);
        uVar31 = (ulonglong)local_b8;
        if ((2 < uVar31) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                ,0xd4,L""), bVar11)) {
          pcVar9 = (code *)swi(3);
          uVar12 = (*pcVar9)();
          return (bool)uVar12;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar31] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if (local_e8[0] != (code *)0x0) {
            pppuVar25 = (undefined ***)(local_e8 + 2);
            if (local_c0 != (undefined ***)0x0) {
              pppuVar25 = local_c0;
            }
            (*(code *)(*pppuVar25)[2])();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar31])
                    ((TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                      *)local_e8);
        }
      }
      if (local_118[0] != (code *)0x0) {
        pppuVar25 = &local_108;
        if (local_f0 != (undefined ***)0x0) {
          pppuVar25 = local_f0;
        }
        (*(code *)(*pppuVar25)[2])();
      }
      if (local_158.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(local_158.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)((local_158.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (local_158.WeakReferenceCount.ReferenceController,1);
        }
      }
    }
  }
  puVar37 = *(undefined8 **)&param_3->field_0x8;
  iVar4 = *(int *)&param_3->field_0x10;
  puVar33 = puVar37 + iVar4;
  local_1a0 = puVar33;
  do {
    if (*(int *)&param_3->field_0x10 != iVar4) {
      local_1b7[0] = 0;
      `TCheckedPointerIterator<FSceneView_const_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_1b7);
    }
    if (puVar37 == puVar33) {
      return true;
    }
    if ((FSceneView *)*puVar37 != (FSceneView *)0x0) {
      local_1b4 = FSceneView::GetViewKey((FSceneView *)*puVar37);
      if (*(int *)&(pFVar36->CustomSettings).field_0x8 !=
          *(int *)&(pFVar36->CustomSettings).field_0x34) {
        puVar7 = *(undefined1 **)&(pFVar36->CustomSettings).field_0x40;
        puVar29 = &(pFVar36->CustomSettings).field_0x38;
        if (puVar7 != (undefined1 *)0x0) {
          puVar29 = puVar7;
        }
        uVar5 = *(uint *)(puVar29 +
                         (ulonglong)(*(int *)&(pFVar36->CustomSettings).field_0x48 - 1U & local_1b4)
                         * 4);
        if (uVar5 != 0xffffffff) {
          do {
            puVar26 = (uint *)((longlong)(int)uVar5 * 0x20 + *(longlong *)&pFVar36->CustomSettings);
            if (*puVar26 == local_1b4) {
              if (puVar26 != (uint *)0x0) goto LAB_14de2866b;
              break;
            }
            uVar5 = puVar26[6];
          } while (uVar5 != 0xffffffff);
        }
      }
      local_160 = &local_1b4;
      TSet<TTuple<unsigned_int,FInstancedPropertyBag>,TDefaultMapHashableKeyFuncs<unsigned_int,FInstancedPropertyBag,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
                ((TSet<TTuple<unsigned_int,FInstancedPropertyBag>,TDefaultMapHashableKeyFuncs<unsigned_int,FInstancedPropertyBag,0>,FDefaultSetAllocator>
                  *)&pFVar36->CustomSettings,(uint)local_1a8,
                 (TKeyInitializer<unsigned_int_const_&> *)(ulonglong)local_1b4,(bool *)&local_160);
      puVar26 = (uint *)((longlong)local_1a8[0] * 0x20 + *(longlong *)&pFVar36->CustomSettings);
LAB_14de2866b:
      if ((FInstancedStruct *)(puVar26 + 2) != pFVar34) {
        FInstancedStruct::InitializeAs
                  ((FInstancedStruct *)(puVar26 + 2),(pFVar34->ScriptStruct).field0_0x0.DebugPtr,
                   pFVar34->StructMemory);
      }
      pcVar9 = (code *)pFVar36->_padding_;
      pTVar8 = (TReferenceControllerBase<1> *)pFVar36->_padding_;
      pTVar27 = pTVar8;
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
        aVar3 = pTVar8->SharedReferenceCount;
        do {
          if (aVar3 == (atomic<int>)0x0) {
            pTVar27 = (TReferenceControllerBase<1> *)0x0;
            break;
          }
          LOCK();
          aVar13 = pTVar8->SharedReferenceCount;
          bVar11 = aVar3 == aVar13;
          if (bVar11) {
            pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
            aVar13 = aVar3;
          }
          UNLOCK();
          aVar3 = aVar13;
        } while (!bVar11);
      }
      pcVar32 = pcVar9;
      if (pTVar27 == (TReferenceControllerBase<1> *)0x0) {
        pcVar32 = (code *)0x0;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar27);
      pcVar20 = pcVar32 + 0x10;
      if (pcVar32 == (code *)0x0) {
        pcVar20 = (code *)0x0;
      }
      if ((pcVar20 != (code *)&pFVar36->_padding_) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Result.Pin().Get() == this",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x6c3,L""), bVar11)) {
        pcVar9 = (code *)swi(3);
        uVar12 = (*pcVar9)();
        return (bool)uVar12;
      }
      pFVar34 = local_190;
      local_178 = local_1b4;
      local_170.DebugPtr = (UScriptStruct *)0x0;
      pcStack_168 = (code *)0x0;
      local_188 = pcVar9;
      local_180 = pTVar8;
      FInstancedStruct::InitializeAs
                ((FInstancedStruct *)&local_170.ObjectPtr,
                 (local_190->ScriptStruct).field0_0x0.DebugPtr,local_190->StructMemory);
      local_148[0] = (code *)0x0;
      local_120 = (code **)0x0;
      ppcVar21 = FMemory::Malloc(0x30,8);
      pcVar9 = pcStack_168;
      *ppcVar21 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`FDLSSTemporalUpscalerModularFeature::PostConfigureViewFamily'::`25'::<lambda_2>,1,1>
                           ::_vftable_;
      ppcVar21[1] = local_188;
      ppcVar21[2] = (code *)local_180;
      local_180 = (TReferenceControllerBase<1> *)0x0;
      local_188 = (code *)0x0;
      *(uint *)(ppcVar21 + 3) = local_178;
      ((TObjectPtr<UScriptStruct_const_>_u_0 *)(ppcVar21 + 4))->DebugPtr =
           (UScriptStruct *)local_170;
      local_120 = ppcVar21;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_170.DebugPtr != (UScriptStruct *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_170.DebugPtr);
      }
      ppcVar21[5] = pcVar9;
      local_170.DebugPtr = (UScriptStruct *)0x0;
      pcStack_168 = (code *)0x0;
      if (ppcVar21 + 1 != (code **)0x0) {
        local_148[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`FDLSSTemporalUpscalerModularFeature::PostConfigureViewFamily'::__l25::<lambda_2>,void,FRHICommandListImmediate_&>
                       ::Call;
      }
      pFVar17 = FRenderCommandList::GetInstanceTLS();
      if (pFVar17 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_FDLSSTemporalUpscalerModularFeature::PostConfigureViewFamily_::__l25::TSTR_DLSSTemporalUpscalerModularFeature_SetData385>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_148);
      }
      else {
        pFVar18 = FRenderCommandList::GetRenderThread(pFVar17);
        local_a8._0_8_ = local_148[0];
        local_80 = local_120;
        local_120 = (code **)0x0;
        local_a8._16_8_ = local_138[0];
        local_a8._24_8_ = local_138[1];
        local_a8._32_8_ = local_138[2];
        local_148[0] = (code *)0x0;
        local_78 = 2;
        pFVar19 = (FRenderCommandTag *)
                  TRenderCommandTag<`FDLSSTemporalUpscalerModularFeature::PostConfigureViewFamily'::__l25::TSTR_DLSSTemporalUpscalerModularFeature_SetData385>
                  ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (pFVar18,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_a8,pFVar19);
        uVar31 = (ulonglong)local_78;
        if ((2 < uVar31) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                ,0xd4,L""), bVar11)) {
          pcVar9 = (code *)swi(3);
          uVar12 = (*pcVar9)();
          return (bool)uVar12;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar31] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_a8._0_8_ != (code *)0x0) {
            ppcVar21 = (code **)(local_a8 + 0x10);
            if (local_80 != (code **)0x0) {
              ppcVar21 = local_80;
            }
            (**(code **)(*ppcVar21 + 0x10))();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar31])(local_a8);
        }
      }
      if (local_148[0] != (code *)0x0) {
        ppcVar21 = local_148 + 2;
        if (local_120 != (code **)0x0) {
          ppcVar21 = local_120;
        }
        (**(code **)(*ppcVar21 + 0x10))();
      }
      FInstancedStruct::Reset((FInstancedStruct *)&local_170.ObjectPtr);
      puVar33 = local_1a0;
      pFVar36 = local_1b0;
      if (local_180 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)local_180 + 0xc);
        iVar28 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar28 == 1) {
          (**(code **)(local_180->_padding_ + 8))(local_180,1);
          puVar33 = local_1a0;
          pFVar36 = local_1b0;
        }
      }
    }
    puVar37 = puVar37 + 1;
  } while( true );
}

// RegisterModularFeature @ 14de28c80

void __cdecl FDLSSTemporalUpscalerModularFeature::RegisterModularFeature(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TReferenceControllerBase<1> *pTVar5;
  IModularFeatures *pIVar6;
  FName *pFVar7;
  FDLSSTemporalUpscalerModularFeature *pFVar8;
  longlong *plVar9;
  FName local_res8;
  FSharedReferencer<1> local_10;
  
  if (ModularFeatureSingleton.Object != (FDLSSTemporalUpscalerModularFeature *)0x0) {
    return;
  }
  pTVar5 = ::operator_new(0xe8);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    pFVar8 = (FDLSSTemporalUpscalerModularFeature *)&DAT_00000010;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pFVar8 = (FDLSSTemporalUpscalerModularFeature *)(pTVar5 + 1);
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFDLSSTemporalUpscalerModularFeature___00_SharedPointerInternals__6B_
    ;
    pTVar5[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[5]._padding_ = 0;
    pTVar5[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[7].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[8].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[8].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[10]._padding_ = 0;
    pTVar5[10].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[10].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[0xc].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[0xc].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[0xd].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[0xd].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[2]._padding_ = 0;
    pTVar5[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[3]._padding_ = 0;
    pTVar5[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[4]._padding_ = 0;
    pTVar5[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[6]._padding_ = 0;
    pTVar5[1]._padding_ = (longlong)&___7FDLSSTemporalUpscalerModularFeature__6B_;
    pTVar5[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[6].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)&pTVar5[7]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pTVar5[7]._padding_ + 4) = 0;
    pTVar5[8]._padding_ = 0;
    pTVar5[9]._padding_ = 0;
    pTVar5[9].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[9].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[0xb]._padding_ = 0;
    pTVar5[0xb].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[0xb].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)&pTVar5[0xc]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pTVar5[0xc]._padding_ + 4) = 0;
    pTVar5[0xd]._padding_ = 0;
    pTVar5[0xe]._padding_ = 0;
    if (pFVar8 == (FDLSSTemporalUpscalerModularFeature *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      goto LAB_14de28e1f;
    }
  }
  if (((pFVar8->_padding_ == 0) || (pFVar8->_padding_ == 0)) ||
     (*(int *)(pFVar8->_padding_ + 8) < 1)) {
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar8->_padding_ = (longlong)pFVar8;
    if (pTVar5 != (TReferenceControllerBase<1> *)pFVar8->_padding_) {
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar9 = (longlong *)pFVar8->_padding_;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar9 + 8))();
        }
      }
      pFVar8->_padding_ = (longlong)pTVar5;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  }
LAB_14de28e1f:
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  ModularFeatureSingleton.Object = pFVar8;
  local_10.ReferenceController = pTVar5;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&ModularFeatureSingleton.SharedReferenceCount,&local_10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  pIVar6 = IModularFeatures::Get();
  pFVar8 = ModularFeatureSingleton.Object;
  pcVar3 = *(code **)((longlong)*pIVar6 + 0x28);
  pFVar7 = ::FName::FName(&local_res8,L"UpscalerModularFeature");
  plVar9 = &pFVar8->_padding_;
  if (pFVar8 == (FDLSSTemporalUpscalerModularFeature *)0x0) {
    plVar9 = (longlong *)0x0;
  }
  (*pcVar3)(pIVar6,*pFVar7,plVar9);
  return;
}

// RemoveSceneViewExtensionIsActiveFunctor @ 14de291c0

bool __thiscall
FDLSSTemporalUpscalerModularFeature::RemoveSceneViewExtensionIsActiveFunctor
          (FDLSSTemporalUpscalerModularFeature *this,FGuid *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  int local_38;
  int iStack_34;
  int iStack_2c;
  
  pFVar13 = (this->IsActiveThisFrameFunctions).AllocatorInstance.Data;
  uVar3 = param_1->A;
  uVar4 = param_1->B;
  uVar5 = param_1->C;
  uVar6 = param_1->D;
  pFVar11 = pFVar13;
  while( true ) {
    if (pFVar11 == pFVar13 + (longlong)(this->IsActiveThisFrameFunctions).ArrayNum * 0x40) {
      return false;
    }
    if ((((int)((ulonglong)*(undefined8 *)(pFVar11 + 8) >> 0x20) == uVar6 &&
         *(int *)(pFVar11 + 4) == uVar4) && uVar5 == (int)*(undefined8 *)(pFVar11 + 8)) &&
        uVar3 == *(int *)pFVar11) break;
    pFVar11 = pFVar11 + 0x40;
  }
  uVar12 = (uint)((longlong)pFVar11 - (longlong)pFVar13 >> 6);
  if (uVar12 == 0xffffffff) {
    return false;
  }
  uVar9 = 0;
  if ((int)uVar12 < (this->IsActiveThisFrameFunctions).ArrayNum) {
    uVar9 = ~uVar12 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar2 = (code *)swi(3);
    uVar8 = (*pcVar2)();
    return (bool)uVar8;
  }
  pFVar13 = (this->IsActiveThisFrameFunctions).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x40
  ;
  if (*(longlong *)(pFVar13 + 0x10) != 0) {
    pFVar11 = pFVar13 + 0x20;
    if (*(FScriptContainerElement **)(pFVar13 + 0x38) != (FScriptContainerElement *)0x0) {
      pFVar11 = *(FScriptContainerElement **)(pFVar13 + 0x38);
    }
    (**(code **)(*(longlong *)pFVar11 + 0x10))();
  }
  iVar10 = (this->IsActiveThisFrameFunctions).ArrayNum + ~uVar12;
  if (iVar10 != 0) {
    memmove(pFVar13,pFVar13 + 0x40,(longlong)iVar10 << 6);
  }
  piVar1 = &(this->IsActiveThisFrameFunctions).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x40,0x10,&(this->IsActiveThisFrameFunctions).AllocatorInstance,
             (this->IsActiveThisFrameFunctions).ArrayNum,
             &(this->IsActiveThisFrameFunctions).ArrayMax);
  return true;
}

// SceneViewExtensionIsActive @ 14de293c0

TOptional<bool> __thiscall
FDLSSTemporalUpscalerModularFeature::SceneViewExtensionIsActive
          (FDLSSTemporalUpscalerModularFeature *this,ISceneViewExtension *param_1,
          FSceneViewExtensionContext *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FSceneViewExtensionContext *local_res8;
  ISceneViewExtension local_38 [2];
  
  param_1->field_0x1 = 0;
  iVar1 = (this->IsActiveThisFrameFunctions).ArrayNum;
  pFVar6 = (this->IsActiveThisFrameFunctions).AllocatorInstance.Data;
  pFVar5 = pFVar6 + (longlong)iVar1 * 0x40;
  while( true ) {
    if ((this->IsActiveThisFrameFunctions).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FSceneViewExtensionIsActiveFunctor_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (pFVar6 == pFVar5) break;
    if (*(void **)(pFVar6 + 0x10) == (void *)0x0) {
      local_38[0]._1_1_ = '\0';
      pFVar6 = pFVar6 + 0x40;
    }
    else {
      local_res8 = param_2;
      UE::Core::Private::Function::CheckCallable(*(void **)(pFVar6 + 0x10));
      pcVar2 = *(code **)(pFVar6 + 0x10);
      pFVar4 = pFVar6 + 0x20;
      if (*(FScriptContainerElement **)(pFVar6 + 0x38) != (FScriptContainerElement *)0x0) {
        pFVar4 = *(FScriptContainerElement **)(pFVar6 + 0x38);
      }
      uVar3 = (**(code **)(*(longlong *)pFVar4 + 8))();
      (*pcVar2)(local_38,uVar3,&local_res8);
      if ((local_38[0]._1_1_ != '\0') &&
         (((param_1->field_0x1 == '\0' || (*(char *)param_1 == '\0')) && (local_38 != param_1)))) {
        *(undefined1 *)param_1 = local_38[0]._0_1_;
        param_1->field_0x1 = 1;
      }
      pFVar6 = pFVar6 + 0x40;
    }
  }
  return SUB82(param_1,0);
}

// SetupSceneView @ 14de294c0

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
FDLSSTemporalUpscalerModularFeature::SetupSceneView
          (FDLSSTemporalUpscalerModularFeature *this,FInstancedPropertyBag *param_1,
          FSceneView *param_2)

{
  param_2->AntiAliasingMethod = AAM_TSR;
  param_2->PrimaryScreenPercentageMethod = TemporalUpscale;
  return;
}

// UnregisterModularFeature @ 14de2a570

void __cdecl FDLSSTemporalUpscalerModularFeature::UnregisterModularFeature(void)

{
  code *pcVar1;
  FDLSSTemporalUpscalerModularFeature *pFVar2;
  IModularFeatures *pIVar3;
  FName *pFVar4;
  longlong *plVar5;
  FName local_res8;
  FSharedReferencer<1> local_10;
  
  if (ModularFeatureSingleton.Object != (FDLSSTemporalUpscalerModularFeature *)0x0) {
    pIVar3 = IModularFeatures::Get();
    pFVar2 = ModularFeatureSingleton.Object;
    pcVar1 = *(code **)((longlong)*pIVar3 + 0x30);
    pFVar4 = ::FName::FName(&local_res8,L"UpscalerModularFeature");
    plVar5 = &pFVar2->_padding_;
    if (pFVar2 == (FDLSSTemporalUpscalerModularFeature *)0x0) {
      plVar5 = (longlong *)0x0;
    }
    (*pcVar1)(pIVar3,*pFVar4,plVar5);
    local_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    ModularFeatureSingleton.Object = (FDLSSTemporalUpscalerModularFeature *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&ModularFeatureSingleton.SharedReferenceCount,&local_10);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_10.ReferenceController);
  }
  return;
}

