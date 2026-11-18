// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 147cae5f0

UClass * __cdecl UInputTouchDelegateBinding::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputTouchDelegateBinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"InputTouchDelegateBinding",
               &Z_Registration_Info_UClass_UInputTouchDelegateBinding.InnerSingleton,
               StaticRegisterNativesUInputTouchDelegateBinding,0x38,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UInputTouchDelegateBinding>,
               InternalVTableHelperCtorCaller<UInputTouchDelegateBinding>,local_res8,
               UInputDelegateBinding::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputTouchDelegateBinding.InnerSingleton;
}

// UInputTouchDelegateBinding @ 147cc6d80

UInputTouchDelegateBinding * __thiscall
UInputTouchDelegateBinding::UInputTouchDelegateBinding
          (UInputTouchDelegateBinding *this,FVTableHelper *param_1)

{
  UDynamicBlueprintBinding::UDynamicBlueprintBinding((UDynamicBlueprintBinding *)this,param_1);
  this->_padding_ = (longlong)&___7UInputTouchDelegateBinding__6B_;
  (this->InputTouchDelegateBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputTouchDelegateBindings).ArrayNum = 0;
  (this->InputTouchDelegateBindings).ArrayMax = 0;
  return this;
}

// UInputTouchDelegateBinding @ 147cc6dc0

UInputTouchDelegateBinding * __thiscall
UInputTouchDelegateBinding::UInputTouchDelegateBinding
          (UInputTouchDelegateBinding *this,FObjectInitializer *param_1)

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
  this->_padding_ = (longlong)&___7UInputTouchDelegateBinding__6B_;
  (this->InputTouchDelegateBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputTouchDelegateBindings).ArrayNum = 0;
  (this->InputTouchDelegateBindings).ArrayMax = 0;
  return this;
}

// ~UInputTouchDelegateBinding @ 147cc9700

