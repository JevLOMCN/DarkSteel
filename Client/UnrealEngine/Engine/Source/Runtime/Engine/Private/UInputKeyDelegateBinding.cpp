// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 147cada80

UClass * __cdecl UInputKeyDelegateBinding::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputKeyDelegateBinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"InputKeyDelegateBinding",
               &Z_Registration_Info_UClass_UInputKeyDelegateBinding.InnerSingleton,
               StaticRegisterNativesUInputKeyDelegateBinding,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UInputKeyDelegateBinding>,
               InternalVTableHelperCtorCaller<UInputKeyDelegateBinding>,local_res8,
               UInputDelegateBinding::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputKeyDelegateBinding.InnerSingleton;
}

// UInputKeyDelegateBinding @ 147cc6cd0

UInputKeyDelegateBinding * __thiscall
UInputKeyDelegateBinding::UInputKeyDelegateBinding
          (UInputKeyDelegateBinding *this,FVTableHelper *param_1)

{
  UDynamicBlueprintBinding::UDynamicBlueprintBinding((UDynamicBlueprintBinding *)this,param_1);
  this->_padding_ = (longlong)&___7UInputKeyDelegateBinding__6B_;
  (this->InputKeyDelegateBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputKeyDelegateBindings).ArrayNum = 0;
  (this->InputKeyDelegateBindings).ArrayMax = 0;
  return this;
}

// UInputKeyDelegateBinding @ 147cc6d10

UInputKeyDelegateBinding * __thiscall
UInputKeyDelegateBinding::UInputKeyDelegateBinding
          (UInputKeyDelegateBinding *this,FObjectInitializer *param_1)

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
  this->_padding_ = (longlong)&___7UInputKeyDelegateBinding__6B_;
  (this->InputKeyDelegateBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputKeyDelegateBindings).ArrayNum = 0;
  (this->InputKeyDelegateBindings).ArrayMax = 0;
  return this;
}

// ~UInputKeyDelegateBinding @ 147cc96b0

