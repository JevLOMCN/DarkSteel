// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 7

// StaticClass @ 14a6b2cb0

UClass * __cdecl UEnhancedInputActionDelegateBinding::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnhancedInputActionDelegateBinding.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"EnhancedInputActionDelegateBinding",
               &Z_Registration_Info_UClass_UEnhancedInputActionDelegateBinding.InnerSingleton,
               StaticRegisterNativesUEnhancedInputActionDelegateBinding,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEnhancedInputActionDelegateBinding>,
               InternalVTableHelperCtorCaller<UEnhancedInputActionDelegateBinding>,local_res8,
               UInputDelegateBinding::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnhancedInputActionDelegateBinding.InnerSingleton;
}

// UEnhancedInputActionDelegateBinding @ 14a6cb220

UEnhancedInputActionDelegateBinding * __thiscall
UEnhancedInputActionDelegateBinding::UEnhancedInputActionDelegateBinding
          (UEnhancedInputActionDelegateBinding *this,FVTableHelper *param_1)

{
  UInputDelegateBinding::UInputDelegateBinding((UInputDelegateBinding *)this,param_1);
  this->_padding_ = (longlong)&___7UEnhancedInputActionDelegateBinding__6B_;
  (this->InputActionDelegateBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputActionDelegateBindings).ArrayNum = 0;
  (this->InputActionDelegateBindings).ArrayMax = 0;
  return this;
}

// UEnhancedInputActionDelegateBinding @ 14a6cb260

UEnhancedInputActionDelegateBinding * __thiscall
UEnhancedInputActionDelegateBinding::UEnhancedInputActionDelegateBinding
          (UEnhancedInputActionDelegateBinding *this,FObjectInitializer *param_1)

{
  UInputDelegateBinding::UInputDelegateBinding((UInputDelegateBinding *)this,param_1);
  this->_padding_ = (longlong)&___7UEnhancedInputActionDelegateBinding__6B_;
  (this->InputActionDelegateBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputActionDelegateBindings).ArrayNum = 0;
  (this->InputActionDelegateBindings).ArrayMax = 0;
  return this;
}

// ~UEnhancedInputActionDelegateBinding @ 14a6ceed0

void __thiscall
UEnhancedInputActionDelegateBinding::~UEnhancedInputActionDelegateBinding
          (UEnhancedInputActionDelegateBinding *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UEnhancedInputActionDelegateBinding__6B_;
  pFVar1 = (this->InputActionDelegateBindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UInputDelegateBinding::~UInputDelegateBinding((UInputDelegateBinding *)this);
  return;
}

// BindToInputComponent @ 14a6d59f0

void __thiscall
UEnhancedInputActionDelegateBinding::BindToInputComponent
          (UEnhancedInputActionDelegateBinding *this,UInputComponent *param_1,UObject *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UClass *pUVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res10 [8];
  
  if (param_1 != (UInputComponent *)0x0) {
    pUVar3 = UEnhancedInputComponent::StaticClass();
    iVar2 = (int)pUVar3->_padding_;
    if ((iVar2 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar3->_padding_)) {
      pFVar4 = (this->InputActionDelegateBindings).AllocatorInstance.Data;
      iVar2 = (this->InputActionDelegateBindings).ArrayNum;
      pFVar1 = pFVar4 + (longlong)iVar2 * 0x18;
      while( true ) {
        if ((this->InputActionDelegateBindings).ArrayNum != iVar2) {
          `TCheckedPointerIterator<FBlueprintEnhancedInputActionBinding_const_,int,0>::operator!='::
          __l2::<lambda_1>::operator()(local_res10);
        }
        if (pFVar4 == pFVar1) break;
        UEnhancedInputComponent::BindAction
                  ((UEnhancedInputComponent *)param_1,*(UInputAction **)pFVar4,
                   (ETriggerEvent)pFVar4[8],param_2,*(FName *)(pFVar4 + 0xc));
        pFVar4 = pFVar4 + 0x18;
      }
    }
  }
  return;
}

// GetPrivateStaticClass @ 14a6e05b0

UClass * __cdecl UEnhancedInputActionDelegateBinding::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnhancedInputActionDelegateBinding.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"EnhancedInputActionDelegateBinding",
               &Z_Registration_Info_UClass_UEnhancedInputActionDelegateBinding.InnerSingleton,
               StaticRegisterNativesUEnhancedInputActionDelegateBinding,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEnhancedInputActionDelegateBinding>,
               InternalVTableHelperCtorCaller<UEnhancedInputActionDelegateBinding>,local_res8,
               UInputDelegateBinding::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnhancedInputActionDelegateBinding.InnerSingleton;
}

// StaticRegisterNativesUEnhancedInputActionDelegateBinding @ 14a6fb370

void __cdecl
UEnhancedInputActionDelegateBinding::StaticRegisterNativesUEnhancedInputActionDelegateBinding(void)

{
  return;
}

