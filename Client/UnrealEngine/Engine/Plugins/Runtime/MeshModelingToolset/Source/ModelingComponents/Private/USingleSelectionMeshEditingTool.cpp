// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 10

// StaticClass @ 14ca3f920

UClass * __cdecl USingleSelectionMeshEditingTool::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USingleSelectionMeshEditingTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"SingleSelectionMeshEditingTool",
               &Z_Registration_Info_UClass_USingleSelectionMeshEditingTool.InnerSingleton,
               StaticRegisterNativesUSingleSelectionMeshEditingTool,0xd8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<USingleSelectionMeshEditingTool>,
               InternalVTableHelperCtorCaller<USingleSelectionMeshEditingTool>,local_res8,
               USingleSelectionTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USingleSelectionMeshEditingTool.InnerSingleton;
}

// USingleSelectionMeshEditingTool @ 14ca68dc0

USingleSelectionMeshEditingTool * __thiscall
USingleSelectionMeshEditingTool::USingleSelectionMeshEditingTool
          (USingleSelectionMeshEditingTool *this,FVTableHelper *param_1)

{
  undefined8 local_res8 [4];
  
  USingleSelectionTool::USingleSelectionTool((USingleSelectionTool *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&___7USingleSelectionMeshEditingTool__6B_;
  (this->TargetWorld).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->TargetWorld).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// USingleSelectionMeshEditingTool @ 14ca68e20

USingleSelectionMeshEditingTool * __thiscall
USingleSelectionMeshEditingTool::USingleSelectionMeshEditingTool
          (USingleSelectionMeshEditingTool *this)

{
  undefined8 local_res8 [4];
  
  USingleSelectionTool::USingleSelectionTool((USingleSelectionTool *)this);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&___7USingleSelectionMeshEditingTool__6B_;
  (this->TargetWorld).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->TargetWorld).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// ~USingleSelectionMeshEditingTool @ 14ca6bb80

void __thiscall
USingleSelectionMeshEditingTool::~USingleSelectionMeshEditingTool
          (USingleSelectionMeshEditingTool *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&___7USingleSelectionMeshEditingTool__6B_;
  USingleSelectionTool::~USingleSelectionTool((USingleSelectionTool *)this);
  return;
}

// GetPrivateStaticClass @ 14ca92030

UClass * __cdecl USingleSelectionMeshEditingTool::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USingleSelectionMeshEditingTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"SingleSelectionMeshEditingTool",
               &Z_Registration_Info_UClass_USingleSelectionMeshEditingTool.InnerSingleton,
               StaticRegisterNativesUSingleSelectionMeshEditingTool,0xd8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<USingleSelectionMeshEditingTool>,
               InternalVTableHelperCtorCaller<USingleSelectionMeshEditingTool>,local_res8,
               USingleSelectionTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USingleSelectionMeshEditingTool.InnerSingleton;
}

// GetTargetWorld @ 14ca93770

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall
USingleSelectionMeshEditingTool::GetTargetWorld(USingleSelectionMeshEditingTool *this)

{
  UWorld *pUVar1;
  
  pUVar1 = (UWorld *)FWeakObjectPtr::Get(&(this->TargetWorld).WeakPtr);
  return pUVar1;
}

// OnShutdown @ 14ca9c4a0

void __thiscall
USingleSelectionMeshEditingTool::OnShutdown
          (USingleSelectionMeshEditingTool *this,EToolShutdownType param_1)

{
  return;
}

// SetWorld @ 14caa4b00

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
USingleSelectionMeshEditingTool::SetWorld(USingleSelectionMeshEditingTool *this,UWorld *param_1)

{
  UWorld *local_res8 [4];
  
  local_res8[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->TargetWorld).WeakPtr,(FObjectPtr)local_res8);
  return;
}

// Shutdown @ 14caa66b0

void __thiscall
USingleSelectionMeshEditingTool::Shutdown
          (USingleSelectionMeshEditingTool *this,EToolShutdownType param_1)

{
  undefined7 in_register_00000011;
  FWeakObjectPtr local_res8 [2];
  undefined8 local_res18 [2];
  
  (**(code **)(this->_padding_ + 0x3b0))(this,CONCAT71(in_register_00000011,param_1));
  local_res8[0].ObjectIndex = 0;
  local_res8[0].ObjectSerialNumber = 0;
  local_res18[0] = 0;
  FWeakObjectPtr::operator=(local_res8,(FObjectPtr)local_res18);
  (this->TargetWorld).WeakPtr = local_res8[0];
  return;
}

// StaticRegisterNativesUSingleSelectionMeshEditingTool @ 14caa72d0

void __cdecl
USingleSelectionMeshEditingTool::StaticRegisterNativesUSingleSelectionMeshEditingTool(void)

{
  return;
}

