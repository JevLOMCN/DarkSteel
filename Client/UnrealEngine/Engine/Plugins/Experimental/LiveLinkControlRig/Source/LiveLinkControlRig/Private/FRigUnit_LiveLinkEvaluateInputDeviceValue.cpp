// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkControlRig
// Functions: 7

// StaticStruct @ 14d361740

UScriptStruct * __cdecl FRigUnit_LiveLinkEvaluateInputDeviceValue::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_LiveLinkEvaluateInputDeviceValue.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_LiveLinkEvaluateInputDeviceValue.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluateInputDeviceValue,
                         (UObject *)pUVar1,L"RigUnit_LiveLinkEvaluateInputDeviceValue");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluateInputDeviceValue_Statics::RigVMFunctions
    ;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_LiveLinkEvaluateInputDeviceValue.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_LiveLinkEvaluateInputDeviceValue.OuterSingleton;
}

// GetExecuteContextStruct @ 14d3617c0

UScriptStruct * __thiscall
FRigUnit_LiveLinkEvaluateInputDeviceValue::GetExecuteContextStruct
          (FRigUnit_LiveLinkEvaluateInputDeviceValue *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FControlRigExecuteContext,(UObject *)pUVar1,
                         L"ControlRigExecuteContext");
  }
  return Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton;
}

// Execute @ 14d3617d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_LiveLinkEvaluateInputDeviceValue::Execute(FRigUnit_LiveLinkEvaluateInputDeviceValue *this)

