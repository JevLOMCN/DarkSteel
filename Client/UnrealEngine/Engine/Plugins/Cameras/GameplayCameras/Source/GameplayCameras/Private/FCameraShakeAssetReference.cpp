// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 8

// StaticStruct @ 14d56d3f0

UScriptStruct * __cdecl FCameraShakeAssetReference::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCameraShakeAssetReference.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UScriptStruct_FCameraShakeAssetReference.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCameraShakeAssetReference,(UObject *)pUVar1,
                         L"CameraShakeAssetReference");
  }
  return Z_Registration_Info_UScriptStruct_FCameraShakeAssetReference.OuterSingleton;
}

// FCameraShakeAssetReference @ 14d58df40

FCameraShakeAssetReference * __thiscall
FCameraShakeAssetReference::FCameraShakeAssetReference
          (FCameraShakeAssetReference *this,UCameraShakeAsset *param_1)

{
  this->_padding_ = (longlong)&___7FBaseCameraObjectReference__6B_;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)&this->_padding_);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FCameraShakeAssetReference__6B_;
  (this->CameraShake).field0_0x0.DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UCameraShakeAsset *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  return this;
}

// FCameraShakeAssetReference @ 14d58dfc0

FCameraShakeAssetReference * __thiscall
FCameraShakeAssetReference::FCameraShakeAssetReference(FCameraShakeAssetReference *this)

{
  this->_padding_ = (longlong)&___7FBaseCameraObjectReference__6B_;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)&this->_padding_);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FCameraShakeAssetReference__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->CameraShake).field0_0x0.DebugPtr = (UCameraShakeAsset *)0x0;
  return this;
}

// ApplyParameterOverrides @ 14d599fd0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
FCameraShakeAssetReference::ApplyParameterOverrides
          (FCameraShakeAssetReference *this,FCameraNodeEvaluationResult *param_1,bool param_2)

{
  ApplyParameterOverridesImpl(this,&param_1->VariableTable,&param_1->ContextDataTable,param_2);
  return;
}

// ApplyParameterOverrides @ 14d599ff0

void __thiscall
FCameraShakeAssetReference::ApplyParameterOverrides
          (FCameraShakeAssetReference *this,FCameraVariableTable *param_1,
          FCameraContextDataTable *param_2,bool param_3)

{
  int iVar1;
  UCameraShakeAsset *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uStack_2c;
  TArrayView<FCameraObjectInterfaceParameterDefinition_const_,int> TStack_28;
  FCameraObjectInterfaceParameterOverrideHelper FStack_18;
  
  if ((this->CameraShake).field0_0x0.DebugPtr != (UCameraShakeAsset *)0x0) {
    UE::Cameras::FCameraObjectInterfaceParameterOverrideHelper::
    FCameraObjectInterfaceParameterOverrideHelper(&FStack_18,param_1,param_2);
    pUVar2 = (this->CameraShake).field0_0x0.DebugPtr;
    TStack_28.DataPtr = (FCameraObjectInterfaceParameterDefinition *)pUVar2->_padding_;
    iVar1 = (int)pUVar2->_padding_;
    if (iVar1 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    TStack_28._12_4_ = uStack_2c;
    TStack_28.ArrayNum = iVar1;
    UE::Cameras::FCameraObjectInterfaceParameterOverrideHelper::ApplyParameterOverrides
              (&FStack_18,(UObject *)(this->CameraShake).field0_0x0.DebugPtr,&TStack_28,
               (FInstancedOverridablePropertyBag *)&this->_padding_,param_3);
  }
  return;
}

// ApplyParameterOverrides @ 14d59a000

void __thiscall
FCameraShakeAssetReference::ApplyParameterOverrides
          (FCameraShakeAssetReference *this,FCameraVariableTable *param_1,bool param_2)

{
  ApplyParameterOverridesImpl(this,param_1,(FCameraContextDataTable *)0x0,param_2);
  return;
}

// ApplyParameterOverridesImpl @ 14d59a180

void __thiscall
FCameraShakeAssetReference::ApplyParameterOverridesImpl
          (FCameraShakeAssetReference *this,FCameraVariableTable *param_1,
          FCameraContextDataTable *param_2,bool param_3)

{
  int iVar1;
  UCameraShakeAsset *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uStack_2c;
  TArrayView<FCameraObjectInterfaceParameterDefinition_const_,int> local_28;
  FCameraObjectInterfaceParameterOverrideHelper local_18;
  
  if ((this->CameraShake).field0_0x0.DebugPtr != (UCameraShakeAsset *)0x0) {
    UE::Cameras::FCameraObjectInterfaceParameterOverrideHelper::
    FCameraObjectInterfaceParameterOverrideHelper(&local_18,param_1,param_2);
    pUVar2 = (this->CameraShake).field0_0x0.DebugPtr;
    local_28.DataPtr = (FCameraObjectInterfaceParameterDefinition *)pUVar2->_padding_;
    iVar1 = (int)pUVar2->_padding_;
    if (iVar1 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_28._12_4_ = uStack_2c;
    local_28.ArrayNum = iVar1;
    UE::Cameras::FCameraObjectInterfaceParameterOverrideHelper::ApplyParameterOverrides
              (&local_18,(UObject *)(this->CameraShake).field0_0x0.DebugPtr,&local_28,
               (FInstancedOverridablePropertyBag *)&this->_padding_,param_3);
  }
  return;
}

// GetCameraObject @ 14d5a6b80

UBaseCameraObject * __thiscall
FCameraShakeAssetReference::GetCameraObject(FCameraShakeAssetReference *this)

{
  return (UBaseCameraObject *)(this->CameraShake).field0_0x0.DebugPtr;
}

