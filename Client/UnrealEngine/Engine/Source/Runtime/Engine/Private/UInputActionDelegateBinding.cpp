// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 147cad470

UClass * __cdecl UInputActionDelegateBinding::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputActionDelegateBinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"InputActionDelegateBinding",
               &Z_Registration_Info_UClass_UInputActionDelegateBinding.InnerSingleton,
               StaticRegisterNativesUInputActionDelegateBinding,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInputActionDelegateBinding>,
               InternalVTableHelperCtorCaller<UInputActionDelegateBinding>,local_res8,
               UInputDelegateBinding::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputActionDelegateBinding.InnerSingleton;
}

// UInputActionDelegateBinding @ 147cc69d0

UInputActionDelegateBinding * __thiscall
UInputActionDelegateBinding::UInputActionDelegateBinding
          (UInputActionDelegateBinding *this,FVTableHelper *param_1)

{
  UDynamicBlueprintBinding::UDynamicBlueprintBinding((UDynamicBlueprintBinding *)this,param_1);
  this->_padding_ = (longlong)&___7UInputActionDelegateBinding__6B_;
  (this->InputActionDelegateBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputActionDelegateBindings).ArrayNum = 0;
  (this->InputActionDelegateBindings).ArrayMax = 0;
  return this;
}

// UInputActionDelegateBinding @ 147cc6a10

UInputActionDelegateBinding * __thiscall
UInputActionDelegateBinding::UInputActionDelegateBinding
          (UInputActionDelegateBinding *this,FObjectInitializer *param_1)

{
  bool bVar1;
  UClass *local_res8 [2];
  longlong local_res18 [2];
  
  UDynamicBlueprintBinding::UDynamicBlueprintBinding((UDynamicBlueprintBinding *)this,param_1);
  this->_padding_ = (longlong)&___7UInputDelegateBinding__6B_;
  bVar1 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (bVar1) {
    local_res18[0] = this->_padding_;
    TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>::Emplace<UClass_*>
              (&UInputDelegateBinding::InputBindingClasses,local_res8,(bool *)local_res18);
  }
  this->_padding_ = (longlong)&___7UInputActionDelegateBinding__6B_;
  (this->InputActionDelegateBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputActionDelegateBindings).ArrayNum = 0;
  (this->InputActionDelegateBindings).ArrayMax = 0;
  return this;
}

// ~UInputActionDelegateBinding @ 147cc95a0