{
  undefined1 auStack_288 [32];
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_288;
  FControlRigExecuteContext::FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  if ((FRigVMNameCache *)local_268._80_8_ == (FRigVMNameCache *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
        _thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                           ::__l5::_thread_safe_static_guard_0__);
      if (`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
          _thread_safe_static_guard_0__ == -1) {
        atexit(`FRigVMExecuteContext::Initialize'::__l5::
               _dynamic_atexit_destructor_for__StaticNameCache__);
        _Init_thread_footer(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                             ::__l5::_thread_safe_static_guard_0__);
      }
    }
    local_268._80_8_ =
         &`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
          StaticNameCache;
  }
  StaticExecute((FControlRigExecuteContext *)local_268,&this->SubjectName,&this->InputDeviceData);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// FRigUnit_LiveLinkEvaluateInputDeviceValue @ 14d361ea0

FRigUnit_LiveLinkEvaluateInputDeviceValue * __thiscall
FRigUnit_LiveLinkEvaluateInputDeviceValue::FRigUnit_LiveLinkEvaluateInputDeviceValue
          (FRigUnit_LiveLinkEvaluateInputDeviceValue *this)

{
  this->_padding_ = (longlong)&___7FRigUnit_LiveLinkEvaluateInputDeviceValue__6B_;
  (this->SubjectName).ComparisonIndex = 0;
  (this->SubjectName).Number = 0;
  FLiveLinkBaseFrameData::FLiveLinkBaseFrameData((FLiveLinkBaseFrameData *)&this->InputDeviceData);
  (this->InputDeviceData).LeftAnalogX = 0.0;
  (this->InputDeviceData).LeftAnalogY = 0.0;
  (this->InputDeviceData).RightAnalogX = 0.0;
  (this->InputDeviceData).RightAnalogY = 0.0;
  (this->InputDeviceData).LeftTriggerAnalog = 0.0;
  (this->InputDeviceData).RightTriggerAnalog = 0.0;
  (this->InputDeviceData).LeftThumb = 0.0;
  (this->InputDeviceData).RightThumb = 0.0;
  (this->InputDeviceData).SpecialLeft = 0.0;
  (this->InputDeviceData).SpecialLeft_X = 0.0;
  (this->InputDeviceData).SpecialLeft_Y = 0.0;
  (this->InputDeviceData).SpecialRight = 0.0;
  (this->InputDeviceData).FaceButtonBottom = 0.0;
  (this->InputDeviceData).FaceButtonRight = 0.0;
  (this->InputDeviceData).FaceButtonLeft = 0.0;
  (this->InputDeviceData).FaceButtonTop = 0.0;
  (this->InputDeviceData).LeftShoulder = 0.0;
  (this->InputDeviceData).RightShoulder = 0.0;
  (this->InputDeviceData).LeftTriggerThreshold = 0.0;
  (this->InputDeviceData).RightTriggerThreshold = 0.0;
  (this->InputDeviceData).DPadUp = 0.0;
  (this->InputDeviceData).DPadDown = 0.0;
  (this->InputDeviceData).DPadRight = 0.0;
  (this->InputDeviceData).DPadLeft = 0.0;
  (this->InputDeviceData).LeftStickUp = 0.0;
  (this->InputDeviceData).LeftStickDown = 0.0;
  (this->InputDeviceData).LeftStickRight = 0.0;
  (this->InputDeviceData).LeftStickLeft = 0.0;
  (this->InputDeviceData).RightStickUp = 0.0;
  (this->InputDeviceData).RightStickDown = 0.0;
  (this->InputDeviceData).RightStickRight = 0.0;
  (this->InputDeviceData).RightStickLeft = 0.0;
  return this;
}

// Execute @ 14d361fb0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_LiveLinkEvaluateInputDeviceValue::Execute
          (FRigUnit_LiveLinkEvaluateInputDeviceValue *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->SubjectName,&this->InputDeviceData);
  return;
}

// RigVMExecute @ 14d362260

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_LiveLinkEvaluateInputDeviceValue::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  FLiveLinkGamepadInputDeviceFrameData *pFVar3;
  code *pcVar4;
  bool bVar5;
  FName *pFVar6;
  FControlRigExecuteContext *pFVar7;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar2 = param_2->DataPtr;
  if (pFVar2->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FName *)pFVar2->Ptr;
  }
  else {
    pFVar6 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property);
  }
  if (iVar1 < 2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = (FLiveLinkGamepadInputDeviceFrameData *)param_2->DataPtr[1].Ptr;
  pFVar7 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar7,pFVar6,pFVar3);
  return;
}

// StaticExecute @ 14d362be0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_LiveLinkEvaluateInputDeviceValue::StaticExecute
          (FControlRigExecuteContext *param_1,FName *param_2,
          FLiveLinkGamepadInputDeviceFrameData *param_3)

{
  code *pcVar1;
  bool bVar2;
  ILiveLinkClient *pIVar3;
  char cVar4;
  int iVar5;
  FLiveLinkGamepadInputDeviceFrameData *pFVar6;
  longlong lVar7;
  UClass *pUVar8;
  UScriptStruct *pUVar9;
  IModularFeatures *pIVar10;
  UClass *local_res20;
  FStructOnScope local_58;
  FStructOnScope local_30;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar10 = IModularFeatures::Get();
    iVar5 = (**(code **)((longlong)*pIVar10 + 0x18))(pIVar10);
    if (iVar5 < 1) {
      LiveLinkClient = (ILiveLinkClient *)0x0;
    }
    else {
      lVar7 = (**(code **)((longlong)*pIVar10 + 0x20))
                        (pIVar10,ILiveLinkClient::ModularFeatureName,0);
      LiveLinkClient = (ILiveLinkClient *)(lVar7 + -8);
      if (lVar7 == 0) {
        LiveLinkClient = (ILiveLinkClient *)0x0;
      }
    }
    _Init_thread_footer(&::_TSS0);
  }
  pIVar3 = LiveLinkClient;
  if (LiveLinkClient != (ILiveLinkClient *)0x0) {
    FStructOnScope::FStructOnScope(&local_58);
    FStructOnScope::FStructOnScope(&local_30);
    pcVar1 = *(code **)((longlong)*pIVar3 + 0x198);
    local_res20 = Z_Construct_UClass_ULiveLinkInputDeviceRole_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res20);
    }
    cVar4 = (*pcVar1)(pIVar3,*param_2,&local_res20,&local_58);
    if (cVar4 != '\0') {
      pFVar6 = (FLiveLinkGamepadInputDeviceFrameData *)
               (**(code **)(local_30._padding_ + 0x18))(&local_30);
      lVar7 = (**(code **)(local_30._padding_ + 0x20))(&local_30);
      if (lVar7 != 0) {
        pUVar8 = Z_Construct_UClass_UScriptStruct_NoRegister();
        iVar5 = (int)pUVar8->_padding_;
        if (((iVar5 <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
            ((longlong *)
             *(undefined1 **)
              (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)iVar5 * 8) ==
             &pUVar8->_padding_)) &&
           (pUVar9 = FLiveLinkGamepadInputDeviceFrameData::StaticStruct(),
           pUVar9 != (UScriptStruct *)0x0)) {
          iVar5 = (int)pUVar9->_padding_;
          if ((*(int *)(lVar7 + 0x38) < iVar5) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar7 + 0x30) + (longlong)iVar5 * 8) !=
              &pUVar9->_padding_)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if ((bVar2) && (pFVar6 != (FLiveLinkGamepadInputDeviceFrameData *)0x0)) {
            FLiveLinkGamepadInputDeviceFrameData::operator=(param_3,pFVar6);
          }
        }
      }
    }
    FStructOnScope::~FStructOnScope(&local_30);
    FStructOnScope::~FStructOnScope(&local_58);
  }
  return;
}