void __thiscall
UInputTouchDelegateBinding::~UInputTouchDelegateBinding(UInputTouchDelegateBinding *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInputTouchDelegateBinding__6B_;
  pFVar1 = (this->InputTouchDelegateBindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UInputDelegateBinding__6B_;
  UDynamicBlueprintBinding::~UDynamicBlueprintBinding((UDynamicBlueprintBinding *)this);
  return;
}

// BindToInputComponent @ 147cdb050

void __thiscall
UInputTouchDelegateBinding::BindToInputComponent
          (UInputTouchDelegateBinding *this,UInputComponent *param_1,UObject *param_2)

{
  int *piVar1;
  code *pcVar2;
  FSharedReferencer<1> FVar3;
  bool bVar4;
  uint uVar5;
  TReferenceControllerBase<1> *pTVar6;
  int iVar7;
  byte bVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  TArray<FInputTouchBinding,TSizedDefaultAllocator<32>_> *pTVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  TReferenceControllerBase<1> *pTVar15;
  longlong lVar16;
  ulonglong uVar17;
  FScriptContainerElement *pFVar18;
  longlong local_res20;
  UObject *local_b8;
  ForAnyElementType local_b0;
  int local_a8;
  int local_a4 [3];
  FSharedReferencer<1> local_98;
  FDestructionSentinel local_90;
  undefined1 local_78 [16];
  TReferenceControllerBase<1> *pTStack_68;
  TReferenceControllerBase<1> *local_60;
  FSharedReferencer<1> aFStack_58 [3];
  
  uVar14 = 0;
  local_a8 = 0;
  local_b0.Data = (FScriptContainerElement *)0x0;
  local_a4[0] = 0;
  if (0 < (this->InputTouchDelegateBindings).ArrayNum) {
    local_res20 = 0;
    do {
      uVar12 = 0;
      if ((int)uVar14 < (this->InputTouchDelegateBindings).ArrayNum) {
        uVar12 = ~uVar14 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar18 = (this->InputTouchDelegateBindings).AllocatorInstance.Data + local_res20;
      bVar8 = local_78[0] & 0xfd | 1;
      local_78[1] = *(uchar *)(pFVar18 + 4);
      local_78._8_8_ = 0;
      pTStack_68 = (TReferenceControllerBase<1> *)0x0;
      local_60 = (TReferenceControllerBase<1> *)0x0;
      aFStack_58[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_78[0] = ((byte)(*(uint *)pFVar18 >> 1) & 1) * '\x02' ^
                    (bVar8 ^ (byte)*pFVar18) & 1 ^ bVar8;
      lVar16 = *(longlong *)(pFVar18 + 8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      pTVar6 = ::operator_new(0x28);
      if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
        local_98.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pTVar15 = (TReferenceControllerBase<1> *)&DAT_00000010;
      }
      else {
        pTVar6[1]._padding_ = 0;
        pTVar15 = pTVar6 + 1;
        pTVar6->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFInputTouchHandlerDynamicSignature___00_SharedPointerInternals__6B_
        ;
        pTVar6->SharedReferenceCount = (atomic<int>)0x1;
        pTVar6->WeakReferenceCount = (atomic<int>)0x1;
        pTVar6[1].SharedReferenceCount = (atomic<int>)0x0;
        pTVar6[1].WeakReferenceCount = (atomic<int>)0x0;
        pTVar6[2]._padding_ = 0;
        if ((pTVar15 == (TReferenceControllerBase<1> *)0x0) &&
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
        local_98.ReferenceController = pTVar6;
      }
      FVar3.ReferenceController = local_98.ReferenceController;
      local_a4[1] = 0;
      local_a4[2] = 0;
      local_60 = pTVar15;
      SharedPointerInternals::FSharedReferencer<1>::operator=(aFStack_58,&local_98);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_98.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar3.ReferenceController);
      if ((local_60 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pTVar6 = local_60;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_60,
                 (FWriteAccessScope *)&local_90);
      local_b8 = param_2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(param_2);
      }
      FWeakObjectPtr::operator=
                ((FWeakObjectPtr *)&pTVar6->SharedReferenceCount,(FObjectPtr)&local_b8);
      pTVar6[1]._padding_ = lVar16;
      if (local_90.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
      }
      if ((((byte)*pFVar18 & 4) != 0) &&
         (uVar12 = (param_1->TouchBindings).ArrayNum - 1, -1 < (int)uVar12)) {
        pTVar11 = &param_1->TouchBindings;
        lVar16 = (longlong)(int)uVar12 * 0x28;
        do {
          uVar10 = ~uVar12 >> 0x1f;
          uVar5 = 0;
          if ((int)uVar12 < (param_1->TouchBindings).ArrayNum) {
            uVar5 = uVar10;
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
          if ((pTVar11->AllocatorInstance).Data[lVar16 + 1] != (FScriptContainerElement)local_78[1])
          {
            uVar5 = 0;
            if ((int)uVar12 < (param_1->TouchBindings).ArrayNum) {
              uVar5 = uVar10;
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
            pFVar18 = (pTVar11->AllocatorInstance).Data + lVar16;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (*(TReferenceControllerBase<1> **)(pFVar18 + 0x20));
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (*(TReferenceControllerBase<1> **)(pFVar18 + 0x10));
            iVar7 = (param_1->TouchBindings).ArrayNum + ~uVar12;
            if (iVar7 != 0) {
              memmove(pFVar18,pFVar18 + 0x28,(longlong)iVar7 * 0x28);
            }
            piVar1 = &(param_1->TouchBindings).ArrayNum;
            *piVar1 = *piVar1 + -1;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,&pTVar11->AllocatorInstance,(param_1->TouchBindings).ArrayNum,
                       &(param_1->TouchBindings).ArrayMax);
          }
          lVar16 = lVar16 + -0x28;
          uVar12 = uVar12 - 1;
        } while (-1 < (int)uVar12);
      }
      if (((local_b0.Data <= (FInputTouchBinding *)local_78) &&
          ((FScriptContainerElement *)local_78 < local_b0.Data + (longlong)local_a4[0] * 0x28)) &&
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
      if (local_a8 == local_a4[0]) {
        local_a8 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x828,&local_b0,local_a4);
      }
      lVar16 = (longlong)local_a8;
      local_b0.Data[lVar16 * 0x28].field_0x0 = local_78[0];
      local_b0.Data[lVar16 * 0x28 + 1] = (FScriptContainerElement)local_78[1];
      *(undefined8 *)(local_b0.Data + lVar16 * 0x28 + 8) = local_78._8_8_;
      *(TReferenceControllerBase<1> **)(local_b0.Data + lVar16 * 0x28 + 0x10) = pTStack_68;
      if (pTStack_68 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_68->SharedReferenceCount = (atomic<int>)((int)pTStack_68->SharedReferenceCount + 1);
        UNLOCK();
      }
      *(TReferenceControllerBase<1> **)(local_b0.Data + lVar16 * 0x28 + 0x18) = local_60;
      *(TReferenceControllerBase<1> **)(local_b0.Data + lVar16 * 0x28 + 0x20) =
           aFStack_58[0].ReferenceController;
      if (aFStack_58[0].ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (aFStack_58[0].ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(aFStack_58[0].ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_a8 = local_a8 + 1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (aFStack_58[0].ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_68);
      uVar14 = uVar14 + 1;
      local_res20 = local_res20 + 0x10;
    } while ((int)uVar14 < (this->InputTouchDelegateBindings).ArrayNum);
  }
  uVar13 = 0;
  if (0 < local_a8) {
    pTVar11 = &param_1->TouchBindings;
    uVar17 = uVar13;
    do {
      uVar12 = (uint)uVar13;
      uVar14 = 0;
      if ((int)uVar12 < local_a8) {
        uVar14 = ~uVar12 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar18 = (pTVar11->AllocatorInstance).Data;
      pFVar9 = local_b0.Data + uVar17;
      if (((pFVar18 <= pFVar9) &&
          (pFVar9 < pFVar18 + (longlong)(param_1->TouchBindings).ArrayMax * 0x28)) &&
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
      iVar7 = (param_1->TouchBindings).ArrayNum;
      if (iVar7 == (param_1->TouchBindings).ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x828,&pTVar11->AllocatorInstance,&(param_1->TouchBindings).ArrayMax);
      }
      (param_1->TouchBindings).ArrayNum = iVar7 + 1;
      pFVar18 = (pTVar11->AllocatorInstance).Data + (longlong)iVar7 * 0x28;
      *pFVar18 = *pFVar9;
      pFVar18[1] = pFVar9[1];
      *(undefined8 *)(pFVar18 + 8) = *(undefined8 *)(pFVar9 + 8);
      lVar16 = *(longlong *)(pFVar9 + 0x10);
      *(longlong *)(pFVar18 + 0x10) = lVar16;
      if (lVar16 != 0) {
        LOCK();
        *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
        UNLOCK();
      }
      *(undefined8 *)(pFVar18 + 0x18) = *(undefined8 *)(pFVar9 + 0x18);
      lVar16 = *(longlong *)(pFVar9 + 0x20);
      *(longlong *)(pFVar18 + 0x20) = lVar16;
      if (lVar16 != 0) {
        LOCK();
        *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
        UNLOCK();
      }
      uVar13 = (ulonglong)(uVar12 + 1);
      uVar17 = uVar17 + 0x28;
    } while ((int)(uVar12 + 1) < local_a8);
  }
  DestructItems<FInputTouchBinding,int>((FInputTouchBinding *)local_b0.Data,local_a8);
  if ((FInputTouchBinding *)local_b0.Data != (FInputTouchBinding *)0x0) {
    FMemory::Free(local_b0.Data);
  }
  return;
}

// GetPrivateStaticClass @ 147d0caa0

UClass * __cdecl UInputTouchDelegateBinding::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputTouchDelegateBinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"InputTouchDelegateBinding",
               &Z_Registration_Info_UClass_UInputTouchDelegateBinding.InnerSingleton,
               StaticRegisterNativesUInputTouchDelegateBinding,0x38,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UInputTouchDelegateBinding>,
               InternalVTableHelperCtorCaller<UInputTouchDelegateBinding>,local_res8,
               UInputDelegateBinding::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputTouchDelegateBinding.InnerSingleton;
}

// StaticRegisterNativesUInputTouchDelegateBinding @ 147d329a0

void __cdecl UInputTouchDelegateBinding::StaticRegisterNativesUInputTouchDelegateBinding(void)

{
  return;
}

