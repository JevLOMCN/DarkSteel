// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 12

// StaticStruct @ 14d573d40

UScriptStruct * __cdecl FCameraRigAssetReference::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCameraRigAssetReference.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UScriptStruct_FCameraRigAssetReference.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCameraRigAssetReference,(UObject *)pUVar1,
                         L"CameraRigAssetReference");
  }
  return Z_Registration_Info_UScriptStruct_FCameraRigAssetReference.OuterSingleton;
}

// FCameraRigAssetReference @ 14d58d1e0

FCameraRigAssetReference * __thiscall
FCameraRigAssetReference::FCameraRigAssetReference
          (FCameraRigAssetReference *this,FCameraRigAssetReference *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *pvVar4;
  UCameraRigAsset *pUVar5;
  
  this->_padding_ = (longlong)&___7FBaseCameraObjectReference__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  FInstancedStruct::InitializeAs
            ((FInstancedStruct *)&this->_padding_,(UScriptStruct *)param_1->_padding_,
             (uchar *)param_1->_padding_);
  plVar1 = &this->_padding_;
  *plVar1 = 0;
  piVar2 = (int *)((longlong)&this->_padding_ + 4);
  iVar3 = (int)param_1->_padding_;
  pvVar4 = (void *)param_1->_padding_;
  *(int *)&this->_padding_ = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar3,0,(ForAnyElementType *)plVar1,iVar3,piVar2);
    memcpy((void *)*plVar1,pvVar4,(longlong)iVar3 << 4);
  }
  plVar1 = &this->_padding_;
  *plVar1 = 0;
  piVar2 = (int *)((longlong)&this->_padding_ + 4);
  iVar3 = (int)param_1->_padding_;
  pvVar4 = (void *)param_1->_padding_;
  *(int *)&this->_padding_ = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,iVar3,0,(ForAnyElementType *)plVar1,iVar3,piVar2);
    memcpy((void *)*plVar1,pvVar4,(longlong)iVar3 * 0x1c);
  }
  this->_padding_ = (longlong)&___7FCameraRigAssetReference__6B_;
  pUVar5 = (param_1->CameraRig).field0_0x0.DebugPtr;
  (this->CameraRig).field0_0x0.DebugPtr = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UCameraRigAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->ParameterOverrideGuids_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParameterOverrideGuids_DEPRECATED).AllocatorInstance.Data =
       (param_1->ParameterOverrideGuids_DEPRECATED).AllocatorInstance.Data;
  (param_1->ParameterOverrideGuids_DEPRECATED).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ParameterOverrideGuids_DEPRECATED).ArrayNum =
       (param_1->ParameterOverrideGuids_DEPRECATED).ArrayNum;
  (this->ParameterOverrideGuids_DEPRECATED).ArrayMax =
       (param_1->ParameterOverrideGuids_DEPRECATED).ArrayMax;
  (param_1->ParameterOverrideGuids_DEPRECATED).ArrayNum = 0;
  (param_1->ParameterOverrideGuids_DEPRECATED).ArrayMax = 0;
  FCameraRigParameterOverrides::FCameraRigParameterOverrides
            (&this->ParameterOverrides_DEPRECATED,&param_1->ParameterOverrides_DEPRECATED);
  return this;
}

// FCameraRigAssetReference @ 14d58d340

FCameraRigAssetReference * __thiscall
FCameraRigAssetReference::FCameraRigAssetReference
          (FCameraRigAssetReference *this,UCameraRigAsset *param_1)

{
  this->_padding_ = (longlong)&___7FBaseCameraObjectReference__6B_;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)&this->_padding_);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FCameraRigAssetReference__6B_;
  (this->CameraRig).field0_0x0.DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UCameraRigAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->ParameterOverrideGuids_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParameterOverrideGuids_DEPRECATED).ArrayNum = 0;
  (this->ParameterOverrideGuids_DEPRECATED).ArrayMax = 0;
  (this->ParameterOverrides_DEPRECATED).BooleanOverrides.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ParameterOverrides_DEPRECATED).BooleanOverrides.ArrayNum = 0;
  (this->ParameterOverrides_DEPRECATED).BooleanOverrides.ArrayMax = 0;
  (this->ParameterOverrides_DEPRECATED).Integer32Overrides.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ParameterOverrides_DEPRECATED).Integer32Overrides.ArrayNum = 0;
  (this->ParameterOverrides_DEPRECATED).Integer32Overrides.ArrayMax = 0;
  (this->ParameterOverrides_DEPRECATED).FloatOverrides.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ParameterOverrides_DEPRECATED).FloatOverrides.ArrayNum = 0;
  (this->ParameterOverrides_DEPRECATED).FloatOverrides.ArrayMax = 0;
  (this->ParameterOverrides_DEPRECATED).DoubleOverrides.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ParameterOverrides_DEPRECATED).DoubleOverrides.ArrayNum = 0;
  (this->ParameterOverrides_DEPRECATED).DoubleOverrides.ArrayMax = 0;
  (this->ParameterOverrides_DEPRECATED).Vector2fOverrides.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ParameterOverrides_DEPRECATED).Vector2fOverrides.ArrayNum = 0;
  (this->ParameterOverrides_DEPRECATED).Vector2fOverrides.ArrayMax = 0;
  (this->ParameterOverrides_DEPRECATED).Vector2dOverrides.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ParameterOverrides_DEPRECATED).Vector2dOverrides.ArrayNum = 0;
  (this->ParameterOverrides_DEPRECATED).Vector2dOverrides.ArrayMax = 0;
  (this->ParameterOverrides_DEPRECATED).Vector3fOverrides.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ParameterOverrides_DEPRECATED).Vector3fOverrides.ArrayNum = 0;
  (this->ParameterOverrides_DEPRECATED).Vector3fOverrides.ArrayMax = 0;
  (this->ParameterOverrides_DEPRECATED).Vector3dOverrides.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ParameterOverrides_DEPRECATED).Vector3dOverrides.ArrayNum = 0;
  (this->ParameterOverrides_DEPRECATED).Vector3dOverrides.ArrayMax = 0;
  (this->ParameterOverrides_DEPRECATED).Vector4fOverrides.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ParameterOverrides_DEPRECATED).Vector4fOverrides.ArrayNum = 0;
  (this->ParameterOverrides_DEPRECATED).Vector4fOverrides.ArrayMax = 0;
  (this->ParameterOverrides_DEPRECATED).Vector4dOverrides.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ParameterOverrides_DEPRECATED).Vector4dOverrides.ArrayNum = 0;
  (this->ParameterOverrides_DEPRECATED).Vector4dOverrides.ArrayMax = 0;
  (this->ParameterOverrides_DEPRECATED).Rotator3fOverrides.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ParameterOverrides_DEPRECATED).Rotator3fOverrides.ArrayNum = 0;
  (this->ParameterOverrides_DEPRECATED).Rotator3fOverrides.ArrayMax = 0;
  (this->ParameterOverrides_DEPRECATED).Rotator3dOverrides.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ParameterOverrides_DEPRECATED).Rotator3dOverrides.ArrayNum = 0;
  (this->ParameterOverrides_DEPRECATED).Rotator3dOverrides.ArrayMax = 0;
  (this->ParameterOverrides_DEPRECATED).Transform3fOverrides.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ParameterOverrides_DEPRECATED).Transform3fOverrides.ArrayNum = 0;
  (this->ParameterOverrides_DEPRECATED).Transform3fOverrides.ArrayMax = 0;
  (this->ParameterOverrides_DEPRECATED).Transform3dOverrides.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ParameterOverrides_DEPRECATED).Transform3dOverrides.ArrayNum = 0;
  (this->ParameterOverrides_DEPRECATED).Transform3dOverrides.ArrayMax = 0;
  return this;
}

// FCameraRigAssetReference @ 14d58d480

FCameraRigAssetReference * __thiscall
FCameraRigAssetReference::FCameraRigAssetReference(FCameraRigAssetReference *this)

{
  this->_padding_ = (longlong)&___7FBaseCameraObjectReference__6B_;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)&this->_padding_);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FCameraRigAssetReference__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->CameraRig).field0_0x0.DebugPtr = (UCameraRigAsset *)0x0;
  (this->ParameterOverrideGuids_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParameterOverrideGuids_DEPRECATED).ArrayNum = 0;
  (this->ParameterOverrideGuids_DEPRECATED).ArrayMax = 0;
  (this->ParameterOverrides_DEPRECATED).BooleanOverrides.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ParameterOverrides_DEPRECATED).BooleanOverrides.ArrayNum = 0;
  (this->ParameterOverrides_DEPRECATED).BooleanOverrides.ArrayMax = 0;
  (this->ParameterOverrides_DEPRECATED).Integer32Overrides.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ParameterOverrides_DEPRECATED).Integer32Overrides.ArrayNum = 0;
  (this->ParameterOverrides_DEPRECATED).Integer32Overrides.ArrayMax = 0;
  (this->ParameterOverrides_DEPRECATED).FloatOverrides.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ParameterOverrides_DEPRECATED).FloatOverrides.ArrayNum = 0;
  (this->ParameterOverrides_DEPRECATED).FloatOverrides.ArrayMax = 0;
  (this->ParameterOverrides_DEPRECATED).DoubleOverrides.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ParameterOverrides_DEPRECATED).DoubleOverrides.ArrayNum = 0;
  (this->ParameterOverrides_DEPRECATED).DoubleOverrides.ArrayMax = 0;
  (this->ParameterOverrides_DEPRECATED).Vector2fOverrides.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ParameterOverrides_DEPRECATED).Vector2fOverrides.ArrayNum = 0;
  (this->ParameterOverrides_DEPRECATED).Vector2fOverrides.ArrayMax = 0;
  (this->ParameterOverrides_DEPRECATED).Vector2dOverrides.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ParameterOverrides_DEPRECATED).Vector2dOverrides.ArrayNum = 0;
  (this->ParameterOverrides_DEPRECATED).Vector2dOverrides.ArrayMax = 0;
  (this->ParameterOverrides_DEPRECATED).Vector3fOverrides.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ParameterOverrides_DEPRECATED).Vector3fOverrides.ArrayNum = 0;
  (this->ParameterOverrides_DEPRECATED).Vector3fOverrides.ArrayMax = 0;
  (this->ParameterOverrides_DEPRECATED).Vector3dOverrides.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ParameterOverrides_DEPRECATED).Vector3dOverrides.ArrayNum = 0;
  (this->ParameterOverrides_DEPRECATED).Vector3dOverrides.ArrayMax = 0;
  (this->ParameterOverrides_DEPRECATED).Vector4fOverrides.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ParameterOverrides_DEPRECATED).Vector4fOverrides.ArrayNum = 0;
  (this->ParameterOverrides_DEPRECATED).Vector4fOverrides.ArrayMax = 0;
  (this->ParameterOverrides_DEPRECATED).Vector4dOverrides.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ParameterOverrides_DEPRECATED).Vector4dOverrides.ArrayNum = 0;
  (this->ParameterOverrides_DEPRECATED).Vector4dOverrides.ArrayMax = 0;
  (this->ParameterOverrides_DEPRECATED).Rotator3fOverrides.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ParameterOverrides_DEPRECATED).Rotator3fOverrides.ArrayNum = 0;
  (this->ParameterOverrides_DEPRECATED).Rotator3fOverrides.ArrayMax = 0;
  (this->ParameterOverrides_DEPRECATED).Rotator3dOverrides.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ParameterOverrides_DEPRECATED).Rotator3dOverrides.ArrayNum = 0;
  (this->ParameterOverrides_DEPRECATED).Rotator3dOverrides.ArrayMax = 0;
  (this->ParameterOverrides_DEPRECATED).Transform3fOverrides.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ParameterOverrides_DEPRECATED).Transform3fOverrides.ArrayNum = 0;
  (this->ParameterOverrides_DEPRECATED).Transform3fOverrides.ArrayMax = 0;
  (this->ParameterOverrides_DEPRECATED).Transform3dOverrides.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ParameterOverrides_DEPRECATED).Transform3dOverrides.ArrayNum = 0;
  (this->ParameterOverrides_DEPRECATED).Transform3dOverrides.ArrayMax = 0;
  return this;
}

// ApplyParameterOverrides @ 14d599ec0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
FCameraRigAssetReference::ApplyParameterOverrides
          (FCameraRigAssetReference *this,FCameraNodeEvaluationResult *param_1,bool param_2)

{
  ApplyParameterOverridesImpl(this,&param_1->VariableTable,&param_1->ContextDataTable,param_2);
  return;
}

// ApplyParameterOverrides @ 14d599ee0

void __thiscall
FCameraRigAssetReference::ApplyParameterOverrides
          (FCameraRigAssetReference *this,FCameraVariableTable *param_1,
          FCameraContextDataTable *param_2,bool param_3)

{
  int iVar1;
  UCameraRigAsset *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uStack_2c;
  TArrayView<FCameraObjectInterfaceParameterDefinition_const_,int> TStack_28;
  FCameraObjectInterfaceParameterOverrideHelper FStack_18;
  
  if ((this->CameraRig).field0_0x0.DebugPtr != (UCameraRigAsset *)0x0) {
    UE::Cameras::FCameraObjectInterfaceParameterOverrideHelper::
    FCameraObjectInterfaceParameterOverrideHelper(&FStack_18,param_1,param_2);
    pUVar2 = (this->CameraRig).field0_0x0.DebugPtr;
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
              (&FStack_18,(UObject *)(this->CameraRig).field0_0x0.DebugPtr,&TStack_28,
               (FInstancedOverridablePropertyBag *)&this->_padding_,param_3);
  }
  return;
}

// ApplyParameterOverrides @ 14d599ef0

void __thiscall
FCameraRigAssetReference::ApplyParameterOverrides
          (FCameraRigAssetReference *this,FCameraVariableTable *param_1,bool param_2)

{
  ApplyParameterOverridesImpl(this,param_1,(FCameraContextDataTable *)0x0,param_2);
  return;
}

// ApplyParameterOverrides @ 14d599f10

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
FCameraRigAssetReference::ApplyParameterOverrides
          (FCameraRigAssetReference *this,FInstancedPropertyBag *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  int iVar1;
  UCameraRigAsset *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uStack_2c;
  TArrayView<FCameraObjectInterfaceParameterDefinition_const_,int> local_28;
  FCameraObjectInterfaceParameterOverrideHelper local_18;
  
  if ((this->CameraRig).field0_0x0.DebugPtr != (UCameraRigAsset *)0x0) {
    UE::Cameras::FCameraObjectInterfaceParameterOverrideHelper::
    FCameraObjectInterfaceParameterOverrideHelper
              (&local_18,&param_2->VariableTable,&param_2->ContextDataTable);
    pUVar2 = (this->CameraRig).field0_0x0.DebugPtr;
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
              (&local_18,(UObject *)(this->CameraRig).field0_0x0.DebugPtr,&local_28,
               (FInstancedOverridablePropertyBag *)&this->_padding_,param_1);
  }
  return;
}

// ApplyParameterOverridesImpl @ 14d59a0d0

void __thiscall
FCameraRigAssetReference::ApplyParameterOverridesImpl
          (FCameraRigAssetReference *this,FCameraVariableTable *param_1,
          FCameraContextDataTable *param_2,bool param_3)

{
  int iVar1;
  UCameraRigAsset *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uStack_2c;
  TArrayView<FCameraObjectInterfaceParameterDefinition_const_,int> local_28;
  FCameraObjectInterfaceParameterOverrideHelper local_18;
  
  if ((this->CameraRig).field0_0x0.DebugPtr != (UCameraRigAsset *)0x0) {
    UE::Cameras::FCameraObjectInterfaceParameterOverrideHelper::
    FCameraObjectInterfaceParameterOverrideHelper(&local_18,param_1,param_2);
    pUVar2 = (this->CameraRig).field0_0x0.DebugPtr;
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
              (&local_18,(UObject *)(this->CameraRig).field0_0x0.DebugPtr,&local_28,
               (FInstancedOverridablePropertyBag *)&this->_padding_,param_3);
  }
  return;
}

// GetCameraObject @ 14d5a6b70

