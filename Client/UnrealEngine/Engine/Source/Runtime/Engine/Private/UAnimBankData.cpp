// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 16

// StaticClass @ 1473c6d50

UClass * __cdecl UAnimBankData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimBankData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimBankData",
               &Z_Registration_Info_UClass_UAnimBankData.InnerSingleton,
               StaticRegisterNativesUAnimBankData,0x40,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimBankData>,InternalVTableHelperCtorCaller<UAnimBankData>,
               local_res8,UTransformProviderData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimBankData.InnerSingleton;
}

// UAnimBankData @ 1473d7e60

UAnimBankData * __thiscall UAnimBankData::UAnimBankData(UAnimBankData *this,FVTableHelper *param_1)

{
  UTransformProviderData::UTransformProviderData((UTransformProviderData *)this,param_1);
  this->_padding_ = (longlong)&___7UAnimBankData__6B_;
  (this->AnimBankItems).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimBankItems).ArrayNum = 0;
  (this->AnimBankItems).ArrayMax = 0;
  return this;
}

// UAnimBankData @ 1473d7ea0

UAnimBankData * __thiscall
UAnimBankData::UAnimBankData(UAnimBankData *this,FObjectInitializer *param_1)

{
  UTransformProviderData::UTransformProviderData((UTransformProviderData *)this,param_1);
  this->_padding_ = (longlong)&___7UAnimBankData__6B_;
  (this->AnimBankItems).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimBankItems).ArrayNum = 0;
  (this->AnimBankItems).ArrayMax = 0;
  return this;
}

// ~UAnimBankData @ 1473db070

void __thiscall UAnimBankData::~UAnimBankData(UAnimBankData *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UAnimBankData__6B_;
  pFVar1 = (this->AnimBankItems).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UTransformProviderData::~UTransformProviderData((UTransformProviderData *)this);
  return;
}

// CreateRenderThreadResources @ 1473f5b50

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FTransformProviderRenderProxy * __thiscall
UAnimBankData::CreateRenderThreadResources
          (UAnimBankData *this,FSkinningSceneExtensionProxy *param_1,FSceneInterface *param_2,
          FRHICommandListBase *param_3)

