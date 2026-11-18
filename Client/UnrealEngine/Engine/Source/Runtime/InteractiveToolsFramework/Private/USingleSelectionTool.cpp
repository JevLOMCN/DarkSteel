// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 16

// StaticClass @ 14966b580

UClass * __cdecl USingleSelectionTool::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USingleSelectionTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"SingleSelectionTool",
               &Z_Registration_Info_UClass_USingleSelectionTool.InnerSingleton,
               StaticRegisterNativesUSingleSelectionTool,0xd0,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<USingleSelectionTool>,
               InternalVTableHelperCtorCaller<USingleSelectionTool>,local_res8,
               UInteractiveTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USingleSelectionTool.InnerSingleton;
}

// USingleSelectionTool @ 149688460

USingleSelectionTool * __thiscall
USingleSelectionTool::USingleSelectionTool(USingleSelectionTool *this,FVTableHelper *param_1)

{
  UInteractiveTool::UInteractiveTool((UInteractiveTool *)this,param_1);
  (this->Target).field0_0x0.DebugPtr = (UToolTarget *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&___7USingleSelectionTool__6B_;
  return this;
}

// USingleSelectionTool @ 1496884b0

USingleSelectionTool * __thiscall
USingleSelectionTool::USingleSelectionTool(USingleSelectionTool *this)

{
  UInteractiveTool::UInteractiveTool((UInteractiveTool *)this);
  (this->Target).field0_0x0.DebugPtr = (UToolTarget *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&___7USingleSelectionTool__6B_;
  return this;
}

// ~USingleSelectionTool @ 14968aae0

void __thiscall USingleSelectionTool::~USingleSelectionTool(USingleSelectionTool *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&___7IInteractiveToolCameraFocusAPI__6B_;
  UInteractiveTool::~UInteractiveTool((UInteractiveTool *)this);
  return;
}

// AreAllTargetsValid @ 1496924e0

bool __thiscall USingleSelectionTool::AreAllTargetsValid(USingleSelectionTool *this)

{
  UToolTarget *pUVar1;
  undefined1 uVar2;
  
  pUVar1 = (this->Target).field0_0x0.DebugPtr;
  if (pUVar1 != (UToolTarget *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001496924ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(longlong *)pUVar1 + 0x2b0))();
    return (bool)uVar2;
  }
  return false;
}

// CanAccept @ 149696670

bool __thiscall USingleSelectionTool::CanAccept(USingleSelectionTool *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000149696673. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x3a8))();
  return (bool)uVar1;
}

// GetPrivateStaticClass @ 1496a7820

UClass * __cdecl USingleSelectionTool::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USingleSelectionTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"SingleSelectionTool",
               &Z_Registration_Info_UClass_USingleSelectionTool.InnerSingleton,
               StaticRegisterNativesUSingleSelectionTool,0xd0,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<USingleSelectionTool>,
               InternalVTableHelperCtorCaller<USingleSelectionTool>,local_res8,
               UInteractiveTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USingleSelectionTool.InnerSingleton;
}

// GetTarget @ 1496a8e80

UToolTarget * __thiscall USingleSelectionTool::GetTarget(USingleSelectionTool *this)

{
  return (this->Target).field0_0x0.DebugPtr;
}

// GetWorldSpaceFocusBox @ 1496ab0c0

