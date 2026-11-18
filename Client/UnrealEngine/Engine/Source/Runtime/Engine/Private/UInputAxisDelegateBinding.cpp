// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 147cae830

UClass * __cdecl UInputAxisDelegateBinding::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputAxisDelegateBinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"InputAxisDelegateBinding",
               &Z_Registration_Info_UClass_UInputAxisDelegateBinding.InnerSingleton,
               StaticRegisterNativesUInputAxisDelegateBinding,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UInputAxisDelegateBinding>,
               InternalVTableHelperCtorCaller<UInputAxisDelegateBinding>,local_res8,
               UInputDelegateBinding::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputAxisDelegateBinding.InnerSingleton;
}

// UInputAxisDelegateBinding @ 147cc6a80

UInputAxisDelegateBinding * __thiscall
UInputAxisDelegateBinding::UInputAxisDelegateBinding
          (UInputAxisDelegateBinding *this,FVTableHelper *param_1)

{
  UDynamicBlueprintBinding::UDynamicBlueprintBinding((UDynamicBlueprintBinding *)this,param_1);
  this->_padding_ = (longlong)&___7UInputAxisDelegateBinding__6B_;
  (this->InputAxisDelegateBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputAxisDelegateBindings).ArrayNum = 0;
  (this->InputAxisDelegateBindings).ArrayMax = 0;
  return this;
}

// UInputAxisDelegateBinding @ 147cc6ac0

UInputAxisDelegateBinding * __thiscall
UInputAxisDelegateBinding::UInputAxisDelegateBinding
          (UInputAxisDelegateBinding *this,FObjectInitializer *param_1)

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
  this->_padding_ = (longlong)&___7UInputAxisDelegateBinding__6B_;
  (this->InputAxisDelegateBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputAxisDelegateBindings).ArrayNum = 0;
  (this->InputAxisDelegateBindings).ArrayMax = 0;
  return this;
}

// ~UInputAxisDelegateBinding @ 147cc95e0

