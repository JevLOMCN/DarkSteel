// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 147ca97d0

UClass * __cdecl UInputVectorAxisDelegateBinding::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputVectorAxisDelegateBinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"InputVectorAxisDelegateBinding",
               &Z_Registration_Info_UClass_UInputVectorAxisDelegateBinding.InnerSingleton,
               StaticRegisterNativesUInputVectorAxisDelegateBinding,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInputVectorAxisDelegateBinding>,
               InternalVTableHelperCtorCaller<UInputVectorAxisDelegateBinding>,local_res8,
               UInputAxisKeyDelegateBinding::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputVectorAxisDelegateBinding.InnerSingleton;
}

// UInputVectorAxisDelegateBinding @ 147cc6e30

UInputVectorAxisDelegateBinding * __thiscall
UInputVectorAxisDelegateBinding::UInputVectorAxisDelegateBinding
          (UInputVectorAxisDelegateBinding *this,FVTableHelper *param_1)

{
  UDynamicBlueprintBinding::UDynamicBlueprintBinding((UDynamicBlueprintBinding *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined ***)this = &___7UInputVectorAxisDelegateBinding__6B_;
  return this;
}

// UInputVectorAxisDelegateBinding @ 147cc6e70

UInputVectorAxisDelegateBinding * __thiscall
UInputVectorAxisDelegateBinding::UInputVectorAxisDelegateBinding
          (UInputVectorAxisDelegateBinding *this,FObjectInitializer *param_1)

{
  UInputAxisKeyDelegateBinding::UInputAxisKeyDelegateBinding
            ((UInputAxisKeyDelegateBinding *)this,param_1);
  *(undefined ***)this = &___7UInputVectorAxisDelegateBinding__6B_;
  return this;
}

// ~UInputVectorAxisDelegateBinding @ 147cc9740

void __thiscall
UInputVectorAxisDelegateBinding::~UInputVectorAxisDelegateBinding
          (UInputVectorAxisDelegateBinding *this)

{
  *(undefined ***)this = &___7UInputAxisKeyDelegateBinding__6B_;
  DestructItems<FBlueprintInputAxisKeyDelegateBinding,int>
            (*(FBlueprintInputAxisKeyDelegateBinding **)&this->field_0x28,*(int *)&this->field_0x30)
  ;
  if (*(void **)&this->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x28);
  }
  *(undefined ***)this = &___7UInputDelegateBinding__6B_;
  UDynamicBlueprintBinding::~UDynamicBlueprintBinding((UDynamicBlueprintBinding *)this);
  return;
}

// BindToInputComponent @ 147cdb680

