// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 147ca99f0

UClass * __cdecl UInputAxisKeyDelegateBinding::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputAxisKeyDelegateBinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"InputAxisKeyDelegateBinding",
               &Z_Registration_Info_UClass_UInputAxisKeyDelegateBinding.InnerSingleton,
               StaticRegisterNativesUInputAxisKeyDelegateBinding,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInputAxisKeyDelegateBinding>,
               InternalVTableHelperCtorCaller<UInputAxisKeyDelegateBinding>,local_res8,
               UInputDelegateBinding::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputAxisKeyDelegateBinding.InnerSingleton;
}

// UInputAxisKeyDelegateBinding @ 147cc6b30

UInputAxisKeyDelegateBinding * __thiscall
UInputAxisKeyDelegateBinding::UInputAxisKeyDelegateBinding
          (UInputAxisKeyDelegateBinding *this,FVTableHelper *param_1)

{
  UDynamicBlueprintBinding::UDynamicBlueprintBinding((UDynamicBlueprintBinding *)this,param_1);
  this->_padding_ = (longlong)&___7UInputAxisKeyDelegateBinding__6B_;
  (this->InputAxisKeyDelegateBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputAxisKeyDelegateBindings).ArrayNum = 0;
  (this->InputAxisKeyDelegateBindings).ArrayMax = 0;
  return this;
}

// UInputAxisKeyDelegateBinding @ 147cc6b70

UInputAxisKeyDelegateBinding * __thiscall
UInputAxisKeyDelegateBinding::UInputAxisKeyDelegateBinding
          (UInputAxisKeyDelegateBinding *this,FObjectInitializer *param_1)

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
  this->_padding_ = (longlong)&___7UInputAxisKeyDelegateBinding__6B_;
  (this->InputAxisKeyDelegateBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputAxisKeyDelegateBindings).ArrayNum = 0;
  (this->InputAxisKeyDelegateBindings).ArrayMax = 0;
  return this;
}

// ~UInputAxisKeyDelegateBinding @ 147cc9620