void __thiscall
UInputAxisDelegateBinding::~UInputAxisDelegateBinding(UInputAxisDelegateBinding *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInputAxisDelegateBinding__6B_;
  pFVar1 = (this->InputAxisDelegateBindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UInputDelegateBinding__6B_;
  UDynamicBlueprintBinding::~UDynamicBlueprintBinding((UDynamicBlueprintBinding *)this);
  return;
}

// BindToInputComponent @ 147cd9890

void __thiscall
UInputAxisDelegateBinding::BindToInputComponent
          (UInputAxisDelegateBinding *this,UInputComponent *param_1,UObject *param_2)

{
  int *piVar1;
  atomic<unsigned___int64> aVar2;
  longlong lVar3;
  code *pcVar4;
  FSharedReferencer<1> FVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  TReferenceControllerBase<1> *pTVar9;
  longlong lVar10;
  ulonglong uVar11;
  TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *pTVar12;
  FScriptContainerElement *pFVar13;
  FInputAxisHandlerDynamicSignature *pFVar14;
  TArray<FInputAxisBinding,TSizedDefaultAllocator<32>_> *pTVar15;
  uint uVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  ulonglong uVar19;
  FScriptContainerElement *pFVar20;
  TReferenceControllerBase<1> *pTVar21;
  longlong lVar22;
  undefined1 local_res20 [8];
  ForAnyElementType local_128;
  uint local_120;
  uint local_11c;
  uint local_118;
  undefined1 local_110 [24];
  TReferenceControllerBase<1> *local_f8;
  TReferenceControllerBase<1> *pTStack_f0;
  FSharedReferencer<1> local_e8;
  float local_e0;
  undefined8 local_d8;
  FSharedReferencer<1> local_d0;
  UObject *local_c8;
  FDestructionSentinel local_c0;
  FReadAccessScope local_a8;
  FReadAccessScope local_90;
  FReadAccessScope local_78;
  FReadAccessScope local_60;
  
  uVar11 = 0;
  local_120 = 0;
  local_128.Data = (FScriptContainerElement *)0x0;
  local_11c = 0;
  local_118 = 0;
  uVar19 = uVar11;
  if (0 < (this->InputAxisDelegateBindings).ArrayNum) {
    do {
      uVar16 = 0;
      if ((int)(uint)uVar11 < (this->InputAxisDelegateBindings).ArrayNum) {
        uVar16 = ~(uint)uVar11 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar13 = (this->InputAxisDelegateBindings).AllocatorInstance.Data;
      if (*(longlong *)(pFVar13 + uVar19 + 0xc) == 0) {
        iVar8 = (param_1->AxisBindings).ArrayNum;
        pFVar18 = (param_1->AxisBindings).AllocatorInstance.Data;
        pFVar20 = pFVar18 + (longlong)iVar8 * 0x38;
        do {
          if ((param_1->AxisBindings).ArrayNum != iVar8) {
            local_res20[0] = 0;
            `TCheckedPointerIterator<FInputAxisBinding,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res20);
          }
          if (pFVar18 == pFVar20) break;
          if (*(longlong *)(pFVar13 + uVar19 + 4) == *(longlong *)(pFVar18 + 4)) {
            pFVar14 = &TInputUnifiedDelegate<TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>,FInputAxisHandlerDynamicSignature>
                       ::UnboundDynamicDelegate;
            if (*(FInputAxisHandlerDynamicSignature **)(pFVar18 + 0x20) !=
                (FInputAxisHandlerDynamicSignature *)0x0) {
              pFVar14 = *(FInputAxisHandlerDynamicSignature **)(pFVar18 + 0x20);
            }
            pTVar12 = &TInputUnifiedDelegate<TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>,FInputAxisHandlerDynamicSignature>
                       ::UnboundDelegate;
            if (*(TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> **)(pFVar18 + 0x10) !=
                (TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *)0x0) {
              pTVar12 = *(TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> **)
                         (pFVar18 + 0x10);
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar12,&local_a8);
            if (((*(int *)&pTVar12->field_0x10 == 0) ||
                (*(longlong **)&pTVar12->field_0x8 == (longlong *)0x0)) ||
               (cVar7 = (**(code **)(**(longlong **)&pTVar12->field_0x8 + 0x38))(), cVar7 == '\0'))
            {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_a8);
            if (!bVar6) {
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pFVar14,&local_90
                        );
              lVar22 = *(longlong *)&pFVar14->field_0x10;
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
              ~FReadAccessScope(&local_90);
              if (lVar22 == 0) goto LAB_147cd9e82;
            }
          }
          pFVar18 = pFVar18 + 0x38;
        } while( true );
      }
      local_110._4_8_ = *(FName *)(pFVar13 + uVar19 + 4);
      aVar2 = *(atomic<unsigned___int64> *)&pFVar13[uVar19 + 0xc].field_0x0;
      local_e8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_e0 = 0.0;
      local_110._16_8_ = 0;
      local_110[0] = (FScriptContainerElement)
                     (((byte)(*(uint *)(pFVar13 + uVar19) >> 1) & 1) * '\x02' |
                      (byte)*(uint *)(pFVar13 + uVar19) & 1 | (byte)local_110[0] & 0xfc);
      local_f8 = (TReferenceControllerBase<1> *)0x0;
      pTStack_f0 = (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      pTVar9 = ::operator_new(0x28);
      if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
        pTVar21 = (TReferenceControllerBase<1> *)&DAT_00000010;
        local_d0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        pTVar9->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFInputAxisHandlerDynamicSignature___00_SharedPointerInternals__6B_
        ;
        pTVar21 = pTVar9 + 1;
        pTVar9[1]._padding_ = 0;
        pTVar9->SharedReferenceCount = (atomic<int>)0x1;
        pTVar9->WeakReferenceCount = (atomic<int>)0x1;
        pTVar9[1].SharedReferenceCount = (atomic<int>)0x0;
        pTVar9[1].WeakReferenceCount = (atomic<int>)0x0;
        pTVar9[2]._padding_ = 0;
        if ((pTVar21 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        LOCK();
        pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
        UNLOCK();
        local_d0.ReferenceController = pTVar9;
      }
      FVar5.ReferenceController = local_d0.ReferenceController;
      local_d8 = 0;
      pTStack_f0 = pTVar21;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_e8,&local_d0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_d0.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar5.ReferenceController);
      if ((pTStack_f0 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar9 = pTStack_f0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTStack_f0,
                 (FWriteAccessScope *)&local_c0);
      local_c8 = param_2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(param_2);
      }
      FWeakObjectPtr::operator=
                ((FWeakObjectPtr *)&pTVar9->SharedReferenceCount,(FObjectPtr)&local_c8);
      ((FMRSWRecursiveAccessDetector *)&pTVar9[1]._padding_)->State = aVar2;
      if (local_c0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c0.Accessor,&local_c0);
      }
      if ((((byte)pFVar13[uVar19] & 4) != 0) &&
         (uVar16 = (param_1->AxisBindings).ArrayNum - 1, -1 < (int)uVar16)) {
        pTVar15 = &param_1->AxisBindings;
        lVar22 = (longlong)(int)uVar16 * 0x38;
        do {
          uVar17 = 0;
          if ((int)uVar16 < (param_1->AxisBindings).ArrayNum) {
            uVar17 = ~uVar16 >> 0x1f;
          }
          if ((uVar17 == 0) &&
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
          pFVar13 = (pTVar15->AllocatorInstance).Data;
          if (*(FName *)(pFVar13 + lVar22 + 4) == (FName)local_110._4_8_) {
            pFVar14 = &TInputUnifiedDelegate<TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>,FInputAxisHandlerDynamicSignature>
                       ::UnboundDynamicDelegate;
            if (*(FInputAxisHandlerDynamicSignature **)(pFVar13 + lVar22 + 0x20) !=
                (FInputAxisHandlerDynamicSignature *)0x0) {
              pFVar14 = *(FInputAxisHandlerDynamicSignature **)(pFVar13 + lVar22 + 0x20);
            }
            pTVar12 = &TInputUnifiedDelegate<TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>,FInputAxisHandlerDynamicSignature>
                       ::UnboundDelegate;
            if (*(TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> **)
                 (pFVar13 + lVar22 + 0x10) !=
                (TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *)0x0) {
              pTVar12 = *(TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> **)
                         (pFVar13 + lVar22 + 0x10);
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar12,&local_78);
            if (((*(int *)&pTVar12->field_0x10 == 0) ||
                (*(longlong **)&pTVar12->field_0x8 == (longlong *)0x0)) ||
               (cVar7 = (**(code **)(**(longlong **)&pTVar12->field_0x8 + 0x38))(), cVar7 == '\0'))
            {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_78);
            if (!bVar6) {
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pFVar14,&local_60
                        );
              lVar3 = *(longlong *)&pFVar14->field_0x10;
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
              ~FReadAccessScope(&local_60);
              if (lVar3 == 0) goto LAB_147cd9d65;
            }
            uVar17 = 0;
            if ((int)uVar16 < (param_1->AxisBindings).ArrayNum) {
              uVar17 = ~uVar16 >> 0x1f;
            }
            if ((uVar17 == 0) &&
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
            pFVar13 = (pTVar15->AllocatorInstance).Data + lVar22;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (*(TReferenceControllerBase<1> **)(pFVar13 + 0x28));
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (*(TReferenceControllerBase<1> **)(pFVar13 + 0x18));
            iVar8 = ~uVar16 + (param_1->AxisBindings).ArrayNum;
            if (iVar8 != 0) {
              memmove(pFVar13,pFVar13 + 0x38,(longlong)iVar8 * 0x38);
            }
            piVar1 = &(param_1->AxisBindings).ArrayNum;
            *piVar1 = *piVar1 + -1;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,&pTVar15->AllocatorInstance,(param_1->AxisBindings).ArrayNum,
                       &(param_1->AxisBindings).ArrayMax);
          }
LAB_147cd9d65:
          lVar22 = lVar22 + -0x38;
          uVar16 = uVar16 - 1;
        } while (-1 < (int)uVar16);
      }
      if (((local_128.Data <= (FInputAxisBinding *)local_110) &&
          ((FScriptContainerElement *)local_110 < local_128.Data + (longlong)(int)local_11c * 0x38))
         && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (local_120 == local_11c) {
        local_120 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x838,&local_128,(int *)&local_11c);
      }
      lVar22 = (longlong)(int)local_120 * 0x38;
      local_128.Data[lVar22] = local_110[0];
      ((FName *)(local_128.Data + lVar22 + 4))->ComparisonIndex = (FNameEntryId)local_110._4_4_;
      ((FName *)(local_128.Data + lVar22 + 4))->Number = local_110._8_4_;
      *(undefined8 *)(local_128.Data + lVar22 + 0x10) = local_110._16_8_;
      *(TReferenceControllerBase<1> **)(local_128.Data + lVar22 + 0x18) = local_f8;
      if (local_f8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_f8->SharedReferenceCount = (atomic<int>)((int)local_f8->SharedReferenceCount + 1);
        UNLOCK();
      }
      *(TReferenceControllerBase<1> **)(local_128.Data + lVar22 + 0x20) = pTStack_f0;
      *(TReferenceControllerBase<1> **)(local_128.Data + lVar22 + 0x28) =
           local_e8.ReferenceController;
      if (local_e8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_e8.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_e8.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      *(float *)(local_128.Data + lVar22 + 0x30) = local_e0;
      local_120 = local_120 + 1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_e8.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_f8);
LAB_147cd9e82:
      local_118 = local_118 + 1;
      uVar11 = (ulonglong)local_118;
      uVar19 = uVar19 + 0x14;
    } while ((int)local_118 < (this->InputAxisDelegateBindings).ArrayNum);
    uVar11 = (ulonglong)local_120;
  }
  uVar17 = 0;
  uVar16 = (uint)uVar11;
  if (0 < (int)(uint)uVar11) {
    pTVar15 = &param_1->AxisBindings;
    lVar22 = 0;
    do {
      uVar16 = 0;
      if ((int)uVar17 < (int)uVar11) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar13 = (pTVar15->AllocatorInstance).Data;
      pFVar18 = local_128.Data + lVar22;
      if (((pFVar13 <= pFVar18) &&
          (pFVar18 < pFVar13 + (longlong)(param_1->AxisBindings).ArrayMax * 0x38)) &&
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
      iVar8 = (param_1->AxisBindings).ArrayNum;
      if (iVar8 == (param_1->AxisBindings).ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x838,&pTVar15->AllocatorInstance,&(param_1->AxisBindings).ArrayMax);
      }
      pFVar13 = (pTVar15->AllocatorInstance).Data;
      (param_1->AxisBindings).ArrayNum = iVar8 + 1;
      lVar10 = (longlong)iVar8 * 0x38;
      pFVar13[lVar10] = *pFVar18;
      *(undefined8 *)(pFVar13 + lVar10 + 4) = *(undefined8 *)(pFVar18 + 4);
      *(undefined8 *)(pFVar13 + lVar10 + 0x10) = *(undefined8 *)(pFVar18 + 0x10);
      lVar3 = *(longlong *)(pFVar18 + 0x18);
      *(longlong *)(pFVar13 + lVar10 + 0x18) = lVar3;
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        UNLOCK();
      }
      *(undefined8 *)(pFVar13 + lVar10 + 0x20) = *(undefined8 *)(pFVar18 + 0x20);
      lVar3 = *(longlong *)(pFVar18 + 0x28);
      *(longlong *)(pFVar13 + lVar10 + 0x28) = lVar3;
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        UNLOCK();
      }
      uVar17 = uVar17 + 1;
      *(undefined4 *)(pFVar13 + lVar10 + 0x30) = *(undefined4 *)(pFVar18 + 0x30);
      lVar22 = lVar22 + 0x38;
      uVar11 = (ulonglong)local_120;
      uVar16 = local_120;
    } while ((int)uVar17 < (int)local_120);
  }
  DestructItems<FInputAxisBinding,int>((FInputAxisBinding *)local_128.Data,uVar16);
  if ((FInputAxisBinding *)local_128.Data != (FInputAxisBinding *)0x0) {
    FMemory::Free(local_128.Data);
  }
  return;
}

// GetPrivateStaticClass @ 147d0c6e0

UClass * __cdecl UInputAxisDelegateBinding::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputAxisDelegateBinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"InputAxisDelegateBinding",
               &Z_Registration_Info_UClass_UInputAxisDelegateBinding.InnerSingleton,
               StaticRegisterNativesUInputAxisDelegateBinding,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UInputAxisDelegateBinding>,
               InternalVTableHelperCtorCaller<UInputAxisDelegateBinding>,local_res8,
               UInputDelegateBinding::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputAxisDelegateBinding.InnerSingleton;
}

// StaticRegisterNativesUInputAxisDelegateBinding @ 147d32920

void __cdecl UInputAxisDelegateBinding::StaticRegisterNativesUInputAxisDelegateBinding(void)

{
  return;
}