void __thiscall UInputKeyDelegateBinding::~UInputKeyDelegateBinding(UInputKeyDelegateBinding *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInputKeyDelegateBinding__6B_;
  DestructItems<FBlueprintInputKeyDelegateBinding,int>
            ((FBlueprintInputKeyDelegateBinding *)
             (this->InputKeyDelegateBindings).AllocatorInstance.Data,
             (this->InputKeyDelegateBindings).ArrayNum);
  pFVar1 = (this->InputKeyDelegateBindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UInputDelegateBinding__6B_;
  UDynamicBlueprintBinding::~UDynamicBlueprintBinding((UDynamicBlueprintBinding *)this);
  return;
}

// BindToInputComponent @ 147cda830

void __thiscall
UInputKeyDelegateBinding::BindToInputComponent
          (UInputKeyDelegateBinding *this,UInputComponent *param_1,UObject *param_2)

{
  int *piVar1;
  TArray<FInputKeyBinding,TSizedDefaultAllocator<32>_> *pTVar2;
  FInputKeyBinding *pFVar3;
  code *pcVar4;
  FSharedReferencer<1> FVar5;
  bool bVar6;
  uint uVar7;
  TReferenceControllerBase<1> *pTVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  TDelegate<void___cdecl(FKey),FDefaultDelegateUserPolicy> *this_00;
  FInputKeyBinding *pFVar13;
  uint uVar14;
  atomic<int> *paVar15;
  uint uVar16;
  FInputActionHandlerDynamicSignature *pFVar17;
  longlong lVar18;
  FScriptContainerElement *pFVar19;
  uint local_res20;
  ForAnyElementType local_118;
  int local_110;
  int local_10c;
  FInputKeyBinding local_108;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  FSharedReferencer<1> local_90;
  undefined8 local_88;
  UObject *local_80;
  FDestructionSentinel local_78;
  FDestructionSentinel local_60;
  
  uVar16 = 0;
  local_118.Data = (FScriptContainerElement *)0x0;
  local_110 = 0;
  local_10c = 0;
  if (0 < (this->InputKeyDelegateBindings).ArrayNum) {
    local_a0 = 0;
    do {
      lVar18 = local_a0;
      uVar11 = 0;
      if ((int)uVar16 < (this->InputKeyDelegateBindings).ArrayNum) {
        uVar11 = ~uVar16 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar19 = (this->InputKeyDelegateBindings).AllocatorInstance.Data + lVar18;
      local_108.Chord.Key.KeyDetails.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)(pFVar19 + 0x18);
      local_108.KeyEvent.Value = *(uchar *)(pFVar19 + 0x28);
      local_108.Chord.Key.KeyName = *(FName *)(pFVar19 + 8);
      local_108.Chord.Key.KeyDetails.Object = *(FKeyDetails **)(pFVar19 + 0x10);
      if (local_108.Chord.Key.KeyDetails.SharedReferenceCount.ReferenceController ==
          (TReferenceControllerBase<1> *)0x0) {
        paVar15 = (atomic<int> *)&DAT_00000008;
      }
      else {
        paVar15 = &(local_108.Chord.Key.KeyDetails.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount;
        LOCK();
        *paVar15 = (atomic<int>)((int)*paVar15 + 1);
        UNLOCK();
      }
      uVar11 = *(uint *)(pFVar19 + 0x20);
      uVar10 = (local_res20 ^ uVar11) & 1 ^ local_res20;
      uVar10 = (uVar11 ^ uVar10) & 2 ^ uVar10;
      uVar10 = (uVar11 ^ uVar10) & 4 ^ uVar10;
      local_res20 = (uVar11 ^ uVar10) & 8 ^ uVar10;
      local_108._padding_ = local_108._padding_ & 0xfdU | 1;
      if (local_108.Chord.Key.KeyDetails.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar15 = (atomic<int>)((int)*paVar15 + 1);
        UNLOCK();
      }
      local_108.KeyDelegate.FuncDelegate.Object =
           (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)0x0;
      local_108.KeyDelegate.FuncDynDelegate.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      uVar11 = (local_res20 ^ local_108.Chord._24_4_) & 1 ^ local_108.Chord._24_4_;
      local_108.KeyDelegate.BoundDelegateType = Unbound;
      uVar11 = (local_res20 ^ uVar11) & 2 ^ uVar11;
      local_108.KeyDelegate.FuncDelegate.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      local_108.KeyDelegate.FuncDelegateWithKey.Object =
           (TDelegate<void___cdecl(FKey),FDefaultDelegateUserPolicy> *)0x0;
      local_108.KeyDelegate.FuncDelegateWithKey.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      local_108.KeyDelegate.FuncDynDelegate.Object = (FInputActionHandlerDynamicSignature *)0x0;
      uVar11 = (local_res20 ^ uVar11) & 4 ^ uVar11;
      local_108.Chord._24_4_ = (local_res20 ^ uVar11) & 8 ^ uVar11;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_108.Chord.Key.KeyDetails.SharedReferenceCount.ReferenceController);
      bVar9 = (byte)*pFVar19 & 1 | local_108._padding_ & 0xfeU;
      local_108._padding_ = ((char)(*(uint *)pFVar19 >> 1) * '\x02' ^ bVar9) & 2 ^ bVar9;
      uVar11 = *(uint *)(pFVar19 + 0x2c);
      uVar10 = *(uint *)(pFVar19 + 0x30);
      if (local_108.KeyDelegate.BoundDelegateType == Delegate) {
        this_00 = (TDelegate<void___cdecl(FKey),FDefaultDelegateUserPolicy> *)
                  local_108.KeyDelegate.FuncDelegate.Object;
        if ((local_108.KeyDelegate.FuncDelegate.Object ==
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""),
           this_00 = (TDelegate<void___cdecl(FKey),FDefaultDelegateUserPolicy> *)
                     local_108.KeyDelegate.FuncDelegate.Object, bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
LAB_147cdaaf4:
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
      }
      else {
        if (local_108.KeyDelegate.BoundDelegateType == DelegateWithKey) {
          this_00 = local_108.KeyDelegate.FuncDelegateWithKey.Object;
          if ((local_108.KeyDelegate.FuncDelegateWithKey.Object ==
               (TDelegate<void___cdecl(FKey),FDefaultDelegateUserPolicy> *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""),
             this_00 = local_108.KeyDelegate.FuncDelegateWithKey.Object, bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          goto LAB_147cdaaf4;
        }
        if (local_108.KeyDelegate.BoundDelegateType == DynamicDelegate) {
          if ((local_108.KeyDelegate.FuncDynDelegate.Object ==
               (FInputActionHandlerDynamicSignature *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar17 = local_108.KeyDelegate.FuncDynDelegate.Object;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     local_108.KeyDelegate.FuncDynDelegate.Object,(FWriteAccessScope *)&local_78);
          local_88 = 0;
          FWeakObjectPtr::operator=((FWeakObjectPtr *)&pFVar17->field_0x8,(FObjectPtr)&local_88);
          local_a8 = 0;
          *(undefined8 *)&pFVar17->field_0x10 = 0;
          if (local_78.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
          }
        }
      }
      local_108.KeyDelegate.BoundDelegateType = DynamicDelegate;
      pTVar8 = ::operator_new(0x28);
      if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
        pFVar17 = (FInputActionHandlerDynamicSignature *)&DAT_00000010;
        local_90.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        pTVar8->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFInputActionHandlerDynamicSignature___00_SharedPointerInternals__6B_
        ;
        pFVar17 = (FInputActionHandlerDynamicSignature *)(pTVar8 + 1);
        pTVar8[1]._padding_ = 0;
        pTVar8->SharedReferenceCount = (atomic<int>)0x1;
        pTVar8->WeakReferenceCount = (atomic<int>)0x1;
        pTVar8[1].SharedReferenceCount = (atomic<int>)0x0;
        pTVar8[1].WeakReferenceCount = (atomic<int>)0x0;
        pTVar8[2]._padding_ = 0;
        if ((pFVar17 == (FInputActionHandlerDynamicSignature *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        LOCK();
        pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
        UNLOCK();
        local_90.ReferenceController = pTVar8;
      }
      FVar5.ReferenceController = local_90.ReferenceController;
      local_98 = 0;
      local_108.KeyDelegate.FuncDynDelegate.Object = pFVar17;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&local_108.KeyDelegate.FuncDynDelegate.SharedReferenceCount,&local_90);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_90.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar5.ReferenceController);
      if ((local_108.KeyDelegate.FuncDynDelegate.Object ==
           (FInputActionHandlerDynamicSignature *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar17 = local_108.KeyDelegate.FuncDynDelegate.Object;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 local_108.KeyDelegate.FuncDynDelegate.Object,(FWriteAccessScope *)&local_60);
      local_80 = param_2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(param_2);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)&pFVar17->field_0x8,(FObjectPtr)&local_80);
      *(uint *)&pFVar17->field_0x10 = uVar11;
      *(uint *)&pFVar17->field_0x14 = uVar10;
      if (local_60.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
      }
      if ((((byte)*pFVar19 & 4) != 0) &&
         (uVar11 = (param_1->KeyBindings).ArrayNum - 1, -1 < (int)uVar11)) {
        pTVar2 = &param_1->KeyBindings;
        lVar18 = (longlong)(int)uVar11 * 0x60;
        uVar10 = local_108.Chord._24_4_;
        do {
          uVar14 = ~uVar11 >> 0x1f;
          uVar7 = 0;
          if ((int)uVar11 < (param_1->KeyBindings).ArrayNum) {
            uVar7 = uVar14;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             uVar10 = local_108.Chord._24_4_, bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar19 = (pTVar2->AllocatorInstance).Data;
          if (((((*(FName *)(pFVar19 + lVar18 + 8) == local_108.Chord.Key.KeyName) &&
                (uVar7 = *(uint *)(pFVar19 + lVar18 + 0x20), ((uVar7 ^ uVar10) & 1) == 0)) &&
               (((uVar10 ^ uVar7) & 2) == 0)) &&
              ((((uVar10 ^ uVar7) & 4) == 0 && (((uVar10 ^ uVar7) & 8) == 0)))) &&
             (pFVar19[lVar18 + 1] == (FScriptContainerElement)local_108.KeyEvent.Value)) {
            uVar10 = 0;
            if ((int)uVar11 < (param_1->KeyBindings).ArrayNum) {
              uVar10 = uVar14;
            }
            if ((uVar10 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar19 = (pTVar2->AllocatorInstance).Data + lVar18;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (*(TReferenceControllerBase<1> **)(pFVar19 + 0x50));
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (*(TReferenceControllerBase<1> **)(pFVar19 + 0x40));
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (*(TReferenceControllerBase<1> **)(pFVar19 + 0x30));
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (*(TReferenceControllerBase<1> **)(pFVar19 + 0x18));
            iVar12 = (param_1->KeyBindings).ArrayNum + ~uVar11;
            if (iVar12 != 0) {
              memmove(pFVar19,pFVar19 + 0x60,(longlong)iVar12 * 0x60);
            }
            piVar1 = &(param_1->KeyBindings).ArrayNum;
            *piVar1 = *piVar1 + -1;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x60,8,&pTVar2->AllocatorInstance,(param_1->KeyBindings).ArrayNum,
                       &(param_1->KeyBindings).ArrayMax);
            uVar10 = local_108.Chord._24_4_;
          }
          lVar18 = lVar18 + -0x60;
          uVar11 = uVar11 - 1;
        } while (-1 < (int)uVar11);
      }
      if (((local_118.Data <= &local_108) &&
          (&local_108 < (FInputKeyBinding *)(local_118.Data + (longlong)local_10c * 0x60))) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (local_110 == local_10c) {
        local_110 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x860,&local_118,&local_10c);
      }
      lVar18 = (longlong)local_110;
      local_110 = local_110 + 1;
      FInputKeyBinding::FInputKeyBinding
                ((FInputKeyBinding *)(local_118.Data + lVar18 * 0x60),&local_108);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_108.KeyDelegate.FuncDynDelegate.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_108.KeyDelegate.FuncDelegateWithKey.SharedReferenceCount.ReferenceController)
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_108.KeyDelegate.FuncDelegate.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_108.Chord.Key.KeyDetails.SharedReferenceCount.ReferenceController);
      uVar16 = uVar16 + 1;
      local_a0 = local_a0 + 0x38;
    } while ((int)uVar16 < (this->InputKeyDelegateBindings).ArrayNum);
  }
  uVar16 = 0;
  if (0 < local_110) {
    pTVar2 = &param_1->KeyBindings;
    do {
      uVar11 = 0;
      if ((int)uVar16 < local_110) {
        uVar11 = ~uVar16 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (FInputKeyBinding *)(pTVar2->AllocatorInstance).Data;
      pFVar13 = (FInputKeyBinding *)(local_118.Data + (longlong)(int)uVar16 * 0x60);
      if (((pFVar3 <= pFVar13) && (pFVar13 < pFVar3 + (param_1->KeyBindings).ArrayMax)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar12 = (param_1->KeyBindings).ArrayNum;
      if (iVar12 == (param_1->KeyBindings).ArrayMax) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x860,&pTVar2->AllocatorInstance,&(param_1->KeyBindings).ArrayMax);
      }
      (param_1->KeyBindings).ArrayNum = iVar12 + 1;
      FInputKeyBinding::FInputKeyBinding
                ((FInputKeyBinding *)((pTVar2->AllocatorInstance).Data + (longlong)iVar12 * 0x60),
                 pFVar13);
      uVar16 = uVar16 + 1;
    } while ((int)uVar16 < local_110);
  }
  DestructItems<FInputKeyBinding,int>((FInputKeyBinding *)local_118.Data,local_110);
  if ((FInputKeyBinding *)local_118.Data != (FInputKeyBinding *)0x0) {
    FMemory::Free(local_118.Data);
  }
  return;
}

// GetPrivateStaticClass @ 147d0c9e0

UClass * __cdecl UInputKeyDelegateBinding::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputKeyDelegateBinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"InputKeyDelegateBinding",
               &Z_Registration_Info_UClass_UInputKeyDelegateBinding.InnerSingleton,
               StaticRegisterNativesUInputKeyDelegateBinding,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UInputKeyDelegateBinding>,
               InternalVTableHelperCtorCaller<UInputKeyDelegateBinding>,local_res8,
               UInputDelegateBinding::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputKeyDelegateBinding.InnerSingleton;
}

// StaticRegisterNativesUInputKeyDelegateBinding @ 147d32990

void __cdecl UInputKeyDelegateBinding::StaticRegisterNativesUInputKeyDelegateBinding(void)

{
  return;
}