{
  TArray<FAnimBankItem,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  USkinnedAsset *pUVar4;
  FAnimBankItem *pFVar5;
  code *pcVar6;
  bool bVar7;
  FAnimBankDataRenderProxy *this_00;
  FTransformProviderRenderProxy *pFVar8;
  
  this_00 = ::operator_new(0x58);
  if (this_00 == (FAnimBankDataRenderProxy *)0x0) {
    this_00 = (FAnimBankDataRenderProxy *)0x0;
  }
  else {
    this_00->Scene = param_2;
    this_00->UniqueAnimationCount = 0;
    pTVar1 = &this_00->AnimBankItems;
    (this_00->AnimBankItems).ArrayMax = 0;
    this_00->_padding_ = (longlong)&___7FAnimBankDataRenderProxy__6B_;
    this_00->SceneProxy = param_1;
    (this_00->SkinnedAsset).field0_0x0.DebugPtr = (USkinnedAsset *)0x0;
    (this_00->AnimBankIds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->AnimBankIds).ArrayNum = 0;
    (this_00->AnimBankIds).ArrayMax = 0;
    (this_00->AnimBankHandles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->AnimBankHandles).ArrayNum = 0;
    (this_00->AnimBankHandles).ArrayMax = 0;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this_00->AnimBankItems).ArrayNum = 0;
    this_00->UniqueAnimationCount = (uint)param_1->UniqueAnimationCount;
    pUVar4 = param_1->SkinnedAsset;
    piVar2 = &(this_00->AnimBankItems).ArrayMax;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (USkinnedAsset *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this_00->SkinnedAsset).field0_0x0.DebugPtr = pUVar4;
    if (pTVar1 != &this->AnimBankItems) {
      iVar3 = (this->AnimBankItems).ArrayNum;
      pFVar5 = (FAnimBankItem *)(this->AnimBankItems).AllocatorInstance.Data;
      (this_00->AnimBankItems).ArrayNum = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
        ConstructItems<FAnimBankItem,FAnimBankItem,int>
                  ((pTVar1->AllocatorInstance).Data,pFVar5,iVar3);
      }
    }
    if (((this_00->SkinnedAsset).field0_0x0.DebugPtr == (USkinnedAsset *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("SkinnedAsset != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimBank.cpp"
                           ,0x540,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      pFVar8 = (FTransformProviderRenderProxy *)(*pcVar6)();
      return pFVar8;
    }
  }
  pcVar6 = *(code **)(this_00->_padding_ + 8);
  if (pcVar6 != FAnimBankDataRenderProxy::CreateRenderThreadResources) {
    (*pcVar6)();
    return (FTransformProviderRenderProxy *)this_00;
  }
  FAnimBankDataRenderProxy::CreateRenderThreadResources(this_00,param_3);
  return (FTransformProviderRenderProxy *)this_00;
}

// DestroyRenderThreadResources @ 1473f9610

void __thiscall
UAnimBankData::DestroyRenderThreadResources
          (UAnimBankData *this,FTransformProviderRenderProxy *param_1)

{
  (**(code **)((longlong)*param_1 + 0x10))(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001473f9632. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,1);
  return;
}

// GetAnimationBounds @ 1473ff680

bool __thiscall
UAnimBankData::GetAnimationBounds(UAnimBankData *this,uint param_1,FRenderBounds *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  code *pcVar11;
  bool bVar12;
  undefined1 uVar13;
  longlong lVar14;
  uint uVar15;
  
  uVar7 = (this->AnimBankItems).ArrayNum;
  if (param_1 < uVar7) {
    uVar15 = 0;
    if ((int)param_1 < (int)uVar7) {
      uVar15 = ~param_1 >> 0x1f;
    }
    if (uVar15 == 0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar12) {
        pcVar11 = (code *)swi(3);
        uVar13 = (*pcVar11)();
        return (bool)uVar13;
      }
    }
    pFVar9 = (this->AnimBankItems).AllocatorInstance.Data;
    lVar10 = *(longlong *)(pFVar9 + (longlong)(int)param_1 * 0x10);
    if (lVar10 != 0) {
      iVar8 = *(int *)(pFVar9 + (longlong)(int)param_1 * 0x10 + 8);
      if (iVar8 < *(int *)(lVar10 + 0x100)) {
        if (iVar8 < 0) {
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar12) {
            pcVar11 = (code *)swi(3);
            uVar13 = (*pcVar11)();
            return (bool)uVar13;
          }
        }
        lVar10 = *(longlong *)(lVar10 + 0xf8);
        lVar14 = (longlong)iVar8 * 0x80;
        dVar1 = *(double *)(lVar14 + 0x38 + lVar10);
        dVar2 = *(double *)(lVar14 + 0x40 + lVar10);
        dVar3 = *(double *)(lVar14 + 0x30 + lVar10);
        dVar4 = *(double *)(lVar14 + 0x58 + lVar10);
        dVar5 = *(double *)(lVar14 + 0x48 + lVar10);
        dVar6 = *(double *)(lVar14 + 0x50 + lVar10);
        (param_2->Min).field0_0x0._s_0.X = (float)(dVar3 - dVar5);
        (param_2->Min).field0_0x0._s_0.Y = (float)(dVar1 - dVar6);
        (param_2->Min).field0_0x0._s_0.Z = (float)(dVar2 - dVar4);
        (param_2->Max).field0_0x0._s_0.X = (float)(dVar3 + dVar5);
        (param_2->Max).field0_0x0._s_0.Y = (float)(dVar1 + dVar6);
        (param_2->Max).field0_0x0._s_0.Z = (float)(dVar2 + dVar4);
        return true;
      }
    }
  }
  return false;
}

// GetPrivateStaticClass @ 1474036a0

UClass * __cdecl UAnimBankData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimBankData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimBankData",
               &Z_Registration_Info_UClass_UAnimBankData.InnerSingleton,
               StaticRegisterNativesUAnimBankData,0x40,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimBankData>,InternalVTableHelperCtorCaller<UAnimBankData>,
               local_res8,UTransformProviderData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimBankData.InnerSingleton;
}

