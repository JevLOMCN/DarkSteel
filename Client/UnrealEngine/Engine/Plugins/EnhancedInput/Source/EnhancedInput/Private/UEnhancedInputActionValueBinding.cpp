// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 7

// StaticClass @ 14a6b3230

UClass * __cdecl UEnhancedInputActionValueBinding::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnhancedInputActionValueBinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"EnhancedInputActionValueBinding",
               &Z_Registration_Info_UClass_UEnhancedInputActionValueBinding.InnerSingleton,
               StaticRegisterNativesUEnhancedInputActionValueBinding,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEnhancedInputActionValueBinding>,
               InternalVTableHelperCtorCaller<UEnhancedInputActionValueBinding>,local_res8,
               UInputDelegateBinding::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnhancedInputActionValueBinding.InnerSingleton;
}

// UEnhancedInputActionValueBinding @ 14a6cb2a0

UEnhancedInputActionValueBinding * __thiscall
UEnhancedInputActionValueBinding::UEnhancedInputActionValueBinding
          (UEnhancedInputActionValueBinding *this,FVTableHelper *param_1)

{
  UInputDelegateBinding::UInputDelegateBinding((UInputDelegateBinding *)this,param_1);
  this->_padding_ = (longlong)&___7UEnhancedInputActionValueBinding__6B_;
  (this->InputActionValueBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputActionValueBindings).ArrayNum = 0;
  (this->InputActionValueBindings).ArrayMax = 0;
  return this;
}

// UEnhancedInputActionValueBinding @ 14a6cb2e0

UEnhancedInputActionValueBinding * __thiscall
UEnhancedInputActionValueBinding::UEnhancedInputActionValueBinding
          (UEnhancedInputActionValueBinding *this,FObjectInitializer *param_1)

{
  UInputDelegateBinding::UInputDelegateBinding((UInputDelegateBinding *)this,param_1);
  this->_padding_ = (longlong)&___7UEnhancedInputActionValueBinding__6B_;
  (this->InputActionValueBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputActionValueBindings).ArrayNum = 0;
  (this->InputActionValueBindings).ArrayMax = 0;
  return this;
}

// ~UEnhancedInputActionValueBinding @ 14a6cef10

void __thiscall
UEnhancedInputActionValueBinding::~UEnhancedInputActionValueBinding
          (UEnhancedInputActionValueBinding *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UEnhancedInputActionValueBinding__6B_;
  pFVar1 = (this->InputActionValueBindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UInputDelegateBinding::~UInputDelegateBinding((UInputDelegateBinding *)this);
  return;
}

// BindToInputComponent @ 14a6d5ab0

void __thiscall
UEnhancedInputActionValueBinding::BindToInputComponent
          (UEnhancedInputActionValueBinding *this,UInputComponent *param_1,UObject *param_2)

{
  int *piVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  UObject *pUVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  UClass *pUVar9;
  UObject *pUVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res10 [16];
  UObject *local_res20;
  undefined **local_70;
  uint local_68;
  FWeakObjectPtr local_60;
  double local_58;
  double dStack_50;
  double local_48;
  undefined1 uStack_40;
  undefined7 uStack_3f;
  
  if (param_1 != (UInputComponent *)0x0) {
    pUVar9 = UEnhancedInputComponent::StaticClass();
    iVar4 = (int)pUVar9->_padding_;
    if ((iVar4 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar4 * 8)
        == &pUVar9->_padding_)) {
      iVar4 = (this->InputActionValueBindings).ArrayNum;
      pFVar14 = (this->InputActionValueBindings).AllocatorInstance.Data;
      pFVar3 = pFVar14 + (longlong)iVar4 * 0x18;
      while( true ) {
        if ((this->InputActionValueBindings).ArrayNum != iVar4) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<FBlueprintEnhancedInputActionBinding_const_,int,0>::operator!='::
          __l2::<lambda_1>::operator()(local_res10);
        }
        if (pFVar14 == pFVar3) break;
        pUVar5 = *(UObject **)pFVar14;
        plVar2 = &param_1[1]._padding_;
        lVar12 = *plVar2;
        lVar13 = lVar12 + (longlong)(int)param_1[1]._padding_ * 0x38;
        for (; lVar12 != lVar13; lVar12 = lVar12 + 0x38) {
          pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar12 + 0x10));
          if (pUVar10 == pUVar5) {
            if (lVar12 != 0) goto LAB_14a6d5d05;
            break;
          }
        }
        local_68 = GInputBindingHandle;
        GInputBindingHandle = GInputBindingHandle + 1;
        local_70 = &___7FEnhancedInputActionValueBinding__6B_;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar5);
        }
        local_60.ObjectIndex = 0;
        local_60.ObjectSerialNumber = 0;
        local_res20 = pUVar5;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar5);
        }
        FWeakObjectPtr::operator=(&local_60,(FObjectPtr)&local_res20);
        uStack_40 = 0;
        local_58 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        dStack_50 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_48 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        if ((((undefined ***)*plVar2 <= &local_70) &&
            (&local_70 <
             (undefined ***)*plVar2 + (longlong)*(int *)((longlong)&param_1[1]._padding_ + 4) * 7))
           && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar8 = (int)param_1[1]._padding_;
        piVar1 = (int *)((longlong)&param_1[1]._padding_ + 4);
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x838,(ForAnyElementType *)plVar2,piVar1);
          *(int *)&param_1[1]._padding_ = iVar8;
        }
        *(int *)&param_1[1]._padding_ = iVar8 + 1;
        puVar11 = (undefined8 *)(*plVar2 + (longlong)iVar8 * 0x38);
        *puVar11 = &___7FInputBindingHandle__6B_;
        *(uint *)(puVar11 + 1) = local_68;
        *puVar11 = &___7FEnhancedInputActionValueBinding__6B_;
        *(FWeakObjectPtr *)(puVar11 + 2) = local_60;
        puVar11[3] = local_58;
        puVar11[4] = dStack_50;
        puVar11[5] = local_48;
        puVar11[6] = CONCAT71(uStack_3f,uStack_40);
LAB_14a6d5d05:
        pFVar14 = pFVar14 + 0x18;
      }
    }
  }
  return;
}

// GetPrivateStaticClass @ 14a6e0670

UClass * __cdecl UEnhancedInputActionValueBinding::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnhancedInputActionValueBinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"EnhancedInputActionValueBinding",
               &Z_Registration_Info_UClass_UEnhancedInputActionValueBinding.InnerSingleton,
               StaticRegisterNativesUEnhancedInputActionValueBinding,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEnhancedInputActionValueBinding>,
               InternalVTableHelperCtorCaller<UEnhancedInputActionValueBinding>,local_res8,
               UInputDelegateBinding::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnhancedInputActionValueBinding.InnerSingleton;
}

// StaticRegisterNativesUEnhancedInputActionValueBinding @ 14a6fb380

void __cdecl
UEnhancedInputActionValueBinding::StaticRegisterNativesUEnhancedInputActionValueBinding(void)

{
  return;
}

