// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 10

// StaticClass @ 14d572a10

UClass * __cdecl UCameraDirectorStateTreeSchema::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraDirectorStateTreeSchema.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraDirectorStateTreeSchema",
               &Z_Registration_Info_UClass_UCameraDirectorStateTreeSchema.InnerSingleton,
               StaticRegisterNativesUCameraDirectorStateTreeSchema,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCameraDirectorStateTreeSchema>,
               InternalVTableHelperCtorCaller<UCameraDirectorStateTreeSchema>,local_res8,
               UStateTreeSchema::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraDirectorStateTreeSchema.InnerSingleton;
}

// UCameraDirectorStateTreeSchema @ 14d58f100

UCameraDirectorStateTreeSchema * __thiscall
UCameraDirectorStateTreeSchema::UCameraDirectorStateTreeSchema
          (UCameraDirectorStateTreeSchema *this,FVTableHelper *param_1)

{
  UStateTreeSchema::UStateTreeSchema((UStateTreeSchema *)this,param_1);
  this->_padding_ = (longlong)&___7UCameraDirectorStateTreeSchema__6B_;
  (this->ContextDataDescs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContextDataDescs).ArrayNum = 0;
  (this->ContextDataDescs).ArrayMax = 0;
  return this;
}

// UCameraDirectorStateTreeSchema @ 14d58f140

UCameraDirectorStateTreeSchema * __thiscall
UCameraDirectorStateTreeSchema::UCameraDirectorStateTreeSchema(UCameraDirectorStateTreeSchema *this)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  FObjectInitializer *pFVar4;
  TObjectPtr<UStruct_const_>_u_0 local_28;
  FName local_20;
  FStateTreeDataHandle local_18;
  undefined1 local_12;
  
  pFVar4 = FObjectInitializer::Get();
  UStateTreeSchema::UStateTreeSchema((UStateTreeSchema *)this,pFVar4);
  this->_padding_ = (longlong)&___7UCameraDirectorStateTreeSchema__6B_;
  piVar1 = &(this->ContextDataDescs).ArrayNum;
  piVar2 = &(this->ContextDataDescs).ArrayMax;
  (this->ContextDataDescs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  *piVar2 = 0;
  local_28.DebugPtr = (UStruct *)Z_Construct_UClass_UObject_NoRegister();
  local_20 = UE::Cameras::FStateTreeContextDataNames::ContextOwner;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_28.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_28.DebugPtr);
  }
  local_18.Source = FStateTreeDataHandle::Invalid.Source;
  local_18._1_1_ = FStateTreeDataHandle::Invalid._1_1_;
  local_18.Index = FStateTreeDataHandle::Invalid.Index;
  local_18.StateHandle = (FStateTreeStateHandle)FStateTreeDataHandle::Invalid.StateHandle.Index;
  local_12 = 0;
  iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,1,&(this->ContextDataDescs).AllocatorInstance,piVar1,piVar2);
  ConstructItems<FStateTreeExternalDataDesc,FStateTreeExternalDataDesc,int>
            ((this->ContextDataDescs).AllocatorInstance.Data + (longlong)iVar3 * 0x18,
             (FStateTreeExternalDataDesc *)&local_28.ObjectPtr,1);
  return this;
}

// ~UCameraDirectorStateTreeSchema @ 14d591a00

