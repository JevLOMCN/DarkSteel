// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 21

// StaticClass @ 14d535930

UClass * __cdecl UCameraAsset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraAsset",
               &Z_Registration_Info_UClass_UCameraAsset.InnerSingleton,
               StaticRegisterNativesUCameraAsset,200,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UCameraAsset>,InternalVTableHelperCtorCaller<UCameraAsset>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraAsset.InnerSingleton;
}

// UCameraAsset @ 14d5439a0

UCameraAsset * __thiscall UCameraAsset::UCameraAsset(UCameraAsset *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->BuildStatus = Dirty;
  (this->CameraDirector).field0_0x0.DebugPtr = (UCameraDirector *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->EnterTransitions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IHasCameraBuildStatus__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphRootObject__;
  (this->EnterTransitions).ArrayNum = 0;
  (this->EnterTransitions).ArrayMax = 0;
  (this->ExitTransitions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExitTransitions).ArrayNum = 0;
  (this->ExitTransitions).ArrayMax = 0;
  FInstancedStruct::FInstancedStruct(&(this->DefaultParameters).Value);
  (this->ParameterDefinitions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParameterDefinitions).ArrayNum = 0;
  (this->ParameterDefinitions).ArrayMax = 0;
  (this->AllocationInfo).VariableTableInfo.VariableDefinitions.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AllocationInfo).VariableTableInfo.VariableDefinitions.ArrayNum = 0;
  (this->AllocationInfo).VariableTableInfo.VariableDefinitions.ArrayMax = 0;
  (this->AllocationInfo).ContextDataTableInfo.DataDefinitions.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AllocationInfo).ContextDataTableInfo.DataDefinitions.ArrayNum = 0;
  (this->AllocationInfo).ContextDataTableInfo.DataDefinitions.ArrayMax = 0;
  (this->CameraRigs_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CameraRigs_DEPRECATED).ArrayNum = 0;
  (this->CameraRigs_DEPRECATED).ArrayMax = 0;
  return this;
}

// UCameraAsset @ 14d543a50

UCameraAsset * __thiscall UCameraAsset::UCameraAsset(UCameraAsset *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->BuildStatus = Dirty;
  (this->CameraDirector).field0_0x0.DebugPtr = (UCameraDirector *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->EnterTransitions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IHasCameraBuildStatus__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphRootObject__;
  (this->EnterTransitions).ArrayNum = 0;
  (this->EnterTransitions).ArrayMax = 0;
  (this->ExitTransitions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExitTransitions).ArrayNum = 0;
  (this->ExitTransitions).ArrayMax = 0;
  FInstancedStruct::FInstancedStruct(&(this->DefaultParameters).Value);
  (this->ParameterDefinitions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParameterDefinitions).ArrayNum = 0;
  (this->ParameterDefinitions).ArrayMax = 0;
  (this->AllocationInfo).VariableTableInfo.VariableDefinitions.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AllocationInfo).VariableTableInfo.VariableDefinitions.ArrayNum = 0;
  (this->AllocationInfo).VariableTableInfo.VariableDefinitions.ArrayMax = 0;
  (this->AllocationInfo).ContextDataTableInfo.DataDefinitions.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AllocationInfo).ContextDataTableInfo.DataDefinitions.ArrayNum = 0;
  (this->AllocationInfo).ContextDataTableInfo.DataDefinitions.ArrayMax = 0;
  (this->CameraRigs_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CameraRigs_DEPRECATED).ArrayNum = 0;
  (this->CameraRigs_DEPRECATED).ArrayMax = 0;
  return this;
}

// ~UCameraAsset @ 14d544af0

void __thiscall UCameraAsset::~UCameraAsset(UCameraAsset *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IHasCameraBuildStatus__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphRootObject__;
  pFVar1 = (this->CameraRigs_DEPRECATED).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AllocationInfo).ContextDataTableInfo.DataDefinitions.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AllocationInfo).VariableTableInfo.VariableDefinitions.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ParameterDefinitions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FInstancedStruct::Reset(&(this->DefaultParameters).Value);
  pFVar1 = (this->ExitTransitions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EnterTransitions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IObjectTreeGraphRootObject__6B_;
  this->_padding_ = (longlong)&___7IObjectTreeGraphObject__6B_;
  this->_padding_ = (longlong)&___7IHasCameraBuildStatus__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AddEnterTransition @ 14d546fe0

void __thiscall UCameraAsset::AddEnterTransition(UCameraAsset *this,UCameraRigTransition *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UCameraRigTransition *local_18 [2];
  
  if (param_1 == (UCameraRigTransition *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<47744905161736236>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraAsset.cpp"
                       ,0x2c,"InTransition");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_18[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UCameraRigTransition *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar2 = (this->EnterTransitions).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->EnterTransitions).ArrayMax * 8
     )) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->EnterTransitions).ArrayNum;
  piVar1 = &(this->EnterTransitions).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->EnterTransitions).AllocatorInstance,piVar1);
  }
  (this->EnterTransitions).ArrayNum = iVar5 + 1;
  *(UCameraRigTransition **)((this->EnterTransitions).AllocatorInstance.Data + (longlong)iVar5 * 8)
       = local_18[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_18[0] != (UCameraRigTransition *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_18[0]);
  }
  return;
}