TBox<double> * __thiscall
USingleSelectionTool::GetWorldSpaceFocusBox
          (USingleSelectionTool *this,TBox<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  UObjectBaseUtility *this_00;
  UClass *pUVar7;
  longlong *plVar8;
  longlong lVar9;
  
  this_00 = (UObjectBaseUtility *)this->_padding_;
  if (this_00 != (UObjectBaseUtility *)0x0) {
    pUVar7 = Z_Construct_UClass_USceneComponentBackedTarget_NoRegister();
    plVar8 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar7);
    if (plVar8 != (longlong *)0x0) {
      lVar9 = (**(code **)(*plVar8 + 0x10))(plVar8);
      if (lVar9 != 0) {
        dVar1 = *(double *)(lVar9 + 0x110);
        dVar2 = *(double *)(lVar9 + 0x128);
        dVar3 = *(double *)(lVar9 + 0x118);
        dVar4 = *(double *)(lVar9 + 0x130);
        dVar5 = *(double *)(lVar9 + 0x138);
        dVar6 = *(double *)(lVar9 + 0x120);
        (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar1 - dVar2;
        (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar3 - dVar4;
        (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar6 - dVar5;
        (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar1 + dVar2;
        (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar3 + dVar4;
        (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar6 + dVar5;
        __return_storage_ptr__->IsValid = '\x01';
        return __return_storage_ptr__;
      }
    }
  }
  __return_storage_ptr__->IsValid = '\0';
  return __return_storage_ptr__;
}

// GetWorldSpaceFocusPoint @ 1496ab2a0

bool __thiscall
USingleSelectionTool::GetWorldSpaceFocusPoint
          (USingleSelectionTool *this,TRay<double> *param_1,TVector<double> *param_2)

{
  UObjectBaseUtility *this_00;
  char cVar1;
  UClass *pUVar2;
  longlong *plVar3;
  undefined1 local_108 [4];
  undefined4 local_104;
  double local_e0;
  double dStack_d8;
  double local_d0;
  undefined4 local_64;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  this_00 = (UObjectBaseUtility *)this->_padding_;
  if (this_00 != (UObjectBaseUtility *)0x0) {
    pUVar2 = Z_Construct_UClass_UPrimitiveComponentBackedTarget_NoRegister();
    plVar3 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar2);
    if (plVar3 != (longlong *)0x0) {
      memset(local_108,0,0x100);
      local_50 = 0;
      uStack_48 = 0;
      local_104 = 0x3f800000;
      local_64 = 0xffffffff;
      local_40 = 0;
      uStack_3c = 0;
      uStack_38 = 0xffffffff;
      uStack_34 = 0;
      cVar1 = (**(code **)(*plVar3 + 0x38))(plVar3,param_1,local_108);
      if (cVar1 != '\0') {
        (param_2->field0_0x0)._s_0.X = local_e0;
        (param_2->field0_0x0)._s_0.Y = dStack_d8;
        (param_2->field0_0x0)._s_0.Z = local_d0;
        return true;
      }
    }
  }
  return false;
}

// SetTarget @ 1496c0030

void __thiscall USingleSelectionTool::SetTarget(USingleSelectionTool *this,UToolTarget *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UToolTarget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->Target).field0_0x0.DebugPtr = param_1;
    return;
  }
  (this->Target).field0_0x0.DebugPtr = param_1;
  return;
}

// StaticRegisterNativesUSingleSelectionTool @ 1496c2d90

void __cdecl USingleSelectionTool::StaticRegisterNativesUSingleSelectionTool(void)

{
  return;
}

// SupportsWorldSpaceFocusBox @ 1496c2de0

bool __thiscall USingleSelectionTool::SupportsWorldSpaceFocusBox(USingleSelectionTool *this)

{
  UObjectBaseUtility *this_00;
  UClass *pUVar1;
  void *pvVar2;
  
  this_00 = (UObjectBaseUtility *)this->_padding_;
  if (this_00 != (UObjectBaseUtility *)0x0) {
    pUVar1 = Z_Construct_UClass_USceneComponentBackedTarget_NoRegister();
    pvVar2 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar1);
    if (pvVar2 != (void *)0x0) {
      return true;
    }
  }
  return false;
}

// SupportsWorldSpaceFocusPoint @ 1496c2e30

bool __thiscall USingleSelectionTool::SupportsWorldSpaceFocusPoint(USingleSelectionTool *this)

{
  UObjectBaseUtility *this_00;
  UClass *pUVar1;
  void *pvVar2;
  
  this_00 = (UObjectBaseUtility *)this->_padding_;
  if (this_00 != (UObjectBaseUtility *)0x0) {
    pUVar1 = Z_Construct_UClass_UPrimitiveComponentBackedTarget_NoRegister();
    pvVar2 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar1);
    if (pvVar2 != (void *)0x0) {
      return true;
    }
  }
  return false;
}

// _getUObject @ 1496ca850

UObject * __thiscall USingleSelectionTool::_getUObject(USingleSelectionTool *this)

{
  return (UObject *)&this[-1]._padding_;
}

// _getUObject`adjustor{152}' @ 1496ca85c

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   USingleSelectionTool::_getUObject`adjustor{152}' (void)const __ptr64 */

UObject * __thiscall USingleSelectionTool::_getUObject_adjustor_152__(USingleSelectionTool *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((USingleSelectionTool *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