void __thiscall
UCameraDirectorStateTreeSchema::~UCameraDirectorStateTreeSchema
          (UCameraDirectorStateTreeSchema *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UCameraDirectorStateTreeSchema__6B_;
  pFVar1 = (this->ContextDataDescs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UStateTreeSchema::~UStateTreeSchema((UStateTreeSchema *)this);
  return;
}

// GetContextDataDescs @ 14d5a7290

TArrayView<FStateTreeExternalDataDesc_const_,int> * __thiscall
UCameraDirectorStateTreeSchema::GetContextDataDescs
          (UCameraDirectorStateTreeSchema *this,
          TArrayView<FStateTreeExternalDataDesc_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FStateTreeExternalDataDesc_const_,int> *pTVar4;
  
  iVar1 = (this->ContextDataDescs).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (FStateTreeExternalDataDesc *)(this->ContextDataDescs).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<FStateTreeExternalDataDesc_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14d5a9310

UClass * __cdecl UCameraDirectorStateTreeSchema::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraDirectorStateTreeSchema.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraDirectorStateTreeSchema",
               &Z_Registration_Info_UClass_UCameraDirectorStateTreeSchema.InnerSingleton,
               StaticRegisterNativesUCameraDirectorStateTreeSchema,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCameraDirectorStateTreeSchema>,
               InternalVTableHelperCtorCaller<UCameraDirectorStateTreeSchema>,local_res8,
               UStateTreeSchema::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraDirectorStateTreeSchema.InnerSingleton;
}

// IsClassAllowed @ 14d5b4590

bool __thiscall
UCameraDirectorStateTreeSchema::IsClassAllowed(UCameraDirectorStateTreeSchema *this,UClass *param_1)

{
  bool bVar1;
  
  bVar1 = UStateTreeSchema::IsChildOfBlueprintBase(param_1);
  return bVar1;
}

// IsExternalItemAllowed @ 14d5b45d0

bool __thiscall
UCameraDirectorStateTreeSchema::IsExternalItemAllowed
          (UCameraDirectorStateTreeSchema *this,UStruct *param_1)

{
  return true;
}

// IsStructAllowed @ 14d5b49a0

bool __thiscall
UCameraDirectorStateTreeSchema::IsStructAllowed
          (UCameraDirectorStateTreeSchema *this,UScriptStruct *param_1)

{
  int iVar1;
  bool bVar2;
  UScriptStruct *pUVar3;
  UPackage *pUVar4;
  
  pUVar3 = FStateTreeConditionCommonBase::StaticStruct();
  if (pUVar3 != (UScriptStruct *)0x0) {
    iVar1 = (int)pUVar3->_padding_;
    if (((int)param_1->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) != &pUVar3->_padding_
       )) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      return true;
    }
  }
  pUVar3 = FStateTreeConsiderationCommonBase::StaticStruct();
  if (pUVar3 != (UScriptStruct *)0x0) {
    iVar1 = (int)pUVar3->_padding_;
    if (((int)param_1->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) != &pUVar3->_padding_
       )) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      return true;
    }
  }
  pUVar3 = FStateTreeEvaluatorCommonBase::StaticStruct();
  if (pUVar3 != (UScriptStruct *)0x0) {
    iVar1 = (int)pUVar3->_padding_;
    if (((int)param_1->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) != &pUVar3->_padding_
       )) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      return true;
    }
  }
  pUVar3 = FStateTreeTaskCommonBase::StaticStruct();
  if (pUVar3 != (UScriptStruct *)0x0) {
    iVar1 = (int)pUVar3->_padding_;
    if (((int)param_1->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) != &pUVar3->_padding_
       )) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      return true;
    }
  }
  if (Z_Registration_Info_UScriptStruct_FGameplayCamerasStateTreeTask.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UScriptStruct_FGameplayCamerasStateTreeTask.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGameplayCamerasStateTreeTask,(UObject *)pUVar4,
                         L"GameplayCamerasStateTreeTask");
    if (Z_Registration_Info_UScriptStruct_FGameplayCamerasStateTreeTask.OuterSingleton ==
        (UScriptStruct *)0x0) goto LAB_14d5b4adb;
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FGameplayCamerasStateTreeTask.OuterSingleton)->
               _padding_;
  if (((int)param_1->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
      &(Z_Registration_Info_UScriptStruct_FGameplayCamerasStateTreeTask.OuterSingleton)->_padding_))
  {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    return true;
  }
LAB_14d5b4adb:
  if (Z_Registration_Info_UScriptStruct_FGameplayCamerasStateTreeCondition.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UScriptStruct_FGameplayCamerasStateTreeCondition.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGameplayCamerasStateTreeCondition,
                         (UObject *)pUVar4,L"GameplayCamerasStateTreeCondition");
    if (Z_Registration_Info_UScriptStruct_FGameplayCamerasStateTreeCondition.OuterSingleton ==
        (UScriptStruct *)0x0) {
      return false;
    }
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FGameplayCamerasStateTreeCondition.OuterSingleton)
               ->_padding_;
  if (((int)param_1->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
      &(Z_Registration_Info_UScriptStruct_FGameplayCamerasStateTreeCondition.OuterSingleton)->
       _padding_)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return false;
  }
  return true;
}

// StaticRegisterNativesUCameraDirectorStateTreeSchema @ 14d5d0cf0

void __cdecl
UCameraDirectorStateTreeSchema::StaticRegisterNativesUCameraDirectorStateTreeSchema(void)

{
  return;
}