void __thiscall
UInputAxisKeyDelegateBinding::~UInputAxisKeyDelegateBinding(UInputAxisKeyDelegateBinding *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInputAxisKeyDelegateBinding__6B_;
  DestructItems<FBlueprintInputAxisKeyDelegateBinding,int>
            ((FBlueprintInputAxisKeyDelegateBinding *)
             (this->InputAxisKeyDelegateBindings).AllocatorInstance.Data,
             (this->InputAxisKeyDelegateBindings).ArrayNum);
  pFVar1 = (this->InputAxisKeyDelegateBindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UInputDelegateBinding__6B_;
  UDynamicBlueprintBinding::~UDynamicBlueprintBinding((UDynamicBlueprintBinding *)this);
  return;
}

// BindToInputComponent @ 147cda080

void __thiscall
UInputAxisKeyDelegateBinding::BindToInputComponent
          (UInputAxisKeyDelegateBinding *this,UInputComponent *param_1,UObject *param_2)

{
  atomic<int> *paVar1;
  int *piVar2;
  TArray<FInputAxisKeyBinding,TSizedDefaultAllocator<32>_> *pTVar3;
  atomic<int> aVar4;
  atomic<unsigned___int64> aVar5;
  longlong lVar6;
  code *pcVar7;
  FSharedReferencer<1> FVar8;
  bool bVar9;
  TReferenceControllerBase<1> *pTVar10;
  byte bVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  ulonglong uVar20;
  TReferenceControllerBase<1> *pTVar21;
  longlong lVar22;
  uint local_res20;
  ForAnyElementType local_c8;
  uint local_c0;
  uint local_bc;
  undefined1 local_b8 [40];
  TReferenceControllerBase<1> *pTStack_90;
  TReferenceControllerBase<1> *local_88;
  FSharedReferencer<1> FStack_80;
  undefined8 local_78;
  FSharedReferencer<1> local_70;
  UObject *local_68;
  FDestructionSentinel local_60;
  
  uVar14 = 0;
  local_c0 = 0;
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_bc = 0;
  local_res20 = 0;
  uVar20 = uVar14;
  if (0 < (this->InputAxisKeyDelegateBindings).ArrayNum) {
    do {
      uVar18 = (uint)uVar14;
      uVar16 = 0;
      if ((int)uVar18 < (this->InputAxisKeyDelegateBindings).ArrayNum) {
        uVar16 = ~uVar18 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar19 = (this->InputAxisKeyDelegateBindings).AllocatorInstance.Data;
      pTVar10 = *(TReferenceControllerBase<1> **)(pFVar19 + uVar20 + 0x18);
      local_b8._8_8_ = *(FName *)(pFVar19 + uVar20 + 8);
      local_b8._16_8_ = *(undefined8 *)(pFVar19 + uVar20 + 0x10);
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_b8[0] = local_b8[0] & 0xfd | 1;
      local_b8._4_4_ = 0.0;
      local_b8._32_8_ = 0;
      pTStack_90 = (TReferenceControllerBase<1> *)0x0;
      local_88 = (TReferenceControllerBase<1> *)0x0;
      FStack_80.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_b8._24_8_ = pTVar10;
      bVar9 = FKey::IsAxis1D((FKey *)(local_b8 + 8));
      if ((!bVar9) &&
         (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_2256005067704368599>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Components\\InputComponent.h"
                             ,0x229,"AxisKey.IsAxis1D()"), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
      pTVar10 = pTStack_90;
      bVar11 = (byte)pFVar19[uVar20] & 1 | local_b8[0] & 0xfe;
      local_b8[0] = ((char)(*(uint *)(pFVar19 + uVar20) >> 1) * '\x02' ^ bVar11) & 2 ^ bVar11;
      aVar5 = *(atomic<unsigned___int64> *)&pFVar19[uVar20 + 0x20].field_0x0;
      local_b8._32_8_ = 0;
      if (pTStack_90 != (TReferenceControllerBase<1> *)0x0) {
        pTStack_90 = (TReferenceControllerBase<1> *)0x0;
        LOCK();
        paVar1 = &pTVar10->SharedReferenceCount;
        aVar4 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar4 == (atomic<int>)0x1) {
          (**(code **)pTVar10->_padding_)();
          LOCK();
          paVar1 = &pTVar10->WeakReferenceCount;
          aVar4 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar4 == (atomic<int>)0x1) {
            (**(code **)(pTVar10->_padding_ + 8))(pTVar10,1);
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      pTVar10 = ::operator_new(0x28);
      if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
        pTVar21 = (TReferenceControllerBase<1> *)&DAT_00000010;
        local_70.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        pTVar10->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFInputAxisHandlerDynamicSignature___00_SharedPointerInternals__6B_
        ;
        pTVar21 = pTVar10 + 1;
        pTVar10[1]._padding_ = 0;
        pTVar10->SharedReferenceCount = (atomic<int>)0x1;
        pTVar10->WeakReferenceCount = (atomic<int>)0x1;
        pTVar10[1].SharedReferenceCount = (atomic<int>)0x0;
        pTVar10[1].WeakReferenceCount = (atomic<int>)0x0;
        pTVar10[2]._padding_ = 0;
        if ((pTVar21 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        LOCK();
        pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
        UNLOCK();
        local_70.ReferenceController = pTVar10;
      }
      FVar8.ReferenceController = local_70.ReferenceController;
      local_78 = 0;
      local_88 = pTVar21;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_80,&local_70);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_70.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar8.ReferenceController);
      if ((local_88 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pTVar10 = local_88;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_88,
                 (FWriteAccessScope *)&local_60);
      local_68 = param_2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(param_2);
      }
      FWeakObjectPtr::operator=
                ((FWeakObjectPtr *)&pTVar10->SharedReferenceCount,(FObjectPtr)&local_68);
      ((FMRSWRecursiveAccessDetector *)&pTVar10[1]._padding_)->State = aVar5;
      if (local_60.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
      }
      if ((((byte)pFVar19[uVar20] & 4) != 0) &&
         (uVar16 = (param_1->AxisKeyBindings).ArrayNum - 1, -1 < (int)uVar16)) {
        pTVar3 = &param_1->AxisKeyBindings;
        lVar22 = (longlong)(int)uVar16 << 6;
        do {
          uVar17 = ~uVar16 >> 0x1f;
          uVar18 = 0;
          if ((int)uVar16 < (param_1->AxisKeyBindings).ArrayNum) {
            uVar18 = uVar17;
          }
          if ((uVar18 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if (*(FName *)((pTVar3->AllocatorInstance).Data + lVar22 + 8) == (FName)local_b8._8_8_) {
            uVar18 = 0;
            if ((int)uVar16 < (param_1->AxisKeyBindings).ArrayNum) {
              uVar18 = uVar17;
            }
            if ((uVar18 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar19 = (pTVar3->AllocatorInstance).Data + lVar22;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (*(TReferenceControllerBase<1> **)(pFVar19 + 0x38));
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (*(TReferenceControllerBase<1> **)(pFVar19 + 0x28));
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (*(TReferenceControllerBase<1> **)(pFVar19 + 0x18));
            iVar12 = (param_1->AxisKeyBindings).ArrayNum + ~uVar16;
            if (iVar12 != 0) {
              memmove(pFVar19,pFVar19 + 0x40,(longlong)iVar12 << 6);
            }
            piVar2 = &(param_1->AxisKeyBindings).ArrayNum;
            *piVar2 = *piVar2 + -1;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40,8,&pTVar3->AllocatorInstance,(param_1->AxisKeyBindings).ArrayNum,
                       &(param_1->AxisKeyBindings).ArrayMax);
          }
          lVar22 = lVar22 + -0x40;
          uVar16 = uVar16 - 1;
          uVar18 = local_res20;
        } while (-1 < (int)uVar16);
      }
      if (((local_c8.Data <= (FInputAxisKeyBinding *)local_b8) &&
          ((FScriptContainerElement *)local_b8 < local_c8.Data + (longlong)(int)local_bc * 0x40)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (local_c0 == local_bc) {
        local_c0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x840,&local_c8,(int *)&local_bc);
      }
      lVar22 = (longlong)(int)local_c0 * 0x40;
      local_c8.Data[lVar22].field_0x0 = local_b8[0];
      *(undefined4 *)(local_c8.Data + lVar22 + 4) = local_b8._4_4_;
      ((FName *)(local_c8.Data + lVar22 + 8))->ComparisonIndex = (FNameEntryId)local_b8._8_4_;
      ((FName *)(local_c8.Data + lVar22 + 8))->Number = local_b8._12_4_;
      *(undefined8 *)(local_c8.Data + lVar22 + 0x10) = local_b8._16_8_;
      *(undefined8 *)(local_c8.Data + lVar22 + 0x18) = local_b8._24_8_;
      if ((TReferenceControllerBase<1> *)local_b8._24_8_ != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *(atomic<int> *)(local_b8._24_8_ + 8) =
             (atomic<int>)((int)*(atomic<int> *)(local_b8._24_8_ + 8) + 1);
        UNLOCK();
      }
      *(undefined8 *)(local_c8.Data + lVar22 + 0x20) = local_b8._32_8_;
      *(TReferenceControllerBase<1> **)(local_c8.Data + lVar22 + 0x28) = pTStack_90;
      if (pTStack_90 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_90->SharedReferenceCount = (atomic<int>)((int)pTStack_90->SharedReferenceCount + 1);
        UNLOCK();
      }
      *(TReferenceControllerBase<1> **)(local_c8.Data + lVar22 + 0x30) = local_88;
      *(TReferenceControllerBase<1> **)(local_c8.Data + lVar22 + 0x38) =
           FStack_80.ReferenceController;
      if (FStack_80.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FStack_80.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FStack_80.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_c0 = local_c0 + 1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_80.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_90);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_b8._24_8_);
      local_res20 = uVar18 + 1;
      uVar14 = (ulonglong)local_res20;
      uVar20 = uVar20 + 0x28;
    } while ((int)local_res20 < (this->InputAxisKeyDelegateBindings).ArrayNum);
    uVar14 = (ulonglong)local_c0;
  }
  uVar18 = 0;
  uVar16 = (uint)uVar14;
  if (0 < (int)(uint)uVar14) {
    pTVar3 = &param_1->AxisKeyBindings;
    lVar22 = 0;
    do {
      uVar16 = 0;
      if ((int)uVar18 < (int)uVar14) {
        uVar16 = ~uVar18 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar19 = (pTVar3->AllocatorInstance).Data;
      pFVar15 = local_c8.Data + lVar22;
      if (((pFVar19 <= pFVar15) &&
          (pFVar15 < pFVar19 + (longlong)(param_1->AxisKeyBindings).ArrayMax * 0x40)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar12 = (param_1->AxisKeyBindings).ArrayNum;
      if (iVar12 == (param_1->AxisKeyBindings).ArrayMax) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x840,&pTVar3->AllocatorInstance,&(param_1->AxisKeyBindings).ArrayMax);
      }
      pFVar19 = (pTVar3->AllocatorInstance).Data;
      (param_1->AxisKeyBindings).ArrayNum = iVar12 + 1;
      lVar13 = (longlong)iVar12 * 0x40;
      pFVar19[lVar13] = *pFVar15;
      *(undefined4 *)(pFVar19 + lVar13 + 4) = *(undefined4 *)(pFVar15 + 4);
      *(undefined8 *)(pFVar19 + lVar13 + 8) = *(undefined8 *)(pFVar15 + 8);
      *(undefined8 *)(pFVar19 + lVar13 + 0x10) = *(undefined8 *)(pFVar15 + 0x10);
      lVar6 = *(longlong *)(pFVar15 + 0x18);
      *(longlong *)(pFVar19 + lVar13 + 0x18) = lVar6;
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
        UNLOCK();
      }
      *(undefined8 *)(pFVar19 + lVar13 + 0x20) = *(undefined8 *)(pFVar15 + 0x20);
      lVar6 = *(longlong *)(pFVar15 + 0x28);
      *(longlong *)(pFVar19 + lVar13 + 0x28) = lVar6;
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
        UNLOCK();
      }
      *(undefined8 *)(pFVar19 + lVar13 + 0x30) = *(undefined8 *)(pFVar15 + 0x30);
      lVar6 = *(longlong *)(pFVar15 + 0x38);
      *(longlong *)(pFVar19 + lVar13 + 0x38) = lVar6;
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
        UNLOCK();
      }
      uVar14 = (ulonglong)local_c0;
      uVar18 = uVar18 + 1;
      lVar22 = lVar22 + 0x40;
      uVar16 = local_c0;
    } while ((int)uVar18 < (int)local_c0);
  }
  DestructItems<FInputAxisKeyBinding,int>((FInputAxisKeyBinding *)local_c8.Data,uVar16);
  if ((FInputAxisKeyBinding *)local_c8.Data != (FInputAxisKeyBinding *)0x0) {
    FMemory::Free(local_c8.Data);
  }
  return;
}

// GetPrivateStaticClass @ 147d0c7a0

UClass * __cdecl UInputAxisKeyDelegateBinding::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputAxisKeyDelegateBinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"InputAxisKeyDelegateBinding",
               &Z_Registration_Info_UClass_UInputAxisKeyDelegateBinding.InnerSingleton,
               StaticRegisterNativesUInputAxisKeyDelegateBinding,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInputAxisKeyDelegateBinding>,
               InternalVTableHelperCtorCaller<UInputAxisKeyDelegateBinding>,local_res8,
               UInputDelegateBinding::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputAxisKeyDelegateBinding.InnerSingleton;
}

// StaticRegisterNativesUInputAxisKeyDelegateBinding @ 147d32930

void __cdecl UInputAxisKeyDelegateBinding::StaticRegisterNativesUInputAxisKeyDelegateBinding(void)

{
  return;
}