// AddExitTransition @ 14d547100

void __thiscall UCameraAsset::AddExitTransition(UCameraAsset *this,UCameraRigTransition *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UCameraRigTransition *local_18 [2];
  
  if (param_1 == (UCameraRigTransition *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<47744905161736263>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraAsset.cpp"
                       ,0x47,"InTransition");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_18[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UCameraRigTransition *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar2 = (this->ExitTransitions).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->ExitTransitions).ArrayMax * 8)
     ) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->ExitTransitions).ArrayNum;
  piVar1 = &(this->ExitTransitions).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->ExitTransitions).AllocatorInstance,piVar1);
  }
  (this->ExitTransitions).ArrayNum = iVar5 + 1;
  *(UCameraRigTransition **)((this->ExitTransitions).AllocatorInstance.Data + (longlong)iVar5 * 8) =
       local_18[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_18[0] != (UCameraRigTransition *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_18[0]);
  }
  return;
}

// BuildCamera @ 14d549ca0

void __thiscall UCameraAsset::BuildCamera(UCameraAsset *this,FCameraBuildLog *param_1)

{
  FCameraAssetBuilder local_18;
  
  local_18.CameraAsset = (UCameraAsset *)0x0;
  local_18.BuildLog = param_1;
  UE::Cameras::FCameraAssetBuilder::BuildCamera(&local_18,this,true);
  return;
}

// BuildCamera @ 14d549cd0

void __thiscall UCameraAsset::BuildCamera(UCameraAsset *this)

{
  FCameraAssetBuilder local_48;
  FCameraBuildLog local_38;
  
  local_48.BuildLog = &local_38;
  local_38.Messages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Messages.ArrayNum = 0;
  local_38.Messages.ArrayMax = 0;
  local_38.LoggingPrefix.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.LoggingPrefix.Data.ArrayNum = 0;
  local_38.LoggingPrefix.Data.ArrayMax = 0;
  local_38.bHasWarnings = false;
  local_38.bHasErrors = false;
  local_48.CameraAsset = (UCameraAsset *)0x0;
  local_38.bForwardToLogging = true;
  UE::Cameras::FCameraAssetBuilder::BuildCamera(&local_48,this,true);
  if (local_38.LoggingPrefix.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.LoggingPrefix.Data.AllocatorInstance.Data);
  }
  DestructItems<UE::Cameras::FCameraBuildLogMessage,int>
            ((FCameraBuildLogMessage *)local_38.Messages.AllocatorInstance.Data,
             local_38.Messages.ArrayNum);
  if ((FCameraBuildLogMessage *)local_38.Messages.AllocatorInstance.Data !=
      (FCameraBuildLogMessage *)0x0) {
    FMemory::Free(local_38.Messages.AllocatorInstance.Data);
  }
  return;
}

// DirtyBuildStatus @ 14d5528f0

void __thiscall UCameraAsset::DirtyBuildStatus(UCameraAsset *this)

{
  *(undefined1 *)&(this->CameraDirector).field0_0x0 = 3;
  return;
}

// GetAssetRegistryTags @ 14d5562b0

void __thiscall
UCameraAsset::GetAssetRegistryTags(UCameraAsset *this,FAssetRegistryTagsContext param_1)

{
  UCameraDirector *this_00;
  FAssetRegistryTagsContext FVar1;
  FAssetRegistryTagsContext local_res8;
  
  this_00 = (this->CameraDirector).field0_0x0.DebugPtr;
  if (this_00 != (UCameraDirector *)0x0) {
    FVar1.Data = (FAssetRegistryTagsContextData *)
                 FAssetRegistryTagsContext::FAssetRegistryTagsContext(&local_res8,param_1.Data);
    UCameraDirector::ExtendAssetRegistryTags(this_00,FVar1);
  }
  FVar1.Data = (FAssetRegistryTagsContextData *)
               FAssetRegistryTagsContext::FAssetRegistryTagsContext(&local_res8,param_1.Data);
  UObject::GetAssetRegistryTags((UObject *)this,FVar1);
  return;
}

// GetBuildStatus @ 14d556350

ECameraBuildStatus __thiscall UCameraAsset::GetBuildStatus(UCameraAsset *this)

