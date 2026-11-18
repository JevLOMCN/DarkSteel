// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 15

// StaticClass @ 14aca6510

UClass * __cdecl UEasyParticleComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent",
               &Z_Registration_Info_UClass_UEasyParticleComponent.InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UEasyParticleComponent>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent.InnerSingleton;
}

// UEasyParticleComponent @ 14aca9540

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent * __thiscall
UEasyParticleComponent::UEasyParticleComponent(UEasyParticleComponent *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent__6B_;
  (this->RuntimeClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->TypeName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TypeName).Data.ArrayNum = 0;
  (this->TypeName).Data.ArrayMax = 0;
  return this;
}

// ~UEasyParticleComponent @ 14acaa460

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

void __thiscall UEasyParticleComponent::~UEasyParticleComponent(UEasyParticleComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UEasyParticleComponent__6B_;
  pFVar1 = (this->TypeName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// CreateRuntimeComponent @ 14acabf30

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponentRuntime * __thiscall
UEasyParticleComponent::CreateRuntimeComponent(UEasyParticleComponent *this)

{
  UFunction *this_00;
  UClass *pUVar1;
  UEasyParticleComponentRuntime *pUVar2;
  UEasyParticleComponentRuntime *local_res10 [3];
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_UEasyParticleComponent_CreateRuntimeComponent);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res10[0] = (UEasyParticleComponentRuntime *)0x0;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,local_res10);
    return local_res10[0];
  }
                    /* WARNING: Could not recover jumptable at 0x00014acabf95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar2 = (UEasyParticleComponentRuntime *)(**(code **)(this->_padding_ + 0x2b8))(this);
  return pUVar2;
}

// GetPriority @ 14acac100

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

EComponentPriority __thiscall UEasyParticleComponent::GetPriority(UEasyParticleComponent *this)

{
  EComponentPriority EVar1;
  UFunction *this_00;
  UClass *pUVar2;
  EComponentPriority local_res10 [24];
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_UEasyParticleComponent_GetPriority);
  pUVar2 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar2->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res10[0] = LEVEL_0;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,local_res10);
    return local_res10[0];
  }
                    /* WARNING: Could not recover jumptable at 0x00014acac161. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)(this->_padding_ + 0x2b0))(this);
  return EVar1;
}

// GetPrivateStaticClass @ 14acac2e0

UClass * __cdecl UEasyParticleComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent",
               &Z_Registration_Info_UClass_UEasyParticleComponent.InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UEasyParticleComponent>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent.InnerSingleton;
}

// GetTypeName @ 14acade70

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

FString * __thiscall
UEasyParticleComponent::GetTypeName(UEasyParticleComponent *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  void *_Src;
  UFunction *this_00;
  UClass *pUVar2;
  longlong lVar3;
  void *local_18;
  undefined8 local_10;
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_UEasyParticleComponent_GetTypeName);
  pUVar2 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar2->ClassFlags & CLASS_Native) == CLASS_None) {
    local_18 = (void *)0x0;
    local_10 = 0;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,&local_18);
    _Src = local_18;
    lVar3 = (longlong)(int)local_10;
    piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (int)local_10;
    if ((int)local_10 == 0) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,(int)local_10,0,(ForAnyElementType *)__return_storage_ptr__,(int)local_10,
                 piVar1);
      memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,_Src,lVar3 * 2);
    }
    if (local_18 != (void *)0x0) {
      FMemory::Free(local_18);
      return __return_storage_ptr__;
    }
  }
  else {
    (**(code **)(this->_padding_ + 0x2c0))(this,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// StaticRegisterNativesUEasyParticleComponent @ 14acae190

void __cdecl UEasyParticleComponent::StaticRegisterNativesUEasyParticleComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UEasyParticleComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execCreateRuntimeComponent @ 14acaff30

void __cdecl
UEasyParticleComponent::execCreateRuntimeComponent(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2b8))();
  *(undefined8 *)param_3 = uVar1;
  return;
}

// execGetPriority @ 14acaff70

void __cdecl UEasyParticleComponent::execGetPriority(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2b0))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execGetTypeName @ 14acaffb0

void __cdecl UEasyParticleComponent::execGetTypeName(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  void *local_18 [2];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x2c0))(param_1,local_18);
  if (param_3 != puVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(undefined8 *)param_3 = *puVar1;
    *puVar1 = 0;
    *(undefined4 *)((longlong)param_3 + 8) = *(undefined4 *)(puVar1 + 1);
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
    puVar1[1] = 0;
  }
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  return;
}

// UEasyParticleComponent @ 14acb5e80

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent * __thiscall
UEasyParticleComponent::UEasyParticleComponent
          (UEasyParticleComponent *this,FObjectInitializer *param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  UClass *pUVar3;
  FString local_18;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent__6B_;
  pUVar3 = Z_Construct_UClass_UEasyParticleComponentRuntime_NoRegister();
  (this->RuntimeClass).Class.field0_0x0.DebugPtr = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  pFVar1 = &this->TypeName;
  this->Active = true;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TypeName).Data.ArrayNum = 0;
  (this->TypeName).Data.ArrayMax = 0;
  ::FString::FString(&local_18,"NONE");
  if (pFVar1 != &local_18) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    (this->TypeName).Data.ArrayNum = local_18.Data.ArrayNum;
    (this->TypeName).Data.ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  this->Priority = LEVEL_3;
  this->TypeMask = 1;
  return this;
}

// CreateRuntimeComponent_Implementation @ 14acb9420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EComponentPriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UEasyParticleComponentRuntime * __thiscall
UEasyParticleComponent::CreateRuntimeComponent_Implementation(UEasyParticleComponent *this)

{
  int iVar1;
  UClass *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  UEasyParticleComponentRuntime *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pUVar2 = (this->RuntimeClass).Class.field0_0x0.DebugPtr;
  pUVar5 = (UEasyParticleComponentRuntime *)0x0;
  if ((pUVar2 != (UClass *)0x0) &&
     (pUVar4 = Z_Construct_UClass_UEasyParticleComponentRuntime_NoRegister(),
     pUVar4 != (UClass *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) &&
       (pUVar2 = (this->RuntimeClass).Class.field0_0x0.DebugPtr, pUVar2 != (UClass *)0x0)) {
      local_a8 = 0;
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar4 = Z_Construct_UClass_UEasyParticleComponentRuntime_NoRegister();
      CheckIsClassChildOf_Internal(pUVar4,pUVar2);
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_98,pUVar2);
      local_98._48_8_ = (FObjectInstancingGraph *)0x0;
      local_98._56_8_ = (UPackage *)0x0;
      local_98._16_4_ = 0;
      local_98._20_4_ = 0;
      local_98._24_4_ = RF_NoFlags;
      local_98._40_8_ = (UObject *)0x0;
      local_98[0x20] = false;
      local_98._8_8_ = this;
      pUVar5 = (UEasyParticleComponentRuntime *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
      if (local_98._64_8_ != 0) {
        plVar6 = (longlong *)(local_98 + 0x50);
        if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
          plVar6 = (longlong *)local_98._104_8_;
        }
        (**(code **)(*plVar6 + 0x10))();
      }
      if (pUVar5 != (UEasyParticleComponentRuntime *)0x0) {
        pUVar5->ParentAsset = this;
      }
    }
  }
  return pUVar5;
}

// GetPriority_Implementation @ 14acb9d50

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

EComponentPriority __thiscall
UEasyParticleComponent::GetPriority_Implementation(UEasyParticleComponent *this)

{
  return this->Priority;
}

// GetTypeName_Implementation @ 14acbb3d0

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

FString * __thiscall
UEasyParticleComponent::GetTypeName_Implementation
          (UEasyParticleComponent *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  iVar2 = (this->TypeName).Data.ArrayNum;
  _Src = (this->TypeName).Data.AllocatorInstance.Data;
  (__return_storage_ptr__->Data).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,iVar2,0,(ForAnyElementType *)__return_storage_ptr__,iVar2,piVar1);
  memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,_Src,(longlong)iVar2 * 2);
  return __return_storage_ptr__;
}