// GetSkinningDataOffset @ 147404e20

uint __thiscall
UAnimBankData::GetSkinningDataOffset
          (UAnimBankData *this,int param_1,TTransform<double> *param_2,
          FSkinnedMeshInstanceData *param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (param_3->AnimationIndex < (uint)(this->AnimBankItems).ArrayNum) {
    return param_3->AnimationIndex * 2;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<626842539751638275>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimBank.cpp"
                     ,0x503,"AnimationIndex < uint32(AnimBankItems.Num())");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return 0;
}

// GetTransformProviderID @ 147405920

FGuid * __thiscall UAnimBankData::GetTransformProviderID(UAnimBankData *this)

{
  bool bVar1;
  FGuid *pFVar2;
  IConsoleManager *pIVar3;
  longlong *plVar4;
  TConsoleVariableData<bool> *pTVar5;
  TConsoleVariableData<bool> *pTVar6;
  
  pTVar6 = (TConsoleVariableData<bool> *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar3 = IConsoleManager::Get();
    plVar4 = (longlong *)(**(code **)((longlong)*pIVar3 + 0xc0))(pIVar3,L"r.AnimBank.GPU",1);
    pTVar5 = pTVar6;
    if (plVar4 != (longlong *)0x0) {
      pTVar5 = (TConsoleVariableData<bool> *)(**(code **)(*plVar4 + 0x60))(plVar4);
    }
    AnimBankGPUVar = pTVar5;
    _Init_thread_footer(&::_TSS0);
  }
  pTVar5 = AnimBankGPUVar;
  if (AnimBankGPUVar == (TConsoleVariableData<bool> *)0x0) {
    return &AnimBankCPUProviderId;
  }
  bVar1 = IsInParallelGameThread();
  if ((!bVar1) && (bVar1 = IsInGameThread(), !bVar1)) {
    pTVar6 = (TConsoleVariableData<bool> *)&DAT_00000001;
  }
  pFVar2 = &AnimBankCPUProviderId;
  if (pTVar5->ShadowedValue[(longlong)pTVar6->ShadowedValue] == true) {
    pFVar2 = &AnimBankGPUProviderId;
  }
  return pFVar2;
}

// GetUniqueAnimationCount @ 147405c90

uint __thiscall UAnimBankData::GetUniqueAnimationCount(UAnimBankData *this)

{
  return (this->AnimBankItems).ArrayNum;
}

// HasAnimationBounds @ 147405e20

bool __thiscall UAnimBankData::HasAnimationBounds(UAnimBankData *this)

{
  return true;
}

// IsCompiling @ 1474076d0

bool __thiscall UAnimBankData::IsCompiling(UAnimBankData *this)

{
  int iVar1;
  char cVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (this->AnimBankItems).ArrayNum;
  pFVar3 = (this->AnimBankItems).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->AnimBankItems).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FAnimBankItem_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    if ((*(longlong *)pFVar3 != 0) &&
       (cVar2 = (**(code **)(*(longlong *)(*(longlong *)pFVar3 + 0x80) + 0x10))(), cVar2 != '\0')) {
      return true;
    }
    pFVar3 = pFVar3 + 0x10;
  }
  return false;
}

// IsEnabled @ 147407c50

bool __thiscall UAnimBankData::IsEnabled(UAnimBankData *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->AnimBankItems).ArrayNum;
  pFVar2 = (this->AnimBankItems).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->AnimBankItems).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FAnimBankItem_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (*(longlong *)pFVar2 == 0) {
      return false;
    }
    pFVar2 = pFVar2 + 0x10;
  }
  return (bool)(char)this->_padding_;
}

// StaticRegisterNativesUAnimBankData @ 147419b80

void __cdecl UAnimBankData::StaticRegisterNativesUAnimBankData(void)

{
  return;
}

// UsesSkeletonBatching @ 14741bc80

bool __thiscall UAnimBankData::UsesSkeletonBatching(UAnimBankData *this)

{
  return false;
}