{
  return *(ECameraBuildStatus *)&(this->CameraDirector).field0_0x0;
}

// GetPrivateStaticClass @ 14d558540

UClass * __cdecl UCameraAsset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraAsset",
               &Z_Registration_Info_UClass_UCameraAsset.InnerSingleton,
               StaticRegisterNativesUCameraAsset,200,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UCameraAsset>,InternalVTableHelperCtorCaller<UCameraAsset>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraAsset.InnerSingleton;
}

// PostLoad @ 14d55dc10

void __thiscall UCameraAsset::PostLoad(UCameraAsset *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 uStack_1c;
  TArrayView<FCameraObjectInterfaceParameterDefinition_const_,int> local_18;
  
  UObject::PostLoad((UObject *)this);
  local_18.DataPtr =
       (FCameraObjectInterfaceParameterDefinition *)
       (this->ParameterDefinitions).AllocatorInstance.Data;
  iVar1 = (this->ParameterDefinitions).ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar1;
  UE::Cameras::FCameraObjectInterfaceParameterBuilder::FixUpDefaultParameterProperties
            (&local_18,&this->DefaultParameters);
  return;
}

// PreSave @ 14d55df20

void __thiscall UCameraAsset::PreSave(UCameraAsset *this,FObjectPreSaveContext param_1)

{
  FScriptContainerElement *local_res10 [3];
  
  local_res10[0] = ((param_1.Data)->TargetFilename).Data.AllocatorInstance.Data;
  *(int *)(local_res10[0] + 0x9c) = *(int *)(local_res10[0] + 0x9c) + 1;
  UObject::PreSave((UObject *)this,(FObjectSaveContextData *)local_res10);
  return;
}

// RemoveEnterTransition @ 14d561310

int __thiscall UCameraAsset::RemoveEnterTransition(UCameraAsset *this,UCameraRigTransition *param_1)

{
  int iVar1;
  TObjectPtr<UCameraRigTransition>_u_0 local_res8 [4];
  
  local_res8[0].DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UCameraRigTransition *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  iVar1 = TArray<TObjectPtr<UCameraRigTransition>,TSizedDefaultAllocator<32>_>::Remove
                    (&this->EnterTransitions,
                     (TObjectPtr<UCameraRigTransition> *)&local_res8[0].ObjectPtr);
  return iVar1;
}

// RemoveExitTransition @ 14d561350

int __thiscall UCameraAsset::RemoveExitTransition(UCameraAsset *this,UCameraRigTransition *param_1)

{
  int iVar1;
  TObjectPtr<UCameraRigTransition>_u_0 local_res8 [4];
  
  local_res8[0].DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UCameraRigTransition *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  iVar1 = TArray<TObjectPtr<UCameraRigTransition>,TSizedDefaultAllocator<32>_>::Remove
                    (&this->ExitTransitions,
                     (TObjectPtr<UCameraRigTransition> *)&local_res8[0].ObjectPtr);
  return iVar1;
}

// SetCameraDirector @ 14d562d30

void __thiscall UCameraAsset::SetCameraDirector(UCameraAsset *this,UCameraDirector *param_1)

{
  UCameraDirector *pUVar1;
  bool bVar2;
  
  pUVar1 = (this->CameraDirector).field0_0x0.DebugPtr;
  if (pUVar1 == (UCameraDirector *)0x0) {
    bVar2 = param_1 == (UCameraDirector *)0x0;
  }
  else {
    bVar2 = pUVar1 == param_1;
  }
  if (!bVar2) {
    if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UCameraDirector *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->CameraDirector).field0_0x0.DebugPtr = param_1;
  }
  return;
}

// StaticRegisterNativesUCameraAsset @ 14d568590

void __cdecl UCameraAsset::StaticRegisterNativesUCameraAsset(void)

{
  return;
}

// _getUObject @ 14d56ace0

UObject * __thiscall UCameraAsset::_getUObject(UCameraAsset *this)

{
  return (UObject *)&this[-1].AllocationInfo.VariableTableInfo.VariableDefinitions.ArrayNum;
}

// _getUObject`adjustor{8}' @ 14d56acec

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl UCameraAsset::_getUObject`adjustor{8}'
   (void)const __ptr64 */

UObject * __thiscall UCameraAsset::_getUObject_adjustor_8__(UCameraAsset *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UCameraAsset *)&this[-1].CameraRigs_DEPRECATED.ArrayNum);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{16}' @ 14d56acfc

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl UCameraAsset::_getUObject`adjustor{16}'
   (void)const __ptr64 */

UObject * __thiscall UCameraAsset::_getUObject_adjustor_16__(UCameraAsset *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UCameraAsset *)&this[-1].CameraRigs_DEPRECATED);
  return (UObject *)pUVar1;
}