void __thiscall
UInputActionDelegateBinding::~UInputActionDelegateBinding(UInputActionDelegateBinding *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInputActionDelegateBinding__6B_;
  pFVar1 = (this->InputActionDelegateBindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UInputDelegateBinding__6B_;
  UDynamicBlueprintBinding::~UDynamicBlueprintBinding((UDynamicBlueprintBinding *)this);
  return;
}

// BindToInputComponent @ 147cd9290

void __thiscall
UInputActionDelegateBinding::BindToInputComponent
          (UInputActionDelegateBinding *this,UInputComponent *param_1,UObject *param_2)

{
  longlong lVar1;
  code *pcVar2;
  FSharedReferencer<1> FVar3;
  bool bVar4;
  uint uVar5;
  TReferenceControllerBase<1> *pTVar6;
  byte bVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  FInputActionHandlerDynamicSignature *pFVar14;
  longlong local_res20;
  ForAnyElementType local_118;
  int local_110;
  int local_10c;
  FInputActionBinding local_108;
  undefined8 local_b8;
  FSharedReferencer<1> local_b0;
  UObject *local_a8;
  FInputActionBinding local_a0;
  FDestructionSentinel local_58;
  
  uVar13 = 0;
  local_110 = 0;
  local_118.Data = (FScriptContainerElement *)0x0;
  local_10c = 0;
  if (0 < (this->InputActionDelegateBindings).ArrayNum) {
    local_res20 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar13 < (this->InputActionDelegateBindings).ArrayNum) {
        uVar8 = ~uVar13 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar12 = (this->InputActionDelegateBindings).AllocatorInstance.Data + local_res20;
      bVar7 = local_108._padding_ & 0xfdU | 1;
      local_108.ActionName = *(FName *)(pFVar12 + 4);
      local_108.KeyEvent.Value = *(uchar *)(pFVar12 + 0xc);
      local_108.bPaired = '\0';
      local_108.Handle = -1;
      local_108.ActionDelegate.FuncDelegate.Object =
           (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)0x0;
      local_108.ActionDelegate.FuncDelegate.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      local_108.ActionDelegate.FuncDelegateWithKey.Object =
           (TDelegate<void___cdecl(FKey),FDefaultDelegateUserPolicy> *)0x0;
      local_108.ActionDelegate.FuncDelegateWithKey.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      local_108.ActionDelegate.FuncDynDelegate.Object = (FInputActionHandlerDynamicSignature *)0x0;
      local_108.ActionDelegate.FuncDynDelegate.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      local_108._padding_ =
           ((byte)(*(uint *)pFVar12 >> 1) & 1) * '\x02' ^ (bVar7 ^ (byte)*pFVar12) & 1 ^ bVar7;
      uVar8 = *(uint *)(pFVar12 + 0x10);
      uVar5 = *(uint *)(pFVar12 + 0x14);
      local_108.ActionDelegate.BoundDelegateType = DynamicDelegate;
      pTVar6 = ::operator_new(0x28);
      if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
        local_b0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pFVar14 = (FInputActionHandlerDynamicSignature *)&DAT_00000010;
      }
      else {
        pTVar6[1]._padding_ = 0;
        pFVar14 = (FInputActionHandlerDynamicSignature *)(pTVar6 + 1);
        pTVar6->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFInputActionHandlerDynamicSignature___00_SharedPointerInternals__6B_
        ;
        pTVar6->SharedReferenceCount = (atomic<int>)0x1;
        pTVar6->WeakReferenceCount = (atomic<int>)0x1;
        pTVar6[1].SharedReferenceCount = (atomic<int>)0x0;
        pTVar6[1].WeakReferenceCount = (atomic<int>)0x0;
        pTVar6[2]._padding_ = 0;
        if ((pFVar14 == (FInputActionHandlerDynamicSignature *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
        local_b0.ReferenceController = pTVar6;
      }
      FVar3.ReferenceController = local_b0.ReferenceController;
      local_b8 = 0;
      local_108.ActionDelegate.FuncDynDelegate.Object = pFVar14;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&local_108.ActionDelegate.FuncDynDelegate.SharedReferenceCount,&local_b0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_b0.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar3.ReferenceController);
      if ((local_108.ActionDelegate.FuncDynDelegate.Object ==
           (FInputActionHandlerDynamicSignature *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar14 = local_108.ActionDelegate.FuncDynDelegate.Object;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 local_108.ActionDelegate.FuncDynDelegate.Object,(FWriteAccessScope *)&local_58);
      local_a8 = param_2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(param_2);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)&pFVar14->field_0x8,(FObjectPtr)&local_a8);
      *(uint *)&pFVar14->field_0x10 = uVar8;
      *(uint *)&pFVar14->field_0x14 = uVar5;
      if (local_58.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
      }
      if ((((byte)*pFVar12 & 4) != 0) &&
         (uVar8 = (param_1->ActionBindings).ArrayNum - 1, -1 < (int)uVar8)) {
        lVar10 = (longlong)(int)uVar8 << 4;
        do {
          uVar5 = 0;
          if ((int)uVar8 < (param_1->ActionBindings).ArrayNum) {
            uVar5 = ~uVar8 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          lVar1 = *(longlong *)((param_1->ActionBindings).AllocatorInstance.Data + lVar10);
          if ((*(FName *)(lVar1 + 4) == local_108.ActionName) &&
             (*(FScriptContainerElement *)(lVar1 + 2) ==
              (FScriptContainerElement)local_108.KeyEvent.Value)) {
            UInputComponent::RemoveActionBinding(param_1,uVar8);
          }
          lVar10 = lVar10 + -0x10;
          uVar8 = uVar8 - 1;
        } while (-1 < (int)uVar8);
      }
      if (((local_118.Data <= &local_108) &&
          (&local_108 < (FInputActionBinding *)(local_118.Data + (longlong)local_10c * 0x48))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (local_110 == local_10c) {
        local_110 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x848,&local_118,&local_10c);
      }
      pFVar12 = local_118.Data + (longlong)local_110 * 0x48;
      pFVar12->field_0x0 = local_108._padding_;
      pFVar12[1] = (FScriptContainerElement)(local_108.bPaired | (byte)pFVar12[1] & 0xfe);
      pFVar12[2] = (FScriptContainerElement)local_108.KeyEvent.Value;
      *(FName *)(pFVar12 + 4) = local_108.ActionName;
      *(int *)(pFVar12 + 0xc) = local_108.Handle;
      *(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> **)(pFVar12 + 0x10) =
           local_108.ActionDelegate.FuncDelegate.Object;
      *(TReferenceControllerBase<1> **)(pFVar12 + 0x18) =
           local_108.ActionDelegate.FuncDelegate.SharedReferenceCount.ReferenceController;
      if (local_108.ActionDelegate.FuncDelegate.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_108.ActionDelegate.FuncDelegate.SharedReferenceCount.ReferenceController)->
        SharedReferenceCount =
             (atomic<int>)
             ((int)(local_108.ActionDelegate.FuncDelegate.SharedReferenceCount.ReferenceController)
                   ->SharedReferenceCount + 1);
        UNLOCK();
      }
      *(TDelegate<void___cdecl(FKey),FDefaultDelegateUserPolicy> **)(pFVar12 + 0x20) =
           local_108.ActionDelegate.FuncDelegateWithKey.Object;
      *(TReferenceControllerBase<1> **)(pFVar12 + 0x28) =
           local_108.ActionDelegate.FuncDelegateWithKey.SharedReferenceCount.ReferenceController;
      if (local_108.ActionDelegate.FuncDelegateWithKey.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_108.ActionDelegate.FuncDelegateWithKey.SharedReferenceCount.ReferenceController)->
        SharedReferenceCount =
             (atomic<int>)
             ((int)(local_108.ActionDelegate.FuncDelegateWithKey.SharedReferenceCount.
                   ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      *(FInputActionHandlerDynamicSignature **)(pFVar12 + 0x30) =
           local_108.ActionDelegate.FuncDynDelegate.Object;
      *(TReferenceControllerBase<1> **)(pFVar12 + 0x38) =
           local_108.ActionDelegate.FuncDynDelegate.SharedReferenceCount.ReferenceController;
      if (local_108.ActionDelegate.FuncDynDelegate.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_108.ActionDelegate.FuncDynDelegate.SharedReferenceCount.ReferenceController)->
        SharedReferenceCount =
             (atomic<int>)
             ((int)(local_108.ActionDelegate.FuncDynDelegate.SharedReferenceCount.
                   ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar12[0x40] = (FScriptContainerElement)local_108.ActionDelegate.BoundDelegateType;
      local_110 = local_110 + 1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_108.ActionDelegate.FuncDynDelegate.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_108.ActionDelegate.FuncDelegateWithKey.SharedReferenceCount.
                 ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_108.ActionDelegate.FuncDelegate.SharedReferenceCount.ReferenceController);
      local_res20 = local_res20 + 0x18;
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < (this->InputActionDelegateBindings).ArrayNum);
  }
  uVar9 = 0;
  uVar11 = uVar9;
  if (0 < local_110) {
    do {
      uVar8 = (uint)uVar9;
      uVar13 = 0;
      if ((int)uVar8 < local_110) {
        uVar13 = ~uVar8 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_a0._padding_ = *(char *)(local_118.Data + uVar11);
      local_a0._1_1_ = local_a0._1_1_ ^ (local_a0._1_1_ ^ (byte)local_118.Data[uVar11 + 1]) & 1;
      local_a0.KeyEvent.Value = *(uchar *)(local_118.Data + uVar11 + 2);
      local_a0.ActionName = *(FName *)(local_118.Data + uVar11 + 4);
      local_a0.Handle = *(int *)(local_118.Data + uVar11 + 0xc);
      local_a0.ActionDelegate.FuncDelegate.Object =
           *(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> **)
            (local_118.Data + uVar11 + 0x10);
      local_a0.ActionDelegate.FuncDelegate.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)(local_118.Data + uVar11 + 0x18);
      if (local_a0.ActionDelegate.FuncDelegate.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_a0.ActionDelegate.FuncDelegate.SharedReferenceCount.ReferenceController)->
        SharedReferenceCount =
             (atomic<int>)
             ((int)(local_a0.ActionDelegate.FuncDelegate.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      local_a0.ActionDelegate.FuncDelegateWithKey.Object =
           *(TDelegate<void___cdecl(FKey),FDefaultDelegateUserPolicy> **)
            (local_118.Data + uVar11 + 0x20);
      local_a0.ActionDelegate.FuncDelegateWithKey.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)(local_118.Data + uVar11 + 0x28);
      if (local_a0.ActionDelegate.FuncDelegateWithKey.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_a0.ActionDelegate.FuncDelegateWithKey.SharedReferenceCount.ReferenceController)->
        SharedReferenceCount =
             (atomic<int>)
             ((int)(local_a0.ActionDelegate.FuncDelegateWithKey.SharedReferenceCount.
                   ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_a0.ActionDelegate.FuncDynDelegate.Object =
           *(FInputActionHandlerDynamicSignature **)(local_118.Data + uVar11 + 0x30);
      local_a0.ActionDelegate.FuncDynDelegate.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)(local_118.Data + uVar11 + 0x38);
      if (local_a0.ActionDelegate.FuncDynDelegate.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_a0.ActionDelegate.FuncDynDelegate.SharedReferenceCount.ReferenceController)->
        SharedReferenceCount =
             (atomic<int>)
             ((int)(local_a0.ActionDelegate.FuncDynDelegate.SharedReferenceCount.ReferenceController
                   )->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_a0.ActionDelegate.BoundDelegateType =
           *(EBoundDelegate *)(local_118.Data + uVar11 + 0x40);
      UInputComponent::AddActionBinding(param_1,&local_a0);
      uVar9 = (ulonglong)(uVar8 + 1);
      uVar11 = uVar11 + 0x48;
    } while ((int)(uVar8 + 1) < local_110);
  }
  DestructItems<FInputActionBinding,int>((FInputActionBinding *)local_118.Data,local_110);
  if ((FInputActionBinding *)local_118.Data != (FInputActionBinding *)0x0) {
    FMemory::Free(local_118.Data);
  }
  return;
}

// GetPrivateStaticClass @ 147d0c620

UClass * __cdecl UInputActionDelegateBinding::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputActionDelegateBinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"InputActionDelegateBinding",
               &Z_Registration_Info_UClass_UInputActionDelegateBinding.InnerSingleton,
               StaticRegisterNativesUInputActionDelegateBinding,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInputActionDelegateBinding>,
               InternalVTableHelperCtorCaller<UInputActionDelegateBinding>,local_res8,
               UInputDelegateBinding::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputActionDelegateBinding.InnerSingleton;
}

// StaticRegisterNativesUInputActionDelegateBinding @ 147d32910

void __cdecl UInputActionDelegateBinding::StaticRegisterNativesUInputActionDelegateBinding(void)

{
  return;
}