void __thiscall
UInputVectorAxisDelegateBinding::BindToInputComponent
          (UInputVectorAxisDelegateBinding *this,UInputComponent *param_1,UObject *param_2)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  atomic<unsigned___int64> aVar4;
  FInputVectorAxisBinding *pFVar5;
  code *pcVar6;
  FSharedReferencer<1> FVar7;
  bool bVar8;
  uint uVar9;
  TReferenceControllerBase<1> *pTVar10;
  byte bVar11;
  int iVar12;
  uint uVar13;
  FInputVectorAxisBinding *pFVar14;
  uint uVar15;
  FScriptContainerElement *_Dst;
  TArray<FInputVectorAxisBinding,TSizedDefaultAllocator<32>_> *pTVar16;
  uint uVar17;
  TReferenceControllerBase<1> *pTVar18;
  longlong lVar19;
  uint *puVar20;
  longlong local_res20;
  ForAnyElementType local_e8;
  int local_e0;
  int local_dc;
  undefined1 local_d8 [64];
  TReferenceControllerBase<1> *local_98;
  TReferenceControllerBase<1> *pTStack_90;
  FSharedReferencer<1> local_88 [2];
  undefined8 local_78;
  FSharedReferencer<1> local_70;
  UObject *local_68;
  FDestructionSentinel local_60;
  
  uVar17 = 0;
  local_e0 = 0;
  local_e8.Data = (FScriptContainerElement *)0x0;
  local_dc = 0;
  if (0 < *(int *)&this->field_0x30) {
    local_res20 = 0;
    do {
      uVar13 = 0;
      if ((int)uVar17 < *(int *)&this->field_0x30) {
        uVar13 = ~uVar17 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      puVar20 = (uint *)(*(longlong *)&this->field_0x28 + local_res20);
      pTVar10 = *(TReferenceControllerBase<1> **)(puVar20 + 6);
      local_d8._32_8_ = *(FName *)(puVar20 + 2);
      local_d8._40_8_ = *(undefined8 *)(puVar20 + 4);
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_d8[0] = local_d8[0] & 0xfd | 1;
      local_d8._56_8_ = 0;
      local_98 = (TReferenceControllerBase<1> *)0x0;
      pTStack_90 = (TReferenceControllerBase<1> *)0x0;
      local_88[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_d8._48_8_ = pTVar10;
      bVar8 = FKey::IsAxis2D((FKey *)(local_d8 + 0x20));
      if (((!bVar8) && (bVar8 = FKey::IsAxis3D((FKey *)(local_d8 + 0x20)), !bVar8)) &&
         (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_2256005067704368537>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Components\\InputComponent.h"
                             ,0x267,"AxisKey.IsAxis2D() || AxisKey.IsAxis3D()"), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
      pTVar10 = local_98;
      bVar11 = (byte)*puVar20 & 1 | local_d8[0] & 0xfe;
      local_d8[0] = ((char)(*puVar20 >> 1) * '\x02' ^ bVar11) & 2 ^ bVar11;
      aVar4 = *(atomic<unsigned___int64> *)(puVar20 + 8);
      local_d8._56_8_ = 0;
      if (local_98 != (TReferenceControllerBase<1> *)0x0) {
        local_98 = (TReferenceControllerBase<1> *)0x0;
        LOCK();
        paVar1 = &pTVar10->SharedReferenceCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)pTVar10->_padding_)();
          LOCK();
          paVar1 = &pTVar10->WeakReferenceCount;
          aVar3 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar3 == (atomic<int>)0x1) {
            (**(code **)(pTVar10->_padding_ + 8))(pTVar10,1);
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      pTVar10 = ::operator_new(0x28);
      if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
        pTVar18 = (TReferenceControllerBase<1> *)&DAT_00000010;
        local_70.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        pTVar10->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFInputVectorAxisHandlerDynamicSignature___00_SharedPointerInternals__6B_
        ;
        pTVar18 = pTVar10 + 1;
        pTVar10[1]._padding_ = 0;
        pTVar10->SharedReferenceCount = (atomic<int>)0x1;
        pTVar10->WeakReferenceCount = (atomic<int>)0x1;
        pTVar10[1].SharedReferenceCount = (atomic<int>)0x0;
        pTVar10[1].WeakReferenceCount = (atomic<int>)0x0;
        pTVar10[2]._padding_ = 0;
        if ((pTVar18 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        LOCK();
        pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
        UNLOCK();
        local_70.ReferenceController = pTVar10;
      }
      FVar7.ReferenceController = local_70.ReferenceController;
      local_78 = 0;
      pTStack_90 = pTVar18;
      SharedPointerInternals::FSharedReferencer<1>::operator=(local_88,&local_70);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_70.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar7.ReferenceController);
      if ((pTStack_90 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pTVar10 = pTStack_90;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTStack_90,
                 (FWriteAccessScope *)&local_60);
      local_68 = param_2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(param_2);
      }
      FWeakObjectPtr::operator=
                ((FWeakObjectPtr *)&pTVar10->SharedReferenceCount,(FObjectPtr)&local_68);
      ((FMRSWRecursiveAccessDetector *)&pTVar10[1]._padding_)->State = aVar4;
      if (local_60.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
      }
      if (((*puVar20 & 4) != 0) &&
         (uVar13 = (param_1->VectorAxisBindings).ArrayNum - 1, -1 < (int)uVar13)) {
        pTVar16 = &param_1->VectorAxisBindings;
        lVar19 = (longlong)(int)uVar13 * 0x58;
        do {
          uVar15 = ~uVar13 >> 0x1f;
          uVar9 = 0;
          if ((int)uVar13 < (param_1->VectorAxisBindings).ArrayNum) {
            uVar9 = uVar15;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (*(FName *)((pTVar16->AllocatorInstance).Data + lVar19 + 0x20) ==
              (FName)local_d8._32_8_) {
            uVar9 = 0;
            if ((int)uVar13 < (param_1->VectorAxisBindings).ArrayNum) {
              uVar9 = uVar15;
            }
            if ((uVar9 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            _Dst = (pTVar16->AllocatorInstance).Data + lVar19;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (*(TReferenceControllerBase<1> **)(_Dst + 0x50));
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (*(TReferenceControllerBase<1> **)(_Dst + 0x40));
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (*(TReferenceControllerBase<1> **)(_Dst + 0x30));
            iVar12 = (param_1->VectorAxisBindings).ArrayNum + ~uVar13;
            if (iVar12 != 0) {
              memmove(_Dst,_Dst + 0x58,(longlong)iVar12 * 0x58);
            }
            piVar2 = &(param_1->VectorAxisBindings).ArrayNum;
            *piVar2 = *piVar2 + -1;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x58,8,&pTVar16->AllocatorInstance,(param_1->VectorAxisBindings).ArrayNum,
                       &(param_1->VectorAxisBindings).ArrayMax);
          }
          lVar19 = lVar19 + -0x58;
          uVar13 = uVar13 - 1;
        } while (-1 < (int)uVar13);
      }
      if (((local_e8.Data <= (FInputVectorAxisBinding *)local_d8) &&
          ((FScriptContainerElement *)local_d8 < local_e8.Data + (longlong)local_dc * 0x58)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (local_e0 == local_dc) {
        local_e0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x858,&local_e8,&local_dc);
      }
      lVar19 = (longlong)local_e0 * 0x58;
      local_e8.Data[lVar19].field_0x0 = local_d8[0];
      *(undefined8 *)(local_e8.Data + lVar19 + 8) = local_d8._8_8_;
      *(undefined8 *)(local_e8.Data + lVar19 + 8 + 8) = local_d8._16_8_;
      *(undefined8 *)(local_e8.Data + lVar19 + 0x18) = local_d8._24_8_;
      ((FName *)(local_e8.Data + lVar19 + 0x20))->ComparisonIndex = (FNameEntryId)local_d8._32_4_;
      ((FName *)(local_e8.Data + lVar19 + 0x20))->Number = local_d8._36_4_;
      *(undefined8 *)(local_e8.Data + lVar19 + 0x28) = local_d8._40_8_;
      *(undefined8 *)(local_e8.Data + lVar19 + 0x30) = local_d8._48_8_;
      if ((TReferenceControllerBase<1> *)local_d8._48_8_ != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *(atomic<int> *)(local_d8._48_8_ + 8) =
             (atomic<int>)((int)*(atomic<int> *)(local_d8._48_8_ + 8) + 1);
        UNLOCK();
      }
      *(undefined8 *)(local_e8.Data + lVar19 + 0x38) = local_d8._56_8_;
      *(TReferenceControllerBase<1> **)(local_e8.Data + lVar19 + 0x40) = local_98;
      if (local_98 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_98->SharedReferenceCount = (atomic<int>)((int)local_98->SharedReferenceCount + 1);
        UNLOCK();
      }
      *(TReferenceControllerBase<1> **)(local_e8.Data + lVar19 + 0x48) = pTStack_90;
      *(TReferenceControllerBase<1> **)(local_e8.Data + lVar19 + 0x50) =
           local_88[0].ReferenceController;
      if (local_88[0].ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_88[0].ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_88[0].ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_e0 = local_e0 + 1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_88[0].ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_98);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_d8._48_8_);
      local_res20 = local_res20 + 0x28;
      uVar17 = uVar17 + 1;
    } while ((int)uVar17 < *(int *)&this->field_0x30);
  }
  uVar17 = 0;
  if (0 < local_e0) {
    pTVar16 = &param_1->VectorAxisBindings;
    do {
      uVar13 = 0;
      if ((int)uVar17 < local_e0) {
        uVar13 = ~uVar17 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (FInputVectorAxisBinding *)(pTVar16->AllocatorInstance).Data;
      pFVar14 = (FInputVectorAxisBinding *)(local_e8.Data + (longlong)(int)uVar17 * 0x58);
      if (((pFVar5 <= pFVar14) && (pFVar14 < pFVar5 + (param_1->VectorAxisBindings).ArrayMax)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar12 = (param_1->VectorAxisBindings).ArrayNum;
      if (iVar12 == (param_1->VectorAxisBindings).ArrayMax) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x858,&pTVar16->AllocatorInstance,
                            &(param_1->VectorAxisBindings).ArrayMax);
      }
      (param_1->VectorAxisBindings).ArrayNum = iVar12 + 1;
      FInputVectorAxisBinding::FInputVectorAxisBinding
                ((FInputVectorAxisBinding *)
                 ((pTVar16->AllocatorInstance).Data + (longlong)iVar12 * 0x58),pFVar14);
      uVar17 = uVar17 + 1;
    } while ((int)uVar17 < local_e0);
  }
  DestructItems<FInputVectorAxisBinding,int>((FInputVectorAxisBinding *)local_e8.Data,local_e0);
  if ((FInputVectorAxisBinding *)local_e8.Data != (FInputVectorAxisBinding *)0x0) {
    FMemory::Free(local_e8.Data);
  }
  return;
}

// GetPrivateStaticClass @ 147d0cb60

UClass * __cdecl UInputVectorAxisDelegateBinding::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputVectorAxisDelegateBinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"InputVectorAxisDelegateBinding",
               &Z_Registration_Info_UClass_UInputVectorAxisDelegateBinding.InnerSingleton,
               StaticRegisterNativesUInputVectorAxisDelegateBinding,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInputVectorAxisDelegateBinding>,
               InternalVTableHelperCtorCaller<UInputVectorAxisDelegateBinding>,local_res8,
               UInputAxisKeyDelegateBinding::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputVectorAxisDelegateBinding.InnerSingleton;
}

// StaticRegisterNativesUInputVectorAxisDelegateBinding @ 147d329b0

void __cdecl
UInputVectorAxisDelegateBinding::StaticRegisterNativesUInputVectorAxisDelegateBinding(void)

{
  return;
}

