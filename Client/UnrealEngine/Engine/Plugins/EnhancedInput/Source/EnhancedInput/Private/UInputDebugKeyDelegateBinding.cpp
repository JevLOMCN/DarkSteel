// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 7

// StaticClass @ 14a6b8260

UClass * __cdecl UInputDebugKeyDelegateBinding::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputDebugKeyDelegateBinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"InputDebugKeyDelegateBinding",
               &Z_Registration_Info_UClass_UInputDebugKeyDelegateBinding.InnerSingleton,
               StaticRegisterNativesUInputDebugKeyDelegateBinding,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInputDebugKeyDelegateBinding>,
               InternalVTableHelperCtorCaller<UInputDebugKeyDelegateBinding>,local_res8,
               UInputDelegateBinding::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputDebugKeyDelegateBinding.InnerSingleton;
}

// UInputDebugKeyDelegateBinding @ 14a6cc950

UInputDebugKeyDelegateBinding * __thiscall
UInputDebugKeyDelegateBinding::UInputDebugKeyDelegateBinding
          (UInputDebugKeyDelegateBinding *this,FVTableHelper *param_1)

{
  UInputDelegateBinding::UInputDelegateBinding((UInputDelegateBinding *)this,param_1);
  this->_padding_ = (longlong)&___7UInputDebugKeyDelegateBinding__6B_;
  (this->InputDebugKeyDelegateBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputDebugKeyDelegateBindings).ArrayNum = 0;
  (this->InputDebugKeyDelegateBindings).ArrayMax = 0;
  return this;
}

// UInputDebugKeyDelegateBinding @ 14a6cc990

UInputDebugKeyDelegateBinding * __thiscall
UInputDebugKeyDelegateBinding::UInputDebugKeyDelegateBinding
          (UInputDebugKeyDelegateBinding *this,FObjectInitializer *param_1)

{
  UInputDelegateBinding::UInputDelegateBinding((UInputDelegateBinding *)this,param_1);
  this->_padding_ = (longlong)&___7UInputDebugKeyDelegateBinding__6B_;
  (this->InputDebugKeyDelegateBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputDebugKeyDelegateBindings).ArrayNum = 0;
  (this->InputDebugKeyDelegateBindings).ArrayMax = 0;
  return this;
}

// ~UInputDebugKeyDelegateBinding @ 14a6cf7c0

void __thiscall
UInputDebugKeyDelegateBinding::~UInputDebugKeyDelegateBinding(UInputDebugKeyDelegateBinding *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInputDebugKeyDelegateBinding__6B_;
  DestructItems<FBlueprintInputDebugKeyDelegateBinding,int>
            ((FBlueprintInputDebugKeyDelegateBinding *)
             (this->InputDebugKeyDelegateBindings).AllocatorInstance.Data,
             (this->InputDebugKeyDelegateBindings).ArrayNum);
  pFVar1 = (this->InputDebugKeyDelegateBindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UInputDelegateBinding::~UInputDelegateBinding((UInputDelegateBinding *)this);
  return;
}

// BindToInputComponent @ 14a6d5d60

void __thiscall
UInputDebugKeyDelegateBinding::BindToInputComponent
          (UInputDebugKeyDelegateBinding *this,UInputComponent *param_1,UObject *param_2)

{
  FScriptContainerElement FVar1;
  FScriptContainerElement FVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FName FVar5;
  UClass *pUVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res10 [8];
  FInputChord local_38;
  
  if (param_1 != (UInputComponent *)0x0) {
    pUVar6 = UEnhancedInputComponent::StaticClass();
    iVar3 = (int)pUVar6->_padding_;
    if ((iVar3 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar3 * 8)
        == &pUVar6->_padding_)) {
      pFVar4 = (this->InputDebugKeyDelegateBindings).AllocatorInstance.Data;
      iVar3 = (this->InputDebugKeyDelegateBindings).ArrayNum;
      pFVar7 = pFVar4 + 0x2c;
      while( true ) {
        if ((this->InputDebugKeyDelegateBindings).ArrayNum != iVar3) {
          `TCheckedPointerIterator<FBlueprintInputDebugKeyDelegateBinding_const_,int,0>::operator!='
          ::__l2::<lambda_1>::operator()(local_res10);
        }
        if ((FName *)(pFVar7 + -0x2c) == (FName *)(pFVar4 + (longlong)iVar3 * 0x30)) break;
        local_38.Key.KeyName = *(FName *)(pFVar7 + -0x2c);
        FVar1 = *pFVar7;
        FVar5 = *(FName *)(pFVar7 + -8);
        FVar2 = pFVar7[-0xc];
        local_38.Key.KeyDetails.Object = *(FKeyDetails **)(pFVar7 + -0x24);
        local_38.Key.KeyDetails.SharedReferenceCount.ReferenceController =
             *(TReferenceControllerBase<1> **)(pFVar7 + -0x1c);
        if (local_38.Key.KeyDetails.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_38.Key.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_38.Key.KeyDetails.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        local_38._24_4_ = *(uint *)(pFVar7 + -0x14) & 0xf | local_38._24_4_ & 0xfffffff0;
        UEnhancedInputComponent::BindDebugKey
                  ((UEnhancedInputComponent *)param_1,&local_38,(uint)(byte)FVar2,param_2,FVar5,
                   (bool)FVar1);
        pFVar7 = pFVar7 + 0x30;
      }
    }
  }
  return;
}

// GetPrivateStaticClass @ 14a6e1010

UClass * __cdecl UInputDebugKeyDelegateBinding::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputDebugKeyDelegateBinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"InputDebugKeyDelegateBinding",
               &Z_Registration_Info_UClass_UInputDebugKeyDelegateBinding.InnerSingleton,
               StaticRegisterNativesUInputDebugKeyDelegateBinding,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInputDebugKeyDelegateBinding>,
               InternalVTableHelperCtorCaller<UInputDebugKeyDelegateBinding>,local_res8,
               UInputDelegateBinding::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputDebugKeyDelegateBinding.InnerSingleton;
}

// StaticRegisterNativesUInputDebugKeyDelegateBinding @ 14a6fb5a0

void __cdecl UInputDebugKeyDelegateBinding::StaticRegisterNativesUInputDebugKeyDelegateBinding(void)

{
  return;
}