UBaseCameraObject * __thiscall
FCameraRigAssetReference::GetCameraObject(FCameraRigAssetReference *this)

{
  return (UBaseCameraObject *)(this->CameraRig).field0_0x0.DebugPtr;
}

// PostSerialize @ 14d5c48e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPropertyBagAlterationResult": Some values do not have unique names */

void __thiscall
FCameraRigAssetReference::PostSerialize(FCameraRigAssetReference *this,FArchive *param_1)

{
  longlong *this_00;
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FName FVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  FName *pFVar10;
  UPackage *pUVar11;
  longlong lVar12;
  undefined8 *puVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  FCameraRigAssetReference *this_01;
  undefined1 auStackY_938 [32];
  ForAnyElementType local_8e8;
  undefined8 local_8e0;
  ForAnyElementType local_8d8;
  undefined8 local_8d0;
  undefined1 local_8c8;
  undefined1 local_8c7;
  undefined1 local_8c6;
  undefined1 local_8c5;
  undefined1 local_8c4;
  undefined1 local_8c3;
  undefined1 local_8c2;
  undefined1 local_8c1;
  undefined1 local_8c0;
  undefined1 local_8bf;
  undefined1 local_8be;
  undefined1 local_8bd;
  undefined1 local_8bc;
  undefined1 local_8bb;
  undefined1 local_8ba;
  undefined1 local_8b9;
  undefined1 local_8b8;
  undefined1 local_8b7;
  undefined1 local_8b6;
  undefined1 local_8b5;
  undefined1 local_8b4;
  undefined1 local_8b3;
  undefined1 local_8b2;
  undefined1 local_8b1;
  undefined1 local_8b0;
  undefined1 local_8af;
  undefined1 local_8ae;
  undefined1 local_8ad;
  undefined1 local_8ac [4];
  TObjectPtr<UScriptStruct_const_>_u_0 local_8a8;
  undefined8 uStack_8a0;
  void *local_898;
  undefined8 uStack_890;
  FArchive *local_888;
  undefined8 local_880;
  undefined8 uStack_878;
  undefined8 local_870;
  undefined4 local_868;
  undefined8 local_860;
  undefined8 uStack_858;
  undefined8 local_850;
  undefined4 local_848;
  undefined8 local_840;
  undefined8 uStack_838;
  undefined8 local_830;
  undefined4 local_828;
  undefined8 local_820;
  undefined8 uStack_818;
  undefined8 local_810;
  undefined4 local_808;
  undefined8 local_800;
  undefined8 uStack_7f8;
  undefined8 local_7f0;
  undefined4 local_7e8;
  undefined8 local_7e0;
  undefined8 uStack_7d8;
  undefined8 local_7d0;
  undefined4 local_7c8;
  undefined8 local_7c0;
  undefined8 uStack_7b8;
  undefined8 local_7b0;
  undefined4 local_7a8;
  undefined8 local_7a0;
  undefined8 uStack_798;
  undefined8 local_790;
  undefined4 local_788;
  undefined8 local_780;
  undefined8 uStack_778;
  undefined8 local_770;
  undefined4 local_768;
  undefined8 local_760;
  undefined8 uStack_758;
  undefined8 local_750;
  undefined4 local_748;
  undefined8 local_740;
  undefined8 uStack_738;
  undefined8 local_730;
  undefined4 local_728;
  undefined8 local_720;
  undefined8 uStack_718;
  undefined8 local_710;
  undefined4 local_708;
  undefined8 local_700;
  undefined8 uStack_6f8;
  undefined8 local_6f0;
  undefined4 local_6e8;
  undefined8 local_6e0;
  undefined8 uStack_6d8;
  undefined8 local_6d0;
  undefined4 local_6c8;
  undefined8 local_6c0;
  undefined8 uStack_6b8;
  undefined8 local_6b0;
  undefined4 local_6a8;
  FCameraRigParameterOverrides local_6a0;
  FCameraRigAssetReference *local_5c0;
  FConstStructView local_5b8;
  FConstStructView local_5a8;
  FConstStructView local_598;
  FConstStructView local_588;
  FConstStructView local_578;
  FConstStructView local_568;
  FConstStructView local_558;
  FConstStructView local_548;
  FConstStructView local_538;
  FConstStructView local_528;
  FConstStructView local_518;
  TObjectPtr<UObject_const_>_u_0 *local_508;
  int iStack_500;
  undefined4 uStack_4fc;
  FConstStructView local_4f8;
  FConstStructView local_4e8;
  FConstStructView local_4d8;
  FName local_4c8;
  FName local_4c0;
  FName local_4b8;
  FName local_4b0;
  FName local_4a8;
  FName local_4a0;
  FName local_498;
  FName local_490;
  FName local_488;
  FName local_480;
  FName local_478 [2];
  TArrayView<FPropertyBagPropertyDesc_const_,int> local_468;
  FName local_458;
  FName local_450;
  FName local_448;
  FName local_440;
  FName local_438;
  FName local_430;
  FName local_428;
  FName local_420;
  FName local_418;
  FName local_410;
  FName local_408;
  FName local_400;
  FName local_3f8;
  FName local_3f0;
  FName local_3e8;
  FName local_3e0;
  FName local_3d8 [2];
  TObjectPtr<UObject_const_>_u_0 local_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  FName local_3b0;
  undefined4 local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined4 local_390;
  TObjectPtr<UObject_const_>_u_0 local_388;
  undefined8 local_380;
  undefined8 uStack_378;
  FName local_370;
  undefined4 local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined4 local_350;
  TObjectPtr<UObject_const_>_u_0 local_348;
  undefined8 local_340;
  undefined8 uStack_338;
  FName local_330;
  undefined4 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined4 local_310;
  TObjectPtr<UObject_const_>_u_0 local_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  FName local_2f0;
  undefined4 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined4 local_2d0;
  TObjectPtr<UObject_const_>_u_0 local_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  FName local_2b0;
  undefined4 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined4 local_290;
  TObjectPtr<UObject_const_>_u_0 local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  FName local_270;
  undefined4 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined4 local_250;
  TObjectPtr<UObject_const_>_u_0 local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  FName local_230;
  undefined4 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined4 local_210;
  TObjectPtr<UObject_const_>_u_0 local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  FName local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  TObjectPtr<UObject_const_>_u_0 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  FName local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  TObjectPtr<UObject_const_>_u_0 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  FName local_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined4 local_150;
  TObjectPtr<UObject_const_>_u_0 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  FName local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined4 local_110;
  TObjectPtr<UObject_const_>_u_0 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  FName local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  TObjectPtr<UObject_const_>_u_0 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  FName local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  TObjectPtr<UObject_const_>_u_0 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  FName local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_938;
  this_01 = this;
  local_888 = param_1;
  local_5c0 = this;
  if ((param_1->field_0x28 & 1) != 0) {
    bVar7 = false;
    iVar3 = (this->ParameterOverrides_DEPRECATED).BooleanOverrides.ArrayNum;
    pFVar15 = (this->ParameterOverrides_DEPRECATED).BooleanOverrides.AllocatorInstance.Data;
    pFVar16 = pFVar15 + (longlong)iVar3 * 0x48;
    local_8d8.Data = (FScriptContainerElement *)0x0;
    local_8d0 = 0;
    local_8e8.Data = (FScriptContainerElement *)0x0;
    local_8e0 = 0;
    while( true ) {
      if ((this->ParameterOverrides_DEPRECATED).BooleanOverrides.ArrayNum != iVar3) {
        local_8ad = 0;
        `TCheckedPointerIterator<FBooleanCameraRigParameterOverride,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_8ad);
      }
      if (pFVar15 == pFVar16) break;
      iVar8 = *(int *)(pFVar15 + 0x28) + -1;
      if (*(int *)(pFVar15 + 0x28) == 0) {
        iVar8 = 0;
      }
      pFVar10 = ::FName::FName(&local_408,iVar8,*(wchar_t **)(pFVar15 + 0x20),FNAME_Add);
      FVar4 = *pFVar10;
      if (Z_Registration_Info_UScriptStruct_FBooleanCameraParameter.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar11 = Z_Construct_UPackage__Script_GameplayCameras();
        Z_Registration_Info_UScriptStruct_FBooleanCameraParameter.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FBooleanCameraParameter,(UObject *)pUVar11,
                             L"BooleanCameraParameter");
      }
      local_2c8 = (TObjectPtr<UObject_const_>_u_0)
                  Z_Registration_Info_UScriptStruct_FBooleanCameraParameter.OuterSingleton;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (Z_Registration_Info_UScriptStruct_FBooleanCameraParameter.OuterSingleton !=
          (UScriptStruct *)0x0)) {
        UE::GC::MarkAsReachable
                  ((UObject *)
                   Z_Registration_Info_UScriptStruct_FBooleanCameraParameter.OuterSingleton);
      }
      local_2c0 = *(undefined8 *)pFVar15;
      uStack_2b8 = *(undefined8 *)(pFVar15 + 8);
      local_2a8 = 0xb;
      local_2a0 = 1;
      local_298 = 0;
      local_290 = 0xffffffff;
      local_2b0 = FVar4;
      if (((local_8d8.Data <= &local_2c8) &&
          (&local_2c8 <
           (TObjectPtr<UObject_const_>_u_0 *)(local_8d8.Data + (longlong)local_8d0._4_4_ * 0x40)))
         && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = (int)local_8d0;
      if ((int)local_8d0 == local_8d0._4_4_) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x840,&local_8d8,(int *)((longlong)&local_8d0 + 4));
      }
      local_8d0 = CONCAT44(local_8d0._4_4_,iVar8 + 1);
      FPropertyBagPropertyDesc::FPropertyBagPropertyDesc
                ((FPropertyBagPropertyDesc *)(local_8d8.Data + (longlong)iVar8 * 0x40),
                 (FPropertyBagPropertyDesc *)&local_2c8.ObjectPtr);
      local_840 = *(undefined8 *)pFVar15;
      uStack_838 = *(undefined8 *)(pFVar15 + 8);
      local_830 = 0xffffffffffffffff;
      local_828 = CONCAT31(local_828._1_3_,1);
      if (((local_8e8.Data <= (FScriptContainerElement *)&local_840) &&
          ((FScriptContainerElement *)&local_840 < local_8e8.Data + (longlong)local_8e0._4_4_ * 0x1c
          )) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = (int)local_8e0;
      if ((int)local_8e0 == local_8e0._4_4_) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x41c,&local_8e8,(int *)((longlong)&local_8e0 + 4));
      }
      bVar7 = true;
      local_8e0 = CONCAT44(local_8e0._4_4_,iVar8 + 1);
      lVar12 = (longlong)iVar8 * 0x1c;
      pFVar15 = pFVar15 + 0x48;
      *(undefined8 *)(local_8e8.Data + lVar12) = local_840;
      *(undefined8 *)(local_8e8.Data + lVar12 + 8) = uStack_838;
      *(undefined8 *)(local_8e8.Data + lVar12 + 0x10) = local_830;
      *(undefined4 *)(local_8e8.Data + lVar12 + 0x18) = local_828;
    }
    iVar3 = (this->ParameterOverrides_DEPRECATED).Integer32Overrides.ArrayNum;
    pFVar15 = (this->ParameterOverrides_DEPRECATED).Integer32Overrides.AllocatorInstance.Data;
    pFVar16 = pFVar15 + (longlong)iVar3 * 0x48;
    while( true ) {
      if ((this->ParameterOverrides_DEPRECATED).Integer32Overrides.ArrayNum != iVar3) {
        local_8ac[0] = 0;
        `TCheckedPointerIterator<FInteger32CameraRigParameterOverride,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_8ac);
      }
      iVar8 = 0;
      if (pFVar15 == pFVar16) break;
      iVar9 = *(int *)(pFVar15 + 0x28) + -1;
      if (*(int *)(pFVar15 + 0x28) == 0) {
        iVar9 = iVar8;
      }
      pFVar10 = ::FName::FName(&local_4c8,iVar9,*(wchar_t **)(pFVar15 + 0x20),FNAME_Add);
      FVar4 = *pFVar10;
      if (Z_Registration_Info_UScriptStruct_FInteger32CameraParameter.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar11 = Z_Construct_UPackage__Script_GameplayCameras();
        Z_Registration_Info_UScriptStruct_FInteger32CameraParameter.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FInteger32CameraParameter,(UObject *)pUVar11,
                             L"Integer32CameraParameter");
      }
      local_288 = (TObjectPtr<UObject_const_>_u_0)
                  Z_Registration_Info_UScriptStruct_FInteger32CameraParameter.OuterSingleton;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (Z_Registration_Info_UScriptStruct_FInteger32CameraParameter.OuterSingleton !=
          (UScriptStruct *)0x0)) {
        UE::GC::MarkAsReachable
                  ((UObject *)
                   Z_Registration_Info_UScriptStruct_FInteger32CameraParameter.OuterSingleton);
      }
      local_280 = *(undefined8 *)pFVar15;
      uStack_278 = *(undefined8 *)(pFVar15 + 8);
      local_268 = 0xb;
      local_260 = 1;
      local_258 = 0;
      local_250 = 0xffffffff;
      local_270 = FVar4;
      if (((local_8d8.Data <= &local_288) &&
          (&local_288 <
           (TObjectPtr<UObject_const_>_u_0 *)(local_8d8.Data + (longlong)local_8d0._4_4_ * 0x40)))
         && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = (int)local_8d0;
      if ((int)local_8d0 == local_8d0._4_4_) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x840,&local_8d8,(int *)((longlong)&local_8d0 + 4));
      }
      local_8d0 = CONCAT44(local_8d0._4_4_,iVar8 + 1);
      FPropertyBagPropertyDesc::FPropertyBagPropertyDesc
                ((FPropertyBagPropertyDesc *)(local_8d8.Data + (longlong)iVar8 * 0x40),
                 (FPropertyBagPropertyDesc *)&local_288.ObjectPtr);
      local_860 = *(undefined8 *)pFVar15;
      uStack_858 = *(undefined8 *)(pFVar15 + 8);
      local_850 = 0xffffffffffffffff;
      local_848 = CONCAT31(local_848._1_3_,1);
      if (((local_8e8.Data <= (FScriptContainerElement *)&local_860) &&
          ((FScriptContainerElement *)&local_860 < local_8e8.Data + (longlong)local_8e0._4_4_ * 0x1c
          )) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = (int)local_8e0;
      if ((int)local_8e0 == local_8e0._4_4_) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x41c,&local_8e8,(int *)((longlong)&local_8e0 + 4));
      }
      bVar7 = true;
      local_8e0 = CONCAT44(local_8e0._4_4_,iVar8 + 1);
      lVar12 = (longlong)iVar8 * 0x1c;
      pFVar15 = pFVar15 + 0x48;
      *(undefined8 *)(local_8e8.Data + lVar12) = local_860;
      *(undefined8 *)(local_8e8.Data + lVar12 + 8) = uStack_858;
      *(undefined8 *)(local_8e8.Data + lVar12 + 0x10) = local_850;
      *(undefined4 *)(local_8e8.Data + lVar12 + 0x18) = local_848;
    }
    iVar3 = (this->ParameterOverrides_DEPRECATED).FloatOverrides.ArrayNum;
    pFVar15 = (this->ParameterOverrides_DEPRECATED).FloatOverrides.AllocatorInstance.Data;
    pFVar16 = pFVar15 + (longlong)iVar3 * 0x48;
    while( true ) {
      if ((this->ParameterOverrides_DEPRECATED).FloatOverrides.ArrayNum != iVar3) {
        local_8c8 = 0;
        `TCheckedPointerIterator<FFloatCameraRigParameterOverride,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_8c8);
      }
      if (pFVar15 == pFVar16) break;
      iVar9 = *(int *)(pFVar15 + 0x28) + -1;
      if (*(int *)(pFVar15 + 0x28) == 0) {
        iVar9 = iVar8;
      }
      pFVar10 = ::FName::FName(&local_4c0,iVar9,*(wchar_t **)(pFVar15 + 0x20),FNAME_Add);
      FVar4 = *pFVar10;
      if (Z_Registration_Info_UScriptStruct_FFloatCameraParameter.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar11 = Z_Construct_UPackage__Script_GameplayCameras();
        Z_Registration_Info_UScriptStruct_FFloatCameraParameter.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FFloatCameraParameter,(UObject *)pUVar11,
                             L"FloatCameraParameter");
      }
      local_248 = (TObjectPtr<UObject_const_>_u_0)
                  Z_Registration_Info_UScriptStruct_FFloatCameraParameter.OuterSingleton;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (Z_Registration_Info_UScriptStruct_FFloatCameraParameter.OuterSingleton !=
          (UScriptStruct *)0x0)) {
        UE::GC::MarkAsReachable
                  ((UObject *)Z_Registration_Info_UScriptStruct_FFloatCameraParameter.OuterSingleton
                  );
      }
      local_240 = *(undefined8 *)pFVar15;
      uStack_238 = *(undefined8 *)(pFVar15 + 8);
      local_228 = 0xb;
      local_220 = 1;
      local_218 = 0;
      local_210 = 0xffffffff;
      local_230 = FVar4;
      if (((local_8d8.Data <= &local_248) &&
          (&local_248 <
           (TObjectPtr<UObject_const_>_u_0 *)(local_8d8.Data + (longlong)local_8d0._4_4_ * 0x40)))
         && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar9 = (int)local_8d0;
      if ((int)local_8d0 == local_8d0._4_4_) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x840,&local_8d8,(int *)((longlong)&local_8d0 + 4));
      }
      local_8d0 = CONCAT44(local_8d0._4_4_,iVar9 + 1);
      FPropertyBagPropertyDesc::FPropertyBagPropertyDesc
                ((FPropertyBagPropertyDesc *)(local_8d8.Data + (longlong)iVar9 * 0x40),
                 (FPropertyBagPropertyDesc *)&local_248.ObjectPtr);
      local_880 = *(undefined8 *)pFVar15;
      uStack_878 = *(undefined8 *)(pFVar15 + 8);
      local_870 = 0xffffffffffffffff;
      local_868 = CONCAT31(local_868._1_3_,1);
      if (((local_8e8.Data <= (FScriptContainerElement *)&local_880) &&
          ((FScriptContainerElement *)&local_880 < local_8e8.Data + (longlong)local_8e0._4_4_ * 0x1c
          )) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar9 = (int)local_8e0;
      if ((int)local_8e0 == local_8e0._4_4_) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x41c,&local_8e8,(int *)((longlong)&local_8e0 + 4));
      }
      bVar7 = true;
      local_8e0 = CONCAT44(local_8e0._4_4_,iVar9 + 1);
      lVar12 = (longlong)iVar9 * 0x1c;
      pFVar15 = pFVar15 + 0x48;
      *(undefined8 *)(local_8e8.Data + lVar12) = local_880;
      *(undefined8 *)(local_8e8.Data + lVar12 + 8) = uStack_878;
      *(undefined8 *)(local_8e8.Data + lVar12 + 0x10) = local_870;
      *(undefined4 *)(local_8e8.Data + lVar12 + 0x18) = local_868;
    }
    iVar3 = (this->ParameterOverrides_DEPRECATED).DoubleOverrides.ArrayNum;
    pFVar16 = (this->ParameterOverrides_DEPRECATED).DoubleOverrides.AllocatorInstance.Data;
    pFVar15 = pFVar16 + (longlong)iVar3 * 0x50;
    while( true ) {
      if ((this->ParameterOverrides_DEPRECATED).DoubleOverrides.ArrayNum != iVar3) {
        local_8c7 = 0;
        `TCheckedPointerIterator<FDoubleCameraRigParameterOverride,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_8c7);
      }
      if (pFVar16 == pFVar15) break;
      iVar9 = *(int *)(pFVar16 + 0x28) + -1;
      if (*(int *)(pFVar16 + 0x28) == 0) {
        iVar9 = iVar8;
      }
      pFVar10 = ::FName::FName(&local_4b8,iVar9,*(wchar_t **)(pFVar16 + 0x20),FNAME_Add);
      FVar4 = *pFVar10;
      if (Z_Registration_Info_UScriptStruct_FDoubleCameraParameter.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar11 = Z_Construct_UPackage__Script_GameplayCameras();
        Z_Registration_Info_UScriptStruct_FDoubleCameraParameter.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FDoubleCameraParameter,(UObject *)pUVar11,
                             L"DoubleCameraParameter");
      }
      local_88 = (TObjectPtr<UObject_const_>_u_0)
                 Z_Registration_Info_UScriptStruct_FDoubleCameraParameter.OuterSingleton;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (Z_Registration_Info_UScriptStruct_FDoubleCameraParameter.OuterSingleton !=
          (UScriptStruct *)0x0)) {
        UE::GC::MarkAsReachable
                  ((UObject *)
                   Z_Registration_Info_UScriptStruct_FDoubleCameraParameter.OuterSingleton);
      }
      local_80 = *(undefined8 *)pFVar16;
      uStack_78 = *(undefined8 *)(pFVar16 + 8);
      local_68 = 0xb;
      local_60 = 1;
      local_58 = 0;
      local_50 = 0xffffffff;
      local_70 = FVar4;
      if (((local_8d8.Data <= &local_88) &&
          (&local_88 <
           (TObjectPtr<UObject_const_>_u_0 *)(local_8d8.Data + (longlong)local_8d0._4_4_ * 0x40)))
         && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar9 = (int)local_8d0;
      if ((int)local_8d0 == local_8d0._4_4_) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x840,&local_8d8,(int *)((longlong)&local_8d0 + 4));
      }
      local_8d0 = CONCAT44(local_8d0._4_4_,iVar9 + 1);
      FPropertyBagPropertyDesc::FPropertyBagPropertyDesc
                ((FPropertyBagPropertyDesc *)(local_8d8.Data + (longlong)iVar9 * 0x40),
                 (FPropertyBagPropertyDesc *)&local_88.ObjectPtr);
      local_820 = *(undefined8 *)pFVar16;
      uStack_818 = *(undefined8 *)(pFVar16 + 8);
      local_810 = 0xffffffffffffffff;
      local_808 = CONCAT31(local_808._1_3_,1);
      if (((local_8e8.Data <= (FScriptContainerElement *)&local_820) &&
          ((FScriptContainerElement *)&local_820 < local_8e8.Data + (longlong)local_8e0._4_4_ * 0x1c
          )) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar9 = (int)local_8e0;
      if ((int)local_8e0 == local_8e0._4_4_) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x41c,&local_8e8,(int *)((longlong)&local_8e0 + 4));
      }
      bVar7 = true;
      local_8e0 = CONCAT44(local_8e0._4_4_,iVar9 + 1);
      lVar12 = (longlong)iVar9 * 0x1c;
      pFVar16 = pFVar16 + 0x50;
      *(undefined8 *)(local_8e8.Data + lVar12) = local_820;
      *(undefined8 *)(local_8e8.Data + lVar12 + 8) = uStack_818;
      *(undefined8 *)(local_8e8.Data + lVar12 + 0x10) = local_810;
      *(undefined4 *)(local_8e8.Data + lVar12 + 0x18) = local_808;
    }
    iVar3 = (this->ParameterOverrides_DEPRECATED).Vector2fOverrides.ArrayNum;
    pFVar16 = (this->ParameterOverrides_DEPRECATED).Vector2fOverrides.AllocatorInstance.Data;
    pFVar15 = pFVar16 + (longlong)iVar3 * 0x50;
    while( true ) {
      if ((this->ParameterOverrides_DEPRECATED).Vector2fOverrides.ArrayNum != iVar3) {
        local_8c6 = 0;
        `TCheckedPointerIterator<FVector2fCameraRigParameterOverride,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_8c6);
      }
      if (pFVar16 == pFVar15) break;
      iVar9 = *(int *)(pFVar16 + 0x28) + -1;
      if (*(int *)(pFVar16 + 0x28) == 0) {
        iVar9 = iVar8;
      }
      pFVar10 = ::FName::FName(&local_4b0,iVar9,*(wchar_t **)(pFVar16 + 0x20),FNAME_Add);
      FVar4 = *pFVar10;
      if (Z_Registration_Info_UScriptStruct_FVector2fCameraParameter.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar11 = Z_Construct_UPackage__Script_GameplayCameras();
        Z_Registration_Info_UScriptStruct_FVector2fCameraParameter.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FVector2fCameraParameter,(UObject *)pUVar11,
                             L"Vector2fCameraParameter");
      }
      local_208 = (TObjectPtr<UObject_const_>_u_0)
                  Z_Registration_Info_UScriptStruct_FVector2fCameraParameter.OuterSingleton;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (Z_Registration_Info_UScriptStruct_FVector2fCameraParameter.OuterSingleton !=
          (UScriptStruct *)0x0)) {
        UE::GC::MarkAsReachable
                  ((UObject *)
                   Z_Registration_Info_UScriptStruct_FVector2fCameraParameter.OuterSingleton);
      }
      local_200 = *(undefined8 *)pFVar16;
      uStack_1f8 = *(undefined8 *)(pFVar16 + 8);
      local_1e8 = 0xb;
      local_1e0 = 1;
      local_1d8 = 0;
      local_1d0 = 0xffffffff;
      local_1f0 = FVar4;
      if (((local_8d8.Data <= &local_208) &&
          (&local_208 <
           (TObjectPtr<UObject_const_>_u_0 *)(local_8d8.Data + (longlong)local_8d0._4_4_ * 0x40)))
         && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar9 = (int)local_8d0;
      if ((int)local_8d0 == local_8d0._4_4_) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x840,&local_8d8,(int *)((longlong)&local_8d0 + 4));
      }
      local_8d0 = CONCAT44(local_8d0._4_4_,iVar9 + 1);
      FPropertyBagPropertyDesc::FPropertyBagPropertyDesc
                ((FPropertyBagPropertyDesc *)(local_8d8.Data + (longlong)iVar9 * 0x40),
                 (FPropertyBagPropertyDesc *)&local_208.ObjectPtr);
      local_6c0 = *(undefined8 *)pFVar16;
      uStack_6b8 = *(undefined8 *)(pFVar16 + 8);
      local_6b0 = 0xffffffffffffffff;
      local_6a8 = CONCAT31(local_6a8._1_3_,1);
      if (((local_8e8.Data <= (FScriptContainerElement *)&local_6c0) &&
          ((FScriptContainerElement *)&local_6c0 < local_8e8.Data + (longlong)local_8e0._4_4_ * 0x1c
          )) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar9 = (int)local_8e0;
      if ((int)local_8e0 == local_8e0._4_4_) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x41c,&local_8e8,(int *)((longlong)&local_8e0 + 4));
      }
      bVar7 = true;
      local_8e0 = CONCAT44(local_8e0._4_4_,iVar9 + 1);
      lVar12 = (longlong)iVar9 * 0x1c;
      pFVar16 = pFVar16 + 0x50;
      *(undefined8 *)(local_8e8.Data + lVar12) = local_6c0;
      *(undefined8 *)(local_8e8.Data + lVar12 + 8) = uStack_6b8;
      *(undefined8 *)(local_8e8.Data + lVar12 + 0x10) = local_6b0;
      *(undefined4 *)(local_8e8.Data + lVar12 + 0x18) = local_6a8;
    }
    iVar3 = (this->ParameterOverrides_DEPRECATED).Vector2dOverrides.ArrayNum;
    pFVar16 = (this->ParameterOverrides_DEPRECATED).Vector2dOverrides.AllocatorInstance.Data;
    pFVar15 = pFVar16 + (longlong)iVar3 * 0x58;
    while( true ) {
      if ((this->ParameterOverrides_DEPRECATED).Vector2dOverrides.ArrayNum != iVar3) {
        local_8c5 = 0;
        `TCheckedPointerIterator<FVector2dCameraRigParameterOverride,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_8c5);
      }
      if (pFVar16 == pFVar15) break;
      iVar9 = *(int *)(pFVar16 + 0x28) + -1;
      if (*(int *)(pFVar16 + 0x28) == 0) {
        iVar9 = iVar8;
      }
      pFVar10 = ::FName::FName(&local_3e0,iVar9,*(wchar_t **)(pFVar16 + 0x20),FNAME_Add);
      FVar4 = *pFVar10;
      if (Z_Registration_Info_UScriptStruct_FVector2dCameraParameter.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar11 = Z_Construct_UPackage__Script_GameplayCameras();
        Z_Registration_Info_UScriptStruct_FVector2dCameraParameter.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FVector2dCameraParameter,(UObject *)pUVar11,
                             L"Vector2dCameraParameter");
      }
      local_1c8 = (TObjectPtr<UObject_const_>_u_0)
                  Z_Registration_Info_UScriptStruct_FVector2dCameraParameter.OuterSingleton;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (Z_Registration_Info_UScriptStruct_FVector2dCameraParameter.OuterSingleton !=
          (UScriptStruct *)0x0)) {
        UE::GC::MarkAsReachable
                  ((UObject *)
                   Z_Registration_Info_UScriptStruct_FVector2dCameraParameter.OuterSingleton);
      }
      local_1c0 = *(undefined8 *)pFVar16;
      uStack_1b8 = *(undefined8 *)(pFVar16 + 8);
      local_1a8 = 0xb;
      local_1a0 = 1;
      local_198 = 0;
      local_190 = 0xffffffff;
      local_1b0 = FVar4;
      if (((local_8d8.Data <= &local_1c8) &&
          (&local_1c8 <
           (TObjectPtr<UObject_const_>_u_0 *)(local_8d8.Data + (longlong)local_8d0._4_4_ * 0x40)))
         && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar9 = (int)local_8d0;
      if ((int)local_8d0 == local_8d0._4_4_) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x840,&local_8d8,(int *)((longlong)&local_8d0 + 4));
      }
      local_8d0 = CONCAT44(local_8d0._4_4_,iVar9 + 1);
      FPropertyBagPropertyDesc::FPropertyBagPropertyDesc
                ((FPropertyBagPropertyDesc *)(local_8d8.Data + (longlong)iVar9 * 0x40),
                 (FPropertyBagPropertyDesc *)&local_1c8.ObjectPtr);
      local_6e0 = *(undefined8 *)pFVar16;
      uStack_6d8 = *(undefined8 *)(pFVar16 + 8);
      local_6d0 = 0xffffffffffffffff;
      local_6c8 = CONCAT31(local_6c8._1_3_,1);
      if (((local_8e8.Data <= (FScriptContainerElement *)&local_6e0) &&
          ((FScriptContainerElement *)&local_6e0 < local_8e8.Data + (longlong)local_8e0._4_4_ * 0x1c
          )) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar9 = (int)local_8e0;
      if ((int)local_8e0 == local_8e0._4_4_) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x41c,&local_8e8,(int *)((longlong)&local_8e0 + 4));
      }
      bVar7 = true;
      local_8e0 = CONCAT44(local_8e0._4_4_,iVar9 + 1);
      lVar12 = (longlong)iVar9 * 0x1c;
      pFVar16 = pFVar16 + 0x58;
      *(undefined8 *)(local_8e8.Data + lVar12) = local_6e0;
      *(undefined8 *)(local_8e8.Data + lVar12 + 8) = uStack_6d8;
      *(undefined8 *)(local_8e8.Data + lVar12 + 0x10) = local_6d0;
      *(undefined4 *)(local_8e8.Data + lVar12 + 0x18) = local_6c8;
    }
    iVar3 = (this->ParameterOverrides_DEPRECATED).Vector3fOverrides.ArrayNum;
    pFVar16 = (this->ParameterOverrides_DEPRECATED).Vector3fOverrides.AllocatorInstance.Data;
    pFVar15 = pFVar16 + (longlong)iVar3 * 0x50;
    while( true ) {
      if ((this->ParameterOverrides_DEPRECATED).Vector3fOverrides.ArrayNum != iVar3) {
        local_8c4 = 0;
        `TCheckedPointerIterator<FVector3fCameraRigParameterOverride,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_8c4);
      }
      if (pFVar16 == pFVar15) break;
      iVar9 = *(int *)(pFVar16 + 0x28) + -1;
      if (*(int *)(pFVar16 + 0x28) == 0) {
        iVar9 = iVar8;
      }
      pFVar10 = ::FName::FName(&local_3e8,iVar9,*(wchar_t **)(pFVar16 + 0x20),FNAME_Add);
      FVar4 = *pFVar10;
      if (Z_Registration_Info_UScriptStruct_FVector3fCameraParameter.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar11 = Z_Construct_UPackage__Script_GameplayCameras();
        Z_Registration_Info_UScriptStruct_FVector3fCameraParameter.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FVector3fCameraParameter,(UObject *)pUVar11,
                             L"Vector3fCameraParameter");
      }
      local_188 = (TObjectPtr<UObject_const_>_u_0)
                  Z_Registration_Info_UScriptStruct_FVector3fCameraParameter.OuterSingleton;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (Z_Registration_Info_UScriptStruct_FVector3fCameraParameter.OuterSingleton !=
          (UScriptStruct *)0x0)) {
        UE::GC::MarkAsReachable
                  ((UObject *)
                   Z_Registration_Info_UScriptStruct_FVector3fCameraParameter.OuterSingleton);
      }
      local_180 = *(undefined8 *)pFVar16;
      uStack_178 = *(undefined8 *)(pFVar16 + 8);
      local_168 = 0xb;
      local_160 = 1;
      local_158 = 0;
      local_150 = 0xffffffff;
      local_170 = FVar4;
      if (((local_8d8.Data <= &local_188) &&
          (&local_188 <
           (TObjectPtr<UObject_const_>_u_0 *)(local_8d8.Data + (longlong)local_8d0._4_4_ * 0x40)))
         && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar9 = (int)local_8d0;
      if ((int)local_8d0 == local_8d0._4_4_) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x840,&local_8d8,(int *)((longlong)&local_8d0 + 4));
      }
      local_8d0 = CONCAT44(local_8d0._4_4_,iVar9 + 1);
      FPropertyBagPropertyDesc::FPropertyBagPropertyDesc
                ((FPropertyBagPropertyDesc *)(local_8d8.Data + (longlong)iVar9 * 0x40),
                 (FPropertyBagPropertyDesc *)&local_188.ObjectPtr);
      local_700 = *(undefined8 *)pFVar16;
      uStack_6f8 = *(undefined8 *)(pFVar16 + 8);
      local_6f0 = 0xffffffffffffffff;
      local_6e8 = CONCAT31(local_6e8._1_3_,1);
      if (((local_8e8.Data <= (FScriptContainerElement *)&local_700) &&
          ((FScriptContainerElement *)&local_700 < local_8e8.Data + (longlong)local_8e0._4_4_ * 0x1c
          )) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar9 = (int)local_8e0;
      if ((int)local_8e0 == local_8e0._4_4_) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x41c,&local_8e8,(int *)((longlong)&local_8e0 + 4));
      }
      bVar7 = true;
      local_8e0 = CONCAT44(local_8e0._4_4_,iVar9 + 1);
      lVar12 = (longlong)iVar9 * 0x1c;
      pFVar16 = pFVar16 + 0x50;
      *(undefined8 *)(local_8e8.Data + lVar12) = local_700;
      *(undefined8 *)(local_8e8.Data + lVar12 + 8) = uStack_6f8;
      *(undefined8 *)(local_8e8.Data + lVar12 + 0x10) = local_6f0;
      *(undefined4 *)(local_8e8.Data + lVar12 + 0x18) = local_6e8;
    }
    iVar3 = (this->ParameterOverrides_DEPRECATED).Vector3dOverrides.ArrayNum;
    pFVar16 = (this->ParameterOverrides_DEPRECATED).Vector3dOverrides.AllocatorInstance.Data;
    pFVar15 = pFVar16 + (longlong)iVar3 * 0x60;
    while( true ) {
      if ((this->ParameterOverrides_DEPRECATED).Vector3dOverrides.ArrayNum != iVar3) {
        local_8c3 = 0;
        `TCheckedPointerIterator<FVector3dCameraRigParameterOverride,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_8c3);
      }
      if (pFVar16 == pFVar15) break;
      iVar9 = *(int *)(pFVar16 + 0x28) + -1;
      if (*(int *)(pFVar16 + 0x28) == 0) {
        iVar9 = iVar8;
      }
      pFVar10 = ::FName::FName(&local_3f0,iVar9,*(wchar_t **)(pFVar16 + 0x20),FNAME_Add);
      FVar4 = *pFVar10;
      if (Z_Registration_Info_UScriptStruct_FVector3dCameraParameter.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar11 = Z_Construct_UPackage__Script_GameplayCameras();
        Z_Registration_Info_UScriptStruct_FVector3dCameraParameter.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FVector3dCameraParameter,(UObject *)pUVar11,
                             L"Vector3dCameraParameter");
      }
      local_148 = (TObjectPtr<UObject_const_>_u_0)
                  Z_Registration_Info_UScriptStruct_FVector3dCameraParameter.OuterSingleton;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (Z_Registration_Info_UScriptStruct_FVector3dCameraParameter.OuterSingleton !=
          (UScriptStruct *)0x0)) {
        UE::GC::MarkAsReachable
                  ((UObject *)
                   Z_Registration_Info_UScriptStruct_FVector3dCameraParameter.OuterSingleton);
      }
      local_140 = *(undefined8 *)pFVar16;
      uStack_138 = *(undefined8 *)(pFVar16 + 8);
      local_128 = 0xb;
      local_120 = 1;
      local_118 = 0;
      local_110 = 0xffffffff;
      local_130 = FVar4;
      if (((local_8d8.Data <= &local_148) &&
          (&local_148 <
           (TObjectPtr<UObject_const_>_u_0 *)(local_8d8.Data + (longlong)local_8d0._4_4_ * 0x40)))
         && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar9 = (int)local_8d0;
      if ((int)local_8d0 == local_8d0._4_4_) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x840,&local_8d8,(int *)((longlong)&local_8d0 + 4));
      }
      local_8d0 = CONCAT44(local_8d0._4_4_,iVar9 + 1);
      FPropertyBagPropertyDesc::FPropertyBagPropertyDesc
                ((FPropertyBagPropertyDesc *)(local_8d8.Data + (longlong)iVar9 * 0x40),
                 (FPropertyBagPropertyDesc *)&local_148.ObjectPtr);
      local_720 = *(undefined8 *)pFVar16;
      uStack_718 = *(undefined8 *)(pFVar16 + 8);
      local_710 = 0xffffffffffffffff;
      local_708 = CONCAT31(local_708._1_3_,1);
      if (((local_8e8.Data <= (FScriptContainerElement *)&local_720) &&
          ((FScriptContainerElement *)&local_720 < local_8e8.Data + (longlong)local_8e0._4_4_ * 0x1c
          )) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar9 = (int)local_8e0;
      if ((int)local_8e0 == local_8e0._4_4_) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x41c,&local_8e8,(int *)((longlong)&local_8e0 + 4));
      }
      bVar7 = true;
      local_8e0 = CONCAT44(local_8e0._4_4_,iVar9 + 1);
      lVar12 = (longlong)iVar9 * 0x1c;
      pFVar16 = pFVar16 + 0x60;
      *(undefined8 *)(local_8e8.Data + lVar12) = local_720;
      *(undefined8 *)(local_8e8.Data + lVar12 + 8) = uStack_718;
      *(undefined8 *)(local_8e8.Data + lVar12 + 0x10) = local_710;
      *(undefined4 *)(local_8e8.Data + lVar12 + 0x18) = local_708;
    }
    iVar3 = (this->ParameterOverrides_DEPRECATED).Vector4fOverrides.ArrayNum;
    pFVar16 = (this->ParameterOverrides_DEPRECATED).Vector4fOverrides.AllocatorInstance.Data;
    pFVar15 = pFVar16 + (longlong)iVar3 * 0x60;
    while( true ) {
      if ((this->ParameterOverrides_DEPRECATED).Vector4fOverrides.ArrayNum != iVar3) {
        local_8c2 = 0;
        `TCheckedPointerIterator<FVector4fCameraRigParameterOverride,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_8c2);
      }
      if (pFVar16 == pFVar15) break;
      iVar9 = *(int *)(pFVar16 + 0x28) + -1;
      if (*(int *)(pFVar16 + 0x28) == 0) {
        iVar9 = iVar8;
      }
      pFVar10 = ::FName::FName(&local_3f8,iVar9,*(wchar_t **)(pFVar16 + 0x20),FNAME_Add);
      FVar4 = *pFVar10;
      if (Z_Registration_Info_UScriptStruct_FVector4fCameraParameter.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar11 = Z_Construct_UPackage__Script_GameplayCameras();
        Z_Registration_Info_UScriptStruct_FVector4fCameraParameter.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FVector4fCameraParameter,(UObject *)pUVar11,
                             L"Vector4fCameraParameter");
      }
      local_108 = (TObjectPtr<UObject_const_>_u_0)
                  Z_Registration_Info_UScriptStruct_FVector4fCameraParameter.OuterSingleton;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (Z_Registration_Info_UScriptStruct_FVector4fCameraParameter.OuterSingleton !=
          (UScriptStruct *)0x0)) {
        UE::GC::MarkAsReachable
                  ((UObject *)
                   Z_Registration_Info_UScriptStruct_FVector4fCameraParameter.OuterSingleton);
      }
      local_100 = *(undefined8 *)pFVar16;
      uStack_f8 = *(undefined8 *)(pFVar16 + 8);
      local_e8 = 0xb;
      local_e0 = 1;
      local_d8 = 0;
      local_d0 = 0xffffffff;
      local_f0 = FVar4;
      if (((local_8d8.Data <= &local_108) &&
          (&local_108 <
           (TObjectPtr<UObject_const_>_u_0 *)(local_8d8.Data + (longlong)local_8d0._4_4_ * 0x40)))
         && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar9 = (int)local_8d0;
      if ((int)local_8d0 == local_8d0._4_4_) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x840,&local_8d8,(int *)((longlong)&local_8d0 + 4));
      }
      local_8d0 = CONCAT44(local_8d0._4_4_,iVar9 + 1);
      FPropertyBagPropertyDesc::FPropertyBagPropertyDesc
                ((FPropertyBagPropertyDesc *)(local_8d8.Data + (longlong)iVar9 * 0x40),
                 (FPropertyBagPropertyDesc *)&local_108.ObjectPtr);
      local_740 = *(undefined8 *)pFVar16;
      uStack_738 = *(undefined8 *)(pFVar16 + 8);
      local_730 = 0xffffffffffffffff;
      local_728 = CONCAT31(local_728._1_3_,1);
      if (((local_8e8.Data <= (FScriptContainerElement *)&local_740) &&
          ((FScriptContainerElement *)&local_740 < local_8e8.Data + (longlong)local_8e0._4_4_ * 0x1c
          )) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar9 = (int)local_8e0;
      if ((int)local_8e0 == local_8e0._4_4_) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x41c,&local_8e8,(int *)((longlong)&local_8e0 + 4));
      }
      bVar7 = true;
      local_8e0 = CONCAT44(local_8e0._4_4_,iVar9 + 1);
      lVar12 = (longlong)iVar9 * 0x1c;
      pFVar16 = pFVar16 + 0x60;
      *(undefined8 *)(local_8e8.Data + lVar12) = local_740;
      *(undefined8 *)(local_8e8.Data + lVar12 + 8) = uStack_738;
      *(undefined8 *)(local_8e8.Data + lVar12 + 0x10) = local_730;
      *(undefined4 *)(local_8e8.Data + lVar12 + 0x18) = local_728;
    }
    iVar3 = (this->ParameterOverrides_DEPRECATED).Vector4dOverrides.ArrayNum;
    pFVar16 = (this->ParameterOverrides_DEPRECATED).Vector4dOverrides.AllocatorInstance.Data;
    pFVar15 = pFVar16 + (longlong)iVar3 * 0x70;
    while( true ) {
      if ((this->ParameterOverrides_DEPRECATED).Vector4dOverrides.ArrayNum != iVar3) {
        local_8c1 = 0;
        `TCheckedPointerIterator<FVector4dCameraRigParameterOverride,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_8c1);
      }
      iVar8 = 0;
      if (pFVar16 == pFVar15) break;
      iVar9 = *(int *)(pFVar16 + 0x28) + -1;
      if (*(int *)(pFVar16 + 0x28) == 0) {
        iVar9 = iVar8;
      }
      pFVar10 = ::FName::FName(&local_400,iVar9,*(wchar_t **)(pFVar16 + 0x20),FNAME_Add);
      FVar4 = *pFVar10;
      if (Z_Registration_Info_UScriptStruct_FVector4dCameraParameter.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar11 = Z_Construct_UPackage__Script_GameplayCameras();
        Z_Registration_Info_UScriptStruct_FVector4dCameraParameter.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FVector4dCameraParameter,(UObject *)pUVar11,
                             L"Vector4dCameraParameter");
      }
      local_c8 = (TObjectPtr<UObject_const_>_u_0)
                 Z_Registration_Info_UScriptStruct_FVector4dCameraParameter.OuterSingleton;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (Z_Registration_Info_UScriptStruct_FVector4dCameraParameter.OuterSingleton !=
          (UScriptStruct *)0x0)) {
        UE::GC::MarkAsReachable
                  ((UObject *)
                   Z_Registration_Info_UScriptStruct_FVector4dCameraParameter.OuterSingleton);
      }
      local_c0 = *(undefined8 *)pFVar16;
      uStack_b8 = *(undefined8 *)(pFVar16 + 8);
      local_a8 = 0xb;
      local_a0 = 1;
      local_98 = 0;
      local_90 = 0xffffffff;
      local_b0 = FVar4;
      if (((local_8d8.Data <= &local_c8) &&
          (&local_c8 <
           (TObjectPtr<UObject_const_>_u_0 *)(local_8d8.Data + (longlong)local_8d0._4_4_ * 0x40)))
         && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = (int)local_8d0;
      if ((int)local_8d0 == local_8d0._4_4_) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x840,&local_8d8,(int *)((longlong)&local_8d0 + 4));
      }
      local_8d0 = CONCAT44(local_8d0._4_4_,iVar8 + 1);
      FPropertyBagPropertyDesc::FPropertyBagPropertyDesc
                ((FPropertyBagPropertyDesc *)(local_8d8.Data + (longlong)iVar8 * 0x40),
                 (FPropertyBagPropertyDesc *)&local_c8.ObjectPtr);
      local_760 = *(undefined8 *)pFVar16;
      uStack_758 = *(undefined8 *)(pFVar16 + 8);
      local_750 = 0xffffffffffffffff;
      local_748 = CONCAT31(local_748._1_3_,1);
      if (((local_8e8.Data <= (FScriptContainerElement *)&local_760) &&
          ((FScriptContainerElement *)&local_760 < local_8e8.Data + (longlong)local_8e0._4_4_ * 0x1c
          )) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = (int)local_8e0;
      if ((int)local_8e0 == local_8e0._4_4_) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x41c,&local_8e8,(int *)((longlong)&local_8e0 + 4));
      }
      bVar7 = true;
      local_8e0 = CONCAT44(local_8e0._4_4_,iVar8 + 1);
      lVar12 = (longlong)iVar8 * 0x1c;
      pFVar16 = pFVar16 + 0x70;
      *(undefined8 *)(local_8e8.Data + lVar12) = local_760;
      *(undefined8 *)(local_8e8.Data + lVar12 + 8) = uStack_758;
      *(undefined8 *)(local_8e8.Data + lVar12 + 0x10) = local_750;
      *(undefined4 *)(local_8e8.Data + lVar12 + 0x18) = local_748;
    }
    iVar3 = (this->ParameterOverrides_DEPRECATED).Rotator3fOverrides.ArrayNum;
    pFVar16 = (this->ParameterOverrides_DEPRECATED).Rotator3fOverrides.AllocatorInstance.Data;
    pFVar15 = pFVar16 + (longlong)iVar3 * 0x50;
    while( true ) {
      if ((this->ParameterOverrides_DEPRECATED).Rotator3fOverrides.ArrayNum != iVar3) {
        local_8c0 = 0;
        `TCheckedPointerIterator<FRotator3fCameraRigParameterOverride,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_8c0);
      }
      if (pFVar16 == pFVar15) break;
      iVar9 = *(int *)(pFVar16 + 0x28) + -1;
      if (*(int *)(pFVar16 + 0x28) == 0) {
        iVar9 = iVar8;
      }
      pFVar10 = ::FName::FName(local_3d8,iVar9,*(wchar_t **)(pFVar16 + 0x20),FNAME_Add);
      FVar4 = *pFVar10;
      if (Z_Registration_Info_UScriptStruct_FRotator3fCameraParameter.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar11 = Z_Construct_UPackage__Script_GameplayCameras();
        Z_Registration_Info_UScriptStruct_FRotator3fCameraParameter.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FRotator3fCameraParameter,(UObject *)pUVar11,
                             L"Rotator3fCameraParameter");
      }
      local_3c8 = (TObjectPtr<UObject_const_>_u_0)
                  Z_Registration_Info_UScriptStruct_FRotator3fCameraParameter.OuterSingleton;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (Z_Registration_Info_UScriptStruct_FRotator3fCameraParameter.OuterSingleton !=
          (UScriptStruct *)0x0)) {
        UE::GC::MarkAsReachable
                  ((UObject *)
                   Z_Registration_Info_UScriptStruct_FRotator3fCameraParameter.OuterSingleton);
      }
      local_3c0 = *(undefined8 *)pFVar16;
      uStack_3b8 = *(undefined8 *)(pFVar16 + 8);
      local_3a8 = 0xb;
      local_3a0 = 1;
      local_398 = 0;
      local_390 = 0xffffffff;
      local_3b0 = FVar4;
      if (((local_8d8.Data <= &local_3c8) &&
          (&local_3c8 <
           (TObjectPtr<UObject_const_>_u_0 *)(local_8d8.Data + (longlong)local_8d0._4_4_ * 0x40)))
         && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar9 = (int)local_8d0;
      if ((int)local_8d0 == local_8d0._4_4_) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x840,&local_8d8,(int *)((longlong)&local_8d0 + 4));
      }
      pFVar14 = local_8d8.Data + (longlong)iVar9 * 0x40;
      local_8d0 = CONCAT44(local_8d0._4_4_,iVar9 + 1);
      *(TObjectPtr<UObject_const_>_u_0 *)&pFVar14->field_0x0 = local_3c8;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         ((UScriptStruct *)local_3c8.DebugPtr != (UScriptStruct *)0x0)) {
        UE::GC::MarkAsReachable(local_3c8.DebugPtr);
      }
      *(undefined8 *)(pFVar14 + 8) = local_3c0;
      *(undefined8 *)(pFVar14 + 0x10) = uStack_3b8;
      *(FName *)(pFVar14 + 0x18) = local_3b0;
      pFVar14[0x20] = local_3a8._0_1_;
      *(undefined2 *)(pFVar14 + 0x21) = local_3a8._1_2_;
      pFVar14[0x23] = local_3a8._3_1_;
      *(undefined8 *)(pFVar14 + 0x28) = local_3a0;
      *(undefined8 *)(pFVar14 + 0x30) = local_398;
      *(undefined4 *)(pFVar14 + 0x38) = local_390;
      local_780 = *(undefined8 *)pFVar16;
      uStack_778 = *(undefined8 *)(pFVar16 + 8);
      local_770 = 0xffffffffffffffff;
      local_768 = CONCAT31(local_768._1_3_,1);
      if (((local_8e8.Data <= (FScriptContainerElement *)&local_780) &&
          ((FScriptContainerElement *)&local_780 < local_8e8.Data + (longlong)local_8e0._4_4_ * 0x1c
          )) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar9 = (int)local_8e0;
      if ((int)local_8e0 == local_8e0._4_4_) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x41c,&local_8e8,(int *)((longlong)&local_8e0 + 4));
      }
      bVar7 = true;
      local_8e0 = CONCAT44(local_8e0._4_4_,iVar9 + 1);
      lVar12 = (longlong)iVar9 * 0x1c;
      pFVar16 = pFVar16 + 0x50;
      *(undefined8 *)(local_8e8.Data + lVar12) = local_780;
      *(undefined8 *)(local_8e8.Data + lVar12 + 8) = uStack_778;
      *(undefined8 *)(local_8e8.Data + lVar12 + 0x10) = local_770;
      *(undefined4 *)(local_8e8.Data + lVar12 + 0x18) = local_768;
    }
    iVar3 = (this->ParameterOverrides_DEPRECATED).Rotator3dOverrides.ArrayNum;
    pFVar16 = (this->ParameterOverrides_DEPRECATED).Rotator3dOverrides.AllocatorInstance.Data;
    pFVar15 = pFVar16 + (longlong)iVar3 * 0x60;
    while( true ) {
      if ((this->ParameterOverrides_DEPRECATED).Rotator3dOverrides.ArrayNum != iVar3) {
        local_8bf = 0;
        `TCheckedPointerIterator<FRotator3dCameraRigParameterOverride,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_8bf);
      }
      if (pFVar16 == pFVar15) break;
      iVar9 = *(int *)(pFVar16 + 0x28) + -1;
      if (*(int *)(pFVar16 + 0x28) == 0) {
        iVar9 = iVar8;
      }
      pFVar10 = ::FName::FName(&local_410,iVar9,*(wchar_t **)(pFVar16 + 0x20),FNAME_Add);
      FVar4 = *pFVar10;
      if (Z_Registration_Info_UScriptStruct_FRotator3dCameraParameter.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar11 = Z_Construct_UPackage__Script_GameplayCameras();
        Z_Registration_Info_UScriptStruct_FRotator3dCameraParameter.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FRotator3dCameraParameter,(UObject *)pUVar11,
                             L"Rotator3dCameraParameter");
      }
      local_308 = (TObjectPtr<UObject_const_>_u_0)
                  Z_Registration_Info_UScriptStruct_FRotator3dCameraParameter.OuterSingleton;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (Z_Registration_Info_UScriptStruct_FRotator3dCameraParameter.OuterSingleton !=
          (UScriptStruct *)0x0)) {
        UE::GC::MarkAsReachable
                  ((UObject *)
                   Z_Registration_Info_UScriptStruct_FRotator3dCameraParameter.OuterSingleton);
      }
      local_300 = *(undefined8 *)pFVar16;
      uStack_2f8 = *(undefined8 *)(pFVar16 + 8);
      local_2e8 = 0xb;
      local_2e0 = 1;
      local_2d8 = 0;
      local_2d0 = 0xffffffff;
      local_2f0 = FVar4;
      if (((local_8d8.Data <= &local_308) &&
          (&local_308 <
           (TObjectPtr<UObject_const_>_u_0 *)(local_8d8.Data + (longlong)local_8d0._4_4_ * 0x40)))
         && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar9 = (int)local_8d0;
      if ((int)local_8d0 == local_8d0._4_4_) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x840,&local_8d8,(int *)((longlong)&local_8d0 + 4));
      }
      pFVar14 = local_8d8.Data + (longlong)iVar9 * 0x40;
      local_8d0 = CONCAT44(local_8d0._4_4_,iVar9 + 1);
      *(TObjectPtr<UObject_const_>_u_0 *)&pFVar14->field_0x0 = local_308;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         ((UScriptStruct *)local_308.DebugPtr != (UScriptStruct *)0x0)) {
        UE::GC::MarkAsReachable(local_308.DebugPtr);
      }
      *(undefined8 *)(pFVar14 + 8) = local_300;
      *(undefined8 *)(pFVar14 + 0x10) = uStack_2f8;
      *(FName *)(pFVar14 + 0x18) = local_2f0;
      pFVar14[0x20] = local_2e8._0_1_;
      *(undefined2 *)(pFVar14 + 0x21) = local_2e8._1_2_;
      pFVar14[0x23] = local_2e8._3_1_;
      *(undefined8 *)(pFVar14 + 0x28) = local_2e0;
      *(undefined8 *)(pFVar14 + 0x30) = local_2d8;
      *(undefined4 *)(pFVar14 + 0x38) = local_2d0;
      local_7a0 = *(undefined8 *)pFVar16;
      uStack_798 = *(undefined8 *)(pFVar16 + 8);
      local_790 = 0xffffffffffffffff;
      local_788 = CONCAT31(local_788._1_3_,1);
      if (((local_8e8.Data <= (FScriptContainerElement *)&local_7a0) &&
          ((FScriptContainerElement *)&local_7a0 < local_8e8.Data + (longlong)local_8e0._4_4_ * 0x1c
          )) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar9 = (int)local_8e0;
      if ((int)local_8e0 == local_8e0._4_4_) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x41c,&local_8e8,(int *)((longlong)&local_8e0 + 4));
      }
      bVar7 = true;
      local_8e0 = CONCAT44(local_8e0._4_4_,iVar9 + 1);
      lVar12 = (longlong)iVar9 * 0x1c;
      pFVar16 = pFVar16 + 0x60;
      *(undefined8 *)(local_8e8.Data + lVar12) = local_7a0;
      *(undefined8 *)(local_8e8.Data + lVar12 + 8) = uStack_798;
      *(undefined8 *)(local_8e8.Data + lVar12 + 0x10) = local_790;
      *(undefined4 *)(local_8e8.Data + lVar12 + 0x18) = local_788;
    }
    iVar3 = (this->ParameterOverrides_DEPRECATED).Transform3fOverrides.ArrayNum;
    pFVar16 = (this->ParameterOverrides_DEPRECATED).Transform3fOverrides.AllocatorInstance.Data;
    pFVar15 = pFVar16 + (longlong)iVar3 * 0x80;
    while( true ) {
      if ((this->ParameterOverrides_DEPRECATED).Transform3fOverrides.ArrayNum != iVar3) {
        local_8be = 0;
        `TCheckedPointerIterator<FTransform3fCameraRigParameterOverride,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_8be);
      }
      if (pFVar16 == pFVar15) break;
      iVar9 = *(int *)(pFVar16 + 0x28) + -1;
      if (*(int *)(pFVar16 + 0x28) == 0) {
        iVar9 = iVar8;
      }
      pFVar10 = ::FName::FName(&local_418,iVar9,*(wchar_t **)(pFVar16 + 0x20),FNAME_Add);
      FVar4 = *pFVar10;
      if (Z_Registration_Info_UScriptStruct_FTransform3fCameraParameter.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar11 = Z_Construct_UPackage__Script_GameplayCameras();
        Z_Registration_Info_UScriptStruct_FTransform3fCameraParameter.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FTransform3fCameraParameter,
                             (UObject *)pUVar11,L"Transform3fCameraParameter");
      }
      local_388 = (TObjectPtr<UObject_const_>_u_0)
                  Z_Registration_Info_UScriptStruct_FTransform3fCameraParameter.OuterSingleton;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (Z_Registration_Info_UScriptStruct_FTransform3fCameraParameter.OuterSingleton !=
          (UScriptStruct *)0x0)) {
        UE::GC::MarkAsReachable
                  ((UObject *)
                   Z_Registration_Info_UScriptStruct_FTransform3fCameraParameter.OuterSingleton);
      }
      local_380 = *(undefined8 *)pFVar16;
      uStack_378 = *(undefined8 *)(pFVar16 + 8);
      local_368 = 0xb;
      local_360 = 1;
      local_358 = 0;
      local_350 = 0xffffffff;
      local_370 = FVar4;
      if (((local_8d8.Data <= &local_388) &&
          (&local_388 <
           (TObjectPtr<UObject_const_>_u_0 *)(local_8d8.Data + (longlong)local_8d0._4_4_ * 0x40)))
         && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar9 = (int)local_8d0;
      if ((int)local_8d0 == local_8d0._4_4_) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x840,&local_8d8,(int *)((longlong)&local_8d0 + 4));
      }
      pFVar14 = local_8d8.Data + (longlong)iVar9 * 0x40;
      local_8d0 = CONCAT44(local_8d0._4_4_,iVar9 + 1);
      *(TObjectPtr<UObject_const_>_u_0 *)&pFVar14->field_0x0 = local_388;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         ((UScriptStruct *)local_388.DebugPtr != (UScriptStruct *)0x0)) {
        UE::GC::MarkAsReachable(local_388.DebugPtr);
      }
      *(undefined8 *)(pFVar14 + 8) = local_380;
      *(undefined8 *)(pFVar14 + 0x10) = uStack_378;
      *(FName *)(pFVar14 + 0x18) = local_370;
      pFVar14[0x20] = local_368._0_1_;
      *(undefined2 *)(pFVar14 + 0x21) = local_368._1_2_;
      pFVar14[0x23] = local_368._3_1_;
      *(undefined8 *)(pFVar14 + 0x28) = local_360;
      *(undefined8 *)(pFVar14 + 0x30) = local_358;
      *(undefined4 *)(pFVar14 + 0x38) = local_350;
      local_7c0 = *(undefined8 *)pFVar16;
      uStack_7b8 = *(undefined8 *)(pFVar16 + 8);
      local_7b0 = 0xffffffffffffffff;
      local_7a8 = CONCAT31(local_7a8._1_3_,1);
      if (((local_8e8.Data <= (FScriptContainerElement *)&local_7c0) &&
          ((FScriptContainerElement *)&local_7c0 < local_8e8.Data + (longlong)local_8e0._4_4_ * 0x1c
          )) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar9 = (int)local_8e0;
      if ((int)local_8e0 == local_8e0._4_4_) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x41c,&local_8e8,(int *)((longlong)&local_8e0 + 4));
      }
      bVar7 = true;
      local_8e0 = CONCAT44(local_8e0._4_4_,iVar9 + 1);
      lVar12 = (longlong)iVar9 * 0x1c;
      pFVar16 = pFVar16 + 0x80;
      *(undefined8 *)(local_8e8.Data + lVar12) = local_7c0;
      *(undefined8 *)(local_8e8.Data + lVar12 + 8) = uStack_7b8;
      *(undefined8 *)(local_8e8.Data + lVar12 + 0x10) = local_7b0;
      *(undefined4 *)(local_8e8.Data + lVar12 + 0x18) = local_7a8;
    }
    iVar3 = (this->ParameterOverrides_DEPRECATED).Transform3dOverrides.ArrayNum;
    pFVar16 = (this->ParameterOverrides_DEPRECATED).Transform3dOverrides.AllocatorInstance.Data;
    pFVar15 = pFVar16 + (longlong)iVar3 * 0xb0;
    while( true ) {
      if ((this->ParameterOverrides_DEPRECATED).Transform3dOverrides.ArrayNum != iVar3) {
        local_8bd = 0;
        `TCheckedPointerIterator<FTransform3dCameraRigParameterOverride,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_8bd);
      }
      if (pFVar16 == pFVar15) break;
      iVar8 = *(int *)(pFVar16 + 0x28) + -1;
      if (*(int *)(pFVar16 + 0x28) == 0) {
        iVar8 = 0;
      }
      pFVar10 = ::FName::FName(&local_420,iVar8,*(wchar_t **)(pFVar16 + 0x20),FNAME_Add);
      FVar4 = *pFVar10;
      if (Z_Registration_Info_UScriptStruct_FTransform3dCameraParameter.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar11 = Z_Construct_UPackage__Script_GameplayCameras();
        Z_Registration_Info_UScriptStruct_FTransform3dCameraParameter.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FTransform3dCameraParameter,
                             (UObject *)pUVar11,L"Transform3dCameraParameter");
      }
      local_348 = (TObjectPtr<UObject_const_>_u_0)
                  Z_Registration_Info_UScriptStruct_FTransform3dCameraParameter.OuterSingleton;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (Z_Registration_Info_UScriptStruct_FTransform3dCameraParameter.OuterSingleton !=
          (UScriptStruct *)0x0)) {
        UE::GC::MarkAsReachable
                  ((UObject *)
                   Z_Registration_Info_UScriptStruct_FTransform3dCameraParameter.OuterSingleton);
      }
      local_340 = *(undefined8 *)pFVar16;
      uStack_338 = *(undefined8 *)(pFVar16 + 8);
      local_328 = 0xb;
      local_320 = 1;
      local_318 = 0;
      local_310 = 0xffffffff;
      local_330 = FVar4;
      if (((local_8d8.Data <= &local_348) &&
          (&local_348 <
           (TObjectPtr<UObject_const_>_u_0 *)(local_8d8.Data + (longlong)local_8d0._4_4_ * 0x40)))
         && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = (int)local_8d0;
      if ((int)local_8d0 == local_8d0._4_4_) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x840,&local_8d8,(int *)((longlong)&local_8d0 + 4));
      }
      pFVar14 = local_8d8.Data + (longlong)iVar8 * 0x40;
      local_8d0 = CONCAT44(local_8d0._4_4_,iVar8 + 1);
      *(TObjectPtr<UObject_const_>_u_0 *)&pFVar14->field_0x0 = local_348;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         ((UScriptStruct *)local_348.DebugPtr != (UScriptStruct *)0x0)) {
        UE::GC::MarkAsReachable(local_348.DebugPtr);
      }
      *(undefined8 *)(pFVar14 + 8) = local_340;
      *(undefined8 *)(pFVar14 + 0x10) = uStack_338;
      *(FName *)(pFVar14 + 0x18) = local_330;
      pFVar14[0x20] = local_328._0_1_;
      *(undefined2 *)(pFVar14 + 0x21) = local_328._1_2_;
      pFVar14[0x23] = local_328._3_1_;
      *(undefined8 *)(pFVar14 + 0x28) = local_320;
      *(undefined8 *)(pFVar14 + 0x30) = local_318;
      *(undefined4 *)(pFVar14 + 0x38) = local_310;
      local_7e0 = *(undefined8 *)pFVar16;
      uStack_7d8 = *(undefined8 *)(pFVar16 + 8);
      local_7d0 = 0xffffffffffffffff;
      local_7c8 = CONCAT31(local_7c8._1_3_,1);
      if (((local_8e8.Data <= (FScriptContainerElement *)&local_7e0) &&
          ((FScriptContainerElement *)&local_7e0 < local_8e8.Data + (longlong)local_8e0._4_4_ * 0x1c
          )) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = (int)local_8e0;
      if ((int)local_8e0 == local_8e0._4_4_) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x41c,&local_8e8,(int *)((longlong)&local_8e0 + 4));
      }
      bVar7 = true;
      local_8e0 = CONCAT44(local_8e0._4_4_,iVar8 + 1);
      lVar12 = (longlong)iVar8 * 0x1c;
      pFVar16 = pFVar16 + 0xb0;
      *(undefined8 *)(local_8e8.Data + lVar12) = local_7e0;
      *(undefined8 *)(local_8e8.Data + lVar12 + 8) = uStack_7d8;
      *(undefined8 *)(local_8e8.Data + lVar12 + 0x10) = local_7d0;
      *(undefined4 *)(local_8e8.Data + lVar12 + 0x18) = local_7c8;
    }
    if (bVar7) {
      local_8a8.DebugPtr = (UScriptStruct *)0x0;
      uStack_8a0 = 0;
      local_898 = (void *)0x0;
      uStack_890 = 0;
      FInstancedStruct::FInstancedStruct((FInstancedStruct *)&local_8a8.ObjectPtr);
      local_898 = (void *)0x0;
      uStack_890 = 0;
      this_00 = &this->_padding_;
      FInstancedStruct::operator=
                ((FInstancedStruct *)this_00,(FInstancedStruct *)&local_8a8.ObjectPtr);
      plVar1 = &this->_padding_;
      if ((void **)plVar1 != &local_898) {
        if ((void *)*plVar1 != (void *)0x0) {
          FMemory::Free((void *)*plVar1);
        }
        *plVar1 = (longlong)local_898;
        *(undefined4 *)&this->_padding_ = (undefined4)uStack_890;
        *(undefined4 *)((longlong)&this->_padding_ + 4) = uStack_890._4_4_;
        uStack_890 = 0;
        local_898 = (void *)0x0;
      }
      if (local_898 != (void *)0x0) {
        FMemory::Free(local_898);
      }
      FInstancedStruct::Reset((FInstancedStruct *)&local_8a8.ObjectPtr);
      iStack_500 = (int)local_8d0;
      local_508 = (TObjectPtr<UObject_const_>_u_0 *)local_8d8.Data;
      if (((int)local_8d0 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_468._12_4_ = uStack_4fc;
      local_468.ArrayNum = iStack_500;
      local_468.DataPtr = (FPropertyBagPropertyDesc *)local_508;
      FInstancedPropertyBag::AddProperties((FInstancedPropertyBag *)this_00,&local_468,true);
      FVar6.Data = local_8e8.Data;
      plVar1 = &this->_padding_;
      if ((ForAnyElementType *)plVar1 != &local_8e8) {
        iVar8 = (int)local_8e0;
        lVar12 = (longlong)(int)local_8e0;
        piVar2 = (int *)((longlong)&this->_padding_ + 4);
        iVar3 = *piVar2;
        *(int *)&this->_padding_ = (int)local_8e0;
        if (((int)local_8e0 == 0) && (iVar3 == 0)) {
          *piVar2 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x1c,4,(int)local_8e0,iVar3,(ForAnyElementType *)plVar1,(int)local_8e0,piVar2);
          if (iVar8 != 0) {
            memcpy((void *)*plVar1,FVar6.Data,lVar12 * 0x1c);
          }
        }
      }
      iVar3 = (this->ParameterOverrides_DEPRECATED).BooleanOverrides.ArrayNum;
      pFVar15 = (this->ParameterOverrides_DEPRECATED).BooleanOverrides.AllocatorInstance.Data;
      pFVar16 = pFVar15 + (longlong)iVar3 * 0x48;
      while( true ) {
        if ((this->ParameterOverrides_DEPRECATED).BooleanOverrides.ArrayNum != iVar3) {
          local_8bc = 0;
          `TCheckedPointerIterator<FBooleanCameraRigParameterOverride,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_8bc);
        }
        this_01 = local_5c0;
        if (pFVar15 == pFVar16) break;
        iVar8 = *(int *)(pFVar15 + 0x28) + -1;
        if (*(int *)(pFVar15 + 0x28) == 0) {
          iVar8 = 0;
        }
        pFVar10 = ::FName::FName(&local_428,iVar8,*(wchar_t **)(pFVar15 + 0x20),FNAME_Add);
        FVar4 = *pFVar10;
        if (Z_Registration_Info_UScriptStruct_FBooleanCameraParameter.OuterSingleton ==
            (UScriptStruct *)0x0) {
          pUVar11 = Z_Construct_UPackage__Script_GameplayCameras();
          Z_Registration_Info_UScriptStruct_FBooleanCameraParameter.OuterSingleton =
               GetStaticStruct(Z_Construct_UScriptStruct_FBooleanCameraParameter,(UObject *)pUVar11,
                               L"BooleanCameraParameter");
        }
        local_4f8.StructMemory = (uchar *)(pFVar15 + 0x38);
        local_4f8.ScriptStruct =
             Z_Registration_Info_UScriptStruct_FBooleanCameraParameter.OuterSingleton;
        FInstancedPropertyBag::SetValueStruct((FInstancedPropertyBag *)this_00,FVar4,&local_4f8);
        pFVar15 = pFVar15 + 0x48;
      }
      iVar3 = (local_5c0->ParameterOverrides_DEPRECATED).Integer32Overrides.ArrayNum;
      pFVar15 = (local_5c0->ParameterOverrides_DEPRECATED).Integer32Overrides.AllocatorInstance.Data
      ;
      pFVar16 = pFVar15 + (longlong)iVar3 * 0x48;
      while( true ) {
        if ((this_01->ParameterOverrides_DEPRECATED).Integer32Overrides.ArrayNum != iVar3) {
          local_8bb = 0;
          `TCheckedPointerIterator<FInteger32CameraRigParameterOverride,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_8bb);
        }
        if (pFVar15 == pFVar16) break;
        iVar8 = *(int *)(pFVar15 + 0x28) + -1;
        if (*(int *)(pFVar15 + 0x28) == 0) {
          iVar8 = 0;
        }
        pFVar10 = ::FName::FName(&local_430,iVar8,*(wchar_t **)(pFVar15 + 0x20),FNAME_Add);
        FVar4 = *pFVar10;
        if (Z_Registration_Info_UScriptStruct_FInteger32CameraParameter.OuterSingleton ==
            (UScriptStruct *)0x0) {
          pUVar11 = Z_Construct_UPackage__Script_GameplayCameras();
          Z_Registration_Info_UScriptStruct_FInteger32CameraParameter.OuterSingleton =
               GetStaticStruct(Z_Construct_UScriptStruct_FInteger32CameraParameter,
                               (UObject *)pUVar11,L"Integer32CameraParameter");
        }
        local_558.StructMemory = (uchar *)(pFVar15 + 0x38);
        local_558.ScriptStruct =
             Z_Registration_Info_UScriptStruct_FInteger32CameraParameter.OuterSingleton;
        FInstancedPropertyBag::SetValueStruct((FInstancedPropertyBag *)this_00,FVar4,&local_558);
        pFVar15 = pFVar15 + 0x48;
      }
      iVar3 = (this_01->ParameterOverrides_DEPRECATED).FloatOverrides.ArrayNum;
      pFVar15 = (this_01->ParameterOverrides_DEPRECATED).FloatOverrides.AllocatorInstance.Data;
      pFVar16 = pFVar15 + (longlong)iVar3 * 0x48;
      while( true ) {
        if ((this_01->ParameterOverrides_DEPRECATED).FloatOverrides.ArrayNum != iVar3) {
          local_8ba = 0;
          `TCheckedPointerIterator<FFloatCameraRigParameterOverride,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_8ba);
        }
        if (pFVar15 == pFVar16) break;
        iVar8 = *(int *)(pFVar15 + 0x28) + -1;
        if (*(int *)(pFVar15 + 0x28) == 0) {
          iVar8 = 0;
        }
        pFVar10 = ::FName::FName(&local_438,iVar8,*(wchar_t **)(pFVar15 + 0x20),FNAME_Add);
        FVar4 = *pFVar10;
        if (Z_Registration_Info_UScriptStruct_FFloatCameraParameter.OuterSingleton ==
            (UScriptStruct *)0x0) {
          pUVar11 = Z_Construct_UPackage__Script_GameplayCameras();
          Z_Registration_Info_UScriptStruct_FFloatCameraParameter.OuterSingleton =
               GetStaticStruct(Z_Construct_UScriptStruct_FFloatCameraParameter,(UObject *)pUVar11,
                               L"FloatCameraParameter");
        }
        local_5b8.StructMemory = (uchar *)(pFVar15 + 0x38);
        local_5b8.ScriptStruct =
             Z_Registration_Info_UScriptStruct_FFloatCameraParameter.OuterSingleton;
        FInstancedPropertyBag::SetValueStruct((FInstancedPropertyBag *)this_00,FVar4,&local_5b8);
        pFVar15 = pFVar15 + 0x48;
      }
      iVar3 = (this_01->ParameterOverrides_DEPRECATED).DoubleOverrides.ArrayNum;
      pFVar16 = (this_01->ParameterOverrides_DEPRECATED).DoubleOverrides.AllocatorInstance.Data;
      pFVar15 = pFVar16 + (longlong)iVar3 * 0x50;
      while( true ) {
        if ((this_01->ParameterOverrides_DEPRECATED).DoubleOverrides.ArrayNum != iVar3) {
          local_8b9 = 0;
          `TCheckedPointerIterator<FDoubleCameraRigParameterOverride,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_8b9);
        }
        if (pFVar16 == pFVar15) break;
        iVar8 = *(int *)(pFVar16 + 0x28) + -1;
        if (*(int *)(pFVar16 + 0x28) == 0) {
          iVar8 = 0;
        }
        pFVar10 = ::FName::FName(&local_440,iVar8,*(wchar_t **)(pFVar16 + 0x20),FNAME_Add);
        FVar4 = *pFVar10;
        if (Z_Registration_Info_UScriptStruct_FDoubleCameraParameter.OuterSingleton ==
            (UScriptStruct *)0x0) {
          pUVar11 = Z_Construct_UPackage__Script_GameplayCameras();
          Z_Registration_Info_UScriptStruct_FDoubleCameraParameter.OuterSingleton =
               GetStaticStruct(Z_Construct_UScriptStruct_FDoubleCameraParameter,(UObject *)pUVar11,
                               L"DoubleCameraParameter");
        }
        local_5a8.StructMemory = (uchar *)(pFVar16 + 0x38);
        local_5a8.ScriptStruct =
             Z_Registration_Info_UScriptStruct_FDoubleCameraParameter.OuterSingleton;
        FInstancedPropertyBag::SetValueStruct((FInstancedPropertyBag *)this_00,FVar4,&local_5a8);
        pFVar16 = pFVar16 + 0x50;
      }
      iVar3 = (this_01->ParameterOverrides_DEPRECATED).Vector2fOverrides.ArrayNum;
      pFVar16 = (this_01->ParameterOverrides_DEPRECATED).Vector2fOverrides.AllocatorInstance.Data;
      pFVar15 = pFVar16 + (longlong)iVar3 * 0x50;
      while( true ) {
        if ((this_01->ParameterOverrides_DEPRECATED).Vector2fOverrides.ArrayNum != iVar3) {
          local_8b8 = 0;
          `TCheckedPointerIterator<FVector2fCameraRigParameterOverride,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_8b8);
        }
        if (pFVar16 == pFVar15) break;
        iVar8 = *(int *)(pFVar16 + 0x28) + -1;
        if (*(int *)(pFVar16 + 0x28) == 0) {
          iVar8 = 0;
        }
        pFVar10 = ::FName::FName(&local_448,iVar8,*(wchar_t **)(pFVar16 + 0x20),FNAME_Add);
        FVar4 = *pFVar10;
        if (Z_Registration_Info_UScriptStruct_FVector2fCameraParameter.OuterSingleton ==
            (UScriptStruct *)0x0) {
          pUVar11 = Z_Construct_UPackage__Script_GameplayCameras();
          Z_Registration_Info_UScriptStruct_FVector2fCameraParameter.OuterSingleton =
               GetStaticStruct(Z_Construct_UScriptStruct_FVector2fCameraParameter,(UObject *)pUVar11
                               ,L"Vector2fCameraParameter");
        }
        local_598.StructMemory = (uchar *)(pFVar16 + 0x38);
        local_598.ScriptStruct =
             Z_Registration_Info_UScriptStruct_FVector2fCameraParameter.OuterSingleton;
        FInstancedPropertyBag::SetValueStruct((FInstancedPropertyBag *)this_00,FVar4,&local_598);
        pFVar16 = pFVar16 + 0x50;
      }
      iVar3 = (this_01->ParameterOverrides_DEPRECATED).Vector2dOverrides.ArrayNum;
      pFVar16 = (this_01->ParameterOverrides_DEPRECATED).Vector2dOverrides.AllocatorInstance.Data;
      pFVar15 = pFVar16 + (longlong)iVar3 * 0x58;
      while( true ) {
        if ((this_01->ParameterOverrides_DEPRECATED).Vector2dOverrides.ArrayNum != iVar3) {
          local_8b7 = 0;
          `TCheckedPointerIterator<FVector2dCameraRigParameterOverride,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_8b7);
        }
        if (pFVar16 == pFVar15) break;
        iVar8 = *(int *)(pFVar16 + 0x28) + -1;
        if (*(int *)(pFVar16 + 0x28) == 0) {
          iVar8 = 0;
        }
        pFVar10 = ::FName::FName(&local_450,iVar8,*(wchar_t **)(pFVar16 + 0x20),FNAME_Add);
        FVar4 = *pFVar10;
        if (Z_Registration_Info_UScriptStruct_FVector2dCameraParameter.OuterSingleton ==
            (UScriptStruct *)0x0) {
          pUVar11 = Z_Construct_UPackage__Script_GameplayCameras();
          Z_Registration_Info_UScriptStruct_FVector2dCameraParameter.OuterSingleton =
               GetStaticStruct(Z_Construct_UScriptStruct_FVector2dCameraParameter,(UObject *)pUVar11
                               ,L"Vector2dCameraParameter");
        }
        local_4d8.StructMemory = (uchar *)(pFVar16 + 0x38);
        local_4d8.ScriptStruct =
             Z_Registration_Info_UScriptStruct_FVector2dCameraParameter.OuterSingleton;
        FInstancedPropertyBag::SetValueStruct((FInstancedPropertyBag *)this_00,FVar4,&local_4d8);
        pFVar16 = pFVar16 + 0x58;
      }
      iVar3 = (this_01->ParameterOverrides_DEPRECATED).Vector3fOverrides.ArrayNum;
      pFVar16 = (this_01->ParameterOverrides_DEPRECATED).Vector3fOverrides.AllocatorInstance.Data;
      pFVar15 = pFVar16 + (longlong)iVar3 * 0x50;
      while( true ) {
        if ((this_01->ParameterOverrides_DEPRECATED).Vector3fOverrides.ArrayNum != iVar3) {
          local_8b6 = 0;
          `TCheckedPointerIterator<FVector3fCameraRigParameterOverride,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_8b6);
        }
        if (pFVar16 == pFVar15) break;
        iVar8 = *(int *)(pFVar16 + 0x28) + -1;
        if (*(int *)(pFVar16 + 0x28) == 0) {
          iVar8 = 0;
        }
        pFVar10 = ::FName::FName(&local_458,iVar8,*(wchar_t **)(pFVar16 + 0x20),FNAME_Add);
        FVar4 = *pFVar10;
        if (Z_Registration_Info_UScriptStruct_FVector3fCameraParameter.OuterSingleton ==
            (UScriptStruct *)0x0) {
          pUVar11 = Z_Construct_UPackage__Script_GameplayCameras();
          Z_Registration_Info_UScriptStruct_FVector3fCameraParameter.OuterSingleton =
               GetStaticStruct(Z_Construct_UScriptStruct_FVector3fCameraParameter,(UObject *)pUVar11
                               ,L"Vector3fCameraParameter");
        }
        local_578.StructMemory = (uchar *)(pFVar16 + 0x38);
        local_578.ScriptStruct =
             Z_Registration_Info_UScriptStruct_FVector3fCameraParameter.OuterSingleton;
        FInstancedPropertyBag::SetValueStruct((FInstancedPropertyBag *)this_00,FVar4,&local_578);
        pFVar16 = pFVar16 + 0x50;
      }
      iVar3 = (this_01->ParameterOverrides_DEPRECATED).Vector3dOverrides.ArrayNum;
      pFVar16 = (this_01->ParameterOverrides_DEPRECATED).Vector3dOverrides.AllocatorInstance.Data;
      pFVar15 = pFVar16 + (longlong)iVar3 * 0x60;
      while( true ) {
        if ((this_01->ParameterOverrides_DEPRECATED).Vector3dOverrides.ArrayNum != iVar3) {
          local_8b5 = 0;
          `TCheckedPointerIterator<FVector3dCameraRigParameterOverride,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_8b5);
        }
        if (pFVar16 == pFVar15) break;
        iVar8 = *(int *)(pFVar16 + 0x28) + -1;
        if (*(int *)(pFVar16 + 0x28) == 0) {
          iVar8 = 0;
        }
        pFVar10 = ::FName::FName(&local_488,iVar8,*(wchar_t **)(pFVar16 + 0x20),FNAME_Add);
        FVar4 = *pFVar10;
        if (Z_Registration_Info_UScriptStruct_FVector3dCameraParameter.OuterSingleton ==
            (UScriptStruct *)0x0) {
          pUVar11 = Z_Construct_UPackage__Script_GameplayCameras();
          Z_Registration_Info_UScriptStruct_FVector3dCameraParameter.OuterSingleton =
               GetStaticStruct(Z_Construct_UScriptStruct_FVector3dCameraParameter,(UObject *)pUVar11
                               ,L"Vector3dCameraParameter");
        }
        local_568.StructMemory = (uchar *)(pFVar16 + 0x38);
        local_568.ScriptStruct =
             Z_Registration_Info_UScriptStruct_FVector3dCameraParameter.OuterSingleton;
        FInstancedPropertyBag::SetValueStruct((FInstancedPropertyBag *)this_00,FVar4,&local_568);
        pFVar16 = pFVar16 + 0x60;
      }
      iVar3 = (this_01->ParameterOverrides_DEPRECATED).Vector4fOverrides.ArrayNum;
      pFVar16 = (this_01->ParameterOverrides_DEPRECATED).Vector4fOverrides.AllocatorInstance.Data;
      pFVar15 = pFVar16 + (longlong)iVar3 * 0x60;
      while( true ) {
        if ((this_01->ParameterOverrides_DEPRECATED).Vector4fOverrides.ArrayNum != iVar3) {
          local_8b4 = 0;
          `TCheckedPointerIterator<FVector4fCameraRigParameterOverride,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_8b4);
        }
        if (pFVar16 == pFVar15) break;
        iVar8 = *(int *)(pFVar16 + 0x28) + -1;
        if (*(int *)(pFVar16 + 0x28) == 0) {
          iVar8 = 0;
        }
        pFVar10 = ::FName::FName(&local_490,iVar8,*(wchar_t **)(pFVar16 + 0x20),FNAME_Add);
        FVar4 = *pFVar10;
        if (Z_Registration_Info_UScriptStruct_FVector4fCameraParameter.OuterSingleton ==
            (UScriptStruct *)0x0) {
          pUVar11 = Z_Construct_UPackage__Script_GameplayCameras();
          Z_Registration_Info_UScriptStruct_FVector4fCameraParameter.OuterSingleton =
               GetStaticStruct(Z_Construct_UScriptStruct_FVector4fCameraParameter,(UObject *)pUVar11
                               ,L"Vector4fCameraParameter");
        }
        local_548.StructMemory = (uchar *)(pFVar16 + 0x40);
        local_548.ScriptStruct =
             Z_Registration_Info_UScriptStruct_FVector4fCameraParameter.OuterSingleton;
        FInstancedPropertyBag::SetValueStruct((FInstancedPropertyBag *)this_00,FVar4,&local_548);
        pFVar16 = pFVar16 + 0x60;
      }
      iVar3 = (this_01->ParameterOverrides_DEPRECATED).Vector4dOverrides.ArrayNum;
      pFVar16 = (this_01->ParameterOverrides_DEPRECATED).Vector4dOverrides.AllocatorInstance.Data;
      pFVar15 = pFVar16 + (longlong)iVar3 * 0x70;
      while( true ) {
        if ((this_01->ParameterOverrides_DEPRECATED).Vector4dOverrides.ArrayNum != iVar3) {
          local_8b3 = 0;
          `TCheckedPointerIterator<FVector4dCameraRigParameterOverride,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_8b3);
        }
        if (pFVar16 == pFVar15) break;
        iVar8 = *(int *)(pFVar16 + 0x28) + -1;
        if (*(int *)(pFVar16 + 0x28) == 0) {
          iVar8 = 0;
        }
        pFVar10 = ::FName::FName(local_478,iVar8,*(wchar_t **)(pFVar16 + 0x20),FNAME_Add);
        FVar4 = *pFVar10;
        if (Z_Registration_Info_UScriptStruct_FVector4dCameraParameter.OuterSingleton ==
            (UScriptStruct *)0x0) {
          pUVar11 = Z_Construct_UPackage__Script_GameplayCameras();
          Z_Registration_Info_UScriptStruct_FVector4dCameraParameter.OuterSingleton =
               GetStaticStruct(Z_Construct_UScriptStruct_FVector4dCameraParameter,(UObject *)pUVar11
                               ,L"Vector4dCameraParameter");
        }
        local_538.StructMemory = (uchar *)(pFVar16 + 0x40);
        local_538.ScriptStruct =
             Z_Registration_Info_UScriptStruct_FVector4dCameraParameter.OuterSingleton;
        FInstancedPropertyBag::SetValueStruct((FInstancedPropertyBag *)this_00,FVar4,&local_538);
        pFVar16 = pFVar16 + 0x70;
      }
      iVar3 = (this_01->ParameterOverrides_DEPRECATED).Rotator3fOverrides.ArrayNum;
      pFVar16 = (this_01->ParameterOverrides_DEPRECATED).Rotator3fOverrides.AllocatorInstance.Data;
      pFVar15 = pFVar16 + (longlong)iVar3 * 0x50;
      while( true ) {
        if ((this_01->ParameterOverrides_DEPRECATED).Rotator3fOverrides.ArrayNum != iVar3) {
          local_8b2 = 0;
          `TCheckedPointerIterator<FRotator3fCameraRigParameterOverride,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_8b2);
        }
        if (pFVar16 == pFVar15) break;
        iVar8 = *(int *)(pFVar16 + 0x28) + -1;
        if (*(int *)(pFVar16 + 0x28) == 0) {
          iVar8 = 0;
        }
        pFVar10 = ::FName::FName(&local_4a8,iVar8,*(wchar_t **)(pFVar16 + 0x20),FNAME_Add);
        FVar4 = *pFVar10;
        if (Z_Registration_Info_UScriptStruct_FRotator3fCameraParameter.OuterSingleton ==
            (UScriptStruct *)0x0) {
          pUVar11 = Z_Construct_UPackage__Script_GameplayCameras();
          Z_Registration_Info_UScriptStruct_FRotator3fCameraParameter.OuterSingleton =
               GetStaticStruct(Z_Construct_UScriptStruct_FRotator3fCameraParameter,
                               (UObject *)pUVar11,L"Rotator3fCameraParameter");
        }
        local_528.StructMemory = (uchar *)(pFVar16 + 0x38);
        local_528.ScriptStruct =
             Z_Registration_Info_UScriptStruct_FRotator3fCameraParameter.OuterSingleton;
        FInstancedPropertyBag::SetValueStruct((FInstancedPropertyBag *)this_00,FVar4,&local_528);
        pFVar16 = pFVar16 + 0x50;
      }
      iVar3 = (this_01->ParameterOverrides_DEPRECATED).Rotator3dOverrides.ArrayNum;
      pFVar16 = (this_01->ParameterOverrides_DEPRECATED).Rotator3dOverrides.AllocatorInstance.Data;
      pFVar15 = pFVar16 + (longlong)iVar3 * 0x60;
      while( true ) {
        if ((this_01->ParameterOverrides_DEPRECATED).Rotator3dOverrides.ArrayNum != iVar3) {
          local_8b1 = 0;
          `TCheckedPointerIterator<FRotator3dCameraRigParameterOverride,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_8b1);
        }
        if (pFVar16 == pFVar15) break;
        iVar8 = *(int *)(pFVar16 + 0x28) + -1;
        if (*(int *)(pFVar16 + 0x28) == 0) {
          iVar8 = 0;
        }
        pFVar10 = ::FName::FName(&local_480,iVar8,*(wchar_t **)(pFVar16 + 0x20),FNAME_Add);
        FVar4 = *pFVar10;
        if (Z_Registration_Info_UScriptStruct_FRotator3dCameraParameter.OuterSingleton ==
            (UScriptStruct *)0x0) {
          pUVar11 = Z_Construct_UPackage__Script_GameplayCameras();
          Z_Registration_Info_UScriptStruct_FRotator3dCameraParameter.OuterSingleton =
               GetStaticStruct(Z_Construct_UScriptStruct_FRotator3dCameraParameter,
                               (UObject *)pUVar11,L"Rotator3dCameraParameter");
        }
        local_518.StructMemory = (uchar *)(pFVar16 + 0x38);
        local_518.ScriptStruct =
             Z_Registration_Info_UScriptStruct_FRotator3dCameraParameter.OuterSingleton;
        FInstancedPropertyBag::SetValueStruct((FInstancedPropertyBag *)this_00,FVar4,&local_518);
        pFVar16 = pFVar16 + 0x60;
      }
      iVar3 = (this_01->ParameterOverrides_DEPRECATED).Transform3fOverrides.ArrayNum;
      pFVar16 = (this_01->ParameterOverrides_DEPRECATED).Transform3fOverrides.AllocatorInstance.Data
      ;
      pFVar15 = pFVar16 + (longlong)iVar3 * 0x80;
      while( true ) {
        if ((this_01->ParameterOverrides_DEPRECATED).Transform3fOverrides.ArrayNum != iVar3) {
          local_8b0 = 0;
          `TCheckedPointerIterator<FTransform3fCameraRigParameterOverride,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(&local_8b0);
        }
        if (pFVar16 == pFVar15) break;
        iVar8 = *(int *)(pFVar16 + 0x28) + -1;
        if (*(int *)(pFVar16 + 0x28) == 0) {
          iVar8 = 0;
        }
        pFVar10 = ::FName::FName(&local_4a0,iVar8,*(wchar_t **)(pFVar16 + 0x20),FNAME_Add);
        FVar4 = *pFVar10;
        if (Z_Registration_Info_UScriptStruct_FTransform3fCameraParameter.OuterSingleton ==
            (UScriptStruct *)0x0) {
          pUVar11 = Z_Construct_UPackage__Script_GameplayCameras();
          Z_Registration_Info_UScriptStruct_FTransform3fCameraParameter.OuterSingleton =
               GetStaticStruct(Z_Construct_UScriptStruct_FTransform3fCameraParameter,
                               (UObject *)pUVar11,L"Transform3fCameraParameter");
        }
        local_4e8.StructMemory = (uchar *)(pFVar16 + 0x40);
        local_4e8.ScriptStruct =
             Z_Registration_Info_UScriptStruct_FTransform3fCameraParameter.OuterSingleton;
        FInstancedPropertyBag::SetValueStruct((FInstancedPropertyBag *)this_00,FVar4,&local_4e8);
        pFVar16 = pFVar16 + 0x80;
      }
      iVar3 = (this_01->ParameterOverrides_DEPRECATED).Transform3dOverrides.ArrayNum;
      pFVar16 = (this_01->ParameterOverrides_DEPRECATED).Transform3dOverrides.AllocatorInstance.Data
      ;
      pFVar15 = pFVar16 + (longlong)iVar3 * 0xb0;
      while( true ) {
        if ((this_01->ParameterOverrides_DEPRECATED).Transform3dOverrides.ArrayNum != iVar3) {
          local_8af = 0;
          `TCheckedPointerIterator<FTransform3dCameraRigParameterOverride,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(&local_8af);
        }
        if (pFVar16 == pFVar15) break;
        iVar8 = *(int *)(pFVar16 + 0x28) + -1;
        if (*(int *)(pFVar16 + 0x28) == 0) {
          iVar8 = 0;
        }
        pFVar10 = ::FName::FName(&local_498,iVar8,*(wchar_t **)(pFVar16 + 0x20),FNAME_Add);
        FVar4 = *pFVar10;
        if (Z_Registration_Info_UScriptStruct_FTransform3dCameraParameter.OuterSingleton ==
            (UScriptStruct *)0x0) {
          pUVar11 = Z_Construct_UPackage__Script_GameplayCameras();
          Z_Registration_Info_UScriptStruct_FTransform3dCameraParameter.OuterSingleton =
               GetStaticStruct(Z_Construct_UScriptStruct_FTransform3dCameraParameter,
                               (UObject *)pUVar11,L"Transform3dCameraParameter");
        }
        local_588.StructMemory = (uchar *)(pFVar16 + 0x40);
        local_588.ScriptStruct =
             Z_Registration_Info_UScriptStruct_FTransform3dCameraParameter.OuterSingleton;
        FInstancedPropertyBag::SetValueStruct((FInstancedPropertyBag *)this_00,FVar4,&local_588);
        pFVar16 = pFVar16 + 0xb0;
      }
      local_6a0.BooleanOverrides.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_6a0.BooleanOverrides.ArrayNum = 0;
      local_6a0.BooleanOverrides.ArrayMax = 0;
      local_6a0.Integer32Overrides.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_6a0.Integer32Overrides.ArrayNum = 0;
      local_6a0.Integer32Overrides.ArrayMax = 0;
      local_6a0.FloatOverrides.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_6a0.FloatOverrides.ArrayNum = 0;
      local_6a0.FloatOverrides.ArrayMax = 0;
      local_6a0.DoubleOverrides.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_6a0.DoubleOverrides.ArrayNum = 0;
      local_6a0.DoubleOverrides.ArrayMax = 0;
      local_6a0.Vector2fOverrides.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_6a0.Vector2fOverrides.ArrayNum = 0;
      local_6a0.Vector2fOverrides.ArrayMax = 0;
      local_6a0.Vector2dOverrides.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_6a0.Vector2dOverrides.ArrayNum = 0;
      local_6a0.Vector2dOverrides.ArrayMax = 0;
      local_6a0.Vector3fOverrides.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_6a0.Vector3fOverrides.ArrayNum = 0;
      local_6a0.Vector3fOverrides.ArrayMax = 0;
      local_6a0.Vector3dOverrides.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_6a0.Vector3dOverrides.ArrayNum = 0;
      local_6a0.Vector3dOverrides.ArrayMax = 0;
      local_6a0.Vector4fOverrides.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_6a0.Vector4fOverrides.ArrayNum = 0;
      local_6a0.Vector4fOverrides.ArrayMax = 0;
      local_6a0.Vector4dOverrides.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_6a0.Vector4dOverrides.ArrayNum = 0;
      local_6a0.Vector4dOverrides.ArrayMax = 0;
      local_6a0.Rotator3fOverrides.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_6a0.Rotator3fOverrides.ArrayNum = 0;
      local_6a0.Rotator3fOverrides.ArrayMax = 0;
      local_6a0.Rotator3dOverrides.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_6a0.Rotator3dOverrides.ArrayNum = 0;
      local_6a0.Rotator3dOverrides.ArrayMax = 0;
      local_6a0.Transform3fOverrides.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_6a0.Transform3fOverrides.ArrayNum = 0;
      local_6a0.Transform3fOverrides.ArrayMax = 0;
      local_6a0.Transform3dOverrides.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_6a0.Transform3dOverrides.ArrayNum = 0;
      local_6a0.Transform3dOverrides.ArrayMax = 0;
      FCameraRigParameterOverrides::operator=(&this_01->ParameterOverrides_DEPRECATED,&local_6a0);
      FVar6.Data = local_6a0.Transform3dOverrides.AllocatorInstance.Data;
      DestructItems<FTransform3dCameraRigParameterOverride,int>
                ((FTransform3dCameraRigParameterOverride *)
                 local_6a0.Transform3dOverrides.AllocatorInstance.Data,
                 local_6a0.Transform3dOverrides.ArrayNum);
      if ((FTransform3dCameraRigParameterOverride *)FVar6.Data !=
          (FTransform3dCameraRigParameterOverride *)0x0) {
        FMemory::Free(FVar6.Data);
      }
      FVar6.Data = local_6a0.Transform3fOverrides.AllocatorInstance.Data;
      DestructItems<FTransform3fCameraRigParameterOverride,int>
                ((FTransform3fCameraRigParameterOverride *)
                 local_6a0.Transform3fOverrides.AllocatorInstance.Data,
                 local_6a0.Transform3fOverrides.ArrayNum);
      if ((FTransform3fCameraRigParameterOverride *)FVar6.Data !=
          (FTransform3fCameraRigParameterOverride *)0x0) {
        FMemory::Free(FVar6.Data);
      }
      FVar6.Data = local_6a0.Rotator3dOverrides.AllocatorInstance.Data;
      DestructItems<FRotator3dCameraRigParameterOverride,int>
                ((FRotator3dCameraRigParameterOverride *)
                 local_6a0.Rotator3dOverrides.AllocatorInstance.Data,
                 local_6a0.Rotator3dOverrides.ArrayNum);
      if ((FRotator3dCameraRigParameterOverride *)FVar6.Data !=
          (FRotator3dCameraRigParameterOverride *)0x0) {
        FMemory::Free(FVar6.Data);
      }
      FVar6.Data = local_6a0.Rotator3fOverrides.AllocatorInstance.Data;
      DestructItems<FRotator3fCameraRigParameterOverride,int>
                ((FRotator3fCameraRigParameterOverride *)
                 local_6a0.Rotator3fOverrides.AllocatorInstance.Data,
                 local_6a0.Rotator3fOverrides.ArrayNum);
      if ((FRotator3fCameraRigParameterOverride *)FVar6.Data !=
          (FRotator3fCameraRigParameterOverride *)0x0) {
        FMemory::Free(FVar6.Data);
      }
      FVar6.Data = local_6a0.Vector4dOverrides.AllocatorInstance.Data;
      DestructItems<FVector4dCameraRigParameterOverride,int>
                ((FVector4dCameraRigParameterOverride *)
                 local_6a0.Vector4dOverrides.AllocatorInstance.Data,
                 local_6a0.Vector4dOverrides.ArrayNum);
      if ((FVector4dCameraRigParameterOverride *)FVar6.Data !=
          (FVector4dCameraRigParameterOverride *)0x0) {
        FMemory::Free(FVar6.Data);
      }
      FVar6.Data = local_6a0.Vector4fOverrides.AllocatorInstance.Data;
      DestructItems<FVector4fCameraRigParameterOverride,int>
                ((FVector4fCameraRigParameterOverride *)
                 local_6a0.Vector4fOverrides.AllocatorInstance.Data,
                 local_6a0.Vector4fOverrides.ArrayNum);
      if ((FVector4fCameraRigParameterOverride *)FVar6.Data !=
          (FVector4fCameraRigParameterOverride *)0x0) {
        FMemory::Free(FVar6.Data);
      }
      FVar6.Data = local_6a0.Vector3dOverrides.AllocatorInstance.Data;
      DestructItems<FVector3dCameraRigParameterOverride,int>
                ((FVector3dCameraRigParameterOverride *)
                 local_6a0.Vector3dOverrides.AllocatorInstance.Data,
                 local_6a0.Vector3dOverrides.ArrayNum);
      if ((FVector3dCameraRigParameterOverride *)FVar6.Data !=
          (FVector3dCameraRigParameterOverride *)0x0) {
        FMemory::Free(FVar6.Data);
      }
      FVar6.Data = local_6a0.Vector3fOverrides.AllocatorInstance.Data;
      DestructItems<FVector3fCameraRigParameterOverride,int>
                ((FVector3fCameraRigParameterOverride *)
                 local_6a0.Vector3fOverrides.AllocatorInstance.Data,
                 local_6a0.Vector3fOverrides.ArrayNum);
      if ((FVector3fCameraRigParameterOverride *)FVar6.Data !=
          (FVector3fCameraRigParameterOverride *)0x0) {
        FMemory::Free(FVar6.Data);
      }
      FVar6.Data = local_6a0.Vector2dOverrides.AllocatorInstance.Data;
      DestructItems<FVector2dCameraRigParameterOverride,int>
                ((FVector2dCameraRigParameterOverride *)
                 local_6a0.Vector2dOverrides.AllocatorInstance.Data,
                 local_6a0.Vector2dOverrides.ArrayNum);
      if ((FVector2dCameraRigParameterOverride *)FVar6.Data !=
          (FVector2dCameraRigParameterOverride *)0x0) {
        FMemory::Free(FVar6.Data);
      }
      FVar6.Data = local_6a0.Vector2fOverrides.AllocatorInstance.Data;
      DestructItems<FVector2fCameraRigParameterOverride,int>
                ((FVector2fCameraRigParameterOverride *)
                 local_6a0.Vector2fOverrides.AllocatorInstance.Data,
                 local_6a0.Vector2fOverrides.ArrayNum);
      if ((FVector2fCameraRigParameterOverride *)FVar6.Data !=
          (FVector2fCameraRigParameterOverride *)0x0) {
        FMemory::Free(FVar6.Data);
      }
      FVar6.Data = local_6a0.DoubleOverrides.AllocatorInstance.Data;
      DestructItems<FDoubleCameraRigParameterOverride,int>
                ((FDoubleCameraRigParameterOverride *)
                 local_6a0.DoubleOverrides.AllocatorInstance.Data,local_6a0.DoubleOverrides.ArrayNum
                );
      if ((FDoubleCameraRigParameterOverride *)FVar6.Data !=
          (FDoubleCameraRigParameterOverride *)0x0) {
        FMemory::Free(FVar6.Data);
      }
      FVar6.Data = local_6a0.FloatOverrides.AllocatorInstance.Data;
      DestructItems<FFloatCameraRigParameterOverride,int>
                ((FFloatCameraRigParameterOverride *)local_6a0.FloatOverrides.AllocatorInstance.Data
                 ,local_6a0.FloatOverrides.ArrayNum);
      if ((FFloatCameraRigParameterOverride *)FVar6.Data != (FFloatCameraRigParameterOverride *)0x0)
      {
        FMemory::Free(FVar6.Data);
      }
      FVar6.Data = local_6a0.Integer32Overrides.AllocatorInstance.Data;
      DestructItems<FInteger32CameraRigParameterOverride,int>
                ((FInteger32CameraRigParameterOverride *)
                 local_6a0.Integer32Overrides.AllocatorInstance.Data,
                 local_6a0.Integer32Overrides.ArrayNum);
      if ((FInteger32CameraRigParameterOverride *)FVar6.Data !=
          (FInteger32CameraRigParameterOverride *)0x0) {
        FMemory::Free(FVar6.Data);
      }
      FVar6.Data = local_6a0.BooleanOverrides.AllocatorInstance.Data;
      DestructItems<FBooleanCameraRigParameterOverride,int>
                ((FBooleanCameraRigParameterOverride *)
                 local_6a0.BooleanOverrides.AllocatorInstance.Data,
                 local_6a0.BooleanOverrides.ArrayNum);
      if ((FBooleanCameraRigParameterOverride *)FVar6.Data !=
          (FBooleanCameraRigParameterOverride *)0x0) {
        FMemory::Free(FVar6.Data);
      }
    }
    iVar3 = (this_01->ParameterOverrideGuids_DEPRECATED).ArrayNum;
    if (iVar3 != 0) {
      pFVar16 = (this_01->ParameterOverrideGuids_DEPRECATED).AllocatorInstance.Data;
      pFVar15 = pFVar16 + (longlong)iVar3 * 0x10;
      while( true ) {
        if ((this_01->ParameterOverrideGuids_DEPRECATED).ArrayNum != iVar3) {
          local_8ae = 0;
          `TCheckedPointerIterator<FGuid,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_8ae);
        }
        if (pFVar16 == pFVar15) break;
        local_800 = *(undefined8 *)pFVar16;
        uStack_7f8 = *(undefined8 *)(pFVar16 + 8);
        local_7f0 = 0xffffffffffffffff;
        local_7e8 = CONCAT31(local_7e8._1_3_,1);
        if ((((undefined8 *)this_01->_padding_ <= &local_800) &&
            (&local_800 <
             (undefined8 *)
             ((longlong)*(int *)((longlong)&this_01->_padding_ + 4) * 0x1c + this_01->_padding_)))
           && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = (int)this_01->_padding_;
        piVar2 = (int *)((longlong)&this_01->_padding_ + 4);
        if (iVar8 == *piVar2) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x41c,(ForAnyElementType *)&this_01->_padding_,piVar2);
        }
        *(int *)&this_01->_padding_ = iVar8 + 1;
        puVar13 = (undefined8 *)((longlong)iVar8 * 0x1c + this_01->_padding_);
        pFVar16 = pFVar16 + 0x10;
        *puVar13 = local_800;
        puVar13[1] = uStack_7f8;
        puVar13[2] = local_7f0;
        *(undefined4 *)(puVar13 + 3) = local_7e8;
      }
      (this_01->ParameterOverrideGuids_DEPRECATED).ArrayNum = 0;
      if ((this_01->ParameterOverrideGuids_DEPRECATED).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,&(this_01->ParameterOverrideGuids_DEPRECATED).AllocatorInstance,0,
                   &(this_01->ParameterOverrideGuids_DEPRECATED).ArrayMax);
      }
    }
    if (local_8e8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8e8.Data);
    }
    if ((TObjectPtr<UObject_const_>_u_0 *)local_8d8.Data != (TObjectPtr<UObject_const_>_u_0 *)0x0) {
      FMemory::Free(local_8d8.Data);
    }
  }
  FBaseCameraObjectReference::PostSerialize((FBaseCameraObjectReference *)this_01,local_888);
  return;
}

// SerializeFromMismatchedTag @ 14d5cd350

bool __thiscall
FCameraRigAssetReference::SerializeFromMismatchedTag
          (FCameraRigAssetReference *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2)

{
  int iVar1;
  FName FVar2;
  bool bVar3;
  FNameEntryId FVar4;
  undefined4 extraout_var;
  TObjectPtr<UCameraRigAsset>_u_0 TVar5;
  TObjectPtr<UCameraRigAsset>_u_0 TVar6;
  FUObjectItem *pFVar7;
  UClass *pUVar8;
  TObjectPtr<UCameraRigAsset>_u_0 local_res10;
  FWeakObjectPtr local_38;
  FSoftObjectPath local_30;
  
  FVar2 = param_1->Type;
  FVar4 = FNameEntryId::FromValidEName((EName)&local_res10);
  local_res10._4_4_ = 0;
  local_res10._0_4_ = *(uint *)CONCAT44(extraout_var,FVar4.Value);
  if (FVar2 != (FName)local_res10.DebugPtr) {
    return false;
  }
  local_30.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_30.AssetPath.AssetName.Number = 0;
  local_30.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_30.AssetPath.PackageName.Number = 0;
  local_30.SubPathString.Data.ArrayNum = 0;
  local_30.SubPathString.Data.ArrayMax = 0;
  local_38.ObjectIndex = 0;
  local_38.ObjectSerialNumber = 0;
  local_res10.DebugPtr = (UCameraRigAsset *)0x0;
  FUtf8String::Reset(&local_30.SubPathString,0);
  (**(code **)(**(longlong **)(*(longlong *)param_2 + 8) + 0x148))
            (*(longlong **)(*(longlong *)param_2 + 8),&local_38);
  TVar5.DebugPtr = (UCameraRigAsset *)FWeakObjectPtr::Get(&local_38);
  if ((TVar5.DebugPtr == (UCameraRigAsset *)0x0) && (local_30.AssetPath.PackageName != (FName)0x0))
  {
    TVar6.DebugPtr = (UCameraRigAsset *)FSoftObjectPath::ResolveObject(&local_30);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar6.DebugPtr != (UCameraRigAsset *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar6.DebugPtr);
    }
    bVar3 = (*IsInAsyncLoadingThread)();
    if (((bVar3) && (TVar6.DebugPtr != (UCameraRigAsset *)0x0)) &&
       (pFVar7 = FUObjectArray::IndexToObject
                           (&GUObjectArray,*(int *)((longlong)&(TVar6.DebugPtr)->_padding_ + 4)),
       ((pFVar7->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) != 0)) {
LAB_14d5cd475:
      if (((uint)(TVar6.DebugPtr)->_padding_ >> 0x1e & 1) != 0) goto LAB_14d5cd483;
      bVar3 = true;
    }
    else {
      local_res10.DebugPtr = TVar6.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar6.DebugPtr != (UCameraRigAsset *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar6.DebugPtr);
      }
      FWeakObjectPtr::operator=(&local_38,(FObjectPtr)&local_res10);
      if (TVar6.DebugPtr != (UCameraRigAsset *)0x0) goto LAB_14d5cd475;
LAB_14d5cd483:
      bVar3 = false;
    }
    TVar5.DebugPtr = (UCameraRigAsset *)0x0;
    if (bVar3) {
      TVar5.DebugPtr = TVar6.DebugPtr;
    }
  }
  if (TVar5.DebugPtr != (UCameraRigAsset *)0x0) {
    pUVar8 = UCameraRigAsset::StaticClass();
    iVar1 = (int)pUVar8->_padding_;
    if ((iVar1 <= *(int *)((TVar5.DebugPtr)->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)((TVar5.DebugPtr)->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar8->_padding_)) goto LAB_14d5cd4b9;
  }
  TVar5.DebugPtr = (UCameraRigAsset *)0x0;
LAB_14d5cd4b9:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (TVar5.DebugPtr != (UCameraRigAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar5.DebugPtr);
  }
  (this->CameraRig).field0_0x0.DebugPtr = (UCameraRigAsset *)TVar5;
  if (local_30.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.SubPathString.Data.AllocatorInstance.Data);
  }
  return true;
}

